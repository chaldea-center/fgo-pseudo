void EventEquipSkillPartsQuestExplanationDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4CC162A & 1) == 0 )
  {
    sub_1C713B0(&EventEquipSkillPartsQuestExplanationDialog_TypeInfo);
    sub_1C713B0(&StringLiteral_5597/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_EXPLANATION_DIALOG_TEXT_UNDER"*/);
    byte_4CC162A = 1;
  }
  EventEquipSkillPartsQuestExplanationDialog_TypeInfo->static_fields->MessageUnderLocalizationKey = (struct System_String_o *)StringLiteral_5597/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_EXPLANATION_DIALOG_TEXT_UNDER"*/;
  sub_1C71354(EventEquipSkillPartsQuestExplanationDialog_TypeInfo->static_fields, StringLiteral_5597/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_EXPLANATION_DIALOG_TEXT_UNDER"*/);
}


void EventEquipSkillPartsQuestExplanationDialog___ctor(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC1629 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC1629 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsQuestExplanationDialog__Init(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0

  if ( (byte_4CC1623 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4CC1623 = 1;
  }
  this->fields.btnCallback = 0;
  sub_1C71354(&this->fields.btnCallback, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1C71608(transform, v4);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_1C71354(&this->fields.basePanel, Component_object);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsQuestExplanationDialog__OnClickCancel(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CC1627 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventEquipSkillPartsQuestExplanationDialog_OnClickCancel__);
    sub_1C713B0(&Method_EventEquipSkillPartsQuestExplanationDialog__OnClickCancel_b__22_0__);
    byte_4CC1627 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventEquipSkillPartsQuestExplanationDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsQuestExplanationDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventEquipSkillPartsQuestExplanationDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventEquipSkillPartsQuestExplanationDialog__OnClickCancel_b__22_0__,
      0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventEquipSkillPartsQuestExplanationDialog__OnClickDecide(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CC1626 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventEquipSkillPartsQuestExplanationDialog_OnClickDecide__);
    sub_1C713B0(&Method_EventEquipSkillPartsQuestExplanationDialog__OnClickDecide_b__21_0__);
    byte_4CC1626 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventEquipSkillPartsQuestExplanationDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsQuestExplanationDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventEquipSkillPartsQuestExplanationDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventEquipSkillPartsQuestExplanationDialog__OnClickDecide_b__21_0__,
      0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventEquipSkillPartsQuestExplanationDialog__Open(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        QuestPhaseEntity_o *questPhaseEntity,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        CommonConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  QuestMaster_o *Master_object; // x0
  __int64 v12; // x1
  System_String_o *QuestName; // x0
  UILabel_o *messageLabelTop; // x25
  Il2CppObject *v15; // x24
  System_String_o *RenoExplanationDialogText; // x0
  EventEquipSkillPartsQuestExplanationDialog_c *v17; // x0
  UILabel_o *messageLabelUnder; // x23
  System_String_o *MessageUnderLocalizationKey; // x25
  System_String_o *v20; // x0
  UnityEngine_Component_o *equipSkillList; // x23
  bool IsNullOrEmpty; // w0
  UnityEngine_Component_o *assistSkillList; // x23
  bool v24; // w0
  const MethodInfo *v25; // x3
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21

  if ( (byte_4CC1624 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&EventEquipSkillPartsQuestExplanationDialog_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10889/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_1C713B0(&StringLiteral_10888/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    byte_4CC1624 = 1;
  }
  EventEquipSkillPartsQuestExplanationDialog__Init(this, (const MethodInfo *)questPhaseEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !questPhaseEntity )
    goto LABEL_17;
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (QuestMaster_o *)QuestMaster__getQuestEntity(Master_object, questPhaseEntity->fields.questId, 0);
  if ( !Master_object )
    goto LABEL_17;
  QuestName = QuestEntity__getQuestName((QuestEntity_o *)Master_object, 0);
  messageLabelTop = this->fields.messageLabelTop;
  v15 = (Il2CppObject *)QuestName;
  RenoExplanationDialogText = QuestPhaseEntity__GetRenoExplanationDialogText(questPhaseEntity, 0);
  Master_object = (QuestMaster_o *)System_String__Format(RenoExplanationDialogText, v15, 0);
  if ( !messageLabelTop )
    goto LABEL_17;
  UILabel__set_text(messageLabelTop, (System_String_o *)Master_object, 0);
  v17 = EventEquipSkillPartsQuestExplanationDialog_TypeInfo;
  messageLabelUnder = this->fields.messageLabelUnder;
  if ( !EventEquipSkillPartsQuestExplanationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventEquipSkillPartsQuestExplanationDialog_TypeInfo);
    v17 = EventEquipSkillPartsQuestExplanationDialog_TypeInfo;
  }
  MessageUnderLocalizationKey = v17->static_fields->MessageUnderLocalizationKey;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get(MessageUnderLocalizationKey, 0);
  Master_object = (QuestMaster_o *)System_String__Format(v20, v15, 0);
  if ( !messageLabelUnder )
    goto LABEL_17;
  UILabel__set_text(messageLabelUnder, (System_String_o *)Master_object, 0);
  equipSkillList = (UnityEngine_Component_o *)this->fields.equipSkillList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventEquipSkillPartsEntityList, 0);
  BasicHelper__SetActiveSafely(equipSkillList, !IsNullOrEmpty, 0);
  assistSkillList = (UnityEngine_Component_o *)this->fields.assistSkillList;
  v24 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)assistList, 0);
  BasicHelper__SetActiveSafely(assistSkillList, !v24, 0);
  EventEquipSkillPartsQuestExplanationDialog__Setup(this, eventEquipSkillPartsEntityList, assistList, v25);
  decideLabel = this->fields.decideLabel;
  Master_object = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10889/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0),
        cancelLabel = this->fields.cancelLabel,
        Master_object = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10888/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0),
        !cancelLabel) )
  {
LABEL_17:
    sub_1C71608(Master_object, v12);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  this->fields.btnCallback = callback;
  sub_1C71354(&this->fields.btnCallback, callback);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void EventEquipSkillPartsQuestExplanationDialog__Setup(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        const MethodInfo *method)
{
  EventEquipSkillPartsQuestExplanationDialog_o *v6; // x19
  float oneDisplayScrollBarValue; // s0
  float v8; // s8
  EventEquipSkillPartsEntity_o *current; // x23
  Il2CppObject *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t skillId; // w24
  System_String_o *SkillName; // x25
  System_String_o *SkillDetail; // x26
  EventEquipSkillPartsQuestExplanationDialogBoardItem_o *v16; // x23
  const MethodInfo *v17; // x4
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_ICollection_o *v21; // x20
  AssistEntity_o *v22; // x21
  Il2CppObject *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w22
  System_String_o *name; // x23
  System_String_o *Detail; // x24
  EventEquipSkillPartsQuestExplanationDialogBoardItem_o *v29; // x21
  const MethodInfo *v30; // x4
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_ICollection_o *self; // [xsp+68h] [xbp-68h]

  v6 = this;
  if ( (byte_4CC1625 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__get_Current__);
    sub_1C713B0(&EventEquipSkillPartsQuestExplanationDialogBoardItem_TypeInfo);
    sub_1C713B0(&Method_GameObjectHelper_Instantiate_EventEquipSkillPartsQuestExplanationDialogBoardItemDraw___);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    this = (EventEquipSkillPartsQuestExplanationDialog_o *)sub_1C713B0(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__get_Count__);
    byte_4CC1625 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  if ( !eventEquipSkillPartsEntityList || !assistList )
    goto LABEL_27;
  this = (EventEquipSkillPartsQuestExplanationDialog_o *)v6->fields.scrollBar;
  oneDisplayScrollBarValue = 0.0;
  if ( assistList->fields._size + eventEquipSkillPartsEntityList->fields._size == 1 )
    oneDisplayScrollBarValue = v6->fields.oneDisplayScrollBarValue;
  self = (System_Collections_ICollection_o *)assistList;
  if ( !this )
LABEL_27:
    sub_1C71608(this, eventEquipSkillPartsEntityList);
  UIProgressBar__set_value((UIProgressBar_o *)this, oneDisplayScrollBarValue, 0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)eventEquipSkillPartsEntityList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
  v8 = 0.0;
  v36 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__) )
  {
    current = (EventEquipSkillPartsEntity_o *)v36.fields._current;
    v10 = GameObjectHelper__Instantiate_object_(
            v6->fields.prefab,
            v6->fields.equipSkillParent,
            0,
            (const MethodInfo_31A4AF4 *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsQuestExplanationDialogBoardItemDraw___);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v10, 1, 0);
    if ( !current )
      sub_1C71608(v11, v12);
    skillId = current->fields.skillId;
    SkillName = EventEquipSkillPartsEntity__GetSkillName(current, 0);
    SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(current, 0, 0);
    v16 = (EventEquipSkillPartsQuestExplanationDialogBoardItem_o *)sub_1C715FC(EventEquipSkillPartsQuestExplanationDialogBoardItem_TypeInfo);
    EventEquipSkillPartsQuestExplanationDialogBoardItem___ctor(v16, skillId, SkillName, SkillDetail, v17);
    if ( !v10 )
      sub_1C71608(v18, v19);
    EventEquipSkillPartsQuestExplanationDialogBoardItemDraw__UpdateUi(
      (EventEquipSkillPartsQuestExplanationDialogBoardItemDraw_o *)v10,
      v16,
      v20);
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v10, -v8, 0);
    v8 = v8 + (float)(v6->fields.skillHeight + v6->fields.skillSpace);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventEquipSkillPartsEntityList, 0) )
  {
    v21 = self;
  }
  else
  {
    v21 = self;
    if ( !BasicHelper__IsNullOrEmpty(self, 0) )
    {
      TransformHelper__SetLocalPositionY(
        v6->fields.eventInfoAssistListParent,
        (float)-v8 - v6->fields.masterToAssistSkillSpace,
        0);
      v8 = 0.0;
    }
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)v21,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__) )
  {
    v22 = (AssistEntity_o *)v35.fields._current;
    v23 = GameObjectHelper__Instantiate_object_(
            v6->fields.prefab,
            v6->fields.assistSkillParent,
            0,
            (const MethodInfo_31A4AF4 *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsQuestExplanationDialogBoardItemDraw___);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v23, 1, 0);
    if ( !v22 )
      sub_1C71608(v24, v25);
    v26 = v22->fields.skillId;
    name = v22->fields.name;
    Detail = AssistEntity__GetDetail(v22, 0, 0);
    v29 = (EventEquipSkillPartsQuestExplanationDialogBoardItem_o *)sub_1C715FC(EventEquipSkillPartsQuestExplanationDialogBoardItem_TypeInfo);
    EventEquipSkillPartsQuestExplanationDialogBoardItem___ctor(v29, v26, name, Detail, v30);
    if ( !v23 )
      sub_1C71608(v31, v32);
    EventEquipSkillPartsQuestExplanationDialogBoardItemDraw__UpdateUi(
      (EventEquipSkillPartsQuestExplanationDialogBoardItemDraw_o *)v23,
      v29,
      v33);
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v23, -v8, 0);
    v8 = v8 + (float)(v6->fields.skillHeight + v6->fields.skillSpace);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
}


void EventEquipSkillPartsQuestExplanationDialog___OnClickCancel_b__22_0(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *btnCallback; // x8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CC162C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC162C = 1;
  }
  btnCallback = this->fields.btnCallback;
  if ( btnCallback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))btnCallback->fields.invoke_impl)(
      btnCallback->fields.method_code,
      0,
      btnCallback->fields.method);
  this->fields.btnCallback = 0;
  sub_1C71354(&this->fields.btnCallback, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}


void EventEquipSkillPartsQuestExplanationDialog___OnClickDecide_b__21_0(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *btnCallback; // x8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CC162B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC162B = 1;
  }
  btnCallback = this->fields.btnCallback;
  if ( btnCallback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))btnCallback->fields.invoke_impl)(
      btnCallback->fields.method_code,
      1,
      btnCallback->fields.method);
  this->fields.btnCallback = 0;
  sub_1C71354(&this->fields.btnCallback, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}


UnityEngine_GameObject_o *EventEquipSkillPartsQuestExplanationDialog__get_closeBtnObject(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CC1628 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1628 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C71608(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}