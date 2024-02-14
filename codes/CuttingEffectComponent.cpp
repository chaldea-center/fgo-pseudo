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
  UnityEngine_Object_o *gameObject; // x19
  ExUIMeshRenderer_o *leftMeshRenderer; // x0
  struct ExUIMeshRenderer_o *v7; // x20
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  struct ExUIMeshRenderer_o *rightMeshRenderer; // x20
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  const MethodInfo *v17; // x1

  if ( (byte_4216030 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, texture);
    byte_4216030 = 1;
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
          v7 = this->fields.leftMeshRenderer,
          *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL),
          !v7)
      || (((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))v7->klass->vtable._39_SetTweenColor.method)(
            v7,
            v7->klass->vtable._40_GetTweenColor.methodPtr,
            v8,
            v9,
            v10,
            v11),
          rightMeshRenderer = this->fields.rightMeshRenderer,
          *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL),
          !rightMeshRenderer) )
    {
LABEL_16:
      sub_B0D97C(leftMeshRenderer);
    }
    ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))rightMeshRenderer->klass->vtable._39_SetTweenColor.method)(
      rightMeshRenderer,
      rightMeshRenderer->klass->vtable._40_GetTweenColor.methodPtr,
      v13,
      v14,
      v15,
      v16);
    if ( !this->fields.isPause )
      CuttingEffectComponent__EffectResume(this, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CuttingEffectComponent__EffectResume(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *leftMeshRenderer; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s13
  float v8; // s10
  float v9; // s11
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s12
  float v14; // s8
  float v15; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x0
  System_Int32_array **v19; // x0
  UnityEngine_Component_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v35; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4216031 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10023/*"OnEndEffect"*/, method);
    byte_4216031 = 1;
  }
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  this->fields.isPause = 0;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  leftMeshRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(leftMeshRenderer, 0LL);
  if ( !leftMeshRenderer )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition(
                                    (UnityEngine_Transform_o *)leftMeshRenderer,
                                    0LL);
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.rightMeshRenderer;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  v7 = v4;
  v8 = v5;
  v9 = v6;
  leftMeshRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(leftMeshRenderer, 0LL);
  if ( !leftMeshRenderer )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftMeshRenderer,
                                     0LL);
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  v13 = v10;
  v14 = v11;
  v15 = v12;
  gameObject = UnityEngine_Component__get_gameObject(leftMeshRenderer, 0LL);
  v34.fields.x = v7 + -512.0;
  v34.fields.y = v8;
  v34.fields.z = v9;
  leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(gameObject, this->fields.duration, v34, 0LL);
  if ( !this->fields.rightMeshRenderer
    || (v17 = leftMeshRenderer,
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.rightMeshRenderer, 0LL),
        v35.fields.x = v13 + 512.0,
        v35.fields.y = v14,
        v35.fields.z = v15,
        leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(v18, this->fields.duration, v35, 0LL),
        !v17)
    || (LODWORD(v17[1].klass) = 1, !leftMeshRenderer) )
  {
LABEL_12:
    sub_B0D97C(leftMeshRenderer);
  }
  LODWORD(leftMeshRenderer[1].klass) = 1;
  v19 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17[3].klass = (UnityEngine_Component_c *)v19;
  v20 = v17 + 3;
  sub_B0D840((BattleServantConfConponent_o *)v20, v19, v21, v22, v23, v24, v25, v26);
  v27 = (System_Int32_array **)StringLiteral_10023/*"OnEndEffect"*/;
  v20->monitor = (void *)StringLiteral_10023/*"OnEndEffect"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v20->monitor, v27, v28, v29, v30, v31, v32, v33);
}


void __fastcall CuttingEffectComponent__OnEndEffect(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4216032 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216032 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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