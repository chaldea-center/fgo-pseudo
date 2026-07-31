void EventInfoJobOpenQuestInfoDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventInfoJobOpenQuestInfoDialog_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventInfoJobOpenQuestInfoDialog_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct EventInfoJobOpenQuestInfoDialog_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_59386C2 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoJobOpenQuestInfoDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_5845/*"EVENT_JOB_OPEN_QUEST_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_5844/*"EVENT_JOB_OPEN_QUEST_DIALOG_DESCRIPTION_2"*/);
    sub_21FFC50(&StringLiteral_5843/*"EVENT_JOB_OPEN_QUEST_DIALOG_DESCRIPTION_1"*/);
    byte_59386C2 = 1;
  }
  v7 = StringLiteral_5845/*"EVENT_JOB_OPEN_QUEST_DIALOG_TITLE"*/;
  EventInfoJobOpenQuestInfoDialog_TypeInfo->static_fields->TitleLocalizationKey = (struct System_String_o *)StringLiteral_5845/*"EVENT_JOB_OPEN_QUEST_DIALOG_TITLE"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoJobOpenQuestInfoDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_5843/*"EVENT_JOB_OPEN_QUEST_DIALOG_DESCRIPTION_1"*/;
  static_fields = EventInfoJobOpenQuestInfoDialog_TypeInfo->static_fields;
  static_fields->Description1LocalizationKey = (struct System_String_o *)StringLiteral_5843/*"EVENT_JOB_OPEN_QUEST_DIALOG_DESCRIPTION_1"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->Description1LocalizationKey,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_5844/*"EVENT_JOB_OPEN_QUEST_DIALOG_DESCRIPTION_2"*/;
  v17 = EventInfoJobOpenQuestInfoDialog_TypeInfo->static_fields;
  v17->Description2LocalizationKey = (struct System_String_o *)StringLiteral_5844/*"EVENT_JOB_OPEN_QUEST_DIALOG_DESCRIPTION_2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->Description2LocalizationKey, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/;
  v25 = EventInfoJobOpenQuestInfoDialog_TypeInfo->static_fields;
  v25->CloseButtonLocalizationKey = (struct System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->CloseButtonLocalizationKey, v24, v26, v27, v28, v29, v30, v31);
}


void EventInfoJobOpenQuestInfoDialog___ctor(EventInfoJobOpenQuestInfoDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1

  if ( (byte_59386C1 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__TypeInfo);
    byte_59386C1 = 1;
  }
  v3 = System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__TypeInfo;
  this->fields.questCellHeight = 140;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent___ctor__);
  this->fields.questItemList = (struct System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.questItemList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoJobOpenQuestInfoDialog__ClearQuestListItems(
        EventInfoJobOpenQuestInfoDialog_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__o *questItemList; // x0
  int32_t v4; // w20
  int32_t size; // w2
  __int64 v6; // x1
  Il2CppObject *Item; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  int v10; // w8

  if ( (byte_59386BD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59386BD = 1;
  }
  questItemList = this->fields.questItemList;
  if ( !questItemList )
LABEL_14:
    sub_21FFECC(questItemList, method);
  v4 = 0;
  while ( 1 )
  {
    size = questItemList->fields._size;
    if ( v4 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)questItemList,
             v4,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    questItemList = (struct System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
    if ( ((unsigned __int8)questItemList & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_14;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
    }
    questItemList = this->fields.questItemList;
    ++v4;
    if ( !questItemList )
      goto LABEL_14;
  }
  v10 = questItemList->fields._version + 1;
  questItemList->fields._size = 0;
  questItemList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questItemList->fields._items, 0, size, 0);
}


void EventInfoJobOpenQuestInfoDialog__Init(EventInfoJobOpenQuestInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIGrid_o *questListGrid; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59386BA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_59386BA = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  questListGrid = this->fields.questListGrid;
  if ( !questListGrid
    || (UIGrid__set_repositionNow(questListGrid, 1, 0),
        (questListGrid = (UIGrid_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (questListGrid = (UIGrid_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)questListGrid, 0)) == 0 )
  {
    sub_21FFECC(questListGrid, v3);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)questListGrid,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.basePanel,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void EventInfoJobOpenQuestInfoDialog__OnClickClose(EventInfoJobOpenQuestInfoDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_59386C0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoJobOpenQuestInfoDialog_OnClickClose__);
    sub_21FFC50(&Method_EventInfoJobOpenQuestInfoDialog__OnClickClose_b__29_0__);
    byte_59386C0 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoJobOpenQuestInfoDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventInfoJobOpenQuestInfoDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventInfoJobOpenQuestInfoDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoJobOpenQuestInfoDialog__OnClickClose_b__29_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoJobOpenQuestInfoDialog__Open(
        EventInfoJobOpenQuestInfoDialog_o *this,
        System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__o *questDisplayDataList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  EventInfoJobOpenQuestInfoDialog_c *v12; // x0
  UILabel_o *titleLabel; // x21
  System_String_o *TitleLocalizationKey; // x22
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *descriptionLabel1; // x21
  UILabel_o *descriptionLabel2; // x21
  UILabel_o *closeButtonLabel; // x21
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1

  if ( (byte_59386BB & 1) == 0 )
  {
    sub_21FFC50(&EventInfoJobOpenQuestInfoDialog_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_59386BB = 1;
  }
  this->fields.closeAction = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v12 = EventInfoJobOpenQuestInfoDialog_TypeInfo;
  titleLabel = this->fields.titleLabel;
  if ( !*(&EventInfoJobOpenQuestInfoDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJobOpenQuestInfoDialog_TypeInfo, v11);
    v12 = EventInfoJobOpenQuestInfoDialog_TypeInfo;
  }
  TitleLocalizationKey = v12->static_fields->TitleLocalizationKey;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  v15 = LocalizationManager__Get(TitleLocalizationKey, 0);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, v15, 0);
  descriptionLabel1 = this->fields.descriptionLabel1;
  v15 = LocalizationManager__Get(
          EventInfoJobOpenQuestInfoDialog_TypeInfo->static_fields->Description1LocalizationKey,
          0);
  if ( !descriptionLabel1
    || (UILabel__set_text(descriptionLabel1, v15, 0),
        descriptionLabel2 = this->fields.descriptionLabel2,
        v15 = LocalizationManager__Get(
                EventInfoJobOpenQuestInfoDialog_TypeInfo->static_fields->Description2LocalizationKey,
                0),
        !descriptionLabel2)
    || (UILabel__set_text(descriptionLabel2, v15, 0),
        closeButtonLabel = this->fields.closeButtonLabel,
        v15 = LocalizationManager__Get(
                EventInfoJobOpenQuestInfoDialog_TypeInfo->static_fields->CloseButtonLocalizationKey,
                0),
        !closeButtonLabel) )
  {
LABEL_12:
    sub_21FFECC(v15, v16);
  }
  UILabel__set_text(closeButtonLabel, v15, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
  EventInfoJobOpenQuestInfoDialog__SetupQuestListView(this, questDisplayDataList, v20);
  EventInfoJobOpenQuestInfoDialog__UpdateQuestNameScrollLayout(this, v21);
}


void EventInfoJobOpenQuestInfoDialog__ResetQuestNameScrollPosition(
        EventInfoJobOpenQuestInfoDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *questNameScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *gameObject; // x0
  struct UIScrollView_o *v6; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v8; // x8
  char v9; // w20
  struct UIScrollView_o *v10; // x8

  if ( (byte_59386BE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59386BE = 1;
  }
  questNameScrollView = (UnityEngine_Object_o *)this->fields.questNameScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(questNameScrollView, 0, 0) )
  {
    gameObject = this->fields.questNameScrollView;
    if ( !gameObject )
      goto LABEL_22;
    UIScrollView__DisableSpring(gameObject, 0);
    gameObject = this->fields.questNameScrollView;
    if ( !gameObject )
      goto LABEL_22;
    UIScrollView__ResetPosition(gameObject, 0);
    gameObject = this->fields.questNameScrollView;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))gameObject->klass->vtable._8_UpdateScrollbars.methodPtr)(
                                     gameObject,
                                     1,
                                     gameObject->klass->vtable._8_UpdateScrollbars.method);
    v6 = this->fields.questNameScrollView;
    if ( !v6 )
      goto LABEL_22;
    verticalScrollBar = (UnityEngine_Object_o *)v6->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0) )
    {
      gameObject = this->fields.questNameScrollView;
      if ( !gameObject )
        goto LABEL_22;
      gameObject = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))gameObject->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                                       gameObject,
                                       gameObject->klass->vtable._6_get_shouldMoveVertically.method);
      v8 = this->fields.questNameScrollView;
      if ( !v8 )
        goto LABEL_22;
      v9 = (char)gameObject;
      gameObject = (UIScrollView_o *)v8->fields.verticalScrollBar;
      if ( !gameObject )
        goto LABEL_22;
      gameObject = (UIScrollView_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9 & 1, 0);
      if ( (v9 & 1) != 0 )
      {
        v10 = this->fields.questNameScrollView;
        if ( v10 )
        {
          gameObject = (UIScrollView_o *)v10->fields.verticalScrollBar;
          if ( gameObject )
          {
            UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0);
            return;
          }
        }
LABEL_22:
        sub_21FFECC(gameObject, v4);
      }
    }
  }
}


void EventInfoJobOpenQuestInfoDialog__SetupQuestListView(
        EventInfoJobOpenQuestInfoDialog_o *this,
        System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__o *questDisplayDataList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *questListGrid; // x21
  bool v6; // w0
  __int64 v7; // x1
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *questItemList; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *freeQuestItemPrefab; // x22
  const MethodInfo *v12; // x1
  int32_t v13; // w22
  Il2CppObject *v14; // x23
  Il2CppObject *v15; // x23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  intptr_t v25; // x8
  UnityEngine_Component_o *v26; // x24
  UnityEngine_Object_o *v27; // x20
  Il2CppClass *castClass; // x1
  Il2CppClass *element_class; // x2

  if ( (byte_59386BC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_EventInfoJobFreeQuestItemComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59386BC = 1;
  }
  questListGrid = (UnityEngine_Object_o *)this->fields.questListGrid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questDisplayDataList);
  v6 = UnityEngine_Object__op_Inequality(questListGrid, 0, 0);
  transform = 0;
  if ( v6 )
  {
    questItemList = (UnityEngine_Component_o *)this->fields.questListGrid;
    if ( !questItemList )
      goto LABEL_37;
    transform = UnityEngine_Component__get_transform(questItemList, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)transform, 0, 0) )
  {
    freeQuestItemPrefab = (UnityEngine_Object_o *)this->fields.freeQuestItemPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( !UnityEngine_Object__op_Equality(freeQuestItemPrefab, 0, 0) )
    {
      EventInfoJobOpenQuestInfoDialog__ClearQuestListItems(this, v12);
      if ( questDisplayDataList )
      {
        if ( questDisplayDataList->fields._size >= 1 )
        {
          v13 = 0;
          do
          {
            v14 = (Il2CppObject *)this->fields.freeQuestItemPrefab;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
            v15 = UnityEngine_Object__Instantiate_object__59507108(
                    v14,
                    transform,
                    0,
                    (const MethodInfo_38C01A4 *)Method_UnityEngine_Object_Instantiate_EventInfoJobFreeQuestItemComponent___);
            if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0, 0) )
            {
              questItemList = (UnityEngine_Component_o *)this->fields.questItemList;
              if ( !questItemList )
                goto LABEL_37;
              m_CachedPtr = questItemList->fields.m_CachedPtr;
              v23 = Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__Add__;
              ++HIDWORD(questItemList[1].klass);
              if ( !m_CachedPtr )
                goto LABEL_37;
              klass_low = SLODWORD(questItemList[1].klass);
              if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)questItemList,
                  v15,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v25 = m_CachedPtr + 8 * klass_low;
                LODWORD(questItemList[1].klass) = klass_low + 1;
                *(_QWORD *)(v25 + 32) = v15;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 32), (int32_t)v15, v16, v17, v18, v19, v20, v21);
              }
              questItemList = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                           (System_Collections_Generic_List_object__o *)questDisplayDataList,
                                                           v13,
                                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__get_Item__);
              if ( !v15 )
                goto LABEL_37;
              v26 = questItemList;
              questItemList = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)v15,
                                                           0);
              if ( !questItemList )
                goto LABEL_37;
              UnityEngine_Transform__SetSiblingIndex((UnityEngine_Transform_o *)questItemList, v13, 0);
              questItemList = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v15,
                                                           0);
              if ( !questItemList )
                goto LABEL_37;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questItemList, 1, 0);
              if ( !v26 )
                goto LABEL_37;
              EventInfoJobFreeQuestItemComponent__Setup(
                (EventInfoJobFreeQuestItemComponent_o *)v15,
                (System_String_o *)v26->fields.m_CachedPtr,
                (System_String_o *)v26[1].klass,
                (System_Int32_array *)v26[2].klass,
                (int32_t)v26[2].monitor,
                HIDWORD(v26[2].monitor),
                v26[2].fields.m_CachedPtr,
                (System_String_o *)v26[1].monitor,
                v26[1].fields.m_CachedPtr,
                v13 == 0,
                0);
            }
            ++v13;
          }
          while ( v13 < questDisplayDataList->fields._size );
          v27 = (UnityEngine_Object_o *)this->fields.questListGrid;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
          if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
          {
            questItemList = (UnityEngine_Component_o *)this->fields.questListGrid;
            if ( questItemList )
            {
              BYTE1(questItemList[2].monitor) = 1;
              LODWORD(questItemList[1].monitor) = 1;
              element_class = questItemList->klass[1]._1.element_class;
              castClass = questItemList->klass[1]._1.castClass;
              *((float *)&questItemList[2].klass + 1) = (float)this->fields.questCellHeight;
              ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))element_class)(questItemList, castClass);
              return;
            }
LABEL_37:
            sub_21FFECC(questItemList, v7);
          }
        }
      }
    }
  }
}


void EventInfoJobOpenQuestInfoDialog__UpdateQuestNameScrollLayout(
        EventInfoJobOpenQuestInfoDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *questNameScrollView; // x20
  __int64 v4; // x1
  struct UIScrollView_o *v5; // x0
  UIScrollView_c *klass; // x8
  struct UIScrollView_o *v7; // x20
  const MethodInfo *v8; // x1
  int v9; // w8
  __int64 v10; // x1
  UnityEngine_Object_o *questListPosAdjuster; // x20
  struct System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__o *questItemList; // x8
  int32_t size; // w8
  float *p_listAdjustSecondPosY; // x8

  if ( (byte_59386BF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59386BF = 1;
  }
  questNameScrollView = (UnityEngine_Object_o *)this->fields.questNameScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(questNameScrollView, 0, 0) )
  {
    v5 = this->fields.questNameScrollView;
    if ( v5 )
    {
      klass = v5->klass;
      v5->fields.contentPivot = 1;
      v5 = (struct UIScrollView_o *)((__int64 (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))klass->vtable._8_UpdateScrollbars.methodPtr)(
                                      v5,
                                      1,
                                      klass->vtable._8_UpdateScrollbars.method);
      v7 = this->fields.questNameScrollView;
      if ( v7 )
      {
        if ( (((__int64 (__fastcall *)(struct UIScrollView_o *, const MethodInfo *))v7->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                this->fields.questNameScrollView,
                v7->klass->vtable._6_get_shouldMoveVertically.method)
            & 1) != 0 )
          v9 = 1;
        else
          v9 = 4;
        v7->fields.contentPivot = v9;
        EventInfoJobOpenQuestInfoDialog__ResetQuestNameScrollPosition(this, v8);
        questListPosAdjuster = (UnityEngine_Object_o *)this->fields.questListPosAdjuster;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        v5 = (struct UIScrollView_o *)UnityEngine_Object__op_Equality(questListPosAdjuster, 0, 0);
        if ( ((unsigned __int8)v5 & 1) != 0 )
          return;
        questItemList = this->fields.questItemList;
        if ( questItemList )
        {
          size = questItemList->fields._size;
          if ( size == 2 )
          {
            p_listAdjustSecondPosY = &this->fields.listAdjustSecondPosY;
          }
          else if ( size == 1 )
          {
            p_listAdjustSecondPosY = &this->fields.listAdjustSinglePosY;
          }
          else
          {
            p_listAdjustSecondPosY = &this->fields.listAdjustDefaultPosY;
          }
          GameObjectExtensions__SetLocalPositionY(this->fields.questListPosAdjuster, *p_listAdjustSecondPosY, 0);
          return;
        }
      }
    }
    sub_21FFECC(v5, v4);
  }
}


void EventInfoJobOpenQuestInfoDialog___OnClickClose_b__29_0(
        EventInfoJobOpenQuestInfoDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Action_o *closeAction; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  EventInfoJobOpenQuestInfoDialog__ResetQuestNameScrollPosition(this, method);
  EventInfoJobOpenQuestInfoDialog__ClearQuestListItems(this, v3);
  closeAction = this->fields.closeAction;
  this->fields.closeAction = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v5, v6, v7, v8, v9, v10);
  ActionExtensions__Call(closeAction, 0);
}


float EventInfoJobOpenQuestInfoDialog__get_QuestItemCellHeight(
        EventInfoJobOpenQuestInfoDialog_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.questCellHeight;
}


UnityEngine_GameObject_o *EventInfoJobOpenQuestInfoDialog__get_closeBtnObject(
        EventInfoJobOpenQuestInfoDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_59386B9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59386B9 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_21FFECC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}