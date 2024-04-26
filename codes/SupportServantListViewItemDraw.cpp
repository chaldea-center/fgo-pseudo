void __fastcall SupportServantListViewItemDraw___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43559A9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
    sub_B70694(&System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
    sub_B70694(&SupportServantListViewItemDraw_TypeInfo);
    byte_43559A9 = 1;
  }
  v1 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v1,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
  static_fields = (BattleServantConfConponent_o *)SupportServantListViewItemDraw_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  SupportServantListViewItemDraw_TypeInfo->static_fields->changeTimeSecond = 4.0;
}


void __fastcall SupportServantListViewItemDraw___ctor(SupportServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewItemDraw__AdvanceWarningLabel(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  SupportServantListViewItemDraw_o *v2; // x19
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  int max_length; // w10
  int32_t warningLabelTextSync2Pattern; // w9
  SupportServantListViewItemDraw_c *warningLabel; // x0
  SupportServantListViewItemDraw_WarningLabelText_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *itemList; // x22
  struct TweenColor_o *warningTweenColor; // x20
  SupportServantListViewItemDraw_o *v11; // x8
  struct TweenColor_o *v12; // x20
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  float v17; // s0
  float v18; // s1
  UILabel_o *v19; // x20
  int v20; // s0
  UIWidget_o *v24; // x20
  int v25; // s0
  struct TweenColor_o *v29; // x20
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s3
  _BOOL4 isSkillInvalid; // w20
  struct TweenColor_o *v35; // x21
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s3
  int32_t v40; // w8
  struct SupportServantListViewItemDraw_WarningLabelText_array *v41; // x9
  int32_t v42; // w8
  __int64 v43; // x0
  UnityEngine_Color32_o v44; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v48; // 0:x0.8
  UnityEngine_Color32_o v49; // 0:x0.8
  UnityEngine_Vector2_o v50; // 0:s0.4,4:s1.4

  v2 = this;
  if ( (byte_43559A7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    sub_B70694(&SupportServantListViewItemDraw_TypeInfo);
    this = (SupportServantListViewItemDraw_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_43559A7 = 1;
  }
  warningLabelTexts = v2->fields.warningLabelTexts;
  if ( !warningLabelTexts )
    return;
  max_length = warningLabelTexts->max_length;
  if ( max_length < 2 )
    warningLabelTextSync2Pattern = 0;
  else
    warningLabelTextSync2Pattern = v2->fields.warningLabelTextSync2Pattern;
  if ( warningLabelTextSync2Pattern >= (unsigned int)max_length )
  {
    v43 = sub_B70798(this);
    sub_B70738(v43, 0LL);
  }
  warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_49;
  v7 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
  if ( v7 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)warningLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(gameObject, v7->fields.scaleX, 0LL);
    warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_49;
    UILabel__set_text((UILabel_o *)warningLabel, v7->fields.text, 0LL);
    warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_49;
    UILabel__set_applyGradient((UILabel_o *)warningLabel, v7->fields.gradation, 0LL);
    warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_49;
    UILabel__set_gradientTop((UILabel_o *)warningLabel, v7->fields.top, 0LL);
    warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_49;
    UILabel__set_gradientBottom((UILabel_o *)warningLabel, v7->fields.bottom, 0LL);
    if ( v7->fields.coloranime )
    {
      warningLabel = SupportServantListViewItemDraw_TypeInfo;
      if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
        warningLabel = SupportServantListViewItemDraw_TypeInfo;
      }
      itemList = warningLabel->static_fields->itemList;
      if ( itemList )
      {
        if ( itemList->fields._size >= 1 )
        {
          warningTweenColor = v2->fields.warningTweenColor;
          if ( (BYTE3(warningLabel->vtable._0_Equals.methodPtr) & 4) != 0 && !warningLabel->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(warningLabel);
            itemList = SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
            if ( !itemList )
              goto LABEL_49;
          }
          if ( !itemList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v11 = itemList->fields._items->m_Items[0];
          if ( !v11 || !warningTweenColor )
            goto LABEL_49;
          ((void (__fastcall *)(struct TweenColor_o *, struct TweenColor_o *, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
            warningTweenColor,
            v11->fields.warningTweenColor,
            warningTweenColor->klass[1]._1.image);
        }
        v12 = v2->fields.warningTweenColor;
        p_c = (UnityEngine_Color32_o)&c;
        c.fields.rgba = 0;
        UnityEngine_Color32___ctor(p_c, 0xFFu, 0xB2u, 0x54u, 0xFFu, 0LL);
        rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
        *(UnityEngine_Color_o *)&v13 = UnityEngine_Color32__op_Implicit_41067916(rgba, 0LL);
        if ( v12 )
        {
          v12->fields.to.fields.r = v13;
          v12->fields.to.fields.g = v14;
          v12->fields.to.fields.b = v15;
          v12->fields.to.fields.a = v16;
          warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
          if ( warningLabel )
          {
            v17 = 2.0;
            goto LABEL_31;
          }
        }
      }
    }
    else
    {
      isSkillInvalid = v7->fields.isSkillInvalid;
      v35 = v2->fields.warningTweenColor;
      *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
      if ( !v35 )
        goto LABEL_49;
      v35->fields.to.fields.r = v36;
      v35->fields.to.fields.g = v37;
      v35->fields.to.fields.b = v38;
      v35->fields.to.fields.a = v39;
      warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
      if ( !isSkillInvalid )
      {
        if ( !warningLabel )
          goto LABEL_49;
        v17 = 1.0;
LABEL_31:
        v18 = v17;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, *(UnityEngine_Vector2_o *)&v17, 0LL);
        v19 = v2->fields.warningLabel;
        *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_black(0LL);
        if ( !v19 )
          goto LABEL_49;
        goto LABEL_42;
      }
      if ( warningLabel )
      {
        v50.fields.x = 2.0;
        v50.fields.y = 2.0;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, v50, 0LL);
        v19 = v2->fields.warningLabel;
        v48 = (UnityEngine_Color32_o)&v44;
        v44.fields.rgba = 0;
        UnityEngine_Color32___ctor(v48, 0, 0, 0, 0x80u, 0LL);
        v49 = (UnityEngine_Color32_o)(unsigned int)v44.fields.rgba;
        *(UnityEngine_Color_o *)&v20 = UnityEngine_Color32__op_Implicit_41067916(v49, 0LL);
        if ( v19 )
        {
LABEL_42:
          UILabel__set_effectColor(v19, *(UnityEngine_Color_o *)&v20, 0LL);
          goto LABEL_43;
        }
      }
    }
LABEL_49:
    sub_B7076C(warningLabel, method);
  }
  UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_49;
  UILabel__set_applyGradient((UILabel_o *)warningLabel, 0, 0LL);
  v24 = (UIWidget_o *)v2->fields.warningLabel;
  *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
  if ( !v24 )
    goto LABEL_49;
  UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v25, 0LL);
  v29 = v2->fields.warningTweenColor;
  *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_white(0LL);
  if ( !v29 )
    goto LABEL_49;
  v29->fields.to.fields.r = v30;
  v29->fields.to.fields.g = v31;
  v29->fields.to.fields.b = v32;
  v29->fields.to.fields.a = v33;
  warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningTweenColor;
  if ( !warningLabel )
    goto LABEL_49;
  TweenColor__get_value((TweenColor_o *)warningLabel, 0LL);
LABEL_43:
  v40 = v2->fields.warningLabelTextSync2Pattern;
  v41 = v2->fields.warningLabelTexts;
  v2->fields.warningLabelTextSync2PatternOld = v40;
  v42 = v40 + 1;
  v2->fields.warningLabelTextSync2Pattern = v42;
  if ( !v41 )
    goto LABEL_49;
  if ( v42 >= (signed int)v41->max_length )
    v2->fields.warningLabelTextSync2Pattern = 0;
}


System_String_o *__fastcall SupportServantListViewItemDraw__GetWarningText(
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

  if ( (byte_43559A5 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_11774/*"SELECT_CANNOT"*/);
    sub_B70694(&StringLiteral_11797/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_B70694(&StringLiteral_11784/*"SELECT_NO_SORTIE"*/);
    sub_B70694(&StringLiteral_12724/*"SUPPORT_SELECT_USE_SUPPORT"*/);
    sub_B70694(&StringLiteral_12674/*"SUPPORT_SELECT_ALREADY_SET"*/);
    sub_B70694(&StringLiteral_10537/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/);
    this = (SupportServantListViewItemDraw_o *)sub_B70694(&StringLiteral_10538/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/);
    byte_43559A5 = 1;
  }
  if ( !item )
    sub_B7076C(this, item);
  if ( item->fields.isPushMode )
  {
    if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_11774/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
LABEL_15:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_11797/*"SELECT_SERVANT_EVENT_JOIN"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    return 0LL;
  }
  if ( item->fields.isBase )
  {
    if ( !isBaseSelect )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = &StringLiteral_10537/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    if ( !SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0LL;
LABEL_20:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_11784/*"SELECT_NO_SORTIE"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_20;
  if ( item->fields.isSame )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_10538/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( SupportServantListViewItem__get_IsUseServant(item, v7) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12724/*"SUPPORT_SELECT_USE_SUPPORT"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( item->fields.isEventJoin )
    goto LABEL_15;
  if ( !item->fields.isUseInSet )
    return 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12674/*"SUPPORT_SELECT_ALREADY_SET"*/, 0LL);
  useSet = item->fields.useSet;
  v11 = v9;
  v12 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(useSet, 0LL);
  return System_String__Format(v11, v12, 0LL);
}


void __fastcall SupportServantListViewItemDraw__OnDisable(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  SupportServantListViewItemDraw_c *v3; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *itemList; // x0

  if ( (byte_43559A2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
    sub_B70694(&SupportServantListViewItemDraw_TypeInfo);
    byte_43559A2 = 1;
  }
  v3 = SupportServantListViewItemDraw_TypeInfo;
  if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v3 = SupportServantListViewItemDraw_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v3->static_fields->itemList;
  if ( !itemList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    itemList,
    (WarBoardManager_TaskList_o *)this,
    (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
}


void __fastcall SupportServantListViewItemDraw__OnFinishWarningAnime(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SupportServantListViewItemDraw__AdvanceWarningLabel(this, method);
  SupportServantListViewItemDraw__WarningTweenStart(this, v3);
}


void __fastcall SupportServantListViewItemDraw__SetInput(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *v15; // x21

  if ( (byte_43559A6 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43559A6 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_WebViewObject )
        goto LABEL_46;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             Component_WebViewObject,
                                                             (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_WebViewObject )
        goto LABEL_46;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL);
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_WebViewObject )
        goto LABEL_46;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_WebViewObject->klass[1]._1.implementedInterfaces)(
        Component_WebViewObject,
        0LL,
        1LL,
        Component_WebViewObject->klass[1]._1.interfaceOffsets);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_WebViewObject )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, item->fields.isBase, 0LL);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_WebViewObject )
        goto LABEL_46;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             Component_WebViewObject,
                                                             0LL);
      if ( !Component_WebViewObject )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)Component_WebViewObject,
        item->fields.isSwapLock != item->fields.isLock,
        0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_WebViewObject )
        goto LABEL_46;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             Component_WebViewObject,
                                                             0LL);
      if ( !Component_WebViewObject )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)Component_WebViewObject,
        item->fields.isSwapChoice != item->fields.isChoice,
        0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !Component_WebViewObject )
        goto LABEL_46;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             Component_WebViewObject,
                                                             0LL);
      if ( !Component_WebViewObject )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, item->fields.isPush, 0LL);
    }
    SupportServantListViewItemDraw__SetWarning(this, item, v14);
    v15 = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_WebViewObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, item->fields.isBase, 0LL);
        return;
      }
LABEL_46:
      sub_B7076C(Component_WebViewObject, v8);
    }
  }
}


void __fastcall SupportServantListViewItemDraw__SetItem(
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
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_43559A3 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43559A3 = 1;
  }
  if ( item && mode )
  {
    isBase = item->fields.isBase;
    servantFaceIcon = this->fields.servantFaceIcon;
    userServantEntity = item->fields.userServantEntity;
    EquipList = SupportServantListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_41;
    ServantFaceIconComponent__Set_31481732(
      servantFaceIcon,
      userServantEntity,
      EquipList,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    if ( isBase )
    {
      partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
      {
        EquipList = (System_Int64_array *)this->fields.partyIcon;
        if ( !EquipList )
          goto LABEL_41;
        FlashingIconComponent__Clear((FlashingIconComponent_o *)EquipList, 0LL);
      }
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.lockSprite;
      if ( !EquipList )
        goto LABEL_41;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0LL);
      if ( !EquipList )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)EquipList,
        item->fields.isSwapLock != item->fields.isLock,
        0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.choiceSprite;
      if ( !EquipList )
        goto LABEL_41;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0LL);
      if ( !EquipList )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)EquipList,
        item->fields.isSwapChoice != item->fields.isChoice,
        0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.pushSprite;
      if ( !EquipList )
        goto LABEL_41;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0LL);
      if ( !EquipList )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, item->fields.isPush, 0LL);
    }
    SupportServantListViewItemDraw__SetWarning(this, item, v16);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.selectObject;
      if ( EquipList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, item->fields.isBase, 0LL);
        return;
      }
LABEL_41:
      sub_B7076C(EquipList, v11);
    }
  }
}


void __fastcall SupportServantListViewItemDraw__SetWarning(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  void *maskSprite; // x0
  const MethodInfo *v7; // x1
  SupportServantListViewItemDraw_o *FriendPointBonus; // x0
  const MethodInfo *v9; // x3
  int v10; // w22
  System_String_o *v11; // x23
  float v12; // s0
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  System_String_o *v15; // x23
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s4
  float v20; // s5
  float v21; // s6
  SupportServantListViewItemDraw_WarningLabelText_o *v22; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x22
  System_String_o *v24; // x23
  SupportServantListViewItemDraw_WarningLabelText_o *v25; // x22
  System_String_o *WarningText; // x22
  bool v27; // w1
  SupportServantListViewItemDraw_WarningLabelText_o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *v35; // x20
  SupportServantListViewItemDraw_WarningLabelText_o *v36; // x22
  struct SupportServantListViewItemDraw_WarningLabelText_array *v37; // x1
  SupportServantListViewItemDraw_c *v38; // x0
  const MethodInfo *v39; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  __int64 v41; // x8
  const MethodInfo *v42; // x1
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *itemList; // x20
  SupportServantListViewItemDraw_o *v44; // x8
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *v45; // x22
  struct TweenAlpha_o *warningTween; // x20
  SupportServantListViewItemDraw_o *v47; // x8
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *v48; // x22
  struct TweenColor_o *warningTweenColor; // x20
  SupportServantListViewItemDraw_o *v50; // x8
  SupportServantListViewItemDraw_c *v51; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_43559A4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    sub_B70694(&System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&SupportServantListViewItemDraw_TypeInfo);
    sub_B70694(&SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    sub_B70694(&StringLiteral_11781/*"SELECT_FP_NUM_UP"*/);
    sub_B70694(&StringLiteral_11773/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43559A4 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_81;
  FriendPointBonus = (SupportServantListViewItemDraw_o *)SupportServantListViewItem__GetFriendPointBonus(item, v7);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v10 = (int)FriendPointBonus;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11781/*"SELECT_FP_NUM_UP"*/, 0LL);
    v12 = (double)v10 / 1000.0;
    *((float *)&methoda.return_type + 1) = v12;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&methoda.return_type + 4, v13);
    v15 = System_String__Format(v11, v14, 0LL);
    v53.fields.b = 0.0;
    v53.fields.r = 1.0;
    v53.fields.g = 1.0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_41064944(v53, v16, v17, v18, (const MethodInfo *)&methoda.name);
    v54.fields.b = 0.8;
    v54.fields.r = 1.0;
    v54.fields.g = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_41064944(v54, v19, v20, v21, &methoda);
    v22 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B70764(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    *(_QWORD *)&v55.fields.r = methoda.methodPointer;
    *(_QWORD *)&v55.fields.b = methoda.invoker_method;
    v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v22;
    SupportServantListViewItemDraw_WarningLabelText___ctor_19999484(
      v22,
      v15,
      *(UnityEngine_Color_o *)&methoda.name,
      v55,
      1.0,
      0,
      0LL);
    if ( !v5 )
      goto LABEL_81;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v5,
      v23,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
  }
  if ( item->fields.isInvalidRarity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11773/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    v25 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B70764(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v25, v24, 0.8, 1, 0LL);
    if ( !v5 )
      goto LABEL_81;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v5,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
  }
  WarningText = SupportServantListViewItemDraw__GetWarningText(FriendPointBonus, item, item->fields.isBase, v9);
  if ( System_String__IsNullOrEmpty(WarningText, 0LL) )
  {
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_81;
    maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_81;
    v27 = 0;
  }
  else
  {
    v28 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B70764(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v28, WarningText, 1.0, 0, 0LL);
    if ( !v5 )
      goto LABEL_81;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v5,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_81;
    maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_81;
    v27 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v27, 0LL);
  if ( item->fields.isInvalidRarity )
  {
    if ( !v5 )
      goto LABEL_81;
    if ( v5->fields._size == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11773/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
      v36 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B70764(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
      SupportServantListViewItemDraw_WarningLabelText___ctor(v36, v35, 0.8, 1, 0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
    }
  }
  else if ( !v5 )
  {
    goto LABEL_81;
  }
  if ( v5->fields._size < 1 )
    v37 = 0LL;
  else
    v37 = (struct SupportServantListViewItemDraw_WarningLabelText_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = v37;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.warningLabelTexts,
    (System_Int32_array **)v37,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v38 = SupportServantListViewItemDraw_TypeInfo;
  if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v38 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = v38->static_fields->itemList;
  if ( !maskSprite )
LABEL_81:
    sub_B7076C(maskSprite, v7);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)maskSprite,
    (WarBoardManager_TaskList_o *)this,
    (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (v41 = *(_QWORD *)&warningLabelTexts->max_length) == 0 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v39);
    maskSprite = this->fields.warningLabel;
    if ( maskSprite )
    {
      maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      if ( maskSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
        maskSprite = this->fields.warningLabel;
        if ( maskSprite )
        {
          UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
    goto LABEL_81;
  }
  if ( (int)v41 >= 2 )
  {
    SupportServantListViewItemDraw__WarningTweenStart(this, v39);
    maskSprite = SupportServantListViewItemDraw_TypeInfo;
    if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
      maskSprite = SupportServantListViewItemDraw_TypeInfo;
    }
    itemList = (struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *)**((_QWORD **)maskSprite + 23);
    if ( itemList )
    {
      if ( itemList->fields._size < 1 )
      {
        maskSprite = this->fields.warningTween;
        if ( !maskSprite )
          goto LABEL_81;
        UITweener__ResetToBeginning((UITweener_o *)maskSprite, 0LL);
        maskSprite = this->fields.warningTween;
        if ( !maskSprite )
          goto LABEL_81;
        UITweener__set_tweenFactor((UITweener_o *)maskSprite, 0.125, 0LL);
        maskSprite = this->fields.warningTweenColor;
        if ( !maskSprite )
          goto LABEL_81;
        UITweener__ResetToBeginning((UITweener_o *)maskSprite, 0LL);
      }
      else
      {
        if ( (*((_BYTE *)maskSprite + 307) & 4) != 0 && !*((_DWORD *)maskSprite + 56) )
        {
          j_il2cpp_runtime_class_init_0(maskSprite);
          itemList = SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
          if ( !itemList )
            goto LABEL_81;
        }
        if ( !itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v44 = itemList->fields._items->m_Items[0];
        if ( !v44 )
          goto LABEL_81;
        this->fields.warningLabelTextSync2Pattern = v44->fields.warningLabelTextSync2PatternOld;
        v45 = SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
        if ( !v45 )
          goto LABEL_81;
        warningTween = this->fields.warningTween;
        if ( !v45->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v47 = v45->fields._items->m_Items[0];
        if ( !v47 )
          goto LABEL_81;
        if ( !warningTween )
          goto LABEL_81;
        maskSprite = (void *)((__int64 (__fastcall *)(struct TweenAlpha_o *, struct TweenAlpha_o *, void *))warningTween->klass->vtable._8_SynchronizeTween.method)(
                               this->fields.warningTween,
                               v47->fields.warningTween,
                               warningTween->klass[1]._1.image);
        v48 = SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
        if ( !v48 )
          goto LABEL_81;
        warningTweenColor = this->fields.warningTweenColor;
        if ( !v48->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v50 = v48->fields._items->m_Items[0];
        if ( !v50 || !warningTweenColor )
          goto LABEL_81;
        ((void (__fastcall *)(struct TweenColor_o *, struct TweenColor_o *, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
          this->fields.warningTweenColor,
          v50->fields.warningTweenColor,
          warningTweenColor->klass[1]._1.image);
      }
      v51 = SupportServantListViewItemDraw_TypeInfo;
      if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
        v51 = SupportServantListViewItemDraw_TypeInfo;
      }
      maskSprite = v51->static_fields->itemList;
      if ( maskSprite )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)maskSprite,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__);
        goto LABEL_78;
      }
    }
    goto LABEL_81;
  }
  SupportServantListViewItemDraw__WarningTweenStop(this, v39);
LABEL_78:
  SupportServantListViewItemDraw__AdvanceWarningLabel(this, v42);
  maskSprite = this->fields.warningLabel;
  if ( !maskSprite )
    goto LABEL_81;
  maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewItemDraw__WarningTweenStart(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  SupportServantListViewItemDraw_o *v2; // x19
  struct TweenAlpha_o *warningTween; // x8
  struct TweenAlpha_o *v4; // x8
  struct TweenAlpha_o *v5; // x20
  UIWidget_o *warningLabel; // x19
  int v7; // s0

  v2 = this;
  if ( (byte_43559A8 & 1) == 0 )
  {
    this = (SupportServantListViewItemDraw_o *)sub_B70694(&SupportServantListViewItemDraw_TypeInfo);
    byte_43559A8 = 1;
  }
  warningTween = v2->fields.warningTween;
  if ( !warningTween )
    goto LABEL_13;
  warningTween->fields.from = 0.0;
  v4 = v2->fields.warningTween;
  if ( !v4 )
    goto LABEL_13;
  v4->fields.to = 1.0;
  v5 = v2->fields.warningTween;
  this = (SupportServantListViewItemDraw_o *)SupportServantListViewItemDraw_TypeInfo;
  if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
  }
  if ( !v5
    || (v5->fields.duration = SupportServantListViewItemDraw_TypeInfo->static_fields->changeTimeSecond,
        (this = (SupportServantListViewItemDraw_o *)v2->fields.warningTween) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL),
        (this = (SupportServantListViewItemDraw_o *)v2->fields.warningTween) == 0LL)
    || (UITweener__ResetToBeginning((UITweener_o *)this, 0LL),
        warningLabel = (UIWidget_o *)v2->fields.warningLabel,
        *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_clear(0LL),
        !warningLabel) )
  {
LABEL_13:
    sub_B7076C(this, method);
  }
  UIWidget__set_color(warningLabel, *(UnityEngine_Color_o *)&v7, 0LL);
}


void __fastcall SupportServantListViewItemDraw__WarningTweenStop(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct TweenAlpha_o *warningTween; // x8

  warningTween = this->fields.warningTween;
  if ( !warningTween
    || (warningTween->fields.duration = 0.0,
        (this = (SupportServantListViewItemDraw_o *)this->fields.warningTween) == 0LL) )
  {
    sub_B7076C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall SupportServantListViewItemDraw_WarningLabelText___ctor(
        SupportServantListViewItemDraw_WarningLabelText_o *this,
        System_String_o *s,
        float scaleX,
        bool isSkillInvalid,
        const MethodInfo *method)
{
  SupportServantListViewItemDraw_WarningLabelText_o *v8; // x21
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.text = s;
  v8 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v8 + 16);
  sub_B70630(v8);
  LOWORD(v8->monitor) = 0;
  white = UnityEngine_Color__get_white(0LL);
  v8->fields.top = white;
  *(UnityEngine_Color_o *)((char *)&v8->monitor + 4) = white;
  v8->fields.bottom.fields.r = scaleX;
  LOBYTE(v8->fields.bottom.fields.g) = isSkillInvalid;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewItemDraw_WarningLabelText___ctor_19999484(
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
  float a; // [xsp+4Ch] [xbp-14h]

  a = b.fields.a;
  v9 = b.fields.b;
  g = b.fields.g;
  r = b.fields.r;
  v12 = t.fields.a;
  v13 = t.fields.b;
  v14 = t.fields.g;
  v15 = t.fields.r;
  v16 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v16->fields.text = s;
  v16 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v16 + 16);
  sub_B70630(v16);
  *((float *)&v16->monitor + 1) = v15;
  *(float *)&v16->fields.text = v14;
  *((float *)&v16->fields.text + 1) = v13;
  *(float *)&v16->fields.gradation = v12;
  v16->fields.top.fields.r = r;
  v16->fields.top.fields.g = g;
  v16->fields.bottom.fields.r = scaleX;
  v16->fields.top.fields.b = v9;
  v16->fields.top.fields.a = a;
  LOWORD(v16->monitor) = 257;
  LOBYTE(v16->fields.bottom.fields.g) = isSkillInvalid;
}