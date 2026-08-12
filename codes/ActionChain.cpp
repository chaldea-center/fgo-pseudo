void ActionChain___ctor(ActionChain_o *this, ChainableActionBase_array *chainableActions, const MethodInfo *method)
{
  if ( (byte_5974EBD & 1) == 0 )
  {
    sub_2213A60(&Method_ActionChainBase_ChainableActionBase___ctor__);
    byte_5974EBD = 1;
  }
  ActionChainBase_object____ctor(
    (ActionChainBase_T__o *)this,
    (System_Object_array *)chainableActions,
    (const MethodInfo_3F41B34 *)Method_ActionChainBase_ChainableActionBase___ctor__);
}


void ActionChain___ctor_56107140(ActionChain_o *this, System_Action_Action__array *actions, const MethodInfo *method)
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

  if ( (byte_5974EBE & 1) == 0 )
  {
    sub_2213A60(&Method_ActionChainBase_ChainableActionBase__AddRange__);
    byte_5974EBE = 1;
  }
  v5 = (System_Object_array *)SimpleChainableAction__ConvertToChainableActionArray(actions, (const MethodInfo *)actions);
  ActionChainBase_object___AddRange(
    (ActionChainBase_T__o *)this,
    v5,
    (const MethodInfo_3F41BEC *)Method_ActionChainBase_ChainableActionBase__AddRange__);
  return this;
}


void ActionChain__ExecuteCurrentAction(ActionChain_o *this, ChainableActionBase_o *action, const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  Il2CppMethodPointer methodPtr; // x2

  if ( !action )
    sub_2213CDC(this, 0);
  if ( !action->fields._IsExecuted_k__BackingField )
  {
    methodPtr = action->klass->vtable._4_unknown.methodPtr;
    v4 = action->klass->vtable._4_unknown.method;
    action->fields._IsExecuted_k__BackingField = 1;
    ((void (__fastcall *)(ChainableActionBase_o *, const MethodInfo *))methodPtr)(action, v4);
  }
}