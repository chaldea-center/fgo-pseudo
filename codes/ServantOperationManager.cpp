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

  if ( (byte_418B2DA & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Action_ServantOperationManager_ActionKind__long____long____Invoke__,
      *(_QWORD *)&actionKind);
    byte_418B2DA = 1;
  }
  onSelect = this->fields.onSelect;
  p_onSelect = (BattleServantConfConponent_o *)&this->fields.onSelect;
  v13 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)onSelect;
  if ( onSelect )
  {
    p_onSelect->klass = 0LL;
    sub_B2C2F8(
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
      (const MethodInfo_24CB280 *)Method_System_Action_ServantOperationManager_ActionKind__long____long____Invoke__);
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
  struct ServantOperationListViewManager_array *v15; // x8
  __int64 v16; // x9
  __int64 v17; // x0

  v4 = this;
  if ( (byte_418B2CD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, *(_QWORD *)&kind);
    sub_B2C35C(&System_Action_bool__TypeInfo, v5);
    this = (ServantOperationManager_o *)sub_B2C35C(&Method_ServantOperationListViewManager_EndClickTabStatus__, v6);
    byte_418B2CD = 1;
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
    v10 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v10,
      (Il2CppObject *)v9,
      Method_ServantOperationListViewManager_EndClickTabStatus__,
      (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
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
    v17 = sub_B2C460(this);
    sub_B2C400(v17, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v14];
  if ( !this
    || (this = (ServantOperationManager_o *)((__int64 (__fastcall *)(ServantOperationManager_o *, void *))this->klass[1]._1.namespaze)(
                                              this,
                                              this->klass[1]._1.byval_arg.data),
        (v15 = v4->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&kind);
  }
  v16 = v4->fields.kind;
  if ( (unsigned int)v16 >= v15->max_length )
    goto LABEL_23;
  this = (ServantOperationManager_o *)v15->m_Items[v16];
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
  __int64 v5; // x1
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  ServantCheckEquipDialog_ClickDelegate_o *v7; // x21

  v4 = this;
  if ( (byte_418B2D2 & 1) == 0 )
  {
    sub_B2C35C(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, isDecide);
    this = (ServantOperationManager_o *)sub_B2C35C(&Method_ServantOperationManager_EndServantCheckEquip__, v5);
    byte_418B2D2 = 1;
  }
  servantCheckEquipDialog = v4->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v7 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B2C42C(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
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
    sub_B2C434(this, isDecide);
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
  __int64 v14; // x1
  UILabel_o *mpDataLabel; // x21
  UILabel_o *rpDataLabel; // x21
  int32_t Count; // w21
  BalanceConfig_c *v18; // x0
  int ServantSellSelectMax; // w21
  UILabel_o *selectDoneLabel; // x21
  System_String_o *v21; // x22
  Il2CppObject *v22; // x23
  Il2CppObject *v23; // x0
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  const MethodInfo *v25; // x3
  struct ServantOperationListViewManager_array *v26; // x8
  struct ServantOperationListViewManager_array *v27; // x8
  const MethodInfo *v28; // x3
  struct ServantOperationListViewManager_array *v29; // x8
  struct ServantOperationListViewManager_array *v30; // x8
  const MethodInfo *v31; // x3
  struct ServantOperationListViewManager_array *v32; // x8
  const MethodInfo *v33; // x2
  __int64 v34; // x0
  int32_t SelectMax_k__BackingField; // [xsp+0h] [xbp-40h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418B2CC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v10);
    byte_418B2CC = 1;
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
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !NumberFormat )
    goto LABEL_47;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)NumberFormat, 0LL);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !NumberFormat )
    goto LABEL_47;
  UserServantMaster__getCount((UserServantMaster_o *)NumberFormat, &servantEquipSum[1], servantEquipSum, 0, 0LL);
  v18 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + Count + servantEquipSum[0];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v18->static_fields->ServantSellSelectMax )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      ServantSellSelectMax = v18->static_fields->ServantSellSelectMax;
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
      }
    }
    else
    {
      ServantSellSelectMax = v18->static_fields->ServantSellSelectMax;
    }
  }
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  NumberFormat = System_String__Format_44301068(v21, v22, v23, 0LL);
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
  v26 = this->fields.servantOperationListViewManager;
  if ( !v26 )
    goto LABEL_47;
  if ( !v26->max_length )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v26->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 0, 0, v25);
  v27 = this->fields.servantOperationListViewManager;
  if ( !v27 )
    goto LABEL_47;
  if ( v27->max_length <= 1 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v27->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_47;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0LL);
  if ( !NumberFormat )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
  v29 = this->fields.servantOperationListViewManager;
  if ( !v29 )
    goto LABEL_47;
  if ( v29->max_length <= 1 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v29->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 1, 0, v28);
  v30 = this->fields.servantOperationListViewManager;
  if ( !v30 )
    goto LABEL_47;
  if ( v30->max_length <= 2 )
    goto LABEL_48;
  NumberFormat = (System_String_o *)v30->m_Items[2];
  if ( !NumberFormat
    || (NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)NumberFormat,
                                            0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL),
        (v32 = this->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_47:
    sub_B2C434(NumberFormat, v14);
  }
  if ( v32->max_length <= 2 )
  {
LABEL_48:
    v34 = sub_B2C460(NumberFormat);
    sub_B2C400(v34, 0LL);
  }
  NumberFormat = (System_String_o *)v32->m_Items[2];
  if ( !NumberFormat )
    goto LABEL_47;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 2, 0, v31);
  ServantOperationManager__ChangeList(this, kind, v33);
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
        v5 = sub_B2C460(this);
        sub_B2C400(v5, 0LL);
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
    sub_B2C434(this, method);
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
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B2C434(this, isDecide);
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
    sub_B2C434(0LL, isDecide);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B2C434(this, svtId);
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
  System_Collections_Generic_List_int__o *v23; // x21
  System_Collections_Generic_Dictionary_int__int__o *v24; // x22
  int32_t v25; // w8
  int32_t i; // w20
  ServantOperationListViewItem_o *v27; // x26
  int32_t v28; // w8
  int32_t SvtId_k__BackingField; // w24
  __int64 v30; // x28
  int32_t v31; // w25
  ServantOperationListViewItem_o *v32; // x8
  int32_t v33; // w9
  bool v34; // zf
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x24
  unsigned int v37; // w28
  UserServantEntity_o *v38; // x25
  __int64 v39; // x26
  __int64 v40; // x27
  __int64 v41; // x25
  __int64 v42; // x26
  int32_t v43; // w8
  unsigned int v44; // w20
  ServantOperationListViewItem_o *v45; // x9
  signed __int64 v46; // x8
  int32_t v47; // w23
  int v48; // w26
  unsigned __int64 v49; // x27
  int32_t v50; // w9
  __int64 v52; // x0
  System_Collections_Generic_List_int__o *v53; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_418B2D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    this = (ServantOperationManager_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418B2D1 = 1;
  }
  if ( !selectEquipedCommandCodeServantList )
    goto LABEL_66;
  size = selectEquipedCommandCodeServantList->fields._size;
  v21 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_66;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v23 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v24,
      (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v25 = selectEquipedCommandCodeServantList->fields._size;
    v53 = v21;
    if ( v25 >= 1 )
    {
      for ( i = 0; i < v25; ++i )
      {
        if ( v25 <= (unsigned int)i )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v27 = selectEquipedCommandCodeServantList->fields._items->m_Items[i];
        if ( !v27 || !v24 )
          goto LABEL_66;
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                              v24,
                                              v27->fields._SvtId_k__BackingField,
                                              (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v28 = selectEquipedCommandCodeServantList->fields._size;
          SvtId_k__BackingField = v27->fields._SvtId_k__BackingField;
          if ( v28 >= 1 )
          {
            v30 = 0LL;
            v31 = 0;
            while ( 1 )
            {
              if ( v28 <= (unsigned int)v30 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v32 = selectEquipedCommandCodeServantList->fields._items->m_Items[v30];
              if ( !v32 )
                break;
              v33 = v32->fields._SvtId_k__BackingField;
              v28 = selectEquipedCommandCodeServantList->fields._size;
              ++v30;
              v34 = SvtId_k__BackingField == v33;
              SvtId_k__BackingField = v27->fields._SvtId_k__BackingField;
              if ( v34 )
                ++v31;
              if ( (int)v30 >= v28 )
                goto LABEL_24;
            }
LABEL_66:
            sub_B2C434(this, selectEquipedCommandCodeServantList);
          }
          v31 = 0;
LABEL_24:
          System_Collections_Generic_Dictionary_int__int___Add(
            v24,
            SvtId_k__BackingField,
            v31,
            (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        v25 = selectEquipedCommandCodeServantList->fields._size;
      }
    }
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_66;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_66;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
      v37 = 0;
      do
      {
        if ( v37 >= max_length )
        {
          v52 = sub_B2C460(this);
          sub_B2C400(v52, 0LL);
        }
        v38 = AllList->m_Items[v37];
        if ( !v38 )
          goto LABEL_66;
        v40 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
        v39 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v54.fields.currentCryptoKey = v40;
        *(_QWORD *)&v54.fields.fakeValue = v39;
        this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v54,
                                              0LL);
        if ( !v36 )
          goto LABEL_66;
        this = (ServantOperationManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v36,
                                              (int32_t)this,
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_66;
        this = (ServantOperationManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ServantOperationManager_o *)UserServantEntity__IsEventJoin(v38, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v42 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
            v41 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v55.fields.currentCryptoKey = v42;
            *(_QWORD *)&v55.fields.fakeValue = v41;
            this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                  v55,
                                                  0LL);
            if ( !v23 )
              goto LABEL_66;
            System_Collections_Generic_List_int___Add(
              v23,
              (int32_t)this,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v37 < max_length );
    }
    v43 = selectEquipedCommandCodeServantList->fields._size;
    v21 = v53;
    if ( v43 >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v43 <= v44 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v45 = selectEquipedCommandCodeServantList->fields._items->m_Items[v44];
        if ( !v45 || !v23 )
          goto LABEL_66;
        LODWORD(v46) = v23->fields._size;
        v47 = v45->fields._SvtId_k__BackingField;
        if ( (int)v46 < 1 )
        {
          v48 = 0;
          if ( !v24 )
            goto LABEL_66;
        }
        else
        {
          v48 = 0;
          v49 = 0LL;
          do
          {
            if ( v49 >= (unsigned int)v46 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v50 = v23->fields._items->m_Items[v49 + 1];
            v46 = v23->fields._size;
            ++v49;
            if ( v47 == v50 )
              ++v48;
          }
          while ( (__int64)v49 < v46 );
          if ( !v24 )
            goto LABEL_66;
        }
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v24,
                                              v47,
                                              (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v48 )
        {
          if ( !v53 )
            goto LABEL_66;
          System_Collections_Generic_List_int___Add(
            v53,
            v47,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v43 = selectEquipedCommandCodeServantList->fields._size;
        if ( (int)++v44 >= v43 )
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
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[0];
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
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
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[2];
  if ( !this )
LABEL_5:
    sub_B2C434(this, id);
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
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
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
    sub_B2C434(this, id);
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
    sub_B2C434(allReleaseButton, method);
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
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  v5 = &servantOperationListViewManager->obj.klass + kind;
  v6 = (ServantOperationListViewManager_o *)v5[4];
  if ( !v6 )
LABEL_5:
    sub_B2C434(this, method);
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
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B2C434(this, selectedId);
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
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
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
    sub_B2C434(this, userSvtId);
  }
}


void __fastcall ServantOperationManager__OnClickDecide(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  __int64 v32; // x20
  ServantOperationListViewManager_o *SelectedServantIdList; // x0
  const MethodInfo *v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_long__o *v41; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_List_long__o *v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  System_Collections_Generic_List_long__o *v57; // x23
  struct ServantOperationListViewManager_array *v58; // x8
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x23
  struct ServantOperationListViewManager_array *v60; // x8
  System_Collections_Generic_List_long__o *selectUserCommandCodeIdList; // x23
  struct ServantOperationListViewManager_array *v62; // x8
  struct ServantOperationListViewManager_array *v63; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *v64; // x24
  System_Int32_array **EquipMaterialList; // x0
  System_Collections_Generic_List_ServantOperationListViewItem__o **v66; // x23
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  ServantOperationManager_o *v73; // x0
  const MethodInfo *v74; // x2
  int dropObjectList; // w8
  int v76; // w25
  Il2CppObject *current; // x24
  WebViewManager_o *Instance; // x0
  __int64 v79; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v81; // x1
  UserServantEntity_o *Entity; // x0
  __int64 v83; // x1
  Il2CppObject *v84; // x21
  System_String_o *v85; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCombineExpCampaign; // x0
  EventCampaignEntity_o *v87; // x8
  System_String_o *v88; // x0
  System_String_o *v89; // x21
  CommonUI_o *v90; // x22
  System_String_o *v91; // x23
  System_String_o *v92; // x24
  CommonConfirmDialog_ClickDelegate_o *v93; // x25
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v95; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v96; // x22
  int32_t v97; // w0
  const MethodInfo *v98; // x1
  __int64 v99; // x0
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v101; // [xsp+30h] [xbp-90h] BYREF
  int v102; // [xsp+4Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v103; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_418B2D0 & 1) == 0 )
  {
    sub_B2C35C(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__AddRange__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_B2C35C(&SoundManager_TypeInfo, v24);
    sub_B2C35C(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__, v25);
    sub_B2C35C(&ServantOperationManager___c__DisplayClass44_0_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_5756/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, v27);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v28);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v29);
    sub_B2C35C(&StringLiteral_5754/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, v30);
    sub_B2C35C(&StringLiteral_1/*""*/, v31);
    byte_418B2D0 = 1;
  }
  memset(&v103, 0, sizeof(v103));
  v102 = 0;
  v32 = sub_B2C42C(ServantOperationManager___c__DisplayClass44_0_TypeInfo);
  ServantOperationManager___c__DisplayClass44_0___ctor((ServantOperationManager___c__DisplayClass44_0_o *)v32, 0LL);
  if ( !v32 )
    goto LABEL_75;
  *(_QWORD *)(v32 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 24), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v41 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v41,
      (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v41;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.selectUserServantIdList,
      (System_Int32_array **)v41,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    v49 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v49,
      (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v49;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.selectUserCommandCodeIdList,
      (System_Int32_array **)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_75;
    if ( !servantOperationListViewManager->max_length )
      goto LABEL_76;
    SelectedServantIdList = servantOperationListViewManager->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    v57 = *p_selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v34);
    if ( !v57 )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      v57,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
    v58 = this->fields.servantOperationListViewManager;
    if ( !v58 )
      goto LABEL_75;
    if ( v58->max_length <= 1 )
      goto LABEL_76;
    SelectedServantIdList = v58->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    selectUserServantIdList = this->fields.selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v34);
    if ( !selectUserServantIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      selectUserServantIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
    v60 = this->fields.servantOperationListViewManager;
    if ( !v60 )
      goto LABEL_75;
    if ( v60->max_length <= 2 )
      goto LABEL_76;
    SelectedServantIdList = v60->m_Items[2];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    selectUserCommandCodeIdList = this->fields.selectUserCommandCodeIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedCommandCodeIdList(
                                                                   SelectedServantIdList,
                                                                   v34);
    if ( !selectUserCommandCodeIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___AddRange(
      selectUserCommandCodeIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
    v62 = this->fields.servantOperationListViewManager;
    if ( !v62 )
      goto LABEL_75;
    if ( !v62->max_length )
      goto LABEL_76;
    SelectedServantIdList = v62->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                                                   SelectedServantIdList,
                                                                   v34);
    v63 = this->fields.servantOperationListViewManager;
    if ( !v63 )
      goto LABEL_75;
    if ( v63->max_length <= 1 )
    {
LABEL_76:
      v99 = sub_B2C460(SelectedServantIdList);
      sub_B2C400(v99, 0LL);
    }
    v64 = (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedServantIdList;
    SelectedServantIdList = v63->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_75;
    EquipMaterialList = (System_Int32_array **)ServantOperationListViewManager__GetEquipMaterialList(
                                                 SelectedServantIdList,
                                                 v34);
    *(_QWORD *)(v32 + 16) = EquipMaterialList;
    v66 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v32 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 16), EquipMaterialList, v67, v68, v69, v70, v71, v72);
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                                                   v73,
                                                                   v64,
                                                                   v74);
    if ( !SelectedServantIdList )
      goto LABEL_75;
    dropObjectList = (int)SelectedServantIdList->fields.dropObjectList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = dropObjectList > 0;
    if ( !SelectedServantIdList )
      goto LABEL_75;
    System_Collections_Generic_List_long___GetEnumerator(
      &v101,
      (System_Collections_Generic_List_long__o *)SelectedServantIdList,
      (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v103 = v101;
    v76 = 0;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v103,
              (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v103.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v79);
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(0LL, v81);
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)current,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_B2C434(0LL, v83);
      v76 |= UserServantEntity__IsExchangeSvt(Entity, 0LL);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v103,
      (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v76 & 1) != 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v84 = (Il2CppObject *)StringLiteral_1/*""*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_5754/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      SelectedServantIdList = (ServantOperationListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( SelectedServantIdList )
      {
        ExchangeSvtCombineExpCampaign = EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                          (EventCampaignMaster_o *)SelectedServantIdList,
                                          0LL);
        if ( ExchangeSvtCombineExpCampaign )
        {
          if ( ExchangeSvtCombineExpCampaign->fields._size >= 1 )
          {
            v87 = ExchangeSvtCombineExpCampaign->fields._items->m_Items[0];
            if ( v87 )
            {
              v102 = v87->fields.value / 1000;
              v84 = (Il2CppObject *)System_Int32__ToString((int32_t)&v102, 0LL);
            }
          }
        }
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v88 = LocalizationManager__Get((System_String_o *)StringLiteral_5756/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, 0LL);
        v89 = System_String__Format_44301068(v88, v84, v84, 0LL);
        v90 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v91 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
        v92 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
        v93 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v93,
          (Il2CppObject *)v32,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0LL);
        if ( v90 )
        {
          CommonUI__OpenConfirmDecideDlg(v90, v85, v89, v91, v92, v93, 24, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
          return;
        }
      }
LABEL_75:
      sub_B2C434(SelectedServantIdList, v34);
    }
    if ( !*v66 )
      goto LABEL_75;
    if ( (*v66)->fields._size < 1 )
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
        v97 = 2;
      }
      else
      {
LABEL_79:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v97 = 0;
      }
      SoundManager__playSystemSe(v97, 0LL);
      ServantOperationManager__SellCombineWarning(this, v98);
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
      v95 = *v66;
      v96 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_B2C42C(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v96,
        (Il2CppObject *)this,
        (intptr_t)Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( !servantCheckEquipDialog )
        goto LABEL_75;
      ServantCheckEquipDialog__Open_25384440(servantCheckEquipDialog, v95, v96, 0LL);
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
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
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
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
  ServantOperationListViewManager__OnClickFilterKind((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_418B2D7 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B2D7 = 1;
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
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
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
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
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
  System_Collections_Generic_List_long__o *v9; // x20
  int64_t UserCommandCodeId; // x0
  const MethodInfo *v11; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v14; // x8
  System_Int64_array *v15; // x21
  System_Int64_array *v16; // x3
  const MethodInfo *v17; // x4
  __int64 v18; // x0

  if ( (byte_418B2D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, selectItem);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_418B2D9 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v9 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_14;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v18 = sub_B2C460(UserCommandCodeId);
    sub_B2C400(v18, 0LL);
  }
  v14 = servantOperationListViewManager->m_Items[kind];
  if ( !v14 || !selectItem )
    goto LABEL_14;
  if ( v14->fields.kind == 2 )
  {
    UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(selectItem, v11);
    if ( v9 )
    {
      System_Collections_Generic_List_long___Add(
        v9,
        UserCommandCodeId,
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      if ( v8 )
      {
        UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                       v8,
                                       (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_B2C434(UserCommandCodeId, v11);
  }
  UserCommandCodeId = ServantOperationListViewItem__get_UserSvtId(selectItem, v11);
  if ( !v8 )
    goto LABEL_14;
  System_Collections_Generic_List_long___Add(
    v8,
    UserCommandCodeId,
    (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
  UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                 v8,
                                 (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v9 )
    goto LABEL_14;
LABEL_13:
  v15 = (System_Int64_array *)UserCommandCodeId;
  v16 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v15, v16, v17);
}


void __fastcall ServantOperationManager__OpenSellConfirmDialog(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v4; // x20
  System_Int64_array *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_418B2D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, method);
    byte_418B2D6 = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (selectUserServantIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                               selectUserServantIdList,
                                                                               (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_B2C434(selectUserServantIdList, method);
  }
  v4 = (System_Int64_array *)selectUserServantIdList;
  v5 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  if ( (byte_418B2CE & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_418B2CE = 1;
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
        v14 = sub_B2C460(this);
        sub_B2C400(v14, 0LL);
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
    sub_B2C434(this, method);
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
  if ( (byte_418B2D8 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    this = (ServantOperationManager_o *)sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v4);
    byte_418B2D8 = 1;
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
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
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
    sub_B2C434(this, method);
  }
LABEL_9:
  selectDoneLabel = v2->fields.selectDoneLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = v2->fields._TotalSum_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = v2->fields._SelectMax_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  this = (ServantOperationManager_o *)System_String__Format_44301068(v9, v10, v11, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_15;
  UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
  ServantOperationManager__RefrashListDisp(v2, v12);
}


void __fastcall ServantOperationManager__SellCombineWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  __int64 v21; // x20
  void *v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v32; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  Il2CppObject *current; // x22
  WebViewManager_o *Instance; // x0
  __int64 v42; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v44; // x1
  UserServantEntity_o *Entity; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x22
  struct ServantOperationManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x23
  Il2CppObject *v49; // x24
  struct ServantOperationManager___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x19
  System_Collections_Generic_List_UserServantEntity__o *v59; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v60; // x22
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418B2D3 & 1) == 0 )
  {
    sub_B2C35C(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67325000, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_B2C35C(&Method_System_Predicate_UserServantEntity___ctor__, v14);
    sub_B2C35C(&System_Predicate_UserServantEntity__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, v17);
    sub_B2C35C(&Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__, v18);
    sub_B2C35C(&ServantOperationManager___c__DisplayClass51_0_TypeInfo, v19);
    sub_B2C35C(&ServantOperationManager___c_TypeInfo, v20);
    byte_418B2D3 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v21 = sub_B2C42C(ServantOperationManager___c__DisplayClass51_0_TypeInfo);
  ServantOperationManager___c__DisplayClass51_0___ctor((ServantOperationManager___c__DisplayClass51_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_29;
  *(_QWORD *)(v21 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_29;
  size = selectUserServantIdList->fields._size;
  v32 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v32,
    size,
    (const MethodInfo_2EF386C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67325000);
  *(_QWORD *)(v21 + 24) = v32;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v21 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)v32, v34, v35, v36, v37, v38, v39);
  v22 = this->fields.selectUserServantIdList;
  if ( !v22 )
    goto LABEL_29;
  System_Collections_Generic_List_long___GetEnumerator(
    &v61,
    (System_Collections_Generic_List_long__o *)v22,
    (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v62 = v61;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v62,
            (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v62.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v42);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(0LL, v44);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !*v33 )
      sub_B2C434(0LL, Entity);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *v33,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v62,
    (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v46 = *v33;
  v22 = ServantOperationManager___c_TypeInfo;
  if ( (BYTE3(ServantOperationManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v22 = ServantOperationManager___c_TypeInfo;
  }
  static_fields = (struct ServantOperationManager___c_StaticFields *)*((_QWORD *)v22 + 23);
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (*((_BYTE *)v22 + 307) & 4) != 0 && !*((_DWORD *)v22 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v49,
      Method_ServantOperationManager___c__SellCombineWarning_b__51_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_UserServantEntity___ctor__);
    v50 = ServantOperationManager___c_TypeInfo->static_fields;
    v50->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)_9__51_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v50->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v46 )
    goto LABEL_29;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v46,
         (System_Predicate_T__o *)_9__51_0,
         (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v59 = *(System_Collections_Generic_List_UserServantEntity__o **)(v21 + 24);
    v60 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B2C42C(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v60,
      (Il2CppObject *)v21,
      Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(servantCheckWarningDialog, v59, v60, 0LL);
      return;
    }
LABEL_29:
    sub_B2C434(v22, v23);
  }
  ServantOperationManager__SellSSRareWarning(this, (System_Collections_Generic_List_UserServantEntity__o *)*v33, v57);
}


void __fastcall ServantOperationManager__SellMaterialTdWarning(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x20
  __int64 v3; // x1
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
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  Il2CppObject *current; // x21
  WebViewManager_o *Instance; // x0
  __int64 v27; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v29; // x1
  UserServantEntity_o *Entity; // x0
  __int64 v31; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x21
  WebViewManager_o *v33; // x0
  __int64 v34; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x22
  void *monitor; // x23
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x24
  __int64 v38; // x0
  WarEntity_o *v39; // x22
  WebViewManager_o *v40; // x0
  __int64 v41; // x1
  UserServantCollectionMaster_o *v42; // x23
  int64_t UserId; // x0
  __int64 v44; // x1
  int64_t v45; // x24
  __int64 v46; // x0
  __int64 v47; // x1
  UserServantCollectionEntity_o *v48; // x0
  UserServantCollectionEntity_o *v49; // x22
  WebViewManager_o *v50; // x0
  __int64 v51; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x0
  __int64 v53; // x1
  WarEntity_o *v54; // x0
  __int64 v55; // x1
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v57; // x22
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v58; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+10h] [xbp-90h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v2 = this;
  if ( (byte_418B2D5 & 1) == 0 )
  {
    sub_B2C35C(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67325000, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v17);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v18);
    sub_B2C35C(&NetworkManager_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__, v21);
    this = (ServantOperationManager_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_418B2D5 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  tdInfo = 0LL;
  selectUserServantIdList = v2->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_49;
  size = selectUserServantIdList->fields._size;
  v58 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
    v58,
    size,
    (const MethodInfo_2EF386C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67325000);
  this = (ServantOperationManager_o *)v2->fields.selectUserServantIdList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_long___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v61 = v59;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v61,
            (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v61.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v27);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(0LL, v29);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)Entity;
    if ( !Entity )
      sub_B2C434(0LL, v31);
    if ( UserServantEntity__IsMaterialTd(Entity, 0LL) )
    {
      v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v33 )
        sub_B2C434(0LL, v34);
      v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v33,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v32[2].klass;
      monitor = v32[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v62.fields.currentCryptoKey = klass;
      *(_QWORD *)&v62.fields.fakeValue = monitor;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v62, 0LL);
      if ( !v35 )
        sub_B2C434(v38, (unsigned int)v38);
      v39 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v35,
              v38,
              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v40 )
        sub_B2C434(0LL, v41);
      v42 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v40,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v39 )
        sub_B2C434(UserId, v44);
      v45 = UserId;
      v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v39->fields.name,
              0LL);
      if ( !v42 )
        sub_B2C434(v46, v47);
      v48 = UserServantCollectionMaster__GetEntity(v42, v45, v46, 0LL);
      v49 = v48;
      if ( v48 && UserServantCollectionEntity__IsGet(v48, 0LL) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v49, &tdInfo, -1, -1, 0LL);
        v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v50 )
          sub_B2C434(0LL, v51);
        v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v50,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_B2C434(v52, v53);
        if ( !v52 )
          sub_B2C434(0LL, v53);
        v54 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v52,
                tdInfo->fields.id,
                (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v54 )
          sub_B2C434(0LL, v55);
        if ( v49->fields.treasureDeviceLv1 != v54->fields.bannerId )
        {
          if ( !v58 )
            sub_B2C434(0LL, v55);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v58,
            v32,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v61,
    (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v58 )
    goto LABEL_49;
  if ( v58->fields._size >= 1 )
  {
    servantCheckWarningDialog = v2->fields.servantCheckWarningDialog;
    v57 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B2C42C(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v57,
      (Il2CppObject *)v2,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        servantCheckWarningDialog,
        (System_Collections_Generic_List_UserServantEntity__o *)v58,
        v57,
        0LL);
      return;
    }
LABEL_49:
    sub_B2C434(this, method);
  }
  ServantOperationManager__OpenSellConfirmDialog(v2, method);
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
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v24; // x22

  if ( (byte_418B2D4 & 1) == 0 )
  {
    sub_B2C35C(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, userSvtEntityList);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v5);
    sub_B2C35C(&Method_System_Predicate_UserServantEntity___ctor__, v6);
    sub_B2C35C(&System_Predicate_UserServantEntity__TypeInfo, v7);
    sub_B2C35C(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__, v8);
    sub_B2C35C(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, v9);
    sub_B2C35C(&ServantOperationManager___c_TypeInfo, v10);
    byte_418B2D4 = 1;
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
    _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_0,
      v14,
      Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_UserServantEntity___ctor__);
    v15 = ServantOperationManager___c_TypeInfo->static_fields;
    v15->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_B2C2F8(
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
         (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v24 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_B2C42C(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v24,
      (Il2CppObject *)this,
      Method_ServantOperationManager__SellSSRareWarning_b__52_1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellSSRareWarning(servantCheckWarningDialog, userSvtEntityList, v24, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(v11, userSvtEntityList);
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
    sub_B2C434(0LL, text);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onSelect,
    (System_Int32_array **)onSelect,
    (System_String_array **)onSelect,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantOperationManager__SetMode_31625584(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__SetMode_31625584(
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
  if ( (byte_418B2CF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantOperationListViewItem___ctor__, *(_QWORD *)&mode);
    sub_B2C35C(&System_Action_ServantOperationListViewItem__TypeInfo, v5);
    this = (ServantOperationManager_o *)sub_B2C35C(&Method_ServantOperationManager_OnSelectServant__, v6);
    byte_418B2CF = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v4->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
  {
    v18 = sub_B2C460(this);
    sub_B2C400(v18, 0LL);
  }
  v9 = servantOperationListViewManager->m_Items[kind];
  v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ServantOperationListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v10,
    (Il2CppObject *)v4,
    Method_ServantOperationManager_OnSelectServant__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_ServantOperationListViewItem___ctor__);
  if ( !v9 )
LABEL_7:
    sub_B2C434(this, *(_QWORD *)&mode);
  v9->fields.onSelectServant = (struct System_Action_ServantOperationListViewItem__o *)v10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v9->fields.onSelectServant,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantOperationListViewManager__SetMode_31602028(v9, mode, v17);
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
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, state);
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
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&selectNum);
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
  Il2CppObject *v2; // x19
  struct ServantOperationManager___c_StaticFields *static_fields; // x0

  if ( (byte_41853F8 & 1) == 0 )
  {
    sub_B2C35C(&ServantOperationManager___c_TypeInfo, v1);
    byte_41853F8 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantOperationManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantOperationManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantOperationManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  return NpCombineControl__CheckConfirm_26337500(x, 0LL);
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
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_41853F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, x);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_41853F9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_13;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v11 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v11;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v9
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v9,
                                      (int32_t)Instance,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_B2C434(Instance, v8);
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
  __int64 v10; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v12; // x20

  if ( (byte_41853FA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, flag);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__, v6);
    sub_B2C35C(&ServantOperationManager___c__DisplayClass44_1_TypeInfo, v7);
    byte_41853FA = 1;
  }
  v8 = sub_B2C42C(ServantOperationManager___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_B2C2F8(v8 + 24, this),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v8,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v9, v10);
  }
  CommonUI__CloseConfirmDialog_17971588(Instance, v12, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantOperationManager___c__DisplayClass44_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *equipedMaterialList; // x19
  struct ServantOperationManager_o *_4__this; // x20
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x21
  __int64 v9; // x22
  __int64 v10; // x9

  v2 = this;
  if ( (byte_41853FB & 1) == 0 )
  {
    sub_B2C35C(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v3);
    this = (ServantOperationManager___c__DisplayClass44_1_o *)sub_B2C35C(
                                                                &Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
                                                                v4);
    byte_41853FB = 1;
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
      v9 = sub_B2C42C(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      v10 = *(_QWORD *)Method_ServantOperationManager_ConfirmServantCheckEquipDialog__;
      *(_QWORD *)(v9 + 40) = Method_ServantOperationManager_ConfirmServantCheckEquipDialog__;
      *(_QWORD *)(v9 + 16) = v10;
      *(_QWORD *)(v9 + 32) = _4__this;
      sub_B2C2F8(v9 + 32, _4__this);
      if ( servantCheckEquipDialog )
      {
        ServantCheckEquipDialog__Open_25384440(
          servantCheckEquipDialog,
          equipedMaterialList,
          (ServantCheckEquipDialog_ClickDelegate_o *)v9,
          0LL);
        return;
      }
LABEL_12:
      sub_B2C434(this, method);
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
      sub_B2C434(this, decide);
    ServantOperationManager__SellSSRareWarning(this->fields.__4__this, this->fields.userSvtEntityList, 0LL);
  }
}