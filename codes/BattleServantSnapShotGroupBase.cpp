void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_WebOperation__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43547C7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
    sub_B70694(&System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
    byte_43547C7 = 1;
  }
  v3 = (System_Collections_Generic_LinkedList_WebOperation__o *)sub_B70764(System_Collections_Generic_LinkedList_BattleServantSnapShot__TypeInfo);
  System_Collections_Generic_LinkedList_WebOperation____ctor(
    v3,
    (const MethodInfo_2EBB1B8 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = (struct System_Collections_Generic_LinkedList_BattleServantSnapShot__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_WebOperation__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_43547C6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
    sub_B70694(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__get_Count__);
    byte_43547C6 = 1;
  }
  SnapShotLinkedList_k__BackingField = (System_Collections_Generic_LinkedList_WebOperation__o *)this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_B7076C(0LL, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_WebOperation___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_2EBB8EC *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShot__Clear__);
}


System_Collections_Generic_LinkedList_BattleServantSnapShot__o *__fastcall BattleServantSnapShotGroupBase__get_SnapShotLinkedList(
        BattleServantSnapShotGroupBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotLinkedList_k__BackingField;
}