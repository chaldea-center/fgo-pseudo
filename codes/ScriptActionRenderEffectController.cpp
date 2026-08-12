void ScriptActionRenderEffectController___ctor(
        ScriptActionRenderEffectController_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  this->fields.timerMax = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.material_ = material;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.material_, (int32_t)material, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.stopFunction, 0, v7, v8, v9, v10, v11, v12);
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
  long double v3; // q1
  long double v4; // q2
  struct ScriptActionRenderEffectController_ReflectionFunction_o *reflectionFunction; // x8

  reflectionFunction = this->fields.reflectionFunction;
  if ( reflectionFunction )
  {
    LODWORD(v3) = 1.0;
    *(_QWORD *)&v4 = 0;
    if ( rate <= 1.0 )
      *(float *)&v3 = rate;
    if ( rate >= 0.0 )
      rate = *(float *)&v3;
    else
      rate = 0.0;
    ((void (__fastcall *)(intptr_t, intptr_t, long double, long double, long double))reflectionFunction->fields.invoke_impl)(
      reflectionFunction->fields.method_code,
      reflectionFunction->fields.method,
      *(long double *)&rate,
      v3,
      v4);
  }
}


void ScriptActionRenderEffectController__SetDisable(
        ScriptActionRenderEffectController_o *this,
        const MethodInfo *method)
{
  this->fields.isEnable = 0;
}


// local variable allocation has failed, the output may be wrong!
void ScriptActionRenderEffectController__SetFrostedGlass(
        ScriptActionRenderEffectController_o *this,
        int32_t sampleRange,
        float sigma,
        float tiling,
        float scatter,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x21
  System_Single_array *BlurFactors; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_59727E3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16989/*"_Scatter"*/);
    sub_2213A60(&StringLiteral_17031/*"_Tiling"*/);
    sub_2213A60(&StringLiteral_16782/*"_BlurLv"*/);
    sub_2213A60(&StringLiteral_16781/*"_BlurFactor"*/);
    byte_59727E3 = 1;
  }
  material = this->fields.material_;
  BlurFactors = ScriptActionRenderEffectController_GaussianBlurParam__GetBlurFactors(
                  sampleRange,
                  sigma,
                  *(const MethodInfo **)&sampleRange);
  if ( !material )
    sub_2213CDC(BlurFactors, v13);
  UnityEngine_Material__SetFloatArray_83285888(material, (System_String_o *)StringLiteral_16781/*"_BlurFactor"*/, BlurFactors, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    this->fields.material_,
    (System_String_o *)StringLiteral_17031/*"_Tiling"*/,
    tiling,
    v14);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    this->fields.material_,
    (System_String_o *)StringLiteral_16989/*"_Scatter"*/,
    scatter,
    v15);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    this->fields.material_,
    (System_String_o *)StringLiteral_16782/*"_BlurLv"*/,
    (float)sampleRange,
    v16);
}


void ScriptActionRenderEffectController__SetFrostedTexture(
        ScriptActionRenderEffectController_o *this,
        UnityEngine_Texture_o *glassTex,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x0

  if ( (byte_59727E4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16785/*"_BumpMap"*/);
    byte_59727E4 = 1;
  }
  material = this->fields.material_;
  if ( !material )
    sub_2213CDC(0, glassTex);
  UnityEngine_Material__SetTexture(material, (System_String_o *)StringLiteral_16785/*"_BumpMap"*/, glassTex, 0);
}


void ScriptActionRenderEffectController__SetGaussianBlur(
        ScriptActionRenderEffectController_o *this,
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x20
  const MethodInfo *v8; // x1
  System_Single_array *BlurFactors; // x0
  __int64 v10; // x1

  if ( (byte_59727E1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16781/*"_BlurFactor"*/);
    byte_59727E1 = 1;
  }
  ScriptActionRenderEffectController_EffectParamBase__SetSampleRange(this->fields.material_, sampleRange, method);
  material = this->fields.material_;
  BlurFactors = ScriptActionRenderEffectController_GaussianBlurParam__GetBlurFactors(sampleRange, sigma, v8);
  if ( !material )
    sub_2213CDC(BlurFactors, v10);
  UnityEngine_Material__SetFloatArray_83285888(material, (System_String_o *)StringLiteral_16781/*"_BlurFactor"*/, BlurFactors, 0);
}


void ScriptActionRenderEffectController__SetMotionBlur(
        ScriptActionRenderEffectController_o *this,
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x20
  const MethodInfo *v8; // x1
  System_Single_array *BlurFactors; // x0
  __int64 v10; // x1

  if ( (byte_59727E2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16781/*"_BlurFactor"*/);
    byte_59727E2 = 1;
  }
  ScriptActionRenderEffectController_EffectParamBase__SetSampleRange(this->fields.material_, sampleRange, method);
  material = this->fields.material_;
  BlurFactors = ScriptActionRenderEffectController_MotionBlurParam__GetBlurFactors(sampleRange, sigma, v8);
  if ( !material )
    sub_2213CDC(BlurFactors, v10);
  UnityEngine_Material__SetFloatArray_83285888(material, (System_String_o *)StringLiteral_16781/*"_BlurFactor"*/, BlurFactors, 0);
}


void ScriptActionRenderEffectController__Skip(ScriptActionRenderEffectController_o *this, const MethodInfo *method)
{
  float loopCount; // s1

  if ( this->fields.isEnable )
  {
    loopCount = this->fields.loopCount;
    this->fields.timerCount = this->fields.timerMax;
    if ( loopCount >= 0.0 )
      this->fields.loopCount = 0.0;
    ScriptActionRenderEffectController__Update(this, 0.0, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptActionRenderEffectController__Start(
        ScriptActionRenderEffectController_o *this,
        float sec,
        int32_t count,
        bool isStop,
        ScriptActionRenderEffectController_ReflectionFunction_o *func,
        ScriptActionRenderEffectController_StopFunction_o *stopfunc,
        const MethodInfo *method)
{
  bool v7; // w6
  bool v8; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2

  this->fields.reflectionFunction = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.reflectionFunction,
    (int32_t)func,
    (System_String_o *)isStop,
    (System_String_o *)func,
    (int32_t)stopfunc,
    (int32_t)method,
    v7,
    v8);
  this->fields.stopFunction = stopfunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.stopFunction,
    (int32_t)stopfunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.requestStop = isStop;
  if ( sec <= 0.0 )
  {
    ScriptActionRenderEffectController__OnStop(this, isStop, v20);
  }
  else
  {
    this->fields.timerCount = 0.0;
    this->fields.isEnable = 1;
    this->fields.timerMax = sec;
    this->fields.loopCount = (float)count;
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
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1
  ScriptActionRenderEffectController_DistortionParam_o *MaterialValue; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x0
  ScriptActionRenderEffectController_DistortionParam_o *DistortionParam; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w21
  ScriptActionRenderEffectController_ReflectionFunction_o *v43; // x22
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x5

  if ( (byte_59727D9 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_2213A60(&Method_ScriptActionRenderEffectController___c__DisplayClass19_0__StartDistortion_b__0__);
    sub_2213A60(&ScriptActionRenderEffectController___c__DisplayClass19_0_TypeInfo);
    byte_59727D9 = 1;
  }
  v17 = sub_2213CCC(ScriptActionRenderEffectController___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_2213CDC(v18, v19);
  *(_DWORD *)(v17 + 16) = count;
  *(_QWORD *)(v17 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 24), (int32_t)this, v20, v21, v22, v23, v24, v25);
  MaterialValue = ScriptActionRenderEffectController_DistortionParam__CreateMaterialValue(this->fields.material_, v26);
  *(_QWORD *)(v17 + 32) = MaterialValue;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 32), (int32_t)MaterialValue, v28, v29, v30, v31, v32, v33);
  DistortionParam = ScriptActionRenderEffectController_DistortionParam__CreateDistortionParam(
                      centerX,
                      centerY,
                      strength,
                      range,
                      coefficient,
                      v34);
  *(_QWORD *)(v17 + 40) = DistortionParam;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 40), (int32_t)DistortionParam, v36, v37, v38, v39, v40, v41);
  v42 = *(_DWORD *)(v17 + 16);
  v43 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_2213CCC(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v43,
    (Il2CppObject *)v17,
    Method_ScriptActionRenderEffectController___c__DisplayClass19_0__StartDistortion_b__0__,
    v44);
  ScriptActionRenderEffectController__Start(this, sec, v42, 0, v43, 0, v45);
}


void ScriptActionRenderEffectController__StartFrostedGlass(
        ScriptActionRenderEffectController_o *this,
        float sec,
        int32_t sampleRange,
        float sigma,
        float tiling,
        float scatter,
        const MethodInfo *method)
{
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  ScriptActionRenderEffectController_FrostedGlassParam_o *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x1
  ScriptActionRenderEffectController_FrostedGlassParam_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  ScriptActionRenderEffectController_ReflectionFunction_o *v38; // x20
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x5

  if ( (byte_59727DF & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_2213A60(&Method_ScriptActionRenderEffectController___c__DisplayClass25_0__StartFrostedGlass_b__0__);
    sub_2213A60(&ScriptActionRenderEffectController___c__DisplayClass25_0_TypeInfo);
    byte_59727DF = 1;
  }
  v13 = sub_2213CCC(ScriptActionRenderEffectController___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    sub_2213CDC(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  v23 = ScriptActionRenderEffectController_FrostedGlassParam__CreateByMaterialValue(this->fields.material_, v22);
  *(_QWORD *)(v13 + 24) = v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v31 = ScriptActionRenderEffectController_FrostedGlassParam__CreateByParams(sampleRange, sigma, tiling, scatter, v30);
  *(_QWORD *)(v13 + 32) = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_2213CCC(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v38,
    (Il2CppObject *)v13,
    Method_ScriptActionRenderEffectController___c__DisplayClass25_0__StartFrostedGlass_b__0__,
    v39);
  ScriptActionRenderEffectController__Start(this, sec, 0, 0, v38, 0, v40);
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
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  ScriptActionRenderEffectController_GaussianBlurParam_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1
  ScriptActionRenderEffectController_GaussianBlurParam_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  ScriptActionRenderEffectController_ReflectionFunction_o *v34; // x20
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x5

  if ( (byte_59727DB & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_2213A60(&Method_ScriptActionRenderEffectController___c__DisplayClass21_0__StartGaussianBlur_b__0__);
    sub_2213A60(&ScriptActionRenderEffectController___c__DisplayClass21_0_TypeInfo);
    byte_59727DB = 1;
  }
  v9 = sub_2213CCC(ScriptActionRenderEffectController___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  v19 = ScriptActionRenderEffectController_GaussianBlurParam__CreateByMaterialValue(this->fields.material_, v18);
  *(_QWORD *)(v9 + 24) = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v27 = ScriptActionRenderEffectController_GaussianBlurParam__CreateByParams(sampleRange, sigma, v26);
  *(_QWORD *)(v9 + 32) = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_2213CCC(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v34,
    (Il2CppObject *)v9,
    Method_ScriptActionRenderEffectController___c__DisplayClass21_0__StartGaussianBlur_b__0__,
    v35);
  ScriptActionRenderEffectController__Start(this, sec, 0, 0, v34, 0, v36);
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
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1
  ScriptActionRenderEffectController_MotionBlurParam_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x1
  ScriptActionRenderEffectController_MotionBlurParam_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  ScriptActionRenderEffectController_ReflectionFunction_o *v42; // x20
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x5

  if ( (byte_59727DD & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_2213A60(&Method_ScriptActionRenderEffectController___c__DisplayClass23_0__StartMotionBlur_b__0__);
    sub_2213A60(&ScriptActionRenderEffectController___c__DisplayClass23_0_TypeInfo);
    byte_59727DD = 1;
  }
  v17 = sub_2213CCC(ScriptActionRenderEffectController___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_2213CDC(v18, v19);
  *(_QWORD *)(v17 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  v27 = ScriptActionRenderEffectController_MotionBlurParam__CreateByMaterialValue(this->fields.material_, v26);
  *(_QWORD *)(v17 + 24) = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 24), (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v35 = ScriptActionRenderEffectController_MotionBlurParam__CreateByParams(
          sampleRange,
          sigma,
          centerX,
          centerY,
          range,
          coefficient,
          v34);
  *(_QWORD *)(v17 + 32) = v35;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 32), (int32_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_2213CCC(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v42,
    (Il2CppObject *)v17,
    Method_ScriptActionRenderEffectController___c__DisplayClass23_0__StartMotionBlur_b__0__,
    v43);
  ScriptActionRenderEffectController__Start(this, sec, 0, 0, v42, 0, v44);
}


void ScriptActionRenderEffectController__StopDistortion(
        ScriptActionRenderEffectController_o *this,
        float sec,
        ScriptActionRenderEffectController_StopFunction_o *stopFunc,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  ScriptActionRenderEffectController_DistortionParam_o *MaterialValue; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  ScriptActionRenderEffectController_DistortionParam_o *StopMaterial; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  ScriptActionRenderEffectController_ReflectionFunction_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x5

  if ( (byte_59727DA & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_2213A60(&Method_ScriptActionRenderEffectController___c__DisplayClass20_0__StopDistortion_b__0__);
    sub_2213A60(&ScriptActionRenderEffectController___c__DisplayClass20_0_TypeInfo);
    byte_59727DA = 1;
  }
  v7 = sub_2213CCC(ScriptActionRenderEffectController___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  MaterialValue = ScriptActionRenderEffectController_DistortionParam__CreateMaterialValue(this->fields.material_, v16);
  *(_QWORD *)(v7 + 24) = MaterialValue;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)MaterialValue, v18, v19, v20, v21, v22, v23);
  StopMaterial = ScriptActionRenderEffectController_DistortionParam__CreateStopMaterial(this->fields.material_, v24);
  *(_QWORD *)(v7 + 32) = StopMaterial;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)StopMaterial, v26, v27, v28, v29, v30, v31);
  v32 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_2213CCC(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v32,
    (Il2CppObject *)v7,
    Method_ScriptActionRenderEffectController___c__DisplayClass20_0__StopDistortion_b__0__,
    v33);
  ScriptActionRenderEffectController__Start(this, sec, 0, 1, v32, stopFunc, v34);
  this->fields.requestStop = 1;
}


void ScriptActionRenderEffectController__StopFrostedGlass(
        ScriptActionRenderEffectController_o *this,
        float sec,
        ScriptActionRenderEffectController_StopFunction_o *stopFunc,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  ScriptActionRenderEffectController_FrostedGlassParam_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  ScriptActionRenderEffectController_FrostedGlassParam_o *StopByMaterial; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  ScriptActionRenderEffectController_ReflectionFunction_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x5

  if ( (byte_59727E0 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_2213A60(&Method_ScriptActionRenderEffectController___c__DisplayClass26_0__StopFrostedGlass_b__0__);
    sub_2213A60(&ScriptActionRenderEffectController___c__DisplayClass26_0_TypeInfo);
    byte_59727E0 = 1;
  }
  v7 = sub_2213CCC(ScriptActionRenderEffectController___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v17 = ScriptActionRenderEffectController_FrostedGlassParam__CreateByMaterialValue(this->fields.material_, v16);
  *(_QWORD *)(v7 + 24) = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  StopByMaterial = ScriptActionRenderEffectController_FrostedGlassParam__CreateStopByMaterial(
                     this->fields.material_,
                     v24);
  *(_QWORD *)(v7 + 32) = StopByMaterial;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)StopByMaterial, v26, v27, v28, v29, v30, v31);
  v32 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_2213CCC(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v32,
    (Il2CppObject *)v7,
    Method_ScriptActionRenderEffectController___c__DisplayClass26_0__StopFrostedGlass_b__0__,
    v33);
  ScriptActionRenderEffectController__Start(this, sec, 0, 1, v32, stopFunc, v34);
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
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  ScriptActionRenderEffectController_GaussianBlurParam_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  ScriptActionRenderEffectController_GaussianBlurParam_o *StopByMaterial; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  ScriptActionRenderEffectController_ReflectionFunction_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x5

  if ( (byte_59727DC & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_2213A60(&Method_ScriptActionRenderEffectController___c__DisplayClass22_0__StopGaussianBlur_b__0__);
    sub_2213A60(&ScriptActionRenderEffectController___c__DisplayClass22_0_TypeInfo);
    byte_59727DC = 1;
  }
  v7 = sub_2213CCC(ScriptActionRenderEffectController___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v17 = ScriptActionRenderEffectController_GaussianBlurParam__CreateByMaterialValue(this->fields.material_, v16);
  *(_QWORD *)(v7 + 24) = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  StopByMaterial = ScriptActionRenderEffectController_GaussianBlurParam__CreateStopByMaterial(
                     this->fields.material_,
                     v24);
  *(_QWORD *)(v7 + 32) = StopByMaterial;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)StopByMaterial, v26, v27, v28, v29, v30, v31);
  v32 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_2213CCC(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v32,
    (Il2CppObject *)v7,
    Method_ScriptActionRenderEffectController___c__DisplayClass22_0__StopGaussianBlur_b__0__,
    v33);
  ScriptActionRenderEffectController__Start(this, sec, 0, 1, v32, stopFunc, v34);
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
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  ScriptActionRenderEffectController_MotionBlurParam_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  ScriptActionRenderEffectController_MotionBlurParam_o *StopByMaterial; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  ScriptActionRenderEffectController_ReflectionFunction_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x5

  if ( (byte_59727DE & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_2213A60(&Method_ScriptActionRenderEffectController___c__DisplayClass24_0__StopMotionBlur_b__0__);
    sub_2213A60(&ScriptActionRenderEffectController___c__DisplayClass24_0_TypeInfo);
    byte_59727DE = 1;
  }
  v7 = sub_2213CCC(ScriptActionRenderEffectController___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v17 = ScriptActionRenderEffectController_MotionBlurParam__CreateByMaterialValue(this->fields.material_, v16);
  *(_QWORD *)(v7 + 24) = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  StopByMaterial = ScriptActionRenderEffectController_MotionBlurParam__CreateStopByMaterial(this->fields.material_, v24);
  *(_QWORD *)(v7 + 32) = StopByMaterial;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)StopByMaterial, v26, v27, v28, v29, v30, v31);
  v32 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_2213CCC(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
  ScriptActionRenderEffectController_ReflectionFunction___ctor(
    v32,
    (Il2CppObject *)v7,
    Method_ScriptActionRenderEffectController___c__DisplayClass24_0__StopMotionBlur_b__0__,
    v33);
  ScriptActionRenderEffectController__Start(this, sec, 0, 1, v32, stopFunc, v34);
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
  long double v8; // q1
  long double v9; // q2
  float timerMax; // s8
  struct ScriptActionRenderEffectController_ReflectionFunction_o *reflectionFunction; // x8
  float v12; // s0
  float loopCount; // s9
  struct ScriptActionRenderEffectController_ReflectionFunction_o *v14; // x8

  if ( (byte_59727D8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59727D8 = 1;
  }
  if ( this->fields.isEnable && this->fields.timerMax > 0.0 )
  {
    material = (UnityEngine_Object_o *)this->fields.material_;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      v12 = *(float *)&v7 / timerMax;
      LODWORD(v8) = 1.0;
      *(_QWORD *)&v9 = 0;
      if ( v12 <= 1.0 )
        *(float *)&v8 = v12;
      if ( v12 >= 0.0 )
        *(float *)&v7 = *(float *)&v8;
      else
        *(float *)&v7 = 0.0;
      ((void (__fastcall *)(intptr_t, intptr_t, long double, long double, long double))reflectionFunction->fields.invoke_impl)(
        reflectionFunction->fields.method_code,
        reflectionFunction->fields.method,
        v7,
        v8,
        v9);
    }
  }
}


void ScriptActionRenderEffectController_DistortionParam___ctor(
        ScriptActionRenderEffectController_DistortionParam_o *this,
        const MethodInfo *method)
{
  this->fields.coefficient = 100.0;
  *(_QWORD *)&this->fields.centerX = 0x3F0000003F000000LL;
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

  if ( (byte_59727E5 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_DistortionParam_TypeInfo);
    byte_59727E5 = 1;
  }
  v11 = sub_2213CCC(ScriptActionRenderEffectController_DistortionParam_TypeInfo);
  *(_DWORD *)(v11 + 32) = 1120403456;
  *(_QWORD *)(v11 + 16) = 0x3F0000003F000000LL;
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
  float FloatProperty; // s0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  float v8; // s0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2
  float v11; // s0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2
  float v14; // s0
  System_String_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_59727E6 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_DistortionParam_TypeInfo);
    sub_2213A60(&StringLiteral_17008/*"_Strength"*/);
    sub_2213A60(&StringLiteral_16812/*"_Coefficient"*/);
    sub_2213A60(&StringLiteral_16793/*"_CenterY"*/);
    sub_2213A60(&StringLiteral_16971/*"_Range"*/);
    sub_2213A60(&StringLiteral_16792/*"_CenterX"*/);
    byte_59727E6 = 1;
  }
  v3 = sub_2213CCC(ScriptActionRenderEffectController_DistortionParam_TypeInfo);
  *(_DWORD *)(v3 + 32) = 1120403456;
  *(_QWORD *)(v3 + 16) = 0x3F0000003F000000LL;
  System_Object___ctor((Il2CppObject *)v3, 0);
  FloatProperty = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                    material,
                    (System_String_o *)StringLiteral_16792/*"_CenterX"*/,
                    v4);
  v6 = (System_String_o *)StringLiteral_16793/*"_CenterY"*/;
  *(float *)(v3 + 16) = FloatProperty;
  v8 = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v6, v7);
  v9 = (System_String_o *)StringLiteral_17008/*"_Strength"*/;
  *(float *)(v3 + 20) = v8;
  v11 = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v9, v10);
  v12 = (System_String_o *)StringLiteral_16971/*"_Range"*/;
  *(float *)(v3 + 24) = v11;
  v14 = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v12, v13);
  v15 = (System_String_o *)StringLiteral_16812/*"_Coefficient"*/;
  *(float *)(v3 + 28) = v14;
  *(float *)(v3 + 32) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v15, v16);
  return (ScriptActionRenderEffectController_DistortionParam_o *)v3;
}


ScriptActionRenderEffectController_DistortionParam_o *ScriptActionRenderEffectController_DistortionParam__CreateStopMaterial(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x2
  float FloatProperty; // s0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  float v8; // s0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_59727E7 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_DistortionParam_TypeInfo);
    sub_2213A60(&StringLiteral_16812/*"_Coefficient"*/);
    sub_2213A60(&StringLiteral_16793/*"_CenterY"*/);
    sub_2213A60(&StringLiteral_16792/*"_CenterX"*/);
    byte_59727E7 = 1;
  }
  v3 = sub_2213CCC(ScriptActionRenderEffectController_DistortionParam_TypeInfo);
  *(_DWORD *)(v3 + 32) = 1120403456;
  *(_QWORD *)(v3 + 16) = 0x3F0000003F000000LL;
  System_Object___ctor((Il2CppObject *)v3, 0);
  FloatProperty = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                    material,
                    (System_String_o *)StringLiteral_16792/*"_CenterX"*/,
                    v4);
  v6 = (System_String_o *)StringLiteral_16793/*"_CenterY"*/;
  *(float *)(v3 + 16) = FloatProperty;
  v8 = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v6, v7);
  v9 = (System_String_o *)StringLiteral_16812/*"_Coefficient"*/;
  *(float *)(v3 + 20) = v8;
  *(float *)(v3 + 32) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v9, v10);
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
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  v8 = material;
  if ( (byte_59727E8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17008/*"_Strength"*/);
    sub_2213A60(&StringLiteral_16812/*"_Coefficient"*/);
    sub_2213A60(&StringLiteral_16793/*"_CenterY"*/);
    sub_2213A60(&StringLiteral_16971/*"_Range"*/);
    material = (UnityEngine_Material_o *)sub_2213A60(&StringLiteral_16792/*"_CenterX"*/);
    byte_59727E8 = 1;
  }
  if ( !srcParam || !destParam )
    sub_2213CDC(material, srcParam);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16792/*"_CenterX"*/,
    srcParam->fields.centerX + (float)((float)(destParam->fields.centerX - srcParam->fields.centerX) * rate),
    (const MethodInfo *)destParam);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16793/*"_CenterY"*/,
    srcParam->fields.centerY + (float)((float)(destParam->fields.centerY - srcParam->fields.centerY) * rate),
    v9);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_17008/*"_Strength"*/,
    srcParam->fields.strength + (float)((float)(destParam->fields.strength - srcParam->fields.strength) * rate),
    v10);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16971/*"_Range"*/,
    srcParam->fields.range + (float)((float)(destParam->fields.range - srcParam->fields.range) * rate),
    v11);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16812/*"_Coefficient"*/,
    srcParam->fields.coefficient + (float)((float)(destParam->fields.coefficient - srcParam->fields.coefficient) * rate),
    v12);
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
  bool v7; // w0

  v4 = material;
  if ( (byte_59727F8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16793/*"_CenterY"*/);
    material = (UnityEngine_Material_o *)sub_2213A60(&StringLiteral_16792/*"_CenterX"*/);
    byte_59727F8 = 1;
  }
  if ( !v4 )
    sub_2213CDC(material, key);
  if ( UnityEngine_Material__HasProperty_83277340(v4, key, 0) )
    return UnityEngine_Material__GetFloat(v4, key, 0);
  v6 = System_String__op_Equality(key, (System_String_o *)StringLiteral_16792/*"_CenterX"*/, 0);
  result = 0.5;
  if ( !v6 )
  {
    v7 = System_String__op_Equality(key, (System_String_o *)StringLiteral_16793/*"_CenterY"*/, 0);
    result = 0.0;
    if ( v7 )
      return 0.5;
  }
  return result;
}


int32_t ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_String_o *SampleRangeKeyword; // x0
  __int64 v5; // x1

  v3 = 1;
  while ( 1 )
  {
    SampleRangeKeyword = ScriptActionRenderEffectController_EffectParamBase__GetSampleRangeKeyword(v3, method);
    if ( !material )
      sub_2213CDC(SampleRangeKeyword, v5);
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
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59727F9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11948/*"SAMPLERANGE_{0}"*/);
    byte_59727F9 = 1;
  }
  v5 = sampleRange;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v5);
  return System_String__Format((System_String_o *)StringLiteral_11948/*"SAMPLERANGE_{0}"*/, v3, 0);
}


void ScriptActionRenderEffectController_EffectParamBase__SetFloatArrayProperty(
        UnityEngine_Material_o *material,
        System_String_o *key,
        System_Single_array *values,
        const MethodInfo *method)
{
  if ( !material )
    sub_2213CDC(0, key);
  UnityEngine_Material__SetFloatArray_83285888(material, key, values, 0);
}


void ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
        UnityEngine_Material_o *material,
        System_String_o *key,
        float value,
        const MethodInfo *method)
{
  if ( !material )
    sub_2213CDC(0, key);
  if ( UnityEngine_Material__HasProperty_83277340(material, key, 0) )
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
  __int64 v7; // x1
  System_String_o *v8; // x22
  bool IsKeywordEnabled; // w0
  System_String_o *v10; // x20

  for ( i = 1; i != 5; ++i )
  {
    SampleRangeKeyword = ScriptActionRenderEffectController_EffectParamBase__GetSampleRangeKeyword(
                           i,
                           *(const MethodInfo **)&sampleRange);
    if ( !material )
      sub_2213CDC(SampleRangeKeyword, v7);
    v8 = SampleRangeKeyword;
    IsKeywordEnabled = UnityEngine_Material__IsKeywordEnabled(material, SampleRangeKeyword, 0);
    if ( sampleRange != i && IsKeywordEnabled )
      UnityEngine_Material__DisableKeyword(material, v8, 0);
  }
  if ( sampleRange )
  {
    v10 = ScriptActionRenderEffectController_EffectParamBase__GetSampleRangeKeyword(
            sampleRange,
            *(const MethodInfo **)&sampleRange);
    if ( !UnityEngine_Material__IsKeywordEnabled(material, v10, 0) )
      UnityEngine_Material__EnableKeyword(material, v10, 0);
  }
}


void ScriptActionRenderEffectController_EffectParamBase__SetTexture(
        UnityEngine_Material_o *material,
        System_String_o *key,
        UnityEngine_Texture_o *tex,
        const MethodInfo *method)
{
  if ( !material )
    sub_2213CDC(0, key);
  UnityEngine_Material__SetTexture(material, key, tex, 0);
}


void ScriptActionRenderEffectController_FrostedGlassParam___ctor(
        ScriptActionRenderEffectController_FrostedGlassParam_o *this,
        const MethodInfo *method)
{
  this->fields.blurLv = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


ScriptActionRenderEffectController_FrostedGlassParam_o *ScriptActionRenderEffectController_FrostedGlassParam__CreateByMaterialValue(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x2
  float FloatProperty; // s0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  float v8; // s0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2
  float v11; // s0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59727F4 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
    sub_2213A60(&StringLiteral_16989/*"_Scatter"*/);
    sub_2213A60(&StringLiteral_16997/*"_Sigma"*/);
    sub_2213A60(&StringLiteral_17031/*"_Tiling"*/);
    sub_2213A60(&StringLiteral_16782/*"_BlurLv"*/);
    byte_59727F4 = 1;
  }
  v3 = sub_2213CCC(ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
  *(_DWORD *)(v3 + 28) = 1065353216;
  System_Object___ctor((Il2CppObject *)v3, 0);
  FloatProperty = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                    material,
                    (System_String_o *)StringLiteral_16997/*"_Sigma"*/,
                    v4);
  v6 = (System_String_o *)StringLiteral_17031/*"_Tiling"*/;
  *(float *)(v3 + 16) = FloatProperty;
  v8 = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v6, v7);
  v9 = (System_String_o *)StringLiteral_16989/*"_Scatter"*/;
  *(float *)(v3 + 20) = v8;
  v11 = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v9, v10);
  v12 = (System_String_o *)StringLiteral_16782/*"_BlurLv"*/;
  *(float *)(v3 + 24) = v11;
  *(float *)(v3 + 28) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v12, v13);
  return (ScriptActionRenderEffectController_FrostedGlassParam_o *)v3;
}


ScriptActionRenderEffectController_FrostedGlassParam_o *ScriptActionRenderEffectController_FrostedGlassParam__CreateByParams(
        int32_t sampleRange,
        float sigma,
        float tiling,
        float scatter,
        const MethodInfo *method)
{
  __int64 v9; // x20

  if ( (byte_59727F3 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
    byte_59727F3 = 1;
  }
  v9 = sub_2213CCC(ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
  *(_DWORD *)(v9 + 28) = 1065353216;
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(float *)(v9 + 16) = sigma;
  *(float *)(v9 + 20) = tiling;
  *(float *)(v9 + 24) = scatter;
  *(float *)(v9 + 28) = (float)sampleRange;
  return (ScriptActionRenderEffectController_FrostedGlassParam_o *)v9;
}


ScriptActionRenderEffectController_FrostedGlassParam_o *ScriptActionRenderEffectController_FrostedGlassParam__CreateStopByMaterial(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_59727F5 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
    sub_2213A60(&StringLiteral_17031/*"_Tiling"*/);
    byte_59727F5 = 1;
  }
  v3 = sub_2213CCC(ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
  *(_DWORD *)(v3 + 28) = 1065353216;
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_String_o *)StringLiteral_17031/*"_Tiling"*/;
  *(_DWORD *)(v3 + 16) = 0;
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v4, v5);
  *(_QWORD *)(v3 + 24) = 0x3F80000000000000LL;
  return (ScriptActionRenderEffectController_FrostedGlassParam_o *)v3;
}


System_Single_array *ScriptActionRenderEffectController_FrostedGlassParam__GetBlurFactors(
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  float v5; // s12
  float v6; // s14
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s11
  float v11; // s13
  float v12; // s15
  float v13; // s14
  float v14; // s12
  System_Single_array *result; // x0
  __int64 v16; // x1
  unsigned int max_length; // w8
  float v18; // [xsp+48h] [xbp-18h]
  float v19; // [xsp+4Ch] [xbp-14h]

  if ( (byte_59727F7 & 1) == 0 )
  {
    sub_2213A60(&float___TypeInfo);
    byte_59727F7 = 1;
  }
  if ( sampleRange >= 1 && sigma != 0.0 )
  {
    v5 = 1.0 / (float)(sigma * 2.5066);
    v6 = (float)(sigma + sigma) * sigma;
    v7 = v5 * expf(-0.0 / v6);
    v8 = v5 * expf(-1.0 / v6);
    v9 = v5 * expf(-2.0 / v6);
    v10 = v5 * expf(-4.0 / v6);
    v19 = v5 * expf(-5.0 / v6);
    v11 = v5 * expf(-9.0 / v6);
    v18 = v5 * expf(-8.0 / v6);
    v12 = v5 * expf(-10.0 / v6);
    v13 = v5 * expf(-16.0 / v6);
    v14 = (float)(v7 + (float)(v8 * 4.0)) + 0.0;
    if ( (unsigned int)sampleRange >= 2 )
    {
      v14 = (float)((float)(v9 * 4.0) + (float)(v10 * 4.0)) + v14;
      if ( sampleRange != 2 )
      {
        v14 = (float)((float)(v19 * 8.0) + (float)(v11 * 4.0)) + v14;
        if ( (unsigned int)sampleRange >= 4 )
          v14 = (float)((float)(v13 * 4.0) + (float)((float)(v18 * 4.0) + (float)(v12 * 8.0))) + v14;
      }
    }
    result = (System_Single_array *)sub_2213B20(float___TypeInfo, 9);
    if ( result )
    {
      max_length = result->max_length;
      if ( max_length )
      {
        result->m_Items[0] = v7 / v14;
        if ( max_length != 1 )
        {
          result->m_Items[1] = v8 / v14;
          if ( max_length > 2 )
          {
            result->m_Items[2] = v9 / v14;
            if ( max_length != 3 )
            {
              result->m_Items[3] = v10 / v14;
              if ( max_length > 4 )
              {
                result->m_Items[4] = v19 / v14;
                if ( max_length != 5 )
                {
                  result->m_Items[5] = v11 / v14;
                  if ( max_length > 6 )
                  {
                    result->m_Items[6] = v18 / v14;
                    if ( max_length != 7 )
                    {
                      result->m_Items[7] = v12 / v14;
                      if ( max_length > 8 )
                      {
                        result->m_Items[8] = v13 / v14;
                        return result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_2213CE4(result);
    }
LABEL_24:
    sub_2213CDC(result, v16);
  }
  result = (System_Single_array *)sub_2213B20(float___TypeInfo, 9);
  if ( !result )
    goto LABEL_24;
  if ( !LODWORD(result->max_length) )
    goto LABEL_23;
  result->m_Items[0] = 1.0;
  return result;
}


void ScriptActionRenderEffectController_FrostedGlassParam__ReflectionMaterial(
        UnityEngine_Material_o *material,
        ScriptActionRenderEffectController_FrostedGlassParam_o *srcParam,
        ScriptActionRenderEffectController_FrostedGlassParam_o *destParam,
        float rate,
        const MethodInfo *method)
{
  UnityEngine_Material_o *v8; // x19
  float v9; // s0
  float v10; // s9
  int32_t v11; // w22
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  v8 = material;
  if ( (byte_59727F6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16989/*"_Scatter"*/);
    sub_2213A60(&StringLiteral_16997/*"_Sigma"*/);
    sub_2213A60(&StringLiteral_17031/*"_Tiling"*/);
    sub_2213A60(&StringLiteral_16782/*"_BlurLv"*/);
    material = (UnityEngine_Material_o *)sub_2213A60(&StringLiteral_16781/*"_BlurFactor"*/);
    byte_59727F6 = 1;
  }
  if ( !srcParam
    || !destParam
    || ((v9 = srcParam->fields.blurLv + (float)((float)(destParam->fields.blurLv - srcParam->fields.blurLv) * rate),
         v10 = srcParam->fields.sigma + (float)((float)(destParam->fields.sigma - srcParam->fields.sigma) * rate),
         v9 != INFINITY)
      ? (v11 = (int)v9)
      : (v11 = 0x80000000),
        ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
          v8,
          (System_String_o *)StringLiteral_16997/*"_Sigma"*/,
          srcParam->fields.sigma + (float)((float)(destParam->fields.sigma - srcParam->fields.sigma) * rate),
          (const MethodInfo *)destParam),
        material = (UnityEngine_Material_o *)ScriptActionRenderEffectController_FrostedGlassParam__GetBlurFactors(
                                               v11,
                                               v10,
                                               v12),
        !v8) )
  {
    sub_2213CDC(material, srcParam);
  }
  UnityEngine_Material__SetFloatArray_83285888(
    v8,
    (System_String_o *)StringLiteral_16781/*"_BlurFactor"*/,
    (System_Single_array *)material,
    0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_17031/*"_Tiling"*/,
    srcParam->fields.tiling + (float)((float)(destParam->fields.tiling - srcParam->fields.tiling) * rate),
    v13);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16989/*"_Scatter"*/,
    srcParam->fields.scatter + (float)((float)(destParam->fields.scatter - srcParam->fields.scatter) * rate),
    v14);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16782/*"_BlurLv"*/,
    (float)v11,
    v15);
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
  int32_t SampleRange; // w0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_59727EA & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
    sub_2213A60(&StringLiteral_16997/*"_Sigma"*/);
    byte_59727EA = 1;
  }
  v3 = sub_2213CCC(ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  System_Object___ctor((Il2CppObject *)v3, 0);
  SampleRange = ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  v6 = (System_String_o *)StringLiteral_16997/*"_Sigma"*/;
  *(_DWORD *)(v3 + 16) = SampleRange;
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v6, v7);
  return (ScriptActionRenderEffectController_GaussianBlurParam_o *)v3;
}


ScriptActionRenderEffectController_GaussianBlurParam_o *ScriptActionRenderEffectController_GaussianBlurParam__CreateByParams(
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  __int64 v5; // x20

  if ( (byte_59727E9 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
    byte_59727E9 = 1;
  }
  v5 = sub_2213CCC(ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
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

  if ( (byte_59727EB & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
    byte_59727EB = 1;
  }
  v3 = sub_2213CCC(ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_QWORD *)(v3 + 16) = (unsigned int)ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  return (ScriptActionRenderEffectController_GaussianBlurParam_o *)v3;
}


System_Single_array *ScriptActionRenderEffectController_GaussianBlurParam__GetBlurFactors(
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  Il2CppClass *v5; // x0
  __int64 v6; // x1
  System_Single_array *result; // x0
  __int64 v8; // x1
  float v9; // s15
  float v10; // s14
  float v11; // s12
  float v12; // s9
  float v13; // s10
  float v14; // s8
  float v15; // s13
  float v16; // s4
  float v17; // s2
  float v18; // s10
  float v19; // s13
  float v20; // s14
  float v21; // s11
  float v22; // s15
  float v23; // s8
  float v24; // s2
  float v25; // s1
  float v26; // s2
  float v27; // s1
  float v28; // s2
  float v29; // s1
  float v30; // s2
  float v31; // s5
  float v32; // s2
  unsigned int max_length; // w8
  float v34; // s0
  float v35; // [xsp+Ch] [xbp-64h]
  float v36; // [xsp+58h] [xbp-18h]
  float v37; // [xsp+5Ch] [xbp-14h]

  if ( (byte_59727ED & 1) == 0 )
  {
    sub_2213A60(&float___TypeInfo);
    byte_59727ED = 1;
  }
  if ( sigma == 0.0 )
  {
    v5 = float___TypeInfo;
    if ( (unsigned int)(sampleRange - 1) >= 4 )
      v6 = 1;
    else
      v6 = (unsigned int)sampleRange;
LABEL_7:
    result = (System_Single_array *)sub_2213B20(v5, v6);
    if ( result )
    {
      if ( LODWORD(result->max_length) )
      {
        result->m_Items[0] = 1.0;
        return result;
      }
LABEL_32:
      sub_2213CE4(result);
    }
LABEL_33:
    sub_2213CDC(result, v8);
  }
  v9 = 1.0 / (float)(sigma * 2.5066);
  v10 = (float)(sigma + sigma) * sigma;
  v11 = v9 * expf(-0.0 / v10);
  v12 = v9 * expf(-1.0 / v10);
  v13 = v9 * expf(-2.0 / v10);
  v37 = v9 * expf(-4.0 / v10);
  v14 = v9 * expf(-5.0 / v10);
  v15 = v9 * expf(-9.0 / v10);
  v36 = v9 * expf(-8.0 / v10);
  v35 = v9 * expf(-10.0 / v10);
  v16 = v9 * expf(-16.0 / v10);
  if ( sampleRange > 2 )
  {
    if ( sampleRange == 3 )
    {
      v31 = v15;
      v19 = v16;
      v21 = v13;
      v20 = v14;
      v32 = v13 * 4.0;
      v18 = v31;
      v29 = (float)(v37 * 4.0) + (float)(v32 + (float)(v11 + (float)(v12 * 4.0)));
      v30 = v14 * 8.0;
      v23 = v31 * 4.0;
    }
    else
    {
      if ( sampleRange != 4 )
        goto LABEL_17;
      v21 = v13;
      v20 = v14;
      v24 = v13 * 4.0;
      v18 = v15;
      v25 = (float)(v37 * 4.0) + (float)(v24 + (float)(v11 + (float)(v12 * 4.0)));
      v26 = v14 * 8.0;
      v23 = v16 * 4.0;
      v27 = v26 + v25;
      v28 = v15 * 4.0;
      v19 = v16;
      v29 = (float)(v36 * 4.0) + (float)(v28 + v27);
      v30 = v35 * 8.0;
    }
    v22 = v30 + v29;
  }
  else
  {
    if ( sampleRange != 1 )
    {
      if ( sampleRange == 2 )
      {
        v17 = v13;
        v18 = v15;
        v19 = v16;
        v20 = v14;
        v21 = v17;
        v22 = (float)(v17 * 4.0) + (float)(v11 + (float)(v12 * 4.0));
        v23 = v37 * 4.0;
        goto LABEL_21;
      }
LABEL_17:
      v5 = float___TypeInfo;
      v6 = 1;
      goto LABEL_7;
    }
    v21 = v13;
    v18 = v15;
    v19 = v16;
    v20 = v14;
    v23 = v11;
    v22 = v12 * 4.0;
  }
LABEL_21:
  result = (System_Single_array *)sub_2213B20(float___TypeInfo, 9);
  if ( !result )
    goto LABEL_33;
  max_length = result->max_length;
  if ( !max_length )
    goto LABEL_32;
  v34 = v23 + v22;
  result->m_Items[0] = v11 / (float)(v23 + v22);
  if ( max_length == 1 )
    goto LABEL_32;
  result->m_Items[1] = v12 / v34;
  if ( max_length <= 2 )
    goto LABEL_32;
  result->m_Items[2] = v21 / v34;
  if ( max_length == 3 )
    goto LABEL_32;
  result->m_Items[3] = v37 / v34;
  if ( max_length <= 4 )
    goto LABEL_32;
  result->m_Items[4] = v20 / v34;
  if ( max_length == 5 )
    goto LABEL_32;
  result->m_Items[5] = v18 / v34;
  if ( max_length <= 6 )
    goto LABEL_32;
  result->m_Items[6] = v36 / v34;
  if ( max_length == 7 )
    goto LABEL_32;
  result->m_Items[7] = v35 / v34;
  if ( max_length <= 8 )
    goto LABEL_32;
  result->m_Items[8] = v19 / v34;
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
  float sigma; // s1
  int32_t sampleRange; // w20
  float v11; // s8
  const MethodInfo *v12; // x1

  v8 = material;
  if ( (byte_59727EC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16997/*"_Sigma"*/);
    material = (UnityEngine_Material_o *)sub_2213A60(&StringLiteral_16781/*"_BlurFactor"*/);
    byte_59727EC = 1;
  }
  if ( !destParam
    || !srcParam
    || (sigma = destParam->fields.sigma,
        sampleRange = destParam->fields.sampleRange,
        v11 = srcParam->fields.sigma + (float)((float)(sigma - srcParam->fields.sigma) * rate),
        ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
          v8,
          (System_String_o *)StringLiteral_16997/*"_Sigma"*/,
          v11,
          (const MethodInfo *)destParam),
        material = (UnityEngine_Material_o *)ScriptActionRenderEffectController_GaussianBlurParam__GetBlurFactors(
                                               sampleRange,
                                               v11,
                                               v12),
        !v8) )
  {
    sub_2213CDC(material, srcParam);
  }
  UnityEngine_Material__SetFloatArray_83285888(
    v8,
    (System_String_o *)StringLiteral_16781/*"_BlurFactor"*/,
    (System_Single_array *)material,
    0);
}


void ScriptActionRenderEffectController_MotionBlurParam___ctor(
        ScriptActionRenderEffectController_MotionBlurParam_o *this,
        const MethodInfo *method)
{
  this->fields.sampleRange = 1;
  this->fields.centerY = 0.5;
  *(_QWORD *)&this->fields.sigma = 0x3F0000003C23D70ALL;
  System_Object___ctor((Il2CppObject *)this, 0);
}


ScriptActionRenderEffectController_MotionBlurParam_o *ScriptActionRenderEffectController_MotionBlurParam__CreateByMaterialValue(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  int32_t SampleRange; // w0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  float FloatProperty; // s0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2
  float v11; // s0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2
  float v14; // s0
  System_String_o *v15; // x1
  const MethodInfo *v16; // x2
  float v17; // s0
  System_String_o *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_59727EF & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
    sub_2213A60(&StringLiteral_16812/*"_Coefficient"*/);
    sub_2213A60(&StringLiteral_16793/*"_CenterY"*/);
    sub_2213A60(&StringLiteral_16997/*"_Sigma"*/);
    sub_2213A60(&StringLiteral_16971/*"_Range"*/);
    sub_2213A60(&StringLiteral_16792/*"_CenterX"*/);
    byte_59727EF = 1;
  }
  v3 = sub_2213CCC(ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  *(_QWORD *)(v3 + 20) = 0x3F0000003C23D70ALL;
  *(_DWORD *)(v3 + 28) = 1056964608;
  System_Object___ctor((Il2CppObject *)v3, 0);
  SampleRange = ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  v6 = (System_String_o *)StringLiteral_16997/*"_Sigma"*/;
  *(_DWORD *)(v3 + 16) = SampleRange;
  FloatProperty = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v6, v7);
  v9 = (System_String_o *)StringLiteral_16792/*"_CenterX"*/;
  *(float *)(v3 + 20) = FloatProperty;
  v11 = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v9, v10);
  v12 = (System_String_o *)StringLiteral_16793/*"_CenterY"*/;
  *(float *)(v3 + 24) = v11;
  v14 = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v12, v13);
  v15 = (System_String_o *)StringLiteral_16971/*"_Range"*/;
  *(float *)(v3 + 28) = v14;
  v17 = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v15, v16);
  v18 = (System_String_o *)StringLiteral_16812/*"_Coefficient"*/;
  *(float *)(v3 + 32) = v17;
  *(float *)(v3 + 36) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v18, v19);
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

  if ( (byte_59727EE & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
    byte_59727EE = 1;
  }
  v13 = sub_2213CCC(ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
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
  int32_t SampleRange; // w0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x2
  float FloatProperty; // s0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_59727F0 & 1) == 0 )
  {
    sub_2213A60(&ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
    sub_2213A60(&StringLiteral_16793/*"_CenterY"*/);
    sub_2213A60(&StringLiteral_16792/*"_CenterX"*/);
    byte_59727F0 = 1;
  }
  v3 = sub_2213CCC(ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  *(_QWORD *)(v3 + 20) = 0x3F0000003C23D70ALL;
  *(_DWORD *)(v3 + 28) = 1056964608;
  System_Object___ctor((Il2CppObject *)v3, 0);
  SampleRange = ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  v6 = (System_String_o *)StringLiteral_16792/*"_CenterX"*/;
  *(_DWORD *)(v3 + 16) = SampleRange;
  FloatProperty = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v6, v7);
  v9 = (System_String_o *)StringLiteral_16793/*"_CenterY"*/;
  *(float *)(v3 + 24) = FloatProperty;
  *(float *)(v3 + 28) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(material, v9, v10);
  return (ScriptActionRenderEffectController_MotionBlurParam_o *)v3;
}


System_Single_array *ScriptActionRenderEffectController_MotionBlurParam__GetBlurFactors(
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  Il2CppClass *v5; // x0
  __int64 v6; // x1
  System_Single_array *result; // x0
  __int64 v8; // x1
  float v9; // s11
  float v10; // s12
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s0
  float v15; // s1
  float v16; // s12
  float v17; // s11
  float v18; // s14
  float v19; // s13
  float v20; // s0
  float v21; // s1
  unsigned int max_length; // w8
  float v23; // s0

  if ( (byte_59727F2 & 1) == 0 )
  {
    sub_2213A60(&float___TypeInfo);
    byte_59727F2 = 1;
  }
  if ( sigma == 0.0 )
  {
    v5 = float___TypeInfo;
    if ( (unsigned int)(sampleRange - 1) >= 4 )
      v6 = 1;
    else
      v6 = (unsigned int)sampleRange;
LABEL_7:
    result = (System_Single_array *)sub_2213B20(v5, v6);
    if ( result )
    {
      if ( LODWORD(result->max_length) )
      {
        result->m_Items[0] = 1.0;
        return result;
      }
LABEL_28:
      sub_2213CE4(result);
    }
LABEL_29:
    sub_2213CDC(result, v8);
  }
  v9 = 1.0 / (float)(sigma * 2.5066);
  v10 = (float)(sigma + sigma) * sigma;
  v11 = v9 * expf(-0.0 / v10);
  v12 = v9 * expf(-1.0 / v10);
  v13 = v9 * expf(-4.0 / v10);
  v14 = expf(-9.0 / v10);
  v15 = -16.0 / v10;
  v16 = v9 * v14;
  v17 = v9 * expf(v15);
  if ( sampleRange > 2 )
  {
    if ( sampleRange == 3 )
    {
      v21 = v13 + v13;
      v18 = v16 + v16;
      v20 = v11 + (float)(v12 + v12);
    }
    else
    {
      if ( sampleRange != 4 )
        goto LABEL_17;
      v18 = v17 + v17;
      v20 = (float)(v13 + v13) + (float)(v11 + (float)(v12 + v12));
      v21 = v16 + v16;
    }
    v19 = v21 + v20;
  }
  else
  {
    if ( sampleRange != 1 )
    {
      if ( sampleRange == 2 )
      {
        v18 = v13 + v13;
        v19 = v11 + (float)(v12 + v12);
        goto LABEL_21;
      }
LABEL_17:
      v5 = float___TypeInfo;
      v6 = 1;
      goto LABEL_7;
    }
    v19 = v12 + v12;
    v18 = v11;
  }
LABEL_21:
  result = (System_Single_array *)sub_2213B20(float___TypeInfo, 5);
  if ( !result )
    goto LABEL_29;
  max_length = result->max_length;
  if ( !max_length )
    goto LABEL_28;
  v23 = v18 + v19;
  result->m_Items[0] = v11 / (float)(v18 + v19);
  if ( max_length == 1 )
    goto LABEL_28;
  result->m_Items[1] = v12 / v23;
  if ( max_length <= 2 )
    goto LABEL_28;
  result->m_Items[2] = v13 / v23;
  if ( max_length == 3 )
    goto LABEL_28;
  result->m_Items[3] = v16 / v23;
  if ( max_length <= 4 )
    goto LABEL_28;
  result->m_Items[4] = v17 / v23;
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
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  v8 = material;
  if ( (byte_59727F1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16812/*"_Coefficient"*/);
    sub_2213A60(&StringLiteral_16793/*"_CenterY"*/);
    sub_2213A60(&StringLiteral_16997/*"_Sigma"*/);
    sub_2213A60(&StringLiteral_16971/*"_Range"*/);
    sub_2213A60(&StringLiteral_16781/*"_BlurFactor"*/);
    material = (UnityEngine_Material_o *)sub_2213A60(&StringLiteral_16792/*"_CenterX"*/);
    byte_59727F1 = 1;
  }
  if ( !destParam
    || !srcParam
    || (sampleRange = destParam->fields.sampleRange,
        v10 = srcParam->fields.sigma + (float)((float)(destParam->fields.sigma - srcParam->fields.sigma) * rate),
        ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
          v8,
          (System_String_o *)StringLiteral_16997/*"_Sigma"*/,
          v10,
          (const MethodInfo *)destParam),
        material = (UnityEngine_Material_o *)ScriptActionRenderEffectController_MotionBlurParam__GetBlurFactors(
                                               sampleRange,
                                               v10,
                                               v11),
        !v8) )
  {
    sub_2213CDC(material, srcParam);
  }
  UnityEngine_Material__SetFloatArray_83285888(
    v8,
    (System_String_o *)StringLiteral_16781/*"_BlurFactor"*/,
    (System_Single_array *)material,
    0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16792/*"_CenterX"*/,
    srcParam->fields.centerX + (float)((float)(destParam->fields.centerX - srcParam->fields.centerX) * rate),
    v12);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16793/*"_CenterY"*/,
    srcParam->fields.centerY + (float)((float)(destParam->fields.centerY - srcParam->fields.centerY) * rate),
    v13);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16971/*"_Range"*/,
    srcParam->fields.range + (float)((float)(destParam->fields.range - srcParam->fields.range) * rate),
    v14);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16812/*"_Coefficient"*/,
    srcParam->fields.coefficient + (float)((float)(destParam->fields.coefficient - srcParam->fields.coefficient) * rate),
    v15);
}


void ScriptActionRenderEffectController_ReflectionFunction___ctor(
        ScriptActionRenderEffectController_ReflectionFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200F930;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200F8E0;
}


System_IAsyncResult_o *ScriptActionRenderEffectController_ReflectionFunction__BeginInvoke(
        ScriptActionRenderEffectController_ReflectionFunction_o *this,
        float animeRate,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  float v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = animeRate;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984378, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void ScriptActionRenderEffectController_ReflectionFunction__EndInvoke(
        ScriptActionRenderEffectController_ReflectionFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200F984;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200F944;
}


System_IAsyncResult_o *ScriptActionRenderEffectController_StopFunction__BeginInvoke(
        ScriptActionRenderEffectController_StopFunction_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void ScriptActionRenderEffectController_StopFunction__EndInvoke(
        ScriptActionRenderEffectController_StopFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  float v5; // s0

  _4__this = this->fields.__4__this;
  if ( !this->fields.count )
  {
    if ( _4__this )
      goto LABEL_5;
LABEL_6:
    sub_2213CDC(this, method);
  }
  if ( !_4__this )
    goto LABEL_6;
  v5 = vabds_f32(0.5, rate);
  rate = (float)(0.5 - v5) + (float)(0.5 - v5);
LABEL_5:
  ScriptActionRenderEffectController_DistortionParam__ReflectionMaterial(
    _4__this->fields.material_,
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  ScriptActionRenderEffectController_MotionBlurParam__ReflectionMaterial(
    _4__this->fields.material_,
    this->fields.srcParam,
    this->fields.destPram,
    rate,
    v3);
}


void ScriptActionRenderEffectController___c__DisplayClass25_0___ctor(
        ScriptActionRenderEffectController___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptActionRenderEffectController___c__DisplayClass25_0___StartFrostedGlass_b__0(
        ScriptActionRenderEffectController___c__DisplayClass25_0_o *this,
        float rate,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ScriptActionRenderEffectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  ScriptActionRenderEffectController_FrostedGlassParam__ReflectionMaterial(
    _4__this->fields.material_,
    this->fields.srcParam,
    this->fields.destParam,
    rate,
    v3);
}


void ScriptActionRenderEffectController___c__DisplayClass26_0___ctor(
        ScriptActionRenderEffectController___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptActionRenderEffectController___c__DisplayClass26_0___StopFrostedGlass_b__0(
        ScriptActionRenderEffectController___c__DisplayClass26_0_o *this,
        float rate,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ScriptActionRenderEffectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  ScriptActionRenderEffectController_FrostedGlassParam__ReflectionMaterial(
    _4__this->fields.material_,
    this->fields.srcParam,
    this->fields.destParam,
    rate,
    v3);
}