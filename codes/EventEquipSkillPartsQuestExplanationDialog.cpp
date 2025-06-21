void __fastcall EventEquipSkillPartsQuestExplanationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4B168A8 & 1) == 0 )
  {
    sub_1BCAFF8(&EventEquipSkillPartsQuestExplanationDialog_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_5558/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_EXPLANATION_DIALOG_TEXT_UNDER"*/, v2);
    byte_4B168A8 = 1;
  }
  EventEquipSkillPartsQuestExplanationDialog_TypeInfo->static_fields->MessageUnderLocalizationKey = (struct System_String_o *)StringLiteral_5558/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_EXPLANATION_DIALOG_TEXT_UNDER"*/;
  sub_1BCAF9C(EventEquipSkillPartsQuestExplanationDialog_TypeInfo->static_fields);
}


void __fastcall EventEquipSkillPartsQuestExplanationDialog___ctor(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B168A7 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B168A7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventEquipSkillPartsQuestExplanationDialog__Init(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  if ( (byte_4B168A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B168A1 = 1;
  }
  this->fields.btnCallback = 0LL;
  sub_1BCAF9C(&this->fields.btnCallback);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_1BCB254(transform, v4);
  this->fields.basePanel = (struct UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)transform,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  sub_1BCAF9C(&this->fields.basePanel);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventEquipSkillPartsQuestExplanationDialog__OnClickCancel(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B168A5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EventEquipSkillPartsQuestExplanationDialog_OnClickCancel__, v3);
    sub_1BCAFF8(&Method_EventEquipSkillPartsQuestExplanationDialog__OnClickCancel_b__22_0__, v4);
    byte_4B168A5 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_EventEquipSkillPartsQuestExplanationDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsQuestExplanationDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_EventEquipSkillPartsQuestExplanationDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventEquipSkillPartsQuestExplanationDialog__OnClickCancel_b__22_0__,
      0LL);
    BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall EventEquipSkillPartsQuestExplanationDialog__OnClickDecide(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B168A4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EventEquipSkillPartsQuestExplanationDialog_OnClickDecide__, v3);
    sub_1BCAFF8(&Method_EventEquipSkillPartsQuestExplanationDialog__OnClickDecide_b__21_0__, v4);
    byte_4B168A4 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_EventEquipSkillPartsQuestExplanationDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsQuestExplanationDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_EventEquipSkillPartsQuestExplanationDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventEquipSkillPartsQuestExplanationDialog__OnClickDecide_b__21_0__,
      0LL);
    BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall EventEquipSkillPartsQuestExplanationDialog__Open(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        QuestPhaseEntity_o *questPhaseEntity,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        CommonConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  QuestMaster_o *Master_object; // x0
  __int64 v17; // x1
  System_String_o *QuestName; // x0
  UILabel_o *messageLabelTop; // x25
  Il2CppObject *v20; // x24
  System_String_o *RenoExplanationDialogText; // x0
  EventEquipSkillPartsQuestExplanationDialog_c *v22; // x0
  UILabel_o *messageLabelUnder; // x23
  System_String_o *MessageUnderLocalizationKey; // x25
  System_String_o *v25; // x0
  UnityEngine_Component_o *equipSkillList; // x23
  bool IsNullOrEmpty; // w0
  UnityEngine_Component_o *assistSkillList; // x23
  bool v29; // w0
  const MethodInfo *v30; // x3
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21

  if ( (byte_4B168A2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestMaster___, questPhaseEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&EventEquipSkillPartsQuestExplanationDialog_TypeInfo, v12);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_10803/*"QUEST_MESSAGE_DLG_DECIDE"*/, v14);
    sub_1BCAFF8(&StringLiteral_10802/*"QUEST_MESSAGE_DLG_CANCEL"*/, v15);
    byte_4B168A2 = 1;
  }
  EventEquipSkillPartsQuestExplanationDialog__Init(this, (const MethodInfo *)questPhaseEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !questPhaseEntity )
    goto LABEL_17;
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (QuestMaster_o *)QuestMaster__getQuestEntity(Master_object, questPhaseEntity->fields.questId, 0LL);
  if ( !Master_object )
    goto LABEL_17;
  QuestName = QuestEntity__getQuestName((QuestEntity_o *)Master_object, 0LL);
  messageLabelTop = this->fields.messageLabelTop;
  v20 = (Il2CppObject *)QuestName;
  RenoExplanationDialogText = QuestPhaseEntity__GetRenoExplanationDialogText(questPhaseEntity, 0LL);
  Master_object = (QuestMaster_o *)System_String__Format(RenoExplanationDialogText, v20, 0LL);
  if ( !messageLabelTop )
    goto LABEL_17;
  UILabel__set_text(messageLabelTop, (System_String_o *)Master_object, 0LL);
  v22 = EventEquipSkillPartsQuestExplanationDialog_TypeInfo;
  messageLabelUnder = this->fields.messageLabelUnder;
  if ( !EventEquipSkillPartsQuestExplanationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventEquipSkillPartsQuestExplanationDialog_TypeInfo);
    v22 = EventEquipSkillPartsQuestExplanationDialog_TypeInfo;
  }
  MessageUnderLocalizationKey = v22->static_fields->MessageUnderLocalizationKey;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get(MessageUnderLocalizationKey, 0LL);
  Master_object = (QuestMaster_o *)System_String__Format(v25, v20, 0LL);
  if ( !messageLabelUnder )
    goto LABEL_17;
  UILabel__set_text(messageLabelUnder, (System_String_o *)Master_object, 0LL);
  equipSkillList = (UnityEngine_Component_o *)this->fields.equipSkillList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventEquipSkillPartsEntityList, 0LL);
  BasicHelper__SetActiveSafely(equipSkillList, !IsNullOrEmpty, 0LL);
  assistSkillList = (UnityEngine_Component_o *)this->fields.assistSkillList;
  v29 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)assistList, 0LL);
  BasicHelper__SetActiveSafely(assistSkillList, !v29, 0LL);
  EventEquipSkillPartsQuestExplanationDialog__Setup(this, eventEquipSkillPartsEntityList, assistList, v30);
  decideLabel = this->fields.decideLabel;
  Master_object = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10803/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0LL),
        cancelLabel = this->fields.cancelLabel,
        Master_object = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10802/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_17:
    sub_1BCB254(Master_object, v17);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0LL);
  this->fields.btnCallback = callback;
  sub_1BCAF9C(&this->fields.btnCallback);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall EventEquipSkillPartsQuestExplanationDialog__Setup(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        const MethodInfo *method)
{
  EventEquipSkillPartsQuestExplanationDialog_o *v6; // x19
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
  __int64 v17; // x1
  float oneDisplayScrollBarValue; // s0
  float v19; // s8
  EventEquipSkillPartsEntity_o *current; // x23
  Il2CppObject *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t skillId; // w24
  System_String_o *SkillName; // x25
  System_String_o *SkillDetail; // x26
  EventEquipSkillPartsQuestExplanationDialogBoardItem_o *v27; // x23
  const MethodInfo *v28; // x4
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  System_Collections_ICollection_o *v32; // x20
  AssistEntity_o *v33; // x21
  Il2CppObject *v34; // x20
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w22
  System_String_o *name; // x23
  System_String_o *Detail; // x24
  EventEquipSkillPartsQuestExplanationDialogBoardItem_o *v40; // x21
  const MethodInfo *v41; // x4
  __int64 v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_ICollection_o *self; // [xsp+68h] [xbp-68h]

  v6 = this;
  if ( (byte_4B168A3 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__,
      eventEquipSkillPartsEntityList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__get_Current__, v11);
    sub_1BCAFF8(&EventEquipSkillPartsQuestExplanationDialogBoardItem_TypeInfo, v12);
    sub_1BCAFF8(&Method_GameObjectHelper_Instantiate_EventEquipSkillPartsQuestExplanationDialogBoardItemDraw___, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssistEntity__get_Count__, v16);
    this = (EventEquipSkillPartsQuestExplanationDialog_o *)sub_1BCAFF8(
                                                             &Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__get_Count__,
                                                             v17);
    byte_4B168A3 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
  if ( !eventEquipSkillPartsEntityList || !assistList )
    goto LABEL_27;
  this = (EventEquipSkillPartsQuestExplanationDialog_o *)v6->fields.scrollBar;
  oneDisplayScrollBarValue = 0.0;
  if ( assistList->fields._size + eventEquipSkillPartsEntityList->fields._size == 1 )
    oneDisplayScrollBarValue = v6->fields.oneDisplayScrollBarValue;
  self = (System_Collections_ICollection_o *)assistList;
  if ( !this )
LABEL_27:
    sub_1BCB254(this, eventEquipSkillPartsEntityList);
  UIProgressBar__set_value((UIProgressBar_o *)this, oneDisplayScrollBarValue, 0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)eventEquipSkillPartsEntityList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
  v19 = 0.0;
  v47 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__) )
  {
    current = (EventEquipSkillPartsEntity_o *)v47.fields._current;
    v21 = GameObjectHelper__Instantiate_object_(
            v6->fields.prefab,
            v6->fields.equipSkillParent,
            0,
            (const MethodInfo_3070334 *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsQuestExplanationDialogBoardItemDraw___);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v21, 1, 0LL);
    if ( !current )
      sub_1BCB254(v22, v23);
    skillId = current->fields.skillId;
    SkillName = EventEquipSkillPartsEntity__GetSkillName(current, 0LL);
    SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(current, 0, 0LL);
    v27 = (EventEquipSkillPartsQuestExplanationDialogBoardItem_o *)sub_1BCB244(EventEquipSkillPartsQuestExplanationDialogBoardItem_TypeInfo);
    EventEquipSkillPartsQuestExplanationDialogBoardItem___ctor(v27, skillId, SkillName, SkillDetail, v28);
    if ( !v21 )
      sub_1BCB254(v29, v30);
    EventEquipSkillPartsQuestExplanationDialogBoardItemDraw__UpdateUi(
      (EventEquipSkillPartsQuestExplanationDialogBoardItemDraw_o *)v21,
      v27,
      v31);
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v21, -v19, 0LL);
    v19 = v19 + (float)(v6->fields.skillHeight + v6->fields.skillSpace);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventEquipSkillPartsEntityList, 0LL) )
  {
    v32 = self;
  }
  else
  {
    v32 = self;
    if ( !BasicHelper__IsNullOrEmpty(self, 0LL) )
    {
      TransformHelper__SetLocalPositionY(
        v6->fields.eventInfoAssistListParent,
        (float)-v19 - v6->fields.masterToAssistSkillSpace,
        0LL);
      v19 = 0.0;
    }
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)v32,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__) )
  {
    v33 = (AssistEntity_o *)v46.fields._current;
    v34 = GameObjectHelper__Instantiate_object_(
            v6->fields.prefab,
            v6->fields.assistSkillParent,
            0,
            (const MethodInfo_3070334 *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsQuestExplanationDialogBoardItemDraw___);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v34, 1, 0LL);
    if ( !v33 )
      sub_1BCB254(v35, v36);
    v37 = v33->fields.skillId;
    name = v33->fields.name;
    Detail = AssistEntity__GetDetail(v33, 0, 0LL);
    v40 = (EventEquipSkillPartsQuestExplanationDialogBoardItem_o *)sub_1BCB244(EventEquipSkillPartsQuestExplanationDialogBoardItem_TypeInfo);
    EventEquipSkillPartsQuestExplanationDialogBoardItem___ctor(v40, v37, name, Detail, v41);
    if ( !v34 )
      sub_1BCB254(v42, v43);
    EventEquipSkillPartsQuestExplanationDialogBoardItemDraw__UpdateUi(
      (EventEquipSkillPartsQuestExplanationDialogBoardItemDraw_o *)v34,
      v40,
      v44);
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v34, -v19, 0LL);
    v19 = v19 + (float)(v6->fields.skillHeight + v6->fields.skillSpace);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
}


void __fastcall EventEquipSkillPartsQuestExplanationDialog___OnClickCancel_b__22_0(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *btnCallback; // x8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B168AA & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B168AA = 1;
  }
  btnCallback = this->fields.btnCallback;
  if ( btnCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))btnCallback->fields.m_target)(
      btnCallback->fields.original_method_info,
      0LL,
      *(_QWORD *)&btnCallback->fields.extra_arg);
  this->fields.btnCallback = 0LL;
  sub_1BCAF9C(&this->fields.btnCallback);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
}


void __fastcall EventEquipSkillPartsQuestExplanationDialog___OnClickDecide_b__21_0(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *btnCallback; // x8
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B168A9 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B168A9 = 1;
  }
  btnCallback = this->fields.btnCallback;
  if ( btnCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))btnCallback->fields.m_target)(
      btnCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&btnCallback->fields.extra_arg);
  this->fields.btnCallback = 0LL;
  sub_1BCAF9C(&this->fields.btnCallback);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventEquipSkillPartsQuestExplanationDialog__get_closeBtnObject(
        EventEquipSkillPartsQuestExplanationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B168A6 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B168A6 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BCB254(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}