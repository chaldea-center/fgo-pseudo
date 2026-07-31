void RemovedBuffInfo___ctor(RemovedBuffInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593B6B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_593B6B7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedAllBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedLinkedBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RemovedLinkedBuffList_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void RemovedBuffInfo__AddBuffs(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *buffDataEnumerable,
        bool asLinkedBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *RemovedAllBuffList_k__BackingField; // x0

  if ( (byte_593B6B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    byte_593B6B8 = 1;
  }
  RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_8;
  System_Collections_Generic_List_object___AddRange(
    RemovedAllBuffList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( asLinkedBuff )
  {
    RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._RemovedLinkedBuffList_k__BackingField;
    if ( RemovedAllBuffList_k__BackingField )
    {
      System_Collections_Generic_List_object___AddRange(
        RemovedAllBuffList_k__BackingField,
        (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      return;
    }
LABEL_8:
    sub_21FFECC(RemovedAllBuffList_k__BackingField, buffDataEnumerable);
  }
}


bool RemovedBuffInfo__get_ExistRemoveBuff(RemovedBuffInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x8
  System_Nullable_int__o v4; // x0
  int32_t size; // w1
  bool v6; // cc
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v8; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_593B6B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_21FFC50(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    byte_593B6B6 = 1;
  }
  RemovedAllBuffList_k__BackingField = this->fields._RemovedAllBuffList_k__BackingField;
  if ( RemovedAllBuffList_k__BackingField )
  {
    v4 = (System_Nullable_int__o)&v8;
    size = RemovedAllBuffList_k__BackingField->fields._size;
    v8 = 0;
    System_Nullable_int____ctor(v4, size, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
    RemovedAllBuffList_k__BackingField = v8;
  }
  if ( (_BYTE)RemovedAllBuffList_k__BackingField )
    v6 = SHIDWORD(RemovedAllBuffList_k__BackingField) <= 0;
  else
    v6 = 1;
  return !v6;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedBuffInfo__get_RemovedAllBuffList(
        RemovedBuffInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._RemovedAllBuffList_k__BackingField;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedBuffInfo__get_RemovedLinkedBuffList(
        RemovedBuffInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._RemovedLinkedBuffList_k__BackingField;
}


void RemovedBuffInfo__set_RemovedAllBuffList(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RemovedAllBuffList_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RemovedBuffInfo__set_RemovedLinkedBuffList(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RemovedLinkedBuffList_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RemovedLinkedBuffList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}