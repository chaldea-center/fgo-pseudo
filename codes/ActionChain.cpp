void __fastcall ActionChain___ctor(
        ActionChain_o *this,
        ChainableActionBase_array *chainableActions,
        const MethodInfo *method)
{
  if ( (byte_42ADF24 & 1) == 0 )
  {
    sub_B52984(&Method_ActionChainBase_ChainableActionBase___ctor__);
    byte_42ADF24 = 1;
  }
  ActionChainBase_object____ctor(
    (ActionChainBase_T__o *)this,
    (System_Object_array *)chainableActions,
    (const MethodInfo_2620100 *)Method_ActionChainBase_ChainableActionBase___ctor__);
}


void __fastcall ActionChain___ctor_21209932(
        ActionChain_o *this,
        System_Action_Action__array *actions,
        const MethodInfo *method)
{
  ChainableActionBase_array *v4; // x1
  const MethodInfo *v5; // x2

  v4 = (ChainableActionBase_array *)SimpleChainableAction__ConvertToChainableActionArray(actions, 0LL);
  ActionChain___ctor(this, v4, v5);
}


ActionChain_o *__fastcall ActionChain__AddRange(
        ActionChain_o *this,
        System_Action_Action__array *actions,
        const MethodInfo *method)
{
  System_Object_array *v5; // x0

  if ( (byte_42ADF25 & 1) == 0 )
  {
    sub_B52984(&Method_ActionChainBase_ChainableActionBase__AddRange__);
    byte_42ADF25 = 1;
  }
  v5 = (System_Object_array *)SimpleChainableAction__ConvertToChainableActionArray(actions, 0LL);
  ActionChainBase_object___AddRange(
    (ActionChainBase_T__o *)this,
    v5,
    (const MethodInfo_26201E4 *)Method_ActionChainBase_ChainableActionBase__AddRange__);
  return this;
}


void __fastcall ActionChain__ExecuteCurrentAction(
        ActionChain_o *this,
        ChainableActionBase_o *action,
        const MethodInfo *method)
{
  if ( !action )
    sub_B52A5C(this, 0LL);
  ChainableActionBase__Execute(action, 0LL);
}