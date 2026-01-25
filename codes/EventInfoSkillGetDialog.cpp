void EventInfoSkillGetDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct EventInfoSkillGetDialog_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct EventInfoSkillGetDialog_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CF0463 & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoSkillGetDialog_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5631/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE_{0}"*/);
    sub_1C7BAE8(&StringLiteral_5632/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/);
    sub_1C7BAE8(&StringLiteral_5630/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/);
    byte_4CF0463 = 1;
  }
  EventInfoSkillGetDialog_TypeInfo->static_fields->MessageLocalizationKey = (struct System_String_o *)StringLiteral_5632/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventInfoSkillGetDialog_TypeInfo->static_fields,
    StringLiteral_5632/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_5630/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/;
  static_fields = EventInfoSkillGetDialog_TypeInfo->static_fields;
  static_fields->MessageTitleLocalizationKeyDefault = (struct System_String_o *)StringLiteral_5630/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->MessageTitleLocalizationKeyDefault,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_5631/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE_{0}"*/;
  v16 = EventInfoSkillGetDialog_TypeInfo->static_fields;
  v16->MessageTitleLocalizationKey = (struct System_String_o *)StringLiteral_5631/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE_{0}"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->MessageTitleLocalizationKey, v15, v17, v18, v19, v20, v21, v22);
}


void EventInfoSkillGetDialog___ctor(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CF0462 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CF0462 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoSkillGetDialog__Awake(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillGetDialog__CheckAssertion(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillGetDialog__OnClickCloseButton(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CF045F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    sub_1C7BAE8(&Method_EventInfoSkillGetDialog__OnClickCloseButton_b__21_0__);
    byte_4CF045F = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventInfoSkillGetDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillGetDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoSkillGetDialog__OnClickCloseButton_b__21_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoSkillGetDialog__Open(
        EventInfoSkillGetDialog_o *this,
        int32_t eventId,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 SkillId; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  ImagePartsGroupEntity_o *v31; // x0
  __int64 v32; // x8
  System_String_o *imagePartsIconSpriteNameFormat; // x20
  Il2CppObject *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w20
  System_Action_o *v44; // x21
  UnityEngine_Object_o *gameObject; // x19
  int v46; // [xsp+8h] [xbp-38h] BYREF
  int v47; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CF045E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoSkillGetDialog___c__DisplayClass20_0__Open_b__0__);
    sub_1C7BAE8(&EventInfoSkillGetDialog___c__DisplayClass20_0_TypeInfo);
    byte_4CF045E = 1;
  }
  v9 = sub_1C7BD34(EventInfoSkillGetDialog___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = eventId;
  *(_QWORD *)(v9 + 48) = imagePartsGroupEntity;
  v18 = v9 + 48;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)imagePartsGroupEntity, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v9 + 56) = closeAction;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 56), (int32_t)closeAction, v25, v26, v27, v28, v29, v30);
  v31 = *(ImagePartsGroupEntity_o **)(v9 + 48);
  if ( v31 )
  {
    SkillId = ImagePartsGroupEntity__GetSkillId(v31, 0);
    v32 = *(_QWORD *)(v9 + 48);
    *(_DWORD *)(v9 + 40) = SkillId;
    if ( v32 )
    {
      imagePartsIconSpriteNameFormat = this->fields.imagePartsIconSpriteNameFormat;
      v47 = *(_DWORD *)(v32 + 24);
      SkillId = j_il2cpp_value_box_0(int_TypeInfo, &v47);
      if ( *(_QWORD *)v18 )
      {
        v34 = (Il2CppObject *)SkillId;
        v46 = *(_DWORD *)(*(_QWORD *)v18 + 28LL);
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
        v36 = System_String__Format_64218220(imagePartsIconSpriteNameFormat, v34, v35, 0);
        *(_QWORD *)(v9 + 32) = v36;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v36, v37, v38, v39, v40, v41, v42);
        v43 = *(_DWORD *)(v9 + 24);
        v44 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(
          v44,
          (Il2CppObject *)v9,
          Method_EventInfoSkillGetDialog___c__DisplayClass20_0__Open_b__0__,
          0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI_41168332(v43, v44, 1, 0);
        return;
      }
    }
LABEL_13:
    sub_1C7BD40(SkillId, v11);
  }
  ActionExtensions__Call(*(System_Action_o **)(v9 + 56), 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(gameObject, 0);
}


void EventInfoSkillGetDialog__SetBasePanel(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CF0461 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4CF0461 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1C7BD40(transform, v4);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.basePanel,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void EventInfoSkillGetDialog___OnClickCloseButton_b__21_0(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CF0464 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0464 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0);
  this->fields.closeCallback = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.closeCallback, 0, v3, v4, v5, v6, v7, v8);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(gameObject, 0);
}


UnityEngine_GameObject_o *EventInfoSkillGetDialog__get_closeBtnObject(
        EventInfoSkillGetDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CF0460 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0460 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C7BD40(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventInfoSkillGetDialog___c__DisplayClass20_0___ctor(
        EventInfoSkillGetDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSkillGetDialog___c__DisplayClass20_0___Open_b__0(
        EventInfoSkillGetDialog___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *_4__this; // x20
  __int64 Master_object; // x0
  __int64 v5; // x1
  struct EventInfoSkillGetDialog_o *v6; // x8
  int32_t eventId; // w22
  UISprite_o *imagePartsIconSprite; // x20
  System_String_o *spriteName; // x21
  struct EventInfoSkillGetDialog_o *v10; // x8
  char v11; // w20
  UISprite_o *imagePartsSkillIcon; // x21
  int32_t skillId; // w22
  struct EventInfoSkillGetDialog_o *v14; // x8
  struct EventInfoSkillGetDialog_o *v15; // x8
  UnityEngine_GameObject_o *imagePartsSkillIconObject; // x0
  bool v17; // w1
  UISprite_o *skillIcon; // x21
  int32_t v19; // w22
  struct EventInfoSkillGetDialog_o *v20; // x8
  struct EventInfoSkillGetDialog_o *v21; // x8
  SkillLvMaster_o *v22; // x20
  int32_t v23; // w21
  struct ImagePartsGroupEntity_o *imagePartsGroupEntity; // x8
  Il2CppObject *v25; // x20
  struct ImagePartsGroupEntity_o *v26; // x8
  System_String_o *MessageLocalizationKey; // x21
  Il2CppObject *v28; // x0
  struct EventInfoSkillGetDialog_o *v29; // x8
  System_String_o *v30; // x22
  UILabel_o *messageLabel; // x21
  System_String_o *v32; // x0
  struct EventInfoSkillGetDialog_o *v33; // x8
  UILabel_o *skillExplanationTitle; // x20
  struct ImagePartsGroupEntity_o *v35; // x8
  __int64 v36; // x21
  System_String_o *MessageTitleLocalizationKey; // x22
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_String_o *MessageTitleLocalizationKeyDefault; // x1
  struct EventInfoSkillGetDialog_o *v52; // x8
  UILabel_o *skillName; // x20
  struct EventInfoSkillGetDialog_o *v54; // x8
  UILabel_o *skillExplanationLabel; // x20
  struct EventInfoSkillGetDialog_o *v56; // x8
  UILabel_o *closeLabel; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Action_o *closeAction; // x1
  UnityEngine_Object_o *gameObject; // x19
  int32_t id; // [xsp+8h] [xbp-48h] BYREF
  int32_t condId; // [xsp+Ch] [xbp-44h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CF0465 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&EventInfoSkillGetDialog_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4CF0465 = 1;
  }
  entity = 0;
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = UnityEngine_Object__op_Equality(_4__this, 0, 0);
  if ( (Master_object & 1) == 0 )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_61;
    eventId = this->fields.eventId;
    imagePartsIconSprite = v6->fields.imagePartsIconSprite;
    spriteName = this->fields.spriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = AtlasManager__SetEventUI_41168628(eventId, imagePartsIconSprite, spriteName, 0);
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_61;
    v11 = Master_object;
    if ( (Master_object & 1) != 0 )
    {
      imagePartsSkillIcon = v10->fields.imagePartsSkillIcon;
      skillId = this->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = AtlasManager__SetSkillIcon(imagePartsSkillIcon, skillId, 0);
      v14 = this->fields.__4__this;
      if ( !v14 )
        goto LABEL_61;
      Master_object = AtlasManager__SetEventUI_41168628(
                        this->fields.eventId,
                        v14->fields.imagePartsSkillIconBg,
                        v14->fields.imagePartsSkillIconBgName,
                        0);
      v15 = this->fields.__4__this;
      if ( !v15 )
        goto LABEL_61;
      imagePartsSkillIconObject = v15->fields.imagePartsSkillIconObject;
      v17 = 1;
    }
    else
    {
      skillIcon = v10->fields.skillIcon;
      v19 = this->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = AtlasManager__SetSkillIcon(skillIcon, v19, 0);
      v20 = this->fields.__4__this;
      if ( !v20 )
        goto LABEL_61;
      imagePartsSkillIconObject = v20->fields.imagePartsSkillIconObject;
      v17 = 0;
    }
    GameObjectHelper__SetActiveSafely(imagePartsSkillIconObject, v17, 0);
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_61;
    GameObjectHelper__SetActiveSafely(v21->fields.skillIconObject, (v11 & 1) == 0, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !this->fields.imagePartsGroupEntity )
      goto LABEL_61;
    v22 = (SkillLvMaster_o *)Master_object;
    Master_object = ImagePartsGroupEntity__GetSkillId(this->fields.imagePartsGroupEntity, 0);
    if ( !this->fields.imagePartsGroupEntity )
      goto LABEL_61;
    v23 = Master_object;
    Master_object = ImagePartsGroupEntity__GetSkillLv(this->fields.imagePartsGroupEntity, 0);
    if ( !v22 )
      goto LABEL_61;
    if ( SkillLvMaster__TryGetEntity(v22, &entity, v23, Master_object, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
      imagePartsGroupEntity = this->fields.imagePartsGroupEntity;
      if ( imagePartsGroupEntity )
      {
        if ( Master_object )
        {
          Master_object = (__int64)QuestMaster__getQuestEntity(
                                     (QuestMaster_o *)Master_object,
                                     imagePartsGroupEntity->fields.condId,
                                     0);
          if ( Master_object )
          {
            Master_object = (__int64)QuestEntity__getQuestName((QuestEntity_o *)Master_object, 0);
            v25 = (Il2CppObject *)Master_object;
            if ( !EventInfoSkillGetDialog_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventInfoSkillGetDialog_TypeInfo);
            v26 = this->fields.imagePartsGroupEntity;
            if ( v26 )
            {
              MessageLocalizationKey = EventInfoSkillGetDialog_TypeInfo->static_fields->MessageLocalizationKey;
              condId = v26->fields.condId;
              v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &condId);
              Master_object = (__int64)System_String__Format(MessageLocalizationKey, v28, 0);
              v29 = this->fields.__4__this;
              if ( v29 )
              {
                v30 = (System_String_o *)Master_object;
                messageLabel = v29->fields.messageLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v32 = LocalizationManager__Get(v30, 0);
                Master_object = (__int64)System_String__Format(v32, v25, 0);
                if ( messageLabel )
                {
                  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
                  v33 = this->fields.__4__this;
                  if ( v33 )
                  {
                    skillExplanationTitle = v33->fields.skillExplanationTitle;
                    Master_object = sub_1C7BB90(string___TypeInfo, 2);
                    v35 = this->fields.imagePartsGroupEntity;
                    if ( v35 )
                    {
                      v36 = Master_object;
                      MessageTitleLocalizationKey = EventInfoSkillGetDialog_TypeInfo->static_fields->MessageTitleLocalizationKey;
                      id = v35->fields.id;
                      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
                      Master_object = (__int64)System_String__Format(MessageTitleLocalizationKey, v38, 0);
                      if ( v36 )
                      {
                        if ( !*(_DWORD *)(v36 + 24)
                          || (*(_QWORD *)(v36 + 32) = Master_object,
                              sub_1C7BA8C(
                                (GrandQuestFolderBoardItem_o *)(v36 + 32),
                                Master_object,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43,
                                v44),
                              *(_DWORD *)(v36 + 24) <= 1u) )
                        {
                          sub_1C7BD48(Master_object);
                        }
                        MessageTitleLocalizationKeyDefault = EventInfoSkillGetDialog_TypeInfo->static_fields->MessageTitleLocalizationKeyDefault;
                        *(_QWORD *)(v36 + 40) = MessageTitleLocalizationKeyDefault;
                        sub_1C7BA8C(
                          (GrandQuestFolderBoardItem_o *)(v36 + 40),
                          (int32_t)MessageTitleLocalizationKeyDefault,
                          v45,
                          v46,
                          v47,
                          v48,
                          v49,
                          v50);
                        Master_object = (__int64)LocalizationManager__GetIfExists((System_String_array *)v36, 0);
                        if ( skillExplanationTitle )
                        {
                          UILabel__set_text(skillExplanationTitle, (System_String_o *)Master_object, 0);
                          v52 = this->fields.__4__this;
                          if ( v52 )
                          {
                            Master_object = (__int64)this->fields.imagePartsGroupEntity;
                            if ( Master_object )
                            {
                              skillName = v52->fields.skillName;
                              Master_object = (__int64)ImagePartsGroupEntity__GetSkillName(
                                                         (ImagePartsGroupEntity_o *)Master_object,
                                                         0);
                              if ( skillName )
                              {
                                UILabel__set_text(skillName, (System_String_o *)Master_object, 0);
                                v54 = this->fields.__4__this;
                                if ( v54 )
                                {
                                  Master_object = (__int64)entity;
                                  if ( entity )
                                  {
                                    skillExplanationLabel = v54->fields.skillExplanationLabel;
                                    Master_object = (__int64)SkillLvEntity__getDetail(entity, 0, 0, 0);
                                    if ( skillExplanationLabel )
                                    {
                                      UILabel__set_text(skillExplanationLabel, (System_String_o *)Master_object, 0);
                                      v56 = this->fields.__4__this;
                                      if ( v56 )
                                      {
                                        closeLabel = v56->fields.closeLabel;
                                        Master_object = (__int64)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/,
                                                                   0);
                                        if ( closeLabel )
                                        {
                                          UILabel__set_text(closeLabel, (System_String_o *)Master_object, 0);
                                          Master_object = (__int64)this->fields.__4__this;
                                          if ( Master_object )
                                          {
                                            BaseDialog__SafeOpen((BaseDialog_o *)Master_object, 0, 0, 0);
                                            Master_object = (__int64)this->fields.__4__this;
                                            if ( Master_object )
                                            {
                                              closeAction = this->fields.closeAction;
                                              *(_QWORD *)(Master_object + 216) = closeAction;
                                              sub_1C7BA8C(
                                                (GrandQuestFolderBoardItem_o *)(Master_object + 216),
                                                (int32_t)closeAction,
                                                v58,
                                                v59,
                                                v60,
                                                v61,
                                                v62,
                                                v63);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_61:
      sub_1C7BD40(Master_object, v5);
    }
    ActionExtensions__Call(this->fields.closeAction, 0);
    Master_object = (__int64)this->fields.__4__this;
    if ( !Master_object )
      goto LABEL_61;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Master_object,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
  }
}