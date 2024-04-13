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

  if ( (byte_42EC774 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_ServantOperationManager_ActionKind__long____long____Invoke__,
      actionKind,
      (_DWORD)servants,
      commandCodes);
    byte_42EC774 = 1;
  }
  onSelect = this->fields.onSelect;
  p_onSelect = (BattleServantConfConponent_o *)&this->fields.onSelect;
  v13 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)onSelect;
  if ( onSelect )
  {
    p_onSelect->klass = 0LL;
    sub_B5D560(
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
      (const MethodInfo_259AAC8 *)Method_System_Action_ServantOperationManager_ActionKind__long____long____Invoke__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__ChangeList(
        ServantOperationManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v13; // x9
  ServantOperationListViewManager_o *v14; // x21
  System_Action_bool__o *v15; // x22
  const MethodInfo *v16; // x2
  __int64 v17; // x20
  __int64 v18; // x9
  __int64 v19; // x10
  struct ServantOperationListViewManager_array *v20; // x8
  __int64 v21; // x9
  __int64 v22; // x0

  v5 = this;
  if ( (byte_42EC767 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, kind, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v6, v7, v8);
    this = (ServantOperationManager_o *)sub_B5D5C4(
                                          &Method_ServantOperationListViewManager_EndClickTabStatus__,
                                          v9,
                                          v10,
                                          v11);
    byte_42EC767 = 1;
  }
  servantOperationListViewManager = v5->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_16;
  v13 = v5->fields.kind;
  if ( (unsigned int)v13 >= servantOperationListViewManager->max_length )
    goto LABEL_23;
  v14 = servantOperationListViewManager->m_Items[v13];
  if ( !v14 )
    goto LABEL_16;
  if ( v14->fields.modeKind )
  {
    v15 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v15,
      (Il2CppObject *)v14,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
    ServantOperationListViewManager__StatusRequest(v14, v15, v16);
    servantOperationListViewManager = v5->fields.servantOperationListViewManager;
    v5->fields.kind = kind;
    if ( !servantOperationListViewManager )
      goto LABEL_16;
  }
  else
  {
    v5->fields.kind = kind;
  }
  v17 = 0LL;
  while ( 1 )
  {
    v18 = *(_QWORD *)&servantOperationListViewManager->max_length;
    if ( (int)v17 >= (int)v18 )
      break;
    if ( (unsigned int)v17 >= (unsigned int)v18 )
      goto LABEL_23;
    this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v17];
    if ( this )
    {
      this = (ServantOperationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (_DWORD)v17 == v5->fields.kind, 0LL);
        servantOperationListViewManager = v5->fields.servantOperationListViewManager;
        ++v17;
        if ( servantOperationListViewManager )
          continue;
      }
    }
    goto LABEL_16;
  }
  v19 = v5->fields.kind;
  if ( (unsigned int)v19 >= (unsigned int)v18 )
  {
LABEL_23:
    v22 = sub_B5D6C8(this);
    sub_B5D668(v22, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v19];
  if ( !this
    || (this = (ServantOperationManager_o *)((__int64 (__fastcall *)(ServantOperationManager_o *, void *))this->klass[1]._1.namespaze)(
                                              this,
                                              this->klass[1]._1.byval_arg.data),
        (v20 = v5->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&kind);
  }
  v21 = v5->fields.kind;
  if ( (unsigned int)v21 >= v20->max_length )
    goto LABEL_23;
  this = (ServantOperationManager_o *)v20->m_Items[v21];
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
  __int64 v3; // x3
  ServantOperationManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  ServantCheckEquipDialog_ClickDelegate_o *v10; // x21

  v5 = this;
  if ( (byte_42EC76C & 1) == 0 )
  {
    sub_B5D5C4(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, isDecide, (_DWORD)method, v3);
    this = (ServantOperationManager_o *)sub_B5D5C4(&Method_ServantOperationManager_EndServantCheckEquip__, v6, v7, v8);
    byte_42EC76C = 1;
  }
  servantCheckEquipDialog = v5->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v10 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B5D694(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    ServantCheckEquipDialog_ClickDelegate___ctor(
      v10,
      (Il2CppObject *)v5,
      Method_ServantOperationManager_EndServantCheckEquip__,
      0LL);
    if ( servantCheckEquipDialog )
    {
      ServantCheckEquipDialog__OpenShopLastCheck(servantCheckEquipDialog, v10, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(this, isDecide);
  }
  if ( !servantCheckEquipDialog )
    goto LABEL_8;
  ServantCheckEquipDialog__Close(v5->fields.servantCheckEquipDialog, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__CreateList(
        ServantOperationManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UILabel_o *qpDataLabel; // x21
  int32_t totalQP; // w22
  System_String_o *NumberFormat; // x0
  __int64 v27; // x1
  UILabel_o *mpDataLabel; // x21
  UILabel_o *rpDataLabel; // x21
  int32_t Count; // w21
  BalanceConfig_c *v31; // x0
  int ServantSellSelectMax; // w21
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v34; // x22
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x0
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  const MethodInfo *v38; // x3
  struct ServantOperationListViewManager_array *v39; // x8
  struct ServantOperationListViewManager_array *v40; // x8
  const MethodInfo *v41; // x3
  struct ServantOperationListViewManager_array *v42; // x8
  struct ServantOperationListViewManager_array *v43; // x8
  const MethodInfo *v44; // x3
  struct ServantOperationListViewManager_array *v45; // x8
  const MethodInfo *v46; // x2
  __int64 v47; // x0
  int32_t SelectMax_k__BackingField; // [xsp+0h] [xbp-40h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC766 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v21, v22, v23);
    byte_42EC766 = 1;
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
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !NumberFormat )
    goto LABEL_47;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)NumberFormat, 0LL);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !NumberFormat )
    goto LABEL_47;
  UserServantMaster__getCount((UserServantMaster_o *)NumberFormat, &servantEquipSum[1], servantEquipSum, 0, 0LL);
  v31 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + Count + servantEquipSum[0];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v31->static_fields->ServantSellSelectMax )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      ServantSellSelectMax = v31->static_fields->ServantSellSelectMax;
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
      }
    }
    else
    {
      ServantSellSelectMax = v31->static_fields->ServantSellSelectMax;
    }
  }
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  NumberFormat = System_String__Format_44573324(v34, v35, v36, 0LL);
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
  v39 = this->fields.servantOperationListViewManager;
  if ( !v39 )
    goto LABEL_47;
  if ( !v39->max_length )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v39->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 0, 0, v38);
  v40 = this->fields.servantOperationListViewManager;
  if ( !v40 )
    goto LABEL_47;
  if ( v40->max_length <= 1 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v40->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0LL);
  if ( !NumberFormat )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
  v42 = this->fields.servantOperationListViewManager;
  if ( !v42 )
    goto LABEL_47;
  if ( v42->max_length <= 1 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v42->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 1, 0, v41);
  v43 = this->fields.servantOperationListViewManager;
  if ( !v43 )
    goto LABEL_47;
  if ( v43->max_length <= 2 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v43->m_Items[2];
  if ( !NumberFormat
    || (NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)NumberFormat,
                                            0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL),
        (v45 = this->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_47:
    sub_B5D69C(NumberFormat, v27);
  }
  if ( v45->max_length <= 2 )
  {
LABEL_48:
    v47 = sub_B5D6C8(NumberFormat);
    sub_B5D668(v47, 0LL);
  }
  NumberFormat = (System_String_o *)v45->m_Items[2];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 2, 0, v44);
  ServantOperationManager__ChangeList(this, kind, v46);
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
        v5 = sub_B5D6C8(this);
        sub_B5D668(v5, 0LL);
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
    sub_B5D69C(this, method);
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
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, isDecide);
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
    sub_B5D69C(0LL, isDecide);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, svtId);
  return ServantOperationListViewManager__GetAmountSortValue((ServantOperationListViewManager_o *)this, svtId, method);
}


System_Collections_Generic_List_int__o *__fastcall ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int32_t size; // w22
  System_Collections_Generic_List_int__o *v54; // x28
  UserServantEntity_array *AllList; // x23
  System_Collections_Generic_List_int__o *v56; // x21
  System_Collections_Generic_Dictionary_int__int__o *v57; // x22
  int32_t v58; // w8
  int32_t i; // w20
  ServantOperationListViewItem_o *v60; // x26
  int32_t v61; // w8
  int32_t SvtId_k__BackingField; // w24
  __int64 v63; // x28
  int32_t v64; // w25
  ServantOperationListViewItem_o *v65; // x8
  int32_t v66; // w9
  bool v67; // zf
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v69; // x24
  unsigned int v70; // w28
  UserServantEntity_o *v71; // x25
  __int64 v72; // x26
  __int64 v73; // x27
  __int64 v74; // x25
  __int64 v75; // x26
  int32_t v76; // w8
  unsigned int v77; // w20
  ServantOperationListViewItem_o *v78; // x9
  signed __int64 v79; // x8
  int32_t v80; // w23
  int v81; // w26
  unsigned __int64 v82; // x27
  int32_t v83; // w9
  __int64 v85; // x0
  System_Collections_Generic_List_int__o *v86; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_42EC76B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantMaster___,
      (_DWORD)selectEquipedCommandCodeServantList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47, v48, v49);
    this = (ServantOperationManager_o *)sub_B5D5C4(
                                          &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                          v50,
                                          v51,
                                          v52);
    byte_42EC76B = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_66;
  size = selectEquipedCommandCodeServantList->fields._size;
  v54 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v54,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( size )
  {
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_66;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v56 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v56,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    v57 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v57,
      (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v58 = selectEquipedCommandCodeServantList->fields._size;
    v86 = v54;
    if ( v58 >= 1 )
    {
      for ( i = 0; i < v58; ++i )
      {
        if ( v58 <= (unsigned int)i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v60 = selectEquipedCommandCodeServantList->fields._items->m_Items[i];
        if ( !v60 || !v57 )
          goto LABEL_66;
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                              v57,
                                              v60->fields._SvtId_k__BackingField,
                                              (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v61 = selectEquipedCommandCodeServantList->fields._size;
          SvtId_k__BackingField = v60->fields._SvtId_k__BackingField;
          if ( v61 >= 1 )
          {
            v63 = 0LL;
            v64 = 0;
            while ( 1 )
            {
              if ( v61 <= (unsigned int)v63 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v65 = selectEquipedCommandCodeServantList->fields._items->m_Items[v63];
              if ( !v65 )
                break;
              v66 = v65->fields._SvtId_k__BackingField;
              v61 = selectEquipedCommandCodeServantList->fields._size;
              ++v63;
              v67 = SvtId_k__BackingField == v66;
              SvtId_k__BackingField = v60->fields._SvtId_k__BackingField;
              if ( v67 )
                ++v64;
              if ( (int)v63 >= v61 )
                goto LABEL_24;
            }
LABEL_66:
            sub_B5D69C(this, selectEquipedCommandCodeServantList);
          }
          v64 = 0;
LABEL_24:
          System_Collections_Generic_Dictionary_int__int___Add(
            v57,
            SvtId_k__BackingField,
            v64,
            (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v58 = selectEquipedCommandCodeServantList->fields._size;
      }
    }
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_66;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v69 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
      v70 = 0;
      do
      {
        if ( v70 >= max_length )
        {
          v85 = sub_B5D6C8(this);
          sub_B5D668(v85, 0LL);
        }
        v71 = AllList->m_Items[v70];
        if ( !v71 )
          goto LABEL_66;
        v73 = *(_QWORD *)&v71->fields.svtId.fields.currentCryptoKey;
        v72 = *(_QWORD *)&v71->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v87.fields.currentCryptoKey = v73;
        *(_QWORD *)&v87.fields.fakeValue = v72;
        this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v87,
                                              0LL);
        if ( !v69 )
          goto LABEL_66;
        this = (ServantOperationManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v69,
                                              (int32_t)this,
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_66;
        this = (ServantOperationManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ServantOperationManager_o *)UserServantEntity__IsEventJoin(v71, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v75 = *(_QWORD *)&v71->fields.svtId.fields.currentCryptoKey;
            v74 = *(_QWORD *)&v71->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v88.fields.currentCryptoKey = v75;
            *(_QWORD *)&v88.fields.fakeValue = v74;
            this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                  v88,
                                                  0LL);
            if ( !v56 )
              goto LABEL_66;
            System_Collections_Generic_List_int___Add(
              v56,
              (int32_t)this,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v70 < max_length );
    }
    v76 = selectEquipedCommandCodeServantList->fields._size;
    v54 = v86;
    if ( v76 >= 1 )
    {
      v77 = 0;
      while ( 1 )
      {
        if ( v76 <= v77 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v78 = selectEquipedCommandCodeServantList->fields._items->m_Items[v77];
        if ( !v78 || !v56 )
          goto LABEL_66;
        LODWORD(v79) = v56->fields._size;
        v80 = v78->fields._SvtId_k__BackingField;
        if ( (int)v79 < 1 )
        {
          v81 = 0;
          if ( !v57 )
            goto LABEL_66;
        }
        else
        {
          v81 = 0;
          v82 = 0LL;
          do
          {
            if ( v82 >= (unsigned int)v79 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v83 = v56->fields._items->m_Items[v82 + 1];
            v79 = v56->fields._size;
            ++v82;
            if ( v80 == v83 )
              ++v81;
          }
          while ( (__int64)v82 < v79 );
          if ( !v57 )
            goto LABEL_66;
        }
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v57,
                                              v80,
                                              (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v81 )
        {
          if ( !v86 )
            goto LABEL_66;
          System_Collections_Generic_List_int___Add(
            v86,
            v80,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
        v76 = selectEquipedCommandCodeServantList->fields._size;
        if ( (int)++v77 >= v76 )
          return v54;
      }
    }
  }
  return v54;
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
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[0];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, method);
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
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[2];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, id);
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
        v7 = sub_B5D6C8(this);
        sub_B5D668(v7, 0LL);
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
    sub_B5D69C(this, id);
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
    sub_B5D69C(allReleaseButton, method);
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
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
  v5 = &servantOperationListViewManager->obj.klass + kind;
  v6 = (ServantOperationListViewManager_o *)v5[4];
  if ( !v6 )
LABEL_5:
    sub_B5D69C(this, method);
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
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, selectedId);
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
        v7 = sub_B5D6C8(this);
        sub_B5D668(v7, 0LL);
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
    sub_B5D69C(this, userSvtId);
  }
}


void __fastcall ServantOperationManager__OnClickDecide(ServantOperationManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  __int64 v92; // x20
  ServantOperationListViewManager_o *SelectedServantIdList; // x0
  const MethodInfo *v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Collections_Generic_List_long__o *v101; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Collections_Generic_List_long__o *v109; // x23
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  System_Collections_Generic_List_long__o *v117; // x23
  struct ServantOperationListViewManager_array *v118; // x8
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x23
  struct ServantOperationListViewManager_array *v120; // x8
  System_Collections_Generic_List_long__o *selectUserCommandCodeIdList; // x23
  struct ServantOperationListViewManager_array *v122; // x8
  struct ServantOperationListViewManager_array *v123; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *v124; // x24
  System_Int32_array **EquipMaterialList; // x0
  System_Collections_Generic_List_ServantOperationListViewItem__o **v126; // x23
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  ServantOperationManager_o *v133; // x0
  const MethodInfo *v134; // x2
  int dropObjectList; // w8
  int v136; // w25
  Il2CppObject *current; // x24
  WebViewManager_o *Instance; // x0
  __int64 v139; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v141; // x1
  UserServantEntity_o *Entity; // x0
  __int64 v143; // x1
  Il2CppObject *v144; // x21
  System_String_o *v145; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCombineExpCampaign; // x0
  EventCampaignEntity_o *v147; // x8
  System_String_o *v148; // x0
  System_String_o *v149; // x21
  CommonUI_o *v150; // x22
  System_String_o *v151; // x23
  System_String_o *v152; // x24
  CommonConfirmDialog_ClickDelegate_o *v153; // x25
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v155; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v156; // x22
  int32_t v157; // w0
  const MethodInfo *v158; // x1
  __int64 v159; // x0
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v161; // [xsp+40h] [xbp-90h] BYREF
  int v162; // [xsp+5Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v163; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42EC76A & 1) == 0 )
  {
    sub_B5D5C4(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCampaignMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__AddRange__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__, v59, v60, v61);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v62, v63, v64);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v65, v66, v67);
    sub_B5D5C4(&SoundManager_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__, v71, v72, v73);
    sub_B5D5C4(&ServantOperationManager___c__DisplayClass44_0_TypeInfo, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_5833/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_5831/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_1/*""*/, v89, v90, v91);
    byte_42EC76A = 1;
  }
  memset(&v163, 0, sizeof(v163));
  v162 = 0;
  v92 = sub_B5D694(ServantOperationManager___c__DisplayClass44_0_TypeInfo);
  ServantOperationManager___c__DisplayClass44_0___ctor((ServantOperationManager___c__DisplayClass44_0_o *)v92, 0LL);
  if ( !v92 )
    goto LABEL_75;
  *(_QWORD *)(v92 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v92 + 24), (System_Int32_array **)this, v95, v96, v97, v98, v99, v100);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v101 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v101,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v101;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.selectUserServantIdList,
      (System_Int32_array **)v101,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    v109 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v109,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v109;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.selectUserCommandCodeIdList,
      (System_Int32_array **)v109,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_75;
    if ( !servantOperationListViewManager->max_length )
      goto LABEL_76;
    SelectedServantIdList = servantOperationListViewManager->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    v117 = *p_selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v94);
    if ( !v117 )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      v117,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
    v118 = this->fields.servantOperationListViewManager;
    if ( !v118 )
      goto LABEL_75;
    if ( v118->max_length <= 1 )
      goto LABEL_76;
    SelectedServantIdList = v118->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    selectUserServantIdList = this->fields.selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v94);
    if ( !selectUserServantIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      selectUserServantIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
    v120 = this->fields.servantOperationListViewManager;
    if ( !v120 )
      goto LABEL_75;
    if ( v120->max_length <= 2 )
      goto LABEL_76;
    SelectedServantIdList = v120->m_Items[2];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    selectUserCommandCodeIdList = this->fields.selectUserCommandCodeIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedCommandCodeIdList(
                                                                   SelectedServantIdList,
                                                                   v94);
    if ( !selectUserCommandCodeIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      selectUserCommandCodeIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
    v122 = this->fields.servantOperationListViewManager;
    if ( !v122 )
      goto LABEL_75;
    if ( !v122->max_length )
      goto LABEL_76;
    SelectedServantIdList = v122->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                                                   SelectedServantIdList,
                                                                   v94);
    v123 = this->fields.servantOperationListViewManager;
    if ( !v123 )
      goto LABEL_75;
    if ( v123->max_length <= 1 )
    {
LABEL_76:
      v159 = sub_B5D6C8(SelectedServantIdList);
      sub_B5D668(v159, 0LL);
    }
    v124 = (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedServantIdList;
    SelectedServantIdList = v123->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    EquipMaterialList = (System_Int32_array **)ServantOperationListViewManager__GetEquipMaterialList(
                                                 SelectedServantIdList,
                                                 v94);
    *(_QWORD *)(v92 + 16) = EquipMaterialList;
    v126 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v92 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v92 + 16), EquipMaterialList, v127, v128, v129, v130, v131, v132);
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                                                   v133,
                                                                   v124,
                                                                   v134);
    if ( !SelectedServantIdList )
      goto LABEL_75;
    dropObjectList = (int)SelectedServantIdList->fields.dropObjectList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = dropObjectList > 0;
    if ( !SelectedServantIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___GetEnumerator(
      &v161,
      (System_Collections_Generic_List_long__o *)SelectedServantIdList,
      (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v163 = v161;
    v136 = 0;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v163,
              (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v163.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v139);
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(0LL, v141);
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)current,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_B5D69C(0LL, v143);
      v136 |= UserServantEntity__IsExchangeSvt(Entity, 0LL);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v163,
      (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v136 & 1) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v144 = (Il2CppObject *)StringLiteral_1/*""*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v145 = LocalizationManager__Get((System_String_o *)StringLiteral_5831/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      SelectedServantIdList = (ServantOperationListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( SelectedServantIdList )
      {
        ExchangeSvtCombineExpCampaign = EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                          (EventCampaignMaster_o *)SelectedServantIdList,
                                          0LL);
        if ( ExchangeSvtCombineExpCampaign )
        {
          if ( ExchangeSvtCombineExpCampaign->fields._size >= 1 )
          {
            v147 = ExchangeSvtCombineExpCampaign->fields._items->m_Items[0];
            if ( v147 )
            {
              v162 = v147->fields.value / 1000;
              v144 = (Il2CppObject *)System_Int32__ToString((int32_t)&v162, 0LL);
            }
          }
        }
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v148 = LocalizationManager__Get((System_String_o *)StringLiteral_5833/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, 0LL);
        v149 = System_String__Format_44573324(v148, v144, v144, 0LL);
        v150 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v151 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
        v152 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
        v153 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v153,
          (Il2CppObject *)v92,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0LL);
        if ( v150 )
        {
          CommonUI__OpenConfirmDecideDlg(v150, v145, v149, v151, v152, v153, 24, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0LL);
          return;
        }
      }
LABEL_75:
      sub_B5D69C(SelectedServantIdList, v94);
    }
    if ( !*v126 )
      goto LABEL_75;
    if ( (*v126)->fields._size < 1 )
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
        v157 = 2;
      }
      else
      {
LABEL_79:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v157 = 0;
      }
      SoundManager__playSystemSe(v157, 0LL);
      ServantOperationManager__SellCombineWarning(this, v158);
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
      v155 = *v126;
      v156 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B5D694(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v156,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( !servantCheckEquipDialog )
        goto LABEL_75;
      ServantCheckEquipDialog__Open_26956892(servantCheckEquipDialog, v155, v156, 0LL);
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
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, method);
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
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, method);
  ServantOperationListViewManager__OnClickFilterKind((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EC771 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC771 = 1;
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
    ServantOperationManager__ReleaseAll(this, v5);
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
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, method);
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
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, method);
  ServantOperationListViewManager__OnClickSortKind((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnSelectServant(
        ServantOperationManager_o *this,
        ServantOperationListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_long__o *v15; // x21
  System_Collections_Generic_List_long__o *v16; // x20
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v18; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v21; // x8
  System_Int64_array *v22; // x21
  System_Int64_array *v23; // x3
  const MethodInfo *v24; // x4
  __int64 v25; // x0

  if ( (byte_42EC773 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v12, v13, v14);
    byte_42EC773 = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v16 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v16,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_14;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v25 = sub_B5D6C8(UserCommandCodeId);
    sub_B5D668(v25, 0LL);
  }
  v21 = servantOperationListViewManager->m_Items[kind];
  if ( !v21 || !selectItem )
    goto LABEL_14;
  if ( v21->fields.kind == 2 )
  {
    UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(selectItem, v18);
    if ( v16 )
    {
      System_Collections_Generic_List_long___Add(
        v16,
        UserCommandCodeId,
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      if ( v15 )
      {
        UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v15,
                                       (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_B5D69C(UserCommandCodeId, v18);
  }
  UserCommandCodeId = ServantOperationListViewItem__get_UserSvtId(selectItem, v18);
  if ( !v15 )
    goto LABEL_14;
  System_Collections_Generic_List_long___Add(
    v15,
    UserCommandCodeId,
    (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
  UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                 v15,
                                 (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v16 )
    goto LABEL_14;
LABEL_13:
  v22 = (System_Int64_array *)UserCommandCodeId;
  v23 = System_Collections_Generic_List_long___ToArray(
          v16,
          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v22, v23, v24);
}


void __fastcall ServantOperationManager__OpenSellConfirmDialog(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v6; // x20
  System_Int64_array *v7; // x3
  const MethodInfo *v8; // x4

  if ( (byte_42EC770 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, (_DWORD)method, v2, v3);
    byte_42EC770 = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (selectUserServantIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                               selectUserServantIdList,
                                                                               (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_B5D69C(selectUserServantIdList, method);
  }
  v6 = (System_Int64_array *)selectUserServantIdList;
  v7 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 1, v6, v7, v8);
}


void __fastcall ServantOperationManager__RefrashListDisp(ServantOperationManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  ServantOperationManager_o *v5; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x21
  int max_length; // w8
  int v8; // w22
  int32_t v9; // w20
  int v10; // w8
  UILabel_o *qpDataLabel; // x21
  UILabel_o *mpDataLabel; // x20
  UILabel_o *rpDataLabel; // x20
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x0
  int32_t rarePri; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t mana[2]; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_42EC768 & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC768 = 1;
  }
  *(_QWORD *)mana = 0LL;
  rarePri = 0;
  servantOperationListViewManager = v5->fields.servantOperationListViewManager;
  *(_QWORD *)&v5->fields.totalQP = 0LL;
  v5->fields.totalRarePri = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_26;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
      {
        v16 = sub_B5D6C8(this);
        sub_B5D668(v16, 0LL);
      }
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v8];
      if ( !this )
        goto LABEL_26;
      ServantOperationListViewManager__SumItems((ServantOperationListViewManager_o *)this, &mana[1], mana, &rarePri, v4);
      ++v8;
      v9 = mana[1] + v5->fields.totalQP;
      v10 = mana[0] + v5->fields.totalMana;
      v5->fields.totalQP = v9;
      v5->fields.totalMana = v10;
      v5->fields.totalRarePri += rarePri;
      max_length = servantOperationListViewManager->max_length;
      if ( v8 >= max_length )
        goto LABEL_11;
    }
  }
  v9 = 0;
LABEL_11:
  qpDataLabel = v5->fields.qpDataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v9, 0LL);
  if ( !qpDataLabel )
    goto LABEL_26;
  UILabel__set_text(qpDataLabel, (System_String_o *)this, 0LL);
  mpDataLabel = v5->fields.mpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v5->fields.totalMana, 0LL);
  if ( !mpDataLabel )
    goto LABEL_26;
  UILabel__set_text(mpDataLabel, (System_String_o *)this, 0LL);
  rpDataLabel = v5->fields.rpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v5->fields.totalRarePri, 0LL);
  if ( !rpDataLabel )
    goto LABEL_26;
  UILabel__set_text(rpDataLabel, (System_String_o *)this, 0LL);
  this = (ServantOperationManager_o *)v5->fields.allReleaseButton;
  if ( !this )
    goto LABEL_26;
  v14 = v5->fields._TotalSum_k__BackingField <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v14,
    1LL,
    this->klass[1]._1.interfaceOffsets);
  this = (ServantOperationManager_o *)v5->fields.decideButton;
  if ( !this )
LABEL_26:
    sub_B5D69C(this, method);
  if ( v5->fields._TotalSum_k__BackingField <= 0 )
    v15 = 3LL;
  else
    v15 = 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v15,
    1LL,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall ServantOperationManager__ReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantOperationManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v13; // w21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v15; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x0
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42EC772 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    this = (ServantOperationManager_o *)sub_B5D5C4(&StringLiteral_12617/*"SUM_INFO"*/, v8, v9, v10);
    byte_42EC772 = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  v4->fields._TotalSum_k__BackingField = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_15;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v19 = sub_B5D6C8(this);
        sub_B5D668(v19, 0LL);
      }
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v13];
      if ( !this )
        break;
      ServantOperationListViewManager__ReleaseAll((ServantOperationListViewManager_o *)this, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_9;
    }
LABEL_15:
    sub_B5D69C(this, method);
  }
LABEL_9:
  selectDoneLabel = v4->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12617/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = v4->fields._TotalSum_k__BackingField;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = v4->fields._SelectMax_k__BackingField;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  this = (ServantOperationManager_o *)System_String__Format_44573324(v15, v16, v17, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_15;
  UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
  ServantOperationManager__RefrashListDisp(v4, v18);
}


void __fastcall ServantOperationManager__SellCombineWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  __int64 v59; // x20
  void *v60; // x0
  __int64 v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v70; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  Il2CppObject *current; // x22
  WebViewManager_o *Instance; // x0
  __int64 v80; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v82; // x1
  UserServantEntity_o *Entity; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x22
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x23
  Il2CppObject *v87; // x24
  struct ServantOperationManager___c_StaticFields *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  const MethodInfo *v95; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x19
  System_Collections_Generic_List_UserServantEntity__o *v97; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v98; // x22
  System_Collections_Generic_List_Enumerator_T__o v99; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v100; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EC76D & 1) == 0 )
  {
    sub_B5D5C4(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68753952, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Predicate_UserServantEntity___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Predicate_UserServantEntity__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, v47, v48, v49);
    sub_B5D5C4(&Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__, v50, v51, v52);
    sub_B5D5C4(&ServantOperationManager___c__DisplayClass51_0_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&ServantOperationManager___c_TypeInfo, v56, v57, v58);
    byte_42EC76D = 1;
  }
  memset(&v100, 0, sizeof(v100));
  v59 = sub_B5D694(ServantOperationManager___c__DisplayClass51_0_TypeInfo);
  ServantOperationManager___c__DisplayClass51_0___ctor((ServantOperationManager___c__DisplayClass51_0_o *)v59, 0LL);
  if ( !v59 )
    goto LABEL_29;
  *(_QWORD *)(v59 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v59 + 16), (System_Int32_array **)this, v62, v63, v64, v65, v66, v67);
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_29;
  size = selectUserServantIdList->fields._size;
  v70 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v70,
    size,
    (const MethodInfo_30563CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753952);
  *(_QWORD *)(v59 + 24) = v70;
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v59 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v59 + 24), (System_Int32_array **)v70, v72, v73, v74, v75, v76, v77);
  v60 = this->fields.selectUserServantIdList;
  if ( !v60 )
    goto LABEL_29;
  System_Collections_Generic_List_long___GetEnumerator(
    &v99,
    (System_Collections_Generic_List_long__o *)v60,
    (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v100 = v99;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v100,
            (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v100.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v80);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v82);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !*v71 )
      sub_B5D69C(0LL, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *v71,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v100,
    (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v84 = *v71;
  v60 = ServantOperationManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v60 = ServantOperationManager___c_TypeInfo;
  }
  static_fields = (struct ServantOperationManager___c_StaticFields *)*((_QWORD *)v60 + 23);
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (*((_BYTE *)v60 + 307) & 4) != 0 && !*((_DWORD *)v60 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v60);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v87 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v87,
      Method_ServantOperationManager___c__SellCombineWarning_b__51_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_UserServantEntity___ctor__);
    v88 = ServantOperationManager___c_TypeInfo->static_fields;
    v88->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)_9__51_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v88->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
  }
  if ( !v84 )
    goto LABEL_29;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v84,
         (System_Predicate_T__o *)_9__51_0,
         (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v97 = *(System_Collections_Generic_List_UserServantEntity__o **)(v59 + 24);
    v98 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B5D694(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v98,
      (Il2CppObject *)v59,
      Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(servantCheckWarningDialog, v97, v98, 0LL);
      return;
    }
LABEL_29:
    sub_B5D69C(v60, v61);
  }
  ServantOperationManager__SellSSRareWarning(this, (System_Collections_Generic_List_UserServantEntity__o *)*v71, v95);
}


void __fastcall ServantOperationManager__SellMaterialTdWarning(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantOperationManager_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  __int64 v69; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v71; // x1
  UserServantEntity_o *Entity; // x0
  __int64 v73; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v74; // x21
  WebViewManager_o *v75; // x0
  __int64 v76; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x22
  void *monitor; // x23
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x24
  __int64 v80; // x0
  WarEntity_o *v81; // x22
  WebViewManager_o *v82; // x0
  __int64 v83; // x1
  UserServantCollectionMaster_o *v84; // x23
  int64_t UserId; // x0
  __int64 v86; // x1
  int64_t v87; // x24
  __int64 v88; // x0
  __int64 v89; // x1
  UserServantCollectionEntity_o *v90; // x0
  UserServantCollectionEntity_o *v91; // x22
  WebViewManager_o *v92; // x0
  __int64 v93; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v94; // x0
  __int64 v95; // x1
  WarEntity_o *v96; // x0
  __int64 v97; // x1
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v99; // x22
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v100; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v101; // [xsp+10h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v103; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  v4 = this;
  if ( (byte_42EC76F & 1) == 0 )
  {
    sub_B5D5C4(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68753952, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v47, v48, v49);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v50, v51, v52);
    sub_B5D5C4(&NetworkManager_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__, v59, v60, v61);
    this = (ServantOperationManager_o *)sub_B5D5C4(
                                          &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                          v62,
                                          v63,
                                          v64);
    byte_42EC76F = 1;
  }
  memset(&v103, 0, sizeof(v103));
  tdInfo = 0LL;
  selectUserServantIdList = v4->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_49;
  size = selectUserServantIdList->fields._size;
  v100 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v100,
    size,
    (const MethodInfo_30563CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753952);
  this = (ServantOperationManager_o *)v4->fields.selectUserServantIdList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_long___GetEnumerator(
    &v101,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v103 = v101;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v103,
            (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v103.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v69);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v71);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v74 = (EventMissionProgressRequest_Argument_ProgressData_o *)Entity;
    if ( !Entity )
      sub_B5D69C(0LL, v73);
    if ( UserServantEntity__IsMaterialTd(Entity, 0LL) )
    {
      v75 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v75 )
        sub_B5D69C(0LL, v76);
      v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v75,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v74[2].klass;
      monitor = v74[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v104.fields.currentCryptoKey = klass;
      *(_QWORD *)&v104.fields.fakeValue = monitor;
      v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v104, 0LL);
      if ( !v77 )
        sub_B5D69C(v80, (unsigned int)v80);
      v81 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v77,
              v80,
              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v82 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v82 )
        sub_B5D69C(0LL, v83);
      v84 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v82,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v81 )
        sub_B5D69C(UserId, v86);
      v87 = UserId;
      v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v81->fields.name,
              0LL);
      if ( !v84 )
        sub_B5D69C(v88, v89);
      v90 = UserServantCollectionMaster__GetEntity(v84, v87, v88, 0LL);
      v91 = v90;
      if ( v90 && UserServantCollectionEntity__IsGet(v90, 0LL) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v91, &tdInfo, -1, -1, 0LL);
        v92 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v92 )
          sub_B5D69C(0LL, v93);
        v94 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v92,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_B5D69C(v94, v95);
        if ( !v94 )
          sub_B5D69C(0LL, v95);
        v96 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v94,
                tdInfo->fields.id,
                (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v96 )
          sub_B5D69C(0LL, v97);
        if ( v91->fields.treasureDeviceLv1 != v96->fields.bannerId )
        {
          if ( !v100 )
            sub_B5D69C(0LL, v97);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v100,
            v74,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v103,
    (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v100 )
    goto LABEL_49;
  if ( v100->fields._size >= 1 )
  {
    servantCheckWarningDialog = v4->fields.servantCheckWarningDialog;
    v99 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B5D694(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v99,
      (Il2CppObject *)v4,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        servantCheckWarningDialog,
        (System_Collections_Generic_List_UserServantEntity__o *)v100,
        v99,
        0LL);
      return;
    }
LABEL_49:
    sub_B5D69C(this, method);
  }
  ServantOperationManager__OpenSellConfirmDialog(v4, method);
}


void __fastcall ServantOperationManager__SellSSRareWarning(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  ServantOperationManager___c_c *v24; // x0
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_0; // x21
  Il2CppObject *v27; // x22
  struct ServantOperationManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v37; // x22

  if ( (byte_42EC76E & 1) == 0 )
  {
    sub_B5D5C4(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, (_DWORD)userSvtEntityList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_UserServantEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_UserServantEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__, v15, v16, v17);
    sub_B5D5C4(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, v18, v19, v20);
    sub_B5D5C4(&ServantOperationManager___c_TypeInfo, v21, v22, v23);
    byte_42EC76E = 1;
  }
  v24 = ServantOperationManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v24 = ServantOperationManager___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_0,
      v27,
      Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_UserServantEntity___ctor__);
    v28 = ServantOperationManager___c_TypeInfo->static_fields;
    v28->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v28->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !userSvtEntityList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)userSvtEntityList,
         (System_Predicate_T__o *)_9__52_0,
         (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v37 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B5D694(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v37,
      (Il2CppObject *)this,
      Method_ServantOperationManager__SellSSRareWarning_b__52_1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellSSRareWarning(servantCheckWarningDialog, userSvtEntityList, v37, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v24, userSvtEntityList);
  }
  ServantOperationManager__SellMaterialTdWarning(this, v35);
}


void __fastcall ServantOperationManager__SetFilter2Text(
        ServantOperationManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *filter2Label; // x0

  filter2Label = this->fields.filter2Label;
  if ( !filter2Label )
    sub_B5D69C(0LL, text);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onSelect,
    (System_Int32_array **)onSelect,
    (System_String_array **)onSelect,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationManager__SetMode_32553560(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__SetMode_32553560(
        ServantOperationManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v14; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  __int64 v23; // x0

  v5 = this;
  if ( (byte_42EC769 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ServantOperationListViewItem___ctor__, mode, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_ServantOperationListViewItem__TypeInfo, v6, v7, v8);
    this = (ServantOperationManager_o *)sub_B5D5C4(&Method_ServantOperationManager_OnSelectServant__, v9, v10, v11);
    byte_42EC769 = 1;
  }
  servantOperationListViewManager = v5->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v5->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v23 = sub_B5D6C8(this);
    sub_B5D668(v23, 0LL);
  }
  v14 = servantOperationListViewManager->m_Items[kind];
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ServantOperationListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_ServantOperationManager_OnSelectServant__,
    (const MethodInfo_258B320 *)Method_System_Action_ServantOperationListViewItem___ctor__);
  if ( !v14 )
LABEL_7:
    sub_B5D69C(this, *(_QWORD *)&mode);
  v14->fields.onSelectServant = (struct System_Action_ServantOperationListViewItem__o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v14->fields.onSelectServant,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ServantOperationListViewManager__SetMode_32530004(v14, mode, v22);
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
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, state);
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
        v7 = sub_B5D6C8(this);
        sub_B5D668(v7, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&selectNum);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantOperationManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D6A & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationManager___c_TypeInfo, v1, v2, v3);
    byte_42E5D6A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantOperationManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantOperationManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantOperationManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  return NpCombineControl__CheckConfirm_26143828(x, 0LL);
}


bool __fastcall ServantOperationManager___c___SellSSRareWarning_b__52_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42E5D6B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E5D6B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_13;
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v18 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v18;
  *(_QWORD *)&v20.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v20, 0LL);
  if ( !v16
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v16,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(Instance, v15);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v19; // x20

  if ( (byte_42E5D6C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flag, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__, v9, v10, v11);
    sub_B5D5C4(&ServantOperationManager___c__DisplayClass44_1_TypeInfo, v12, v13, v14);
    byte_42E5D6C = 1;
  }
  v15 = sub_B5D694(ServantOperationManager___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 24) = this,
        sub_B5D560(v15 + 24),
        *(_BYTE *)(v15 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v15,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v16, v17);
  }
  CommonUI__CloseConfirmDialog_18202348(Instance, v19, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantOperationManager___c__DisplayClass44_1_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ServantOperationManager___c__DisplayClass44_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *equipedMaterialList; // x19
  struct ServantOperationManager_o *_4__this; // x20
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x21
  __int64 v15; // x22
  __int64 v16; // x9

  v4 = this;
  if ( (byte_42E5D6D & 1) == 0 )
  {
    sub_B5D5C4(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v5, v6, v7);
    this = (ServantOperationManager___c__DisplayClass44_1_o *)sub_B5D5C4(
                                                                &Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
                                                                v8,
                                                                v9,
                                                                v10);
    byte_42E5D6D = 1;
  }
  if ( v4->fields.flag )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
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
      v15 = sub_B5D694(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      v16 = *(_QWORD *)Method_ServantOperationManager_ConfirmServantCheckEquipDialog__;
      *(_QWORD *)(v15 + 40) = Method_ServantOperationManager_ConfirmServantCheckEquipDialog__;
      *(_QWORD *)(v15 + 16) = v16;
      *(_QWORD *)(v15 + 32) = _4__this;
      sub_B5D560(v15 + 32);
      if ( servantCheckEquipDialog )
      {
        ServantCheckEquipDialog__Open_26956892(
          servantCheckEquipDialog,
          equipedMaterialList,
          (ServantCheckEquipDialog_ClickDelegate_o *)v15,
          0LL);
        return;
      }
LABEL_12:
      sub_B5D69C(this, method);
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
      sub_B5D69C(this, decide);
    ServantOperationManager__SellSSRareWarning(this->fields.__4__this, this->fields.userSvtEntityList, 0LL);
  }
}