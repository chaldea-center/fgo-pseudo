void CommonEffectActionComponent___ctor(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommonEffectActionComponent__Awake(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971EF8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__Action__TypeInfo);
    byte_5971EF8 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__Action__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
  this->fields.eventActionList = (struct System_Collections_Generic_Dictionary_int__Action__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventActionList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void CommonEffectActionComponent__CallEndAction(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0);
}


void CommonEffectActionComponent__CallEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__Action__o *v7; // x0
  Il2CppObject *Item; // x0

  if ( (byte_5971EFA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
    byte_5971EFA = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList
    && System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
         key,
         (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__) )
  {
    v7 = this->fields.eventActionList;
    if ( !v7 )
      sub_2213CDC(0, v6);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)v7,
             key,
             (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
    ActionExtensions__Call((System_Action_o *)Item, 0);
  }
}


void CommonEffectActionComponent__CallStartAction(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.startAction, 0);
}


void CommonEffectActionComponent__SetEndAction(
        CommonEffectActionComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.endAction = endAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endAction,
    (int32_t)endAction,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommonEffectActionComponent__SetEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0

  if ( (byte_5971EF9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
    byte_5971EF9 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList )
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
      key,
      (Il2CppObject *)action,
      (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
}


void CommonEffectActionComponent__SetStartAction(
        CommonEffectActionComponent_o *this,
        System_Action_o *startAction,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.startAction = startAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.startAction,
    (int32_t)startAction,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}