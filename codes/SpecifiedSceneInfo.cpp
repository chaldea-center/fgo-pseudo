void SpecifiedSceneInfo___ctor(SpecifiedSceneInfo_o *this, const MethodInfo *method)
{
  SpecifiedSceneInfo_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  v2 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v2->fields.nextSceneParam = 0;
  v2 = (SpecifiedSceneInfo_o *)((char *)v2 + 24);
  v2[-1].fields.nextSceneParam = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v2, 0, v3, v4, v5, v6, v7, v8);
}


void SpecifiedSceneInfo__InitParameter(SpecifiedSceneInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_array **p_nextSceneParam; // x0

  this->fields.nextSceneParam = 0;
  p_nextSceneParam = &this->fields.nextSceneParam;
  *(p_nextSceneParam - 1) = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_nextSceneParam, 0, v2, v3, v4, v5, v6, v7);
}