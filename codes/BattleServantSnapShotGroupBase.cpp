void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_LinkedList_T__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C24BAF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo, v3);
    byte_4C24BAF = 1;
  }
  v4 = (System_Collections_Generic_LinkedList_T__o *)sub_1C3B9B0(System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
  System_Collections_Generic_LinkedList_object____ctor(
    v4,
    (const MethodInfo_35CFEB8 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = (struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *)v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_4C24BAE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__, method);
    sub_1C3B764(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__get_Count__, v3);
    byte_4C24BAE = 1;
  }
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_1C3B9C0(0LL, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_object___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_35D045C *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
}


System_Collections_Generic_LinkedList_BattleServantSnapShot__o *__fastcall BattleServantSnapShotGroupBase__get_SnapShotLinkedList(
        BattleServantSnapShotGroupBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotLinkedList_k__BackingField;
}