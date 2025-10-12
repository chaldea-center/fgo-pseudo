void ClassBoardFullReleaseEffectComponent___ctor(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C3B406 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16262/*"_MainTex"*/);
    byte_4C3B406 = 1;
  }
  v5 = StringLiteral_16262/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16262/*"_MainTex"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.iconMaterialPropertyName, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardFullReleaseEffectComponent__Awake(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CStateManager_ClassBoardFullReleaseEffectComponent__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4C3B400 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_ClassBoardFullReleaseEffectComponent___ctor__);
    sub_1C32C20(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__);
    sub_1C32C20(&CStateManager_ClassBoardFullReleaseEffectComponent__TypeInfo);
    sub_1C32C20(&ClassBoardFullReleaseEffectComponent_StateEnd_TypeInfo);
    sub_1C32C20(&ClassBoardFullReleaseEffectComponent_StateNone_TypeInfo);
    sub_1C32C20(&ClassBoardFullReleaseEffectComponent_StatePlay_TypeInfo);
    byte_4C3B400 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C32E6C(CStateManager_ClassBoardFullReleaseEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3322708 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent___ctor__);
    this->fields.fsm = (struct CStateManager_ClassBoardFullReleaseEffectComponent__o *)v4;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v8 = (Il2CppObject *)sub_1C32E6C(ClassBoardFullReleaseEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_33227B0 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__);
    v10 = (CStateManager_T__o *)*p_fsm;
    v11 = (Il2CppObject *)sub_1C32E6C(ClassBoardFullReleaseEffectComponent_StatePlay_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10
      || (CStateManager_object___add(
            v10,
            1,
            (IState_T__o *)v11,
            (const MethodInfo_33227B0 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__),
          v12 = (CStateManager_T__o *)*p_fsm,
          v13 = (Il2CppObject *)sub_1C32E6C(ClassBoardFullReleaseEffectComponent_StateEnd_TypeInfo),
          System_Object___ctor(v13, 0),
          !v12) )
    {
LABEL_8:
      sub_1C32E7C(v9);
    }
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_33227B0 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__);
    ClassBoardFullReleaseEffectComponent__SetState(this, 0, v14);
  }
}


void ClassBoardFullReleaseEffectComponent__End(ClassBoardFullReleaseEffectComponent_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0);
}


int32_t ClassBoardFullReleaseEffectComponent__GetState(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  ClassBoardFullReleaseEffectComponent_o *v2; // x19
  struct CStateManager_ClassBoardFullReleaseEffectComponent__o *fsm; // x8

  v2 = this;
  if ( (byte_4C3B404 & 1) == 0 )
  {
    this = (ClassBoardFullReleaseEffectComponent_o *)sub_1C32C20(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__getState__);
    byte_4C3B404 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(this);
  return fsm->fields.m_state;
}


void ClassBoardFullReleaseEffectComponent__Play(
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

  if ( (byte_4C3B401 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    byte_4C3B401 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animation, (int32_t)Component_object, v6, v7);
  this->fields.endAct = end_act;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)end_act, v8, v9);
  ClassBoardFullReleaseEffectComponent__SetState(this, 1, v10);
}


void ClassBoardFullReleaseEffectComponent__SetClassIcon(
        ClassBoardFullReleaseEffectComponent_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Renderer_o *iconRenderer; // x0
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x20
  System_Func_object__bool__o *v8; // x22
  Il2CppObject *v9; // x20

  if ( (byte_4C3B402 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C32C20(&System_Func_Texture__bool__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0__SetClassIcon_b__0__);
    sub_1C32C20(&ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_TypeInfo);
    byte_4C3B402 = 1;
  }
  v5 = sub_1C32E6C(ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_DWORD *)(v5 + 16) = baseId;
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0__SetClassIcon_b__0__,
    0);
  v9 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
         iconTextures,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0) )
  {
    iconRenderer = this->fields.iconRenderer;
    if ( iconRenderer )
    {
      iconRenderer = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(iconRenderer, 0);
      if ( iconRenderer )
      {
        UnityEngine_Material__SetTexture(
          (UnityEngine_Material_o *)iconRenderer,
          this->fields.iconMaterialPropertyName,
          (UnityEngine_Texture_o *)v9,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C32E7C(iconRenderer);
  }
}


void ClassBoardFullReleaseEffectComponent__SetState(
        ClassBoardFullReleaseEffectComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C3B405 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__setState__);
    byte_4C3B405 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(0);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_332283C *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__setState__);
}


void ClassBoardFullReleaseEffectComponent__Update(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C3B403 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__update__);
    byte_4C3B403 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3322818 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__update__);
}


void ClassBoardFullReleaseEffectComponent_StateEnd___ctor(
        ClassBoardFullReleaseEffectComponent_StateEnd_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardFullReleaseEffectComponent_StateEnd__begin(
        ClassBoardFullReleaseEffectComponent_StateEnd_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1C32E7C(this);
  ActionExtensions__Call(that->fields.endAct, 0);
}


void ClassBoardFullReleaseEffectComponent_StateEnd__end(
        ClassBoardFullReleaseEffectComponent_StateEnd_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ClassBoardFullReleaseEffectComponent_StateEnd__update(
        ClassBoardFullReleaseEffectComponent_StateEnd_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1C32E7C(this);
  ClassBoardFullReleaseEffectComponent__SetState(that, 0, method);
}


void ClassBoardFullReleaseEffectComponent_StateNone___ctor(
        ClassBoardFullReleaseEffectComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardFullReleaseEffectComponent_StateNone__begin(
        ClassBoardFullReleaseEffectComponent_StateNone_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ClassBoardFullReleaseEffectComponent_StateNone__end(
        ClassBoardFullReleaseEffectComponent_StateNone_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ClassBoardFullReleaseEffectComponent_StateNone__update(
        ClassBoardFullReleaseEffectComponent_StateNone_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ClassBoardFullReleaseEffectComponent_StatePlay___ctor(
        ClassBoardFullReleaseEffectComponent_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardFullReleaseEffectComponent_StatePlay__begin(
        ClassBoardFullReleaseEffectComponent_StatePlay_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Animation_o *animation; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v7; // x19
  System_String_o *v8; // x0

  if ( !that )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  if ( !byte_4C313D6 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)that->fields.animation;
  if ( !this )
    goto LABEL_12;
  this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__Play(
                                                               (UnityEngine_Animation_o *)this,
                                                               0);
  animation = that->fields.animation;
  if ( !animation )
    goto LABEL_12;
  this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
  if ( !this
    || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0),
        (this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(animation, name, 0)) == 0)
    || (UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0),
        (v7 = that->fields.animation) == 0)
    || (this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v7, 0)) == 0
    || (v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0),
        (this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v7, v8, 0)) == 0) )
  {
LABEL_12:
    sub_1C32E7C(this);
  }
  UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0);
}


void ClassBoardFullReleaseEffectComponent_StatePlay__end(
        ClassBoardFullReleaseEffectComponent_StatePlay_o *this,
        ClassBoardFullReleaseEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ClassBoardFullReleaseEffectComponent_StatePlay__update(
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

  if ( (byte_4C3B407 & 1) == 0 )
  {
    this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B407 = 1;
  }
  if ( !that )
    goto LABEL_16;
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.animation;
    if ( v5 )
    {
      this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                   that->fields.animation,
                                                                   0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v5, name, 0);
        if ( this )
        {
          if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0) >= 1.0 )
            goto LABEL_15;
          v8 = that->fields.animation;
          if ( v8 )
          {
            this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                         that->fields.animation,
                                                                         0);
            if ( this )
            {
              v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
              if ( UnityEngine_Animation__IsPlaying(v8, v9, 0) )
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
    sub_1C32E7C(this);
  }
}


void ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0___ctor(
        ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0___SetClassIcon_b__0(
        ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_o *this,
        UnityEngine_Texture_o *x,
        const MethodInfo *method)
{
  ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_o *v4; // x19
  System_String_o *name; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t baseId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C3B408 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    this = (ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_o *)sub_1C32C20(&StringLiteral_6891/*"FullReleaseEffect_CrassIcon{0}"*/);
    byte_4C3B408 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  baseId = v4->fields.baseId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseId, v6, v7, v8, v9, v10, v11);
  v13 = System_String__Format((System_String_o *)StringLiteral_6891/*"FullReleaseEffect_CrassIcon{0}"*/, v12, 0);
  return System_String__op_Equality(name, v13, 0);
}