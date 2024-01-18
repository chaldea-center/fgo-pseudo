void __fastcall TerminalTransitionInfo___ctor(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  TerminalTransitionInfo__Init(this, v3);
}


void __fastcall TerminalTransitionInfo__Init(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  struct System_String_array **p_afterActionVals; // x19
  void *v4; // x1

  if ( (byte_4184CB0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4184CB0 = 1;
  }
  this->fields.missionId = 0;
  this->fields.beforeActionVals = 0LL;
  sub_B2C2F8(&this->fields.beforeActionVals, 0LL);
  this->fields.afterActionVals = 0LL;
  p_afterActionVals = &this->fields.afterActionVals;
  sub_B2C2F8(p_afterActionVals, 0LL);
  v4 = StringLiteral_1/*""*/;
  p_afterActionVals[1] = (struct System_String_array *)StringLiteral_1/*""*/;
  sub_B2C2F8(p_afterActionVals + 1, v4);
  *((_DWORD *)p_afterActionVals + 4) = 0;
}


void __fastcall TerminalTransitionInfo__SetParameters(
        TerminalTransitionInfo_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  struct System_String_o *voiceAssetName; // x1

  if ( !info )
    sub_B2C434(this, 0LL);
  this->fields.missionId = info->fields.missionId;
  voiceAssetName = info->fields.voiceAssetName;
  this->fields.voiceAssetName = voiceAssetName;
  sub_B2C2F8(&this->fields.voiceAssetName, voiceAssetName);
}