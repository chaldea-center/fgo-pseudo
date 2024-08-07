void __fastcall ActionChain___ctor(
        ActionChain_o *this,
        ChainableActionBase_array *chainableActions,
        const MethodInfo *method)
{
  if ( (byte_4A0332C & 1) == 0 )
  {
    sub_1B64A00(&Method_ActionChainBase_ChainableActionBase___ctor__, chainableActions);
    byte_4A0332C = 1;
  }
  ActionChainBase_object____ctor(
    (ActionChainBase_T__o *)this,
    (System_Object_array *)chainableActions,
    (const MethodInfo_3145B1C *)Method_ActionChainBase_ChainableActionBase___ctor__);
}


void __fastcall ActionChain___ctor_46288576(
        ActionChain_o *this,
        System_Action_Action__array *actions,
        const MethodInfo *method)
{
  ChainableActionBase_array *v4; // x1
  const MethodInfo *v5; // x2

  v4 = (ChainableActionBase_array *)SimpleChainableAction__ConvertToChainableActionArray(
                                      actions,
                                      (const MethodInfo *)actions);
  ActionChain___ctor(this, v4, v5);
}


ActionChain_o *__fastcall ActionChain__AddRange(
        ActionChain_o *this,
        System_Action_Action__array *actions,
        const MethodInfo *method)
{
  System_Object_array *v5; // x0

  if ( (byte_4A0332D & 1) == 0 )
  {
    sub_1B64A00(&Method_ActionChainBase_ChainableActionBase__AddRange__, actions);
    byte_4A0332D = 1;
  }
  v5 = (System_Object_array *)SimpleChainableAction__ConvertToChainableActionArray(actions, (const MethodInfo *)actions);
  ActionChainBase_object___AddRange(
    (ActionChainBase_T__o *)this,
    v5,
    (const MethodInfo_3145BD0 *)Method_ActionChainBase_ChainableActionBase__AddRange__);
  return this;
}


void __fastcall ActionChain__ExecuteCurrentAction(
        ActionChain_o *this,
        ChainableActionBase_o *action,
        const MethodInfo *method)
{
  ChainableActionBase_c *klass; // x8

  if ( !action )
    sub_1B64C5C(this, 0LL);
  if ( !action->fields._IsExecuted_k__BackingField )
  {
    klass = action->klass;
    action->fields._IsExecuted_k__BackingField = 1;
    ((void (__fastcall *)(ChainableActionBase_o *, Il2CppMethodPointer))klass->vtable._4_unknown.method)(
      action,
      klass->vtable._5_End.methodPtr);
  }
}