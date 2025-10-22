void BattleDropRandomBoundOverwriteSetting___ctor(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x20
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x20
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x20
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x20
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4C597BB & 1) == 0 )
  {
    sub_1C3E564(&BattleDropRandomBound_RangeFloat_TypeInfo);
    sub_1C3E564(&BattleDropRandomBound_RangeInt_TypeInfo);
    byte_4C597BB = 1;
  }
  this->fields.gravity = 0.1;
  v3 = sub_1C3E7B0(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v3, v4);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  this->fields.moveSpeedXRange = (struct BattleDropRandomBound_RangeFloat_o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.moveSpeedXRange, v3, v7, v8);
  v9 = sub_1C3E7B0(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v9, v10);
  if ( !v9 )
    goto LABEL_10;
  *(int32x2_t *)(v9 + 16) = vdup_n_s32(0x3F266666u);
  this->fields.moveSpeedYRange = (struct BattleDropRandomBound_RangeFloat_o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.moveSpeedYRange, v9, v11, v12);
  v13 = sub_1C3E7B0(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v13, v14);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = 0x3ECCCCCD3DCCCCCDLL;
  this->fields.delayStartTimeRange = (struct BattleDropRandomBound_RangeFloat_o *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.delayStartTimeRange, v13, v15, v16);
  v17 = sub_1C3E7B0(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor((BattleDropRandomBound_RangeInt_o *)v17, v18);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = 0x200000001LL;
  this->fields.boundCountRange = (struct BattleDropRandomBound_RangeInt_o *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.boundCountRange, v17, v19, v20);
  this->fields.boundSpeedYRate = 0.5;
  v21 = sub_1C3E7B0(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v21, v22);
  if ( !v21
    || (*(_QWORD *)(v21 + 16) = 0x3DCCCCCDBDCCCCCDLL,
        this->fields.initScatterPosBaseRectXRange = (struct BattleDropRandomBound_RangeFloat_o *)v21,
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.initScatterPosBaseRectXRange, v21, v23, v24),
        v25 = sub_1C3E7B0(BattleDropRandomBound_RangeFloat_TypeInfo),
        BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v25, v26),
        !v25) )
  {
LABEL_10:
    sub_1C3E7C0(v5, v6);
  }
  *(_QWORD *)(v25 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  this->fields.initScatterPosBaseRectYRange = (struct BattleDropRandomBound_RangeFloat_o *)v25;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.initScatterPosBaseRectYRange, v25, v27, v28);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


BattleDropRandomBound_RangeInt_o *BattleDropRandomBoundOverwriteSetting__get_BoundCountRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.boundCountRange;
}


float BattleDropRandomBoundOverwriteSetting__get_BoundSpeedYRate(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.boundSpeedYRate;
}


BattleDropRandomBound_RangeFloat_o *BattleDropRandomBoundOverwriteSetting__get_DelayStartTimeRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.delayStartTimeRange;
}


float BattleDropRandomBoundOverwriteSetting__get_Gravity(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.gravity;
}


float BattleDropRandomBoundOverwriteSetting__get_InitScatterPosBaseRectAngle(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.initScatterPosBaseRectAngle;
}


BattleDropRandomBound_RangeFloat_o *BattleDropRandomBoundOverwriteSetting__get_InitScatterPosBaseRectXRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.initScatterPosBaseRectXRange;
}


BattleDropRandomBound_RangeFloat_o *BattleDropRandomBoundOverwriteSetting__get_InitScatterPosBaseRectYRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.initScatterPosBaseRectYRange;
}


float BattleDropRandomBoundOverwriteSetting__get_InitialHeight(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.initialHeight;
}


BattleDropRandomBound_RangeFloat_o *BattleDropRandomBoundOverwriteSetting__get_MoveSpeedXRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.moveSpeedXRange;
}


BattleDropRandomBound_RangeFloat_o *BattleDropRandomBoundOverwriteSetting__get_MoveSpeedYRange(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.moveSpeedYRange;
}