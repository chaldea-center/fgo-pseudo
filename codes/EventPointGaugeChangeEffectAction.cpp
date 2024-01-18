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
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v4; // x1
  CommonEffectComponent_o *monitor; // x0
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v10; // x19
  System_String_o *v11; // x0

  if ( (byte_41878AC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41878AC = 1;
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
    v7 = this->fields.simpleAnimation;
    if ( !v7 || (monitor = (CommonEffectComponent_o *)v7[1].monitor) == 0LL )
LABEL_26:
      sub_B2C434(monitor, v4);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
    if ( !SimpleAnimation__IsPlaying(v7, name, 0LL) )
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
  v10 = this->fields.animation;
  if ( !v10 )
    goto LABEL_26;
  monitor = (CommonEffectComponent_o *)UnityEngine_Animation__get_clip(v10, 0LL);
  if ( !monitor )
    goto LABEL_26;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
  return !UnityEngine_Animation__IsPlaying(v10, v11, 0LL);
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
  sub_B2C2F8(p_gaugeChangeAction, 0LL, v2, v3, v4, v5, v6, v7);
  if ( gaugeChangeAction )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall EventPointGaugeChangeEffectAction__Setup(
        EventPointGaugeChangeEffectAction_o *this,
        System_Action_o *gaugeChangeAct,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v10; // x1
  struct CommonEffectComponent_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct SimpleAnimation_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UnityEngine_Animation_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_41878AB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, gaugeChangeAct);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v8);
    byte_41878AB = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_7;
  ComponentInChildren_UIWidget = (struct CommonEffectComponent_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     transform,
                                                                     (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  this->fields.commonEffectComponent = ComponentInChildren_UIWidget;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commonEffectComponent,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (v18 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            transform,
                                            (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___),
        this->fields.simpleAnimation = v18,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
          (System_Int32_array **)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL) )
  {
LABEL_7:
    sub_B2C434(transform, v10);
  }
  v25 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            transform,
                                            (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.gaugeChangeAction = gaugeChangeAct;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.gaugeChangeAction,
    (System_Int32_array **)gaugeChangeAct,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.endAction = endAct;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endAction,
    (System_Int32_array **)endAct,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.endAction, 0LL, v3, v4, v5, v6, v7, v8);
    if ( endAction )
      ActionExtensions__Call(endAction, 0LL);
  }
}