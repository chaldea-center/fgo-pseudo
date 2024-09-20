void __fastcall CharaWipeEffectComponent___ctor(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5C498 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17974/*"circleOut"*/);
    byte_4A5C498 = 1;
  }
  *(_QWORD *)&this->fields.wipeColor.fields.r = 0LL;
  *(_QWORD *)&this->fields.wipeColor.fields.b = 0LL;
  v5 = StringLiteral_17974/*"circleOut"*/;
  this->fields.wipeName = (struct System_String_o *)StringLiteral_17974/*"circleOut"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.wipeName, v5, v2, v3);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.effectColor = _Q0;
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


void __fastcall CharaWipeEffectComponent__EffectResume(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  CharaWipeEffectComponent_c *klass; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRenderVolume_o *v5; // x0
  __int64 v6; // x1
  TweenRenderVolume_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5C494 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9895/*"OnEndEffect"*/);
    byte_4A5C494 = 1;
  }
  klass = this->klass;
  this->fields.isPause = 0;
  ((void (__fastcall *)(CharaWipeEffectComponent_o *, Il2CppMethodPointer, float))klass->vtable._41_SetTweenVolume.method)(
    this,
    klass->vtable._42_GetTweenVolume.methodPtr,
    this->fields.volume);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = TweenRenderVolume__Begin(gameObject, this->fields.duration, 0.0, 0LL);
  if ( !v5 )
    sub_1B8880C(0LL, v6);
  v7 = v5;
  v5->fields.method = 1;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.eventReceiver = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields.eventReceiver, (int32_t)v8, v9, v10);
  v11 = StringLiteral_9895/*"OnEndEffect"*/;
  v7->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9895/*"OnEndEffect"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields.callWhenFinished, v11, v12, v13);
}


void __fastcall CharaWipeEffectComponent__EndCreateEffect(
        CharaWipeEffectComponent_o *this,
        CommonEffectComponent_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields.isStart = 1;
  this->fields.childEffect = effect;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.childEffect, (int32_t)effect, (int32_t)method, v3);
  if ( !this->fields.isPause )
    CharaWipeEffectComponent__EffectResume(this, v5);
}


void __fastcall CharaWipeEffectComponent__EndLoadWipe(
        CharaWipeEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  AssetData_o *wipeData; // x22
  __int64 v7; // x1
  UIStandFigureRender_o *figure; // x0
  struct UnityEngine_Vector2_o BodySize; // kr00_8
  UIStandFigureRender_o *v10; // x21
  UnityEngine_Object_o *subEffectBase; // x20
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *v13; // x20
  System_String_o *v14; // x21
  CommonEffectLoadComponent_LoadEndHandler_o *v15; // x22
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x6

  if ( (byte_4A5C493 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D___);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CharaWipeEffectComponent_EndCreateEffect__);
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_13536/*"Talk/"*/);
    sub_1B885B0(&StringLiteral_4973/*"Custom/Sprite-ScriptActionFigureWipe"*/);
    byte_4A5C493 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(wipeData, 0LL);
  }
  this->fields.wipeData = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, (int32_t)data, (int32_t)method, v3);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  if ( !figure )
    goto LABEL_21;
  BodySize = UIStandFigureRender__GetBodySize(figure, 0LL);
  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.bodySize = BodySize;
  this->fields.addVolume = 0.2;
  if ( !figure
    || (UIStandFigureRender__SetSharder(figure, (System_String_o *)StringLiteral_4973/*"Custom/Sprite-ScriptActionFigureWipe"*/, 0LL), !data)
    || (v10 = (UIStandFigureRender_o *)this->fields.figure,
        figure = (UIStandFigureRender_o *)AssetData__GetObject_object_(
                                            data,
                                            (const MethodInfo_2E61D74 *)Method_AssetData_GetObject_Texture2D___),
        !v10)
    || (UIStandFigureRender__SetWipeTexture(v10, (UnityEngine_Texture_o *)figure, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL)
    || (UIStandFigureRender__SetFilterColor(figure, this->fields.wipeColor, 0LL),
        (figure = (UIStandFigureRender_o *)this->fields.figure) == 0LL) )
  {
LABEL_21:
    sub_1B8880C(figure, v7);
  }
  UIStandFigureRender__SetGradation(figure, 0.2, 0LL);
  ((void (__fastcall *)(CharaWipeEffectComponent_o *, Il2CppMethodPointer, float))this->klass->vtable._41_SetTweenVolume.method)(
    this,
    this->klass->vtable._42_GetTweenVolume.methodPtr,
    1.2039);
  subEffectBase = (UnityEngine_Object_o *)this->fields.subEffectBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subEffectBase, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.subEffectName, 0LL) )
  {
    v13 = this->fields.subEffectBase;
    v14 = System_String__Concat_61707032((System_String_o *)StringLiteral_13536/*"Talk/"*/, this->fields.subEffectName, 0LL);
    v15 = (CommonEffectLoadComponent_LoadEndHandler_o *)sub_1B887FC(CommonEffectLoadComponent_LoadEndHandler_TypeInfo);
    CommonEffectLoadComponent_LoadEndHandler___ctor(
      v15,
      (Il2CppObject *)this,
      Method_CharaWipeEffectComponent_EndCreateEffect__,
      v16);
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    CommonEffectManager__Create_40620464(v13, v14, v15, 0, 0, 0, v17);
  }
  else
  {
    CharaWipeEffectComponent__EndCreateEffect(this, 0LL, v12);
  }
}


void __fastcall CharaWipeEffectComponent__OnDestroy(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *wipeData; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_Object_o *figure; // x20
  __int64 v7; // x1
  ServantStatusBattleListViewItem_o *p_figure; // x19
  UIStandFigureRender_o *klass; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5C496 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C496 = 1;
  }
  wipeData = this->fields.wipeData;
  if ( wipeData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(wipeData, 0LL);
    this->fields.wipeData = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.wipeData, 0, v4, v5);
  }
  figure = (UnityEngine_Object_o *)this->fields.figure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(figure, 0LL, 0LL) )
  {
    p_figure = (ServantStatusBattleListViewItem_o *)&this->fields.figure;
    klass = (UIStandFigureRender_o *)p_figure->klass;
    if ( !p_figure->klass
      || (UIStandFigureRender__RecoverSharder(klass, 0LL), (klass = (UIStandFigureRender_o *)p_figure->klass) == 0LL) )
    {
      sub_1B8880C(klass, v7);
    }
    UIStandFigureRender__SetAlpha(klass, 0.0, 0LL);
    p_figure->klass = 0LL;
    sub_1B88554(p_figure, 0, v10, v11);
  }
}


void __fastcall CharaWipeEffectComponent__OnEndEffect(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UnityEngine_GameObject_o *subEffectBase; // x20

  if ( (byte_4A5C495 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    byte_4A5C495 = 1;
  }
  subEffectBase = this->fields.subEffectBase;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__Stop(subEffectBase, 0, 0, v2);
  this->fields.isWaitEndEffect = 1;
}


void __fastcall CharaWipeEffectComponent__OnUpdate(CharaWipeEffectComponent_o *this, const MethodInfo *method)
{
  float totalTime; // s8
  const MethodInfo *v4; // x1
  float deltaTime; // s0
  _BOOL4 isWaitEndEffect; // w8
  UnityEngine_GameObject_o *subEffectBase; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5C497 & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C497 = 1;
  }
  UIWidget__OnUpdate((UIWidget_o *)this, 0LL);
  totalTime = this->fields.totalTime;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  isWaitEndEffect = this->fields.isWaitEndEffect;
  this->fields.totalTime = totalTime + deltaTime;
  if ( isWaitEndEffect )
  {
    subEffectBase = this->fields.subEffectBase;
    if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
    if ( !CommonEffectManager__IsBusy(subEffectBase, v4) )
    {
      this->fields.isWaitEndEffect = 0;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaWipeEffectComponent__Resume(
        CharaWipeEffectComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  _BOOL4 isStart; // w8

  isStart = this->fields.isStart;
  this->fields.isSkip = isSkip;
  if ( isStart )
  {
    if ( this->fields.isPause )
      CharaWipeEffectComponent__EffectResume(this, (const MethodInfo *)isSkip);
  }
  else
  {
    this->fields.isPause = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaWipeEffectComponent__SetTweenColor(
        CharaWipeEffectComponent_o *this,
        UnityEngine_Color_o c,
        const MethodInfo *method)
{
  long double v3; // q8
  long double v4; // q9
  long double v5; // q10
  __int64 v8; // x1
  struct UIStandFigureM_o *figure; // x0

  v3 = *(long double *)&c.fields.a;
  v4 = *(long double *)&c.fields.b;
  v5 = *(long double *)&c.fields.g;
  UIWidget__set_color((UIWidget_o *)this, c, 0LL);
  figure = this->fields.figure;
  if ( !figure )
    sub_1B8880C(0LL, v8);
  ((void (__fastcall *)(struct UIStandFigureM_o *, Il2CppMethodPointer, long double, long double, long double, long double))figure->klass->vtable._39_SetTweenColor.method)(
    figure,
    figure->klass->vtable._40_GetTweenColor.methodPtr,
    *(long double *)&c,
    v5,
    v4,
    v3);
}


void __fastcall CharaWipeEffectComponent__SetTweenVolume(
        CharaWipeEffectComponent_o *this,
        float v,
        const MethodInfo *method)
{
  UIStandFigureRender_o *figure; // x0

  figure = (UIStandFigureRender_o *)this->fields.figure;
  this->fields.volume = v;
  if ( !figure )
    sub_1B8880C(0LL, method);
  UIStandFigureRender__SetVolume(figure, v, 0LL);
}


void __fastcall CharaWipeEffectComponent__WipeStart(
        CharaWipeEffectComponent_o *this,
        UIStandFigureM_o *figure,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UIStandFigureRender_o **p_figure; // x21
  __int64 v7; // x1
  _BOOL4 isSkip; // w8
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *gameObject; // x19
  System_String_o *v12; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  if ( (byte_4A5C492 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CharaWipeEffectComponent_EndLoadWipe__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_15660/*"Wipe/"*/);
    byte_4A5C492 = 1;
  }
  p_figure = (UIStandFigureRender_o **)&this->fields.figure;
  this->fields.figure = figure;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.figure, (int32_t)figure, (int32_t)method, v3);
  isSkip = this->fields.isSkip;
  this->fields.duration = 5.0;
  if ( isSkip )
  {
    if ( !*p_figure )
      sub_1B8880C(0LL, v7);
    UIStandFigureRender__SetAlpha(*p_figure, 0.0, 0LL);
    this->fields.figure = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.figure, 0, v9, v10);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  else
  {
    v12 = System_String__Concat_61707032((System_String_o *)StringLiteral_15660/*"Wipe/"*/, this->fields.wipeName, 0LL);
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)this, Method_CharaWipeEffectComponent_EndLoadWipe__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v12, v13, 1, 0LL);
  }
}