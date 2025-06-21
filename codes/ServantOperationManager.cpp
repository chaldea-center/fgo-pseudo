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
  CGThumbnailListItem_o *p_onSelect; // x0
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *v6; // x22
  struct System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect; // t1

  onSelect = this->fields.onSelect;
  p_onSelect = (CGThumbnailListItem_o *)&this->fields.onSelect;
  v6 = onSelect;
  if ( onSelect )
  {
    p_onSelect->klass = 0LL;
    sub_1BCAF9C(p_onSelect, 0, (int32_t)servants, (const MethodInfo *)commandCodes);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_Int64_array *, System_Int64_array *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      (unsigned int)actionKind,
      servants,
      commandCodes,
      *(_QWORD *)&v6->fields.extra_arg);
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
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v7; // x9
  ServantOperationListViewManager_o *v8; // x21
  System_Action_bool__o *v9; // x22
  const MethodInfo *v10; // x2
  __int64 v11; // x20
  __int64 v12; // x9
  __int64 v13; // x10
  struct ServantOperationListViewManager_array *v14; // x8
  __int64 v15; // x9

  v4 = this;
  if ( (byte_4B186CD & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, *(_QWORD *)&kind);
    this = (ServantOperationManager_o *)sub_1BCAFF8(&Method_ServantOperationListViewManager_EndClickTabStatus__, v5);
    byte_4B186CD = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_16;
  v7 = v4->fields.kind;
  if ( (unsigned int)v7 >= servantOperationListViewManager->max_length )
    goto LABEL_23;
  v8 = servantOperationListViewManager->m_Items[v7];
  if ( !v8 )
    goto LABEL_16;
  if ( v8->fields.modeKind )
  {
    v9 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v9, (Il2CppObject *)v8, Method_ServantOperationListViewManager_EndClickTabStatus__, 0LL);
    ServantOperationListViewManager__StatusRequest(v8, v9, v10);
    servantOperationListViewManager = v4->fields.servantOperationListViewManager;
    v4->fields.kind = kind;
    if ( !servantOperationListViewManager )
      goto LABEL_16;
  }
  else
  {
    v4->fields.kind = kind;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)&servantOperationListViewManager->max_length;
    if ( (int)v11 >= (int)v12 )
      break;
    if ( (unsigned int)v11 >= (unsigned int)v12 )
      goto LABEL_23;
    this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v11];
    if ( this )
    {
      this = (ServantOperationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (_DWORD)v11 == v4->fields.kind, 0LL);
        servantOperationListViewManager = v4->fields.servantOperationListViewManager;
        ++v11;
        if ( servantOperationListViewManager )
          continue;
      }
    }
    goto LABEL_16;
  }
  v13 = v4->fields.kind;
  if ( (unsigned int)v13 >= (unsigned int)v12 )
LABEL_23:
    sub_1BCB25C(this, *(_QWORD *)&kind, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v13];
  if ( !this
    || (this = (ServantOperationManager_o *)((__int64 (__fastcall *)(ServantOperationManager_o *, void *))this->klass[1]._1.namespaze)(
                                              this,
                                              this->klass[1]._1.byval_arg.data),
        (v14 = v4->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_16:
    sub_1BCB254(this, *(_QWORD *)&kind);
  }
  v15 = v4->fields.kind;
  if ( (unsigned int)v15 >= v14->max_length )
    goto LABEL_23;
  this = (ServantOperationManager_o *)v14->m_Items[v15];
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
  if ( (byte_4B186D2 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, isDecide);
    this = (ServantOperationManager_o *)sub_1BCAFF8(&Method_ServantOperationManager_EndServantCheckEquip__, v5);
    byte_4B186D2 = 1;
  }
  servantCheckEquipDialog = v4->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v7 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1BCB244(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
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
    sub_1BCB254(this, isDecide);
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  __int64 v30; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  const MethodInfo *v32; // x3
  struct ServantOperationListViewManager_array *v33; // x8
  struct ServantOperationListViewManager_array *v34; // x8
  const MethodInfo *v35; // x3
  struct ServantOperationListViewManager_array *v36; // x8
  struct ServantOperationListViewManager_array *v37; // x8
  const MethodInfo *v38; // x3
  struct ServantOperationListViewManager_array *v39; // x8
  const MethodInfo *v40; // x2
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B186CC & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BCAFF8(&int_TypeInfo, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BCAFF8(&StringLiteral_12372/*"SUM_INFO"*/, v10);
    byte_4B186CC = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  ServantOperationManager__Init(this, *(const MethodInfo **)&kind);
  qpDataLabel = this->fields.qpDataLabel;
  totalQP = this->fields.totalQP;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(totalQP, 0LL);
  if ( !qpDataLabel )
    goto LABEL_42;
  UILabel__set_text(qpDataLabel, NumberFormat, 0LL);
  mpDataLabel = this->fields.mpDataLabel;
  NumberFormat = LocalizationManager__GetNumberFormat(this->fields.totalMana, 0LL);
  if ( !mpDataLabel )
    goto LABEL_42;
  UILabel__set_text(mpDataLabel, NumberFormat, 0LL);
  rpDataLabel = this->fields.rpDataLabel;
  NumberFormat = LocalizationManager__GetNumberFormat(this->fields.totalRarePri, 0LL);
  if ( !rpDataLabel )
    goto LABEL_42;
  UILabel__set_text(rpDataLabel, NumberFormat, 0LL);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)NumberFormat, 0LL);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  UserServantMaster__getCount((UserServantMaster_o *)NumberFormat, &servantEquipSum[1], servantEquipSum, 0, 0LL);
  v18 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + Count + servantEquipSum[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v18->static_fields->ServantSellSelectMax )
  {
    ServantSellSelectMax = v18->static_fields->ServantSellSelectMax;
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
    }
  }
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12372/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField, v22, v23, v24);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v26, v27, v28);
  NumberFormat = System_String__Format_62491716(v21, v25, v29, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_42;
  UILabel__set_text(selectDoneLabel, NumberFormat, 0LL);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_42;
  if ( !servantOperationListViewManager->max_length )
    goto LABEL_43;
  NumberFormat = (System_String_o *)servantOperationListViewManager->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0LL);
  if ( !NumberFormat )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
  v33 = this->fields.servantOperationListViewManager;
  if ( !v33 )
    goto LABEL_42;
  if ( !v33->max_length )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v33->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 0, 0, v32);
  v34 = this->fields.servantOperationListViewManager;
  if ( !v34 )
    goto LABEL_42;
  if ( v34->max_length <= 1 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v34->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0LL);
  if ( !NumberFormat )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
  v36 = this->fields.servantOperationListViewManager;
  if ( !v36 )
    goto LABEL_42;
  if ( v36->max_length <= 1 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v36->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 1, 0, v35);
  v37 = this->fields.servantOperationListViewManager;
  if ( !v37 )
    goto LABEL_42;
  if ( v37->max_length <= 2 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v37->m_Items[2];
  if ( !NumberFormat
    || (NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)NumberFormat,
                                            0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL),
        (v39 = this->fields.servantOperationListViewManager) == 0LL) )
  {
LABEL_42:
    sub_1BCB254(NumberFormat, v14);
  }
  if ( v39->max_length <= 2 )
LABEL_43:
    sub_1BCB25C(NumberFormat, v14, v30);
  NumberFormat = (System_String_o *)v39->m_Items[2];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 2, 0, v38);
  ServantOperationManager__ChangeList(this, kind, v40);
}


void __fastcall ServantOperationManager__DestroyList(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x19
  int max_length; // w8
  unsigned int v5; // w20

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
        sub_1BCB25C(this, method, v2);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v5];
      if ( !this )
        break;
      ServantOperationListViewManager__DestroyList((ServantOperationListViewManager_o *)this, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCB254(this, method);
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

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(this, isDecide, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, isDecide);
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
    sub_1BCB254(0LL, isDecide);
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

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(this, *(_QWORD *)&svtId, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, svtId);
  return ServantOperationListViewManager__GetAmountSortValue((ServantOperationListViewManager_o *)this, svtId, method);
}


System_Collections_Generic_List_int__o *__fastcall ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
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
  int32_t size; // w23
  System_Collections_Generic_List_int__o *v21; // x20
  UserServantEntity_array *AllList; // x23
  System_Collections_Generic_List_int__o *v23; // x21
  System_Collections_Generic_Dictionary_int__int__o *v24; // x22
  int32_t i; // w24
  ServantOperationManager_o *v26; // x25
  int32_t servantCheckWarningDialog; // w26
  int32_t v28; // w27
  int32_t v29; // w28
  bool v30; // zf
  __int64 v31; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x24
  unsigned int v34; // w28
  UserServantEntity_o *v35; // x25
  __int64 v36; // x26
  __int64 v37; // x27
  __int64 v38; // x25
  __int64 v39; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  int32_t v43; // w23
  int32_t v44; // w24
  int32_t v45; // w25
  int v46; // w29
  struct System_Int32_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v3 = (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList;
  if ( (byte_4B186D1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, selectEquipedCommandCodeServantList);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v9);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v16);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    this = (ServantOperationManager_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4B186D1 = 1;
  }
  if ( !v3 )
    goto LABEL_62;
  size = v3->fields._size;
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0LL);
    v23 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
    v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v24,
      (const MethodInfo_3317E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( v3->fields._size >= 1 )
    {
      for ( i = 0; i < v3->fields._size; ++i )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              v3,
                                              i,
                                              (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v24 )
          goto LABEL_62;
        v26 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v24,
                (int32_t)this->fields.servantCheckWarningDialog,
                (const MethodInfo_3318A18 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          servantCheckWarningDialog = (int32_t)v26->fields.servantCheckWarningDialog;
          if ( v3->fields._size >= 1 )
          {
            v28 = 0;
            v29 = 0;
            while ( 1 )
            {
              this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v3,
                                                    v29,
                                                    (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
              if ( !this )
                break;
              ++v29;
              v30 = servantCheckWarningDialog == LODWORD(this->fields.servantCheckWarningDialog);
              servantCheckWarningDialog = (int32_t)v26->fields.servantCheckWarningDialog;
              if ( v30 )
                ++v28;
              if ( v29 >= v3->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_1BCB254(this, selectEquipedCommandCodeServantList);
          }
          v28 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v24,
            servantCheckWarningDialog,
            v28,
            (const MethodInfo_331882C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_62;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
      v34 = 0;
      do
      {
        if ( v34 >= max_length )
          sub_1BCB25C(this, selectEquipedCommandCodeServantList, v31);
        v35 = AllList->m_Items[v34];
        if ( !v35 )
          goto LABEL_62;
        v37 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v37;
        *(_QWORD *)&v51.fields.fakeValue = v36;
        this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                              v51,
                                              0LL);
        if ( !v33 )
          goto LABEL_62;
        this = (ServantOperationManager_o *)DataMasterBase_object__object__int___GetEntity(
                                              v33,
                                              (int32_t)this,
                                              (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (ServantOperationManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ServantOperationManager_o *)UserServantEntity__IsEventJoin(v35, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v39 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
            v38 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v52.fields.currentCryptoKey = v39;
            *(_QWORD *)&v52.fields.fakeValue = v38;
            this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                  v52,
                                                  0LL);
            if ( !v23 )
              goto LABEL_62;
            items = v23->fields._items;
            v41 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_62;
            v42 = v23->fields._size;
            selectEquipedCommandCodeServantList = (System_Collections_Generic_List_ServantOperationListViewItem__o *)(unsigned int)this;
            if ( (unsigned int)v42 >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                (int32_t)this,
                *(const MethodInfo_369CBAC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = v42 + 1;
              items->m_Items[v42 + 1] = (int)this;
            }
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v34 < max_length );
    }
    if ( v3->fields._size >= 1 )
    {
      v43 = 0;
      while ( 1 )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              v3,
                                              v43,
                                              (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v23 )
          goto LABEL_62;
        v44 = (int32_t)this->fields.servantCheckWarningDialog;
        if ( v23->fields._size < 1 )
        {
          v46 = 0;
          if ( !v24 )
            goto LABEL_62;
        }
        else
        {
          v45 = 0;
          v46 = 0;
          do
          {
            this = (ServantOperationManager_o *)System_Collections_Generic_List_int___get_Item(
                                                  v23,
                                                  v45++,
                                                  (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v44 == (_DWORD)this )
              ++v46;
          }
          while ( v45 < v23->fields._size );
          if ( !v24 )
            goto LABEL_62;
        }
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v24,
                                              v44,
                                              (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v46 )
        {
          if ( !v21 )
            goto LABEL_62;
          v47 = v21->fields._items;
          v48 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !v47 )
            goto LABEL_62;
          v49 = v21->fields._size;
          if ( (unsigned int)v49 >= v47->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              v44,
              *(const MethodInfo_369CBAC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = v49 + 1;
            v47->m_Items[v49 + 1] = v44;
          }
        }
        if ( ++v43 >= v3->fields._size )
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
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( !servantOperationListViewManager->max_length )
    sub_1BCB25C(this, method, v2);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[0];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, method);
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

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( servantOperationListViewManager->max_length <= 2 )
    sub_1BCB25C(this, id, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[2];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, id);
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
        sub_1BCB25C(this, id, method);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      if ( HIDWORD(this[2].fields.filter2Button) != 2 )
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
    sub_1BCB254(this, id);
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
    sub_1BCB254(allReleaseButton, method);
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

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(this, method, v2);
  v5 = &servantOperationListViewManager->obj.klass + kind;
  v6 = (ServantOperationListViewManager_o *)v5[4];
  if ( !v6 )
LABEL_5:
    sub_1BCB254(this, method);
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

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(this, selectedId, method);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, selectedId);
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
        sub_1BCB25C(this, userSvtId, method);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, userSvtId, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCB254(this, userSvtId);
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
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_long__o *v37; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_List_long__o *v41; // x23
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  System_Collections_Generic_List_long__o *v47; // x23
  struct ServantOperationListViewManager_array *v48; // x8
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x23
  struct ServantOperationListViewManager_array *v50; // x8
  System_Collections_Generic_List_long__o *selectUserCommandCodeIdList; // x23
  struct ServantOperationListViewManager_array *v52; // x8
  struct ServantOperationListViewManager_array *v53; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *v54; // x24
  System_Collections_Generic_List_ServantOperationListViewItem__o *EquipMaterialList; // x0
  System_Collections_Generic_List_ServantOperationListViewItem__o **v56; // x23
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  ServantOperationManager_o *v59; // x0
  const MethodInfo *v60; // x2
  int m_CancellationTokenSource; // w8
  int v62; // w26
  Il2CppObject *current; // x24
  Il2CppObject *Instance; // x0
  __int64 v65; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v67; // x1
  Il2CppObject *Entity; // x0
  __int64 v69; // x1
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x0
  Il2CppObject *v72; // x21
  System_String_o *v73; // x19
  System_Collections_Generic_List_object__o *ExchangeSvtCombineExpCampaign; // x0
  Il2CppObject *Item; // x0
  System_String_o *v76; // x0
  System_String_o *v77; // x21
  Il2CppObject *v78; // x22
  System_String_o *v79; // x23
  System_String_o *v80; // x24
  CommonConfirmDialog_ClickDelegate_o *v81; // x25
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v85; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v86; // x22
  _QWORD *v87; // x0
  int32_t v88; // w20
  System_Reflection_MethodBase_o *v89; // x0
  const MethodInfo *v90; // x1
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+40h] [xbp-A0h] BYREF
  int v92; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v93; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B186D0 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__AddRange__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__get_Count__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v18);
    sub_1BCAFF8(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v20);
    sub_1BCAFF8(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__, v21);
    sub_1BCAFF8(&Method_ServantOperationManager_OnClickDecide__, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BCAFF8(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__, v25);
    sub_1BCAFF8(&ServantOperationManager___c__DisplayClass44_0_TypeInfo, v26);
    sub_1BCAFF8(&StringLiteral_5708/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, v27);
    sub_1BCAFF8(&StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, v28);
    sub_1BCAFF8(&StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, v29);
    sub_1BCAFF8(&StringLiteral_5706/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, v30);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v31);
    byte_4B186D0 = 1;
  }
  memset(&v93, 0, sizeof(v93));
  v92 = 0;
  v32 = sub_1BCB244(ServantOperationManager___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_68;
  *(_QWORD *)(v32 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 24), (int32_t)this, v35, v36);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v37 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v37,
      (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v37;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectUserServantIdList, (int32_t)v37, v39, v40);
    v41 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v41,
      (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v41;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectUserCommandCodeIdList, (int32_t)v41, v43, v44);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_68;
    if ( !servantOperationListViewManager->max_length )
      goto LABEL_69;
    SelectedServantIdList = servantOperationListViewManager->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    v47 = *p_selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v34);
    if ( !v47 )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      v47,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_36A1E10 *)Method_System_Collections_Generic_List_long__AddRange__);
    v48 = this->fields.servantOperationListViewManager;
    if ( !v48 )
      goto LABEL_68;
    if ( v48->max_length <= 1 )
      goto LABEL_69;
    SelectedServantIdList = v48->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    selectUserServantIdList = this->fields.selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v34);
    if ( !selectUserServantIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      selectUserServantIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_36A1E10 *)Method_System_Collections_Generic_List_long__AddRange__);
    v50 = this->fields.servantOperationListViewManager;
    if ( !v50 )
      goto LABEL_68;
    if ( v50->max_length <= 2 )
      goto LABEL_69;
    SelectedServantIdList = v50->m_Items[2];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    selectUserCommandCodeIdList = this->fields.selectUserCommandCodeIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedCommandCodeIdList(
                                                                   SelectedServantIdList,
                                                                   v34);
    if ( !selectUserCommandCodeIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      selectUserCommandCodeIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_36A1E10 *)Method_System_Collections_Generic_List_long__AddRange__);
    v52 = this->fields.servantOperationListViewManager;
    if ( !v52 )
      goto LABEL_68;
    if ( !v52->max_length )
      goto LABEL_69;
    SelectedServantIdList = v52->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                                                   SelectedServantIdList,
                                                                   v34);
    v53 = this->fields.servantOperationListViewManager;
    if ( !v53 )
      goto LABEL_68;
    if ( v53->max_length <= 1 )
LABEL_69:
      sub_1BCB25C(SelectedServantIdList, v34, v45);
    v54 = (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedServantIdList;
    SelectedServantIdList = v53->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    EquipMaterialList = ServantOperationListViewManager__GetEquipMaterialList(SelectedServantIdList, v34);
    *(_QWORD *)(v32 + 16) = EquipMaterialList;
    v56 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v32 + 16);
    sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 16), (int32_t)EquipMaterialList, v57, v58);
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                                                   v59,
                                                                   v54,
                                                                   v60);
    if ( !SelectedServantIdList )
      goto LABEL_68;
    m_CancellationTokenSource = (int)SelectedServantIdList->fields.m_CancellationTokenSource;
    SelectedServantIdList = (ServantOperationListViewManager_o *)this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = m_CancellationTokenSource > 0;
    if ( !SelectedServantIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___GetEnumerator(
      &v91,
      (System_Collections_Generic_List_long__o *)SelectedServantIdList,
      (const MethodInfo_36A26D8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v62 = 0;
    v93 = v91;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v93,
              (const MethodInfo_344C9DC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v93.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1BCB254(0LL, v65);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1BCB254(0LL, v67);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_1BCB254(0LL, v69);
      v62 |= UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v93,
      (const MethodInfo_344C9D8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v62 & 1) != 0 )
    {
      v70 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v70 = (_QWORD *)sub_1BCB010(Method_ServantOperationManager_OnClickDecide__);
      v71 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v70, v70[4]);
      OverwriteAssetSoundName__PlaySystemSe(v71, 0, 0, 0LL);
      v72 = (Il2CppObject *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_5706/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SelectedServantIdList = (ServantOperationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( SelectedServantIdList )
      {
        ExchangeSvtCombineExpCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                                                                       (EventCampaignMaster_o *)SelectedServantIdList,
                                                                                       0LL);
        if ( ExchangeSvtCombineExpCampaign )
        {
          if ( ExchangeSvtCombineExpCampaign->fields._size >= 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     ExchangeSvtCombineExpCampaign,
                     0,
                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( Item )
            {
              v92 = SLODWORD(Item[3].klass) / 1000;
              v72 = (Il2CppObject *)System_Int32__ToString((int32_t)&v92, 0LL);
            }
          }
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v76 = LocalizationManager__Get((System_String_o *)StringLiteral_5708/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, 0LL);
        v77 = System_String__Format_62491716(v76, v72, v72, 0LL);
        v78 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, 0LL);
        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, 0LL);
        v81 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v81,
          (Il2CppObject *)v32,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0LL);
        if ( v78 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v78,
            v73,
            v77,
            v79,
            v80,
            v81,
            24,
            0.0,
            15.0,
            0,
            0,
            0,
            240,
            0,
            1,
            0,
            0,
            0LL);
          return;
        }
      }
LABEL_68:
      sub_1BCB254(SelectedServantIdList, v34);
    }
    if ( !*v56 )
      goto LABEL_68;
    if ( (*v56)->fields._size < 1 )
    {
      if ( !*p_selectUserServantIdList )
        goto LABEL_68;
      if ( (*p_selectUserServantIdList)->fields._size > 0 )
        goto LABEL_57;
      if ( !*p_selectUserCommandCodeIdList )
        goto LABEL_68;
      if ( (*p_selectUserCommandCodeIdList)->fields._size < 1 )
      {
        v87 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v87 = (_QWORD *)sub_1BCB010(Method_ServantOperationManager_OnClickDecide__);
        v88 = 2;
      }
      else
      {
LABEL_57:
        v87 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v87 = (_QWORD *)sub_1BCB010(Method_ServantOperationManager_OnClickDecide__);
        v88 = 0;
      }
      v89 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v87, v87[4]);
      OverwriteAssetSoundName__PlaySystemSe(v89, v88, 0, 0LL);
      ServantOperationManager__SellCombineWarning(this, v90);
    }
    else
    {
      v82 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v82 = (_QWORD *)sub_1BCB010(Method_ServantOperationManager_OnClickDecide__);
      v83 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v82, v82[4]);
      OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0, 0LL);
      servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
      v85 = *v56;
      v86 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1BCB244(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v86,
        (Il2CppObject *)this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( !servantCheckEquipDialog )
        goto LABEL_68;
      ServantCheckEquipDialog__Open_34177080(servantCheckEquipDialog, v85, v86, 0LL);
    }
  }
}


void __fastcall ServantOperationManager__OnClickFilter2Kind(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(this, method, v2);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, method);
  ServantOperationListViewManager__OnClickFilter2Kind((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnClickFilterKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(this, method, v2);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, method);
  ServantOperationListViewManager__OnClickFilterKind((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t TotalSum_k__BackingField; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B186D7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ServantOperationManager_OnClickReleaseAll__, method);
    byte_4B186D7 = 1;
  }
  v3 = Method_ServantOperationManager_OnClickReleaseAll__;
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  if ( (*((_BYTE *)Method_ServantOperationManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_ServantOperationManager_OnClickReleaseAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  if ( TotalSum_k__BackingField <= 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    ServantOperationManager__ReleaseAll(this, v6);
  }
}


void __fastcall ServantOperationManager__OnClickSortAscendingOrder(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(this, method, v2);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, method);
  ServantOperationListViewManager__OnClickSortAscendingOrder((ServantOperationListViewManager_o *)this, method);
}


void __fastcall ServantOperationManager__OnClickSortKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(this, method, v2);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, method);
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
  int64_t v11; // x1
  __int64 v12; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v15; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  struct System_Int64_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  System_Int64_array *v22; // x21
  System_Int64_array *v23; // x3
  const MethodInfo *v24; // x4

  if ( (byte_4B186D9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__Add__, selectItem);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_4B186D9 = 1;
  }
  v8 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v8,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_22;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(UserCommandCodeId, v11, v12);
  v15 = servantOperationListViewManager->m_Items[kind];
  if ( !v15 || !selectItem )
    goto LABEL_22;
  if ( v15->fields.kind == 2 )
  {
    UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(selectItem, 0LL);
    if ( v9 )
    {
      items = v9->fields._items;
      v17 = Method_System_Collections_Generic_List_long__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        v11 = UserCommandCodeId;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v9,
            UserCommandCodeId,
            *(const MethodInfo_36A1C04 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size] = UserCommandCodeId;
        }
        if ( v8 )
        {
          UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                         v8,
                                         (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_1BCB254(UserCommandCodeId, v11);
  }
  UserCommandCodeId = ServantOperationListViewItem__get_UserSvtId(selectItem, 0LL);
  if ( !v8 )
    goto LABEL_22;
  v19 = v8->fields._items;
  v20 = Method_System_Collections_Generic_List_long__Add__;
  ++v8->fields._version;
  if ( !v19 )
    goto LABEL_22;
  v21 = v8->fields._size;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v8,
      UserCommandCodeId,
      *(const MethodInfo_36A1C04 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v8->fields._size = v21 + 1;
    v19->m_Items[v21] = UserCommandCodeId;
  }
  UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                 v8,
                                 (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v9 )
    goto LABEL_22;
LABEL_21:
  v22 = (System_Int64_array *)UserCommandCodeId;
  v23 = System_Collections_Generic_List_long___ToArray(
          v9,
          (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v22, v23, v24);
}


void __fastcall ServantOperationManager__OpenSellConfirmDialog(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v4; // x20
  System_Int64_array *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4B186D6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__ToArray__, method);
    byte_4B186D6 = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (selectUserServantIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                               selectUserServantIdList,
                                                                               (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_1BCB254(selectUserServantIdList, method);
  }
  v4 = (System_Int64_array *)selectUserServantIdList;
  v5 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_36A36BC *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 1, v4, v5, v6);
}


void __fastcall ServantOperationManager__RefrashListDisp(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  ServantOperationManager_o *v4; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x21
  int max_length; // w8
  int v7; // w22
  int32_t v8; // w20
  int v9; // w8
  UILabel_o *qpDataLabel; // x21
  UILabel_o *mpDataLabel; // x20
  UILabel_o *rpDataLabel; // x20
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t rarePri; // [xsp+Ch] [xbp-34h] BYREF
  int32_t mana[2]; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B186CE & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    byte_4B186CE = 1;
  }
  *(_QWORD *)mana = 0LL;
  rarePri = 0;
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  *(_QWORD *)&v4->fields.totalQP = 0LL;
  v4->fields.totalRarePri = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_25;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1BCB25C(this, method, v2);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v7];
      if ( !this )
        goto LABEL_25;
      ServantOperationListViewManager__SumItems((ServantOperationListViewManager_o *)this, &mana[1], mana, &rarePri, v3);
      ++v7;
      v8 = mana[1] + v4->fields.totalQP;
      v9 = mana[0] + v4->fields.totalMana;
      v4->fields.totalQP = v8;
      v4->fields.totalMana = v9;
      v4->fields.totalRarePri += rarePri;
      max_length = servantOperationListViewManager->max_length;
      if ( v7 >= max_length )
        goto LABEL_11;
    }
  }
  v8 = 0;
LABEL_11:
  qpDataLabel = v4->fields.qpDataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v8, 0LL);
  if ( !qpDataLabel )
    goto LABEL_25;
  UILabel__set_text(qpDataLabel, (System_String_o *)this, 0LL);
  mpDataLabel = v4->fields.mpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v4->fields.totalMana, 0LL);
  if ( !mpDataLabel )
    goto LABEL_25;
  UILabel__set_text(mpDataLabel, (System_String_o *)this, 0LL);
  rpDataLabel = v4->fields.rpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v4->fields.totalRarePri, 0LL);
  if ( !rpDataLabel )
    goto LABEL_25;
  UILabel__set_text(rpDataLabel, (System_String_o *)this, 0LL);
  this = (ServantOperationManager_o *)v4->fields.allReleaseButton;
  if ( !this )
    goto LABEL_25;
  v13 = v4->fields._TotalSum_k__BackingField <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v13,
    1LL,
    this->klass[1]._1.interfaceOffsets);
  this = (ServantOperationManager_o *)v4->fields.decideButton;
  if ( !this )
LABEL_25:
    sub_1BCB254(this, method);
  if ( v4->fields._TotalSum_k__BackingField <= 0 )
    v14 = 3LL;
  else
    v14 = 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    v14,
    1LL,
    this->klass[1]._1.interfaceOffsets);
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
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4B186D8 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    this = (ServantOperationManager_o *)sub_1BCAFF8(&StringLiteral_12372/*"SUM_INFO"*/, v5);
    byte_4B186D8 = 1;
  }
  servantOperationListViewManager = v3->fields.servantOperationListViewManager;
  v3->fields._TotalSum_k__BackingField = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_14;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1BCB25C(this, method, v2);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v8];
      if ( !this )
        break;
      ServantOperationListViewManager__ReleaseAll((ServantOperationListViewManager_o *)this, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_9;
    }
LABEL_14:
    sub_1BCB254(this, method);
  }
LABEL_9:
  selectDoneLabel = v3->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12372/*"SUM_INFO"*/, 0LL);
  TotalSum_k__BackingField = v3->fields._TotalSum_k__BackingField;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField, v11, v12, v13);
  SelectMax_k__BackingField = v3->fields._SelectMax_k__BackingField;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField, v15, v16, v17);
  this = (ServantOperationManager_o *)System_String__Format_62491716(v10, v14, v18, 0LL);
  if ( !selectDoneLabel )
    goto LABEL_14;
  UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0LL);
  ServantOperationManager__RefrashListDisp(v3, v19);
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
  __int64 v20; // x20
  void *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v27; // x22
  System_Collections_Generic_List_UserServantEntity__o **v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v33; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v35; // x1
  Il2CppObject *Entity; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_object__o *v39; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x8
  System_Collections_Generic_List_object__o *v44; // x22
  System_Predicate_object__o *v45; // x23
  Il2CppObject *v46; // x24
  struct ServantOperationManager___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x19
  System_Collections_Generic_List_UserServantEntity__o *v52; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v53; // x22
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B186D3 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76883232, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BCAFF8(&System_Predicate_UserServantEntity__TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BCAFF8(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, v16);
    sub_1BCAFF8(&Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__, v17);
    sub_1BCAFF8(&ServantOperationManager___c__DisplayClass51_0_TypeInfo, v18);
    sub_1BCAFF8(&ServantOperationManager___c_TypeInfo, v19);
    byte_4B186D3 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v20 = sub_1BCB244(ServantOperationManager___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_31;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 16), (int32_t)this, v23, v24);
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_31;
  size = selectUserServantIdList->fields._size;
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_57381900(
    v27,
    size,
    (const MethodInfo_36B940C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76883232);
  *(_QWORD *)(v20 + 24) = v27;
  v28 = (System_Collections_Generic_List_UserServantEntity__o **)(v20 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 24), (int32_t)v27, v29, v30);
  v21 = this->fields.selectUserServantIdList;
  if ( !v21 )
    goto LABEL_31;
  System_Collections_Generic_List_long___GetEnumerator(
    &v54,
    (System_Collections_Generic_List_long__o *)v21,
    (const MethodInfo_36A26D8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v55 = v54;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v55,
            (const MethodInfo_344C9DC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v55.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v33);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1BCB254(0LL, v35);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v39 = (System_Collections_Generic_List_object__o *)*v28;
    if ( !*v28 )
      sub_1BCB254(0LL, Entity);
    items = v39->fields._items;
    v41 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v39->fields._version;
    if ( !items )
      sub_1BCB254(v39, Entity);
    v42 = v39->fields._size;
    if ( (unsigned int)v42 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v39,
        Entity,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &items->obj.klass + v42;
      v39->fields._size = v42 + 1;
      v43[4] = (Il2CppClass *)Entity;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v43 + 4), (int32_t)Entity, v37, v38);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v55,
    (const MethodInfo_344C9D8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v21 = ServantOperationManager___c_TypeInfo;
  v44 = (System_Collections_Generic_List_object__o *)*v28;
  if ( !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v21 = ServantOperationManager___c_TypeInfo;
  }
  v45 = *(System_Predicate_object__o **)(*((_QWORD *)v21 + 23) + 8LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)v21 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = ServantOperationManager___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)v21 + 23);
    v45 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(v45, v46, Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, 0LL);
    static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)v45;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)v45, v48, v49);
  }
  if ( !v44 )
    goto LABEL_31;
  if ( System_Collections_Generic_List_object___Find(
         v44,
         (System_Predicate_T__o *)v45,
         (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v52 = *(System_Collections_Generic_List_UserServantEntity__o **)(v20 + 24);
    v53 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1BCB244(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v53,
      (Il2CppObject *)v20,
      Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__,
      0LL);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(servantCheckWarningDialog, v52, v53, 0LL);
      return;
    }
LABEL_31:
    sub_1BCB254(v21, v22);
  }
  ServantOperationManager__SellSSRareWarning(this, *v28, v50);
}


void __fastcall ServantOperationManager__SellMaterialTdWarning(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x22
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
  System_Collections_Generic_List_object__o *v25; // x20
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v30; // x1
  Il2CppObject *Entity; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x22
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  __int64 v39; // x0
  Il2CppObject *v40; // x23
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x1
  Il2CppObject *v44; // x24
  NetworkManager_c *v45; // x0
  int64_t userIdNumber; // x25
  __int64 v47; // x0
  __int64 v48; // x1
  UserServantCollectionEntity_o *v49; // x0
  UserServantCollectionEntity_o *v50; // x23
  Il2CppObject *v51; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  ServantCheckWarningDialog_o *v63; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v64; // x22
  Il2CppObject *v65; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+10h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  v2 = this;
  if ( (byte_4B186D5 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76883232, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__get_Count__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v17);
    sub_1BCAFF8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v18);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v19);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BCAFF8(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__, v21);
    this = (ServantOperationManager_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4B186D5 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  tdInfo = 0LL;
  selectUserServantIdList = v2->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_54;
  size = selectUserServantIdList->fields._size;
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_57381900(
    v25,
    size,
    (const MethodInfo_36B940C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76883232);
  this = (ServantOperationManager_o *)v2->fields.selectUserServantIdList;
  v65 = (Il2CppObject *)v2;
  if ( !this )
    goto LABEL_54;
  System_Collections_Generic_List_long___GetEnumerator(
    &v66,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_36A26D8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v68 = v66;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v68,
            (const MethodInfo_344C9DC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v68.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v28);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1BCB254(0LL, v30);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v33 = Entity;
    if ( !Entity )
      sub_1BCB254(0LL, v32);
    if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)Entity, 0LL) )
    {
      v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v34 )
        sub_1BCB254(0LL, v35);
      v36 = DataManager__GetMasterData_object_(
              (DataManager_o *)v34,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v33[5].klass;
      monitor = v33[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v69.fields.currentCryptoKey = klass;
      *(_QWORD *)&v69.fields.fakeValue = monitor;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v69, 0LL);
      if ( !v36 )
        sub_1BCB254(v39, (unsigned int)v39);
      v40 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v36,
              v39,
              (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v41 )
        sub_1BCB254(0LL, v42);
      v44 = DataManager__GetMasterData_object_(
              (DataManager_o *)v41,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v43);
        byte_4B165D1 = 1;
      }
      v45 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v45 = NetworkManager_TypeInfo;
      }
      if ( !v40 )
        sub_1BCB254(v45, v43);
      userIdNumber = v45->static_fields->userIdNumber;
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v40[2],
              0LL);
      if ( !v44 )
        sub_1BCB254(v47, v48);
      v49 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v44, userIdNumber, v47, 0LL);
      v50 = v49;
      if ( v49 && UserServantCollectionEntity__IsGet(v49, 0LL) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v50, &tdInfo, -1, -1, 0LL);
        v51 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v51 )
          sub_1BCB254(0LL, v52);
        v53 = DataManager__GetMasterData_object_(
                (DataManager_o *)v51,
                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_1BCB254(v53, v54);
        if ( !v53 )
          sub_1BCB254(0LL, v54);
        v55 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v53,
                tdInfo->fields.id,
                (const MethodInfo_32C7E00 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v55 )
          sub_1BCB254(0LL, v56);
        if ( v50->fields.treasureDeviceLv1 != LODWORD(v55[3].klass) )
        {
          if ( !v25 )
            sub_1BCB254(v55, v56);
          items = v25->fields._items;
          v60 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v25->fields._version;
          if ( !items )
            sub_1BCB254(v55, v56);
          v61 = v25->fields._size;
          if ( (unsigned int)v61 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              v33,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = &items->obj.klass + v61;
            v25->fields._size = v61 + 1;
            v62[4] = (Il2CppClass *)v33;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v33, v57, v58);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v68,
    (const MethodInfo_344C9D8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v25 )
    goto LABEL_54;
  if ( v25->fields._size >= 1 )
  {
    v63 = (ServantCheckWarningDialog_o *)v65[8].klass;
    v64 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1BCB244(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v64,
      v65,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0LL);
    if ( v63 )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        v63,
        (System_Collections_Generic_List_UserServantEntity__o *)v25,
        v64,
        0LL);
      return;
    }
LABEL_54:
    sub_1BCB254(this, method);
  }
  ServantOperationManager__OpenSellConfirmDialog((ServantOperationManager_o *)v65, method);
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
  ServantOperationManager___c_c *v10; // x0
  System_Predicate_object__o *_9__52_0; // x21
  Il2CppObject *v12; // x22
  struct ServantOperationManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v18; // x22

  if ( (byte_4B186D4 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, userSvtEntityList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v5);
    sub_1BCAFF8(&System_Predicate_UserServantEntity__TypeInfo, v6);
    sub_1BCAFF8(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__, v7);
    sub_1BCAFF8(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, v8);
    sub_1BCAFF8(&ServantOperationManager___c_TypeInfo, v9);
    byte_4B186D4 = 1;
  }
  v10 = ServantOperationManager___c_TypeInfo;
  if ( !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v10 = ServantOperationManager___c_TypeInfo;
  }
  _9__52_0 = (System_Predicate_object__o *)v10->static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ServantOperationManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__52_0 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(_9__52_0, v12, Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, 0LL);
    static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__52_0, (int32_t)_9__52_0, v14, v15);
  }
  if ( !userSvtEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)userSvtEntityList,
         (System_Predicate_T__o *)_9__52_0,
         (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v18 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1BCB244(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
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
LABEL_14:
    sub_1BCB254(v10, userSvtEntityList);
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
    sub_1BCB254(0LL, text);
  UILabel__set_text(filter2Label, text, 0LL);
}


void __fastcall ServantOperationManager__SetMode(
        ServantOperationManager_o *this,
        int32_t mode,
        System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onSelect = onSelect;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.onSelect, (int32_t)onSelect, (int32_t)onSelect, method);
  ServantOperationManager__SetMode_34316008(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationManager__SetMode_34316008(
        ServantOperationManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x20
  __int64 v5; // x1
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v8; // x21
  System_Action_object__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4B186CF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_ServantOperationListViewItem__TypeInfo, *(_QWORD *)&mode);
    this = (ServantOperationManager_o *)sub_1BCAFF8(&Method_ServantOperationManager_OnSelectServant__, v5);
    byte_4B186CF = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v4->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(this, *(_QWORD *)&mode, method);
  v8 = servantOperationListViewManager->m_Items[kind];
  v9 = (System_Action_object__o *)sub_1BCB244(System_Action_ServantOperationListViewItem__TypeInfo);
  System_Action_object____ctor(v9, (Il2CppObject *)v4, Method_ServantOperationManager_OnSelectServant__, 0LL);
  if ( !v8 )
LABEL_7:
    sub_1BCB254(this, *(_QWORD *)&mode);
  v8->fields.onSelectServant = (struct System_Action_ServantOperationListViewItem__o *)v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v8->fields.onSelectServant, (int32_t)v9, v10, v11);
  ServantOperationListViewManager__SetMode_34292424(v8, mode, v12);
}


void __fastcall ServantOperationManager__SortItem(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= servantOperationListViewManager->max_length )
    sub_1BCB25C(this, method, v2);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1BCB254(this, method);
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
    sub_1BCB254(0LL, state);
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
        sub_1BCB25C(this, *(_QWORD *)&selectNum, method);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__decrementNumber((ServantOperationListViewManager_o *)this, selectNum, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCB254(this, *(_QWORD *)&selectNum);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B186DA & 1) == 0 )
  {
    sub_1BCAFF8(&ServantOperationManager___c_TypeInfo, v1);
    byte_4B186DA = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantOperationManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantOperationManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationManager___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantOperationManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  return NpCombineControl__CheckConfirm_47532188(x, 0LL);
}


bool __fastcall ServantOperationManager___c___SellSSRareWarning_b__52_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B186DB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, x);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B186DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_12;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v11;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v13, 0LL);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_12:
    sub_1BCB254(Instance, v8);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4B186DC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, flag);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__, v6);
    sub_1BCAFF8(&ServantOperationManager___c__DisplayClass44_1_TypeInfo, v7);
    byte_4B186DC = 1;
  }
  v8 = sub_1BCB244(ServantOperationManager___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCB254(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30764080((CommonUI_o *)Instance, v14, 0LL);
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
  Il2CppObject *_4__this; // x20
  ServantCheckEquipDialog_o *monitor; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v9; // x22

  v2 = this;
  if ( (byte_4B186DD & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCheckEquipDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__, v3);
    this = (ServantOperationManager___c__DisplayClass44_1_o *)sub_1BCAFF8(
                                                                &Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
                                                                v4);
    byte_4B186DD = 1;
  }
  if ( v2->fields.flag )
  {
    CS___8__locals1 = v2->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_12;
    equipedMaterialList = CS___8__locals1->fields.equipedMaterialList;
    if ( !equipedMaterialList )
      goto LABEL_12;
    _4__this = (Il2CppObject *)CS___8__locals1->fields.__4__this;
    if ( !_4__this )
      goto LABEL_12;
    if ( equipedMaterialList->fields._size >= 1 )
    {
      monitor = (ServantCheckEquipDialog_o *)_4__this[7].monitor;
      v9 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1BCB244(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v9,
        _4__this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0LL);
      if ( monitor )
      {
        ServantCheckEquipDialog__Open_34177080(monitor, equipedMaterialList, v9, 0LL);
        return;
      }
LABEL_12:
      sub_1BCB254(this, method);
    }
    ServantOperationManager__SellCombineWarning(CS___8__locals1->fields.__4__this, method);
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
      sub_1BCB254(this, decide);
    ServantOperationManager__SellSSRareWarning(this->fields.__4__this, this->fields.userSvtEntityList, method);
  }
}