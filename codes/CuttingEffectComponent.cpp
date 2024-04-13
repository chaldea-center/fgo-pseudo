void __fastcall CuttingEffectComponent___ctor(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CuttingEffectComponent__CuttingStart(
        CuttingEffectComponent_o *this,
        UnityEngine_Texture_o *texture,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19
  ExUIMeshRenderer_o *leftMeshRenderer; // x0
  struct ExUIMeshRenderer_o *v8; // x20
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s3
  struct ExUIMeshRenderer_o *rightMeshRenderer; // x20
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  const MethodInfo *v18; // x1

  if ( (byte_42EA312 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)texture, (_DWORD)method, v3);
    byte_42EA312 = 1;
  }
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 0.5;
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  else
  {
    leftMeshRenderer = this->fields.leftMeshRenderer;
    this->fields.isStart = 1;
    if ( !leftMeshRenderer )
      goto LABEL_16;
    ExUIMeshRenderer__SetImage(leftMeshRenderer, texture, 0LL);
    leftMeshRenderer = this->fields.rightMeshRenderer;
    if ( !leftMeshRenderer
      || (ExUIMeshRenderer__SetImage(leftMeshRenderer, texture, 0LL),
          v8 = this->fields.leftMeshRenderer,
          *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL),
          !v8)
      || (((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))v8->klass->vtable._39_SetTweenColor.method)(
            v8,
            v8->klass->vtable._40_GetTweenColor.methodPtr,
            v9,
            v10,
            v11,
            v12),
          rightMeshRenderer = this->fields.rightMeshRenderer,
          *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL),
          !rightMeshRenderer) )
    {
LABEL_16:
      sub_B5D69C(leftMeshRenderer, texture);
    }
    ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))rightMeshRenderer->klass->vtable._39_SetTweenColor.method)(
      rightMeshRenderer,
      rightMeshRenderer->klass->vtable._40_GetTweenColor.methodPtr,
      v14,
      v15,
      v16,
      v17);
    if ( !this->fields.isPause )
      CuttingEffectComponent__EffectResume(this, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CuttingEffectComponent__EffectResume(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *leftMeshRenderer; // x0
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s13
  float v10; // s10
  float v11; // s11
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s12
  float v16; // s8
  float v17; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x0
  System_Int32_array **v21; // x0
  UnityEngine_Component_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Vector3_o v36; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v37; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EA313 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10105/*"OnEndEffect"*/, (_DWORD)method, v2, v3);
    byte_42EA313 = 1;
  }
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  this->fields.isPause = 0;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  leftMeshRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(leftMeshRenderer, 0LL);
  if ( !leftMeshRenderer )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition(
                                    (UnityEngine_Transform_o *)leftMeshRenderer,
                                    0LL);
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.rightMeshRenderer;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  v9 = v6;
  v10 = v7;
  v11 = v8;
  leftMeshRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(leftMeshRenderer, 0LL);
  if ( !leftMeshRenderer )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftMeshRenderer,
                                     0LL);
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  v15 = v12;
  v16 = v13;
  v17 = v14;
  gameObject = UnityEngine_Component__get_gameObject(leftMeshRenderer, 0LL);
  v36.fields.x = v9 + -512.0;
  v36.fields.y = v10;
  v36.fields.z = v11;
  leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(gameObject, this->fields.duration, v36, 0LL);
  if ( !this->fields.rightMeshRenderer
    || (v19 = leftMeshRenderer,
        v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.rightMeshRenderer, 0LL),
        v37.fields.x = v15 + 512.0,
        v37.fields.y = v16,
        v37.fields.z = v17,
        leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(v20, this->fields.duration, v37, 0LL),
        !v19)
    || (LODWORD(v19[1].klass) = 1, !leftMeshRenderer) )
  {
LABEL_12:
    sub_B5D69C(leftMeshRenderer, method);
  }
  LODWORD(leftMeshRenderer[1].klass) = 1;
  v21 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19[3].klass = (UnityEngine_Component_c *)v21;
  v22 = v19 + 3;
  sub_B5D560((BattleServantConfConponent_o *)v22, v21, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_10105/*"OnEndEffect"*/;
  v22->monitor = (void *)StringLiteral_10105/*"OnEndEffect"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v22->monitor, v29, v30, v31, v32, v33, v34, v35);
}


void __fastcall CuttingEffectComponent__OnEndEffect(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42EA314 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA314 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CuttingEffectComponent__Resume(CuttingEffectComponent_o *this, bool isSkip, const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CuttingEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}