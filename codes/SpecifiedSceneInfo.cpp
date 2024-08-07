void __fastcall SpecifiedSceneInfo___ctor(SpecifiedSceneInfo_o *this, const MethodInfo *method)
{
  SpecifiedSceneInfo_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v2->fields.nextSceneParam = 0LL;
  v2 = (SpecifiedSceneInfo_o *)((char *)v2 + 24);
  v2[-1].fields.nextSceneParam = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v2, 0, v3, v4);
}


void __fastcall SpecifiedSceneInfo__InitParameter(SpecifiedSceneInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_String_array **p_nextSceneParam; // x0

  this->fields.nextSceneParam = 0LL;
  p_nextSceneParam = &this->fields.nextSceneParam;
  *(p_nextSceneParam - 1) = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_nextSceneParam, 0, v2, v3);
}