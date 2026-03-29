void ClassBoardFullReleaseEffectComponent___ctor(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D34640 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16365/*"_MainTex"*/);
    byte_4D34640 = 1;
  }
  v9 = StringLiteral_16365/*"_MainTex"*/;
  this->fields.iconMaterialPropertyName = (struct System_String_o *)StringLiteral_16365/*"_MainTex"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconMaterialPropertyName, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardFullReleaseEffectComponent__Awake(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CStateManager_ClassBoardFullReleaseEffectComponent__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4D3463A & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_ClassBoardFullReleaseEffectComponent___ctor__);
    sub_1C93AD4(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__);
    sub_1C93AD4(&CStateManager_ClassBoardFullReleaseEffectComponent__TypeInfo);
    sub_1C93AD4(&ClassBoardFullReleaseEffectComponent_StateEnd_TypeInfo);
    sub_1C93AD4(&ClassBoardFullReleaseEffectComponent_StateNone_TypeInfo);
    sub_1C93AD4(&ClassBoardFullReleaseEffectComponent_StatePlay_TypeInfo);
    byte_4D3463A = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C93D20(CStateManager_ClassBoardFullReleaseEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_33EE80C *)Method_CStateManager_ClassBoardFullReleaseEffectComponent___ctor__);
    this->fields.fsm = (struct CStateManager_ClassBoardFullReleaseEffectComponent__o *)v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v12 = (Il2CppObject *)sub_1C93D20(ClassBoardFullReleaseEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_1C93D20(ClassBoardFullReleaseEffectComponent_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_33EE8B4 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__),
          v17 = (CStateManager_T__o *)*p_fsm,
          v18 = (Il2CppObject *)sub_1C93D20(ClassBoardFullReleaseEffectComponent_StateEnd_TypeInfo),
          System_Object___ctor(v18, 0),
          !v17) )
    {
LABEL_8:
      sub_1C93D2C(v13, v14);
    }
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__add__);
    ClassBoardFullReleaseEffectComponent__SetState(this, 0, v19);
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
  if ( (byte_4D3463E & 1) == 0 )
  {
    this = (ClassBoardFullReleaseEffectComponent_o *)sub_1C93AD4(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__getState__);
    byte_4D3463E = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C93D2C(this, method);
  return fsm->fields.m_state;
}


void ClassBoardFullReleaseEffectComponent__Play(
        ClassBoardFullReleaseEffectComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4D3463B & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Animation___);
    byte_4D3463B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.animation,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.endAct = end_act;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)end_act, v12, v13, v14, v15, v16, v17);
  ClassBoardFullReleaseEffectComponent__SetState(this, 1, v18);
}


void ClassBoardFullReleaseEffectComponent__SetClassIcon(
        ClassBoardFullReleaseEffectComponent_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Renderer_o *iconRenderer; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *iconTextures; // x20
  System_Func_object__bool__o *v9; // x22
  Il2CppObject *v10; // x20

  if ( (byte_4D3463C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
    sub_1C93AD4(&System_Func_Texture__bool__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0__SetClassIcon_b__0__);
    sub_1C93AD4(&ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_TypeInfo);
    byte_4D3463C = 1;
  }
  v5 = sub_1C93D20(ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_DWORD *)(v5 + 16) = baseId;
  iconTextures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.iconTextures;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_Texture__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0__SetClassIcon_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
          iconTextures,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_Texture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0) )
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
          (UnityEngine_Texture_o *)v10,
          0);
        return;
      }
    }
LABEL_10:
    sub_1C93D2C(iconRenderer, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardFullReleaseEffectComponent__SetState(
        ClassBoardFullReleaseEffectComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4D3463F & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__setState__);
    byte_4D3463F = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C93D2C(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_33EE940 *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__setState__);
}


void ClassBoardFullReleaseEffectComponent__Update(
        ClassBoardFullReleaseEffectComponent_o *this,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4D3463D & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_ClassBoardFullReleaseEffectComponent__update__);
    byte_4D3463D = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_33EE91C *)Method_CStateManager_ClassBoardFullReleaseEffectComponent__update__);
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, 0);
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
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
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
    sub_1C93D2C(this, that);
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

  if ( (byte_4D34641 & 1) == 0 )
  {
    this = (ClassBoardFullReleaseEffectComponent_StatePlay_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34641 = 1;
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
    sub_1C93D2C(this, that);
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
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t baseId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4D34642 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    this = (ClassBoardFullReleaseEffectComponent___c__DisplayClass11_0_o *)sub_1C93AD4(&StringLiteral_6927/*"FullReleaseEffect_CrassIcon{0}"*/);
    byte_4D34642 = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
  baseId = v4->fields.baseId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &baseId);
  v7 = System_String__Format((System_String_o *)StringLiteral_6927/*"FullReleaseEffect_CrassIcon{0}"*/, v6, 0);
  return System_String__op_Equality(name, v7, 0);
}