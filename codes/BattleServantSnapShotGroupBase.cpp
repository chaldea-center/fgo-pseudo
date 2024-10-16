void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_LinkedList_T__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4AB8811 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__, method);
    sub_1BAB41C(&System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo, v3);
    byte_4AB8811 = 1;
  }
  v4 = (System_Collections_Generic_LinkedList_T__o *)sub_1BAB668(System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
  System_Collections_Generic_LinkedList_object____ctor(
    v4,
    (const MethodInfo_348F004 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = (struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *)v4;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_4AB8810 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__get_Count__, v3);
    byte_4AB8810 = 1;
  }
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_1BAB678(0LL, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_object___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_348F590 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
}


System_Collections_Generic_LinkedList_BattleServantSnapShot__o *__fastcall BattleServantSnapShotGroupBase__get_SnapShotLinkedList(
        BattleServantSnapShotGroupBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotLinkedList_k__BackingField;
}