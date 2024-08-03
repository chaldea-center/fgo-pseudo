void __fastcall BattleDropRandomBound___ctor(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BattleDropRandomBound_RangeFloat_o *v5; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  BattleDropRandomBound_RangeFloat_o *v11; // x20
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  BattleDropRandomBound_RangeFloat_o *v17; // x20
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  BattleDropRandomBound_RangeInt_o *v23; // x20
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49FE8F2 & 1) == 0 )
  {
    sub_1B640C8(&BattleDropRandomBound_RangeFloat_TypeInfo, method);
    sub_1B640C8(&BattleDropRandomBound_RangeInt_TypeInfo, v4);
    byte_49FE8F2 = 1;
  }
  v5 = (BattleDropRandomBound_RangeFloat_o *)sub_1B64314(BattleDropRandomBound_RangeFloat_TypeInfo, method, v2);
  BattleDropRandomBound_RangeFloat___ctor(v5, v6);
  this->fields.moveSpeedXRange = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.moveSpeedXRange, (int32_t)v5, v7, v8);
  v11 = (BattleDropRandomBound_RangeFloat_o *)sub_1B64314(BattleDropRandomBound_RangeFloat_TypeInfo, v9, v10);
  BattleDropRandomBound_RangeFloat___ctor(v11, v12);
  this->fields.moveSpeedYRange = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.moveSpeedYRange, (int32_t)v11, v13, v14);
  v17 = (BattleDropRandomBound_RangeFloat_o *)sub_1B64314(BattleDropRandomBound_RangeFloat_TypeInfo, v15, v16);
  BattleDropRandomBound_RangeFloat___ctor(v17, v18);
  this->fields.delayStartTimeRange = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.delayStartTimeRange, (int32_t)v17, v19, v20);
  v23 = (BattleDropRandomBound_RangeInt_o *)sub_1B64314(BattleDropRandomBound_RangeInt_TypeInfo, v21, v22);
  BattleDropRandomBound_RangeInt___ctor(v23, v24);
  this->fields.boundCountRange = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.boundCountRange, (int32_t)v23, v25, v26);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleDropRandomBound__CalcBoundCount(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  int boundCount; // w20
  int32_t maxBoundCount; // w21
  float v5; // s9
  float boundSpeedYRate; // s8
  float startSpeedYPerSecond; // s11
  float gravityPerSecond; // s12
  float v9; // s0

  maxBoundCount = this->fields.maxBoundCount;
  boundCount = this->fields.boundCount;
  if ( boundCount <= maxBoundCount )
  {
    v5 = this->fields.elapsedTime - this->fields.delayStartTime;
    do
    {
      if ( ++boundCount < 0 )
      {
        v9 = 0.0;
      }
      else
      {
        boundSpeedYRate = this->fields.boundSpeedYRate;
        startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
        gravityPerSecond = this->fields.gravityPerSecond;
        v9 = (float)((float)((float)(startSpeedYPerSecond + startSpeedYPerSecond) / gravityPerSecond)
                   * (float)(1.0 - powf(boundSpeedYRate, (float)boundCount)))
           / (float)(1.0 - boundSpeedYRate);
      }
      if ( v5 < v9 )
        break;
      this->fields.boundCount = boundCount;
    }
    while ( boundCount <= maxBoundCount );
  }
}


float __fastcall BattleDropRandomBound__GetBoundStartTime(
        BattleDropRandomBound_o *this,
        int32_t targetBoundCount,
        const MethodInfo *method)
{
  float boundSpeedYRate; // s8
  float startSpeedYPerSecond; // s9
  float gravityPerSecond; // s10

  if ( (targetBoundCount & 0x80000000) != 0 )
    return 0.0;
  boundSpeedYRate = this->fields.boundSpeedYRate;
  startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
  gravityPerSecond = this->fields.gravityPerSecond;
  return (float)((float)((float)(startSpeedYPerSecond + startSpeedYPerSecond) / gravityPerSecond)
               * (float)(1.0 - powf(boundSpeedYRate, (float)targetBoundCount)))
       / (float)(1.0 - boundSpeedYRate);
}


float __fastcall BattleDropRandomBound__GetRandomFloat(
        BattleDropRandomBound_o *this,
        BattleDropRandomBound_RangeFloat_o *rangeFloat,
        const MethodInfo *method)
{
  float result; // s0
  float max; // s1

  if ( !rangeFloat )
    sub_1B64324(this);
  result = rangeFloat->fields.min;
  max = rangeFloat->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range(result, max, 0LL);
  return result;
}


int32_t __fastcall BattleDropRandomBound__GetRandomInt(
        BattleDropRandomBound_o *this,
        BattleDropRandomBound_RangeInt_o *rangeInt,
        const MethodInfo *method)
{
  int32_t result; // w0
  int32_t max; // w8

  if ( !rangeInt )
    sub_1B64324(this);
  result = rangeInt->fields.min;
  max = rangeInt->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range_69087476(result, max + 1, 0LL);
  return result;
}


float __fastcall BattleDropRandomBound__GetRelativePosXFromAnimationStarted(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  int32_t maxBoundCount; // w8
  float moveSpeedXPerSecond; // s9
  float v4; // s0
  float boundSpeedYRate; // s8
  float startSpeedYPerSecond; // s10
  float gravityPerSecond; // s11

  maxBoundCount = this->fields.maxBoundCount;
  moveSpeedXPerSecond = this->fields.moveSpeedXPerSecond;
  if ( maxBoundCount >= this->fields.boundCount )
  {
    v4 = this->fields.elapsedTime - this->fields.delayStartTime;
  }
  else
  {
    v4 = 0.0;
    if ( maxBoundCount >= -1 )
    {
      boundSpeedYRate = this->fields.boundSpeedYRate;
      startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
      gravityPerSecond = this->fields.gravityPerSecond;
      v4 = (float)((float)((float)(startSpeedYPerSecond + startSpeedYPerSecond) / gravityPerSecond)
                 * (float)(1.0 - powf(boundSpeedYRate, (float)(maxBoundCount + 1))))
         / (float)(1.0 - boundSpeedYRate);
    }
  }
  return moveSpeedXPerSecond * v4;
}


float __fastcall BattleDropRandomBound__GetRelativePosYFromAnimationStarted(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  int boundCount; // w8
  float startSpeedYPerSecond; // s9
  float v5; // s10
  float boundSpeedYRate; // s8
  float gravityPerSecond; // s11
  float v8; // s0
  float v9; // s1

  boundCount = this->fields.boundCount;
  if ( this->fields.maxBoundCount < boundCount )
    return this->fields.bottomPositionY;
  startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
  v5 = this->fields.elapsedTime - this->fields.delayStartTime;
  if ( (boundCount & 0x80000000) != 0 )
  {
    gravityPerSecond = this->fields.gravityPerSecond;
    v8 = powf(this->fields.boundSpeedYRate, (float)boundCount);
    v9 = 0.0;
  }
  else
  {
    boundSpeedYRate = this->fields.boundSpeedYRate;
    gravityPerSecond = this->fields.gravityPerSecond;
    v8 = powf(boundSpeedYRate, (float)boundCount);
    v9 = (float)((float)((float)(startSpeedYPerSecond + startSpeedYPerSecond) / gravityPerSecond) * (float)(1.0 - v8))
       / (float)(1.0 - boundSpeedYRate);
  }
  return (float)((float)(v5 - v9) * (float)(startSpeedYPerSecond * v8))
       + (float)((float)(v5 - v9) * (float)((float)(v5 - v9) * (float)(gravityPerSecond * -0.5)));
}


void __fastcall BattleDropRandomBound__Initialize(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boundObject; // x20
  UnityEngine_GameObject_o *transform; // x0
  BattleDropRandomBound_RangeFloat_o *moveSpeedXRange; // x1
  BattleDropRandomBound_o *v6; // x0
  const MethodInfo *v7; // x2
  float RandomFloat; // s0
  BattleDropRandomBound_RangeFloat_o *moveSpeedYRange; // x1
  BattleDropRandomBound_o *v10; // x0
  const MethodInfo *v11; // x2
  float v12; // s0
  float gravity; // s1
  BattleDropRandomBound_RangeFloat_o *delayStartTimeRange; // x1
  BattleDropRandomBound_o *v15; // x0
  const MethodInfo *v16; // x2
  float v17; // s0
  BattleDropRandomBound_RangeInt_o *boundCountRange; // x1
  BattleDropRandomBound_o *v19; // x0
  const MethodInfo *v20; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE8F0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE8F0 = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boundObject, 0LL, 0LL) )
  {
    transform = this->fields.boundObject;
    if ( !transform )
      goto LABEL_10;
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
LABEL_10:
    sub_1B64324(transform);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  moveSpeedXRange = this->fields.moveSpeedXRange;
  this->fields._startPosition = localPosition;
  RandomFloat = BattleDropRandomBound__GetRandomFloat(v6, moveSpeedXRange, v7);
  moveSpeedYRange = this->fields.moveSpeedYRange;
  this->fields.moveSpeedXPerSecond = RandomFloat * 30.0;
  v12 = BattleDropRandomBound__GetRandomFloat(v10, moveSpeedYRange, v11);
  gravity = this->fields.gravity;
  delayStartTimeRange = this->fields.delayStartTimeRange;
  this->fields.startSpeedYPerSecond = v12 * 30.0;
  this->fields.gravityPerSecond = (float)(gravity * 30.0) * 30.0;
  v17 = BattleDropRandomBound__GetRandomFloat(v15, delayStartTimeRange, v16);
  boundCountRange = this->fields.boundCountRange;
  this->fields.delayStartTime = v17;
  this->fields.maxBoundCount = BattleDropRandomBound__GetRandomInt(v19, boundCountRange, v20);
  *(_QWORD *)&this->fields.boundCount = 0LL;
}


void __fastcall BattleDropRandomBound__StopBound(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  float bottomPositionY; // s10
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.maxBoundCount >= this->fields.boundCount )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
          bottomPositionY = this->fields.bottomPositionY,
          x = localPosition.fields.x,
          z = localPosition.fields.z,
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1B64324(transform);
    }
    v8.fields.x = x;
    v8.fields.y = bottomPositionY;
    v8.fields.z = z;
    UnityEngine_Transform__set_localPosition(transform, v8, 0LL);
    this->fields.boundCount = this->fields.maxBoundCount + 1;
  }
}


void __fastcall BattleDropRandomBound__Update(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boundObject; // x20
  float elapsedTime; // s8
  UnityEngine_GameObject_o *transform; // x0
  float deltaTime; // s0
  const MethodInfo *v7; // x1
  float x; // s11
  float y; // s12
  float z; // s8
  const MethodInfo *v11; // x1
  float RelativePosXFromAnimationStarted; // s9
  const MethodInfo *v13; // x1
  float RelativePosYFromAnimationStarted; // s10
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE8F1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE8F1 = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boundObject, 0LL, 0LL) )
  {
    elapsedTime = this->fields.elapsedTime;
    if ( this->fields.delayStartTime <= elapsedTime )
    {
      transform = this->fields.boundObject;
      if ( !transform )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(transform, 1, 0LL);
      elapsedTime = this->fields.elapsedTime;
    }
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    transform = this->fields.boundObject;
    this->fields.elapsedTime = elapsedTime + deltaTime;
    if ( transform )
    {
      if ( !UnityEngine_GameObject__get_activeSelf(transform, 0LL)
        || this->fields.maxBoundCount < this->fields.boundCount )
      {
        return;
      }
      BattleDropRandomBound__CalcBoundCount(this, v7);
      x = this->fields._startPosition.fields.x;
      y = this->fields._startPosition.fields.y;
      z = this->fields._startPosition.fields.z;
      RelativePosXFromAnimationStarted = BattleDropRandomBound__GetRelativePosXFromAnimationStarted(this, v11);
      RelativePosYFromAnimationStarted = BattleDropRandomBound__GetRelativePosYFromAnimationStarted(this, v13);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        v15.fields.y = y + RelativePosYFromAnimationStarted;
        v15.fields.x = x + RelativePosXFromAnimationStarted;
        v15.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v15, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B64324(transform);
  }
}


float __fastcall BattleDropRandomBound__get_AnimElapsedSeconds(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  return this->fields.elapsedTime - this->fields.delayStartTime;
}


void __fastcall BattleDropRandomBound_RangeFloat___ctor(
        BattleDropRandomBound_RangeFloat_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FE8F3 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleDropRandomBound_Range_float___ctor__, method);
    byte_49FE8F3 = 1;
  }
  BattleDropRandomBound_Range_float____ctor(
    (BattleDropRandomBound_Range_float__o *)this,
    (const MethodInfo_3637528 *)Method_BattleDropRandomBound_Range_float___ctor__);
}


void __fastcall BattleDropRandomBound_RangeInt___ctor(BattleDropRandomBound_RangeInt_o *this, const MethodInfo *method)
{
  if ( (byte_49FE8F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleDropRandomBound_Range_int___ctor__, method);
    byte_49FE8F4 = 1;
  }
  BattleDropRandomBound_Range_int____ctor(
    (BattleDropRandomBound_Range_int__o *)this,
    (const MethodInfo_3637520 *)Method_BattleDropRandomBound_Range_int___ctor__);
}


void __fastcall BattleDropRandomBound_Range___Il2CppFullySharedGenericType____ctor(
        BattleDropRandomBound_Range_T__o *this,
        const MethodInfo_3637530 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDropRandomBound_Range_float____ctor(
        BattleDropRandomBound_Range_float__o *this,
        const MethodInfo_3637528 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDropRandomBound_Range_int____ctor(
        BattleDropRandomBound_Range_int__o *this,
        const MethodInfo_3637520 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}