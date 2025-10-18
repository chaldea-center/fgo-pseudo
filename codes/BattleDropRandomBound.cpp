void BattleDropRandomBound___ctor(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  BattleDropRandomBound_RangeFloat_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BattleDropRandomBound_RangeFloat_o *v7; // x20
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleDropRandomBound_RangeFloat_o *v11; // x20
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattleDropRandomBound_RangeInt_o *v15; // x20
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C459DB & 1) == 0 )
  {
    sub_1C37058(&BattleDropRandomBound_RangeFloat_TypeInfo);
    sub_1C37058(&BattleDropRandomBound_RangeInt_TypeInfo);
    byte_4C459DB = 1;
  }
  v3 = (BattleDropRandomBound_RangeFloat_o *)sub_1C372A4(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v3, v4);
  this->fields.moveSpeedXRange = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.moveSpeedXRange, (int32_t)v3, v5, v6);
  v7 = (BattleDropRandomBound_RangeFloat_o *)sub_1C372A4(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v7, v8);
  this->fields.moveSpeedYRange = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.moveSpeedYRange, (int32_t)v7, v9, v10);
  v11 = (BattleDropRandomBound_RangeFloat_o *)sub_1C372A4(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v11, v12);
  this->fields.delayStartTimeRange = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.delayStartTimeRange, (int32_t)v11, v13, v14);
  v15 = (BattleDropRandomBound_RangeInt_o *)sub_1C372A4(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor(v15, v16);
  this->fields.boundCountRange = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.boundCountRange, (int32_t)v15, v17, v18);
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  result = rangeInt->fields.min;
  max = rangeInt->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range_71226972(result, max + 1, 0);
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
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *boundObject; // x21
  UnityEngine_GameObject_o *transform; // x0
  const MethodInfo *v12; // x1
  BattleDropRandomBound_RangeFloat_o *MoveSpeedXRange; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  BattleDropRandomBound_RangeFloat_o *MoveSpeedYRange; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  BattleDropRandomBound_RangeFloat_o *DelayStartTimeRange; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  BattleDropRandomBound_RangeInt_o *BoundCountRange; // x0
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *overwriteSetting; // x20
  const MethodInfo *v26; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v27; // x8
  const MethodInfo *v28; // x1
  float RandomFloat; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v30; // x8
  float v31; // s8
  float v32; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v33; // x8
  float v34; // s9
  float v35; // s0
  float cosx; // [xsp+8h] [xbp-48h] BYREF
  float sinx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C459D9 & 1) == 0 )
  {
    sub_1C37058(&BattleDropRandomBoundOverwriteSetting_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C459D9 = 1;
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
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.overwriteSetting, (int32_t)scriptableObject, v7, v8);
      }
    }
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boundObject, 0, 0) )
  {
    transform = this->fields.boundObject;
    if ( !transform )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(transform, 0, 0);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_25:
    sub_1C372B4(transform);
  this->fields.startPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  MoveSpeedXRange = BattleDropRandomBound__get_MoveSpeedXRange(this, v12);
  this->fields.moveSpeedXPerSecond = BattleDropRandomBound__GetRandomFloat(MoveSpeedXRange, v14) * 30.0;
  MoveSpeedYRange = BattleDropRandomBound__get_MoveSpeedYRange(this, v15);
  this->fields.startSpeedYPerSecond = BattleDropRandomBound__GetRandomFloat(MoveSpeedYRange, v17) * 30.0;
  this->fields.gravityPerSecond = (float)(BattleDropRandomBound__get_Gravity(this, v18) * 30.0) * 30.0;
  DelayStartTimeRange = BattleDropRandomBound__get_DelayStartTimeRange(this, v19);
  this->fields.delayStartTime = BattleDropRandomBound__GetRandomFloat(DelayStartTimeRange, v21);
  BoundCountRange = BattleDropRandomBound__get_BoundCountRange(this, v22);
  this->fields.maxBoundCount = BattleDropRandomBound__GetRandomInt(BoundCountRange, v24);
  *(_QWORD *)&this->fields.boundCount = 0;
  if ( isRandomShiftInitialPosition )
  {
    overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      v27 = this->fields.overwriteSetting;
      if ( v27 )
      {
        RandomFloat = BattleDropRandomBound__GetRandomFloat(v27->fields.initScatterPosBaseRectXRange, v26);
        v30 = this->fields.overwriteSetting;
        if ( v30 )
        {
          v31 = RandomFloat;
          v32 = BattleDropRandomBound__GetRandomFloat(v30->fields.initScatterPosBaseRectYRange, v28);
          v33 = this->fields.overwriteSetting;
          if ( v33 )
          {
            v34 = v32;
            sincosf(v33->fields.initScatterPosBaseRectAngle * 0.017453, &sinx, &cosx);
            v35 = (float)(v31 * sinx) + (float)(v34 * cosx);
            this->fields.initScatterPos.fields.x = (float)(v31 * cosx) - (float)(v34 * sinx);
            this->fields.initScatterPos.fields.y = v35;
            return;
          }
        }
      }
      goto LABEL_25;
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


void BattleDropRandomBound__StopBound(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.maxBoundCount >= this->fields.boundCount )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
          x = localPosition.fields.x,
          z = localPosition.fields.z,
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_1C372B4(transform);
    }
    v7.fields.y = 0.0;
    v7.fields.x = x;
    v7.fields.z = z;
    UnityEngine_Transform__set_localPosition(transform, v7, 0);
    this->fields.boundCount = this->fields.maxBoundCount + 1;
  }
}


void BattleDropRandomBound__Update(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boundObject; // x20
  UnityEngine_GameObject_o *v4; // x0
  const MethodInfo *v5; // x1
  float elapsedTime; // s8
  float deltaTime; // s0
  const MethodInfo *v8; // x1
  System_Action_o *AppearEffectCallback_k__BackingField; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C459DA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C459DA = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boundObject, 0, 0) )
  {
    v4 = this->fields.boundObject;
    if ( !v4 )
      goto LABEL_19;
    if ( UnityEngine_GameObject__get_activeSelf(v4, 0) )
    {
      elapsedTime = this->fields.elapsedTime;
    }
    else
    {
      elapsedTime = this->fields.elapsedTime;
      if ( (float)(this->fields.delayStartTime + this->fields.additionalDelayStartTime) <= elapsedTime )
      {
        BattleDropRandomBound__UpdateLocalPosition(this, v5);
        AppearEffectCallback_k__BackingField = this->fields._AppearEffectCallback_k__BackingField;
        if ( AppearEffectCallback_k__BackingField )
        {
          ActionExtensions__Call(AppearEffectCallback_k__BackingField, 0);
          this->fields._AppearEffectCallback_k__BackingField = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._AppearEffectCallback_k__BackingField, 0, v10, v11);
          return;
        }
        v4 = this->fields.boundObject;
        if ( v4 )
        {
          UnityEngine_GameObject__SetActive(v4, 1, 0);
          return;
        }
        goto LABEL_19;
      }
    }
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    v4 = this->fields.boundObject;
    this->fields.elapsedTime = elapsedTime + deltaTime;
    if ( v4 )
    {
      if ( UnityEngine_GameObject__get_activeSelf(v4, 0) && this->fields.maxBoundCount >= this->fields.boundCount )
        BattleDropRandomBound__UpdateLocalPosition(this, v8);
      return;
    }
LABEL_19:
    sub_1C372B4(v4);
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
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  BattleDropRandomBound__CalcBoundCount(this, method);
  x = this->fields.startPosition.fields.x;
  y = this->fields.startPosition.fields.y;
  z = this->fields.startPosition.fields.z;
  RelativePosXFromAnimationStarted = BattleDropRandomBound__GetRelativePosXFromAnimationStarted(this, v6);
  RelativePosYFromAnimationStarted = BattleDropRandomBound__GetRelativePosYFromAnimationStarted(this, v8);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  v11.fields.y = y + RelativePosYFromAnimationStarted;
  v11.fields.x = x + RelativePosXFromAnimationStarted;
  v11.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v11, 0);
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
  struct BattleDropRandomBoundOverwriteSetting_o *v5; // x8
  BattleDropRandomBound_RangeInt_o **p_boundCountRange; // x8

  if ( (byte_4C459D6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C459D6 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v5 = this->fields.overwriteSetting;
    if ( !v5 )
      sub_1C372B4(v4);
    p_boundCountRange = &v5->fields.boundCountRange;
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
  struct BattleDropRandomBoundOverwriteSetting_o *v5; // x8
  float *p_boundSpeedYRate; // x8

  if ( (byte_4C459D7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C459D7 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v5 = this->fields.overwriteSetting;
    if ( !v5 )
      sub_1C372B4(v4);
    p_boundSpeedYRate = &v5->fields.boundSpeedYRate;
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
  struct BattleDropRandomBoundOverwriteSetting_o *v5; // x8
  BattleDropRandomBound_RangeFloat_o **p_delayStartTimeRange; // x8

  if ( (byte_4C459D5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C459D5 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v5 = this->fields.overwriteSetting;
    if ( !v5 )
      sub_1C372B4(v4);
    p_delayStartTimeRange = &v5->fields.delayStartTimeRange;
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
  struct BattleDropRandomBoundOverwriteSetting_o *v5; // x8
  float *p_gravity; // x8

  if ( (byte_4C459D2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C459D2 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v5 = this->fields.overwriteSetting;
    if ( !v5 )
      sub_1C372B4(v4);
    p_gravity = &v5->fields.gravity;
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
  float initialHeight; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8

  if ( (byte_4C459D8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C459D8 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  initialHeight = 0.0;
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C372B4(v4);
    initialHeight = v6->fields.initialHeight;
  }
  return initialHeight + this->fields.initScatterPos.fields.y;
}


BattleDropRandomBound_RangeFloat_o *BattleDropRandomBound__get_MoveSpeedXRange(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  struct BattleDropRandomBoundOverwriteSetting_o *v5; // x8
  BattleDropRandomBound_RangeFloat_o **p_moveSpeedXRange; // x8

  if ( (byte_4C459D3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C459D3 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v5 = this->fields.overwriteSetting;
    if ( !v5 )
      sub_1C372B4(v4);
    p_moveSpeedXRange = &v5->fields.moveSpeedXRange;
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
  struct BattleDropRandomBoundOverwriteSetting_o *v5; // x8
  BattleDropRandomBound_RangeFloat_o **p_moveSpeedYRange; // x8

  if ( (byte_4C459D4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C459D4 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v5 = this->fields.overwriteSetting;
    if ( !v5 )
      sub_1C372B4(v4);
    p_moveSpeedYRange = &v5->fields.moveSpeedYRange;
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
  const MethodInfo *v3; // x3

  this->fields._AppearEffectCallback_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._AppearEffectCallback_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleDropRandomBound_RangeFloat___ctor(BattleDropRandomBound_RangeFloat_o *this, const MethodInfo *method)
{
  if ( (byte_4C459DC & 1) == 0 )
  {
    sub_1C37058(&Method_BattleDropRandomBound_Range_float___ctor__);
    byte_4C459DC = 1;
  }
  BattleDropRandomBound_Range_float____ctor(
    (BattleDropRandomBound_Range_float__o *)this,
    (const MethodInfo_395F7D8 *)Method_BattleDropRandomBound_Range_float___ctor__);
}


void BattleDropRandomBound_RangeInt___ctor(BattleDropRandomBound_RangeInt_o *this, const MethodInfo *method)
{
  if ( (byte_4C459DD & 1) == 0 )
  {
    sub_1C37058(&Method_BattleDropRandomBound_Range_int___ctor__);
    byte_4C459DD = 1;
  }
  BattleDropRandomBound_Range_int____ctor(
    (BattleDropRandomBound_Range_int__o *)this,
    (const MethodInfo_395F7D0 *)Method_BattleDropRandomBound_Range_int___ctor__);
}


void BattleDropRandomBound_Range___Il2CppFullySharedGenericType____ctor(
        BattleDropRandomBound_Range_T__o *this,
        const MethodInfo_395F7E0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDropRandomBound_Range_float____ctor(
        BattleDropRandomBound_Range_float__o *this,
        const MethodInfo_395F7D8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDropRandomBound_Range_int____ctor(
        BattleDropRandomBound_Range_int__o *this,
        const MethodInfo_395F7D0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}