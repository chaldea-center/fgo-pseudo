void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___ctor(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B062AC & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4B062AC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Init(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B062A7 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B062A7 = 1;
  }
  this->fields.closeCallback = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v2, v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
    sub_1BC3264(transform, v6);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.basePanel, (int32_t)Component_object, v8, v9);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__OnClickCloseButton(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B062AA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_OnClickCloseButton__, v3);
    sub_1BC3008(&Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__OnClickCloseButton_b__20_0__, v4);
    byte_4B062AA = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__OnClickCloseButton_b__20_0__,
      0LL);
    BaseDialog__SafeClose((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        System_String_o *msg,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *scrollView; // x22
  struct UIScrollView_o *v22; // x8
  UnityEngine_Object_o *verticalScrollBar; // x22
  struct UIScrollView_o *v24; // x8
  float oneDisplayScrollBarValue; // s0

  if ( (byte_4B062A8 & 1) == 0 )
  {
    sub_1BC3008(&Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_Open__, msg);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity__get_Count__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__get_Count__, v12);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    byte_4B062A8 = 1;
  }
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Init(this, (const MethodInfo *)msg);
  if ( !System_String__IsNullOrEmpty(this->fields.playSeName, 0LL) )
  {
    v14 = Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_Open__;
    if ( (*((_BYTE *)Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_Open__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BC3020(Method_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_Open__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v14, v14[4]);
    OverwriteAssetSoundName__PlaySe(v15, this->fields.playSeName, 0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.closeCallback = closeCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeCallback, v18, v19);
  gameObject = (UnityEngine_GameObject_o *)this->fields.msgLabel;
  if ( !gameObject )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)gameObject, msg, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.equipSkillTitle, 0, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.assistSkillTitle, 0, 0LL);
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Setup(this, eventEquipSkillPartsEntityList, assistList, v20);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v22 = this->fields.scrollView;
    if ( !v22 )
      goto LABEL_24;
    verticalScrollBar = (UnityEngine_Object_o *)v22->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v24 = this->fields.scrollView;
      if ( v24 && eventEquipSkillPartsEntityList && assistList )
      {
        gameObject = (UnityEngine_GameObject_o *)v24->fields.verticalScrollBar;
        oneDisplayScrollBarValue = 0.0;
        if ( assistList->fields._size + eventEquipSkillPartsEntityList->fields._size == 1 )
          oneDisplayScrollBarValue = this->fields.oneDisplayScrollBarValue;
        if ( gameObject )
        {
          UIProgressBar__set_value((UIProgressBar_o *)gameObject, oneDisplayScrollBarValue, 0LL);
          goto LABEL_23;
        }
      }
LABEL_24:
      sub_1BC3264(gameObject, v17);
    }
  }
LABEL_23:
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Setup(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        System_Collections_Generic_List_EventEquipSkillPartsEntity__o *eventEquipSkillPartsEntityList,
        System_Collections_Generic_List_AssistEntity__o *assistList,
        const MethodInfo *method)
{
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *v6; // x19
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
  __int64 v18; // x8
  EventEquipSkillPartsEntity_o *current; // x23
  Il2CppObject *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t skillId; // w24
  System_String_o *SkillName; // x25
  System_String_o *SkillDetail; // x26
  EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *v26; // x23
  const MethodInfo *v27; // x4
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  AssistEntity_o *v31; // x21
  Il2CppObject *v32; // x20
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w22
  System_String_o *name; // x23
  System_String_o *Detail; // x24
  EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *v38; // x21
  const MethodInfo *v39; // x4
  __int64 v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+40h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4B062A9 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__,
      eventEquipSkillPartsEntityList);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__get_Current__, v11);
    sub_1BC3008(&EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_TypeInfo, v12);
    sub_1BC3008(
      &Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw___,
      v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity__get_Count__, v16);
    this = (EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *)sub_1BC3008(
                                                                          &Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__get_Count__,
                                                                          v17);
    byte_4B062A9 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  memset(&v44, 0, sizeof(v44));
  if ( !eventEquipSkillPartsEntityList || !assistList || !v6 )
    sub_1BC3264(this, eventEquipSkillPartsEntityList);
  v18 = 196LL;
  if ( eventEquipSkillPartsEntityList->fields._size + assistList->fields._size != 1 )
    v18 = 192LL;
  v6->fields.totalHeight = *(float *)((char *)&v6->klass + v18);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventEquipSkillPartsEntityList, 0LL) )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v6->fields.equipSkillTitle, 1, 0LL);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)v6->fields.equipSkillTitle,
      -v6->fields.totalHeight,
      0LL);
    v6->fields.totalHeight = v6->fields.totalHeight + v6->fields.titleHeight;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v43,
      (System_Collections_Generic_List_object__o *)eventEquipSkillPartsEntityList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity__GetEnumerator__);
    v45 = v43;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__MoveNext__) )
    {
      current = (EventEquipSkillPartsEntity_o *)v45.fields._current;
      v20 = GameObjectHelper__Instantiate_object_(
              v6->fields.prefab,
              v6->fields.equipSkillParent,
              0,
              (const MethodInfo_30575BC *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v20, 1, 0LL);
      if ( !current )
        sub_1BC3264(v21, v22);
      skillId = current->fields.skillId;
      SkillName = EventEquipSkillPartsEntity__GetSkillName(current, 0LL);
      SkillDetail = EventEquipSkillPartsEntity__GetSkillDetail(current, 0, 0LL);
      v26 = (EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *)sub_1BC3254(EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_TypeInfo);
      EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem___ctor(v26, skillId, SkillName, SkillDetail, v27);
      if ( !v20 )
        sub_1BC3264(v28, v29);
      EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw__UpdateUi(
        (EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw_o *)v20,
        v26,
        v30);
      ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v20, -v6->fields.totalHeight, 0LL);
      v6->fields.totalHeight = v6->fields.totalHeight + v6->fields.skillHeight;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventEquipSkillPartsEntity__Dispose__);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)assistList, 0LL) )
  {
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)eventEquipSkillPartsEntityList, 0LL) )
      v6->fields.totalHeight = v6->fields.totalHeight + v6->fields.assistAdjust;
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v6->fields.assistSkillTitle, 1, 0LL);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)v6->fields.assistSkillTitle,
      -v6->fields.totalHeight,
      0LL);
    v6->fields.totalHeight = v6->fields.totalHeight + v6->fields.titleHeight;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v43,
      (System_Collections_Generic_List_object__o *)assistList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
    v44 = v43;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v44,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__) )
    {
      v31 = (AssistEntity_o *)v44.fields._current;
      v32 = GameObjectHelper__Instantiate_object_(
              v6->fields.prefab,
              v6->fields.assistSkillParent,
              0,
              (const MethodInfo_30575BC *)Method_GameObjectHelper_Instantiate_EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v32, 1, 0LL);
      if ( !v31 )
        sub_1BC3264(v33, v34);
      v35 = v31->fields.skillId;
      name = v31->fields.name;
      Detail = AssistEntity__GetDetail(v31, 0, 0LL);
      v38 = (EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_o *)sub_1BC3254(EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem_TypeInfo);
      EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItem___ctor(v38, v35, name, Detail, v39);
      if ( !v32 )
        sub_1BC3264(v40, v41);
      EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw__UpdateUi(
        (EventEquipSkillPartsRenoQuestReleaseAndCompletionListViewItemDraw_o *)v32,
        v38,
        v42);
      ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v32, -v6->fields.totalHeight, 0LL);
      v6->fields.totalHeight = v6->fields.totalHeight + v6->fields.skillHeight;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
  }
}


void __fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___OnClickCloseButton_b__20_0(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B062AD & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B062AD = 1;
  }
  ActionExtensions__Call(this->fields.closeCallback, 0LL);
  this->fields.closeCallback = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v3, v4);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__get_closeBtnObject(
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B062AB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B062AB = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}