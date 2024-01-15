void __fastcall EventInfoJapaneseCushionControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  struct EventInfoJapaneseCushionControl_StaticFields *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FA138 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoJapaneseCushionControl_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_5593/*"EVENT_CUSHION_VALUE"*/, v8);
    byte_40FA138 = 1;
  }
  EventInfoJapaneseCushionControl_TypeInfo->static_fields->LIMIT_BREAK_CUSHION_NUM = 73;
  static_fields = EventInfoJapaneseCushionControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_5593/*"EVENT_CUSHION_VALUE"*/;
  static_fields->SAVEKEY_EVENT_CUSHION_VALUE = (struct System_String_o *)StringLiteral_5593/*"EVENT_CUSHION_VALUE"*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->SAVEKEY_EVENT_CUSHION_VALUE, v10, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_40FA135 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    byte_40FA135 = 1;
  }
  if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
  }
  EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(eventId, eventUiId, method);
  return UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl__DeleteBeforeAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o **p_beforeAnimObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *beforeAnimObject; // t1
  UnityEngine_Animation_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FA131 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FA131 = 1;
  }
  beforeAnimObject = this->fields.beforeAnimObject;
  p_beforeAnimObject = &this->fields.beforeAnimObject;
  v5 = (UnityEngine_Object_o *)beforeAnimObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    if ( !*p_beforeAnimObject )
      goto LABEL_19;
    Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           *p_beforeAnimObject,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      UnityEngine_Animation__Stop(Component_srcLineSprite, 0LL);
    }
    if ( *p_beforeAnimObject )
    {
      UnityEngine_GameObject__SetActive(*p_beforeAnimObject, 0, 0LL);
      v8 = *p_beforeAnimObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v8, 0LL);
      *p_beforeAnimObject = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_beforeAnimObject, 0LL, v9, v10, v11, v12, v13, v14);
      return;
    }
LABEL_19:
    sub_B170D4();
  }
}


void __fastcall EventInfoJapaneseCushionControl__EndAddedCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  int32_t max_length; // w20
  int32_t cushionStartAnimIndex; // w8
  UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v10; // x8
  struct UnityEngine_GameObject_array *v11; // x8

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_15;
  CushionObjectList = servantObjectData->fields.CushionObjectList;
  if ( !CushionObjectList )
    goto LABEL_15;
  max_length = CushionObjectList->max_length;
  cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
  if ( cushionStartAnimIndex < max_length && this->fields.cushionAddNum >= 1 )
  {
    if ( cushionStartAnimIndex >= (unsigned int)max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v8 = CushionObjectList->m_Items[cushionStartAnimIndex];
    if ( !v8 )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(v8, 1, 0LL);
    cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
  }
  v9 = cushionStartAnimIndex + 1;
  this->fields.cushionStartAnimIndex = v9;
  if ( v9 < max_length )
    goto LABEL_12;
  v10 = this->fields.servantObjectData;
  if ( !v10 || (v11 = v10->fields.CushionObjectList) == 0LL )
LABEL_15:
    sub_B170D4();
  this->fields.cushionStartAnimIndex = v11->max_length - 1;
LABEL_12:
  if ( this->fields.cushionAddNum )
    EventInfoJapaneseCushionControl__PlayAddedCushionAnim(this, method);
  else
    EventInfoJapaneseCushionControl__EndCushionAnim(this, method);
}


void __fastcall EventInfoJapaneseCushionControl__EndCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  UnityEngine_GameObject_o *ServantObject; // x20
  System_Action_o *animEndAction; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Vector3_o ServantPosition; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    sub_B170D4();
  ServantObject = servantObjectData->fields.ServantObject;
  ServantPosition = EventInfoJapaneseCushionControl__GetServantPosition(this, this->fields.currentCushionNum, v2);
  GameObjectExtensions__SetLocalPosition(ServantObject, ServantPosition, 0LL);
  animEndAction = this->fields.animEndAction;
  this->fields.cushionAddNum = 0;
  this->fields.animEndAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.animEndAction, 0LL, v7, v8, v9, v10, v11, v12);
  if ( animEndAction )
    System_Action__Invoke(animEndAction, 0LL);
}


int32_t __fastcall EventInfoJapaneseCushionControl__GetBeforeCushionNum(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19
  int32_t id; // w20

  if ( (byte_40FA133 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoJapaneseCushionControl_TypeInfo, method);
    byte_40FA133 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    return 0;
  eventId = eventUiEntity->fields.eventId;
  id = eventUiEntity->fields.id;
  if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
  }
  return EventInfoJapaneseCushionControl__GetEventProgressValueSaveData(eventId, id, 0, v2);
}


int32_t __fastcall EventInfoJapaneseCushionControl__GetCurrentCushionNum(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x10
  struct EventUiValueEntity_array *eventUiValueEntityList; // x11
  int max_length; // w8
  int32_t priority; // w10
  __int64 v7; // x9
  EventUiValueEntity_o **m_Items; // x11
  EventUiValueEntity_o *v9; // x12
  int32_t result; // w0
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  EventInfoJapaneseCushionControl_c *v13; // x0

  if ( (byte_40FA132 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoJapaneseCushionControl_TypeInfo, method);
    byte_40FA132 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    return 0;
  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    return 0;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  priority = eventUiEntity->fields.priority;
  v7 = 0LL;
  m_Items = eventUiValueEntityList->m_Items;
  while ( 1 )
  {
    v9 = m_Items[v7];
    if ( !v9 )
      goto LABEL_19;
    if ( priority == v9->fields.priority )
      break;
    if ( (int)++v7 >= max_length )
      return 0;
  }
  result = System_Int32__Parse(v9->fields.value, 0LL);
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
LABEL_19:
    sub_B170D4();
  if ( result >= (signed int)CushionObjectList->max_length )
  {
    v13 = EventInfoJapaneseCushionControl_TypeInfo;
    if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
      v13 = EventInfoJapaneseCushionControl_TypeInfo;
    }
    return v13->static_fields->LIMIT_BREAK_CUSHION_NUM;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoJapaneseCushionControl__GetEventProgressValueSaveData(
        int32_t eventId,
        int32_t eventUiId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_40FA136 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    byte_40FA136 = 1;
  }
  if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
  }
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
  System_Int32_array **v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array *v13; // x19
  EventInfoJapaneseCushionControl_c *v14; // x8
  System_Int32_array **SAVEKEY_EVENT_CUSHION_VALUE; // x20
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x20
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x20
  int32_t v39; // [xsp+8h] [xbp-18h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-14h] BYREF

  v39 = eventUiId;
  v40 = eventId;
  if ( (byte_40FA134 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    sub_B16FFC(&string___TypeInfo, v3);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v4);
    byte_40FA134 = 1;
  }
  v5 = (System_String_o *)sub_B17014(string___TypeInfo, 5LL, method);
  v13 = (System_String_array *)v5;
  v14 = EventInfoJapaneseCushionControl_TypeInfo;
  if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
    v14 = EventInfoJapaneseCushionControl_TypeInfo;
  }
  if ( !v13 )
    sub_B170D4();
  SAVEKEY_EVENT_CUSHION_VALUE = (System_Int32_array **)v14->static_fields->SAVEKEY_EVENT_CUSHION_VALUE;
  if ( SAVEKEY_EVENT_CUSHION_VALUE )
  {
    v5 = (System_String_o *)sub_B170BC(SAVEKEY_EVENT_CUSHION_VALUE, v13->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_28;
  }
  if ( !v13->max_length )
    goto LABEL_27;
  v13->m_Items[0] = (System_String_o *)SAVEKEY_EVENT_CUSHION_VALUE;
  sub_B16F98((BattleServantConfConponent_o *)v13->m_Items, SAVEKEY_EVENT_CUSHION_VALUE, v7, v8, v9, v10, v11, v12);
  v5 = (System_String_o *)StringLiteral_15842/*"_"*/;
  if ( StringLiteral_15842/*"_"*/ )
  {
    v5 = (System_String_o *)sub_B170BC(StringLiteral_15842/*"_"*/, v13->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_28;
    v6 = (System_Int32_array **)StringLiteral_15842/*"_"*/;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_27;
  v13->m_Items[1] = (System_String_o *)v6;
  sub_B16F98((BattleServantConfConponent_o *)&v13->m_Items[1], v6, v7, v16, v17, v18, v19, v20);
  v5 = System_Int32__ToString((int32_t)&v40, 0LL);
  v26 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B170BC(v5, v13->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_28;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_27;
  v13->m_Items[2] = (System_String_o *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&v13->m_Items[2], v26, v7, v21, v22, v23, v24, v25);
  v5 = (System_String_o *)StringLiteral_15842/*"_"*/;
  if ( StringLiteral_15842/*"_"*/ )
  {
    v5 = (System_String_o *)sub_B170BC(StringLiteral_15842/*"_"*/, v13->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_28;
    v6 = (System_Int32_array **)StringLiteral_15842/*"_"*/;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_27;
  v13->m_Items[3] = (System_String_o *)v6;
  sub_B16F98((BattleServantConfConponent_o *)&v13->m_Items[3], v6, v7, v27, v28, v29, v30, v31);
  v5 = System_Int32__ToString((int32_t)&v39, 0LL);
  v37 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B170BC(v5, v13->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_28:
      sub_B170F4(v5);
      sub_B170A0();
    }
  }
  if ( v13->max_length <= 4 )
  {
LABEL_27:
    sub_B17100(v5, v6, v7);
    sub_B170A0();
  }
  v13->m_Items[4] = (System_String_o *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v13->m_Items[4], v37, v7, v32, v33, v34, v35, v36);
  return System_String__Concat_43823856(v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall EventInfoJapaneseCushionControl__GetLordUpEffectEndedPosition(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t beforeCushionNum; // w11
  int32_t max_length; // w10
  int v8; // w9
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s1
  float v13; // s0
  float v14; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
    sub_B170D4();
  beforeCushionNum = this->fields.beforeCushionNum;
  max_length = CushionObjectList->max_length;
  v8 = beforeCushionNum - 1;
  if ( beforeCushionNum < 1 || beforeCushionNum > max_length )
  {
    if ( max_length )
    {
      *(UnityEngine_Vector3_o *)&v9 = GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[0], 0LL);
      v10 = v12 - this->fields.servantStepHeight;
      goto LABEL_9;
    }
LABEL_11:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  if ( v8 >= (unsigned int)max_length )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v9 = GameObjectExtensions__GetLocalPosition(CushionObjectList->m_Items[v8], 0LL);
LABEL_9:
  v13 = v9 + this->fields.lordUpEffectOffsetX;
  v14 = v10 + this->fields.lordUpEffectOffsetY;
  result.fields.z = v11;
  result.fields.y = v14;
  result.fields.x = v13;
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
    sub_B170D4();
  max_length = CushionObjectList->max_length;
  v6 = max_length - 1;
  if ( max_length > index )
    v6 = index;
  if ( v6 >= (unsigned int)max_length )
  {
    sub_B17100(this, *(_QWORD *)&index, method);
    sub_B170A0();
  }
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
    sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  TerminalSceneComponent_c *v19; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct TitleInfoControl_o *mTitleInfo; // x21
  UIWidget_o *backBtnSprite; // x0
  UIWidget_o *backBtnBgSprite; // x0
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Action_o *v29; // x21
  UISprite_o *bgSprite; // x1
  struct UISprite_o *v31; // x0
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o **p_servantObjectData; // x20
  struct EventInfoJapaneseCushionControl_ObjectData_o *v34; // x8
  struct UISprite_o *ServantSprite; // x0
  UISprite_o *NameSprite; // x1
  __int64 *v37; // x8
  struct UISprite_o *v38; // x0
  struct UISprite_o *titleSprite; // x0
  struct EventInfoJapaneseCushionControl_ObjectData_o *v40; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v41; // x8
  struct UISprite_o *v42; // x0
  struct EventInfoJapaneseCushionControl_ObjectData_o *v43; // x8
  struct UISprite_o *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  const MethodInfo *v48; // x4
  struct EventInfoJapaneseCushionControl_ObjectData_o *v49; // x8
  unsigned __int64 v50; // x20
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v53; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  unsigned __int64 v55; // x9

  if ( (byte_40FA12C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, v10);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_18445/*"event_gauge_bg_8036702"*/, v12);
    sub_B16FFC(&StringLiteral_18452/*"event_gauge_sd_8036702"*/, v13);
    sub_B16FFC(&StringLiteral_18443/*"event_gauge_base_8036702"*/, v14);
    sub_B16FFC(&StringLiteral_18444/*"event_gauge_bg_8036701"*/, v15);
    sub_B16FFC(&StringLiteral_18442/*"event_gauge_base_8036701"*/, v16);
    sub_B16FFC(&StringLiteral_18534/*"event_title_80367"*/, v17);
    sub_B16FFC(&StringLiteral_18451/*"event_gauge_sd_8036701"*/, v18);
    byte_40FA12C = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, entity);
      byte_40F6042 = 1;
    }
    v19 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v19 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v19->static_fields->mInstance;
    if ( !mInstance )
      goto LABEL_46;
    mTitleInfo = mInstance->fields.mTitleInfo;
    if ( !mTitleInfo )
      goto LABEL_46;
    backBtnSprite = (UIWidget_o *)mTitleInfo->fields.backBtnSprite;
    if ( !backBtnSprite )
      goto LABEL_46;
    UIWidget__set_depth(backBtnSprite, this->fields.titleBackButtonDepth + 2, 0LL);
    backBtnBgSprite = (UIWidget_o *)mTitleInfo->fields.backBtnBgSprite;
    if ( !backBtnBgSprite )
      goto LABEL_46;
    UIWidget__set_depth(backBtnBgSprite, this->fields.titleBackButtonDepth, 0LL);
  }
  this->fields.eventUiEntity = entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v29, 0LL);
  bgSprite = this->fields.bgSprite;
  if ( this->fields.servantType == 1 )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_18443/*"event_gauge_base_8036702"*/,
      0LL);
    v31 = this->fields.bgSprite;
    if ( !v31 )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v31->klass->vtable._33_MakePixelPerfect.method)(
      v31,
      v31->klass->vtable._34_get_minWidth.methodPtr);
    p_servantObjectData = &this->fields.servantObjectData;
    servantObjectData = this->fields.servantObjectData;
    if ( !servantObjectData )
      goto LABEL_46;
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      servantObjectData->fields.ServantSprite,
      (System_String_o *)StringLiteral_18452/*"event_gauge_sd_8036702"*/,
      0LL);
    v34 = this->fields.servantObjectData;
    if ( !v34 )
      goto LABEL_46;
    ServantSprite = v34->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
      ServantSprite,
      ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    if ( !*p_servantObjectData )
      goto LABEL_46;
    NameSprite = (*p_servantObjectData)->fields.NameSprite;
    v37 = &StringLiteral_18445/*"event_gauge_bg_8036702"*/;
  }
  else
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_18442/*"event_gauge_base_8036701"*/,
      0LL);
    v38 = this->fields.bgSprite;
    if ( !v38 )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v38->klass->vtable._33_MakePixelPerfect.method)(
      v38,
      v38->klass->vtable._34_get_minWidth.methodPtr);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.titleSprite,
      (System_String_o *)StringLiteral_18534/*"event_title_80367"*/,
      0LL);
    titleSprite = this->fields.titleSprite;
    if ( !titleSprite )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))titleSprite->klass->vtable._33_MakePixelPerfect.method)(
      titleSprite,
      titleSprite->klass->vtable._34_get_minWidth.methodPtr);
    p_servantObjectData = &this->fields.servantObjectData;
    v40 = this->fields.servantObjectData;
    if ( !v40 )
      goto LABEL_46;
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      v40->fields.ServantSprite,
      (System_String_o *)StringLiteral_18451/*"event_gauge_sd_8036701"*/,
      0LL);
    v41 = this->fields.servantObjectData;
    if ( !v41 )
      goto LABEL_46;
    v42 = v41->fields.ServantSprite;
    if ( !v42 )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v42->klass->vtable._33_MakePixelPerfect.method)(
      v42,
      v42->klass->vtable._34_get_minWidth.methodPtr);
    if ( !*p_servantObjectData )
      goto LABEL_46;
    NameSprite = (*p_servantObjectData)->fields.NameSprite;
    v37 = &StringLiteral_18444/*"event_gauge_bg_8036701"*/;
  }
  EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, NameSprite, (System_String_o *)*v37, 0LL);
  v43 = this->fields.servantObjectData;
  if ( !v43 )
    goto LABEL_46;
  v44 = v43->fields.NameSprite;
  if ( !v44 )
    goto LABEL_46;
  v45 = ((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v44->klass->vtable._33_MakePixelPerfect.method)(
          v44,
          v44->klass->vtable._34_get_minWidth.methodPtr);
  v49 = *p_servantObjectData;
  if ( !*p_servantObjectData )
    goto LABEL_46;
  v50 = 0LL;
  while ( 1 )
  {
    CushionObjectList = v49->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_46;
    max_length = CushionObjectList->max_length;
    if ( (__int64)v50 >= (int)max_length )
      break;
    if ( v50 >= max_length )
    {
LABEL_48:
      sub_B17100(v45, v46, v47);
      sub_B170A0();
    }
    EventInfoJapaneseCushionControl__SetupCushionObject(
      this,
      CushionObjectList->m_Items[v50],
      this->fields.servantType,
      v50,
      v48);
    v49 = this->fields.servantObjectData;
    ++v50;
    if ( !v49 )
      goto LABEL_46;
  }
  if ( !this->fields.servantType )
  {
    v53 = 0LL;
    do
    {
      ExtentionCushionObjectList = v49->fields.ExtentionCushionObjectList;
      if ( !ExtentionCushionObjectList )
        break;
      v55 = ExtentionCushionObjectList->max_length;
      if ( (__int64)v53 >= (int)v55 )
        return;
      if ( v53 >= v55 )
        goto LABEL_48;
      EventInfoJapaneseCushionControl__SetupCushionObject(
        this,
        ExtentionCushionObjectList->m_Items[v53],
        this->fields.servantType,
        v53,
        v48);
      v49 = this->fields.servantObjectData;
      ++v53;
    }
    while ( v49 );
LABEL_46:
    sub_B170D4();
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
    sub_B170D4();
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl__OnDisable(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct TitleInfoControl_o *mTitleInfo; // x19
  UIWidget_o *backBtnSprite; // x0
  UIWidget_o *backBtnBgSprite; // x0

  if ( (byte_40FA12B & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40FA12B = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
      byte_40F6042 = 1;
    }
    v3 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v3 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v3->static_fields->mInstance;
    if ( !mInstance
      || (mTitleInfo = mInstance->fields.mTitleInfo) == 0LL
      || (backBtnSprite = (UIWidget_o *)mTitleInfo->fields.backBtnSprite) == 0LL
      || (UIWidget__set_depth(backBtnSprite, 8, 0LL),
          (backBtnBgSprite = (UIWidget_o *)mTitleInfo->fields.backBtnBgSprite) == 0LL) )
    {
      sub_B170D4();
    }
    UIWidget__set_depth(backBtnBgSprite, 6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoJapaneseCushionControl__PlayAddedCushionAnim(
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t servantType; // w8
  int v17; // w8
  System_String_o **v18; // x10
  System_String_o **v19; // x9
  System_String_o **v20; // x8
  System_String_o *v21; // x20
  int32_t v22; // w0
  int32_t v23; // w0
  int32_t cushionStartAnimIndex; // w1
  const MethodInfo *v25; // x2
  float v26; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  float v28; // s8
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o **v40; // x22
  System_String_o **v41; // x8
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_Object_o *v49; // x23
  UnityEngine_GameObject_o *v50; // x23
  UnityEngine_GameObject_o *ServantRoot; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Action_o *v56; // x23
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UnityEngine_Object_o *v63; // x22
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Action_o *v68; // x23
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_Object_o *v76; // x21
  UnityEngine_Object_o *Clip; // x22

  if ( (byte_40FA130 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__, v7);
    sub_B16FFC(&EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_18101/*"ef_bunyan"*/, v9);
    sub_B16FFC(&StringLiteral_18091/*"ef_anning2"*/, v10);
    sub_B16FFC(&StringLiteral_18090/*"ef_anning1"*/, v11);
    sub_B16FFC(&StringLiteral_18089/*"ef_anning"*/, v12);
    sub_B16FFC(&StringLiteral_18103/*"ef_bunyan2"*/, v13);
    sub_B16FFC(&StringLiteral_18102/*"ef_bunyan1"*/, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40FA130 = 1;
  }
  servantType = this->fields.servantType;
  if ( !servantType )
  {
    v17 = this->fields.cushionStartAnimIndex % 5;
    v18 = (System_String_o **)&StringLiteral_18103/*"ef_bunyan2"*/;
    v19 = (System_String_o **)&StringLiteral_18102/*"ef_bunyan1"*/;
LABEL_7:
    if ( v17 == 4 )
      v20 = v18;
    else
      v20 = v19;
    goto LABEL_11;
  }
  if ( servantType == 1 )
  {
    v17 = this->fields.cushionStartAnimIndex % 5;
    v18 = (System_String_o **)&StringLiteral_18091/*"ef_anning2"*/;
    v19 = (System_String_o **)&StringLiteral_18090/*"ef_anning1"*/;
    goto LABEL_7;
  }
  v20 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_11:
  v21 = *v20;
  v22 = this->fields.cushionAddNum - 1;
  this->fields.cushionAddNum = v22;
  v23 = UnityEngine_Mathf__Max_40727628(v22, 0, 0LL);
  cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
  this->fields.cushionAddNum = v23;
  *(UnityEngine_Vector3_o *)(&v26 - 1) = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                                           this,
                                           cushionStartAnimIndex,
                                           v25);
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_39;
  v28 = v26;
  GameObjectExtensions__GetLocalPositionX(servantObjectData->fields.ServantObject, 0LL);
  if ( System_String__IsNullOrEmpty(v21, 0LL) )
    goto LABEL_38;
  v33 = sub_B170CC(EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo, v29, v30, v31, v32);
  EventInfoJapaneseCushionControl___c__DisplayClass36_0___ctor(
    (EventInfoJapaneseCushionControl___c__DisplayClass36_0_o *)v33,
    0LL);
  if ( !v33 )
    goto LABEL_39;
  *(_QWORD *)(v33 + 24) = this;
  v40 = (UnityEngine_GameObject_o **)(v33 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 24), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  if ( this->fields.servantType )
    v41 = (System_String_o **)&StringLiteral_18089/*"ef_anning"*/;
  else
    v41 = (System_String_o **)&StringLiteral_18101/*"ef_bunyan"*/;
  v42 = (System_Int32_array **)EventInfoUIBase__InstantiateFromEventUIAssetData((EventInfoUIBase_o *)this, *v41, 0LL);
  *(_QWORD *)(v33 + 16) = v42;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 16), v42, v43, v44, v45, v46, v47, v48);
  v49 = *(UnityEngine_Object_o **)(v33 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
    goto LABEL_38;
  v50 = *v40;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v29);
  GameObjectExtensions__SafeSetParent_27425996(v50, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v40, v28 - this->fields.servantStepHeight, 0LL);
  if ( !*v40 )
    goto LABEL_39;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      *v40,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_38;
  v56 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v53, v54, v55);
  System_Action___ctor(
    v56,
    (Il2CppObject *)this,
    Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__,
    0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_39;
  Component_srcLineSprite[1].klass = (UnityEngine_Object_c *)v56;
  v63 = Component_srcLineSprite + 1;
  sub_B16F98((BattleServantConfConponent_o *)v63, (System_Int32_array **)v56, v57, v58, v59, v60, v61, v62);
  v68 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v64, v65, v66, v67);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v33,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__,
    0LL);
  v63->monitor = v68;
  sub_B16F98((BattleServantConfConponent_o *)&v63->monitor, (System_Int32_array **)v68, v69, v70, v71, v72, v73, v74);
  v75 = *(UnityEngine_GameObject_o **)(v33 + 16);
  if ( !v75 )
    goto LABEL_39;
  v76 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v75,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
    goto LABEL_38;
  if ( !v76 )
LABEL_39:
    sub_B170D4();
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v76, v21, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v76, v21, 0LL);
    return;
  }
LABEL_38:
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(this, v29);
}


void __fastcall EventInfoJapaneseCushionControl__PlayAnim(
        EventInfoJapaneseCushionControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  if ( type == 1 )
  {
    this->fields.animEndAction = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.animEndAction,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    EventInfoJapaneseCushionControl__StartAddedCushionAnim(this, v9);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  float y; // s8
  System_Int32_array **v23; // x0
  UnityEngine_GameObject_o **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Object_o *v31; // x22
  const MethodInfo *v32; // x1
  UnityEngine_GameObject_o *v33; // x22
  UnityEngine_GameObject_o *ServantRoot; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Action_o *v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Action_o *v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_GameObject_o *v58; // x0
  System_String_o *v59; // x20
  UnityEngine_Object_o *v60; // x21
  UnityEngine_Object_o *Clip; // x22
  UnityEngine_Vector3_o ServantAnimPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA12F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__, v9);
    sub_B16FFC(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__, v10);
    sub_B16FFC(&EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_18101/*"ef_bunyan"*/, v12);
    sub_B16FFC(&StringLiteral_18104/*"ef_bunyan99"*/, v13);
    byte_40FA12F = 1;
  }
  v14 = sub_B170CC(EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo, method, v2, v3, v4);
  EventInfoJapaneseCushionControl___c__DisplayClass35_0___ctor(
    (EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_26;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  ServantAnimPosition = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                          this,
                          this->fields.beforeCushionNum,
                          v21);
  y = ServantAnimPosition.fields.y;
  v23 = (System_Int32_array **)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 (System_String_o *)StringLiteral_18101/*"ef_bunyan"*/,
                                 0LL);
  v24 = (UnityEngine_GameObject_o **)(v14 + 24);
  *(_QWORD *)(v14 + 24) = v23;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), v23, v25, v26, v27, v28, v29, v30);
  v31 = *(UnityEngine_Object_o **)(v14 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
    goto LABEL_25;
  v33 = *v24;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v32);
  GameObjectExtensions__SafeSetParent_27425996(v33, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v24, y - this->fields.servantStepHeight, 0LL);
  if ( !*v24 )
    goto LABEL_26;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      *v24,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_25;
  v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v36, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v14,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__,
    0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_26;
  Component_srcLineSprite[1].klass = (UnityEngine_Object_c *)v39;
  v46 = Component_srcLineSprite + 1;
  sub_B16F98((BattleServantConfConponent_o *)v46, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
  v51 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v47, v48, v49, v50);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v14,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__,
    0LL);
  v46->monitor = v51;
  sub_B16F98((BattleServantConfConponent_o *)&v46->monitor, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
  v58 = *(UnityEngine_GameObject_o **)(v14 + 24);
  if ( !v58 )
    goto LABEL_26;
  v59 = (System_String_o *)StringLiteral_18104/*"ef_bunyan99"*/;
  v60 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v58,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
    goto LABEL_25;
  if ( !v60 )
LABEL_26:
    sub_B170D4();
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v60, v59, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v60, v59, 0LL);
    return;
  }
LABEL_25:
  EventInfoJapaneseCushionControl__EndCushionAnim(this, v32);
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

  if ( (byte_40FA137 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&cushionNum);
    byte_40FA137 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
  {
    eventId = eventUiEntity->fields.eventId;
    id = eventUiEntity->fields.id;
    if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
    }
    EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(eventId, id, method);
    UnityEngine_PlayerPrefs__SetInt(EventProgressValueSaveKey, cushionNum, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  __int64 v5; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  int max_length; // w9
  UnityEngine_GameObject_o *v8; // x0

  if ( this->fields.servantType != 1 )
  {
    servantObjectData = this->fields.servantObjectData;
    if ( servantObjectData )
    {
      v5 = 0LL;
      do
      {
        ExtentionCushionObjectList = servantObjectData->fields.ExtentionCushionObjectList;
        if ( !ExtentionCushionObjectList )
          break;
        max_length = ExtentionCushionObjectList->max_length;
        if ( (int)v5 >= max_length )
          return;
        if ( (unsigned int)v5 >= max_length )
        {
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v8 = ExtentionCushionObjectList->m_Items[v5];
        if ( !v8 )
          break;
        UnityEngine_GameObject__SetActive(v8, 1, 0LL);
        servantObjectData = this->fields.servantObjectData;
        ++v5;
      }
      while ( servantObjectData );
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoJapaneseCushionControl__Setup(
        EventInfoJapaneseCushionControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t id; // w21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  int32_t CurrentCushionNum; // w0
  int32_t beforeCushionNum; // w8
  int32_t v18; // w0
  int32_t v19; // w0
  const MethodInfo *v20; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t max_length; // w20
  int32_t v24; // w0
  const MethodInfo *v25; // x2
  float v26; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v27; // x8
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  int32_t v31; // w8
  __int64 v32; // x21
  struct EventInfoJapaneseCushionControl_ObjectData_o *v33; // x8
  struct UnityEngine_GameObject_array *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  EventInfoJapaneseCushionControl_c *v36; // x0
  float v37; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v38; // x8
  const MethodInfo *v39; // x1

  if ( (byte_40FA12D & 1) == 0 )
  {
    sub_B16FFC(&EventInfoJapaneseCushionControl_TypeInfo, entitys);
    byte_40FA12D = 1;
  }
  this->fields.eventUiValueEntityList = entitys;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
    (System_Int32_array **)entitys,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  this->fields.cushionAddNum = 0;
  if ( !eventUiEntity )
    goto LABEL_29;
  eventId = eventUiEntity->fields.eventId;
  id = eventUiEntity->fields.id;
  if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
  }
  if ( EventInfoJapaneseCushionControl__CheckEventProgressValueSaveData(eventId, id, v10) )
  {
    this->fields.beforeCushionNum = EventInfoJapaneseCushionControl__GetBeforeCushionNum(this, v14);
    CurrentCushionNum = EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v15);
    beforeCushionNum = this->fields.beforeCushionNum;
    this->fields.currentCushionNum = CurrentCushionNum;
    v18 = CurrentCushionNum - beforeCushionNum;
    this->fields.cushionAddNum = v18;
    this->fields.cushionAddNum = UnityEngine_Mathf__Max_40727628(v18, 0, 0LL);
  }
  else
  {
    v19 = EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v14);
    this->fields.beforeCushionNum = v19;
    this->fields.currentCushionNum = v19;
    EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(this, v19, v20);
  }
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_29;
  CushionObjectList = servantObjectData->fields.CushionObjectList;
  if ( !CushionObjectList )
    goto LABEL_29;
  max_length = CushionObjectList->max_length;
  v24 = UnityEngine_Mathf__Min_40727532(this->fields.beforeCushionNum, max_length, 0LL);
  this->fields.beforeCushionNum = v24;
  *(UnityEngine_Vector3_o *)(&v26 - 1) = EventInfoJapaneseCushionControl__GetServantPosition(this, v24, v25);
  v27 = this->fields.servantObjectData;
  if ( !v27 )
    goto LABEL_29;
  GameObjectExtensions__SetLocalPositionY(v27->fields.ServantObject, v26, 0LL);
  v31 = this->fields.beforeCushionNum;
  if ( v31 >= 1 )
  {
    v32 = 0LL;
    while ( 1 )
    {
      v33 = this->fields.servantObjectData;
      if ( !v33 )
        break;
      v34 = v33->fields.CushionObjectList;
      if ( !v34 )
        break;
      if ( (unsigned int)v32 >= v34->max_length )
      {
        sub_B17100(v28, v29, v30);
        sub_B170A0();
      }
      v35 = v34->m_Items[v32];
      if ( !v35 )
        break;
      UnityEngine_GameObject__SetActive(v35, 1, 0LL);
      v31 = this->fields.beforeCushionNum;
      if ( (int)++v32 >= v31 )
        goto LABEL_20;
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_20:
  if ( v31 >= max_length && !this->fields.servantType && this->fields.currentCushionNum >= max_length )
  {
    v36 = EventInfoJapaneseCushionControl_TypeInfo;
    if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
      v36 = EventInfoJapaneseCushionControl_TypeInfo;
    }
    *(UnityEngine_Vector3_o *)(&v37 - 1) = EventInfoJapaneseCushionControl__GetServantPosition(
                                             this,
                                             v36->static_fields->LIMIT_BREAK_CUSHION_NUM,
                                             v30);
    v38 = this->fields.servantObjectData;
    if ( !v38 )
      goto LABEL_29;
    GameObjectExtensions__SetLocalPositionY(v38->fields.ServantObject, v37, 0LL);
    EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(this, v39);
  }
}


void __fastcall EventInfoJapaneseCushionControl__SetupCushionObject(
        EventInfoJapaneseCushionControl_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UISprite_o *Component_srcLineSprite; // x23
  System_String_o **v14; // x9
  System_String_o **v15; // x8

  if ( (byte_40FA12E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_18450/*"event_gauge_img_8036703"*/, v10);
    sub_B16FFC(&StringLiteral_18449/*"event_gauge_img_8036702"*/, v11);
    sub_B16FFC(&StringLiteral_18448/*"event_gauge_img_8036701"*/, v12);
    byte_40FA12E = 1;
  }
  if ( !obj )
    goto LABEL_16;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            obj,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    v14 = (System_String_o **)&StringLiteral_18449/*"event_gauge_img_8036702"*/;
    v15 = (System_String_o **)&StringLiteral_18448/*"event_gauge_img_8036701"*/;
    if ( index % 5 == 4 )
      v14 = (System_String_o **)&StringLiteral_18450/*"event_gauge_img_8036703"*/;
    if ( index % 5 == 4 )
      v15 = (System_String_o **)&StringLiteral_18450/*"event_gauge_img_8036703"*/;
    if ( type == 1 )
      v15 = v14;
    EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, Component_srcLineSprite, *v15, 0LL);
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))Component_srcLineSprite->klass->vtable._33_MakePixelPerfect.method)(
        Component_srcLineSprite,
        Component_srcLineSprite->klass->vtable._34_get_minWidth.methodPtr);
      UnityEngine_GameObject__SetActive(obj, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall EventInfoJapaneseCushionControl__StartAddedCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentCushionNum; // w1
  const MethodInfo *v5; // x1
  int32_t cushionAddNum; // w8
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x9
  struct UnityEngine_GameObject_array *CushionObjectList; // x9

  currentCushionNum = this->fields.currentCushionNum;
  this->fields.cushionStartAnimIndex = this->fields.beforeCushionNum;
  EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(this, currentCushionNum, v2);
  cushionAddNum = this->fields.cushionAddNum;
  if ( cushionAddNum <= 0 )
  {
    EventInfoJapaneseCushionControl__EndCushionAnim(this, v5);
  }
  else
  {
    if ( this->fields.servantType )
      goto LABEL_6;
    servantObjectData = this->fields.servantObjectData;
    if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
      sub_B170D4();
    if ( this->fields.beforeCushionNum + cushionAddNum < (signed int)CushionObjectList->max_length )
LABEL_6:
      EventInfoJapaneseCushionControl__PlayAddedCushionAnim(this, v5);
    else
      EventInfoJapaneseCushionControl__PlayOverflowCushionAnim(this, v5);
  }
}


void __fastcall EventInfoJapaneseCushionControl___Initialization_b__30_0(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B170D4();
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl___PlayAddedCushionAnim_b__36_0(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  UnityEngine_Behaviour_o *ServantSprite; // x0
  const MethodInfo *v5; // x1

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData || (ServantSprite = (UnityEngine_Behaviour_o *)servantObjectData->fields.ServantSprite) == 0LL )
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(ServantSprite, 0, 0LL);
  EventInfoJapaneseCushionControl__DeleteBeforeAnim(this, v5);
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
  UnityEngine_Component_o *Parent; // x0

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData
    || (Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(
                                              servantObjectData->fields.ServantObject,
                                              0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return UnityEngine_Component__get_gameObject(Parent, 0LL);
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
  UnityEngine_Behaviour_o *ServantSprite; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (servantObjectData = _4__this->fields.servantObjectData) == 0LL
    || (ServantSprite = (UnityEngine_Behaviour_o *)servantObjectData->fields.ServantSprite) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(ServantSprite, 0, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl___c__DisplayClass35_0___PlayOverflowCushionAnim_b__1(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0
  System_Int32_array **animGameObject; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  struct EventInfoJapaneseCushionControl_o *v13; // x0
  __int64 v14; // x20
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int max_length; // w9
  UnityEngine_GameObject_o *v18; // x0
  EventInfoJapaneseCushionControl_o *v19; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  animGameObject = (System_Int32_array **)this->fields.animGameObject;
  _4__this->fields.beforeAnimObject = (struct UnityEngine_GameObject_o *)animGameObject;
  sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.beforeAnimObject, animGameObject, v2, v3, v4, v5, v6, v7);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_10;
  v14 = 0LL;
  while ( 1 )
  {
    servantObjectData = v13->fields.servantObjectData;
    if ( !servantObjectData )
      goto LABEL_10;
    CushionObjectList = servantObjectData->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_10;
    max_length = CushionObjectList->max_length;
    if ( (int)v14 >= max_length )
      break;
    if ( (unsigned int)v14 >= max_length )
    {
      sub_B17100(v13, v11, v12);
      sub_B170A0();
    }
    v18 = CushionObjectList->m_Items[v14];
    if ( v18 )
    {
      UnityEngine_GameObject__SetActive(v18, 1, 0LL);
      v13 = this->fields.__4__this;
      ++v14;
      if ( v13 )
        continue;
    }
    goto LABEL_10;
  }
  EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(v13, 0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
LABEL_10:
    sub_B170D4();
  EventInfoJapaneseCushionControl__EndCushionAnim(v19, 0LL);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0
  System_Int32_array **animGameObject; // x1
  EventInfoJapaneseCushionControl_o *v11; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (animGameObject = (System_Int32_array **)this->fields.animGameObject,
        _4__this->fields.beforeAnimObject = (struct UnityEngine_GameObject_o *)animGameObject,
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.beforeAnimObject,
          animGameObject,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (v11 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(v11, 0LL);
}