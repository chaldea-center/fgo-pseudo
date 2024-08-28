void __fastcall CommonEffectActionComponent___ctor(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonEffectActionComponent__Awake(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A20E00 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__Action___ctor__, method);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__Action__TypeInfo, v3);
    byte_4A20E00 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__Action__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
  this->fields.eventActionList = (struct System_Collections_Generic_Dictionary_int__Action__o *)v4;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.eventActionList, (int32_t)v4, v5, v6);
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

  if ( (byte_4A20E02 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__, *(_QWORD *)&key);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__Action__get_Item__, v5);
    byte_4A20E02 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList
    && System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
         key,
         (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__) )
  {
    v8 = this->fields.eventActionList;
    if ( !v8 )
      sub_1B71828(0LL, v7);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)v8,
             key,
             (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.endAction, (int32_t)endAction, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonEffectActionComponent__SetEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0

  if ( (byte_4A20E01 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__Action__set_Item__, *(_QWORD *)&key);
    byte_4A20E01 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList )
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
      key,
      (Il2CppObject *)action,
      (const MethodInfo_3148840 *)Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
}


void __fastcall CommonEffectActionComponent__SetStartAction(
        CommonEffectActionComponent_o *this,
        System_Action_o *startAction,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.startAction = startAction;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.startAction, (int32_t)startAction, (int32_t)method, v3);
}