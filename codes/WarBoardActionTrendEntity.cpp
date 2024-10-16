void __fastcall WarBoardActionTrendEntity___ctor(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Int32_array *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Int32_array **p_actionTypeIds; // x19

  if ( (byte_4AB6CC3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    sub_1BAB41C(&int___TypeInfo, v3);
    byte_4AB6CC3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  this->fields.viewPoint = 0;
  v4 = (struct System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_8;
  v8 = v4;
  if ( !v4->max_length )
    goto LABEL_9;
  v4->m_Items[1] = 23;
  this->fields.conditionIds = v4;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.conditionIds, (int32_t)v4, v6, v7);
  this->fields.attackValue = 0;
  v4 = (struct System_Int32_array *)sub_1BAB4C4(int___TypeInfo, 1LL);
  if ( !v4 )
LABEL_8:
    sub_1BAB678(v4, v5);
  v8 = v4;
  if ( !v4->max_length )
LABEL_9:
    sub_1BAB680(v4, v8);
  v4->m_Items[1] = 1;
  this->fields.actionTypeIds = v4;
  p_actionTypeIds = &this->fields.actionTypeIds;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_actionTypeIds, (int32_t)v4, v9, v10);
  *((_DWORD *)p_actionTypeIds + 3) = 0;
}


void __fastcall WarBoardActionTrendEntity___ctor_40714296(
        WarBoardActionTrendEntity_o *this,
        WarBoardActionTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *conditionIds; // x1
  struct System_Int32_array *actionTypeIds; // x1
  ServantStatusBattleListViewItem_o *p_actionTypeIds; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4AB6CC4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4AB6CC4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1BAB678(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionIds = cSrc->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.conditionIds, (int32_t)conditionIds, v7, v8);
  this->fields.viewPoint = cSrc->fields.viewPoint;
  actionTypeIds = cSrc->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  p_actionTypeIds = (ServantStatusBattleListViewItem_o *)&this->fields.actionTypeIds;
  sub_1BAB3C0(p_actionTypeIds, (int32_t)actionTypeIds, v12, v13);
  p_actionTypeIds->monitor = *(void **)&cSrc->fields.attackValue;
}


void __fastcall WarBoardActionTrendEntity___ctor_40714448(
        WarBoardActionTrendEntity_o *this,
        WarBoardFutureActionTrendEntity_o *futureEntity,
        WarBoardActionTrendEntity_o *root,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo_366AD60 *v10; // x3
  __int64 id; // x8
  struct System_Int32_array *conditionIds; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Int32_array *actionTypeIds; // x1
  struct System_Nullable_long__o v18; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v19; // 0:x0.16

  if ( (byte_4AB6CC5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, futureEntity);
    sub_1BAB41C(&Method_System_Nullable_long___ctor__, v7);
    byte_4AB6CC5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  if ( !futureEntity )
    goto LABEL_6;
  id = futureEntity->fields.id;
  *(_QWORD *)&v19.fields.hasValue = &v18;
  this->fields._IdForFutureTrend_k__BackingField = id;
  v18 = (struct System_Nullable_long__o)0LL;
  v19.fields.value = id + 1000000000000LL;
  System_Nullable_long____ctor(v19, Method_System_Nullable_long___ctor__, v10);
  this->fields._trendKey_k__BackingField = v18;
  conditionIds = futureEntity->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.conditionIds, (int32_t)conditionIds, v13, v14);
  *(_QWORD *)&this->fields.attackValue = *(_QWORD *)&futureEntity->fields.attackValue;
  if ( !root )
LABEL_6:
    sub_1BAB678(v8, v9);
  this->fields.viewPoint = root->fields.viewPoint;
  actionTypeIds = root->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.actionTypeIds, (int32_t)actionTypeIds, v15, v16);
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
  const MethodInfo_366AD60 *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t id; // x20
  struct System_Nullable_long__o v8; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v9; // 0:x0.16

  if ( (byte_4AB6CC6 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Nullable_long__GetValueOrDefault__, method);
    sub_1BAB41C(&Method_System_Nullable_long___ctor__, v4);
    sub_1BAB41C(&Method_System_Nullable_long__get_HasValue__, v5);
    byte_4AB6CC6 = 1;
  }
  v8 = (struct System_Nullable_long__o)0LL;
  if ( this->fields._trendKey_k__BackingField.fields.hasValue )
    return this->fields._trendKey_k__BackingField.fields.value;
  id = this->fields.id;
  *(_QWORD *)&v9.fields.hasValue = &v8;
  v9.fields.value = id;
  System_Nullable_long____ctor(v9, Method_System_Nullable_long___ctor__, v2);
  this->fields._trendKey_k__BackingField = v8;
  return id;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_long__o __fastcall WarBoardActionTrendEntity__get_trendKey(
        WarBoardActionTrendEntity_o *this,
        const MethodInfo *method)
{
  int64_t value; // x1
  __int64 v3; // x0 OVERLAPPED
  System_Nullable_long__o result; // 0:x0.16

  value = this->fields._trendKey_k__BackingField.fields.value;
  v3 = *(_QWORD *)&this->fields._trendKey_k__BackingField.fields.hasValue;
  result.fields.value = value;
  *(_QWORD *)&result.fields.hasValue = v3;
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