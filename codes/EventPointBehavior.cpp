void __fastcall EventPointBehavior___ctor(EventPointBehavior_o *this, const MethodInfo *method)
{
  EventPointBehavior_o *v2; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.voiceIds = 0LL;
  v2 = (EventPointBehavior_o *)((char *)v2 + 48);
  *(_QWORD *)&v2[-1].fields.bgmId = 0LL;
  *(_QWORD *)&v2[-1].fields.limitCount = 0LL;
  *(_QWORD *)&v2[-1].fields.bgId = 0LL;
  LODWORD(v2[-1].fields.voiceIds) = 0;
  sub_B2C2F8((BattleServantConfConponent_o *)v2, 0LL, v3, v4, v5, v6, v7, v8);
}