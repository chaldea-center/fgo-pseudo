void VoiceEntity___ctor(VoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397FA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59397FA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *VoiceEntity__CreatePrimaryKey(VoiceEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  if ( (byte_59397F8 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_59397F8 = 1;
  }
  id = this->fields.id;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(id, 0);
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
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x21
  VoiceReleaseMaster_o *v10; // x20
  const MethodInfo *v11; // x3

  if ( (byte_59397F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_VoiceReleaseMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59397F9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_VoiceReleaseMaster___);
  id = this->fields.id;
  v10 = (VoiceReleaseMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(id, 0);
  if ( !v10 )
LABEL_8:
    sub_21FFECC(Instance, v6);
  return VoiceReleaseMaster__IsCondEnable(v10, (System_String_o *)Instance, svtId, v11);
}