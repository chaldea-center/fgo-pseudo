void SpecifiedSceneInfo___ctor(SpecifiedSceneInfo_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.nextSceneParam = 0;
  *(_QWORD *)&this->fields.eventId = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nextSceneParam, 0, v3, v4, v5, v6, v7, v8);
}


void SpecifiedSceneInfo__InitParameter(SpecifiedSceneInfo_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_array **p_nextSceneParam; // x0

  this->fields.nextSceneParam = 0;
  p_nextSceneParam = &this->fields.nextSceneParam;
  *(p_nextSceneParam - 1) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_nextSceneParam, 0, v2, v3, v4, v5, v6, v7);
}