void VoiceEntity___ctor(VoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C283B1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C283B1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *VoiceEntity__CreatePrimaryKey(VoiceEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  if ( (byte_4C283AF & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4C283AF = 1;
  }
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(id, 0);
}


bool VoiceEntity__HasFlag(VoiceEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool VoiceEntity__IsCondEnable(VoiceEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x21
  VoiceReleaseMaster_o *v9; // x20
  const MethodInfo *v10; // x3

  if ( (byte_4C283B0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoiceReleaseMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C283B0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoiceReleaseMaster___);
  id = this->fields.id;
  v9 = (VoiceReleaseMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(id, 0);
  if ( !v9 )
LABEL_8:
    sub_1C2D6EC(Instance, v6);
  return VoiceReleaseMaster__IsCondEnable(v9, (System_String_o *)Instance, svtId, v10);
}


bool VoiceEntity__IsHide(VoiceEntity_o *this, const MethodInfo *method)
{
  return this->fields.closedType == 2;
}