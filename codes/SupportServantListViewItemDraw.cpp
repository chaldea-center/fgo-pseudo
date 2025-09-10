void SupportServantListViewItemDraw___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C23AA3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
    sub_1C2D490(&SupportServantListViewItemDraw_TypeInfo);
    byte_4C23AA3 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
  SupportServantListViewItemDraw_TypeInfo->static_fields->itemList = (struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)SupportServantListViewItemDraw_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  __int64 v2; // x2
  SupportServantListViewItemDraw_o *v3; // x19
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  int max_length; // w10
  __int64 warningLabelTextSync2Pattern; // x9
  void *warningLabel; // x0
  SupportServantListViewItemDraw_WarningLabelText_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *itemList; // x8
  struct TweenColor_o *v11; // x20
  struct TweenColor_o *v12; // x8
  float v13; // s0 OVERLAPPED
  float v14; // s1
  int v15; // s0 OVERLAPPED
  int v16; // s1
  int v17; // s2
  float v18; // s3
  struct TweenColor_o *warningTweenColor; // x8
  struct TweenColor_o *v25; // x8
  _BOOL4 isSkillInvalid; // w9
  int32_t v28; // w10
  struct SupportServantListViewItemDraw_WarningLabelText_array *v29; // x9
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4C23AA1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    sub_1C2D490(&SupportServantListViewItemDraw_TypeInfo);
    this = (SupportServantListViewItemDraw_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23AA1 = 1;
  }
  warningLabelTexts = v3->fields.warningLabelTexts;
  if ( warningLabelTexts )
  {
    max_length = warningLabelTexts->max_length;
    if ( max_length < 2 )
      warningLabelTextSync2Pattern = 0;
    else
      warningLabelTextSync2Pattern = v3->fields.warningLabelTextSync2Pattern;
    if ( (unsigned int)warningLabelTextSync2Pattern >= max_length )
      sub_1C2D6F4(this, method, v2);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    v8 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
    if ( !v8 )
    {
      UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      warningLabel = v3->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      UILabel__set_applyGradient((UILabel_o *)warningLabel, 0, 0);
      warningLabel = v3->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      v31.fields.r = 1.0;
      v31.fields.g = 1.0;
      v31.fields.b = 1.0;
      v31.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)warningLabel, v31, 0);
      warningTweenColor = v3->fields.warningTweenColor;
      if ( !warningTweenColor )
        goto LABEL_46;
      __asm { FMOV            V0.4S, #1.0 }
      warningTweenColor->fields.to = _Q0;
      warningLabel = v3->fields.warningTweenColor;
      if ( !warningLabel )
        goto LABEL_46;
      TweenColor__get_value((TweenColor_o *)warningLabel, 0);
      goto LABEL_40;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)warningLabel, 0);
    GameObjectExtensions__SetLocalScaleX(gameObject, v8->fields.scaleX, 0);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)warningLabel, v8->fields.text, 0);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_applyGradient((UILabel_o *)warningLabel, v8->fields.gradation, 0);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_gradientTop((UILabel_o *)warningLabel, v8->fields.top, 0);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_gradientBottom((UILabel_o *)warningLabel, v8->fields.bottom, 0);
    if ( v8->fields.coloranime )
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
        v11 = v3->fields.warningTweenColor;
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
                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
        if ( !warningLabel || !v11 )
          goto LABEL_46;
        warningLabel = (void *)((__int64 (__fastcall *)(struct TweenColor_o *, _QWORD, const MethodInfo *))v11->klass->vtable._8_SynchronizeTween.methodPtr)(
                                 v11,
                                 *((_QWORD *)warningLabel + 14),
                                 v11->klass->vtable._8_SynchronizeTween.method);
      }
      v12 = v3->fields.warningTweenColor;
      if ( !v12 )
        goto LABEL_46;
      v12->fields.to = (struct UnityEngine_Color_o)xmmword_C09C60;
      warningLabel = v3->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      v13 = 2.0;
      v14 = 2.0;
    }
    else
    {
      v25 = v3->fields.warningTweenColor;
      if ( !v25 )
        goto LABEL_46;
      __asm { FMOV            V0.4S, #1.0 }
      isSkillInvalid = v8->fields.isSkillInvalid;
      v25->fields.to = _Q0;
      warningLabel = v3->fields.warningLabel;
      if ( isSkillInvalid )
      {
        if ( !warningLabel )
          goto LABEL_46;
        v30.fields.x = 2.0;
        v30.fields.y = 2.0;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, v30, 0);
        warningLabel = v3->fields.warningLabel;
        if ( !warningLabel )
          goto LABEL_46;
        v18 = 0.50196;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        goto LABEL_39;
      }
      if ( !warningLabel )
        goto LABEL_46;
      v13 = 1.0;
      v14 = 1.0;
    }
    UILabel__set_effectDistance((UILabel_o *)warningLabel, *(UnityEngine_Vector2_o *)&v13, 0);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 1.0;
LABEL_39:
    UILabel__set_effectColor((UILabel_o *)warningLabel, *(UnityEngine_Color_o *)&v15, 0);
LABEL_40:
    v28 = v3->fields.warningLabelTextSync2Pattern;
    v29 = v3->fields.warningLabelTexts;
    v3->fields.warningLabelTextSync2Pattern = v28 + 1;
    v3->fields.warningLabelTextSync2PatternOld = v28;
    if ( v29 )
    {
      if ( v28 + 1 >= SLODWORD(v29->max_length) )
        v3->fields.warningLabelTextSync2Pattern = 0;
      return;
    }
LABEL_46:
    sub_1C2D6EC(warningLabel, method);
  }
}


void SupportServantListViewItemDraw__Awake(SupportServantListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UISprite_o *v9; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3);
  v9 = this->fields.maskSprite;
  if ( v9 )
    mSpriteName = v9->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultMaskName, (int32_t)mSpriteName, v7, v8);
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

  if ( (byte_4C23A9F & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11514/*"SELECT_CANNOT"*/);
    sub_1C2D490(&StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C2D490(&StringLiteral_11533/*"SELECT_NO_SORTIE"*/);
    sub_1C2D490(&StringLiteral_12561/*"SUPPORT_SELECT_USE_SUPPORT"*/);
    sub_1C2D490(&StringLiteral_12511/*"SUPPORT_SELECT_ALREADY_SET"*/);
    sub_1C2D490(&StringLiteral_10307/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/);
    this = (SupportServantListViewItemDraw_o *)sub_1C2D490(&StringLiteral_10308/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/);
    byte_4C23A9F = 1;
  }
  if ( !item )
    sub_1C2D6EC(this, item);
  if ( item->fields.isPushMode )
  {
    if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_11514/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
    if ( item->fields.isEventJoin )
    {
LABEL_14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_11546/*"SELECT_SERVANT_EVENT_JOIN"*/;
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
      v6 = &StringLiteral_10307/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
    if ( !SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0;
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11533/*"SELECT_NO_SORTIE"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_18;
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_10308/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  if ( SupportServantListViewItem__get_IsUseServant(item, v7) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_12561/*"SUPPORT_SELECT_USE_SUPPORT"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  if ( item->fields.isEventJoin )
    goto LABEL_14;
  if ( !item->fields.isUseInSet )
    return 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12511/*"SUPPORT_SELECT_ALREADY_SET"*/, 0);
  useSet = item->fields.useSet;
  v11 = v9;
  v12 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(useSet, 0);
  return System_String__Format(v11, v12, 0);
}


void SupportServantListViewItemDraw__OnDisable(SupportServantListViewItemDraw_o *this, const MethodInfo *method)
{
  SupportServantListViewItemDraw_c *v3; // x0
  System_Collections_Generic_List_object__o *itemList; // x0

  if ( (byte_4C23A9C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
    sub_1C2D490(&SupportServantListViewItemDraw_TypeInfo);
    byte_4C23A9C = 1;
  }
  v3 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v3 = SupportServantListViewItemDraw_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_object__o *)v3->static_fields->itemList;
  if ( !itemList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___Remove(
    itemList,
    (Il2CppObject *)this,
    (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
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

  if ( (byte_4C23AA0 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23AA0 = 1;
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
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1C2D6EC(Component_object, v8);
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

  if ( (byte_4C23A9D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23A9D = 1;
  }
  if ( item && mode )
  {
    isBase = item->fields.isBase;
    servantFaceIcon = this->fields.servantFaceIcon;
    userServantEntity = item->fields.userServantEntity;
    EquipList = SupportServantListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_43;
    ServantFaceIconComponent__Set_40783764(
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
      sub_1C2D6EC(EquipList, v11);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x23
  SupportServantListViewItemDraw_WarningLabelText_o *v18; // x0
  Il2CppObject *v19; // x22
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_String_o *v27; // x23
  SupportServantListViewItemDraw_WarningLabelText_o *v28; // x22
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  System_String_o *WarningText; // x23
  bool v37; // w1
  SupportServantListViewItemDraw_WarningLabelText_o *v38; // x22
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_o *v48; // x22
  SupportServantListViewItemDraw_WarningLabelText_o *v49; // x21
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  System_Object_array *v57; // x1
  SupportServantListViewItemDraw_c *v58; // x0
  const MethodInfo *v59; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  il2cpp_array_size_t max_length; // x8
  const MethodInfo *v62; // x1
  System_Collections_Generic_List_object__o *itemList; // x8
  struct TweenAlpha_o *warningTween; // x20
  struct TweenColor_o *warningTweenColor; // x20
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  SupportServantListViewItemDraw_c *v68; // x0
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  float v73; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C23A9E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&SupportServantListViewItemDraw_TypeInfo);
    sub_1C2D490(&SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    sub_1C2D490(&StringLiteral_11523/*"SELECT_FP_NUM_UP"*/);
    sub_1C2D490(&StringLiteral_11513/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23A9E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_85;
  FriendPointBonus = (SupportServantListViewItemDraw_o *)SupportServantListViewItem__GetFriendPointBonus(item, v7);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v10 = (int)FriendPointBonus;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11523/*"SELECT_FP_NUM_UP"*/, 0);
    v12 = (double)v10 / 1000.0;
    v73 = v12;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v73, v13, v14, v15);
    v17 = System_String__Format(v11, v16, 0);
    v18 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C2D6DC(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    v75.fields.b = 0.8;
    v74.fields.r = 1.0;
    v74.fields.g = 1.0;
    v74.fields.b = 0.0;
    v74.fields.a = 1.0;
    v75.fields.r = 1.0;
    v75.fields.g = 1.0;
    v75.fields.a = 1.0;
    v19 = (Il2CppObject *)v18;
    SupportServantListViewItemDraw_WarningLabelText___ctor_35629248(v18, v17, v74, v75, 1.0, 0, v20);
    if ( !v5 )
      goto LABEL_85;
    items = v5->fields._items;
    v24 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_85;
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        v19,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v19;
      sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
    }
  }
  if ( item->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11513/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    v28 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C2D6DC(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v28, v27, 0.8, 1, v29);
    if ( !v5 )
      goto LABEL_85;
    v32 = v5->fields._items;
    v33 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !v32 )
      goto LABEL_85;
    v34 = v5->fields._size;
    if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v28,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &v32->obj.klass + v34;
      v5->fields._size = v34 + 1;
      v35[4] = (Il2CppClass *)v28;
      sub_1C2D434((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
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
    v37 = 0;
  }
  else
  {
    v38 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C2D6DC(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v38, WarningText, 1.0, 0, v39);
    if ( !v5 )
      goto LABEL_85;
    v42 = v5->fields._items;
    v43 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !v42 )
      goto LABEL_85;
    v44 = v5->fields._size;
    if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v38,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v5->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)v38;
      sub_1C2D434((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v38, v40, v41);
    }
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_85;
    v37 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v37, 0);
  if ( item->fields.isInvalidRarity )
  {
    if ( !v5 )
      goto LABEL_85;
    if ( v5->fields._size == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11513/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
      v49 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C2D6DC(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
      SupportServantListViewItemDraw_WarningLabelText___ctor(v49, v48, 0.8, 1, v50);
      v53 = v5->fields._items;
      v54 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
      ++v5->fields._version;
      if ( !v53 )
        goto LABEL_85;
      v55 = v5->fields._size;
      if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v49,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &v53->obj.klass + v55;
        v5->fields._size = v55 + 1;
        v56[4] = (Il2CppClass *)v49;
        sub_1C2D434((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v49, v51, v52);
      }
    }
  }
  else if ( !v5 )
  {
    goto LABEL_85;
  }
  if ( v5->fields._size < 1 )
    v57 = 0;
  else
    v57 = System_Collections_Generic_List_object___ToArray(
            v5,
            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = (struct SupportServantListViewItemDraw_WarningLabelText_array *)v57;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.warningLabelTexts, (int32_t)v57, v46, v47);
  v58 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v58 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v58->static_fields->itemList;
  if ( !maskSprite )
    goto LABEL_85;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)maskSprite,
    (Il2CppObject *)this,
    (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (max_length = warningLabelTexts->max_length) == 0 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v59);
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
    SupportServantListViewItemDraw__WarningTweenStop(this, v59);
    goto LABEL_82;
  }
  SupportServantListViewItemDraw__WarningTweenStart(this, v59);
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
                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
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
                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
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
                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    if ( !maskSprite || !warningTweenColor )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenColor_o *, _QWORD, const MethodInfo *))warningTweenColor->klass->vtable._8_SynchronizeTween.methodPtr)(
      warningTweenColor,
      *((_QWORD *)maskSprite + 14),
      warningTweenColor->klass->vtable._8_SynchronizeTween.method);
  }
  v68 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v68 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v68->static_fields->itemList;
  if ( !maskSprite
    || (v69 = *((_QWORD *)maskSprite + 2),
        v70 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__,
        ++maskSprite[7],
        !v69) )
  {
LABEL_85:
    sub_1C2D6EC(maskSprite, v7);
  }
  v71 = maskSprite[6];
  if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)this,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = v69 + 8 * v71;
    maskSprite[6] = v71 + 1;
    *(_QWORD *)(v72 + 32) = this;
    sub_1C2D434((CGThumbnailListItem_o *)(v72 + 32), (int32_t)this, v66, v67);
  }
LABEL_82:
  SupportServantListViewItemDraw__AdvanceWarningLabel(this, v62);
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
  if ( (byte_4C23AA2 & 1) == 0 )
  {
    this = (SupportServantListViewItemDraw_o *)sub_1C2D490(&SupportServantListViewItemDraw_TypeInfo);
    byte_4C23AA2 = 1;
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(0, method);
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
  const MethodInfo *v10; // x3

  v7 = this;
  v8 = isSkillInvalid;
  System_Object___ctor((Il2CppObject *)this, 0);
  v7->fields.text = s;
  v7 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v7 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)v7, (int32_t)s, v9, v10);
  __asm { FMOV            V0.4S, #1.0 }
  LOWORD(v7->monitor) = 0;
  v7->fields.bottom.fields.r = scaleX;
  v7->fields.top = _Q0;
  *(struct UnityEngine_Color_o *)((char *)&v7->monitor + 4) = _Q0;
  LOBYTE(v7->fields.bottom.fields.g) = v8;
}


void SupportServantListViewItemDraw_WarningLabelText___ctor_35629248(
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
  const MethodInfo *v18; // x3
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
  sub_1C2D434((CGThumbnailListItem_o *)v15, (int32_t)s, v17, v18);
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