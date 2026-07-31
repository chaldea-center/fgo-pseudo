void EventInfoJobLevelNoticeElement___ctor(EventInfoJobLevelNoticeElement_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoJobLevelNoticeElement__Awake(EventInfoJobLevelNoticeElement_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoJobLevelNoticeElement__SetJobLevelInfo(
        EventInfoJobLevelNoticeElement_o *this,
        EventJobEntity_o *eventJobEntity,
        EventJobPointBonusEntity_o *eventJobPointBonusEntity,
        int32_t dispType,
        const MethodInfo *method)
{
  EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *v9; // x23
  const MethodInfo *v10; // x4
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  UILabel_o *descriptionLabel; // x19
  System_String_o *Description; // x1

  if ( (byte_59386B3 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_TypeInfo);
    byte_59386B3 = 1;
  }
  v9 = (EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *)sub_21FFEBC(EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_TypeInfo);
  EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter___ctor(
    v9,
    eventJobEntity,
    eventJobPointBonusEntity,
    dispType,
    v10);
  if ( !v9 )
    sub_21FFECC(v11, v12);
  descriptionLabel = this->fields.descriptionLabel;
  Description = EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetDescription(v9, v12);
  UILabelHelper__SetTextSafely(descriptionLabel, Description, 0);
}


void EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter___ctor(
        EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *this,
        EventJobEntity_o *inEventJobEntity,
        EventJobPointBonusEntity_o *inEventJobPointBonusEntity,
        int32_t inDispType,
        const MethodInfo *method)
{
  EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.eventJobEntity = inEventJobEntity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields, (int32_t)inEventJobEntity, v9, v10, v11, v12, v13, v14);
  v8->fields.eventJobPointBonusEntity = inEventJobPointBonusEntity;
  v8 = (EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *)((char *)v8 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v8, (int32_t)inEventJobPointBonusEntity, v15, v16, v17, v18, v19, v20);
  LODWORD(v8->monitor) = inDispType;
}


System_String_o *EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetDescription(
        EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *this,
        const MethodInfo *method)
{
  System_String_o *DescriptionFormat; // x19
  System_Object_array *v4; // x20
  const MethodInfo *v5; // x1
  System_String_o *JobName; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *v14; // x22
  __int64 v15; // x1
  struct EventJobPointBonusEntity_o *eventJobPointBonusEntity; // x8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *v23; // x22
  const MethodInfo *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject *v31; // x22
  const MethodInfo *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *v39; // x21
  __int64 v41; // x0
  int32_t lv; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59386B4 & 1) == 0 )
  {
    sub_21FFC50(&object___TypeInfo);
    byte_59386B4 = 1;
  }
  DescriptionFormat = EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetDescriptionFormat(
                        this,
                        method);
  v4 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
  JobName = EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetJobName(this, v5);
  if ( !v4 )
    goto LABEL_20;
  v14 = (Il2CppObject *)JobName;
  if ( JobName )
  {
    JobName = (System_String_o *)sub_21FFDA4(JobName, v4->obj.klass->_1.element_class);
    if ( !JobName )
      goto LABEL_19;
  }
  if ( !LODWORD(v4->max_length) )
    goto LABEL_18;
  v4->m_Items[0] = v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v4->m_Items, (int32_t)v14, v8, v9, v10, v11, v12, v13);
  eventJobPointBonusEntity = this->fields.eventJobPointBonusEntity;
  if ( !eventJobPointBonusEntity )
LABEL_20:
    sub_21FFECC(JobName, v7);
  lv = eventJobPointBonusEntity->fields.lv;
  JobName = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &lv);
  v23 = (Il2CppObject *)JobName;
  if ( JobName )
  {
    JobName = (System_String_o *)sub_21FFDA4(JobName, v4->obj.klass->_1.element_class);
    if ( !JobName )
      goto LABEL_19;
  }
  if ( (v4->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_18;
  v4->m_Items[1] = v23;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->m_Items[1], (int32_t)v23, v17, v18, v19, v20, v21, v22);
  JobName = EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetEffectText(this, v24);
  v31 = (Il2CppObject *)JobName;
  if ( JobName )
  {
    JobName = (System_String_o *)sub_21FFDA4(JobName, v4->obj.klass->_1.element_class);
    if ( !JobName )
      goto LABEL_19;
  }
  if ( LODWORD(v4->max_length) <= 2 )
    goto LABEL_18;
  v4->m_Items[2] = v31;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->m_Items[2], (int32_t)v31, v25, v26, v27, v28, v29, v30);
  JobName = EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetEffectValue(this, v32);
  v39 = (Il2CppObject *)JobName;
  if ( JobName )
  {
    JobName = (System_String_o *)sub_21FFDA4(JobName, v4->obj.klass->_1.element_class);
    if ( !JobName )
    {
LABEL_19:
      v41 = sub_21FFEF0(JobName, v15);
      sub_21FFD90(v41, 0);
    }
  }
  if ( (v4->max_length & 0xFFFFFFFC) == 0 )
LABEL_18:
    sub_21FFED4(JobName);
  v4->m_Items[3] = v39;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->m_Items[3], (int32_t)v39, v33, v34, v35, v36, v37, v38);
  return System_String__Format_75484712(DescriptionFormat, v4, 0);
}


System_String_o *EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetDescriptionFormat(
        EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *this,
        const MethodInfo *method)
{
  int32_t dispType; // w8
  __int64 *v4; // x8

  if ( (byte_59386B8 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5811/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_BEFORE_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_5810/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_AFTER_DESCRIPTION"*/);
    byte_59386B8 = 1;
  }
  dispType = this->fields.dispType;
  if ( dispType == 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v4 = &StringLiteral_5810/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_AFTER_DESCRIPTION"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  if ( !dispType )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v4 = &StringLiteral_5811/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_BEFORE_DESCRIPTION"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  return **(System_String_o ***)(qword_594C0B8 + 184);
}


System_String_o *EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetEffectText(
        EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *this,
        const MethodInfo *method)
{
  EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *v2; // x19
  struct EventJobPointBonusEntity_o *eventJobPointBonusEntity; // x8
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x19
  int32_t calcType; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_59386B6 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *)sub_21FFC50(&StringLiteral_5814/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_EFFECT_{0}"*/);
    byte_59386B6 = 1;
  }
  eventJobPointBonusEntity = v2->fields.eventJobPointBonusEntity;
  if ( !eventJobPointBonusEntity )
    sub_21FFECC(this, method);
  calcType = eventJobPointBonusEntity->fields.calcType;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &calcType);
  v6 = System_String__Format((System_String_o *)StringLiteral_5814/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_EFFECT_{0}"*/, v4, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  return LocalizationManager__Get(v6, 0);
}


System_String_o *EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetEffectValue(
        EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *this,
        const MethodInfo *method)
{
  EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *v2; // x19
  struct EventJobPointBonusEntity_o *eventJobPointBonusEntity; // x8
  int32_t calcType; // w8
  struct EventJobPointBonusEntity_o *v5; // x8
  EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *v6; // x19
  float *v7; // x1
  __int64 v8; // x0
  EventJobPointBonusEntity_o *v9; // x8
  float MultiplyValue; // s0
  Il2CppObject *v11; // x0
  float v13; // [xsp+8h] [xbp-18h] BYREF
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_59386B5 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5812/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_EFFECT_VALUE_1"*/);
    this = (EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *)sub_21FFC50(&StringLiteral_5813/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_EFFECT_VALUE_2"*/);
    byte_59386B5 = 1;
  }
  eventJobPointBonusEntity = v2->fields.eventJobPointBonusEntity;
  if ( !eventJobPointBonusEntity )
    goto LABEL_16;
  calcType = eventJobPointBonusEntity->fields.calcType;
  if ( calcType == 2 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    this = (EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *)LocalizationManager__Get(
                                                                                         (System_String_o *)StringLiteral_5813/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_EFFECT_VALUE_2"*/,
                                                                                         0);
    v9 = v2->fields.eventJobPointBonusEntity;
    if ( v9 )
    {
      v6 = this;
      MultiplyValue = EventJobPointBonusEntity__GetMultiplyValue(v9, 0);
      v7 = &v13;
      v13 = MultiplyValue;
      v8 = qword_594C0A0;
      goto LABEL_14;
    }
LABEL_16:
    sub_21FFECC(this, method);
  }
  if ( calcType == 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    this = (EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *)LocalizationManager__Get(
                                                                                         (System_String_o *)StringLiteral_5812/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_EFFECT_VALUE_1"*/,
                                                                                         0);
    v5 = v2->fields.eventJobPointBonusEntity;
    if ( v5 )
    {
      v6 = this;
      v7 = (float *)&value;
      v8 = qword_594C070;
      value = v5->fields.value;
LABEL_14:
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(v8, v7);
      return System_String__Format((System_String_o *)v6, v11, 0);
    }
    goto LABEL_16;
  }
  return **(System_String_o ***)(qword_594C0B8 + 184);
}


System_String_o *EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetJobName(
        EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *this,
        const MethodInfo *method)
{
  EventJobEntity_o *eventJobEntity; // x0
  struct EventJobEntity_o *v5; // x8

  if ( (byte_59386B7 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5815/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_HIDE_JOB_NAME"*/);
    byte_59386B7 = 1;
  }
  eventJobEntity = this->fields.eventJobEntity;
  if ( !eventJobEntity )
    goto LABEL_10;
  eventJobEntity = (EventJobEntity_o *)EventJobEntity__IsHideJobName(eventJobEntity, 0);
  if ( ((unsigned __int8)eventJobEntity & 1) == 0 )
  {
    v5 = this->fields.eventJobEntity;
    if ( v5 )
      return v5->fields.name;
LABEL_10:
    sub_21FFECC(eventJobEntity, method);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_5815/*"EVENT_INFO_JOB_LEVEL_NOTICE_DIALOG_HIDE_JOB_NAME"*/, 0);
}


int32_t EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter__GetLevel(
        EventInfoJobLevelNoticeElement_EventInfoJobLevelNoticeElementParameter_o *this,
        const MethodInfo *method)
{
  struct EventJobPointBonusEntity_o *eventJobPointBonusEntity; // x8

  eventJobPointBonusEntity = this->fields.eventJobPointBonusEntity;
  if ( !eventJobPointBonusEntity )
    sub_21FFECC(this, method);
  return eventJobPointBonusEntity->fields.lv;
}