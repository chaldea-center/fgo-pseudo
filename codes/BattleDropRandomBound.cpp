void __fastcall BattleDropRandomBound___ctor(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BattleDropRandomBound_RangeFloat_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  BattleDropRandomBound_RangeFloat_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  BattleDropRandomBound_RangeFloat_o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  BattleDropRandomBound_RangeInt_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_42134D9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleDropRandomBound_RangeFloat_TypeInfo, method);
    sub_B0D8A4(&BattleDropRandomBound_RangeInt_TypeInfo, v4);
    byte_42134D9 = 1;
  }
  v5 = (BattleDropRandomBound_RangeFloat_o *)sub_B0D974(BattleDropRandomBound_RangeFloat_TypeInfo, method, v2);
  BattleDropRandomBound_RangeFloat___ctor(v5, 0LL);
  this->fields.moveSpeedXRange = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.moveSpeedXRange,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v14 = (BattleDropRandomBound_RangeFloat_o *)sub_B0D974(BattleDropRandomBound_RangeFloat_TypeInfo, v12, v13);
  BattleDropRandomBound_RangeFloat___ctor(v14, 0LL);
  this->fields.moveSpeedYRange = v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.moveSpeedYRange,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (BattleDropRandomBound_RangeFloat_o *)sub_B0D974(BattleDropRandomBound_RangeFloat_TypeInfo, v21, v22);
  BattleDropRandomBound_RangeFloat___ctor(v23, 0LL);
  this->fields.delayStartTimeRange = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.delayStartTimeRange,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v32 = (BattleDropRandomBound_RangeInt_o *)sub_B0D974(BattleDropRandomBound_RangeInt_TypeInfo, v30, v31);
  BattleDropRandomBound_RangeInt___ctor(v32, 0LL);
  this->fields.boundCountRange = v32;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.boundCountRange,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  result = rangeInt->fields.min;
  max = rangeInt->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range_34969060(result, max + 1, 0LL);
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

  if ( (byte_42134D7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42134D7 = 1;
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
    sub_B0D97C(transform);
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
      sub_B0D97C(transform);
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

  if ( (byte_42134D8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42134D8 = 1;
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
LABEL_16:
    sub_B0D97C(transform);
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
  if ( (byte_42138F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleDropRandomBound_Range_float___ctor__, method);
    byte_42138F8 = 1;
  }
  BattleDropRandomBound_Range_float____ctor(
    (BattleDropRandomBound_Range_float__o *)this,
    (const MethodInfo_2DD37E0 *)Method_BattleDropRandomBound_Range_float___ctor__);
}


void __fastcall BattleDropRandomBound_RangeInt___ctor(BattleDropRandomBound_RangeInt_o *this, const MethodInfo *method)
{
  if ( (byte_42138F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleDropRandomBound_Range_int___ctor__, method);
    byte_42138F9 = 1;
  }
  BattleDropRandomBound_Range_int____ctor(
    (BattleDropRandomBound_Range_int__o *)this,
    (const MethodInfo_2DD37B0 *)Method_BattleDropRandomBound_Range_int___ctor__);
}


void __fastcall BattleDropRandomBound_Range_float____ctor(
        BattleDropRandomBound_Range_float__o *this,
        const MethodInfo_2DD37E0 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDropRandomBound_Range_int____ctor(
        BattleDropRandomBound_Range_int__o *this,
        const MethodInfo_2DD37B0 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDropRandomBound_Range_object____ctor(
        BattleDropRandomBound_Range_T__o *this,
        const MethodInfo_2DD37C8 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}