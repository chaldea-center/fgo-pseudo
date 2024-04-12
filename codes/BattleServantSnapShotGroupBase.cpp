void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B2A89 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___ctor__);
    sub_B52984(&System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__TypeInfo);
    byte_42B2A89 = 1;
  }
  v3 = (System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *)sub_B52A54(System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__TypeInfo);
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot____ctor(
    v3,
    (const MethodInfo_2295D20 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_42B2A88 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__Clear__);
    sub_B52984(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__get_Count__);
    byte_42B2A88 = 1;
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_B52A5C(0LL, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_2296454 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__Clear__);
}


System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *__fastcall BattleServantSnapShotGroupBase__get_SnapShotLinkedList(
        BattleServantSnapShotGroupBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotLinkedList_k__BackingField;
}


void __fastcall BattleServantSnapShotGroupBase_SnapShot___ctor(
        BattleServantSnapShotGroupBase_SnapShot_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleServantSnapShotGroupBase_SnapShot__get_CheckIndividualitiesData(
        BattleServantSnapShotGroupBase_SnapShot_o *this,
        const MethodInfo *method)
{
  return this->fields._CheckIndividualitiesData_k__BackingField;
}


void __fastcall BattleServantSnapShotGroupBase_SnapShot__set_CheckIndividualitiesData(
        BattleServantSnapShotGroupBase_SnapShot_o *this,
        BattleBuffData_CheckIndividualitiesData_o *value,
        const MethodInfo *method)
{
  this->fields._CheckIndividualitiesData_k__BackingField = value;
  sub_B52920(&this->fields);
}