void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_T__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5DB17 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
    sub_1B885B0(&System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
    byte_4A5DB17 = 1;
  }
  v3 = (System_Collections_Generic_LinkedList_T__o *)sub_1B887FC(System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
  System_Collections_Generic_LinkedList_object____ctor(
    v3,
    (const MethodInfo_343EFEC *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = (struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_4A5DB16 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__get_Count__);
    byte_4A5DB16 = 1;
  }
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_1B8880C(0LL, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_object___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_343F578 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
}


System_Collections_Generic_LinkedList_BattleServantSnapShot__o *__fastcall BattleServantSnapShotGroupBase__get_SnapShotLinkedList(
        BattleServantSnapShotGroupBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotLinkedList_k__BackingField;
}