void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB2AA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__TypeInfo, v5, v6, v7);
    byte_42EB2AA = 1;
  }
  v8 = (System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *)sub_B5D694(System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__TypeInfo);
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot____ctor(
    v8,
    (const MethodInfo_23843C8 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_42EB2A9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__Clear__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__get_Count__,
      v5,
      v6,
      v7);
    byte_42EB2A9 = 1;
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_B5D69C(0LL, method);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_2384AFC *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__Clear__);
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
  sub_B5D560(&this->fields);
}