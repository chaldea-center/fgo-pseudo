void __fastcall CharaErasureEffectComponent___ctor(CharaErasureEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.erasureColor = UnityEngine_Color__get_clear(0LL);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


void __fastcall CharaErasureEffectComponent__EffectResume(
        CharaErasureEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CharaErasureEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v7; // x0
  __int64 v8; // x1
  TweenRenderVolume_o *v9; // x20
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EB702 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10105/*"OnEndEffect"*/, (_DWORD)method, v2, v3);
    byte_42EB702 = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaErasureEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0LL);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  v9 = v7;
  v7->fields.style = 1;
  v10 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v10;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.eventReceiver, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_10105/*"OnEndEffect"*/;
  v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10105/*"OnEndEffect"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall CharaErasureEffectComponent__EndCreateEffect(
        CharaErasureEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.childEffect,
    (System_Int32_array **)effect,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.isPause )
    CharaErasureEffectComponent__EffectResume(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaErasureEffectComponent__ErasureStart(
        CharaErasureEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct UIStandFigureM_o **p_figure; // x20
  __int64 v26; // x1
  UIStandFigureRender_o *transform; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v31; // x2
  float v32; // s8
  float v33; // s0
  float v34; // s1
  float v35; // s9
  float v36; // s10
  UnityEngine_GameObject_o *v37; // x20
  System_String_o *v38; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v39; // x22
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB701 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaErasureEffectComponent_EndCreateEffect__, (_DWORD)figure, (_DWORD)method, v3);
    sub_B5D5C4(&CommonEffectManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_13710/*"Talk/"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_4596/*"Custom/Sprite-ScriptActionFigureErasure"*/, v22, v23, v24);
    byte_42EB701 = 1;
  }
  p_figure = &this->fields.figure;
  this->fields.figure = figure;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.figure,
    (System_Int32_array **)figure,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.duration <= 0.0 )
    this->fields.duration = 2.0;
  transform = (UIStandFigureRender_o *)*p_figure;
  if ( !*p_figure )
    goto LABEL_30;
  BodySize = UIStandFigureRender__GetBodySize(transform, 0LL);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 0.2;
  if ( !transform )
    goto LABEL_30;
  UIStandFigureRender__SetSharder(transform, (System_String_o *)StringLiteral_4596/*"Custom/Sprite-ScriptActionFigureErasure"*/, 0LL);
  transform = (UIStandFigureRender_o *)*p_figure;
  if ( !*p_figure )
    goto LABEL_30;
  UIStandFigureRender__SetFilterColor(transform, this->fields.erasureColor, 0LL);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  if ( !transform )
    goto LABEL_30;
  UIStandFigureRender__SetGradation(transform, 0.2, 0LL);
  ((void (__fastcall *)(CharaErasureEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    1.2039);
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    return;
  }
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    || System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    CharaErasureEffectComponent__EndCreateEffect(this, 0LL, v31);
    return;
  }
  transform = (UIStandFigureRender_o *)this->fields.subEffectBase;
  if ( !transform )
    goto LABEL_30;
  transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_30;
  LODWORD(v32) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = (UIStandFigureRender_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = (UIStandFigureRender_o *)this->fields.subEffectBase) == 0LL)
    || (v35 = v33,
        v36 = v34,
        (transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)transform,
                                                0LL)) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(transform, v26);
  }
  v40.fields.y = -v36;
  v40.fields.x = -v35;
  v40.fields.z = v32;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v40, 0LL);
  v37 = this->fields.subEffectBase;
  v38 = System_String__Concat_44577788((System_String_o *)StringLiteral_13710/*"Talk/"*/, this->fields.subEffectName, 0LL);
  v39 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B5D694(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
  CommonEffectLoadComponent_LoadEndHandler___ctor(
    v39,
    (Il2CppObject *)this,
    Method_CharaErasureEffectComponent_EndCreateEffect__,
    0LL);
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Create_18151128(v37, v38, v39, 0, 0, 0, 0LL);
}


void __fastcall CharaErasureEffectComponent__OnDestroy(CharaErasureEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *figure; // x20
  __int64 v6; // x1
  BattleServantConfConponent_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB704 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB704 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (BattleServantConfConponent_o *)&this->fields.figure;
    klass = (UIStandFigureRender_o *)p_figure->klass;
    if ( !p_figure->klass
      || (UIStandFigureRender__RecoverSharder(klass, 0LL), (klass = (UIStandFigureRender_o *)p_figure->klass) == 0LL) )
    {
      sub_B5D69C(klass, v6);
    }
    UIStandFigureRender__SetAlpha(klass, 0.0, 0LL);
    p_figure->klass = 0LL;
    sub_B5D560(p_figure, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall CharaErasureEffectComponent__OnEndEffect(CharaErasureEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_42EB703 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB703 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Stop(subEffectBase, 0, 0, 0LL);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaErasureEffectComponent__OnUpdate(CharaErasureEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42EB705 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EB705 = 1;
  }
  ProgramEffectComponent__OnUpdate((ProgramEffectComponent_o *)this, 0LL);
  if ( this->fields.isWaitEndEffect )
  {
    subEffectBase = this->fields.subEffectBase;
    if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    }
    if ( !CommonEffectManager__IsBusy(subEffectBase, 0LL) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaErasureEffectComponent__Resume(
        CharaErasureEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaErasureEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaErasureEffectComponent__SetTweenColor(
        CharaErasureEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  __int64 v8; // x1
  struct UIStandFigureM_o *figure; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure )
    sub_B5D69C(0LL, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, Il2CppMethodPointer, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall CharaErasureEffectComponent__SetTweenVolume(
        CharaErasureEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Object_o *childEffect; // x20
  UnityEngine_Object_o *v9; // x20
  float v10; // s8
  BattleServantConfConponent_o *p_childEffect; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EB700 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EB700 = 1;
  }
  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    goto LABEL_19;
  UIStandFigureRender__SetVolume(figure, v, 0LL);
  childEffect = (UnityEngine_Object_o *)this->fields.childEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  figure = (UIStandFigureRender_o *)UnityEngine_Object__op_Inequality(childEffect, 0LL, 0LL);
  if ( ((unsigned __int8)figure & 1) != 0 )
  {
    v9 = (UnityEngine_Object_o *)this->fields.childEffect;
    v10 = this->fields.volume - this->fields.addVolume;
    if ( v10 > 0.0 )
    {
      if ( v9 )
      {
        figure = (UIStandFigureRender_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.childEffect,
                                            0LL);
        if ( figure )
        {
          v18.fields.x = 0.0;
          v18.fields.y = (float)(v10 + -1.0) * this->fields.bodySize.fields.y;
          v18.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)figure, v18, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B5D69C(figure, method);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      p_childEffect = (BattleServantConfConponent_o *)&this->fields.childEffect;
      figure = (UIStandFigureRender_o *)p_childEffect->klass;
      if ( !p_childEffect->klass )
        goto LABEL_19;
      ((void (__fastcall *)(UIStandFigureRender_o *, __int64, _QWORD, Il2CppMethodPointer))figure->klass->vtable._8_set_alpha.method)(
        figure,
        1LL,
        0LL,
        figure->klass->vtable._9_CalculateFinalAlpha.methodPtr);
      p_childEffect->klass = 0LL;
      sub_B5D560(p_childEffect, 0LL, v12, v13, v14, v15, v16, v17);
    }
  }
}