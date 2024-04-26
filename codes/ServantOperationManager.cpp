void __fastcall ServantOperationManager___ctor(ServantOperationManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


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

  if ( (byte_4355C41 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_ServantOperationManager_ActionKind__long____long____Invoke__);
    byte_4355C41 = 1;
  }
  onSelect = this->fields.onSelect;
  p_onSelect = (BattleServantConfConponent_o *)&this->fields.onSelect;
  v13 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)onSelect;
  if ( onSelect )
  {
    p_onSelect->klass = 0LL;
    sub_B70630(
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
      (const MethodInfo_265B8F0 *)Method_System_Action_ServantOperationManager_ActionKind__long____long____Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__ChangeList(
        ServantOperationManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v6; // x9
  ServantOperationListViewManager_o *v7; // x21
  System_Action_bool__o *v8; // x22
  const MethodInfo *v9; // x2
  __int64 v10; // x20
  __int64 v11; // x9
  __int64 v12; // x10
  struct ServantOperationListViewManager_array *v13; // x8
  __int64 v14; // x9
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4355C34 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    this = (ServantOperationManager_o *)sub_B70694(&Method_ServantOperationListViewManager_EndClickTabStatus__);
    byte_4355C34 = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_16;
  v6 = v4->fields.kind;
  if ( (unsigned int)v6 >= servantOperationListViewManager->max_length )
    goto LABEL_23;
  v7 = servantOperationListViewManager->m_Items[v6];
  if ( !v7 )
    goto LABEL_16;
  if ( v7->fields.modeKind )
  {
    v8 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v8,
      (Il2CppObject *)v7,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(v7, v8, v9);
    servantOperationListViewManager = v4->fields.servantOperationListViewManager;
    v4->fields.kind = kind;
    if ( !servantOperationListViewManager )
      goto LABEL_16;
  }
  else
  {
    v4->fields.kind = kind;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(_QWORD *)&servantOperationListViewManager->max_length;
    if ( (int)v10 >= (int)v11 )
      break;
    if ( (unsigned int)v10 >= (unsigned int)v11 )
      goto LABEL_23;
    this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v10];
    if ( this )
    {
      this = (ServantOperationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (_DWORD)v10 == v4->fields.kind, 0LL);
        servantOperationListViewManager = v4->fields.servantOperationListViewManager;
        ++v10;
        if ( servantOperationListViewManager )
          continue;
      }
    }
    goto LABEL_16;
  }
  v12 = v4->fields.kind;
  if ( (unsigned int)v12 >= (unsigned int)v11 )
  {
LABEL_23:
    v15 = sub_B70798(this);
    sub_B70738(v15, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v12];
  if ( !this
    || (this = (ServantOperationManager_o *)((__int64 (__fastcall *)(ServantOperationManager_o *, void *))this->klass[1]._1.namespaze)(
                                              this,
                                              this->klass[1]._1.byval_arg.data),
        (v13 = v4->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_16:
    sub_B7076C(this, *(_QWORD *)&kind);
  }
  v14 = v4->fields.kind;
  if ( (unsigned int)v14 >= v13->max_length )
    goto LABEL_23;
  this = (ServantOperationManager_o *)v13->m_Items[v14];
  if ( !this )
    goto LABEL_16;
  ServantOperationListViewManager__SetFilterButtonImage(
    (ServantOperationListViewManager_o *)this,
    *(const MethodInfo **)&kind);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__ConfirmServantCheckEquipDialog(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x19
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  ServantCheckEquipDialog_ClickDelegate_o *v6; // x21

  v4 = this;
  if ( (byte_4355C39 & 1) == 0 )
  {
    sub_B70694(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    this = (ServantOperationManager_o *)sub_B70694(&Method_ServantOperationManager_EndServantCheckEquip__);
    byte_4355C39 = 1;
  }
  servantCheckEquipDialog = v4->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v6 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B70764(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    ServantCheckEquipDialog_ClickDelegate___ctor(
      v6,
      (Il2CppObject *)v4,
      Method_ServantOperationManager_EndServantCheckEquip__,
      0LL);
    if ( servantCheckEquipDialog )
    {
      ServantCheckEquipDialog__OpenShopLastCheck(servantCheckEquipDialog, v6, 0LL);
      return;
    }
LABEL_8:
    sub_B7076C(this, isDecide);
  }
  if ( !servantCheckEquipDialog )
    goto LABEL_8;
  ServantCheckEquipDialog__Close(v4->fields.servantCheckEquipDialog, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__CreateList(
        ServantOperationManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UILabel_o *qpDataLabel; // x21
  int32_t totalQP; // w22
  System_String_o *NumberFormat; // x0
  __int64 v8; // x1
  UILabel_o *mpDataLabel; // x21
  UILabel_o *rpDataLabel; // x21
  int32_t Count; // w21
  BalanceConfig_c *v12; // x0
  int ServantSellSelectMax; // w21
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v15; // x22
  __int64 v16; // x2
  Il2CppObject *v17; // x23
  __int64 v18; // x2
  Il2CppObject *v19; // x0
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  const MethodInfo *v21; // x3
  struct ServantOperationListViewManager_array *v22; // x8
  struct ServantOperationListViewManager_array *v23; // x8
  const MethodInfo *v24; // x3
  struct ServantOperationListViewManager_array *v25; // x8
  struct ServantOperationListViewManager_array *v26; // x8
  const MethodInfo *v27; // x3
  struct ServantOperationListViewManager_array *v28; // x8
  const MethodInfo *v29; // x2
  __int64 v30; // x0
  int32_t SelectMax_k__BackingField; // [xsp+0h] [xbp-40h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4355C33 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_12638/*"SUM_INFO"*/);
    byte_4355C33 = 1;
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
  NumberFormat = LocalizationManager__GetNumberFormat(this->fields.totalMana, 0LL);
  if ( !mpDataLabel )
    goto LABEL_47;
  UILabel__set_text(mpDataLabel, NumberFormat, 0LL);
  rpDataLabel = this->fields.rpDataLabel;
  NumberFormat = LocalizationManager__GetNumberFormat(this->fields.totalRarePri, 0LL);
  if ( !rpDataLabel )
    goto LABEL_47;
  UILabel__set_text(rpDataLabel, NumberFormat, 0LL);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !NumberFormat )
    goto LABEL_47;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)NumberFormat, 0LL);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !NumberFormat )
    goto LABEL_47;
  UserServantMaster__getCount((UserServantMaster_o *)NumberFormat, &servantEquipSum[1], servantEquipSum, 0, 0LL);
  v12 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + Count + servantEquipSum[0];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v12->static_fields->ServantSellSelectMax )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      ServantSellSelectMax = v12->static_fields->ServantSellSelectMax;
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
      }
    }
    else
    {
      ServantSellSelectMax = v12->static_fields->ServantSellSelectMax;
    }
  }
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12638/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField, v16);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v18);
  NumberFormat = System_String__Format_44753704(v15, v17, v19, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_47;
  UILabel__set_text(selectDoneLabel, NumberFormat, 0LL);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_47;
  if ( !servantOperationListViewManager->max_length )
    goto LABEL_48;
  NumberFormat = (System_String_o *)servantOperationListViewManager->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0LL);
  if ( !NumberFormat )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
  v22 = this->fields.servantOperationListViewManager;
  if ( !v22 )
    goto LABEL_47;
  if ( !v22->max_length )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v22->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 0, 0, v21);
  v23 = this->fields.servantOperationListViewManager;
  if ( !v23 )
    goto LABEL_47;
  if ( v23->max_length <= 1 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v23->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0LL);
  if ( !NumberFormat )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
  v25 = this->fields.servantOperationListViewManager;
  if ( !v25 )
    goto LABEL_47;
  if ( v25->max_length <= 1 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v25->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 1, 0, v24);
  v26 = this->fields.servantOperationListViewManager;
  if ( !v26 )
    goto LABEL_47;
  if ( v26->max_length <= 2 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v26->m_Items[2];
  if ( !NumberFormat
    || (NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)NumberFormat,
                                            0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL),
        (v28 = this->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_47:
    sub_B7076C(NumberFormat, v8);
  }
  if ( v28->max_length <= 2 )
  {
LABEL_48:
    v30 = sub_B70798(NumberFormat);
    sub_B70738(v30, 0LL);
  }
  NumberFormat = (System_String_o *)v28->m_Items[2];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 2, 0, v27);
  ServantOperationManager__ChangeList(this, kind, v29);
}


void __fastcall ServantOperationManager__DestroyList(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x19
  int max_length; // w8
  unsigned int v4; // w20
  __int64 v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_9;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v5 = sub_B70798(this);
        sub_B70738(v5, 0LL);
      }
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v4];
      if ( !this )
        break;
      ServantOperationListViewManager__DestroyList((ServantOperationListViewManager_o *)this, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_B7076C(this, method);
  }
}


void __fastcall ServantOperationManager__EndCloseSelectFilterKind(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantOperationManager__EndSelectFilterKind(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  __int64 v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B7076C(this, isDecide);
  ServantOperationListViewManager__EndSelectFilterKind((ServantOperationListViewManager_o *)this, isDecide, method);
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
    sub_B7076C(0LL, isDecide);
  ServantCheckEquipDialog__Close(servantCheckEquipDialog, 0LL);
  if ( isDecide )
    ServantOperationManager__SellCombineWarning(this, v6);
}


int64_t __fastcall ServantOperationManager__GetAmountSortValue(
        ServantOperationManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  __int64 v6; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B7076C(this, svtId);
  return ServantOperationListViewManager__GetAmountSortValue((ServantOperationListViewManager_o *)this, svtId, method);
}


System_Collections_Generic_List_int__o *__fastcall ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
  int32_t size; // w22
  System_Collections_Generic_List_int__o *v5; // x28
  UserServantEntity_array *AllList; // x23
  System_Collections_Generic_List_int__o *v7; // x21
  System_Collections_Generic_Dictionary_int__int__o *v8; // x22
  int32_t v9; // w8
  int32_t i; // w20
  ServantOperationListViewItem_o *v11; // x26
  int32_t v12; // w8
  int32_t SvtId_k__BackingField; // w24
  __int64 v14; // x28
  int32_t v15; // w25
  ServantOperationListViewItem_o *v16; // x8
  int32_t v17; // w9
  bool v18; // zf
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x24
  unsigned int v21; // w28
  UserServantEntity_o *v22; // x25
  __int64 v23; // x26
  __int64 v24; // x27
  __int64 v25; // x25
  __int64 v26; // x26
  int32_t v27; // w8
  unsigned int v28; // w20
  ServantOperationListViewItem_o *v29; // x9
  signed __int64 v30; // x8
  int32_t v31; // w23
  int v32; // w26
  unsigned __int64 v33; // x27
  int32_t v34; // w9
  __int64 v36; // x0
  System_Collections_Generic_List_int__o *v37; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4355C38 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantOperationManager_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355C38 = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_66;
  size = selectEquipedCommandCodeServantList->fields._size;
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_66;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v7 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B70764(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_2FBA5BC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v9 = selectEquipedCommandCodeServantList->fields._size;
    v37 = v5;
    if ( v9 >= 1 )
    {
      for ( i = 0; i < v9; ++i )
      {
        if ( v9 <= (unsigned int)i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v11 = selectEquipedCommandCodeServantList->fields._items->m_Items[i];
        if ( !v11 || !v8 )
          goto LABEL_66;
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                              v8,
                                              v11->fields._SvtId_k__BackingField,
                                              (const MethodInfo_2FBB3C4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v12 = selectEquipedCommandCodeServantList->fields._size;
          SvtId_k__BackingField = v11->fields._SvtId_k__BackingField;
          if ( v12 >= 1 )
          {
            v14 = 0LL;
            v15 = 0;
            while ( 1 )
            {
              if ( v12 <= (unsigned int)v14 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
              v16 = selectEquipedCommandCodeServantList->fields._items->m_Items[v14];
              if ( !v16 )
                break;
              v17 = v16->fields._SvtId_k__BackingField;
              v12 = selectEquipedCommandCodeServantList->fields._size;
              ++v14;
              v18 = SvtId_k__BackingField == v17;
              SvtId_k__BackingField = v11->fields._SvtId_k__BackingField;
              if ( v18 )
                ++v15;
              if ( (int)v14 >= v12 )
                goto LABEL_24;
            }
LABEL_66:
            sub_B7076C(this, selectEquipedCommandCodeServantList);
          }
          v15 = 0;
LABEL_24:
          System_Collections_Generic_Dictionary_int__int___Add(
            v8,
            SvtId_k__BackingField,
            v15,
            (const MethodInfo_2FBB160 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v9 = selectEquipedCommandCodeServantList->fields._size;
      }
    }
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_66;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
      v21 = 0;
      do
      {
        if ( v21 >= max_length )
        {
          v36 = sub_B70798(this);
          sub_B70738(v36, 0LL);
        }
        v22 = AllList->m_Items[v21];
        if ( !v22 )
          goto LABEL_66;
        v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v38.fields.currentCryptoKey = v24;
        *(_QWORD *)&v38.fields.fakeValue = v23;
        this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                              v38,
                                              0LL);
        if ( !v20 )
          goto LABEL_66;
        this = (ServantOperationManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v20,
                                              (int32_t)this,
                                              (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_66;
        this = (ServantOperationManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ServantOperationManager_o *)UserServantEntity__IsEventJoin(v22, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v26 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
            v25 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v39.fields.currentCryptoKey = v26;
            *(_QWORD *)&v39.fields.fakeValue = v25;
            this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                  v39,
                                                  0LL);
            if ( !v7 )
              goto LABEL_66;
            System_Collections_Generic_List_int___Add(
              v7,
              (int32_t)this,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v21 < max_length );
    }
    v27 = selectEquipedCommandCodeServantList->fields._size;
    v5 = v37;
    if ( v27 >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v27 <= v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v29 = selectEquipedCommandCodeServantList->fields._items->m_Items[v28];
        if ( !v29 || !v7 )
          goto LABEL_66;
        LODWORD(v30) = v7->fields._size;
        v31 = v29->fields._SvtId_k__BackingField;
        if ( (int)v30 < 1 )
        {
          v32 = 0;
          if ( !v8 )
            goto LABEL_66;
        }
        else
        {
          v32 = 0;
          v33 = 0LL;
          do
          {
            if ( v33 >= (unsigned int)v30 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v34 = v7->fields._items->m_Items[v33 + 1];
            v30 = v7->fields._size;
            ++v33;
            if ( v31 == v34 )
              ++v32;
          }
          while ( (__int64)v33 < v30 );
          if ( !v8 )
            goto LABEL_66;
        }
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v8,
                                              v31,
                                              (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v32 )
        {
          if ( !v37 )
            goto LABEL_66;
          System_Collections_Generic_List_int___Add(
            v37,
            v31,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v27 = selectEquipedCommandCodeServantList->fields._size;
        if ( (int)++v28 >= v27 )
          return v5;
      }
    }
  }
  return v5;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *__fastcall ServantOperationManager__GetSelectedEquipeCmdCardServantList(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v4; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( !servantOperationListViewManager->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[0];
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  return ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
           (ServantOperationListViewManager_o *)this,
           method);
}


int32_t __fastcall ServantOperationManager__GetSelectedOrderByCommandCodeId(
        ServantOperationManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( servantOperationListViewManager->max_length <= 2 )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[2];
  if ( !this )
LABEL_5:
    sub_B7076C(this, id);
  return ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
           (ServantOperationListViewManager_o *)this,
           id,
           method);
}


int32_t __fastcall ServantOperationManager__GetSelectedOrderByServantId(
        ServantOperationManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v6; // w21
  __int64 v7; // x0

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
        v7 = sub_B70798(this);
        sub_B70738(v7, 0LL);
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
    sub_B7076C(this, id);
  }
LABEL_9:
  LODWORD(this) = -1;
  return (int)this;
}


void __fastcall ServantOperationManager__Init(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0

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
        (allReleaseButton = this->fields.decideButton) == 0LL) )
  {
    sub_B7076C(allReleaseButton, method);
  }
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    3LL,
    0LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall ServantOperationManager__InitBackListView(ServantOperationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  Il2CppClass **v5; // x8
  ServantOperationListViewManager_o *v6; // x19
  const MethodInfo *v7; // x2
  __int64 v8; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v8 = sub_B70798(this);
    sub_B70738(v8, 0LL);
  }
  v5 = &servantOperationListViewManager->obj.klass + kind;
  v6 = (ServantOperationListViewManager_o *)v5[4];
  if ( !v6 )
LABEL_5:
    sub_B7076C(this, method);
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
  __int64 v5; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B7076C(this, selectedId);
  ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, selectedId, method);
}


void __fastcall ServantOperationManager__ModifyListItem(
        ServantOperationManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v6; // w21
  __int64 v7; // x0

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
        v7 = sub_B70798(this);
        sub_B70738(v7, 0LL);
      }
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, userSvtId, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_B7076C(this, userSvtId);
  }
}


void __fastcall ServantOperationManager__OnClickDecide(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ServantOperationListViewManager_o *SelectedServantIdList; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_long__o *v12; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_long__o *v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  System_Collections_Generic_List_long__o *v28; // x23
  struct ServantOperationListViewManager_array *v29; // x8
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x23
  struct ServantOperationListViewManager_array *v31; // x8
  System_Collections_Generic_List_long__o *selectUserCommandCodeIdList; // x23
  struct ServantOperationListViewManager_array *v33; // x8
  struct ServantOperationListViewManager_array *v34; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *v35; // x24
  System_Int32_array **EquipMaterialList; // x0
  System_Collections_Generic_List_ServantOperationListViewItem__o **v37; // x23
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  ServantOperationManager_o *v44; // x0
  const MethodInfo *v45; // x2
  int dropObjectList; // w8
  int v47; // w25
  Il2CppObject *current; // x24
  WebViewManager_o *Instance; // x0
  __int64 v50; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v52; // x1
  UserServantEntity_o *Entity; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x21
  System_String_o *v56; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCombineExpCampaign; // x0
  EventCampaignEntity_o *v58; // x8
  System_String_o *v59; // x0
  System_String_o *v60; // x21
  CommonUI_o *v61; // x22
  System_String_o *v62; // x23
  System_String_o *v63; // x24
  CommonConfirmDialog_ClickDelegate_o *v64; // x25
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v66; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v67; // x22
  int32_t v68; // w0
  const MethodInfo *v69; // x1
  __int64 v70; // x0
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+40h] [xbp-90h] BYREF
  int v73; // [xsp+5Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4355C37 & 1) == 0 )
  {
    sub_B70694(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__);
    sub_B70694(&ServantOperationManager___c__DisplayClass44_0_TypeInfo);
    sub_B70694(&StringLiteral_5845/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/);
    sub_B70694(&StringLiteral_3339/*"COMMON_CONFIRM_NO"*/);
    sub_B70694(&StringLiteral_3342/*"COMMON_CONFIRM_YES"*/);
    sub_B70694(&StringLiteral_5843/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4355C37 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  v73 = 0;
  v3 = sub_B70764(ServantOperationManager___c__DisplayClass44_0_TypeInfo);
  ServantOperationManager___c__DisplayClass44_0___ctor((ServantOperationManager___c__DisplayClass44_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_75;
  *(_QWORD *)(v3 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v12 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v12,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v12;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.selectUserServantIdList,
      (System_Int32_array **)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v20;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.selectUserCommandCodeIdList,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_75;
    if ( !servantOperationListViewManager->max_length )
      goto LABEL_76;
    SelectedServantIdList = servantOperationListViewManager->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    v28 = *p_selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v5);
    if ( !v28 )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      v28,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_30BC3DC *)Method_System_Collections_Generic_List_long__AddRange__);
    v29 = this->fields.servantOperationListViewManager;
    if ( !v29 )
      goto LABEL_75;
    if ( v29->max_length <= 1 )
      goto LABEL_76;
    SelectedServantIdList = v29->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    selectUserServantIdList = this->fields.selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v5);
    if ( !selectUserServantIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      selectUserServantIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_30BC3DC *)Method_System_Collections_Generic_List_long__AddRange__);
    v31 = this->fields.servantOperationListViewManager;
    if ( !v31 )
      goto LABEL_75;
    if ( v31->max_length <= 2 )
      goto LABEL_76;
    SelectedServantIdList = v31->m_Items[2];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    selectUserCommandCodeIdList = this->fields.selectUserCommandCodeIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedCommandCodeIdList(
                                                                   SelectedServantIdList,
                                                                   v5);
    if ( !selectUserCommandCodeIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      selectUserCommandCodeIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_30BC3DC *)Method_System_Collections_Generic_List_long__AddRange__);
    v33 = this->fields.servantOperationListViewManager;
    if ( !v33 )
      goto LABEL_75;
    if ( !v33->max_length )
      goto LABEL_76;
    SelectedServantIdList = v33->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                                                   SelectedServantIdList,
                                                                   v5);
    v34 = this->fields.servantOperationListViewManager;
    if ( !v34 )
      goto LABEL_75;
    if ( v34->max_length <= 1 )
    {
LABEL_76:
      v70 = sub_B70798(SelectedServantIdList);
      sub_B70738(v70, 0LL);
    }
    v35 = (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedServantIdList;
    SelectedServantIdList = v34->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    EquipMaterialList = (System_Int32_array **)ServantOperationListViewManager__GetEquipMaterialList(
                                                 SelectedServantIdList,
                                                 v5);
    *(_QWORD *)(v3 + 16) = EquipMaterialList;
    v37 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v3 + 16);
    sub_B70630((BattleServantConfConponent_o *)(v3 + 16), EquipMaterialList, v38, v39, v40, v41, v42, v43);
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                                                   v44,
                                                                   v35,
                                                                   v45);
    if ( !SelectedServantIdList )
      goto LABEL_75;
    dropObjectList = (int)SelectedServantIdList->fields.dropObjectList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = dropObjectList > 0;
    if ( !SelectedServantIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___GetEnumerator(
      &v72,
      (System_Collections_Generic_List_long__o *)SelectedServantIdList,
      (const MethodInfo_30BCFCC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v74 = v72;
    v47 = 0;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v74,
              (const MethodInfo_221FB20 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v74.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B7076C(0LL, v50);
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7076C(0LL, v52);
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)current,
                 (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_B7076C(0LL, v54);
      v47 |= UserServantEntity__IsExchangeSvt(Entity, 0LL);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v74,
      (const MethodInfo_221FB1C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v47 & 1) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v55 = (Il2CppObject *)StringLiteral_1/*""*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_5843/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      SelectedServantIdList = (ServantOperationListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( SelectedServantIdList )
      {
        ExchangeSvtCombineExpCampaign = EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                          (EventCampaignMaster_o *)SelectedServantIdList,
                                          0LL);
        if ( ExchangeSvtCombineExpCampaign )
        {
          if ( ExchangeSvtCombineExpCampaign->fields._size >= 1 )
          {
            v58 = ExchangeSvtCombineExpCampaign->fields._items->m_Items[0];
            if ( v58 )
            {
              v73 = v58->fields.value / 1000;
              v55 = (Il2CppObject *)System_Int32__ToString((int32_t)&v73, 0LL);
            }
          }
        }
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_5845/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, 0LL);
        v60 = System_String__Format_44753704(v59, v55, v55, 0LL);
        v61 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3342/*"COMMON_CONFIRM_YES"*/, 0LL);
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3339/*"COMMON_CONFIRM_NO"*/, 0LL);
        v64 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v64,
          (Il2CppObject *)v3,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0LL);
        if ( v61 )
        {
          CommonUI__OpenConfirmDecideDlg(v61, v56, v60, v62, v63, v64, 24, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0LL);
          return;
        }
      }
LABEL_75:
      sub_B7076C(SelectedServantIdList, v5);
    }
    if ( !*v37 )
      goto LABEL_75;
    if ( (*v37)->fields._size < 1 )
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
        v68 = 2;
      }
      else
      {
LABEL_79:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v68 = 0;
      }
      SoundManager__playSystemSe(v68, 0LL);
      ServantOperationManager__SellCombineWarning(this, v69);
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
      v66 = *v37;
      v67 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B70764(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v67,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( !servantCheckEquipDialog )
        goto LABEL_75;
      ServantCheckEquipDialog__Open_27035036(servantCheckEquipDialog, v66, v67, 0LL);
    }
  }
}


void __fastcall ServantOperationManager__OnClickFilter2Kind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  __int64 v4; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  ServantOperationListViewManager__OnClickFilter2Kind((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnClickFilterKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  __int64 v4; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  ServantOperationListViewManager__OnClickFilterKind((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4355C3E & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4355C3E = 1;
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
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  __int64 v4; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  ServantOperationListViewManager__OnClickSortAscendingOrder((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnClickSortKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  __int64 v4; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  ServantOperationListViewManager__OnClickSortKind((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnSelectServant(
        ServantOperationManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x21
  System_Collections_Generic_List_long__o *v6; // x20
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v8; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v11; // x8
  System_Int64_array *v12; // x21
  System_Int64_array *v13; // x3
  const MethodInfo *v14; // x4
  __int64 v15; // x0

  if ( (byte_4355C40 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    byte_4355C40 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_14;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v15 = sub_B70798(UserCommandCodeId);
    sub_B70738(v15, 0LL);
  }
  v11 = servantOperationListViewManager->m_Items[kind];
  if ( !v11 || !selectItem )
    goto LABEL_14;
  if ( v11->fields.kind == 2 )
  {
    UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(selectItem, v8);
    if ( v6 )
    {
      System_Collections_Generic_List_long___Add(
        v6,
        UserCommandCodeId,
        (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
      if ( v5 )
      {
        UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v5,
                                       (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_B7076C(UserCommandCodeId, v8);
  }
  UserCommandCodeId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  if ( !v5 )
    goto LABEL_14;
  System_Collections_Generic_List_long___Add(
    v5,
    UserCommandCodeId,
    (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
  UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                 v5,
                                 (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v6 )
    goto LABEL_14;
LABEL_13:
  v12 = (System_Int64_array *)UserCommandCodeId;
  v13 = System_Collections_Generic_List_long___ToArray(
          v6,
          (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v12, v13, v14);
}


void __fastcall ServantOperationManager__OpenSellConfirmDialog(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v4; // x20
  System_Int64_array *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4355C3D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    byte_4355C3D = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (selectUserServantIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                               selectUserServantIdList,
                                                                               (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_B7076C(selectUserServantIdList, method);
  }
  v4 = (System_Int64_array *)selectUserServantIdList;
  v5 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 1, v4, v5, v6);
}


void __fastcall ServantOperationManager__RefrashListDisp(ServantOperationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ServantOperationManager_o *v3; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x21
  int max_length; // w8
  int v6; // w22
  int32_t v7; // w20
  int v8; // w8
  UILabel_o *qpDataLabel; // x21
  UILabel_o *mpDataLabel; // x20
  UILabel_o *rpDataLabel; // x20
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x0
  int32_t rarePri; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t mana[2]; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4355C35 & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_B70694(&LocalizationManager_TypeInfo);
    byte_4355C35 = 1;
  }
  *(_QWORD *)mana = 0LL;
  rarePri = 0;
  servantOperationListViewManager = v3->fields.servantOperationListViewManager;
  *(_QWORD *)&v3->fields.totalQP = 0LL;
  v3->fields.totalRarePri = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_26;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)max_length )
      {
        v14 = sub_B70798(this);
        sub_B70738(v14, 0LL);
      }
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        goto LABEL_26;
      ServantOperationListViewManager__SumItems((ServantOperationListViewManager_o *)this, &mana[1], mana, &rarePri, v2);
      ++v6;
      v7 = mana[1] + v3->fields.totalQP;
      v8 = mana[0] + v3->fields.totalMana;
      v3->fields.totalQP = v7;
      v3->fields.totalMana = v8;
      v3->fields.totalRarePri += rarePri;
      max_length = servantOperationListViewManager->max_length;
      if ( v6 >= max_length )
        goto LABEL_11;
    }
  }
  v7 = 0;
LABEL_11:
  qpDataLabel = v3->fields.qpDataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v7, 0LL);
  if ( !qpDataLabel )
    goto LABEL_26;
  UILabel__set_text(qpDataLabel, (System_String_o *)this, 0LL);
  mpDataLabel = v3->fields.mpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v3->fields.totalMana, 0LL);
  if ( !mpDataLabel )
    goto LABEL_26;
  UILabel__set_text(mpDataLabel, (System_String_o *)this, 0LL);
  rpDataLabel = v3->fields.rpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v3->fields.totalRarePri, 0LL);
  if ( !rpDataLabel )
    goto LABEL_26;
  UILabel__set_text(rpDataLabel, (System_String_o *)this, 0LL);
  this = (ServantOperationManager_o *)v3->fields.allReleaseButton;
  if ( !this )
    goto LABEL_26;
  v12 = v3->fields._TotalSum_k__BackingField <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v12,
    1LL,
    this->klass[1]._1.interfaceOffsets);
  this = (ServantOperationManager_o *)v3->fields.decideButton;
  if ( !this )
LABEL_26:
    sub_B7076C(this, method);
  if ( v3->fields._TotalSum_k__BackingField <= 0 )
    v13 = 3LL;
  else
    v13 = 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v13,
    1LL,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall ServantOperationManager__ReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v5; // w21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v7; // x21
  __int64 v8; // x2
  Il2CppObject *v9; // x22
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x0
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4355C3F & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    this = (ServantOperationManager_o *)sub_B70694(&StringLiteral_12638/*"SUM_INFO"*/);
    byte_4355C3F = 1;
  }
  servantOperationListViewManager = v2->fields.servantOperationListViewManager;
  v2->fields._TotalSum_k__BackingField = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_15;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        v13 = sub_B70798(this);
        sub_B70738(v13, 0LL);
      }
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v5];
      if ( !this )
        break;
      ServantOperationListViewManager__ReleaseAll((ServantOperationListViewManager_o *)this, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_9;
    }
LABEL_15:
    sub_B7076C(this, method);
  }
LABEL_9:
  selectDoneLabel = v2->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12638/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = v2->fields._TotalSum_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField, v8);
  SelectMax_k__BackingField = v2->fields._SelectMax_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v10);
  this = (ServantOperationManager_o *)System_String__Format_44753704(v7, v9, v11, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_15;
  UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
  ServantOperationManager__RefrashListDisp(v2, v12);
}


void __fastcall ServantOperationManager__SellCombineWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  void *v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v14; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  Il2CppObject *current; // x22
  WebViewManager_o *Instance; // x0
  __int64 v24; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v26; // x1
  UserServantEntity_o *Entity; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x22
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x23
  Il2CppObject *v31; // x24
  struct ServantOperationManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x19
  System_Collections_Generic_List_UserServantEntity__o *v41; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v42; // x22
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4355C3A & 1) == 0 )
  {
    sub_B70694(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity___ctor___69178784);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B70694(&Method_System_Predicate_UserServantEntity___ctor__);
    sub_B70694(&System_Predicate_UserServantEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__);
    sub_B70694(&Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__);
    sub_B70694(&ServantOperationManager___c__DisplayClass51_0_TypeInfo);
    sub_B70694(&ServantOperationManager___c_TypeInfo);
    byte_4355C3A = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v3 = sub_B70764(ServantOperationManager___c__DisplayClass51_0_TypeInfo);
  ServantOperationManager___c__DisplayClass51_0___ctor((ServantOperationManager___c__DisplayClass51_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_29;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_29;
  size = selectUserServantIdList->fields._size;
  v14 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B70764(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v14,
    size,
    (const MethodInfo_3024A94 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69178784);
  *(_QWORD *)(v3 + 24) = v14;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v3 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
  v4 = this->fields.selectUserServantIdList;
  if ( !v4 )
    goto LABEL_29;
  System_Collections_Generic_List_long___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_long__o *)v4,
    (const MethodInfo_30BCFCC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v44,
            (const MethodInfo_221FB20 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v44.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v24);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7076C(0LL, v26);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !*v15 )
      sub_B7076C(0LL, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *v15,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v44,
    (const MethodInfo_221FB1C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v28 = *v15;
  v4 = ServantOperationManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v4 = ServantOperationManager___c_TypeInfo;
  }
  static_fields = (struct ServantOperationManager___c_StaticFields *)*((_QWORD *)v4 + 23);
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (*((_BYTE *)v4 + 307) & 4) != 0 && !*((_DWORD *)v4 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v31,
      Method_ServantOperationManager___c__SellCombineWarning_b__51_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_UserServantEntity___ctor__);
    v32 = ServantOperationManager___c_TypeInfo->static_fields;
    v32->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)_9__51_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v32->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v28 )
    goto LABEL_29;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v28,
         (System_Predicate_T__o *)_9__51_0,
         (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v41 = *(System_Collections_Generic_List_UserServantEntity__o **)(v3 + 24);
    v42 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B70764(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v42,
      (Il2CppObject *)v3,
      Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(servantCheckWarningDialog, v41, v42, 0LL);
      return;
    }
LABEL_29:
    sub_B7076C(v4, v5);
  }
  ServantOperationManager__SellSSRareWarning(this, (System_Collections_Generic_List_UserServantEntity__o *)*v15, v39);
}


void __fastcall ServantOperationManager__SellMaterialTdWarning(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x20
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  UserServantEntity_o *Entity; // x0
  __int64 v11; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x21
  WebViewManager_o *v13; // x0
  __int64 v14; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x22
  void *monitor; // x23
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x24
  __int64 v18; // x0
  WarEntity_o *v19; // x22
  WebViewManager_o *v20; // x0
  __int64 v21; // x1
  UserServantCollectionMaster_o *v22; // x23
  int64_t UserId; // x0
  __int64 v24; // x1
  int64_t v25; // x24
  __int64 v26; // x0
  __int64 v27; // x1
  UserServantCollectionEntity_o *v28; // x0
  UserServantCollectionEntity_o *v29; // x22
  WebViewManager_o *v30; // x0
  __int64 v31; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x0
  __int64 v33; // x1
  WarEntity_o *v34; // x0
  __int64 v35; // x1
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v37; // x22
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v38; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+10h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v2 = this;
  if ( (byte_4355C3C & 1) == 0 )
  {
    sub_B70694(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity___ctor___69178784);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B70694(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__);
    this = (ServantOperationManager_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4355C3C = 1;
  }
  memset(&v41, 0, sizeof(v41));
  tdInfo = 0LL;
  selectUserServantIdList = v2->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_49;
  size = selectUserServantIdList->fields._size;
  v38 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B70764(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v38,
    size,
    (const MethodInfo_3024A94 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69178784);
  this = (ServantOperationManager_o *)v2->fields.selectUserServantIdList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_long___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_30BCFCC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v41 = v39;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v41,
            (const MethodInfo_221FB20 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v41.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v7);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7076C(0LL, v9);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)Entity;
    if ( !Entity )
      sub_B7076C(0LL, v11);
    if ( UserServantEntity__IsMaterialTd(Entity, 0LL) )
    {
      v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v13 )
        sub_B7076C(0LL, v14);
      v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v13,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v12[2].klass;
      monitor = v12[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v42.fields.currentCryptoKey = klass;
      *(_QWORD *)&v42.fields.fakeValue = monitor;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v42, 0LL);
      if ( !v15 )
        sub_B7076C(v18, (unsigned int)v18);
      v19 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v15,
              v18,
              (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v20 )
        sub_B7076C(0LL, v21);
      v22 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v20,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v19 )
        sub_B7076C(UserId, v24);
      v25 = UserId;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v19->fields.name,
              0LL);
      if ( !v22 )
        sub_B7076C(v26, v27);
      v28 = UserServantCollectionMaster__GetEntity(v22, v25, v26, 0LL);
      v29 = v28;
      if ( v28 && UserServantCollectionEntity__IsGet(v28, 0LL) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v29, &tdInfo, -1, -1, 0LL);
        v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v30 )
          sub_B7076C(0LL, v31);
        v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v30,
                                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_B7076C(v32, v33);
        if ( !v32 )
          sub_B7076C(0LL, v33);
        v34 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v32,
                tdInfo->fields.id,
                (const MethodInfo_21C0440 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v34 )
          sub_B7076C(0LL, v35);
        if ( v29->fields.treasureDeviceLv1 != v34->fields.bannerId )
        {
          if ( !v38 )
            sub_B7076C(0LL, v35);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v38,
            v12,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v41,
    (const MethodInfo_221FB1C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v38 )
    goto LABEL_49;
  if ( v38->fields._size >= 1 )
  {
    servantCheckWarningDialog = v2->fields.servantCheckWarningDialog;
    v37 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B70764(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v37,
      (Il2CppObject *)v2,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        servantCheckWarningDialog,
        (System_Collections_Generic_List_UserServantEntity__o *)v38,
        v37,
        0LL);
      return;
    }
LABEL_49:
    sub_B7076C(this, method);
  }
  ServantOperationManager__OpenSellConfirmDialog(v2, method);
}


void __fastcall ServantOperationManager__SellSSRareWarning(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  ServantOperationManager___c_c *v5; // x0
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_0; // x21
  Il2CppObject *v8; // x22
  struct ServantOperationManager___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v18; // x22

  if ( (byte_4355C3B & 1) == 0 )
  {
    sub_B70694(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_B70694(&Method_System_Predicate_UserServantEntity___ctor__);
    sub_B70694(&System_Predicate_UserServantEntity__TypeInfo);
    sub_B70694(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__);
    sub_B70694(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__);
    sub_B70694(&ServantOperationManager___c_TypeInfo);
    byte_4355C3B = 1;
  }
  v5 = ServantOperationManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v5 = ServantOperationManager___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_0,
      v8,
      Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_UserServantEntity___ctor__);
    v9 = ServantOperationManager___c_TypeInfo->static_fields;
    v9->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v9->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !userSvtEntityList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)userSvtEntityList,
         (System_Predicate_T__o *)_9__52_0,
         (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v18 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B70764(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ServantOperationManager__SellSSRareWarning_b__52_1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellSSRareWarning(servantCheckWarningDialog, userSvtEntityList, v18, 0LL);
      return;
    }
LABEL_16:
    sub_B7076C(v5, userSvtEntityList);
  }
  ServantOperationManager__SellMaterialTdWarning(this, v16);
}


void __fastcall ServantOperationManager__SetFilter2Text(
        ServantOperationManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *filter2Label; // x0

  filter2Label = this->fields.filter2Label;
  if ( !filter2Label )
    sub_B7076C(0LL, text);
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.onSelect,
    (System_Int32_array **)onSelect,
    (System_String_array **)onSelect,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationManager__SetMode_32703024(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__SetMode_32703024(
        ServantOperationManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x20
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v7; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2
  __int64 v16; // x0

  v4 = this;
  if ( (byte_4355C36 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_ServantOperationListViewItem___ctor__);
    sub_B70694(&System_Action_ServantOperationListViewItem__TypeInfo);
    this = (ServantOperationManager_o *)sub_B70694(&Method_ServantOperationManager_OnSelectServant__);
    byte_4355C36 = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v4->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v16 = sub_B70798(this);
    sub_B70738(v16, 0LL);
  }
  v7 = servantOperationListViewManager->m_Items[kind];
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_ServantOperationListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)v4,
    Method_ServantOperationManager_OnSelectServant__,
    (const MethodInfo_264C148 *)Method_System_Action_ServantOperationListViewItem___ctor__);
  if ( !v7 )
LABEL_7:
    sub_B7076C(this, *(_QWORD *)&mode);
  v7->fields.onSelectServant = (struct System_Action_ServantOperationListViewItem__o *)v8;
  sub_B70630(
    (BattleServantConfConponent_o *)&v7->fields.onSelectServant,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  ServantOperationListViewManager__SetMode_32679468(v7, mode, v15);
}


void __fastcall ServantOperationManager__SortItem(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  __int64 v4; // x0

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
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
    sub_B7076C(0LL, state);
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
  __int64 v7; // x0

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
        v7 = sub_B70798(this);
        sub_B70738(v7, 0LL);
      }
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__decrementNumber((ServantOperationListViewManager_o *)this, selectNum, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_B7076C(this, *(_QWORD *)&selectNum);
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
  Il2CppObject *v1; // x19
  struct ServantOperationManager___c_StaticFields *static_fields; // x0

  if ( (byte_434F249 & 1) == 0 )
  {
    sub_B70694(&ServantOperationManager___c_TypeInfo);
    byte_434F249 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantOperationManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantOperationManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantOperationManager___c_o *)v1;
  sub_B70630(static_fields);
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
  return NpCombineControl__CheckConfirm_26015008(x, 0LL);
}


bool __fastcall ServantOperationManager___c___SellSSRareWarning_b__52_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_434F24A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F24A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_13;
  v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v10, 0LL);
  if ( !v6
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v6,
                                      (int32_t)Instance,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_B7076C(Instance, v5);
  }
  return ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) && UserServantEntity__getRarity(x, 0LL) == 5;
}


void __fastcall ServantOperationManager___c__DisplayClass44_0___ctor(
        ServantOperationManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantOperationManager___c__DisplayClass44_0___OnClickDecide_b__0(
        ServantOperationManager___c__DisplayClass44_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v9; // x20

  if ( (byte_434F24B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__);
    sub_B70694(&ServantOperationManager___c__DisplayClass44_1_TypeInfo);
    byte_434F24B = 1;
  }
  v5 = sub_B70764(ServantOperationManager___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_B70630(v5 + 24),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_17904524(Instance, v9, 0LL);
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
  ServantOperationManager___c__DisplayClass44_1_o *v2; // x19
  struct ServantOperationManager___c__DisplayClass44_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *equipedMaterialList; // x19
  struct ServantOperationManager_o *_4__this; // x20
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x21
  __int64 v7; // x22
  __int64 v8; // x9

  v2 = this;
  if ( (byte_434F24C & 1) == 0 )
  {
    sub_B70694(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    this = (ServantOperationManager___c__DisplayClass44_1_o *)sub_B70694(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__);
    byte_434F24C = 1;
  }
  if ( v2->fields.flag )
  {
    CS___8__locals1 = v2->fields.CS___8__locals1;
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
      v7 = sub_B70764(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      v8 = *(_QWORD *)Method_ServantOperationManager_ConfirmServantCheckEquipDialog__;
      *(_QWORD *)(v7 + 40) = Method_ServantOperationManager_ConfirmServantCheckEquipDialog__;
      *(_QWORD *)(v7 + 16) = v8;
      *(_QWORD *)(v7 + 32) = _4__this;
      sub_B70630(v7 + 32);
      if ( servantCheckEquipDialog )
      {
        ServantCheckEquipDialog__Open_27035036(
          servantCheckEquipDialog,
          equipedMaterialList,
          (ServantCheckEquipDialog_ClickDelegate_o *)v7,
          0LL);
        return;
      }
LABEL_12:
      sub_B7076C(this, method);
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
      sub_B7076C(this, decide);
    ServantOperationManager__SellSSRareWarning(this->fields.__4__this, this->fields.userSvtEntityList, 0LL);
  }
}