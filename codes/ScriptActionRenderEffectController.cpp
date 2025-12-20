void ScriptActionRenderEffectController___ctor(
        ScriptActionRenderEffectController_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  this->fields.timerMax = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.material_ = material;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.material_, (int32_t)material, v5, v6, v7, v8, v9, v10);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

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
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.stopFunction, 0, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4D2E7DD & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16395/*"_Scatter"*/);
    sub_1C94098(&StringLiteral_16437/*"_Tiling"*/);
    sub_1C94098(&StringLiteral_16197/*"_BlurLv"*/);
    sub_1C94098(&StringLiteral_16196/*"_BlurFactor"*/);
    byte_4D2E7DD = 1;
  }
  material = this->fields.material_;
  BlurFactors = ScriptActionRenderEffectController_GaussianBlurParam__GetBlurFactors(
                  sampleRange,
                  sigma,
                  *(const MethodInfo **)&sampleRange);
  if ( !material )
    sub_1C942F0(BlurFactors, v13);
  UnityEngine_Material__SetFloatArray_71980680(material, (System_String_o *)StringLiteral_16196/*"_BlurFactor"*/, BlurFactors, 0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    this->fields.material_,
    (System_String_o *)StringLiteral_16437/*"_Tiling"*/,
    tiling,
    v14);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    this->fields.material_,
    (System_String_o *)StringLiteral_16395/*"_Scatter"*/,
    scatter,
    v15);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    this->fields.material_,
    (System_String_o *)StringLiteral_16197/*"_BlurLv"*/,
    (float)sampleRange,
    v16);
}


void ScriptActionRenderEffectController__SetFrostedTexture(
        ScriptActionRenderEffectController_o *this,
        UnityEngine_Texture_o *glassTex,
        const MethodInfo *method)
{
  UnityEngine_Material_o *material; // x0

  if ( (byte_4D2E7DE & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16200/*"_BumpMap"*/);
    byte_4D2E7DE = 1;
  }
  material = this->fields.material_;
  if ( !material )
    sub_1C942F0(0, glassTex);
  UnityEngine_Material__SetTexture(material, (System_String_o *)StringLiteral_16200/*"_BumpMap"*/, glassTex, 0);
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

  if ( (byte_4D2E7DB & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16196/*"_BlurFactor"*/);
    byte_4D2E7DB = 1;
  }
  ScriptActionRenderEffectController_EffectParamBase__SetSampleRange(this->fields.material_, sampleRange, method);
  material = this->fields.material_;
  BlurFactors = ScriptActionRenderEffectController_GaussianBlurParam__GetBlurFactors(sampleRange, sigma, v8);
  if ( !material )
    sub_1C942F0(BlurFactors, v10);
  UnityEngine_Material__SetFloatArray_71980680(material, (System_String_o *)StringLiteral_16196/*"_BlurFactor"*/, BlurFactors, 0);
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

  if ( (byte_4D2E7DC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16196/*"_BlurFactor"*/);
    byte_4D2E7DC = 1;
  }
  ScriptActionRenderEffectController_EffectParamBase__SetSampleRange(this->fields.material_, sampleRange, method);
  material = this->fields.material_;
  BlurFactors = ScriptActionRenderEffectController_MotionBlurParam__GetBlurFactors(sampleRange, sigma, v8);
  if ( !material )
    sub_1C942F0(BlurFactors, v10);
  UnityEngine_Material__SetFloatArray_71980680(material, (System_String_o *)StringLiteral_16196/*"_BlurFactor"*/, BlurFactors, 0);
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
  int64_t v7; // x6
  System_String_o *v8; // x7
  bool v13; // w21
  char v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x2

  this->fields.reflectionFunction = func;
  v13 = isStop;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.reflectionFunction,
    (int32_t)func,
    isStop,
    (int32_t)func,
    (System_String_o *)stopfunc,
    (int32_t)method,
    v7,
    v8);
  this->fields.stopFunction = stopfunc;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.stopFunction,
    (int32_t)stopfunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.requestStop = v13;
  if ( sec <= 0.0 )
  {
    ScriptActionRenderEffectController__OnStop(this, v13, v20);
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
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1
  ScriptActionRenderEffectController_DistortionParam_o *MaterialValue; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x0
  ScriptActionRenderEffectController_DistortionParam_o *DistortionParam; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w21
  ScriptActionRenderEffectController_ReflectionFunction_o *v43; // x22
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x5

  if ( (byte_4D2E7D3 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C94098(&Method_ScriptActionRenderEffectController___c__DisplayClass19_0__StartDistortion_b__0__);
    sub_1C94098(&ScriptActionRenderEffectController___c__DisplayClass19_0_TypeInfo);
    byte_4D2E7D3 = 1;
  }
  v17 = sub_1C942E4(ScriptActionRenderEffectController___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_1C942F0(v18, v19);
  *(_DWORD *)(v17 + 16) = count;
  *(_QWORD *)(v17 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 24), (int32_t)this, v20, v21, v22, v23, v24, v25);
  MaterialValue = ScriptActionRenderEffectController_DistortionParam__CreateMaterialValue(this->fields.material_, v26);
  *(_QWORD *)(v17 + 32) = MaterialValue;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 32), (int32_t)MaterialValue, v28, v29, v30, v31, v32, v33);
  DistortionParam = ScriptActionRenderEffectController_DistortionParam__CreateDistortionParam(
                      centerX,
                      centerY,
                      strength,
                      range,
                      coefficient,
                      v34);
  *(_QWORD *)(v17 + 40) = DistortionParam;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 40), (int32_t)DistortionParam, v36, v37, v38, v39, v40, v41);
  v42 = *(_DWORD *)(v17 + 16);
  v43 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C942E4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  ScriptActionRenderEffectController_FrostedGlassParam_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  const MethodInfo *v30; // x1
  ScriptActionRenderEffectController_FrostedGlassParam_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  ScriptActionRenderEffectController_ReflectionFunction_o *v38; // x20
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x5

  if ( (byte_4D2E7D9 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C94098(&Method_ScriptActionRenderEffectController___c__DisplayClass25_0__StartFrostedGlass_b__0__);
    sub_1C94098(&ScriptActionRenderEffectController___c__DisplayClass25_0_TypeInfo);
    byte_4D2E7D9 = 1;
  }
  v13 = sub_1C942E4(ScriptActionRenderEffectController___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    sub_1C942F0(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  v23 = ScriptActionRenderEffectController_FrostedGlassParam__CreateByMaterialValue(this->fields.material_, v22);
  *(_QWORD *)(v13 + 24) = v23;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v31 = ScriptActionRenderEffectController_FrostedGlassParam__CreateByParams(sampleRange, sigma, tiling, scatter, v30);
  *(_QWORD *)(v13 + 32) = v31;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C942E4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x1
  ScriptActionRenderEffectController_GaussianBlurParam_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1
  ScriptActionRenderEffectController_GaussianBlurParam_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  ScriptActionRenderEffectController_ReflectionFunction_o *v34; // x20
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x5

  if ( (byte_4D2E7D5 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C94098(&Method_ScriptActionRenderEffectController___c__DisplayClass21_0__StartGaussianBlur_b__0__);
    sub_1C94098(&ScriptActionRenderEffectController___c__DisplayClass21_0_TypeInfo);
    byte_4D2E7D5 = 1;
  }
  v9 = sub_1C942E4(ScriptActionRenderEffectController___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C942F0(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  v19 = ScriptActionRenderEffectController_GaussianBlurParam__CreateByMaterialValue(this->fields.material_, v18);
  *(_QWORD *)(v9 + 24) = v19;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v27 = ScriptActionRenderEffectController_GaussianBlurParam__CreateByParams(sampleRange, sigma, v26);
  *(_QWORD *)(v9 + 32) = v27;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C942E4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1
  ScriptActionRenderEffectController_MotionBlurParam_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x1
  ScriptActionRenderEffectController_MotionBlurParam_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  ScriptActionRenderEffectController_ReflectionFunction_o *v42; // x20
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x5

  if ( (byte_4D2E7D7 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C94098(&Method_ScriptActionRenderEffectController___c__DisplayClass23_0__StartMotionBlur_b__0__);
    sub_1C94098(&ScriptActionRenderEffectController___c__DisplayClass23_0_TypeInfo);
    byte_4D2E7D7 = 1;
  }
  v17 = sub_1C942E4(ScriptActionRenderEffectController___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_1C942F0(v18, v19);
  *(_QWORD *)(v17 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  v27 = ScriptActionRenderEffectController_MotionBlurParam__CreateByMaterialValue(this->fields.material_, v26);
  *(_QWORD *)(v17 + 24) = v27;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 24), (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v35 = ScriptActionRenderEffectController_MotionBlurParam__CreateByParams(
          sampleRange,
          sigma,
          centerX,
          centerY,
          range,
          coefficient,
          v34);
  *(_QWORD *)(v17 + 32) = v35;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 32), (int32_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C942E4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  ScriptActionRenderEffectController_DistortionParam_o *MaterialValue; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1
  ScriptActionRenderEffectController_DistortionParam_o *StopMaterial; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ScriptActionRenderEffectController_ReflectionFunction_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x5

  if ( (byte_4D2E7D4 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C94098(&Method_ScriptActionRenderEffectController___c__DisplayClass20_0__StopDistortion_b__0__);
    sub_1C94098(&ScriptActionRenderEffectController___c__DisplayClass20_0_TypeInfo);
    byte_4D2E7D4 = 1;
  }
  v7 = sub_1C942E4(ScriptActionRenderEffectController___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  MaterialValue = ScriptActionRenderEffectController_DistortionParam__CreateMaterialValue(this->fields.material_, v16);
  *(_QWORD *)(v7 + 24) = MaterialValue;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)MaterialValue, v18, v19, v20, v21, v22, v23);
  StopMaterial = ScriptActionRenderEffectController_DistortionParam__CreateStopMaterial(this->fields.material_, v24);
  *(_QWORD *)(v7 + 32) = StopMaterial;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)StopMaterial, v26, v27, v28, v29, v30, v31);
  v32 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C942E4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  ScriptActionRenderEffectController_FrostedGlassParam_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1
  ScriptActionRenderEffectController_FrostedGlassParam_o *StopByMaterial; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ScriptActionRenderEffectController_ReflectionFunction_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x5

  if ( (byte_4D2E7DA & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C94098(&Method_ScriptActionRenderEffectController___c__DisplayClass26_0__StopFrostedGlass_b__0__);
    sub_1C94098(&ScriptActionRenderEffectController___c__DisplayClass26_0_TypeInfo);
    byte_4D2E7DA = 1;
  }
  v7 = sub_1C942E4(ScriptActionRenderEffectController___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v17 = ScriptActionRenderEffectController_FrostedGlassParam__CreateByMaterialValue(this->fields.material_, v16);
  *(_QWORD *)(v7 + 24) = v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  StopByMaterial = ScriptActionRenderEffectController_FrostedGlassParam__CreateStopByMaterial(
                     this->fields.material_,
                     v24);
  *(_QWORD *)(v7 + 32) = StopByMaterial;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)StopByMaterial, v26, v27, v28, v29, v30, v31);
  v32 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C942E4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  ScriptActionRenderEffectController_GaussianBlurParam_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1
  ScriptActionRenderEffectController_GaussianBlurParam_o *StopByMaterial; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ScriptActionRenderEffectController_ReflectionFunction_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x5

  if ( (byte_4D2E7D6 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C94098(&Method_ScriptActionRenderEffectController___c__DisplayClass22_0__StopGaussianBlur_b__0__);
    sub_1C94098(&ScriptActionRenderEffectController___c__DisplayClass22_0_TypeInfo);
    byte_4D2E7D6 = 1;
  }
  v7 = sub_1C942E4(ScriptActionRenderEffectController___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v17 = ScriptActionRenderEffectController_GaussianBlurParam__CreateByMaterialValue(this->fields.material_, v16);
  *(_QWORD *)(v7 + 24) = v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  StopByMaterial = ScriptActionRenderEffectController_GaussianBlurParam__CreateStopByMaterial(
                     this->fields.material_,
                     v24);
  *(_QWORD *)(v7 + 32) = StopByMaterial;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)StopByMaterial, v26, v27, v28, v29, v30, v31);
  v32 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C942E4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  ScriptActionRenderEffectController_MotionBlurParam_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1
  ScriptActionRenderEffectController_MotionBlurParam_o *StopByMaterial; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ScriptActionRenderEffectController_ReflectionFunction_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x5

  if ( (byte_4D2E7D8 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
    sub_1C94098(&Method_ScriptActionRenderEffectController___c__DisplayClass24_0__StopMotionBlur_b__0__);
    sub_1C94098(&ScriptActionRenderEffectController___c__DisplayClass24_0_TypeInfo);
    byte_4D2E7D8 = 1;
  }
  v7 = sub_1C942E4(ScriptActionRenderEffectController___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v17 = ScriptActionRenderEffectController_MotionBlurParam__CreateByMaterialValue(this->fields.material_, v16);
  *(_QWORD *)(v7 + 24) = v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  StopByMaterial = ScriptActionRenderEffectController_MotionBlurParam__CreateStopByMaterial(this->fields.material_, v24);
  *(_QWORD *)(v7 + 32) = StopByMaterial;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)StopByMaterial, v26, v27, v28, v29, v30, v31);
  v32 = (ScriptActionRenderEffectController_ReflectionFunction_o *)sub_1C942E4(ScriptActionRenderEffectController_ReflectionFunction_TypeInfo);
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
  float timerMax; // s8
  struct ScriptActionRenderEffectController_ReflectionFunction_o *reflectionFunction; // x8
  float v10; // s0
  float v11; // s1
  bool v12; // nf
  float loopCount; // s9
  struct ScriptActionRenderEffectController_ReflectionFunction_o *v14; // x8

  if ( (byte_4D2E7D2 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E7D2 = 1;
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

  if ( (byte_4D2E7E0 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_DistortionParam_TypeInfo);
    byte_4D2E7E0 = 1;
  }
  v11 = sub_1C942E4(ScriptActionRenderEffectController_DistortionParam_TypeInfo);
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

  if ( (byte_4D2E7E1 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_DistortionParam_TypeInfo);
    sub_1C94098(&StringLiteral_16414/*"_Strength"*/);
    sub_1C94098(&StringLiteral_16228/*"_Coefficient"*/);
    sub_1C94098(&StringLiteral_16208/*"_CenterY"*/);
    sub_1C94098(&StringLiteral_16377/*"_Range"*/);
    sub_1C94098(&StringLiteral_16207/*"_CenterX"*/);
    byte_4D2E7E1 = 1;
  }
  v3 = sub_1C942E4(ScriptActionRenderEffectController_DistortionParam_TypeInfo);
  *(_QWORD *)(v3 + 16) = 0x3F0000003F000000LL;
  *(_DWORD *)(v3 + 32) = 1120403456;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(float *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16207/*"_CenterX"*/,
                          v4);
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16208/*"_CenterY"*/,
                          v5);
  *(float *)(v3 + 24) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16414/*"_Strength"*/,
                          v6);
  *(float *)(v3 + 28) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16377/*"_Range"*/,
                          v7);
  *(float *)(v3 + 32) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16228/*"_Coefficient"*/,
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

  if ( (byte_4D2E7E2 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_DistortionParam_TypeInfo);
    sub_1C94098(&StringLiteral_16228/*"_Coefficient"*/);
    sub_1C94098(&StringLiteral_16208/*"_CenterY"*/);
    sub_1C94098(&StringLiteral_16207/*"_CenterX"*/);
    byte_4D2E7E2 = 1;
  }
  v3 = sub_1C942E4(ScriptActionRenderEffectController_DistortionParam_TypeInfo);
  *(_QWORD *)(v3 + 16) = 0x3F0000003F000000LL;
  *(_DWORD *)(v3 + 32) = 1120403456;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(float *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16207/*"_CenterX"*/,
                          v4);
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16208/*"_CenterY"*/,
                          v5);
  *(float *)(v3 + 32) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16228/*"_Coefficient"*/,
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
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  v8 = material;
  if ( (byte_4D2E7E3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16414/*"_Strength"*/);
    sub_1C94098(&StringLiteral_16228/*"_Coefficient"*/);
    sub_1C94098(&StringLiteral_16208/*"_CenterY"*/);
    sub_1C94098(&StringLiteral_16377/*"_Range"*/);
    material = (UnityEngine_Material_o *)sub_1C94098(&StringLiteral_16207/*"_CenterX"*/);
    byte_4D2E7E3 = 1;
  }
  if ( !srcParam || !destParam )
    sub_1C942F0(material, srcParam);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16207/*"_CenterX"*/,
    srcParam->fields.centerX + (float)((float)(destParam->fields.centerX - srcParam->fields.centerX) * rate),
    (const MethodInfo *)destParam);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16208/*"_CenterY"*/,
    srcParam->fields.centerY + (float)((float)(destParam->fields.centerY - srcParam->fields.centerY) * rate),
    v9);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16414/*"_Strength"*/,
    srcParam->fields.strength + (float)((float)(destParam->fields.strength - srcParam->fields.strength) * rate),
    v10);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16377/*"_Range"*/,
    srcParam->fields.range + (float)((float)(destParam->fields.range - srcParam->fields.range) * rate),
    v11);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16228/*"_Coefficient"*/,
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

  v4 = material;
  if ( (byte_4D2E7F3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16208/*"_CenterY"*/);
    material = (UnityEngine_Material_o *)sub_1C94098(&StringLiteral_16207/*"_CenterX"*/);
    byte_4D2E7F3 = 1;
  }
  if ( !v4 )
    sub_1C942F0(material, key);
  if ( UnityEngine_Material__HasProperty_71976444(v4, key, 0) )
    return UnityEngine_Material__GetFloat(v4, key, 0);
  if ( System_String__op_Equality(key, (System_String_o *)StringLiteral_16207/*"_CenterX"*/, 0) )
    return 0.5;
  v6 = System_String__op_Equality(key, (System_String_o *)StringLiteral_16208/*"_CenterY"*/, 0);
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
  __int64 v5; // x1

  v3 = 1;
  while ( 1 )
  {
    SampleRangeKeyword = ScriptActionRenderEffectController_EffectParamBase__GetSampleRangeKeyword(v3, method);
    if ( !material )
      sub_1C942F0(SampleRangeKeyword, v5);
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

  if ( (byte_4D2E7F4 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_11493/*"SAMPLERANGE_{0}"*/);
    byte_4D2E7F4 = 1;
  }
  v5 = sampleRange;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_11493/*"SAMPLERANGE_{0}"*/, v3, 0);
}


void ScriptActionRenderEffectController_EffectParamBase__SetFloatArrayProperty(
        UnityEngine_Material_o *material,
        System_String_o *key,
        System_Single_array *values,
        const MethodInfo *method)
{
  if ( !material )
    sub_1C942F0(0, key);
  UnityEngine_Material__SetFloatArray_71980680(material, key, values, 0);
}


void ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
        UnityEngine_Material_o *material,
        System_String_o *key,
        float value,
        const MethodInfo *method)
{
  if ( !material )
    sub_1C942F0(0, key);
  if ( UnityEngine_Material__HasProperty_71976444(material, key, 0) )
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
      sub_1C942F0(SampleRangeKeyword, v7);
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
    sub_1C942F0(0, key);
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
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4D2E7EF & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
    sub_1C94098(&StringLiteral_16395/*"_Scatter"*/);
    sub_1C94098(&StringLiteral_16403/*"_Sigma"*/);
    sub_1C94098(&StringLiteral_16437/*"_Tiling"*/);
    sub_1C94098(&StringLiteral_16197/*"_BlurLv"*/);
    byte_4D2E7EF = 1;
  }
  v3 = sub_1C942E4(ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
  *(_DWORD *)(v3 + 28) = 1065353216;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(float *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16403/*"_Sigma"*/,
                          v4);
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16437/*"_Tiling"*/,
                          v5);
  *(float *)(v3 + 24) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16395/*"_Scatter"*/,
                          v6);
  *(float *)(v3 + 28) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16197/*"_BlurLv"*/,
                          v7);
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

  if ( (byte_4D2E7EE & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
    byte_4D2E7EE = 1;
  }
  v9 = sub_1C942E4(ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
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
  const MethodInfo *v4; // x2

  if ( (byte_4D2E7F0 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
    sub_1C94098(&StringLiteral_16437/*"_Tiling"*/);
    byte_4D2E7F0 = 1;
  }
  v3 = sub_1C942E4(ScriptActionRenderEffectController_FrostedGlassParam_TypeInfo);
  *(_DWORD *)(v3 + 28) = 1065353216;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16437/*"_Tiling"*/,
                          v4);
  *(_QWORD *)(v3 + 24) = 0x3F80000000000000LL;
  return (ScriptActionRenderEffectController_FrostedGlassParam_o *)v3;
}


System_Single_array *ScriptActionRenderEffectController_FrostedGlassParam__GetBlurFactors(
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  float v5; // s15
  float v6; // s14
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s11
  float v11; // s12
  float v12; // s13
  float v13; // s14
  float v14; // s15
  System_Single_array *result; // x0
  __int64 v16; // x1
  unsigned int max_length; // w8
  float v18; // s0
  float *m_Items; // x8
  float v20; // [xsp+48h] [xbp-18h]
  float v21; // [xsp+4Ch] [xbp-14h]

  if ( (byte_4D2E7F2 & 1) == 0 )
  {
    sub_1C94098(&float___TypeInfo);
    byte_4D2E7F2 = 1;
  }
  if ( sampleRange < 1 || sigma == 0.0 )
  {
    result = (System_Single_array *)sub_1C94140(float___TypeInfo, 9);
    if ( result )
    {
      if ( LODWORD(result->max_length) )
      {
        m_Items = result->m_Items;
        v18 = 1.0;
        goto LABEL_23;
      }
LABEL_24:
      sub_1C942F8(result);
    }
LABEL_25:
    sub_1C942F0(result, v16);
  }
  v5 = (float)(sigma + sigma) * sigma;
  v6 = 1.0 / (float)(sigma * 2.5066);
  v7 = v6 * expf(-0.0 / v5);
  v8 = v6 * expf(-1.0 / v5);
  v9 = v6 * expf(-2.0 / v5);
  v10 = v6 * expf(-4.0 / v5);
  v11 = v6 * expf(-5.0 / v5);
  v12 = v6 * expf(-9.0 / v5);
  v21 = v6 * expf(-8.0 / v5);
  v20 = v6 * expf(-10.0 / v5);
  v13 = v6 * expf(-16.0 / v5);
  v14 = (float)(v7 + (float)(v8 * 4.0)) + 0.0;
  if ( sampleRange >= 2 )
  {
    v14 = (float)((float)(v9 * 4.0) + (float)(v10 * 4.0)) + v14;
    if ( sampleRange != 2 )
    {
      v14 = (float)((float)(v11 * 8.0) + (float)(v12 * 4.0)) + v14;
      if ( sampleRange >= 4 )
        v14 = (float)((float)(v13 * 4.0) + (float)((float)(v21 * 4.0) + (float)(v20 * 8.0))) + v14;
    }
  }
  result = (System_Single_array *)sub_1C94140(float___TypeInfo, 9);
  if ( !result )
    goto LABEL_25;
  max_length = result->max_length;
  if ( !max_length )
    goto LABEL_24;
  result->m_Items[0] = v7 / v14;
  if ( max_length == 1 )
    goto LABEL_24;
  result->m_Items[1] = v8 / v14;
  if ( max_length <= 2 )
    goto LABEL_24;
  result->m_Items[2] = v9 / v14;
  if ( max_length == 3 )
    goto LABEL_24;
  result->m_Items[3] = v10 / v14;
  if ( max_length <= 4 )
    goto LABEL_24;
  result->m_Items[4] = v11 / v14;
  if ( max_length == 5 )
    goto LABEL_24;
  result->m_Items[5] = v12 / v14;
  if ( max_length <= 6 )
    goto LABEL_24;
  result->m_Items[6] = v21 / v14;
  if ( max_length == 7 )
    goto LABEL_24;
  result->m_Items[7] = v20 / v14;
  if ( max_length <= 8 )
    goto LABEL_24;
  v18 = v13 / v14;
  m_Items = &result->m_Items[8];
LABEL_23:
  *m_Items = v18;
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
  float v9; // s9
  float v10; // s0
  int32_t v11; // w22
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  v8 = material;
  if ( (byte_4D2E7F1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16395/*"_Scatter"*/);
    sub_1C94098(&StringLiteral_16403/*"_Sigma"*/);
    sub_1C94098(&StringLiteral_16437/*"_Tiling"*/);
    sub_1C94098(&StringLiteral_16197/*"_BlurLv"*/);
    material = (UnityEngine_Material_o *)sub_1C94098(&StringLiteral_16196/*"_BlurFactor"*/);
    byte_4D2E7F1 = 1;
  }
  if ( !srcParam
    || !destParam
    || ((v9 = srcParam->fields.sigma + (float)((float)(destParam->fields.sigma - srcParam->fields.sigma) * rate),
         v10 = srcParam->fields.blurLv + (float)((float)(destParam->fields.blurLv - srcParam->fields.blurLv) * rate),
         v10 != INFINITY)
      ? (v11 = (int)v10)
      : (v11 = 0x80000000),
        ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
          v8,
          (System_String_o *)StringLiteral_16403/*"_Sigma"*/,
          srcParam->fields.sigma + (float)((float)(destParam->fields.sigma - srcParam->fields.sigma) * rate),
          (const MethodInfo *)destParam),
        material = (UnityEngine_Material_o *)ScriptActionRenderEffectController_FrostedGlassParam__GetBlurFactors(
                                               v11,
                                               v9,
                                               v12),
        !v8) )
  {
    sub_1C942F0(material, srcParam);
  }
  UnityEngine_Material__SetFloatArray_71980680(
    v8,
    (System_String_o *)StringLiteral_16196/*"_BlurFactor"*/,
    (System_Single_array *)material,
    0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16437/*"_Tiling"*/,
    srcParam->fields.tiling + (float)((float)(destParam->fields.tiling - srcParam->fields.tiling) * rate),
    v13);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16395/*"_Scatter"*/,
    srcParam->fields.scatter + (float)((float)(destParam->fields.scatter - srcParam->fields.scatter) * rate),
    v14);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16197/*"_BlurLv"*/,
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
  const MethodInfo *v5; // x2

  if ( (byte_4D2E7E5 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
    sub_1C94098(&StringLiteral_16403/*"_Sigma"*/);
    byte_4D2E7E5 = 1;
  }
  v3 = sub_1C942E4(ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16403/*"_Sigma"*/,
                          v5);
  return (ScriptActionRenderEffectController_GaussianBlurParam_o *)v3;
}


ScriptActionRenderEffectController_GaussianBlurParam_o *ScriptActionRenderEffectController_GaussianBlurParam__CreateByParams(
        int32_t sampleRange,
        float sigma,
        const MethodInfo *method)
{
  __int64 v5; // x20

  if ( (byte_4D2E7E4 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
    byte_4D2E7E4 = 1;
  }
  v5 = sub_1C942E4(ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
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

  if ( (byte_4D2E7E6 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
    byte_4D2E7E6 = 1;
  }
  v3 = sub_1C942E4(ScriptActionRenderEffectController_GaussianBlurParam_TypeInfo);
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
  Il2CppClass *v5; // x0
  __int64 v6; // x1
  System_Single_array *result; // x0
  __int64 v8; // x1
  float *m_Items; // x8
  float v10; // s0
  float v11; // s11
  float v12; // s10
  float v13; // s12
  float v14; // s13
  float v15; // s14
  float v16; // s15
  float v17; // s9
  float v18; // s0
  float v19; // s1
  float v20; // s16
  float v21; // s11
  float v22; // s3
  float v23; // s12
  float v24; // s7
  float v25; // s8
  float v26; // s13
  float v27; // s14
  float v28; // s15
  float v29; // s9
  float v30; // s10
  unsigned int max_length; // w8
  float v32; // s0
  float v33; // [xsp+Ch] [xbp-64h]
  float v34; // [xsp+58h] [xbp-18h]
  float v35; // [xsp+58h] [xbp-18h]
  float v36; // [xsp+5Ch] [xbp-14h]
  float v37; // [xsp+5Ch] [xbp-14h]

  if ( (byte_4D2E7E8 & 1) == 0 )
  {
    sub_1C94098(&float___TypeInfo);
    byte_4D2E7E8 = 1;
  }
  if ( sigma == 0.0 )
  {
    v5 = float___TypeInfo;
    if ( (unsigned int)(sampleRange - 1) >= 4 )
      v6 = 1;
    else
      v6 = (unsigned int)sampleRange;
LABEL_7:
    result = (System_Single_array *)sub_1C94140(v5, v6);
    if ( !result )
LABEL_29:
      sub_1C942F0(result, v8);
    if ( !LODWORD(result->max_length) )
LABEL_28:
      sub_1C942F8(result);
    m_Items = result->m_Items;
    v10 = 1.0;
  }
  else
  {
    v11 = (float)(sigma + sigma) * sigma;
    v36 = expf(-0.0 / v11);
    v34 = expf(-1.0 / v11);
    v12 = expf(-2.0 / v11);
    v13 = expf(-4.0 / v11);
    v14 = expf(-5.0 / v11);
    v15 = expf(-9.0 / v11);
    v16 = expf(-8.0 / v11);
    v17 = expf(-10.0 / v11);
    v18 = expf(-16.0 / v11);
    v19 = 1.0 / (float)(sigma * 2.5066);
    v20 = v19 * v14;
    v21 = v19 * v36;
    v22 = v19 * v12;
    v23 = v19 * v13;
    v24 = v19 * v15;
    v25 = v19 * v34;
    v33 = v19 * v17;
    v35 = v19 * v16;
    v37 = v19 * v14;
    switch ( sampleRange )
    {
      case 1:
        v26 = v19 * v15;
        v27 = v19 * v12;
        v28 = v19 * v18;
        v29 = v25 * 4.0;
        v30 = v21;
        goto LABEL_16;
      case 2:
        v26 = v19 * v15;
        v28 = v19 * v18;
        v27 = v19 * v12;
        v29 = (float)(v22 * 4.0) + (float)(v21 + (float)(v25 * 4.0));
        v30 = v23 * 4.0;
        goto LABEL_16;
      case 3:
        v27 = v19 * v12;
        v28 = v19 * v18;
        v29 = (float)(v20 * 8.0)
            + (float)((float)(v23 * 4.0) + (float)((float)(v22 * 4.0) + (float)(v21 + (float)(v25 * 4.0))));
        v26 = v24;
        v30 = v24 * 4.0;
        goto LABEL_16;
      case 4:
        v27 = v19 * v12;
        v26 = v24;
        v29 = (float)((float)(v19 * v17) * 8.0)
            + (float)((float)((float)(v19 * v16) * 4.0)
                    + (float)((float)(v24 * 4.0)
                            + (float)((float)(v20 * 8.0)
                                    + (float)((float)(v23 * 4.0)
                                            + (float)((float)(v22 * 4.0) + (float)(v21 + (float)(v25 * 4.0)))))));
        v28 = v19 * v18;
        v30 = (float)(v19 * v18) * 4.0;
LABEL_16:
        result = (System_Single_array *)sub_1C94140(float___TypeInfo, 9);
        if ( !result )
          goto LABEL_29;
        max_length = result->max_length;
        if ( !max_length )
          goto LABEL_28;
        v32 = v30 + v29;
        result->m_Items[0] = v21 / (float)(v30 + v29);
        if ( max_length == 1 )
          goto LABEL_28;
        result->m_Items[1] = v25 / v32;
        if ( max_length <= 2 )
          goto LABEL_28;
        result->m_Items[2] = v27 / v32;
        if ( max_length == 3 )
          goto LABEL_28;
        result->m_Items[3] = v23 / v32;
        if ( max_length <= 4 )
          goto LABEL_28;
        result->m_Items[4] = v37 / v32;
        if ( max_length == 5 )
          goto LABEL_28;
        result->m_Items[5] = v26 / v32;
        if ( max_length <= 6 )
          goto LABEL_28;
        result->m_Items[6] = v35 / v32;
        if ( max_length == 7 )
          goto LABEL_28;
        result->m_Items[7] = v33 / v32;
        if ( max_length <= 8 )
          goto LABEL_28;
        v10 = v28 / v32;
        m_Items = &result->m_Items[8];
        break;
      default:
        v5 = float___TypeInfo;
        v6 = 1;
        goto LABEL_7;
    }
  }
  *m_Items = v10;
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
  if ( (byte_4D2E7E7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16403/*"_Sigma"*/);
    material = (UnityEngine_Material_o *)sub_1C94098(&StringLiteral_16196/*"_BlurFactor"*/);
    byte_4D2E7E7 = 1;
  }
  if ( !destParam
    || !srcParam
    || (sigma = destParam->fields.sigma,
        sampleRange = destParam->fields.sampleRange,
        v11 = srcParam->fields.sigma + (float)((float)(sigma - srcParam->fields.sigma) * rate),
        ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
          v8,
          (System_String_o *)StringLiteral_16403/*"_Sigma"*/,
          v11,
          (const MethodInfo *)destParam),
        material = (UnityEngine_Material_o *)ScriptActionRenderEffectController_GaussianBlurParam__GetBlurFactors(
                                               sampleRange,
                                               v11,
                                               v12),
        !v8) )
  {
    sub_1C942F0(material, srcParam);
  }
  UnityEngine_Material__SetFloatArray_71980680(
    v8,
    (System_String_o *)StringLiteral_16196/*"_BlurFactor"*/,
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

  if ( (byte_4D2E7EA & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
    sub_1C94098(&StringLiteral_16228/*"_Coefficient"*/);
    sub_1C94098(&StringLiteral_16208/*"_CenterY"*/);
    sub_1C94098(&StringLiteral_16403/*"_Sigma"*/);
    sub_1C94098(&StringLiteral_16377/*"_Range"*/);
    sub_1C94098(&StringLiteral_16207/*"_CenterX"*/);
    byte_4D2E7EA = 1;
  }
  v3 = sub_1C942E4(ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  *(_QWORD *)(v3 + 20) = 0x3F0000003C23D70ALL;
  *(_DWORD *)(v3 + 28) = 1056964608;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  *(float *)(v3 + 20) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16403/*"_Sigma"*/,
                          v5);
  *(float *)(v3 + 24) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16207/*"_CenterX"*/,
                          v6);
  *(float *)(v3 + 28) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16208/*"_CenterY"*/,
                          v7);
  *(float *)(v3 + 32) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16377/*"_Range"*/,
                          v8);
  *(float *)(v3 + 36) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16228/*"_Coefficient"*/,
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

  if ( (byte_4D2E7E9 & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
    byte_4D2E7E9 = 1;
  }
  v13 = sub_1C942E4(ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
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

  if ( (byte_4D2E7EB & 1) == 0 )
  {
    sub_1C94098(&ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
    sub_1C94098(&StringLiteral_16208/*"_CenterY"*/);
    sub_1C94098(&StringLiteral_16207/*"_CenterX"*/);
    byte_4D2E7EB = 1;
  }
  v3 = sub_1C942E4(ScriptActionRenderEffectController_MotionBlurParam_TypeInfo);
  *(_DWORD *)(v3 + 16) = 1;
  *(_QWORD *)(v3 + 20) = 0x3F0000003C23D70ALL;
  *(_DWORD *)(v3 + 28) = 1056964608;
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = ScriptActionRenderEffectController_EffectParamBase__GetSampleRange(material, v4);
  *(float *)(v3 + 24) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16207/*"_CenterX"*/,
                          v5);
  *(float *)(v3 + 28) = ScriptActionRenderEffectController_EffectParamBase__GetFloatProperty(
                          material,
                          (System_String_o *)StringLiteral_16208/*"_CenterY"*/,
                          v6);
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
  float v9; // s13
  float v10; // s9
  float v11; // s10
  float v12; // s11
  float v13; // s12
  float v14; // s0
  float v15; // s1
  float v16; // s14
  float v17; // s13
  float v18; // s10
  float v19; // s9
  float v20; // s8
  float v21; // s11
  float v22; // s12
  unsigned int max_length; // w8
  float v24; // s0

  if ( (byte_4D2E7ED & 1) == 0 )
  {
    sub_1C94098(&float___TypeInfo);
    byte_4D2E7ED = 1;
  }
  if ( sigma == 0.0 )
  {
    v5 = float___TypeInfo;
    if ( (unsigned int)(sampleRange - 1) >= 4 )
      v6 = 1;
    else
      v6 = (unsigned int)sampleRange;
LABEL_7:
    result = (System_Single_array *)sub_1C94140(v5, v6);
    if ( !result )
LABEL_24:
      sub_1C942F0(result, v8);
    if ( !LODWORD(result->max_length) )
LABEL_23:
      sub_1C942F8(result);
    result->m_Items[0] = 1.0;
  }
  else
  {
    v9 = (float)(sigma + sigma) * sigma;
    v10 = expf(-0.0 / v9);
    v11 = expf(-1.0 / v9);
    v12 = expf(-4.0 / v9);
    v13 = expf(-9.0 / v9);
    v14 = expf(-16.0 / v9);
    v15 = 1.0 / (float)(sigma * 2.5066);
    v16 = v15 * v10;
    v17 = v15 * v11;
    v18 = v15 * v12;
    v19 = v15 * v13;
    v20 = v15 * v14;
    switch ( sampleRange )
    {
      case 1:
        v21 = v17 + v17;
        v22 = v16;
        goto LABEL_16;
      case 2:
        v21 = v16 + (float)(v17 + v17);
        v22 = v18 + v18;
        goto LABEL_16;
      case 3:
        v21 = (float)(v18 + v18) + (float)(v16 + (float)(v17 + v17));
        v22 = v19 + v19;
        goto LABEL_16;
      case 4:
        v21 = (float)(v19 + v19) + (float)((float)(v18 + v18) + (float)(v16 + (float)(v17 + v17)));
        v22 = v20 + v20;
LABEL_16:
        result = (System_Single_array *)sub_1C94140(float___TypeInfo, 5);
        if ( !result )
          goto LABEL_24;
        max_length = result->max_length;
        if ( !max_length )
          goto LABEL_23;
        v24 = v22 + v21;
        result->m_Items[0] = v16 / (float)(v22 + v21);
        if ( max_length == 1 )
          goto LABEL_23;
        result->m_Items[1] = v17 / v24;
        if ( max_length <= 2 )
          goto LABEL_23;
        result->m_Items[2] = v18 / v24;
        if ( max_length == 3 )
          goto LABEL_23;
        result->m_Items[3] = v19 / v24;
        if ( max_length <= 4 )
          goto LABEL_23;
        result->m_Items[4] = v20 / v24;
        break;
      default:
        v5 = float___TypeInfo;
        v6 = 1;
        goto LABEL_7;
    }
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
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  v8 = material;
  if ( (byte_4D2E7EC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16228/*"_Coefficient"*/);
    sub_1C94098(&StringLiteral_16208/*"_CenterY"*/);
    sub_1C94098(&StringLiteral_16403/*"_Sigma"*/);
    sub_1C94098(&StringLiteral_16377/*"_Range"*/);
    sub_1C94098(&StringLiteral_16196/*"_BlurFactor"*/);
    material = (UnityEngine_Material_o *)sub_1C94098(&StringLiteral_16207/*"_CenterX"*/);
    byte_4D2E7EC = 1;
  }
  if ( !destParam
    || !srcParam
    || (sampleRange = destParam->fields.sampleRange,
        v10 = srcParam->fields.sigma + (float)((float)(destParam->fields.sigma - srcParam->fields.sigma) * rate),
        ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
          v8,
          (System_String_o *)StringLiteral_16403/*"_Sigma"*/,
          v10,
          (const MethodInfo *)destParam),
        material = (UnityEngine_Material_o *)ScriptActionRenderEffectController_MotionBlurParam__GetBlurFactors(
                                               sampleRange,
                                               v10,
                                               v11),
        !v8) )
  {
    sub_1C942F0(material, srcParam);
  }
  UnityEngine_Material__SetFloatArray_71980680(
    v8,
    (System_String_o *)StringLiteral_16196/*"_BlurFactor"*/,
    (System_Single_array *)material,
    0);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16207/*"_CenterX"*/,
    srcParam->fields.centerX + (float)((float)(destParam->fields.centerX - srcParam->fields.centerX) * rate),
    v12);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16208/*"_CenterY"*/,
    srcParam->fields.centerY + (float)((float)(destParam->fields.centerY - srcParam->fields.centerY) * rate),
    v13);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16377/*"_Range"*/,
    srcParam->fields.range + (float)((float)(destParam->fields.range - srcParam->fields.range) * rate),
    v14);
  ScriptActionRenderEffectController_EffectParamBase__SetFloatProperty(
    v8,
    (System_String_o *)StringLiteral_16228/*"_Coefficient"*/,
    srcParam->fields.coefficient + (float)((float)(destParam->fields.coefficient - srcParam->fields.coefficient) * rate),
    v15);
}


void ScriptActionRenderEffectController_ReflectionFunction___ctor(
        ScriptActionRenderEffectController_ReflectionFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC9F7C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC9F2C;
}


System_IAsyncResult_o *ScriptActionRenderEffectController_ReflectionFunction__BeginInvoke(
        ScriptActionRenderEffectController_ReflectionFunction_o *this,
        float animeRate,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  float v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = animeRate;
  if ( (byte_4D2E7DF & 1) == 0 )
  {
    sub_1C94098(&float_TypeInfo);
    byte_4D2E7DF = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(float_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void ScriptActionRenderEffectController_ReflectionFunction__EndInvoke(
        ScriptActionRenderEffectController_ReflectionFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC9FD0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC9F90;
}


System_IAsyncResult_o *ScriptActionRenderEffectController_StopFunction__BeginInvoke(
        ScriptActionRenderEffectController_StopFunction_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v5, callback, object);
}


void ScriptActionRenderEffectController_StopFunction__EndInvoke(
        ScriptActionRenderEffectController_StopFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
  ScriptActionRenderEffectController_FrostedGlassParam__ReflectionMaterial(
    _4__this->fields.material_,
    this->fields.srcParam,
    this->fields.destParam,
    rate,
    v3);
}