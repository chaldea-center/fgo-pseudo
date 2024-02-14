void __fastcall VoiceInfo___ctor(VoiceInfo_o *this, const MethodInfo *method)
{
  VoiceInfo_o *v2; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.isCanPlay = 0;
  v2->fields.overwriteName = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.overwriteName, 0LL, v3, v4, v5, v6, v7, v8);
  v2->fields.overwriteNameDefault = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.overwriteNameDefault, 0LL, v9, v10, v11, v12, v13, v14);
  v2->fields.servantVoiceConds = 0LL;
  v2 = (VoiceInfo_o *)((char *)v2 + 56);
  v2[-1].fields.servantVoiceConds = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)v2, 0LL, v15, v16, v17, v18, v19, v20);
}