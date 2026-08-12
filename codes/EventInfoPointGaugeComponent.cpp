void EventInfoPointGaugeComponent___ctor(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoPointGaugeComponent__Awake(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BalanceConfig_c *v9; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v11; // x1
  UISprite_o *gaugeBgSprite; // x20
  const MethodInfo *v13; // x1
  struct UISprite_o *gaugeBarSprite; // x0
  const MethodInfo *v15; // x2
  struct UISprite_o *v16; // x8

  if ( (byte_59725AF & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_20117/*"event_point_bar"*/);
    sub_2213A60(&StringLiteral_20053/*"event_bg_bar"*/);
    byte_59725AF = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  *(_QWORD *)&this->fields._MainPoint_k__BackingField = 0;
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, method);
    v9 = BalanceConfig_TypeInfo;
  }
  static_fields = v9->static_fields;
  this->fields.gaugeTweenHeight = 0;
  *(_QWORD *)&this->fields.maxPoint = (unsigned int)static_fields->UserEventActivityPointMax;
  this->fields._GaugeStateId_k__BackingField = 1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.gaugeTweenHeight, 0, v2, v3, v4, v5, v6, v7);
  gaugeBgSprite = this->fields.gaugeBgSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
  AtlasManager__SetEventSprite(gaugeBgSprite, (System_String_o *)StringLiteral_20053/*"event_bg_bar"*/, 0);
  gaugeBarSprite = this->fields.gaugeBgSprite;
  if ( !gaugeBarSprite
    || (((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))gaugeBarSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          gaugeBarSprite,
          gaugeBarSprite->klass->vtable._33_MakePixelPerfect.method),
        AtlasManager__SetEventSprite(this->fields.gaugeBarSprite, (System_String_o *)StringLiteral_20117/*"event_point_bar"*/, 0),
        (gaugeBarSprite = this->fields.gaugeBarSprite) == 0)
    || (((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))gaugeBarSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          gaugeBarSprite,
          gaugeBarSprite->klass->vtable._33_MakePixelPerfect.method),
        EventInfoPointGaugeComponent__ChangeDispGauge(this, this->fields._GaugeStateId_k__BackingField, v15),
        (v16 = this->fields.gaugeBarSprite) == 0) )
  {
    sub_2213CDC(gaugeBarSprite, v13);
  }
  this->fields.gaugeHeight = (float)v16->fields.mHeight;
  EventInfoPointGaugeComponent__UpdateGaugeBarHeight(this, v13);
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
  __int64 v8; // x1
  System_String_o *v9; // x22
  UISprite_o *gaugeFrameSprite; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59725B2 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_20086/*"event_frame_"*/);
    sub_2213A60(&StringLiteral_20080/*"event_emblem_icon_"*/);
    byte_59725B2 = 1;
  }
  gaugeBaseObj = this->fields.gaugeBaseObj;
  v13 = 0;
  if ( gaugeState )
  {
    if ( gaugeBaseObj )
    {
      UnityEngine_GameObject__SetActive(gaugeBaseObj, 1, 0);
      gaugeBaseObj = this->fields.gaugeObj;
      if ( gaugeBaseObj )
      {
        UnityEngine_GameObject__SetActive(gaugeBaseObj, 1, 0);
        iconImg = this->fields.iconImg;
        v13 = gaugeState;
        v7 = System_Int32__ToString((int32_t)&v13, 0);
        v9 = System_String__Concat_75651716((System_String_o *)StringLiteral_20080/*"event_emblem_icon_"*/, v7, 0);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
        AtlasManager__SetEventSprite(iconImg, v9, 0);
        gaugeBaseObj = (UnityEngine_GameObject_o *)this->fields.iconImg;
        if ( gaugeBaseObj )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gaugeBaseObj->klass[2]._1.parent)(
            gaugeBaseObj,
            gaugeBaseObj->klass[2]._1.generic_class);
          gaugeFrameSprite = this->fields.gaugeFrameSprite;
          v13 = gaugeState;
          v11 = System_Int32__ToString((int32_t)&v13, 0);
          v12 = System_String__Concat_75651716((System_String_o *)StringLiteral_20086/*"event_frame_"*/, v11, 0);
          AtlasManager__SetEventSprite(gaugeFrameSprite, v12, 0);
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
    }
LABEL_14:
    sub_2213CDC(gaugeBaseObj, *(_QWORD *)&gaugeState);
  }
  if ( !gaugeBaseObj )
    goto LABEL_14;
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
  float gaugeAnimationTime; // s0
  System_Collections_Generic_List_object__o *v10; // x21
  EventDelegate_c *v11; // x0
  EventDelegate_o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_59725B0 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_TweenHeight___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&StringLiteral_6260/*"EndGaugeAnime"*/);
    byte_59725B0 = 1;
  }
  gaugeBarSprite = this->fields.gaugeBarSprite;
  if ( !gaugeBarSprite )
    goto LABEL_12;
  gaugeBarSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gaugeBarSprite, 0);
  if ( !gaugeBarSprite )
    goto LABEL_12;
  gaugeBarSprite = UnityEngine_GameObject__AddComponent_object_(
                     (UnityEngine_GameObject_o *)gaugeBarSprite,
                     (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenHeight___);
  if ( !gaugeBarSprite )
    goto LABEL_12;
  v8 = (UITweener_o *)gaugeBarSprite;
  gaugeAnimationTime = this->fields.gaugeAnimationTime;
  *((_DWORD *)gaugeBarSprite + 32) = startHeight;
  *((_DWORD *)gaugeBarSprite + 33) = endHeight;
  v10 = (System_Collections_Generic_List_object__o *)*((_QWORD *)gaugeBarSprite + 9);
  v11 = EventDelegate_TypeInfo;
  v8->fields.duration = gaugeAnimationTime;
  v12 = (EventDelegate_o *)sub_2213CCC(v11);
  EventDelegate___ctor_56337752(v12, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6260/*"EndGaugeAnime"*/, 0);
  if ( !v10
    || (items = v10->fields._items,
        v20 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++v10->fields._version,
        !items) )
  {
LABEL_12:
    sub_2213CDC(gaugeBarSprite, *(_QWORD *)&startHeight);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v12,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
  }
  UITweener__PlayForward(v8, 0);
  return (TweenHeight_o *)v8;
}


void EventInfoPointGaugeComponent__EndGaugeAnime(EventInfoPointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *gaugeTweenHeight; // x21
  int32_t MainPoint_k__BackingField; // w8
  int32_t BufferPoint_k__BackingField; // w9
  int maxPoint; // w8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59725B1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59725B1 = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  gaugeTweenHeight = (UnityEngine_Object_o *)this->fields.gaugeTweenHeight;
  this->fields.animeState = 0;
  MainPoint_k__BackingField = this->fields._MainPoint_k__BackingField;
  BufferPoint_k__BackingField = this->fields._BufferPoint_k__BackingField;
  this->fields._BufferPoint_k__BackingField = 0;
  maxPoint = (BufferPoint_k__BackingField + MainPoint_k__BackingField)
           & ~((BufferPoint_k__BackingField + MainPoint_k__BackingField) >> 31);
  if ( maxPoint >= this->fields.maxPoint )
    maxPoint = this->fields.maxPoint;
  this->fields._MainPoint_k__BackingField = maxPoint;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  UnityEngine_Object__Destroy_83459800(gaugeTweenHeight, 0);
  this->fields.gaugeTweenHeight = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.gaugeTweenHeight, 0, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_59725B3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59725B3 = 1;
  }
  rootFSOffset = (UnityEngine_Object_o *)this->fields.rootFSOffset;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(rootFSOffset, 0, 0);
  if ( v4 )
  {
    this = (EventInfoPointGaugeComponent_o *)this->fields.rootFSOffset;
    if ( !this )
      sub_2213CDC(v4, v5);
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
    sub_2213CDC(gaugeBarSprite, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x3
  int32_t MainPoint_k__BackingField; // w8
  float maxPoint; // s0
  float gaugeHeight; // s2
  float v13; // s1
  float v14; // s0
  int32_t v15; // w1
  int32_t v16; // w2
  struct TweenHeight_o *GaugeAnime; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( this->fields._BufferPoint_k__BackingField )
  {
    this->fields.endCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    MainPoint_k__BackingField = this->fields._MainPoint_k__BackingField;
    maxPoint = (float)this->fields.maxPoint;
    gaugeHeight = this->fields.gaugeHeight;
    v13 = gaugeHeight * (float)((float)MainPoint_k__BackingField / maxPoint);
    v14 = gaugeHeight
        * (float)((float)(this->fields._BufferPoint_k__BackingField + MainPoint_k__BackingField) / maxPoint);
    if ( v13 == INFINITY )
      v15 = 0x80000000;
    else
      v15 = (int)v13;
    this->fields.animeState = 1;
    if ( v14 == INFINITY )
      v16 = 0x80000000;
    else
      v16 = (int)v14;
    GaugeAnime = EventInfoPointGaugeComponent__CreateGaugeAnime(this, v15, v16, v9);
    this->fields.gaugeTweenHeight = GaugeAnime;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.gaugeTweenHeight,
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


// local variable allocation has failed, the output may be wrong!
void EventInfoPointGaugeComponent__SetGaugeBarHeight(
        EventInfoPointGaugeComponent_o *this,
        int32_t height,
        const MethodInfo *method)
{
  UIWidget_o *gaugeBarSprite; // x0

  gaugeBarSprite = (UIWidget_o *)this->fields.gaugeBarSprite;
  if ( !gaugeBarSprite )
    sub_2213CDC(0, *(_QWORD *)&height);
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
  if ( !byte_5969AE0 )
  {
    rootFSOffset = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localPosition(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (rootFSOffset = (__int64)this->fields.rootFSOffset) == 0) )
  {
LABEL_7:
    sub_2213CDC(rootFSOffset, method);
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
    sub_2213CDC(0, method);
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