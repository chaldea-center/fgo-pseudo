void __fastcall VoiceEntity___ctor(VoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C077 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C077 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall VoiceEntity__CreatePrimaryKey(VoiceEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  if ( (byte_4A5C075 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4A5C075 = 1;
  }
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(id, 0LL);
}


bool __fastcall VoiceEntity__HasFlag(VoiceEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool __fastcall VoiceEntity__IsCondEnable(VoiceEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x21
  VoiceReleaseMaster_o *v9; // x20
  const MethodInfo *v10; // x3

  if ( (byte_4A5C076 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoiceReleaseMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C076 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoiceReleaseMaster___);
  id = this->fields.id;
  v9 = (VoiceReleaseMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(id, 0LL);
  if ( !v9 )
LABEL_8:
    sub_1B8880C(Instance, v6);
  return VoiceReleaseMaster__IsCondEnable(v9, (System_String_o *)Instance, svtId, v10);
}


bool __fastcall VoiceEntity__IsHide(VoiceEntity_o *this, const MethodInfo *method)
{
  return this->fields.closedType == 2;
}