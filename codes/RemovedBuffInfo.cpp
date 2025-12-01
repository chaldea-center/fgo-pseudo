void RemovedBuffInfo___ctor(RemovedBuffInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCA3D3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4CCA3D3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedAllBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields._RemovedLinkedBuffList_k__BackingField = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._RemovedLinkedBuffList_k__BackingField,
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

  if ( (byte_4CCA3D4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    byte_4CCA3D4 = 1;
  }
  RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._RemovedAllBuffList_k__BackingField;
  if ( !RemovedAllBuffList_k__BackingField )
    goto LABEL_8;
  System_Collections_Generic_List_object___AddRange(
    RemovedAllBuffList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( asLinkedBuff )
  {
    RemovedAllBuffList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._RemovedLinkedBuffList_k__BackingField;
    if ( RemovedAllBuffList_k__BackingField )
    {
      System_Collections_Generic_List_object___AddRange(
        RemovedAllBuffList_k__BackingField,
        (System_Collections_Generic_IEnumerable_T__o *)buffDataEnumerable,
        (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      return;
    }
LABEL_8:
    sub_1C71608(RemovedAllBuffList_k__BackingField, buffDataEnumerable);
  }
}


bool RemovedBuffInfo__get_ExistRemoveBuff(RemovedBuffInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x8
  int32_t size; // w1
  System_Nullable_int__o v5; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v7; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CCA3D2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1C713B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_int___ctor__);
    sub_1C713B0(&Method_System_Nullable_int__get_HasValue__);
    byte_4CCA3D2 = 1;
  }
  RemovedAllBuffList_k__BackingField = this->fields._RemovedAllBuffList_k__BackingField;
  if ( RemovedAllBuffList_k__BackingField )
  {
    size = RemovedAllBuffList_k__BackingField->fields._size;
    v5 = (System_Nullable_int__o)&v7;
    v7 = 0;
    System_Nullable_int____ctor(v5, size, (const MethodInfo_3938D3C *)Method_System_Nullable_int___ctor__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._RemovedAllBuffList_k__BackingField = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void RemovedBuffInfo__set_RemovedLinkedBuffList(
        RemovedBuffInfo_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._RemovedLinkedBuffList_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._RemovedLinkedBuffList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}