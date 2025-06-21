void __fastcall BattleDropRandomBoundOverwriteSetting___ctor(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x20
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x20
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x20
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x20
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x20
  const MethodInfo *v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4B1ED7A & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDropRandomBound_RangeFloat_TypeInfo, method);
    sub_1BCAFF8(&BattleDropRandomBound_RangeInt_TypeInfo, v3);
    byte_4B1ED7A = 1;
  }
  LODWORD(this->fields.moveSpeedXRange) = 1036831949;
  v4 = sub_1BCB244(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v4, v5);
  if ( !v4 )
    goto LABEL_10;
  *(_QWORD *)(v4 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  this->fields.moveSpeedYRange = (struct BattleDropRandomBound_RangeFloat_o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.moveSpeedYRange, v4, v8, v9);
  v10 = sub_1BCB244(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v10, v11);
  if ( !v10 )
    goto LABEL_10;
  *(int32x2_t *)(v10 + 16) = vdup_n_s32(0x3F266666u);
  this->fields.delayStartTimeRange = (struct BattleDropRandomBound_RangeFloat_o *)v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.delayStartTimeRange, v10, v12, v13);
  v14 = sub_1BCB244(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v14, v15);
  if ( !v14 )
    goto LABEL_10;
  *(_QWORD *)(v14 + 16) = 0x3ECCCCCD3DCCCCCDLL;
  this->fields.boundCountRange = (struct BattleDropRandomBound_RangeInt_o *)v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.boundCountRange, v14, v16, v17);
  v18 = sub_1BCB244(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor((BattleDropRandomBound_RangeInt_o *)v18, v19);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 16) = 0x200000001LL;
  *(_QWORD *)&this->fields.boundSpeedYRate = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.boundSpeedYRate, v18, v20, v21);
  LODWORD(this->fields.initScatterPosBaseRectXRange) = 1056964608;
  v22 = sub_1BCB244(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v22, v23);
  if ( !v22
    || (*(_QWORD *)(v22 + 16) = 0x3DCCCCCDBDCCCCCDLL,
        this->fields.initScatterPosBaseRectYRange = (struct BattleDropRandomBound_RangeFloat_o *)v22,
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.initScatterPosBaseRectYRange, v22, v24, v25),
        v26 = sub_1BCB244(BattleDropRandomBound_RangeFloat_TypeInfo),
        BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v26, v27),
        !v26) )
  {
LABEL_10:
    sub_1BCB254(v6, v7);
  }
  *(_QWORD *)(v26 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  *(_QWORD *)&this->fields.initScatterPosBaseRectAngle = v26;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.initScatterPosBaseRectAngle, v26, v28, v29);
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