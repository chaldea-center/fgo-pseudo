void __fastcall EffectFlipData___ctor(EffectFlipData_o *this, const MethodInfo *method)
{
  this->fields.effectId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EffectFlipData__Flip(
        EffectFlipData_o *this,
        UnityEngine_Transform_o *trEffect,
        const MethodInfo *method)
{
  float v5; // s0
  float v7; // s2

  if ( this->fields.rotate >= 1 )
  {
    if ( !trEffect )
      goto LABEL_13;
    UnityEngine_Transform__Rotate_71145572(trEffect, 0.0, 180.0, 0.0, 0LL);
  }
  if ( this->fields.scaleX <= 0 && this->fields.scaleZ < 1 )
    return;
  if ( !trEffect )
LABEL_13:
    sub_1C3B9C0(this, trEffect);
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_localScale(trEffect, 0LL);
  if ( this->fields.scaleX >= 1 )
    v5 = -v5;
  if ( this->fields.scaleZ >= 1 )
    v7 = -v7;
  UnityEngine_Transform__set_localScale(trEffect, *(UnityEngine_Vector3_o *)&v5, 0LL);
}


bool __fastcall EffectFlipData__IsMatch(EffectFlipData_o *this, int32_t compEffectId, const MethodInfo *method)
{
  return this->fields.effectId == -1 || this->fields.effectId == compEffectId;
}


void __fastcall EffectFlipData__OverwriteNodeName(
        EffectFlipData_o *this,
        System_String_o **baseNodeName,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_String_o *parentNodeName; // x1

  if ( !System_String__IsNullOrEmpty(this->fields.parentNodeName, 0LL) )
  {
    parentNodeName = this->fields.parentNodeName;
    *baseNodeName = parentNodeName;
    sub_1C3B708((PartyOrganizationUtility_o *)baseNodeName, (int64_t)parentNodeName, v5, v6, v7, v8, v9, v10);
  }
}