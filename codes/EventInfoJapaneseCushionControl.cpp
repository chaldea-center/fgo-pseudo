void __fastcall EventInfoJapaneseCushionControl___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct EventInfoJapaneseCushionControl_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B0DFC & 1) == 0 )
  {
    sub_B52984(&EventInfoJapaneseCushionControl_TypeInfo);
    sub_B52984(&StringLiteral_5650/*"EVENT_CUSHION_VALUE"*/);
    byte_42B0DFC = 1;
  }
  EventInfoJapaneseCushionControl_TypeInfo->static_fields->LIMIT_BREAK_CUSHION_NUM = 73;
  static_fields = EventInfoJapaneseCushionControl_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_5650/*"EVENT_CUSHION_VALUE"*/;
  static_fields->SAVEKEY_EVENT_CUSHION_VALUE = (struct System_String_o *)StringLiteral_5650/*"EVENT_CUSHION_VALUE"*/;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->SAVEKEY_EVENT_CUSHION_VALUE, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall EventInfoJapaneseCushionControl___ctor(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


bool __fastcall EventInfoJapaneseCushionControl__CheckEventProgressValueSaveData(
        int32_t eventId,
        int32_t eventUiId,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_42B0DF9 & 1) == 0 )
  {
    sub_B52984(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_42B0DF9 = 1;
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
  BattleServantConfConponent_o *p_beforeAnimObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *beforeAnimObject; // t1
  __int64 v6; // x1
  BattleServantConfConponent_c *klass; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42B0DF5 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0DF5 = 1;
  }
  beforeAnimObject = this->fields.beforeAnimObject;
  p_beforeAnimObject = (BattleServantConfConponent_o *)&this->fields.beforeAnimObject;
  v4 = (UnityEngine_Object_o *)beforeAnimObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = p_beforeAnimObject->klass;
    if ( !p_beforeAnimObject->klass )
      goto LABEL_19;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)klass,
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    klass = (BattleServantConfConponent_c *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)klass & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL);
    }
    klass = p_beforeAnimObject->klass;
    if ( p_beforeAnimObject->klass )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0LL);
      v9 = (UnityEngine_Object_o *)p_beforeAnimObject->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v9, 0LL);
      p_beforeAnimObject->klass = 0LL;
      sub_B52920(p_beforeAnimObject, 0LL, v10, v11, v12, v13, v14, v15);
      return;
    }
LABEL_19:
    sub_B52A5C(klass, v6);
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
  __int64 v10; // x0

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
    {
      v10 = sub_B52A88(this);
      sub_B52A28(v10, 0LL);
    }
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
  ServantObject = servantObjectData->fields.ServantObject;
  ServantPosition = EventInfoJapaneseCushionControl__GetServantPosition(this, this->fields.currentCushionNum, v2);
  GameObjectExtensions__SetLocalPosition(ServantObject, ServantPosition, 0LL);
  animEndAction = this->fields.animEndAction;
  this->fields.cushionAddNum = 0;
  this->fields.animEndAction = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.animEndAction, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_42B0DF7 & 1) == 0 )
  {
    sub_B52984(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_42B0DF7 = 1;
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
  EventInfoJapaneseCushionControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x10
  struct EventUiValueEntity_array *eventUiValueEntityList; // x11
  int max_length; // w8
  int32_t priority; // w10
  __int64 v7; // x9
  EventUiValueEntity_o **m_Items; // x11
  EventUiValueEntity_o *v9; // x12
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8

  v2 = this;
  if ( (byte_42B0DF6 & 1) == 0 )
  {
    this = (EventInfoJapaneseCushionControl_o *)sub_B52984(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_42B0DF6 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( eventUiEntity
    && (eventUiValueEntityList = v2->fields.eventUiValueEntityList) != 0LL
    && (max_length = eventUiValueEntityList->max_length, max_length >= 1) )
  {
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
        goto LABEL_10;
    }
    this = (EventInfoJapaneseCushionControl_o *)System_Int32__Parse(v9->fields.value, 0LL);
    servantObjectData = v2->fields.servantObjectData;
    if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
LABEL_19:
      sub_B52A5C(this, method);
    if ( (int)this >= (signed int)CushionObjectList->max_length )
    {
      this = (EventInfoJapaneseCushionControl_o *)EventInfoJapaneseCushionControl_TypeInfo;
      if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
        this = (EventInfoJapaneseCushionControl_o *)EventInfoJapaneseCushionControl_TypeInfo;
      }
      LODWORD(this) = this[1].klass->_1.image;
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

  if ( (byte_42B0DFA & 1) == 0 )
  {
    sub_B52984(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_42B0DFA = 1;
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


System_String_o *__fastcall EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(
        int32_t eventId,
        int32_t eventUiId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array *v11; // x19
  EventInfoJapaneseCushionControl_c *v12; // x8
  System_Int32_array **SAVEKEY_EVENT_CUSHION_VALUE; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x20
  __int64 v43; // x0
  __int64 v44; // x0
  int32_t v45; // [xsp+8h] [xbp-18h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-14h] BYREF

  v45 = eventUiId;
  v46 = eventId;
  if ( (byte_42B0DF8 & 1) == 0 )
  {
    sub_B52984(&EventInfoJapaneseCushionControl_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B0DF8 = 1;
  }
  v3 = (System_String_o *)sub_B5299C(string___TypeInfo, 5LL);
  v11 = (System_String_array *)v3;
  v12 = EventInfoJapaneseCushionControl_TypeInfo;
  if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
    v12 = EventInfoJapaneseCushionControl_TypeInfo;
  }
  if ( !v11 )
    sub_B52A5C(v3, v4);
  SAVEKEY_EVENT_CUSHION_VALUE = (System_Int32_array **)v12->static_fields->SAVEKEY_EVENT_CUSHION_VALUE;
  if ( SAVEKEY_EVENT_CUSHION_VALUE )
  {
    v3 = (System_String_o *)sub_B52A44(SAVEKEY_EVENT_CUSHION_VALUE, v11->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_28;
  }
  if ( !v11->max_length )
    goto LABEL_27;
  v11->m_Items[0] = (System_String_o *)SAVEKEY_EVENT_CUSHION_VALUE;
  sub_B52920((BattleServantConfConponent_o *)v11->m_Items, SAVEKEY_EVENT_CUSHION_VALUE, v5, v6, v7, v8, v9, v10);
  v3 = (System_String_o *)StringLiteral_16011/*"_"*/;
  if ( StringLiteral_16011/*"_"*/ )
  {
    v3 = (System_String_o *)sub_B52A44(StringLiteral_16011/*"_"*/, v11->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_28;
    v20 = (System_Int32_array **)StringLiteral_16011/*"_"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_27;
  v11->m_Items[1] = (System_String_o *)v20;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[1], v20, v14, v15, v16, v17, v18, v19);
  v3 = System_Int32__ToString((int32_t)&v46, 0LL);
  v27 = (System_Int32_array **)v3;
  if ( v3 )
  {
    v3 = (System_String_o *)sub_B52A44(v3, v11->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_28;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_27;
  v11->m_Items[2] = (System_String_o *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[2], v27, v21, v22, v23, v24, v25, v26);
  v3 = (System_String_o *)StringLiteral_16011/*"_"*/;
  if ( StringLiteral_16011/*"_"*/ )
  {
    v3 = (System_String_o *)sub_B52A44(StringLiteral_16011/*"_"*/, v11->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_28;
    v34 = (System_Int32_array **)StringLiteral_16011/*"_"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v11->max_length <= 3 )
    goto LABEL_27;
  v11->m_Items[3] = (System_String_o *)v34;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[3], v34, v28, v29, v30, v31, v32, v33);
  v3 = System_Int32__ToString((int32_t)&v45, 0LL);
  v41 = (System_Int32_array **)v3;
  if ( v3 )
  {
    v3 = (System_String_o *)sub_B52A44(v3, v11->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_28:
      v44 = sub_B52A7C(v3);
      sub_B52A28(v44, 0LL);
    }
  }
  if ( v11->max_length <= 4 )
  {
LABEL_27:
    v43 = sub_B52A88(v3);
    sub_B52A28(v43, 0LL);
  }
  v11->m_Items[4] = (System_String_o *)v41;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[4], v41, v35, v36, v37, v38, v39, v40);
  return System_String__Concat_44648440(v11, 0LL);
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
  int v7; // w9
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s1
  float v12; // s0
  float v13; // s1
  __int64 v14; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
    sub_B52A5C(this, method);
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
    v14 = sub_B52A88(this);
    sub_B52A28(v14, 0LL);
  }
  if ( v7 >= (unsigned int)max_length )
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
  __int64 v10; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
    sub_B52A5C(this, index);
  max_length = CushionObjectList->max_length;
  v6 = max_length - 1;
  if ( max_length > index )
    v6 = index;
  if ( v6 >= (unsigned int)max_length )
  {
    v10 = sub_B52A88(this);
    sub_B52A28(v10, 0LL);
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
    sub_B52A5C(this, cushionNum);
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
  UIWidget_o *ServantSprite; // x0
  UIWidget_OnPostFillCallback_c *klass; // x8
  _QWORD *genericContainerHandle; // x21
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v14; // x21
  UISprite_o *bgSprite; // x1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o **p_servantObjectData; // x20
  struct EventInfoJapaneseCushionControl_ObjectData_o *v18; // x8
  UISprite_o *NameSprite; // x1
  __int64 *v20; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v21; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v22; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v23; // x8
  const MethodInfo *v24; // x4
  struct EventInfoJapaneseCushionControl_ObjectData_o *v25; // x8
  unsigned __int64 v26; // x20
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v29; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  unsigned __int64 v31; // x9
  __int64 v32; // x0

  if ( (byte_42B0DF0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&StringLiteral_18649/*"event_gauge_bg_8036702"*/);
    sub_B52984(&StringLiteral_18657/*"event_gauge_sd_8036702"*/);
    sub_B52984(&StringLiteral_18647/*"event_gauge_base_8036702"*/);
    sub_B52984(&StringLiteral_18648/*"event_gauge_bg_8036701"*/);
    sub_B52984(&StringLiteral_18646/*"event_gauge_base_8036701"*/);
    sub_B52984(&StringLiteral_18740/*"event_title_80367"*/);
    sub_B52984(&StringLiteral_18656/*"event_gauge_sd_8036701"*/);
    byte_42B0DF0 = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42AC2A0 )
    {
      sub_B52984(&TerminalSceneComponent_TypeInfo);
      byte_42AC2A0 = 1;
    }
    ServantSprite = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      ServantSprite = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = ServantSprite->fields.onPostFill->klass;
    if ( !klass )
      goto LABEL_46;
    genericContainerHandle = klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)genericContainerHandle[4];
    if ( !ServantSprite )
      goto LABEL_46;
    UIWidget__set_depth(ServantSprite, this->fields.titleBackButtonDepth + 2, 0LL);
    ServantSprite = (UIWidget_o *)genericContainerHandle[3];
    if ( !ServantSprite )
      goto LABEL_46;
    UIWidget__set_depth(ServantSprite, this->fields.titleBackButtonDepth, 0LL);
  }
  this->fields.eventUiEntity = entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v14, 0LL);
  bgSprite = this->fields.bgSprite;
  if ( this->fields.servantType == 1 )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_18647/*"event_gauge_base_8036702"*/,
      0LL);
    ServantSprite = (UIWidget_o *)this->fields.bgSprite;
    if ( !ServantSprite )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    p_servantObjectData = &this->fields.servantObjectData;
    servantObjectData = this->fields.servantObjectData;
    if ( !servantObjectData )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                    (EventInfoUIBase_o *)this,
                                    servantObjectData->fields.ServantSprite,
                                    (System_String_o *)StringLiteral_18657/*"event_gauge_sd_8036702"*/,
                                    0LL);
    v18 = this->fields.servantObjectData;
    if ( !v18 )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)v18->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    if ( !*p_servantObjectData )
      goto LABEL_46;
    NameSprite = (*p_servantObjectData)->fields.NameSprite;
    v20 = &StringLiteral_18649/*"event_gauge_bg_8036702"*/;
  }
  else
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_18646/*"event_gauge_base_8036701"*/,
      0LL);
    ServantSprite = (UIWidget_o *)this->fields.bgSprite;
    if ( !ServantSprite )
      goto LABEL_46;
    ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
      ServantSprite,
      ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.titleSprite,
      (System_String_o *)StringLiteral_18740/*"event_title_80367"*/,
      0LL);
    ServantSprite = (UIWidget_o *)this->fields.titleSprite;
    if ( !ServantSprite )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    p_servantObjectData = &this->fields.servantObjectData;
    v21 = this->fields.servantObjectData;
    if ( !v21 )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                    (EventInfoUIBase_o *)this,
                                    v21->fields.ServantSprite,
                                    (System_String_o *)StringLiteral_18656/*"event_gauge_sd_8036701"*/,
                                    0LL);
    v22 = this->fields.servantObjectData;
    if ( !v22 )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)v22->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    if ( !*p_servantObjectData )
      goto LABEL_46;
    NameSprite = (*p_servantObjectData)->fields.NameSprite;
    v20 = &StringLiteral_18648/*"event_gauge_bg_8036701"*/;
  }
  ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                  (EventInfoUIBase_o *)this,
                                  NameSprite,
                                  (System_String_o *)*v20,
                                  0LL);
  v23 = this->fields.servantObjectData;
  if ( !v23 )
    goto LABEL_46;
  ServantSprite = (UIWidget_o *)v23->fields.NameSprite;
  if ( !ServantSprite )
    goto LABEL_46;
  ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                  ServantSprite,
                                  ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
  v25 = *p_servantObjectData;
  if ( !*p_servantObjectData )
    goto LABEL_46;
  v26 = 0LL;
  while ( 1 )
  {
    CushionObjectList = v25->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_46;
    max_length = CushionObjectList->max_length;
    if ( (__int64)v26 >= (int)max_length )
      break;
    if ( v26 >= max_length )
    {
LABEL_48:
      v32 = sub_B52A88(ServantSprite);
      sub_B52A28(v32, 0LL);
    }
    EventInfoJapaneseCushionControl__SetupCushionObject(
      this,
      CushionObjectList->m_Items[v26],
      this->fields.servantType,
      v26,
      v24);
    v25 = this->fields.servantObjectData;
    ++v26;
    if ( !v25 )
      goto LABEL_46;
  }
  if ( !this->fields.servantType )
  {
    v29 = 0LL;
    do
    {
      ExtentionCushionObjectList = v25->fields.ExtentionCushionObjectList;
      if ( !ExtentionCushionObjectList )
        break;
      v31 = ExtentionCushionObjectList->max_length;
      if ( (__int64)v29 >= (int)v31 )
        return;
      if ( v29 >= v31 )
        goto LABEL_48;
      EventInfoJapaneseCushionControl__SetupCushionObject(
        this,
        ExtentionCushionObjectList->m_Items[v29],
        this->fields.servantType,
        v29,
        v24);
      v25 = this->fields.servantObjectData;
      ++v29;
    }
    while ( v25 );
LABEL_46:
    sub_B52A5C(ServantSprite, entity);
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
    sub_B52A5C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl__OnDisable(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  UIWidget_o *v3; // x0
  UIWidget_OnPostFillCallback_c *klass; // x8
  void *genericContainerHandle; // x19

  if ( (byte_42B0DEF & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42B0DEF = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42AC2A0 )
    {
      sub_B52984(&TerminalSceneComponent_TypeInfo);
      byte_42AC2A0 = 1;
    }
    v3 = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v3 = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v3->fields.onPostFill->klass;
    if ( !klass
      || (genericContainerHandle = klass->_2.genericContainerHandle) == 0LL
      || (v3 = (UIWidget_o *)*((_QWORD *)genericContainerHandle + 4)) == 0LL
      || (UIWidget__set_depth(v3, 8, 0LL), (v3 = (UIWidget_o *)*((_QWORD *)genericContainerHandle + 3)) == 0LL) )
    {
      sub_B52A5C(v3, method);
    }
    UIWidget__set_depth(v3, 6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoJapaneseCushionControl__PlayAddedCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  int32_t servantType; // w8
  int v4; // w8
  System_String_o **v5; // x10
  System_String_o **v6; // x9
  System_String_o **v7; // x8
  System_String_o *v8; // x20
  int32_t v9; // w0
  int32_t v10; // w0
  int32_t cushionStartAnimIndex; // w1
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *v13; // x0
  const MethodInfo *v14; // x1
  float v15; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  float v17; // s8
  __int64 v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o **v25; // x22
  System_String_o **v26; // x8
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *v34; // x23
  UnityEngine_GameObject_o *v35; // x23
  UnityEngine_GameObject_o *ServantRoot; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Action_o *v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Object_o *v45; // x22
  System_Action_o *v46; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Object_o *v53; // x21
  UnityEngine_Object_o *Clip; // x22

  if ( (byte_42B0DF4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__);
    sub_B52984(&EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo);
    sub_B52984(&StringLiteral_18303/*"ef_bunyan"*/);
    sub_B52984(&StringLiteral_18293/*"ef_anning2"*/);
    sub_B52984(&StringLiteral_18292/*"ef_anning1"*/);
    sub_B52984(&StringLiteral_18291/*"ef_anning"*/);
    sub_B52984(&StringLiteral_18305/*"ef_bunyan2"*/);
    sub_B52984(&StringLiteral_18304/*"ef_bunyan1"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0DF4 = 1;
  }
  servantType = this->fields.servantType;
  if ( !servantType )
  {
    v4 = this->fields.cushionStartAnimIndex % 5;
    v5 = (System_String_o **)&StringLiteral_18305/*"ef_bunyan2"*/;
    v6 = (System_String_o **)&StringLiteral_18304/*"ef_bunyan1"*/;
LABEL_7:
    if ( v4 == 4 )
      v7 = v5;
    else
      v7 = v6;
    goto LABEL_11;
  }
  if ( servantType == 1 )
  {
    v4 = this->fields.cushionStartAnimIndex % 5;
    v5 = (System_String_o **)&StringLiteral_18293/*"ef_anning2"*/;
    v6 = (System_String_o **)&StringLiteral_18292/*"ef_anning1"*/;
    goto LABEL_7;
  }
  v7 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_11:
  v8 = *v7;
  v9 = this->fields.cushionAddNum - 1;
  this->fields.cushionAddNum = v9;
  v10 = UnityEngine_Mathf__Max_41525284(v9, 0, 0LL);
  cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
  this->fields.cushionAddNum = v10;
  *(UnityEngine_Vector3_o *)(&v15 - 1) = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                                           this,
                                           cushionStartAnimIndex,
                                           v12);
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_39;
  v17 = v15;
  GameObjectExtensions__GetLocalPositionX(servantObjectData->fields.ServantObject, 0LL);
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
    goto LABEL_38;
  v18 = sub_B52A54(EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo);
  EventInfoJapaneseCushionControl___c__DisplayClass36_0___ctor(
    (EventInfoJapaneseCushionControl___c__DisplayClass36_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_39;
  *(_QWORD *)(v18 + 24) = this;
  v25 = (UnityEngine_GameObject_o **)(v18 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  if ( this->fields.servantType )
    v26 = (System_String_o **)&StringLiteral_18291/*"ef_anning"*/;
  else
    v26 = (System_String_o **)&StringLiteral_18303/*"ef_bunyan"*/;
  v27 = (System_Int32_array **)EventInfoUIBase__InstantiateFromEventUIAssetData((EventInfoUIBase_o *)this, *v26, 0LL);
  *(_QWORD *)(v18 + 16) = v27;
  sub_B52920((BattleServantConfConponent_o *)(v18 + 16), v27, v28, v29, v30, v31, v32, v33);
  v34 = *(UnityEngine_Object_o **)(v18 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
    goto LABEL_38;
  v35 = *v25;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v14);
  GameObjectExtensions__SafeSetParent_32091088(v35, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v25, v17 - this->fields.servantStepHeight, 0LL);
  v13 = *v25;
  if ( !*v25 )
    goto LABEL_39;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v13,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_38;
  v38 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)this,
    Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__,
    0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_39;
  Component_srcLineSprite[1].klass = (UnityEngine_Object_c *)v38;
  v45 = Component_srcLineSprite + 1;
  sub_B52920((BattleServantConfConponent_o *)v45, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
  v46 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v18,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__,
    0LL);
  v45->monitor = v46;
  sub_B52920((BattleServantConfConponent_o *)&v45->monitor, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
  v13 = *(UnityEngine_GameObject_o **)(v18 + 16);
  if ( !v13 )
    goto LABEL_39;
  v53 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v13,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v53, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) == 0 )
    goto LABEL_38;
  if ( !v53 )
LABEL_39:
    sub_B52A5C(v13, v14);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v53, v8, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)v53, v8, 0LL);
    return;
  }
LABEL_38:
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(this, v14);
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
    sub_B52920(
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
  __int64 v3; // x20
  UnityEngine_GameObject_o *v4; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2
  float y; // s8
  System_Int32_array **v14; // x0
  UnityEngine_GameObject_o **v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *v22; // x22
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_GameObject_o *ServantRoot; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Action_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Object_o *v33; // x21
  System_Action_o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *v41; // x20
  UnityEngine_Object_o *v42; // x21
  UnityEngine_Object_o *Clip; // x22
  UnityEngine_Vector3_o ServantAnimPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B0DF3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__);
    sub_B52984(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__);
    sub_B52984(&EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo);
    sub_B52984(&StringLiteral_18303/*"ef_bunyan"*/);
    sub_B52984(&StringLiteral_18306/*"ef_bunyan99"*/);
    byte_42B0DF3 = 1;
  }
  v3 = sub_B52A54(EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo);
  EventInfoJapaneseCushionControl___c__DisplayClass35_0___ctor(
    (EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_26;
  *(_QWORD *)(v3 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  ServantAnimPosition = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                          this,
                          this->fields.beforeCushionNum,
                          v12);
  y = ServantAnimPosition.fields.y;
  v14 = (System_Int32_array **)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 (System_String_o *)StringLiteral_18303/*"ef_bunyan"*/,
                                 0LL);
  v15 = (UnityEngine_GameObject_o **)(v3 + 24);
  *(_QWORD *)(v3 + 24) = v14;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), v14, v16, v17, v18, v19, v20, v21);
  v22 = *(UnityEngine_Object_o **)(v3 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    goto LABEL_25;
  v23 = *v15;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v5);
  GameObjectExtensions__SafeSetParent_32091088(v23, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v15, y - this->fields.servantStepHeight, 0LL);
  v4 = *v15;
  if ( !*v15 )
    goto LABEL_26;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v4,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_25;
  v26 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v3,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__,
    0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_26;
  Component_srcLineSprite[1].klass = (UnityEngine_Object_c *)v26;
  v33 = Component_srcLineSprite + 1;
  sub_B52920((BattleServantConfConponent_o *)v33, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
  v34 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v3,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__,
    0LL);
  v33->monitor = v34;
  sub_B52920((BattleServantConfConponent_o *)&v33->monitor, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
  v4 = *(UnityEngine_GameObject_o **)(v3 + 24);
  if ( !v4 )
    goto LABEL_26;
  v41 = (System_String_o *)StringLiteral_18306/*"ef_bunyan99"*/;
  v42 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v4,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
    goto LABEL_25;
  if ( !v42 )
LABEL_26:
    sub_B52A5C(v4, v5);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v42, v41, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)v42, v41, 0LL);
    return;
  }
LABEL_25:
  EventInfoJapaneseCushionControl__EndCushionAnim(this, v5);
}


void __fastcall EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(
        EventInfoJapaneseCushionControl_o *this,
        int32_t cushionNum,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t id; // w21
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_42B0DFB & 1) == 0 )
  {
    sub_B52984(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_42B0DFB = 1;
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
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  EventInfoJapaneseCushionControl_o *v3; // x19
  __int64 v4; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  int max_length; // w9
  __int64 v7; // x0

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
        {
          v7 = sub_B52A88(this);
          sub_B52A28(v7, 0LL);
        }
        this = (EventInfoJapaneseCushionControl_o *)ExtentionCushionObjectList->m_Items[v4];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        servantObjectData = v3->fields.servantObjectData;
        ++v4;
      }
      while ( servantObjectData );
    }
    sub_B52A5C(this, method);
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
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w20
  int32_t id; // w21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  int32_t CurrentCushionNum; // w0
  int32_t beforeCushionNum; // w8
  int32_t v20; // w0
  int32_t v21; // w0
  const MethodInfo *v22; // x2
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int32_t max_length; // w20
  int32_t v26; // w0
  const MethodInfo *v27; // x2
  float v28; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v29; // x8
  const MethodInfo *v30; // x2
  int32_t v31; // w8
  __int64 v32; // x21
  struct EventInfoJapaneseCushionControl_ObjectData_o *v33; // x8
  struct UnityEngine_GameObject_array *v34; // x8
  EventInfoJapaneseCushionControl_c *v35; // x0
  float v36; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v37; // x8
  const MethodInfo *v38; // x1
  __int64 v39; // x0

  if ( (byte_42B0DF1 & 1) == 0 )
  {
    sub_B52984(&EventInfoJapaneseCushionControl_TypeInfo);
    byte_42B0DF1 = 1;
  }
  this->fields.eventUiValueEntityList = entitys;
  sub_B52920(
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
  if ( EventInfoJapaneseCushionControl__CheckEventProgressValueSaveData(eventId, id, v12) )
  {
    this->fields.beforeCushionNum = EventInfoJapaneseCushionControl__GetBeforeCushionNum(this, v16);
    CurrentCushionNum = EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v17);
    beforeCushionNum = this->fields.beforeCushionNum;
    this->fields.currentCushionNum = CurrentCushionNum;
    v20 = CurrentCushionNum - beforeCushionNum;
    this->fields.cushionAddNum = v20;
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Mathf__Max_41525284(v20, 0, 0LL);
    this->fields.cushionAddNum = (int)v10;
  }
  else
  {
    v21 = EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v16);
    this->fields.beforeCushionNum = v21;
    this->fields.currentCushionNum = v21;
    EventInfoJapaneseCushionControl__SaveEventProgressValueSaveData(this, v21, v22);
  }
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_29;
  CushionObjectList = servantObjectData->fields.CushionObjectList;
  if ( !CushionObjectList )
    goto LABEL_29;
  max_length = CushionObjectList->max_length;
  v26 = UnityEngine_Mathf__Min_41525188(this->fields.beforeCushionNum, max_length, 0LL);
  this->fields.beforeCushionNum = v26;
  *(UnityEngine_Vector3_o *)(&v28 - 1) = EventInfoJapaneseCushionControl__GetServantPosition(this, v26, v27);
  v29 = this->fields.servantObjectData;
  if ( !v29 )
    goto LABEL_29;
  GameObjectExtensions__SetLocalPositionY(v29->fields.ServantObject, v28, 0LL);
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
        v39 = sub_B52A88(v10);
        sub_B52A28(v39, 0LL);
      }
      v10 = v34->m_Items[v32];
      if ( !v10 )
        break;
      UnityEngine_GameObject__SetActive(v10, 1, 0LL);
      v31 = this->fields.beforeCushionNum;
      if ( (int)++v32 >= v31 )
        goto LABEL_20;
    }
LABEL_29:
    sub_B52A5C(v10, v11);
  }
LABEL_20:
  if ( v31 >= max_length && !this->fields.servantType && this->fields.currentCushionNum >= max_length )
  {
    v35 = EventInfoJapaneseCushionControl_TypeInfo;
    if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
      v35 = EventInfoJapaneseCushionControl_TypeInfo;
    }
    *(UnityEngine_Vector3_o *)(&v36 - 1) = EventInfoJapaneseCushionControl__GetServantPosition(
                                             this,
                                             v35->static_fields->LIMIT_BREAK_CUSHION_NUM,
                                             v30);
    v37 = this->fields.servantObjectData;
    if ( !v37 )
      goto LABEL_29;
    GameObjectExtensions__SetLocalPositionY(v37->fields.ServantObject, v36, 0LL);
    EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(this, v38);
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
  UISprite_o *Component_srcLineSprite; // x23
  System_String_o **v10; // x9
  System_String_o **v11; // x8

  v8 = (EventInfoUIBase_o *)this;
  if ( (byte_42B0DF2 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_18655/*"event_gauge_img_8036703"*/);
    sub_B52984(&StringLiteral_18654/*"event_gauge_img_8036702"*/);
    this = (EventInfoJapaneseCushionControl_o *)sub_B52984(&StringLiteral_18653/*"event_gauge_img_8036701"*/);
    byte_42B0DF2 = 1;
  }
  if ( !obj )
    goto LABEL_16;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            obj,
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    v10 = (System_String_o **)&StringLiteral_18654/*"event_gauge_img_8036702"*/;
    v11 = (System_String_o **)&StringLiteral_18653/*"event_gauge_img_8036701"*/;
    if ( index % 5 == 4 )
      v10 = (System_String_o **)&StringLiteral_18655/*"event_gauge_img_8036703"*/;
    if ( index % 5 == 4 )
      v11 = (System_String_o **)&StringLiteral_18655/*"event_gauge_img_8036703"*/;
    if ( type == 1 )
      v11 = v10;
    this = (EventInfoJapaneseCushionControl_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                  v8,
                                                  Component_srcLineSprite,
                                                  *v11,
                                                  0LL);
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))Component_srcLineSprite->klass->vtable._33_MakePixelPerfect.method)(
        Component_srcLineSprite,
        Component_srcLineSprite->klass->vtable._34_get_minWidth.methodPtr);
      UnityEngine_GameObject__SetActive(obj, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B52A5C(this, obj);
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
      sub_B52A5C(v5, v6);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl___c__DisplayClass35_0___PlayOverflowCushionAnim_b__1(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *_4__this; // x0
  __int64 v4; // x20
  UnityEngine_GameObject_c *klass; // x8
  __int64 v6; // x8
  int v7; // w9
  __int64 v8; // x0

  _4__this = (UnityEngine_GameObject_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  _4__this[7].monitor = this->fields.animGameObject;
  sub_B52920(&_4__this[7].monitor);
  _4__this = (UnityEngine_GameObject_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v4 = 0LL;
  while ( 1 )
  {
    klass = _4__this[4].klass;
    if ( !klass )
      goto LABEL_10;
    v6 = *(_QWORD *)&klass->_1.byval_arg.bits;
    if ( !v6 )
      goto LABEL_10;
    v7 = *(_DWORD *)(v6 + 24);
    if ( (int)v4 >= v7 )
      break;
    if ( (unsigned int)v4 >= v7 )
    {
      v8 = sub_B52A88(_4__this);
      sub_B52A28(v8, 0LL);
    }
    _4__this = *(UnityEngine_GameObject_o **)(v6 + 8 * v4 + 32);
    if ( _4__this )
    {
      UnityEngine_GameObject__SetActive(_4__this, 1, 0LL);
      _4__this = (UnityEngine_GameObject_o *)this->fields.__4__this;
      ++v4;
      if ( _4__this )
        continue;
    }
    goto LABEL_10;
  }
  EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(
    (EventInfoJapaneseCushionControl_o *)_4__this,
    0LL);
  _4__this = (UnityEngine_GameObject_o *)this->fields.__4__this;
  if ( !_4__this )
LABEL_10:
    sub_B52A5C(_4__this, method);
  EventInfoJapaneseCushionControl__EndCushionAnim((EventInfoJapaneseCushionControl_o *)_4__this, 0LL);
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
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.beforeAnimObject = this->fields.animGameObject,
        sub_B52920(&_4__this->fields.beforeAnimObject),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(_4__this, method);
  }
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(_4__this, 0LL);
}