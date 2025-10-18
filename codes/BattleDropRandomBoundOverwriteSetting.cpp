void BattleDropRandomBoundOverwriteSetting___ctor(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x20
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x20
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x20
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x20
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x20
  const MethodInfo *v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C459DE & 1) == 0 )
  {
    sub_1C37058(&BattleDropRandomBound_RangeFloat_TypeInfo);
    sub_1C37058(&BattleDropRandomBound_RangeInt_TypeInfo);
    byte_4C459DE = 1;
  }
  this->fields.gravity = 0.1;
  v3 = sub_1C372A4(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v3, v4);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  this->fields.moveSpeedXRange = (struct BattleDropRandomBound_RangeFloat_o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.moveSpeedXRange, v3, v6, v7);
  v8 = sub_1C372A4(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v8, v9);
  if ( !v8 )
    goto LABEL_10;
  *(int32x2_t *)(v8 + 16) = vdup_n_s32(0x3F266666u);
  this->fields.moveSpeedYRange = (struct BattleDropRandomBound_RangeFloat_o *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.moveSpeedYRange, v8, v10, v11);
  v12 = sub_1C372A4(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v12, v13);
  if ( !v12 )
    goto LABEL_10;
  *(_QWORD *)(v12 + 16) = 0x3ECCCCCD3DCCCCCDLL;
  this->fields.delayStartTimeRange = (struct BattleDropRandomBound_RangeFloat_o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.delayStartTimeRange, v12, v14, v15);
  v16 = sub_1C372A4(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor((BattleDropRandomBound_RangeInt_o *)v16, v17);
  if ( !v16 )
    goto LABEL_10;
  *(_QWORD *)(v16 + 16) = 0x200000001LL;
  this->fields.boundCountRange = (struct BattleDropRandomBound_RangeInt_o *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.boundCountRange, v16, v18, v19);
  this->fields.boundSpeedYRate = 0.5;
  v20 = sub_1C372A4(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v20, v21);
  if ( !v20
    || (*(_QWORD *)(v20 + 16) = 0x3DCCCCCDBDCCCCCDLL,
        this->fields.initScatterPosBaseRectXRange = (struct BattleDropRandomBound_RangeFloat_o *)v20,
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.initScatterPosBaseRectXRange, v20, v22, v23),
        v24 = sub_1C372A4(BattleDropRandomBound_RangeFloat_TypeInfo),
        BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v24, v25),
        !v24) )
  {
LABEL_10:
    sub_1C372B4(v5);
  }
  *(_QWORD *)(v24 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  this->fields.initScatterPosBaseRectYRange = (struct BattleDropRandomBound_RangeFloat_o *)v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.initScatterPosBaseRectYRange, v24, v26, v27);
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