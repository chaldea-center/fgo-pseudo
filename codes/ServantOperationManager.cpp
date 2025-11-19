void ServantOperationManager___ctor(ServantOperationManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantOperationManager__CallOnSelect(
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
    p_onSelect->klass = 0;
    sub_1C6B9AC(p_onSelect, 0, (int32_t)servants, (const MethodInfo *)commandCodes);
    ((void (__fastcall *)(intptr_t, _QWORD, System_Int64_array *, System_Int64_array *, intptr_t))v6->fields.invoke_impl)(
      v6->fields.method_code,
      (unsigned int)actionKind,
      servants,
      commandCodes,
      v6->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__ChangeList(ServantOperationManager_o *this, int32_t kind, const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 v6; // x9
  ServantOperationListViewManager_o *v7; // x21
  System_Action_bool__o *v8; // x22
  const MethodInfo *v9; // x2
  __int64 v10; // x20
  il2cpp_array_size_t max_length; // x9
  __int64 v12; // x10
  struct ServantOperationListViewManager_array *v13; // x8
  __int64 v14; // x9

  v4 = this;
  if ( (byte_4CB23BF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__TypeInfo);
    this = (ServantOperationManager_o *)sub_1C6BA08(&Method_ServantOperationListViewManager_EndClickTabStatus__);
    byte_4CB23BF = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_16;
  v6 = v4->fields.kind;
  if ( (unsigned int)v6 >= LODWORD(servantOperationListViewManager->max_length) )
    goto LABEL_23;
  v7 = servantOperationListViewManager->m_Items[v6];
  if ( !v7 )
    goto LABEL_16;
  if ( v7->fields.modeKind )
  {
    v8 = (System_Action_bool__o *)sub_1C6BC54(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v8, (Il2CppObject *)v7, Method_ServantOperationListViewManager_EndClickTabStatus__, 0);
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
  v10 = 0;
  while ( 1 )
  {
    max_length = servantOperationListViewManager->max_length;
    if ( (int)v10 >= (int)max_length )
      break;
    if ( (unsigned int)v10 >= (unsigned int)max_length )
      goto LABEL_23;
    this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v10];
    if ( this )
    {
      this = (ServantOperationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (_DWORD)v10 == v4->fields.kind, 0);
        servantOperationListViewManager = v4->fields.servantOperationListViewManager;
        ++v10;
        if ( servantOperationListViewManager )
          continue;
      }
    }
    goto LABEL_16;
  }
  v12 = v4->fields.kind;
  if ( (unsigned int)v12 >= (unsigned int)max_length )
LABEL_23:
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v12];
  if ( !this
    || (this = (ServantOperationManager_o *)((__int64 (__fastcall *)(ServantOperationManager_o *, const char *))this->klass[1]._1.name)(
                                              this,
                                              this->klass[1]._1.namespaze),
        (v13 = v4->fields.servantOperationListViewManager) == 0) )
  {
LABEL_16:
    sub_1C6BC60(this, *(_QWORD *)&kind);
  }
  v14 = v4->fields.kind;
  if ( (unsigned int)v14 >= LODWORD(v13->max_length) )
    goto LABEL_23;
  this = (ServantOperationManager_o *)v13->m_Items[v14];
  if ( !this )
    goto LABEL_16;
  ServantOperationListViewManager__SetFilterButtonImage(
    (ServantOperationListViewManager_o *)this,
    *(const MethodInfo **)&kind);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__ConfirmServantCheckEquipDialog(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x19
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  ServantCheckEquipDialog_ClickDelegate_o *v6; // x21

  v4 = this;
  if ( (byte_4CB23C4 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    this = (ServantOperationManager_o *)sub_1C6BA08(&Method_ServantOperationManager_EndServantCheckEquip__);
    byte_4CB23C4 = 1;
  }
  servantCheckEquipDialog = v4->fields.servantCheckEquipDialog;
  if ( isDecide )
  {
    v6 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1C6BC54(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    ServantCheckEquipDialog_ClickDelegate___ctor(
      v6,
      (Il2CppObject *)v4,
      Method_ServantOperationManager_EndServantCheckEquip__,
      0);
    if ( servantCheckEquipDialog )
    {
      ServantCheckEquipDialog__OpenShopLastCheck(servantCheckEquipDialog, v6, 0);
      return;
    }
LABEL_8:
    sub_1C6BC60(this, isDecide);
  }
  if ( !servantCheckEquipDialog )
    goto LABEL_8;
  ServantCheckEquipDialog__Close(v4->fields.servantCheckEquipDialog, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__CreateList(ServantOperationManager_o *this, int32_t kind, const MethodInfo *method)
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
  Il2CppObject *v16; // x23
  Il2CppObject *v17; // x0
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  const MethodInfo *v19; // x3
  struct ServantOperationListViewManager_array *v20; // x8
  struct ServantOperationListViewManager_array *v21; // x8
  const MethodInfo *v22; // x3
  struct ServantOperationListViewManager_array *v23; // x8
  struct ServantOperationListViewManager_array *v24; // x8
  const MethodInfo *v25; // x3
  struct ServantOperationListViewManager_array *v26; // x8
  const MethodInfo *v27; // x2
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CB23BE & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_12483/*"SUM_INFO"*/);
    byte_4CB23BE = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  ServantOperationManager__Init(this, *(const MethodInfo **)&kind);
  qpDataLabel = this->fields.qpDataLabel;
  totalQP = this->fields.totalQP;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(totalQP, 0);
  if ( !qpDataLabel )
    goto LABEL_42;
  UILabel__set_text(qpDataLabel, NumberFormat, 0);
  mpDataLabel = this->fields.mpDataLabel;
  NumberFormat = LocalizationManager__GetNumberFormat(this->fields.totalMana, 0);
  if ( !mpDataLabel )
    goto LABEL_42;
  UILabel__set_text(mpDataLabel, NumberFormat, 0);
  rpDataLabel = this->fields.rpDataLabel;
  NumberFormat = LocalizationManager__GetNumberFormat(this->fields.totalRarePri, 0);
  if ( !rpDataLabel )
    goto LABEL_42;
  UILabel__set_text(rpDataLabel, NumberFormat, 0);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)NumberFormat, 0);
  NumberFormat = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)NumberFormat,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !NumberFormat )
    goto LABEL_42;
  UserServantMaster__getCount((UserServantMaster_o *)NumberFormat, &servantEquipSum[1], servantEquipSum, 0, 0);
  v12 = BalanceConfig_TypeInfo;
  ServantSellSelectMax = servantEquipSum[1] + Count + servantEquipSum[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( ServantSellSelectMax >= v12->static_fields->ServantSellSelectMax )
  {
    ServantSellSelectMax = v12->static_fields->ServantSellSelectMax;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      ServantSellSelectMax = BalanceConfig_TypeInfo->static_fields->ServantSellSelectMax;
    }
  }
  this->fields._SelectMax_k__BackingField = ServantSellSelectMax;
  selectDoneLabel = this->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUM_INFO"*/, 0);
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = this->fields._SelectMax_k__BackingField;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  NumberFormat = System_String__Format_64008100(v15, v16, v17, 0);
  if ( !selectDoneLabel )
    goto LABEL_42;
  UILabel__set_text(selectDoneLabel, NumberFormat, 0);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_42;
  if ( !LODWORD(servantOperationListViewManager->max_length) )
    goto LABEL_43;
  NumberFormat = (System_String_o *)servantOperationListViewManager->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0);
  if ( !NumberFormat )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0);
  v20 = this->fields.servantOperationListViewManager;
  if ( !v20 )
    goto LABEL_42;
  if ( !LODWORD(v20->max_length) )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v20->m_Items[0];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 0, 0, v19);
  v21 = this->fields.servantOperationListViewManager;
  if ( !v21 )
    goto LABEL_42;
  if ( LODWORD(v21->max_length) <= 1 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v21->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NumberFormat, 0);
  if ( !NumberFormat )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0);
  v23 = this->fields.servantOperationListViewManager;
  if ( !v23 )
    goto LABEL_42;
  if ( LODWORD(v23->max_length) <= 1 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v23->m_Items[1];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 1, 0, v22);
  v24 = this->fields.servantOperationListViewManager;
  if ( !v24 )
    goto LABEL_42;
  if ( LODWORD(v24->max_length) <= 2 )
    goto LABEL_43;
  NumberFormat = (System_String_o *)v24->m_Items[2];
  if ( !NumberFormat
    || (NumberFormat = (System_String_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)NumberFormat,
                                            0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0),
        (v26 = this->fields.servantOperationListViewManager) == 0) )
  {
LABEL_42:
    sub_1C6BC60(NumberFormat, v8);
  }
  if ( LODWORD(v26->max_length) <= 2 )
LABEL_43:
    sub_1C6BC68(NumberFormat);
  NumberFormat = (System_String_o *)v26->m_Items[2];
  if ( !NumberFormat )
    goto LABEL_42;
  ServantOperationListViewManager__CreateList((ServantOperationListViewManager_o *)NumberFormat, 2, 0, v25);
  ServantOperationManager__ChangeList(this, kind, v27);
}


void ServantOperationManager__DestroyList(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x19
  int max_length; // w8
  unsigned int v4; // w20

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
        sub_1C6BC68(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v4];
      if ( !this )
        break;
      ServantOperationListViewManager__DestroyList((ServantOperationListViewManager_o *)this, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C6BC60(this, method);
  }
}


void ServantOperationManager__EndCloseSelectFilterKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  ;
}


void ServantOperationManager__EndSelectFilterKind(
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
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, isDecide);
  ServantOperationListViewManager__EndSelectFilterKind((ServantOperationListViewManager_o *)this, isDecide, method);
}


void ServantOperationManager__EndServantCheckEquip(
        ServantOperationManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x0
  const MethodInfo *v6; // x1

  servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
  if ( !servantCheckEquipDialog )
    sub_1C6BC60(0, isDecide);
  ServantCheckEquipDialog__Close(servantCheckEquipDialog, 0);
  if ( isDecide )
    ServantOperationManager__SellCombineWarning(this, v6);
}


int64_t ServantOperationManager__GetAmountSortValue(
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
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, svtId);
  return ServantOperationListViewManager__GetAmountSortValue((ServantOperationListViewManager_o *)this, svtId, method);
}


System_Collections_Generic_List_int__o *ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *selectEquipedCommandCodeServantList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  int32_t size; // w23
  System_Collections_Generic_List_int__o *v5; // x20
  UserServantEntity_array *AllList; // x23
  System_Collections_Generic_List_int__o *v7; // x21
  System_Collections_Generic_Dictionary_int__int__o *v8; // x22
  int32_t i; // w24
  ServantOperationManager_o *v10; // x25
  int32_t onSelect; // w26
  int32_t v12; // w27
  int32_t v13; // w28
  bool v14; // zf
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  unsigned int v17; // w28
  UserServantEntity_o *v18; // x25
  __int64 v19; // x26
  __int64 v20; // x27
  __int64 v21; // x25
  __int64 v22; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  int32_t v26; // w23
  int32_t v27; // w24
  int32_t v28; // w25
  int v29; // w29
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v3 = (System_Collections_Generic_List_object__o *)selectEquipedCommandCodeServantList;
  if ( (byte_4CB23C3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantOperationManager_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB23C3 = 1;
  }
  if ( !v3 )
    goto LABEL_62;
  size = v3->fields._size;
  v5 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( size )
  {
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_62;
    AllList = UserServantMaster__getAllList((UserServantMaster_o *)this, 0);
    v7 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_3449074 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( v3->fields._size >= 1 )
    {
      for ( i = 0; i < v3->fields._size; ++i )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              v3,
                                              i,
                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v8 )
          goto LABEL_62;
        v10 = this;
        if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
                v8,
                (int32_t)this->fields.onSelect,
                (const MethodInfo_3449C24 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          onSelect = (int32_t)v10->fields.onSelect;
          if ( v3->fields._size >= 1 )
          {
            v12 = 0;
            v13 = 0;
            while ( 1 )
            {
              this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    v3,
                                                    v13,
                                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
              if ( !this )
                break;
              ++v13;
              v14 = onSelect == LODWORD(this->fields.onSelect);
              onSelect = (int32_t)v10->fields.onSelect;
              if ( v14 )
                ++v12;
              if ( v13 >= v3->fields._size )
                goto LABEL_20;
            }
LABEL_62:
            sub_1C6BC60(this, selectEquipedCommandCodeServantList);
          }
          v12 = 0;
LABEL_20:
          System_Collections_Generic_Dictionary_int__int___Add(
            v8,
            onSelect,
            v12,
            (const MethodInfo_3449A38 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
    }
    this = (ServantOperationManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (ServantOperationManager_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !AllList )
      goto LABEL_62;
    max_length = AllList->max_length;
    if ( max_length >= 1 )
    {
      v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
      v17 = 0;
      do
      {
        if ( v17 >= max_length )
          sub_1C6BC68(this);
        v18 = AllList->m_Items[v17];
        if ( !v18 )
          goto LABEL_62;
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v20;
        *(_QWORD *)&v34.fields.fakeValue = v19;
        this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v34, 0);
        if ( !v16 )
          goto LABEL_62;
        this = (ServantOperationManager_o *)DataMasterBase_object__object__int___GetEntity(
                                              v16,
                                              (int32_t)this,
                                              (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_62;
        this = (ServantOperationManager_o *)ServantEntity__get_IsServant((ServantEntity_o *)this, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (ServantOperationManager_o *)UserServantEntity__IsEventJoin(v18, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v22 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
            v21 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v35.fields.currentCryptoKey = v22;
            *(_QWORD *)&v35.fields.fakeValue = v21;
            this = (ServantOperationManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                  v35,
                                                  0);
            if ( !v7 )
              goto LABEL_62;
            items = v7->fields._items;
            v24 = Method_System_Collections_Generic_List_int__Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_62;
            v25 = v7->fields._size;
            selectEquipedCommandCodeServantList = (System_Collections_Generic_List_ServantOperationListViewItem__o *)(unsigned int)this;
            if ( (unsigned int)v25 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v7,
                (int32_t)this,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v7->fields._size = v25 + 1;
              items->m_Items[v25] = (int)this;
            }
          }
        }
        max_length = AllList->max_length;
      }
      while ( (int)++v17 < max_length );
    }
    if ( v3->fields._size >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        this = (ServantOperationManager_o *)System_Collections_Generic_List_object___get_Item(
                                              v3,
                                              v26,
                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Item__);
        if ( !this || !v7 )
          goto LABEL_62;
        v27 = (int32_t)this->fields.onSelect;
        if ( v7->fields._size < 1 )
        {
          v29 = 0;
          if ( !v8 )
            goto LABEL_62;
        }
        else
        {
          v28 = 0;
          v29 = 0;
          do
          {
            this = (ServantOperationManager_o *)System_Collections_Generic_List_int___get_Item(
                                                  v7,
                                                  v28++,
                                                  (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
            if ( v27 == (_DWORD)this )
              ++v29;
          }
          while ( v28 < v7->fields._size );
          if ( !v8 )
            goto LABEL_62;
        }
        this = (ServantOperationManager_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              v8,
                                              v27,
                                              (const MethodInfo_344999C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( (_DWORD)this == v29 )
        {
          if ( !v5 )
            goto LABEL_62;
          v30 = v5->fields._items;
          v31 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !v30 )
            goto LABEL_62;
          v32 = v5->fields._size;
          if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v27,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = v32 + 1;
            v30->m_Items[v32] = v27;
          }
        }
        if ( ++v26 >= v3->fields._size )
          return v5;
      }
    }
  }
  return v5;
}


System_Collections_Generic_List_ServantOperationListViewItem__o *ServantOperationManager__GetSelectedEquipeCmdCardServantList(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( !LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[0];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, method);
  return ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
           (ServantOperationListViewManager_o *)this,
           method);
}


int32_t ServantOperationManager__GetSelectedOrderByCommandCodeId(
        ServantOperationManager_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  if ( LODWORD(servantOperationListViewManager->max_length) <= 2 )
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[2];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, id);
  return ServantOperationListViewManager__GetSelectedOrderByUserCommandCodeId(
           (ServantOperationListViewManager_o *)this,
           id,
           method);
}


int32_t ServantOperationManager__GetSelectedOrderByServantId(
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
        sub_1C6BC68(this);
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
    sub_1C6BC60(this, id);
  }
LABEL_9:
  LODWORD(this) = -1;
  return (int)this;
}


void ServantOperationManager__Init(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0

  allReleaseButton = this->fields.allReleaseButton;
  this->fields._TotalSum_k__BackingField = 0;
  *(_QWORD *)&this->fields.totalQP = 0;
  this->fields.totalRarePri = 0;
  if ( !allReleaseButton
    || (((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, const MethodInfo *))allReleaseButton->klass->vtable._14_SetState.methodPtr)(
          allReleaseButton,
          3,
          0,
          allReleaseButton->klass->vtable._14_SetState.method),
        (allReleaseButton = this->fields.decideButton) == 0) )
  {
    sub_1C6BC60(allReleaseButton, method);
  }
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, const MethodInfo *))allReleaseButton->klass->vtable._14_SetState.methodPtr)(
    allReleaseButton,
    3,
    0,
    allReleaseButton->klass->vtable._14_SetState.method);
}


void ServantOperationManager__InitBackListView(ServantOperationManager_o *this, const MethodInfo *method)
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
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  v5 = &servantOperationListViewManager->obj.klass + kind;
  v6 = (ServantOperationListViewManager_o *)v5[4];
  if ( !v6 )
LABEL_5:
    sub_1C6BC60(this, method);
  ServantOperationListViewManager__StatusRequest((ServantOperationListViewManager_o *)v5[4], 0, v2);
  ServantOperationListViewManager__SetStatusKind(v6, 0, v7);
}


void ServantOperationManager__ModifyItem(ServantOperationManager_o *this, int64_t selectedId, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, selectedId);
  ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, selectedId, method);
}


void ServantOperationManager__ModifyListItem(
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
        sub_1C6BC68(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__ModifyItem((ServantOperationListViewManager_o *)this, userSvtId, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C6BC60(this, userSvtId);
  }
}


void ServantOperationManager__OnClickDecide(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ServantOperationListViewManager_o *SelectedServantIdList; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_long__o *v8; // x22
  struct System_Collections_Generic_List_long__o **p_selectUserServantIdList; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_long__o *v12; // x23
  struct System_Collections_Generic_List_long__o **p_selectUserCommandCodeIdList; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  System_Collections_Generic_List_long__o *v17; // x23
  struct ServantOperationListViewManager_array *v18; // x8
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x23
  struct ServantOperationListViewManager_array *v20; // x8
  System_Collections_Generic_List_long__o *selectUserCommandCodeIdList; // x23
  struct ServantOperationListViewManager_array *v22; // x8
  struct ServantOperationListViewManager_array *v23; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *v24; // x24
  System_Collections_Generic_List_ServantOperationListViewItem__o *EquipMaterialList; // x0
  System_Collections_Generic_List_ServantOperationListViewItem__o **v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  ServantOperationManager_o *v29; // x0
  const MethodInfo *v30; // x2
  int m_CancellationTokenSource; // w8
  int v32; // w26
  Il2CppObject *current; // x24
  Il2CppObject *Instance; // x0
  __int64 v35; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v37; // x1
  Il2CppObject *Entity; // x0
  __int64 v39; // x1
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  Il2CppObject *v42; // x21
  System_String_o *v43; // x19
  System_Collections_Generic_List_object__o *ExchangeSvtCombineExpCampaign; // x0
  Il2CppObject *Item; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x21
  Il2CppObject *v48; // x22
  System_String_o *v49; // x23
  System_String_o *v50; // x24
  CommonConfirmDialog_ClickDelegate_o *v51; // x25
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  ServantCheckEquipDialog_o *servantCheckEquipDialog; // x20
  System_Collections_Generic_List_ServantOperationListViewItem__o *v55; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v56; // x22
  _QWORD *v57; // x0
  int32_t v58; // w20
  System_Reflection_MethodBase_o *v59; // x0
  const MethodInfo *v60; // x1
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+40h] [xbp-A0h] BYREF
  int v62; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4CB23C2 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__);
    sub_1C6BA08(&Method_ServantOperationManager_OnClickDecide__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__);
    sub_1C6BA08(&ServantOperationManager___c__DisplayClass44_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_5744/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/);
    sub_1C6BA08(&StringLiteral_3680/*"COMMON_CONFIRM_NO"*/);
    sub_1C6BA08(&StringLiteral_3685/*"COMMON_CONFIRM_YES"*/);
    sub_1C6BA08(&StringLiteral_5742/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB23C2 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v62 = 0;
  v3 = sub_1C6BC54(ServantOperationManager___c__DisplayClass44_0_TypeInfo);
  ServantOperationManager___c__DisplayClass44_0___ctor((ServantOperationManager___c__DisplayClass44_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_68;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  if ( this->fields._TotalSum_k__BackingField >= 1 )
  {
    v8 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserServantIdList = v8;
    p_selectUserServantIdList = &this->fields.selectUserServantIdList;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectUserServantIdList, (int32_t)v8, v10, v11);
    v12 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v12,
      (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
    this->fields.selectUserCommandCodeIdList = v12;
    p_selectUserCommandCodeIdList = &this->fields.selectUserCommandCodeIdList;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectUserCommandCodeIdList, (int32_t)v12, v14, v15);
    servantOperationListViewManager = this->fields.servantOperationListViewManager;
    if ( !servantOperationListViewManager )
      goto LABEL_68;
    if ( !LODWORD(servantOperationListViewManager->max_length) )
      goto LABEL_69;
    SelectedServantIdList = servantOperationListViewManager->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    v17 = *p_selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v5);
    if ( !v17 )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_37E8BB4 *)Method_System_Collections_Generic_List_long__AddRange__);
    v18 = this->fields.servantOperationListViewManager;
    if ( !v18 )
      goto LABEL_68;
    if ( LODWORD(v18->max_length) <= 1 )
      goto LABEL_69;
    SelectedServantIdList = v18->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    selectUserServantIdList = this->fields.selectUserServantIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedServantIdList(
                                                                   SelectedServantIdList,
                                                                   v5);
    if ( !selectUserServantIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      selectUserServantIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_37E8BB4 *)Method_System_Collections_Generic_List_long__AddRange__);
    v20 = this->fields.servantOperationListViewManager;
    if ( !v20 )
      goto LABEL_68;
    if ( LODWORD(v20->max_length) <= 2 )
      goto LABEL_69;
    SelectedServantIdList = v20->m_Items[2];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    selectUserCommandCodeIdList = this->fields.selectUserCommandCodeIdList;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectedCommandCodeIdList(
                                                                   SelectedServantIdList,
                                                                   v5);
    if ( !selectUserCommandCodeIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___AddRange(
      selectUserCommandCodeIdList,
      (System_Collections_Generic_IEnumerable_T__o *)SelectedServantIdList,
      (const MethodInfo_37E8BB4 *)Method_System_Collections_Generic_List_long__AddRange__);
    v22 = this->fields.servantOperationListViewManager;
    if ( !v22 )
      goto LABEL_68;
    if ( !LODWORD(v22->max_length) )
      goto LABEL_69;
    SelectedServantIdList = v22->m_Items[0];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationListViewManager__GetSelectEquipedCommandCodeServantList(
                                                                   SelectedServantIdList,
                                                                   v5);
    v23 = this->fields.servantOperationListViewManager;
    if ( !v23 )
      goto LABEL_68;
    if ( LODWORD(v23->max_length) <= 1 )
LABEL_69:
      sub_1C6BC68(SelectedServantIdList);
    v24 = (System_Collections_Generic_List_ServantOperationListViewItem__o *)SelectedServantIdList;
    SelectedServantIdList = v23->m_Items[1];
    if ( !SelectedServantIdList )
      goto LABEL_68;
    EquipMaterialList = ServantOperationListViewManager__GetEquipMaterialList(SelectedServantIdList, v5);
    *(_QWORD *)(v3 + 16) = EquipMaterialList;
    v26 = (System_Collections_Generic_List_ServantOperationListViewItem__o **)(v3 + 16);
    sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)EquipMaterialList, v27, v28);
    SelectedServantIdList = (ServantOperationListViewManager_o *)ServantOperationManager__GetEquipedCommandCodeSellLastSvtList(
                                                                   v29,
                                                                   v24,
                                                                   v30);
    if ( !SelectedServantIdList )
      goto LABEL_68;
    m_CancellationTokenSource = (int)SelectedServantIdList->fields.m_CancellationTokenSource;
    SelectedServantIdList = (ServantOperationListViewManager_o *)this->fields.selectUserServantIdList;
    this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = m_CancellationTokenSource > 0;
    if ( !SelectedServantIdList )
      goto LABEL_68;
    System_Collections_Generic_List_long___GetEnumerator(
      &v61,
      (System_Collections_Generic_List_long__o *)SelectedServantIdList,
      (const MethodInfo_37E947C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v32 = 0;
    v63 = v61;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v63,
              (const MethodInfo_35839E4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v63.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C6BC60(0, v35);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1C6BC60(0, v37);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_1C6BC60(0, v39);
      v32 |= UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0);
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v63,
      (const MethodInfo_35839E0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    if ( (v32 & 1) != 0 )
    {
      v40 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v40 = (_QWORD *)sub_1C6BA20(Method_ServantOperationManager_OnClickDecide__);
      v41 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v40, v40[4]);
      OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0, 0);
      v42 = (Il2CppObject *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5742/*"EXCHANGE_CAMPAIGN_NOTICE_MSG_TITLE"*/, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SelectedServantIdList = (ServantOperationListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      if ( SelectedServantIdList )
      {
        ExchangeSvtCombineExpCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
                                                                                       (EventCampaignMaster_o *)SelectedServantIdList,
                                                                                       0);
        if ( ExchangeSvtCombineExpCampaign )
        {
          if ( ExchangeSvtCombineExpCampaign->fields._size >= 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     ExchangeSvtCombineExpCampaign,
                     0,
                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( Item )
            {
              v62 = SLODWORD(Item[3].klass) / 1000;
              v42 = (Il2CppObject *)System_Int32__ToString((int32_t)&v62, 0);
            }
          }
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_5744/*"EXCHANGE_CAMPAIGN_SELL_MSG"*/, 0);
        v47 = System_String__Format_64008100(v46, v42, v42, 0);
        v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_YES"*/, 0);
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_NO"*/, 0);
        v51 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v51,
          (Il2CppObject *)v3,
          Method_ServantOperationManager___c__DisplayClass44_0__OnClickDecide_b__0__,
          0);
        if ( v48 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v48,
            v43,
            v47,
            v49,
            v50,
            v51,
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
            0);
          return;
        }
      }
LABEL_68:
      sub_1C6BC60(SelectedServantIdList, v5);
    }
    if ( !*v26 )
      goto LABEL_68;
    if ( (*v26)->fields._size < 1 )
    {
      if ( !*p_selectUserServantIdList )
        goto LABEL_68;
      if ( (*p_selectUserServantIdList)->fields._size > 0 )
        goto LABEL_57;
      if ( !*p_selectUserCommandCodeIdList )
        goto LABEL_68;
      if ( (*p_selectUserCommandCodeIdList)->fields._size < 1 )
      {
        v57 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v57 = (_QWORD *)sub_1C6BA20(Method_ServantOperationManager_OnClickDecide__);
        v58 = 2;
      }
      else
      {
LABEL_57:
        v57 = Method_ServantOperationManager_OnClickDecide__;
        if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
          v57 = (_QWORD *)sub_1C6BA20(Method_ServantOperationManager_OnClickDecide__);
        v58 = 0;
      }
      v59 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v57, v57[4]);
      OverwriteAssetSoundName__PlaySystemSe(v59, v58, 0, 0);
      ServantOperationManager__SellCombineWarning(this, v60);
    }
    else
    {
      v52 = Method_ServantOperationManager_OnClickDecide__;
      if ( (*((_BYTE *)Method_ServantOperationManager_OnClickDecide__ + 83) & 2) != 0 )
        v52 = (_QWORD *)sub_1C6BA20(Method_ServantOperationManager_OnClickDecide__);
      v53 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v52, v52[4]);
      OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0, 0);
      servantCheckEquipDialog = this->fields.servantCheckEquipDialog;
      v55 = *v26;
      v56 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1C6BC54(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v56,
        (Il2CppObject *)this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0);
      if ( !servantCheckEquipDialog )
        goto LABEL_68;
      ServantCheckEquipDialog__Open_35157948(servantCheckEquipDialog, v55, v56, 0);
    }
  }
}


void ServantOperationManager__OnClickFilter2Kind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, method);
  ServantOperationListViewManager__OnClickFilter2Kind((ServantOperationListViewManager_o *)this, method);
}


void ServantOperationManager__OnClickFilterKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, method);
  ServantOperationListViewManager__OnClickFilterKind((ServantOperationListViewManager_o *)this, method);
}


void ServantOperationManager__OnClickReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  int32_t TotalSum_k__BackingField; // w20
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CB23C9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantOperationManager_OnClickReleaseAll__);
    byte_4CB23C9 = 1;
  }
  v3 = Method_ServantOperationManager_OnClickReleaseAll__;
  TotalSum_k__BackingField = this->fields._TotalSum_k__BackingField;
  if ( (*((_BYTE *)Method_ServantOperationManager_OnClickReleaseAll__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_ServantOperationManager_OnClickReleaseAll__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  if ( TotalSum_k__BackingField <= 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    ServantOperationManager__ReleaseAll(this, v6);
  }
}


void ServantOperationManager__OnClickSortAscendingOrder(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, method);
  ServantOperationListViewManager__OnClickSortAscendingOrder((ServantOperationListViewManager_o *)this, method);
}


void ServantOperationManager__OnClickSortKind(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, method);
  ServantOperationListViewManager__OnClickSortKind((ServantOperationListViewManager_o *)this, method);
}


void ServantOperationManager__OnSelectServant(
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
  struct System_Int64_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  struct System_Int64_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  System_Int64_array *v18; // x21
  System_Int64_array *v19; // x3
  const MethodInfo *v20; // x4

  if ( (byte_4CB23CB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CB23CB = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_22;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(UserCommandCodeId);
  v11 = servantOperationListViewManager->m_Items[kind];
  if ( !v11 || !selectItem )
    goto LABEL_22;
  if ( v11->fields.kind == 2 )
  {
    UserCommandCodeId = ServantOperationListViewItem__get_UserCommandCodeId(selectItem, v8);
    if ( v6 )
    {
      items = v6->fields._items;
      v13 = Method_System_Collections_Generic_List_long__Add__;
      ++v6->fields._version;
      if ( items )
      {
        size = v6->fields._size;
        v8 = (const MethodInfo *)UserCommandCodeId;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v6,
            UserCommandCodeId,
            *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = UserCommandCodeId;
        }
        if ( v5 )
        {
          UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                         v5,
                                         (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_1C6BC60(UserCommandCodeId, v8);
  }
  UserCommandCodeId = ServantOperationListViewItem__get_UserSvtId(selectItem, v8);
  if ( !v5 )
    goto LABEL_22;
  v15 = v5->fields._items;
  v16 = Method_System_Collections_Generic_List_long__Add__;
  ++v5->fields._version;
  if ( !v15 )
    goto LABEL_22;
  v17 = v5->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      v5,
      UserCommandCodeId,
      *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v17 + 1;
    v15->m_Items[v17] = UserCommandCodeId;
  }
  UserCommandCodeId = (int64_t)System_Collections_Generic_List_long___ToArray(
                                 v5,
                                 (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v6 )
    goto LABEL_22;
LABEL_21:
  v18 = (System_Int64_array *)UserCommandCodeId;
  v19 = System_Collections_Generic_List_long___ToArray(
          v6,
          (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 2, v18, v19, v20);
}


void ServantOperationManager__OpenSellConfirmDialog(ServantOperationManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectUserServantIdList; // x0
  System_Int64_array *v4; // x20
  System_Int64_array *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4CB23C8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    byte_4CB23C8 = 1;
  }
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList
    || (selectUserServantIdList = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                               selectUserServantIdList,
                                                                               (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__),
        !this->fields.selectUserCommandCodeIdList) )
  {
    sub_1C6BC60(selectUserServantIdList, method);
  }
  v4 = (System_Int64_array *)selectUserServantIdList;
  v5 = System_Collections_Generic_List_long___ToArray(
         this->fields.selectUserCommandCodeIdList,
         (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
  ServantOperationManager__CallOnSelect(this, 1, v4, v5, v6);
}


void ServantOperationManager__RefrashListDisp(ServantOperationManager_o *this, const MethodInfo *method)
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
  int32_t rarePri; // [xsp+Ch] [xbp-34h] BYREF
  int32_t mana[2]; // [xsp+18h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4CB23C0 & 1) == 0 )
  {
    this = (ServantOperationManager_o *)sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB23C0 = 1;
  }
  *(_QWORD *)mana = 0;
  rarePri = 0;
  servantOperationListViewManager = v3->fields.servantOperationListViewManager;
  *(_QWORD *)&v3->fields.totalQP = 0;
  v3->fields.totalRarePri = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_25;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C6BC68(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        goto LABEL_25;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v7, 0);
  if ( !qpDataLabel )
    goto LABEL_25;
  UILabel__set_text(qpDataLabel, (System_String_o *)this, 0);
  mpDataLabel = v3->fields.mpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v3->fields.totalMana, 0);
  if ( !mpDataLabel )
    goto LABEL_25;
  UILabel__set_text(mpDataLabel, (System_String_o *)this, 0);
  rpDataLabel = v3->fields.rpDataLabel;
  this = (ServantOperationManager_o *)LocalizationManager__GetNumberFormat(v3->fields.totalRarePri, 0);
  if ( !rpDataLabel )
    goto LABEL_25;
  UILabel__set_text(rpDataLabel, (System_String_o *)this, 0);
  this = (ServantOperationManager_o *)v3->fields.allReleaseButton;
  if ( !this )
    goto LABEL_25;
  v12 = v3->fields._TotalSum_k__BackingField <= 0 ? 3LL : 0LL;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    v12,
    1,
    this->klass[1]._1.implementedInterfaces);
  this = (ServantOperationManager_o *)v3->fields.decideButton;
  if ( !this )
LABEL_25:
    sub_1C6BC60(this, method);
  if ( v3->fields._TotalSum_k__BackingField <= 0 )
    v13 = 3;
  else
    v13 = 0;
  ((void (__fastcall *)(ServantOperationManager_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    v13,
    1,
    this->klass[1]._1.implementedInterfaces);
}


void ServantOperationManager__ReleaseAll(ServantOperationManager_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x19
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x20
  int max_length; // w8
  unsigned int v5; // w21
  UILabel_o *selectDoneLabel; // x20
  System_String_o *v7; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x0
  const MethodInfo *v10; // x1
  int32_t SelectMax_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t TotalSum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4CB23CA & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    this = (ServantOperationManager_o *)sub_1C6BA08(&StringLiteral_12483/*"SUM_INFO"*/);
    byte_4CB23CA = 1;
  }
  servantOperationListViewManager = v2->fields.servantOperationListViewManager;
  v2->fields._TotalSum_k__BackingField = 0;
  if ( !servantOperationListViewManager )
    goto LABEL_14;
  max_length = servantOperationListViewManager->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C6BC68(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v5];
      if ( !this )
        break;
      ServantOperationListViewManager__ReleaseAll((ServantOperationListViewManager_o *)this, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_9;
    }
LABEL_14:
    sub_1C6BC60(this, method);
  }
LABEL_9:
  selectDoneLabel = v2->fields.selectDoneLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUM_INFO"*/, 0);
  TotalSum_k__BackingField = v2->fields._TotalSum_k__BackingField;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalSum_k__BackingField);
  SelectMax_k__BackingField = v2->fields._SelectMax_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SelectMax_k__BackingField);
  this = (ServantOperationManager_o *)System_String__Format_64008100(v7, v8, v9, 0);
  if ( !selectDoneLabel )
    goto LABEL_14;
  UILabel__set_text(selectDoneLabel, (System_String_o *)this, 0);
  ServantOperationManager__RefrashListDisp(v2, v10);
}


void ServantOperationManager__SellCombineWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  void *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_Generic_List_UserServantEntity__o **v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x8
  System_Collections_Generic_List_object__o *v27; // x22
  System_Predicate_object__o *v28; // x23
  Il2CppObject *v29; // x24
  struct ServantOperationManager___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x19
  System_Collections_Generic_List_UserServantEntity__o *v35; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v36; // x22
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB23C5 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78535688);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C6BA08(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_ServantOperationManager___c__SellCombineWarning_b__51_0__);
    sub_1C6BA08(&Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__);
    sub_1C6BA08(&ServantOperationManager___c__DisplayClass51_0_TypeInfo);
    sub_1C6BA08(&ServantOperationManager___c_TypeInfo);
    byte_4CB23C5 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v3 = sub_1C6BC54(ServantOperationManager___c__DisplayClass51_0_TypeInfo);
  ServantOperationManager___c__DisplayClass51_0___ctor((ServantOperationManager___c__DisplayClass51_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_31;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  selectUserServantIdList = this->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_31;
  size = selectUserServantIdList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58720688(
    v10,
    size,
    (const MethodInfo_38001B0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78535688);
  *(_QWORD *)(v3 + 24) = v10;
  v11 = (System_Collections_Generic_List_UserServantEntity__o **)(v3 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v10, v12, v13);
  v4 = this->fields.selectUserServantIdList;
  if ( !v4 )
    goto LABEL_31;
  System_Collections_Generic_List_long___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_long__o *)v4,
    (const MethodInfo_37E947C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v38,
            (const MethodInfo_35839E4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v38.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v16);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1C6BC60(0, v18);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v22 = (System_Collections_Generic_List_object__o *)*v11;
    if ( !*v11 )
      sub_1C6BC60(0, Entity);
    items = v22->fields._items;
    v24 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v22->fields._version;
    if ( !items )
      sub_1C6BC60(v22, Entity);
    v25 = v22->fields._size;
    if ( (unsigned int)v25 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        Entity,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + v25;
      v22->fields._size = v25 + 1;
      v26[4] = (Il2CppClass *)Entity;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)Entity, v20, v21);
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v38,
    (const MethodInfo_35839E0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  v4 = ServantOperationManager___c_TypeInfo;
  v27 = (System_Collections_Generic_List_object__o *)*v11;
  if ( !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v4 = ServantOperationManager___c_TypeInfo;
  }
  v28 = *(System_Predicate_object__o **)(*((_QWORD *)v4 + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)v4 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ServantOperationManager___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)v4 + 23);
    v28 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(v28, v29, Method_ServantOperationManager___c__SellCombineWarning_b__51_0__, 0);
    static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Predicate_UserServantEntity__o *)v28;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)v28, v31, v32);
  }
  if ( !v27 )
    goto LABEL_31;
  if ( System_Collections_Generic_List_object___Find(
         v27,
         (System_Predicate_T__o *)v28,
         (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v35 = *(System_Collections_Generic_List_UserServantEntity__o **)(v3 + 24);
    v36 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1C6BC54(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v36,
      (Il2CppObject *)v3,
      Method_ServantOperationManager___c__DisplayClass51_0__SellCombineWarning_b__1__,
      0);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellCombineWarning(servantCheckWarningDialog, v35, v36, 0);
      return;
    }
LABEL_31:
    sub_1C6BC60(v4, v5);
  }
  ServantOperationManager__SellSSRareWarning(this, *v11, v33);
}


void ServantOperationManager__SellMaterialTdWarning(ServantOperationManager_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *v2; // x22
  struct System_Collections_Generic_List_long__o *selectUserServantIdList; // x8
  int32_t size; // w21
  System_Collections_Generic_List_object__o *v5; // x20
  Il2CppObject *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  __int64 v19; // x0
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  Il2CppObject *v24; // x24
  NetworkManager_c *v25; // x0
  int64_t userIdNumber; // x25
  __int64 v27; // x0
  __int64 v28; // x1
  UserServantCollectionEntity_o *v29; // x0
  UserServantCollectionEntity_o *v30; // x23
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  ServantCheckWarningDialog_o *v43; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v44; // x22
  Il2CppObject *v45; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+10h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v2 = this;
  if ( (byte_4CB23C7 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78535688);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__);
    this = (ServantOperationManager_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB23C7 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  tdInfo = 0;
  selectUserServantIdList = v2->fields.selectUserServantIdList;
  if ( !selectUserServantIdList )
    goto LABEL_54;
  size = selectUserServantIdList->fields._size;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58720688(
    v5,
    size,
    (const MethodInfo_38001B0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78535688);
  this = (ServantOperationManager_o *)v2->fields.selectUserServantIdList;
  v45 = (Il2CppObject *)v2;
  if ( !this )
    goto LABEL_54;
  System_Collections_Generic_List_long___GetEnumerator(
    &v46,
    (System_Collections_Generic_List_long__o *)this,
    (const MethodInfo_37E947C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v48 = v46;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v48,
            (const MethodInfo_35839E4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v48.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1C6BC60(0, v10);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v13 = Entity;
    if ( !Entity )
      sub_1C6BC60(0, v12);
    if ( UserServantEntity__IsMaterialTd((UserServantEntity_o *)Entity, 0) )
    {
      v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v14 )
        sub_1C6BC60(0, v15);
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)v14,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
      klass = v13[5].klass;
      monitor = v13[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = klass;
      *(_QWORD *)&v49.fields.fakeValue = monitor;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v49, 0);
      if ( !v16 )
        sub_1C6BC60(v19, (unsigned int)v19);
      v20 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v16,
              v19,
              (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v21 )
        sub_1C6BC60(0, v22);
      v24 = DataManager__GetMasterData_object_(
              (DataManager_o *)v21,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      v25 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v25 = NetworkManager_TypeInfo;
      }
      if ( !v20 )
        sub_1C6BC60(v25, v23);
      userIdNumber = v25->static_fields->userIdNumber;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v20[2],
              0);
      if ( !v24 )
        sub_1C6BC60(v27, v28);
      v29 = UserServantCollectionMaster__GetEntity((UserServantCollectionMaster_o *)v24, userIdNumber, v27, 0);
      v30 = v29;
      if ( v29 && UserServantCollectionEntity__IsGet(v29, 0) )
      {
        UserServantCollectionEntity__getTreasureDeviceInfo(v30, &tdInfo, -1, -1, 0);
        v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v31 )
          sub_1C6BC60(0, v32);
        v33 = DataManager__GetMasterData_object_(
                (DataManager_o *)v31,
                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !tdInfo )
          sub_1C6BC60(v33, v34);
        if ( !v33 )
          sub_1C6BC60(0, v34);
        v35 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                tdInfo->fields.id,
                (const MethodInfo_33F90DC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !v35 )
          sub_1C6BC60(0, v36);
        if ( v30->fields.treasureDeviceLv1 != LODWORD(v35[3].klass) )
        {
          if ( !v5 )
            sub_1C6BC60(v35, v36);
          items = v5->fields._items;
          v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C6BC60(v35, v36);
          v41 = v5->fields._size;
          if ( (unsigned int)v41 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v13,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + v41;
            v5->fields._size = v41 + 1;
            v42[4] = (Il2CppClass *)v13;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v13, v37, v38);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v48,
    (const MethodInfo_35839E0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  if ( !v5 )
    goto LABEL_54;
  if ( v5->fields._size >= 1 )
  {
    v43 = (ServantCheckWarningDialog_o *)v45[8].klass;
    v44 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1C6BC54(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v44,
      v45,
      Method_ServantOperationManager__SellMaterialTdWarning_b__53_0__,
      0);
    if ( v43 )
    {
      ServantCheckWarningDialog__OpenSellMaterialTdWarning(
        v43,
        (System_Collections_Generic_List_UserServantEntity__o *)v5,
        v44,
        0);
      return;
    }
LABEL_54:
    sub_1C6BC60(this, method);
  }
  ServantOperationManager__OpenSellConfirmDialog((ServantOperationManager_o *)v45, method);
}


void ServantOperationManager__SellSSRareWarning(
        ServantOperationManager_o *this,
        System_Collections_Generic_List_UserServantEntity__o *userSvtEntityList,
        const MethodInfo *method)
{
  ServantOperationManager___c_c *v5; // x0
  System_Predicate_object__o *_9__52_0; // x21
  Il2CppObject *v7; // x22
  struct ServantOperationManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  ServantCheckWarningDialog_o *servantCheckWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v13; // x22

  if ( (byte_4CB23C6 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_1C6BA08(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C6BA08(&Method_ServantOperationManager__SellSSRareWarning_b__52_1__);
    sub_1C6BA08(&Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__);
    sub_1C6BA08(&ServantOperationManager___c_TypeInfo);
    byte_4CB23C6 = 1;
  }
  v5 = ServantOperationManager___c_TypeInfo;
  if ( !ServantOperationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantOperationManager___c_TypeInfo);
    v5 = ServantOperationManager___c_TypeInfo;
  }
  _9__52_0 = (System_Predicate_object__o *)v5->static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantOperationManager___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__52_0 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(_9__52_0, v7, Method_ServantOperationManager___c__SellSSRareWarning_b__52_0__, 0);
    static_fields = ServantOperationManager___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Predicate_UserServantEntity__o *)_9__52_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__52_0, (int32_t)_9__52_0, v9, v10);
  }
  if ( !userSvtEntityList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)userSvtEntityList,
         (System_Predicate_T__o *)_9__52_0,
         (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    servantCheckWarningDialog = this->fields.servantCheckWarningDialog;
    v13 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1C6BC54(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    ServantCheckWarningDialog_ClickDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ServantOperationManager__SellSSRareWarning_b__52_1__,
      0);
    if ( servantCheckWarningDialog )
    {
      ServantCheckWarningDialog__OpenSellSSRareWarning(servantCheckWarningDialog, userSvtEntityList, v13, 0);
      return;
    }
LABEL_14:
    sub_1C6BC60(v5, userSvtEntityList);
  }
  ServantOperationManager__SellMaterialTdWarning(this, v11);
}


void ServantOperationManager__SetFilter2Text(
        ServantOperationManager_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UILabel_o *filter2Label; // x0

  filter2Label = this->fields.filter2Label;
  if ( !filter2Label )
    sub_1C6BC60(0, text);
  UILabel__set_text(filter2Label, text, 0);
}


void ServantOperationManager__SetMode(
        ServantOperationManager_o *this,
        int32_t mode,
        System_Action_ServantOperationManager_ActionKind__long____long____o *onSelect,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.onSelect = onSelect;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onSelect, (int32_t)onSelect, (int32_t)onSelect, method);
  ServantOperationManager__SetMode_35297380(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__SetMode_35297380(ServantOperationManager_o *this, int32_t mode, const MethodInfo *method)
{
  ServantOperationManager_o *v4; // x20
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9
  ServantOperationListViewManager_o *v7; // x21
  System_Action_object__o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4CB23C1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_ServantOperationListViewItem__TypeInfo);
    this = (ServantOperationManager_o *)sub_1C6BA08(&Method_ServantOperationManager_OnSelectServant__);
    byte_4CB23C1 = 1;
  }
  servantOperationListViewManager = v4->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_7;
  kind = v4->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  v7 = servantOperationListViewManager->m_Items[kind];
  v8 = (System_Action_object__o *)sub_1C6BC54(System_Action_ServantOperationListViewItem__TypeInfo);
  System_Action_object____ctor(v8, (Il2CppObject *)v4, Method_ServantOperationManager_OnSelectServant__, 0);
  if ( !v7 )
LABEL_7:
    sub_1C6BC60(this, *(_QWORD *)&mode);
  v7->fields.onSelectServant = (struct System_Action_ServantOperationListViewItem__o *)v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.onSelectServant, (int32_t)v8, v9, v10);
  ServantOperationListViewManager__SetMode_35274388(v7, mode, v11);
}


void ServantOperationManager__SortItem(ServantOperationManager_o *this, const MethodInfo *method)
{
  struct ServantOperationListViewManager_array *servantOperationListViewManager; // x8
  __int64 kind; // x9

  servantOperationListViewManager = this->fields.servantOperationListViewManager;
  if ( !servantOperationListViewManager )
    goto LABEL_5;
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(servantOperationListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[kind];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, method);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager___SellMaterialTdWarning_b__53_0(
        ServantOperationManager_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
    ServantOperationManager__OpenSellConfirmDialog(this, (const MethodInfo *)decide);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager___SellSSRareWarning_b__52_1(
        ServantOperationManager_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
    ServantOperationManager__SellMaterialTdWarning(this, (const MethodInfo *)decide);
}


void ServantOperationManager__filterButtonState(
        ServantOperationManager_o *this,
        int32_t state,
        bool animation,
        const MethodInfo *method)
{
  struct UICommonButton_o *filterButton; // x0

  filterButton = this->fields.filterButton;
  if ( !filterButton )
    sub_1C6BC60(0, state);
  ((void (__fastcall *)(struct UICommonButton_o *, int32_t, bool, const MethodInfo *))filterButton->klass->vtable._14_SetState.methodPtr)(
    filterButton,
    state,
    animation,
    filterButton->klass->vtable._14_SetState.method);
}


bool ServantOperationManager__get_IsSellEquipedCmdCodeLastServant(
        ServantOperationManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}


int32_t ServantOperationManager__get_SelectMax(ServantOperationManager_o *this, const MethodInfo *method)
{
  return this->fields._SelectMax_k__BackingField;
}


int32_t ServantOperationManager__get_TotalSum(ServantOperationManager_o *this, const MethodInfo *method)
{
  return this->fields._TotalSum_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationManager__numberAdjustment(
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
        sub_1C6BC68(this);
      this = (ServantOperationManager_o *)servantOperationListViewManager->m_Items[v6];
      if ( !this )
        break;
      ServantOperationListViewManager__decrementNumber((ServantOperationListViewManager_o *)this, selectNum, method);
      max_length = servantOperationListViewManager->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C6BC60(this, *(_QWORD *)&selectNum);
  }
}


void ServantOperationManager__setServant(ServantOperationManager_o *this, bool flag, const MethodInfo *method)
{
  int v3; // w9

  if ( flag )
    v3 = 1;
  else
    v3 = -1;
  this->fields._TotalSum_k__BackingField += v3;
}


void ServantOperationManager__set_IsSellEquipedCmdCodeLastServant(
        ServantOperationManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSellEquipedCmdCodeLastServant_k__BackingField = value;
}


void ServantOperationManager__set_SelectMax(ServantOperationManager_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SelectMax_k__BackingField = value;
}


void ServantOperationManager__set_TotalSum(ServantOperationManager_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._TotalSum_k__BackingField = value;
}


void ServantOperationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB23CC & 1) == 0 )
  {
    sub_1C6BA08(&ServantOperationManager___c_TypeInfo);
    byte_4CB23CC = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ServantOperationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantOperationManager___c_TypeInfo->static_fields->__9 = (struct ServantOperationManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ServantOperationManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantOperationManager___c___ctor(ServantOperationManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantOperationManager___c___SellCombineWarning_b__51_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  return NpCombineControl__CheckConfirm_48868436(x, 0);
}


bool ServantOperationManager___c___SellSSRareWarning_b__52_0(
        ServantOperationManager___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4CB23CD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB23CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !x )
    goto LABEL_12;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v10, 0);
  if ( !v6
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v6,
                     (int32_t)Instance,
                     (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_12:
    sub_1C6BC60(Instance, v5);
  }
  return ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0) && UserServantEntity__getRarity(x, 0) == 5;
}


void ServantOperationManager___c__DisplayClass44_0___ctor(
        ServantOperationManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantOperationManager___c__DisplayClass44_0___OnClickDecide_b__0(
        ServantOperationManager___c__DisplayClass44_0_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4CB23CE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__);
    sub_1C6BA08(&ServantOperationManager___c__DisplayClass44_1_TypeInfo);
    byte_4CB23CE = 1;
  }
  v5 = sub_1C6BC54(ServantOperationManager___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = flag,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_ServantOperationManager___c__DisplayClass44_1__OnClickDecide_b__1__,
          0),
        !Instance) )
  {
    sub_1C6BC60(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31417952((CommonUI_o *)Instance, v11, 0);
}


void ServantOperationManager___c__DisplayClass44_1___ctor(
        ServantOperationManager___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantOperationManager___c__DisplayClass44_1___OnClickDecide_b__1(
        ServantOperationManager___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  ServantOperationManager___c__DisplayClass44_1_o *v2; // x19
  struct ServantOperationManager___c__DisplayClass44_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_ServantOperationListViewItem__o *equipedMaterialList; // x19
  Il2CppObject *_4__this; // x20
  ServantCheckEquipDialog_o *monitor; // x21
  ServantCheckEquipDialog_ClickDelegate_o *v7; // x22

  v2 = this;
  if ( (byte_4CB23CF & 1) == 0 )
  {
    sub_1C6BA08(&ServantCheckEquipDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantOperationListViewItem__get_Count__);
    this = (ServantOperationManager___c__DisplayClass44_1_o *)sub_1C6BA08(&Method_ServantOperationManager_ConfirmServantCheckEquipDialog__);
    byte_4CB23CF = 1;
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
      v7 = (ServantCheckEquipDialog_ClickDelegate_o *)sub_1C6BC54(ServantCheckEquipDialog_ClickDelegate_TypeInfo);
      ServantCheckEquipDialog_ClickDelegate___ctor(
        v7,
        _4__this,
        Method_ServantOperationManager_ConfirmServantCheckEquipDialog__,
        0);
      if ( monitor )
      {
        ServantCheckEquipDialog__Open_35157948(monitor, equipedMaterialList, v7, 0);
        return;
      }
LABEL_12:
      sub_1C6BC60(this, method);
    }
    ServantOperationManager__SellCombineWarning(CS___8__locals1->fields.__4__this, 0);
  }
}


void ServantOperationManager___c__DisplayClass51_0___ctor(
        ServantOperationManager___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantOperationManager___c__DisplayClass51_0___SellCombineWarning_b__1(
        ServantOperationManager___c__DisplayClass51_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  if ( decide )
  {
    if ( !this->fields.__4__this )
      sub_1C6BC60(this, decide);
    ServantOperationManager__SellSSRareWarning(this->fields.__4__this, this->fields.userSvtEntityList, 0);
  }
}