void __fastcall BattleDropRandomBound___ctor(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  BattleDropRandomBound_RangeFloat_o *v7; // x20
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  BattleDropRandomBound_RangeFloat_o *v18; // x20
  const MethodInfo *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  BattleDropRandomBound_RangeFloat_o *v29; // x20
  const MethodInfo *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  BattleDropRandomBound_RangeInt_o *v40; // x20
  const MethodInfo *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4B1877B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDropRandomBound_RangeFloat_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleDropRandomBound_RangeInt_TypeInfo, v5, v6);
    byte_4B1877B = 1;
  }
  v7 = (BattleDropRandomBound_RangeFloat_o *)sub_1BCAA2C(BattleDropRandomBound_RangeFloat_TypeInfo, method, v2, v3);
  BattleDropRandomBound_RangeFloat___ctor(v7, v8);
  this->fields.moveSpeedXRange = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.moveSpeedXRange, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  v18 = (BattleDropRandomBound_RangeFloat_o *)sub_1BCAA2C(BattleDropRandomBound_RangeFloat_TypeInfo, v15, v16, v17);
  BattleDropRandomBound_RangeFloat___ctor(v18, v19);
  this->fields.moveSpeedYRange = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.moveSpeedYRange, (int64_t)v18, v20, v21, v22, v23, v24, v25);
  v29 = (BattleDropRandomBound_RangeFloat_o *)sub_1BCAA2C(BattleDropRandomBound_RangeFloat_TypeInfo, v26, v27, v28);
  BattleDropRandomBound_RangeFloat___ctor(v29, v30);
  this->fields.delayStartTimeRange = v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.delayStartTimeRange,
    (int64_t)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v40 = (BattleDropRandomBound_RangeInt_o *)sub_1BCAA2C(BattleDropRandomBound_RangeInt_TypeInfo, v37, v38, v39);
  BattleDropRandomBound_RangeInt___ctor(v40, v41);
  this->fields.boundCountRange = v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.boundCountRange, (int64_t)v40, v42, v43, v44, v45, v46, v47);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  result = rangeInt->fields.min;
  max = rangeInt->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range_70113984(result, max + 1, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Object_o *boundObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  BattleDropRandomBound_RangeFloat_o *moveSpeedXRange; // x1
  BattleDropRandomBound_o *v8; // x0
  const MethodInfo *v9; // x2
  float RandomFloat; // s0
  BattleDropRandomBound_RangeFloat_o *moveSpeedYRange; // x1
  BattleDropRandomBound_o *v12; // x0
  const MethodInfo *v13; // x2
  float v14; // s0
  float gravity; // s1
  BattleDropRandomBound_RangeFloat_o *delayStartTimeRange; // x1
  BattleDropRandomBound_o *v17; // x0
  const MethodInfo *v18; // x2
  float v19; // s0
  BattleDropRandomBound_RangeInt_o *boundCountRange; // x1
  BattleDropRandomBound_o *v21; // x0
  const MethodInfo *v22; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B18779 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18779 = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(transform, v5);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  moveSpeedXRange = this->fields.moveSpeedXRange;
  this->fields._startPosition = localPosition;
  RandomFloat = BattleDropRandomBound__GetRandomFloat(v8, moveSpeedXRange, v9);
  moveSpeedYRange = this->fields.moveSpeedYRange;
  this->fields.moveSpeedXPerSecond = RandomFloat * 30.0;
  v14 = BattleDropRandomBound__GetRandomFloat(v12, moveSpeedYRange, v13);
  gravity = this->fields.gravity;
  delayStartTimeRange = this->fields.delayStartTimeRange;
  this->fields.startSpeedYPerSecond = v14 * 30.0;
  this->fields.gravityPerSecond = (float)(gravity * 30.0) * 30.0;
  v19 = BattleDropRandomBound__GetRandomFloat(v17, delayStartTimeRange, v18);
  boundCountRange = this->fields.boundCountRange;
  this->fields.delayStartTime = v19;
  this->fields.maxBoundCount = BattleDropRandomBound__GetRandomInt(v21, boundCountRange, v22);
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
      sub_1BCAA3C(transform, v4);
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
  __int64 v2; // x2
  UnityEngine_Object_o *boundObject; // x20
  __int64 v5; // x1
  float elapsedTime; // s8
  UnityEngine_GameObject_o *transform; // x0
  float deltaTime; // s0
  const MethodInfo *v9; // x1
  float x; // s11
  float y; // s12
  float z; // s8
  const MethodInfo *v13; // x1
  float RelativePosXFromAnimationStarted; // s9
  const MethodInfo *v15; // x1
  float RelativePosYFromAnimationStarted; // s10
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1877A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1877A = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      BattleDropRandomBound__CalcBoundCount(this, v9);
      x = this->fields._startPosition.fields.x;
      y = this->fields._startPosition.fields.y;
      z = this->fields._startPosition.fields.z;
      RelativePosXFromAnimationStarted = BattleDropRandomBound__GetRelativePosXFromAnimationStarted(this, v13);
      RelativePosYFromAnimationStarted = BattleDropRandomBound__GetRelativePosYFromAnimationStarted(this, v15);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        v17.fields.y = y + RelativePosYFromAnimationStarted;
        v17.fields.x = x + RelativePosXFromAnimationStarted;
        v17.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v17, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(transform, v5);
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
  __int64 v2; // x2

  if ( (byte_4B1877C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleDropRandomBound_Range_float___ctor__, method, v2);
    byte_4B1877C = 1;
  }
  BattleDropRandomBound_Range_float____ctor(
    (BattleDropRandomBound_Range_float__o *)this,
    (const MethodInfo_3728E10 *)Method_BattleDropRandomBound_Range_float___ctor__);
}


void __fastcall BattleDropRandomBound_RangeInt___ctor(BattleDropRandomBound_RangeInt_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1877D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleDropRandomBound_Range_int___ctor__, method, v2);
    byte_4B1877D = 1;
  }
  BattleDropRandomBound_Range_int____ctor(
    (BattleDropRandomBound_Range_int__o *)this,
    (const MethodInfo_3728E08 *)Method_BattleDropRandomBound_Range_int___ctor__);
}


void __fastcall BattleDropRandomBound_Range___Il2CppFullySharedGenericType____ctor(
        BattleDropRandomBound_Range_T__o *this,
        const MethodInfo_3728E18 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDropRandomBound_Range_float____ctor(
        BattleDropRandomBound_Range_float__o *this,
        const MethodInfo_3728E10 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDropRandomBound_Range_int____ctor(
        BattleDropRandomBound_Range_int__o *this,
        const MethodInfo_3728E08 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}