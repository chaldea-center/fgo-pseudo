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
  ExUIMeshRenderer_o *rightMeshRenderer; // x0
  struct ExUIMeshRenderer_o *v8; // x20
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s3
  struct ExUIMeshRenderer_o *v13; // x20
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  const MethodInfo *v18; // x1

  if ( (byte_40FB3D0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, texture);
    byte_40FB3D0 = 1;
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
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  else
  {
    leftMeshRenderer = this->fields.leftMeshRenderer;
    this->fields.isStart = 1;
    if ( !leftMeshRenderer )
      goto LABEL_16;
    ExUIMeshRenderer__SetImage(leftMeshRenderer, texture, 0LL);
    rightMeshRenderer = this->fields.rightMeshRenderer;
    if ( !rightMeshRenderer
      || (ExUIMeshRenderer__SetImage(rightMeshRenderer, texture, 0LL),
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
          v13 = this->fields.rightMeshRenderer,
          *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL),
          !v13) )
    {
LABEL_16:
      sub_B170D4();
    }
    ((void (__fastcall *)(struct ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))v13->klass->vtable._39_SetTweenColor.method)(
      v13,
      v13->klass->vtable._40_GetTweenColor.methodPtr,
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
  UnityEngine_Component_o *leftMeshRenderer; // x0
  UnityEngine_Transform_o *transform; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Component_o *rightMeshRenderer; // x0
  float v9; // s13
  float v10; // s10
  float v11; // s11
  UnityEngine_Transform_o *v12; // x0
  float v13; // s0
  float v14; // s1
  float v15; // s2
  UnityEngine_Component_o *v16; // x0
  float v17; // s12
  float v18; // s8
  float v19; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  TweenPosition_o *v21; // x0
  TweenPosition_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x0
  TweenPosition_o *v24; // x0
  System_Int32_array **v25; // x0
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Vector3_o v40; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v41; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40FB3D1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9967, method);
    byte_40FB3D1 = 1;
  }
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  this->fields.isPause = 0;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  transform = UnityEngine_Component__get_transform(leftMeshRenderer, 0LL);
  if ( !transform )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  rightMeshRenderer = (UnityEngine_Component_o *)this->fields.rightMeshRenderer;
  if ( !rightMeshRenderer )
    goto LABEL_12;
  v9 = v5;
  v10 = v6;
  v11 = v7;
  v12 = UnityEngine_Component__get_transform(rightMeshRenderer, 0LL);
  if ( !v12 )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition(v12, 0LL);
  v16 = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  if ( !v16 )
    goto LABEL_12;
  v17 = v13;
  v18 = v14;
  v19 = v15;
  gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
  v40.fields.x = v9 + -512.0;
  v40.fields.y = v10;
  v40.fields.z = v11;
  v21 = TweenPosition__Begin(gameObject, this->fields.duration, v40, 0LL);
  if ( !this->fields.rightMeshRenderer
    || (v22 = v21,
        v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.rightMeshRenderer, 0LL),
        v41.fields.x = v17 + 512.0,
        v41.fields.y = v18,
        v41.fields.z = v19,
        v24 = TweenPosition__Begin(v23, this->fields.duration, v41, 0LL),
        !v22)
    || (v22->fields.style = 1, !v24) )
  {
LABEL_12:
    sub_B170D4();
  }
  v24->fields.style = 1;
  v25 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v25;
  p_eventReceiver = &v22->fields.eventReceiver;
  sub_B16F98((BattleServantConfConponent_o *)p_eventReceiver, v25, v27, v28, v29, v30, v31, v32);
  v33 = (System_Int32_array **)StringLiteral_9967;
  p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_9967;
  sub_B16F98((BattleServantConfConponent_o *)(p_eventReceiver + 1), v33, v34, v35, v36, v37, v38, v39);
}


void __fastcall CuttingEffectComponent__OnEndEffect(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FB3D2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB3D2 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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