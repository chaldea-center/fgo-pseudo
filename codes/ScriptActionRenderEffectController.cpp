void ScriptActionRenderEffectController___ctor(
        ScriptActionRenderEffectController_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.timerMax = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.material_ = material;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.material_, (int32_t)material, v5, v6);
}


float ScriptActionRenderEffectController__FloatLinear(float src, float dest, float rate, const MethodInfo *method)
{
  return (float)((float)(dest - src) * rate) + src;
}


bool ScriptActionRenderEffectController__IsBusy(ScriptActionRenderEffectController_o *this, const MethodInfo *method)
{
  return this->fields.isEnable;
}


void ScriptActionRenderEffectController__OnStop(
        ScriptActionRenderEffectController_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  struct ScriptActionRenderEffectController_ReflectionFunction_o *reflectionFunction; // x8
  struct ScriptActionRenderEffectController_StopFunction_o *stopFunction; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  reflectionFunction = this->fields.reflectionFunction;
  this->fields.timerCount = this->fields.timerMax;
  if ( reflectionFunction )
    ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *, float))reflectionFunction->fields.invoke_impl)(
      reflectionFunction->fields.method_code,
      reflectionFunction->fields.method,
      method,
      1.0);
  if ( isRequest )
  {
    stopFunction = this->fields.stopFunction;
    if ( stopFunction )
    {
      ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))stopFunction->fields.invoke_impl)(
        stopFunction->fields.method_code,
        stopFunction->fields.method,
        method);
      this->fields.stopFunction = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.stopFunction, 0, v7, v8);
    }
  }
  *(_WORD *)&this->fields.isEnable = 0;
}


// local variable allocation has failed, the output may be wrong!
void ScriptActionRenderEffectController__Reflection(
        ScriptActionRenderEffectController_o *this,
        float rate,
        const MethodInfo *method)
{
  struct ScriptActionRenderEffectController_ReflectionFunction_o *reflectionFunction; // x8
  float v4; // s1
  bool v5; // nf

  reflectionFunction = this->fields.reflectionFunction;
  if ( reflectionFunction )
  {
    v4 = fminf(rate, 1.0);
    v5 = rate < 0.0;
    rate = 0.0;
    if ( !v5 )
      rate = v4;
    ((void (__fastcall *)(intptr_t, intptr_t, long double))reflectionFunction->fields.invoke_impl)(
      reflectionFunction->fields.method_code,
      reflectionFunction->fields.method,
      *(long double *)&rate);
  }
}


void ScriptActionRenderEffectController__SetDisable(
        ScriptActionRenderEffectController_o *this,
        const MethodInfo *method)
{
  this->fields.isEnable = 0;
}


void ScriptActionRenderEffectController__SetGaussianBlur(
        ScriptActionRenderEffectController_o *this,
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x20
  System_Single_array *BlurFactors; // x2

  if ( (byte_4C44C91 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16142/*"_BlurFactor"*/);
    byte_4C44C91 = 1;
  }
  ScriptActionRenderEffectController_EffectParamBase__SetSampleRange(this->fields.material_, sampleRange, 0);
  material = this->fields.material_;
  BlurFactors = ScriptActionRenderEffectController_GaussianBlurParam__GetBlurFactors(sampleRange, sigma, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatArrayProperty(
    material,
    (System_String_o *)StringLiteral_16142/*"_BlurFactor"*/,
    BlurFactors,
    0);
}


void ScriptActionRenderEffectController__SetMotionBlur(
        ScriptActionRenderEffectController_o *this,
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x20
  System_Single_array *BlurFactors; // x2

  if ( (byte_4C44C92 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16142/*"_BlurFactor"*/);
    byte_4C44C92 = 1;
  }
  ScriptActionRenderEffectController_EffectParamBase__SetSampleRange(this->fields.material_, sampleRange, 0);
  material = this->fields.material_;
  BlurFactors = ScriptActionRenderEffectController_MotionBlurParam__GetBlurFactors(sampleRange, sigma, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatArrayProperty(
    material,
    (System_String_o *)StringLiteral_16142/*"_BlurFactor"*/,
    BlurFactors,
    0);
}


void ScriptActionRenderEffectController__Skip(ScriptActionRenderEffectController_o *this, const MethodInfo *method)
{
  float loopCount; // s0

  if ( this->fields.isEnable )
  {
    loopCount = this->fields.loopCount;
    this->fields.timerCount = this->fields.timerMax;
    if ( loopCount >= 0.0 )
      this->fields.loopCount = 0.0;
    ScriptActionRenderEffectController__Update(this, 0.0, method);
  }
}


void ScriptActionRenderEffectController__Start(
        ScriptActionRenderEffectController_o *this,
        float sec,
        int32_t count,
        bool isStop,
        ScriptActionRenderEffectController_ReflectionFunction_o *func,
        ScriptActionRenderEffectController_StopFunction_o *stopfunc,
        const MethodInfo *method)
{
  bool v11; // w21
  char v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  this->fields.reflectionFunction = func;
  v11 = isStop;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.reflectionFunction,
    (int32_t)func,
    isStop,
    (const MethodInfo *)func);
  this->fields.stopFunction = stopfunc;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.stopFunction, (int32_t)stopfunc, v12, v13);
  this->fields.requestStop = v11;
  if ( sec <= 0.0 )
  {
    ScriptActionRenderEffectController__OnStop(this, v11, v14);
  }
  else
  {
    this->fields.timerCount = 0.0;
    this->fields.timerMax = sec;
    this->fields.loopCount = (float)count;
    this->fields.isEnable = 1;
  }
}


void ScriptActionRenderEffectController__StartDistortion(
        ScriptActionRenderEffectController_o *this,
        float sec,
        int32_t count,
        float centerX,
        float centerY,
        float strength,
        float range,
        float coefficient,
        const MethodInfo *method)
{
  __int64 v17; // x20
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  ScriptActionRenderEffectController_DistortionParam_o *MaterialValue; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  ScriptActionRenderEffectController_DistortionParam_o *DistortionParam; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w21
  ScriptActionRenderEffectController_ReflectionFunction_o *v28; // x22
  const MethodInfo *v29; // x5

  if ( (byte_4C44C8B & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C37058(&Method_ScriptActionRenderEffectController___c__DisplayClass19_0__StartDistortion_b__0__);
    sub_1C37058(&ScriptActionRenderEffectController___c__DisplayClass19_0_TypeInfo);
    byte_4C44C8B = 1;
  }
  v17 = sub_1C372A4(ScriptActionRenderEffectController___c__DisplayClass19_0_TypeInfo);
  ScriptActionRenderEffectController___c__DisplayClass19_0___ctor(
    (ScriptActionRenderEffectController___c__DisplayClass19_0_o *)v17,
    0);
  if ( !v17 )
    sub_1C372B4(v18);
  *(_DWORD *)(v17 + 16) = count;
  *(_QWORD *)(v17 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 24), (int32_t)this, v19, v20);
  MaterialValue = ScriptActionRenderEffectController_DistortionParam__CreateMaterialValue(this->fields.material_, 0);
  *(_QWORD *)(v17 + 32) = MaterialValue;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)MaterialValue, v22, v23);
  DistortionParam = ScriptActionRenderEffectController_DistortionParam__CreateDistortionParam(
                      centerX,
                      centerY,
                      strength,
                      range,
                      coefficient,
                      0);
  *(_QWORD *)(v17 + 40) = DistortionParam;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 40), (int32_t)DistortionParam, v25, v26);
  v27 = *(_DWORD *)(v17 + 16);
  v28 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C372A4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v28,
    (Il2CppObject *)v17,
    Method_ScriptActionRenderEffectController___c__DisplayClass19_0__StartDistortion_b__0__,
    0);
  ScriptActionRenderEffectController__Start(this, sec, v27, 0, v28, 0, v29);
}


void ScriptActionRenderEffectController__StartGaussianBlur(
        ScriptActionRenderEffectController_o *this,
        float sec,
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ScriptActionRenderEffectController_GaussianBlurParam_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ScriptActionRenderEffectController_GaussianBlurParam_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  ScriptActionRenderEffectController_ReflectionFunction_o *v19; // x20
  const MethodInfo *v20; // x5

  if ( (byte_4C44C8D & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C37058(&Method_ScriptActionRenderEffectController___c__DisplayClass21_0__StartGaussianBlur_b__0__);
    sub_1C37058(&ScriptActionRenderEffectController___c__DisplayClass21_0_TypeInfo);
    byte_4C44C8D = 1;
  }
  v9 = sub_1C372A4(ScriptActionRenderEffectController___c__DisplayClass21_0_TypeInfo);
  ScriptActionRenderEffectController___c__DisplayClass21_0___ctor(
    (ScriptActionRenderEffectController___c__DisplayClass21_0_o *)v9,
    0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  v13 = ScriptActionRenderEffectController_GaussianBlurParam__CreateByMaterialValue(this->fields.material_, 0);
  *(_QWORD *)(v9 + 24) = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)v13, v14, v15);
  v16 = ScriptActionRenderEffectController_GaussianBlurParam__CreateByParams(sampleRange, sigma, 0);
  *(_QWORD *)(v9 + 32) = v16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v16, v17, v18);
  v19 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C372A4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_ScriptActionRenderEffectController___c__DisplayClass21_0__StartGaussianBlur_b__0__,
    0);
  ScriptActionRenderEffectController__Start(this, sec, 0, 0, v19, 0, v20);
}


void ScriptActionRenderEffectController__StartMotionBlur(
        ScriptActionRenderEffectController_o *this,
        float sec,
        int32_t sampleRange,
        float sigma,
        float centerX,
        float centerY,
        float range,
        float coefficient,
        const MethodInfo *method)
{
  __int64 v17; // x21
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  ScriptActionRenderEffectController_MotionBlurParam_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  ScriptActionRenderEffectController_MotionBlurParam_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  ScriptActionRenderEffectController_ReflectionFunction_o *v27; // x20
  const MethodInfo *v28; // x5

  if ( (byte_4C44C8F & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C37058(&Method_ScriptActionRenderEffectController___c__DisplayClass23_0__StartMotionBlur_b__0__);
    sub_1C37058(&ScriptActionRenderEffectController___c__DisplayClass23_0_TypeInfo);
    byte_4C44C8F = 1;
  }
  v17 = sub_1C372A4(ScriptActionRenderEffectController___c__DisplayClass23_0_TypeInfo);
  ScriptActionRenderEffectController___c__DisplayClass23_0___ctor(
    (ScriptActionRenderEffectController___c__DisplayClass23_0_o *)v17,
    0);
  if ( !v17 )
    sub_1C372B4(v18);
  *(_QWORD *)(v17 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  v21 = ScriptActionRenderEffectController_MotionBlurParam__CreateByMaterialValue(this->fields.material_, 0);
  *(_QWORD *)(v17 + 24) = v21;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 24), (int32_t)v21, v22, v23);
  v24 = ScriptActionRenderEffectController_MotionBlurParam__CreateByParams(
          sampleRange,
          sigma,
          centerX,
          centerY,
          range,
          coefficient,
          0);
  *(_QWORD *)(v17 + 32) = v24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v24, v25, v26);
  v27 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C372A4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v27,
    (Il2CppObject *)v17,
    Method_ScriptActionRenderEffectController___c__DisplayClass23_0__StartMotionBlur_b__0__,
    0);
  ScriptActionRenderEffectController__Start(this, sec, 0, 0, v27, 0, v28);
}


void ScriptActionRenderEffectController__StopDistortion(
        ScriptActionRenderEffectController_o *this,
        float sec,
        ScriptActionRenderEffectController_StopFunction_o *stopFunc,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ScriptActionRenderEffectController_DistortionParam_o *MaterialValue; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ScriptActionRenderEffectController_DistortionParam_o *StopMaterial; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  ScriptActionRenderEffectController_ReflectionFunction_o *v17; // x22
  const MethodInfo *v18; // x5

  if ( (byte_4C44C8C & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C37058(&Method_ScriptActionRenderEffectController___c__DisplayClass20_0__StopDistortion_b__0__);
    sub_1C37058(&ScriptActionRenderEffectController___c__DisplayClass20_0_TypeInfo);
    byte_4C44C8C = 1;
  }
  v7 = sub_1C372A4(ScriptActionRenderEffectController___c__DisplayClass20_0_TypeInfo);
  ScriptActionRenderEffectController___c__DisplayClass20_0___ctor(
    (ScriptActionRenderEffectController___c__DisplayClass20_0_o *)v7,
    0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  MaterialValue = ScriptActionRenderEffectController_DistortionParam__CreateMaterialValue(this->fields.material_, 0);
  *(_QWORD *)(v7 + 24) = MaterialValue;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)MaterialValue, v12, v13);
  StopMaterial = ScriptActionRenderEffectController_DistortionParam__CreateStopMaterial(this->fields.material_, 0);
  *(_QWORD *)(v7 + 32) = StopMaterial;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)StopMaterial, v15, v16);
  v17 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C372A4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_ScriptActionRenderEffectController___c__DisplayClass20_0__StopDistortion_b__0__,
    0);
  ScriptActionRenderEffectController__Start(this, sec, 0, 1, v17, stopFunc, v18);
  this->fields.requestStop = 1;
}


void ScriptActionRenderEffectController__StopGaussianBlur(
        ScriptActionRenderEffectController_o *this,
        float sec,
        ScriptActionRenderEffectController_StopFunction_o *stopFunc,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ScriptActionRenderEffectController_GaussianBlurParam_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ScriptActionRenderEffectController_GaussianBlurParam_o *StopByMaterial; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  ScriptActionRenderEffectController_ReflectionFunction_o *v17; // x22
  const MethodInfo *v18; // x5

  if ( (byte_4C44C8E & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C37058(&Method_ScriptActionRenderEffectController___c__DisplayClass22_0__StopGaussianBlur_b__0__);
    sub_1C37058(&ScriptActionRenderEffectController___c__DisplayClass22_0_TypeInfo);
    byte_4C44C8E = 1;
  }
  v7 = sub_1C372A4(ScriptActionRenderEffectController___c__DisplayClass22_0_TypeInfo);
  ScriptActionRenderEffectController___c__DisplayClass22_0___ctor(
    (ScriptActionRenderEffectController___c__DisplayClass22_0_o *)v7,
    0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  v11 = ScriptActionRenderEffectController_GaussianBlurParam__CreateByMaterialValue(this->fields.material_, 0);
  *(_QWORD *)(v7 + 24) = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v11, v12, v13);
  StopByMaterial = ScriptActionRenderEffectController_GaussianBlurParam__CreateStopByMaterial(this->fields.material_, 0);
  *(_QWORD *)(v7 + 32) = StopByMaterial;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)StopByMaterial, v15, v16);
  v17 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C372A4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_ScriptActionRenderEffectController___c__DisplayClass22_0__StopGaussianBlur_b__0__,
    0);
  ScriptActionRenderEffectController__Start(this, sec, 0, 1, v17, stopFunc, v18);
  this->fields.requestStop = 1;
}


void ScriptActionRenderEffectController__StopMotionBlur(
        ScriptActionRenderEffectController_o *this,
        float sec,
        ScriptActionRenderEffectController_StopFunction_o *stopFunc,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ScriptActionRenderEffectController_MotionBlurParam_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ScriptActionRenderEffectController_MotionBlurParam_o *StopByMaterial; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  ScriptActionRenderEffectController_ReflectionFunction_o *v17; // x22
  const MethodInfo *v18; // x5

  if ( (byte_4C44C90 & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C37058(&Method_ScriptActionRenderEffectController___c__DisplayClass24_0__StopMotionBlur_b__0__);
    sub_1C37058(&ScriptActionRenderEffectController___c__DisplayClass24_0_TypeInfo);
    byte_4C44C90 = 1;
  }
  v7 = sub_1C372A4(ScriptActionRenderEffectController___c__DisplayClass24_0_TypeInfo);
  ScriptActionRenderEffectController___c__DisplayClass24_0___ctor(
    (ScriptActionRenderEffectController___c__DisplayClass24_0_o *)v7,
    0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  v11 = ScriptActionRenderEffectController_MotionBlurParam__CreateByMaterialValue(this->fields.material_, 0);
  *(_QWORD *)(v7 + 24) = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v11, v12, v13);
  StopByMaterial = ScriptActionRenderEffectController_MotionBlurParam__CreateStopByMaterial(this->fields.material_, 0);
  *(_QWORD *)(v7 + 32) = StopByMaterial;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)StopByMaterial, v15, v16);
  v17 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C372A4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_ScriptActionRenderEffectController___c__DisplayClass24_0__StopMotionBlur_b__0__,
    0);
  ScriptActionRenderEffectController__Start(this, sec, 0, 1, v17, stopFunc, v18);
  this->fields.requestStop = 1;
}


void ScriptActionRenderEffectController__Update(
        ScriptActionRenderEffectController_o *this,
        float delta,
        const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x20
  const MethodInfo *v6; // x2
  long double v7; // q0
  float timerMax; // s8
  struct ScriptActionRenderEffectController_ReflectionFunction_o *reflectionFunction; // x8
  float v10; // s0
  float v11; // s1
  bool v12; // nf
  float loopCount; // s9
  struct ScriptActionRenderEffectController_ReflectionFunction_o *v14; // x8

  if ( (byte_4C44C8A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44C8A = 1;
  }
  if ( this->fields.isEnable && this->fields.timerMax > 0.0 )
  {
    material = (UnityEngine_Object_o *)this->fields.material_;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(material, 0, 0) )
    {
      timerMax = this->fields.timerMax;
      *(float *)&v7 = this->fields.timerCount + delta;
      this->fields.timerCount = *(float *)&v7;
      if ( *(float *)&v7 >= timerMax )
      {
        if ( this->fields.requestStop )
        {
          ScriptActionRenderEffectController__OnStop(this, 1, v6);
          return;
        }
        loopCount = this->fields.loopCount;
        if ( loopCount < 0.0 )
        {
          *(float *)&v7 = fmodf(*(float *)&v7, timerMax);
          reflectionFunction = this->fields.reflectionFunction;
          this->fields.timerCount = *(float *)&v7;
          if ( !reflectionFunction )
            return;
          goto LABEL_11;
        }
        if ( loopCount <= 0.0
          || (*(float *)&v7 = fmodf(*(float *)&v7, timerMax),
              this->fields.timerCount = *(float *)&v7,
              this->fields.loopCount = loopCount + -1.0,
              (float)(loopCount + -1.0) <= 0.0) )
        {
          v14 = this->fields.reflectionFunction;
          this->fields.timerCount = timerMax;
          if ( v14 )
            ((void (__fastcall *)(intptr_t, intptr_t, float))v14->fields.invoke_impl)(
              v14->fields.method_code,
              v14->fields.method,
              1.0);
          *(_WORD *)&this->fields.isEnable = 0;
          return;
        }
      }
      reflectionFunction = this->fields.reflectionFunction;
      if ( !reflectionFunction )
        return;
LABEL_11:
      v10 = *(float *)&v7 / timerMax;
      v11 = fminf(v10, 1.0);
      v12 = v10 < 0.0;
      LODWORD(v7) = 0;
      if ( !v12 )
        *(float *)&v7 = v11;
      ((void (__fastcall *)(intptr_t, intptr_t, long double))reflectionFunction->fields.invoke_impl)(
        reflectionFunction->fields.method_code,
        reflectionFunction->fields.method,
        v7);
    }
  }
}


void ScriptActionRenderEffectController_DistortionParam___ctor(
        ScriptActionRenderEffectController_DistortionParam_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.centerX = 0x3F0000003F000000LL;
  this->fields.coefficient = 100.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


ScriptActionRenderEffectController_DistortionParam_o *ScriptActionRenderEffectController_DistortionParam__CreateDistortionParam(
        float x,
        float y,
        float str,
        float rng,
        float coeff,
        const MethodInfo *method)
{
  __int64 v11; // x19

  if ( (byte_4C44ECA & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_DistortionParam_TypeInfo);
    byte_4C44ECA = 1;
  }
  v11 = sub_1C372A4(ScriptActionRenderEffectController_DistortionParam_TypeInfo);
  *(_QWORD *)(v11 + 16) = 0x3F0000003F000000LL;
  *(_DWORD *)(v11 + 32) = 1120403456;
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(float *)(v11 + 16) = x;
  *(float *)(v11 + 20) = y;
  *(float *)(v11 + 24) = str;
  *(float *)(v11 + 28) = rng;
  *(float *)(v11 + 32) = coeff;
  return (ScriptActionRenderEffectController_DistortionParam_o *)v11;
}


ScriptActionRenderEffectController_DistortionParam_o *ScriptActionRenderEffectController_DistortionParam__CreateMaterialValue(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4C44ECB & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_DistortionParam_TypeInfo);
    sub_1C37058(&StringLiteral_16356/*"_Strength"*/);
    sub_1C37058(&StringLiteral_16172/*"_Coefficient"*/);
    sub_1C37058(&StringLiteral_16152/*"_CenterY"*/);
    sub_1C37058(&StringLiteral_16320/*"_Range"*/);
    sub_1C37058(&StringLiteral_16151/*"_CenterX"*/);
    byte_4C44ECB = 1;
  }
  v3 = sub_1C372A4(ScriptActionRenderEffectController_DistortionParam_TypeInfo);
  *(_QWORD *)(v3 + 16) = 0x3F0000003F000000LL;
  *(_DWORD *)(v3 + 32) = 1120403456;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(float *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16151/*"_CenterX"*/,
                          v4);
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16152/*"_CenterY"*/,
                          v5);
  *(float *)(v3 + 24) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16356/*"_Strength"*/,
                          v6);
  *(float *)(v3 + 28) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16320/*"_Range"*/,
                          v7);
  *(float *)(v3 + 32) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16172/*"_Coefficient"*/,
                          v8);
  return (ScriptActionRenderEffectController_DistortionParam_o *)v3;
}


ScriptActionRenderEffectController_DistortionParam_o *ScriptActionRenderEffectController_DistortionParam__CreateStopMaterial(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4C44ECC & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_DistortionParam_TypeInfo);
    sub_1C37058(&StringLiteral_16172/*"_Coefficient"*/);
    sub_1C37058(&StringLiteral_16152/*"_CenterY"*/);
    sub_1C37058(&StringLiteral_16151/*"_CenterX"*/);
    byte_4C44ECC = 1;
  }
  v3 = sub_1C372A4(ScriptActionRenderEffectController_DistortionParam_TypeInfo);
  *(_QWORD *)(v3 + 16) = 0x3F0000003F000000LL;
  *(_DWORD *)(v3 + 32) = 1120403456;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(float *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16151/*"_CenterX"*/,
                          v4);
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16152/*"_CenterY"*/,
                          v5);
  *(float *)(v3 + 32) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16172/*"_Coefficient"*/,
                          v6);
  return (ScriptActionRenderEffectController_DistortionParam_o *)v3;
}


void ScriptActionRenderEffectController_DistortionParam__ReflectionMaterial(
        UnityEngine_Material_o *material,
        ScriptActionRenderEffectController_DistortionParam_o *srcParam,
        ScriptActionRenderEffectController_DistortionParam_o *destParam,
        float rate,
        const MethodInfo *method)
{
  UnityEngine_Material_o *v8; // x19
  float v9; // s0
  const MethodInfo *v10; // x2
  float v11; // s0
  const MethodInfo *v12; // x2
  float v13; // s0
  const MethodInfo *v14; // x2
  float v15; // s0
  const MethodInfo *v16; // x2
  float v17; // s0
  const MethodInfo *v18; // x2

  v8 = material;
  if ( (byte_4C44ECD & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16356/*"_Strength"*/);
    sub_1C37058(&StringLiteral_16172/*"_Coefficient"*/);
    sub_1C37058(&StringLiteral_16152/*"_CenterY"*/);
    sub_1C37058(&StringLiteral_16320/*"_Range"*/);
    material = (UnityEngine_Material_o *)sub_1C37058(&StringLiteral_16151/*"_CenterX"*/);
    byte_4C44ECD = 1;
  }
  if ( !srcParam || !destParam )
    sub_1C372B4(material);
  v9 = ScriptActionRenderEffectController__FloatLinear(srcParam->fields.centerX, destParam->fields.centerX, rate, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16151/*"_CenterX"*/,
    v9,
    v10);
  v11 = ScriptActionRenderEffectController__FloatLinear(srcParam->fields.centerY, destParam->fields.centerY, rate, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16152/*"_CenterY"*/,
    v11,
    v12);
  v13 = ScriptActionRenderEffectController__FloatLinear(srcParam->fields.strength, destParam->fields.strength, rate, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16356/*"_Strength"*/,
    v13,
    v14);
  v15 = ScriptActionRenderEffectController__FloatLinear(srcParam->fields.range, destParam->fields.range, rate, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16320/*"_Range"*/,
    v15,
    v16);
  v17 = ScriptActionRenderEffectController__FloatLinear(
          srcParam->fields.coefficient,
          destParam->fields.coefficient,
          rate,
          0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16172/*"_Coefficient"*/,
    v17,
    v18);
}


void ScriptActionRenderEffectController_EffectParamBase___ctor(
        ScriptActionRenderEffectController_EffectParamBase_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
        UnityEngine_Material_o *material,
        System_String_o *key,
        const MethodInfo *method)
{
  UnityEngine_Material_o *v4; // x20
  float result; // s0
  bool v6; // w0

  v4 = material;
  if ( (byte_4C44ED8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16152/*"_CenterY"*/);
    material = (UnityEngine_Material_o *)sub_1C37058(&StringLiteral_16151/*"_CenterX"*/);
    byte_4C44ED8 = 1;
  }
  if ( !v4 )
    sub_1C372B4(material);
  if ( UnityEngine_Material__HasProperty_71132888(v4, key, 0) )
    return UnityEngine_Material__GetFloat(v4, key, 0);
  if ( System_String__op_Equality(key, (System_String_o *)StringLiteral_16151/*"_CenterX"*/, 0) )
    return 0.5;
  v6 = System_String__op_Equality(key, (System_String_o *)StringLiteral_16152/*"_CenterY"*/, 0);
  result = 0.0;
  if ( v6 )
    return 0.5;
  return result;
}


int32_t ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_String_o *SampleRangeKeyword; // x0

  v3 = 1;
  while ( 1 )
  {
    SampleRangeKeyword = ScriptActionRenderEffectController_EffectParamBase__GetSampleRangeKeyword(v3, method);
    if ( !material )
      sub_1C372B4(SampleRangeKeyword);
    if ( UnityEngine_Material__IsKeywordEnabled(material, SampleRangeKeyword, 0) )
      break;
    if ( ++v3 == 5 )
      return 1;
  }
  return v3;
}


System_String_o *ScriptActionRenderEffectController_EffectParamBase__GetSampleRangeKeyword(
        int32_t sampleRange,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C44ED9 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_11447/*"SAMPLERANGE_{0}"*/);
    byte_4C44ED9 = 1;
  }
  v11 = sampleRange;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_11447/*"SAMPLERANGE_{0}"*/, v9, 0);
}


void ScriptActionRenderEffectController_EffectParamBase__SetFloatArrayProperty(
        UnityEngine_Material_o *material,
        System_String_o *key,
        System_Single_array *values,
        const MethodInfo *method)
{
  if ( !material )
    sub_1C372B4(0);
  UnityEngine_Material__SetFloatArray_71137124(material, key, values, 0);
}


void ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
        UnityEngine_Material_o *material,
        System_String_o *key,
        float value,
        const MethodInfo *method)
{
  if ( !material )
    sub_1C372B4(0);
  if ( UnityEngine_Material__HasProperty_71132888(material, key, 0) )
    UnityEngine_Material__SetFloat(material, key, value, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptActionRenderEffectController_EffectParamBase__SetSampleRange(
        UnityEngine_Material_o *material,
        int32_t sampleRange,
        const MethodInfo *method)
{
  int32_t i; // w21
  System_String_o *SampleRangeKeyword; // x0
  System_String_o *v7; // x22
  bool IsKeywordEnabled; // w0
  System_String_o *v9; // x20

  for ( i = 1; i != 5; ++i )
  {
    SampleRangeKeyword = ScriptActionRenderEffectController_EffectParamBase__GetSampleRangeKeyword(
                           i,
                           *(const MethodInfo **)&sampleRange);
    if ( !material )
      sub_1C372B4(SampleRangeKeyword);
    v7 = SampleRangeKeyword;
    IsKeywordEnabled = UnityEngine_Material__IsKeywordEnabled(material, SampleRangeKeyword, 0);
    if ( sampleRange != i && IsKeywordEnabled )
      UnityEngine_Material__DisableKeyword(material, v7, 0);
  }
  if ( sampleRange )
  {
    v9 = ScriptActionRenderEffectController_EffectParamBase__GetSampleRangeKeyword(
           sampleRange,
           *(const MethodInfo **)&sampleRange);
    if ( !UnityEngine_Material__IsKeywordEnabled(material, v9, 0) )
      UnityEngine_Material__EnableKeyword(material, v9, 0);
  }
}


void ScriptActionRenderEffectController_GaussianBlurParam___ctor(
        ScriptActionRenderEffectController_GaussianBlurParam_o *this,
        const MethodInfo *method)
{
  this->fields.sampleRange = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


ScriptActionRenderEffectController_GaussianBlurParam_o *ScriptActionRenderEffectController_GaussianBlurParam__CreateByMaterialValue(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4C44ECF & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
    sub_1C37058(&StringLiteral_16345/*"_Sigma"*/);
    byte_4C44ECF = 1;
  }
  v3 = sub_1C372A4(ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16345/*"_Sigma"*/,
                          v5);
  return (ScriptActionRenderEffectController_GaussianBlurParam_o *)v3;
}


ScriptActionRenderEffectController_GaussianBlurParam_o *ScriptActionRenderEffectController_GaussianBlurParam__CreateByParams(
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  __int64 v5; // x20

  if ( (byte_4C44ECE & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
    byte_4C44ECE = 1;
  }
  v5 = sub_1C372A4(ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
  *(_DWORD *)(v5 + 16) = 1;
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = sampleRange;
  *(float *)(v5 + 20) = sigma;
  return (ScriptActionRenderEffectController_GaussianBlurParam_o *)v5;
}


ScriptActionRenderEffectController_GaussianBlurParam_o *ScriptActionRenderEffectController_GaussianBlurParam__CreateStopByMaterial(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C44ED0 & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
    byte_4C44ED0 = 1;
  }
  v3 = sub_1C372A4(ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  *(_DWORD *)(v3 + 20) = 0;
  return (ScriptActionRenderEffectController_GaussianBlurParam_o *)v3;
}


System_Single_array *ScriptActionRenderEffectController_GaussianBlurParam__GetBlurFactors(
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  float v5; // s11
  float v6; // s10
  float v7; // s12
  float v8; // s13
  float v9; // s14
  float v10; // s15
  float v11; // s9
  float v12; // s0
  float v13; // s1
  float v14; // s16
  float v15; // s11
  float v16; // s3
  float v17; // s12
  float v18; // s7
  float v19; // s8
  float v20; // s13
  float v21; // s14
  float v22; // s15
  float v23; // s9
  float v24; // s10
  System_Single_array *result; // x0
  float *m_Items; // x8
  float v27; // s0
  unsigned int max_length; // w8
  float v29; // s0
  float v30; // [xsp+Ch] [xbp-64h]
  float v31; // [xsp+58h] [xbp-18h]
  float v32; // [xsp+58h] [xbp-18h]
  float v33; // [xsp+5Ch] [xbp-14h]
  float v34; // [xsp+5Ch] [xbp-14h]

  if ( (byte_4C44ED2 & 1) == 0 )
  {
    sub_1C37058(&float___TypeInfo);
    byte_4C44ED2 = 1;
  }
  v5 = (float)(sigma + sigma) * sigma;
  v33 = expf(-0.0 / v5);
  v31 = expf(-1.0 / v5);
  v6 = expf(-2.0 / v5);
  v7 = expf(-4.0 / v5);
  v8 = expf(-5.0 / v5);
  v9 = expf(-9.0 / v5);
  v10 = expf(-8.0 / v5);
  v11 = expf(-10.0 / v5);
  v12 = expf(-16.0 / v5);
  v13 = 1.0 / (float)(sigma * 2.5066);
  v14 = v13 * v8;
  v15 = v13 * v33;
  v16 = v13 * v6;
  v17 = v13 * v7;
  v18 = v13 * v9;
  v19 = v13 * v31;
  v30 = v13 * v11;
  v32 = v13 * v10;
  v34 = v13 * v8;
  switch ( sampleRange )
  {
    case 1:
      v20 = v13 * v9;
      v21 = v13 * v6;
      v22 = v13 * v12;
      v23 = v19 * 4.0;
      v24 = v15;
      goto LABEL_11;
    case 2:
      v20 = v13 * v9;
      v22 = v13 * v12;
      v21 = v13 * v6;
      v23 = (float)(v16 * 4.0) + (float)(v15 + (float)(v19 * 4.0));
      v24 = v17 * 4.0;
      goto LABEL_11;
    case 3:
      v21 = v13 * v6;
      v22 = v13 * v12;
      v23 = (float)(v14 * 8.0)
          + (float)((float)(v17 * 4.0) + (float)((float)(v16 * 4.0) + (float)(v15 + (float)(v19 * 4.0))));
      v20 = v18;
      v24 = v18 * 4.0;
      goto LABEL_11;
    case 4:
      v21 = v13 * v6;
      v20 = v18;
      v23 = (float)((float)(v13 * v11) * 8.0)
          + (float)((float)((float)(v13 * v10) * 4.0)
                  + (float)((float)(v18 * 4.0)
                          + (float)((float)(v14 * 8.0)
                                  + (float)((float)(v17 * 4.0)
                                          + (float)((float)(v16 * 4.0) + (float)(v15 + (float)(v19 * 4.0)))))));
      v22 = v13 * v12;
      v24 = (float)(v13 * v12) * 4.0;
LABEL_11:
      result = (System_Single_array *)sub_1C37100(float___TypeInfo, 9);
      if ( !result )
        goto LABEL_24;
      max_length = result->max_length;
      if ( !max_length )
        goto LABEL_23;
      v29 = v24 + v23;
      result->m_Items[0] = v15 / (float)(v24 + v23);
      if ( max_length == 1 )
        goto LABEL_23;
      result->m_Items[1] = v19 / v29;
      if ( max_length <= 2 )
        goto LABEL_23;
      result->m_Items[2] = v21 / v29;
      if ( max_length == 3 )
        goto LABEL_23;
      result->m_Items[3] = v17 / v29;
      if ( max_length <= 4 )
        goto LABEL_23;
      result->m_Items[4] = v34 / v29;
      if ( max_length == 5 )
        goto LABEL_23;
      result->m_Items[5] = v20 / v29;
      if ( max_length <= 6 )
        goto LABEL_23;
      result->m_Items[6] = v32 / v29;
      if ( max_length == 7 )
        goto LABEL_23;
      result->m_Items[7] = v30 / v29;
      if ( max_length <= 8 )
        goto LABEL_23;
      v27 = v22 / v29;
      m_Items = &result->m_Items[8];
      break;
    default:
      result = (System_Single_array *)sub_1C37100(float___TypeInfo, 1);
      if ( !result )
LABEL_24:
        sub_1C372B4(result);
      if ( !LODWORD(result->max_length) )
LABEL_23:
        sub_1C372BC(result);
      m_Items = result->m_Items;
      v27 = 1.0;
      break;
  }
  *m_Items = v27;
  return result;
}


void ScriptActionRenderEffectController_GaussianBlurParam__ReflectionMaterial(
        UnityEngine_Material_o *material,
        ScriptActionRenderEffectController_GaussianBlurParam_o *srcParam,
        ScriptActionRenderEffectController_GaussianBlurParam_o *destParam,
        float rate,
        const MethodInfo *method)
{
  UnityEngine_Material_o *v8; // x19
  int32_t sampleRange; // w22
  float v10; // s8
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  v8 = material;
  if ( (byte_4C44ED1 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16345/*"_Sigma"*/);
    material = (UnityEngine_Material_o *)sub_1C37058(&StringLiteral_16142/*"_BlurFactor"*/);
    byte_4C44ED1 = 1;
  }
  if ( !destParam
    || !srcParam
    || (sampleRange = destParam->fields.sampleRange,
        v10 = ScriptActionRenderEffectController__FloatLinear(srcParam->fields.sigma, destParam->fields.sigma, rate, 0),
        ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
          v8,
          (System_String_o *)StringLiteral_16345/*"_Sigma"*/,
          v10,
          v11),
        material = (UnityEngine_Material_o *)ScriptActionRenderEffectController_GaussianBlurParam__GetBlurFactors(
                                               sampleRange,
                                               v10,
                                               v12),
        !v8) )
  {
    sub_1C372B4(material);
  }
  UnityEngine_Material__SetFloatArray_71137124(
    v8,
    (System_String_o *)StringLiteral_16142/*"_BlurFactor"*/,
    (System_Single_array *)material,
    0);
}


void ScriptActionRenderEffectController_MotionBlurParam___ctor(
        ScriptActionRenderEffectController_MotionBlurParam_o *this,
        const MethodInfo *method)
{
  this->fields.sampleRange = 1;
  *(_QWORD *)&this->fields.sigma = 0x3F0000003C23D70ALL;
  this->fields.centerY = 0.5;
  System_Object___ctor((Il2CppObject *)this, 0);
}


ScriptActionRenderEffectController_MotionBlurParam_o *ScriptActionRenderEffectController_MotionBlurParam__CreateByMaterialValue(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4C44ED4 & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
    sub_1C37058(&StringLiteral_16172/*"_Coefficient"*/);
    sub_1C37058(&StringLiteral_16152/*"_CenterY"*/);
    sub_1C37058(&StringLiteral_16345/*"_Sigma"*/);
    sub_1C37058(&StringLiteral_16320/*"_Range"*/);
    sub_1C37058(&StringLiteral_16151/*"_CenterX"*/);
    byte_4C44ED4 = 1;
  }
  v3 = sub_1C372A4(ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  *(_QWORD *)(v3 + 20) = 0x3F0000003C23D70ALL;
  *(_DWORD *)(v3 + 28) = 1056964608;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16345/*"_Sigma"*/,
                          v5);
  *(float *)(v3 + 24) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16151/*"_CenterX"*/,
                          v6);
  *(float *)(v3 + 28) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16152/*"_CenterY"*/,
                          v7);
  *(float *)(v3 + 32) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16320/*"_Range"*/,
                          v8);
  *(float *)(v3 + 36) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16172/*"_Coefficient"*/,
                          v9);
  return (ScriptActionRenderEffectController_MotionBlurParam_o *)v3;
}


ScriptActionRenderEffectController_MotionBlurParam_o *ScriptActionRenderEffectController_MotionBlurParam__CreateByParams(
        int32_t sampleRange,
        float sigma,
        float centerX,
        float centerY,
        float range,
        float coefficient,
        const MethodInfo *method)
{
  __int64 v13; // x20

  if ( (byte_4C44ED3 & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
    byte_4C44ED3 = 1;
  }
  v13 = sub_1C372A4(ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
  *(_DWORD *)(v13 + 16) = 1;
  *(_QWORD *)(v13 + 20) = 0x3F0000003C23D70ALL;
  *(_DWORD *)(v13 + 28) = 1056964608;
  System_Object___ctor((Il2CppObject *)v13, 0);
  *(_DWORD *)(v13 + 16) = sampleRange;
  *(float *)(v13 + 20) = sigma;
  *(float *)(v13 + 24) = centerX;
  *(float *)(v13 + 28) = centerY;
  *(float *)(v13 + 32) = range;
  *(float *)(v13 + 36) = coefficient;
  return (ScriptActionRenderEffectController_MotionBlurParam_o *)v13;
}


ScriptActionRenderEffectController_MotionBlurParam_o *ScriptActionRenderEffectController_MotionBlurParam__CreateStopByMaterial(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4C44ED5 & 1) == 0 )
  {
    sub_1C37058(&ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
    sub_1C37058(&StringLiteral_16152/*"_CenterY"*/);
    sub_1C37058(&StringLiteral_16151/*"_CenterX"*/);
    byte_4C44ED5 = 1;
  }
  v3 = sub_1C372A4(ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  *(_QWORD *)(v3 + 20) = 0x3F0000003C23D70ALL;
  *(_DWORD *)(v3 + 28) = 1056964608;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  *(float *)(v3 + 24) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16151/*"_CenterX"*/,
                          v5);
  *(float *)(v3 + 28) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16152/*"_CenterY"*/,
                          v6);
  return (ScriptActionRenderEffectController_MotionBlurParam_o *)v3;
}


System_Single_array *ScriptActionRenderEffectController_MotionBlurParam__GetBlurFactors(
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  float v5; // s13
  float v6; // s9
  float v7; // s10
  float v8; // s11
  float v9; // s12
  float v10; // s0
  float v11; // s1
  float v12; // s14
  float v13; // s13
  float v14; // s10
  float v15; // s9
  float v16; // s8
  float v17; // s11
  float v18; // s12
  System_Single_array *result; // x0
  unsigned int max_length; // w8
  float v21; // s0

  if ( (byte_4C44ED7 & 1) == 0 )
  {
    sub_1C37058(&float___TypeInfo);
    byte_4C44ED7 = 1;
  }
  v5 = (float)(sigma + sigma) * sigma;
  v6 = expf(-0.0 / v5);
  v7 = expf(-1.0 / v5);
  v8 = expf(-4.0 / v5);
  v9 = expf(-9.0 / v5);
  v10 = expf(-16.0 / v5);
  v11 = 1.0 / (float)(sigma * 2.5066);
  v12 = v11 * v6;
  v13 = v11 * v7;
  v14 = v11 * v8;
  v15 = v11 * v9;
  v16 = v11 * v10;
  switch ( sampleRange )
  {
    case 1:
      v17 = v13 + v13;
      v18 = v12;
      goto LABEL_11;
    case 2:
      v17 = v12 + (float)(v13 + v13);
      v18 = v14 + v14;
      goto LABEL_11;
    case 3:
      v17 = (float)(v14 + v14) + (float)(v12 + (float)(v13 + v13));
      v18 = v15 + v15;
      goto LABEL_11;
    case 4:
      v17 = (float)(v15 + v15) + (float)((float)(v14 + v14) + (float)(v12 + (float)(v13 + v13)));
      v18 = v16 + v16;
LABEL_11:
      result = (System_Single_array *)sub_1C37100(float___TypeInfo, 5);
      if ( !result )
        goto LABEL_19;
      max_length = result->max_length;
      if ( !max_length )
        goto LABEL_18;
      v21 = v18 + v17;
      result->m_Items[0] = v12 / (float)(v18 + v17);
      if ( max_length == 1 )
        goto LABEL_18;
      result->m_Items[1] = v13 / v21;
      if ( max_length <= 2 )
        goto LABEL_18;
      result->m_Items[2] = v14 / v21;
      if ( max_length == 3 )
        goto LABEL_18;
      result->m_Items[3] = v15 / v21;
      if ( max_length <= 4 )
        goto LABEL_18;
      result->m_Items[4] = v16 / v21;
      break;
    default:
      result = (System_Single_array *)sub_1C37100(float___TypeInfo, 1);
      if ( !result )
LABEL_19:
        sub_1C372B4(result);
      if ( !LODWORD(result->max_length) )
LABEL_18:
        sub_1C372BC(result);
      result->m_Items[0] = 1.0;
      break;
  }
  return result;
}


void ScriptActionRenderEffectController_MotionBlurParam__ReflectionMaterial(
        UnityEngine_Material_o *material,
        ScriptActionRenderEffectController_MotionBlurParam_o *srcParam,
        ScriptActionRenderEffectController_MotionBlurParam_o *destParam,
        float rate,
        const MethodInfo *method)
{
  UnityEngine_Material_o *v8; // x19
  int32_t sampleRange; // w22
  float v10; // s9
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  float v13; // s0
  const MethodInfo *v14; // x2
  float v15; // s0
  const MethodInfo *v16; // x2
  float v17; // s0
  const MethodInfo *v18; // x2
  float v19; // s0
  const MethodInfo *v20; // x2

  v8 = material;
  if ( (byte_4C44ED6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16172/*"_Coefficient"*/);
    sub_1C37058(&StringLiteral_16152/*"_CenterY"*/);
    sub_1C37058(&StringLiteral_16345/*"_Sigma"*/);
    sub_1C37058(&StringLiteral_16320/*"_Range"*/);
    sub_1C37058(&StringLiteral_16142/*"_BlurFactor"*/);
    material = (UnityEngine_Material_o *)sub_1C37058(&StringLiteral_16151/*"_CenterX"*/);
    byte_4C44ED6 = 1;
  }
  if ( !destParam
    || !srcParam
    || (sampleRange = destParam->fields.sampleRange,
        v10 = ScriptActionRenderEffectController__FloatLinear(srcParam->fields.sigma, destParam->fields.sigma, rate, 0),
        ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
          v8,
          (System_String_o *)StringLiteral_16345/*"_Sigma"*/,
          v10,
          v11),
        material = (UnityEngine_Material_o *)ScriptActionRenderEffectController_MotionBlurParam__GetBlurFactors(
                                               sampleRange,
                                               v10,
                                               v12),
        !v8) )
  {
    sub_1C372B4(material);
  }
  UnityEngine_Material__SetFloatArray_71137124(
    v8,
    (System_String_o *)StringLiteral_16142/*"_BlurFactor"*/,
    (System_Single_array *)material,
    0);
  v13 = ScriptActionRenderEffectController__FloatLinear(srcParam->fields.centerX, destParam->fields.centerX, rate, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16151/*"_CenterX"*/,
    v13,
    v14);
  v15 = ScriptActionRenderEffectController__FloatLinear(srcParam->fields.centerY, destParam->fields.centerY, rate, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16152/*"_CenterY"*/,
    v15,
    v16);
  v17 = ScriptActionRenderEffectController__FloatLinear(srcParam->fields.range, destParam->fields.range, rate, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16320/*"_Range"*/,
    v17,
    v18);
  v19 = ScriptActionRenderEffectController__FloatLinear(
          srcParam->fields.coefficient,
          destParam->fields.coefficient,
          rate,
          0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16172/*"_Coefficient"*/,
    v19,
    v20);
}


void ScriptActionRenderEffectController_ReflectionFunction___ctor(
        ScriptActionRenderEffectController_ReflectionFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7CFEC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7CF9C;
}


System_IAsyncResult_o *ScriptActionRenderEffectController_ReflectionFunction__BeginInvoke(
        ScriptActionRenderEffectController_ReflectionFunction_o *this,
        float animeRate,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  _QWORD v13[2]; // [xsp+8h] [xbp-48h] BYREF
  float v14; // [xsp+1Ch] [xbp-34h] BYREF

  v14 = animeRate;
  if ( (byte_4C44EC9 & 1) == 0 )
  {
    sub_1C37058(&float_TypeInfo);
    byte_4C44EC9 = 1;
  }
  v13[1] = 0;
  v13[0] = j_il2cpp_value_box_0(float_TypeInfo, &v14, object, method, v5, v6, v7, v8);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void ScriptActionRenderEffectController_ReflectionFunction__EndInvoke(
        ScriptActionRenderEffectController_ReflectionFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void ScriptActionRenderEffectController_ReflectionFunction__Invoke(
        ScriptActionRenderEffectController_ReflectionFunction_o *this,
        float animeRate,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t, float))this->fields.invoke_impl)(
    this->fields.method_code,
    this->fields.method,
    animeRate);
}


void ScriptActionRenderEffectController_StopFunction___ctor(
        ScriptActionRenderEffectController_StopFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7D040;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7D000;
}


System_IAsyncResult_o *ScriptActionRenderEffectController_StopFunction__BeginInvoke(
        ScriptActionRenderEffectController_StopFunction_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void ScriptActionRenderEffectController_StopFunction__EndInvoke(
        ScriptActionRenderEffectController_StopFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void ScriptActionRenderEffectController_StopFunction__Invoke(
        ScriptActionRenderEffectController_StopFunction_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void ScriptActionRenderEffectController___c__DisplayClass19_0___ctor(
        ScriptActionRenderEffectController___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptActionRenderEffectController___c__DisplayClass19_0___StartDistortion_b__0(
        ScriptActionRenderEffectController___c__DisplayClass19_0_o *this,
        float rate,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ScriptActionRenderEffectController_o *_4__this; // x8
  UnityEngine_Material_o *material; // x8
  float v6; // s2

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  material = _4__this->fields.material_;
  v6 = vabds_f32(0.5, rate);
  if ( this->fields.count )
    rate = (float)(0.5 - v6) + (float)(0.5 - v6);
  ScriptActionRenderEffectController_DistortionParam__ReflectionMaterial(
    material,
    this->fields.srcParam,
    this->fields.destParam,
    rate,
    v3);
}


void ScriptActionRenderEffectController___c__DisplayClass20_0___ctor(
        ScriptActionRenderEffectController___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptActionRenderEffectController___c__DisplayClass20_0___StopDistortion_b__0(
        ScriptActionRenderEffectController___c__DisplayClass20_0_o *this,
        float rate,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ScriptActionRenderEffectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  ScriptActionRenderEffectController_DistortionParam__ReflectionMaterial(
    _4__this->fields.material_,
    this->fields.srcParam,
    this->fields.destParam,
    rate,
    v3);
}


void ScriptActionRenderEffectController___c__DisplayClass21_0___ctor(
        ScriptActionRenderEffectController___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptActionRenderEffectController___c__DisplayClass21_0___StartGaussianBlur_b__0(
        ScriptActionRenderEffectController___c__DisplayClass21_0_o *this,
        float rate,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ScriptActionRenderEffectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  ScriptActionRenderEffectController_GaussianBlurParam__ReflectionMaterial(
    _4__this->fields.material_,
    this->fields.srcParam,
    this->fields.destParam,
    rate,
    v3);
}


void ScriptActionRenderEffectController___c__DisplayClass22_0___ctor(
        ScriptActionRenderEffectController___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptActionRenderEffectController___c__DisplayClass22_0___StopGaussianBlur_b__0(
        ScriptActionRenderEffectController___c__DisplayClass22_0_o *this,
        float rate,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ScriptActionRenderEffectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  ScriptActionRenderEffectController_GaussianBlurParam__ReflectionMaterial(
    _4__this->fields.material_,
    this->fields.srcParam,
    this->fields.destParam,
    rate,
    v3);
}


void ScriptActionRenderEffectController___c__DisplayClass23_0___ctor(
        ScriptActionRenderEffectController___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptActionRenderEffectController___c__DisplayClass23_0___StartMotionBlur_b__0(
        ScriptActionRenderEffectController___c__DisplayClass23_0_o *this,
        float rate,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ScriptActionRenderEffectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  ScriptActionRenderEffectController_MotionBlurParam__ReflectionMaterial(
    _4__this->fields.material_,
    this->fields.srcParam,
    this->fields.destParam,
    rate,
    v3);
}


void ScriptActionRenderEffectController___c__DisplayClass24_0___ctor(
        ScriptActionRenderEffectController___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptActionRenderEffectController___c__DisplayClass24_0___StopMotionBlur_b__0(
        ScriptActionRenderEffectController___c__DisplayClass24_0_o *this,
        float rate,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ScriptActionRenderEffectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  ScriptActionRenderEffectController_MotionBlurParam__ReflectionMaterial(
    _4__this->fields.material_,
    this->fields.srcParam,
    this->fields.destPram,
    rate,
    v3);
}