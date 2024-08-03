void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_LinkedList_T__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FED5A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo, v4);
    byte_49FED5A = 1;
  }
  v5 = (System_Collections_Generic_LinkedList_T__o *)sub_1B64314(
                                                       System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_LinkedList_object____ctor(
    v5,
    (const MethodInfo_33EF06C *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = (struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_49FED59 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__get_Count__, v3);
    byte_49FED59 = 1;
  }
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_1B64324(0LL);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_object___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_33EF5F8 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
}


System_Collections_Generic_LinkedList_BattleServantSnapShot__o *__fastcall BattleServantSnapShotGroupBase__get_SnapShotLinkedList(
        BattleServantSnapShotGroupBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotLinkedList_k__BackingField;
}