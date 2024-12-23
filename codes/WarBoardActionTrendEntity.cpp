void __fastcall WarBoardActionTrendEntity___ctor(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Int32_array *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Int32_array **p_actionTypeIds; // x19

  if ( (byte_4B67B79 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_int___ctor__, method);
    sub_1BE4ACC(&int___TypeInfo, v3);
    byte_4B67B79 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31FD5C4 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  this->fields.viewPoint = 0;
  v4 = (struct System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_8;
  v12 = v4;
  if ( !v4->max_length )
    goto LABEL_9;
  v4->m_Items[1] = 23;
  this->fields.conditionIds = v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.conditionIds, (int64_t)v4, v6, v7, v8, v9, v10, v11);
  this->fields.attackValue = 0;
  v4 = (struct System_Int32_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !v4 )
LABEL_8:
    sub_1BE4D28(v4, v5);
  v12 = v4;
  if ( !v4->max_length )
LABEL_9:
    sub_1BE4D30(v4, v12);
  v4->m_Items[1] = 1;
  this->fields.actionTypeIds = v4;
  p_actionTypeIds = &this->fields.actionTypeIds;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_actionTypeIds, (int64_t)v4, v13, v14, v15, v16, v17, v18);
  *((_DWORD *)p_actionTypeIds + 3) = 0;
}


void __fastcall WarBoardActionTrendEntity___ctor_41290028(
        WarBoardActionTrendEntity_o *this,
        WarBoardActionTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Int32_array *conditionIds; // x1
  struct System_Int32_array *actionTypeIds; // x1
  PartyOrganizationUtility_o *p_actionTypeIds; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B67B7A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4B67B7A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31FD5C4 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1BE4D28(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionIds = cSrc->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.conditionIds,
    (int64_t)conditionIds,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.viewPoint = cSrc->fields.viewPoint;
  actionTypeIds = cSrc->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  p_actionTypeIds = (PartyOrganizationUtility_o *)&this->fields.actionTypeIds;
  sub_1BE4A70(p_actionTypeIds, (int64_t)actionTypeIds, v16, v17, v18, v19, v20, v21);
  p_actionTypeIds->monitor = *(void **)&cSrc->fields.attackValue;
}


void __fastcall WarBoardActionTrendEntity___ctor_41290180(
        WarBoardActionTrendEntity_o *this,
        WarBoardFutureActionTrendEntity_o *futureEntity,
        WarBoardActionTrendEntity_o *root,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo_3709998 *v10; // x3
  __int64 id; // x8
  struct System_Int32_array *conditionIds; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Int32_array *actionTypeIds; // x1
  struct System_Nullable_long__o v26; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v27; // 0:x0.16

  if ( (byte_4B67B7B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_int___ctor__, futureEntity);
    sub_1BE4ACC(&Method_System_Nullable_long___ctor__, v7);
    byte_4B67B7B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31FD5C4 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  if ( !futureEntity )
    goto LABEL_6;
  id = futureEntity->fields.id;
  *(_QWORD *)&v27.fields.hasValue = &v26;
  this->fields._IdForFutureTrend_k__BackingField = id;
  v26 = (struct System_Nullable_long__o)0LL;
  v27.fields.value = id + 1000000000000LL;
  System_Nullable_long____ctor(v27, Method_System_Nullable_long___ctor__, v10);
  this->fields._trendKey_k__BackingField = v26;
  conditionIds = futureEntity->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.conditionIds,
    (int64_t)conditionIds,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *(_QWORD *)&this->fields.attackValue = *(_QWORD *)&futureEntity->fields.attackValue;
  if ( !root )
LABEL_6:
    sub_1BE4D28(v8, v9);
  this->fields.viewPoint = root->fields.viewPoint;
  actionTypeIds = root->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.actionTypeIds,
    (int64_t)actionTypeIds,
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
  const MethodInfo_3709998 *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t id; // x20
  struct System_Nullable_long__o v8; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v9; // 0:x0.16

  if ( (byte_4B67B7C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Nullable_long__GetValueOrDefault__, method);
    sub_1BE4ACC(&Method_System_Nullable_long___ctor__, v4);
    sub_1BE4ACC(&Method_System_Nullable_long__get_HasValue__, v5);
    byte_4B67B7C = 1;
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