void UserGradeComponent___ctor(UserGradeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector2_o UserGradeComponent__GetGradeLocalSize(UserGradeComponent_o *this, const MethodInfo *method)
{
  struct UISprite_o *usrGradeImg; // x0
  float v3; // s0
  float v4; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  usrGradeImg = this->fields.usrGradeImg;
  if ( !usrGradeImg )
    sub_1C6BC60(0, method);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))usrGradeImg->klass->vtable._22_get_localSize.methodPtr)(
    usrGradeImg,
    usrGradeImg->klass->vtable._22_get_localSize.method);
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


void UserGradeComponent__Set(UserGradeComponent_o *this, int32_t gradeKind, const MethodInfo *method)
{
  System_String_o *IconImage; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB5025 & 1) == 0 )
  {
    sub_1C6BA08(&Grade_TypeInfo);
    byte_4CB5025 = 1;
  }
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  IconImage = Grade__GetIconImage(gradeKind, 0);
  UserGradeComponent__SetImage(this, IconImage, v6);
}


void UserGradeComponent__SetGradeAlpha(UserGradeComponent_o *this, float alpha, const MethodInfo *method)
{
  struct UISprite_o *usrGradeImg; // x0

  usrGradeImg = this->fields.usrGradeImg;
  if ( !usrGradeImg )
    sub_1C6BC60(0, method);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))usrGradeImg->klass->vtable._8_set_alpha.methodPtr)(
    usrGradeImg,
    usrGradeImg->klass->vtable._8_set_alpha.method,
    alpha);
}


void UserGradeComponent__SetImage(UserGradeComponent_o *this, System_String_o *spName, const MethodInfo *method)
{
  UnityEngine_Object_o *usrGradeImg; // x21
  UISprite_o *v6; // x20

  if ( (byte_4CB5026 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5026 = 1;
  }
  usrGradeImg = (UnityEngine_Object_o *)this->fields.usrGradeImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(usrGradeImg, 0, 0) )
  {
    v6 = this->fields.usrGradeImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetGradeIcon(v6, spName, 0);
  }
}


void UserGradeComponent__SetImageLocal(UserGradeComponent_o *this, System_String_o *spName, const MethodInfo *method)
{
  UnityEngine_Object_o *usrGradeImg; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x0

  if ( (byte_4CB5027 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5027 = 1;
  }
  usrGradeImg = (UnityEngine_Object_o *)this->fields.usrGradeImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(usrGradeImg, 0, 0) )
  {
    v7 = this->fields.usrGradeImg;
    if ( !v7 )
      sub_1C6BC60(0, v6);
    UISprite__set_spriteName(v7, spName, 0);
  }
}