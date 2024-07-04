void __fastcall MissionNaviTransitionEntity___ctor(MissionNaviTransitionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E2B7D & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_int___ctor__, method);
    byte_48E2B7D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2FE684C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MissionNaviTransitionEntity__CreatePrimaryKey(
        MissionNaviTransitionEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.missionId;
}


System_String_o *__fastcall MissionNaviTransitionEntity__GetConfirmDialogMessage(
        MissionNaviTransitionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E2B7C & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_21263/*"msg"*/, method);
    byte_48E2B7C = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21263/*"msg"*/, 0LL, 0LL);
}


System_String_o *__fastcall MissionNaviTransitionEntity__GetTransitionParam(
        MissionNaviTransitionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E2B7B & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_23692/*"transitionParam"*/, method);
    byte_48E2B7B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23692/*"transitionParam"*/, 0LL, 0LL);
}