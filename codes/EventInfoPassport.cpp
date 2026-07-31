void EventInfoPassport___ctor(EventInfoPassport_o *this, const MethodInfo *method)
{
  this->fields._JobId_k__BackingField = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoPassport__Awake(EventInfoPassport_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoPassport__DisplayMaximSkillView(EventInfoPassport_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *skillBase; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  skillBase = this->fields.skillBase;
  if ( !skillBase )
    sub_21FFECC(0, method);
  if ( UnityEngine_GameObject__get_activeSelf(skillBase, 0) )
  {
    EventInfoPassport__SetMaximSkillInfo(this, v4);
    EventInfoPassport__SetActiveSkillObject(this, 1, v5);
  }
}


void EventInfoPassport__DisplayPassport(
        EventInfoPassport_o *this,
        EventJobPassportEntity_o *passportEntity,
        System_Action_o *passportClickAction,
        bool isEmptyPassport,
        const MethodInfo *method)
{
  EventInfoPassport_o *v8; // x19
  int32_t eventId; // w20
  UISprite_o *baseSprite; // x21
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w8
  int32_t v27; // w21
  UISprite_o *v28; // x22
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x23
  int32_t v32; // w8
  int32_t v33; // w21
  UISprite_o *nameSprite; // x22
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x23
  bool IsOpenPassport; // w8
  int32_t v39; // w0
  int32_t v40; // w20
  UISprite_o *photoSprite; // x21
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  System_String_o *v44; // x22
  UILabel_o *maskLabel; // x20
  const MethodInfo *v46; // x1
  int skillId; // w20
  UISprite_o *skillIcon; // x21
  UILabel_o *skillNameLabel; // x20
  UILabel_o *skillDetailLabel; // x20
  const MethodInfo *v51; // x2
  int32_t imageId; // [xsp+4h] [xbp-4Ch] BYREF
  EventJobEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_59399B7 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventJobMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23766/*"passport_card_base_{0:D2}"*/);
    sub_21FFC50(&StringLiteral_23767/*"passport_card_name_{0:D2}"*/);
    this = (EventInfoPassport_o *)sub_21FFC50(&StringLiteral_23768/*"passport_card_photo_{0:D2}"*/);
    byte_59399B7 = 1;
  }
  entity = 0;
  if ( isEmptyPassport )
  {
    if ( passportEntity )
    {
      eventId = passportEntity->fields.eventId;
      baseSprite = v8->fields.baseSprite;
      v8->fields.eventId = eventId;
      imageId = 8061200;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &imageId);
      v13 = System_String__Format((System_String_o *)StringLiteral_23766/*"passport_card_base_{0:D2}"*/, v11, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
      AtlasManager__SetEventUI_47538316(eventId, baseSprite, v13, 0);
      this = (EventInfoPassport_o *)v8->fields.nameSprite;
      if ( this )
      {
        this = (EventInfoPassport_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (EventInfoPassport_o *)v8->fields.maskBase;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (EventInfoPassport_o *)v8->fields.photoSprite;
            if ( this )
            {
              this = (EventInfoPassport_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                this = (EventInfoPassport_o *)v8->fields.skillBase;
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                  v8->fields.onClickAction = 0;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&v8->fields.onClickAction,
                    0,
                    v14,
                    v15,
                    v16,
                    v17,
                    v18,
                    v19);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_21FFECC(this, passportEntity);
  }
  if ( passportEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, passportEntity);
    this = (EventInfoPassport_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventJobMaster___);
    if ( !this )
      goto LABEL_53;
    if ( EventJobMaster__TryGetEntity(
           (EventJobMaster_o *)this,
           &entity,
           passportEntity->fields.eventId,
           passportEntity->fields.jobId,
           0) )
    {
      v26 = passportEntity->fields.eventId;
      v8->fields.onClickAction = passportClickAction;
      v8->fields.eventId = v26;
      v8->fields._JobId_k__BackingField = passportEntity->fields.jobId;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v8->fields.onClickAction,
        (int32_t)passportClickAction,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v27 = v8->fields.eventId;
      v28 = v8->fields.baseSprite;
      imageId = passportEntity->fields.imageId;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &imageId);
      v31 = System_String__Format((System_String_o *)StringLiteral_23766/*"passport_card_base_{0:D2}"*/, v29, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30);
      AtlasManager__SetEventUI_47538316(v27, v28, v31, 0);
      this = (EventInfoPassport_o *)entity;
      if ( !entity )
        goto LABEL_53;
      if ( EventJobEntity__IsHideJobName(entity, 0) )
        v32 = 0;
      else
        v32 = passportEntity->fields.imageId;
      v33 = v8->fields.eventId;
      nameSprite = v8->fields.nameSprite;
      imageId = v32;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &imageId);
      v37 = System_String__Format((System_String_o *)StringLiteral_23767/*"passport_card_name_{0:D2}"*/, v35, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
      AtlasManager__SetEventUI_47538316(v33, nameSprite, v37, 0);
      IsOpenPassport = EventJobPassportEntity__IsOpenPassport(passportEntity, 0);
      this = (EventInfoPassport_o *)v8->fields.maskBase;
      v8->fields._IsOpenPassport_k__BackingField = IsOpenPassport;
      if ( IsOpenPassport )
      {
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (EventInfoPassport_o *)v8->fields.photoSprite;
        if ( !this )
          goto LABEL_53;
        this = (EventInfoPassport_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (EventInfoPassport_o *)entity;
        if ( !entity )
          goto LABEL_53;
        v39 = EventJobEntity__GetOverWritePhotoImageId(entity, passportEntity->fields.imageId, 0);
        v40 = v8->fields.eventId;
        photoSprite = v8->fields.photoSprite;
        imageId = v39;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &imageId);
        v44 = System_String__Format((System_String_o *)StringLiteral_23768/*"passport_card_photo_{0:D2}"*/, v42, 0);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43);
        this = (EventInfoPassport_o *)AtlasManager__SetEventUI_47538316(v40, photoSprite, v44, 0);
      }
      else
      {
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        maskLabel = v8->fields.maskLabel;
        this = (EventInfoPassport_o *)EventInfoPassport__GetMaskLabelText(v8, v46);
        if ( !maskLabel )
          goto LABEL_53;
        UILabel__set_text(maskLabel, (System_String_o *)this, 0);
        this = (EventInfoPassport_o *)v8->fields.photoSprite;
        if ( !this )
          goto LABEL_53;
        this = (EventInfoPassport_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      if ( !entity )
        goto LABEL_53;
      skillId = entity->fields.skillId;
      if ( skillId < 1 )
      {
        this = (EventInfoPassport_o *)v8->fields.skillBase;
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      else
      {
        skillIcon = v8->fields.skillIcon;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, passportEntity);
        AtlasManager__SetSkillIcon(skillIcon, skillId, 0);
        this = (EventInfoPassport_o *)entity;
        if ( !entity )
          goto LABEL_53;
        skillNameLabel = v8->fields.skillNameLabel;
        this = (EventInfoPassport_o *)EventJobEntity__GetPassportSkillName(entity, 0);
        if ( !skillNameLabel )
          goto LABEL_53;
        UILabel__set_text(skillNameLabel, (System_String_o *)this, 0);
        this = (EventInfoPassport_o *)entity;
        if ( !entity )
          goto LABEL_53;
        skillDetailLabel = v8->fields.skillDetailLabel;
        this = (EventInfoPassport_o *)EventJobEntity__GetPassportSkillDetail(entity, 0);
        if ( !skillDetailLabel )
          goto LABEL_53;
        UILabel__set_text(skillDetailLabel, (System_String_o *)this, 0);
        this = (EventInfoPassport_o *)v8->fields.skillBase;
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        EventInfoPassport__SetActiveSkillObject(v8, 0, v51);
      }
    }
  }
}


System_String_o *EventInfoPassport__GetMaskLabelText(EventInfoPassport_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  __int64 v9; // x1
  int32_t JobId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59399B8 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8493/*"JOB_PASSPORT_DIALOG_NOT_CONDITION_TEXT"*/);
    byte_59399B8 = 1;
  }
  eventId = this->fields.eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
  v4 = (Il2CppObject *)System_String__Concat((Il2CppObject *)StringLiteral_8493/*"JOB_PASSPORT_DIALOG_NOT_CONDITION_TEXT"*/, v3, 0);
  JobId_k__BackingField = this->fields._JobId_k__BackingField;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &JobId_k__BackingField);
  v7 = System_String__Concat(v4, v5, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  v8 = LocalizationManager__Get(v7, 0);
  if ( !System_String__op_Inequality(v8, v7, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    return LocalizationManager__Get((System_String_o *)v4, 0);
  }
  return v8;
}


void EventInfoPassport__OnClick(EventInfoPassport_o *this, const MethodInfo *method)
{
  System_Action_o *onClickAction; // x0

  onClickAction = this->fields.onClickAction;
  if ( onClickAction )
    ActionExtensions__Call(onClickAction, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassport__SetActiveSkillObject(EventInfoPassport_o *this, bool isMaxim, const MethodInfo *method)
{
  UnityEngine_Component_o *skillNameLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0

  skillNameLabel = (UnityEngine_Component_o *)this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_6;
  gameObject = UnityEngine_Component__get_gameObject(skillNameLabel, 0);
  GameObjectHelper__SetActiveSafely(gameObject, !isMaxim, 0);
  skillNameLabel = (UnityEngine_Component_o *)this->fields.skillDetailLabel;
  if ( !skillNameLabel
    || (v7 = UnityEngine_Component__get_gameObject(skillNameLabel, 0),
        GameObjectHelper__SetActiveSafely(v7, !isMaxim, 0),
        (skillNameLabel = (UnityEngine_Component_o *)this->fields.maximSkillNameLabel) == 0)
    || (v8 = UnityEngine_Component__get_gameObject(skillNameLabel, 0),
        GameObjectHelper__SetActiveSafely(v8, isMaxim, 0),
        (skillNameLabel = (UnityEngine_Component_o *)this->fields.maximSkillDetailLabel) == 0) )
  {
LABEL_6:
    sub_21FFECC(skillNameLabel, isMaxim);
  }
  v9 = UnityEngine_Component__get_gameObject(skillNameLabel, 0);
  GameObjectHelper__SetActiveSafely(v9, isMaxim, 0);
}


void EventInfoPassport__SetMaximSkillInfo(EventInfoPassport_o *this, const MethodInfo *method)
{
  struct UILabel_o *skillNameLabel; // x8
  EventInfoPassport_o *v3; // x19
  struct UILabel_o *skillDetailLabel; // x8

  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel
    || (v3 = this, (this = (EventInfoPassport_o *)this->fields.maximSkillNameLabel) == 0)
    || (UILabel__set_text((UILabel_o *)this, skillNameLabel->fields.mText, 0),
        (skillDetailLabel = v3->fields.skillDetailLabel) == 0)
    || (this = (EventInfoPassport_o *)v3->fields.maximSkillDetailLabel) == 0 )
  {
    sub_21FFECC(this, method);
  }
  UILabel__set_text((UILabel_o *)this, skillDetailLabel->fields.mText, 0);
}


bool EventInfoPassport__get_IsOpenPassport(EventInfoPassport_o *this, const MethodInfo *method)
{
  return this->fields._IsOpenPassport_k__BackingField;
}


int32_t EventInfoPassport__get_JobId(EventInfoPassport_o *this, const MethodInfo *method)
{
  return this->fields._JobId_k__BackingField;
}


void EventInfoPassport__set_IsOpenPassport(EventInfoPassport_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsOpenPassport_k__BackingField = value;
}


void EventInfoPassport__set_JobId(EventInfoPassport_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._JobId_k__BackingField = value;
}