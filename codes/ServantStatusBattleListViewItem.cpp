void ServantStatusBattleListViewItem___ctor(
        ServantStatusBattleListViewItem_o *this,
        int32_t index,
        int32_t svtId,
        int32_t limitCountStage,
        bool isEnabled,
        bool isCanSelect,
        bool isSelect,
        bool isMine,
        bool isSealed,
        const MethodInfo *method)
{
  bool v15; // w27
  bool v16; // w26
  bool v17; // w24
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *Master_object; // x0
  __int64 v23; // x1
  ServantCostumeEntity_o *Entity; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_String_o *ShortName; // x1
  LocalizationManager_c *v33; // x0

  v15 = isEnabled;
  v16 = isCanSelect;
  v17 = isMine;
  if ( (byte_5933992 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933992 = 1;
  }
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19);
  this->fields.limitCountStage = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCountStage, 0);
  this->fields.isEnabled = v15;
  this->fields.isCanSelect = v16;
  ListViewItem__set_IsSelect((ListViewItem_o *)this, isSelect, 0);
  this->fields.isMine = v17;
  this->fields.isSealed = isSealed;
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20, v21);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
    if ( !Master_object )
      sub_21FFECC(0, v23);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Master_object, svtId, limitCountStage, 0);
    if ( Entity )
    {
      ShortName = ServantCostumeEntity__getShortName(Entity, 0);
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
      if ( !byte_593385D )
      {
        sub_21FFC50(&LocalizationManager_TypeInfo);
        byte_593385D = 1;
      }
      v33 = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
        v33 = LocalizationManager_TypeInfo;
      }
      ShortName = v33->static_fields->unknownNameText;
    }
    this->fields.name = ShortName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.name,
      (int32_t)ShortName,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
}


bool ServantStatusBattleListViewItem__get_IsCanSelect(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanSelect;
}


bool ServantStatusBattleListViewItem__get_IsEnabled(ServantStatusBattleListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool ServantStatusBattleListViewItem__get_IsMine(ServantStatusBattleListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isMine;
}


bool ServantStatusBattleListViewItem__get_IsSealed(ServantStatusBattleListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSealed;
}


int32_t ServantStatusBattleListViewItem__get_LimitCountStage(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_5933993 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933993 = 1;
  }
  v5 = *(_QWORD *)&this->fields.limitCountStage.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCountStage.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v7, 0);
}


System_String_o *ServantStatusBattleListViewItem__get_Name(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.name;
}