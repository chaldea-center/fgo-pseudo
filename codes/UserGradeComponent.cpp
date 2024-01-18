void __fastcall UserGradeComponent___ctor(UserGradeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Vector2_o __fastcall UserGradeComponent__GetGradeLocalSize(
        UserGradeComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *usrGradeImg; // x0
  float v3; // s0
  float v4; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  usrGradeImg = this->fields.usrGradeImg;
  if ( !usrGradeImg )
    sub_B2C434(0LL, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))usrGradeImg->klass->vtable._22_get_localSize.method)(
    usrGradeImg,
    usrGradeImg->klass->vtable._23_get_drawingDimensions.methodPtr);
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGradeComponent__Set(UserGradeComponent_o *this, int32_t gradeKind, const MethodInfo *method)
{
  System_String_o *IconImage; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4186FFF & 1) == 0 )
  {
    sub_B2C35C(&Grade_TypeInfo, *(_QWORD *)&gradeKind);
    byte_4186FFF = 1;
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  IconImage = Grade__GetIconImage(gradeKind, 0LL);
  UserGradeComponent__SetImage(this, IconImage, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGradeComponent__SetGradeAlpha(UserGradeComponent_o *this, float alpha, const MethodInfo *method)
{
  struct UISprite_o *usrGradeImg; // x0

  usrGradeImg = this->fields.usrGradeImg;
  if ( !usrGradeImg )
    sub_B2C434(0LL, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))usrGradeImg->klass->vtable._8_set_alpha.method)(
    usrGradeImg,
    usrGradeImg->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    *(long double *)&alpha);
}


void __fastcall UserGradeComponent__SetImage(
        UserGradeComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *usrGradeImg; // x21
  UISprite_o *v7; // x20

  if ( (byte_4187000 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, spName);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4187000 = 1;
  }
  usrGradeImg = (UnityEngine_Object_o *)this->fields.usrGradeImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(usrGradeImg, 0LL, 0LL) )
  {
    v7 = this->fields.usrGradeImg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetGradeIcon(v7, spName, 0LL);
  }
}


void __fastcall UserGradeComponent__SetImageLocal(
        UserGradeComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *usrGradeImg; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x0

  if ( (byte_4187001 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, spName);
    byte_4187001 = 1;
  }
  usrGradeImg = (UnityEngine_Object_o *)this->fields.usrGradeImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(usrGradeImg, 0LL, 0LL) )
  {
    v7 = this->fields.usrGradeImg;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    UISprite__set_spriteName(v7, spName, 0LL);
  }
}