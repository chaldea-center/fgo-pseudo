void __fastcall CharaAppearanceReverseEffectComponent___ctor(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  this->fields.erasureColor = UnityEngine_Color__get_clear(0LL);
  ProgramEffectComponent___ctor((ProgramEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaAppearanceReverseEffectComponent__AppearanceStart(
        CharaAppearanceReverseEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  long double v8; // q8
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct UIStandFigureM_o **p_figure; // x20
  __int64 v17; // x1
  UIStandFigureRender_o *transform; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UnityEngine_Object_o *gameObject; // x19
  UnityEngine_Object_o *v21; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v23; // x2
  float v24; // s8
  float v25; // s0
  float v26; // s1
  float v27; // s9
  float v28; // s10
  UnityEngine_GameObject_o *v29; // x20
  System_String_o *v30; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v31; // x22
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A13A & 1) == 0 )
  {
    sub_B2C35C(&Method_CharaAppearanceReverseEffectComponent_EndCreateEffect__, figure);
    sub_B2C35C(&CommonEffectManager_TypeInfo, v11);
    sub_B2C35C(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_13554/*"Talk/"*/, v14);
    sub_B2C35C(&StringLiteral_4525/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, v15);
    byte_418A13A = 1;
  }
  p_figure = &this->fields.figure;
  this->fields.figure = figure;
  sub_B2C2F8(
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
    goto LABEL_36;
  BodySize = UIStandFigureRender__GetBodySize(transform, 0LL);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 1.2039;
  if ( !transform )
    goto LABEL_36;
  UIStandFigureRender__SetSharder(transform, (System_String_o *)StringLiteral_4525/*"Custom/Sprite-ScriptActionFigureErasureReverse"*/, 0LL);
  transform = (UIStandFigureRender_o *)*p_figure;
  if ( !*p_figure )
    goto LABEL_36;
  UIStandFigureRender__SetFilterColor(transform, this->fields.erasureColor, 0LL);
  transform = (UIStandFigureRender_o *)this->fields.figure;
  if ( !transform )
    goto LABEL_36;
  LODWORD(v8) = 1045220557;
  UIStandFigureRender__SetGradation(transform, 0.2, 0LL);
  ((void (__fastcall *)(CharaAppearanceReverseEffectComponent_o *, Il2CppMethodPointer, long double))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    v8);
  if ( this->fields.isSkip )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    return;
  }
  v21 = (UnityEngine_Object_o *)*p_figure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    transform = (UIStandFigureRender_o *)*p_figure;
    if ( !*p_figure )
      goto LABEL_36;
    UIStandFigureRender__SetAlpha(transform, 1.0, 0LL);
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
    CharaAppearanceReverseEffectComponent__EndCreateEffect(this, 0LL, v23);
    return;
  }
  transform = (UIStandFigureRender_o *)this->fields.subEffectBase;
  if ( !transform )
    goto LABEL_36;
  transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_36;
  LODWORD(v24) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (UIStandFigureRender_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = (UIStandFigureRender_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL),
        (transform = (UIStandFigureRender_o *)this->fields.subEffectBase) == 0LL)
    || (v27 = v25,
        v28 = v26,
        (transform = (UIStandFigureRender_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)transform,
                                                0LL)) == 0LL) )
  {
LABEL_36:
    sub_B2C434(transform, v17);
  }
  v32.fields.y = -v28;
  v32.fields.x = -v27;
  v32.fields.z = v24;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v32, 0LL);
  v29 = this->fields.subEffectBase;
  v30 = System_String__Concat_44305532((System_String_o *)StringLiteral_13554/*"Talk/"*/, this->fields.subEffectName, 0LL);
  v31 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B2C42C(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
  CommonEffectLoadComponent_LoadEndHandler___ctor(
    v31,
    (Il2CppObject *)this,
    Method_CharaAppearanceReverseEffectComponent_EndCreateEffect__,
    0LL);
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Create_17920404(v29, v30, v31, 0, 0, 0, 0LL);
}


void __fastcall CharaAppearanceReverseEffectComponent__EffectResume(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  CharaAppearanceReverseEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  __int64 v6; // x1
  TweenRenderVolume_o *v7; // x20
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_418A13B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9999/*"OnEndEffect"*/, method);
    byte_418A13B = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaAppearanceReverseEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 1.0, 0LL);
  if ( !v5 )
    sub_B2C434(0LL, v6);
  v7 = v5;
  v5->fields.style = 1;
  v8 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v8;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->fields.eventReceiver, v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Int32_array **)StringLiteral_9999/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9999/*"OnEndEffect"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->fields.callWhenFinished, v15, v16, v17, v18, v19, v20, v21);
}


void __fastcall CharaAppearanceReverseEffectComponent__EndCreateEffect(
        CharaAppearanceReverseEffectComponent_o *this,
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.childEffect,
    (System_Int32_array **)effect,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.isPause )
    CharaAppearanceReverseEffectComponent__EffectResume(this, v9);
}


void __fastcall CharaAppearanceReverseEffectComponent__OnDestroy(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *figure; // x20
  __int64 v4; // x1
  BattleServantConfConponent_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_418A13D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A13D = 1;
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
      sub_B2C434(klass, v4);
    }
    UIStandFigureRender__SetAlpha(klass, 1.0, 0LL);
    p_figure->klass = 0LL;
    sub_B2C2F8(p_figure, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall CharaAppearanceReverseEffectComponent__OnEndEffect(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_418A13C & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, method);
    byte_418A13C = 1;
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


void __fastcall CharaAppearanceReverseEffectComponent__OnUpdate(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_418A13E & 1) == 0 )
  {
    sub_B2C35C(&CommonEffectManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A13E = 1;
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
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaAppearanceReverseEffectComponent__Resume(
        CharaAppearanceReverseEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaAppearanceReverseEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaAppearanceReverseEffectComponent__SetTweenColor(
        CharaAppearanceReverseEffectComponent_o *this,
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
    sub_B2C434(0LL, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, Il2CppMethodPointer, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall CharaAppearanceReverseEffectComponent__SetTweenVolume(
        CharaAppearanceReverseEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0
  UnityEngine_Object_o *childEffect; // x20
  UnityEngine_Object_o *v7; // x20
  float v8; // s8
  BattleServantConfConponent_o *p_childEffect; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A139 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A139 = 1;
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
    v7 = (UnityEngine_Object_o *)this->fields.childEffect;
    v8 = this->fields.volume - this->fields.addVolume;
    if ( v8 > 0.0 )
    {
      if ( v7 )
      {
        figure = (UIStandFigureRender_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)this->fields.childEffect,
                                            0LL);
        if ( figure )
        {
          v16.fields.x = 0.0;
          v16.fields.y = (float)(v8 + -1.0) * this->fields.bodySize.fields.y;
          v16.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)figure, v16, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B2C434(figure, method);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
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
      sub_B2C2F8(p_childEffect, 0LL, v10, v11, v12, v13, v14, v15);
    }
  }
}