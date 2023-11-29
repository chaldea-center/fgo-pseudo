void __fastcall WarBoardActionTrendEntity___ctor(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  struct System_Int32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_Int32_array *v12; // x1
  __int64 v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Int32_array **p_actionTypeIds; // x19

  if ( (byte_40F8C21 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    sub_B16FFC(&int___TypeInfo, v3);
    byte_40F8C21 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  this->fields.viewPoint = 0;
  v5 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v4);
  if ( !v5 )
    goto LABEL_8;
  v12 = v5;
  if ( !v5->max_length )
    goto LABEL_9;
  v5->m_Items[1] = 23;
  this->fields.conditionIds = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.conditionIds,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.attackValue = 0;
  v5 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v13);
  if ( !v5 )
LABEL_8:
    sub_B170D4();
  v12 = v5;
  if ( !v5->max_length )
  {
LABEL_9:
    sub_B17100(v5, v12, v6);
    sub_B170A0();
  }
  v5->m_Items[1] = 1;
  this->fields.actionTypeIds = v5;
  p_actionTypeIds = &this->fields.actionTypeIds;
  sub_B16F98((BattleServantConfConponent_o *)p_actionTypeIds, (System_Int32_array **)v5, v6, v14, v15, v16, v17, v18);
  *((_DWORD *)p_actionTypeIds + 3) = 0;
}


void __fastcall WarBoardActionTrendEntity___ctor_22963560(
        WarBoardActionTrendEntity_o *this,
        WarBoardActionTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *conditionIds; // x1
  struct System_Int32_array *actionTypeIds; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F8C22 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_40F8C22 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B170D4();
  this->fields.id = cSrc->fields.id;
  conditionIds = cSrc->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.conditionIds,
    (System_Int32_array **)conditionIds,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.viewPoint = cSrc->fields.viewPoint;
  actionTypeIds = cSrc->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actionTypeIds,
    (System_Int32_array **)actionTypeIds,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.attackValue = cSrc->fields.attackValue;
  this->fields.moveValue = cSrc->fields.moveValue;
}


void __fastcall WarBoardActionTrendEntity___ctor_22963724(
        WarBoardActionTrendEntity_o *this,
        WarBoardFutureActionTrendEntity_o *futureEntity,
        WarBoardActionTrendEntity_o *root,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo_2969008 *v8; // x3
  __int64 id; // x8
  struct System_Int32_array *conditionIds; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Int32_array *actionTypeIds; // x1
  struct System_Nullable_long__o v24; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v25; // 0:x0.16

  if ( (byte_40F8C23 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, futureEntity);
    sub_B16FFC(&Method_System_Nullable_long___ctor__, v7);
    byte_40F8C23 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  if ( !futureEntity )
    goto LABEL_6;
  v25.fields.value = (int64_t)&v24;
  this->fields._IdForFutureTrend_k__BackingField = futureEntity->fields.id;
  id = futureEntity->fields.id;
  v24 = (struct System_Nullable_long__o)0LL;
  *(_QWORD *)&v25.fields.has_value = id + 1000000000000LL;
  System_Nullable_long____ctor(v25, Method_System_Nullable_long___ctor__, v8);
  this->fields._trendKey_k__BackingField = v24;
  conditionIds = futureEntity->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.conditionIds,
    (System_Int32_array **)conditionIds,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.attackValue = futureEntity->fields.attackValue;
  this->fields.moveValue = futureEntity->fields.moveValue;
  if ( !root )
LABEL_6:
    sub_B170D4();
  this->fields.viewPoint = root->fields.viewPoint;
  actionTypeIds = root->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actionTypeIds,
    (System_Int32_array **)actionTypeIds,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


int32_t __fastcall WarBoardActionTrendEntity__CreatePrimaryKey(
        WarBoardActionTrendEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall WarBoardActionTrendEntity__GetActionType(
        WarBoardActionTrendEntity_o *this,
        int32_t attackTypeId,
        const MethodInfo *method)
{
  return attackTypeId;
}


float __fastcall WarBoardActionTrendEntity__GetAttackValue(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.attackValue / 100.0;
}


float __fastcall WarBoardActionTrendEntity__GetMoveValue(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.moveValue / 100.0;
}


int32_t __fastcall WarBoardActionTrendEntity__GetViewPoint(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  return this->fields.viewPoint;
}


bool __fastcall WarBoardActionTrendEntity__get_HasFutureTrend(
        WarBoardActionTrendEntity_o *this,
        const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.futureTrendIds, 0LL);
}


int32_t __fastcall WarBoardActionTrendEntity__get_IdForFutureTrend(
        WarBoardActionTrendEntity_o *this,
        const MethodInfo *method)
{
  return this->fields._IdForFutureTrend_k__BackingField;
}


int64_t __fastcall WarBoardActionTrendEntity__get_TrendKey(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  const MethodInfo_2969008 *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t id; // x20
  struct System_Nullable_long__o v8; // [xsp+0h] [xbp-20h] BYREF
  System_Nullable_long__o v9; // 0:x0.16

  if ( (byte_40F8C24 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_long__GetValueOrDefault__, method);
    sub_B16FFC(&Method_System_Nullable_long___ctor__, v4);
    sub_B16FFC(&Method_System_Nullable_long__get_HasValue__, v5);
    byte_40F8C24 = 1;
  }
  v8 = (struct System_Nullable_long__o)0LL;
  if ( this->fields._trendKey_k__BackingField.fields.has_value )
    return this->fields._trendKey_k__BackingField.fields.value;
  id = this->fields.id;
  v9.fields.value = (int64_t)&v8;
  *(_QWORD *)&v9.fields.has_value = id;
  System_Nullable_long____ctor(v9, Method_System_Nullable_long___ctor__, v2);
  this->fields._trendKey_k__BackingField = v8;
  return id;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_long__o __fastcall WarBoardActionTrendEntity__get_trendKey(
        WarBoardActionTrendEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t value; // x0 OVERLAPPED
  System_Nullable_long__o result; // 0:x0.16

  v2 = *(_QWORD *)&this->fields._trendKey_k__BackingField.fields.has_value;
  value = this->fields._trendKey_k__BackingField.fields.value;
  *(_QWORD *)&result.fields.has_value = v2;
  result.fields.value = value;
  return result;
}


void __fastcall WarBoardActionTrendEntity__set_IdForFutureTrend(
        WarBoardActionTrendEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IdForFutureTrend_k__BackingField = value;
}


void __fastcall WarBoardActionTrendEntity__set_trendKey(
        WarBoardActionTrendEntity_o *this,
        System_Nullable_long__o value,
        const MethodInfo *method)
{
  this->fields._trendKey_k__BackingField = value;
}