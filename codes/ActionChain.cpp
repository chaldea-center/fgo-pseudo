void ActionChain___ctor(ActionChain_o *this, ChainableActionBase_array *chainableActions, const MethodInfo *method)
{
  if ( (byte_4D30D5C & 1) == 0 )
  {
    sub_1C94098(&Method_ActionChainBase_ChainableActionBase___ctor__);
    byte_4D30D5C = 1;
  }
  ActionChainBase_object____ctor(
    (ActionChainBase_T__o *)this,
    (System_Object_array *)chainableActions,
    (const MethodInfo_34C925C *)Method_ActionChainBase_ChainableActionBase___ctor__);
}


void ActionChain___ctor_49731620(ActionChain_o *this, System_Action_Action__array *actions, const MethodInfo *method)
{
  ChainableActionBase_array *v4; // x1
  const MethodInfo *v5; // x2

  v4 = (ChainableActionBase_array *)SimpleChainableAction__ConvertToChainableActionArray(
                                      actions,
                                      (const MethodInfo *)actions);
  ActionChain___ctor(this, v4, v5);
}


ActionChain_o *ActionChain__AddRange(
        ActionChain_o *this,
        System_Action_Action__array *actions,
        const MethodInfo *method)
{
  System_Object_array *v5; // x0

  if ( (byte_4D30D5D & 1) == 0 )
  {
    sub_1C94098(&Method_ActionChainBase_ChainableActionBase__AddRange__);
    byte_4D30D5D = 1;
  }
  v5 = (System_Object_array *)SimpleChainableAction__ConvertToChainableActionArray(actions, (const MethodInfo *)actions);
  ActionChainBase_object___AddRange(
    (ActionChainBase_T__o *)this,
    v5,
    (const MethodInfo_34C9310 *)Method_ActionChainBase_ChainableActionBase__AddRange__);
  return this;
}


void ActionChain__ExecuteCurrentAction(ActionChain_o *this, ChainableActionBase_o *action, const MethodInfo *method)
{
  ChainableActionBase_c *klass; // x8

  if ( !action )
    sub_1C942F0(this, 0);
  if ( !action->fields._IsExecuted_k__BackingField )
  {
    klass = action->klass;
    action->fields._IsExecuted_k__BackingField = 1;
    ((void (__fastcall *)(ChainableActionBase_o *, const MethodInfo *))klass->vtable._4_unknown.methodPtr)(
      action,
      klass->vtable._4_unknown.method);
  }
}