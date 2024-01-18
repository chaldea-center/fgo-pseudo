void __fastcall SpecifiedSceneInfo___ctor(SpecifiedSceneInfo_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  v2 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields._closeBtnObject = 0LL;
  v2 = (BattleServantConfConponent_o *)((char *)v2 + 24);
  *(_QWORD *)&v2[-1].fields.isOpenAfter = 0LL;
  sub_B2C2F8(v2, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall SpecifiedSceneInfo__InitParameter(SpecifiedSceneInfo_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_array **p_nextSceneParam; // x0

  this->fields.nextSceneParam = 0LL;
  p_nextSceneParam = &this->fields.nextSceneParam;
  *(p_nextSceneParam - 1) = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)p_nextSceneParam, 0LL, v2, v3, v4, v5, v6, v7);
}