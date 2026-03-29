void CuttingEffectComponent___ctor(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0);
}


void CuttingEffectComponent__CuttingStart(
        CuttingEffectComponent_o *this,
        UnityEngine_Texture_o *texture,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19
  ExUIMeshRenderer_o *leftMeshRenderer; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D32067 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32067 = 1;
  }
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 0.5;
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
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
      sub_1C93D2C(leftMeshRenderer, texture);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v22; // 0:kr14_12.12
  UnityEngine_Vector3_o v23; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v24; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D32068 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9957/*"OnEndEffect"*/);
    byte_4D32068 = 1;
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
  leftMeshRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(leftMeshRenderer, 0);
  if ( !leftMeshRenderer )
    goto LABEL_12;
  v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)leftMeshRenderer, 0);
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(leftMeshRenderer, 0);
  v23.fields.x = localPosition.fields.x + -512.0;
  v23.fields.y = localPosition.fields.y;
  v23.fields.z = localPosition.fields.z;
  leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(gameObject, this->fields.duration, v23, 0);
  if ( !this->fields.rightMeshRenderer
    || (v5 = leftMeshRenderer,
        v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.rightMeshRenderer, 0),
        v24.fields.x = v22.fields.x + 512.0,
        v24.fields.y = v22.fields.y,
        v24.fields.z = v22.fields.z,
        leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(v6, this->fields.duration, v24, 0),
        !v5)
    || (LODWORD(v5[1].monitor) = 1, !leftMeshRenderer) )
  {
LABEL_12:
    sub_1C93D2C(leftMeshRenderer, method);
  }
  LODWORD(leftMeshRenderer[1].monitor) = 1;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5[3].monitor = v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5[3].monitor, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = StringLiteral_9957/*"OnEndEffect"*/;
  v5[3].fields.m_CachedPtr = StringLiteral_9957/*"OnEndEffect"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5[3].fields, v14, v15, v16, v17, v18, v19, v20);
}


void CuttingEffectComponent__OnEndEffect(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D32069 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32069 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
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