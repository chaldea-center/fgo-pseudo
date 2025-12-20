void WarBoardActionTrendEntity___ctor(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Int32_array **p_actionTypeIds; // x19

  if ( (byte_4D2D9F0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    sub_1C94098(&int___TypeInfo);
    byte_4D2D9F0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  this->fields.viewPoint = 0;
  v3 = sub_1C94140(int___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_9;
  *(_DWORD *)(v3 + 32) = 23;
  this->fields.conditionIds = (struct System_Int32_array *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.conditionIds, v3, v5, v6, v7, v8, v9, v10);
  this->fields.attackValue = 0;
  v3 = sub_1C94140(int___TypeInfo, 1);
  if ( !v3 )
LABEL_8:
    sub_1C942F0(v3, v4);
  if ( !*(_DWORD *)(v3 + 24) )
LABEL_9:
    sub_1C942F8(v3);
  *(_DWORD *)(v3 + 32) = 1;
  this->fields.actionTypeIds = (struct System_Int32_array *)v3;
  p_actionTypeIds = &this->fields.actionTypeIds;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_actionTypeIds, v3, v11, v12, v13, v14, v15, v16);
  *((_DWORD *)p_actionTypeIds + 3) = 0;
}


void WarBoardActionTrendEntity___ctor_44086248(
        WarBoardActionTrendEntity_o *this,
        WarBoardActionTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Int32_array *conditionIds; // x1
  struct System_Int32_array *actionTypeIds; // x1
  GrandQuestFolderBoardItem_o *p_actionTypeIds; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D2D9F1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2D9F1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C942F0(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionIds = cSrc->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.conditionIds,
    (int32_t)conditionIds,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.viewPoint = cSrc->fields.viewPoint;
  actionTypeIds = cSrc->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  p_actionTypeIds = (GrandQuestFolderBoardItem_o *)&this->fields.actionTypeIds;
  sub_1C9403C(p_actionTypeIds, (int32_t)actionTypeIds, v16, v17, v18, v19, v20, v21);
  p_actionTypeIds->monitor = *(void **)&cSrc->fields.attackValue;
}


void WarBoardActionTrendEntity___ctor_44086400(
        WarBoardActionTrendEntity_o *this,
        WarBoardFutureActionTrendEntity_o *futureEntity,
        WarBoardActionTrendEntity_o *root,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo_3993B78 *v9; // x3
  __int64 id; // x8
  struct System_Int32_array *conditionIds; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Int32_array *actionTypeIds; // x1
  struct System_Nullable_long__o v25; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v26; // 0:x0.16

  if ( (byte_4D2D9F2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    sub_1C94098(&Method_System_Nullable_long___ctor__);
    byte_4D2D9F2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  if ( !futureEntity )
    goto LABEL_6;
  id = futureEntity->fields.id;
  *(_QWORD *)&v26.fields.hasValue = &v25;
  this->fields._IdForFutureTrend_k__BackingField = id;
  v25 = (struct System_Nullable_long__o)0LL;
  v26.fields.value = id + 1000000000000LL;
  System_Nullable_long____ctor(v26, Method_System_Nullable_long___ctor__, v9);
  this->fields._trendKey_k__BackingField = v25;
  conditionIds = futureEntity->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.conditionIds,
    (int32_t)conditionIds,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)&this->fields.attackValue = *(_QWORD *)&futureEntity->fields.attackValue;
  if ( !root )
LABEL_6:
    sub_1C942F0(v7, v8);
  this->fields.viewPoint = root->fields.viewPoint;
  actionTypeIds = root->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.actionTypeIds,
    (int32_t)actionTypeIds,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  const MethodInfo_3993B78 *v2; // x3
  int64_t id; // x20
  struct System_Nullable_long__o v6; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v7; // 0:x0.16

  if ( (byte_4D2D9F3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_long___ctor__);
    sub_1C94098(&Method_System_Nullable_long__get_HasValue__);
    byte_4D2D9F3 = 1;
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