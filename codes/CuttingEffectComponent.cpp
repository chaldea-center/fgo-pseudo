void CuttingEffectComponent___ctor(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


void CuttingEffectComponent__CuttingStart(
        CuttingEffectComponent_o *this,
        UnityEngine_Texture_o *texture,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19
  ExUIMeshRenderer_o *leftMeshRenderer; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C3907B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3907B = 1;
  }
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 0.5;
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
  }
  else
  {
    leftMeshRenderer = this->fields.leftMeshRenderer;
    this->fields.isStart = 1;
    if ( !leftMeshRenderer
      || (ExUIMeshRenderer__SetImage(leftMeshRenderer, texture, 0),
          (leftMeshRenderer = this->fields.rightMeshRenderer) == 0)
      || (ExUIMeshRenderer__SetImage(leftMeshRenderer, texture, 0),
          (leftMeshRenderer = this->fields.leftMeshRenderer) == 0)
      || (((void (__fastcall *)(ExUIMeshRenderer_o *, const MethodInfo *, float, float, float, float))leftMeshRenderer->klass->vtable._39_SetTweenColor.methodPtr)(
            leftMeshRenderer,
            leftMeshRenderer->klass->vtable._39_SetTweenColor.method,
            1.0,
            1.0,
            1.0,
            1.0),
          (leftMeshRenderer = this->fields.rightMeshRenderer) == 0) )
    {
      sub_1C32E7C(leftMeshRenderer);
    }
    ((void (__fastcall *)(ExUIMeshRenderer_o *, const MethodInfo *, float, float, float, float))leftMeshRenderer->klass->vtable._39_SetTweenColor.methodPtr)(
      leftMeshRenderer,
      leftMeshRenderer->klass->vtable._39_SetTweenColor.method,
      1.0,
      1.0,
      1.0,
      1.0);
    if ( !this->fields.isPause )
      CuttingEffectComponent__EffectResume(this, v7);
  }
}


void CuttingEffectComponent__EffectResume(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *leftMeshRenderer; // x0
  float x; // s13
  float y; // s10
  float z; // s11
  float v7; // s12
  float v8; // s8
  float v9; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C3907C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9900/*"OnEndEffect"*/);
    byte_4C3907C = 1;
  }
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  this->fields.isPause = 0;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  leftMeshRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(leftMeshRenderer, 0);
  if ( !leftMeshRenderer )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)leftMeshRenderer, 0);
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.rightMeshRenderer;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  leftMeshRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(leftMeshRenderer, 0);
  if ( !leftMeshRenderer )
    goto LABEL_12;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)leftMeshRenderer, 0);
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  v7 = v20.fields.x;
  v8 = v20.fields.y;
  v9 = v20.fields.z;
  gameObject = UnityEngine_Component__get_gameObject(leftMeshRenderer, 0);
  v21.fields.x = x + -512.0;
  v21.fields.y = y;
  v21.fields.z = z;
  leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(gameObject, this->fields.duration, v21, 0);
  if ( !this->fields.rightMeshRenderer
    || (v11 = leftMeshRenderer,
        v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.rightMeshRenderer, 0),
        v22.fields.x = v7 + 512.0,
        v22.fields.y = v8,
        v22.fields.z = v9,
        leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(v12, this->fields.duration, v22, 0),
        !v11)
    || (LODWORD(v11[1].monitor) = 1, !leftMeshRenderer) )
  {
LABEL_12:
    sub_1C32E7C(leftMeshRenderer);
  }
  LODWORD(leftMeshRenderer[1].monitor) = 1;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11[3].monitor = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11[3].monitor, (int32_t)v13, v14, v15);
  v16 = StringLiteral_9900/*"OnEndEffect"*/;
  v11[3].fields.m_CachedPtr = StringLiteral_9900/*"OnEndEffect"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11[3].fields, v16, v17, v18);
}


void CuttingEffectComponent__OnEndEffect(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C3907D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3907D = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void CuttingEffectComponent__Resume(CuttingEffectComponent_o *this, bool isSkip, const MethodInfo *method)
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