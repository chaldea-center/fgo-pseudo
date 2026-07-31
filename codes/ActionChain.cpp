void ActionChain___ctor(ActionChain_o *this, ChainableActionBase_array *chainableActions, const MethodInfo *method)
{
  if ( (byte_593CBE6 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionChainBase_ChainableActionBase___ctor__);
    byte_593CBE6 = 1;
  }
  ActionChainBase_object____ctor(
    (ActionChainBase_T__o *)this,
    (System_Object_array *)chainableActions,
    (const MethodInfo_3F0E38C *)Method_ActionChainBase_ChainableActionBase___ctor__);
}


void ActionChain___ctor_55902484(ActionChain_o *this, System_Action_Action__array *actions, const MethodInfo *method)
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

  if ( (byte_593CBE7 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionChainBase_ChainableActionBase__AddRange__);
    byte_593CBE7 = 1;
  }
  v5 = (System_Object_array *)SimpleChainableAction__ConvertToChainableActionArray(actions, (const MethodInfo *)actions);
  ActionChainBase_object___AddRange(
    (ActionChainBase_T__o *)this,
    v5,
    (const MethodInfo_3F0E444 *)Method_ActionChainBase_ChainableActionBase__AddRange__);
  return this;
}


void ActionChain__ExecuteCurrentAction(ActionChain_o *this, ChainableActionBase_o *action, const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  Il2CppMethodPointer methodPtr; // x2

  if ( !action )
    sub_21FFECC(this, 0);
  if ( !action->fields._IsExecuted_k__BackingField )
  {
    methodPtr = action->klass->vtable._4_unknown.methodPtr;
    v4 = action->klass->vtable._4_unknown.method;
    action->fields._IsExecuted_k__BackingField = 1;
    ((void (__fastcall *)(ChainableActionBase_o *, const MethodInfo *))methodPtr)(action, v4);
  }
}