void __fastcall EventEquipSkillPartsRenoCompletionDialog___ctor(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B168B2 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B168B2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventEquipSkillPartsRenoCompletionDialog__Init(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  if ( (byte_4B168AD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B168AD = 1;
  }
  this->fields.closeCallback = 0LL;
  sub_1BCAF9C(&this->fields.closeCallback);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_1BCB254(transform, v4);
  this->fields.basePanel = (struct UIPanel_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)transform,
                                                 (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  sub_1BCAF9C(&this->fields.basePanel);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventEquipSkillPartsRenoCompletionDialog__OnClickCloseButton(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B168B0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__, v3);
    sub_1BCAFF8(&Method_EventEquipSkillPartsRenoCompletionDialog__OnClickCloseButton_b__19_0__, v4);
    byte_4B168B0 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_EventEquipSkillPartsRenoCompletionDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventEquipSkillPartsRenoCompletionDialog__OnClickCloseButton_b__19_0__,
      0LL);
    BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall EventEquipSkillPartsRenoCompletionDialog__Open(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        QuestPhaseEntity_o *questPhaseEntity,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  UILabel_o *titleLabel; // x23
  UILabel_o *msgLabel; // x23
  System_String_o *RenoCompletionDialogText; // x22
  Il2CppObject *v23; // x0
  UILabel_o *closeLabel; // x22
  System_Collections_Generic_List_EventEquipSkillPartsEntity__o *v25; // x1
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v28; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v30; // x8

  if ( (byte_4B168AE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventEquipSkillPartsRenoCompletionDialog_Open__, questPhaseEntity);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_5556/*"EVENT_EQUIP_SKILL_PARTS_RENO_COMPLETION_DIALOG_TITLE"*/, v12);
    sub_1BCAFF8(&StringLiteral_16724/*"ar307"*/, v13);
    sub_1BCAFF8(&StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, v14);
    sub_1BCAFF8(&StringLiteral_5557/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, v15);
    byte_4B168AE = 1;
  }
  EventEquipSkillPartsRenoCompletionDialog__Init(this, (const MethodInfo *)questPhaseEntity);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v18 = Method_EventEquipSkillPartsRenoCompletionDialog_Open__;
  if ( (*((_BYTE *)Method_EventEquipSkillPartsRenoCompletionDialog_Open__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCB010(Method_EventEquipSkillPartsRenoCompletionDialog_Open__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v18, v18[4]);
  OverwriteAssetSoundName__PlaySe(v19, (System_String_o *)StringLiteral_16724/*"ar307"*/, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5556/*"EVENT_EQUIP_SKILL_PARTS_RENO_COMPLETION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  if ( !questPhaseEntity )
    goto LABEL_23;
  msgLabel = this->fields.msgLabel;
  RenoCompletionDialogText = QuestPhaseEntity__GetRenoCompletionDialogText(questPhaseEntity, 0LL);
  v23 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5557/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(RenoCompletionDialogText, v23, 0LL);
  if ( !msgLabel )
    goto LABEL_23;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  closeLabel = this->fields.closeLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3650/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_23;
  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_1BCAF9C(&this->fields.closeCallback);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.equipSkillTitle, 0, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.assistSkillTitle, 0, 0LL);
  EventEquipSkillPartsRenoCompletionDialog__Setup(this, v25, assistList, v26);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v28 = this->fields.scrollView;
    if ( !v28 )
      goto LABEL_23;
    verticalScrollBar = (UnityEngine_Object_o *)v28->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v30 = this->fields.scrollView;
      if ( v30 )
      {
        gameObject = (UnityEngine_GameObject_o *)v30->fields.verticalScrollBar;
        if ( gameObject )
        {
          UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0LL);
          goto LABEL_22;
        }
      }
LABEL_23:
      sub_1BCB254(gameObject, v17);
    }
  }
LABEL_22:
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall EventEquipSkillPartsRenoCompletionDialog__Setup(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  EventEquipSkillPartsEntity_o *current; // x22
  Il2CppObject *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t skillId; // w23
  System_String_o *SkillName; // x24
  System_String_o *SkillDetail; // x25
  EventEquipSkillPartsRenoCompletionBoardItem_o *v27; // x22
  const MethodInfo *v28; // x4
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  AssistEntity_o *v32; // x21
  Il2CppObject *v33; // x20
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w22
  System_String_o *name; // x23
  System_String_o *Detail; // x24
  EventEquipSkillPartsRenoCompletionBoardItem_o *v39; // x21
  const MethodInfo *v40; // x4
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B168AF & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__,
      eventEquipSkillPartsEntityList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__get_Current__, v10);
    sub_1BCAFF8(&EventEquipSkillPartsRenoCompletionBoardItem_TypeInfo, v11);
    sub_1BCAFF8(&Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoCompletionBoardItemDraw___, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo, v16);
    byte_4B168AF = 1;
  }
  memset(&v46, 0, sizeof(v46));
  memset(&v45, 0, sizeof(v45));
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
  this->fields.totalHeight = 0.0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v17, 0LL) )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.equipSkillTitle, 1, 0LL);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)this->fields.equipSkillTitle,
      -this->fields.totalHeight,
      0LL);
    this->fields.totalHeight = this->fields.totalHeight + (float)(this->fields.titleHeight + this->fields.space);
    if ( !v17 )
      goto LABEL_24;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      v17,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
    v46 = v44;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__) )
    {
      current = (EventEquipSkillPartsEntity_o *)v46.fields._current;
      v21 = GameObjectHelper__Instantiate_object_(
              this->fields.prefab,
              this->fields.equipSkillParent,
              0,
              (const MethodInfo_3070334 *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoCompletionBoardItemDraw___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v21, 1, 0LL);
      if ( !current )
        sub_1BCB254(v22, v23);
      skillId = current->fields.skillId;
      SkillName = EventEquipSkillPartsEntity__GetSkillName(current, 0LL);
      SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(current, 0, 0LL);
      v27 = (EventEquipSkillPartsRenoCompletionBoardItem_o *)sub_1BCB244(EventEquipSkillPartsRenoCompletionBoardItem_TypeInfo);
      EventEquipSkillPartsRenoCompletionBoardItem___ctor(v27, skillId, SkillName, SkillDetail, v28);
      if ( !v21 )
        sub_1BCB254(v29, v30);
      EventEquipSkillPartsRenoCompletionBoardItemDraw__UpdateUi(
        (EventEquipSkillPartsRenoCompletionBoardItemDraw_o *)v21,
        v27,
        v31);
      ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v21, -this->fields.totalHeight, 0LL);
      this->fields.totalHeight = this->fields.totalHeight + (float)(this->fields.skillHeight + this->fields.space);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)assistList, 0LL) )
    return;
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.assistSkillTitle, 1, 0LL);
  ComponentHelper__SetLocalPositionY(
    (UnityEngine_Component_o *)this->fields.assistSkillTitle,
    -this->fields.totalHeight,
    0LL);
  this->fields.totalHeight = this->fields.totalHeight + (float)(this->fields.titleHeight + this->fields.space);
  if ( !assistList )
LABEL_24:
    sub_1BCB254(v18, v19);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)assistList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
  v45 = v44;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__) )
  {
    v32 = (AssistEntity_o *)v45.fields._current;
    v33 = GameObjectHelper__Instantiate_object_(
            this->fields.prefab,
            this->fields.assistSkillParent,
            0,
            (const MethodInfo_3070334 *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoCompletionBoardItemDraw___);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v33, 1, 0LL);
    if ( !v32 )
      sub_1BCB254(v34, v35);
    v36 = v32->fields.skillId;
    name = v32->fields.name;
    Detail = AssistEntity__GetDetail(v32, 0, 0LL);
    v39 = (EventEquipSkillPartsRenoCompletionBoardItem_o *)sub_1BCB244(EventEquipSkillPartsRenoCompletionBoardItem_TypeInfo);
    EventEquipSkillPartsRenoCompletionBoardItem___ctor(v39, v36, name, Detail, v40);
    if ( !v33 )
      sub_1BCB254(v41, v42);
    EventEquipSkillPartsRenoCompletionBoardItemDraw__UpdateUi(
      (EventEquipSkillPartsRenoCompletionBoardItemDraw_o *)v33,
      v39,
      v43);
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v33, -this->fields.totalHeight, 0LL);
    this->fields.totalHeight = this->fields.totalHeight + (float)(this->fields.skillHeight + this->fields.space);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
}


void __fastcall EventEquipSkillPartsRenoCompletionDialog___OnClickCloseButton_b__19_0(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B168B3 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B168B3 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0LL);
  this->fields.closeCallback = 0LL;
  sub_1BCAF9C(&this->fields.closeCallback);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventEquipSkillPartsRenoCompletionDialog__get_closeBtnObject(
        EventEquipSkillPartsRenoCompletionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B168B1 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B168B1 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BCB254(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}