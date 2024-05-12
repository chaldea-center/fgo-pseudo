void __fastcall VoiceEntity___ctor(VoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43912AD & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_43912AD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall VoiceEntity__CreatePrimaryKey(VoiceEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  if ( (byte_43912AB & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_43912AB = 1;
  }
  id = this->fields.id;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(id, 0LL);
}


bool __fastcall VoiceEntity__HasFlag(VoiceEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool __fastcall VoiceEntity__IsCondEnable(VoiceEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x21
  VoiceReleaseMaster_o *v9; // x20

  if ( (byte_43912AC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_VoiceReleaseMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43912AC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_VoiceReleaseMaster___);
  id = this->fields.id;
  v9 = (VoiceReleaseMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(id, 0LL);
  if ( !v9 )
LABEL_9:
    sub_B7769C(Instance, v6);
  return VoiceReleaseMaster__IsCondEnable(v9, (System_String_o *)Instance, svtId, 0LL);
}


bool __fastcall VoiceEntity__IsHide(VoiceEntity_o *this, const MethodInfo *method)
{
  return this->fields.closedType == 2;
}