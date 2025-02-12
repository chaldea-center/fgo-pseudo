void __fastcall CommonEffectActionComponent___ctor(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectActionComponent__Awake(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BC8E92 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__Action___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__Action__TypeInfo, v3);
    byte_4BC8E92 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__Action__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
  this->fields.eventActionList = (struct System_Collections_Generic_Dictionary_int__Action__o *)v4;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.eventActionList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  Il2CppObject *Item; // x0

  if ( (byte_4BC8E94 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__, *(_QWORD *)&key);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__Action__get_Item__, v5);
    byte_4BC8E94 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList
    && System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
         key,
         (const MethodInfo_32A24F0 *)Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__) )
  {
    v8 = this->fields.eventActionList;
    if ( !v8 )
      sub_1C1AE30(0LL, v7);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)v8,
             key,
             (const MethodInfo_32A225C *)Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
    ActionExtensions__Call((System_Action_o *)Item, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.endAction = endAction;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.endAction,
    (int64_t)endAction,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectActionComponent__SetEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0

  if ( (byte_4BC8E93 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__Action__set_Item__, *(_QWORD *)&key);
    byte_4BC8E93 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList )
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
      key,
      (Il2CppObject *)action,
      (const MethodInfo_32A22E8 *)Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
}


void __fastcall CommonEffectActionComponent__SetStartAction(
        CommonEffectActionComponent_o *this,
        System_Action_o *startAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.startAction = startAction;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.startAction,
    (int64_t)startAction,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}