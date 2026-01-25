void ServantStatusBattleListViewItem___ctor(
        ServantStatusBattleListViewItem_o *this,
        int32_t index,
        int32_t svtId,
        int32_t dispLimitCount,
        bool isEnabled,
        bool isCanSelect,
        bool isSelect,
        bool isMine,
        const MethodInfo *method)
{
  bool v14; // w26
  bool v15; // w25
  bool v16; // w24
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  ServantCostumeEntity_o *Entity; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_String_o *ShortName; // x1
  LocalizationManager_c *v27; // x0

  v14 = isEnabled;
  v15 = isCanSelect;
  v16 = isMine;
  if ( (byte_4CEA7E1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEA7E1 = 1;
  }
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(dispLimitCount, 0);
  this->fields.isEnabled = v14;
  this->fields.isCanSelect = v15;
  ListViewItem__set_IsSelect((ListViewItem_o *)this, isSelect, 0);
  this->fields.isMine = v16;
  if ( dispLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___)) == 0 )
    {
      sub_1C7BD40(Instance, v18);
    }
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, svtId, dispLimitCount, 0);
    if ( Entity )
    {
      ShortName = ServantCostumeEntity__getShortName(Entity, 0);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4CE9782 )
      {
        sub_1C7BAE8(&LocalizationManager_TypeInfo);
        byte_4CE9782 = 1;
      }
      v27 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = LocalizationManager_TypeInfo;
      }
      ShortName = v27->static_fields->unknownNameText;
    }
    this->fields.name = ShortName;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.name, (int32_t)ShortName, v20, v21, v22, v23, v24, v25);
  }
}


void ServantStatusBattleListViewItem__Finalize(ServantStatusBattleListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


int32_t ServantStatusBattleListViewItem__get_DispLimitCount(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4CEA7E3 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA7E3 = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v6, 0);
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


System_String_o *ServantStatusBattleListViewItem__get_Name(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.name;
}


int32_t ServantStatusBattleListViewItem__get_SvtId(ServantStatusBattleListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4CEA7E2 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEA7E2 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v6, 0);
}