void __fastcall EventInfoJapaneseCushionControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  struct EventInfoJapaneseCushionControl_StaticFields *static_fields; // x0
  int64_t v11; // x1

  if ( (byte_4B1778A & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoJapaneseCushionControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_5684/*"EVENT_CUSHION_VALUE"*/, v8, v9);
    byte_4B1778A = 1;
  }
  static_fields = EventInfoJapaneseCushionControl_TypeInfo->static_fields;
  static_fields->LIMIT_BREAK_CUSHION_NUM = 73;
  v11 = StringLiteral_5684/*"EVENT_CUSHION_VALUE"*/;
  static_fields->SAVEKEY_EVENT_CUSHION_VALUE = (struct System_String_o *)StringLiteral_5684/*"EVENT_CUSHION_VALUE"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SAVEKEY_EVENT_CUSHION_VALUE, v11, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B17787 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId, method);
    byte_4B17787 = 1;
  }
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
  EventProgressValueSaveKey = EventInfoJapaneseCushionControl__GetEventProgressValueSaveKey(eventId, eventUiId, method);
  return UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl__DeleteBeforeAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_beforeAnimObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *beforeAnimObject; // t1
  __int64 v9; // x1
  PartyOrganizationUtility_c *klass; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B17783 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B17783 = 1;
  }
  beforeAnimObject = this->fields.beforeAnimObject;
  p_beforeAnimObject = (PartyOrganizationUtility_o *)&this->fields.beforeAnimObject;
  v7 = (UnityEngine_Object_o *)beforeAnimObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
  {
    klass = p_beforeAnimObject->klass;
    if ( !p_beforeAnimObject->klass )
      goto LABEL_16;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)klass,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    klass = (PartyOrganizationUtility_c *)UnityEngine_Object__op_Inequality(
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
      v14 = (UnityEngine_Object_o *)p_beforeAnimObject->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      UnityEngine_Object__Destroy_70154244(v14, 0LL);
      p_beforeAnimObject->klass = 0LL;
      sub_1BCA784(p_beforeAnimObject, 0LL, v15, v16, v17, v18, v19, v20);
      return;
    }
LABEL_16:
    sub_1BCAA3C(klass, v9);
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
      sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  UnityEngine_Vector3_o ServantPosition; // 0:s0.4,4:s1.4,8:s2.4

  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    sub_1BCAA3C(this, method);
  ServantObject = servantObjectData->fields.ServantObject;
  ServantPosition = EventInfoJapaneseCushionControl__GetServantPosition(this, this->fields.currentCushionNum, v2);
  GameObjectExtensions__SetLocalPosition(ServantObject, ServantPosition, 0LL);
  animEndAction = this->fields.animEndAction;
  this->fields.cushionAddNum = 0;
  this->fields.animEndAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animEndAction, 0LL, v7, v8, v9, v10, v11, v12);
  if ( animEndAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))animEndAction->fields.m_target)(
      animEndAction->fields.original_method_info,
      *(_QWORD *)&animEndAction->fields.extra_arg);
}


int32_t __fastcall EventInfoJapaneseCushionControl__GetBeforeCushionNum(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19
  int32_t id; // w20

  if ( (byte_4B17785 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoJapaneseCushionControl_TypeInfo, method, v2);
    byte_4B17785 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    return 0;
  eventId = eventUiEntity->fields.eventId;
  id = eventUiEntity->fields.id;
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, method);
  return EventInfoJapaneseCushionControl__GetEventProgressValueSaveData(eventId, id, 0, v3);
}


int32_t __fastcall EventInfoJapaneseCushionControl__GetCurrentCushionNum(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoJapaneseCushionControl_o *v3; // x19
  struct EventUiEntity_o *eventUiEntity; // x10
  struct EventUiValueEntity_array *eventUiValueEntityList; // x8
  int max_length; // w9
  int32_t priority; // w10
  int v8; // w11
  EventUiValueEntity_o *v9; // x12
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct UnityEngine_GameObject_array *CushionObjectList; // x8

  v3 = this;
  if ( (byte_4B17784 & 1) == 0 )
  {
    this = (EventInfoJapaneseCushionControl_o *)sub_1BCA7E0(&EventInfoJapaneseCushionControl_TypeInfo, method, v2);
    byte_4B17784 = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( eventUiEntity
    && (eventUiValueEntityList = v3->fields.eventUiValueEntityList) != 0LL
    && (max_length = eventUiValueEntityList->max_length, max_length >= 1) )
  {
    priority = eventUiEntity->fields.priority;
    v8 = 0;
    while ( 1 )
    {
      v9 = eventUiValueEntityList->m_Items[v8];
      if ( !v9 )
        goto LABEL_18;
      if ( priority == v9->fields.priority )
        break;
      if ( max_length == ++v8 )
        goto LABEL_10;
    }
    this = (EventInfoJapaneseCushionControl_o *)System_Int32__Parse(v9->fields.value, 0LL);
    servantObjectData = v3->fields.servantObjectData;
    if ( !servantObjectData || (CushionObjectList = servantObjectData->fields.CushionObjectList) == 0LL )
LABEL_18:
      sub_1BCAA3C(this, method);
    if ( (int)this >= (signed int)CushionObjectList->max_length )
    {
      this = (EventInfoJapaneseCushionControl_o *)EventInfoJapaneseCushionControl_TypeInfo;
      if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
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
int32_t __fastcall EventInfoJapaneseCushionControl__GetEventProgressValueSaveData(
        int32_t eventId,
        int32_t eventUiId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  if ( (byte_4B17788 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId, *(_QWORD *)&defaultValue);
    byte_4B17788 = 1;
  }
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId);
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
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  EventInfoJapaneseCushionControl_c *v15; // x8
  System_String_o *v16; // x19
  int64_t SAVEKEY_EVENT_CUSHION_VALUE; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int32_t v45; // [xsp+8h] [xbp-28h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-24h] BYREF

  v45 = eventUiId;
  v46 = eventId;
  if ( (byte_4B17786 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&eventUiId, method);
    sub_1BCA7E0(&string___TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v5, v6);
    byte_4B17786 = 1;
  }
  v7 = (System_String_o *)sub_1BCA888(string___TypeInfo, 5LL);
  v15 = EventInfoJapaneseCushionControl_TypeInfo;
  v16 = v7;
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, v8);
    v15 = EventInfoJapaneseCushionControl_TypeInfo;
  }
  if ( !v16 )
    sub_1BCAA3C(v7, v8);
  if ( !LODWORD(v16[1].klass) )
    goto LABEL_12;
  SAVEKEY_EVENT_CUSHION_VALUE = (int64_t)v15->static_fields->SAVEKEY_EVENT_CUSHION_VALUE;
  v16[1].monitor = (void *)SAVEKEY_EVENT_CUSHION_VALUE;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16[1].monitor, SAVEKEY_EVENT_CUSHION_VALUE, v9, v10, v11, v12, v13, v14);
  if ( LODWORD(v16[1].klass) <= 1 )
    goto LABEL_12;
  v24 = StringLiteral_16290/*"_"*/;
  v16[1].fields = (System_String_Fields)StringLiteral_16290/*"_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16[1].fields, v24, v18, v19, v20, v21, v22, v23);
  v7 = System_Int32__ToString((int32_t)&v46, 0LL);
  if ( LODWORD(v16[1].klass) <= 2
    || (v16[2].klass = (System_String_c *)v7,
        sub_1BCA784((PartyOrganizationUtility_o *)&v16[2], (int64_t)v7, v25, v26, v27, v28, v29, v30),
        LODWORD(v16[1].klass) <= 3)
    || (v37 = StringLiteral_16290/*"_"*/,
        v16[2].monitor = (void *)StringLiteral_16290/*"_"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)&v16[2].monitor, v37, v31, v32, v33, v34, v35, v36),
        v7 = System_Int32__ToString((int32_t)&v45, 0LL),
        LODWORD(v16[1].klass) <= 4) )
  {
LABEL_12:
    sub_1BCAA44(v7, v8);
  }
  v16[2].fields = (System_String_Fields)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16[2].fields, (int64_t)v7, v38, v39, v40, v41, v42, v43);
  return System_String__Concat_62414748((System_String_array *)v16, 0LL);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  max_length = CushionObjectList->max_length;
  v6 = max_length - 1;
  if ( max_length > index )
    v6 = index;
  if ( v6 >= (unsigned int)max_length )
    sub_1BCAA44(this, index);
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
    sub_1BCAA3C(this, *(_QWORD *)&cushionNum);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UIWidget_o *ServantSprite; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v30; // x21
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x21
  UISprite_o *bgSprite; // x1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v38; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v39; // x8
  UISprite_o *NameSprite; // x1
  __int64 *v41; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v42; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v43; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v44; // x8
  struct EventInfoJapaneseCushionControl_ObjectData_o *v45; // x8
  const MethodInfo *v46; // x4
  struct EventInfoJapaneseCushionControl_ObjectData_o *v47; // x8
  unsigned __int64 v48; // x20
  struct UnityEngine_GameObject_array *CushionObjectList; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v51; // x20
  struct UnityEngine_GameObject_array *ExtentionCushionObjectList; // x8
  unsigned __int64 v53; // x9

  if ( (byte_4B1777E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_19381/*"event_gauge_bg_8036702"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_19389/*"event_gauge_sd_8036702"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_19379/*"event_gauge_base_8036702"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19380/*"event_gauge_bg_8036701"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19378/*"event_gauge_base_8036701"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_19473/*"event_title_80367"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_19388/*"event_gauge_sd_8036701"*/, v26, v27);
    byte_4B1777E = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, entity);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, entity, method);
      byte_4B10F83 = 1;
    }
    ServantSprite = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, entity);
      ServantSprite = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = ServantSprite->fields.onChange->klass;
    if ( !klass )
      goto LABEL_45;
    v30 = *(_QWORD *)&klass->_2.instance_size;
    if ( !v30 )
      goto LABEL_45;
    ServantSprite = *(UIWidget_o **)(v30 + 40);
    if ( !ServantSprite )
      goto LABEL_45;
    UIWidget__set_depth(ServantSprite, this->fields.titleBackButtonDepth + 2, 0LL);
    ServantSprite = *(UIWidget_o **)(v30 + 32);
    if ( !ServantSprite )
      goto LABEL_45;
    UIWidget__set_depth(ServantSprite, this->fields.titleBackButtonDepth, 0LL);
  }
  this->fields.eventUiEntity = entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_EventInfoJapaneseCushionControl__Initialization_b__30_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v35, 0LL);
  bgSprite = this->fields.bgSprite;
  if ( this->fields.servantType == 1 )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_19379/*"event_gauge_base_8036702"*/,
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
                                    (System_String_o *)StringLiteral_19389/*"event_gauge_sd_8036702"*/,
                                    0LL);
    v38 = this->fields.servantObjectData;
    if ( !v38 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)v38->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    v39 = this->fields.servantObjectData;
    if ( !v39 )
      goto LABEL_45;
    NameSprite = v39->fields.NameSprite;
    v41 = &StringLiteral_19381/*"event_gauge_bg_8036702"*/;
  }
  else
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      bgSprite,
      (System_String_o *)StringLiteral_19378/*"event_gauge_base_8036701"*/,
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
      (System_String_o *)StringLiteral_19473/*"event_title_80367"*/,
      0LL);
    ServantSprite = (UIWidget_o *)this->fields.titleSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    v42 = this->fields.servantObjectData;
    if ( !v42 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                    (EventInfoUIBase_o *)this,
                                    v42->fields.ServantSprite,
                                    (System_String_o *)StringLiteral_19388/*"event_gauge_sd_8036701"*/,
                                    0LL);
    v43 = this->fields.servantObjectData;
    if ( !v43 )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)v43->fields.ServantSprite;
    if ( !ServantSprite )
      goto LABEL_45;
    ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                    ServantSprite,
                                    ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
    v44 = this->fields.servantObjectData;
    if ( !v44 )
      goto LABEL_45;
    NameSprite = v44->fields.NameSprite;
    v41 = &StringLiteral_19380/*"event_gauge_bg_8036701"*/;
  }
  ServantSprite = (UIWidget_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                  (EventInfoUIBase_o *)this,
                                  NameSprite,
                                  (System_String_o *)*v41,
                                  0LL);
  v45 = this->fields.servantObjectData;
  if ( !v45 )
    goto LABEL_45;
  ServantSprite = (UIWidget_o *)v45->fields.NameSprite;
  if ( !ServantSprite )
    goto LABEL_45;
  ServantSprite = (UIWidget_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))ServantSprite->klass->vtable._33_MakePixelPerfect.method)(
                                  ServantSprite,
                                  ServantSprite->klass->vtable._34_get_minWidth.methodPtr);
  v47 = this->fields.servantObjectData;
  if ( !v47 )
    goto LABEL_45;
  v48 = 0LL;
  while ( 1 )
  {
    CushionObjectList = v47->fields.CushionObjectList;
    if ( !CushionObjectList )
      goto LABEL_45;
    max_length = CushionObjectList->max_length;
    if ( (__int64)v48 >= (int)max_length )
      break;
    if ( v48 >= max_length )
LABEL_46:
      sub_1BCAA44(ServantSprite, entity);
    EventInfoJapaneseCushionControl__SetupCushionObject(
      this,
      CushionObjectList->m_Items[v48],
      this->fields.servantType,
      v48,
      v46);
    v47 = this->fields.servantObjectData;
    ++v48;
    if ( !v47 )
      goto LABEL_45;
  }
  if ( !this->fields.servantType )
  {
    v51 = 0LL;
    do
    {
      ExtentionCushionObjectList = v47->fields.ExtentionCushionObjectList;
      if ( !ExtentionCushionObjectList )
        break;
      v53 = ExtentionCushionObjectList->max_length;
      if ( (__int64)v51 >= (int)v53 )
        return;
      if ( v51 >= v53 )
        goto LABEL_46;
      EventInfoJapaneseCushionControl__SetupCushionObject(
        this,
        ExtentionCushionObjectList->m_Items[v51],
        this->fields.servantType,
        v51,
        v46);
      v47 = this->fields.servantObjectData;
      ++v51;
    }
    while ( v47 );
LABEL_45:
    sub_1BCAA3C(ServantSprite, entity);
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
    sub_1BCAA3C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl__OnDisable(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UIWidget_o *v4; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x8
  __int64 v6; // x19

  if ( (byte_4B1777D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B1777D = 1;
  }
  if ( !this->fields.servantType )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
      byte_4B10F83 = 1;
    }
    v4 = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      v4 = (UIWidget_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v4->fields.onChange->klass;
    if ( !klass
      || (v6 = *(_QWORD *)&klass->_2.instance_size) == 0
      || (v4 = *(UIWidget_o **)(v6 + 40)) == 0LL
      || (UIWidget__set_depth(v4, 8, 0LL), (v4 = *(UIWidget_o **)(v6 + 32)) == 0LL) )
    {
      sub_1BCAA3C(v4, method);
    }
    UIWidget__set_depth(v4, 6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoJapaneseCushionControl__PlayAddedCushionAnim(
        EventInfoJapaneseCushionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  int32_t servantType; // w8
  int32_t cushionStartAnimIndex; // w1
  System_String_o **v32; // x8
  System_String_o *v33; // x20
  System_String_o **v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x1
  float v37; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *servantObjectData; // x8
  float v39; // s8
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o **v49; // x8
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o **v51; // x22
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  UnityEngine_Object_o *v59; // x23
  UnityEngine_GameObject_o *v60; // x23
  UnityEngine_GameObject_o *ServantRoot; // x0
  __int64 v62; // x1
  Il2CppObject *Component_object; // x22
  __int64 v64; // x2
  __int64 v65; // x3
  System_Action_o *v66; // x23
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  System_Action_o *v76; // x23
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x1
  Il2CppObject *v84; // x21
  __int64 v85; // x1
  UnityEngine_Object_o *Clip; // x22

  if ( (byte_4B17782 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__, v12, v13);
    sub_1BCA7E0(&EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_19008/*"ef_bunyan"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_18996/*"ef_anning2"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_18995/*"ef_anning1"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_18994/*"ef_anning"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_19010/*"ef_bunyan2"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_19009/*"ef_bunyan1"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v28, v29);
    byte_4B17782 = 1;
  }
  servantType = this->fields.servantType;
  if ( servantType )
  {
    if ( servantType == 1 )
    {
      cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
      if ( cushionStartAnimIndex % 5 == 4 )
        v32 = (System_String_o **)&StringLiteral_18996/*"ef_anning2"*/;
      else
        v32 = (System_String_o **)&StringLiteral_18995/*"ef_anning1"*/;
      v33 = *v32;
      goto LABEL_14;
    }
    v34 = (System_String_o **)&StringLiteral_1/*""*/;
    cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
  }
  else
  {
    cushionStartAnimIndex = this->fields.cushionStartAnimIndex;
    if ( cushionStartAnimIndex % 5 == 4 )
      v34 = (System_String_o **)&StringLiteral_19010/*"ef_bunyan2"*/;
    else
      v34 = (System_String_o **)&StringLiteral_19009/*"ef_bunyan1"*/;
  }
  v33 = *v34;
LABEL_14:
  this->fields.cushionAddNum = (this->fields.cushionAddNum - 1) & ~((this->fields.cushionAddNum - 1) >> 31);
  *(UnityEngine_Vector3_o *)(&v37 - 1) = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                                           this,
                                           cushionStartAnimIndex,
                                           v2);
  servantObjectData = this->fields.servantObjectData;
  if ( !servantObjectData )
    goto LABEL_38;
  v39 = v37;
  GameObjectExtensions__GetLocalPositionX(servantObjectData->fields.ServantObject, 0LL);
  if ( System_String__IsNullOrEmpty(v33, 0LL) )
    goto LABEL_37;
  v42 = sub_1BCAA2C(EventInfoJapaneseCushionControl___c__DisplayClass36_0_TypeInfo, v36, v40, v41);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_38;
  *(_QWORD *)(v42 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 24), (int64_t)this, v43, v44, v45, v46, v47, v48);
  if ( this->fields.servantType )
    v49 = (System_String_o **)&StringLiteral_18994/*"ef_anning"*/;
  else
    v49 = (System_String_o **)&StringLiteral_19008/*"ef_bunyan"*/;
  v50 = EventInfoUIBase__InstantiateFromEventUIAssetData((EventInfoUIBase_o *)this, *v49, 0LL);
  *(_QWORD *)(v42 + 16) = v50;
  v51 = (UnityEngine_GameObject_o **)(v42 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 16), (int64_t)v50, v52, v53, v54, v55, v56, v57);
  v59 = *(UnityEngine_Object_o **)(v42 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58);
  if ( !UnityEngine_Object__op_Inequality(v59, 0LL, 0LL) )
    goto LABEL_37;
  v60 = *v51;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v36);
  GameObjectExtensions__SafeSetParent_34336992(v60, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v51, v39 - this->fields.servantStepHeight, 0LL);
  v35 = *v51;
  if ( !*v51 )
    goto LABEL_38;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v35,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    goto LABEL_37;
  v66 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v64, v65);
  System_Action___ctor(
    v66,
    (Il2CppObject *)this,
    Method_EventInfoJapaneseCushionControl__PlayAddedCushionAnim_b__36_0__,
    0LL);
  if ( !Component_object )
    goto LABEL_38;
  Component_object[2].klass = (Il2CppClass *)v66;
  sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[2], (int64_t)v66, v67, v68, v69, v70, v71, v72);
  v76 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v73, v74, v75);
  System_Action___ctor(
    v76,
    (Il2CppObject *)v42,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass36_0__PlayAddedCushionAnim_b__1__,
    0LL);
  Component_object[2].monitor = v76;
  sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[2].monitor, (int64_t)v76, v77, v78, v79, v80, v81, v82);
  v35 = *(UnityEngine_GameObject_o **)(v42 + 16);
  if ( !v35 )
    goto LABEL_38;
  v84 = UnityEngine_GameObject__GetComponent_object_(
          v35,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
  v35 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v84, 0LL, 0LL);
  if ( ((unsigned __int8)v35 & 1) == 0 )
    goto LABEL_37;
  if ( !v84 )
LABEL_38:
    sub_1BCAA3C(v35, v36);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v84, v33, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v85);
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v84, v33, 0LL);
    return;
  }
LABEL_37:
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(this, v36);
}


void __fastcall EventInfoJapaneseCushionControl__PlayAnim(
        EventInfoJapaneseCushionControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  if ( type == 1 )
  {
    this->fields.animEndAction = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.animEndAction,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  const MethodInfo *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x2
  float y; // s8
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o **v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x22
  UnityEngine_GameObject_o *v42; // x22
  UnityEngine_GameObject_o *ServantRoot; // x0
  __int64 v44; // x1
  Il2CppObject *Component_object; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  System_Action_o *v48; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Action_o *v58; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_String_o *v65; // x20
  __int64 v66; // x1
  Il2CppObject *v67; // x21
  __int64 v68; // x1
  UnityEngine_Object_o *Clip; // x22
  UnityEngine_Vector3_o ServantAnimPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17781 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__, v11, v12);
    sub_1BCA7E0(&Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__, v13, v14);
    sub_1BCA7E0(&EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_19008/*"ef_bunyan"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_19011/*"ef_bunyan99"*/, v19, v20);
    byte_4B17781 = 1;
  }
  v21 = sub_1BCAA2C(EventInfoJapaneseCushionControl___c__DisplayClass35_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_22;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  ServantAnimPosition = EventInfoJapaneseCushionControl__GetServantAnimPosition(
                          this,
                          this->fields.beforeCushionNum,
                          v30);
  y = ServantAnimPosition.fields.y;
  v32 = EventInfoUIBase__InstantiateFromEventUIAssetData(
          (EventInfoUIBase_o *)this,
          (System_String_o *)StringLiteral_19008/*"ef_bunyan"*/,
          0LL);
  *(_QWORD *)(v21 + 24) = v32;
  v33 = (UnityEngine_GameObject_o **)(v21 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)v32, v34, v35, v36, v37, v38, v39);
  v41 = *(UnityEngine_Object_o **)(v21 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
  if ( !UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
    goto LABEL_21;
  v42 = *v33;
  ServantRoot = EventInfoJapaneseCushionControl__get_ServantRoot(this, v23);
  GameObjectExtensions__SafeSetParent_34336992(v42, ServantRoot, 0LL);
  GameObjectExtensions__SetLocalPositionY(*v33, y - this->fields.servantStepHeight, 0LL);
  v22 = *v33;
  if ( !*v33 )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v22,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    goto LABEL_21;
  v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v46, v47);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v21,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__0__,
    0LL);
  if ( !Component_object )
    goto LABEL_22;
  Component_object[2].klass = (Il2CppClass *)v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[2], (int64_t)v48, v49, v50, v51, v52, v53, v54);
  v58 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v55, v56, v57);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v21,
    Method_EventInfoJapaneseCushionControl___c__DisplayClass35_0__PlayOverflowCushionAnim_b__1__,
    0LL);
  Component_object[2].monitor = v58;
  sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[2].monitor, (int64_t)v58, v59, v60, v61, v62, v63, v64);
  v22 = *(UnityEngine_GameObject_o **)(v21 + 24);
  if ( !v22 )
    goto LABEL_22;
  v65 = (System_String_o *)StringLiteral_19011/*"ef_bunyan99"*/;
  v67 = UnityEngine_GameObject__GetComponent_object_(
          v22,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
  v22 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v67, 0LL, 0LL);
  if ( ((unsigned __int8)v22 & 1) == 0 )
    goto LABEL_21;
  if ( !v67 )
LABEL_22:
    sub_1BCAA3C(v22, v23);
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)v67, v65, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
  if ( UnityEngine_Object__op_Inequality(Clip, 0LL, 0LL) )
  {
    UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v67, v65, 0LL);
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

  if ( (byte_4B17789 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&cushionNum, method);
    byte_4B17789 = 1;
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
  {
    eventId = eventUiEntity->fields.eventId;
    id = eventUiEntity->fields.id;
    if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, *(_QWORD *)&cushionNum);
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
          sub_1BCAA44(this, method);
        this = (EventInfoJapaneseCushionControl_o *)ExtentionCushionObjectList->m_Items[v4];
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        servantObjectData = v3->fields.servantObjectData;
        ++v4;
      }
      while ( servantObjectData );
    }
    sub_1BCAA3C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoJapaneseCushionControl__Setup(
        EventInfoJapaneseCushionControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  float v26; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v27; // x8
  const MethodInfo *v28; // x2
  int32_t v29; // w8
  __int64 v30; // x21
  struct EventInfoJapaneseCushionControl_ObjectData_o *v31; // x8
  struct UnityEngine_GameObject_array *v32; // x8
  EventInfoJapaneseCushionControl_c *v33; // x0
  float v34; // s1
  struct EventInfoJapaneseCushionControl_ObjectData_o *v35; // x8
  const MethodInfo *v36; // x1

  if ( (byte_4B1777F & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoJapaneseCushionControl_TypeInfo, entitys, method);
    byte_4B1777F = 1;
  }
  this->fields.eventUiValueEntityList = entitys;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUiValueEntityList,
    (int64_t)entitys,
    (int64_t)method,
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
  if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, v11);
  if ( EventInfoJapaneseCushionControl__CheckEventProgressValueSaveData(eventId, id, v12) )
  {
    this->fields.beforeCushionNum = EventInfoJapaneseCushionControl__GetBeforeCushionNum(this, v16);
    CurrentCushionNum = (UnityEngine_GameObject_o *)EventInfoJapaneseCushionControl__GetCurrentCushionNum(this, v17);
    beforeCushionNum = this->fields.beforeCushionNum;
    this->fields.currentCushionNum = (int)CurrentCushionNum;
    this->fields.cushionAddNum = ((_DWORD)CurrentCushionNum - beforeCushionNum) & ~(((int)CurrentCushionNum
                                                                                   - beforeCushionNum) >> 31);
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
  v25 = this->fields.beforeCushionNum >= max_length ? CushionObjectList->max_length : this->fields.beforeCushionNum;
  this->fields.beforeCushionNum = v25;
  *(UnityEngine_Vector3_o *)(&v26 - 1) = EventInfoJapaneseCushionControl__GetServantPosition(this, v25, v18);
  v27 = this->fields.servantObjectData;
  if ( !v27 )
    goto LABEL_30;
  GameObjectExtensions__SetLocalPositionY(v27->fields.ServantObject, v26, 0LL);
  v29 = this->fields.beforeCushionNum;
  if ( v29 >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      v31 = this->fields.servantObjectData;
      if ( !v31 )
        break;
      v32 = v31->fields.CushionObjectList;
      if ( !v32 )
        break;
      if ( (unsigned int)v30 >= v32->max_length )
        sub_1BCAA44(CurrentCushionNum, v11);
      CurrentCushionNum = v32->m_Items[v30];
      if ( !CurrentCushionNum )
        break;
      UnityEngine_GameObject__SetActive(CurrentCushionNum, 1, 0LL);
      v29 = this->fields.beforeCushionNum;
      if ( (int)++v30 >= v29 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BCAA3C(CurrentCushionNum, v11);
  }
LABEL_22:
  if ( v29 >= max_length && !this->fields.servantType && this->fields.currentCushionNum >= max_length )
  {
    v33 = EventInfoJapaneseCushionControl_TypeInfo;
    if ( !EventInfoJapaneseCushionControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJapaneseCushionControl_TypeInfo, v11);
      v33 = EventInfoJapaneseCushionControl_TypeInfo;
    }
    *(UnityEngine_Vector3_o *)(&v34 - 1) = EventInfoJapaneseCushionControl__GetServantPosition(
                                             this,
                                             v33->static_fields->LIMIT_BREAK_CUSHION_NUM,
                                             v28);
    v35 = this->fields.servantObjectData;
    if ( !v35 )
      goto LABEL_30;
    GameObjectExtensions__SetLocalPositionY(v35->fields.ServantObject, v34, 0LL);
    EventInfoJapaneseCushionControl__SetActiveExtentionCushionObjectList(this, v36);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoJapaneseCushionControl__SetupCushionObject(
        EventInfoJapaneseCushionControl_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  EventInfoUIBase_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Component_object; // x23
  System_String_o **v19; // x9
  System_String_o **v20; // x8

  v8 = (EventInfoUIBase_o *)this;
  if ( (byte_4B17780 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj, *(_QWORD *)&type);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_19387/*"event_gauge_img_8036703"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_19386/*"event_gauge_img_8036702"*/, v13, v14);
    this = (EventInfoJapaneseCushionControl_o *)sub_1BCA7E0(&StringLiteral_19385/*"event_gauge_img_8036701"*/, v15, v16);
    byte_4B17780 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v19 = (System_String_o **)&StringLiteral_19386/*"event_gauge_img_8036702"*/;
    v20 = (System_String_o **)&StringLiteral_19385/*"event_gauge_img_8036701"*/;
    if ( index % 5 == 4 )
      v19 = (System_String_o **)&StringLiteral_19387/*"event_gauge_img_8036703"*/;
    if ( index % 5 == 4 )
      v20 = (System_String_o **)&StringLiteral_19387/*"event_gauge_img_8036703"*/;
    if ( type == 1 )
      v20 = v19;
    this = (EventInfoJapaneseCushionControl_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                                  v8,
                                                  (UISprite_o *)Component_object,
                                                  *v20,
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
    sub_1BCAA3C(this, obj);
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
      sub_1BCAA3C(v5, v6);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall EventInfoJapaneseCushionControl___c__DisplayClass35_0___PlayOverflowCushionAnim_b__1(
        EventInfoJapaneseCushionControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.beforeAnimObject,
    (int64_t)animGameObject,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  v11 = 0LL;
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
      sub_1BCAA44(_4__this, method);
    _4__this = (struct EventInfoJapaneseCushionControl_o *)CushionObjectList->m_Items[v11];
    if ( _4__this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
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
    sub_1BCAA3C(_4__this, method);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventInfoJapaneseCushionControl_o *_4__this; // x0
  struct UnityEngine_GameObject_o *animGameObject; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (animGameObject = this->fields.animGameObject,
        _4__this->fields.beforeAnimObject = animGameObject,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.beforeAnimObject,
          (int64_t)animGameObject,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  EventInfoJapaneseCushionControl__EndAddedCushionAnim(_4__this, method);
}