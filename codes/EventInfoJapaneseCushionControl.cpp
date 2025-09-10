void EventInfoJapaneseCushionControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct EventInfoJapaneseCushionControl_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4C287DE & 1) == 0 )
  {
    sub_1C2D490(&EventInfoJapaneseCushionControl_TypeInfo);
    sub_1C2D490(&StringLiteral_5574/*"EVENT_CUSHION_VALUE"*/);
    byte_4C287DE = 1;
  }
  static_fields = EventInfoJapaneseCushionControl_TypeInfo->static_fields;
  static_fields->LIMIT_BREAK_CUSHION_NUM = 73;
  v4 = StringLiteral_5574/*"EVENT_CUSHION_VALUE"*/;
  static_fields->SAVEKEY_EVENT_CUSHION_VALUE = (struct System_String_o *)StringLiteral_5574/*"EVENT_CUSHION_VALUE"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->SAVEKEY_EVENT_CUSHION_VALUE, v4, v1, v2);
}


void EventInfoJapaneseCushionControl___ctor(EventInfoJapaneseCushionControl_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


bool EventInfoJapaneseCushionControl__CheckEventProgressValueSaveData(
        int32_t eventId,
        int32_t eventUiId,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_4C287DB & 1) == 0 )
  {
    sub_1C2D490(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_4C287DB = 1;
  }
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
  EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(eventId, eventUiId, method);
  return UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0);
}


void EventInfoJapaneseCushionControl__DeleteBeforeAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_beforeAnimObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *beforeAnimObject; // t1
  __int64 v6; // x1
  CGThumbnailListItem_c *klass; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C287D7 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C287D7 = 1;
  }
  beforeAnimObject = this->fields.beforeAnimObject;
  p_beforeAnimObject = (CGThumbnailListItem_o *)&this->fields.beforeAnimObject;
  v4 = (UnityEngine_Object_o *)beforeAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = p_beforeAnimObject->klass;
    if ( !p_beforeAnimObject->klass )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)klass,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    klass = (CGThumbnailListItem_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)klass & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_16;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_object, 0);
    }
    klass = p_beforeAnimObject->klass;
    if ( p_beforeAnimObject->klass )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0);
      v9 = (UnityEngine_Object_o *)p_beforeAnimObject->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v9, 0);
      p_beforeAnimObject->klass = 0;
      sub_1C2D434(p_beforeAnimObject, 0, v10, v11);
      return;
    }
LABEL_16:
    sub_1C2D6EC(klass, v6);
  }
}


void EventInfoJapaneseCushionControl__EndAddedCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  int32_t max_length; // w20
  int32_t cushionStartAnimIndex; // w8
  EventInfoJapaneseCushionControl_o *v7; // x19
  int32_t v8; // w8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v9; // x8
  struct UnityEngine_GameObject_array *v10; // x8

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_15;
  CushionObjectList = servantObjectData->fields.CushionObjectList;
  if ( !CushionObjectList )
    goto LABEL_15;
  max_length = CushionObjectList->max_length;
  cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
  v7 = this;
  if ( cushionStartAnimIndex < max_length && this->fields.cushionAddNum >= 1 )
  {
    if ( cushionStartAnimIndex >= (unsigned int)max_length )
      sub_1C2D6F4(this, method, v2);
    this = (EventInfoJapaneseCushionControl_o *)CushionObjectList->m_Items[cushionStartAnimIndex];
    if ( !this )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    cushionStartAnimIndex = v7->fields.cushionStartAnimIndex;
  }
  v8 = cushionStartAnimIndex + 1;
  v7->fields.cushionStartAnimIndex = v8;
  if ( v8 < max_length )
    goto LABEL_12;
  v9 = v7->fields.servantObjectData;
  if ( !v9 || (v10 = v9->fields.CushionObjectList) == 0 )
LABEL_15:
    sub_1C2D6EC(this, method);
  v7->fields.cushionStartAnimIndex = LODWORD(v10->max_length) - 1;
LABEL_12:
  if ( v7->fields.cushionAddNum )
    EventInfoJapaneseCushionControl__PlayAddedCushionAnim(v7, method);
  else
    EventInfoJapaneseCushionControl__EndCushionAnim(v7, method);
}


void EventInfoJapaneseCushionControl__EndCushionAnim(EventInfoJapaneseCushionControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  UnityEngine_GameObject_o *ServantObject; // x20
  struct System_Action_o *animEndAction; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o ServantPosition; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    sub_1C2D6EC(this, method);
  ServantObject = servantObjectData->fields.ServantObject;
  ServantPosition = EventInfoJapaneseCushionControl__GetServantPosition(this, this->fields.currentCushionNum, v2);
  GameObjectExtensions__SetLocalPosition(ServantObject, ServantPosition, 0);
  animEndAction = this->fields.animEndAction;
  this->fields.cushionAddNum = 0;
  this->fields.animEndAction = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animEndAction, 0, v7, v8);
  if ( animEndAction )
    ((void (__fastcall *)(intptr_t, intptr_t))animEndAction->fields.invoke_impl)(
      animEndAction->fields.method_code,
      animEndAction->fields.method);
}


int32_t EventInfoJapaneseCushionControl__GetBeforeCushionNum(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19
  int32_t id; // w20

  if ( (byte_4C287D9 & 1) == 0 )
  {
    sub_1C2D490(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_4C287D9 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    return 0;
  eventId = eventUiEntity->fields.eventId;
  id = eventUiEntity->fields.id;
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
  return EventInfoJapaneseCushionControl__GetEventProgressValueSaveData(eventId, id, 0, v2);
}


int32_t EventInfoJapaneseCushionControl__GetCurrentCushionNum(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  EventInfoJapaneseCushionControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x10
  struct EventUiValueEntity_array *eventUiValueEntityList; // x8
  int max_length; // w9
  int32_t priority; // w10
  int v7; // w11
  EventUiValueEntity_o *v8; // x12
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8

  v2 = this;
  if ( (byte_4C287D8 & 1) == 0 )
  {
    this = (EventInfoJapaneseCushionControl_o *)sub_1C2D490(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_4C287D8 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( eventUiEntity
    && (eventUiValueEntityList = v2->fields.eventUiValueEntityList) != 0
    && (max_length = eventUiValueEntityList->max_length, max_length >= 1) )
  {
    priority = eventUiEntity->fields.priority;
    v7 = 0;
    while ( 1 )
    {
      v8 = eventUiValueEntityList->m_Items[v7];
      if ( !v8 )
        goto LABEL_18;
      if ( priority == v8->fields.priority )
        break;
      if ( max_length == ++v7 )
        goto LABEL_10;
    }
    this = (EventInfoJapaneseCushionControl_o *)System_Int32__Parse(v8->fields.value, 0);
    servantObjectData = v2->fields.servantObjectData;
    if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0 )
LABEL_18:
      sub_1C2D6EC(this, method);
    if ( (int)this >= SLODWORD(CushionObjectList->max_length) )
    {
      this = (EventInfoJapaneseCushionControl_o *)EventInfoJapaneseCushionControl_TypeInfo;
      if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
        this = (EventInfoJapaneseCushionControl_o *)EventInfoJapaneseCushionControl_TypeInfo;
      }
      LODWORD(this) = this->fields.beforeAnimObject->klass;
    }
  }
  else
  {
LABEL_10:
    LODWORD(this) = 0;
  }
  return (int)this;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventInfoJapaneseCushionControl__GetEventProgressValueSaveData(
        int32_t eventId,
        int32_t eventUiId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_4C287DC & 1) == 0 )
  {
    sub_1C2D490(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_4C287DC = 1;
  }
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
  EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(
                                eventId,
                                eventUiId,
                                *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey, defaultValue, 0);
}


System_String_o *EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(
        int32_t eventId,
        int32_t eventUiId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  EventInfoJapaneseCushionControl_c *v7; // x8
  System_String_o *v8; // x19
  struct System_String_o *SAVEKEY_EVENT_CUSHION_VALUE; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v17 = eventUiId;
  v18 = eventId;
  if ( (byte_4C287DA & 1) == 0 )
  {
    sub_1C2D490(&EventInfoJapaneseCushionControl_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C287DA = 1;
  }
  v3 = (System_String_o *)sub_1C2D538(string___TypeInfo, 5);
  v7 = EventInfoJapaneseCushionControl_TypeInfo;
  v8 = v3;
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
    v7 = EventInfoJapaneseCushionControl_TypeInfo;
  }
  if ( !v8 )
    sub_1C2D6EC(v3, v4);
  if ( !LODWORD(v8[1].klass) )
    goto LABEL_12;
  SAVEKEY_EVENT_CUSHION_VALUE = v7->static_fields->SAVEKEY_EVENT_CUSHION_VALUE;
  v8[1].monitor = SAVEKEY_EVENT_CUSHION_VALUE;
  sub_1C2D434((CGThumbnailListItem_o *)&v8[1].monitor, (int32_t)SAVEKEY_EVENT_CUSHION_VALUE, v5, v6);
  if ( LODWORD(v8[1].klass) <= 1 )
    goto LABEL_12;
  v11 = StringLiteral_16105/*"_"*/;
  v8[1].fields = (System_String_Fields)StringLiteral_16105/*"_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8[1].fields, v11, v5, v10);
  v3 = System_Int32__ToString((int32_t)&v18, 0);
  if ( LODWORD(v8[1].klass) <= 2
    || (v8[2].klass = (System_String_c *)v3,
        sub_1C2D434((CGThumbnailListItem_o *)&v8[2], (int32_t)v3, v5, v12),
        LODWORD(v8[1].klass) <= 3)
    || (v14 = StringLiteral_16105/*"_"*/,
        v8[2].monitor = (void *)StringLiteral_16105/*"_"*/,
        sub_1C2D434((CGThumbnailListItem_o *)&v8[2].monitor, v14, v5, v13),
        v3 = System_Int32__ToString((int32_t)&v17, 0),
        LODWORD(v8[1].klass) <= 4) )
  {
LABEL_12:
    sub_1C2D6F4(v3, v4, v5);
  }
  v8[2].fields = (System_String_Fields)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&v8[2].fields, (int32_t)v3, v5, v15);
  return System_String__Concat_63498380((System_String_array *)v8, 0);
}


UnityEngine_Vector3_o EventInfoJapaneseCushionControl__GetLordUpEffectEndedPosition(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t beforeCushionNum; // w11
  int32_t max_length; // w10
  unsigned int v8; // w9
  float v9; // s1
  float v10; // s0
  float v11; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0 )
    sub_1C2D6EC(this, method);
  beforeCushionNum = this->fields.beforeCushionNum;
  max_length = CushionObjectList->max_length;
  v8 = beforeCushionNum - 1;
  if ( beforeCushionNum < 1 || beforeCushionNum > max_length )
  {
    if ( max_length )
    {
      result = GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[0], 0);
      result.fields.y = v9 - this->fields.servantStepHeight;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C2D6F4(this, method, v2);
  }
  if ( v8 >= max_length )
    goto LABEL_11;
  result = GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[v8], 0);
LABEL_9:
  v10 = result.fields.x + this->fields.lordUpEffectOffsetX;
  v11 = result.fields.y + this->fields.lordUpEffectOffsetY;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


UnityEngine_Vector3_o EventInfoJapaneseCushionControl__GetLordUpEffectStartedPosition(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.lordUpEffectStartedPosition.fields.x;
  y = this->fields.lordUpEffectStartedPosition.fields.y;
  z = this->fields.lordUpEffectStartedPosition.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o EventInfoJapaneseCushionControl__GetServantAnimPosition(
        EventInfoJapaneseCushionControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t max_length; // w10
  int32_t v6; // w9

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0 )
    sub_1C2D6EC(this, index);
  max_length = CushionObjectList->max_length;
  v6 = max_length - 1;
  if ( max_length > index )
    v6 = index;
  if ( v6 >= (unsigned int)max_length )
    sub_1C2D6F4(this, *(_QWORD *)&index, method);
  return GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[v6], 0);
}


UnityEngine_Vector3_o EventInfoJapaneseCushionControl__GetServantPosition(
        EventInfoJapaneseCushionControl_o *this,
        int32_t cushionNum,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  float v6; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    sub_1C2D6EC(this, cushionNum);
  result = GameObjectExtensions__GetLocalPosition(servantObjectData->fields.ServantObject, 0);
  v6 = (float)(this->fields.servantStepHeight * (float)(cushionNum - 1)) + this->fields.servantPositionOffsetY;
  result.fields.y = v6;
  return result;
}


void EventInfoJapaneseCushionControl__Initialization(
        EventInfoJapaneseCushionControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UIWidget_o *ServantSprite; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  _QWORD *genericContainerHandle; // x21
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v10; // x21
  UISprite_o *bgSprite; // x1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v13; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v14; // x8
  UISprite_o *NameSprite; // x1
  __int64 *v16; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v17; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v18; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v19; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v20; // x8
  __int64 v21; // x2
  const MethodInfo *v22; // x4
  struct EventInfoJapaneseCushionControl_ObjectData_o *v23; // x8
  unsigned __int64 v24; // x20
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v27; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  unsigned __int64 v29; // x9

  if ( (byte_4C287D2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_19187/*"event_gauge_bg_8036702"*/);
    sub_1C2D490(&StringLiteral_19195/*"event_gauge_sd_8036702"*/);
    sub_1C2D490(&StringLiteral_19185/*"event_gauge_base_8036702"*/);
    sub_1C2D490(&StringLiteral_19186/*"event_gauge_bg_8036701"*/);
    sub_1C2D490(&StringLiteral_19184/*"event_gauge_base_8036701"*/);
    sub_1C2D490(&StringLiteral_19279/*"event_title_80367"*/);
    sub_1C2D490(&StringLiteral_19194/*"event_gauge_sd_8036701"*/);
    byte_4C287D2 = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    ServantSprite = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      ServantSprite = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = ServantSprite->fields.onChange->klass;
    if ( !klass )
      goto LABEL_45;
    genericContainerHandle = klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)genericContainerHandle[5];
    if ( !ServantSprite )
      goto LABEL_45;
    UIWidget__set_depth(ServantSprite, this->fields.titleBackButtonDepth + 2, 0);
    ServantSprite = (UIWidget_o *)genericContainerHandle[4];
    if ( !ServantSprite )
      goto LABEL_45;
    UIWidget__set_depth(ServantSprite, this->fields.titleBackButtonDepth, 0);
  }
  this->fields.eventUiEntity = entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  eventUiEntity = this->fields.eventUiEntity;
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v10, 0);
  bgSprite = this->fields.bgSprite;
  if ( this->fields.servantType == 1 )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_19185/*"event_gauge_base_8036702"*/,
      0);
    ServantSprite = (UIWidget_o *)this->fields.bgSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))ServantSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._33_MakePixelPerfect.method);
    servantObjectData = this->fields.servantObjectData;
    if ( !servantObjectData )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                    (EventInfoUIBase_o *)this,
                                    servantObjectData->fields.ServantSprite,
                                    (System_String_o *)StringLiteral_19195/*"event_gauge_sd_8036702"*/,
                                    0);
    v13 = this->fields.servantObjectData;
    if ( !v13 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)v13->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))ServantSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._33_MakePixelPerfect.method);
    v14 = this->fields.servantObjectData;
    if ( !v14 )
      goto LABEL_45;
    NameSprite = v14->fields.NameSprite;
    v16 = &StringLiteral_19187/*"event_gauge_bg_8036702"*/;
  }
  else
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_19184/*"event_gauge_base_8036701"*/,
      0);
    ServantSprite = (UIWidget_o *)this->fields.bgSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))ServantSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
      ServantSprite,
      ServantSprite->klass->vtable._33_MakePixelPerfect.method);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.titleSprite,
      (System_String_o *)StringLiteral_19279/*"event_title_80367"*/,
      0);
    ServantSprite = (UIWidget_o *)this->fields.titleSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))ServantSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._33_MakePixelPerfect.method);
    v17 = this->fields.servantObjectData;
    if ( !v17 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                    (EventInfoUIBase_o *)this,
                                    v17->fields.ServantSprite,
                                    (System_String_o *)StringLiteral_19194/*"event_gauge_sd_8036701"*/,
                                    0);
    v18 = this->fields.servantObjectData;
    if ( !v18 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)v18->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))ServantSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._33_MakePixelPerfect.method);
    v19 = this->fields.servantObjectData;
    if ( !v19 )
      goto LABEL_45;
    NameSprite = v19->fields.NameSprite;
    v16 = &StringLiteral_19186/*"event_gauge_bg_8036701"*/;
  }
  ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                  (EventInfoUIBase_o *)this,
                                  NameSprite,
                                  (System_String_o *)*v16,
                                  0);
  v20 = this->fields.servantObjectData;
  if ( !v20 )
    goto LABEL_45;
  ServantSprite = (UIWidget_o *)v20->fields.NameSprite;
  if ( !ServantSprite )
    goto LABEL_45;
  ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))ServantSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                  ServantSprite,
                                  ServantSprite->klass->vtable._33_MakePixelPerfect.method);
  v23 = this->fields.servantObjectData;
  if ( !v23 )
    goto LABEL_45;
  v24 = 0;
  while ( 1 )
  {
    CushionObjectList = v23->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_45;
    max_length_low = LODWORD(CushionObjectList->max_length);
    if ( (__int64)v24 >= (int)max_length_low )
      break;
    if ( v24 >= max_length_low )
LABEL_46:
      sub_1C2D6F4(ServantSprite, entity, v21);
    EventInfoJapaneseCushionControl__SetupCushionObject(
      this,
      CushionObjectList->m_Items[v24],
      this->fields.servantType,
      v24,
      v22);
    v23 = this->fields.servantObjectData;
    ++v24;
    if ( !v23 )
      goto LABEL_45;
  }
  if ( !this->fields.servantType )
  {
    v27 = 0;
    do
    {
      ExtentionCushionObjectList = v23->fields.ExtentionCushionObjectList;
      if ( !ExtentionCushionObjectList )
        break;
      v29 = LODWORD(ExtentionCushionObjectList->max_length);
      if ( (__int64)v27 >= (int)v29 )
        return;
      if ( v27 >= v29 )
        goto LABEL_46;
      EventInfoJapaneseCushionControl__SetupCushionObject(
        this,
        ExtentionCushionObjectList->m_Items[v27],
        this->fields.servantType,
        v27,
        v22);
      v23 = this->fields.servantObjectData;
      ++v27;
    }
    while ( v23 );
LABEL_45:
    sub_1C2D6EC(ServantSprite, entity);
  }
}


bool EventInfoJapaneseCushionControl__IsPlayAddedAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  return this->fields.cushionAddNum > 0;
}


bool EventInfoJapaneseCushionControl__IsRivalServant(EventInfoJapaneseCushionControl_o *this, const MethodInfo *method)
{
  return this->fields.servantType == 1;
}


void EventInfoJapaneseCushionControl__OnDestroy(EventInfoJapaneseCushionControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C2D6EC(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoJapaneseCushionControl__OnDisable(EventInfoJapaneseCushionControl_o *this, const MethodInfo *method)
{
  UIWidget_o *v3; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  void *genericContainerHandle; // x19

  if ( (byte_4C287D1 & 1) == 0 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C287D1 = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    v3 = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v3 = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v3->fields.onChange->klass;
    if ( !klass
      || (genericContainerHandle = klass->_2.genericContainerHandle) == 0
      || (v3 = (UIWidget_o *)*((_QWORD *)genericContainerHandle + 5)) == 0
      || (UIWidget__set_depth(v3, 8, 0), (v3 = (UIWidget_o *)*((_QWORD *)genericContainerHandle + 4)) == 0) )
    {
      sub_1C2D6EC(v3, method);
    }
    UIWidget__set_depth(v3, 6, 0);
  }
}


void EventInfoJapaneseCushionControl__PlayAddedCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t servantType; // w8
  int32_t cushionStartAnimIndex; // w1
  System_String_o **v6; // x8
  System_String_o *v7; // x20
  System_String_o **v8; // x8
  UnityEngine_GameObject_o *v9; // x0
  const MethodInfo *v10; // x1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  float y; // s8
  __int64 v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o **v16; // x8
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o **v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *v21; // x23
  UnityEngine_GameObject_o *v22; // x23
  UnityEngine_GameObject_o *ServantRoot; // x0
  Il2CppObject *Component_object; // x22
  System_Action_o *v25; // x23
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x21
  UnityEngine_Object_o *Clip; // x22
  UnityEngine_Vector3_o ServantAnimPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C287D6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__);
    sub_1C2D490(&EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo);
    sub_1C2D490(&StringLiteral_18800/*"ef_bunyan"*/);
    sub_1C2D490(&StringLiteral_18788/*"ef_anning2"*/);
    sub_1C2D490(&StringLiteral_18787/*"ef_anning1"*/);
    sub_1C2D490(&StringLiteral_18786/*"ef_anning"*/);
    sub_1C2D490(&StringLiteral_18802/*"ef_bunyan2"*/);
    sub_1C2D490(&StringLiteral_18801/*"ef_bunyan1"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C287D6 = 1;
  }
  servantType = this->fields.servantType;
  if ( servantType )
  {
    if ( servantType == 1 )
    {
      cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
      if ( cushionStartAnimIndex % 5 == 4 )
        v6 = (System_String_o **)&StringLiteral_18788/*"ef_anning2"*/;
      else
        v6 = (System_String_o **)&StringLiteral_18787/*"ef_anning1"*/;
      v7 = *v6;
      goto LABEL_14;
    }
    v8 = (System_String_o **)&StringLiteral_1/*""*/;
    cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
  }
  else
  {
    cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
    if ( cushionStartAnimIndex % 5 == 4 )
      v8 = (System_String_o **)&StringLiteral_18802/*"ef_bunyan2"*/;
    else
      v8 = (System_String_o **)&StringLiteral_18801/*"ef_bunyan1"*/;
  }
  v7 = *v8;
LABEL_14:
  this->fields.cushionAddNum = (this->fields.cushionAddNum - 1) & ~((this->fields.cushionAddNum - 1) >> 31);
  ServantAnimPosition = EventInfoJapaneseCushionControl__GetServantAnimPosition(this, cushionStartAnimIndex, v2);
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_38;
  y = ServantAnimPosition.fields.y;
  GameObjectExtensions__GetLocalPositionX(servantObjectData->fields.ServantObject, 0);
  if ( System_String__IsNullOrEmpty(v7, 0) )
    goto LABEL_37;
  v13 = sub_1C2D6DC(EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_38;
  *(_QWORD *)(v13 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 24), (int32_t)this, v14, v15);
  if ( this->fields.servantType )
    v16 = (System_String_o **)&StringLiteral_18786/*"ef_anning"*/;
  else
    v16 = (System_String_o **)&StringLiteral_18800/*"ef_bunyan"*/;
  v17 = EventInfoUIBase__InstantiateFromEventUIAssetData((EventInfoUIBase_o *)this, *v16, 0);
  *(_QWORD *)(v13 + 16) = v17;
  v18 = (UnityEngine_GameObject_o **)(v13 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)v17, v19, v20);
  v21 = *(UnityEngine_Object_o **)(v13 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v21, 0, 0) )
    goto LABEL_37;
  v22 = *v18;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v10);
  GameObjectExtensions__SafeSetParent_35924288(v22, ServantRoot, 0);
  GameObjectExtensions__SetLocalPositionY(*v18, y - this->fields.servantStepHeight, 0);
  v9 = *v18;
  if ( !*v18 )
    goto LABEL_38;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    goto LABEL_37;
  v25 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)this,
    Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__,
    0);
  if ( !Component_object )
    goto LABEL_38;
  Component_object[2].klass = (Il2CppClass *)v25;
  sub_1C2D434((CGThumbnailListItem_o *)&Component_object[2], (int32_t)v25, v26, v27);
  v28 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v13,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__,
    0);
  Component_object[2].monitor = v28;
  sub_1C2D434((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v28, v29, v30);
  v9 = *(UnityEngine_GameObject_o **)(v13 + 16);
  if ( !v9 )
    goto LABEL_38;
  v31 = UnityEngine_GameObject__GetComponent_object_(
          v9,
          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0, 0);
  if ( ((unsigned __int8)v9 & 1) == 0 )
    goto LABEL_37;
  if ( !v31 )
LABEL_38:
    sub_1C2D6EC(v9, v10);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v31, v7, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Clip, 0, 0) )
  {
    UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)v31, v7, 0);
    return;
  }
LABEL_37:
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(this, v10);
}


void EventInfoJapaneseCushionControl__PlayAnim(
        EventInfoJapaneseCushionControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( type == 1 )
  {
    this->fields.animEndAction = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animEndAction, (int32_t)callback, (int32_t)callback, method);
    EventInfoJapaneseCushionControl__StartAddedCushionAnim(this, v5);
  }
  else
  {
    ActionExtensions__Call(callback, 0);
  }
}


void EventInfoJapaneseCushionControl__PlayOverflowCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *v4; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  float y; // s8
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o **v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x22
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_GameObject_o *ServantRoot; // x0
  Il2CppObject *Component_object; // x21
  System_Action_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Action_o *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *v24; // x20
  Il2CppObject *v25; // x21
  UnityEngine_Object_o *Clip; // x22
  UnityEngine_Vector3_o ServantAnimPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C287D5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__);
    sub_1C2D490(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__);
    sub_1C2D490(&EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo);
    sub_1C2D490(&StringLiteral_18800/*"ef_bunyan"*/);
    sub_1C2D490(&StringLiteral_18803/*"ef_bunyan99"*/);
    byte_4C287D5 = 1;
  }
  v3 = sub_1C2D6DC(EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_22;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  ServantAnimPosition = EventInfoJapaneseCushionControl__GetServantAnimPosition(this, this->fields.beforeCushionNum, v8);
  y = ServantAnimPosition.fields.y;
  v10 = EventInfoUIBase__InstantiateFromEventUIAssetData(
          (EventInfoUIBase_o *)this,
          (System_String_o *)StringLiteral_18800/*"ef_bunyan"*/,
          0);
  *(_QWORD *)(v3 + 24) = v10;
  v11 = (UnityEngine_GameObject_o **)(v3 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v10, v12, v13);
  v14 = *(UnityEngine_Object_o **)(v3 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v14, 0, 0) )
    goto LABEL_21;
  v15 = *v11;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v5);
  GameObjectExtensions__SafeSetParent_35924288(v15, ServantRoot, 0);
  GameObjectExtensions__SetLocalPositionY(*v11, y - this->fields.servantStepHeight, 0);
  v4 = *v11;
  if ( !*v11 )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v4,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    goto LABEL_21;
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v3,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__,
    0);
  if ( !Component_object )
    goto LABEL_22;
  Component_object[2].klass = (Il2CppClass *)v18;
  sub_1C2D434((CGThumbnailListItem_o *)&Component_object[2], (int32_t)v18, v19, v20);
  v21 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v3,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__,
    0);
  Component_object[2].monitor = v21;
  sub_1C2D434((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v21, v22, v23);
  v4 = *(UnityEngine_GameObject_o **)(v3 + 24);
  if ( !v4 )
    goto LABEL_22;
  v24 = (System_String_o *)StringLiteral_18803/*"ef_bunyan99"*/;
  v25 = UnityEngine_GameObject__GetComponent_object_(
          v4,
          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
    goto LABEL_21;
  if ( !v25 )
LABEL_22:
    sub_1C2D6EC(v4, v5);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v25, v24, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Clip, 0, 0) )
  {
    UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)v25, v24, 0);
    return;
  }
LABEL_21:
  EventInfoJapaneseCushionControl__EndCushionAnim(this, v5);
}


void EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(
        EventInfoJapaneseCushionControl_o *this,
        int32_t cushionNum,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t id; // w21
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_4C287DD & 1) == 0 )
  {
    sub_1C2D490(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_4C287DD = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
  {
    eventId = eventUiEntity->fields.eventId;
    id = eventUiEntity->fields.id;
    if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
    EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(eventId, id, method);
    UnityEngine_PlayerPrefs__SetInt(EventProgressValueSaveKey, cushionNum, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  EventInfoJapaneseCushionControl_o *v4; // x19
  __int64 v5; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  int max_length; // w9

  if ( this->fields.servantType != 1 )
  {
    servantObjectData = this->fields.servantObjectData;
    v4 = this;
    if ( servantObjectData )
    {
      v5 = 0;
      do
      {
        ExtentionCushionObjectList = servantObjectData->fields.ExtentionCushionObjectList;
        if ( !ExtentionCushionObjectList )
          break;
        max_length = ExtentionCushionObjectList->max_length;
        if ( (int)v5 >= max_length )
          return;
        if ( (unsigned int)v5 >= max_length )
          sub_1C2D6F4(this, method, v2);
        this = (EventInfoJapaneseCushionControl_o *)ExtentionCushionObjectList->m_Items[v5];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        servantObjectData = v4->fields.servantObjectData;
        ++v5;
      }
      while ( servantObjectData );
    }
    sub_1C2D6EC(this, method);
  }
}


void EventInfoJapaneseCushionControl__Setup(
        EventInfoJapaneseCushionControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *CurrentCushionNum; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t id; // w21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  int32_t beforeCushionNum; // w8
  int32_t v16; // w0
  const MethodInfo *v17; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t max_length; // w20
  int32_t v21; // w1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v22; // x8
  const MethodInfo *v23; // x2
  int32_t v24; // w8
  __int64 v25; // x21
  struct EventInfoJapaneseCushionControl_ObjectData_o *v26; // x8
  struct UnityEngine_GameObject_array *v27; // x8
  EventInfoJapaneseCushionControl_c *v28; // x0
  struct EventInfoJapaneseCushionControl_ObjectData_o *v29; // x8
  const MethodInfo *v30; // x1
  UnityEngine_Vector3_o ServantPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C287D3 & 1) == 0 )
  {
    sub_1C2D490(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_4C287D3 = 1;
  }
  this->fields.eventUiValueEntityList = entitys;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUiValueEntityList, (int32_t)entitys, (int32_t)method, v3);
  eventUiEntity = this->fields.eventUiEntity;
  this->fields.cushionAddNum = 0;
  if ( !eventUiEntity )
    goto LABEL_30;
  eventId = eventUiEntity->fields.eventId;
  id = eventUiEntity->fields.id;
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
  if ( EventInfoJapaneseCushionControl__CheckEventProgressValueSaveData(eventId, id, v8) )
  {
    this->fields.beforeCushionNum = EventInfoJapaneseCushionControl__GetBeforeCushionNum(this, v12);
    CurrentCushionNum = (UnityEngine_GameObject_o *)EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v13);
    beforeCushionNum = this->fields.beforeCushionNum;
    this->fields.currentCushionNum = (int)CurrentCushionNum;
    this->fields.cushionAddNum = ((_DWORD)CurrentCushionNum - beforeCushionNum)
                               & ~(((int)CurrentCushionNum - beforeCushionNum) >> 31);
  }
  else
  {
    v16 = EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v12);
    this->fields.beforeCushionNum = v16;
    this->fields.currentCushionNum = v16;
    EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(this, v16, v17);
  }
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_30;
  CushionObjectList = servantObjectData->fields.CushionObjectList;
  if ( !CushionObjectList )
    goto LABEL_30;
  max_length = CushionObjectList->max_length;
  v21 = this->fields.beforeCushionNum >= max_length
      ? LODWORD(CushionObjectList->max_length)
      : this->fields.beforeCushionNum;
  this->fields.beforeCushionNum = v21;
  ServantPosition = EventInfoJapaneseCushionControl__GetServantPosition(this, v21, v14);
  v22 = this->fields.servantObjectData;
  if ( !v22 )
    goto LABEL_30;
  GameObjectExtensions__SetLocalPositionY(v22->fields.ServantObject, ServantPosition.fields.y, 0);
  v24 = this->fields.beforeCushionNum;
  if ( v24 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      v26 = this->fields.servantObjectData;
      if ( !v26 )
        break;
      v27 = v26->fields.CushionObjectList;
      if ( !v27 )
        break;
      if ( (unsigned int)v25 >= LODWORD(v27->max_length) )
        sub_1C2D6F4(CurrentCushionNum, v7, v23);
      CurrentCushionNum = v27->m_Items[v25];
      if ( !CurrentCushionNum )
        break;
      UnityEngine_GameObject__SetActive(CurrentCushionNum, 1, 0);
      v24 = this->fields.beforeCushionNum;
      if ( (int)++v25 >= v24 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1C2D6EC(CurrentCushionNum, v7);
  }
LABEL_22:
  if ( v24 >= max_length && !this->fields.servantType && this->fields.currentCushionNum >= max_length )
  {
    v28 = EventInfoJapaneseCushionControl_TypeInfo;
    if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
      v28 = EventInfoJapaneseCushionControl_TypeInfo;
    }
    v32 = EventInfoJapaneseCushionControl__GetServantPosition(this, v28->static_fields->LIMIT_BREAK_CUSHION_NUM, v23);
    v29 = this->fields.servantObjectData;
    if ( !v29 )
      goto LABEL_30;
    GameObjectExtensions__SetLocalPositionY(v29->fields.ServantObject, v32.fields.y, 0);
    EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(this, v30);
  }
}


void EventInfoJapaneseCushionControl__SetupCushionObject(
        EventInfoJapaneseCushionControl_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  EventInfoUIBase_o *v8; // x20
  Il2CppObject *Component_object; // x23
  System_String_o **v10; // x9
  System_String_o **v11; // x8

  v8 = (EventInfoUIBase_o *)this;
  if ( (byte_4C287D4 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_19193/*"event_gauge_img_8036703"*/);
    sub_1C2D490(&StringLiteral_19192/*"event_gauge_img_8036702"*/);
    this = (EventInfoJapaneseCushionControl_o *)sub_1C2D490(&StringLiteral_19191/*"event_gauge_img_8036701"*/);
    byte_4C287D4 = 1;
  }
  if ( !obj )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v10 = (System_String_o **)&StringLiteral_19192/*"event_gauge_img_8036702"*/;
    v11 = (System_String_o **)&StringLiteral_19191/*"event_gauge_img_8036701"*/;
    if ( index % 5 == 4 )
    {
      v10 = (System_String_o **)&StringLiteral_19193/*"event_gauge_img_8036703"*/;
      v11 = (System_String_o **)&StringLiteral_19193/*"event_gauge_img_8036703"*/;
    }
    if ( type == 1 )
      v11 = v10;
    this = (EventInfoJapaneseCushionControl_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                  v8,
                                                  (UISprite_o *)Component_object,
                                                  *v11,
                                                  0);
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[33].methodPtr)(
        Component_object,
        Component_object->klass->vtable[33].method);
      UnityEngine_GameObject__SetActive(obj, 0, 0);
      return;
    }
LABEL_13:
    sub_1C2D6EC(this, obj);
  }
}


void EventInfoJapaneseCushionControl__StartAddedCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentCushionNum; // w1
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  int32_t cushionAddNum; // w8
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x9
  struct UnityEngine_GameObject_array *CushionObjectList; // x9

  currentCushionNum = this->fields.currentCushionNum;
  this->fields.cushionStartAnimIndex = this->fields.beforeCushionNum;
  EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(this, currentCushionNum, v2);
  cushionAddNum = this->fields.cushionAddNum;
  if ( cushionAddNum <= 0 )
  {
    EventInfoJapaneseCushionControl__EndCushionAnim(this, v6);
  }
  else
  {
    if ( this->fields.servantType )
      goto LABEL_6;
    servantObjectData = this->fields.servantObjectData;
    if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0 )
      sub_1C2D6EC(v5, v6);
    if ( this->fields.beforeCushionNum + cushionAddNum < SLODWORD(CushionObjectList->max_length) )
LABEL_6:
      EventInfoJapaneseCushionControl__PlayAddedCushionAnim(this, v6);
    else
      EventInfoJapaneseCushionControl__PlayOverflowCushionAnim(this, v6);
  }
}


void EventInfoJapaneseCushionControl___Initialization_b__30_0(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C2D6EC(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
}


void EventInfoJapaneseCushionControl___PlayAddedCushionAnim_b__36_0(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  EventInfoJapaneseCushionControl_o *v3; // x19
  const MethodInfo *v4; // x1

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData
    || (v3 = this, (this = (EventInfoJapaneseCushionControl_o *)servantObjectData->fields.ServantSprite) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  EventInfoJapaneseCushionControl__DeleteBeforeAnim(v3, v4);
}


int32_t EventInfoJapaneseCushionControl__get_CushionAddNum(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  return this->fields.cushionAddNum;
}


EventUiEntity_o *EventInfoJapaneseCushionControl__get_EventUiEntity(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUiEntity;
}


UnityEngine_GameObject_o *EventInfoJapaneseCushionControl__get_ServantRoot(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData
    || (this = (EventInfoJapaneseCushionControl_o *)GameObjectExtensions__GetParent(
                                                      servantObjectData->fields.ServantObject,
                                                      0)) == 0 )
  {
    sub_1C2D6EC(this, method);
  }
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
}


void EventInfoJapaneseCushionControl_ObjectData___ctor(
        EventInfoJapaneseCushionControl_ObjectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoJapaneseCushionControl___c__DisplayClass35_0___ctor(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoJapaneseCushionControl___c__DisplayClass35_0___PlayOverflowCushionAnim_b__0(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_o *_4__this; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (servantObjectData = _4__this->fields.servantObjectData) == 0
    || (this = (EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *)servantObjectData->fields.ServantSprite) == 0 )
  {
    sub_1C2D6EC(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void EventInfoJapaneseCushionControl___c__DisplayClass35_0___PlayOverflowCushionAnim_b__1(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0
  struct UnityEngine_GameObject_o *animGameObject; // x1
  __int64 v7; // x2
  __int64 v8; // x20
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int max_length; // w9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  animGameObject = this->fields.animGameObject;
  _4__this->fields.beforeAnimObject = animGameObject;
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.beforeAnimObject, (int32_t)animGameObject, v2, v3);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v8 = 0;
  while ( 1 )
  {
    servantObjectData = _4__this->fields.servantObjectData;
    if ( !servantObjectData )
      goto LABEL_10;
    CushionObjectList = servantObjectData->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_10;
    max_length = CushionObjectList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1C2D6F4(_4__this, method, v7);
    _4__this = (struct EventInfoJapaneseCushionControl_o *)CushionObjectList->m_Items[v8];
    if ( _4__this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0);
      _4__this = this->fields.__4__this;
      ++v8;
      if ( _4__this )
        continue;
    }
    goto LABEL_10;
  }
  EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(_4__this, method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_10:
    sub_1C2D6EC(_4__this, method);
  EventInfoJapaneseCushionControl__EndCushionAnim(_4__this, method);
}


void EventInfoJapaneseCushionControl___c__DisplayClass36_0___ctor(
        EventInfoJapaneseCushionControl___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoJapaneseCushionControl___c__DisplayClass36_0___PlayAddedCushionAnim_b__1(
        EventInfoJapaneseCushionControl___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0
  struct UnityEngine_GameObject_o *animGameObject; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (animGameObject = this->fields.animGameObject,
        _4__this->fields.beforeAnimObject = animGameObject,
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.beforeAnimObject, (int32_t)animGameObject, v2, v3),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(_4__this, method);
  }
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(_4__this, method);
}