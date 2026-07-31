void EventInfoUserEventPointControl___ctor(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  this->fields.isEnabledCondensedScale = 1;
  this->fields.animTime = 2.0;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


void EventInfoUserEventPointControl__Awake(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593AD9B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593AD9B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userEventPointMaster,
    (int32_t)Master_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


System_Collections_IEnumerator_o *EventInfoUserEventPointControl__CountUpAnim(
        EventInfoUserEventPointControl_o *this,
        int64_t addCound,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_593ADA0 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUserEventPointControl__CountUpAnim_d__25_TypeInfo);
    byte_593ADA0 = 1;
  }
  v5 = sub_21FFEBC(EventInfoUserEventPointControl__CountUpAnim_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  result = (System_Collections_IEnumerator_o *)v5;
  *(_QWORD *)(v5 + 32) = addCound;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t EventInfoUserEventPointControl__GetUserEventPoint(
        EventInfoUserEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_593AD9D & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593AD9D = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0);
}


void EventInfoUserEventPointControl__Initialization(
        EventInfoUserEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventUiEntity = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoUserEventPointControl__PlayAnim(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  int64_t currentTotalPoint; // x8
  int64_t oldTotalPoint_k__BackingField; // x9
  int64_t v5; // x20
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( this->fields.isActiveEffect )
  {
    currentTotalPoint = this->fields.currentTotalPoint;
    oldTotalPoint_k__BackingField = this->fields._oldTotalPoint_k__BackingField;
    v5 = currentTotalPoint - oldTotalPoint_k__BackingField;
    if ( currentTotalPoint > oldTotalPoint_k__BackingField )
    {
      EventInfoUserEventPointControl__PlayCountUpSe(this, method);
      v7 = EventInfoUserEventPointControl__CountUpAnim(this, v5, v6);
      UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v7, 0);
    }
  }
}


void EventInfoUserEventPointControl__PlayCountUpSe(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  System_String_o *countUpSEName; // x0
  __int64 v4; // x1
  void *v5; // x0
  void *v6; // x19
  int v7; // w9
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  SePlayer_o *v10; // x0
  int v11; // w8
  SePlayer_o *v12; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_593ADA1 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventInfoUserEventPointControl_PlayCountUpSe__);
    byte_593ADA1 = 1;
  }
  countUpSEName = this->fields.countUpSEName;
  result = 0.0;
  if ( !System_String__IsNullOrEmpty(countUpSEName, 0) )
  {
    v5 = this->fields.countUpSEName;
    if ( v5 )
    {
      v5 = System_String__Split((System_String_o *)v5, 0x3Au, 0, 0);
      if ( v5 )
      {
        v6 = v5;
        v7 = *((_DWORD *)v5 + 6);
        v8 = Method_EventInfoUserEventPointControl_PlayCountUpSe__;
        if ( v7 < 2 )
        {
          if ( (*((_BYTE *)Method_EventInfoUserEventPointControl_PlayCountUpSe__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_21FFC68(Method_EventInfoUserEventPointControl_PlayCountUpSe__);
          v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
          if ( *((_DWORD *)v6 + 6) )
          {
            OverwriteAssetSoundName__PlaySe(v9, *((System_String_o **)v6 + 4), 0, 0);
            return;
          }
LABEL_20:
          sub_21FFED4(v9);
        }
        if ( (*((_BYTE *)Method_EventInfoUserEventPointControl_PlayCountUpSe__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_21FFC68(Method_EventInfoUserEventPointControl_PlayCountUpSe__);
        v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
        if ( *((_DWORD *)v6 + 6) < 2u )
          goto LABEL_20;
        v10 = OverwriteAssetSoundName__PlaySe_48366604(
                v9,
                *((System_String_o **)v6 + 4),
                *((System_String_o **)v6 + 5),
                1.0,
                0,
                0,
                0);
        v11 = *((_DWORD *)v6 + 6);
        result = 0.0;
        if ( v11 < 3 )
          return;
        v12 = v10;
        v5 = (void *)System_Single__TryParse(*((System_String_o **)v6 + 6), &result, 0);
        if ( ((unsigned __int8)v5 & 1) == 0 )
          return;
        if ( v12 )
        {
          SePlayer__set_Pitch(v12, result, 0);
          return;
        }
      }
    }
    sub_21FFECC(v5, v4);
  }
}


void EventInfoUserEventPointControl__Redisplay(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoUserEventPointControl_o *v3; // x19
  struct EventUiValueEntity_array *eventUiValueEntityList; // x21
  il2cpp_array_size_t max_length; // x8
  __int64 v6; // x22
  int64_t v7; // x20
  EventUiValueEntity_o *v8; // x9
  const MethodInfo *v9; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t oldTotalPoint_k__BackingField; // x1
  TerminalPramsManager_c *v12; // x0

  v3 = this;
  if ( (byte_593AD9C & 1) == 0 )
  {
    this = (EventInfoUserEventPointControl_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593AD9C = 1;
  }
  eventUiValueEntityList = v3->fields.eventUiValueEntityList;
  if ( eventUiValueEntityList )
  {
    max_length = eventUiValueEntityList->max_length;
    if ( (int)max_length < 1 )
    {
      v7 = 0;
    }
    else
    {
      v6 = 0;
      v7 = 0;
      do
      {
        if ( (unsigned int)v6 >= (unsigned int)max_length )
          sub_21FFED4(this);
        v8 = eventUiValueEntityList->m_Items[v6];
        if ( !v8 )
LABEL_25:
          sub_21FFECC(this, method);
        if ( v8->fields.type == 2 )
        {
          this = (EventInfoUserEventPointControl_o *)System_Int32__Parse(v8->fields.value, 0);
          eventUiEntity = v3->fields.eventUiEntity;
          if ( !eventUiEntity )
            goto LABEL_25;
          this = (EventInfoUserEventPointControl_o *)EventInfoUserEventPointControl__GetUserEventPoint(
                                                       v3,
                                                       eventUiEntity->fields.eventId,
                                                       (int32_t)this,
                                                       v9);
          max_length = eventUiValueEntityList->max_length;
          v7 += (int64_t)this;
        }
        ++v6;
      }
      while ( (int)v6 < (int)max_length );
    }
    oldTotalPoint_k__BackingField = v7;
    if ( v3->fields.isActiveEffect )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
      if ( !byte_5937192 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5937192 = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, oldTotalPoint_k__BackingField);
        v12 = TerminalPramsManager_TypeInfo;
      }
      oldTotalPoint_k__BackingField = v7;
      if ( v12->static_fields->_isPlayRiverActionCheck_k__BackingField )
        oldTotalPoint_k__BackingField = v3->fields._oldTotalPoint_k__BackingField;
    }
    EventInfoUserEventPointControl__SetPointLabel(v3, oldTotalPoint_k__BackingField, v2);
    v3->fields.currentTotalPoint = v7;
  }
}


void EventInfoUserEventPointControl__SetBgSprite(
        EventInfoUserEventPointControl_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgSprite; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x21
  __int64 v8; // x1
  struct UISprite_o *v9; // x0

  if ( (byte_593AD9F & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593AD9F = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spriteName);
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0, 0) && !System_String__IsNullOrEmpty(spriteName, 0) )
  {
    v7 = this->fields.bgSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
    AtlasManager__SetEventUI(v7, spriteName, 0);
    v9 = this->fields.bgSprite;
    if ( !v9 )
      sub_21FFECC(0, v8);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v9->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v9,
      v9->klass->vtable._33_MakePixelPerfect.method);
  }
}


void EventInfoUserEventPointControl__SetPointLabel(
        EventInfoUserEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pointLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x21
  System_String_o *v8; // x0
  __int64 v9; // x1
  BalanceConfig_c *v10; // x8
  System_String_o *v11; // x22
  int64_t UserPointEventMax; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  int64_t v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593AD9E & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5858/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_593AD9E = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point);
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0, 0) )
  {
    v7 = this->fields.pointLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5858/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v10 = BalanceConfig_TypeInfo;
    v11 = v8;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
      v10 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v10->static_fields->UserPointEventMax;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
    v16 = System_Math__Min_76940304(point, UserPointEventMax, 0);
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v16);
    v14 = System_String__Format(v11, v13, 0);
    if ( !v7 )
      goto LABEL_17;
    UILabel__set_text(v7, v14, 0);
    if ( !this->fields.isEnabledCondensedScale )
      return;
    v14 = (System_String_o *)this->fields.pointLabel;
    if ( !v14 )
LABEL_17:
      sub_21FFECC(v14, v15);
    UILabel__SetCondensedScale((UILabel_o *)v14, this->fields.pointLabelWidth, 0, 0);
  }
}


void EventInfoUserEventPointControl__Setup(
        EventInfoUserEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x2

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)entitys,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    EventInfoUserEventPointControl__SetBgSprite(this, this->fields.bgSpriteName, v9);
    ((void (__fastcall *)(EventInfoUserEventPointControl_o *, const MethodInfo *))this->klass->vtable._10_Redisplay.methodPtr)(
      this,
      this->klass->vtable._10_Redisplay.method);
  }
}


int64_t EventInfoUserEventPointControl__get_oldTotalPoint(
        EventInfoUserEventPointControl_o *this,
        const MethodInfo *method)
{
  return this->fields._oldTotalPoint_k__BackingField;
}


void EventInfoUserEventPointControl__set_oldTotalPoint(
        EventInfoUserEventPointControl_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._oldTotalPoint_k__BackingField = value;
}


void EventInfoUserEventPointControl__CountUpAnim_d__25___ctor(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoUserEventPointControl__CountUpAnim_d__25__MoveNext(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct EventInfoUserEventPointControl_o *_4__this; // x20
  UnityEngine_Application_c *v5; // x0
  int64_t addCound; // x23
  __int64 targetFrameRate; // x0
  float animTime; // s1
  int v9; // w22
  int32_t i_5__3; // w8
  const MethodInfo *v11; // x2
  float v12; // s0
  float v13; // s0
  __int64 v14; // x9
  Il2CppObject **p__2__current; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  bool result; // w0
  int64_t currentTotalPoint; // x1

  if ( (byte_593ADA2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_593ADA2 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = this->fields._i_5__3;
    this->fields.__1__state = -1;
    v9 = i_5__3 + 1;
    this->fields._i_5__3 = i_5__3 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v5 = UnityEngine_Application_TypeInfo;
    addCound = this->fields.addCound;
    this->fields.__1__state = -1;
    if ( !*(&v5->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v5, method);
    targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
    if ( !_4__this )
LABEL_20:
      sub_21FFECC(targetFrameRate, method);
    animTime = _4__this->fields.animTime;
    v9 = 0;
    this->fields._i_5__3 = 0;
    this->fields._add_5__2 = (float)addCound / (float)(animTime * (float)(int)targetFrameRate);
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
  if ( !_4__this )
    goto LABEL_20;
  v12 = _4__this->fields.animTime * (float)(int)targetFrameRate;
  if ( v12 == INFINITY || v9 >= (int)v12 )
  {
    currentTotalPoint = _4__this->fields.currentTotalPoint;
    _4__this->fields._oldTotalPoint_k__BackingField = currentTotalPoint;
    EventInfoUserEventPointControl__SetPointLabel(_4__this, currentTotalPoint, v11);
    return 0;
  }
  v13 = this->fields._add_5__2 * (float)this->fields._i_5__3;
  v14 = (__int64)v13;
  if ( v13 == INFINITY )
    v14 = 0x8000000000000000LL;
  EventInfoUserEventPointControl__SetPointLabel(_4__this, v14 + _4__this->fields._oldTotalPoint_k__BackingField, v11);
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v16, v17, v18, v19, v20, v21);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *EventInfoUserEventPointControl__CountUpAnim_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoUserEventPointControl__CountUpAnim_d__25__System_Collections_IEnumerator_Reset(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventInfoUserEventPointControl__CountUpAnim_d__25_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *EventInfoUserEventPointControl__CountUpAnim_d__25__System_Collections_IEnumerator_get_Current(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoUserEventPointControl__CountUpAnim_d__25__System_IDisposable_Dispose(
        EventInfoUserEventPointControl__CountUpAnim_d__25_o *this,
        const MethodInfo *method)
{
  ;
}