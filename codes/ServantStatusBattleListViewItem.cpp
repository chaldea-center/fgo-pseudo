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
  bool v15; // w26
  bool v16; // w27
  bool v17; // w25
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  ServantCostumeEntity_o *Entity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_String_o *ShortName; // x1
  LocalizationManager_c *v28; // x0

  v15 = isEnabled;
  v16 = isCanSelect;
  v17 = isMine;
  if ( (byte_4E72DD4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantCostumeMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E72DD4 = 1;
  }
  ListViewItem___ctor_45157124((ListViewItem_o *)this, index, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.limitCountStage = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCountStage, 0);
  this->fields.isEnabled = v15;
  this->fields.isCanSelect = v16;
  ListViewItem__set_IsSelect((ListViewItem_o *)this, isSelect, 0);
  this->fields.isMine = v17;
  this->fields.isSealed = isSealed;
  if ( LimitCountUtility__IsCostume(limitCountStage, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantCostumeMaster___);
    if ( !Master_object )
      sub_1D0F30C(0, v19);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Master_object, svtId, limitCountStage, 0);
    if ( Entity )
    {
      ShortName = ServantCostumeEntity__getShortName(Entity, 0);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4E72907 )
      {
        sub_1D0F0B4(&LocalizationManager_TypeInfo);
        byte_4E72907 = 1;
      }
      v28 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v28 = LocalizationManager_TypeInfo;
      }
      ShortName = v28->static_fields->unknownNameText;
    }
    this->fields.name = ShortName;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.name, (int32_t)ShortName, v21, v22, v23, v24, v25, v26);
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
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4E72DD5 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E72DD5 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCountStage.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCountStage.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v6, 0);
}


System_String_o *ServantStatusBattleListViewItem__get_Name(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.name;
}