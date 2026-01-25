void EventInfoPointGaugeComponent___ctor(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoPointGaugeComponent__Awake(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BalanceConfig_c *v9; // x0
  int64_t UserEventActivityPointMax; // x8
  UISprite_o *gaugeBgSprite; // x20
  const MethodInfo *v12; // x1
  struct UISprite_o *gaugeBarSprite; // x0
  const MethodInfo *v14; // x2
  struct UISprite_o *v15; // x8

  if ( (byte_4CEFA79 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19366/*"event_point_bar"*/);
    sub_1C7BAE8(&StringLiteral_19303/*"event_bg_bar"*/);
    byte_4CEFA79 = 1;
  }
  *(_QWORD *)&this->fields._MainPoint_k__BackingField = 0;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  UserEventActivityPointMax = v9->static_fields->UserEventActivityPointMax;
  this->fields.gaugeTweenHeight = 0;
  *(_QWORD *)&this->fields.maxPoint = (unsigned int)UserEventActivityPointMax;
  this->fields._GaugeStateId_k__BackingField = 1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.gaugeTweenHeight, 0, v2, v3, v4, v5, v6, v7);
  gaugeBgSprite = this->fields.gaugeBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(gaugeBgSprite, (System_String_o *)StringLiteral_19303/*"event_bg_bar"*/, 0);
  gaugeBarSprite = this->fields.gaugeBgSprite;
  if ( !gaugeBarSprite
    || (((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))gaugeBarSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          gaugeBarSprite,
          gaugeBarSprite->klass->vtable._33_MakePixelPerfect.method),
        AtlasManager__SetEventSprite(this->fields.gaugeBarSprite, (System_String_o *)StringLiteral_19366/*"event_point_bar"*/, 0),
        (gaugeBarSprite = this->fields.gaugeBarSprite) == 0)
    || (((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))gaugeBarSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          gaugeBarSprite,
          gaugeBarSprite->klass->vtable._33_MakePixelPerfect.method),
        EventInfoPointGaugeComponent__ChangeDispGauge(this, this->fields._GaugeStateId_k__BackingField, v14),
        (v15 = this->fields.gaugeBarSprite) == 0) )
  {
    sub_1C7BD40(gaugeBarSprite, v12);
  }
  this->fields.gaugeHeight = (float)v15->fields.mHeight;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPointGaugeComponent__ChangeDispGauge(
        EventInfoPointGaugeComponent_o *this,
        int32_t gaugeState,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gaugeBaseObj; // x0
  UISprite_o *iconImg; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x22
  UISprite_o *gaugeFrameSprite; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEFA7C & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19335/*"event_frame_"*/);
    sub_1C7BAE8(&StringLiteral_19329/*"event_emblem_icon_"*/);
    byte_4CEFA7C = 1;
  }
  gaugeBaseObj = this->fields.gaugeBaseObj;
  if ( !gaugeBaseObj )
    goto LABEL_14;
  if ( gaugeState )
  {
    UnityEngine_GameObject__SetActive(gaugeBaseObj, 1, 0);
    gaugeBaseObj = this->fields.gaugeObj;
    if ( gaugeBaseObj )
    {
      UnityEngine_GameObject__SetActive(gaugeBaseObj, 1, 0);
      iconImg = this->fields.iconImg;
      v12 = gaugeState;
      v7 = System_Int32__ToString((int32_t)&v12, 0);
      v8 = System_String__Concat_64176912((System_String_o *)StringLiteral_19329/*"event_emblem_icon_"*/, v7, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(iconImg, v8, 0);
      gaugeBaseObj = (UnityEngine_GameObject_o *)this->fields.iconImg;
      if ( gaugeBaseObj )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gaugeBaseObj->klass[2]._1.parent)(
          gaugeBaseObj,
          gaugeBaseObj->klass[2]._1.generic_class);
        gaugeFrameSprite = this->fields.gaugeFrameSprite;
        v12 = gaugeState;
        v10 = System_Int32__ToString((int32_t)&v12, 0);
        v11 = System_String__Concat_64176912((System_String_o *)StringLiteral_19335/*"event_frame_"*/, v10, 0);
        AtlasManager__SetEventSprite(gaugeFrameSprite, v11, 0);
        gaugeBaseObj = (UnityEngine_GameObject_o *)this->fields.gaugeFrameSprite;
        if ( gaugeBaseObj )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gaugeBaseObj->klass[2]._1.parent)(
            gaugeBaseObj,
            gaugeBaseObj->klass[2]._1.generic_class);
          return;
        }
      }
    }
LABEL_14:
    sub_1C7BD40(gaugeBaseObj, *(_QWORD *)&gaugeState);
  }
  UnityEngine_GameObject__SetActive(gaugeBaseObj, 0, 0);
  gaugeBaseObj = this->fields.gaugeObj;
  if ( !gaugeBaseObj )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gaugeBaseObj, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
TweenHeight_o *EventInfoPointGaugeComponent__CreateGaugeAnime(
        EventInfoPointGaugeComponent_o *this,
        int32_t startHeight,
        int32_t endHeight,
        const MethodInfo *method)
{
  void *gaugeBarSprite; // x0
  UITweener_o *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x21
  EventDelegate_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4CEFA7A & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_TweenHeight___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C7BAE8(&StringLiteral_6014/*"EndGaugeAnime"*/);
    byte_4CEFA7A = 1;
  }
  gaugeBarSprite = this->fields.gaugeBarSprite;
  if ( !gaugeBarSprite )
    goto LABEL_12;
  gaugeBarSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gaugeBarSprite, 0);
  if ( !gaugeBarSprite )
    goto LABEL_12;
  gaugeBarSprite = UnityEngine_GameObject__AddComponent_object_(
                     (UnityEngine_GameObject_o *)gaugeBarSprite,
                     (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_TweenHeight___);
  if ( !gaugeBarSprite )
    goto LABEL_12;
  *((_DWORD *)gaugeBarSprite + 32) = startHeight;
  *((_DWORD *)gaugeBarSprite + 33) = endHeight;
  v8 = (UITweener_o *)gaugeBarSprite;
  *((_DWORD *)gaugeBarSprite + 14) = LODWORD(this->fields.gaugeAnimationTime);
  v9 = (System_Collections_Generic_List_object__o *)*((_QWORD *)gaugeBarSprite + 9);
  v10 = (EventDelegate_o *)sub_1C7BD34(EventDelegate_TypeInfo);
  EventDelegate___ctor_49793316(v10, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6014/*"EndGaugeAnime"*/, 0);
  if ( !v9
    || (items = v9->fields._items,
        v18 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v9->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C7BD40(gaugeBarSprite, *(_QWORD *)&startHeight);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v10,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v10;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
  }
  UITweener__PlayForward(v8, 0);
  return (TweenHeight_o *)v8;
}


void EventInfoPointGaugeComponent__EndGaugeAnime(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gaugeTweenHeight; // x21
  int32_t MainPoint_k__BackingField; // w8
  int32_t BufferPoint_k__BackingField; // w9
  int32_t maxPoint; // w10
  int32_t v7; // w8
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEFA7B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFA7B = 1;
  }
  gaugeTweenHeight = (UnityEngine_Object_o *)this->fields.gaugeTweenHeight;
  MainPoint_k__BackingField = this->fields._MainPoint_k__BackingField;
  BufferPoint_k__BackingField = this->fields._BufferPoint_k__BackingField;
  maxPoint = this->fields.maxPoint;
  this->fields.animeState = 0;
  v7 = (BufferPoint_k__BackingField + MainPoint_k__BackingField)
     & ~((BufferPoint_k__BackingField + MainPoint_k__BackingField) >> 31);
  if ( v7 > maxPoint )
    v7 = maxPoint;
  this->fields._MainPoint_k__BackingField = v7;
  this->fields._BufferPoint_k__BackingField = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(gaugeTweenHeight, 0);
  this->fields.gaugeTweenHeight = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.gaugeTweenHeight, 0, v8, v9, v10, v11, v12, v13);
  ActionExtensions__Call(this->fields.endCallback, 0);
}


System_String_array *EventInfoPointGaugeComponent__GetAddEffectNameList(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.addEffectNameList;
}


UnityEngine_GameObject_o *EventInfoPointGaugeComponent__GetGenerateEffectParent(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *rootFSOffset; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4CEFA7D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFA7D = 1;
  }
  rootFSOffset = (UnityEngine_Object_o *)this->fields.rootFSOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(rootFSOffset, 0, 0);
  if ( v4 )
  {
    this = (EventInfoPointGaugeComponent_o *)this->fields.rootFSOffset;
    if ( !this )
      sub_1C7BD40(v4, v5);
  }
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
}


float EventInfoPointGaugeComponent__GetPointBarUpPositionY(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeBarSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float PositionY; // s0
  struct UISprite_o *v6; // x8

  gaugeBarSprite = (UnityEngine_Component_o *)this->fields.gaugeBarSprite;
  if ( !gaugeBarSprite
    || (gameObject = UnityEngine_Component__get_gameObject(gaugeBarSprite, 0),
        PositionY = GameObjectExtensions__GetPositionY(gameObject, 0),
        (v6 = this->fields.gaugeBarSprite) == 0) )
  {
    sub_1C7BD40(gaugeBarSprite, method);
  }
  return PositionY + (float)v6->fields.mHeight;
}


System_String_array *EventInfoPointGaugeComponent__GetSubEffectNameList(
        EventInfoPointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.subEffectNameList;
}


bool EventInfoPointGaugeComponent__IsPlayingAnime(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  return this->fields.animeState == 1;
}


void EventInfoPointGaugeComponent__PlayGaugeAnime(
        EventInfoPointGaugeComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x3
  int32_t MainPoint_k__BackingField; // w8
  float gaugeHeight; // s1
  float maxPoint; // s0
  float v13; // s2
  float v14; // s0
  int32_t v15; // w1
  int32_t v16; // w2
  struct TweenHeight_o *GaugeAnime; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( this->fields._BufferPoint_k__BackingField )
  {
    this->fields.endCallback = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.endCallback,
      (int32_t)callback,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    MainPoint_k__BackingField = this->fields._MainPoint_k__BackingField;
    gaugeHeight = this->fields.gaugeHeight;
    maxPoint = (float)this->fields.maxPoint;
    v13 = gaugeHeight * (float)((float)MainPoint_k__BackingField / maxPoint);
    v14 = gaugeHeight
        * (float)((float)(this->fields._BufferPoint_k__BackingField + MainPoint_k__BackingField) / maxPoint);
    if ( v13 == INFINITY )
      v15 = 0x80000000;
    else
      v15 = (int)v13;
    if ( v14 == INFINITY )
      v16 = 0x80000000;
    else
      v16 = (int)v14;
    this->fields.animeState = 1;
    GaugeAnime = EventInfoPointGaugeComponent__CreateGaugeAnime(this, v15, v16, v9);
    this->fields.gaugeTweenHeight = GaugeAnime;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.gaugeTweenHeight,
      (int32_t)GaugeAnime,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  else
  {
    ActionExtensions__Call(callback, 0);
  }
}


void EventInfoPointGaugeComponent__SetGaugeBarHeight(
        EventInfoPointGaugeComponent_o *this,
        int32_t height,
        const MethodInfo *method)
{
  UIWidget_o *gaugeBarSprite; // x0

  gaugeBarSprite = (UIWidget_o *)this->fields.gaugeBarSprite;
  if ( !gaugeBarSprite )
    sub_1C7BD40(0, height);
  UIWidget__set_height(gaugeBarSprite, height, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPointGaugeComponent__SetGaugeBarHeightByPoint(
        EventInfoPointGaugeComponent_o *this,
        int32_t point,
        const MethodInfo *method)
{
  this->fields._MainPoint_k__BackingField = point;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(this, *(const MethodInfo **)&point);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPointGaugeComponent__Setup(
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


void EventInfoPointGaugeComponent__SetupSubMarginX(
        EventInfoPointGaugeComponent_o *this,
        float subMarginX,
        const MethodInfo *method)
{
  __int64 rootFSOffset; // x0
  UnityEngine_Transform_o *v6; // x20

  rootFSOffset = (__int64)this->fields.rootFSOffset;
  if ( !rootFSOffset )
    goto LABEL_7;
  rootFSOffset = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)rootFSOffset, 0);
  v6 = (UnityEngine_Transform_o *)rootFSOffset;
  if ( !byte_4CE7E59 )
  {
    rootFSOffset = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localPosition(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (rootFSOffset = (__int64)this->fields.rootFSOffset) == 0) )
  {
LABEL_7:
    sub_1C7BD40(rootFSOffset, method);
  }
  *(float *)(rootFSOffset + 100) = subMarginX;
  FSOffset__UpdateOffset((FSOffset_o *)rootFSOffset, 0);
}


void EventInfoPointGaugeComponent__UpdateGaugeBarHeight(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *gaugeBarSprite; // x0
  float v4; // s0
  int32_t v5; // w1

  gaugeBarSprite = (UIWidget_o *)this->fields.gaugeBarSprite;
  if ( !gaugeBarSprite )
    sub_1C7BD40(0, method);
  v4 = this->fields.gaugeHeight * (float)((float)this->fields._MainPoint_k__BackingField / (float)this->fields.maxPoint);
  if ( v4 == INFINITY )
    v5 = 0x80000000;
  else
    v5 = (int)v4;
  UIWidget__set_height(gaugeBarSprite, v5, 0);
}


int32_t EventInfoPointGaugeComponent__get_BufferPoint(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  return this->fields._BufferPoint_k__BackingField;
}


int32_t EventInfoPointGaugeComponent__get_GaugeStateId(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  return this->fields._GaugeStateId_k__BackingField;
}


int32_t EventInfoPointGaugeComponent__get_MainPoint(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  return this->fields._MainPoint_k__BackingField;
}


void EventInfoPointGaugeComponent__set_BufferPoint(
        EventInfoPointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BufferPoint_k__BackingField = value;
}


void EventInfoPointGaugeComponent__set_GaugeStateId(
        EventInfoPointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GaugeStateId_k__BackingField = value;
}


void EventInfoPointGaugeComponent__set_MainPoint(
        EventInfoPointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MainPoint_k__BackingField = value;
}