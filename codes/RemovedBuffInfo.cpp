void __fastcall RemovedBuffInfo___ctor(RemovedBuffInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1F349 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_4B1F349 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedAllBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedLinkedBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._RemovedLinkedBuffList_k__BackingField, (int32_t)v7, v8, v9);
}


void __fastcall RemovedBuffInfo__AddBuffs(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *buffDataEnumerable,
        bool asLinkedBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *RemovedAllBuffList_k__BackingField; // x0

  if ( (byte_4B1F34A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, buffDataEnumerable);
    byte_4B1F34A = 1;
  }
  RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_8;
  System_Collections_Generic_List_object___AddRange(
    RemovedAllBuffList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( asLinkedBuff )
  {
    RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._RemovedLinkedBuffList_k__BackingField;
    if ( RemovedAllBuffList_k__BackingField )
    {
      System_Collections_Generic_List_object___AddRange(
        RemovedAllBuffList_k__BackingField,
        (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
        (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      return;
    }
LABEL_8:
    sub_1BCB254(RemovedAllBuffList_k__BackingField, buffDataEnumerable);
  }
}


bool __fastcall RemovedBuffInfo__get_ExistRemoveBuff(RemovedBuffInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x8
  int32_t size; // w1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v9; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_int__o v10; // 0:x0.8

  if ( (byte_4B1F348 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, method);
    sub_1BCAFF8(&Method_System_Nullable_int__GetValueOrDefault__, v3);
    sub_1BCAFF8(&Method_System_Nullable_int___ctor__, v4);
    sub_1BCAFF8(&Method_System_Nullable_int__get_HasValue__, v5);
    byte_4B1F348 = 1;
  }
  RemovedAllBuffList_k__BackingField = this->fields._RemovedAllBuffList_k__BackingField;
  if ( RemovedAllBuffList_k__BackingField )
  {
    size = RemovedAllBuffList_k__BackingField->fields._size;
    v10 = (System_Nullable_int__o)&v9;
    v9 = 0LL;
    System_Nullable_int____ctor(v10, size, (const MethodInfo_37D8E28 *)Method_System_Nullable_int___ctor__);
    RemovedAllBuffList_k__BackingField = v9;
  }
  return (unsigned __int8)RemovedAllBuffList_k__BackingField != 0 && SHIDWORD(RemovedAllBuffList_k__BackingField) > 0;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfo__get_RemovedAllBuffList(
        RemovedBuffInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._RemovedAllBuffList_k__BackingField;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfo__get_RemovedLinkedBuffList(
        RemovedBuffInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._RemovedLinkedBuffList_k__BackingField;
}


void __fastcall RemovedBuffInfo__set_RemovedAllBuffList(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._RemovedAllBuffList_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall RemovedBuffInfo__set_RemovedLinkedBuffList(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._RemovedLinkedBuffList_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._RemovedLinkedBuffList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}