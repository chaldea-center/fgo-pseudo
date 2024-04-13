void __fastcall EventPointGaugeChangeEffectAction___ctor(
        EventPointGaugeChangeEffectAction_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall EventPointGaugeChangeEffectAction__IsEnd(
        EventPointGaugeChangeEffectAction_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v6; // x1
  CommonEffectComponent_o *monitor; // x0
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v12; // x19
  System_String_o *v13; // x0

  if ( (byte_42E90B7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E90B7 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL) )
    return 0;
  monitor = this->fields.commonEffectComponent;
  if ( !monitor )
    goto LABEL_26;
  if ( !CommonEffectComponent__get_IsEndStatus(monitor, 0LL) )
    return 0;
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (CommonEffectComponent_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    v9 = this->fields.simpleAnimation;
    if ( !v9 || (monitor = (CommonEffectComponent_o *)v9[1].monitor) == 0LL )
LABEL_26:
      sub_B5D69C(monitor, v6);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
    if ( !SimpleAnimation__IsPlaying(v9, name, 0LL) )
      return 1;
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (CommonEffectComponent_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
    return 0;
  v12 = this->fields.animation;
  if ( !v12 )
    goto LABEL_26;
  monitor = (CommonEffectComponent_o *)UnityEngine_Animation__get_clip(v12, 0LL);
  if ( !monitor )
    goto LABEL_26;
  v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
  return !UnityEngine_Animation__IsPlaying(v12, v13, 0LL);
}


void __fastcall EventPointGaugeChangeEffectAction__OnChangeGauge(
        EventPointGaugeChangeEffectAction_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_gaugeChangeAction; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *gaugeChangeAction; // t1

  gaugeChangeAction = this->fields.gaugeChangeAction;
  p_gaugeChangeAction = (BattleServantConfConponent_o *)&this->fields.gaugeChangeAction;
  v9 = gaugeChangeAction;
  p_gaugeChangeAction->klass = 0LL;
  sub_B5D560(p_gaugeChangeAction, 0LL, v2, v3, v4, v5, v6, v7);
  if ( gaugeChangeAction )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall EventPointGaugeChangeEffectAction__Setup(
        EventPointGaugeChangeEffectAction_o *this,
        System_Action_o *gaugeChangeAct,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v14; // x1
  struct CommonEffectComponent_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct SimpleAnimation_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UnityEngine_Animation_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_42E90B6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentInChildren_Animation___,
      (_DWORD)gaugeChangeAct,
      (_DWORD)endAct,
      method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v10, v11, v12);
    byte_42E90B6 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_7;
  ComponentInChildren_UIWidget = (struct CommonEffectComponent_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  this->fields.commonEffectComponent = ComponentInChildren_UIWidget;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commonEffectComponent,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (v22 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            transform,
                                            (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___),
        this->fields.simpleAnimation = v22,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
          (System_Int32_array **)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL) )
  {
LABEL_7:
    sub_B5D69C(transform, v14);
  }
  v29 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            transform,
                                            (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.gaugeChangeAction = gaugeChangeAct;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gaugeChangeAction,
    (System_Int32_array **)gaugeChangeAct,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.endAction = endAct;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endAction,
    (System_Int32_array **)endAct,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
}


void __fastcall EventPointGaugeChangeEffectAction__Update(
        EventPointGaugeChangeEffectAction_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *endAction; // x20

  if ( EventPointGaugeChangeEffectAction__IsEnd(this, method) )
  {
    endAction = this->fields.endAction;
    this->fields.endAction = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.endAction, 0LL, v3, v4, v5, v6, v7, v8);
    if ( endAction )
      ActionExtensions__Call(endAction, 0LL);
  }
}