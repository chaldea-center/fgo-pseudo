void BattleDropRandomBoundOverwriteSetting___ctor(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  BattleDropRandomBound_RangeFloat_c *v3; // x0
  __int64 v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x20
  const MethodInfo *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x20
  const MethodInfo *v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x20
  const MethodInfo *v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  BattleDropRandomBound_RangeFloat_c *v38; // x0
  __int64 v39; // x20
  const MethodInfo *v40; // x1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x20
  const MethodInfo *v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  BattleDropRandomBound_BattleDropSimpleFallBound_c *v55; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  Il2CppObject *v58; // x20
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7

  if ( (byte_593B229 & 1) == 0 )
  {
    sub_21FFC50(&BattleDropRandomBound_BattleDropSimpleFallBound_TypeInfo);
    sub_21FFC50(&BattleDropRandomBound_RangeFloat_TypeInfo);
    sub_21FFC50(&BattleDropRandomBound_RangeInt_TypeInfo);
    byte_593B229 = 1;
  }
  v3 = BattleDropRandomBound_RangeFloat_TypeInfo;
  this->fields.gravity = 0.1;
  v4 = sub_21FFEBC(v3);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v4, v5);
  if ( !v4 )
    goto LABEL_12;
  this->fields.moveSpeedXRange = (struct BattleDropRandomBound_RangeFloat_o *)v4;
  *(_QWORD *)(v4 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.moveSpeedXRange, v4, v8, v9, v10, v11, v12, v13);
  v14 = sub_21FFEBC(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v14, v15);
  if ( !v14 )
    goto LABEL_12;
  this->fields.moveSpeedYRange = (struct BattleDropRandomBound_RangeFloat_o *)v14;
  *(int32x2_t *)(v14 + 16) = vdup_n_s32(0x3F266666u);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.moveSpeedYRange, v14, v16, v17, v18, v19, v20, v21);
  v22 = sub_21FFEBC(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v22, v23);
  if ( !v22 )
    goto LABEL_12;
  this->fields.delayStartTimeRange = (struct BattleDropRandomBound_RangeFloat_o *)v22;
  *(_QWORD *)(v22 + 16) = 0x3ECCCCCD3DCCCCCDLL;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.delayStartTimeRange, v22, v24, v25, v26, v27, v28, v29);
  v30 = sub_21FFEBC(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor((BattleDropRandomBound_RangeInt_o *)v30, v31);
  if ( !v30 )
    goto LABEL_12;
  this->fields.boundCountRange = (struct BattleDropRandomBound_RangeInt_o *)v30;
  *(_QWORD *)(v30 + 16) = 0x200000001LL;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.boundCountRange, v30, v32, v33, v34, v35, v36, v37);
  v38 = BattleDropRandomBound_RangeFloat_TypeInfo;
  this->fields.boundSpeedYRate = 0.5;
  v39 = sub_21FFEBC(v38);
  BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v39, v40);
  if ( !v39
    || (*(_QWORD *)(v39 + 16) = 0x3DCCCCCDBDCCCCCDLL,
        this->fields.initScatterPosBaseRectXRange = (struct BattleDropRandomBound_RangeFloat_o *)v39,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.initScatterPosBaseRectXRange,
          v39,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46),
        v47 = sub_21FFEBC(BattleDropRandomBound_RangeFloat_TypeInfo),
        BattleDropRandomBound_RangeFloat___ctor((BattleDropRandomBound_RangeFloat_o *)v47, v48),
        !v47) )
  {
LABEL_12:
    sub_21FFECC(v6, v7);
  }
  *(_QWORD *)(v47 + 16) = 0x3DCCCCCDBDCCCCCDLL;
  this->fields.initScatterPosBaseRectYRange = (struct BattleDropRandomBound_RangeFloat_o *)v47;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.initScatterPosBaseRectYRange,
    v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  v55 = BattleDropRandomBound_BattleDropSimpleFallBound_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.objectScaleRatio.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.objectScaleRatio.fields.z = z;
  v58 = (Il2CppObject *)sub_21FFEBC(v55);
  System_Object___ctor(v58, 0);
  this->fields.fallBoundData = (struct BattleDropRandomBound_BattleDropSimpleFallBound_o *)v58;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fallBoundData,
    (int32_t)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


float BattleDropRandomBoundOverwriteSetting__get_AdjustPositionZ(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.adjustPositionZ;
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


float BattleDropRandomBoundOverwriteSetting__get_InitialSidePosition(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  return this->fields.initialSidePosition;
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


UnityEngine_Vector3_o BattleDropRandomBoundOverwriteSetting__get_ObjectScaleRatio(
        BattleDropRandomBoundOverwriteSetting_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.objectScaleRatio.fields.x;
  y = this->fields.objectScaleRatio.fields.y;
  z = this->fields.objectScaleRatio.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}