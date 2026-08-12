void EventInfoJapaneseCushionControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct EventInfoJapaneseCushionControl_StaticFields *static_fields; // x0

  if ( (byte_5971CD9 & 1) == 0 )
  {
    sub_2213A60(&EventInfoJapaneseCushionControl_TypeInfo);
    sub_2213A60(&StringLiteral_5783/*"EVENT_CUSHION_VALUE"*/);
    byte_5971CD9 = 1;
  }
  v7 = StringLiteral_5783/*"EVENT_CUSHION_VALUE"*/;
  static_fields = EventInfoJapaneseCushionControl_TypeInfo->static_fields;
  static_fields->LIMIT_BREAK_CUSHION_NUM = 73;
  static_fields->SAVEKEY_EVENT_CUSHION_VALUE = (struct System_String_o *)v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SAVEKEY_EVENT_CUSHION_VALUE,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventInfoJapaneseCushionControl___ctor(EventInfoJapaneseCushionControl_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoJapaneseCushionControl__CheckEventProgressValueSaveData(
        int32_t eventId,
        int32_t eventUiId,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_5971CD6 & 1) == 0 )
  {
    sub_2213A60(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_5971CD6 = 1;
  }
  if ( !*(&EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
  EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(eventId, eventUiId, method);
  return UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0);
}


void EventInfoJapaneseCushionControl__DeleteBeforeAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_beforeAnimObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *beforeAnimObject; // t1
  __int64 v6; // x1
  MissionNaviTransitionBoardItem_c *klass; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5971CD2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971CD2 = 1;
  }
  beforeAnimObject = this->fields.beforeAnimObject;
  p_beforeAnimObject = (MissionNaviTransitionBoardItem_o *)&this->fields.beforeAnimObject;
  v4 = (UnityEngine_Object_o *)beforeAnimObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = p_beforeAnimObject->klass;
    if ( !p_beforeAnimObject->klass )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)klass,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    klass = (MissionNaviTransitionBoardItem_c *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
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
      v11 = (UnityEngine_Object_o *)p_beforeAnimObject->klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__Destroy_83459800(v11, 0);
      p_beforeAnimObject->klass = 0;
      sub_2213A04(p_beforeAnimObject, 0, v12, v13, v14, v15, v16, v17);
      return;
    }
LABEL_16:
    sub_2213CDC(klass, v6);
  }
}


void EventInfoJapaneseCushionControl__EndAddedCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  int32_t max_length; // w20
  int32_t cushionStartAnimIndex; // w8
  EventInfoJapaneseCushionControl_o *v6; // x19
  int32_t v7; // w8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v8; // x8
  struct UnityEngine_GameObject_array *v9; // x8

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_15;
  CushionObjectList = servantObjectData->fields.CushionObjectList;
  if ( !CushionObjectList )
    goto LABEL_15;
  max_length = CushionObjectList->max_length;
  cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
  v6 = this;
  if ( cushionStartAnimIndex < max_length && this->fields.cushionAddNum >= 1 )
  {
    if ( cushionStartAnimIndex >= (unsigned int)max_length )
      sub_2213CE4(this);
    this = (EventInfoJapaneseCushionControl_o *)CushionObjectList->m_Items[cushionStartAnimIndex];
    if ( !this )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    cushionStartAnimIndex = v6->fields.cushionStartAnimIndex;
  }
  v7 = cushionStartAnimIndex + 1;
  v6->fields.cushionStartAnimIndex = v7;
  if ( v7 < max_length )
    goto LABEL_12;
  v8 = v6->fields.servantObjectData;
  if ( !v8 || (v9 = v8->fields.CushionObjectList) == 0 )
LABEL_15:
    sub_2213CDC(this, method);
  v6->fields.cushionStartAnimIndex = LODWORD(v9->max_length) - 1;
LABEL_12:
  if ( v6->fields.cushionAddNum )
    EventInfoJapaneseCushionControl__PlayAddedCushionAnim(v6, method);
  else
    EventInfoJapaneseCushionControl__EndCushionAnim(v6, method);
}


void EventInfoJapaneseCushionControl__EndCushionAnim(EventInfoJapaneseCushionControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  UnityEngine_GameObject_o *ServantObject; // x20
  struct System_Action_o *animEndAction; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_Vector3_o ServantPosition; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    sub_2213CDC(this, method);
  ServantObject = servantObjectData->fields.ServantObject;
  ServantPosition = EventInfoJapaneseCushionControl__GetServantPosition(this, this->fields.currentCushionNum, v2);
  GameObjectExtensions__SetLocalPosition(ServantObject, ServantPosition, 0);
  animEndAction = this->fields.animEndAction;
  this->fields.cushionAddNum = 0;
  this->fields.animEndAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.animEndAction, 0, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_5971CD4 & 1) == 0 )
  {
    sub_2213A60(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_5971CD4 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    return 0;
  eventId = eventUiEntity->fields.eventId;
  id = eventUiEntity->fields.id;
  if ( !*(&EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, method);
  return EventInfoJapaneseCushionControl__GetEventProgressValueSaveData(eventId, id, 0, v2);
}


int32_t EventInfoJapaneseCushionControl__GetCurrentCushionNum(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  EventInfoJapaneseCushionControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x9
  struct EventUiValueEntity_array *eventUiValueEntityList; // x10
  int max_length; // w8
  int32_t priority; // w9
  EventUiValueEntity_o **m_Items; // x10
  EventUiValueEntity_o *v8; // x11
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8

  v2 = this;
  if ( (byte_5971CD3 & 1) == 0 )
  {
    this = (EventInfoJapaneseCushionControl_o *)sub_2213A60(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_5971CD3 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( eventUiEntity
    && (eventUiValueEntityList = v2->fields.eventUiValueEntityList) != 0
    && (max_length = eventUiValueEntityList->max_length, max_length >= 1) )
  {
    priority = eventUiEntity->fields.priority;
    m_Items = eventUiValueEntityList->m_Items;
    while ( 1 )
    {
      v8 = *m_Items;
      if ( !*m_Items )
        goto LABEL_18;
      if ( priority == v8->fields.priority )
        break;
      --max_length;
      ++m_Items;
      if ( !max_length )
        goto LABEL_10;
    }
    this = (EventInfoJapaneseCushionControl_o *)System_Int32__Parse(v8->fields.value, 0);
    servantObjectData = v2->fields.servantObjectData;
    if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0 )
LABEL_18:
      sub_2213CDC(this, method);
    if ( (int)this >= SLODWORD(CushionObjectList->max_length) )
    {
      this = (EventInfoJapaneseCushionControl_o *)EventInfoJapaneseCushionControl_TypeInfo;
      if ( !*(&EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, method);
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

  if ( (byte_5971CD7 & 1) == 0 )
  {
    sub_2213A60(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_5971CD7 = 1;
  }
  if ( !*(&EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  EventInfoJapaneseCushionControl_c *v11; // x8
  System_String_o *v12; // x19
  struct System_String_o *SAVEKEY_EVENT_CUSHION_VALUE; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v41; // [xsp+8h] [xbp-28h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-24h] BYREF

  v42 = eventId;
  v41 = eventUiId;
  if ( (byte_5971CD5 & 1) == 0 )
  {
    sub_2213A60(&EventInfoJapaneseCushionControl_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_5971CD5 = 1;
  }
  v3 = (System_String_o *)sub_2213B20(string___TypeInfo, 5);
  v11 = EventInfoJapaneseCushionControl_TypeInfo;
  v12 = v3;
  if ( !*(&EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, v4);
    v11 = EventInfoJapaneseCushionControl_TypeInfo;
  }
  if ( !v12 )
    sub_2213CDC(v3, v4);
  if ( !LODWORD(v12[1].klass) )
    goto LABEL_12;
  SAVEKEY_EVENT_CUSHION_VALUE = v11->static_fields->SAVEKEY_EVENT_CUSHION_VALUE;
  v12[1].monitor = SAVEKEY_EVENT_CUSHION_VALUE;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12[1].monitor,
    (int32_t)SAVEKEY_EVENT_CUSHION_VALUE,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( ((__int64)v12[1].klass & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  v20 = StringLiteral_16746/*"_"*/;
  v12[1].fields = (System_String_Fields)StringLiteral_16746/*"_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[1].fields, v20, v14, v15, v16, v17, v18, v19);
  v3 = System_Int32__ToString((int32_t)&v42, 0);
  if ( LODWORD(v12[1].klass) <= 2
    || (v12[2].klass = (System_String_c *)v3,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[2], (int32_t)v3, v21, v22, v23, v24, v25, v26),
        ((__int64)v12[1].klass & 0xFFFFFFFC) == 0)
    || (v33 = StringLiteral_16746/*"_"*/,
        v12[2].monitor = (void *)StringLiteral_16746/*"_"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[2].monitor, v33, v27, v28, v29, v30, v31, v32),
        v3 = System_Int32__ToString((int32_t)&v41, 0),
        LODWORD(v12[1].klass) <= 4) )
  {
LABEL_12:
    sub_2213CE4(v3);
  }
  v12[2].fields = (System_String_Fields)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[2].fields, (int32_t)v3, v34, v35, v36, v37, v38, v39);
  return System_String__Concat_75697120((System_String_array *)v12, 0);
}


UnityEngine_Vector3_o EventInfoJapaneseCushionControl__GetLordUpEffectEndedPosition(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t beforeCushionNum; // w11
  int32_t max_length; // w10
  unsigned int v7; // w9
  float x; // s0
  float y; // s1
  UnityEngine_Vector3_o v13; // 0:kr00_12.12
  UnityEngine_Vector3_o LocalPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0 )
    sub_2213CDC(this, method);
  beforeCushionNum = this->fields.beforeCushionNum;
  max_length = CushionObjectList->max_length;
  v7 = beforeCushionNum - 1;
  if ( beforeCushionNum < 1 || beforeCushionNum > max_length )
  {
    if ( max_length )
    {
      LocalPosition = GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[0], 0);
      x = LocalPosition.fields.x;
      result.fields.z = LocalPosition.fields.z;
      y = LocalPosition.fields.y - this->fields.servantStepHeight;
      goto LABEL_9;
    }
LABEL_11:
    sub_2213CE4(this);
  }
  if ( v7 >= max_length )
    goto LABEL_11;
  v13 = GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[v7], 0);
  x = v13.fields.x;
  y = v13.fields.y;
  result.fields.z = v13.fields.z;
LABEL_9:
  result.fields.x = x + this->fields.lordUpEffectOffsetX;
  result.fields.y = y + this->fields.lordUpEffectOffsetY;
  return result;
}


UnityEngine_Vector3_o EventInfoJapaneseCushionControl__GetLordUpEffectStartedPosition(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.lordUpEffectStartedPosition.fields.x;
  result.fields.y = this->fields.lordUpEffectStartedPosition.fields.y;
  result.fields.z = this->fields.lordUpEffectStartedPosition.fields.z;
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
    sub_2213CDC(this, *(_QWORD *)&index);
  max_length = CushionObjectList->max_length;
  v6 = max_length - 1;
  if ( max_length > index )
    v6 = index;
  if ( v6 >= (unsigned int)max_length )
    sub_2213CE4(this);
  return GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[v6], 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o EventInfoJapaneseCushionControl__GetServantPosition(
        EventInfoJapaneseCushionControl_o *this,
        int32_t cushionNum,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    sub_2213CDC(this, *(_QWORD *)&cushionNum);
  LocalPosition = GameObjectExtensions__GetLocalPosition(servantObjectData->fields.ServantObject, 0);
  result.fields.x = LocalPosition.fields.x;
  result.fields.z = LocalPosition.fields.z;
  result.fields.y = (float)(this->fields.servantStepHeight * (float)(cushionNum - 1))
                  + this->fields.servantPositionOffsetY;
  return result;
}


void EventInfoJapaneseCushionControl__Initialization(
        EventInfoJapaneseCushionControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UIWidget_o *ServantSprite; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  _QWORD *genericContainerHandle; // x21
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v14; // x21
  UISprite_o *bgSprite; // x1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v17; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v18; // x8
  __int64 *v19; // x9
  struct EventInfoJapaneseCushionControl_ObjectData_o *v20; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v21; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v22; // x8
  const MethodInfo *v23; // x4
  struct EventInfoJapaneseCushionControl_ObjectData_o *v24; // x8
  unsigned __int64 v25; // x20
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v28; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  unsigned __int64 v30; // x9

  if ( (byte_5971CCD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_20093/*"event_gauge_bg_8036702"*/);
    sub_2213A60(&StringLiteral_20101/*"event_gauge_sd_8036702"*/);
    sub_2213A60(&StringLiteral_20091/*"event_gauge_base_8036702"*/);
    sub_2213A60(&StringLiteral_20092/*"event_gauge_bg_8036701"*/);
    sub_2213A60(&StringLiteral_20090/*"event_gauge_base_8036701"*/);
    sub_2213A60(&StringLiteral_20185/*"event_title_80367"*/);
    sub_2213A60(&StringLiteral_20100/*"event_gauge_sd_8036701"*/);
    byte_5971CCD = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, entity);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    ServantSprite = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, entity);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v14, 0);
  bgSprite = this->fields.bgSprite;
  if ( this->fields.servantType == 1 )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_20091/*"event_gauge_base_8036702"*/,
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
                                    (System_String_o *)StringLiteral_20101/*"event_gauge_sd_8036702"*/,
                                    0);
    v17 = this->fields.servantObjectData;
    if ( !v17 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)v17->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))ServantSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._33_MakePixelPerfect.method);
    v18 = this->fields.servantObjectData;
    if ( !v18 )
      goto LABEL_45;
    v19 = &StringLiteral_20093/*"event_gauge_bg_8036702"*/;
  }
  else
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_20090/*"event_gauge_base_8036701"*/,
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
      (System_String_o *)StringLiteral_20185/*"event_title_80367"*/,
      0);
    ServantSprite = (UIWidget_o *)this->fields.titleSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))ServantSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._33_MakePixelPerfect.method);
    v20 = this->fields.servantObjectData;
    if ( !v20 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                    (EventInfoUIBase_o *)this,
                                    v20->fields.ServantSprite,
                                    (System_String_o *)StringLiteral_20100/*"event_gauge_sd_8036701"*/,
                                    0);
    v21 = this->fields.servantObjectData;
    if ( !v21 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)v21->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))ServantSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._33_MakePixelPerfect.method);
    v18 = this->fields.servantObjectData;
    if ( !v18 )
      goto LABEL_45;
    v19 = &StringLiteral_20092/*"event_gauge_bg_8036701"*/;
  }
  ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                  (EventInfoUIBase_o *)this,
                                  v18->fields.NameSprite,
                                  (System_String_o *)*v19,
                                  0);
  v22 = this->fields.servantObjectData;
  if ( !v22 )
    goto LABEL_45;
  ServantSprite = (UIWidget_o *)v22->fields.NameSprite;
  if ( !ServantSprite )
    goto LABEL_45;
  ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))ServantSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                  ServantSprite,
                                  ServantSprite->klass->vtable._33_MakePixelPerfect.method);
  v24 = this->fields.servantObjectData;
  if ( !v24 )
    goto LABEL_45;
  v25 = 0;
  while ( 1 )
  {
    CushionObjectList = v24->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_45;
    max_length_low = LODWORD(CushionObjectList->max_length);
    if ( (__int64)v25 >= (int)max_length_low )
      break;
    if ( v25 >= max_length_low )
LABEL_46:
      sub_2213CE4(ServantSprite);
    EventInfoJapaneseCushionControl__SetupCushionObject(
      this,
      CushionObjectList->m_Items[v25],
      this->fields.servantType,
      v25,
      v23);
    v24 = this->fields.servantObjectData;
    ++v25;
    if ( !v24 )
      goto LABEL_45;
  }
  if ( !this->fields.servantType )
  {
    v28 = 0;
    do
    {
      ExtentionCushionObjectList = v24->fields.ExtentionCushionObjectList;
      if ( !ExtentionCushionObjectList )
        break;
      v30 = LODWORD(ExtentionCushionObjectList->max_length);
      if ( (__int64)v28 >= (int)v30 )
        return;
      if ( v28 >= v30 )
        goto LABEL_46;
      EventInfoJapaneseCushionControl__SetupCushionObject(
        this,
        ExtentionCushionObjectList->m_Items[v28],
        this->fields.servantType,
        v28,
        v23);
      v24 = this->fields.servantObjectData;
      ++v28;
    }
    while ( v24 );
LABEL_45:
    sub_2213CDC(ServantSprite, entity);
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
    sub_2213CDC(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoJapaneseCushionControl__OnDisable(EventInfoJapaneseCushionControl_o *this, const MethodInfo *method)
{
  UIWidget_o *v3; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  void *genericContainerHandle; // x19

  if ( (byte_5971CCC & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5971CCC = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v3 = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      v3 = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v3->fields.onChange->klass;
    if ( !klass
      || (genericContainerHandle = klass->_2.genericContainerHandle) == 0
      || (v3 = (UIWidget_o *)*((_QWORD *)genericContainerHandle + 5)) == 0
      || (UIWidget__set_depth(v3, 8, 0), (v3 = (UIWidget_o *)*((_QWORD *)genericContainerHandle + 4)) == 0) )
    {
      sub_2213CDC(v3, method);
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
  System_String_o **v6; // x9
  System_String_o **v7; // x10
  int v8; // w8
  System_String_o **v9; // x8
  System_String_o *v10; // x20
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  float v12; // s8
  __int64 v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o **v20; // x8
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o **v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x23
  UnityEngine_GameObject_o *v31; // x23
  UnityEngine_GameObject_o *ServantRoot; // x0
  __int64 v33; // x1
  Il2CppObject *Component_object; // x22
  System_Action_o *v35; // x23
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Action_o *v42; // x23
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x1
  Il2CppObject *v50; // x21
  __int64 v51; // x1
  UnityEngine_Object_o *Clip; // x22
  UnityEngine_GameObject_o *v53; // x0
  const MethodInfo *v54; // x1
  float y; // s1

  if ( (byte_5971CD1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__);
    sub_2213A60(&EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo);
    sub_2213A60(&StringLiteral_19676/*"ef_bunyan"*/);
    sub_2213A60(&StringLiteral_19658/*"ef_anning2"*/);
    sub_2213A60(&StringLiteral_19657/*"ef_anning1"*/);
    sub_2213A60(&StringLiteral_19656/*"ef_anning"*/);
    sub_2213A60(&StringLiteral_19678/*"ef_bunyan2"*/);
    sub_2213A60(&StringLiteral_19677/*"ef_bunyan1"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971CD1 = 1;
  }
  servantType = this->fields.servantType;
  if ( !servantType )
  {
    cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
    v6 = (System_String_o **)&StringLiteral_19678/*"ef_bunyan2"*/;
    v7 = (System_String_o **)&StringLiteral_19677/*"ef_bunyan1"*/;
    v8 = cushionStartAnimIndex % 5;
LABEL_7:
    if ( v8 == 4 )
      v9 = v6;
    else
      v9 = v7;
    goto LABEL_11;
  }
  if ( servantType == 1 )
  {
    cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
    v6 = (System_String_o **)&StringLiteral_19658/*"ef_anning2"*/;
    v7 = (System_String_o **)&StringLiteral_19657/*"ef_anning1"*/;
    v8 = cushionStartAnimIndex % 5;
    goto LABEL_7;
  }
  v9 = (System_String_o **)&StringLiteral_1/*""*/;
  cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
LABEL_11:
  v10 = *v9;
  this->fields.cushionAddNum = (this->fields.cushionAddNum - 1) & ~((this->fields.cushionAddNum - 1) >> 31);
  y = EventInfoJapaneseCushionControl__GetServantAnimPosition(this, cushionStartAnimIndex, v2).fields.y;
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_35;
  v12 = y;
  GameObjectExtensions__GetLocalPositionX(servantObjectData->fields.ServantObject, 0);
  if ( System_String__IsNullOrEmpty(v10, 0) )
    goto LABEL_34;
  v13 = sub_2213CCC(EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_35;
  *(_QWORD *)(v13 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  if ( this->fields.servantType )
    v20 = (System_String_o **)&StringLiteral_19656/*"ef_anning"*/;
  else
    v20 = (System_String_o **)&StringLiteral_19676/*"ef_bunyan"*/;
  v21 = EventInfoUIBase__InstantiateFromEventUIAssetData((EventInfoUIBase_o *)this, *v20, 0);
  *(_QWORD *)(v13 + 16) = v21;
  v22 = (UnityEngine_GameObject_o **)(v13 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)v21, v23, v24, v25, v26, v27, v28);
  v30 = *(UnityEngine_Object_o **)(v13 + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( !UnityEngine_Object__op_Inequality(v30, 0, 0) )
    goto LABEL_34;
  v31 = *v22;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v54);
  GameObjectExtensions__SafeSetParent_42897308(v31, ServantRoot, 0);
  GameObjectExtensions__SetLocalPositionY(*v22, v12 - this->fields.servantStepHeight, 0);
  v53 = *v22;
  if ( !*v22 )
    goto LABEL_35;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v53,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    goto LABEL_34;
  v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)this,
    Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__,
    0);
  if ( !Component_object )
    goto LABEL_35;
  Component_object[2].klass = (Il2CppClass *)v35;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&Component_object[2], (int32_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v13,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__,
    0);
  Component_object[2].monitor = v42;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&Component_object[2].monitor,
    (int32_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v53 = *(UnityEngine_GameObject_o **)(v13 + 16);
  if ( !v53 )
    goto LABEL_35;
  v50 = UnityEngine_GameObject__GetComponent_object_(
          v53,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  v53 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v50, 0, 0);
  if ( ((unsigned __int8)v53 & 1) == 0 )
    goto LABEL_34;
  if ( !v50 )
LABEL_35:
    sub_2213CDC(v53, v54);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v50, v10, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  if ( UnityEngine_Object__op_Inequality(Clip, 0, 0) )
  {
    UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v50, v10, 0);
    return;
  }
LABEL_34:
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(this, v54);
}


void EventInfoJapaneseCushionControl__PlayAnim(
        EventInfoJapaneseCushionControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  if ( type == 1 )
  {
    this->fields.animEndAction = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.animEndAction,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    EventInfoJapaneseCushionControl__StartAddedCushionAnim(this, v9);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2
  float y; // s8
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o **v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x22
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_GameObject_o *ServantRoot; // x0
  __int64 v26; // x1
  Il2CppObject *Component_object; // x21
  System_Action_o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Action_o *v35; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x20
  __int64 v43; // x1
  Il2CppObject *v44; // x21
  __int64 v45; // x1
  UnityEngine_Object_o *Clip; // x22

  if ( (byte_5971CD0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__);
    sub_2213A60(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__);
    sub_2213A60(&EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo);
    sub_2213A60(&StringLiteral_19676/*"ef_bunyan"*/);
    sub_2213A60(&StringLiteral_19679/*"ef_bunyan99"*/);
    byte_5971CD0 = 1;
  }
  v3 = sub_2213CCC(EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_22;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  y = EventInfoJapaneseCushionControl__GetServantAnimPosition(this, this->fields.beforeCushionNum, v12).fields.y;
  v14 = EventInfoUIBase__InstantiateFromEventUIAssetData(
          (EventInfoUIBase_o *)this,
          (System_String_o *)StringLiteral_19676/*"ef_bunyan"*/,
          0);
  *(_QWORD *)(v3 + 24) = v14;
  v15 = (UnityEngine_GameObject_o **)(v3 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v14, v16, v17, v18, v19, v20, v21);
  v23 = *(UnityEngine_Object_o **)(v3 + 24);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( !UnityEngine_Object__op_Inequality(v23, 0, 0) )
    goto LABEL_21;
  v24 = *v15;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v5);
  GameObjectExtensions__SafeSetParent_42897308(v24, ServantRoot, 0);
  GameObjectExtensions__SetLocalPositionY(*v15, y - this->fields.servantStepHeight, 0);
  v4 = *v15;
  if ( !*v15 )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v4,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    goto LABEL_21;
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v3,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__,
    0);
  if ( !Component_object )
    goto LABEL_22;
  Component_object[2].klass = (Il2CppClass *)v28;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&Component_object[2], (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v3,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__,
    0);
  Component_object[2].monitor = v35;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&Component_object[2].monitor,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v4 = *(UnityEngine_GameObject_o **)(v3 + 24);
  if ( !v4 )
    goto LABEL_22;
  v42 = (System_String_o *)StringLiteral_19679/*"ef_bunyan99"*/;
  v44 = UnityEngine_GameObject__GetComponent_object_(
          v4,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  v4 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
    goto LABEL_21;
  if ( !v44 )
LABEL_22:
    sub_2213CDC(v4, v5);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v44, v42, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  if ( UnityEngine_Object__op_Inequality(Clip, 0, 0) )
  {
    UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v44, v42, 0);
    return;
  }
LABEL_21:
  EventInfoJapaneseCushionControl__EndCushionAnim(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(
        EventInfoJapaneseCushionControl_o *this,
        int32_t cushionNum,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t id; // w21
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_5971CD8 & 1) == 0 )
  {
    sub_2213A60(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_5971CD8 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
  {
    eventId = eventUiEntity->fields.eventId;
    id = eventUiEntity->fields.id;
    if ( !*(&EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&cushionNum);
    EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(eventId, id, method);
    UnityEngine_PlayerPrefs__SetInt(EventProgressValueSaveKey, cushionNum, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  EventInfoJapaneseCushionControl_o *v3; // x19
  __int64 v4; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  int max_length; // w9

  if ( this->fields.servantType != 1 )
  {
    servantObjectData = this->fields.servantObjectData;
    v3 = this;
    if ( servantObjectData )
    {
      v4 = 0;
      do
      {
        ExtentionCushionObjectList = servantObjectData->fields.ExtentionCushionObjectList;
        if ( !ExtentionCushionObjectList )
          break;
        max_length = ExtentionCushionObjectList->max_length;
        if ( (int)v4 >= max_length )
          return;
        if ( (unsigned int)v4 >= max_length )
          sub_2213CE4(this);
        this = (EventInfoJapaneseCushionControl_o *)ExtentionCushionObjectList->m_Items[v4];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        servantObjectData = v3->fields.servantObjectData;
        ++v4;
      }
      while ( servantObjectData );
    }
    sub_2213CDC(this, method);
  }
}


void EventInfoJapaneseCushionControl__Setup(
        EventInfoJapaneseCushionControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *CurrentCushionNum; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t id; // w21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  int32_t beforeCushionNum; // w8
  int32_t v20; // w0
  const MethodInfo *v21; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t max_length; // w20
  int32_t v25; // w1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v26; // x8
  const MethodInfo *v27; // x2
  int32_t v28; // w8
  __int64 v29; // x21
  struct EventInfoJapaneseCushionControl_ObjectData_o *v30; // x8
  struct UnityEngine_GameObject_array *v31; // x8
  EventInfoJapaneseCushionControl_c *v32; // x0
  struct EventInfoJapaneseCushionControl_ObjectData_o *v33; // x8
  const MethodInfo *v34; // x1
  float y; // s1
  float v36; // s1

  if ( (byte_5971CCE & 1) == 0 )
  {
    sub_2213A60(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_5971CCE = 1;
  }
  this->fields.eventUiValueEntityList = entitys;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiValueEntityList,
    (int32_t)entitys,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  this->fields.cushionAddNum = 0;
  if ( !eventUiEntity )
    goto LABEL_30;
  eventId = eventUiEntity->fields.eventId;
  id = eventUiEntity->fields.id;
  if ( !*(&EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, v11);
  if ( EventInfoJapaneseCushionControl__CheckEventProgressValueSaveData(eventId, id, v12) )
  {
    this->fields.beforeCushionNum = EventInfoJapaneseCushionControl__GetBeforeCushionNum(this, v16);
    CurrentCushionNum = (UnityEngine_GameObject_o *)EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v17);
    beforeCushionNum = this->fields.beforeCushionNum;
    this->fields.currentCushionNum = (int)CurrentCushionNum;
    this->fields.cushionAddNum = ((_DWORD)CurrentCushionNum - beforeCushionNum)
                               & ~(((int)CurrentCushionNum - beforeCushionNum) >> 31);
  }
  else
  {
    v20 = EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v16);
    this->fields.beforeCushionNum = v20;
    this->fields.currentCushionNum = v20;
    EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(this, v20, v21);
  }
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_30;
  CushionObjectList = servantObjectData->fields.CushionObjectList;
  if ( !CushionObjectList )
    goto LABEL_30;
  max_length = CushionObjectList->max_length;
  v25 = this->fields.beforeCushionNum >= max_length
      ? LODWORD(CushionObjectList->max_length)
      : this->fields.beforeCushionNum;
  this->fields.beforeCushionNum = v25;
  y = EventInfoJapaneseCushionControl__GetServantPosition(this, v25, v18).fields.y;
  v26 = this->fields.servantObjectData;
  if ( !v26 )
    goto LABEL_30;
  GameObjectExtensions__SetLocalPositionY(v26->fields.ServantObject, y, 0);
  v28 = this->fields.beforeCushionNum;
  if ( v28 >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      v30 = this->fields.servantObjectData;
      if ( !v30 )
        break;
      v31 = v30->fields.CushionObjectList;
      if ( !v31 )
        break;
      if ( (unsigned int)v29 >= LODWORD(v31->max_length) )
        sub_2213CE4(CurrentCushionNum);
      CurrentCushionNum = v31->m_Items[v29];
      if ( !CurrentCushionNum )
        break;
      UnityEngine_GameObject__SetActive(CurrentCushionNum, 1, 0);
      v28 = this->fields.beforeCushionNum;
      if ( (int)++v29 >= v28 )
        goto LABEL_22;
    }
LABEL_30:
    sub_2213CDC(CurrentCushionNum, v11);
  }
LABEL_22:
  if ( !this->fields.servantType && v28 >= max_length && this->fields.currentCushionNum >= max_length )
  {
    v32 = EventInfoJapaneseCushionControl_TypeInfo;
    if ( !*(&EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, v11);
      v32 = EventInfoJapaneseCushionControl_TypeInfo;
    }
    v36 = EventInfoJapaneseCushionControl__GetServantPosition(this, v32->static_fields->LIMIT_BREAK_CUSHION_NUM, v27).fields.y;
    v33 = this->fields.servantObjectData;
    if ( !v33 )
      goto LABEL_30;
    GameObjectExtensions__SetLocalPositionY(v33->fields.ServantObject, v36, 0);
    EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(this, v34);
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
  __int64 v9; // x1
  Il2CppObject *Component_object; // x23
  System_String_o **v11; // x9
  System_String_o **v12; // x8

  v8 = (EventInfoUIBase_o *)this;
  if ( (byte_5971CCF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_20099/*"event_gauge_img_8036703"*/);
    sub_2213A60(&StringLiteral_20098/*"event_gauge_img_8036702"*/);
    this = (EventInfoJapaneseCushionControl_o *)sub_2213A60(&StringLiteral_20097/*"event_gauge_img_8036701"*/);
    byte_5971CCF = 1;
  }
  if ( !obj )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v11 = (System_String_o **)&StringLiteral_20098/*"event_gauge_img_8036702"*/;
    if ( type != 1 )
      v11 = (System_String_o **)&StringLiteral_20097/*"event_gauge_img_8036701"*/;
    if ( index % 5 == 4 )
      v12 = (System_String_o **)&StringLiteral_20099/*"event_gauge_img_8036703"*/;
    else
      v12 = v11;
    this = (EventInfoJapaneseCushionControl_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                  v8,
                                                  (UISprite_o *)Component_object,
                                                  *v12,
                                                  0);
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[33].methodPtr)(
        Component_object,
        Component_object->klass->vtable[33].method);
      UnityEngine_GameObject__SetActive(obj, 0, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(this, obj);
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
      sub_2213CDC(v5, v6);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
}


void EventInfoJapaneseCushionControl___c__DisplayClass35_0___PlayOverflowCushionAnim_b__1(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0
  struct UnityEngine_GameObject_o *animGameObject; // x1
  __int64 v11; // x20
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int max_length; // w9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  animGameObject = this->fields.animGameObject;
  _4__this->fields.beforeAnimObject = animGameObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.beforeAnimObject,
    (int32_t)animGameObject,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v11 = 0;
  while ( 1 )
  {
    servantObjectData = _4__this->fields.servantObjectData;
    if ( !servantObjectData )
      goto LABEL_10;
    CushionObjectList = servantObjectData->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_10;
    max_length = CushionObjectList->max_length;
    if ( (int)v11 >= max_length )
      break;
    if ( (unsigned int)v11 >= max_length )
      sub_2213CE4(_4__this);
    _4__this = (struct EventInfoJapaneseCushionControl_o *)CushionObjectList->m_Items[v11];
    if ( _4__this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0);
      _4__this = this->fields.__4__this;
      ++v11;
      if ( _4__this )
        continue;
    }
    goto LABEL_10;
  }
  EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(_4__this, method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_10:
    sub_2213CDC(_4__this, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0
  struct UnityEngine_GameObject_o *animGameObject; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (animGameObject = this->fields.animGameObject,
        _4__this->fields.beforeAnimObject = animGameObject,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.beforeAnimObject,
          (int32_t)animGameObject,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(_4__this, method);
}