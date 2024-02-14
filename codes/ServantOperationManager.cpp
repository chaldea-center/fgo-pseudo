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

  if ( (byte_42181CB & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Action_ServantOperationManager_ActionKind__long____long____Invoke__,
      *(_QWORD *)&actionKind);
    byte_42181CB = 1;
  }
  onSelect = this->fields.onSelect;
  p_onSelect = (BattleServantConfConponent_o *)&this->fields.onSelect;
  v13 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)onSelect;
  if ( onSelect )
  {
    p_onSelect->klass = 0LL;
    sub_B0D840(
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
      (const MethodInfo_247E1E4 *)Method_System_Action_ServantOperationManager_ActionKind__long____long____Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__ChangeList(
        ServantOperationManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v8; // x9
  ServantOperationListViewManager_o *v9; // x21
  System_Action_bool__o *v10; // x22
  const MethodInfo *v11; // x2
  __int64 v12; // x20
  __int64 v13; // x9
  __int64 v14; // x10
  const MethodInfo *v15; // x1
  struct ServantOperationListViewManager_array *v16; // x8
  __int64 v17; // x9
  __int64 v18; // x0

  v4 = this;
  if ( (byte_42181BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, *(_QWORD *)&kind);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v5);
    this = (ServantOperationManager_o *)sub_B0D8A4(&Method_ServantOperationListViewManager_EndClickTabStatus__, v6);
    byte_42181BE = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_16;
  v8 = v4->fields.kind;
  if ( (unsigned int)v8 >= servantOperationListViewManager->max_length )
    goto LABEL_23;
  v9 = servantOperationListViewManager->m_Items[v8];
  if ( !v9 )
    goto LABEL_16;
  if ( v9->fields.modeKind )
  {
    v10 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, *(_QWORD *)&kind, method);
    System_Action_bool____ctor(
      v10,
      (Il2CppObject *)v9,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(v9, v10, v11);
    servantOperationListViewManager = v4->fields.servantOperationListViewManager;
    v4->fields.kind = kind;
    if ( !servantOperationListViewManager )
      goto LABEL_16;
  }
  else
  {
    v4->fields.kind = kind;
  }
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)&servantOperationListViewManager->max_length;
    if ( (int)v12 >= (int)v13 )
      break;
    if ( (unsigned int)v12 >= (unsigned int)v13 )
      goto LABEL_23;
    this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v12];
    if ( this )
    {
      this = (ServantOperationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (_DWORD)v12 == v4->fields.kind, 0LL);
        servantOperationListViewManager = v4->fields.servantOperationListViewManager;
        ++v12;
        if ( servantOperationListViewManager )
          continue;
      }
    }
    goto LABEL_16;
  }
  v14 = v4->fields.kind;
  if ( (unsigned int)v14 >= (unsigned int)v13 )
  {
LABEL_23:
    v18 = sub_B0D9A8(this);
    sub_B0D948(v18, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v14];
  if ( !this
    || (this = (ServantOperationManager_o *)((__int64 (__fastcall *)(ServantOperationManager_o *, void *))this->klass[1]._1.namespaze)(
                                              this,
                                              this->klass[1]._1.byval_arg.data),
        (v16 = v4->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(this);
  }
  v17 = v4->fields.kind;
  if ( (unsigned int)v17 >= v16->max_length )
    goto LABEL_23;
  this = (ServantOperationManager_o *)v16->m_Items[v17];
  if ( !this )
    goto LABEL_16;
  ServantOperationListViewManager__SetFilterButtonImage((ServantOperationListViewManager_o *)this, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__ConfirmServantCheckEquipDialog(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x19
  __int64 v5; // x1
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  ServantCheckEquipDialog_ClickDelegate_o *v7; // x21

  v4 = this;
  if ( (byte_42181C3 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, isDecide);
    this = (ServantOperationManager_o *)sub_B0D8A4(&Method_ServantOperationManager_EndServantCheckEquip__, v5);
    byte_42181C3 = 1;
  }
  servantCheckEquipDialog = v4->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v7 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B0D974(
                                                      ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                      isDecide,
                                                      method);
    ServantCheckEquipDialog_ClickDelegate___ctor(
      v7,
      (Il2CppObject *)v4,
      Method_ServantOperationManager_EndServantCheckEquip__,
      0LL);
    if ( servantCheckEquipDialog )
    {
      ServantCheckEquipDialog__OpenShopLastCheck(servantCheckEquipDialog, v7, 0LL);
      return;
    }
LABEL_8:
    sub_B0D97C(this);
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
  UILabel_o *rpDataLabel; // x21
  int32_t Count; // w21
  BalanceConfig_c *v17; // x0
  int ServantSellSelectMax; // w21
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  const MethodInfo *v24; // x3
  struct ServantOperationListViewManager_array *v25; // x8
  struct ServantOperationListViewManager_array *v26; // x8
  const MethodInfo *v27; // x3
  struct ServantOperationListViewManager_array *v28; // x8
  struct ServantOperationListViewManager_array *v29; // x8
  const MethodInfo *v30; // x3
  struct ServantOperationListViewManager_array *v31; // x8
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  int32_t SelectMax_k__BackingField; // [xsp+0h] [xbp-40h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42181BD & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v10);
    byte_42181BD = 1;
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
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !NumberFormat )
    goto LABEL_47;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)NumberFormat, 0LL);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !NumberFormat )
    goto LABEL_47;
  UserServantMaster__getCount((UserServantMaster_o *)NumberFormat, &servantEquipSum[1], servantEquipSum, 0, 0LL);
  v17 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + Count + servantEquipSum[0];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v17->static_fields->ServantSellSelectMax )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      ServantSellSelectMax = v17->static_fields->ServantSellSelectMax;
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
      }
    }
    else
    {
      ServantSellSelectMax = v17->static_fields->ServantSellSelectMax;
    }
  }
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  NumberFormat = System_String__Format_43845440(v20, v21, v22, 0LL);
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
  v25 = this->fields.servantOperationListViewManager;
  if ( !v25 )
    goto LABEL_47;
  if ( !v25->max_length )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v25->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 0, 0, v24);
  v26 = this->fields.servantOperationListViewManager;
  if ( !v26 )
    goto LABEL_47;
  if ( v26->max_length <= 1 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v26->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0LL);
  if ( !NumberFormat )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
  v28 = this->fields.servantOperationListViewManager;
  if ( !v28 )
    goto LABEL_47;
  if ( v28->max_length <= 1 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v28->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 1, 0, v27);
  v29 = this->fields.servantOperationListViewManager;
  if ( !v29 )
    goto LABEL_47;
  if ( v29->max_length <= 2 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v29->m_Items[2];
  if ( !NumberFormat
    || (NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)NumberFormat,
                                            0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL),
        (v31 = this->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_47:
    sub_B0D97C(NumberFormat);
  }
  if ( v31->max_length <= 2 )
  {
LABEL_48:
    v33 = sub_B0D9A8(NumberFormat);
    sub_B0D948(v33, 0LL);
  }
  NumberFormat = (System_String_o *)v31->m_Items[2];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 2, 0, v30);
  ServantOperationManager__ChangeList(this, kind, v32);
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
        v5 = sub_B0D9A8(this);
        sub_B0D948(v5, 0LL);
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
    sub_B0D97C(this);
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
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
  return ServantOperationListViewManager__GetAmountSortValue((ServantOperationListViewManager_o *)this, svtId, method);
}


System_Collections_Generic_List_int__o *__fastcall ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
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
  int32_t size; // w22
  System_Collections_Generic_List_int__o *v21; // x28
  UserServantEntity_array *AllList; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_Dictionary_int__int__o *v28; // x22
  int32_t v29; // w8
  int32_t i; // w20
  ServantOperationListViewItem_o *v31; // x26
  int32_t v32; // w8
  int32_t SvtId_k__BackingField; // w24
  __int64 v34; // x28
  int32_t v35; // w25
  ServantOperationListViewItem_o *v36; // x8
  int32_t v37; // w9
  bool v38; // zf
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x24
  unsigned int v41; // w28
  UserServantEntity_o *v42; // x25
  __int64 v43; // x26
  __int64 v44; // x27
  __int64 v45; // x25
  __int64 v46; // x26
  int32_t v47; // w8
  unsigned int v48; // w20
  ServantOperationListViewItem_o *v49; // x9
  signed __int64 v50; // x8
  int32_t v51; // w23
  int v52; // w26
  unsigned __int64 v53; // x27
  int32_t v54; // w9
  __int64 v56; // x0
  System_Collections_Generic_List_int__o *v57; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_42181C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    this = (ServantOperationManager_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_42181C2 = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_66;
  size = selectEquipedCommandCodeServantList->fields._size;
  v21 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    selectEquipedCommandCodeServantList,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_66;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v25 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v23, v24);
    System_Collections_Generic_List_int____ctor(
      v25,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    v28 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v26,
                                                                 v27);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v28,
      (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v29 = selectEquipedCommandCodeServantList->fields._size;
    v57 = v21;
    if ( v29 >= 1 )
    {
      for ( i = 0; i < v29; ++i )
      {
        if ( v29 <= (unsigned int)i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v31 = selectEquipedCommandCodeServantList->fields._items->m_Items[i];
        if ( !v31 || !v28 )
          goto LABEL_66;
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                              v28,
                                              v31->fields._SvtId_k__BackingField,
                                              (const MethodInfo_2E69AB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v32 = selectEquipedCommandCodeServantList->fields._size;
          SvtId_k__BackingField = v31->fields._SvtId_k__BackingField;
          if ( v32 >= 1 )
          {
            v34 = 0LL;
            v35 = 0;
            while ( 1 )
            {
              if ( v32 <= (unsigned int)v34 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v36 = selectEquipedCommandCodeServantList->fields._items->m_Items[v34];
              if ( !v36 )
                break;
              v37 = v36->fields._SvtId_k__BackingField;
              v32 = selectEquipedCommandCodeServantList->fields._size;
              ++v34;
              v38 = SvtId_k__BackingField == v37;
              SvtId_k__BackingField = v31->fields._SvtId_k__BackingField;
              if ( v38 )
                ++v35;
              if ( (int)v34 >= v32 )
                goto LABEL_24;
            }
LABEL_66:
            sub_B0D97C(this);
          }
          v35 = 0;
LABEL_24:
          System_Collections_Generic_Dictionary_int__int___Add(
            v28,
            SvtId_k__BackingField,
            v35,
            (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v29 = selectEquipedCommandCodeServantList->fields._size;
      }
    }
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_66;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
      v41 = 0;
      do
      {
        if ( v41 >= max_length )
        {
          v56 = sub_B0D9A8(this);
          sub_B0D948(v56, 0LL);
        }
        v42 = AllList->m_Items[v41];
        if ( !v42 )
          goto LABEL_66;
        v44 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
        v43 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v58.fields.currentCryptoKey = v44;
        *(_QWORD *)&v58.fields.fakeValue = v43;
        this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                              v58,
                                              0LL);
        if ( !v40 )
          goto LABEL_66;
        this = (ServantOperationManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v40,
                                              (int32_t)this,
                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_66;
        this = (ServantOperationManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ServantOperationManager_o *)UserServantEntity__IsEventJoin(v42, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v46 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
            v45 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v59.fields.currentCryptoKey = v46;
            *(_QWORD *)&v59.fields.fakeValue = v45;
            this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                  v59,
                                                  0LL);
            if ( !v25 )
              goto LABEL_66;
            System_Collections_Generic_List_int___Add(
              v25,
              (int32_t)this,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v41 < max_length );
    }
    v47 = selectEquipedCommandCodeServantList->fields._size;
    v21 = v57;
    if ( v47 >= 1 )
    {
      v48 = 0;
      while ( 1 )
      {
        if ( v47 <= v48 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v49 = selectEquipedCommandCodeServantList->fields._items->m_Items[v48];
        if ( !v49 || !v25 )
          goto LABEL_66;
        LODWORD(v50) = v25->fields._size;
        v51 = v49->fields._SvtId_k__BackingField;
        if ( (int)v50 < 1 )
        {
          v52 = 0;
          if ( !v28 )
            goto LABEL_66;
        }
        else
        {
          v52 = 0;
          v53 = 0LL;
          do
          {
            if ( v53 >= (unsigned int)v50 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v54 = v25->fields._items->m_Items[v53 + 1];
            v50 = v25->fields._size;
            ++v53;
            if ( v51 == v54 )
              ++v52;
          }
          while ( (__int64)v53 < v50 );
          if ( !v28 )
            goto LABEL_66;
        }
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v28,
                                              v51,
                                              (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v52 )
        {
          if ( !v57 )
            goto LABEL_66;
          System_Collections_Generic_List_int___Add(
            v57,
            v51,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v47 = selectEquipedCommandCodeServantList->fields._size;
        if ( (int)++v48 >= v47 )
          return v21;
      }
    }
  }
  return v21;
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
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[0];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
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
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[2];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
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
        v7 = sub_B0D9A8(this);
        sub_B0D948(v7, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(allReleaseButton);
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
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  v5 = &servantOperationListViewManager->obj.klass + kind;
  v6 = (ServantOperationListViewManager_o *)v5[4];
  if ( !v6 )
LABEL_5:
    sub_B0D97C(this);
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
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
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
        v7 = sub_B0D9A8(this);
        sub_B0D948(v7, 0LL);
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
    sub_B0D97C(this);
  }
}


void __fastcall ServantOperationManager__OnClickDecide(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v33; // x20
  ServantOperationListViewManager_o *SelectedServantIdList; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_long__o *v43; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_long__o *v53; // x23
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  System_Collections_Generic_List_long__o *v62; // x23
  const MethodInfo *v63; // x1
  struct ServantOperationListViewManager_array *v64; // x8
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x23
  const MethodInfo *v66; // x1
  struct ServantOperationListViewManager_array *v67; // x8
  System_Collections_Generic_List_long__o *selectUserCommandCodeIdList; // x23
  const MethodInfo *v69; // x1
  struct ServantOperationListViewManager_array *v70; // x8
  const MethodInfo *v71; // x1
  struct ServantOperationListViewManager_array *v72; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *v73; // x24
  System_Int32_array **EquipMaterialList; // x0
  System_Collections_Generic_List_ServantOperationListViewItem__o **v75; // x23
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  ServantOperationManager_o *v82; // x0
  const MethodInfo *v83; // x2
  int dropObjectList; // w8
  int v85; // w25
  Il2CppObject *current; // x24
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  Il2CppObject *v90; // x21
  System_String_o *v91; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCombineExpCampaign; // x0
  EventCampaignEntity_o *v93; // x8
  System_String_o *v94; // x0
  System_String_o *v95; // x21
  CommonUI_o *v96; // x22
  System_String_o *v97; // x23
  System_String_o *v98; // x24
  __int64 v99; // x1
  __int64 v100; // x2
  CommonConfirmDialog_ClickDelegate_o *v101; // x25
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v103; // x21
  __int64 v104; // x1
  __int64 v105; // x2
  ServantCheckEquipDialog_ClickDelegate_o *v106; // x22
  int32_t v107; // w0
  const MethodInfo *v108; // x1
  __int64 v109; // x0
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v111; // [xsp+30h] [xbp-90h] BYREF
  int v112; // [xsp+4Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42181C1 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v20);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v21);
    sub_B0D8A4(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_B0D8A4(&SoundManager_TypeInfo, v25);
    sub_B0D8A4(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__, v26);
    sub_B0D8A4(&ServantOperationManager___c__DisplayClass44_0_TypeInfo, v27);
    sub_B0D8A4(&StringLiteral_5772/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, v28);
    sub_B0D8A4(&StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, v29);
    sub_B0D8A4(&StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, v30);
    sub_B0D8A4(&StringLiteral_5770/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, v31);
    sub_B0D8A4(&StringLiteral_1/*""*/, v32);
    byte_42181C1 = 1;
  }
  memset(&v113, 0, sizeof(v113));
  v112 = 0;
  v33 = sub_B0D974(ServantOperationManager___c__DisplayClass44_0_TypeInfo, method, v2);
  ServantOperationManager___c__DisplayClass44_0___ctor((ServantOperationManager___c__DisplayClass44_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_75;
  *(_QWORD *)(v33 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v33 + 24), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v43 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v41,
                                                       v42);
    System_Collections_Generic_List_long____ctor(
      v43,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v43;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.selectUserServantIdList,
      (System_Int32_array **)v43,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v53 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v51,
                                                       v52);
    System_Collections_Generic_List_long____ctor(
      v53,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v53;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.selectUserCommandCodeIdList,
      (System_Int32_array **)v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_75;
    if ( !servantOperationListViewManager->max_length )
      goto LABEL_76;
    SelectedServantIdList = servantOperationListViewManager->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    v62 = *p_selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v60);
    if ( !v62 )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      v62,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_2FB6104 *)Method_System_Collections_Generic_List_long__AddRange__);
    v64 = this->fields.servantOperationListViewManager;
    if ( !v64 )
      goto LABEL_75;
    if ( v64->max_length <= 1 )
      goto LABEL_76;
    SelectedServantIdList = v64->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    selectUserServantIdList = this->fields.selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v63);
    if ( !selectUserServantIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      selectUserServantIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_2FB6104 *)Method_System_Collections_Generic_List_long__AddRange__);
    v67 = this->fields.servantOperationListViewManager;
    if ( !v67 )
      goto LABEL_75;
    if ( v67->max_length <= 2 )
      goto LABEL_76;
    SelectedServantIdList = v67->m_Items[2];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    selectUserCommandCodeIdList = this->fields.selectUserCommandCodeIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedCommandCodeIdList(
                                                                   SelectedServantIdList,
                                                                   v66);
    if ( !selectUserCommandCodeIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      selectUserCommandCodeIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_2FB6104 *)Method_System_Collections_Generic_List_long__AddRange__);
    v70 = this->fields.servantOperationListViewManager;
    if ( !v70 )
      goto LABEL_75;
    if ( !v70->max_length )
      goto LABEL_76;
    SelectedServantIdList = v70->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                                                   SelectedServantIdList,
                                                                   v69);
    v72 = this->fields.servantOperationListViewManager;
    if ( !v72 )
      goto LABEL_75;
    if ( v72->max_length <= 1 )
    {
LABEL_76:
      v109 = sub_B0D9A8(SelectedServantIdList);
      sub_B0D948(v109, 0LL);
    }
    v73 = (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedServantIdList;
    SelectedServantIdList = v72->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    EquipMaterialList = (System_Int32_array **)ServantOperationListViewManager__GetEquipMaterialList(
                                                 SelectedServantIdList,
                                                 v71);
    *(_QWORD *)(v33 + 16) = EquipMaterialList;
    v75 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v33 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v33 + 16), EquipMaterialList, v76, v77, v78, v79, v80, v81);
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                                                   v82,
                                                                   v73,
                                                                   v83);
    if ( !SelectedServantIdList )
      goto LABEL_75;
    dropObjectList = (int)SelectedServantIdList->fields.dropObjectList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = dropObjectList > 0;
    if ( !SelectedServantIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___GetEnumerator(
      &v111,
      (System_Collections_Generic_List_long__o *)SelectedServantIdList,
      (const MethodInfo_2FB6CF4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v113 = v111;
    v85 = 0;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v113,
              (const MethodInfo_2110DA4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v113.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B0D97C(0LL);
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)current,
                 (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_B0D97C(0LL);
      v85 |= UserServantEntity__IsExchangeSvt(Entity, 0LL);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v113,
      (const MethodInfo_2110DA0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v85 & 1) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v90 = (Il2CppObject *)StringLiteral_1/*""*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_5770/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      SelectedServantIdList = (ServantOperationListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( SelectedServantIdList )
      {
        ExchangeSvtCombineExpCampaign = EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                          (EventCampaignMaster_o *)SelectedServantIdList,
                                          0LL);
        if ( ExchangeSvtCombineExpCampaign )
        {
          if ( ExchangeSvtCombineExpCampaign->fields._size >= 1 )
          {
            v93 = ExchangeSvtCombineExpCampaign->fields._items->m_Items[0];
            if ( v93 )
            {
              v112 = v93->fields.value / 1000;
              v90 = (Il2CppObject *)System_Int32__ToString((int32_t)&v112, 0LL);
            }
          }
        }
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_5772/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, 0LL);
        v95 = System_String__Format_43845440(v94, v90, v90, 0LL);
        v96 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, 0LL);
        v98 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, 0LL);
        v101 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v99, v100);
        CommonConfirmDialog_ClickDelegate___ctor(
          v101,
          (Il2CppObject *)v33,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0LL);
        if ( v96 )
        {
          CommonUI__OpenConfirmDecideDlg(v96, v91, v95, v97, v98, v101, 24, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
          return;
        }
      }
LABEL_75:
      sub_B0D97C(SelectedServantIdList);
    }
    if ( !*v75 )
      goto LABEL_75;
    if ( (*v75)->fields._size < 1 )
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
        v107 = 2;
      }
      else
      {
LABEL_79:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v107 = 0;
      }
      SoundManager__playSystemSe(v107, 0LL);
      ServantOperationManager__SellCombineWarning(this, v108);
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
      v103 = *v75;
      v106 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B0D974(
                                                          ServantCheckEquipDialog_ClickDelegate_TypeInfo,
                                                          v104,
                                                          v105);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v106,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( !servantCheckEquipDialog )
        goto LABEL_75;
      ServantCheckEquipDialog__Open_26545444(servantCheckEquipDialog, v103, v106, 0LL);
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
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
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
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
  ServantOperationListViewManager__OnClickFilterKind((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42181C8 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42181C8 = 1;
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
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
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
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
  ServantOperationListViewManager__OnClickSortKind((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnSelectServant(
        ServantOperationManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_long__o *v11; // x20
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v13; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v16; // x8
  System_Int64_array *v17; // x21
  System_Int64_array *v18; // x3
  const MethodInfo *v19; // x4
  __int64 v20; // x0

  if ( (byte_42181CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, selectItem);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_42181CA = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    selectItem,
                                                    method);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v11 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v9, v10);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_14;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v20 = sub_B0D9A8(UserCommandCodeId);
    sub_B0D948(v20, 0LL);
  }
  v16 = servantOperationListViewManager->m_Items[kind];
  if ( !v16 || !selectItem )
    goto LABEL_14;
  if ( v16->fields.kind == 2 )
  {
    UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(selectItem, v13);
    if ( v11 )
    {
      System_Collections_Generic_List_long___Add(
        v11,
        UserCommandCodeId,
        (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      if ( v8 )
      {
        UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v8,
                                       (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_B0D97C(UserCommandCodeId);
  }
  UserCommandCodeId = ServantOperationListViewItem__get_UserSvtId(selectItem, v13);
  if ( !v8 )
    goto LABEL_14;
  System_Collections_Generic_List_long___Add(
    v8,
    UserCommandCodeId,
    (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
  UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                 v8,
                                 (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v11 )
    goto LABEL_14;
LABEL_13:
  v17 = (System_Int64_array *)UserCommandCodeId;
  v18 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v17, v18, v19);
}


void __fastcall ServantOperationManager__OpenSellConfirmDialog(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v4; // x20
  System_Int64_array *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_42181C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, method);
    byte_42181C7 = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (selectUserServantIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                               selectUserServantIdList,
                                                                               (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_B0D97C(selectUserServantIdList);
  }
  v4 = (System_Int64_array *)selectUserServantIdList;
  v5 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
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
  if ( (byte_42181BF & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    byte_42181BF = 1;
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
        v14 = sub_B0D9A8(this);
        sub_B0D948(v14, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v7; // w21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v9; // x21
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x0
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_42181C9 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    this = (ServantOperationManager_o *)sub_B0D8A4(&StringLiteral_12507/*"SUM_INFO"*/, v4);
    byte_42181C9 = 1;
  }
  servantOperationListViewManager = v2->fields.servantOperationListViewManager;
  v2->fields._TotalSum_k__BackingField = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_15;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v13 = sub_B0D9A8(this);
        sub_B0D948(v13, 0LL);
      }
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v7];
      if ( !this )
        break;
      ServantOperationListViewManager__ReleaseAll((ServantOperationListViewManager_o *)this, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_9;
    }
LABEL_15:
    sub_B0D97C(this);
  }
LABEL_9:
  selectDoneLabel = v2->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = v2->fields._TotalSum_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = v2->fields._SelectMax_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  this = (ServantOperationManager_o *)System_String__Format_43845440(v9, v10, v11, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_15;
  UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
  ServantOperationManager__RefrashListDisp(v2, v12);
}


void __fastcall ServantOperationManager__SellCombineWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v22; // x20
  void *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v34; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  Il2CppObject *current; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x22
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x23
  Il2CppObject *v51; // x24
  struct ServantOperationManager___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x19
  System_Collections_Generic_List_UserServantEntity__o *v62; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v63; // x22
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42181C4 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67898592, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Predicate_UserServantEntity___ctor__, v15);
    sub_B0D8A4(&System_Predicate_UserServantEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, v18);
    sub_B0D8A4(&Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__, v19);
    sub_B0D8A4(&ServantOperationManager___c__DisplayClass51_0_TypeInfo, v20);
    sub_B0D8A4(&ServantOperationManager___c_TypeInfo, v21);
    byte_42181C4 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  v22 = sub_B0D974(ServantOperationManager___c__DisplayClass51_0_TypeInfo, method, v2);
  ServantOperationManager___c__DisplayClass51_0___ctor((ServantOperationManager___c__DisplayClass51_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_29;
  *(_QWORD *)(v22 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_29;
  size = selectUserServantIdList->fields._size;
  v34 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B0D974(
                                                                           System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                           v30,
                                                                           v31);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v34,
    size,
    (const MethodInfo_2FC4AF4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67898592);
  *(_QWORD *)(v22 + 24) = v34;
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v22 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)v34, v36, v37, v38, v39, v40, v41);
  v23 = this->fields.selectUserServantIdList;
  if ( !v23 )
    goto LABEL_29;
  System_Collections_Generic_List_long___GetEnumerator(
    &v64,
    (System_Collections_Generic_List_long__o *)v23,
    (const MethodInfo_2FB6CF4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v65 = v64;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v65,
            (const MethodInfo_2110DA4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v65.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !*v35 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *v35,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v65,
    (const MethodInfo_2110DA0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v48 = *v35;
  v23 = ServantOperationManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v23 = ServantOperationManager___c_TypeInfo;
  }
  static_fields = (struct ServantOperationManager___c_StaticFields *)*((_QWORD *)v23 + 23);
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (*((_BYTE *)v23 + 307) & 4) != 0 && !*((_DWORD *)v23 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_UserServantEntity__TypeInfo,
                                                                          v46,
                                                                          v47);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v51,
      Method_ServantOperationManager___c__SellCombineWarning_b__51_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_UserServantEntity___ctor__);
    v52 = ServantOperationManager___c_TypeInfo->static_fields;
    v52->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)_9__51_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v52->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  if ( !v48 )
    goto LABEL_29;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v48,
         (System_Predicate_T__o *)_9__51_0,
         (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v62 = *(System_Collections_Generic_List_UserServantEntity__o **)(v22 + 24);
    v63 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B0D974(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v59,
                                                         v60);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v63,
      (Il2CppObject *)v22,
      Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(servantCheckWarningDialog, v62, v63, 0LL);
      return;
    }
LABEL_29:
    sub_B0D97C(v23);
  }
  ServantOperationManager__SellSSRareWarning(this, (System_Collections_Generic_List_UserServantEntity__o *)*v35, v60);
}


void __fastcall ServantOperationManager__SellMaterialTdWarning(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantOperationManager_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
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
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x21
  WebViewManager_o *v31; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x22
  void *monitor; // x23
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x24
  __int64 v35; // x0
  WarEntity_o *v36; // x22
  WebViewManager_o *v37; // x0
  UserServantCollectionMaster_o *v38; // x23
  int64_t UserId; // x0
  int64_t v40; // x24
  __int64 v41; // x0
  UserServantCollectionEntity_o *v42; // x0
  UserServantCollectionEntity_o *v43; // x22
  WebViewManager_o *v44; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // x0
  WarEntity_o *v46; // x0
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v50; // x22
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v51; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+10h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v3 = this;
  if ( (byte_42181C6 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67898592, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_B0D8A4(&NetworkManager_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B0D8A4(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__, v22);
    this = (ServantOperationManager_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_42181C6 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  tdInfo = 0LL;
  selectUserServantIdList = v3->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_49;
  size = selectUserServantIdList->fields._size;
  v51 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B0D974(
                                                                           System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                           method,
                                                                           v2);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v51,
    size,
    (const MethodInfo_2FC4AF4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67898592);
  this = (ServantOperationManager_o *)v3->fields.selectUserServantIdList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_long___GetEnumerator(
    &v52,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_2FB6CF4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v54 = v52;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v54,
            (const MethodInfo_2110DA4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v54.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)Entity;
    if ( !Entity )
      sub_B0D97C(0LL);
    if ( UserServantEntity__IsMaterialTd(Entity, 0LL) )
    {
      v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v31 )
        sub_B0D97C(0LL);
      v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v31,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v30[2].klass;
      monitor = v30[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v55.fields.currentCryptoKey = klass;
      *(_QWORD *)&v55.fields.fakeValue = monitor;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
      if ( !v32 )
        sub_B0D97C(v35);
      v36 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v32,
              v35,
              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v37 )
        sub_B0D97C(0LL);
      v38 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v37,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v36 )
        sub_B0D97C(UserId);
      v40 = UserId;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v36->fields.name,
              0LL);
      if ( !v38 )
        sub_B0D97C(v41);
      v42 = UserServantCollectionMaster__GetEntity(v38, v40, v41, 0LL);
      v43 = v42;
      if ( v42 && UserServantCollectionEntity__IsGet(v42, 0LL) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v43, &tdInfo, -1, -1, 0LL);
        v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v44 )
          sub_B0D97C(0LL);
        v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v44,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_B0D97C(v45);
        if ( !v45 )
          sub_B0D97C(0LL);
        v46 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v45,
                tdInfo->fields.id,
                (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v46 )
          sub_B0D97C(0LL);
        if ( v43->fields.treasureDeviceLv1 != v46->fields.bannerId )
        {
          if ( !v51 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v51,
            v30,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v54,
    (const MethodInfo_2110DA0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v51 )
    goto LABEL_49;
  if ( v51->fields._size >= 1 )
  {
    servantCheckWarningDialog = v3->fields.servantCheckWarningDialog;
    v50 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B0D974(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v47,
                                                         v48);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v50,
      (Il2CppObject *)v3,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        servantCheckWarningDialog,
        (System_Collections_Generic_List_UserServantEntity__o *)v51,
        v50,
        0LL);
      return;
    }
LABEL_49:
    sub_B0D97C(this);
  }
  ServantOperationManager__OpenSellConfirmDialog(v3, v47);
}


void __fastcall ServantOperationManager__SellSSRareWarning(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantOperationManager___c_c *v11; // x0
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_0; // x21
  Il2CppObject *v14; // x22
  struct ServantOperationManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v25; // x22

  if ( (byte_42181C5 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, userSvtEntityList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v5);
    sub_B0D8A4(&Method_System_Predicate_UserServantEntity___ctor__, v6);
    sub_B0D8A4(&System_Predicate_UserServantEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__, v8);
    sub_B0D8A4(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, v9);
    sub_B0D8A4(&ServantOperationManager___c_TypeInfo, v10);
    byte_42181C5 = 1;
  }
  v11 = ServantOperationManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v11 = ServantOperationManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_UserServantEntity__TypeInfo,
                                                                          userSvtEntityList,
                                                                          method);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_0,
      v14,
      Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_UserServantEntity___ctor__);
    v15 = ServantOperationManager___c_TypeInfo->static_fields;
    v15->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v15->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !userSvtEntityList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)userSvtEntityList,
         (System_Predicate_T__o *)_9__52_0,
         (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v25 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B0D974(
                                                         ServantCheckWarningDialog_ClickDelegate_TypeInfo,
                                                         v22,
                                                         v23);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v25,
      (Il2CppObject *)this,
      Method_ServantOperationManager__SellSSRareWarning_b__52_1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellSSRareWarning(servantCheckWarningDialog, userSvtEntityList, v25, 0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(v11);
  }
  ServantOperationManager__SellMaterialTdWarning(this, v22);
}


void __fastcall ServantOperationManager__SetFilter2Text(
        ServantOperationManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *filter2Label; // x0

  filter2Label = this->fields.filter2Label;
  if ( !filter2Label )
    sub_B0D97C(0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onSelect,
    (System_Int32_array **)onSelect,
    (System_String_array **)onSelect,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationManager__SetMode_31307212(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__SetMode_31307212(
        ServantOperationManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v9; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  __int64 v18; // x0

  v4 = this;
  if ( (byte_42181C0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ServantOperationListViewItem___ctor__, *(_QWORD *)&mode);
    sub_B0D8A4(&System_Action_ServantOperationListViewItem__TypeInfo, v5);
    this = (ServantOperationManager_o *)sub_B0D8A4(&Method_ServantOperationManager_OnSelectServant__, v6);
    byte_42181C0 = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v4->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v18 = sub_B0D9A8(this);
    sub_B0D948(v18, 0LL);
  }
  v9 = servantOperationListViewManager->m_Items[kind];
  v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_ServantOperationListViewItem__TypeInfo,
                                                                               *(_QWORD *)&mode,
                                                                               method);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v10,
    (Il2CppObject *)v4,
    Method_ServantOperationManager_OnSelectServant__,
    (const MethodInfo_246EA3C *)Method_System_Action_ServantOperationListViewItem___ctor__);
  if ( !v9 )
LABEL_7:
    sub_B0D97C(this);
  v9->fields.onSelectServant = (struct System_Action_ServantOperationListViewItem__o *)v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v9->fields.onSelectServant,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantOperationListViewManager__SetMode_31283656(v9, mode, v17);
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
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
        v7 = sub_B0D9A8(this);
        sub_B0D948(v7, 0LL);
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
    sub_B0D97C(this);
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
  Il2CppObject *v3; // x19
  struct ServantOperationManager___c_StaticFields *static_fields; // x0

  if ( (byte_421223F & 1) == 0 )
  {
    sub_B0D8A4(&ServantOperationManager___c_TypeInfo, v1);
    byte_421223F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantOperationManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantOperationManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantOperationManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  return NpCombineControl__CheckConfirm_25570972(x, 0LL);
}


bool __fastcall ServantOperationManager___c___SellSSRareWarning_b__52_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4212240 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, x);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4212240 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_13;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v10 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v10;
  *(_QWORD *)&v12.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12, 0LL);
  if ( !v8
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      (int32_t)Instance,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(Instance);
  }
  return ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL) && UserServantEntity__getRarity(x, 0LL) == 5;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  CommonUI_o *Instance; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_4212241 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flag);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__, v6);
    sub_B0D8A4(&ServantOperationManager___c__DisplayClass44_1_TypeInfo, v7);
    byte_4212241 = 1;
  }
  v8 = sub_B0D974(ServantOperationManager___c__DisplayClass44_1_TypeInfo, flag, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_B0D840(v8 + 24, this),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v8,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v9);
  }
  CommonUI__CloseConfirmDialog_17017160(Instance, v13, 0LL);
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
  ServantOperationManager___c__DisplayClass44_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantOperationManager___c__DisplayClass44_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *equipedMaterialList; // x19
  struct ServantOperationManager_o *_4__this; // x20
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x21
  __int64 v10; // x22
  __int64 v11; // x9

  v3 = this;
  if ( (byte_4212242 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v4);
    this = (ServantOperationManager___c__DisplayClass44_1_o *)sub_B0D8A4(
                                                                &Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
                                                                v5);
    byte_4212242 = 1;
  }
  if ( v3->fields.flag )
  {
    CS___8__locals1 = v3->fields.CS___8__locals1;
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
      v10 = sub_B0D974(ServantCheckEquipDialog_ClickDelegate_TypeInfo, method, v2);
      v11 = *(_QWORD *)Method_ServantOperationManager_ConfirmServantCheckEquipDialog__;
      *(_QWORD *)(v10 + 40) = Method_ServantOperationManager_ConfirmServantCheckEquipDialog__;
      *(_QWORD *)(v10 + 16) = v11;
      *(_QWORD *)(v10 + 32) = _4__this;
      sub_B0D840(v10 + 32, _4__this);
      if ( servantCheckEquipDialog )
      {
        ServantCheckEquipDialog__Open_26545444(
          servantCheckEquipDialog,
          equipedMaterialList,
          (ServantCheckEquipDialog_ClickDelegate_o *)v10,
          0LL);
        return;
      }
LABEL_12:
      sub_B0D97C(this);
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
      sub_B0D97C(this);
    ServantOperationManager__SellSSRareWarning(this->fields.__4__this, this->fields.userSvtEntityList, 0LL);
  }
}