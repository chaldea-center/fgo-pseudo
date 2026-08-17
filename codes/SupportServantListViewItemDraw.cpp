void SupportServantListViewItemDraw___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CD63 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
    sub_2213A60(&SupportServantListViewItemDraw_TypeInfo);
    byte_596CD63 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
  SupportServantListViewItemDraw_TypeInfo->static_fields->itemList = (struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SupportServantListViewItemDraw_TypeInfo->static_fields,
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
  int max_length; // w9
  __int64 warningLabelTextSync2Pattern; // x10
  void *warningLabel; // x0
  SupportServantListViewItemDraw_WarningLabelText_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x2
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
  int32_t v27; // w10
  struct SupportServantListViewItemDraw_WarningLabelText_array *v28; // x9
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_596CD61 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    sub_2213A60(&SupportServantListViewItemDraw_TypeInfo);
    this = (SupportServantListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CD61 = 1;
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
      sub_2213CE4(this);
    warningLabel = v2->fields.warningLabel;
    v7 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
    if ( !v7 )
    {
      if ( !warningLabel )
        goto LABEL_48;
      UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_48;
      UILabel__set_applyGradient((UILabel_o *)warningLabel, 0, 0);
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_48;
      v31.fields.r = 1.0;
      v31.fields.g = 1.0;
      v31.fields.b = 1.0;
      v31.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)warningLabel, v31, 0);
      warningTweenColor = v2->fields.warningTweenColor;
      if ( !warningTweenColor )
        goto LABEL_48;
      __asm { FMOV            V0.4S, #1.0 }
      warningTweenColor->fields.to = _Q0;
      warningLabel = v2->fields.warningTweenColor;
      if ( !warningLabel )
        goto LABEL_48;
      TweenColor__get_value((TweenColor_o *)warningLabel, 0);
      goto LABEL_41;
    }
    if ( !warningLabel )
      goto LABEL_48;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)warningLabel, 0);
    GameObjectExtensions__SetLocalScaleX(gameObject, v7->fields.scaleX, 0);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)warningLabel, v7->fields.text, 0);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_48;
    UILabel__set_applyGradient((UILabel_o *)warningLabel, v7->fields.gradation, 0);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_48;
    UILabel__set_gradientTop((UILabel_o *)warningLabel, v7->fields.top, 0);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_48;
    UILabel__set_gradientBottom((UILabel_o *)warningLabel, v7->fields.bottom, 0);
    if ( v7->fields.coloranime )
    {
      warningLabel = SupportServantListViewItemDraw_TypeInfo;
      if ( !*(&SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, method, v9);
        warningLabel = SupportServantListViewItemDraw_TypeInfo;
      }
      itemList = (System_Collections_Generic_List_object__o *)**((_QWORD **)warningLabel + 23);
      if ( !itemList )
        goto LABEL_48;
      if ( itemList->fields._size >= 1 )
      {
        v11 = v2->fields.warningTweenColor;
        if ( !*((_DWORD *)warningLabel + 57) )
        {
          j_il2cpp_runtime_class_init_0(warningLabel, method, v9);
          itemList = (System_Collections_Generic_List_object__o *)SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
          if ( !itemList )
            goto LABEL_48;
        }
        warningLabel = System_Collections_Generic_List_object___get_Item(
                         itemList,
                         0,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
        if ( !warningLabel || !v11 )
          goto LABEL_48;
        warningLabel = (void *)((__int64 (__fastcall *)(struct TweenColor_o *, _QWORD, const MethodInfo *))v11->klass->vtable._8_SynchronizeTween.methodPtr)(
                                 v11,
                                 *((_QWORD *)warningLabel + 14),
                                 v11->klass->vtable._8_SynchronizeTween.method);
      }
      v12 = v2->fields.warningTweenColor;
      if ( !v12 )
        goto LABEL_48;
      v12->fields.to = (struct UnityEngine_Color_o)xmmword_E9DA70;
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_48;
      v13 = 2.0;
      v14 = 2.0;
    }
    else
    {
      v25 = v2->fields.warningTweenColor;
      if ( v7->fields.isSkillInvalid )
      {
        if ( !v25 )
          goto LABEL_48;
        __asm { FMOV            V0.4S, #1.0 }
        v25->fields.to = _Q0;
        warningLabel = v2->fields.warningLabel;
        if ( !warningLabel )
          goto LABEL_48;
        v30.fields.x = 2.0;
        v30.fields.y = 2.0;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, v30, 0);
        warningLabel = v2->fields.warningLabel;
        if ( !warningLabel )
          goto LABEL_48;
        v15 = 0;
        v16 = 0;
        v18 = 0.50196;
        v17 = 0;
        goto LABEL_40;
      }
      if ( !v25 )
        goto LABEL_48;
      __asm { FMOV            V0.4S, #1.0 }
      v25->fields.to = _Q0;
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_48;
      v13 = 1.0;
      v14 = 1.0;
    }
    UILabel__set_effectDistance((UILabel_o *)warningLabel, *(UnityEngine_Vector2_o *)&v13, 0);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_48;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 1.0;
LABEL_40:
    UILabel__set_effectColor((UILabel_o *)warningLabel, *(UnityEngine_Color_o *)&v15, 0);
LABEL_41:
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
LABEL_48:
    sub_2213CDC(warningLabel, method);
  }
}


void SupportServantListViewItemDraw__Awake(SupportServantListViewItemDraw_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskAtlas,
    (int32_t)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SupportServantListViewItemDraw__GetWarningText(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        bool isBaseSelect,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 *v8; // x8
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  System_String_o *v12; // x0
  int32_t useSet; // w8
  System_String_o *v14; // x19
  Il2CppObject *v15; // x1

  if ( (byte_596CD5F & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12029/*"SELECT_CANNOT"*/);
    sub_2213A60(&StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_2213A60(&StringLiteral_12048/*"SELECT_NO_SORTIE"*/);
    sub_2213A60(&StringLiteral_13092/*"SUPPORT_SELECT_USE_SUPPORT"*/);
    sub_2213A60(&StringLiteral_13042/*"SUPPORT_SELECT_ALREADY_SET"*/);
    sub_2213A60(&StringLiteral_10726/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/);
    this = (SupportServantListViewItemDraw_o *)sub_2213A60(&StringLiteral_10727/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/);
    byte_596CD5F = 1;
  }
  if ( !item )
    sub_2213CDC(this, item);
  if ( item->fields.isPushMode )
  {
    if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
      v8 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    }
    if ( item->fields.isEventJoin )
    {
LABEL_14:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
      v8 = &StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    }
    return 0;
  }
  if ( item->fields.isBase )
  {
    if ( !isBaseSelect )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isBaseSelect);
      v8 = &StringLiteral_10726/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    }
    if ( !SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0;
LABEL_18:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    v8 = &StringLiteral_12048/*"SELECT_NO_SORTIE"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0);
  }
  if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_18;
  if ( item->fields.isSame )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    v8 = &StringLiteral_10727/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0);
  }
  if ( SupportServantListViewItem__get_IsUseServant(item, v9) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    v8 = &StringLiteral_13092/*"SUPPORT_SELECT_USE_SUPPORT"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0);
  }
  if ( item->fields.isEventJoin )
    goto LABEL_14;
  if ( !item->fields.isUseInSet )
    return 0;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13042/*"SUPPORT_SELECT_ALREADY_SET"*/, 0);
  useSet = item->fields.useSet;
  v14 = v12;
  v15 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(useSet, 0);
  return System_String__Format(v14, v15, 0);
}


void SupportServantListViewItemDraw__OnDisable(SupportServantListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SupportServantListViewItemDraw_c *v4; // x0
  System_Collections_Generic_List_object__o *itemList; // x0

  if ( (byte_596CD5C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
    sub_2213A60(&SupportServantListViewItemDraw_TypeInfo);
    byte_596CD5C = 1;
  }
  v4 = SupportServantListViewItemDraw_TypeInfo;
  if ( !*(&SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, method, v2);
    v4 = SupportServantListViewItemDraw_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_object__o *)v4->static_fields->itemList;
  if ( !itemList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___Remove(
    itemList,
    (Il2CppObject *)this,
    (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
}


void SupportServantListViewItemDraw__OnFinishWarningAnime(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SupportServantListViewItemDraw__AdvanceWarningLabel(this, method);
  SupportServantListViewItemDraw__WarningTweenStart(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantListViewItemDraw__SetInput(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  __int64 v12; // x2
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v14; // x2
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v17; // x2
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *v23; // x21

  if ( (byte_596CD60 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CD60 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_46;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v14);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v17);
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
    SupportServantListViewItemDraw__SetWarning(this, item, v20);
    v23 = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
    if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
        return;
      }
LABEL_46:
      sub_2213CDC(Component_object, v8);
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
  __int64 v12; // x2
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v15; // x2
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v18; // x2
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_596CD5D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CD5D = 1;
  }
  if ( item && mode )
  {
    isBase = item->fields.isBase;
    servantFaceIcon = this->fields.servantFaceIcon;
    userServantEntity = item->fields.userServantEntity;
    EquipList = SupportServantListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_43;
    ServantFaceIconComponent__Set_48049544(
      servantFaceIcon,
      userServantEntity,
      EquipList,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0,
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      if ( UnityEngine_Object__op_Inequality(partyIcon, 0, 0) )
      {
        EquipList = (System_Int64_array *)this->fields.partyIcon;
        if ( !EquipList )
          goto LABEL_43;
        FlashingIconComponent__Clear((FlashingIconComponent_o *)EquipList, 0);
      }
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v15);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v18);
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
    SupportServantListViewItemDraw__SetWarning(this, item, v21);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      EquipList = (System_Int64_array *)this->fields.selectObject;
      if ( EquipList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, item->fields.isBase, 0);
        return;
      }
LABEL_43:
      sub_2213CDC(EquipList, v11);
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
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  int v12; // w22
  System_String_o *v13; // x23
  float v14; // s0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x23
  SupportServantListViewItemDraw_WarningLabelText_o *v17; // x0
  Il2CppObject *v18; // x22
  const MethodInfo *v19; // x3
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_String_o *v30; // x23
  SupportServantListViewItemDraw_WarningLabelText_o *v31; // x22
  const MethodInfo *v32; // x3
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  System_String_o *WarningText; // x23
  bool v44; // w1
  SupportServantListViewItemDraw_WarningLabelText_o *v45; // x22
  const MethodInfo *v46; // x3
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x22
  SupportServantListViewItemDraw_WarningLabelText_o *v64; // x21
  const MethodInfo *v65; // x3
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  System_Object_array *v76; // x1
  __int64 v77; // x2
  SupportServantListViewItemDraw_c *v78; // x0
  const MethodInfo *v79; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  il2cpp_array_size_t max_length; // x8
  const MethodInfo *v82; // x1
  __int64 v83; // x2
  System_Collections_Generic_List_object__o *itemList; // x8
  struct SupportServantListViewItemDraw_StaticFields *static_fields; // x8
  struct TweenAlpha_o *warningTween; // x20
  struct TweenColor_o *warningTweenColor; // x20
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  SupportServantListViewItemDraw_c *v94; // x0
  __int64 v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  __int64 v98; // x8
  float v99; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_596CD5E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&SupportServantListViewItemDraw_TypeInfo);
    sub_2213A60(&SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    sub_2213A60(&StringLiteral_12038/*"SELECT_FP_NUM_UP"*/);
    sub_2213A60(&StringLiteral_12028/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CD5E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_85;
  FriendPointBonus = (SupportServantListViewItemDraw_o *)SupportServantListViewItem__GetFriendPointBonus(item, v7);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v12 = (int)FriendPointBonus;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SELECT_FP_NUM_UP"*/, 0);
    v14 = (double)v12 / 1000.0;
    v99 = v14;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v99);
    v16 = System_String__Format(v13, v15, 0);
    v17 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_2213CCC(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    v100.fields.b = 0.0;
    v100.fields.r = 1.0;
    v101.fields.b = 0.8;
    v100.fields.g = 1.0;
    v100.fields.a = 1.0;
    v101.fields.r = 1.0;
    v101.fields.g = 1.0;
    v101.fields.a = 1.0;
    v18 = (Il2CppObject *)v17;
    SupportServantListViewItemDraw_WarningLabelText___ctor_42595116(v17, v16, v100, v101, 1.0, 0, v19);
    if ( !v5 )
      goto LABEL_85;
    items = v5->fields._items;
    v27 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_85;
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        v18,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v18;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v18, v20, v21, v22, v23, v24, v25);
    }
  }
  if ( item->fields.isInvalidRarity )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    v31 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_2213CCC(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v31, v30, 0.8, 1, v32);
    if ( !v5 )
      goto LABEL_85;
    v39 = v5->fields._items;
    v40 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !v39 )
      goto LABEL_85;
    v41 = v5->fields._size;
    if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v31,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      v5->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)v31;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v31, v33, v34, v35, v36, v37, v38);
    }
  }
  WarningText = SupportServantListViewItemDraw__GetWarningText(FriendPointBonus, item, item->fields.isBase, v11);
  if ( System_String__IsNullOrEmpty(WarningText, 0) )
  {
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_85;
    v44 = 0;
  }
  else
  {
    v45 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_2213CCC(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v45, WarningText, 1.0, 0, v46);
    if ( !v5 )
      goto LABEL_85;
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
        (Il2CppObject *)v45,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &v53->obj.klass + v55;
      v5->fields._size = v55 + 1;
      v56[4] = (Il2CppClass *)v45;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v56 + 4), (int32_t)v45, v47, v48, v49, v50, v51, v52);
    }
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_85;
    v44 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v44, 0);
  if ( item->fields.isInvalidRarity )
  {
    if ( !v5 )
      goto LABEL_85;
    if ( v5->fields._size == 1 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v57);
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
      v64 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_2213CCC(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
      SupportServantListViewItemDraw_WarningLabelText___ctor(v64, v63, 0.8, 1, v65);
      v72 = v5->fields._items;
      v73 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
      ++v5->fields._version;
      if ( !v72 )
        goto LABEL_85;
      v74 = v5->fields._size;
      if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v64,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &v72->obj.klass + v74;
        v5->fields._size = v74 + 1;
        v75[4] = (Il2CppClass *)v64;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v64, v66, v67, v68, v69, v70, v71);
      }
    }
  }
  else if ( !v5 )
  {
    goto LABEL_85;
  }
  if ( v5->fields._size < 1 )
    v76 = 0;
  else
    v76 = System_Collections_Generic_List_object___ToArray(
            v5,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = (struct SupportServantListViewItemDraw_WarningLabelText_array *)v76;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.warningLabelTexts,
    (int32_t)v76,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v78 = SupportServantListViewItemDraw_TypeInfo;
  if ( !*(&SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, v7, v77);
    v78 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v78->static_fields->itemList;
  if ( !maskSprite )
    goto LABEL_85;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)maskSprite,
    (Il2CppObject *)this,
    (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (max_length = warningLabelTexts->max_length) == 0 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v79);
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
    SupportServantListViewItemDraw__WarningTweenStop(this, v79);
    goto LABEL_82;
  }
  SupportServantListViewItemDraw__WarningTweenStart(this, v79);
  maskSprite = (int *)SupportServantListViewItemDraw_TypeInfo;
  if ( !*(&SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, v7, v83);
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
    if ( !maskSprite[57] )
    {
      j_il2cpp_runtime_class_init_0(maskSprite, v7, v83);
      itemList = (System_Collections_Generic_List_object__o *)SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
      if ( !itemList )
        goto LABEL_85;
    }
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          0,
                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    if ( !maskSprite )
      goto LABEL_85;
    static_fields = SupportServantListViewItemDraw_TypeInfo->static_fields;
    this->fields.warningLabelTextSync2Pattern = maskSprite[33];
    maskSprite = (int *)static_fields->itemList;
    if ( !static_fields->itemList )
      goto LABEL_85;
    warningTween = this->fields.warningTween;
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)maskSprite,
                          0,
                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
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
                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    if ( !maskSprite || !warningTweenColor )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenColor_o *, _QWORD, const MethodInfo *))warningTweenColor->klass->vtable._8_SynchronizeTween.methodPtr)(
      warningTweenColor,
      *((_QWORD *)maskSprite + 14),
      warningTweenColor->klass->vtable._8_SynchronizeTween.method);
  }
  v94 = SupportServantListViewItemDraw_TypeInfo;
  if ( !*(&SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, v7, v88);
    v94 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v94->static_fields->itemList;
  if ( !maskSprite
    || (v95 = *((_QWORD *)maskSprite + 2),
        v96 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__,
        ++maskSprite[7],
        !v95) )
  {
LABEL_85:
    sub_2213CDC(maskSprite, v7);
  }
  v97 = maskSprite[6];
  if ( (unsigned int)v97 >= *(_DWORD *)(v95 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)this,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
  }
  else
  {
    v98 = v95 + 8 * v97;
    maskSprite[6] = v97 + 1;
    *(_QWORD *)(v98 + 32) = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v98 + 32), (int32_t)this, v88, v89, v90, v91, v92, v93);
  }
LABEL_82:
  SupportServantListViewItemDraw__AdvanceWarningLabel(this, v82);
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
  __int64 v2; // x2
  SupportServantListViewItemDraw_o *v3; // x19
  struct TweenAlpha_o *warningTween; // x20
  SupportServantListViewItemDraw_c *v5; // x0
  struct TweenAlpha_o *v6; // x9
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_596CD62 & 1) == 0 )
  {
    this = (SupportServantListViewItemDraw_o *)sub_2213A60(&SupportServantListViewItemDraw_TypeInfo);
    byte_596CD62 = 1;
  }
  warningTween = v3->fields.warningTween;
  if ( !warningTween )
    goto LABEL_10;
  v5 = SupportServantListViewItemDraw_TypeInfo;
  *(_QWORD *)&warningTween->fields.from = 0x3F80000000000000LL;
  if ( *(&v5->_2.cctor_finished + 1) )
  {
    warningTween->fields.duration = v5->static_fields->changeTimeSecond;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v6 = v3->fields.warningTween;
    warningTween->fields.duration = SupportServantListViewItemDraw_TypeInfo->static_fields->changeTimeSecond;
    warningTween = v6;
    if ( !v6 )
      goto LABEL_10;
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningTween, 1, 0);
  this = (SupportServantListViewItemDraw_o *)v3->fields.warningTween;
  if ( !this
    || (UITweener__ResetToBeginning((UITweener_o *)this, 0),
        (this = (SupportServantListViewItemDraw_o *)v3->fields.warningLabel) == 0) )
  {
LABEL_10:
    sub_2213CDC(this, method);
  }
  v7.fields.r = 0.0;
  v7.fields.g = 0.0;
  v7.fields.b = 0.0;
  v7.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)this, v7, 0);
}


void SupportServantListViewItemDraw__WarningTweenStop(SupportServantListViewItemDraw_o *this, const MethodInfo *method)
{
  struct TweenAlpha_o *warningTween; // x0

  warningTween = this->fields.warningTween;
  if ( !warningTween )
    sub_2213CDC(0, method);
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
  SupportServantListViewItemDraw_WarningLabelText_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.text = s;
  v8 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v8 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v8, (int32_t)s, v9, v10, v11, v12, v13, v14);
  __asm { FMOV            V0.4S, #1.0 }
  LOWORD(v8->monitor) = 0;
  v8->fields.bottom.fields.r = scaleX;
  LOBYTE(v8->fields.bottom.fields.g) = isSkillInvalid;
  v8->fields.top = _Q0;
  *(struct UnityEngine_Color_o *)((char *)&v8->monitor + 4) = _Q0;
}


void SupportServantListViewItemDraw_WarningLabelText___ctor_42595116(
        SupportServantListViewItemDraw_WarningLabelText_o *this,
        System_String_o *s,
        UnityEngine_Color_o t,
        UnityEngine_Color_o b,
        float scaleX,
        bool isSkillInvalid,
        const MethodInfo *method)
{
  float v9; // s9
  float g; // s10
  float r; // s11
  float v12; // s12
  float v13; // s13
  float v14; // s14
  float v15; // s15
  SupportServantListViewItemDraw_WarningLabelText_o *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  float a; // [xsp+Ch] [xbp-64h]

  a = b.fields.a;
  v9 = b.fields.b;
  g = b.fields.g;
  r = b.fields.r;
  v12 = t.fields.a;
  v13 = t.fields.b;
  v14 = t.fields.g;
  v15 = t.fields.r;
  v16 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v16->fields.text = s;
  v16 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v16 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v16, (int32_t)s, v17, v18, v19, v20, v21, v22);
  *((float *)&v16->monitor + 1) = v15;
  *(float *)&v16->fields.text = v14;
  LOWORD(v16->monitor) = 257;
  *((float *)&v16->fields.text + 1) = v13;
  *(float *)&v16->fields.gradation = v12;
  v16->fields.top.fields.r = r;
  v16->fields.top.fields.g = g;
  v16->fields.top.fields.b = v9;
  v16->fields.top.fields.a = a;
  v16->fields.bottom.fields.r = scaleX;
  LOBYTE(v16->fields.bottom.fields.g) = isSkillInvalid;
}