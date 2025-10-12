void CommonEffectActionComponent___ctor(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommonEffectActionComponent__Awake(CommonEffectActionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C39017 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__Action__TypeInfo);
    byte_4C39017 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__Action__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__Action___ctor__);
  this->fields.eventActionList = (struct System_Collections_Generic_Dictionary_int__Action__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventActionList, (int32_t)v3, v4, v5);
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
  struct System_Collections_Generic_Dictionary_int__Action__o *v6; // x0
  Il2CppObject *Item; // x0

  if ( (byte_4C39019 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
    byte_4C39019 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList
    && System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
         key,
         (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__Action__ContainsKey__) )
  {
    v6 = this->fields.eventActionList;
    if ( !v6 )
      sub_1C32E7C(0);
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)v6,
             key,
             (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__Action__get_Item__);
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
  const MethodInfo *v3; // x3

  this->fields.endAction = endAction;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endAction, (int32_t)endAction, (int32_t)method, v3);
}


void CommonEffectActionComponent__SetEventAction(
        CommonEffectActionComponent_o *this,
        int32_t key,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__Action__o *eventActionList; // x0

  if ( (byte_4C39018 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
    byte_4C39018 = 1;
  }
  eventActionList = this->fields.eventActionList;
  if ( eventActionList )
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)eventActionList,
      key,
      (Il2CppObject *)action,
      (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__Action__set_Item__);
}


void CommonEffectActionComponent__SetStartAction(
        CommonEffectActionComponent_o *this,
        System_Action_o *startAction,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.startAction = startAction;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.startAction, (int32_t)startAction, (int32_t)method, v3);
}