void EventPointGaugeChangeEffectAction___ctor(EventPointGaugeChangeEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool EventPointGaugeChangeEffectAction__IsEnd(EventPointGaugeChangeEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  CommonEffectComponent_o *m_Clip; // x0
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v9; // x19
  System_String_o *v10; // x0

  if ( (byte_4C31BBD & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31BBD = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0) )
    return 0;
  m_Clip = this->fields.commonEffectComponent;
  if ( !m_Clip )
    goto LABEL_23;
  if ( !CommonEffectComponent__get_IsEndStatus(m_Clip, 0) )
    return 0;
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_Clip = (CommonEffectComponent_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    v6 = this->fields.simpleAnimation;
    if ( !v6 || (m_Clip = (CommonEffectComponent_o *)v6->fields.m_Clip) == 0 )
LABEL_23:
      sub_1C32E7C(m_Clip);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
    if ( !SimpleAnimation__IsPlaying(v6, name, 0) )
      return 1;
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_Clip = (CommonEffectComponent_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) == 0 )
    return 0;
  v9 = this->fields.animation;
  if ( !v9 )
    goto LABEL_23;
  m_Clip = (CommonEffectComponent_o *)UnityEngine_Animation__get_clip(v9, 0);
  if ( !m_Clip )
    goto LABEL_23;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
  return !UnityEngine_Animation__IsPlaying(v9, v10, 0);
}


void EventPointGaugeChangeEffectAction__OnChangeGauge(
        EventPointGaugeChangeEffectAction_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_gaugeChangeAction; // x0
  System_Action_o *v3; // x19
  struct System_Action_o *gaugeChangeAction; // t1

  gaugeChangeAction = this->fields.gaugeChangeAction;
  p_gaugeChangeAction = &this->fields.gaugeChangeAction;
  v3 = gaugeChangeAction;
  *p_gaugeChangeAction = 0;
  sub_1C32BC4(p_gaugeChangeAction, 0);
  if ( gaugeChangeAction )
    ActionExtensions__Call(v3, 0);
}


void EventPointGaugeChangeEffectAction__Setup(
        EventPointGaugeChangeEffectAction_o *this,
        System_Action_o *gaugeChangeAct,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *ComponentInChildren_object__51199524; // x0
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x0

  if ( (byte_4C31BBC & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    byte_4C31BBC = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_7;
  ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                           transform,
                                           (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  this->fields.commonEffectComponent = (struct CommonEffectComponent_o *)ComponentInChildren_object__51199524;
  sub_1C32BC4(&this->fields.commonEffectComponent, ComponentInChildren_object__51199524);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (v9 = UnityEngine_Component__GetComponentInChildren_object__51199524(
               transform,
               (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___),
        this->fields.simpleAnimation = (struct SimpleAnimation_o *)v9,
        sub_1C32BC4(&this->fields.simpleAnimation, v9),
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_7:
    sub_1C32E7C(transform);
  }
  v10 = UnityEngine_Component__GetComponentInChildren_object__51199524(
          transform,
          (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)v10;
  sub_1C32BC4(&this->fields.animation, v10);
  this->fields.gaugeChangeAction = gaugeChangeAct;
  sub_1C32BC4(&this->fields.gaugeChangeAction, gaugeChangeAct);
  this->fields.endAction = endAct;
  sub_1C32BC4(&this->fields.endAction, endAct);
}


void EventPointGaugeChangeEffectAction__Update(EventPointGaugeChangeEffectAction_o *this, const MethodInfo *method)
{
  System_Action_o *endAction; // x20

  if ( EventPointGaugeChangeEffectAction__IsEnd(this, method) )
  {
    endAction = this->fields.endAction;
    this->fields.endAction = 0;
    sub_1C32BC4(&this->fields.endAction, 0);
    if ( endAction )
      ActionExtensions__Call(endAction, 0);
  }
}