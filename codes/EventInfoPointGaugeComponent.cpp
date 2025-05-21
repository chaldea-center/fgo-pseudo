void __fastcall EventInfoPointGaugeComponent___ctor(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoPointGaugeComponent__Awake(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0
  int64_t UserEventActivityPointMax; // x8
  UISprite_o *gaugeBgSprite; // x20
  const MethodInfo *v11; // x1
  struct UISprite_o *gaugeBarSprite; // x0
  const MethodInfo *v13; // x2
  struct UISprite_o *v14; // x8

  if ( (byte_4B4606C & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&BalanceConfig_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_19228/*"event_point_bar"*/, v6);
    sub_1BDB878(&StringLiteral_19167/*"event_bg_bar"*/, v7);
    byte_4B4606C = 1;
  }
  *(_QWORD *)&this->fields._MainPoint_k__BackingField = 0LL;
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  UserEventActivityPointMax = v8->static_fields->UserEventActivityPointMax;
  this->fields.gaugeTweenHeight = 0LL;
  *(_QWORD *)&this->fields.maxPoint = (unsigned int)UserEventActivityPointMax;
  this->fields._GaugeStateId_k__BackingField = 1;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.gaugeTweenHeight, 0, v2, v3);
  gaugeBgSprite = this->fields.gaugeBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(gaugeBgSprite, (System_String_o *)StringLiteral_19167/*"event_bg_bar"*/, 0LL);
  gaugeBarSprite = this->fields.gaugeBgSprite;
  if ( !gaugeBarSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))gaugeBarSprite->klass->vtable._33_MakePixelPerfect.method)(
          gaugeBarSprite,
          gaugeBarSprite->klass->vtable._34_get_minWidth.methodPtr),
        AtlasManager__SetEventSprite(this->fields.gaugeBarSprite, (System_String_o *)StringLiteral_19228/*"event_point_bar"*/, 0LL),
        (gaugeBarSprite = this->fields.gaugeBarSprite) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))gaugeBarSprite->klass->vtable._33_MakePixelPerfect.method)(
          gaugeBarSprite,
          gaugeBarSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoPointGaugeComponent__ChangeDispGauge(this, this->fields._GaugeStateId_k__BackingField, v13),
        (v14 = this->fields.gaugeBarSprite) == 0LL) )
  {
    sub_1BDBAD4(gaugeBarSprite, v11);
  }
  this->fields.gaugeHeight = (float)v14->fields.mHeight;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeComponent__ChangeDispGauge(
        EventInfoPointGaugeComponent_o *this,
        int32_t gaugeState,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gaugeBaseObj; // x0
  UISprite_o *iconImg; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x22
  UISprite_o *gaugeFrameSprite; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B4606F & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, *(_QWORD *)&gaugeState);
    sub_1BDB878(&StringLiteral_19197/*"event_frame_"*/, v5);
    sub_1BDB878(&StringLiteral_19193/*"event_emblem_icon_"*/, v6);
    byte_4B4606F = 1;
  }
  gaugeBaseObj = this->fields.gaugeBaseObj;
  if ( !gaugeBaseObj )
    goto LABEL_14;
  if ( gaugeState )
  {
    UnityEngine_GameObject__SetActive(gaugeBaseObj, 1, 0LL);
    gaugeBaseObj = this->fields.gaugeObj;
    if ( gaugeBaseObj )
    {
      UnityEngine_GameObject__SetActive(gaugeBaseObj, 1, 0LL);
      iconImg = this->fields.iconImg;
      v14 = gaugeState;
      v9 = System_Int32__ToString((int32_t)&v14, 0LL);
      v10 = System_String__Concat_62572260((System_String_o *)StringLiteral_19193/*"event_emblem_icon_"*/, v9, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(iconImg, v10, 0LL);
      gaugeBaseObj = (UnityEngine_GameObject_o *)this->fields.iconImg;
      if ( gaugeBaseObj )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gaugeBaseObj->klass[2]._1.typeMetadataHandle)(
          gaugeBaseObj,
          gaugeBaseObj->klass[2]._1.interopData);
        gaugeFrameSprite = this->fields.gaugeFrameSprite;
        v14 = gaugeState;
        v12 = System_Int32__ToString((int32_t)&v14, 0LL);
        v13 = System_String__Concat_62572260((System_String_o *)StringLiteral_19197/*"event_frame_"*/, v12, 0LL);
        AtlasManager__SetEventSprite(gaugeFrameSprite, v13, 0LL);
        gaugeBaseObj = (UnityEngine_GameObject_o *)this->fields.gaugeFrameSprite;
        if ( gaugeBaseObj )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gaugeBaseObj->klass[2]._1.typeMetadataHandle)(
            gaugeBaseObj,
            gaugeBaseObj->klass[2]._1.interopData);
          return;
        }
      }
    }
LABEL_14:
    sub_1BDBAD4(gaugeBaseObj, *(_QWORD *)&gaugeState);
  }
  UnityEngine_GameObject__SetActive(gaugeBaseObj, 0, 0LL);
  gaugeBaseObj = this->fields.gaugeObj;
  if ( !gaugeBaseObj )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gaugeBaseObj, 0, 0LL);
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
  void *gaugeBarSprite; // x0
  UITweener_o *v11; // x19
  System_Collections_Generic_List_object__o *v12; // x21
  EventDelegate_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B4606D & 1) == 0 )
  {
    sub_1BDB878(&EventDelegate_TypeInfo, *(_QWORD *)&startHeight);
    sub_1BDB878(&Method_UnityEngine_GameObject_AddComponent_TweenHeight___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_1BDB878(&StringLiteral_6017/*"EndGaugeAnime"*/, v9);
    byte_4B4606D = 1;
  }
  gaugeBarSprite = this->fields.gaugeBarSprite;
  if ( !gaugeBarSprite )
    goto LABEL_12;
  gaugeBarSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gaugeBarSprite, 0LL);
  if ( !gaugeBarSprite )
    goto LABEL_12;
  gaugeBarSprite = UnityEngine_GameObject__AddComponent_object_(
                     (UnityEngine_GameObject_o *)gaugeBarSprite,
                     (const MethodInfo_3088438 *)Method_UnityEngine_GameObject_AddComponent_TweenHeight___);
  if ( !gaugeBarSprite )
    goto LABEL_12;
  *((_DWORD *)gaugeBarSprite + 32) = startHeight;
  *((_DWORD *)gaugeBarSprite + 33) = endHeight;
  v11 = (UITweener_o *)gaugeBarSprite;
  *((_DWORD *)gaugeBarSprite + 14) = LODWORD(this->fields.gaugeAnimationTime);
  v12 = (System_Collections_Generic_List_object__o *)*((_QWORD *)gaugeBarSprite + 9);
  v13 = (EventDelegate_o *)sub_1BDBAC4(EventDelegate_TypeInfo);
  EventDelegate___ctor_48569040(v13, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6017/*"EndGaugeAnime"*/, 0LL);
  if ( !v12
    || (items = v12->fields._items,
        v17 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_12:
    sub_1BDBAD4(gaugeBarSprite, *(_QWORD *)&startHeight);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v13,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v13;
    sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
  }
  UITweener__PlayForward(v11, 0LL);
  return (TweenHeight_o *)v11;
}


void __fastcall EventInfoPointGaugeComponent__EndGaugeAnime(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gaugeTweenHeight; // x21
  int32_t MainPoint_k__BackingField; // w8
  int32_t BufferPoint_k__BackingField; // w9
  int32_t maxPoint; // w10
  int v7; // w8
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B4606E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4606E = 1;
  }
  gaugeTweenHeight = (UnityEngine_Object_o *)this->fields.gaugeTweenHeight;
  MainPoint_k__BackingField = this->fields._MainPoint_k__BackingField;
  BufferPoint_k__BackingField = this->fields._BufferPoint_k__BackingField;
  maxPoint = this->fields.maxPoint;
  this->fields.animeState = 0;
  v7 = (BufferPoint_k__BackingField + MainPoint_k__BackingField) & ~((BufferPoint_k__BackingField
                                                                    + MainPoint_k__BackingField) >> 31);
  if ( v7 > maxPoint )
    v7 = maxPoint;
  this->fields._MainPoint_k__BackingField = v7;
  this->fields._BufferPoint_k__BackingField = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(gaugeTweenHeight, 0LL);
  this->fields.gaugeTweenHeight = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.gaugeTweenHeight, 0, v8, v9);
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


System_String_array *__fastcall EventInfoPointGaugeComponent__GetAddEffectNameList(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.addEffectNameList;
}


UnityEngine_GameObject_o *__fastcall EventInfoPointGaugeComponent__GetGenerateEffectParent(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rootFSOffset; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B46070 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B46070 = 1;
  }
  rootFSOffset = (UnityEngine_Object_o *)this->fields.rootFSOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(rootFSOffset, 0LL, 0LL);
  if ( v4 )
  {
    this = (EventInfoPointGaugeComponent_o *)this->fields.rootFSOffset;
    if ( !this )
      sub_1BDBAD4(v4, v5);
  }
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
}


float __fastcall EventInfoPointGaugeComponent__GetPointBarUpPositionY(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeBarSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float PositionY; // s0
  struct UISprite_o *v6; // x8

  gaugeBarSprite = (UnityEngine_Component_o *)this->fields.gaugeBarSprite;
  if ( !gaugeBarSprite
    || (gameObject = UnityEngine_Component__get_gameObject(gaugeBarSprite, 0LL),
        PositionY = GameObjectExtensions__GetPositionY(gameObject, 0LL),
        (v6 = this->fields.gaugeBarSprite) == 0LL) )
  {
    sub_1BDBAD4(gaugeBarSprite, method);
  }
  return PositionY + (float)v6->fields.mHeight;
}


System_String_array *__fastcall EventInfoPointGaugeComponent__GetSubEffectNameList(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.subEffectNameList;
}


bool __fastcall EventInfoPointGaugeComponent__IsPlayingAnime(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.animeState == 1;
}


void __fastcall EventInfoPointGaugeComponent__PlayGaugeAnime(
        EventInfoPointGaugeComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x3
  int32_t MainPoint_k__BackingField; // w8
  float gaugeHeight; // s1
  float maxPoint; // s0
  float v9; // s2
  float v10; // s0
  int32_t v11; // w1
  int32_t v12; // w2
  struct TweenHeight_o *GaugeAnime; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( this->fields._BufferPoint_k__BackingField )
  {
    this->fields.endCallback = callback;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v3);
    MainPoint_k__BackingField = this->fields._MainPoint_k__BackingField;
    gaugeHeight = this->fields.gaugeHeight;
    maxPoint = (float)this->fields.maxPoint;
    v9 = gaugeHeight * (float)((float)MainPoint_k__BackingField / maxPoint);
    v10 = gaugeHeight
        * (float)((float)(this->fields._BufferPoint_k__BackingField + MainPoint_k__BackingField) / maxPoint);
    if ( v9 == INFINITY )
      v11 = 0x80000000;
    else
      v11 = (int)v9;
    if ( v10 == INFINITY )
      v12 = 0x80000000;
    else
      v12 = (int)v10;
    this->fields.animeState = 1;
    GaugeAnime = EventInfoPointGaugeComponent__CreateGaugeAnime(this, v11, v12, v5);
    this->fields.gaugeTweenHeight = GaugeAnime;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.gaugeTweenHeight, (int32_t)GaugeAnime, v14, v15);
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
  UIWidget_o *gaugeBarSprite; // x0

  gaugeBarSprite = (UIWidget_o *)this->fields.gaugeBarSprite;
  if ( !gaugeBarSprite )
    sub_1BDBAD4(0LL, height);
  UIWidget__set_height(gaugeBarSprite, height, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointGaugeComponent__SetGaugeBarHeightByPoint(
        EventInfoPointGaugeComponent_o *this,
        int32_t point,
        const MethodInfo *method)
{
  this->fields._MainPoint_k__BackingField = point;
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

  this->fields._GaugeStateId_k__BackingField = gaugeState;
  this->fields._MainPoint_k__BackingField = point;
  EventInfoPointGaugeComponent__ChangeDispGauge(this, gaugeState, *(const MethodInfo **)&point);
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(this, v5);
}


void __fastcall EventInfoPointGaugeComponent__SetupSubMarginX(
        EventInfoPointGaugeComponent_o *this,
        float subMarginX,
        const MethodInfo *method)
{
  __int64 rootFSOffset; // x0
  UnityEngine_Transform_o *v6; // x20

  rootFSOffset = (__int64)this->fields.rootFSOffset;
  if ( !rootFSOffset )
    goto LABEL_7;
  rootFSOffset = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)rootFSOffset, 0LL);
  v6 = (UnityEngine_Transform_o *)rootFSOffset;
  if ( !byte_4B3E911 )
  {
    rootFSOffset = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B3E911 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localPosition(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (rootFSOffset = (__int64)this->fields.rootFSOffset) == 0) )
  {
LABEL_7:
    sub_1BDBAD4(rootFSOffset, method);
  }
  *(float *)(rootFSOffset + 100) = subMarginX;
  FSOffset__UpdateOffset((FSOffset_o *)rootFSOffset, 0LL);
}


void __fastcall EventInfoPointGaugeComponent__UpdateGaugeBarHeight(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UIWidget_o *gaugeBarSprite; // x0
  float v4; // s0
  int32_t v5; // w1

  gaugeBarSprite = (UIWidget_o *)this->fields.gaugeBarSprite;
  if ( !gaugeBarSprite )
    sub_1BDBAD4(0LL, method);
  v4 = this->fields.gaugeHeight * (float)((float)this->fields._MainPoint_k__BackingField / (float)this->fields.maxPoint);
  if ( v4 == INFINITY )
    v5 = 0x80000000;
  else
    v5 = (int)v4;
  UIWidget__set_height(gaugeBarSprite, v5, 0LL);
}


int32_t __fastcall EventInfoPointGaugeComponent__get_BufferPoint(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._BufferPoint_k__BackingField;
}


int32_t __fastcall EventInfoPointGaugeComponent__get_GaugeStateId(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._GaugeStateId_k__BackingField;
}


int32_t __fastcall EventInfoPointGaugeComponent__get_MainPoint(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._MainPoint_k__BackingField;
}


void __fastcall EventInfoPointGaugeComponent__set_BufferPoint(
        EventInfoPointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BufferPoint_k__BackingField = value;
}


void __fastcall EventInfoPointGaugeComponent__set_GaugeStateId(
        EventInfoPointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GaugeStateId_k__BackingField = value;
}


void __fastcall EventInfoPointGaugeComponent__set_MainPoint(
        EventInfoPointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MainPoint_k__BackingField = value;
}