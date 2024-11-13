void __fastcall VoicePlayGroupEntity___ctor(VoicePlayGroupEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1714F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1714F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall VoicePlayGroupEntity__CreatePrimaryKey(
        VoicePlayGroupEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  if ( (byte_4B1714E & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method, v2);
    byte_4B1714E = 1;
  }
  id = this->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(id, 0LL);
}