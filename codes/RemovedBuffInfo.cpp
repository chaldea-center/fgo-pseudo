void RemovedBuffInfo___ctor(RemovedBuffInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A1DA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4C2A1DA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedAllBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedLinkedBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._RemovedLinkedBuffList_k__BackingField, (int32_t)v6, v7, v8);
}


void RemovedBuffInfo__AddBuffs(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *buffDataEnumerable,
        bool asLinkedBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *RemovedAllBuffList_k__BackingField; // x0

  if ( (byte_4C2A1DB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    byte_4C2A1DB = 1;
  }
  RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_8;
  System_Collections_Generic_List_object___AddRange(
    RemovedAllBuffList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( asLinkedBuff )
  {
    RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._RemovedLinkedBuffList_k__BackingField;
    if ( RemovedAllBuffList_k__BackingField )
    {
      System_Collections_Generic_List_object___AddRange(
        RemovedAllBuffList_k__BackingField,
        (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      return;
    }
LABEL_8:
    sub_1C2D6EC(RemovedAllBuffList_k__BackingField, buffDataEnumerable);
  }
}


bool RemovedBuffInfo__get_ExistRemoveBuff(RemovedBuffInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x8
  int32_t size; // w1
  System_Nullable_int__o v5; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v7; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C2A1D9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    byte_4C2A1D9 = 1;
  }
  RemovedAllBuffList_k__BackingField = this->fields._RemovedAllBuffList_k__BackingField;
  if ( RemovedAllBuffList_k__BackingField )
  {
    size = RemovedAllBuffList_k__BackingField->fields._size;
    v5 = (System_Nullable_int__o)&v7;
    v7 = 0;
    System_Nullable_int____ctor(v5, size, (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
    RemovedAllBuffList_k__BackingField = v7;
  }
  return (unsigned __int8)RemovedAllBuffList_k__BackingField != 0 && SHIDWORD(RemovedAllBuffList_k__BackingField) > 0;
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
  const MethodInfo *v3; // x3

  this->fields._RemovedAllBuffList_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void RemovedBuffInfo__set_RemovedLinkedBuffList(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._RemovedLinkedBuffList_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._RemovedLinkedBuffList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}