void __fastcall CommonEffectActionComponent___ctor(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectActionComponent__Awake(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5C4A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__Action__TypeInfo);
    byte_4A5C4A7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__Action__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
  this->fields.eventActionList = (struct System_Collections_Generic_Dictionary_int__Action__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventActionList, (int32_t)v3, v4, v5);
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
  Il2CppObject *Item; // x0

  if ( (byte_4A5C4A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
    byte_4A5C4A9 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList
    && System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
         key,
         (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__) )
  {
    v7 = this->fields.eventActionList;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)v7,
             key,
             (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
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

  this->fields.endAction = endAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endAction, (int32_t)endAction, (int32_t)method, v3);
}


void __fastcall CommonEffectActionComponent__SetEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0

  if ( (byte_4A5C4A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
    byte_4A5C4A8 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList )
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
      key,
      (Il2CppObject *)action,
      (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
}


void __fastcall CommonEffectActionComponent__SetStartAction(
        CommonEffectActionComponent_o *this,
        System_Action_o *startAction,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.startAction = startAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.startAction, (int32_t)startAction, (int32_t)method, v3);
}