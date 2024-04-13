void __fastcall VoiceReleaseEntity___ctor(VoiceReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E68A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E68A8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall VoiceReleaseEntity__CreatePK(
        System_String_o *voiceId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E68A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_string__long___, condType, (_DWORD)method, v3);
    byte_42E68A6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_string__long_(
           voiceId,
           condType,
           (const MethodInfo_1AE3310 *)Method_DataEntityBase_CreateMultiplePK_string__long___);
}


System_String_o *__fastcall VoiceReleaseEntity__CreatePrimaryKey(VoiceReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E68A5 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E68A5 = 1;
  }
  voiceId = this->fields.voiceId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(voiceId, 0LL);
  return VoiceReleaseEntity__CreatePK(v6, this->fields.condType, v7);
}


bool __fastcall VoiceReleaseEntity__IsCondEnable(VoiceReleaseEntity_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t condValue; // w20
  int32_t condType; // w21
  int64_t UserId; // x22

  if ( (byte_42E68A7 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    byte_42E68A7 = 1;
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
  return CondType__IsOpen_25916820(condType, condValue, UserId, svtId, 0LL);
}