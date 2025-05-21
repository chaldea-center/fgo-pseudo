void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_LinkedList_T__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B47827 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo, v3);
    byte_4B47827 = 1;
  }
  v4 = (System_Collections_Generic_LinkedList_T__o *)sub_1BDBAC4(System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
  System_Collections_Generic_LinkedList_object____ctor(
    v4,
    (const MethodInfo_361D838 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = (struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_LinkedList_T__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_4B47826 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__, method);
    sub_1BDB878(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__get_Count__, v3);
    byte_4B47826 = 1;
  }
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_T__o *)this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_1BDBAD4(0LL, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_object___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_361DDDC *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
}


System_Collections_Generic_LinkedList_BattleServantSnapShot__o *__fastcall BattleServantSnapShotGroupBase__get_SnapShotLinkedList(
        BattleServantSnapShotGroupBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotLinkedList_k__BackingField;
}