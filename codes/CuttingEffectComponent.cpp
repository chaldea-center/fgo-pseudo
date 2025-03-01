void __fastcall CuttingEffectComponent___ctor(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall CuttingEffectComponent__CuttingStart(
        CuttingEffectComponent_o *this,
        UnityEngine_Texture_o *texture,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19
  ExUIMeshRenderer_o *leftMeshRenderer; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BFEBD4 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, texture);
    byte_4BFEBD4 = 1;
  }
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 0.5;
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
  }
  else
  {
    leftMeshRenderer = this->fields.leftMeshRenderer;
    this->fields.isStart = 1;
    if ( !leftMeshRenderer
      || (ExUIMeshRenderer__SetImage(leftMeshRenderer, texture, 0LL),
          (leftMeshRenderer = this->fields.rightMeshRenderer) == 0LL)
      || (ExUIMeshRenderer__SetImage(leftMeshRenderer, texture, 0LL),
          (leftMeshRenderer = this->fields.leftMeshRenderer) == 0LL)
      || (((void (__fastcall *)(ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))leftMeshRenderer->klass->vtable._39_SetTweenColor.method)(
            leftMeshRenderer,
            leftMeshRenderer->klass->vtable._40_GetTweenColor.methodPtr,
            1.0,
            1.0,
            1.0,
            1.0),
          (leftMeshRenderer = this->fields.rightMeshRenderer) == 0LL) )
    {
      sub_1C2E388(leftMeshRenderer, texture);
    }
    ((void (__fastcall *)(ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))leftMeshRenderer->klass->vtable._39_SetTweenColor.method)(
      leftMeshRenderer,
      leftMeshRenderer->klass->vtable._40_GetTweenColor.methodPtr,
      1.0,
      1.0,
      1.0,
      1.0);
    if ( !this->fields.isPause )
      CuttingEffectComponent__EffectResume(this, v7);
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
  UnityEngine_GameObject_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4BFEBD5 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_10086/*"OnEndEffect"*/, method);
    byte_4BFEBD5 = 1;
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
  v33.fields.x = v7 + -512.0;
  v33.fields.y = v8;
  v33.fields.z = v9;
  leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(gameObject, this->fields.duration, v33, 0LL);
  if ( !this->fields.rightMeshRenderer
    || (v17 = leftMeshRenderer,
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.rightMeshRenderer, 0LL),
        v34.fields.x = v13 + 512.0,
        v34.fields.y = v14,
        v34.fields.z = v15,
        leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(v18, this->fields.duration, v34, 0LL),
        !v17)
    || (LODWORD(v17[1].monitor) = 1, !leftMeshRenderer) )
  {
LABEL_12:
    sub_1C2E388(leftMeshRenderer, method);
  }
  LODWORD(leftMeshRenderer[1].monitor) = 1;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17[3].monitor = v19;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v17[3].monitor, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_10086/*"OnEndEffect"*/;
  *(_QWORD *)&v17[3].fields.m_CachedPtr = StringLiteral_10086/*"OnEndEffect"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v17[3].fields, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall CuttingEffectComponent__OnEndEffect(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BFEBD6 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFEBD6 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
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