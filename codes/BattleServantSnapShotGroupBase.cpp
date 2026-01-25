void BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_T__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF15E6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
    byte_4CF15E6 = 1;
  }
  v3 = (System_Collections_Generic_LinkedList_T__o *)sub_1C7BD34(System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
  System_Collections_Generic_LinkedList_object____ctor(
    v3,
    (const MethodInfo_37A42A8 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = (struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_4CF15E5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__get_Count__);
    byte_4CF15E5 = 1;
  }
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_1C7BD40(0, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_object___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_37A4518 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
}


System_Collections_Generic_LinkedList_BattleServantSnapShot__o *BattleServantSnapShotGroupBase__get_SnapShotLinkedList(
        BattleServantSnapShotGroupBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotLinkedList_k__BackingField;
}