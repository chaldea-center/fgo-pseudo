void __fastcall ServantStatusBattleListViewItem___ctor(
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
  bool v22; // w4
  bool v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_String_o *ShortName; // x1
  LocalizationManager_c *v27; // x0

  v14 = isEnabled;
  v15 = isCanSelect;
  v16 = isMine;
  if ( (byte_4A56CA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56CA8 = 1;
  }
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(dispLimitCount, 0LL);
  this->fields.isEnabled = v14;
  this->fields.isCanSelect = v15;
  ListViewItem__set_IsSelect((ListViewItem_o *)this, isSelect, 0LL);
  this->fields.isMine = v16;
  if ( dispLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v18);
    }
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)Instance, svtId, dispLimitCount, 0LL);
    if ( Entity )
    {
      ShortName = ServantCostumeEntity__getShortName(Entity, 0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4A56A2D )
      {
        sub_1B885B0(&LocalizationManager_TypeInfo);
        byte_4A56A2D = 1;
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
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.name,
      (int32_t)ShortName,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      method);
  }
}


void __fastcall ServantStatusBattleListViewItem__Finalize(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


int32_t __fastcall ServantStatusBattleListViewItem__get_DispLimitCount(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A56CAA & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A56CAA = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispLimitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}


bool __fastcall ServantStatusBattleListViewItem__get_IsCanSelect(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanSelect;
}


bool __fastcall ServantStatusBattleListViewItem__get_IsEnabled(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool __fastcall ServantStatusBattleListViewItem__get_IsMine(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMine;
}


System_String_o *__fastcall ServantStatusBattleListViewItem__get_Name(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.name;
}


int32_t __fastcall ServantStatusBattleListViewItem__get_SvtId(
        ServantStatusBattleListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A56CA9 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A56CA9 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}