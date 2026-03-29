void EventInfoSkillExplanationDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct EventInfoSkillExplanationDialog_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D3280A & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoSkillExplanationDialog_TypeInfo);
    sub_1C93AD4(&StringLiteral_5647/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/);
    sub_1C93AD4(&StringLiteral_5646/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/);
    byte_4D3280A = 1;
  }
  EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message01LocalizationKey = (struct System_String_o *)StringLiteral_5647/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventInfoSkillExplanationDialog_TypeInfo->static_fields,
    StringLiteral_5647/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_5646/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/;
  static_fields = EventInfoSkillExplanationDialog_TypeInfo->static_fields;
  static_fields->Message02LocalizationKey = (struct System_String_o *)StringLiteral_5646/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->Message02LocalizationKey, v7, v9, v10, v11, v12, v13, v14);
}


void EventInfoSkillExplanationDialog___ctor(EventInfoSkillExplanationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D32809 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D32809 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoSkillExplanationDialog__CheckAssertion(EventInfoSkillExplanationDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillExplanationDialog__Init(EventInfoSkillExplanationDialog_o *this, const MethodInfo *method)
{
  EventInfoSkillExplanationDialog_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  v2 = this;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  v2->fields.callback = 0;
  v2 = (EventInfoSkillExplanationDialog_o *)((char *)v2 + 224);
  LOBYTE(v2->monitor) = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v2, 0, v3, v4, v5, v6, v7, v8);
}


void EventInfoSkillExplanationDialog__OnClickCancelButton(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D32807 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoSkillExplanationDialog_OnClickCancelButton__);
    sub_1C93AD4(&Method_EventInfoSkillExplanationDialog__OnClickCancelButton_b__23_0__);
    byte_4D32807 = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoSkillExplanationDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillExplanationDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoSkillExplanationDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoSkillExplanationDialog__OnClickCancelButton_b__23_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
    this->fields.isClose = 1;
  }
}


void EventInfoSkillExplanationDialog__OnClickDecideButton(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D32806 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoSkillExplanationDialog_OnClickDecideButton__);
    sub_1C93AD4(&Method_EventInfoSkillExplanationDialog__OnClickDecideButton_b__22_0__);
    byte_4D32806 = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoSkillExplanationDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillExplanationDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoSkillExplanationDialog_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoSkillExplanationDialog__OnClickDecideButton_b__22_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
    this->fields.isClose = 1;
  }
}


void EventInfoSkillExplanationDialog__Open(
        EventInfoSkillExplanationDialog_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        int32_t eventId,
        CommonConfirmDialog_ClickDelegate_o *clickCallback,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Action_o *v36; // x21
  __int64 v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w20
  System_Action_o *v45; // x21

  if ( (byte_4D32805 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_EventInfoSkillExplanationDialog___c__DisplayClass21_0__Open_b__0__);
    sub_1C93AD4(&Method_EventInfoSkillExplanationDialog___c__DisplayClass21_0__Open_b__1__);
    sub_1C93AD4(&EventInfoSkillExplanationDialog___c__DisplayClass21_0_TypeInfo);
    byte_4D32805 = 1;
  }
  v9 = sub_1C93D20(EventInfoSkillExplanationDialog___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = clickCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)clickCallback, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = imagePartsGroupEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)imagePartsGroupEntity, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)this, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v9 + 48) = eventId;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.callback = 0;
  this->fields.isClose = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callback, 0, v30, v31, v32, v33, v34, v35);
  v36 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v9,
    Method_EventInfoSkillExplanationDialog___c__DisplayClass21_0__Open_b__0__,
    0);
  *(_QWORD *)(v9 + 32) = v36;
  v37 = v9 + 32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v36, v38, v39, v40, v41, v42, v43);
  if ( !*(_QWORD *)(v9 + 24) )
  {
    if ( *(_QWORD *)v37 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v37 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v37 + 64LL),
        *(_QWORD *)(*(_QWORD *)v37 + 40LL));
      return;
    }
LABEL_10:
    sub_1C93D2C(v10, v11);
  }
  v44 = *(_DWORD *)(v9 + 48);
  v45 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v9,
    Method_EventInfoSkillExplanationDialog___c__DisplayClass21_0__Open_b__1__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_41320056(v44, v45, 1, 0);
}


void EventInfoSkillExplanationDialog___OnClickCancelButton_b__23_0(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8
  struct CommonConfirmDialog_ClickDelegate_o **p_callback; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_callback = &this->fields.callback;
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.isClose = 0;
  this->fields.callback = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_callback, 0, v5, v6, v7, v8, v9, v10);
}


void EventInfoSkillExplanationDialog___OnClickDecideButton_b__22_0(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8
  struct CommonConfirmDialog_ClickDelegate_o **p_callback; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_callback = &this->fields.callback;
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.isClose = 0;
  this->fields.callback = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_callback, 0, v5, v6, v7, v8, v9, v10);
}


UnityEngine_GameObject_o *EventInfoSkillExplanationDialog__get_closeBtnObject(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D32808 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32808 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventInfoSkillExplanationDialog___c__DisplayClass21_0___ctor(
        EventInfoSkillExplanationDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSkillExplanationDialog___c__DisplayClass21_0___Open_b__0(
        EventInfoSkillExplanationDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *clickCallback; // x8

  clickCallback = this->fields.clickCallback;
  if ( clickCallback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickCallback->fields.invoke_impl)(
      clickCallback->fields.method_code,
      0,
      clickCallback->fields.method);
}


void EventInfoSkillExplanationDialog___c__DisplayClass21_0___Open_b__1(
        EventInfoSkillExplanationDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  __int64 Master_object; // x0
  __int64 v4; // x1
  SkillLvMaster_o *v5; // x20
  int32_t v6; // w21
  struct ImagePartsGroupEntity_o *imagePartsGroupEntity; // x8
  Il2CppObject *v8; // x20
  struct ImagePartsGroupEntity_o *v9; // x8
  System_String_o *Message01LocalizationKey; // x21
  Il2CppObject *v11; // x0
  struct EventInfoSkillExplanationDialog_o *_4__this; // x8
  System_String_o *v13; // x22
  UILabel_o *messageLabel01; // x21
  System_String_o *v15; // x0
  struct EventInfoSkillExplanationDialog_o *v16; // x8
  UILabel_o *messageLabel02; // x21
  System_String_o *v18; // x0
  struct EventInfoSkillExplanationDialog_o *v19; // x8
  struct ImagePartsGroupEntity_o *v20; // x9
  int32_t v21; // w20
  System_String_o *imagePartsIconSpriteNameFormat; // x21
  struct ImagePartsGroupEntity_o *v23; // x8
  Il2CppObject *v24; // x22
  Il2CppObject *v25; // x0
  struct EventInfoSkillExplanationDialog_o *v26; // x8
  System_String_o *v27; // x21
  int32_t eventId; // w22
  UISprite_o *imagePartsIconSprite; // x23
  struct EventInfoSkillExplanationDialog_o *v30; // x8
  char v31; // w21
  UISprite_o *imagePartsSkillIcon; // x22
  struct EventInfoSkillExplanationDialog_o *v33; // x8
  struct EventInfoSkillExplanationDialog_o *v34; // x8
  UnityEngine_GameObject_o *imagePartsSkillIconObject; // x0
  bool v36; // w1
  struct System_Action_o *onFailed; // x8
  UISprite_o *skillIcon; // x22
  struct EventInfoSkillExplanationDialog_o *v39; // x8
  struct EventInfoSkillExplanationDialog_o *v40; // x8
  struct EventInfoSkillExplanationDialog_o *v41; // x8
  UILabel_o *skillName; // x20
  struct EventInfoSkillExplanationDialog_o *v43; // x8
  UILabel_o *skillExplanationLabel; // x20
  struct EventInfoSkillExplanationDialog_o *v45; // x8
  UILabel_o *decideLabel; // x20
  struct EventInfoSkillExplanationDialog_o *v47; // x8
  UILabel_o *cancelLabel; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct CommonConfirmDialog_ClickDelegate_o *clickCallback; // x1
  int32_t imageValue; // [xsp+Ch] [xbp-54h] BYREF
  int32_t typeValue; // [xsp+10h] [xbp-50h] BYREF
  int32_t condId; // [xsp+14h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D3280B & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&EventInfoSkillExplanationDialog_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_10962/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_10961/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    byte_4D3280B = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this->fields.imagePartsGroupEntity )
    goto LABEL_60;
  v5 = (SkillLvMaster_o *)Master_object;
  Master_object = ImagePartsGroupEntity__GetSkillId(this->fields.imagePartsGroupEntity, 0);
  if ( !this->fields.imagePartsGroupEntity )
    goto LABEL_60;
  v6 = Master_object;
  Master_object = ImagePartsGroupEntity__GetSkillLv(this->fields.imagePartsGroupEntity, 0);
  if ( !v5 )
    goto LABEL_60;
  Master_object = SkillLvMaster__TryGetEntity(v5, &entity, v6, Master_object, 0);
  if ( (Master_object & 1) == 0 )
  {
    onFailed = this->fields.onFailed;
    if ( onFailed )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onFailed->fields.invoke_impl)(
        onFailed->fields.method_code,
        onFailed->fields.method);
      return;
    }
    goto LABEL_60;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestMaster___);
  imagePartsGroupEntity = this->fields.imagePartsGroupEntity;
  if ( !imagePartsGroupEntity )
    goto LABEL_60;
  if ( !Master_object )
    goto LABEL_60;
  Master_object = (__int64)QuestMaster__getQuestEntity(
                             (QuestMaster_o *)Master_object,
                             imagePartsGroupEntity->fields.condId,
                             0);
  if ( !Master_object )
    goto LABEL_60;
  Master_object = (__int64)QuestEntity__getQuestName((QuestEntity_o *)Master_object, 0);
  v8 = (Il2CppObject *)Master_object;
  if ( !EventInfoSkillExplanationDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoSkillExplanationDialog_TypeInfo);
  v9 = this->fields.imagePartsGroupEntity;
  if ( !v9 )
    goto LABEL_60;
  Message01LocalizationKey = EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message01LocalizationKey;
  condId = v9->fields.condId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &condId);
  Master_object = (__int64)System_String__Format(Message01LocalizationKey, v11, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  v13 = (System_String_o *)Master_object;
  messageLabel01 = _4__this->fields.messageLabel01;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get(v13, 0);
  Master_object = (__int64)System_String__Format(v15, v8, 0);
  if ( !messageLabel01 )
    goto LABEL_60;
  UILabel__set_text(messageLabel01, (System_String_o *)Master_object, 0);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_60;
  messageLabel02 = v16->fields.messageLabel02;
  v18 = LocalizationManager__Get(EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message02LocalizationKey, 0);
  Master_object = (__int64)System_String__Format(v18, v8, 0);
  if ( !messageLabel02 )
    goto LABEL_60;
  UILabel__set_text(messageLabel02, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.imagePartsGroupEntity;
  if ( !Master_object )
    goto LABEL_60;
  Master_object = ImagePartsGroupEntity__GetSkillId((ImagePartsGroupEntity_o *)Master_object, 0);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_60;
  v20 = this->fields.imagePartsGroupEntity;
  if ( !v20 )
    goto LABEL_60;
  v21 = Master_object;
  imagePartsIconSpriteNameFormat = v19->fields.imagePartsIconSpriteNameFormat;
  typeValue = v20->fields.typeValue;
  Master_object = j_il2cpp_value_box_0(int_TypeInfo, &typeValue);
  v23 = this->fields.imagePartsGroupEntity;
  if ( !v23 )
    goto LABEL_60;
  v24 = (Il2CppObject *)Master_object;
  imageValue = v23->fields.imageValue;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageValue);
  Master_object = (__int64)System_String__Format_64467032(imagePartsIconSpriteNameFormat, v24, v25, 0);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_60;
  v27 = (System_String_o *)Master_object;
  eventId = this->fields.eventId;
  imagePartsIconSprite = v26->fields.imagePartsIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = AtlasManager__SetEventUI_41320352(eventId, imagePartsIconSprite, v27, 0);
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_60;
  v31 = Master_object;
  if ( (Master_object & 1) != 0 )
  {
    imagePartsSkillIcon = v30->fields.imagePartsSkillIcon;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = AtlasManager__SetSkillIcon(imagePartsSkillIcon, v21, 0);
    v33 = this->fields.__4__this;
    if ( v33 )
    {
      Master_object = AtlasManager__SetEventUI_41320352(
                        this->fields.eventId,
                        v33->fields.imagePartsSkillIconBg,
                        v33->fields.imagePartsSkillIconBgName,
                        0);
      v34 = this->fields.__4__this;
      if ( v34 )
      {
        imagePartsSkillIconObject = v34->fields.imagePartsSkillIconObject;
        v36 = 1;
        goto LABEL_43;
      }
    }
LABEL_60:
    sub_1C93D2C(Master_object, v4);
  }
  skillIcon = v30->fields.skillIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = AtlasManager__SetSkillIcon(skillIcon, v21, 0);
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_60;
  imagePartsSkillIconObject = v39->fields.imagePartsSkillIconObject;
  v36 = 0;
LABEL_43:
  GameObjectHelper__SetActiveSafely(imagePartsSkillIconObject, v36, 0);
  v40 = this->fields.__4__this;
  if ( !v40 )
    goto LABEL_60;
  GameObjectHelper__SetActiveSafely(v40->fields.skillIconObject, (v31 & 1) == 0, 0);
  v41 = this->fields.__4__this;
  if ( !v41 )
    goto LABEL_60;
  Master_object = (__int64)this->fields.imagePartsGroupEntity;
  if ( !Master_object )
    goto LABEL_60;
  skillName = v41->fields.skillName;
  Master_object = (__int64)ImagePartsGroupEntity__GetSkillName((ImagePartsGroupEntity_o *)Master_object, 0);
  if ( !skillName )
    goto LABEL_60;
  UILabel__set_text(skillName, (System_String_o *)Master_object, 0);
  v43 = this->fields.__4__this;
  if ( !v43 )
    goto LABEL_60;
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_60;
  skillExplanationLabel = v43->fields.skillExplanationLabel;
  Master_object = (__int64)SkillLvEntity__getDetail(entity, 0, 0, 0);
  if ( !skillExplanationLabel )
    goto LABEL_60;
  UILabel__set_text(skillExplanationLabel, (System_String_o *)Master_object, 0);
  v45 = this->fields.__4__this;
  if ( !v45 )
    goto LABEL_60;
  decideLabel = v45->fields.decideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10962/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_60;
  UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0);
  v47 = this->fields.__4__this;
  if ( !v47 )
    goto LABEL_60;
  cancelLabel = v47->fields.cancelLabel;
  Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10961/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_60;
  clickCallback = this->fields.clickCallback;
  *(_QWORD *)(Master_object + 224) = clickCallback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(Master_object + 224),
    (int32_t)clickCallback,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  Master_object = (__int64)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_60;
  BaseDialog__Open((BaseDialog_o *)Master_object, 0, 0, 0, 0);
}