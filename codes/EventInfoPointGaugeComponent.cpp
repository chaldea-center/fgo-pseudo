void __fastcall EventInfoPointGaugeComponent___ctor(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoPointGaugeComponent__Awake(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BalanceConfig_c *v12; // x0
  int64_t UserEventActivityPointMax; // x8
  UISprite_o *gaugeBarSprite; // x20
  struct UISprite_o *v15; // x0
  struct UISprite_o *gaugeFrameSprite; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  struct UISprite_o *v19; // x8

  if ( (byte_40FA13D & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_18468, v10);
    sub_B16FFC(&StringLiteral_18416, v11);
    byte_40FA13D = 1;
  }
  *(_QWORD *)&this->fields.maxPoint = 0LL;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  UserEventActivityPointMax = v12->static_fields->UserEventActivityPointMax;
  this->fields.endCallback = 0LL;
  HIDWORD(this->fields.gaugeTweenHeight) = 1;
  *(_QWORD *)&this->fields.gaugeHeight = (unsigned int)UserEventActivityPointMax;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.endCallback, 0LL, v2, v3, v4, v5, v6, v7);
  gaugeBarSprite = this->fields.gaugeBarSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(gaugeBarSprite, (System_String_o *)StringLiteral_18416, 0LL);
  v15 = this->fields.gaugeBarSprite;
  if ( !v15
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v15->klass->vtable._33_MakePixelPerfect.method)(
          v15,
          v15->klass->vtable._34_get_minWidth.methodPtr),
        AtlasManager__SetEventSprite(this->fields.gaugeFrameSprite, (System_String_o *)StringLiteral_18468, 0LL),
        (gaugeFrameSprite = this->fields.gaugeFrameSprite) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))gaugeFrameSprite->klass->vtable._33_MakePixelPerfect.method)(
          gaugeFrameSprite,
          gaugeFrameSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoPointGaugeComponent__ChangeDispGauge(this, HIDWORD(this->fields.gaugeTweenHeight), v17),
        (v19 = this->fields.gaugeFrameSprite) == 0LL) )
  {
    sub_B170D4();
  }
  *(float *)&this->fields.gaugeTweenHeight = (float)v19->fields.mHeight;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeComponent__ChangeDispGauge(
        EventInfoPointGaugeComponent_o *this,
        int32_t gaugeState,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *iconImg; // x0
  UnityEngine_GameObject_o *gaugeBgSprite; // x0
  struct UnityEngine_GameObject_o *gaugeObj; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x22
  struct UnityEngine_GameObject_o *v12; // x0
  UISprite_o *addEffectNameList; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  struct System_String_array *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA140 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&gaugeState);
    sub_B16FFC(&StringLiteral_18439, v5);
    sub_B16FFC(&StringLiteral_18435, v6);
    byte_40FA140 = 1;
  }
  v18 = 0;
  iconImg = (UnityEngine_GameObject_o *)this->fields.iconImg;
  if ( !iconImg )
    goto LABEL_15;
  if ( gaugeState )
  {
    UnityEngine_GameObject__SetActive(iconImg, 1, 0LL);
    gaugeBgSprite = (UnityEngine_GameObject_o *)this->fields.gaugeBgSprite;
    if ( gaugeBgSprite )
    {
      UnityEngine_GameObject__SetActive(gaugeBgSprite, 1, 0LL);
      gaugeObj = this->fields.gaugeObj;
      v18 = gaugeState;
      v10 = System_Int32__ToString((int32_t)&v18, 0LL);
      v11 = System_String__Concat_43743732((System_String_o *)StringLiteral_18435, v10, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite((UISprite_o *)gaugeObj, v11, 0LL);
      v12 = this->fields.gaugeObj;
      if ( v12 )
      {
        ((void (__fastcall *)(struct UnityEngine_GameObject_o *, void *))v12->klass[2]._1.typeMetadataHandle)(
          v12,
          v12->klass[2]._1.interopData);
        addEffectNameList = (UISprite_o *)this->fields.addEffectNameList;
        v18 = gaugeState;
        v14 = System_Int32__ToString((int32_t)&v18, 0LL);
        v15 = System_String__Concat_43743732((System_String_o *)StringLiteral_18439, v14, 0LL);
        AtlasManager__SetEventSprite(addEffectNameList, v15, 0LL);
        v16 = this->fields.addEffectNameList;
        if ( v16 )
        {
          ((void (__fastcall *)(struct System_String_array *, Il2CppMethodPointer))v16->obj.klass->vtable[33].method)(
            v16,
            v16->obj.klass->vtable[34].methodPtr);
          return;
        }
      }
    }
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(iconImg, 0, 0LL);
  v17 = (UnityEngine_GameObject_o *)this->fields.gaugeBgSprite;
  if ( !v17 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v17, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
TweenHeight_o *__fastcall EventInfoPointGaugeComponent__CreateGaugeAnime(
        EventInfoPointGaugeComponent_o *this,
        int32_t startHeight,
        int32_t endHeight,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *gaugeFrameSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x20
  UITweener_o *v18; // x22
  EventDelegate_o *v19; // x21

  if ( (byte_40FA13E & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_TypeInfo, *(_QWORD *)&startHeight);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_TweenHeight___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_B16FFC(&StringLiteral_5943, v9);
    byte_40FA13E = 1;
  }
  gaugeFrameSprite = (UnityEngine_Component_o *)this->fields.gaugeFrameSprite;
  if ( !gaugeFrameSprite )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(gaugeFrameSprite, 0LL);
  if ( !gameObject )
    goto LABEL_8;
  v12 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          gameObject,
          (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_TweenHeight___);
  if ( !v12
    || (LODWORD(v12[3].fields.callbackQueue) = startHeight,
        HIDWORD(v12[3].fields.callbackQueue) = endHeight,
        klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v12[2].klass,
        v18 = (UITweener_o *)v12,
        v12[1].fields.m_CachedPtr = (intptr_t)this->fields.gaugeBaseObj,
        v19 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v13, v14, v15, v16),
        EventDelegate___ctor_29412928(
          v19,
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_5943,
          0LL),
        !klass) )
  {
LABEL_8:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    klass,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  UITweener__PlayForward(v18, 0LL);
  return (TweenHeight_o *)v18;
}


void __fastcall EventInfoPointGaugeComponent__EndGaugeAnime(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *endCallback; // x21
  int32_t maxPoint; // w8
  int32_t animeState; // w9
  float gaugeHeight; // w10
  int v7; // w8
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FA13F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA13F = 1;
  }
  endCallback = this->fields.endCallback;
  maxPoint = this->fields.maxPoint;
  animeState = this->fields.animeState;
  gaugeHeight = this->fields.gaugeHeight;
  this->fields._GaugeStateId_k__BackingField = 0;
  v7 = (animeState + maxPoint) & ~((animeState + maxPoint) >> 31);
  if ( v7 > SLODWORD(gaugeHeight) )
    v7 = LODWORD(gaugeHeight);
  this->fields.maxPoint = v7;
  this->fields.animeState = 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)endCallback, 0LL);
  this->fields.endCallback = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.endCallback, 0LL, v8, v9, v10, v11, v12, v13);
  ActionExtensions__Call((System_Action_o *)this[1].klass, 0LL);
}


System_String_array *__fastcall EventInfoPointGaugeComponent__GetAddEffectNameList(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.subEffectNameList;
}


UnityEngine_GameObject_o *__fastcall EventInfoPointGaugeComponent__GetGenerateEffectParent(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  UnityEngine_Component_o *v4; // x0

  if ( (byte_40FA141 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA141 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields._MainPoint_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v4 = *(UnityEngine_Component_o **)&this->fields._MainPoint_k__BackingField;
    if ( !v4 )
      sub_B170D4();
  }
  else
  {
    v4 = (UnityEngine_Component_o *)this;
  }
  return UnityEngine_Component__get_gameObject(v4, 0LL);
}


float __fastcall EventInfoPointGaugeComponent__GetPointBarUpPositionY(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeFrameSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float PositionY; // s0
  struct UISprite_o *v6; // x8

  gaugeFrameSprite = (UnityEngine_Component_o *)this->fields.gaugeFrameSprite;
  if ( !gaugeFrameSprite
    || (gameObject = UnityEngine_Component__get_gameObject(gaugeFrameSprite, 0LL),
        PositionY = GameObjectExtensions__GetPositionY(gameObject, 0LL),
        (v6 = this->fields.gaugeFrameSprite) == 0LL) )
  {
    sub_B170D4();
  }
  return PositionY + (float)v6->fields.mHeight;
}


System_String_array *__fastcall EventInfoPointGaugeComponent__GetSubEffectNameList(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return (System_String_array *)this->fields.rootFSOffset;
}


bool __fastcall EventInfoPointGaugeComponent__IsPlayingAnime(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._GaugeStateId_k__BackingField == 1;
}


void __fastcall EventInfoPointGaugeComponent__PlayGaugeAnime(
        EventInfoPointGaugeComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x3
  int32_t maxPoint; // w8
  float v11; // s1
  float gaugeHeight_low; // s0
  float v13; // s3
  float v14; // s0
  double v15; // d1
  double v16; // d0
  struct System_Action_o *GaugeAnime; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( this->fields.animeState )
  {
    this[1].klass = (EventInfoPointGaugeComponent_c *)callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this[1],
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    maxPoint = this->fields.maxPoint;
    v11 = *(float *)&this->fields.gaugeTweenHeight;
    gaugeHeight_low = (float)SLODWORD(this->fields.gaugeHeight);
    v13 = v11 * (float)((float)maxPoint / gaugeHeight_low);
    v14 = v11 * (float)((float)(this->fields.animeState + maxPoint) / gaugeHeight_low);
    v15 = -v13;
    if ( v13 != INFINITY )
      v15 = v13;
    if ( v14 == INFINITY )
      v16 = -v14;
    else
      v16 = v14;
    this->fields._GaugeStateId_k__BackingField = 1;
    GaugeAnime = (struct System_Action_o *)EventInfoPointGaugeComponent__CreateGaugeAnime(this, (int)v15, (int)v16, v9);
    this->fields.endCallback = GaugeAnime;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.endCallback,
      (System_Int32_array **)GaugeAnime,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall EventInfoPointGaugeComponent__SetGaugeBarHeight(
        EventInfoPointGaugeComponent_o *this,
        int32_t height,
        const MethodInfo *method)
{
  UIWidget_o *gaugeFrameSprite; // x0

  gaugeFrameSprite = (UIWidget_o *)this->fields.gaugeFrameSprite;
  if ( !gaugeFrameSprite )
    sub_B170D4();
  UIWidget__set_height(gaugeFrameSprite, height, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeComponent__SetGaugeBarHeightByPoint(
        EventInfoPointGaugeComponent_o *this,
        int32_t point,
        const MethodInfo *method)
{
  this->fields.maxPoint = point;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(this, *(const MethodInfo **)&point);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeComponent__Setup(
        EventInfoPointGaugeComponent_o *this,
        int32_t gaugeState,
        int32_t point,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  HIDWORD(this->fields.gaugeTweenHeight) = gaugeState;
  this->fields.maxPoint = point;
  EventInfoPointGaugeComponent__ChangeDispGauge(this, gaugeState, *(const MethodInfo **)&point);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeComponent__SetupSubMarginX(
        EventInfoPointGaugeComponent_o *this,
        float subMarginX,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x0
  UnityEngine_Transform_o *transform; // x20
  int v7; // s0
  __int64 v10; // x8
  FSOffset_o *v11; // x0

  v4 = *(UnityEngine_Component_o **)&this->fields._MainPoint_k__BackingField;
  if ( !v4
    || (transform = UnityEngine_Component__get_transform(v4, 0LL),
        *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (v10 = *(_QWORD *)&this->fields._MainPoint_k__BackingField) == 0)
    || (*(float *)(v10 + 92) = subMarginX, (v11 = *(FSOffset_o **)&this->fields._MainPoint_k__BackingField) == 0LL) )
  {
    sub_B170D4();
  }
  FSOffset__UpdateOffset(v11, 0LL);
}


void __fastcall EventInfoPointGaugeComponent__UpdateGaugeBarHeight(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UIWidget_o *gaugeFrameSprite; // x0
  float v4; // s0
  double v5; // d0

  gaugeFrameSprite = (UIWidget_o *)this->fields.gaugeFrameSprite;
  if ( !gaugeFrameSprite )
    sub_B170D4();
  v4 = *(float *)&this->fields.gaugeTweenHeight
     * (float)((float)this->fields.maxPoint / (float)SLODWORD(this->fields.gaugeHeight));
  if ( v4 == INFINITY )
    v5 = -v4;
  else
    v5 = v4;
  UIWidget__set_height(gaugeFrameSprite, (int)v5, 0LL);
}


int32_t __fastcall EventInfoPointGaugeComponent__get_BufferPoint(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.animeState;
}


int32_t __fastcall EventInfoPointGaugeComponent__get_GaugeStateId(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return HIDWORD(this->fields.gaugeTweenHeight);
}


int32_t __fastcall EventInfoPointGaugeComponent__get_MainPoint(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.maxPoint;
}


void __fastcall EventInfoPointGaugeComponent__set_BufferPoint(
        EventInfoPointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.animeState = value;
}


void __fastcall EventInfoPointGaugeComponent__set_GaugeStateId(
        EventInfoPointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  HIDWORD(this->fields.gaugeTweenHeight) = value;
}


void __fastcall EventInfoPointGaugeComponent__set_MainPoint(
        EventInfoPointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.maxPoint = value;
}