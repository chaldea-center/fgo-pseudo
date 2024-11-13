void __fastcall CommonEffectActionComponent___ctor(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectActionComponent__Awake(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B17572 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Action___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__Action__TypeInfo, v5, v6);
    byte_4B17572 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__Action__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
  this->fields.eventActionList = (struct System_Collections_Generic_Dictionary_int__Action__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventActionList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_int__Action__o *v9; // x0
  Il2CppObject *Item; // x0

  if ( (byte_4B17574 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__, *(_QWORD *)&key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Action__get_Item__, v5, v6);
    byte_4B17574 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList
    && System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
         key,
         (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__) )
  {
    v9 = this->fields.eventActionList;
    if ( !v9 )
      sub_1BCAA3C(0LL, v8);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)v9,
             key,
             (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
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
  sub_1BCA784(
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

  if ( (byte_4B17573 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Action__set_Item__, *(_QWORD *)&key, action);
    byte_4B17573 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList )
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
      key,
      (Il2CppObject *)action,
      (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.startAction,
    (int64_t)startAction,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}