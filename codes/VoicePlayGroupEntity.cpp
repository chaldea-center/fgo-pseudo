void __fastcall VoicePlayGroupEntity___ctor(VoicePlayGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FFA37 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FFA37 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall VoicePlayGroupEntity__CreatePrimaryKey(
        VoicePlayGroupEntity_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  if ( (byte_49FFA36 & 1) == 0 )
  {
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_49FFA36 = 1;
  }
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46217936(id, 0LL);
}