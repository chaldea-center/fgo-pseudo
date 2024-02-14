void __fastcall BattleServantSnapShotGroupBase___ctor(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42172AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__TypeInfo, v4);
    byte_42172AC = 1;
  }
  v5 = (System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *)sub_B0D974(
                                                                                             System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__TypeInfo,
                                                                                             method,
                                                                                             v2);
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot____ctor(
    v5,
    (const MethodInfo_2D1C960 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___ctor__);
  this->fields._SnapShotLinkedList_k__BackingField = v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantSnapShotGroupBase__Clear(BattleServantSnapShotGroupBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x0

  if ( (byte_42172AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__get_Count__, v3);
    byte_42172AB = 1;
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  if ( !SnapShotLinkedList_k__BackingField )
    sub_B0D97C(0LL);
  if ( SnapShotLinkedList_k__BackingField->fields.count >= 1 )
    System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___Clear(
      SnapShotLinkedList_k__BackingField,
      (const MethodInfo_2D1D094 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__Clear__);
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
  sub_B0D840(&this->fields, value);
}