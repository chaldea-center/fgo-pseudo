void __fastcall EventInfoJapaneseCushionControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct EventInfoJapaneseCushionControl_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_49FDBB9 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoJapaneseCushionControl_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_5574/*"EVENT_CUSHION_VALUE"*/, v4);
    byte_49FDBB9 = 1;
  }
  static_fields = EventInfoJapaneseCushionControl_TypeInfo->static_fields;
  static_fields->LIMIT_BREAK_CUSHION_NUM = 73;
  v6 = StringLiteral_5574/*"EVENT_CUSHION_VALUE"*/;
  static_fields->SAVEKEY_EVENT_CUSHION_VALUE = (struct System_String_o *)StringLiteral_5574/*"EVENT_CUSHION_VALUE"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SAVEKEY_EVENT_CUSHION_VALUE, v6, v2, v3);
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

  if ( (byte_49FDBB6 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    byte_49FDBB6 = 1;
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
  ServantStatusBattleListViewItem_c *klass; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FDBB2 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FDBB2 = 1;
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
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
      v9 = (UnityEngine_Object_o *)p_beforeAnimObject->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v9, 0LL);
      p_beforeAnimObject->klass = 0LL;
      sub_1B6406C(p_beforeAnimObject, 0, v10, v11);
      return;
    }
LABEL_16:
    sub_1B64324(klass);
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
      sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  ServantObject = servantObjectData->fields.ServantObject;
  ServantPosition = EventInfoJapaneseCushionControl__GetServantPosition(this, this->fields.currentCushionNum, v2);
  GameObjectExtensions__SetLocalPosition(ServantObject, ServantPosition, 0LL);
  animEndAction = this->fields.animEndAction;
  this->fields.cushionAddNum = 0;
  this->fields.animEndAction = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animEndAction, 0, v7, v8);
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

  if ( (byte_49FDBB4 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoJapaneseCushionControl_TypeInfo, method);
    byte_49FDBB4 = 1;
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
  if ( (byte_49FDBB3 & 1) == 0 )
  {
    this = (EventInfoJapaneseCushionControl_o *)sub_1B640C8(&EventInfoJapaneseCushionControl_TypeInfo, method);
    byte_49FDBB3 = 1;
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
      sub_1B64324(this);
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

  if ( (byte_49FDBB7 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    byte_49FDBB7 = 1;
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
  if ( (byte_49FDBB5 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    sub_1B640C8(&string___TypeInfo, v3);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v4);
    byte_49FDBB5 = 1;
  }
  v5 = (System_String_o *)sub_1B64170(string___TypeInfo, 5LL);
  v9 = EventInfoJapaneseCushionControl_TypeInfo;
  v10 = v5;
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
    v9 = EventInfoJapaneseCushionControl_TypeInfo;
  }
  if ( !v10 )
    sub_1B64324(v5);
  if ( !LODWORD(v10[1].klass) )
    goto LABEL_12;
  SAVEKEY_EVENT_CUSHION_VALUE = v9->static_fields->SAVEKEY_EVENT_CUSHION_VALUE;
  v10[1].monitor = SAVEKEY_EVENT_CUSHION_VALUE;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10[1].monitor, (int32_t)SAVEKEY_EVENT_CUSHION_VALUE, v7, v8);
  if ( LODWORD(v10[1].klass) <= 1 )
    goto LABEL_12;
  v14 = StringLiteral_16054/*"_"*/;
  v10[1].fields = (System_String_Fields)StringLiteral_16054/*"_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10[1].fields, v14, v12, v13);
  v5 = System_Int32__ToString((int32_t)&v24, 0LL);
  if ( LODWORD(v10[1].klass) <= 2
    || (v10[2].klass = (System_String_c *)v5,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10[2], (int32_t)v5, v15, v16),
        LODWORD(v10[1].klass) <= 3)
    || (v19 = StringLiteral_16054/*"_"*/,
        v10[2].monitor = (void *)StringLiteral_16054/*"_"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10[2].monitor, v19, v17, v18),
        v5 = System_Int32__ToString((int32_t)&v23, 0LL),
        LODWORD(v10[1].klass) <= 4) )
  {
LABEL_12:
    sub_1B6432C(v5, v6);
  }
  v10[2].fields = (System_String_Fields)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10[2].fields, (int32_t)v5, v20, v21);
  return System_String__Concat_61388924((System_String_array *)v10, 0LL);
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
    sub_1B64324(this);
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
    sub_1B6432C(this, method);
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
    sub_1B64324(this);
  max_length = CushionObjectList->max_length;
  v6 = max_length - 1;
  if ( max_length > index )
    v6 = index;
  if ( v6 >= (unsigned int)max_length )
    sub_1B6432C(this, *(_QWORD *)&index);
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
    sub_1B64324(this);
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x21
  UISprite_o *bgSprite; // x1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v24; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v25; // x8
  UISprite_o *NameSprite; // x1
  __int64 *v27; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v28; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v29; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v30; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v31; // x8
  __int64 v32; // x1
  const MethodInfo *v33; // x4
  struct EventInfoJapaneseCushionControl_ObjectData_o *v34; // x8
  unsigned __int64 v35; // x20
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v38; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  unsigned __int64 v40; // x9

  if ( (byte_49FDBAD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    sub_1B640C8(&Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, v6);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_19104/*"event_gauge_bg_8036702"*/, v8);
    sub_1B640C8(&StringLiteral_19112/*"event_gauge_sd_8036702"*/, v9);
    sub_1B640C8(&StringLiteral_19102/*"event_gauge_base_8036702"*/, v10);
    sub_1B640C8(&StringLiteral_19103/*"event_gauge_bg_8036701"*/, v11);
    sub_1B640C8(&StringLiteral_19101/*"event_gauge_base_8036701"*/, v12);
    sub_1B640C8(&StringLiteral_19195/*"event_title_80367"*/, v13);
    sub_1B640C8(&StringLiteral_19111/*"event_gauge_sd_8036701"*/, v14);
    byte_49FDBAD = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, entity);
      byte_49F76BD = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  eventUiEntity = this->fields.eventUiEntity;
  v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v21, 0LL);
  bgSprite = this->fields.bgSprite;
  if ( this->fields.servantType == 1 )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_19102/*"event_gauge_base_8036702"*/,
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
                                    (System_String_o *)StringLiteral_19112/*"event_gauge_sd_8036702"*/,
                                    0LL);
    v24 = this->fields.servantObjectData;
    if ( !v24 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)v24->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    v25 = this->fields.servantObjectData;
    if ( !v25 )
      goto LABEL_45;
    NameSprite = v25->fields.NameSprite;
    v27 = &StringLiteral_19104/*"event_gauge_bg_8036702"*/;
  }
  else
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_19101/*"event_gauge_base_8036701"*/,
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
      (System_String_o *)StringLiteral_19195/*"event_title_80367"*/,
      0LL);
    ServantSprite = (UIWidget_o *)this->fields.titleSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    v28 = this->fields.servantObjectData;
    if ( !v28 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                    (EventInfoUIBase_o *)this,
                                    v28->fields.ServantSprite,
                                    (System_String_o *)StringLiteral_19111/*"event_gauge_sd_8036701"*/,
                                    0LL);
    v29 = this->fields.servantObjectData;
    if ( !v29 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)v29->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    v30 = this->fields.servantObjectData;
    if ( !v30 )
      goto LABEL_45;
    NameSprite = v30->fields.NameSprite;
    v27 = &StringLiteral_19103/*"event_gauge_bg_8036701"*/;
  }
  ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                  (EventInfoUIBase_o *)this,
                                  NameSprite,
                                  (System_String_o *)*v27,
                                  0LL);
  v31 = this->fields.servantObjectData;
  if ( !v31 )
    goto LABEL_45;
  ServantSprite = (UIWidget_o *)v31->fields.NameSprite;
  if ( !ServantSprite )
    goto LABEL_45;
  ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                  ServantSprite,
                                  ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
  v34 = this->fields.servantObjectData;
  if ( !v34 )
    goto LABEL_45;
  v35 = 0LL;
  while ( 1 )
  {
    CushionObjectList = v34->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_45;
    max_length = CushionObjectList->max_length;
    if ( (__int64)v35 >= (int)max_length )
      break;
    if ( v35 >= max_length )
LABEL_46:
      sub_1B6432C(ServantSprite, v32);
    EventInfoJapaneseCushionControl__SetupCushionObject(
      this,
      CushionObjectList->m_Items[v35],
      this->fields.servantType,
      v35,
      v33);
    v34 = this->fields.servantObjectData;
    ++v35;
    if ( !v34 )
      goto LABEL_45;
  }
  if ( !this->fields.servantType )
  {
    v38 = 0LL;
    do
    {
      ExtentionCushionObjectList = v34->fields.ExtentionCushionObjectList;
      if ( !ExtentionCushionObjectList )
        break;
      v40 = ExtentionCushionObjectList->max_length;
      if ( (__int64)v38 >= (int)v40 )
        return;
      if ( v38 >= v40 )
        goto LABEL_46;
      EventInfoJapaneseCushionControl__SetupCushionObject(
        this,
        ExtentionCushionObjectList->m_Items[v38],
        this->fields.servantType,
        v38,
        v33);
      v34 = this->fields.servantObjectData;
      ++v38;
    }
    while ( v34 );
LABEL_45:
    sub_1B64324(ServantSprite);
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
    sub_1B64324(this);
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

  if ( (byte_49FDBAC & 1) == 0 )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49FDBAC = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
      byte_49F76BD = 1;
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
      sub_1B64324(v3);
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
  float v23; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  float v25; // s8
  const MethodInfo *v26; // x1
  __int64 v27; // x2
  __int64 v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o **v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o **v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  UnityEngine_Object_o *v36; // x23
  UnityEngine_GameObject_o *v37; // x23
  UnityEngine_GameObject_o *ServantRoot; // x0
  Il2CppObject *Component_object; // x22
  __int64 v40; // x2
  System_Action_o *v41; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x1
  __int64 v45; // x2
  System_Action_o *v46; // x23
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x21
  UnityEngine_Object_o *Clip; // x22

  if ( (byte_49FDBB1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__, v8);
    sub_1B640C8(&EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_18741/*"ef_bunyan"*/, v10);
    sub_1B640C8(&StringLiteral_18729/*"ef_anning2"*/, v11);
    sub_1B640C8(&StringLiteral_18728/*"ef_anning1"*/, v12);
    sub_1B640C8(&StringLiteral_18727/*"ef_anning"*/, v13);
    sub_1B640C8(&StringLiteral_18743/*"ef_bunyan2"*/, v14);
    sub_1B640C8(&StringLiteral_18742/*"ef_bunyan1"*/, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    byte_49FDBB1 = 1;
  }
  servantType = this->fields.servantType;
  if ( servantType )
  {
    if ( servantType == 1 )
    {
      cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
      if ( cushionStartAnimIndex % 5 == 4 )
        v19 = (System_String_o **)&StringLiteral_18729/*"ef_anning2"*/;
      else
        v19 = (System_String_o **)&StringLiteral_18728/*"ef_anning1"*/;
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
      v21 = (System_String_o **)&StringLiteral_18743/*"ef_bunyan2"*/;
    else
      v21 = (System_String_o **)&StringLiteral_18742/*"ef_bunyan1"*/;
  }
  v20 = *v21;
LABEL_14:
  this->fields.cushionAddNum = (this->fields.cushionAddNum - 1) & ~((this->fields.cushionAddNum - 1) >> 31);
  *(UnityEngine_Vector3_o *)(&v23 - 1) = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                                           this,
                                           cushionStartAnimIndex,
                                           v2);
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_38;
  v25 = v23;
  GameObjectExtensions__GetLocalPositionX(servantObjectData->fields.ServantObject, 0LL);
  if ( System_String__IsNullOrEmpty(v20, 0LL) )
    goto LABEL_37;
  v28 = sub_1B64314(EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo, v26, v27);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_38;
  *(_QWORD *)(v28 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)this, v29, v30);
  if ( this->fields.servantType )
    v31 = (System_String_o **)&StringLiteral_18727/*"ef_anning"*/;
  else
    v31 = (System_String_o **)&StringLiteral_18741/*"ef_bunyan"*/;
  v32 = EventInfoUIBase__InstantiateFromEventUIAssetData((EventInfoUIBase_o *)this, *v31, 0LL);
  *(_QWORD *)(v28 + 16) = v32;
  v33 = (UnityEngine_GameObject_o **)(v28 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)v32, v34, v35);
  v36 = *(UnityEngine_Object_o **)(v28 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    goto LABEL_37;
  v37 = *v33;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v26);
  GameObjectExtensions__SafeSetParent_33381252(v37, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v33, v25 - this->fields.servantStepHeight, 0LL);
  v22 = *v33;
  if ( !*v33 )
    goto LABEL_38;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v22,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    goto LABEL_37;
  v41 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)this,
    Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__,
    0LL);
  if ( !Component_object )
    goto LABEL_38;
  Component_object[2].klass = (Il2CppClass *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2], (int32_t)v41, v42, v43);
  v46 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v44, v45);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v28,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__,
    0LL);
  Component_object[2].monitor = v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v46, v47, v48);
  v22 = *(UnityEngine_GameObject_o **)(v28 + 16);
  if ( !v22 )
    goto LABEL_38;
  v49 = UnityEngine_GameObject__GetComponent_object_(
          v22,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL);
  if ( ((unsigned __int8)v22 & 1) == 0 )
    goto LABEL_37;
  if ( !v49 )
LABEL_38:
    sub_1B64324(v22);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v49, v20, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v49, v20, 0LL);
    return;
  }
LABEL_37:
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(this, v26);
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
    sub_1B6406C(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  float y; // s8
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o **v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Object_o *v22; // x22
  const MethodInfo *v23; // x1
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_GameObject_o *ServantRoot; // x0
  Il2CppObject *Component_object; // x21
  __int64 v27; // x2
  System_Action_o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x20
  Il2CppObject *v37; // x21
  UnityEngine_Object_o *Clip; // x22
  UnityEngine_Vector3_o ServantAnimPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FDBB0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__, v7);
    sub_1B640C8(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__, v8);
    sub_1B640C8(&EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_18741/*"ef_bunyan"*/, v10);
    sub_1B640C8(&StringLiteral_18744/*"ef_bunyan99"*/, v11);
    byte_49FDBB0 = 1;
  }
  v12 = sub_1B64314(EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_22;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  ServantAnimPosition = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                          this,
                          this->fields.beforeCushionNum,
                          v16);
  y = ServantAnimPosition.fields.y;
  v18 = EventInfoUIBase__InstantiateFromEventUIAssetData(
          (EventInfoUIBase_o *)this,
          (System_String_o *)StringLiteral_18741/*"ef_bunyan"*/,
          0LL);
  *(_QWORD *)(v12 + 24) = v18;
  v19 = (UnityEngine_GameObject_o **)(v12 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)v18, v20, v21);
  v22 = *(UnityEngine_Object_o **)(v12 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    goto LABEL_21;
  v24 = *v19;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v23);
  GameObjectExtensions__SafeSetParent_33381252(v24, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v19, y - this->fields.servantStepHeight, 0LL);
  v13 = *v19;
  if ( !*v19 )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v13,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    goto LABEL_21;
  v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v12,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__,
    0LL);
  if ( !Component_object )
    goto LABEL_22;
  Component_object[2].klass = (Il2CppClass *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2], (int32_t)v28, v29, v30);
  v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v12,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__,
    0LL);
  Component_object[2].monitor = v33;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v33, v34, v35);
  v13 = *(UnityEngine_GameObject_o **)(v12 + 24);
  if ( !v13 )
    goto LABEL_22;
  v36 = (System_String_o *)StringLiteral_18744/*"ef_bunyan99"*/;
  v37 = UnityEngine_GameObject__GetComponent_object_(
          v13,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) == 0 )
    goto LABEL_21;
  if ( !v37 )
LABEL_22:
    sub_1B64324(v13);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v37, v36, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v37, v36, 0LL);
    return;
  }
LABEL_21:
  EventInfoJapaneseCushionControl__EndCushionAnim(this, v23);
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

  if ( (byte_49FDBB8 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&cushionNum);
    byte_49FDBB8 = 1;
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
          sub_1B6432C(this, method);
        this = (EventInfoJapaneseCushionControl_o *)ExtentionCushionObjectList->m_Items[v4];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        servantObjectData = v3->fields.servantObjectData;
        ++v4;
      }
      while ( servantObjectData );
    }
    sub_1B64324(this);
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
  const MethodInfo *v7; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t id; // w21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  int32_t beforeCushionNum; // w8
  int32_t v15; // w0
  const MethodInfo *v16; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t max_length; // w20
  int32_t v20; // w1
  float v21; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v22; // x8
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  int32_t v25; // w8
  __int64 v26; // x21
  struct EventInfoJapaneseCushionControl_ObjectData_o *v27; // x8
  struct UnityEngine_GameObject_array *v28; // x8
  EventInfoJapaneseCushionControl_c *v29; // x0
  float v30; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v31; // x8
  const MethodInfo *v32; // x1

  if ( (byte_49FDBAE & 1) == 0 )
  {
    sub_1B640C8(&EventInfoJapaneseCushionControl_TypeInfo, entitys);
    byte_49FDBAE = 1;
  }
  this->fields.eventUiValueEntityList = entitys;
  sub_1B6406C(
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
  if ( EventInfoJapaneseCushionControl__CheckEventProgressValueSaveData(eventId, id, v7) )
  {
    this->fields.beforeCushionNum = EventInfoJapaneseCushionControl__GetBeforeCushionNum(this, v11);
    CurrentCushionNum = (UnityEngine_GameObject_o *)EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v12);
    beforeCushionNum = this->fields.beforeCushionNum;
    this->fields.currentCushionNum = (int)CurrentCushionNum;
    this->fields.cushionAddNum = ((_DWORD)CurrentCushionNum - beforeCushionNum) & ~(((int)CurrentCushionNum
                                                                                   - beforeCushionNum) >> 31);
  }
  else
  {
    v15 = EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v11);
    this->fields.beforeCushionNum = v15;
    this->fields.currentCushionNum = v15;
    EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(this, v15, v16);
  }
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_30;
  CushionObjectList = servantObjectData->fields.CushionObjectList;
  if ( !CushionObjectList )
    goto LABEL_30;
  max_length = CushionObjectList->max_length;
  v20 = this->fields.beforeCushionNum >= max_length ? CushionObjectList->max_length : this->fields.beforeCushionNum;
  this->fields.beforeCushionNum = v20;
  *(UnityEngine_Vector3_o *)(&v21 - 1) = EventInfoJapaneseCushionControl__GetServantPosition(this, v20, v13);
  v22 = this->fields.servantObjectData;
  if ( !v22 )
    goto LABEL_30;
  GameObjectExtensions__SetLocalPositionY(v22->fields.ServantObject, v21, 0LL);
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
        sub_1B6432C(CurrentCushionNum, v23);
      CurrentCushionNum = v28->m_Items[v26];
      if ( !CurrentCushionNum )
        break;
      UnityEngine_GameObject__SetActive(CurrentCushionNum, 1, 0LL);
      v25 = this->fields.beforeCushionNum;
      if ( (int)++v26 >= v25 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B64324(CurrentCushionNum);
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
  if ( (byte_49FDBAF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_19110/*"event_gauge_img_8036703"*/, v10);
    sub_1B640C8(&StringLiteral_19109/*"event_gauge_img_8036702"*/, v11);
    this = (EventInfoJapaneseCushionControl_o *)sub_1B640C8(&StringLiteral_19108/*"event_gauge_img_8036701"*/, v12);
    byte_49FDBAF = 1;
  }
  if ( !obj )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v14 = (System_String_o **)&StringLiteral_19109/*"event_gauge_img_8036702"*/;
    v15 = (System_String_o **)&StringLiteral_19108/*"event_gauge_img_8036701"*/;
    if ( index % 5 == 4 )
      v14 = (System_String_o **)&StringLiteral_19110/*"event_gauge_img_8036703"*/;
    if ( index % 5 == 4 )
      v15 = (System_String_o **)&StringLiteral_19110/*"event_gauge_img_8036703"*/;
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
    sub_1B64324(this);
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
      sub_1B64324(v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  const MethodInfo *v7; // x1
  __int64 v8; // x20
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int max_length; // w9
  const MethodInfo *v12; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  animGameObject = this->fields.animGameObject;
  _4__this->fields.beforeAnimObject = animGameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.beforeAnimObject, (int32_t)animGameObject, v2, v3);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v8 = 0LL;
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
      sub_1B6432C(_4__this, v7);
    _4__this = (struct EventInfoJapaneseCushionControl_o *)CushionObjectList->m_Items[v8];
    if ( _4__this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
      _4__this = this->fields.__4__this;
      ++v8;
      if ( _4__this )
        continue;
    }
    goto LABEL_10;
  }
  EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(_4__this, v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_10:
    sub_1B64324(_4__this);
  EventInfoJapaneseCushionControl__EndCushionAnim(_4__this, v12);
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
  const MethodInfo *v7; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (animGameObject = this->fields.animGameObject,
        _4__this->fields.beforeAnimObject = animGameObject,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.beforeAnimObject,
          (int32_t)animGameObject,
          v2,
          v3),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(_4__this);
  }
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(_4__this, v7);
}