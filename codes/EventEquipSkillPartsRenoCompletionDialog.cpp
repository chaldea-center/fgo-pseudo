void EventEquipSkillPartsRenoCompletionDialog___ctor(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593248A & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593248A = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsRenoCompletionDialog__Init(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5932485 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_5932485 = 1;
  }
  this->fields.closeCallback = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback, 0, v2, v3, v4, v5, v6, v7);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_21FFECC(transform, v10);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.basePanel,
    (int32_t)Component_object,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsRenoCompletionDialog__OnClickCloseButton(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5932488 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__);
    sub_21FFC50(&Method_EventEquipSkillPartsRenoCompletionDialog__OnClickCloseButton_b__19_0__);
    byte_5932488 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *titleLabel; // x23
  UILabel_o *msgLabel; // x23
  System_String_o *RenoCompletionDialogText; // x22
  Il2CppObject *v19; // x0
  UILabel_o *closeLabel; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_EventEquipSkillPartsEntity__o *v27; // x1
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v32; // x2
  struct UIScrollView_o *v33; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v35; // x8

  if ( (byte_5932486 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventEquipSkillPartsRenoCompletionDialog_Open__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5790/*"EVENT_EQUIP_SKILL_PARTS_RENO_COMPLETION_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_17536/*"ar307"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_5791/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/);
    byte_5932486 = 1;
  }
  EventEquipSkillPartsRenoCompletionDialog__Init(this, (const MethodInfo *)questPhaseEntity);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v12 = Method_EventEquipSkillPartsRenoCompletionDialog_Open__;
  if ( (*((_BYTE *)Method_EventEquipSkillPartsRenoCompletionDialog_Open__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_21FFC68(Method_EventEquipSkillPartsRenoCompletionDialog_Open__);
  v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v12, v12[4]);
  OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)StringLiteral_17536/*"ar307"*/, 0, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5790/*"EVENT_EQUIP_SKILL_PARTS_RENO_COMPLETION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  if ( !questPhaseEntity )
    goto LABEL_23;
  msgLabel = this->fields.msgLabel;
  RenoCompletionDialogText = QuestPhaseEntity__GetRenoCompletionDialogText(questPhaseEntity, 0);
  v19 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5791/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(RenoCompletionDialogText, v19, 0);
  if ( !msgLabel )
    goto LABEL_23;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_23;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
  this->fields.closeCallback = closeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.equipSkillTitle, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.assistSkillTitle, 0, 0);
  EventEquipSkillPartsRenoCompletionDialog__Setup(this, v27, assistList, v28);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v33 = this->fields.scrollView;
    if ( !v33 )
      goto LABEL_23;
    verticalScrollBar = (UnityEngine_Object_o *)v33->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v32);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v35 = this->fields.scrollView;
      if ( v35 )
      {
        gameObject = (UnityEngine_GameObject_o *)v35->fields.verticalScrollBar;
        if ( gameObject )
        {
          UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0);
          goto LABEL_22;
        }
      }
LABEL_23:
      sub_21FFECC(gameObject, v11);
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
  __int64 v8; // x1
  EventEquipSkillPartsEntity_o *current; // x22
  Il2CppObject *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t skillId; // w23
  System_String_o *SkillName; // x24
  System_String_o *SkillDetail; // x25
  EventEquipSkillPartsRenoCompletionBoardItem_o *v16; // x22
  const MethodInfo *v17; // x4
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  AssistEntity_o *v21; // x21
  Il2CppObject *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w22
  System_String_o *name; // x23
  System_String_o *Detail; // x24
  EventEquipSkillPartsRenoCompletionBoardItem_o *v28; // x21
  const MethodInfo *v29; // x4
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_5932487 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__get_Current__);
    sub_21FFC50(&EventEquipSkillPartsRenoCompletionBoardItem_TypeInfo);
    sub_21FFC50(&Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoCompletionBoardItemDraw___);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    byte_5932487 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  memset(&v34, 0, sizeof(v34));
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      v6,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
    v35 = v33;
    v33.fields._list = 0;
    *(_QWORD *)&v33.fields._index = &v35;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__) )
    {
      current = (EventEquipSkillPartsEntity_o *)v35.fields._current;
      v10 = GameObjectHelper__Instantiate_object_(
              this->fields.prefab,
              this->fields.equipSkillParent,
              0,
              (const MethodInfo_38853E4 *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoCompletionBoardItemDraw___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v10, 1, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      skillId = current->fields.skillId;
      SkillName = EventEquipSkillPartsEntity__GetSkillName(current, 0);
      SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(current, 0, 0);
      v16 = (EventEquipSkillPartsRenoCompletionBoardItem_o *)sub_21FFEBC(EventEquipSkillPartsRenoCompletionBoardItem_TypeInfo);
      EventEquipSkillPartsRenoCompletionBoardItem___ctor(v16, skillId, SkillName, SkillDetail, v17);
      if ( !v10 )
        sub_21FFECC(v18, v19);
      EventEquipSkillPartsRenoCompletionBoardItemDraw__UpdateUi(
        (EventEquipSkillPartsRenoCompletionBoardItemDraw_o *)v10,
        v16,
        v20);
      ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v10, -this->fields.totalHeight, 0);
      this->fields.totalHeight = this->fields.totalHeight + (float)(this->fields.skillHeight + this->fields.space);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v35,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
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
    sub_21FFECC(v7, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)assistList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
  v34 = v33;
  v33.fields._list = 0;
  *(_QWORD *)&v33.fields._index = &v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__) )
  {
    v21 = (AssistEntity_o *)v34.fields._current;
    v22 = GameObjectHelper__Instantiate_object_(
            this->fields.prefab,
            this->fields.assistSkillParent,
            0,
            (const MethodInfo_38853E4 *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoCompletionBoardItemDraw___);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v22, 1, 0);
    if ( !v21 )
      sub_21FFECC(v23, v24);
    v25 = v21->fields.skillId;
    name = v21->fields.name;
    Detail = AssistEntity__GetDetail(v21, 0, 0);
    v28 = (EventEquipSkillPartsRenoCompletionBoardItem_o *)sub_21FFEBC(EventEquipSkillPartsRenoCompletionBoardItem_TypeInfo);
    EventEquipSkillPartsRenoCompletionBoardItem___ctor(v28, v25, name, Detail, v29);
    if ( !v22 )
      sub_21FFECC(v30, v31);
    EventEquipSkillPartsRenoCompletionBoardItemDraw__UpdateUi(
      (EventEquipSkillPartsRenoCompletionBoardItemDraw_o *)v22,
      v28,
      v32);
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v22, -this->fields.totalHeight, 0);
    this->fields.totalHeight = this->fields.totalHeight + (float)(this->fields.skillHeight + this->fields.space);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
}


void EventEquipSkillPartsRenoCompletionDialog___OnClickCloseButton_b__19_0(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_593248B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593248B = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0);
  this->fields.closeCallback = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback, 0, v3, v4, v5, v6, v7, v8);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


UnityEngine_GameObject_o *EventEquipSkillPartsRenoCompletionDialog__get_closeBtnObject(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_5932489 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932489 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}