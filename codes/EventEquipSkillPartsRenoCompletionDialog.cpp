void EventEquipSkillPartsRenoCompletionDialog___ctor(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3D269 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3D269 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsRenoCompletionDialog__Init(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4C3D264 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C3D264 = 1;
  }
  this->fields.closeCallback = 0;
  sub_1C36FFC(&this->fields.closeCallback, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1C372B4(transform);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_1C36FFC(&this->fields.basePanel, Component_object);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsRenoCompletionDialog__OnClickCloseButton(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C3D267 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__);
    sub_1C37058(&Method_EventEquipSkillPartsRenoCompletionDialog__OnClickCloseButton_b__19_0__);
    byte_4C3D267 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventEquipSkillPartsRenoCompletionDialog__OnClickCloseButton_b__19_0__,
      0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventEquipSkillPartsRenoCompletionDialog__Open(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        QuestPhaseEntity_o *questPhaseEntity,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  UILabel_o *titleLabel; // x23
  UILabel_o *msgLabel; // x23
  System_String_o *RenoCompletionDialogText; // x22
  Il2CppObject *v16; // x0
  UILabel_o *closeLabel; // x22
  System_Collections_Generic_List_EventEquipSkillPartsEntity__o *v18; // x1
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v21; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v23; // x8

  if ( (byte_4C3D265 & 1) == 0 )
  {
    sub_1C37058(&Method_EventEquipSkillPartsRenoCompletionDialog_Open__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5602/*"EVENT_EQUIP_SKILL_PARTS_RENO_COMPLETION_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_16862/*"ar307"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_5603/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/);
    byte_4C3D265 = 1;
  }
  EventEquipSkillPartsRenoCompletionDialog__Init(this, (const MethodInfo *)questPhaseEntity);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v11 = Method_EventEquipSkillPartsRenoCompletionDialog_Open__;
  if ( (*((_BYTE *)Method_EventEquipSkillPartsRenoCompletionDialog_Open__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C37070(Method_EventEquipSkillPartsRenoCompletionDialog_Open__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C3703C(v11, v11[4]);
  OverwriteAssetSoundName__PlaySe(v12, (System_String_o *)StringLiteral_16862/*"ar307"*/, 0, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5602/*"EVENT_EQUIP_SKILL_PARTS_RENO_COMPLETION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  if ( !questPhaseEntity )
    goto LABEL_23;
  msgLabel = this->fields.msgLabel;
  RenoCompletionDialogText = QuestPhaseEntity__GetRenoCompletionDialogText(questPhaseEntity, 0);
  v16 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5603/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(RenoCompletionDialogText, v16, 0);
  if ( !msgLabel )
    goto LABEL_23;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_23;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
  this->fields.closeCallback = closeCallback;
  sub_1C36FFC(&this->fields.closeCallback, closeCallback);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.equipSkillTitle, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.assistSkillTitle, 0, 0);
  EventEquipSkillPartsRenoCompletionDialog__Setup(this, v18, assistList, v19);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v21 = this->fields.scrollView;
    if ( !v21 )
      goto LABEL_23;
    verticalScrollBar = (UnityEngine_Object_o *)v21->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v23 = this->fields.scrollView;
      if ( v23 )
      {
        gameObject = (UnityEngine_GameObject_o *)v23->fields.verticalScrollBar;
        if ( gameObject )
        {
          UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0);
          goto LABEL_22;
        }
      }
LABEL_23:
      sub_1C372B4(gameObject);
    }
  }
LABEL_22:
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void EventEquipSkillPartsRenoCompletionDialog__Setup(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 v7; // x0
  EventEquipSkillPartsEntity_o *current; // x22
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  int32_t skillId; // w23
  System_String_o *SkillName; // x24
  System_String_o *SkillDetail; // x25
  EventEquipSkillPartsRenoCompletionBoardItem_o *v14; // x22
  const MethodInfo *v15; // x4
  __int64 v16; // x0
  const MethodInfo *v17; // x2
  AssistEntity_o *v18; // x21
  Il2CppObject *v19; // x20
  __int64 v20; // x0
  int32_t v21; // w22
  System_String_o *name; // x23
  System_String_o *Detail; // x24
  EventEquipSkillPartsRenoCompletionBoardItem_o *v24; // x21
  const MethodInfo *v25; // x4
  __int64 v26; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C3D266 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__get_Current__);
    sub_1C37058(&EventEquipSkillPartsRenoCompletionBoardItem_TypeInfo);
    sub_1C37058(&Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoCompletionBoardItemDraw___);
    sub_1C37058(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    byte_4C3D266 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  memset(&v29, 0, sizeof(v29));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  this->fields.totalHeight = 0.0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v6, 0) )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.equipSkillTitle, 1, 0);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)this->fields.equipSkillTitle,
      -this->fields.totalHeight,
      0);
    this->fields.totalHeight = this->fields.totalHeight + (float)(this->fields.titleHeight + this->fields.space);
    if ( !v6 )
      goto LABEL_24;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      v6,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
    v30 = v28;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__) )
    {
      current = (EventEquipSkillPartsEntity_o *)v30.fields._current;
      v9 = GameObjectHelper__Instantiate_object_(
             this->fields.prefab,
             this->fields.equipSkillParent,
             0,
             (const MethodInfo_3140DFC *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoCompletionBoardItemDraw___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v9, 1, 0);
      if ( !current )
        sub_1C372B4(v10);
      skillId = current->fields.skillId;
      SkillName = EventEquipSkillPartsEntity__GetSkillName(current, 0);
      SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(current, 0, 0);
      v14 = (EventEquipSkillPartsRenoCompletionBoardItem_o *)sub_1C372A4(EventEquipSkillPartsRenoCompletionBoardItem_TypeInfo);
      EventEquipSkillPartsRenoCompletionBoardItem___ctor(v14, skillId, SkillName, SkillDetail, v15);
      if ( !v9 )
        sub_1C372B4(v16);
      EventEquipSkillPartsRenoCompletionBoardItemDraw__UpdateUi(
        (EventEquipSkillPartsRenoCompletionBoardItemDraw_o *)v9,
        v14,
        v17);
      ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v9, -this->fields.totalHeight, 0);
      this->fields.totalHeight = this->fields.totalHeight + (float)(this->fields.skillHeight + this->fields.space);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)assistList, 0) )
    return;
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.assistSkillTitle, 1, 0);
  ComponentHelper__SetLocalPositionY(
    (UnityEngine_Component_o *)this->fields.assistSkillTitle,
    -this->fields.totalHeight,
    0);
  this->fields.totalHeight = this->fields.totalHeight + (float)(this->fields.titleHeight + this->fields.space);
  if ( !assistList )
LABEL_24:
    sub_1C372B4(v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)assistList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__) )
  {
    v18 = (AssistEntity_o *)v29.fields._current;
    v19 = GameObjectHelper__Instantiate_object_(
            this->fields.prefab,
            this->fields.assistSkillParent,
            0,
            (const MethodInfo_3140DFC *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoCompletionBoardItemDraw___);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v19, 1, 0);
    if ( !v18 )
      sub_1C372B4(v20);
    v21 = v18->fields.skillId;
    name = v18->fields.name;
    Detail = AssistEntity__GetDetail(v18, 0, 0);
    v24 = (EventEquipSkillPartsRenoCompletionBoardItem_o *)sub_1C372A4(EventEquipSkillPartsRenoCompletionBoardItem_TypeInfo);
    EventEquipSkillPartsRenoCompletionBoardItem___ctor(v24, v21, name, Detail, v25);
    if ( !v19 )
      sub_1C372B4(v26);
    EventEquipSkillPartsRenoCompletionBoardItemDraw__UpdateUi(
      (EventEquipSkillPartsRenoCompletionBoardItemDraw_o *)v19,
      v24,
      v27);
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v19, -this->fields.totalHeight, 0);
    this->fields.totalHeight = this->fields.totalHeight + (float)(this->fields.skillHeight + this->fields.space);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
}


void EventEquipSkillPartsRenoCompletionDialog___OnClickCloseButton_b__19_0(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C3D26A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D26A = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0);
  this->fields.closeCallback = 0;
  sub_1C36FFC(&this->fields.closeCallback, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


UnityEngine_GameObject_o *EventEquipSkillPartsRenoCompletionDialog__get_closeBtnObject(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3D268 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D268 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1C372B4(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}