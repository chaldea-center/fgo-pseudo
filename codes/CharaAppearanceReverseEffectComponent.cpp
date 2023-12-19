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
  UIStandFigureRender_o **p_figure; // x20
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UIStandFigureRender_o *v18; // x0
  UIStandFigureRender_o *v19; // x0
  UnityEngine_Object_o *gameObject; // x19
  UIStandFigureRender_o *v21; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v23; // x2
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Transform_o *transform; // x0
  float v26; // s8
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Transform_o *parent; // x0
  float v29; // s0
  float v30; // s1
  UnityEngine_GameObject_o *v31; // x0
  float v32; // s9
  float v33; // s10
  UnityEngine_Transform_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x20
  System_String_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  CommonEffectLoadComponent_LoadEndHandler_o *v41; // x22
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCFB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_CharaAppearanceReverseEffectComponent_EndCreateEffect__, figure);
    sub_B16FFC(&CommonEffectManager_TypeInfo, v11);
    sub_B16FFC(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_13498, v14);
    sub_B16FFC(&StringLiteral_4507, v15);
    byte_40FCFB2 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_B16F98(
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
  if ( !*p_figure )
    goto LABEL_36;
  BodySize = UIStandFigureRender__GetBodySize(*p_figure, 0LL);
  v18 = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 1.2039;
  if ( !v18 )
    goto LABEL_36;
  UIStandFigureRender__SetSharder(v18, (System_String_o *)StringLiteral_4507, 0LL);
  if ( !*p_figure )
    goto LABEL_36;
  UIStandFigureRender__SetFilterColor(*p_figure, this->fields.erasureColor, 0LL);
  v19 = (UIStandFigureRender_o *)this->fields.figure;
  if ( !v19 )
    goto LABEL_36;
  LODWORD(v8) = 1045220557;
  UIStandFigureRender__SetGradation(v19, 0.2, 0LL);
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
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    return;
  }
  v21 = *p_figure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL) )
  {
    if ( !*p_figure )
      goto LABEL_36;
    UIStandFigureRender__SetAlpha(*p_figure, 1.0, 0LL);
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
  v24 = this->fields.subEffectBase;
  if ( !v24 )
    goto LABEL_36;
  transform = UnityEngine_GameObject__get_transform(v24, 0LL);
  if ( !transform )
    goto LABEL_36;
  LODWORD(v26) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
  v27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v27
    || (parent = UnityEngine_Transform__get_parent(v27, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(parent, 0LL),
        (v31 = this->fields.subEffectBase) == 0LL)
    || (v32 = v29, v33 = v30, (v34 = UnityEngine_GameObject__get_transform(v31, 0LL)) == 0LL) )
  {
LABEL_36:
    sub_B170D4();
  }
  v42.fields.y = -v33;
  v42.fields.x = -v32;
  v42.fields.z = v26;
  UnityEngine_Transform__set_localPosition(v34, v42, 0LL);
  v35 = this->fields.subEffectBase;
  v36 = System_String__Concat_43743732((System_String_o *)StringLiteral_13498, this->fields.subEffectName, 0LL);
  v41 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_B170CC(
                                                        CommonEffectLoadComponent_LoadEndHandler_TypeInfo,
                                                        v37,
                                                        v38,
                                                        v39,
                                                        v40);
  CommonEffectLoadComponent_LoadEndHandler___ctor(
    v41,
    (Il2CppObject *)this,
    Method_CharaAppearanceReverseEffectComponent_EndCreateEffect__,
    0LL);
  if ( (BYTE3(CommonEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  }
  CommonEffectManager__Create_18186748(v35, v36, v41, 0, 0, 0, 0LL);
}


void __fastcall CharaAppearanceReverseEffectComponent__EffectResume(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  CharaAppearanceReverseEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  TweenRenderVolume_o *v6; // x20
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FCFB3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9967, method);
    byte_40FCFB3 = 1;
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
    sub_B170D4();
  v6 = v5;
  v5->fields.style = 1;
  v7 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&v6->fields.eventReceiver, v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Int32_array **)StringLiteral_9967;
  v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9967;
  sub_B16F98((BattleServantConfConponent_o *)&v6->fields.callWhenFinished, v14, v15, v16, v17, v18, v19, v20);
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
  sub_B16F98(
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
  UIStandFigureRender_o **p_figure; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FCFB5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCFB5 = 1;
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (UIStandFigureRender_o **)&this->fields.figure;
    if ( !*p_figure || (UIStandFigureRender__RecoverSharder(*p_figure, 0LL), !*p_figure) )
      sub_B170D4();
    UIStandFigureRender__SetAlpha(*p_figure, 1.0, 0LL);
    *p_figure = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_figure, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall CharaAppearanceReverseEffectComponent__OnEndEffect(
        CharaAppearanceReverseEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_40FCFB4 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, method);
    byte_40FCFB4 = 1;
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

  if ( (byte_40FCFB6 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FCFB6 = 1;
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
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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
  struct UIStandFigureM_o *figure; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure )
    sub_B170D4();
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
  UnityEngine_Transform_o *transform; // x0
  struct CommonEffectComponent_o **p_childEffect; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCFB1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCFB1 = 1;
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
  if ( UnityEngine_Object__op_Inequality(childEffect, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.childEffect;
    v8 = this->fields.volume - this->fields.addVolume;
    if ( v8 > 0.0 )
    {
      if ( v7 )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.childEffect, 0LL);
        if ( transform )
        {
          v17.fields.x = 0.0;
          v17.fields.y = (float)(v8 + -1.0) * this->fields.bodySize.fields.y;
          v17.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(transform, v17, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B170D4();
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    {
      p_childEffect = &this->fields.childEffect;
      if ( !*p_childEffect )
        goto LABEL_19;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, _QWORD, Il2CppMethodPointer))(*p_childEffect)->klass->vtable._8_Stop.method)(
        *p_childEffect,
        1LL,
        0LL,
        (*p_childEffect)->klass->vtable._9_ForceStop.methodPtr);
      *p_childEffect = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_childEffect, 0LL, v11, v12, v13, v14, v15, v16);
    }
  }
}