void __fastcall VoiceReleaseEntity___ctor(VoiceReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE01C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE01C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall VoiceReleaseEntity__CreatePK(
        System_String_o *voiceId,
        int32_t condType,
        const MethodInfo *method)
{
  if ( (byte_42AE01A & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_string__long___);
    byte_42AE01A = 1;
  }
  return DataEntityBase__CreateMultiplePK_string__long_(
           voiceId,
           condType,
           (const MethodInfo_1A4E248 *)Method_DataEntityBase_CreateMultiplePK_string__long___);
}


System_String_o *__fastcall VoiceReleaseEntity__CreatePrimaryKey(VoiceReleaseEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x20
  System_String_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_42AE019 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_42AE019 = 1;
  }
  voiceId = this->fields.voiceId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(voiceId, 0LL);
  return VoiceReleaseEntity__CreatePK(v4, this->fields.condType, v5);
}


bool __fastcall VoiceReleaseEntity__IsCondEnable(VoiceReleaseEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  int32_t condValue; // w20
  int32_t condType; // w21
  int64_t UserId; // x22

  if ( (byte_42AE01B & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AE01B = 1;
  }
  condType = this->fields.condType;
  condValue = this->fields.condValue;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen_26026732(condType, condValue, UserId, svtId, 0LL);
}