void BattleDropRandomBound___ctor(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  BattleDropRandomBound_RangeFloat_o *v3; // x20
  const MethodInfo *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  BattleDropRandomBound_RangeFloat_o *v11; // x20
  const MethodInfo *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  BattleDropRandomBound_RangeFloat_o *v19; // x20
  const MethodInfo *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  BattleDropRandomBound_RangeInt_o *v27; // x20
  const MethodInfo *v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_5973415 & 1) == 0 )
  {
    sub_2213A60(&BattleDropRandomBound_RangeFloat_TypeInfo);
    sub_2213A60(&BattleDropRandomBound_RangeInt_TypeInfo);
    byte_5973415 = 1;
  }
  v3 = (BattleDropRandomBound_RangeFloat_o *)sub_2213CCC(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v3, v4);
  this->fields.moveSpeedXRange = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.moveSpeedXRange, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (BattleDropRandomBound_RangeFloat_o *)sub_2213CCC(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v11, v12);
  this->fields.moveSpeedYRange = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.moveSpeedYRange,
    (int32_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (BattleDropRandomBound_RangeFloat_o *)sub_2213CCC(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v19, v20);
  this->fields.delayStartTimeRange = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.delayStartTimeRange,
    (int32_t)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (BattleDropRandomBound_RangeInt_o *)sub_2213CCC(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor(v27, v28);
  this->fields.boundCountRange = v27;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boundCountRange,
    (int32_t)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  this->fields.initScatterPos = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleDropRandomBound__CalcBoundCount(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int boundCount; // w8
  float v5; // s8
  int32_t maxBoundCount; // w9

  boundCount = this->fields.boundCount;
  if ( boundCount <= this->fields.maxBoundCount )
  {
    do
    {
      v5 = this->fields.elapsedTime - (float)(this->fields.delayStartTime + this->fields.additionalDelayStartTime);
      if ( v5 < BattleDropRandomBound__GetBoundStartTime(this, boundCount + 1, v2) )
        break;
      maxBoundCount = this->fields.maxBoundCount;
      boundCount = this->fields.boundCount + 1;
      this->fields.boundCount = boundCount;
    }
    while ( boundCount <= maxBoundCount );
  }
}


// local variable allocation has failed, the output may be wrong!
float BattleDropRandomBound__GetBoundStartTime(
        BattleDropRandomBound_o *this,
        int32_t targetBoundCount,
        const MethodInfo *method)
{
  float startSpeedYPerSecond; // s10
  float gravityPerSecond; // s11
  const MethodInfo *v7; // x1
  float InitialHeight; // s0
  int v9; // w20
  float v10; // s12
  float v11; // s0
  float v12; // s13
  float BoundSpeedYRate; // s0
  float v14; // s14
  float v15; // s8
  const MethodInfo *v16; // x1
  float v17; // s0
  float v18; // s9
  const MethodInfo *v19; // x1

  if ( targetBoundCount < 1 )
    return 0.0;
  startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
  gravityPerSecond = this->fields.gravityPerSecond;
  InitialHeight = BattleDropRandomBound__get_InitialHeight(this, *(const MethodInfo **)&targetBoundCount);
  v9 = targetBoundCount - 1;
  v10 = sqrtf(
          (float)((float)(InitialHeight
                        + (float)((float)(startSpeedYPerSecond * startSpeedYPerSecond)
                                / (float)(gravityPerSecond + gravityPerSecond)))
                + (float)(InitialHeight
                        + (float)((float)(startSpeedYPerSecond * startSpeedYPerSecond)
                                / (float)(gravityPerSecond + gravityPerSecond))))
        / this->fields.gravityPerSecond);
  v11 = 0.0;
  if ( v9 )
  {
    v12 = this->fields.startSpeedYPerSecond;
    BoundSpeedYRate = BattleDropRandomBound__get_BoundSpeedYRate(this, v7);
    v14 = this->fields.gravityPerSecond;
    v15 = BoundSpeedYRate;
    v17 = BattleDropRandomBound__get_BoundSpeedYRate(this, v16);
    v18 = powf(v17, (float)v9);
    v11 = (float)((float)((float)((float)(v12 + v12) * v15) / v14) * (float)(1.0 - v18))
        / (float)(1.0 - BattleDropRandomBound__get_BoundSpeedYRate(this, v19));
  }
  return (float)((float)(startSpeedYPerSecond / gravityPerSecond) + v10) + v11;
}


float BattleDropRandomBound__GetRandomFloat(BattleDropRandomBound_RangeFloat_o *rangeFloat, const MethodInfo *method)
{
  float result; // s0
  float max; // s1

  if ( !rangeFloat )
    sub_2213CDC(0, method);
  result = rangeFloat->fields.min;
  max = rangeFloat->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range(result, max, 0);
  return result;
}


int32_t BattleDropRandomBound__GetRandomInt(BattleDropRandomBound_RangeInt_o *rangeInt, const MethodInfo *method)
{
  int32_t result; // w0
  int32_t max; // w8

  if ( !rangeInt )
    sub_2213CDC(0, method);
  result = rangeInt->fields.min;
  max = rangeInt->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range_83400680(result, max + 1, 0);
  return result;
}


float BattleDropRandomBound__GetRelativePosXFromAnimationStarted(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t maxBoundCount; // w8
  float moveSpeedXPerSecond; // s9
  float BoundStartTime; // s0
  float v7; // s10
  float v8; // s8
  const MethodInfo *v9; // x1
  float v10; // s0
  float InitialSidePosition; // s2
  float v12; // s1
  float x; // s10
  float v14; // s8

  maxBoundCount = this->fields.maxBoundCount;
  moveSpeedXPerSecond = this->fields.moveSpeedXPerSecond;
  if ( maxBoundCount >= this->fields.boundCount )
  {
    x = this->fields.initScatterPos.fields.x;
    v14 = this->fields.elapsedTime - (float)(this->fields.delayStartTime + this->fields.additionalDelayStartTime);
    InitialSidePosition = BattleDropRandomBound__get_InitialSidePosition(this, method);
    v12 = x + (float)(moveSpeedXPerSecond * v14);
  }
  else
  {
    BoundStartTime = BattleDropRandomBound__GetBoundStartTime(this, maxBoundCount + 1, v2);
    v7 = this->fields.initScatterPos.fields.x;
    v8 = BoundStartTime;
    v10 = BattleDropRandomBound__get_InitialSidePosition(this, v9);
    InitialSidePosition = (float)(moveSpeedXPerSecond * v8) + v7;
    v12 = v10;
  }
  return InitialSidePosition + v12;
}


float BattleDropRandomBound__GetRelativePosYFromAnimationStarted(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float result; // s0
  const MethodInfo *boundCount; // x1
  float InitialHeight; // s8
  float v7; // s9
  float BoundStartTime; // s0
  float startSpeedYPerSecond; // s10
  float v10; // s9
  const MethodInfo *v11; // x1
  float BoundSpeedYRate; // s0

  result = 0.0;
  boundCount = (const MethodInfo *)(unsigned int)this->fields.boundCount;
  if ( this->fields.maxBoundCount >= (int)boundCount )
  {
    InitialHeight = 0.0;
    if ( !(_DWORD)boundCount )
    {
      InitialHeight = BattleDropRandomBound__get_InitialHeight(this, boundCount);
      LODWORD(boundCount) = this->fields.boundCount;
    }
    v7 = this->fields.elapsedTime - (float)(this->fields.delayStartTime + this->fields.additionalDelayStartTime);
    BoundStartTime = BattleDropRandomBound__GetBoundStartTime(this, (int32_t)boundCount, v2);
    startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
    v10 = v7 - BoundStartTime;
    BoundSpeedYRate = BattleDropRandomBound__get_BoundSpeedYRate(this, v11);
    return InitialHeight
         + (float)((float)(v10 * (float)(startSpeedYPerSecond * powf(BoundSpeedYRate, (float)this->fields.boundCount)))
                 + (float)(v10 * (float)(v10 * (float)(this->fields.gravityPerSecond * -0.5))));
  }
  return result;
}


void BattleDropRandomBound__Initialize(
        BattleDropRandomBound_o *this,
        UnityEngine_ScriptableObject_o *scriptableObject,
        bool isRandomShiftInitialPosition,
        float simpleStopYPos,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 naturalAligment; // x10
  struct BattleDropRandomBoundOverwriteSetting_o **p_overwriteSetting; // x22
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v19; // x0
  const MethodInfo *v20; // x1
  float *v21; // x8
  UnityEngine_Object_o *overwriteSetting; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct BattleDropRandomBoundOverwriteSetting_o *v29; // x8
  struct BattleDropRandomBound_BattleDropSimpleFallBound_o *fallBoundData; // x1
  struct BattleDropRandomBound_BattleDropSimpleFallBound_o *dropFallBoundData; // x8
  float speedYPerFrame; // s0
  struct System_Single_array *afterBoundGravityArray; // x8
  const MethodInfo *v34; // x1
  BattleDropRandomBound_RangeFloat_o *MoveSpeedXRange; // x0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  BattleDropRandomBound_RangeFloat_o *MoveSpeedYRange; // x0
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  BattleDropRandomBound_RangeFloat_o *DelayStartTimeRange; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  BattleDropRandomBound_RangeInt_o *BoundCountRange; // x0
  const MethodInfo *v46; // x1
  __int64 v47; // x1
  int32_t RandomInt; // w8
  UnityEngine_Object_c *v49; // x0
  UnityEngine_Object_o *v50; // x21
  struct BattleDropRandomBoundOverwriteSetting_o *v51; // x8
  float adjustPositionZ; // s0
  UnityEngine_Object_o *v53; // x20
  struct BattleDropRandomBoundOverwriteSetting_o *v54; // x8
  float RandomFloat; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v56; // x8
  float v57; // s8
  float v58; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v59; // x8
  float v60; // s9
  float v61; // s0
  UnityEngine_Object_o *boundObject; // x20
  const MethodInfo *v63; // x1
  bool v64; // w1
  float cosx; // [xsp+8h] [xbp-48h] BYREF
  float sinx; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5973412 & 1) == 0 )
  {
    sub_2213A60(&BattleDropRandomBoundOverwriteSetting_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973412 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scriptableObject);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scriptableObject, 0, 0) )
  {
    if ( scriptableObject )
    {
      naturalAligment = BattleDropRandomBoundOverwriteSetting_TypeInfo->_2.naturalAligment;
      if ( scriptableObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (BattleDropRandomBoundOverwriteSetting_c *)scriptableObject->klass->_2.typeHierarchy[naturalAligment - 1] == BattleDropRandomBoundOverwriteSetting_TypeInfo )
      {
        this->fields.overwriteSetting = (struct BattleDropRandomBoundOverwriteSetting_o *)scriptableObject;
        p_overwriteSetting = &this->fields.overwriteSetting;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteSetting,
          (int32_t)scriptableObject,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !v19 )
          goto LABEL_50;
        localScale = UnityEngine_Transform__get_localScale(v19, 0);
        v21 = (float *)*p_overwriteSetting;
        if ( !*p_overwriteSetting || !transform )
          goto LABEL_50;
        v68.fields.z = localScale.fields.z * v21[27];
        v68.fields.y = localScale.fields.y * v21[26];
        v68.fields.x = localScale.fields.x * v21[25];
        UnityEngine_Transform__set_localScale(transform, v68, 0);
      }
    }
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v19 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( ((unsigned __int8)v19 & 1) != 0 )
  {
    v29 = this->fields.overwriteSetting;
    if ( !v29 )
      goto LABEL_50;
    if ( v29->fields.simpleFallBound )
    {
      fallBoundData = v29->fields.fallBoundData;
      this->fields.dropFallBoundData = fallBoundData;
      this->fields.isSimpleFallBound = 1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.dropFallBoundData,
        (int32_t)fallBoundData,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      dropFallBoundData = this->fields.dropFallBoundData;
      this->fields.simpleCurrentBoundCount = 0;
      if ( dropFallBoundData )
      {
        speedYPerFrame = dropFallBoundData->fields.speedYPerFrame;
        afterBoundGravityArray = dropFallBoundData->fields.afterBoundGravityArray;
        this->fields.simpleCurrentSpeedX = 0.0;
        this->fields.simpleMoveFlag = 1;
        this->fields.simpleCurrentSpeedY = -speedYPerFrame;
        if ( afterBoundGravityArray )
          LODWORD(afterBoundGravityArray) = LODWORD(afterBoundGravityArray->max_length) - 1;
        this->fields.simpleLastGravityIndex = (int)afterBoundGravityArray;
        this->fields.isFirstFrame = 1;
        this->fields.simpleStopYPosition = simpleStopYPos;
        return;
      }
LABEL_50:
      sub_2213CDC(v19, v20);
    }
  }
  v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v19 )
    goto LABEL_50;
  this->fields.startPosition = UnityEngine_Transform__get_localPosition(v19, 0);
  MoveSpeedXRange = BattleDropRandomBound__get_MoveSpeedXRange(this, v34);
  this->fields.moveSpeedXPerSecond = BattleDropRandomBound__GetRandomFloat(MoveSpeedXRange, v36) * 30.0;
  MoveSpeedYRange = BattleDropRandomBound__get_MoveSpeedYRange(this, v37);
  this->fields.startSpeedYPerSecond = BattleDropRandomBound__GetRandomFloat(MoveSpeedYRange, v39) * 30.0;
  this->fields.gravityPerSecond = (float)(BattleDropRandomBound__get_Gravity(this, v40) * 30.0) * 30.0;
  DelayStartTimeRange = BattleDropRandomBound__get_DelayStartTimeRange(this, v41);
  this->fields.delayStartTime = BattleDropRandomBound__GetRandomFloat(DelayStartTimeRange, v43);
  BoundCountRange = BattleDropRandomBound__get_BoundCountRange(this, v44);
  RandomInt = BattleDropRandomBound__GetRandomInt(BoundCountRange, v46);
  v49 = UnityEngine_Object_TypeInfo;
  *(_QWORD *)&this->fields.boundCount = 0;
  v50 = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  this->fields.maxBoundCount = RandomInt;
  if ( !*(&v49->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v49, v47);
  v19 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v50, 0, 0);
  if ( ((unsigned __int8)v19 & 1) == 0 )
    goto LABEL_28;
  v51 = this->fields.overwriteSetting;
  if ( !v51 )
    goto LABEL_50;
  adjustPositionZ = v51->fields.adjustPositionZ;
  if ( adjustPositionZ != 0.0 )
  {
    this->fields.startPosition.fields.z = adjustPositionZ + this->fields.startPosition.fields.z;
    if ( !isRandomShiftInitialPosition )
      goto LABEL_37;
  }
  else
  {
LABEL_28:
    if ( !isRandomShiftInitialPosition )
      goto LABEL_37;
  }
  v53 = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  v19 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v53, 0, 0);
  if ( ((unsigned __int8)v19 & 1) != 0 )
  {
    v54 = this->fields.overwriteSetting;
    if ( !v54 )
      goto LABEL_50;
    RandomFloat = BattleDropRandomBound__GetRandomFloat(v54->fields.initScatterPosBaseRectXRange, v20);
    v56 = this->fields.overwriteSetting;
    if ( !v56 )
      goto LABEL_50;
    v57 = RandomFloat;
    v58 = BattleDropRandomBound__GetRandomFloat(v56->fields.initScatterPosBaseRectYRange, v20);
    v59 = this->fields.overwriteSetting;
    if ( !v59 )
      goto LABEL_50;
    v60 = v58;
    sincosf(v59->fields.initScatterPosBaseRectAngle * 0.017453, &sinx, &cosx);
    v61 = (float)(v57 * sinx) + (float)(v60 * cosx);
    this->fields.initScatterPos.fields.x = (float)(v57 * cosx) - (float)(v60 * sinx);
    this->fields.initScatterPos.fields.y = v61;
  }
LABEL_37:
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(boundObject, 0, 0) )
  {
    v19 = (UnityEngine_Transform_o *)BattleDropRandomBound__get_DelayStartTimeRange(this, v63);
    if ( !v19 )
      goto LABEL_50;
    if ( *(float *)&v19->fields.m_CachedPtr != 0.0 )
      goto LABEL_47;
    v19 = (UnityEngine_Transform_o *)BattleDropRandomBound__get_DelayStartTimeRange(this, v20);
    if ( !v19 )
      goto LABEL_50;
    if ( *((float *)&v19->fields.m_CachedPtr + 1) == 0.0 )
    {
      BattleDropRandomBound__UpdateLocalPosition(this, v20);
      v19 = (UnityEngine_Transform_o *)this->fields.boundObject;
      if ( !v19 )
        goto LABEL_50;
      v64 = 1;
    }
    else
    {
LABEL_47:
      v19 = (UnityEngine_Transform_o *)this->fields.boundObject;
      if ( !v19 )
        goto LABEL_50;
      v64 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19, v64, 0);
  }
}


void BattleDropRandomBound__SetAdditionalDelayTime(
        BattleDropRandomBound_o *this,
        float waitTime,
        const MethodInfo *method)
{
  this->fields.additionalDelayStartTime = waitTime;
}


void BattleDropRandomBound__SimpleFallUpdate(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boundObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *activeInHierarchy; // x0
  int32_t simpleCurrentBoundCount; // w8
  unsigned int v7; // w9
  __int64 simpleLastGravityIndex; // x10
  struct BattleDropRandomBound_BattleDropSimpleFallBound_o *v9; // x8
  struct System_Single_array *v10; // x9
  float *v11; // x9
  struct System_Single_array *afterBoundGravityArray; // x10
  float v13; // s1
  float speedYPerFrame; // s0
  float simpleCurrentSpeedY; // s0
  float simpleCurrentSpeedX; // s11
  float simpleStopYPosition; // s12
  float v18; // s10
  struct BattleDropRandomBound_BattleDropSimpleFallBound_o *dropFallBoundData; // x8
  struct BattleDropRandomBound_RangeFloat_o *afterBoundSpeedXPerFrame; // x8
  int v21; // w20
  float v22; // s0
  struct BattleDropRandomBound_BattleDropSimpleFallBound_o *v23; // x8
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5973414 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973414 = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(boundObject, 0, 0) )
  {
    activeInHierarchy = this->fields.boundObject;
    if ( !activeInHierarchy )
      goto LABEL_39;
    activeInHierarchy = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeInHierarchy(activeInHierarchy, 0);
    if ( ((unsigned __int8)activeInHierarchy & 1) != 0 && this->fields.simpleMoveFlag )
    {
      if ( this->fields.isFirstFrame )
      {
        this->fields.isFirstFrame = 0;
        return;
      }
      simpleCurrentBoundCount = this->fields.simpleCurrentBoundCount;
      v7 = simpleCurrentBoundCount - 1;
      if ( simpleCurrentBoundCount < 1 )
      {
LABEL_23:
        activeInHierarchy = this->fields.boundObject;
        if ( activeInHierarchy )
        {
          activeInHierarchy = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(activeInHierarchy, 0);
          if ( activeInHierarchy )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeInHierarchy, 0);
            simpleCurrentSpeedY = this->fields.simpleCurrentSpeedY;
            simpleCurrentSpeedX = this->fields.simpleCurrentSpeedX;
            simpleStopYPosition = this->fields.simpleStopYPosition;
            v18 = localPosition.fields.y + simpleCurrentSpeedY;
            if ( (float)(localPosition.fields.y + simpleCurrentSpeedY) < simpleStopYPosition )
            {
              ++this->fields.simpleCurrentBoundCount;
              this->fields.simpleCurrentSpeedY = -simpleCurrentSpeedY;
              if ( simpleCurrentSpeedX == 0.0 )
              {
                activeInHierarchy = (UnityEngine_GameObject_o *)UnityEngine_Random__Range_83400680(0, 2, 0);
                dropFallBoundData = this->fields.dropFallBoundData;
                if ( !dropFallBoundData )
                  goto LABEL_39;
                afterBoundSpeedXPerFrame = dropFallBoundData->fields.afterBoundSpeedXPerFrame;
                if ( !afterBoundSpeedXPerFrame )
                  goto LABEL_39;
                v21 = (int)activeInHierarchy;
                v22 = UnityEngine_Random__Range(
                        afterBoundSpeedXPerFrame->fields.min,
                        afterBoundSpeedXPerFrame->fields.max,
                        0);
                if ( v21 != 1 )
                  v22 = -v22;
                this->fields.simpleCurrentSpeedX = v22;
              }
              v18 = simpleStopYPosition;
            }
            activeInHierarchy = this->fields.boundObject;
            if ( activeInHierarchy )
            {
              activeInHierarchy = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                activeInHierarchy,
                                                                0);
              if ( activeInHierarchy )
              {
                v25.fields.x = localPosition.fields.x + simpleCurrentSpeedX;
                v25.fields.y = v18;
                v25.fields.z = localPosition.fields.z;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)activeInHierarchy, v25, 0);
                v23 = this->fields.dropFallBoundData;
                if ( v23 )
                {
                  if ( v23->fields.maxBoundCount < this->fields.simpleCurrentBoundCount )
                    BattleDropRandomBound__StopBound(this, v4);
                  return;
                }
              }
            }
          }
        }
LABEL_39:
        sub_2213CDC(activeInHierarchy, v4);
      }
      simpleLastGravityIndex = this->fields.simpleLastGravityIndex;
      v9 = this->fields.dropFallBoundData;
      if ( (int)v7 <= (int)simpleLastGravityIndex )
      {
        if ( !v9 )
          goto LABEL_39;
        afterBoundGravityArray = v9->fields.afterBoundGravityArray;
        if ( !afterBoundGravityArray )
          goto LABEL_39;
        if ( v7 < LODWORD(afterBoundGravityArray->max_length) )
        {
          v11 = (float *)((char *)afterBoundGravityArray + 4 * v7);
LABEL_21:
          v13 = this->fields.simpleCurrentSpeedY - v11[8];
          speedYPerFrame = v9->fields.speedYPerFrame;
          this->fields.simpleCurrentSpeedY = v13;
          if ( speedYPerFrame < (float)-v13 )
            this->fields.simpleCurrentSpeedY = -speedYPerFrame;
          goto LABEL_23;
        }
      }
      else
      {
        if ( !v9 )
          goto LABEL_39;
        v10 = v9->fields.afterBoundGravityArray;
        if ( !v10 )
          goto LABEL_39;
        if ( (unsigned int)simpleLastGravityIndex < LODWORD(v10->max_length) )
        {
          v11 = (float *)((char *)v10 + 4 * simpleLastGravityIndex);
          goto LABEL_21;
        }
      }
      sub_2213CE4(activeInHierarchy);
    }
  }
}


void BattleDropRandomBound__StopBound(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.isSimpleFallBound )
  {
    this->fields.simpleMoveFlag = 0;
  }
  else if ( this->fields.maxBoundCount >= this->fields.boundCount )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_2213CDC(transform, v4);
    }
    v6.fields.y = 0.0;
    v6.fields.x = localPosition.fields.x;
    v6.fields.z = localPosition.fields.z;
    UnityEngine_Transform__set_localPosition(transform, v6, 0);
    this->fields.boundCount = this->fields.maxBoundCount + 1;
  }
}


void BattleDropRandomBound__Update(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boundObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x1
  float elapsedTime; // s8
  float deltaTime; // s0
  const MethodInfo *v9; // x1
  System_Action_o *AppearEffectCallback_k__BackingField; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5973413 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973413 = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(boundObject, 0, 0) )
  {
    v5 = this->fields.boundObject;
    if ( this->fields.isSimpleFallBound )
    {
      if ( v5 )
      {
        if ( UnityEngine_GameObject__get_activeSelf(v5, 0) )
        {
LABEL_12:
          BattleDropRandomBound__SimpleFallUpdate(this, v4);
          return;
        }
        v5 = this->fields.boundObject;
        if ( v5 )
        {
          UnityEngine_GameObject__SetActive(v5, 1, 0);
          goto LABEL_12;
        }
      }
    }
    else
    {
      if ( !v5 )
        goto LABEL_25;
      if ( UnityEngine_GameObject__get_activeSelf(v5, 0) )
      {
        elapsedTime = this->fields.elapsedTime;
      }
      else
      {
        elapsedTime = this->fields.elapsedTime;
        if ( (float)(this->fields.delayStartTime + this->fields.additionalDelayStartTime) <= elapsedTime )
        {
          BattleDropRandomBound__UpdateLocalPosition(this, v6);
          AppearEffectCallback_k__BackingField = this->fields._AppearEffectCallback_k__BackingField;
          if ( AppearEffectCallback_k__BackingField )
          {
            ActionExtensions__Call(AppearEffectCallback_k__BackingField, 0);
            this->fields._AppearEffectCallback_k__BackingField = 0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._AppearEffectCallback_k__BackingField,
              0,
              v11,
              v12,
              v13,
              v14,
              v15,
              v16);
            return;
          }
          v5 = this->fields.boundObject;
          if ( v5 )
          {
            UnityEngine_GameObject__SetActive(v5, 1, 0);
            return;
          }
          goto LABEL_25;
        }
      }
      deltaTime = UnityEngine_Time__get_deltaTime(0);
      v5 = this->fields.boundObject;
      this->fields.elapsedTime = elapsedTime + deltaTime;
      if ( v5 )
      {
        if ( UnityEngine_GameObject__get_activeSelf(v5, 0) && this->fields.maxBoundCount >= this->fields.boundCount )
          BattleDropRandomBound__UpdateLocalPosition(this, v9);
        return;
      }
    }
LABEL_25:
    sub_2213CDC(v5, v4);
  }
}


void BattleDropRandomBound__UpdateLocalPosition(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  float x; // s11
  float y; // s12
  float z; // s8
  const MethodInfo *v6; // x1
  float RelativePosXFromAnimationStarted; // s9
  const MethodInfo *v8; // x1
  float RelativePosYFromAnimationStarted; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  BattleDropRandomBound__CalcBoundCount(this, method);
  x = this->fields.startPosition.fields.x;
  y = this->fields.startPosition.fields.y;
  z = this->fields.startPosition.fields.z;
  RelativePosXFromAnimationStarted = BattleDropRandomBound__GetRelativePosXFromAnimationStarted(this, v6);
  RelativePosYFromAnimationStarted = BattleDropRandomBound__GetRelativePosYFromAnimationStarted(this, v8);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v11);
  v12.fields.x = x + RelativePosXFromAnimationStarted;
  v12.fields.y = y + RelativePosYFromAnimationStarted;
  v12.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v12, 0);
}


float BattleDropRandomBound__get_AnimElapsedSeconds(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  return this->fields.elapsedTime - (float)(this->fields.delayStartTime + this->fields.additionalDelayStartTime);
}


System_Action_o *BattleDropRandomBound__get_AppearEffectCallback(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  return this->fields._AppearEffectCallback_k__BackingField;
}


BattleDropRandomBound_RangeInt_o *BattleDropRandomBound__get_BoundCountRange(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  BattleDropRandomBound_RangeInt_o **p_boundCountRange; // x8

  if ( (byte_597340E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597340E = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_2213CDC(v4, v5);
    p_boundCountRange = &v6->fields.boundCountRange;
  }
  else
  {
    p_boundCountRange = &this->fields.boundCountRange;
  }
  return *p_boundCountRange;
}


UnityEngine_GameObject_o *BattleDropRandomBound__get_BoundObject(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  return this->fields.boundObject;
}


float BattleDropRandomBound__get_BoundSpeedYRate(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  float *p_boundSpeedYRate; // x8

  if ( (byte_597340F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597340F = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_2213CDC(v4, v5);
    p_boundSpeedYRate = &v6->fields.boundSpeedYRate;
  }
  else
  {
    p_boundSpeedYRate = &this->fields.boundSpeedYRate;
  }
  return *p_boundSpeedYRate;
}


BattleDropRandomBound_RangeFloat_o *BattleDropRandomBound__get_DelayStartTimeRange(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  BattleDropRandomBound_RangeFloat_o **p_delayStartTimeRange; // x8

  if ( (byte_597340D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597340D = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_2213CDC(v4, v5);
    p_delayStartTimeRange = &v6->fields.delayStartTimeRange;
  }
  else
  {
    p_delayStartTimeRange = &this->fields.delayStartTimeRange;
  }
  return *p_delayStartTimeRange;
}


float BattleDropRandomBound__get_FixedDelayStartTime(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  return this->fields.delayStartTime + this->fields.additionalDelayStartTime;
}


float BattleDropRandomBound__get_Gravity(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  float *p_gravity; // x8

  if ( (byte_597340A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597340A = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_2213CDC(v4, v5);
    p_gravity = &v6->fields.gravity;
  }
  else
  {
    p_gravity = &this->fields.gravity;
  }
  return *p_gravity;
}


float BattleDropRandomBound__get_InitialHeight(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float initialHeight; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v7; // x8

  if ( (byte_5973410 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973410 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  initialHeight = 0.0;
  if ( v4 )
  {
    v7 = this->fields.overwriteSetting;
    if ( !v7 )
      sub_2213CDC(v4, v5);
    initialHeight = v7->fields.initialHeight;
  }
  return initialHeight + this->fields.initScatterPos.fields.y;
}


float BattleDropRandomBound__get_InitialSidePosition(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v7; // x8

  if ( (byte_5973411 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973411 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  result = 0.0;
  if ( v4 )
  {
    v7 = this->fields.overwriteSetting;
    if ( !v7 )
      sub_2213CDC(v4, v5);
    return v7->fields.initialSidePosition;
  }
  return result;
}


BattleDropRandomBound_RangeFloat_o *BattleDropRandomBound__get_MoveSpeedXRange(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  BattleDropRandomBound_RangeFloat_o **p_moveSpeedXRange; // x8

  if ( (byte_597340B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597340B = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_2213CDC(v4, v5);
    p_moveSpeedXRange = &v6->fields.moveSpeedXRange;
  }
  else
  {
    p_moveSpeedXRange = &this->fields.moveSpeedXRange;
  }
  return *p_moveSpeedXRange;
}


BattleDropRandomBound_RangeFloat_o *BattleDropRandomBound__get_MoveSpeedYRange(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  BattleDropRandomBound_RangeFloat_o **p_moveSpeedYRange; // x8

  if ( (byte_597340C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597340C = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_2213CDC(v4, v5);
    p_moveSpeedYRange = &v6->fields.moveSpeedYRange;
  }
  else
  {
    p_moveSpeedYRange = &this->fields.moveSpeedYRange;
  }
  return *p_moveSpeedYRange;
}


void BattleDropRandomBound__set_AppearEffectCallback(
        BattleDropRandomBound_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AppearEffectCallback_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AppearEffectCallback_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleDropRandomBound_BattleDropSimpleFallBound___ctor(
        BattleDropRandomBound_BattleDropSimpleFallBound_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Single_array *BattleDropRandomBound_BattleDropSimpleFallBound__get_AfterBoundGravityArray(
        BattleDropRandomBound_BattleDropSimpleFallBound_o *this,
        const MethodInfo *method)
{
  return this->fields.afterBoundGravityArray;
}


BattleDropRandomBound_RangeFloat_o *BattleDropRandomBound_BattleDropSimpleFallBound__get_AfterBoundSpeedXPerFram(
        BattleDropRandomBound_BattleDropSimpleFallBound_o *this,
        const MethodInfo *method)
{
  return this->fields.afterBoundSpeedXPerFrame;
}


int32_t BattleDropRandomBound_BattleDropSimpleFallBound__get_MaxBoundCount(
        BattleDropRandomBound_BattleDropSimpleFallBound_o *this,
        const MethodInfo *method)
{
  return this->fields.maxBoundCount;
}


float BattleDropRandomBound_BattleDropSimpleFallBound__get_SpeedYPerFram(
        BattleDropRandomBound_BattleDropSimpleFallBound_o *this,
        const MethodInfo *method)
{
  return this->fields.speedYPerFrame;
}


void BattleDropRandomBound_RangeFloat___ctor(BattleDropRandomBound_RangeFloat_o *this, const MethodInfo *method)
{
  if ( (byte_5973416 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleDropRandomBound_Range_float___ctor__);
    byte_5973416 = 1;
  }
  BattleDropRandomBound_Range_float____ctor(
    (BattleDropRandomBound_Range_float__o *)this,
    (const MethodInfo_46EA1DC *)Method_BattleDropRandomBound_Range_float___ctor__);
}


void BattleDropRandomBound_RangeInt___ctor(BattleDropRandomBound_RangeInt_o *this, const MethodInfo *method)
{
  if ( (byte_5973417 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleDropRandomBound_Range_int___ctor__);
    byte_5973417 = 1;
  }
  BattleDropRandomBound_Range_int____ctor(
    (BattleDropRandomBound_Range_int__o *)this,
    (const MethodInfo_46EA1D4 *)Method_BattleDropRandomBound_Range_int___ctor__);
}


void BattleDropRandomBound_Range___Il2CppFullySharedGenericType____ctor(
        BattleDropRandomBound_Range_T__o *this,
        const MethodInfo_46EA1E4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDropRandomBound_Range_float____ctor(
        BattleDropRandomBound_Range_float__o *this,
        const MethodInfo_46EA1DC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDropRandomBound_Range_int____ctor(
        BattleDropRandomBound_Range_int__o *this,
        const MethodInfo_46EA1D4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}