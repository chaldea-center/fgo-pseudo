void EventPointGaugeChangeEffectAction___ctor(EventPointGaugeChangeEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool EventPointGaugeChangeEffectAction__IsEnd(EventPointGaugeChangeEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v4; // x1
  CommonEffectComponent_o *m_Clip; // x0
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v10; // x19
  System_String_o *v11; // x0

  if ( (byte_4C214EE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C214EE = 1;
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
    v7 = this->fields.simpleAnimation;
    if ( !v7 || (m_Clip = (CommonEffectComponent_o *)v7->fields.m_Clip) == 0 )
LABEL_23:
      sub_1C2D6EC(m_Clip, v4);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
    if ( !SimpleAnimation__IsPlaying(v7, name, 0) )
      return 1;
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_Clip = (CommonEffectComponent_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) == 0 )
    return 0;
  v10 = this->fields.animation;
  if ( !v10 )
    goto LABEL_23;
  m_Clip = (CommonEffectComponent_o *)UnityEngine_Animation__get_clip(v10, 0);
  if ( !m_Clip )
    goto LABEL_23;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
  return !UnityEngine_Animation__IsPlaying(v10, v11, 0);
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
  sub_1C2D434(p_gaugeChangeAction);
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
  __int64 v8; // x1

  if ( (byte_4C214ED & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    byte_4C214ED = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (this->fields.commonEffectComponent = (struct CommonEffectComponent_o *)UnityEngine_Component__GetComponentInChildren_object__51139460(
                                                                                 transform,
                                                                                 (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___),
        sub_1C2D434(&this->fields.commonEffectComponent),
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (this->fields.simpleAnimation = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_object__51139460(
                                                                     transform,
                                                                     (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___),
        sub_1C2D434(&this->fields.simpleAnimation),
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(transform, v8);
  }
  this->fields.animation = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_object__51139460(
                                                               transform,
                                                               (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  sub_1C2D434(&this->fields.animation);
  this->fields.gaugeChangeAction = gaugeChangeAct;
  sub_1C2D434(&this->fields.gaugeChangeAction);
  this->fields.endAction = endAct;
  sub_1C2D434(&this->fields.endAction);
}


void EventPointGaugeChangeEffectAction__Update(EventPointGaugeChangeEffectAction_o *this, const MethodInfo *method)
{
  System_Action_o *endAction; // x20

  if ( EventPointGaugeChangeEffectAction__IsEnd(this, method) )
  {
    endAction = this->fields.endAction;
    this->fields.endAction = 0;
    sub_1C2D434(&this->fields.endAction);
    if ( endAction )
      ActionExtensions__Call(endAction, 0);
  }
}