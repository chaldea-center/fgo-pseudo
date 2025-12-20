void SupportServantListViewItemDraw___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D28E94 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
    sub_1C94098(&System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
    sub_1C94098(&SupportServantListViewItemDraw_TypeInfo);
    byte_4D28E94 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
  SupportServantListViewItemDraw_TypeInfo->static_fields->itemList = (struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)SupportServantListViewItemDraw_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  SupportServantListViewItemDraw_TypeInfo->static_fields->changeTimeSecond = 4.0;
}


void SupportServantListViewItemDraw___ctor(SupportServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantListViewItemDraw__AdvanceWarningLabel(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  SupportServantListViewItemDraw_o *v2; // x19
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  int max_length; // w10
  __int64 warningLabelTextSync2Pattern; // x9
  void *warningLabel; // x0
  SupportServantListViewItemDraw_WarningLabelText_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *itemList; // x8
  struct TweenColor_o *v10; // x20
  struct TweenColor_o *v11; // x8
  float v12; // s0 OVERLAPPED
  float v13; // s1
  int v14; // s0 OVERLAPPED
  int v15; // s1
  int v16; // s2
  float v17; // s3
  struct TweenColor_o *warningTweenColor; // x8
  struct TweenColor_o *v24; // x8
  _BOOL4 isSkillInvalid; // w9
  int32_t v27; // w10
  struct SupportServantListViewItemDraw_WarningLabelText_array *v28; // x9
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4D28E92 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    sub_1C94098(&SupportServantListViewItemDraw_TypeInfo);
    this = (SupportServantListViewItemDraw_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28E92 = 1;
  }
  warningLabelTexts = v2->fields.warningLabelTexts;
  if ( warningLabelTexts )
  {
    max_length = warningLabelTexts->max_length;
    if ( max_length < 2 )
      warningLabelTextSync2Pattern = 0;
    else
      warningLabelTextSync2Pattern = v2->fields.warningLabelTextSync2Pattern;
    if ( (unsigned int)warningLabelTextSync2Pattern >= max_length )
      sub_1C942F8(this);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    v7 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
    if ( !v7 )
    {
      UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      UILabel__set_applyGradient((UILabel_o *)warningLabel, 0, 0);
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      v30.fields.r = 1.0;
      v30.fields.g = 1.0;
      v30.fields.b = 1.0;
      v30.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)warningLabel, v30, 0);
      warningTweenColor = v2->fields.warningTweenColor;
      if ( !warningTweenColor )
        goto LABEL_46;
      __asm { FMOV            V0.4S, #1.0 }
      warningTweenColor->fields.to = _Q0;
      warningLabel = v2->fields.warningTweenColor;
      if ( !warningLabel )
        goto LABEL_46;
      TweenColor__get_value((TweenColor_o *)warningLabel, 0);
      goto LABEL_40;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)warningLabel, 0);
    GameObjectExtensions__SetLocalScaleX(gameObject, v7->fields.scaleX, 0);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)warningLabel, v7->fields.text, 0);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_applyGradient((UILabel_o *)warningLabel, v7->fields.gradation, 0);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_gradientTop((UILabel_o *)warningLabel, v7->fields.top, 0);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_gradientBottom((UILabel_o *)warningLabel, v7->fields.bottom, 0);
    if ( v7->fields.coloranime )
    {
      warningLabel = SupportServantListViewItemDraw_TypeInfo;
      if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
        warningLabel = SupportServantListViewItemDraw_TypeInfo;
      }
      itemList = (System_Collections_Generic_List_object__o *)**((_QWORD **)warningLabel + 23);
      if ( !itemList )
        goto LABEL_46;
      if ( itemList->fields._size >= 1 )
      {
        v10 = v2->fields.warningTweenColor;
        if ( !*((_DWORD *)warningLabel + 56) )
        {
          j_il2cpp_runtime_class_init_0(warningLabel);
          itemList = (System_Collections_Generic_List_object__o *)SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
          if ( !itemList )
            goto LABEL_46;
        }
        warningLabel = System_Collections_Generic_List_object___get_Item(
                         itemList,
                         0,
                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
        if ( !warningLabel || !v10 )
          goto LABEL_46;
        warningLabel = (void *)((__int64 (__fastcall *)(struct TweenColor_o *, _QWORD, const MethodInfo *))v10->klass->vtable._8_SynchronizeTween.methodPtr)(
                                 v10,
                                 *((_QWORD *)warningLabel + 14),
                                 v10->klass->vtable._8_SynchronizeTween.method);
      }
      v11 = v2->fields.warningTweenColor;
      if ( !v11 )
        goto LABEL_46;
      v11->fields.to = (struct UnityEngine_Color_o)xmmword_CFF1A0;
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      v12 = 2.0;
      v13 = 2.0;
    }
    else
    {
      v24 = v2->fields.warningTweenColor;
      if ( !v24 )
        goto LABEL_46;
      __asm { FMOV            V0.4S, #1.0 }
      isSkillInvalid = v7->fields.isSkillInvalid;
      v24->fields.to = _Q0;
      warningLabel = v2->fields.warningLabel;
      if ( isSkillInvalid )
      {
        if ( !warningLabel )
          goto LABEL_46;
        v29.fields.x = 2.0;
        v29.fields.y = 2.0;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, v29, 0);
        warningLabel = v2->fields.warningLabel;
        if ( !warningLabel )
          goto LABEL_46;
        v17 = 0.50196;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        goto LABEL_39;
      }
      if ( !warningLabel )
        goto LABEL_46;
      v12 = 1.0;
      v13 = 1.0;
    }
    UILabel__set_effectDistance((UILabel_o *)warningLabel, *(UnityEngine_Vector2_o *)&v12, 0);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 1.0;
LABEL_39:
    UILabel__set_effectColor((UILabel_o *)warningLabel, *(UnityEngine_Color_o *)&v14, 0);
LABEL_40:
    v27 = v2->fields.warningLabelTextSync2Pattern;
    v28 = v2->fields.warningLabelTexts;
    v2->fields.warningLabelTextSync2Pattern = v27 + 1;
    v2->fields.warningLabelTextSync2PatternOld = v27;
    if ( v28 )
    {
      if ( v27 + 1 >= SLODWORD(v28->max_length) )
        v2->fields.warningLabelTextSync2Pattern = 0;
      return;
    }
LABEL_46:
    sub_1C942F0(warningLabel, method);
  }
}


void SupportServantListViewItemDraw__Awake(SupportServantListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3, v4, v5, v6, v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


System_String_o *SupportServantListViewItemDraw__GetWarningText(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        bool isBaseSelect,
        const MethodInfo *method)
{
  __int64 *v6; // x8
  const MethodInfo *v7; // x1
  System_String_o *v9; // x0
  int32_t useSet; // w8
  System_String_o *v11; // x19
  Il2CppObject *v12; // x1

  if ( (byte_4D28E90 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11568/*"SELECT_CANNOT"*/);
    sub_1C94098(&StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C94098(&StringLiteral_11587/*"SELECT_NO_SORTIE"*/);
    sub_1C94098(&StringLiteral_12620/*"SUPPORT_SELECT_USE_SUPPORT"*/);
    sub_1C94098(&StringLiteral_12570/*"SUPPORT_SELECT_ALREADY_SET"*/);
    sub_1C94098(&StringLiteral_10345/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/);
    this = (SupportServantListViewItemDraw_o *)sub_1C94098(&StringLiteral_10346/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/);
    byte_4D28E90 = 1;
  }
  if ( !item )
    sub_1C942F0(this, item);
  if ( item->fields.isPushMode )
  {
    if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
    if ( item->fields.isEventJoin )
    {
LABEL_14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
    return 0;
  }
  if ( item->fields.isBase )
  {
    if ( !isBaseSelect )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_10345/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
    if ( !SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0;
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11587/*"SELECT_NO_SORTIE"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_18;
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_10346/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  if ( SupportServantListViewItem__get_IsUseServant(item, v7) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_12620/*"SUPPORT_SELECT_USE_SUPPORT"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  if ( item->fields.isEventJoin )
    goto LABEL_14;
  if ( !item->fields.isUseInSet )
    return 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12570/*"SUPPORT_SELECT_ALREADY_SET"*/, 0);
  useSet = item->fields.useSet;
  v11 = v9;
  v12 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(useSet, 0);
  return System_String__Format(v11, v12, 0);
}


void SupportServantListViewItemDraw__OnDisable(SupportServantListViewItemDraw_o *this, const MethodInfo *method)
{
  SupportServantListViewItemDraw_c *v3; // x0
  System_Collections_Generic_List_object__o *itemList; // x0

  if ( (byte_4D28E8D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
    sub_1C94098(&SupportServantListViewItemDraw_TypeInfo);
    byte_4D28E8D = 1;
  }
  v3 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v3 = SupportServantListViewItemDraw_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_object__o *)v3->static_fields->itemList;
  if ( !itemList )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___Remove(
    itemList,
    (Il2CppObject *)this,
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
}


void SupportServantListViewItemDraw__OnFinishWarningAnime(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SupportServantListViewItemDraw__AdvanceWarningLabel(this, method);
  SupportServantListViewItemDraw__WarningTweenStart(this, v3);
}


void SupportServantListViewItemDraw__SetInput(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *v17; // x21

  if ( (byte_4D28E91 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28E91 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_46;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_46;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_46;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_object )
        goto LABEL_46;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_46;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isLock, 0);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_object )
        goto LABEL_46;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_46;
      if ( item->fields.isSwapChoice )
        isChoice = !item->fields.isChoice;
      else
        isChoice = item->fields.isChoice;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isChoice, 0);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !Component_object )
        goto LABEL_46;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0);
    }
    SupportServantListViewItemDraw__SetWarning(this, item, v16);
    v17 = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
        return;
      }
LABEL_46:
      sub_1C942F0(Component_object, v8);
    }
  }
}


void SupportServantListViewItemDraw__SetItem(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  _BOOL4 isBase; // w23
  ServantFaceIconComponent_o *servantFaceIcon; // x21
  UserServantEntity_o *userServantEntity; // x22
  System_Int64_array *EquipList; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_4D28E8E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28E8E = 1;
  }
  if ( item && mode )
  {
    isBase = item->fields.isBase;
    servantFaceIcon = this->fields.servantFaceIcon;
    userServantEntity = item->fields.userServantEntity;
    EquipList = SupportServantListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_43;
    ServantFaceIconComponent__Set_41844984(
      servantFaceIcon,
      userServantEntity,
      EquipList,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
    EquipList = (System_Int64_array *)this->fields.servantFaceIcon;
    if ( !EquipList )
      goto LABEL_43;
    ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
      (ServantFaceIconComponent_o *)EquipList,
      this->fields.maskSprite,
      this->fields.defaultMaskName,
      this->fields.defaultMaskAtlas,
      0);
    if ( isBase )
    {
      partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(partyIcon, 0, 0) )
      {
        EquipList = (System_Int64_array *)this->fields.partyIcon;
        if ( !EquipList )
          goto LABEL_43;
        FlashingIconComponent__Clear((FlashingIconComponent_o *)EquipList, 0);
      }
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
    {
      EquipList = (System_Int64_array *)this->fields.lockSprite;
      if ( !EquipList )
        goto LABEL_43;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0);
      if ( !EquipList )
        goto LABEL_43;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, isLock, 0);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
    {
      EquipList = (System_Int64_array *)this->fields.choiceSprite;
      if ( !EquipList )
        goto LABEL_43;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0);
      if ( !EquipList )
        goto LABEL_43;
      if ( item->fields.isSwapChoice )
        isChoice = !item->fields.isChoice;
      else
        isChoice = item->fields.isChoice;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, isChoice, 0);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
    {
      EquipList = (System_Int64_array *)this->fields.pushSprite;
      if ( !EquipList )
        goto LABEL_43;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0);
      if ( !EquipList )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, item->fields.isPush, 0);
    }
    SupportServantListViewItemDraw__SetWarning(this, item, v18);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      EquipList = (System_Int64_array *)this->fields.selectObject;
      if ( EquipList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, item->fields.isBase, 0);
        return;
      }
LABEL_43:
      sub_1C942F0(EquipList, v11);
    }
  }
}


void SupportServantListViewItemDraw__SetWarning(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  int *maskSprite; // x0
  const MethodInfo *v7; // x1
  SupportServantListViewItemDraw_o *FriendPointBonus; // x0
  const MethodInfo *v9; // x3
  int v10; // w22
  System_String_o *v11; // x23
  float v12; // s0
  Il2CppObject *v13; // x0
  System_String_o *v14; // x23
  SupportServantListViewItemDraw_WarningLabelText_o *v15; // x0
  Il2CppObject *v16; // x22
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_String_o *v28; // x23
  SupportServantListViewItemDraw_WarningLabelText_o *v29; // x22
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  System_String_o *WarningText; // x23
  bool v42; // w1
  SupportServantListViewItemDraw_WarningLabelText_o *v43; // x22
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  System_String_o *v61; // x22
  SupportServantListViewItemDraw_WarningLabelText_o *v62; // x21
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  System_Object_array *v74; // x1
  SupportServantListViewItemDraw_c *v75; // x0
  const MethodInfo *v76; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  il2cpp_array_size_t max_length; // x8
  const MethodInfo *v79; // x1
  System_Collections_Generic_List_object__o *itemList; // x8
  struct TweenAlpha_o *warningTween; // x20
  struct TweenColor_o *warningTweenColor; // x20
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  SupportServantListViewItemDraw_c *v89; // x0
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  float v94; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4D28E8F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&float_TypeInfo);
    sub_1C94098(&SupportServantListViewItemDraw_TypeInfo);
    sub_1C94098(&SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    sub_1C94098(&StringLiteral_11577/*"SELECT_FP_NUM_UP"*/);
    sub_1C94098(&StringLiteral_11567/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28E8F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_85;
  FriendPointBonus = (SupportServantListViewItemDraw_o *)SupportServantListViewItem__GetFriendPointBonus(item, v7);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v10 = (int)FriendPointBonus;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11577/*"SELECT_FP_NUM_UP"*/, 0);
    v12 = (double)v10 / 1000.0;
    v94 = v12;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v94);
    v14 = System_String__Format(v11, v13, 0);
    v15 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C942E4(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    v96.fields.b = 0.8;
    v95.fields.r = 1.0;
    v95.fields.g = 1.0;
    v95.fields.b = 0.0;
    v95.fields.a = 1.0;
    v96.fields.r = 1.0;
    v96.fields.g = 1.0;
    v96.fields.a = 1.0;
    v16 = (Il2CppObject *)v15;
    SupportServantListViewItemDraw_WarningLabelText___ctor_36419052(v15, v14, v95, v96, 1.0, 0, v17);
    if ( !v5 )
      goto LABEL_85;
    items = v5->fields._items;
    v25 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_85;
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        v16,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v16;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v16, v18, v19, v20, v21, v22, v23);
    }
  }
  if ( item->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11567/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    v29 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C942E4(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v29, v28, 0.8, 1, v30);
    if ( !v5 )
      goto LABEL_85;
    v37 = v5->fields._items;
    v38 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !v37 )
      goto LABEL_85;
    v39 = v5->fields._size;
    if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v29,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v37->obj.klass + v39;
      v5->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)v29;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v29, v31, v32, v33, v34, v35, v36);
    }
  }
  WarningText = SupportServantListViewItemDraw__GetWarningText(FriendPointBonus, item, item->fields.isBase, v9);
  if ( System_String__IsNullOrEmpty(WarningText, 0) )
  {
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_85;
    v42 = 0;
  }
  else
  {
    v43 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C942E4(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v43, WarningText, 1.0, 0, v44);
    if ( !v5 )
      goto LABEL_85;
    v51 = v5->fields._items;
    v52 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !v51 )
      goto LABEL_85;
    v53 = v5->fields._size;
    if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v43,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = &v51->obj.klass + v53;
      v5->fields._size = v53 + 1;
      v54[4] = (Il2CppClass *)v43;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v54 + 4), (int32_t)v43, v45, v46, v47, v48, v49, v50);
    }
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_85;
    v42 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v42, 0);
  if ( item->fields.isInvalidRarity )
  {
    if ( !v5 )
      goto LABEL_85;
    if ( v5->fields._size == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11567/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
      v62 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C942E4(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
      SupportServantListViewItemDraw_WarningLabelText___ctor(v62, v61, 0.8, 1, v63);
      v70 = v5->fields._items;
      v71 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
      ++v5->fields._version;
      if ( !v70 )
        goto LABEL_85;
      v72 = v5->fields._size;
      if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v62,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = &v70->obj.klass + v72;
        v5->fields._size = v72 + 1;
        v73[4] = (Il2CppClass *)v62;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v73 + 4), (int32_t)v62, v64, v65, v66, v67, v68, v69);
      }
    }
  }
  else if ( !v5 )
  {
    goto LABEL_85;
  }
  if ( v5->fields._size < 1 )
    v74 = 0;
  else
    v74 = System_Collections_Generic_List_object___ToArray(
            v5,
            (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = (struct SupportServantListViewItemDraw_WarningLabelText_array *)v74;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.warningLabelTexts,
    (int32_t)v74,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v75 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v75 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v75->static_fields->itemList;
  if ( !maskSprite )
    goto LABEL_85;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)maskSprite,
    (Il2CppObject *)this,
    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (max_length = warningLabelTexts->max_length) == 0 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v76);
    maskSprite = (int *)this->fields.warningLabel;
    if ( maskSprite )
    {
      maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
      if ( maskSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
        maskSprite = (int *)this->fields.warningLabel;
        if ( maskSprite )
        {
          UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
    goto LABEL_85;
  }
  if ( (int)max_length < 2 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v76);
    goto LABEL_82;
  }
  SupportServantListViewItemDraw__WarningTweenStart(this, v76);
  maskSprite = (int *)SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    maskSprite = (int *)SupportServantListViewItemDraw_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_object__o *)**((_QWORD **)maskSprite + 23);
  if ( !itemList )
    goto LABEL_85;
  if ( itemList->fields._size < 1 )
  {
    maskSprite = (int *)this->fields.warningTween;
    if ( !maskSprite )
      goto LABEL_85;
    UITweener__ResetToBeginning((UITweener_o *)maskSprite, 0);
    maskSprite = (int *)this->fields.warningTween;
    if ( !maskSprite )
      goto LABEL_85;
    UITweener__set_tweenFactor((UITweener_o *)maskSprite, 0.125, 0);
    maskSprite = (int *)this->fields.warningTweenColor;
    if ( !maskSprite )
      goto LABEL_85;
    UITweener__ResetToBeginning((UITweener_o *)maskSprite, 0);
  }
  else
  {
    if ( !maskSprite[56] )
    {
      j_il2cpp_runtime_class_init_0(maskSprite);
      itemList = (System_Collections_Generic_List_object__o *)SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
      if ( !itemList )
        goto LABEL_85;
    }
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          0,
                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    if ( !maskSprite )
      goto LABEL_85;
    this->fields.warningLabelTextSync2Pattern = maskSprite[33];
    maskSprite = (int *)SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
    if ( !maskSprite )
      goto LABEL_85;
    warningTween = this->fields.warningTween;
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)maskSprite,
                          0,
                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    if ( !maskSprite )
      goto LABEL_85;
    if ( !warningTween )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenAlpha_o *, _QWORD, const MethodInfo *))warningTween->klass->vtable._8_SynchronizeTween.methodPtr)(
      warningTween,
      *((_QWORD *)maskSprite + 13),
      warningTween->klass->vtable._8_SynchronizeTween.method);
    maskSprite = (int *)SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
    if ( !maskSprite )
      goto LABEL_85;
    warningTweenColor = this->fields.warningTweenColor;
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)maskSprite,
                          0,
                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    if ( !maskSprite || !warningTweenColor )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenColor_o *, _QWORD, const MethodInfo *))warningTweenColor->klass->vtable._8_SynchronizeTween.methodPtr)(
      warningTweenColor,
      *((_QWORD *)maskSprite + 14),
      warningTweenColor->klass->vtable._8_SynchronizeTween.method);
  }
  v89 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v89 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v89->static_fields->itemList;
  if ( !maskSprite
    || (v90 = *((_QWORD *)maskSprite + 2),
        v91 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__,
        ++maskSprite[7],
        !v90) )
  {
LABEL_85:
    sub_1C942F0(maskSprite, v7);
  }
  v92 = maskSprite[6];
  if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)this,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = v90 + 8 * v92;
    maskSprite[6] = v92 + 1;
    *(_QWORD *)(v93 + 32) = this;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v93 + 32), (int32_t)this, v83, v84, v85, v86, v87, v88);
  }
LABEL_82:
  SupportServantListViewItemDraw__AdvanceWarningLabel(this, v79);
  maskSprite = (int *)this->fields.warningLabel;
  if ( !maskSprite )
    goto LABEL_85;
  maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
}


void SupportServantListViewItemDraw__WarningTweenStart(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  SupportServantListViewItemDraw_o *v2; // x19
  struct TweenAlpha_o *warningTween; // x20
  SupportServantListViewItemDraw_c *v4; // x8
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4D28E93 & 1) == 0 )
  {
    this = (SupportServantListViewItemDraw_o *)sub_1C94098(&SupportServantListViewItemDraw_TypeInfo);
    byte_4D28E93 = 1;
  }
  warningTween = v2->fields.warningTween;
  if ( !warningTween )
    goto LABEL_11;
  *(_QWORD *)&warningTween->fields.from = 0x3F80000000000000LL;
  v4 = SupportServantListViewItemDraw_TypeInfo;
  if ( SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    this = (SupportServantListViewItemDraw_o *)warningTween;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v4 = SupportServantListViewItemDraw_TypeInfo;
    this = (SupportServantListViewItemDraw_o *)v2->fields.warningTween;
  }
  warningTween->fields.duration = v4->static_fields->changeTimeSecond;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0),
        (this = (SupportServantListViewItemDraw_o *)v2->fields.warningTween) == 0)
    || (UITweener__ResetToBeginning((UITweener_o *)this, 0),
        (this = (SupportServantListViewItemDraw_o *)v2->fields.warningLabel) == 0) )
  {
LABEL_11:
    sub_1C942F0(this, method);
  }
  v5.fields.r = 0.0;
  v5.fields.g = 0.0;
  v5.fields.b = 0.0;
  v5.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)this, v5, 0);
}


void SupportServantListViewItemDraw__WarningTweenStop(SupportServantListViewItemDraw_o *this, const MethodInfo *method)
{
  struct TweenAlpha_o *warningTween; // x0

  warningTween = this->fields.warningTween;
  if ( !warningTween )
    sub_1C942F0(0, method);
  warningTween->fields.duration = 0.0;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningTween, 0, 0);
}


void SupportServantListViewItemDraw_WarningLabelText___ctor(
        SupportServantListViewItemDraw_WarningLabelText_o *this,
        System_String_o *s,
        float scaleX,
        bool isSkillInvalid,
        const MethodInfo *method)
{
  SupportServantListViewItemDraw_WarningLabelText_o *v7; // x20
  bool v8; // w21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v7 = this;
  v8 = isSkillInvalid;
  System_Object___ctor((Il2CppObject *)this, 0);
  v7->fields.text = s;
  v7 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v7 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v7, (int32_t)s, v9, v10, v11, v12, v13, v14);
  __asm { FMOV            V0.4S, #1.0 }
  LOWORD(v7->monitor) = 0;
  v7->fields.bottom.fields.r = scaleX;
  v7->fields.top = _Q0;
  *(struct UnityEngine_Color_o *)((char *)&v7->monitor + 4) = _Q0;
  LOBYTE(v7->fields.bottom.fields.g) = v8;
}


void SupportServantListViewItemDraw_WarningLabelText___ctor_36419052(
        SupportServantListViewItemDraw_WarningLabelText_o *this,
        System_String_o *s,
        UnityEngine_Color_o t,
        UnityEngine_Color_o b,
        float scaleX,
        bool isSkillInvalid,
        const MethodInfo *method)
{
  float v8; // s9
  float g; // s10
  float r; // s11
  float v11; // s12
  float v12; // s13
  float v13; // s14
  float v14; // s15
  SupportServantListViewItemDraw_WarningLabelText_o *v15; // x20
  bool v16; // w21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  float a; // [xsp+Ch] [xbp-64h]

  a = b.fields.a;
  v8 = b.fields.b;
  g = b.fields.g;
  r = b.fields.r;
  v11 = t.fields.a;
  v12 = t.fields.b;
  v13 = t.fields.g;
  v14 = t.fields.r;
  v15 = this;
  v16 = isSkillInvalid;
  System_Object___ctor((Il2CppObject *)this, 0);
  v15->fields.text = s;
  v15 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v15 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v15, (int32_t)s, v17, v18, v19, v20, v21, v22);
  *((float *)&v15->monitor + 1) = v14;
  *(float *)&v15->fields.text = v13;
  *((float *)&v15->fields.text + 1) = v12;
  *(float *)&v15->fields.gradation = v11;
  v15->fields.top.fields.r = r;
  v15->fields.top.fields.g = g;
  v15->fields.top.fields.b = v8;
  v15->fields.top.fields.a = a;
  v15->fields.bottom.fields.r = scaleX;
  LOWORD(v15->monitor) = 257;
  LOBYTE(v15->fields.bottom.fields.g) = v16;
}