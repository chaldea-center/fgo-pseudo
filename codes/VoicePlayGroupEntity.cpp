void __fastcall VoicePlayGroupEntity___ctor(VoicePlayGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4388FA3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4388FA3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall VoicePlayGroupEntity__CreatePrimaryKey(
        VoicePlayGroupEntity_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  if ( (byte_4388FA2 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4388FA2 = 1;
  }
  id = this->fields.id;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(id, 0LL);
}