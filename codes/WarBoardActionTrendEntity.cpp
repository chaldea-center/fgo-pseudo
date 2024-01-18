void __fastcall WarBoardActionTrendEntity___ctor(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Int32_array **p_actionTypeIds; // x19
  __int64 v19; // x0

  if ( (byte_41867B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    sub_B2C35C(&int___TypeInfo, v3);
    byte_41867B3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  this->fields.viewPoint = 0;
  v4 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_8;
  if ( !v4->max_length )
    goto LABEL_9;
  v4->m_Items[1] = 23;
  this->fields.conditionIds = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.conditionIds,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.attackValue = 0;
  v4 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !v4 )
LABEL_8:
    sub_B2C434(v4, v5);
  if ( !v4->max_length )
  {
LABEL_9:
    v19 = sub_B2C460(v4);
    sub_B2C400(v19, 0LL);
  }
  v4->m_Items[1] = 1;
  this->fields.actionTypeIds = v4;
  p_actionTypeIds = &this->fields.actionTypeIds;
  sub_B2C2F8((BattleServantConfConponent_o *)p_actionTypeIds, (System_Int32_array **)v4, v12, v13, v14, v15, v16, v17);
  *((_DWORD *)p_actionTypeIds + 3) = 0;
}


void __fastcall WarBoardActionTrendEntity___ctor_22732496(
        WarBoardActionTrendEntity_o *this,
        WarBoardActionTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Int32_array *conditionIds; // x1
  struct System_Int32_array *actionTypeIds; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_41867B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_41867B4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionIds = cSrc->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.conditionIds,
    (System_Int32_array **)conditionIds,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.viewPoint = cSrc->fields.viewPoint;
  actionTypeIds = cSrc->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.actionTypeIds,
    (System_Int32_array **)actionTypeIds,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.attackValue = cSrc->fields.attackValue;
  this->fields.moveValue = cSrc->fields.moveValue;
}


void __fastcall WarBoardActionTrendEntity___ctor_22732660(
        WarBoardActionTrendEntity_o *this,
        WarBoardFutureActionTrendEntity_o *futureEntity,
        WarBoardActionTrendEntity_o *root,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo_21524A8 *v10; // x3
  __int64 id; // x8
  struct System_Int32_array *conditionIds; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Int32_array *actionTypeIds; // x1
  struct System_Nullable_long__o v26; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v27; // 0:x0.16

  if ( (byte_41867B5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, futureEntity);
    sub_B2C35C(&Method_System_Nullable_long___ctor__, v7);
    byte_41867B5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  if ( !futureEntity )
    goto LABEL_6;
  v27.fields.value = (int64_t)&v26;
  this->fields._IdForFutureTrend_k__BackingField = futureEntity->fields.id;
  id = futureEntity->fields.id;
  v26 = (struct System_Nullable_long__o)0LL;
  *(_QWORD *)&v27.fields.has_value = id + 1000000000000LL;
  System_Nullable_long____ctor(v27, Method_System_Nullable_long___ctor__, v10);
  this->fields._trendKey_k__BackingField = v26;
  conditionIds = futureEntity->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.conditionIds,
    (System_Int32_array **)conditionIds,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.attackValue = futureEntity->fields.attackValue;
  this->fields.moveValue = futureEntity->fields.moveValue;
  if ( !root )
LABEL_6:
    sub_B2C434(v8, v9);
  this->fields.viewPoint = root->fields.viewPoint;
  actionTypeIds = root->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.actionTypeIds,
    (System_Int32_array **)actionTypeIds,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  const MethodInfo_21524A8 *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t id; // x20
  struct System_Nullable_long__o v8; // [xsp+0h] [xbp-20h] BYREF
  System_Nullable_long__o v9; // 0:x0.16

  if ( (byte_41867B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_long__GetValueOrDefault__, method);
    sub_B2C35C(&Method_System_Nullable_long___ctor__, v4);
    sub_B2C35C(&Method_System_Nullable_long__get_HasValue__, v5);
    byte_41867B6 = 1;
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