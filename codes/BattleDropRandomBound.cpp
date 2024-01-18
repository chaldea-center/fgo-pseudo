void __fastcall BattleDropRandomBound___ctor(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleDropRandomBound_RangeFloat_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleDropRandomBound_RangeFloat_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleDropRandomBound_RangeFloat_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleDropRandomBound_RangeInt_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_41868B0 & 1) == 0 )
  {
    sub_B2C35C(&BattleDropRandomBound_RangeFloat_TypeInfo, method);
    sub_B2C35C(&BattleDropRandomBound_RangeInt_TypeInfo, v3);
    byte_41868B0 = 1;
  }
  v4 = (BattleDropRandomBound_RangeFloat_o *)sub_B2C42C(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v4, 0LL);
  this->fields.moveSpeedXRange = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.moveSpeedXRange,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (BattleDropRandomBound_RangeFloat_o *)sub_B2C42C(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v11, 0LL);
  this->fields.moveSpeedYRange = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.moveSpeedYRange,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (BattleDropRandomBound_RangeFloat_o *)sub_B2C42C(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v18, 0LL);
  this->fields.delayStartTimeRange = v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.delayStartTimeRange,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (BattleDropRandomBound_RangeInt_o *)sub_B2C42C(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor(v25, 0LL);
  this->fields.boundCountRange = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.boundCountRange,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleDropRandomBound__CalcBoundCount(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  int boundCount; // w8
  int v4; // w8
  float v5; // s9
  float startSpeedYPerSecond; // s10
  float gravityPerSecond; // s11
  float v8; // s0
  int32_t maxBoundCount; // w9

  boundCount = this->fields.boundCount;
  if ( boundCount <= this->fields.maxBoundCount )
  {
    do
    {
      v4 = boundCount + 1;
      v5 = this->fields.elapsedTime - this->fields.delayStartTime;
      if ( v4 < 0 )
      {
        v8 = 0.0;
      }
      else
      {
        startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
        gravityPerSecond = this->fields.gravityPerSecond;
        v8 = (float)((float)((float)(startSpeedYPerSecond + startSpeedYPerSecond) / gravityPerSecond)
                   * (float)(1.0 - powf(this->fields.boundSpeedYRate, (float)v4)))
           / (float)(1.0 - this->fields.boundSpeedYRate);
      }
      if ( v5 < v8 )
        break;
      maxBoundCount = this->fields.maxBoundCount;
      boundCount = this->fields.boundCount + 1;
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
  float startSpeedYPerSecond; // s8
  float gravityPerSecond; // s9

  if ( (targetBoundCount & 0x80000000) != 0 )
    return 0.0;
  startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
  gravityPerSecond = this->fields.gravityPerSecond;
  return (float)((float)((float)(startSpeedYPerSecond + startSpeedYPerSecond) / gravityPerSecond)
               * (float)(1.0 - powf(this->fields.boundSpeedYRate, (float)targetBoundCount)))
       / (float)(1.0 - this->fields.boundSpeedYRate);
}


float __fastcall BattleDropRandomBound__GetRandomFloat(
        BattleDropRandomBound_o *this,
        BattleDropRandomBound_RangeFloat_o *rangeFloat,
        const MethodInfo *method)
{
  float result; // s0
  float max; // s1

  if ( !rangeFloat )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  result = rangeInt->fields.min;
  max = rangeInt->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range_35348680(result, max + 1, 0LL);
  return result;
}


float __fastcall BattleDropRandomBound__GetRelativePosXFromAnimationStarted(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  int32_t maxBoundCount; // w8
  float moveSpeedXPerSecond; // s8
  int v4; // w8
  float startSpeedYPerSecond; // s9
  float gravityPerSecond; // s10
  float v7; // s0

  maxBoundCount = this->fields.maxBoundCount;
  moveSpeedXPerSecond = this->fields.moveSpeedXPerSecond;
  if ( maxBoundCount >= this->fields.boundCount )
  {
    v7 = this->fields.elapsedTime - this->fields.delayStartTime;
  }
  else
  {
    v4 = maxBoundCount + 1;
    if ( v4 < 0 )
    {
      v7 = 0.0;
    }
    else
    {
      startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
      gravityPerSecond = this->fields.gravityPerSecond;
      v7 = (float)((float)((float)(startSpeedYPerSecond + startSpeedYPerSecond) / gravityPerSecond)
                 * (float)(1.0 - powf(this->fields.boundSpeedYRate, (float)v4)))
         / (float)(1.0 - this->fields.boundSpeedYRate);
    }
  }
  return moveSpeedXPerSecond * v7;
}


float __fastcall BattleDropRandomBound__GetRelativePosYFromAnimationStarted(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  int boundCount; // w8
  float v4; // s8
  float *v5; // x19
  float startSpeedYPerSecond; // s9
  float *p_gravityPerSecond; // x20
  float gravityPerSecond; // s10
  float v9; // s1
  float boundSpeedYRate; // s0
  float v11; // s1
  float *p_startSpeedYPerSecond; // x9
  float v13; // s9

  boundCount = this->fields.boundCount;
  if ( this->fields.maxBoundCount < boundCount )
    return this->fields.bottomPositionY;
  v4 = this->fields.elapsedTime - this->fields.delayStartTime;
  if ( (boundCount & 0x80000000) != 0 )
  {
    boundSpeedYRate = this->fields.boundSpeedYRate;
    p_startSpeedYPerSecond = &this->fields.startSpeedYPerSecond;
    p_gravityPerSecond = &this->fields.gravityPerSecond;
    v11 = 0.0;
  }
  else
  {
    v5 = &this->fields.startSpeedYPerSecond;
    startSpeedYPerSecond = this->fields.startSpeedYPerSecond;
    p_gravityPerSecond = &this->fields.gravityPerSecond;
    gravityPerSecond = this->fields.gravityPerSecond;
    v9 = powf(this->fields.boundSpeedYRate, (float)boundCount);
    boundSpeedYRate = *(v5 - 7);
    boundCount = *((_DWORD *)v5 - 2);
    v11 = (float)((float)((float)(startSpeedYPerSecond + startSpeedYPerSecond) / gravityPerSecond) * (float)(1.0 - v9))
        / (float)(1.0 - boundSpeedYRate);
    p_startSpeedYPerSecond = v5;
  }
  v13 = *p_startSpeedYPerSecond;
  return (float)((float)(v4 - v11) * (float)(v13 * powf(boundSpeedYRate, (float)boundCount)))
       + (float)((float)(v4 - v11) * (float)((float)(v4 - v11) * (float)(*p_gravityPerSecond * -0.5)));
}


void __fastcall BattleDropRandomBound__Initialize(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boundObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  BattleDropRandomBound_RangeFloat_o *moveSpeedXRange; // x1
  BattleDropRandomBound_o *v7; // x0
  const MethodInfo *v8; // x2
  float RandomFloat; // s0
  BattleDropRandomBound_RangeFloat_o *moveSpeedYRange; // x1
  BattleDropRandomBound_o *v11; // x0
  const MethodInfo *v12; // x2
  float v13; // s0
  float gravity; // s1
  BattleDropRandomBound_RangeFloat_o *delayStartTimeRange; // x1
  BattleDropRandomBound_o *v16; // x0
  const MethodInfo *v17; // x2
  float v18; // s0
  BattleDropRandomBound_RangeInt_o *boundCountRange; // x1
  BattleDropRandomBound_o *v20; // x0
  const MethodInfo *v21; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41868AE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41868AE = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boundObject, 0LL, 0LL) )
  {
    transform = this->fields.boundObject;
    if ( !transform )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
LABEL_11:
    sub_B2C434(transform, v4);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  moveSpeedXRange = this->fields.moveSpeedXRange;
  this->fields._startPosition = localPosition;
  RandomFloat = BattleDropRandomBound__GetRandomFloat(v7, moveSpeedXRange, v8);
  moveSpeedYRange = this->fields.moveSpeedYRange;
  this->fields.moveSpeedXPerSecond = RandomFloat * 30.0;
  v13 = BattleDropRandomBound__GetRandomFloat(v11, moveSpeedYRange, v12);
  gravity = this->fields.gravity;
  delayStartTimeRange = this->fields.delayStartTimeRange;
  this->fields.startSpeedYPerSecond = v13 * 30.0;
  this->fields.gravityPerSecond = (float)(gravity * 30.0) * 30.0;
  v18 = BattleDropRandomBound__GetRandomFloat(v16, delayStartTimeRange, v17);
  boundCountRange = this->fields.boundCountRange;
  this->fields.delayStartTime = v18;
  this->fields.maxBoundCount = BattleDropRandomBound__GetRandomInt(v20, boundCountRange, v21);
  *(_QWORD *)&this->fields.boundCount = 0LL;
}


void __fastcall BattleDropRandomBound__StopBound(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float bottomPositionY; // s10
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

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
      sub_B2C434(transform, v4);
    }
    v9.fields.x = x;
    v9.fields.y = bottomPositionY;
    v9.fields.z = z;
    UnityEngine_Transform__set_localPosition(transform, v9, 0LL);
    this->fields.boundCount = this->fields.maxBoundCount + 1;
  }
}


void __fastcall BattleDropRandomBound__Update(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boundObject; // x20
  __int64 v4; // x1
  float elapsedTime; // s8
  UnityEngine_GameObject_o *transform; // x0
  float deltaTime; // s0
  const MethodInfo *v8; // x1
  float x; // s11
  float y; // s12
  float z; // s8
  const MethodInfo *v12; // x1
  float RelativePosXFromAnimationStarted; // s9
  const MethodInfo *v14; // x1
  float RelativePosYFromAnimationStarted; // s10
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41868AF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41868AF = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(boundObject, 0LL, 0LL) )
  {
    elapsedTime = this->fields.elapsedTime;
    if ( this->fields.delayStartTime <= elapsedTime )
    {
      transform = this->fields.boundObject;
      if ( !transform )
        goto LABEL_16;
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
      BattleDropRandomBound__CalcBoundCount(this, v8);
      x = this->fields._startPosition.fields.x;
      y = this->fields._startPosition.fields.y;
      z = this->fields._startPosition.fields.z;
      RelativePosXFromAnimationStarted = BattleDropRandomBound__GetRelativePosXFromAnimationStarted(this, v12);
      RelativePosYFromAnimationStarted = BattleDropRandomBound__GetRelativePosYFromAnimationStarted(this, v14);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        v16.fields.y = y + RelativePosYFromAnimationStarted;
        v16.fields.x = x + RelativePosXFromAnimationStarted;
        v16.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v16, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B2C434(transform, v4);
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
  if ( (byte_4186A6B & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleDropRandomBound_Range_float___ctor__, method);
    byte_4186A6B = 1;
  }
  BattleDropRandomBound_Range_float____ctor(
    (BattleDropRandomBound_Range_float__o *)this,
    (const MethodInfo_2C06E30 *)Method_BattleDropRandomBound_Range_float___ctor__);
}


void __fastcall BattleDropRandomBound_RangeInt___ctor(BattleDropRandomBound_RangeInt_o *this, const MethodInfo *method)
{
  if ( (byte_4186A6C & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleDropRandomBound_Range_int___ctor__, method);
    byte_4186A6C = 1;
  }
  BattleDropRandomBound_Range_int____ctor(
    (BattleDropRandomBound_Range_int__o *)this,
    (const MethodInfo_2C06E00 *)Method_BattleDropRandomBound_Range_int___ctor__);
}


void __fastcall BattleDropRandomBound_Range_float____ctor(
        BattleDropRandomBound_Range_float__o *this,
        const MethodInfo_2C06E30 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDropRandomBound_Range_int____ctor(
        BattleDropRandomBound_Range_int__o *this,
        const MethodInfo_2C06E00 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDropRandomBound_Range_object____ctor(
        BattleDropRandomBound_Range_T__o *this,
        const MethodInfo_2C06E18 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}