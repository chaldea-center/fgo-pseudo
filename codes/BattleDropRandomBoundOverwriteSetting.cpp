void __fastcall BattleDropRandomBoundOverwriteSetting___ctor(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x20
  const MethodInfo *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x20
  const MethodInfo *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x20
  const MethodInfo *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x20
  const MethodInfo *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x20
  const MethodInfo *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4BFFE0D & 1) == 0 )
  {
    sub_1C2E12C(&BattleDropRandomBound_RangeFloat_TypeInfo, method);
    sub_1C2E12C(&BattleDropRandomBound_RangeInt_TypeInfo, v3);
    byte_4BFFE0D = 1;
  }
  LODWORD(this->fields.moveSpeedXRange) = 1036831949;
  v4 = sub_1C2E378(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v4, v5);
  if ( !v4 )
    goto LABEL_10;
  *(_QWORD *)(v4 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  this->fields.moveSpeedYRange = (struct BattleDropRandomBound_RangeFloat_o *)v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.moveSpeedYRange, v4, v8, v9, v10, v11, v12, v13);
  v14 = sub_1C2E378(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v14, v15);
  if ( !v14 )
    goto LABEL_10;
  *(int32x2_t *)(v14 + 16) = vdup_n_s32(0x3F266666u);
  this->fields.delayStartTimeRange = (struct BattleDropRandomBound_RangeFloat_o *)v14;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.delayStartTimeRange, v14, v16, v17, v18, v19, v20, v21);
  v22 = sub_1C2E378(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v22, v23);
  if ( !v22 )
    goto LABEL_10;
  *(_QWORD *)(v22 + 16) = 0x3ECCCCCD3DCCCCCDLL;
  this->fields.boundCountRange = (struct BattleDropRandomBound_RangeInt_o *)v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.boundCountRange, v22, v24, v25, v26, v27, v28, v29);
  v30 = sub_1C2E378(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor((BattleDropRandomBound_RangeInt_o *)v30, v31);
  if ( !v30 )
    goto LABEL_10;
  *(_QWORD *)(v30 + 16) = 0x200000001LL;
  *(_QWORD *)&this->fields.boundSpeedYRate = v30;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.boundSpeedYRate, v30, v32, v33, v34, v35, v36, v37);
  LODWORD(this->fields.initScatterPosBaseRectXRange) = 1056964608;
  v38 = sub_1C2E378(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v38, v39);
  if ( !v38
    || (*(_QWORD *)(v38 + 16) = 0x3DCCCCCDBDCCCCCDLL,
        this->fields.initScatterPosBaseRectYRange = (struct BattleDropRandomBound_RangeFloat_o *)v38,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&this->fields.initScatterPosBaseRectYRange,
          v38,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45),
        v46 = sub_1C2E378(BattleDropRandomBound_RangeFloat_TypeInfo),
        BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v46, v47),
        !v46) )
  {
LABEL_10:
    sub_1C2E388(v6, v7);
  }
  *(_QWORD *)(v46 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  *(_QWORD *)&this->fields.initScatterPosBaseRectAngle = v46;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.initScatterPosBaseRectAngle,
    v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


BattleDropRandomBound_RangeInt_o *__fastcall BattleDropRandomBoundOverwriteSetting__get_BoundCountRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return *(BattleDropRandomBound_RangeInt_o **)&this->fields.boundSpeedYRate;
}


float __fastcall BattleDropRandomBoundOverwriteSetting__get_BoundSpeedYRate(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return *(float *)&this->fields.initScatterPosBaseRectXRange;
}


BattleDropRandomBound_RangeFloat_o *__fastcall BattleDropRandomBoundOverwriteSetting__get_DelayStartTimeRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return (BattleDropRandomBound_RangeFloat_o *)this->fields.boundCountRange;
}


float __fastcall BattleDropRandomBoundOverwriteSetting__get_Gravity(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return *(float *)&this->fields.moveSpeedXRange;
}


float __fastcall BattleDropRandomBoundOverwriteSetting__get_InitScatterPosBaseRectAngle(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return *(float *)&this[1].klass;
}


BattleDropRandomBound_RangeFloat_o *__fastcall BattleDropRandomBoundOverwriteSetting__get_InitScatterPosBaseRectXRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.initScatterPosBaseRectYRange;
}


BattleDropRandomBound_RangeFloat_o *__fastcall BattleDropRandomBoundOverwriteSetting__get_InitScatterPosBaseRectYRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return *(BattleDropRandomBound_RangeFloat_o **)&this->fields.initScatterPosBaseRectAngle;
}


float __fastcall BattleDropRandomBoundOverwriteSetting__get_InitialHeight(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return *((float *)&this->fields.initScatterPosBaseRectXRange + 1);
}


BattleDropRandomBound_RangeFloat_o *__fastcall BattleDropRandomBoundOverwriteSetting__get_MoveSpeedXRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.moveSpeedYRange;
}


BattleDropRandomBound_RangeFloat_o *__fastcall BattleDropRandomBoundOverwriteSetting__get_MoveSpeedYRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.delayStartTimeRange;
}