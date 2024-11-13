void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_LinkedList_T__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18CEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo, v5, v6);
    byte_4B18CEF = 1;
  }
  v7 = (System_Collections_Generic_LinkedList_T__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_LinkedList_object____ctor(
    v7,
    (const MethodInfo_34E3270 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = (struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_4B18CEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__get_Count__, v4, v5);
    byte_4B18CEE = 1;
  }
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_1BCAA3C(0LL, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_object___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_34E37FC *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
}


System_Collections_Generic_LinkedList_BattleServantSnapShot__o *__fastcall BattleServantSnapShotGroupBase__get_SnapShotLinkedList(
        BattleServantSnapShotGroupBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotLinkedList_k__BackingField;
}