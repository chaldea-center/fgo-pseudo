void __fastcall ClassBoardFullReleaseEffectComponent___ctor(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4B058A7 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16116/*"_MainTex"*/, method);
    byte_4B058A7 = 1;
  }
  v5 = StringLiteral_16116/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16116/*"_MainTex"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconMaterialPropertyName, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardFullReleaseEffectComponent__Awake(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CStateManager_ClassBoardFullReleaseEffectComponent__o **p_fsm; // x20
  CStateManager_T__o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x20
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_4B058A1 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_ClassBoardFullReleaseEffectComponent___ctor__, method);
    sub_1BC3008(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__, v3);
    sub_1BC3008(&CStateManager_ClassBoardFullReleaseEffectComponent__TypeInfo, v4);
    sub_1BC3008(&ClassBoardFullReleaseEffectComponent_StateEnd_TypeInfo, v5);
    sub_1BC3008(&ClassBoardFullReleaseEffectComponent_StateNone_TypeInfo, v6);
    sub_1BC3008(&ClassBoardFullReleaseEffectComponent_StatePlay_TypeInfo, v7);
    byte_4B058A1 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v9 = (CStateManager_T__o *)sub_1BC3254(CStateManager_ClassBoardFullReleaseEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v9,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_323D2B8 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent___ctor__);
    this->fields.fsm = (struct CStateManager_ClassBoardFullReleaseEffectComponent__o *)v9;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v9, v10, v11);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v13 = (Il2CppObject *)sub_1BC3254(ClassBoardFullReleaseEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v13, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_323D360 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (Il2CppObject *)sub_1BC3254(ClassBoardFullReleaseEffectComponent_StatePlay_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !v16
      || (CStateManager_object___add(
            v16,
            1,
            (IState_T__o *)v17,
            (const MethodInfo_323D360 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__),
          v18 = (CStateManager_T__o *)*p_fsm,
          v19 = (Il2CppObject *)sub_1BC3254(ClassBoardFullReleaseEffectComponent_StateEnd_TypeInfo),
          System_Object___ctor(v19, 0LL),
          !v18) )
    {
LABEL_8:
      sub_1BC3264(v14, v15);
    }
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_323D360 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__);
    ClassBoardFullReleaseEffectComponent__SetState(this, 0, v20);
  }
}


void __fastcall ClassBoardFullReleaseEffectComponent__End(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


int32_t __fastcall ClassBoardFullReleaseEffectComponent__GetState(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  ClassBoardFullReleaseEffectComponent_o *v2; // x19
  struct CStateManager_ClassBoardFullReleaseEffectComponent__o *fsm; // x8

  v2 = this;
  if ( (byte_4B058A5 & 1) == 0 )
  {
    this = (ClassBoardFullReleaseEffectComponent_o *)sub_1BC3008(
                                                       &Method_CStateManager_ClassBoardFullReleaseEffectComponent__getState__,
                                                       method);
    byte_4B058A5 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1BC3264(this, method);
  return fsm->fields.m_state;
}


void __fastcall ClassBoardFullReleaseEffectComponent__Play(
        ClassBoardFullReleaseEffectComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4B058A2 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Animation___, end_act);
    byte_4B058A2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.animation, (int32_t)Component_object, v6, v7);
  this->fields.endAct = end_act;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)end_act, v8, v9);
  ClassBoardFullReleaseEffectComponent__SetState(this, 1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardFullReleaseEffectComponent__SetClassIcon(
        ClassBoardFullReleaseEffectComponent_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  UnityEngine_Renderer_o *iconRenderer; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x20
  System_Func_object__bool__o *v13; // x22
  Il2CppObject *v14; // x20

  if ( (byte_4B058A3 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___, *(_QWORD *)&baseId);
    sub_1BC3008(&System_Func_Texture__bool__TypeInfo, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&Method_ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0__SetClassIcon_b__0__, v7);
    sub_1BC3008(&ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_TypeInfo, v8);
    byte_4B058A3 = 1;
  }
  v9 = sub_1BC3254(ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_DWORD *)(v9 + 16) = baseId;
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v13 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0__SetClassIcon_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
          iconTextures,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
  {
    iconRenderer = this->fields.iconRenderer;
    if ( iconRenderer )
    {
      iconRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(iconRenderer, 0LL);
      if ( iconRenderer )
      {
        UnityEngine_Material__SetTexture(
          (UnityEngine_Material_o *)iconRenderer,
          this->fields.iconMaterialPropertyName,
          (UnityEngine_Texture_o *)v14,
          0LL);
        return;
      }
    }
LABEL_10:
    sub_1BC3264(iconRenderer, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardFullReleaseEffectComponent__SetState(
        ClassBoardFullReleaseEffectComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B058A6 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__setState__, *(_QWORD *)&state);
    byte_4B058A6 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BC3264(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_323D3EC *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__setState__);
}


void __fastcall ClassBoardFullReleaseEffectComponent__Update(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B058A4 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__update__, method);
    byte_4B058A4 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_323D3C8 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__update__);
}


void __fastcall ClassBoardFullReleaseEffectComponent_StateEnd___ctor(
        ClassBoardFullReleaseEffectComponent_StateEnd_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardFullReleaseEffectComponent_StateEnd__begin(
        ClassBoardFullReleaseEffectComponent_StateEnd_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1BC3264(this, 0LL);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}


void __fastcall ClassBoardFullReleaseEffectComponent_StateEnd__end(
        ClassBoardFullReleaseEffectComponent_StateEnd_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardFullReleaseEffectComponent_StateEnd__update(
        ClassBoardFullReleaseEffectComponent_StateEnd_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1BC3264(this, 0LL);
  ClassBoardFullReleaseEffectComponent__SetState(that, 0, method);
}


void __fastcall ClassBoardFullReleaseEffectComponent_StateNone___ctor(
        ClassBoardFullReleaseEffectComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardFullReleaseEffectComponent_StateNone__begin(
        ClassBoardFullReleaseEffectComponent_StateNone_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardFullReleaseEffectComponent_StateNone__end(
        ClassBoardFullReleaseEffectComponent_StateNone_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardFullReleaseEffectComponent_StateNone__update(
        ClassBoardFullReleaseEffectComponent_StateNone_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardFullReleaseEffectComponent_StatePlay___ctor(
        ClassBoardFullReleaseEffectComponent_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardFullReleaseEffectComponent_StatePlay__begin(
        ClassBoardFullReleaseEffectComponent_StatePlay_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Animation_o *animation; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v8; // x19
  System_String_o *v9; // x0

  if ( !that )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v4);
    byte_4AFBDB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)that->fields.animation;
  if ( !this )
    goto LABEL_12;
  this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__Play(
                                                               (UnityEngine_Animation_o *)this,
                                                               0LL);
  animation = that->fields.animation;
  if ( !animation )
    goto LABEL_12;
  this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                               that->fields.animation,
                                                               0LL);
  if ( !this
    || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL),
        (this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(
                                                                      animation,
                                                                      name,
                                                                      0LL)) == 0LL)
    || (UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL),
        (v8 = that->fields.animation) == 0LL)
    || (this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v8, 0LL)) == 0LL
    || (v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL),
        (this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v8, v9, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_1BC3264(this, that);
  }
  UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
}


void __fastcall ClassBoardFullReleaseEffectComponent_StatePlay__end(
        ClassBoardFullReleaseEffectComponent_StatePlay_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardFullReleaseEffectComponent_StatePlay__update(
        ClassBoardFullReleaseEffectComponent_StatePlay_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v5; // x20
  System_String_o *name; // x0
  const MethodInfo *v7; // x2
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0

  if ( (byte_4B058A8 & 1) == 0 )
  {
    this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, that);
    byte_4B058A8 = 1;
  }
  if ( !that )
    goto LABEL_16;
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.animation;
    if ( v5 )
    {
      this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                   that->fields.animation,
                                                                   0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v5, name, 0LL);
        if ( this )
        {
          if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) >= 1.0 )
            goto LABEL_15;
          v8 = that->fields.animation;
          if ( v8 )
          {
            this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                         that->fields.animation,
                                                                         0LL);
            if ( this )
            {
              v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              if ( UnityEngine_Animation__IsPlaying(v8, v9, 0LL) )
                return;
LABEL_15:
              ClassBoardFullReleaseEffectComponent__SetState(that, 2, v7);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_1BC3264(this, that);
  }
}


void __fastcall ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0___ctor(
        ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0___SetClassIcon_b__0(
        ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_o *v4; // x19
  __int64 v5; // x1
  System_String_o *name; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t baseId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B058A9 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, x);
    this = (ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_o *)sub_1BC3008(&StringLiteral_6834/*"FullReleaseEffect_CrassIcon{0}"*/, v5);
    byte_4B058A9 = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  baseId = v4->fields.baseId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseId, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_6834/*"FullReleaseEffect_CrassIcon{0}"*/, v10, 0LL);
  return System_String__op_Equality(name, v11, 0LL);
}