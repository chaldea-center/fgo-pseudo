void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418A584 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__TypeInfo, v3);
    byte_418A584 = 1;
  }
  v4 = (System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *)sub_B2C42C(System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__TypeInfo);
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot____ctor(
    v4,
    (const MethodInfo_210AC98 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_418A583 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__get_Count__, v3);
    byte_418A583 = 1;
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_B2C434(0LL, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_210B308 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__Clear__);
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
  sub_B2C2F8(&this->fields, value);
}