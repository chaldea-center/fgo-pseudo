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
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19
  ExUIMeshRenderer_o *leftMeshRenderer; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B175CD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, texture, method);
    byte_4B175CD = 1;
  }
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 0.5;
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
      sub_1BCAA3C(leftMeshRenderer, texture);
    }
    ((void (__fastcall *)(ExUIMeshRenderer_o *, Il2CppMethodPointer, float, float, float, float))leftMeshRenderer->klass->vtable._39_SetTweenColor.method)(
      leftMeshRenderer,
      leftMeshRenderer->klass->vtable._40_GetTweenColor.methodPtr,
      1.0,
      1.0,
      1.0,
      1.0);
    if ( !this->fields.isPause )
      CuttingEffectComponent__EffectResume(this, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CuttingEffectComponent__EffectResume(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *leftMeshRenderer; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s13
  float v9; // s10
  float v10; // s11
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s12
  float v15; // s8
  float v16; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v35; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B175CE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10028/*"OnEndEffect"*/, method, v2);
    byte_4B175CE = 1;
  }
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  this->fields.isPause = 0;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  leftMeshRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(leftMeshRenderer, 0LL);
  if ( !leftMeshRenderer )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_localPosition(
                                    (UnityEngine_Transform_o *)leftMeshRenderer,
                                    0LL);
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.rightMeshRenderer;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  v8 = v5;
  v9 = v6;
  v10 = v7;
  leftMeshRenderer = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(leftMeshRenderer, 0LL);
  if ( !leftMeshRenderer )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)leftMeshRenderer,
                                     0LL);
  leftMeshRenderer = (UnityEngine_Component_o *)this->fields.leftMeshRenderer;
  if ( !leftMeshRenderer )
    goto LABEL_12;
  v14 = v11;
  v15 = v12;
  v16 = v13;
  gameObject = UnityEngine_Component__get_gameObject(leftMeshRenderer, 0LL);
  v34.fields.x = v8 + -512.0;
  v34.fields.y = v9;
  v34.fields.z = v10;
  leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(gameObject, this->fields.duration, v34, 0LL);
  if ( !this->fields.rightMeshRenderer
    || (v18 = leftMeshRenderer,
        v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.rightMeshRenderer, 0LL),
        v35.fields.x = v14 + 512.0,
        v35.fields.y = v15,
        v35.fields.z = v16,
        leftMeshRenderer = (UnityEngine_Component_o *)TweenPosition__Begin(v19, this->fields.duration, v35, 0LL),
        !v18)
    || (LODWORD(v18[1].monitor) = 1, !leftMeshRenderer) )
  {
LABEL_12:
    sub_1BCAA3C(leftMeshRenderer, method);
  }
  LODWORD(leftMeshRenderer[1].monitor) = 1;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].monitor = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&v18[3].monitor, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = StringLiteral_10028/*"OnEndEffect"*/;
  *(_QWORD *)&v18[3].fields.m_CachedPtr = StringLiteral_10028/*"OnEndEffect"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v18[3].fields, v27, v28, v29, v30, v31, v32, v33);
}


void __fastcall CuttingEffectComponent__OnEndEffect(CuttingEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B175CF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B175CF = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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