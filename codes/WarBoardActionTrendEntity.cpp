void WarBoardActionTrendEntity___ctor(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Int32_array **p_actionTypeIds; // x19

  if ( (byte_4C38B02 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    sub_1C32C20(&int___TypeInfo);
    byte_4C38B02 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  this->fields.viewPoint = 0;
  v3 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v3 + 32) = 23;
  this->fields.conditionIds = (struct System_Int32_array *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.conditionIds, v3, v4, v5);
  this->fields.attackValue = 0;
  v3 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v3 )
LABEL_8:
    sub_1C32E7C(v3);
  if ( !*(_DWORD *)(v3 + 24) )
LABEL_9:
    sub_1C32E84(v3);
  *(_DWORD *)(v3 + 32) = 1;
  this->fields.actionTypeIds = (struct System_Int32_array *)v3;
  p_actionTypeIds = &this->fields.actionTypeIds;
  sub_1C32BC4((CGThumbnailListItem_o *)p_actionTypeIds, v3, v6, v7);
  *((_DWORD *)p_actionTypeIds + 3) = 0;
}


void WarBoardActionTrendEntity___ctor_43198004(
        WarBoardActionTrendEntity_o *this,
        WarBoardActionTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Int32_array *conditionIds; // x1
  struct System_Int32_array *actionTypeIds; // x1
  CGThumbnailListItem_o *p_actionTypeIds; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C38B03 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    byte_4C38B03 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C32E7C(v5);
  this->fields.id = cSrc->fields.id;
  conditionIds = cSrc->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.conditionIds, (int32_t)conditionIds, v6, v7);
  this->fields.viewPoint = cSrc->fields.viewPoint;
  actionTypeIds = cSrc->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  p_actionTypeIds = (CGThumbnailListItem_o *)&this->fields.actionTypeIds;
  sub_1C32BC4(p_actionTypeIds, (int32_t)actionTypeIds, v11, v12);
  p_actionTypeIds->monitor = *(void **)&cSrc->fields.attackValue;
}


void WarBoardActionTrendEntity___ctor_43198156(
        WarBoardActionTrendEntity_o *this,
        WarBoardFutureActionTrendEntity_o *futureEntity,
        WarBoardActionTrendEntity_o *root,
        const MethodInfo *method)
{
  __int64 v7; // x0
  const MethodInfo_38BE6C8 *v8; // x3
  __int64 id; // x8
  struct System_Int32_array *conditionIds; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Int32_array *actionTypeIds; // x1
  struct System_Nullable_long__o v16; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v17; // 0:x0.16

  if ( (byte_4C38B04 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    sub_1C32C20(&Method_System_Nullable_long___ctor__);
    byte_4C38B04 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  if ( !futureEntity )
    goto LABEL_6;
  id = futureEntity->fields.id;
  *(_QWORD *)&v17.fields.hasValue = &v16;
  this->fields._IdForFutureTrend_k__BackingField = id;
  v16 = (struct System_Nullable_long__o)0LL;
  v17.fields.value = id + 1000000000000LL;
  System_Nullable_long____ctor(v17, Method_System_Nullable_long___ctor__, v8);
  this->fields._trendKey_k__BackingField = v16;
  conditionIds = futureEntity->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.conditionIds, (int32_t)conditionIds, v11, v12);
  *(_QWORD *)&this->fields.attackValue = *(_QWORD *)&futureEntity->fields.attackValue;
  if ( !root )
LABEL_6:
    sub_1C32E7C(v7);
  this->fields.viewPoint = root->fields.viewPoint;
  actionTypeIds = root->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.actionTypeIds, (int32_t)actionTypeIds, v13, v14);
}


int32_t WarBoardActionTrendEntity__CreatePrimaryKey(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t WarBoardActionTrendEntity__GetActionType(
        WarBoardActionTrendEntity_o *this,
        int32_t attackTypeId,
        const MethodInfo *method)
{
  return attackTypeId;
}


float WarBoardActionTrendEntity__GetAttackValue(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.attackValue / 100.0;
}


float WarBoardActionTrendEntity__GetMoveValue(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.moveValue / 100.0;
}


int32_t WarBoardActionTrendEntity__GetViewPoint(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  return this->fields.viewPoint;
}


bool WarBoardActionTrendEntity__get_HasFutureTrend(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.futureTrendIds, 0);
}


int32_t WarBoardActionTrendEntity__get_IdForFutureTrend(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  return this->fields._IdForFutureTrend_k__BackingField;
}


int64_t WarBoardActionTrendEntity__get_TrendKey(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  const MethodInfo_38BE6C8 *v2; // x3
  int64_t id; // x20
  struct System_Nullable_long__o v6; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v7; // 0:x0.16

  if ( (byte_4C38B05 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_long___ctor__);
    sub_1C32C20(&Method_System_Nullable_long__get_HasValue__);
    byte_4C38B05 = 1;
  }
  v6 = (struct System_Nullable_long__o)0LL;
  if ( this->fields._trendKey_k__BackingField.fields.hasValue )
    return this->fields._trendKey_k__BackingField.fields.value;
  id = this->fields.id;
  *(_QWORD *)&v7.fields.hasValue = &v6;
  v7.fields.value = id;
  System_Nullable_long____ctor(v7, Method_System_Nullable_long___ctor__, v2);
  this->fields._trendKey_k__BackingField = v6;
  return id;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_long__o WarBoardActionTrendEntity__get_trendKey(
        WarBoardActionTrendEntity_o *this,
        const MethodInfo *method)
{
  int64_t value; // x1
  __int64 v3; // x0
  System_Nullable_long__o result; // 0:x0.16

  value = this->fields._trendKey_k__BackingField.fields.value;
  v3 = *(_QWORD *)&this->fields._trendKey_k__BackingField.fields.hasValue;
  result.fields.value = value;
  *(_QWORD *)&result.fields.hasValue = v3;
  return result;
}


void WarBoardActionTrendEntity__set_IdForFutureTrend(
        WarBoardActionTrendEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IdForFutureTrend_k__BackingField = value;
}


void WarBoardActionTrendEntity__set_trendKey(
        WarBoardActionTrendEntity_o *this,
        System_Nullable_long__o value,
        const MethodInfo *method)
{
  this->fields._trendKey_k__BackingField = value;
}