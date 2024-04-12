void __fastcall CommonEffectActionComponent___ctor(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectActionComponent__Awake(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20

  if ( (byte_42AC46F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__Action__TypeInfo);
    byte_42AC46F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__Action__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
  this->fields.eventActionList = (struct System_Collections_Generic_Dictionary_int__Action__o *)v3;
  sub_B52920(&this->fields.eventActionList);
}


void __fastcall CommonEffectActionComponent__CallEndAction(
        CommonEffectActionComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall CommonEffectActionComponent__CallEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__Action__o *v7; // x0
  System_Action_o *Item; // x0

  if ( (byte_42AC471 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
    byte_42AC471 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList
    && System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)eventActionList,
         key,
         (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__) )
  {
    v7 = this->fields.eventActionList;
    if ( !v7 )
      sub_B52A5C(0LL, v6);
    Item = (System_Action_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v7,
                                key,
                                (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
    ActionExtensions__Call(Item, 0LL);
  }
}


void __fastcall CommonEffectActionComponent__CallStartAction(
        CommonEffectActionComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.startAction, 0LL);
}


void __fastcall CommonEffectActionComponent__SetEndAction(
        CommonEffectActionComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  this->fields.endAction = endAction;
  sub_B52920(&this->fields.endAction);
}


void __fastcall CommonEffectActionComponent__SetEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0

  if ( (byte_42AC470 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
    byte_42AC470 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList )
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)eventActionList,
      key,
      (WarBoardAIRoute_RouteData_o *)action,
      (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
}


void __fastcall CommonEffectActionComponent__SetStartAction(
        CommonEffectActionComponent_o *this,
        System_Action_o *startAction,
        const MethodInfo *method)
{
  this->fields.startAction = startAction;
  sub_B52920(&this->fields.startAction);
}