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

  if ( (byte_4A5EE1B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EE1B = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL) )
    return 0;
  monitor = this->fields.commonEffectComponent;
  if ( !monitor )
    goto LABEL_23;
  if ( !CommonEffectComponent__get_IsEndStatus(monitor, 0LL) )
    return 0;
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (CommonEffectComponent_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    v7 = this->fields.simpleAnimation;
    if ( !v7 || (monitor = (CommonEffectComponent_o *)v7[1].monitor) == 0LL )
LABEL_23:
      sub_1B8880C(monitor, v4);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
    if ( !SimpleAnimation__IsPlaying(v7, name, 0LL) )
      return 1;
  }
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (CommonEffectComponent_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
    return 0;
  v10 = this->fields.animation;
  if ( !v10 )
    goto LABEL_23;
  monitor = (CommonEffectComponent_o *)UnityEngine_Animation__get_clip(v10, 0LL);
  if ( !monitor )
    goto LABEL_23;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)monitor, 0LL);
  return !UnityEngine_Animation__IsPlaying(v10, v11, 0LL);
}


void __fastcall EventPointGaugeChangeEffectAction__OnChangeGauge(
        EventPointGaugeChangeEffectAction_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_gaugeChangeAction; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *gaugeChangeAction; // t1

  gaugeChangeAction = this->fields.gaugeChangeAction;
  p_gaugeChangeAction = (ServantStatusBattleListViewItem_o *)&this->fields.gaugeChangeAction;
  v5 = gaugeChangeAction;
  p_gaugeChangeAction->klass = 0LL;
  sub_1B88554(p_gaugeChangeAction, 0, v2, v3);
  if ( gaugeChangeAction )
    ActionExtensions__Call(v5, 0LL);
}


void __fastcall EventPointGaugeChangeEffectAction__Setup(
        EventPointGaugeChangeEffectAction_o *this,
        System_Action_o *gaugeChangeAct,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  __int64 v8; // x1
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A5EE1A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    byte_4A5EE1A = 1;
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_7;
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           transform,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  this->fields.commonEffectComponent = (struct CommonEffectComponent_o *)ComponentInChildren_object__48719376;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commonEffectComponent,
    (int32_t)ComponentInChildren_object__48719376,
    v10,
    v11);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (v12 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                transform,
                (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___),
        this->fields.simpleAnimation = (struct SimpleAnimation_o *)v12,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimation, (int32_t)v12, v13, v14),
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL) )
  {
LABEL_7:
    sub_1B8880C(transform, v8);
  }
  v15 = UnityEngine_Component__GetComponentInChildren_object__48719376(
          transform,
          (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animation, (int32_t)v15, v16, v17);
  this->fields.gaugeChangeAction = gaugeChangeAct;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.gaugeChangeAction, (int32_t)gaugeChangeAct, v18, v19);
  this->fields.endAction = endAct;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endAction, (int32_t)endAct, v20, v21);
}


void __fastcall EventPointGaugeChangeEffectAction__Update(
        EventPointGaugeChangeEffectAction_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_Action_o *endAction; // x20

  if ( EventPointGaugeChangeEffectAction__IsEnd(this, method) )
  {
    endAction = this->fields.endAction;
    this->fields.endAction = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endAction, 0, v3, v4);
    if ( endAction )
      ActionExtensions__Call(endAction, 0LL);
  }
}