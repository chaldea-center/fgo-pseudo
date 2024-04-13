void __fastcall ActionChain___ctor(
        ActionChain_o *this,
        ChainableActionBase_array *chainableActions,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E67B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionChainBase_ChainableActionBase___ctor__, (_DWORD)chainableActions, (_DWORD)method, v3);
    byte_42E67B0 = 1;
  }
  ActionChainBase_object____ctor(
    (ActionChainBase_T__o *)this,
    (System_Object_array *)chainableActions,
    (const MethodInfo_2583CA0 *)Method_ActionChainBase_ChainableActionBase___ctor__);
}


void __fastcall ActionChain___ctor_21252180(
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
  __int64 v3; // x3
  System_Object_array *v6; // x0

  if ( (byte_42E67B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionChainBase_ChainableActionBase__AddRange__, (_DWORD)actions, (_DWORD)method, v3);
    byte_42E67B1 = 1;
  }
  v6 = (System_Object_array *)SimpleChainableAction__ConvertToChainableActionArray(actions, 0LL);
  ActionChainBase_object___AddRange(
    (ActionChainBase_T__o *)this,
    v6,
    (const MethodInfo_2583D84 *)Method_ActionChainBase_ChainableActionBase__AddRange__);
  return this;
}


void __fastcall ActionChain__ExecuteCurrentAction(
        ActionChain_o *this,
        ChainableActionBase_o *action,
        const MethodInfo *method)
{
  if ( !action )
    sub_B5D69C(this, 0LL);
  ChainableActionBase__Execute(action, 0LL);
}