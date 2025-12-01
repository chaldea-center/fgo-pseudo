void BattleDropRandomBoundOverwriteSetting___ctor(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x20
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x20
  const MethodInfo *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  __int64 v37; // x20
  const MethodInfo *v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x20
  const MethodInfo *v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  Il2CppObject *v53; // x20
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7

  if ( (byte_4CC9E96 & 1) == 0 )
  {
    sub_1C713B0(&BattleDropRandomBound_BattleDropSimpleFallBound_TypeInfo);
    sub_1C713B0(&BattleDropRandomBound_RangeFloat_TypeInfo);
    sub_1C713B0(&BattleDropRandomBound_RangeInt_TypeInfo);
    byte_4CC9E96 = 1;
  }
  this->fields.gravity = 0.1;
  v3 = sub_1C715FC(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v3, v4);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  this->fields.moveSpeedXRange = (struct BattleDropRandomBound_RangeFloat_o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.moveSpeedXRange, v3, v7, v8, v9, v10, v11, v12);
  v13 = sub_1C715FC(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v13, v14);
  if ( !v13 )
    goto LABEL_10;
  *(int32x2_t *)(v13 + 16) = vdup_n_s32(0x3F266666u);
  this->fields.moveSpeedYRange = (struct BattleDropRandomBound_RangeFloat_o *)v13;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.moveSpeedYRange, v13, v15, v16, v17, v18, v19, v20);
  v21 = sub_1C715FC(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v21, v22);
  if ( !v21 )
    goto LABEL_10;
  *(_QWORD *)(v21 + 16) = 0x3ECCCCCD3DCCCCCDLL;
  this->fields.delayStartTimeRange = (struct BattleDropRandomBound_RangeFloat_o *)v21;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.delayStartTimeRange, v21, v23, v24, v25, v26, v27, v28);
  v29 = sub_1C715FC(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor((BattleDropRandomBound_RangeInt_o *)v29, v30);
  if ( !v29 )
    goto LABEL_10;
  *(_QWORD *)(v29 + 16) = 0x200000001LL;
  this->fields.boundCountRange = (struct BattleDropRandomBound_RangeInt_o *)v29;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.boundCountRange, v29, v31, v32, v33, v34, v35, v36);
  this->fields.boundSpeedYRate = 0.5;
  v37 = sub_1C715FC(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v37, v38);
  if ( !v37
    || (*(_QWORD *)(v37 + 16) = 0x3DCCCCCDBDCCCCCDLL,
        this->fields.initScatterPosBaseRectXRange = (struct BattleDropRandomBound_RangeFloat_o *)v37,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.initScatterPosBaseRectXRange,
          v37,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44),
        v45 = sub_1C715FC(BattleDropRandomBound_RangeFloat_TypeInfo),
        BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v45, v46),
        !v45) )
  {
LABEL_10:
    sub_1C71608(v5, v6);
  }
  *(_QWORD *)(v45 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  this->fields.initScatterPosBaseRectYRange = (struct BattleDropRandomBound_RangeFloat_o *)v45;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.initScatterPosBaseRectYRange,
    v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (Il2CppObject *)sub_1C715FC(BattleDropRandomBound_BattleDropSimpleFallBound_TypeInfo);
  System_Object___ctor(v53, 0);
  this->fields.fallBoundData = (struct BattleDropRandomBound_BattleDropSimpleFallBound_o *)v53;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fallBoundData, (int32_t)v53, v54, v55, v56, v57, v58, v59);
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


BattleDropRandomBound_BattleDropSimpleFallBound_o *BattleDropRandomBoundOverwriteSetting__get_FallBoundData(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.fallBoundData;
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


bool BattleDropRandomBoundOverwriteSetting__get_IsSimpleFallBound(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.simpleFallBound;
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