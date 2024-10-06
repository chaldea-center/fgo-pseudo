void __fastcall EventInfoJapaneseCushionControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct EventInfoJapaneseCushionControl_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_4A7149F & 1) == 0 )
  {
    sub_1B90010(&EventInfoJapaneseCushionControl_TypeInfo, v1);
    sub_1B90010(&StringLiteral_5601/*"EVENT_CUSHION_VALUE"*/, v4);
    byte_4A7149F = 1;
  }
  static_fields = EventInfoJapaneseCushionControl_TypeInfo->static_fields;
  static_fields->LIMIT_BREAK_CUSHION_NUM = 73;
  v6 = StringLiteral_5601/*"EVENT_CUSHION_VALUE"*/;
  static_fields->SAVEKEY_EVENT_CUSHION_VALUE = (struct System_String_o *)StringLiteral_5601/*"EVENT_CUSHION_VALUE"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->SAVEKEY_EVENT_CUSHION_VALUE, v6, v2, v3);
}


void __fastcall EventInfoJapaneseCushionControl___ctor(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoJapaneseCushionControl__CheckEventProgressValueSaveData(
        int32_t eventId,
        int32_t eventUiId,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_4A7149C & 1) == 0 )
  {
    sub_1B90010(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    byte_4A7149C = 1;
  }
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
  EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(eventId, eventUiId, method);
  return UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl__DeleteBeforeAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_beforeAnimObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *beforeAnimObject; // t1
  __int64 v7; // x1
  ServantStatusBattleListViewItem_c *klass; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A71498 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    byte_4A71498 = 1;
  }
  beforeAnimObject = this->fields.beforeAnimObject;
  p_beforeAnimObject = (ServantStatusBattleListViewItem_o *)&this->fields.beforeAnimObject;
  v5 = (UnityEngine_Object_o *)beforeAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = p_beforeAnimObject->klass;
    if ( !p_beforeAnimObject->klass )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)klass,
                         (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    klass = (ServantStatusBattleListViewItem_c *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
    if ( ((unsigned __int8)klass & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_16;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_object, 0LL);
    }
    klass = p_beforeAnimObject->klass;
    if ( p_beforeAnimObject->klass )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0LL);
      v10 = (UnityEngine_Object_o *)p_beforeAnimObject->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69539440(v10, 0LL);
      p_beforeAnimObject->klass = 0LL;
      sub_1B8FFB4(p_beforeAnimObject, 0, v11, v12);
      return;
    }
LABEL_16:
    sub_1B9026C(klass, v7);
  }
}


void __fastcall EventInfoJapaneseCushionControl__EndAddedCushionAnim(
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
      sub_1B90274(this, method);
    this = (EventInfoJapaneseCushionControl_o *)CushionObjectList->m_Items[cushionStartAnimIndex];
    if ( !this )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    cushionStartAnimIndex = v6->fields.cushionStartAnimIndex;
  }
  v7 = cushionStartAnimIndex + 1;
  v6->fields.cushionStartAnimIndex = v7;
  if ( v7 < max_length )
    goto LABEL_12;
  v8 = v6->fields.servantObjectData;
  if ( !v8 || (v9 = v8->fields.CushionObjectList) == 0LL )
LABEL_15:
    sub_1B9026C(this, method);
  v6->fields.cushionStartAnimIndex = v9->max_length - 1;
LABEL_12:
  if ( v6->fields.cushionAddNum )
    EventInfoJapaneseCushionControl__PlayAddedCushionAnim(v6, method);
  else
    EventInfoJapaneseCushionControl__EndCushionAnim(v6, method);
}


void __fastcall EventInfoJapaneseCushionControl__EndCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  UnityEngine_GameObject_o *ServantObject; // x20
  struct System_Action_o *animEndAction; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Vector3_o ServantPosition; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    sub_1B9026C(this, method);
  ServantObject = servantObjectData->fields.ServantObject;
  ServantPosition = EventInfoJapaneseCushionControl__GetServantPosition(this, this->fields.currentCushionNum, v2);
  GameObjectExtensions__SetLocalPosition(ServantObject, ServantPosition, 0LL);
  animEndAction = this->fields.animEndAction;
  this->fields.cushionAddNum = 0;
  this->fields.animEndAction = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.animEndAction, 0, v7, v8);
  if ( animEndAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))animEndAction->fields.m_target)(
      animEndAction->fields.original_method_info,
      *(_QWORD *)&animEndAction->fields.extra_arg);
}


int32_t __fastcall EventInfoJapaneseCushionControl__GetBeforeCushionNum(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19
  int32_t id; // w20

  if ( (byte_4A7149A & 1) == 0 )
  {
    sub_1B90010(&EventInfoJapaneseCushionControl_TypeInfo, method);
    byte_4A7149A = 1;
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


int32_t __fastcall EventInfoJapaneseCushionControl__GetCurrentCushionNum(
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
  if ( (byte_4A71499 & 1) == 0 )
  {
    this = (EventInfoJapaneseCushionControl_o *)sub_1B90010(&EventInfoJapaneseCushionControl_TypeInfo, method);
    byte_4A71499 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( eventUiEntity
    && (eventUiValueEntityList = v2->fields.eventUiValueEntityList) != 0LL
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
    this = (EventInfoJapaneseCushionControl_o *)System_Int32__Parse(v8->fields.value, 0LL);
    servantObjectData = v2->fields.servantObjectData;
    if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
LABEL_18:
      sub_1B9026C(this, method);
    if ( (int)this >= (signed int)CushionObjectList->max_length )
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
int32_t __fastcall EventInfoJapaneseCushionControl__GetEventProgressValueSaveData(
        int32_t eventId,
        int32_t eventUiId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_4A7149D & 1) == 0 )
  {
    sub_1B90010(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    byte_4A7149D = 1;
  }
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
  EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(
                                eventId,
                                eventUiId,
                                *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(
        int32_t eventId,
        int32_t eventUiId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  EventInfoJapaneseCushionControl_c *v9; // x8
  System_String_o *v10; // x19
  struct System_String_o *SAVEKEY_EVENT_CUSHION_VALUE; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v23 = eventUiId;
  v24 = eventId;
  if ( (byte_4A7149B & 1) == 0 )
  {
    sub_1B90010(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    sub_1B90010(&string___TypeInfo, v3);
    sub_1B90010(&StringLiteral_16148/*"_"*/, v4);
    byte_4A7149B = 1;
  }
  v5 = (System_String_o *)sub_1B900B8(string___TypeInfo, 5LL);
  v9 = EventInfoJapaneseCushionControl_TypeInfo;
  v10 = v5;
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
    v9 = EventInfoJapaneseCushionControl_TypeInfo;
  }
  if ( !v10 )
    sub_1B9026C(v5, v6);
  if ( !LODWORD(v10[1].klass) )
    goto LABEL_12;
  SAVEKEY_EVENT_CUSHION_VALUE = v9->static_fields->SAVEKEY_EVENT_CUSHION_VALUE;
  v10[1].monitor = SAVEKEY_EVENT_CUSHION_VALUE;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10[1].monitor, (int32_t)SAVEKEY_EVENT_CUSHION_VALUE, v7, v8);
  if ( LODWORD(v10[1].klass) <= 1 )
    goto LABEL_12;
  v14 = StringLiteral_16148/*"_"*/;
  v10[1].fields = (System_String_Fields)StringLiteral_16148/*"_"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10[1].fields, v14, v12, v13);
  v5 = System_Int32__ToString((int32_t)&v24, 0LL);
  if ( LODWORD(v10[1].klass) <= 2
    || (v10[2].klass = (System_String_c *)v5,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10[2], (int32_t)v5, v15, v16),
        LODWORD(v10[1].klass) <= 3)
    || (v19 = StringLiteral_16148/*"_"*/,
        v10[2].monitor = (void *)StringLiteral_16148/*"_"*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10[2].monitor, v19, v17, v18),
        v5 = System_Int32__ToString((int32_t)&v23, 0LL),
        LODWORD(v10[1].klass) <= 4) )
  {
LABEL_12:
    sub_1B90274(v5, v6);
  }
  v10[2].fields = (System_String_Fields)v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10[2].fields, (int32_t)v5, v20, v21);
  return System_String__Concat_61800620((System_String_array *)v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall EventInfoJapaneseCushionControl__GetLordUpEffectEndedPosition(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t beforeCushionNum; // w11
  int32_t max_length; // w10
  unsigned int v7; // w9
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s1
  float v12; // s0
  float v13; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
    sub_1B9026C(this, method);
  beforeCushionNum = this->fields.beforeCushionNum;
  max_length = CushionObjectList->max_length;
  v7 = beforeCushionNum - 1;
  if ( beforeCushionNum < 1 || beforeCushionNum > max_length )
  {
    if ( max_length )
    {
      *(UnityEngine_Vector3_o *)&v8 = GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[0], 0LL);
      v9 = v11 - this->fields.servantStepHeight;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B90274(this, method);
  }
  if ( v7 >= max_length )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v8 = GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[v7], 0LL);
LABEL_9:
  v12 = v8 + this->fields.lordUpEffectOffsetX;
  v13 = v9 + this->fields.lordUpEffectOffsetY;
  result.fields.z = v10;
  result.fields.y = v13;
  result.fields.x = v12;
  return result;
}


UnityEngine_Vector3_o __fastcall EventInfoJapaneseCushionControl__GetLordUpEffectStartedPosition(
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
UnityEngine_Vector3_o __fastcall EventInfoJapaneseCushionControl__GetServantAnimPosition(
        EventInfoJapaneseCushionControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t max_length; // w10
  int32_t v6; // w9
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
    sub_1B9026C(this, index);
  max_length = CushionObjectList->max_length;
  v6 = max_length - 1;
  if ( max_length > index )
    v6 = index;
  if ( v6 >= (unsigned int)max_length )
    sub_1B90274(this, *(_QWORD *)&index);
  *(UnityEngine_Vector3_o *)&v7 = GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[v6], 0LL);
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall EventInfoJapaneseCushionControl__GetServantPosition(
        EventInfoJapaneseCushionControl_o *this,
        int32_t cushionNum,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  float v6; // s0
  float v7; // s2
  float v8; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    sub_1B9026C(this, cushionNum);
  *(UnityEngine_Vector3_o *)&v6 = GameObjectExtensions__GetLocalPosition(servantObjectData->fields.ServantObject, 0LL);
  v8 = (float)(this->fields.servantStepHeight * (float)(cushionNum - 1)) + this->fields.servantPositionOffsetY;
  result.fields.z = v7;
  result.fields.y = v8;
  result.fields.x = v6;
  return result;
}


void __fastcall EventInfoJapaneseCushionControl__Initialization(
        EventInfoJapaneseCushionControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UIWidget_o *ServantSprite; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v17; // x21
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v19; // x21
  UISprite_o *bgSprite; // x1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v22; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v23; // x8
  UISprite_o *NameSprite; // x1
  __int64 *v25; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v26; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v27; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v28; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v29; // x8
  const MethodInfo *v30; // x4
  struct EventInfoJapaneseCushionControl_ObjectData_o *v31; // x8
  unsigned __int64 v32; // x20
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v35; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  unsigned __int64 v37; // x9

  if ( (byte_4A71493 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, entity);
    sub_1B90010(&Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, v6);
    sub_1B90010(&TerminalSceneComponent_TypeInfo, v7);
    sub_1B90010(&StringLiteral_19207/*"event_gauge_bg_8036702"*/, v8);
    sub_1B90010(&StringLiteral_19215/*"event_gauge_sd_8036702"*/, v9);
    sub_1B90010(&StringLiteral_19205/*"event_gauge_base_8036702"*/, v10);
    sub_1B90010(&StringLiteral_19206/*"event_gauge_bg_8036701"*/, v11);
    sub_1B90010(&StringLiteral_19204/*"event_gauge_base_8036701"*/, v12);
    sub_1B90010(&StringLiteral_19299/*"event_title_80367"*/, v13);
    sub_1B90010(&StringLiteral_19214/*"event_gauge_sd_8036701"*/, v14);
    byte_4A71493 = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A6AF7D )
    {
      sub_1B90010(&TerminalSceneComponent_TypeInfo, entity);
      byte_4A6AF7D = 1;
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
    v17 = *(_QWORD *)&klass->_2.instance_size;
    if ( !v17 )
      goto LABEL_45;
    ServantSprite = *(UIWidget_o **)(v17 + 40);
    if ( !ServantSprite )
      goto LABEL_45;
    UIWidget__set_depth(ServantSprite, this->fields.titleBackButtonDepth + 2, 0LL);
    ServantSprite = *(UIWidget_o **)(v17 + 32);
    if ( !ServantSprite )
      goto LABEL_45;
    UIWidget__set_depth(ServantSprite, this->fields.titleBackButtonDepth, 0LL);
  }
  this->fields.eventUiEntity = entity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  eventUiEntity = this->fields.eventUiEntity;
  v19 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v19, 0LL);
  bgSprite = this->fields.bgSprite;
  if ( this->fields.servantType == 1 )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_19205/*"event_gauge_base_8036702"*/,
      0LL);
    ServantSprite = (UIWidget_o *)this->fields.bgSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    servantObjectData = this->fields.servantObjectData;
    if ( !servantObjectData )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                    (EventInfoUIBase_o *)this,
                                    servantObjectData->fields.ServantSprite,
                                    (System_String_o *)StringLiteral_19215/*"event_gauge_sd_8036702"*/,
                                    0LL);
    v22 = this->fields.servantObjectData;
    if ( !v22 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)v22->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    v23 = this->fields.servantObjectData;
    if ( !v23 )
      goto LABEL_45;
    NameSprite = v23->fields.NameSprite;
    v25 = &StringLiteral_19207/*"event_gauge_bg_8036702"*/;
  }
  else
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_19204/*"event_gauge_base_8036701"*/,
      0LL);
    ServantSprite = (UIWidget_o *)this->fields.bgSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
      ServantSprite,
      ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.titleSprite,
      (System_String_o *)StringLiteral_19299/*"event_title_80367"*/,
      0LL);
    ServantSprite = (UIWidget_o *)this->fields.titleSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    v26 = this->fields.servantObjectData;
    if ( !v26 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                    (EventInfoUIBase_o *)this,
                                    v26->fields.ServantSprite,
                                    (System_String_o *)StringLiteral_19214/*"event_gauge_sd_8036701"*/,
                                    0LL);
    v27 = this->fields.servantObjectData;
    if ( !v27 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)v27->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    v28 = this->fields.servantObjectData;
    if ( !v28 )
      goto LABEL_45;
    NameSprite = v28->fields.NameSprite;
    v25 = &StringLiteral_19206/*"event_gauge_bg_8036701"*/;
  }
  ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                  (EventInfoUIBase_o *)this,
                                  NameSprite,
                                  (System_String_o *)*v25,
                                  0LL);
  v29 = this->fields.servantObjectData;
  if ( !v29 )
    goto LABEL_45;
  ServantSprite = (UIWidget_o *)v29->fields.NameSprite;
  if ( !ServantSprite )
    goto LABEL_45;
  ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                  ServantSprite,
                                  ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
  v31 = this->fields.servantObjectData;
  if ( !v31 )
    goto LABEL_45;
  v32 = 0LL;
  while ( 1 )
  {
    CushionObjectList = v31->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_45;
    max_length = CushionObjectList->max_length;
    if ( (__int64)v32 >= (int)max_length )
      break;
    if ( v32 >= max_length )
LABEL_46:
      sub_1B90274(ServantSprite, entity);
    EventInfoJapaneseCushionControl__SetupCushionObject(
      this,
      CushionObjectList->m_Items[v32],
      this->fields.servantType,
      v32,
      v30);
    v31 = this->fields.servantObjectData;
    ++v32;
    if ( !v31 )
      goto LABEL_45;
  }
  if ( !this->fields.servantType )
  {
    v35 = 0LL;
    do
    {
      ExtentionCushionObjectList = v31->fields.ExtentionCushionObjectList;
      if ( !ExtentionCushionObjectList )
        break;
      v37 = ExtentionCushionObjectList->max_length;
      if ( (__int64)v35 >= (int)v37 )
        return;
      if ( v35 >= v37 )
        goto LABEL_46;
      EventInfoJapaneseCushionControl__SetupCushionObject(
        this,
        ExtentionCushionObjectList->m_Items[v35],
        this->fields.servantType,
        v35,
        v30);
      v31 = this->fields.servantObjectData;
      ++v35;
    }
    while ( v31 );
LABEL_45:
    sub_1B9026C(ServantSprite, entity);
  }
}


bool __fastcall EventInfoJapaneseCushionControl__IsPlayAddedAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  return this->fields.cushionAddNum > 0;
}


bool __fastcall EventInfoJapaneseCushionControl__IsRivalServant(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  return this->fields.servantType == 1;
}


void __fastcall EventInfoJapaneseCushionControl__OnDestroy(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B9026C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl__OnDisable(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  UIWidget_o *v3; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v5; // x19

  if ( (byte_4A71492 & 1) == 0 )
  {
    sub_1B90010(&TerminalSceneComponent_TypeInfo, method);
    byte_4A71492 = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A6AF7D )
    {
      sub_1B90010(&TerminalSceneComponent_TypeInfo, method);
      byte_4A6AF7D = 1;
    }
    v3 = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v3 = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v3->fields.onChange->klass;
    if ( !klass
      || (v5 = *(_QWORD *)&klass->_2.instance_size) == 0
      || (v3 = *(UIWidget_o **)(v5 + 40)) == 0LL
      || (UIWidget__set_depth(v3, 8, 0LL), (v3 = *(UIWidget_o **)(v5 + 32)) == 0LL) )
    {
      sub_1B9026C(v3, method);
    }
    UIWidget__set_depth(v3, 6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoJapaneseCushionControl__PlayAddedCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t servantType; // w8
  int32_t cushionStartAnimIndex; // w1
  System_String_o **v19; // x8
  System_String_o *v20; // x20
  System_String_o **v21; // x8
  UnityEngine_GameObject_o *v22; // x0
  const MethodInfo *v23; // x1
  float v24; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  float v26; // s8
  __int64 v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o **v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o **v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_Object_o *v35; // x23
  UnityEngine_GameObject_o *v36; // x23
  UnityEngine_GameObject_o *ServantRoot; // x0
  Il2CppObject *Component_object; // x22
  System_Action_o *v39; // x23
  int32_t v40; // w2
  int32_t v41; // w3
  System_Action_o *v42; // x23
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x21
  UnityEngine_Object_o *Clip; // x22

  if ( (byte_4A71497 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    sub_1B90010(&Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__, v8);
    sub_1B90010(&EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo, v9);
    sub_1B90010(&StringLiteral_18839/*"ef_bunyan"*/, v10);
    sub_1B90010(&StringLiteral_18827/*"ef_anning2"*/, v11);
    sub_1B90010(&StringLiteral_18826/*"ef_anning1"*/, v12);
    sub_1B90010(&StringLiteral_18825/*"ef_anning"*/, v13);
    sub_1B90010(&StringLiteral_18841/*"ef_bunyan2"*/, v14);
    sub_1B90010(&StringLiteral_18840/*"ef_bunyan1"*/, v15);
    sub_1B90010(&StringLiteral_1/*""*/, v16);
    byte_4A71497 = 1;
  }
  servantType = this->fields.servantType;
  if ( servantType )
  {
    if ( servantType == 1 )
    {
      cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
      if ( cushionStartAnimIndex % 5 == 4 )
        v19 = (System_String_o **)&StringLiteral_18827/*"ef_anning2"*/;
      else
        v19 = (System_String_o **)&StringLiteral_18826/*"ef_anning1"*/;
      v20 = *v19;
      goto LABEL_14;
    }
    v21 = (System_String_o **)&StringLiteral_1/*""*/;
    cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
  }
  else
  {
    cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
    if ( cushionStartAnimIndex % 5 == 4 )
      v21 = (System_String_o **)&StringLiteral_18841/*"ef_bunyan2"*/;
    else
      v21 = (System_String_o **)&StringLiteral_18840/*"ef_bunyan1"*/;
  }
  v20 = *v21;
LABEL_14:
  this->fields.cushionAddNum = (this->fields.cushionAddNum - 1) & ~((this->fields.cushionAddNum - 1) >> 31);
  *(UnityEngine_Vector3_o *)(&v24 - 1) = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                                           this,
                                           cushionStartAnimIndex,
                                           v2);
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_38;
  v26 = v24;
  GameObjectExtensions__GetLocalPositionX(servantObjectData->fields.ServantObject, 0LL);
  if ( System_String__IsNullOrEmpty(v20, 0LL) )
    goto LABEL_37;
  v27 = sub_1B9025C(EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_38;
  *(_QWORD *)(v27 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v27 + 24), (int32_t)this, v28, v29);
  if ( this->fields.servantType )
    v30 = (System_String_o **)&StringLiteral_18825/*"ef_anning"*/;
  else
    v30 = (System_String_o **)&StringLiteral_18839/*"ef_bunyan"*/;
  v31 = EventInfoUIBase__InstantiateFromEventUIAssetData((EventInfoUIBase_o *)this, *v30, 0LL);
  *(_QWORD *)(v27 + 16) = v31;
  v32 = (UnityEngine_GameObject_o **)(v27 + 16);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)v31, v33, v34);
  v35 = *(UnityEngine_Object_o **)(v27 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    goto LABEL_37;
  v36 = *v32;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v23);
  GameObjectExtensions__SafeSetParent_33776688(v36, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v32, v26 - this->fields.servantStepHeight, 0LL);
  v22 = *v32;
  if ( !*v32 )
    goto LABEL_38;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v22,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    goto LABEL_37;
  v39 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)this,
    Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__,
    0LL);
  if ( !Component_object )
    goto LABEL_38;
  Component_object[2].klass = (Il2CppClass *)v39;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&Component_object[2], (int32_t)v39, v40, v41);
  v42 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v27,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__,
    0LL);
  Component_object[2].monitor = v42;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v42, v43, v44);
  v22 = *(UnityEngine_GameObject_o **)(v27 + 16);
  if ( !v22 )
    goto LABEL_38;
  v45 = UnityEngine_GameObject__GetComponent_object_(
          v22,
          (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
  if ( ((unsigned __int8)v22 & 1) == 0 )
    goto LABEL_37;
  if ( !v45 )
LABEL_38:
    sub_1B9026C(v22, v23);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v45, v20, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_69284532((UnityEngine_Animation_o *)v45, v20, 0LL);
    return;
  }
LABEL_37:
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(this, v23);
}


void __fastcall EventInfoJapaneseCushionControl__PlayAnim(
        EventInfoJapaneseCushionControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( type == 1 )
  {
    this->fields.animEndAction = callback;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields.animEndAction,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    EventInfoJapaneseCushionControl__StartAddedCushionAnim(this, v5);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall EventInfoJapaneseCushionControl__PlayOverflowCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  float y; // s8
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o **v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Object_o *v22; // x22
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_GameObject_o *ServantRoot; // x0
  Il2CppObject *Component_object; // x21
  System_Action_o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  System_Action_o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x20
  Il2CppObject *v33; // x21
  UnityEngine_Object_o *Clip; // x22
  UnityEngine_Vector3_o ServantAnimPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A71496 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v4);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__, v6);
    sub_1B90010(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__, v7);
    sub_1B90010(&EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo, v8);
    sub_1B90010(&StringLiteral_18839/*"ef_bunyan"*/, v9);
    sub_1B90010(&StringLiteral_18842/*"ef_bunyan99"*/, v10);
    byte_4A71496 = 1;
  }
  v11 = sub_1B9025C(EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  ServantAnimPosition = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                          this,
                          this->fields.beforeCushionNum,
                          v16);
  y = ServantAnimPosition.fields.y;
  v18 = EventInfoUIBase__InstantiateFromEventUIAssetData(
          (EventInfoUIBase_o *)this,
          (System_String_o *)StringLiteral_18839/*"ef_bunyan"*/,
          0LL);
  *(_QWORD *)(v11 + 24) = v18;
  v19 = (UnityEngine_GameObject_o **)(v11 + 24);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)v18, v20, v21);
  v22 = *(UnityEngine_Object_o **)(v11 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    goto LABEL_21;
  v23 = *v19;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v13);
  GameObjectExtensions__SafeSetParent_33776688(v23, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v19, y - this->fields.servantStepHeight, 0LL);
  v12 = *v19;
  if ( !*v19 )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v12,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    goto LABEL_21;
  v26 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v11,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__,
    0LL);
  if ( !Component_object )
    goto LABEL_22;
  Component_object[2].klass = (Il2CppClass *)v26;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&Component_object[2], (int32_t)v26, v27, v28);
  v29 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v11,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__,
    0LL);
  Component_object[2].monitor = v29;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v29, v30, v31);
  v12 = *(UnityEngine_GameObject_o **)(v11 + 24);
  if ( !v12 )
    goto LABEL_22;
  v32 = (System_String_o *)StringLiteral_18842/*"ef_bunyan99"*/;
  v33 = UnityEngine_GameObject__GetComponent_object_(
          v12,
          (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
    goto LABEL_21;
  if ( !v33 )
LABEL_22:
    sub_1B9026C(v12, v13);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v33, v32, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_69284532((UnityEngine_Animation_o *)v33, v32, 0LL);
    return;
  }
LABEL_21:
  EventInfoJapaneseCushionControl__EndCushionAnim(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(
        EventInfoJapaneseCushionControl_o *this,
        int32_t cushionNum,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t id; // w21
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_4A7149E & 1) == 0 )
  {
    sub_1B90010(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&cushionNum);
    byte_4A7149E = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
  {
    eventId = eventUiEntity->fields.eventId;
    id = eventUiEntity->fields.id;
    if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
    EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(eventId, id, method);
    UnityEngine_PlayerPrefs__SetInt(EventProgressValueSaveKey, cushionNum, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(
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
      v4 = 0LL;
      do
      {
        ExtentionCushionObjectList = servantObjectData->fields.ExtentionCushionObjectList;
        if ( !ExtentionCushionObjectList )
          break;
        max_length = ExtentionCushionObjectList->max_length;
        if ( (int)v4 >= max_length )
          return;
        if ( (unsigned int)v4 >= max_length )
          sub_1B90274(this, method);
        this = (EventInfoJapaneseCushionControl_o *)ExtentionCushionObjectList->m_Items[v4];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        servantObjectData = v3->fields.servantObjectData;
        ++v4;
      }
      while ( servantObjectData );
    }
    sub_1B9026C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoJapaneseCushionControl__Setup(
        EventInfoJapaneseCushionControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
  float v22; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v23; // x8
  const MethodInfo *v24; // x2
  int32_t v25; // w8
  __int64 v26; // x21
  struct EventInfoJapaneseCushionControl_ObjectData_o *v27; // x8
  struct UnityEngine_GameObject_array *v28; // x8
  EventInfoJapaneseCushionControl_c *v29; // x0
  float v30; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v31; // x8
  const MethodInfo *v32; // x1

  if ( (byte_4A71494 & 1) == 0 )
  {
    sub_1B90010(&EventInfoJapaneseCushionControl_TypeInfo, entitys);
    byte_4A71494 = 1;
  }
  this->fields.eventUiValueEntityList = entitys;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventUiValueEntityList,
    (int32_t)entitys,
    (int32_t)method,
    v3);
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
    this->fields.cushionAddNum = ((_DWORD)CurrentCushionNum - beforeCushionNum) & ~(((int)CurrentCushionNum
                                                                                   - beforeCushionNum) >> 31);
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
  v21 = this->fields.beforeCushionNum >= max_length ? CushionObjectList->max_length : this->fields.beforeCushionNum;
  this->fields.beforeCushionNum = v21;
  *(UnityEngine_Vector3_o *)(&v22 - 1) = EventInfoJapaneseCushionControl__GetServantPosition(this, v21, v14);
  v23 = this->fields.servantObjectData;
  if ( !v23 )
    goto LABEL_30;
  GameObjectExtensions__SetLocalPositionY(v23->fields.ServantObject, v22, 0LL);
  v25 = this->fields.beforeCushionNum;
  if ( v25 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      v27 = this->fields.servantObjectData;
      if ( !v27 )
        break;
      v28 = v27->fields.CushionObjectList;
      if ( !v28 )
        break;
      if ( (unsigned int)v26 >= v28->max_length )
        sub_1B90274(CurrentCushionNum, v7);
      CurrentCushionNum = v28->m_Items[v26];
      if ( !CurrentCushionNum )
        break;
      UnityEngine_GameObject__SetActive(CurrentCushionNum, 1, 0LL);
      v25 = this->fields.beforeCushionNum;
      if ( (int)++v26 >= v25 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B9026C(CurrentCushionNum, v7);
  }
LABEL_22:
  if ( v25 >= max_length && !this->fields.servantType && this->fields.currentCushionNum >= max_length )
  {
    v29 = EventInfoJapaneseCushionControl_TypeInfo;
    if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
      v29 = EventInfoJapaneseCushionControl_TypeInfo;
    }
    *(UnityEngine_Vector3_o *)(&v30 - 1) = EventInfoJapaneseCushionControl__GetServantPosition(
                                             this,
                                             v29->static_fields->LIMIT_BREAK_CUSHION_NUM,
                                             v24);
    v31 = this->fields.servantObjectData;
    if ( !v31 )
      goto LABEL_30;
    GameObjectExtensions__SetLocalPositionY(v31->fields.ServantObject, v30, 0LL);
    EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(this, v32);
  }
}


void __fastcall EventInfoJapaneseCushionControl__SetupCushionObject(
        EventInfoJapaneseCushionControl_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  EventInfoUIBase_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Component_object; // x23
  System_String_o **v14; // x9
  System_String_o **v15; // x8

  v8 = (EventInfoUIBase_o *)this;
  if ( (byte_4A71495 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    sub_1B90010(&StringLiteral_19213/*"event_gauge_img_8036703"*/, v10);
    sub_1B90010(&StringLiteral_19212/*"event_gauge_img_8036702"*/, v11);
    this = (EventInfoJapaneseCushionControl_o *)sub_1B90010(&StringLiteral_19211/*"event_gauge_img_8036701"*/, v12);
    byte_4A71495 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v14 = (System_String_o **)&StringLiteral_19212/*"event_gauge_img_8036702"*/;
    v15 = (System_String_o **)&StringLiteral_19211/*"event_gauge_img_8036701"*/;
    if ( index % 5 == 4 )
      v14 = (System_String_o **)&StringLiteral_19213/*"event_gauge_img_8036703"*/;
    if ( index % 5 == 4 )
      v15 = (System_String_o **)&StringLiteral_19213/*"event_gauge_img_8036703"*/;
    if ( type == 1 )
      v15 = v14;
    this = (EventInfoJapaneseCushionControl_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                  v8,
                                                  (UISprite_o *)Component_object,
                                                  *v15,
                                                  0LL);
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[33].method)(
        Component_object,
        Component_object->klass->vtable[34].methodPtr);
      UnityEngine_GameObject__SetActive(obj, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1B9026C(this, obj);
  }
}


void __fastcall EventInfoJapaneseCushionControl__StartAddedCushionAnim(
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
    if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
      sub_1B9026C(v5, v6);
    if ( this->fields.beforeCushionNum + cushionAddNum < (signed int)CushionObjectList->max_length )
LABEL_6:
      EventInfoJapaneseCushionControl__PlayAddedCushionAnim(this, v6);
    else
      EventInfoJapaneseCushionControl__PlayOverflowCushionAnim(this, v6);
  }
}


void __fastcall EventInfoJapaneseCushionControl___Initialization_b__30_0(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B9026C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl___PlayAddedCushionAnim_b__36_0(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  EventInfoJapaneseCushionControl_o *v3; // x19
  const MethodInfo *v4; // x1

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData
    || (v3 = this, (this = (EventInfoJapaneseCushionControl_o *)servantObjectData->fields.ServantSprite) == 0LL) )
  {
    sub_1B9026C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  EventInfoJapaneseCushionControl__DeleteBeforeAnim(v3, v4);
}


int32_t __fastcall EventInfoJapaneseCushionControl__get_CushionAddNum(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  return this->fields.cushionAddNum;
}


EventUiEntity_o *__fastcall EventInfoJapaneseCushionControl__get_EventUiEntity(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUiEntity;
}


UnityEngine_GameObject_o *__fastcall EventInfoJapaneseCushionControl__get_ServantRoot(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData
    || (this = (EventInfoJapaneseCushionControl_o *)GameObjectExtensions__GetParent(
                                                      servantObjectData->fields.ServantObject,
                                                      0LL)) == 0LL )
  {
    sub_1B9026C(this, method);
  }
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl_ObjectData___ctor(
        EventInfoJapaneseCushionControl_ObjectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl___c__DisplayClass35_0___ctor(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl___c__DisplayClass35_0___PlayOverflowCushionAnim_b__0(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_o *_4__this; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (servantObjectData = _4__this->fields.servantObjectData) == 0LL
    || (this = (EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *)servantObjectData->fields.ServantSprite) == 0LL )
  {
    sub_1B9026C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl___c__DisplayClass35_0___PlayOverflowCushionAnim_b__1(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0
  struct UnityEngine_GameObject_o *animGameObject; // x1
  __int64 v7; // x20
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int max_length; // w9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  animGameObject = this->fields.animGameObject;
  _4__this->fields.beforeAnimObject = animGameObject;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&_4__this->fields.beforeAnimObject, (int32_t)animGameObject, v2, v3);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v7 = 0LL;
  while ( 1 )
  {
    servantObjectData = _4__this->fields.servantObjectData;
    if ( !servantObjectData )
      goto LABEL_10;
    CushionObjectList = servantObjectData->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_10;
    max_length = CushionObjectList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1B90274(_4__this, method);
    _4__this = (struct EventInfoJapaneseCushionControl_o *)CushionObjectList->m_Items[v7];
    if ( _4__this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
      _4__this = this->fields.__4__this;
      ++v7;
      if ( _4__this )
        continue;
    }
    goto LABEL_10;
  }
  EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(_4__this, method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_10:
    sub_1B9026C(_4__this, method);
  EventInfoJapaneseCushionControl__EndCushionAnim(_4__this, method);
}


void __fastcall EventInfoJapaneseCushionControl___c__DisplayClass36_0___ctor(
        EventInfoJapaneseCushionControl___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl___c__DisplayClass36_0___PlayAddedCushionAnim_b__1(
        EventInfoJapaneseCushionControl___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0
  struct UnityEngine_GameObject_o *animGameObject; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (animGameObject = this->fields.animGameObject,
        _4__this->fields.beforeAnimObject = animGameObject,
        sub_1B8FFB4(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.beforeAnimObject,
          (int32_t)animGameObject,
          v2,
          v3),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B9026C(_4__this, method);
  }
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(_4__this, method);
}