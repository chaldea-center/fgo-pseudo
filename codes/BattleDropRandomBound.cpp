void __fastcall BattleDropRandomBound___ctor(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleDropRandomBound_RangeFloat_o *v4; // x20
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  BattleDropRandomBound_RangeFloat_o *v12; // x20
  const MethodInfo *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  BattleDropRandomBound_RangeFloat_o *v20; // x20
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BattleDropRandomBound_RangeInt_o *v28; // x20
  const MethodInfo *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1

  if ( (byte_4BFFE0A & 1) == 0 )
  {
    sub_1C2E12C(&BattleDropRandomBound_RangeFloat_TypeInfo, method);
    sub_1C2E12C(&BattleDropRandomBound_RangeInt_TypeInfo, v3);
    byte_4BFFE0A = 1;
  }
  v4 = (BattleDropRandomBound_RangeFloat_o *)sub_1C2E378(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v4, v5);
  this->fields.moveSpeedXRange = v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.moveSpeedXRange, (int64_t)v4, v6, v7, v8, v9, v10, v11);
  v12 = (BattleDropRandomBound_RangeFloat_o *)sub_1C2E378(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v12, v13);
  this->fields.moveSpeedYRange = v12;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.moveSpeedYRange, (int64_t)v12, v14, v15, v16, v17, v18, v19);
  v20 = (BattleDropRandomBound_RangeFloat_o *)sub_1C2E378(BattleDropRandomBound_RangeFloat_TypeInfo);
  BattleDropRandomBound_RangeFloat___ctor(v20, v21);
  this->fields.delayStartTimeRange = v20;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.delayStartTimeRange,
    (int64_t)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (BattleDropRandomBound_RangeInt_o *)sub_1C2E378(BattleDropRandomBound_RangeInt_TypeInfo);
  BattleDropRandomBound_RangeInt___ctor(v28, v29);
  this->fields.boundCountRange = v28;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.boundCountRange, (int64_t)v28, v30, v31, v32, v33, v34, v35);
  if ( !byte_4BF7C8A )
  {
    sub_1C2E12C(&UnityEngine_Vector2_TypeInfo, v36);
    byte_4BF7C8A = 1;
  }
  this->fields.initScatterPos = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleDropRandomBound__CalcBoundCount(BattleDropRandomBound_o *this, const MethodInfo *method)
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
float __fastcall BattleDropRandomBound__GetBoundStartTime(
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


float __fastcall BattleDropRandomBound__GetRandomFloat(
        BattleDropRandomBound_RangeFloat_o *rangeFloat,
        const MethodInfo *method)
{
  float result; // s0
  float max; // s1

  if ( !rangeFloat )
    sub_1C2E388(0LL, method);
  result = rangeFloat->fields.min;
  max = rangeFloat->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range(result, max, 0LL);
  return result;
}


int32_t __fastcall BattleDropRandomBound__GetRandomInt(
        BattleDropRandomBound_RangeInt_o *rangeInt,
        const MethodInfo *method)
{
  int32_t result; // w0
  int32_t max; // w8

  if ( !rangeInt )
    sub_1C2E388(0LL, method);
  result = rangeInt->fields.min;
  max = rangeInt->fields.max;
  if ( result != max )
    return UnityEngine_Random__Range_70949460(result, max + 1, 0LL);
  return result;
}


float __fastcall BattleDropRandomBound__GetRelativePosXFromAnimationStarted(
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


float __fastcall BattleDropRandomBound__GetRelativePosYFromAnimationStarted(
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


void __fastcall BattleDropRandomBound__Initialize(
        BattleDropRandomBound_o *this,
        UnityEngine_ScriptableObject_o *scriptableObject,
        bool isRandomShiftInitialPosition,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *boundObject; // x21
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *transform; // x0
  const MethodInfo *v18; // x1
  BattleDropRandomBound_RangeFloat_o *MoveSpeedXRange; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  BattleDropRandomBound_RangeFloat_o *MoveSpeedYRange; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  BattleDropRandomBound_RangeFloat_o *DelayStartTimeRange; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  BattleDropRandomBound_RangeInt_o *BoundCountRange; // x0
  const MethodInfo *v30; // x1
  UnityEngine_Object_o *overwriteSetting; // x20
  struct BattleDropRandomBoundOverwriteSetting_o *v32; // x8
  float RandomFloat; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v34; // x8
  float v35; // s8
  float v36; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v37; // x8
  float v38; // s9
  float v39; // s0
  float cosx; // [xsp+8h] [xbp-48h] BYREF
  float sinx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BFFE08 & 1) == 0 )
  {
    sub_1C2E12C(&BattleDropRandomBoundOverwriteSetting_TypeInfo, scriptableObject);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    byte_4BFFE08 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scriptableObject, 0LL, 0LL) )
  {
    if ( scriptableObject )
    {
      methodPtr_low = LOBYTE(BattleDropRandomBoundOverwriteSetting_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(scriptableObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (BattleDropRandomBoundOverwriteSetting_c *)scriptableObject->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleDropRandomBoundOverwriteSetting_TypeInfo )
      {
        this->fields.overwriteSetting = (struct BattleDropRandomBoundOverwriteSetting_o *)scriptableObject;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&this->fields.overwriteSetting,
          (int64_t)scriptableObject,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
      }
    }
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boundObject, 0LL, 0LL) )
  {
    transform = this->fields.boundObject;
    if ( !transform )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
LABEL_25:
    sub_1C2E388(transform, v16);
  this->fields.startPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  MoveSpeedXRange = BattleDropRandomBound__get_MoveSpeedXRange(this, v18);
  this->fields.moveSpeedXPerSecond = BattleDropRandomBound__GetRandomFloat(MoveSpeedXRange, v20) * 30.0;
  MoveSpeedYRange = BattleDropRandomBound__get_MoveSpeedYRange(this, v21);
  this->fields.startSpeedYPerSecond = BattleDropRandomBound__GetRandomFloat(MoveSpeedYRange, v23) * 30.0;
  this->fields.gravityPerSecond = (float)(BattleDropRandomBound__get_Gravity(this, v24) * 30.0) * 30.0;
  DelayStartTimeRange = BattleDropRandomBound__get_DelayStartTimeRange(this, v25);
  this->fields.delayStartTime = BattleDropRandomBound__GetRandomFloat(DelayStartTimeRange, v27);
  BoundCountRange = BattleDropRandomBound__get_BoundCountRange(this, v28);
  this->fields.maxBoundCount = BattleDropRandomBound__GetRandomInt(BoundCountRange, v30);
  *(_QWORD *)&this->fields.boundCount = 0LL;
  if ( isRandomShiftInitialPosition )
  {
    overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      v32 = this->fields.overwriteSetting;
      if ( v32 )
      {
        RandomFloat = BattleDropRandomBound__GetRandomFloat(v32->fields.initScatterPosBaseRectYRange, v16);
        v34 = this->fields.overwriteSetting;
        if ( v34 )
        {
          v35 = RandomFloat;
          v36 = BattleDropRandomBound__GetRandomFloat(
                  *(BattleDropRandomBound_RangeFloat_o **)&v34->fields.initScatterPosBaseRectAngle,
                  v16);
          v37 = this->fields.overwriteSetting;
          if ( v37 )
          {
            v38 = v36;
            sincosf(*(float *)&v37[1].klass * 0.017453, &sinx, &cosx);
            v39 = (float)(v35 * sinx) + (float)(v38 * cosx);
            this->fields.initScatterPos.fields.x = (float)(v35 * cosx) - (float)(v38 * sinx);
            this->fields.initScatterPos.fields.y = v39;
            return;
          }
        }
      }
      goto LABEL_25;
    }
  }
}


void __fastcall BattleDropRandomBound__SetAdditionalDelayTime(
        BattleDropRandomBound_o *this,
        float waitTime,
        const MethodInfo *method)
{
  this->fields.additionalDelayStartTime = waitTime;
}


void __fastcall BattleDropRandomBound__StopBound(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.maxBoundCount >= this->fields.boundCount )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
          x = localPosition.fields.x,
          z = localPosition.fields.z,
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1C2E388(transform, v4);
    }
    v8.fields.y = 0.0;
    v8.fields.x = x;
    v8.fields.z = z;
    UnityEngine_Transform__set_localPosition(transform, v8, 0LL);
    this->fields.boundCount = this->fields.maxBoundCount + 1;
  }
}


void __fastcall BattleDropRandomBound__Update(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *boundObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x1
  float elapsedTime; // s8
  float deltaTime; // s0
  const MethodInfo *v9; // x1
  System_Action_o *AppearEffectCallback_k__BackingField; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BFFE09 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFE09 = 1;
  }
  boundObject = (UnityEngine_Object_o *)this->fields.boundObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(boundObject, 0LL, 0LL) )
  {
    v5 = this->fields.boundObject;
    if ( !v5 )
      goto LABEL_19;
    if ( UnityEngine_GameObject__get_activeSelf(v5, 0LL) )
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
          ActionExtensions__Call(AppearEffectCallback_k__BackingField, 0LL);
          this->fields._AppearEffectCallback_k__BackingField = 0LL;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&this->fields._AppearEffectCallback_k__BackingField,
            0LL,
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
          UnityEngine_GameObject__SetActive(v5, 1, 0LL);
          return;
        }
        goto LABEL_19;
      }
    }
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v5 = this->fields.boundObject;
    this->fields.elapsedTime = elapsedTime + deltaTime;
    if ( v5 )
    {
      if ( UnityEngine_GameObject__get_activeSelf(v5, 0LL) && this->fields.maxBoundCount >= this->fields.boundCount )
        BattleDropRandomBound__UpdateLocalPosition(this, v9);
      return;
    }
LABEL_19:
    sub_1C2E388(v5, v4);
  }
}


void __fastcall BattleDropRandomBound__UpdateLocalPosition(BattleDropRandomBound_o *this, const MethodInfo *method)
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1C2E388(0LL, v11);
  v12.fields.y = y + RelativePosYFromAnimationStarted;
  v12.fields.x = x + RelativePosXFromAnimationStarted;
  v12.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v12, 0LL);
}


float __fastcall BattleDropRandomBound__get_AnimElapsedSeconds(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  return this->fields.elapsedTime - (float)(this->fields.delayStartTime + this->fields.additionalDelayStartTime);
}


System_Action_o *__fastcall BattleDropRandomBound__get_AppearEffectCallback(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  return this->fields._AppearEffectCallback_k__BackingField;
}


BattleDropRandomBound_RangeInt_o *__fastcall BattleDropRandomBound__get_BoundCountRange(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  BattleDropRandomBound_RangeInt_o **p_boundSpeedYRate; // x8

  if ( (byte_4BFFE05 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFE05 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2E388(v4, v5);
    p_boundSpeedYRate = (BattleDropRandomBound_RangeInt_o **)&v6->fields.boundSpeedYRate;
  }
  else
  {
    p_boundSpeedYRate = &this->fields.boundCountRange;
  }
  return *p_boundSpeedYRate;
}


UnityEngine_GameObject_o *__fastcall BattleDropRandomBound__get_BoundObject(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  return this->fields.boundObject;
}


float __fastcall BattleDropRandomBound__get_BoundSpeedYRate(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  float *p_initScatterPosBaseRectXRange; // x8

  if ( (byte_4BFFE06 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFE06 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2E388(v4, v5);
    p_initScatterPosBaseRectXRange = (float *)&v6->fields.initScatterPosBaseRectXRange;
  }
  else
  {
    p_initScatterPosBaseRectXRange = &this->fields.boundSpeedYRate;
  }
  return *p_initScatterPosBaseRectXRange;
}


BattleDropRandomBound_RangeFloat_o *__fastcall BattleDropRandomBound__get_DelayStartTimeRange(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  BattleDropRandomBound_RangeFloat_o **p_boundCountRange; // x8

  if ( (byte_4BFFE04 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFE04 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2E388(v4, v5);
    p_boundCountRange = (BattleDropRandomBound_RangeFloat_o **)&v6->fields.boundCountRange;
  }
  else
  {
    p_boundCountRange = &this->fields.delayStartTimeRange;
  }
  return *p_boundCountRange;
}


float __fastcall BattleDropRandomBound__get_FixedDelayStartTime(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  return this->fields.delayStartTime + this->fields.additionalDelayStartTime;
}


float __fastcall BattleDropRandomBound__get_Gravity(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  float *p_moveSpeedXRange; // x8

  if ( (byte_4BFFE01 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFE01 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2E388(v4, v5);
    p_moveSpeedXRange = (float *)&v6->fields.moveSpeedXRange;
  }
  else
  {
    p_moveSpeedXRange = &this->fields.gravity;
  }
  return *p_moveSpeedXRange;
}


float __fastcall BattleDropRandomBound__get_InitialHeight(BattleDropRandomBound_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float v6; // s0
  struct BattleDropRandomBoundOverwriteSetting_o *v7; // x8

  if ( (byte_4BFFE07 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFE07 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
  v6 = 0.0;
  if ( v4 )
  {
    v7 = this->fields.overwriteSetting;
    if ( !v7 )
      sub_1C2E388(v4, v5);
    v6 = *((float *)&v7->fields.initScatterPosBaseRectXRange + 1);
  }
  return v6 + this->fields.initScatterPos.fields.y;
}


BattleDropRandomBound_RangeFloat_o *__fastcall BattleDropRandomBound__get_MoveSpeedXRange(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  BattleDropRandomBound_RangeFloat_o **p_moveSpeedYRange; // x8

  if ( (byte_4BFFE02 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFE02 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2E388(v4, v5);
    p_moveSpeedYRange = &v6->fields.moveSpeedYRange;
  }
  else
  {
    p_moveSpeedYRange = &this->fields.moveSpeedXRange;
  }
  return *p_moveSpeedYRange;
}


BattleDropRandomBound_RangeFloat_o *__fastcall BattleDropRandomBound__get_MoveSpeedYRange(
        BattleDropRandomBound_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropRandomBoundOverwriteSetting_o *v6; // x8
  BattleDropRandomBound_RangeFloat_o **p_delayStartTimeRange; // x8

  if ( (byte_4BFFE03 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFE03 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2E388(v4, v5);
    p_delayStartTimeRange = &v6->fields.delayStartTimeRange;
  }
  else
  {
    p_delayStartTimeRange = &this->fields.moveSpeedYRange;
  }
  return *p_delayStartTimeRange;
}


void __fastcall BattleDropRandomBound__set_AppearEffectCallback(
        BattleDropRandomBound_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AppearEffectCallback_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._AppearEffectCallback_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleDropRandomBound_RangeFloat___ctor(
        BattleDropRandomBound_RangeFloat_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BFFE0B & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleDropRandomBound_Range_float___ctor__, method);
    byte_4BFFE0B = 1;
  }
  BattleDropRandomBound_Range_float____ctor(
    (BattleDropRandomBound_Range_float__o *)this,
    (const MethodInfo_381DB84 *)Method_BattleDropRandomBound_Range_float___ctor__);
}


void __fastcall BattleDropRandomBound_RangeInt___ctor(BattleDropRandomBound_RangeInt_o *this, const MethodInfo *method)
{
  if ( (byte_4BFFE0C & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleDropRandomBound_Range_int___ctor__, method);
    byte_4BFFE0C = 1;
  }
  BattleDropRandomBound_Range_int____ctor(
    (BattleDropRandomBound_Range_int__o *)this,
    (const MethodInfo_381DB7C *)Method_BattleDropRandomBound_Range_int___ctor__);
}


void __fastcall BattleDropRandomBound_Range___Il2CppFullySharedGenericType____ctor(
        BattleDropRandomBound_Range_T__o *this,
        const MethodInfo_381DB8C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDropRandomBound_Range_float____ctor(
        BattleDropRandomBound_Range_float__o *this,
        const MethodInfo_381DB84 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDropRandomBound_Range_int____ctor(
        BattleDropRandomBound_Range_int__o *this,
        const MethodInfo_381DB7C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}