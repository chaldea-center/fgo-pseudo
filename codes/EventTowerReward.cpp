void __fastcall EventTowerReward___ctor(EventTowerReward_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.iconId = 0u;
  *(_OWORD *)&this->fields.limitCount = 0u;
  *(_OWORD *)&this->fields.eventId = 0u;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.voiceIds, 0LL, v3, v4, v5, v6, v7, v8);
}