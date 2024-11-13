void __fastcall WarBoardActionTrendEntity___ctor(WarBoardActionTrendEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Int32_array *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Int32_array **p_actionTypeIds; // x19

  if ( (byte_4B17179 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B17179 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  this->fields.viewPoint = 0;
  v6 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_8;
  v14 = v6;
  if ( !v6->max_length )
    goto LABEL_9;
  v6->m_Items[1] = 23;
  this->fields.conditionIds = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.conditionIds, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  this->fields.attackValue = 0;
  v6 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v6 )
LABEL_8:
    sub_1BCAA3C(v6, v7);
  v14 = v6;
  if ( !v6->max_length )
LABEL_9:
    sub_1BCAA44(v6, v14);
  v6->m_Items[1] = 1;
  this->fields.actionTypeIds = v6;
  p_actionTypeIds = &this->fields.actionTypeIds;
  sub_1BCA784((PartyOrganizationUtility_o *)p_actionTypeIds, (int64_t)v6, v15, v16, v17, v18, v19, v20);
  *((_DWORD *)p_actionTypeIds + 3) = 0;
}


void __fastcall WarBoardActionTrendEntity___ctor_41053948(
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

  if ( (byte_4B1717A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, cSrc, method);
    byte_4B1717A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1BCAA3C(v5, v6);
  this->fields.id = cSrc->fields.id;
  conditionIds = cSrc->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_1BCA784(
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
  sub_1BCA784(p_actionTypeIds, (int64_t)actionTypeIds, v16, v17, v18, v19, v20, v21);
  p_actionTypeIds->monitor = *(void **)&cSrc->fields.attackValue;
}


void __fastcall WarBoardActionTrendEntity___ctor_41054100(
        WarBoardActionTrendEntity_o *this,
        WarBoardFutureActionTrendEntity_o *futureEntity,
        WarBoardActionTrendEntity_o *root,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo_36BF22C *v11; // x3
  __int64 id; // x8
  struct System_Int32_array *conditionIds; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Int32_array *actionTypeIds; // x1
  struct System_Nullable_long__o v27; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_long__o v28; // 0:x0.16

  if ( (byte_4B1717B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, futureEntity, root);
    sub_1BCA7E0(&Method_System_Nullable_long___ctor__, v7, v8);
    byte_4B1717B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  this->fields.id = 0;
  if ( !futureEntity )
    goto LABEL_6;
  id = futureEntity->fields.id;
  *(_QWORD *)&v28.fields.hasValue = &v27;
  this->fields._IdForFutureTrend_k__BackingField = id;
  v27 = (struct System_Nullable_long__o)0LL;
  v28.fields.value = id + 1000000000000LL;
  System_Nullable_long____ctor(v28, Method_System_Nullable_long___ctor__, v11);
  this->fields._trendKey_k__BackingField = v27;
  conditionIds = futureEntity->fields.conditionIds;
  this->fields.conditionIds = conditionIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.conditionIds,
    (int64_t)conditionIds,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_QWORD *)&this->fields.attackValue = *(_QWORD *)&futureEntity->fields.attackValue;
  if ( !root )
LABEL_6:
    sub_1BCAA3C(v9, v10);
  this->fields.viewPoint = root->fields.viewPoint;
  actionTypeIds = root->fields.actionTypeIds;
  this->fields.actionTypeIds = actionTypeIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.actionTypeIds,
    (int64_t)actionTypeIds,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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
  __int64 v2; // x2
  const MethodInfo_36BF22C *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t id; // x20
  struct System_Nullable_long__o v11; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v12; // 0:x0.16

  if ( (byte_4B1717C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_long__GetValueOrDefault__, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_long___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Nullable_long__get_HasValue__, v7, v8);
    byte_4B1717C = 1;
  }
  v11 = (struct System_Nullable_long__o)0LL;
  if ( this->fields._trendKey_k__BackingField.fields.hasValue )
    return this->fields._trendKey_k__BackingField.fields.value;
  id = this->fields.id;
  *(_QWORD *)&v12.fields.hasValue = &v11;
  v12.fields.value = id;
  System_Nullable_long____ctor(v12, Method_System_Nullable_long___ctor__, v3);
  this->fields._trendKey_k__BackingField = v11;
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