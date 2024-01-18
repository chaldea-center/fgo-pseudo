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

  if ( (byte_418866B & 1) == 0 )
  {
    sub_B2C35C(&EventInfoJapaneseCushionControl_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_5608/*"EVENT_CUSHION_VALUE"*/, v8);
    byte_418866B = 1;
  }
  EventInfoJapaneseCushionControl_TypeInfo->static_fields->LIMIT_BREAK_CUSHION_NUM = 73;
  static_fields = EventInfoJapaneseCushionControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_5608/*"EVENT_CUSHION_VALUE"*/;
  static_fields->SAVEKEY_EVENT_CUSHION_VALUE = (struct System_String_o *)StringLiteral_5608/*"EVENT_CUSHION_VALUE"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->SAVEKEY_EVENT_CUSHION_VALUE, v10, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4188668 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    byte_4188668 = 1;
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
  BattleServantConfConponent_o *p_beforeAnimObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *beforeAnimObject; // t1
  __int64 v7; // x1
  BattleServantConfConponent_c *klass; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4188664 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4188664 = 1;
  }
  beforeAnimObject = this->fields.beforeAnimObject;
  p_beforeAnimObject = (BattleServantConfConponent_o *)&this->fields.beforeAnimObject;
  v5 = (UnityEngine_Object_o *)beforeAnimObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = p_beforeAnimObject->klass;
    if ( !p_beforeAnimObject->klass )
      goto LABEL_19;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)klass,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
      v10 = (UnityEngine_Object_o *)p_beforeAnimObject->klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v10, 0LL);
      p_beforeAnimObject->klass = 0LL;
      sub_B2C2F8(p_beforeAnimObject, 0LL, v11, v12, v13, v14, v15, v16);
      return;
    }
LABEL_19:
    sub_B2C434(klass, v7);
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
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  ServantObject = servantObjectData->fields.ServantObject;
  ServantPosition = EventInfoJapaneseCushionControl__GetServantPosition(this, this->fields.currentCushionNum, v2);
  GameObjectExtensions__SetLocalPosition(ServantObject, ServantPosition, 0LL);
  animEndAction = this->fields.animEndAction;
  this->fields.cushionAddNum = 0;
  this->fields.animEndAction = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.animEndAction, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4188666 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoJapaneseCushionControl_TypeInfo, method);
    byte_4188666 = 1;
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
  if ( (byte_4188665 & 1) == 0 )
  {
    this = (EventInfoJapaneseCushionControl_o *)sub_B2C35C(&EventInfoJapaneseCushionControl_TypeInfo, method);
    byte_4188665 = 1;
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
      sub_B2C434(this, method);
    if ( (int)this >= (signed int)CushionObjectList->max_length )
    {
      this = (EventInfoJapaneseCushionControl_o *)EventInfoJapaneseCushionControl_TypeInfo;
      if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
        this = (EventInfoJapaneseCushionControl_o *)EventInfoJapaneseCushionControl_TypeInfo;
      }
      LODWORD(this) = *(_DWORD *)this[1].monitor;
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

  if ( (byte_4188669 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    byte_4188669 = 1;
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
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array *v13; // x19
  EventInfoJapaneseCushionControl_c *v14; // x8
  System_Int32_array **SAVEKEY_EVENT_CUSHION_VALUE; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x20
  __int64 v45; // x0
  __int64 v46; // x0
  int32_t v47; // [xsp+8h] [xbp-18h] BYREF
  int32_t v48; // [xsp+Ch] [xbp-14h] BYREF

  v47 = eventUiId;
  v48 = eventId;
  if ( (byte_4188667 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
    sub_B2C35C(&string___TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v4);
    byte_4188667 = 1;
  }
  v5 = (System_String_o *)sub_B2C374(string___TypeInfo, 5LL);
  v13 = (System_String_array *)v5;
  v14 = EventInfoJapaneseCushionControl_TypeInfo;
  if ( (BYTE3(EventInfoJapaneseCushionControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo);
    v14 = EventInfoJapaneseCushionControl_TypeInfo;
  }
  if ( !v13 )
    sub_B2C434(v5, v6);
  SAVEKEY_EVENT_CUSHION_VALUE = (System_Int32_array **)v14->static_fields->SAVEKEY_EVENT_CUSHION_VALUE;
  if ( SAVEKEY_EVENT_CUSHION_VALUE )
  {
    v5 = (System_String_o *)sub_B2C41C(SAVEKEY_EVENT_CUSHION_VALUE, v13->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_28;
  }
  if ( !v13->max_length )
    goto LABEL_27;
  v13->m_Items[0] = (System_String_o *)SAVEKEY_EVENT_CUSHION_VALUE;
  sub_B2C2F8((BattleServantConfConponent_o *)v13->m_Items, SAVEKEY_EVENT_CUSHION_VALUE, v7, v8, v9, v10, v11, v12);
  v5 = (System_String_o *)StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    v5 = (System_String_o *)sub_B2C41C(StringLiteral_15905/*"_"*/, v13->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_28;
    v22 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_27;
  v13->m_Items[1] = (System_String_o *)v22;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
  v5 = System_Int32__ToString((int32_t)&v48, 0LL);
  v29 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B2C41C(v5, v13->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_28;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_27;
  v13->m_Items[2] = (System_String_o *)v29;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  v5 = (System_String_o *)StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    v5 = (System_String_o *)sub_B2C41C(StringLiteral_15905/*"_"*/, v13->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_28;
    v36 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_27;
  v13->m_Items[3] = (System_String_o *)v36;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
  v5 = System_Int32__ToString((int32_t)&v47, 0LL);
  v43 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = (System_String_o *)sub_B2C41C(v5, v13->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_28:
      v46 = sub_B2C454(v5);
      sub_B2C400(v46, 0LL);
    }
  }
  if ( v13->max_length <= 4 )
  {
LABEL_27:
    v45 = sub_B2C460(v5);
    sub_B2C400(v45, 0LL);
  }
  v13->m_Items[4] = (System_String_o *)v43;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  return System_String__Concat_44385656(v13, 0LL);
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
    sub_B2C434(this, method);
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
    v14 = sub_B2C460(this);
    sub_B2C400(v14, 0LL);
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
    sub_B2C434(this, index);
  max_length = CushionObjectList->max_length;
  v6 = max_length - 1;
  if ( max_length > index )
    v6 = index;
  if ( v6 >= (unsigned int)max_length )
  {
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
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
    sub_B2C434(this, cushionNum);
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
  UIWidget_o *ServantSprite; // x0
  UIWidget_OnPostFillCallback_c *klass; // x8
  _QWORD *genericContainerHandle; // x21
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v23; // x21
  UISprite_o *bgSprite; // x1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o **p_servantObjectData; // x20
  struct EventInfoJapaneseCushionControl_ObjectData_o *v27; // x8
  UISprite_o *NameSprite; // x1
  __int64 *v29; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v30; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v31; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v32; // x8
  const MethodInfo *v33; // x4
  struct EventInfoJapaneseCushionControl_ObjectData_o *v34; // x8
  unsigned __int64 v35; // x20
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v38; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  unsigned __int64 v40; // x9
  __int64 v41; // x0

  if ( (byte_418865F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, entity);
    sub_B2C35C(&Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, v10);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_18514/*"event_gauge_bg_8036702"*/, v12);
    sub_B2C35C(&StringLiteral_18521/*"event_gauge_sd_8036702"*/, v13);
    sub_B2C35C(&StringLiteral_18512/*"event_gauge_base_8036702"*/, v14);
    sub_B2C35C(&StringLiteral_18513/*"event_gauge_bg_8036701"*/, v15);
    sub_B2C35C(&StringLiteral_18511/*"event_gauge_base_8036701"*/, v16);
    sub_B2C35C(&StringLiteral_18604/*"event_title_80367"*/, v17);
    sub_B2C35C(&StringLiteral_18520/*"event_gauge_sd_8036701"*/, v18);
    byte_418865F = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, entity);
      byte_4183C65 = 1;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v23, 0LL);
  bgSprite = this->fields.bgSprite;
  if ( this->fields.servantType == 1 )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_18512/*"event_gauge_base_8036702"*/,
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
                                    (System_String_o *)StringLiteral_18521/*"event_gauge_sd_8036702"*/,
                                    0LL);
    v27 = this->fields.servantObjectData;
    if ( !v27 )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)v27->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    if ( !*p_servantObjectData )
      goto LABEL_46;
    NameSprite = (*p_servantObjectData)->fields.NameSprite;
    v29 = &StringLiteral_18514/*"event_gauge_bg_8036702"*/;
  }
  else
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_18511/*"event_gauge_base_8036701"*/,
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
      (System_String_o *)StringLiteral_18604/*"event_title_80367"*/,
      0LL);
    ServantSprite = (UIWidget_o *)this->fields.titleSprite;
    if ( !ServantSprite )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    p_servantObjectData = &this->fields.servantObjectData;
    v30 = this->fields.servantObjectData;
    if ( !v30 )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                    (EventInfoUIBase_o *)this,
                                    v30->fields.ServantSprite,
                                    (System_String_o *)StringLiteral_18520/*"event_gauge_sd_8036701"*/,
                                    0LL);
    v31 = this->fields.servantObjectData;
    if ( !v31 )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)v31->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_46;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    if ( !*p_servantObjectData )
      goto LABEL_46;
    NameSprite = (*p_servantObjectData)->fields.NameSprite;
    v29 = &StringLiteral_18513/*"event_gauge_bg_8036701"*/;
  }
  ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                  (EventInfoUIBase_o *)this,
                                  NameSprite,
                                  (System_String_o *)*v29,
                                  0LL);
  v32 = this->fields.servantObjectData;
  if ( !v32 )
    goto LABEL_46;
  ServantSprite = (UIWidget_o *)v32->fields.NameSprite;
  if ( !ServantSprite )
    goto LABEL_46;
  ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                  ServantSprite,
                                  ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
  v34 = *p_servantObjectData;
  if ( !*p_servantObjectData )
    goto LABEL_46;
  v35 = 0LL;
  while ( 1 )
  {
    CushionObjectList = v34->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_46;
    max_length = CushionObjectList->max_length;
    if ( (__int64)v35 >= (int)max_length )
      break;
    if ( v35 >= max_length )
    {
LABEL_48:
      v41 = sub_B2C460(ServantSprite);
      sub_B2C400(v41, 0LL);
    }
    EventInfoJapaneseCushionControl__SetupCushionObject(
      this,
      CushionObjectList->m_Items[v35],
      this->fields.servantType,
      v35,
      v33);
    v34 = this->fields.servantObjectData;
    ++v35;
    if ( !v34 )
      goto LABEL_46;
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
        goto LABEL_48;
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
LABEL_46:
    sub_B2C434(ServantSprite, entity);
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
    sub_B2C434(this, method);
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

  if ( (byte_418865E & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_418865E = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
      byte_4183C65 = 1;
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
      sub_B2C434(v3, method);
    }
    UIWidget__set_depth(v3, 6, 0LL);
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
  UnityEngine_GameObject_o *v26; // x0
  const MethodInfo *v27; // x1
  float v28; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  float v30; // s8
  __int64 v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_GameObject_o **v38; // x22
  System_String_o **v39; // x8
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_Object_o *v47; // x23
  UnityEngine_GameObject_o *v48; // x23
  UnityEngine_GameObject_o *ServantRoot; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Action_o *v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Object_o *v58; // x22
  System_Action_o *v59; // x23
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_Object_o *v66; // x21
  UnityEngine_Object_o *Clip; // x22

  if ( (byte_4188663 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__, v7);
    sub_B2C35C(&EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_18169/*"ef_bunyan"*/, v9);
    sub_B2C35C(&StringLiteral_18159/*"ef_anning2"*/, v10);
    sub_B2C35C(&StringLiteral_18158/*"ef_anning1"*/, v11);
    sub_B2C35C(&StringLiteral_18157/*"ef_anning"*/, v12);
    sub_B2C35C(&StringLiteral_18171/*"ef_bunyan2"*/, v13);
    sub_B2C35C(&StringLiteral_18170/*"ef_bunyan1"*/, v14);
    sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_4188663 = 1;
  }
  servantType = this->fields.servantType;
  if ( !servantType )
  {
    v17 = this->fields.cushionStartAnimIndex % 5;
    v18 = (System_String_o **)&StringLiteral_18171/*"ef_bunyan2"*/;
    v19 = (System_String_o **)&StringLiteral_18170/*"ef_bunyan1"*/;
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
    v18 = (System_String_o **)&StringLiteral_18159/*"ef_anning2"*/;
    v19 = (System_String_o **)&StringLiteral_18158/*"ef_anning1"*/;
    goto LABEL_7;
  }
  v20 = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_11:
  v21 = *v20;
  v22 = this->fields.cushionAddNum - 1;
  this->fields.cushionAddNum = v22;
  v23 = UnityEngine_Mathf__Max_40694800(v22, 0, 0LL);
  cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
  this->fields.cushionAddNum = v23;
  *(UnityEngine_Vector3_o *)(&v28 - 1) = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                                           this,
                                           cushionStartAnimIndex,
                                           v25);
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_39;
  v30 = v28;
  GameObjectExtensions__GetLocalPositionX(servantObjectData->fields.ServantObject, 0LL);
  if ( System_String__IsNullOrEmpty(v21, 0LL) )
    goto LABEL_38;
  v31 = sub_B2C42C(EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo);
  EventInfoJapaneseCushionControl___c__DisplayClass36_0___ctor(
    (EventInfoJapaneseCushionControl___c__DisplayClass36_0_o *)v31,
    0LL);
  if ( !v31 )
    goto LABEL_39;
  *(_QWORD *)(v31 + 24) = this;
  v38 = (UnityEngine_GameObject_o **)(v31 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  if ( this->fields.servantType )
    v39 = (System_String_o **)&StringLiteral_18157/*"ef_anning"*/;
  else
    v39 = (System_String_o **)&StringLiteral_18169/*"ef_bunyan"*/;
  v40 = (System_Int32_array **)EventInfoUIBase__InstantiateFromEventUIAssetData((EventInfoUIBase_o *)this, *v39, 0LL);
  *(_QWORD *)(v31 + 16) = v40;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 16), v40, v41, v42, v43, v44, v45, v46);
  v47 = *(UnityEngine_Object_o **)(v31 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
    goto LABEL_38;
  v48 = *v38;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v27);
  GameObjectExtensions__SafeSetParent_31331952(v48, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v38, v30 - this->fields.servantStepHeight, 0LL);
  v26 = *v38;
  if ( !*v38 )
    goto LABEL_39;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v26,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_38;
  v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)this,
    Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__,
    0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_39;
  Component_srcLineSprite[1].klass = (UnityEngine_Object_c *)v51;
  v58 = Component_srcLineSprite + 1;
  sub_B2C2F8((BattleServantConfConponent_o *)v58, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
  v59 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v31,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__,
    0LL);
  v58->monitor = v59;
  sub_B2C2F8((BattleServantConfConponent_o *)&v58->monitor, (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
  v26 = *(UnityEngine_GameObject_o **)(v31 + 16);
  if ( !v26 )
    goto LABEL_39;
  v66 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v26,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v26 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v66, 0LL, 0LL);
  if ( ((unsigned __int8)v26 & 1) == 0 )
    goto LABEL_38;
  if ( !v66 )
LABEL_39:
    sub_B2C434(v26, v27);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v66, v21, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v66, v21, 0LL);
    return;
  }
LABEL_38:
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(this, v27);
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
    sub_B2C2F8(
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  float y; // s8
  System_Int32_array **v22; // x0
  UnityEngine_GameObject_o **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *v30; // x22
  UnityEngine_GameObject_o *v31; // x22
  UnityEngine_GameObject_o *ServantRoot; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Action_o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Object_o *v41; // x21
  System_Action_o *v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_o *v49; // x20
  UnityEngine_Object_o *v50; // x21
  UnityEngine_Object_o *Clip; // x22
  UnityEngine_Vector3_o ServantAnimPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188662 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__, v6);
    sub_B2C35C(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__, v7);
    sub_B2C35C(&EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_18169/*"ef_bunyan"*/, v9);
    sub_B2C35C(&StringLiteral_18172/*"ef_bunyan99"*/, v10);
    byte_4188662 = 1;
  }
  v11 = sub_B2C42C(EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo);
  EventInfoJapaneseCushionControl___c__DisplayClass35_0___ctor(
    (EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_26;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  ServantAnimPosition = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                          this,
                          this->fields.beforeCushionNum,
                          v20);
  y = ServantAnimPosition.fields.y;
  v22 = (System_Int32_array **)EventInfoUIBase__InstantiateFromEventUIAssetData(
                                 (EventInfoUIBase_o *)this,
                                 (System_String_o *)StringLiteral_18169/*"ef_bunyan"*/,
                                 0LL);
  v23 = (UnityEngine_GameObject_o **)(v11 + 24);
  *(_QWORD *)(v11 + 24) = v22;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), v22, v24, v25, v26, v27, v28, v29);
  v30 = *(UnityEngine_Object_o **)(v11 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    goto LABEL_25;
  v31 = *v23;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v13);
  GameObjectExtensions__SafeSetParent_31331952(v31, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v23, y - this->fields.servantStepHeight, 0LL);
  v12 = *v23;
  if ( !*v23 )
    goto LABEL_26;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v12,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_25;
  v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v11,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__,
    0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_26;
  Component_srcLineSprite[1].klass = (UnityEngine_Object_c *)v34;
  v41 = Component_srcLineSprite + 1;
  sub_B2C2F8((BattleServantConfConponent_o *)v41, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
  v42 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v11,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__,
    0LL);
  v41->monitor = v42;
  sub_B2C2F8((BattleServantConfConponent_o *)&v41->monitor, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
  v12 = *(UnityEngine_GameObject_o **)(v11 + 24);
  if ( !v12 )
    goto LABEL_26;
  v49 = (System_String_o *)StringLiteral_18172/*"ef_bunyan99"*/;
  v50 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v12,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
    goto LABEL_25;
  if ( !v50 )
LABEL_26:
    sub_B2C434(v12, v13);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v50, v49, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v50, v49, 0LL);
    return;
  }
LABEL_25:
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

  if ( (byte_418866A & 1) == 0 )
  {
    sub_B2C35C(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&cushionNum);
    byte_418866A = 1;
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
          v7 = sub_B2C460(this);
          sub_B2C400(v7, 0LL);
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
    sub_B2C434(this, method);
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

  if ( (byte_4188660 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoJapaneseCushionControl_TypeInfo, entitys);
    byte_4188660 = 1;
  }
  this->fields.eventUiValueEntityList = entitys;
  sub_B2C2F8(
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
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Mathf__Max_40694800(v20, 0, 0LL);
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
  v26 = UnityEngine_Mathf__Min_40694704(this->fields.beforeCushionNum, max_length, 0LL);
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
        v39 = sub_B2C460(v10);
        sub_B2C400(v39, 0LL);
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
    sub_B2C434(v10, v11);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UISprite_o *Component_srcLineSprite; // x23
  System_String_o **v14; // x9
  System_String_o **v15; // x8

  v8 = (EventInfoUIBase_o *)this;
  if ( (byte_4188661 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_18519/*"event_gauge_img_8036703"*/, v10);
    sub_B2C35C(&StringLiteral_18518/*"event_gauge_img_8036702"*/, v11);
    this = (EventInfoJapaneseCushionControl_o *)sub_B2C35C(&StringLiteral_18517/*"event_gauge_img_8036701"*/, v12);
    byte_4188661 = 1;
  }
  if ( !obj )
    goto LABEL_16;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            obj,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    v14 = (System_String_o **)&StringLiteral_18518/*"event_gauge_img_8036702"*/;
    v15 = (System_String_o **)&StringLiteral_18517/*"event_gauge_img_8036701"*/;
    if ( index % 5 == 4 )
      v14 = (System_String_o **)&StringLiteral_18519/*"event_gauge_img_8036703"*/;
    if ( index % 5 == 4 )
      v15 = (System_String_o **)&StringLiteral_18519/*"event_gauge_img_8036703"*/;
    if ( type == 1 )
      v15 = v14;
    this = (EventInfoJapaneseCushionControl_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                  v8,
                                                  Component_srcLineSprite,
                                                  *v15,
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
    sub_B2C434(this, obj);
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
      sub_B2C434(v5, v6);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl___c__DisplayClass35_0___PlayOverflowCushionAnim_b__1(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0
  struct UnityEngine_GameObject_o *animGameObject; // x1
  __int64 v5; // x20
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8
  int max_length; // w9
  __int64 v9; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  animGameObject = this->fields.animGameObject;
  _4__this->fields.beforeAnimObject = animGameObject;
  sub_B2C2F8(&_4__this->fields.beforeAnimObject, animGameObject);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v5 = 0LL;
  while ( 1 )
  {
    servantObjectData = _4__this->fields.servantObjectData;
    if ( !servantObjectData )
      goto LABEL_10;
    CushionObjectList = servantObjectData->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_10;
    max_length = CushionObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B2C460(_4__this);
      sub_B2C400(v9, 0LL);
    }
    _4__this = (struct EventInfoJapaneseCushionControl_o *)CushionObjectList->m_Items[v5];
    if ( _4__this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
      _4__this = this->fields.__4__this;
      ++v5;
      if ( _4__this )
        continue;
    }
    goto LABEL_10;
  }
  EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(_4__this, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_10:
    sub_B2C434(_4__this, method);
  EventInfoJapaneseCushionControl__EndCushionAnim(_4__this, 0LL);
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
  struct UnityEngine_GameObject_o *animGameObject; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (animGameObject = this->fields.animGameObject,
        _4__this->fields.beforeAnimObject = animGameObject,
        sub_B2C2F8(&_4__this->fields.beforeAnimObject, animGameObject),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(_4__this, method);
  }
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(_4__this, 0LL);
}