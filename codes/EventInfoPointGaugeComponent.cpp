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
  const MethodInfo *v15; // x1
  struct UISprite_o *gaugeFrameSprite; // x0
  const MethodInfo *v17; // x2
  struct UISprite_o *v18; // x8

  if ( (byte_4188670 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_18537/*"event_point_bar"*/, v10);
    sub_B2C35C(&StringLiteral_18485/*"event_bg_bar"*/, v11);
    byte_4188670 = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.endCallback, 0LL, v2, v3, v4, v5, v6, v7);
  gaugeBarSprite = this->fields.gaugeBarSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(gaugeBarSprite, (System_String_o *)StringLiteral_18485/*"event_bg_bar"*/, 0LL);
  gaugeFrameSprite = this->fields.gaugeBarSprite;
  if ( !gaugeFrameSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))gaugeFrameSprite->klass->vtable._33_MakePixelPerfect.method)(
          gaugeFrameSprite,
          gaugeFrameSprite->klass->vtable._34_get_minWidth.methodPtr),
        AtlasManager__SetEventSprite(this->fields.gaugeFrameSprite, (System_String_o *)StringLiteral_18537/*"event_point_bar"*/, 0LL),
        (gaugeFrameSprite = this->fields.gaugeFrameSprite) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))gaugeFrameSprite->klass->vtable._33_MakePixelPerfect.method)(
          gaugeFrameSprite,
          gaugeFrameSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoPointGaugeComponent__ChangeDispGauge(this, HIDWORD(this->fields.gaugeTweenHeight), v17),
        (v18 = this->fields.gaugeFrameSprite) == 0LL) )
  {
    sub_B2C434(gaugeFrameSprite, v15);
  }
  *(float *)&this->fields.gaugeTweenHeight = (float)v18->fields.mHeight;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(this, v15);
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
  struct UnityEngine_GameObject_o *gaugeObj; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x22
  UISprite_o *addEffectNameList; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4188673 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&gaugeState);
    sub_B2C35C(&StringLiteral_18508/*"event_frame_"*/, v5);
    sub_B2C35C(&StringLiteral_18504/*"event_emblem_icon_"*/, v6);
    byte_4188673 = 1;
  }
  v14 = 0;
  iconImg = (UnityEngine_GameObject_o *)this->fields.iconImg;
  if ( !iconImg )
    goto LABEL_15;
  if ( gaugeState )
  {
    UnityEngine_GameObject__SetActive(iconImg, 1, 0LL);
    iconImg = (UnityEngine_GameObject_o *)this->fields.gaugeBgSprite;
    if ( iconImg )
    {
      UnityEngine_GameObject__SetActive(iconImg, 1, 0LL);
      gaugeObj = this->fields.gaugeObj;
      v14 = gaugeState;
      v9 = System_Int32__ToString((int32_t)&v14, 0LL);
      v10 = System_String__Concat_44305532((System_String_o *)StringLiteral_18504/*"event_emblem_icon_"*/, v9, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite((UISprite_o *)gaugeObj, v10, 0LL);
      iconImg = this->fields.gaugeObj;
      if ( iconImg )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))iconImg->klass[2]._1.typeMetadataHandle)(
          iconImg,
          iconImg->klass[2]._1.interopData);
        addEffectNameList = (UISprite_o *)this->fields.addEffectNameList;
        v14 = gaugeState;
        v12 = System_Int32__ToString((int32_t)&v14, 0LL);
        v13 = System_String__Concat_44305532((System_String_o *)StringLiteral_18508/*"event_frame_"*/, v12, 0LL);
        AtlasManager__SetEventSprite(addEffectNameList, v13, 0LL);
        iconImg = (UnityEngine_GameObject_o *)this->fields.addEffectNameList;
        if ( iconImg )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))iconImg->klass[2]._1.typeMetadataHandle)(
            iconImg,
            iconImg->klass[2]._1.interopData);
          return;
        }
      }
    }
LABEL_15:
    sub_B2C434(iconImg, *(_QWORD *)&gaugeState);
  }
  UnityEngine_GameObject__SetActive(iconImg, 0, 0LL);
  iconImg = (UnityEngine_GameObject_o *)this->fields.gaugeBgSprite;
  if ( !iconImg )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(iconImg, 0, 0LL);
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
  void *gaugeFrameSprite; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  UITweener_o *v12; // x22
  EventDelegate_o *v13; // x21

  if ( (byte_4188671 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_TypeInfo, *(_QWORD *)&startHeight);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenHeight___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_B2C35C(&StringLiteral_5960/*"EndGaugeAnime"*/, v9);
    byte_4188671 = 1;
  }
  gaugeFrameSprite = this->fields.gaugeFrameSprite;
  if ( !gaugeFrameSprite )
    goto LABEL_8;
  gaugeFrameSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gaugeFrameSprite, 0LL);
  if ( !gaugeFrameSprite )
    goto LABEL_8;
  gaugeFrameSprite = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                       (UnityEngine_GameObject_o *)gaugeFrameSprite,
                       (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenHeight___);
  if ( !gaugeFrameSprite
    || (*((_DWORD *)gaugeFrameSprite + 30) = startHeight,
        *((_DWORD *)gaugeFrameSprite + 31) = endHeight,
        v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)gaugeFrameSprite + 8),
        v12 = (UITweener_o *)gaugeFrameSprite,
        *((_DWORD *)gaugeFrameSprite + 12) = this->fields.gaugeBaseObj,
        v13 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo),
        EventDelegate___ctor_29723868(
          v13,
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_5960/*"EndGaugeAnime"*/,
          0LL),
        !v11) )
  {
LABEL_8:
    sub_B2C434(gaugeFrameSprite, *(_QWORD *)&startHeight);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  UITweener__PlayForward(v12, 0LL);
  return (TweenHeight_o *)v12;
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

  if ( (byte_4188672 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188672 = 1;
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
  UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)endCallback, 0LL);
  this->fields.endCallback = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.endCallback, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4188674 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188674 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields._MainPoint_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v5 = *(UnityEngine_Component_o **)&this->fields._MainPoint_k__BackingField;
    if ( !v5 )
      sub_B2C434(0LL, v4);
  }
  else
  {
    v5 = (UnityEngine_Component_o *)this;
  }
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
    sub_B2C434(gaugeFrameSprite, method);
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
    sub_B2C2F8(
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
    sub_B2C2F8(
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
    sub_B2C434(0LL, height);
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

  v4 = *(UnityEngine_Component_o **)&this->fields._MainPoint_k__BackingField;
  if ( !v4
    || (transform = UnityEngine_Component__get_transform(v4, 0LL),
        *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (v10 = *(_QWORD *)&this->fields._MainPoint_k__BackingField) == 0)
    || (*(float *)(v10 + 92) = subMarginX,
        (v4 = *(UnityEngine_Component_o **)&this->fields._MainPoint_k__BackingField) == 0LL) )
  {
    sub_B2C434(v4, method);
  }
  FSOffset__UpdateOffset((FSOffset_o *)v4, 0LL);
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
    sub_B2C434(0LL, method);
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