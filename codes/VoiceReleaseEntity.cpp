void VoiceReleaseEntity___ctor(VoiceReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C283D8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C283D8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *VoiceReleaseEntity__CreatePK(System_String_o *voiceId, int32_t condType, const MethodInfo *method)
{
  if ( (byte_4C283D6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_string__long___);
    byte_4C283D6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_object__long_(
           (Il2CppObject *)voiceId,
           condType,
           (const MethodInfo_30CCD6C *)Method_DataEntityBase_CreateMultiplePK_string__long___);
}


System_String_o *VoiceReleaseEntity__CreatePrimaryKey(VoiceReleaseEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x20
  System_String_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C283D5 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4C283D5 = 1;
  }
  voiceId = this->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(voiceId, 0);
  return VoiceReleaseEntity__CreatePK(v4, this->fields.condType, v5);
}


bool VoiceReleaseEntity__IsCondEnable(VoiceReleaseEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  int32_t condValue; // w20
  int32_t condType; // w21
  NetworkManager_c *v7; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C283D7 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C283D7 = 1;
  }
  condType = this->fields.condType;
  condValue = this->fields.condValue;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  userIdNumber = v7->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen_40146196(condType, condValue, userIdNumber, svtId, 0);
}