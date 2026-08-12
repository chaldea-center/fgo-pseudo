void WarBoardActionTrendEntity___ctor(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppClass *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Int32_array **p_actionTypeIds; // x19

  if ( (byte_5971A0B & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    sub_2213A60(&int___TypeInfo);
    byte_5971A0B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
  v3 = int___TypeInfo;
  this->fields.id = 0;
  this->fields.viewPoint = 0;
  v4 = sub_2213B20(v3, 1);
  if ( !v4 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_9;
  this->fields.conditionIds = (struct System_Int32_array *)v4;
  *(_DWORD *)(v4 + 32) = 23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.conditionIds, v4, v6, v7, v8, v9, v10, v11);
  v12 = int___TypeInfo;
  this->fields.attackValue = 0;
  v4 = sub_2213B20(v12, 1);
  if ( !v4 )
LABEL_8:
    sub_2213CDC(v4, v5);
  if ( !*(_DWORD *)(v4 + 24) )
LABEL_9:
    sub_2213CE4(v4);
  this->fields.actionTypeIds = (struct System_Int32_array *)v4;
  p_actionTypeIds = &this->fields.actionTypeIds;
  *(_DWORD *)(v4 + 32) = 1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_actionTypeIds, v4, v13, v14, v15, v16, v17, v18);
  *((_DWORD *)p_actionTypeIds + 3) = 0;
}


void WarBoardActionTrendEntity___ctor_50316896(
        WarBoardActionTrendEntity_o *this,
        WarBoardActionTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Int32_array *conditionIds; // x1
  struct System_Int32_array *actionTypeIds; // x1
  int32_t viewPoint; // w8
  MissionNaviTransitionBoardItem_o *p_actionTypeIds; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5971A0C & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5971A0C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_2213CDC(v5, v6);
  conditionIds = cSrc->fields.conditionIds;
  this->fields.id = cSrc->fields.id;
  this->fields.conditionIds = conditionIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.conditionIds,
    (int32_t)conditionIds,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  actionTypeIds = cSrc->fields.actionTypeIds;
  viewPoint = cSrc->fields.viewPoint;
  this->fields.actionTypeIds = actionTypeIds;
  p_actionTypeIds = (MissionNaviTransitionBoardItem_o *)&this->fields.actionTypeIds;
  p_actionTypeIds[-1].fields._BoardType_k__BackingField = viewPoint;
  sub_2213A04(p_actionTypeIds, (int32_t)actionTypeIds, v17, v18, v19, v20, v21, v22);
  p_actionTypeIds->monitor = *(void **)&cSrc->fields.attackValue;
}


void WarBoardActionTrendEntity___ctor_50317048(
        WarBoardActionTrendEntity_o *this,
        WarBoardFutureActionTrendEntity_o *futureEntity,
        WarBoardActionTrendEntity_o *root,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo_45E4A50 *v9; // x3
  __int64 id; // x8
  struct System_Int32_array *conditionIds; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Int32_array *actionTypeIds; // x1
  int32_t viewPoint; // w8
  struct System_Nullable_long__o v26; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v27; // 0:x0.16

  if ( (byte_5971A0D & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    byte_5971A0D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  if ( !futureEntity )
    goto LABEL_6;
  id = futureEntity->fields.id;
  *(_QWORD *)&v27.fields.hasValue = &v26;
  v26 = (struct System_Nullable_long__o)0LL;
  this->fields._IdForFutureTrend_k__BackingField = id;
  v27.fields.value = id + 1000000000000LL;
  System_Nullable_long____ctor(v27, Method_System_Nullable_long___ctor__, v9);
  this->fields._trendKey_k__BackingField = v26;
  conditionIds = futureEntity->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.conditionIds,
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
    sub_2213CDC(v7, v8);
  actionTypeIds = root->fields.actionTypeIds;
  viewPoint = root->fields.viewPoint;
  this->fields.actionTypeIds = actionTypeIds;
  this->fields.viewPoint = viewPoint;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actionTypeIds,
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
  const MethodInfo_45E4A50 *v2; // x3
  _BOOL4 hasValue; // w8
  int64_t id; // x20
  struct System_Nullable_long__o v7; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v8; // 0:x0.16

  if ( (byte_5971A0E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    sub_2213A60(&Method_System_Nullable_long__get_HasValue__);
    byte_5971A0E = 1;
  }
  hasValue = this->fields._trendKey_k__BackingField.fields.hasValue;
  v7 = (struct System_Nullable_long__o)0LL;
  if ( hasValue )
    return this->fields._trendKey_k__BackingField.fields.value;
  *(_QWORD *)&v8.fields.hasValue = &v7;
  id = this->fields.id;
  v8.fields.value = id;
  System_Nullable_long____ctor(v8, Method_System_Nullable_long___ctor__, v2);
  this->fields._trendKey_k__BackingField = v7;
  return id;
}


System_Nullable_long__o WarBoardActionTrendEntity__get_trendKey(
        WarBoardActionTrendEntity_o *this,
        const MethodInfo *method)
{
  System_Nullable_long__o result; // 0:x0.16

  result.fields.value = this->fields._trendKey_k__BackingField.fields.value;
  *(_QWORD *)&result.fields.hasValue = *(_QWORD *)&this->fields._trendKey_k__BackingField.fields.hasValue;
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