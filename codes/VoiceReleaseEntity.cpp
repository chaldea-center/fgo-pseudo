void __fastcall VoiceReleaseEntity___ctor(VoiceReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D5D5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1D5D5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall VoiceReleaseEntity__CreatePK(
        System_String_o *voiceId,
        int32_t condType,
        const MethodInfo *method)
{
  if ( (byte_4B1D5D3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_string__long___, *(_QWORD *)&condType);
    byte_4B1D5D3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_object__long_(
           (Il2CppObject *)voiceId,
           condType,
           (const MethodInfo_3018EC0 *)Method_DataEntityBase_CreateMultiplePK_string__long___);
}


System_String_o *__fastcall VoiceReleaseEntity__CreatePrimaryKey(VoiceReleaseEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x20
  System_String_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B1D5D2 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_4B1D5D2 = 1;
  }
  voiceId = this->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48161020(voiceId, 0LL);
  return VoiceReleaseEntity__CreatePK(v4, this->fields.condType, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceReleaseEntity__IsCondEnable(VoiceReleaseEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t condValue; // w20
  int32_t condType; // w21
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4B1D5D4 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    byte_4B1D5D4 = 1;
  }
  condType = this->fields.condType;
  condValue = this->fields.condValue;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4B165D1 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  userIdNumber = v8->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen_39559776(condType, condValue, userIdNumber, svtId, 0LL);
}