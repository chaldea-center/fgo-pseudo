void __fastcall CommonEffectActionComponent___ctor(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectActionComponent__Awake(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20

  if ( (byte_42E4CF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Action___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__Action__TypeInfo, v5, v6, v7);
    byte_42E4CF1 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__Action__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
  this->fields.eventActionList = (struct System_Collections_Generic_Dictionary_int__Action__o *)v8;
  sub_B5D560(&this->fields.eventActionList);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_int__Action__o *v11; // x0
  System_Action_o *Item; // x0

  if ( (byte_42E4CF3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__, key, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Action__get_Item__, v6, v7, v8);
    byte_42E4CF3 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList
    && System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)eventActionList,
         key,
         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__) )
  {
    v11 = this->fields.eventActionList;
    if ( !v11 )
      sub_B5D69C(0LL, v10);
    Item = (System_Action_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v11,
                                key,
                                (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
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
  sub_B5D560(&this->fields.endAction);
}


void __fastcall CommonEffectActionComponent__SetEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0

  if ( (byte_42E4CF2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Action__set_Item__, key, (_DWORD)action, method);
    byte_42E4CF2 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList )
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)eventActionList,
      key,
      (WarBoardAIRoute_RouteData_o *)action,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
}


void __fastcall CommonEffectActionComponent__SetStartAction(
        CommonEffectActionComponent_o *this,
        System_Action_o *startAction,
        const MethodInfo *method)
{
  this->fields.startAction = startAction;
  sub_B5D560(&this->fields.startAction);
}