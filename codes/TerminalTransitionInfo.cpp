void __fastcall TerminalTransitionInfo___ctor(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  TerminalTransitionInfo__Init(this, v3);
}


void __fastcall TerminalTransitionInfo__Init(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_String_array **p_afterActionVals; // x19

  if ( (byte_42E4F05 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E4F05 = 1;
  }
  this->fields.missionId = 0;
  this->fields.beforeActionVals = 0LL;
  sub_B5D560(&this->fields.beforeActionVals);
  this->fields.afterActionVals = 0LL;
  p_afterActionVals = &this->fields.afterActionVals;
  sub_B5D560(p_afterActionVals);
  p_afterActionVals[1] = (struct System_String_array *)StringLiteral_1/*""*/;
  sub_B5D560(p_afterActionVals + 1);
  *((_DWORD *)p_afterActionVals + 4) = 0;
}


void __fastcall TerminalTransitionInfo__SetParameters(
        TerminalTransitionInfo_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_B5D69C(this, 0LL);
  this->fields.missionId = info->fields.missionId;
  this->fields.voiceAssetName = info->fields.voiceAssetName;
  sub_B5D560(&this->fields.voiceAssetName);
}