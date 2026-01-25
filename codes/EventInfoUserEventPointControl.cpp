void EventInfoUserEventPointControl___ctor(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  this->fields.isEnabledCondensedScale = 1;
  this->fields.animTime = 2.0;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, method);
}


void EventInfoUserEventPointControl__Awake(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF0517 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CF0517 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userEventPointMaster,
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CF051C & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoUserEventPointControl__CountUpAnim_d__25_TypeInfo);
    byte_4CF051C = 1;
  }
  v5 = sub_1C7BD34(EventInfoUserEventPointControl__CountUpAnim_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 32) = addCound;
  return (System_Collections_IEnumerator_o *)v5;
}


int64_t EventInfoUserEventPointControl__GetUserEventPoint(
        EventInfoUserEventPointControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_4CF0519 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CF0519 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0);
}


void EventInfoUserEventPointControl__Initialization(
        EventInfoUserEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.eventUiEntity = entity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (int32_t)method,
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
      UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v7, 0);
    }
  }
}


void EventInfoUserEventPointControl__PlayCountUpSe(EventInfoUserEventPointControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *countUpSEName; // x0
  void *v5; // x19
  int v6; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  unsigned int v9; // w8
  System_String_o *v10; // x1
  SePlayer_o *v11; // x0
  SePlayer_o *v12; // x20
  float result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4CF051D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_EventInfoUserEventPointControl_PlayCountUpSe__);
    byte_4CF051D = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.countUpSEName, 0) )
  {
    countUpSEName = this->fields.countUpSEName;
    if ( !countUpSEName )
      goto LABEL_17;
    countUpSEName = System_String__Split((System_String_o *)countUpSEName, 0x3Au, 0, 0);
    if ( !countUpSEName )
      goto LABEL_17;
    v5 = countUpSEName;
    v6 = *((_DWORD *)countUpSEName + 6);
    v7 = Method_EventInfoUserEventPointControl_PlayCountUpSe__;
    if ( (*((_BYTE *)Method_EventInfoUserEventPointControl_PlayCountUpSe__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C7BB00(Method_EventInfoUserEventPointControl_PlayCountUpSe__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v7, v7[4]);
    v9 = *((_DWORD *)v5 + 6);
    if ( !v9 )
      goto LABEL_18;
    v10 = (System_String_o *)*((_QWORD *)v5 + 4);
    if ( v6 < 2 )
    {
      OverwriteAssetSoundName__PlaySe(v8, v10, 0, 0);
      return;
    }
    if ( v9 <= 1 )
LABEL_18:
      sub_1C7BD48(v8);
    v11 = OverwriteAssetSoundName__PlaySe_41996976(v8, v10, *((System_String_o **)v5 + 5), 1.0, 0, 0, 0);
    result = 0.0;
    if ( *((int *)v5 + 6) >= 3 )
    {
      v12 = v11;
      countUpSEName = (void *)System_Single__TryParse(*((System_String_o **)v5 + 6), &result, 0);
      if ( ((unsigned __int8)countUpSEName & 1) != 0 )
      {
        if ( v12 )
        {
          SePlayer__set_Pitch(v12, result, 0);
          return;
        }
LABEL_17:
        sub_1C7BD40(countUpSEName, v3);
      }
    }
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
  if ( (byte_4CF0518 & 1) == 0 )
  {
    this = (EventInfoUserEventPointControl_o *)sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CF0518 = 1;
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
          sub_1C7BD48(this);
        v8 = eventUiValueEntityList->m_Items[v6];
        if ( !v8 )
LABEL_25:
          sub_1C7BD40(this, method);
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
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CED1F4 )
      {
        sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
        byte_4CED1F4 = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
  UISprite_o *v6; // x21
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_4CF051B & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF051B = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bgSprite, 0, 0) && !System_String__IsNullOrEmpty(spriteName, 0) )
  {
    v6 = this->fields.bgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v6, spriteName, 0);
    v8 = this->fields.bgSprite;
    if ( !v8 )
      sub_1C7BD40(0, v7);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v8->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v8,
      v8->klass->vtable._33_MakePixelPerfect.method);
  }
}


void EventInfoUserEventPointControl__SetPointLabel(
        EventInfoUserEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pointLabel; // x21
  UILabel_o *v6; // x21
  System_String_o *v7; // x22
  BalanceConfig_c *v8; // x8
  int64_t UserPointEventMax; // x23
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  int64_t v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF051A & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5647/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4CF051A = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0, 0) )
  {
    v6 = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v8->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v13 = System_Math__Min_65699080(point, UserPointEventMax, 0);
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
    v11 = System_String__Format(v7, v10, 0);
    if ( !v6 )
      goto LABEL_17;
    UILabel__set_text(v6, v11, 0);
    if ( !this->fields.isEnabledCondensedScale )
      return;
    v11 = (System_String_o *)this->fields.pointLabel;
    if ( !v11 )
LABEL_17:
      sub_1C7BD40(v11, v12);
    UILabel__SetCondensedScale((UILabel_o *)v11, this->fields.pointLabelWidth, 0, 0);
  }
}


void EventInfoUserEventPointControl__Setup(
        EventInfoUserEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x2

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)entitys,
      (int32_t)method,
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
  int64_t addCound; // x23
  __int64 targetFrameRate; // x0
  __int64 v7; // x1
  int v8; // w22
  int32_t i_5__3; // w8
  const MethodInfo *v10; // x2
  float v11; // s0
  int v12; // w8
  float v13; // s0
  __int64 v14; // x8
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  bool result; // w0
  int64_t currentTotalPoint; // x1

  if ( (byte_4CF051E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    byte_4CF051E = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__3 = this->fields._i_5__3;
    this->fields.__1__state = -1;
    v8 = i_5__3 + 1;
    this->fields._i_5__3 = i_5__3 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    addCound = this->fields.addCound;
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
    if ( !_4__this )
LABEL_21:
      sub_1C7BD40(targetFrameRate, v7);
    v8 = 0;
    this->fields._add_5__2 = (float)addCound / (float)(_4__this->fields.animTime * (float)(int)targetFrameRate);
    this->fields._i_5__3 = 0;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
  if ( !_4__this )
    goto LABEL_21;
  v11 = _4__this->fields.animTime * (float)(int)targetFrameRate;
  v12 = (int)v11;
  if ( v11 == INFINITY )
    v12 = 0x80000000;
  if ( v8 >= v12 )
  {
    currentTotalPoint = _4__this->fields.currentTotalPoint;
    _4__this->fields._oldTotalPoint_k__BackingField = currentTotalPoint;
    EventInfoUserEventPointControl__SetPointLabel(_4__this, currentTotalPoint, v10);
    return 0;
  }
  v13 = this->fields._add_5__2 * (float)this->fields._i_5__3;
  v14 = (__int64)v13;
  if ( v13 == INFINITY )
    v14 = 0x8000000000000000LL;
  EventInfoUserEventPointControl__SetPointLabel(_4__this, v14 + _4__this->fields._oldTotalPoint_k__BackingField, v10);
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v16, v17, v18, v19, v20, v21);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_EventInfoUserEventPointControl__CountUpAnim_d__25_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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