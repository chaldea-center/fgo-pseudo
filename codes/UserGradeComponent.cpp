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
    sub_B5D69C(0LL, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))usrGradeImg->klass->vtable._22_get_localSize.method)(
    usrGradeImg,
    usrGradeImg->klass->vtable._23_get_drawingDimensions.methodPtr);
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


void __fastcall UserGradeComponent__Set(UserGradeComponent_o *this, int32_t gradeKind, const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *IconImage; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E7159 & 1) == 0 )
  {
    sub_B5D5C4(&Grade_TypeInfo, gradeKind, (_DWORD)method, v3);
    byte_42E7159 = 1;
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  IconImage = Grade__GetIconImage(gradeKind, 0LL);
  UserGradeComponent__SetImage(this, IconImage, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGradeComponent__SetGradeAlpha(UserGradeComponent_o *this, float alpha, const MethodInfo *method)
{
  struct UISprite_o *usrGradeImg; // x0

  usrGradeImg = this->fields.usrGradeImg;
  if ( !usrGradeImg )
    sub_B5D69C(0LL, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *usrGradeImg; // x21
  UISprite_o *v10; // x20

  if ( (byte_42E715A & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)spName, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E715A = 1;
  }
  usrGradeImg = (UnityEngine_Object_o *)this->fields.usrGradeImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(usrGradeImg, 0LL, 0LL) )
  {
    v10 = this->fields.usrGradeImg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetGradeIcon(v10, spName, 0LL);
  }
}


void __fastcall UserGradeComponent__SetImageLocal(
        UserGradeComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *usrGradeImg; // x21
  __int64 v7; // x1
  UISprite_o *v8; // x0

  if ( (byte_42E715B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)spName, (_DWORD)method, v3);
    byte_42E715B = 1;
  }
  usrGradeImg = (UnityEngine_Object_o *)this->fields.usrGradeImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(usrGradeImg, 0LL, 0LL) )
  {
    v8 = this->fields.usrGradeImg;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UISprite__set_spriteName(v8, spName, 0LL);
  }
}