void BattleDropRandomBound___ctor(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  BattleDropRandomBound_RangeFloat_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  BattleDropRandomBound_RangeFloat_o *v11; // x20
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  BattleDropRandomBound_RangeFloat_o *v19; // x20
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  BattleDropRandomBound_RangeInt_o *v27; // x20
  const MethodInfo *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  if ( (byte_4D3347E & 1) == 0 )
  {
    sub_1C93AD4(&BattleDropRandomBound_RangeFloat_TypeInfo);
    sub_1C93AD4(&BattleDropRandomBound_RangeInt_TypeInfo);
    byte_4D3347E = 1;
  }
  v3 = (BattleDropRandomBound_RangeFloat_o *)sub_1C93D20(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v3, v4);
  this->fields.moveSpeedXRange = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.moveSpeedXRange, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (BattleDropRandomBound_RangeFloat_o *)sub_1C93D20(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v11, v12);
  this->fields.moveSpeedYRange = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.moveSpeedYRange, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  v19 = (BattleDropRandomBound_RangeFloat_o *)sub_1C93D20(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v19, v20);
  this->fields.delayStartTimeRange = v19;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.delayStartTimeRange,
    (int32_t)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (BattleDropRandomBound_RangeInt_o *)sub_1C93D20(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor(v27, v28);
  this->fields.boundCountRange = v27;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.boundCountRange, (int32_t)v27, v29, v30, v31, v32, v33, v34);
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
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
  float startSpeedYPerSecond; // s8
  float gravityPerSecond; // s9
  const MethodInfo *v7; // x1
  float InitialHeight; // s0
  int v9; // w20
  float v10; // s10
  float v11; // s0
  float v12; // s11
  float BoundSpeedYRate; // s0
  float v14; // s12
  float v15; // s8
  const MethodInfo *v16; // x1
  float v17; // s0
  float v18; // s0
  const MethodInfo *v19; // x1

  if ( targetBoundCount < 1 )
    return 0.0;
  startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
  gravityPerSecond = this->fields.gravityPerSecond;
  InitialHeight = BattleDropRandomBound__get_InitialHeight(this, *(const MethodInfo **)&targetBoundCount);
  v9 = targetBoundCount - 1;
  v10 = (float)(startSpeedYPerSecond / gravityPerSecond)
      + sqrtf(
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
  return v10 + v11;
}


float BattleDropRandomBound__GetRandomFloat(BattleDropRandomBound_RangeFloat_o *rangeFloat, const MethodInfo *method)
{
  float result; // s0
  float max; // s1

  if ( !rangeFloat )
    sub_1C93D2C(0, method);
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
    sub_1C93D2C(0, method);
  result = rangeInt->fields.min;
  max = rangeInt->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range_72079620(result, max + 1, 0);
  return result;
}


float BattleDropRandomBound__GetRelativePosXFromAnimationStarted(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t maxBoundCount; // w8
  float moveSpeedXPerSecond; // s8
  float BoundStartTime; // s0
  float v7; // s1
  float x; // s0

  maxBoundCount = this->fields.maxBoundCount;
  moveSpeedXPerSecond = this->fields.moveSpeedXPerSecond;
  if ( maxBoundCount >= this->fields.boundCount )
  {
    x = this->fields.initScatterPos.fields.x;
    v7 = moveSpeedXPerSecond
       * (float)(this->fields.elapsedTime - (float)(this->fields.delayStartTime + this->fields.additionalDelayStartTime));
  }
  else
  {
    BoundStartTime = BattleDropRandomBound__GetBoundStartTime(this, maxBoundCount + 1, v2);
    v7 = this->fields.initScatterPos.fields.x;
    x = moveSpeedXPerSecond * BoundStartTime;
  }
  return x + v7;
}


float BattleDropRandomBound__GetRelativePosYFromAnimationStarted(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *boundCount; // x1
  float result; // s0
  float v6; // s8
  float InitialHeight; // s0
  float v8; // s9
  float BoundStartTime; // s0
  float startSpeedYPerSecond; // s10
  float v11; // s9
  const MethodInfo *v12; // x1
  float BoundSpeedYRate; // s0

  boundCount = (const MethodInfo *)(unsigned int)this->fields.boundCount;
  result = 0.0;
  if ( this->fields.maxBoundCount >= (int)boundCount )
  {
    v6 = 0.0;
    if ( !(_DWORD)boundCount )
    {
      InitialHeight = BattleDropRandomBound__get_InitialHeight(this, boundCount);
      LODWORD(boundCount) = this->fields.boundCount;
      v6 = InitialHeight;
    }
    v8 = this->fields.elapsedTime - (float)(this->fields.delayStartTime + this->fields.additionalDelayStartTime);
    BoundStartTime = BattleDropRandomBound__GetBoundStartTime(this, (int32_t)boundCount, v2);
    startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
    v11 = v8 - BoundStartTime;
    BoundSpeedYRate = BattleDropRandomBound__get_BoundSpeedYRate(this, v12);
    return v6
         + (float)((float)(v11 * (float)(startSpeedYPerSecond * powf(BoundSpeedYRate, (float)this->fields.boundCount)))
                 + (float)(v11 * (float)(v11 * (float)(this->fields.gravityPerSecond * -0.5))));
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *overwriteSetting; // x21
  UnityEngine_GameObject_o *transform; // x0
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct BattleDropRandomBoundOverwriteSetting_o *v25; // x8
  struct BattleDropRandomBound_BattleDropSimpleFallBound_o *fallBoundData; // x1
  struct BattleDropRandomBound_BattleDropSimpleFallBound_o *dropFallBoundData; // x8
  float speedYPerFrame; // s0
  struct System_Single_array *afterBoundGravityArray; // x8
  UnityEngine_Object_o *boundObject; // x21
  const MethodInfo *v31; // x1
  BattleDropRandomBound_RangeFloat_o *MoveSpeedXRange; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  BattleDropRandomBound_RangeFloat_o *MoveSpeedYRange; // x0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  BattleDropRandomBound_RangeFloat_o *DelayStartTimeRange; // x0
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  BattleDropRandomBound_RangeInt_o *BoundCountRange; // x0
  const MethodInfo *v43; // x1
  UnityEngine_Object_o *v44; // x20
  struct BattleDropRandomBoundOverwriteSetting_o *v45; // x8
  float RandomFloat; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v47; // x8
  float v48; // s8
  float v49; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v50; // x8
  float v51; // s9
  float v52; // s0
  float cosx; // [xsp+8h] [xbp-48h] BYREF
  float sinx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D3347B & 1) == 0 )
  {
    sub_1C93AD4(&BattleDropRandomBoundOverwriteSetting_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3347B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scriptableObject, 0, 0) )
  {
    if ( scriptableObject )
    {
      naturalAligment = BattleDropRandomBoundOverwriteSetting_TypeInfo->_2.naturalAligment;
      if ( scriptableObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (BattleDropRandomBoundOverwriteSetting_c *)scriptableObject->klass->_2.typeHierarchy[naturalAligment - 1] == BattleDropRandomBoundOverwriteSetting_TypeInfo )
      {
        this->fields.overwriteSetting = (struct BattleDropRandomBoundOverwriteSetting_o *)scriptableObject;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.overwriteSetting,
          (int32_t)scriptableObject,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
      }
    }
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v25 = this->fields.overwriteSetting;
    if ( !v25 )
      goto LABEL_34;
    if ( v25->fields.simpleFallBound )
    {
      this->fields.isSimpleFallBound = 1;
      fallBoundData = v25->fields.fallBoundData;
      this->fields.dropFallBoundData = fallBoundData;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.dropFallBoundData,
        (int32_t)fallBoundData,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      dropFallBoundData = this->fields.dropFallBoundData;
      this->fields.simpleCurrentBoundCount = 0;
      if ( dropFallBoundData )
      {
        speedYPerFrame = dropFallBoundData->fields.speedYPerFrame;
        this->fields.simpleCurrentSpeedX = 0.0;
        this->fields.simpleMoveFlag = 1;
        this->fields.simpleCurrentSpeedY = -speedYPerFrame;
        afterBoundGravityArray = dropFallBoundData->fields.afterBoundGravityArray;
        if ( afterBoundGravityArray )
          LODWORD(afterBoundGravityArray) = LODWORD(afterBoundGravityArray->max_length) - 1;
        this->fields.simpleLastGravityIndex = (int)afterBoundGravityArray;
        this->fields.isFirstFrame = 1;
        this->fields.simpleStopYPosition = simpleStopYPos;
        return;
      }
      goto LABEL_34;
    }
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boundObject, 0, 0) )
  {
    transform = this->fields.boundObject;
    if ( !transform )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(transform, 0, 0);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_34:
    sub_1C93D2C(transform, v18);
  this->fields.startPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  MoveSpeedXRange = BattleDropRandomBound__get_MoveSpeedXRange(this, v31);
  this->fields.moveSpeedXPerSecond = BattleDropRandomBound__GetRandomFloat(MoveSpeedXRange, v33) * 30.0;
  MoveSpeedYRange = BattleDropRandomBound__get_MoveSpeedYRange(this, v34);
  this->fields.startSpeedYPerSecond = BattleDropRandomBound__GetRandomFloat(MoveSpeedYRange, v36) * 30.0;
  this->fields.gravityPerSecond = (float)(BattleDropRandomBound__get_Gravity(this, v37) * 30.0) * 30.0;
  DelayStartTimeRange = BattleDropRandomBound__get_DelayStartTimeRange(this, v38);
  this->fields.delayStartTime = BattleDropRandomBound__GetRandomFloat(DelayStartTimeRange, v40);
  BoundCountRange = BattleDropRandomBound__get_BoundCountRange(this, v41);
  this->fields.maxBoundCount = BattleDropRandomBound__GetRandomInt(BoundCountRange, v43);
  *(_QWORD *)&this->fields.boundCount = 0;
  if ( isRandomShiftInitialPosition )
  {
    v44 = (UnityEngine_Object_o *)this->fields.overwriteSetting;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      v45 = this->fields.overwriteSetting;
      if ( v45 )
      {
        RandomFloat = BattleDropRandomBound__GetRandomFloat(v45->fields.initScatterPosBaseRectXRange, v18);
        v47 = this->fields.overwriteSetting;
        if ( v47 )
        {
          v48 = RandomFloat;
          v49 = BattleDropRandomBound__GetRandomFloat(v47->fields.initScatterPosBaseRectYRange, v18);
          v50 = this->fields.overwriteSetting;
          if ( v50 )
          {
            v51 = v49;
            sincosf(v50->fields.initScatterPosBaseRectAngle * 0.017453, &sinx, &cosx);
            v52 = (float)(v48 * sinx) + (float)(v51 * cosx);
            this->fields.initScatterPos.fields.x = (float)(v48 * cosx) - (float)(v51 * sinx);
            this->fields.initScatterPos.fields.y = v52;
            return;
          }
        }
      }
      goto LABEL_34;
    }
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
  unsigned int v7; // w10
  struct BattleDropRandomBound_BattleDropSimpleFallBound_o *dropFallBoundData; // x8
  __int64 simpleLastGravityIndex; // x11
  struct System_Single_array *afterBoundGravityArray; // x9
  float v11; // s1
  float speedYPerFrame; // s0
  float simpleCurrentSpeedY; // s0
  float simpleCurrentSpeedX; // s11
  float simpleStopYPosition; // s12
  float v16; // s10
  int32_t v17; // w8
  struct BattleDropRandomBound_BattleDropSimpleFallBound_o *v18; // x8
  struct BattleDropRandomBound_RangeFloat_o *afterBoundSpeedXPerFrame; // x8
  int v20; // w20
  float v21; // s0
  struct BattleDropRandomBound_BattleDropSimpleFallBound_o *v22; // x8
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3347D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3347D = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boundObject, 0, 0) )
  {
    activeInHierarchy = this->fields.boundObject;
    if ( !activeInHierarchy )
      goto LABEL_38;
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
      if ( simpleCurrentBoundCount >= 1 )
      {
        dropFallBoundData = this->fields.dropFallBoundData;
        if ( !dropFallBoundData )
          goto LABEL_38;
        simpleLastGravityIndex = this->fields.simpleLastGravityIndex;
        afterBoundGravityArray = dropFallBoundData->fields.afterBoundGravityArray;
        if ( (int)v7 <= (int)simpleLastGravityIndex )
        {
          if ( !afterBoundGravityArray )
            goto LABEL_38;
          if ( v7 >= LODWORD(afterBoundGravityArray->max_length) )
            goto LABEL_39;
          simpleLastGravityIndex = v7;
        }
        else
        {
          if ( !afterBoundGravityArray )
            goto LABEL_38;
          if ( (unsigned int)simpleLastGravityIndex >= LODWORD(afterBoundGravityArray->max_length) )
LABEL_39:
            sub_1C93D34(activeInHierarchy);
        }
        v11 = this->fields.simpleCurrentSpeedY - afterBoundGravityArray->m_Items[simpleLastGravityIndex];
        this->fields.simpleCurrentSpeedY = v11;
        speedYPerFrame = dropFallBoundData->fields.speedYPerFrame;
        if ( speedYPerFrame < (float)-v11 )
          this->fields.simpleCurrentSpeedY = -speedYPerFrame;
      }
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
          v16 = localPosition.fields.y + simpleCurrentSpeedY;
          if ( (float)(localPosition.fields.y + simpleCurrentSpeedY) < simpleStopYPosition )
          {
            v17 = this->fields.simpleCurrentBoundCount;
            this->fields.simpleCurrentSpeedY = -simpleCurrentSpeedY;
            this->fields.simpleCurrentBoundCount = v17 + 1;
            if ( simpleCurrentSpeedX == 0.0 )
            {
              activeInHierarchy = (UnityEngine_GameObject_o *)UnityEngine_Random__Range_72079620(0, 2, 0);
              v18 = this->fields.dropFallBoundData;
              if ( !v18 )
                goto LABEL_38;
              afterBoundSpeedXPerFrame = v18->fields.afterBoundSpeedXPerFrame;
              if ( !afterBoundSpeedXPerFrame )
                goto LABEL_38;
              v20 = (int)activeInHierarchy;
              v21 = UnityEngine_Random__Range(
                      afterBoundSpeedXPerFrame->fields.min,
                      afterBoundSpeedXPerFrame->fields.max,
                      0);
              if ( v20 != 1 )
                v21 = -v21;
              this->fields.simpleCurrentSpeedX = v21;
            }
            v16 = simpleStopYPosition;
          }
          activeInHierarchy = this->fields.boundObject;
          if ( activeInHierarchy )
          {
            activeInHierarchy = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(activeInHierarchy, 0);
            if ( activeInHierarchy )
            {
              v24.fields.x = localPosition.fields.x + simpleCurrentSpeedX;
              v24.fields.y = v16;
              v24.fields.z = localPosition.fields.z;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)activeInHierarchy, v24, 0);
              v22 = this->fields.dropFallBoundData;
              if ( v22 )
              {
                if ( v22->fields.maxBoundCount < this->fields.simpleCurrentBoundCount )
                  BattleDropRandomBound__StopBound(this, v4);
                return;
              }
            }
          }
        }
      }
LABEL_38:
      sub_1C93D2C(activeInHierarchy, v4);
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
      sub_1C93D2C(transform, v4);
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
  _BOOL4 isSimpleFallBound; // w20
  bool activeSelf; // w0
  float elapsedTime; // s8
  float deltaTime; // s0
  const MethodInfo *v10; // x1
  System_Action_o *AppearEffectCallback_k__BackingField; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D3347C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3347C = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boundObject, 0, 0) )
  {
    v5 = this->fields.boundObject;
    if ( !v5 )
      goto LABEL_24;
    isSimpleFallBound = this->fields.isSimpleFallBound;
    activeSelf = UnityEngine_GameObject__get_activeSelf(v5, 0);
    if ( isSimpleFallBound )
    {
      if ( activeSelf )
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
    else
    {
      if ( activeSelf )
      {
        elapsedTime = this->fields.elapsedTime;
      }
      else
      {
        elapsedTime = this->fields.elapsedTime;
        if ( (float)(this->fields.delayStartTime + this->fields.additionalDelayStartTime) <= elapsedTime )
        {
          BattleDropRandomBound__UpdateLocalPosition(this, v4);
          AppearEffectCallback_k__BackingField = this->fields._AppearEffectCallback_k__BackingField;
          if ( AppearEffectCallback_k__BackingField )
          {
            ActionExtensions__Call(AppearEffectCallback_k__BackingField, 0);
            this->fields._AppearEffectCallback_k__BackingField = 0;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&this->fields._AppearEffectCallback_k__BackingField,
              0,
              v12,
              v13,
              v14,
              v15,
              v16,
              v17);
            return;
          }
          v5 = this->fields.boundObject;
          if ( v5 )
          {
            UnityEngine_GameObject__SetActive(v5, 1, 0);
            return;
          }
          goto LABEL_24;
        }
      }
      deltaTime = UnityEngine_Time__get_deltaTime(0);
      v5 = this->fields.boundObject;
      this->fields.elapsedTime = elapsedTime + deltaTime;
      if ( v5 )
      {
        if ( UnityEngine_GameObject__get_activeSelf(v5, 0) && this->fields.maxBoundCount >= this->fields.boundCount )
          BattleDropRandomBound__UpdateLocalPosition(this, v10);
        return;
      }
    }
LABEL_24:
    sub_1C93D2C(v5, v4);
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
    sub_1C93D2C(0, v11);
  v12.fields.y = y + RelativePosYFromAnimationStarted;
  v12.fields.x = x + RelativePosXFromAnimationStarted;
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

  if ( (byte_4D33478 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33478 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
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

  if ( (byte_4D33479 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33479 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
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

  if ( (byte_4D33477 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33477 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
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

  if ( (byte_4D33474 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33474 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
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

  if ( (byte_4D3347A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3347A = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  initialHeight = 0.0;
  if ( v4 )
  {
    v7 = this->fields.overwriteSetting;
    if ( !v7 )
      sub_1C93D2C(v4, v5);
    initialHeight = v7->fields.initialHeight;
  }
  return initialHeight + this->fields.initScatterPos.fields.y;
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

  if ( (byte_4D33475 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33475 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
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

  if ( (byte_4D33476 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33476 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._AppearEffectCallback_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._AppearEffectCallback_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  if ( (byte_4D3347F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleDropRandomBound_Range_float___ctor__);
    byte_4D3347F = 1;
  }
  BattleDropRandomBound_Range_float____ctor(
    (BattleDropRandomBound_Range_float__o *)this,
    (const MethodInfo_3A37258 *)Method_BattleDropRandomBound_Range_float___ctor__);
}


void BattleDropRandomBound_RangeInt___ctor(BattleDropRandomBound_RangeInt_o *this, const MethodInfo *method)
{
  if ( (byte_4D33480 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleDropRandomBound_Range_int___ctor__);
    byte_4D33480 = 1;
  }
  BattleDropRandomBound_Range_int____ctor(
    (BattleDropRandomBound_Range_int__o *)this,
    (const MethodInfo_3A37250 *)Method_BattleDropRandomBound_Range_int___ctor__);
}


void BattleDropRandomBound_Range___Il2CppFullySharedGenericType____ctor(
        BattleDropRandomBound_Range_T__o *this,
        const MethodInfo_3A37260 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDropRandomBound_Range_float____ctor(
        BattleDropRandomBound_Range_float__o *this,
        const MethodInfo_3A37258 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDropRandomBound_Range_int____ctor(
        BattleDropRandomBound_Range_int__o *this,
        const MethodInfo_3A37250 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}