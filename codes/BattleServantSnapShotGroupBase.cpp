void BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_T__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B684 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
    sub_21FFC50(&System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
    byte_593B684 = 1;
  }
  v3 = (System_Collections_Generic_LinkedList_T__o *)sub_21FFEBC(System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
  System_Collections_Generic_LinkedList_object____ctor(
    v3,
    (const MethodInfo_437BF10 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = (struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_593B683 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__get_Count__);
    byte_593B683 = 1;
  }
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_21FFECC(0, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_object___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_437C204 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
}


System_Collections_Generic_LinkedList_BattleServantSnapShot__o *BattleServantSnapShotGroupBase__get_SnapShotLinkedList(
        BattleServantSnapShotGroupBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotLinkedList_k__BackingField;
}