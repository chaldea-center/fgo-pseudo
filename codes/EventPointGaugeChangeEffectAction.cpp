void EventPointGaugeChangeEffectAction___ctor(EventPointGaugeChangeEffectAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool EventPointGaugeChangeEffectAction__IsEnd(EventPointGaugeChangeEffectAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v5; // x1
  CommonEffectComponent_o *m_Clip; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  __int64 v10; // x2
  struct SimpleAnimation_o *v11; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v14; // x19
  System_String_o *v15; // x0

  if ( (byte_596A4C7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A4C7 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0) )
    return 0;
  m_Clip = this->fields.commonEffectComponent;
  if ( !m_Clip )
    goto LABEL_23;
  if ( !CommonEffectComponent__get_IsEndStatus(m_Clip, 0) )
    return 0;
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  m_Clip = (CommonEffectComponent_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    v11 = this->fields.simpleAnimation;
    if ( !v11 || (m_Clip = (CommonEffectComponent_o *)v11->fields.m_Clip) == 0 )
LABEL_23:
      sub_2213CDC(m_Clip, v5);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
    if ( !SimpleAnimation__IsPlaying(v11, name, 0) )
      return 1;
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v10);
  m_Clip = (CommonEffectComponent_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) == 0 )
    return 0;
  v14 = this->fields.animation;
  if ( !v14 )
    goto LABEL_23;
  m_Clip = (CommonEffectComponent_o *)UnityEngine_Animation__get_clip(v14, 0);
  if ( !m_Clip )
    goto LABEL_23;
  v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)m_Clip, 0);
  return !UnityEngine_Animation__IsPlaying(v14, v15, 0);
}


void EventPointGaugeChangeEffectAction__OnChangeGauge(
        EventPointGaugeChangeEffectAction_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_gaugeChangeAction; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *gaugeChangeAction; // t1

  gaugeChangeAction = this->fields.gaugeChangeAction;
  p_gaugeChangeAction = (MissionNaviTransitionBoardItem_o *)&this->fields.gaugeChangeAction;
  v9 = gaugeChangeAction;
  p_gaugeChangeAction->klass = 0;
  sub_2213A04(p_gaugeChangeAction, 0, v2, v3, v4, v5, v6, v7);
  if ( gaugeChangeAction )
    ActionExtensions__Call(v9, 0);
}


void EventPointGaugeChangeEffectAction__Setup(
        EventPointGaugeChangeEffectAction_o *this,
        System_Action_o *gaugeChangeAct,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  if ( (byte_596A4C6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    byte_596A4C6 = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_7;
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           transform,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  this->fields.commonEffectComponent = (struct CommonEffectComponent_o *)ComponentInChildren_object__58855044;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commonEffectComponent,
    (int32_t)ComponentInChildren_object__58855044,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (v16 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                transform,
                (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___),
        this->fields.simpleAnimation = (struct SimpleAnimation_o *)v16,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimation,
          (int32_t)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_7:
    sub_2213CDC(transform, v8);
  }
  v23 = UnityEngine_Component__GetComponentInChildren_object__58855044(
          transform,
          (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.animation, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  this->fields.gaugeChangeAction = gaugeChangeAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gaugeChangeAction,
    (int32_t)gaugeChangeAct,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.endAction = endAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endAction,
    (int32_t)endAct,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


void EventPointGaugeChangeEffectAction__Update(EventPointGaugeChangeEffectAction_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_Action_o *endAction; // x20

  if ( EventPointGaugeChangeEffectAction__IsEnd(this, method) )
  {
    endAction = this->fields.endAction;
    this->fields.endAction = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.endAction, 0, v3, v4, v5, v6, v7, v8);
    if ( endAction )
      ActionExtensions__Call(endAction, 0);
  }
}