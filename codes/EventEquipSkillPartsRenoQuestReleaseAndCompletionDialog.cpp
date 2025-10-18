void EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___ctor(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3D270 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3D270 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Init(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4C3D26B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C3D26B = 1;
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


void EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__OnClickCloseButton(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C3D26E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_OnClickCloseButton__);
    sub_1C37058(&Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__OnClickCloseButton_b__20_0__);
    byte_4C3D26E = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__OnClickCloseButton_b__20_0__,
      0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        System_String_o *msg,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *scrollView; // x22
  struct UIScrollView_o *v16; // x8
  UnityEngine_Object_o *verticalScrollBar; // x22
  struct UIScrollView_o *v18; // x8
  float oneDisplayScrollBarValue; // s0

  if ( (byte_4C3D26C & 1) == 0 )
  {
    sub_1C37058(&Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_Open__);
    sub_1C37058(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__get_Count__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D26C = 1;
  }
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Init(this, (const MethodInfo *)msg);
  if ( !System_String__IsNullOrEmpty(this->fields.playSeName, 0) )
  {
    v11 = Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_Open__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_Open__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C37070(Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_Open__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C3703C(v11, v11[4]);
    OverwriteAssetSoundName__PlaySe(v12, this->fields.playSeName, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.closeCallback = closeCallback;
  sub_1C36FFC(&this->fields.closeCallback, closeCallback);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)gameObject, msg, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.equipSkillTitle, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.assistSkillTitle, 0, 0);
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Setup(this, eventEquipSkillPartsEntityList, assistList, v14);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v16 = this->fields.scrollView;
    if ( !v16 )
      goto LABEL_24;
    verticalScrollBar = (UnityEngine_Object_o *)v16->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v18 = this->fields.scrollView;
      if ( v18 && eventEquipSkillPartsEntityList && assistList )
      {
        gameObject = (UnityEngine_GameObject_o *)v18->fields.verticalScrollBar;
        oneDisplayScrollBarValue = 0.0;
        if ( assistList->fields._size + eventEquipSkillPartsEntityList->fields._size == 1 )
          oneDisplayScrollBarValue = this->fields.oneDisplayScrollBarValue;
        if ( gameObject )
        {
          UIProgressBar__set_value((UIProgressBar_o *)gameObject, oneDisplayScrollBarValue, 0);
          goto LABEL_23;
        }
      }
LABEL_24:
      sub_1C372B4(gameObject);
    }
  }
LABEL_23:
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Setup(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        const MethodInfo *method)
{
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *v6; // x19
  __int64 v7; // x8
  EventEquipSkillPartsEntity_o *current; // x23
  Il2CppObject *v9; // x22
  __int64 v10; // x0
  int32_t skillId; // w24
  System_String_o *SkillName; // x25
  System_String_o *SkillDetail; // x26
  EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *v14; // x23
  const MethodInfo *v15; // x4
  __int64 v16; // x0
  const MethodInfo *v17; // x2
  AssistEntity_o *v18; // x21
  Il2CppObject *v19; // x20
  __int64 v20; // x0
  int32_t v21; // w22
  System_String_o *name; // x23
  System_String_o *Detail; // x24
  EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *v24; // x21
  const MethodInfo *v25; // x4
  __int64 v26; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+40h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4C3D26D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__get_Current__);
    sub_1C37058(&EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_TypeInfo);
    sub_1C37058(&Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw___);
    sub_1C37058(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    this = (EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *)sub_1C37058(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__get_Count__);
    byte_4C3D26D = 1;
  }
  memset(&v30, 0, sizeof(v30));
  memset(&v29, 0, sizeof(v29));
  if ( !eventEquipSkillPartsEntityList || !assistList || !v6 )
    sub_1C372B4(this);
  v7 = 196;
  if ( eventEquipSkillPartsEntityList->fields._size + assistList->fields._size != 1 )
    v7 = 192;
  v6->fields.totalHeight = *(float *)((char *)&v6->klass + v7);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventEquipSkillPartsEntityList, 0) )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v6->fields.equipSkillTitle, 1, 0);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)v6->fields.equipSkillTitle,
      -v6->fields.totalHeight,
      0);
    v6->fields.totalHeight = v6->fields.totalHeight + v6->fields.titleHeight;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)eventEquipSkillPartsEntityList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
    v30 = v28;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__) )
    {
      current = (EventEquipSkillPartsEntity_o *)v30.fields._current;
      v9 = GameObjectHelper__Instantiate_object_(
             v6->fields.prefab,
             v6->fields.equipSkillParent,
             0,
             (const MethodInfo_3140DFC *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v9, 1, 0);
      if ( !current )
        sub_1C372B4(v10);
      skillId = current->fields.skillId;
      SkillName = EventEquipSkillPartsEntity__GetSkillName(current, 0);
      SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(current, 0, 0);
      v14 = (EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *)sub_1C372A4(EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_TypeInfo);
      EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem___ctor(v14, skillId, SkillName, SkillDetail, v15);
      if ( !v9 )
        sub_1C372B4(v16);
      EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw__UpdateUi(
        (EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw_o *)v9,
        v14,
        v17);
      ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v9, -v6->fields.totalHeight, 0);
      v6->fields.totalHeight = v6->fields.totalHeight + v6->fields.skillHeight;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)assistList, 0) )
  {
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventEquipSkillPartsEntityList, 0) )
      v6->fields.totalHeight = v6->fields.totalHeight + v6->fields.assistAdjust;
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v6->fields.assistSkillTitle, 1, 0);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)v6->fields.assistSkillTitle,
      -v6->fields.totalHeight,
      0);
    v6->fields.totalHeight = v6->fields.totalHeight + v6->fields.titleHeight;
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
              v6->fields.prefab,
              v6->fields.assistSkillParent,
              0,
              (const MethodInfo_3140DFC *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v19, 1, 0);
      if ( !v18 )
        sub_1C372B4(v20);
      v21 = v18->fields.skillId;
      name = v18->fields.name;
      Detail = AssistEntity__GetDetail(v18, 0, 0);
      v24 = (EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *)sub_1C372A4(EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_TypeInfo);
      EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem___ctor(v24, v21, name, Detail, v25);
      if ( !v19 )
        sub_1C372B4(v26);
      EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw__UpdateUi(
        (EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw_o *)v19,
        v24,
        v27);
      ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v19, -v6->fields.totalHeight, 0);
      v6->fields.totalHeight = v6->fields.totalHeight + v6->fields.skillHeight;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
  }
}


void EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___OnClickCloseButton_b__20_0(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C3D271 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D271 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0);
  this->fields.closeCallback = 0;
  sub_1C36FFC(&this->fields.closeCallback, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


UnityEngine_GameObject_o *EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__get_closeBtnObject(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3D26F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D26F = 1;
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