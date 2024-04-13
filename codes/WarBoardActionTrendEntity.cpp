void __fastcall WarBoardActionTrendEntity___ctor(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Int32_array *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Int32_array **p_actionTypeIds; // x19
  __int64 v23; // x0

  if ( (byte_42E6929 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    byte_42E6929 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  this->fields.viewPoint = 0;
  v8 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_8;
  if ( !v8->max_length )
    goto LABEL_9;
  v8->m_Items[1] = 23;
  this->fields.conditionIds = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.conditionIds,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.attackValue = 0;
  v8 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v8 )
LABEL_8:
    sub_B5D69C(v8, v9);
  if ( !v8->max_length )
  {
LABEL_9:
    v23 = sub_B5D6C8(v8);
    sub_B5D668(v23, 0LL);
  }
  v8->m_Items[1] = 1;
  this->fields.actionTypeIds = v8;
  p_actionTypeIds = &this->fields.actionTypeIds;
  sub_B5D560((BattleServantConfConponent_o *)p_actionTypeIds, (System_Int32_array **)v8, v16, v17, v18, v19, v20, v21);
  *((_DWORD *)p_actionTypeIds + 3) = 0;
}


void __fastcall WarBoardActionTrendEntity___ctor_21410572(
        WarBoardActionTrendEntity_o *this,
        WarBoardActionTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Int32_array *conditionIds; // x1
  struct System_Int32_array *actionTypeIds; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E692A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42E692A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
  this->fields.id = cSrc->fields.id;
  conditionIds = cSrc->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.conditionIds,
    (System_Int32_array **)conditionIds,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.viewPoint = cSrc->fields.viewPoint;
  actionTypeIds = cSrc->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actionTypeIds,
    (System_Int32_array **)actionTypeIds,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.attackValue = cSrc->fields.attackValue;
  this->fields.moveValue = cSrc->fields.moveValue;
}


void __fastcall WarBoardActionTrendEntity___ctor_21410736(
        WarBoardActionTrendEntity_o *this,
        WarBoardFutureActionTrendEntity_o *futureEntity,
        WarBoardActionTrendEntity_o *root,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo_234BB7C *v12; // x3
  __int64 id; // x8
  struct System_Int32_array *conditionIds; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Int32_array *actionTypeIds; // x1
  struct System_Nullable_long__o v28; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v29; // 0:x0.16

  if ( (byte_42E692B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)futureEntity, (_DWORD)root, method);
    sub_B5D5C4(&Method_System_Nullable_long___ctor__, v7, v8, v9);
    byte_42E692B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  if ( !futureEntity )
    goto LABEL_6;
  v29.fields.value = (int64_t)&v28;
  this->fields._IdForFutureTrend_k__BackingField = futureEntity->fields.id;
  id = futureEntity->fields.id;
  v28 = (struct System_Nullable_long__o)0LL;
  *(_QWORD *)&v29.fields.has_value = id + 1000000000000LL;
  System_Nullable_long____ctor(v29, Method_System_Nullable_long___ctor__, v12);
  this->fields._trendKey_k__BackingField = v28;
  conditionIds = futureEntity->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.conditionIds,
    (System_Int32_array **)conditionIds,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.attackValue = futureEntity->fields.attackValue;
  this->fields.moveValue = futureEntity->fields.moveValue;
  if ( !root )
LABEL_6:
    sub_B5D69C(v10, v11);
  this->fields.viewPoint = root->fields.viewPoint;
  actionTypeIds = root->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actionTypeIds,
    (System_Int32_array **)actionTypeIds,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  int v2; // w2
  const MethodInfo_234BB7C *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t id; // x20
  struct System_Nullable_long__o v13; // [xsp+0h] [xbp-20h] BYREF
  System_Nullable_long__o v14; // 0:x0.16

  if ( (byte_42E692C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_long__GetValueOrDefault__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Nullable_long___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Nullable_long__get_HasValue__, v8, v9, v10);
    byte_42E692C = 1;
  }
  v13 = (struct System_Nullable_long__o)0LL;
  if ( this->fields._trendKey_k__BackingField.fields.has_value )
    return this->fields._trendKey_k__BackingField.fields.value;
  id = this->fields.id;
  v14.fields.value = (int64_t)&v13;
  *(_QWORD *)&v14.fields.has_value = id;
  System_Nullable_long____ctor(v14, Method_System_Nullable_long___ctor__, v3);
  this->fields._trendKey_k__BackingField = v13;
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