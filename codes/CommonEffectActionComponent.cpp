void __fastcall CommonEffectActionComponent___ctor(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectActionComponent__Awake(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20

  if ( (byte_4183E26 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Action___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__Action__TypeInfo, v3);
    byte_4183E26 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__Action__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
  this->fields.eventActionList = (struct System_Collections_Generic_Dictionary_int__Action__o *)v4;
  sub_B2C2F8(&this->fields.eventActionList, v4);
}


void __fastcall CommonEffectActionComponent__CallEndAction(
        CommonEffectActionComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectActionComponent__CallEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__Action__o *v8; // x0
  System_Action_o *Item; // x0

  if ( (byte_4183E28 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__, *(_QWORD *)&key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Action__get_Item__, v5);
    byte_4183E28 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList
    && System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)eventActionList,
         key,
         (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__) )
  {
    v8 = this->fields.eventActionList;
    if ( !v8 )
      sub_B2C434(0LL, v7);
    Item = (System_Action_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v8,
                                key,
                                (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
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
  sub_B2C2F8(&this->fields.endAction, endAction);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectActionComponent__SetEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0

  if ( (byte_4183E27 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Action__set_Item__, *(_QWORD *)&key);
    byte_4183E27 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList )
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)eventActionList,
      key,
      (WarBoardAIRoute_RouteData_o *)action,
      (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
}


void __fastcall CommonEffectActionComponent__SetStartAction(
        CommonEffectActionComponent_o *this,
        System_Action_o *startAction,
        const MethodInfo *method)
{
  this->fields.startAction = startAction;
  sub_B2C2F8(&this->fields.startAction, startAction);
}