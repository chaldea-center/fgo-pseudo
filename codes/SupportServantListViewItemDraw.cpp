void __fastcall SupportServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FDA0E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo, v5);
    sub_B16FFC(&SupportServantListViewItemDraw_TypeInfo, v6);
    byte_40FDA0E = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo,
                                                                                                 v1,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
  static_fields = (BattleServantConfConponent_o *)SupportServantListViewItemDraw_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
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
  __int64 v2; // x2
  SupportServantListViewItemDraw_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  int max_length; // w10
  int32_t warningLabelTextSync2Pattern; // w9
  UnityEngine_Component_o *warningLabel; // x0
  SupportServantListViewItemDraw_WarningLabelText_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v13; // x0
  UILabel_o *v14; // x0
  UILabel_o *v15; // x0
  UILabel_o *v16; // x0
  SupportServantListViewItemDraw_c *v17; // x0
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *itemList; // x22
  struct TweenColor_o *warningTweenColor; // x20
  SupportServantListViewItemDraw_o *v20; // x8
  struct TweenColor_o *v21; // x20
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  UILabel_o *v26; // x0
  float v27; // s0
  float v28; // s1
  UILabel_o *v29; // x20
  int v30; // s0
  UILabel_o *v34; // x0
  UIWidget_o *v35; // x20
  int v36; // s0
  struct TweenColor_o *v40; // x20
  float v41; // s0
  float v42; // s1
  float v43; // s2
  float v44; // s3
  TweenColor_o *v45; // x0
  _BOOL4 isSkillInvalid; // w20
  struct TweenColor_o *v47; // x21
  float v48; // s0
  float v49; // s1
  float v50; // s2
  float v51; // s3
  int32_t v52; // w8
  struct SupportServantListViewItemDraw_WarningLabelText_array *v53; // x9
  int32_t v54; // w8
  UnityEngine_Color32_o v55; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v59; // 0:x0.8
  UnityEngine_Color32_o v60; // 0:x0.8
  UnityEngine_Vector2_o v61; // 0:s0.4,4:s1.4

  v3 = this;
  if ( (byte_40FDA0C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__, v4);
    sub_B16FFC(&SupportServantListViewItemDraw_TypeInfo, v5);
    this = (SupportServantListViewItemDraw_o *)sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FDA0C = 1;
  }
  warningLabelTexts = v3->fields.warningLabelTexts;
  if ( !warningLabelTexts )
    return;
  max_length = warningLabelTexts->max_length;
  if ( max_length < 2 )
    warningLabelTextSync2Pattern = 0;
  else
    warningLabelTextSync2Pattern = v3->fields.warningLabelTextSync2Pattern;
  if ( warningLabelTextSync2Pattern >= (unsigned int)max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  warningLabel = (UnityEngine_Component_o *)v3->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_49;
  v11 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
  if ( v11 )
  {
    gameObject = UnityEngine_Component__get_gameObject(warningLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(gameObject, v11->fields.scaleX, 0LL);
    v13 = v3->fields.warningLabel;
    if ( !v13 )
      goto LABEL_49;
    UILabel__set_text(v13, v11->fields.text, 0LL);
    v14 = v3->fields.warningLabel;
    if ( !v14 )
      goto LABEL_49;
    UILabel__set_applyGradient(v14, v11->fields.gradation, 0LL);
    v15 = v3->fields.warningLabel;
    if ( !v15 )
      goto LABEL_49;
    UILabel__set_gradientTop(v15, v11->fields.top, 0LL);
    v16 = v3->fields.warningLabel;
    if ( !v16 )
      goto LABEL_49;
    UILabel__set_gradientBottom(v16, v11->fields.bottom, 0LL);
    if ( v11->fields.coloranime )
    {
      v17 = SupportServantListViewItemDraw_TypeInfo;
      if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
        v17 = SupportServantListViewItemDraw_TypeInfo;
      }
      itemList = v17->static_fields->itemList;
      if ( itemList )
      {
        if ( itemList->fields._size >= 1 )
        {
          warningTweenColor = v3->fields.warningTweenColor;
          if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v17);
            itemList = SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
            if ( !itemList )
              goto LABEL_49;
          }
          if ( !itemList->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v20 = itemList->fields._items->m_Items[0];
          if ( !v20 || !warningTweenColor )
            goto LABEL_49;
          ((void (__fastcall *)(struct TweenColor_o *, struct TweenColor_o *, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
            warningTweenColor,
            v20->fields.warningTweenColor,
            warningTweenColor->klass[1]._1.image);
        }
        v21 = v3->fields.warningTweenColor;
        p_c = (UnityEngine_Color32_o)&c;
        c.fields.rgba = 0;
        UnityEngine_Color32___ctor(p_c, 0xFFu, 0xB2u, 0x54u, 0xFFu, 0LL);
        rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
        *(UnityEngine_Color_o *)&v22 = UnityEngine_Color32__op_Implicit_40668984(rgba, 0LL);
        if ( v21 )
        {
          v21->fields.to.fields.r = v22;
          v21->fields.to.fields.g = v23;
          v21->fields.to.fields.b = v24;
          v21->fields.to.fields.a = v25;
          v26 = v3->fields.warningLabel;
          if ( v26 )
          {
            v27 = 2.0;
            goto LABEL_31;
          }
        }
      }
    }
    else
    {
      isSkillInvalid = v11->fields.isSkillInvalid;
      v47 = v3->fields.warningTweenColor;
      *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_white(0LL);
      if ( !v47 )
        goto LABEL_49;
      v47->fields.to.fields.r = v48;
      v47->fields.to.fields.g = v49;
      v47->fields.to.fields.b = v50;
      v47->fields.to.fields.a = v51;
      v26 = v3->fields.warningLabel;
      if ( !isSkillInvalid )
      {
        if ( !v26 )
          goto LABEL_49;
        v27 = 1.0;
LABEL_31:
        v28 = v27;
        UILabel__set_effectDistance(v26, *(UnityEngine_Vector2_o *)&v27, 0LL);
        v29 = v3->fields.warningLabel;
        *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_black(0LL);
        if ( !v29 )
          goto LABEL_49;
        goto LABEL_42;
      }
      if ( v26 )
      {
        v61.fields.x = 2.0;
        v61.fields.y = 2.0;
        UILabel__set_effectDistance(v26, v61, 0LL);
        v29 = v3->fields.warningLabel;
        v59 = (UnityEngine_Color32_o)&v55;
        v55.fields.rgba = 0;
        UnityEngine_Color32___ctor(v59, 0, 0, 0, 0x80u, 0LL);
        v60 = (UnityEngine_Color32_o)(unsigned int)v55.fields.rgba;
        *(UnityEngine_Color_o *)&v30 = UnityEngine_Color32__op_Implicit_40668984(v60, 0LL);
        if ( v29 )
        {
LABEL_42:
          UILabel__set_effectColor(v29, *(UnityEngine_Color_o *)&v30, 0LL);
          goto LABEL_43;
        }
      }
    }
LABEL_49:
    sub_B170D4();
  }
  UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v34 = v3->fields.warningLabel;
  if ( !v34 )
    goto LABEL_49;
  UILabel__set_applyGradient(v34, 0, 0LL);
  v35 = (UIWidget_o *)v3->fields.warningLabel;
  *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
  if ( !v35 )
    goto LABEL_49;
  UIWidget__set_color(v35, *(UnityEngine_Color_o *)&v36, 0LL);
  v40 = v3->fields.warningTweenColor;
  *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_white(0LL);
  if ( !v40 )
    goto LABEL_49;
  v40->fields.to.fields.r = v41;
  v40->fields.to.fields.g = v42;
  v40->fields.to.fields.b = v43;
  v40->fields.to.fields.a = v44;
  v45 = v3->fields.warningTweenColor;
  if ( !v45 )
    goto LABEL_49;
  TweenColor__get_value(v45, 0LL);
LABEL_43:
  v52 = v3->fields.warningLabelTextSync2Pattern;
  v53 = v3->fields.warningLabelTexts;
  v3->fields.warningLabelTextSync2PatternOld = v52;
  v54 = v52 + 1;
  v3->fields.warningLabelTextSync2Pattern = v54;
  if ( !v53 )
    goto LABEL_49;
  if ( v54 >= (signed int)v53->max_length )
    v3->fields.warningLabelTextSync2Pattern = 0;
}


System_String_o *__fastcall SupportServantListViewItemDraw__GetWarningText(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        bool isBaseSelect,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 *v13; // x8
  const MethodInfo *v14; // x1
  System_String_o *v16; // x0
  int32_t useSet; // w8
  System_String_o *v18; // x19
  Il2CppObject *v19; // x1

  if ( (byte_40FDA0A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_11584/*"SELECT_CANNOT"*/, v6);
    sub_B16FFC(&StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/, v7);
    sub_B16FFC(&StringLiteral_11594/*"SELECT_NO_SORTIE"*/, v8);
    sub_B16FFC(&StringLiteral_12499/*"SUPPORT_SELECT_USE_SUPPORT"*/, v9);
    sub_B16FFC(&StringLiteral_12449/*"SUPPORT_SELECT_ALREADY_SET"*/, v10);
    sub_B16FFC(&StringLiteral_10375/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/, v11);
    sub_B16FFC(&StringLiteral_10376/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v12);
    byte_40FDA0A = 1;
  }
  if ( !item )
    sub_B170D4();
  if ( item->fields.isPushMode )
  {
    if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v13 = &StringLiteral_11584/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v13, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
LABEL_15:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v13 = &StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/;
      return LocalizationManager__Get((System_String_o *)*v13, 0LL);
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
      v13 = &StringLiteral_10375/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
      return LocalizationManager__Get((System_String_o *)*v13, 0LL);
    }
    if ( !SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0LL;
LABEL_20:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_11594/*"SELECT_NO_SORTIE"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
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
    v13 = &StringLiteral_10376/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
  }
  if ( SupportServantListViewItem__get_IsUseServant(item, v14) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_12499/*"SUPPORT_SELECT_USE_SUPPORT"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
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
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"SUPPORT_SELECT_ALREADY_SET"*/, 0LL);
  useSet = item->fields.useSet;
  v18 = v16;
  v19 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(useSet, 0LL);
  return System_String__Format(v18, v19, 0LL);
}


void __fastcall SupportServantListViewItemDraw__OnDisable(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantListViewItemDraw_c *v4; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *itemList; // x0

  if ( (byte_40FDA07 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__, method);
    sub_B16FFC(&SupportServantListViewItemDraw_TypeInfo, v3);
    byte_40FDA07 = 1;
  }
  v4 = SupportServantListViewItemDraw_TypeInfo;
  if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v4 = SupportServantListViewItemDraw_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->static_fields->itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    itemList,
    (WarBoardManager_TaskList_o *)this,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
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
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *v9; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_o *v11; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v21; // x2
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Object_o *v24; // x21
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_40FDA0B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FDA0B = 1;
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
      v9 = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !v9 )
        goto LABEL_46;
      Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            v9,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_WebViewObject )
        goto LABEL_46;
      UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL);
      v11 = this->fields.baseButton;
      if ( !v11 )
        goto LABEL_46;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v11->klass->vtable._14_SetState.method)(
        v11,
        0LL,
        1LL,
        v11->klass->vtable._15_OnPress.methodPtr);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      v13 = this->fields.selectObject;
      if ( !v13 )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive(v13, item->fields.isBase, 0LL);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      v15 = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !v15 )
        goto LABEL_46;
      gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( !gameObject )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive(gameObject, item->fields.isSwapLock != item->fields.isLock, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      v18 = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !v18 )
        goto LABEL_46;
      v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
      if ( !v19 )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive(v19, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      v22 = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !v22 )
        goto LABEL_46;
      v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( !v23 )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive(v23, item->fields.isPush, 0LL);
    }
    SupportServantListViewItemDraw__SetWarning(this, item, v21);
    v24 = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      v25 = this->fields.selectObject;
      if ( v25 )
      {
        UnityEngine_GameObject__SetActive(v25, item->fields.isBase, 0LL);
        return;
      }
LABEL_46:
      sub_B170D4();
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
  UnityEngine_Object_o *partyIcon; // x21
  FlashingIconComponent_o *v12; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v20; // x2
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_GameObject_o *v24; // x0

  if ( (byte_40FDA08 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FDA08 = 1;
  }
  if ( item && mode )
  {
    isBase = item->fields.isBase;
    servantFaceIcon = this->fields.servantFaceIcon;
    userServantEntity = item->fields.userServantEntity;
    EquipList = SupportServantListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_41;
    ServantFaceIconComponent__Set_30706244(
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
        v12 = this->fields.partyIcon;
        if ( !v12 )
          goto LABEL_41;
        FlashingIconComponent__Clear(v12, 0LL);
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
      v14 = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !v14 )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(gameObject, item->fields.isSwapLock != item->fields.isLock, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !v17 )
        goto LABEL_41;
      v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !v18 )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(v18, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      v21 = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !v21 )
        goto LABEL_41;
      v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
      if ( !v22 )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(v22, item->fields.isPush, 0LL);
    }
    SupportServantListViewItemDraw__SetWarning(this, item, v20);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      v24 = this->fields.selectObject;
      if ( v24 )
      {
        UnityEngine_GameObject__SetActive(v24, item->fields.isBase, 0LL);
        return;
      }
LABEL_41:
      sub_B170D4();
    }
  }
}


void __fastcall SupportServantListViewItemDraw__SetWarning(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  const MethodInfo *v23; // x1
  SupportServantListViewItemDraw_o *FriendPointBonus; // x0
  const MethodInfo *v25; // x3
  int v26; // w22
  System_String_o *v27; // x23
  float v28; // s0
  Il2CppObject *v29; // x0
  System_String_o *v30; // x23
  float v31; // s4
  float v32; // s5
  float v33; // s6
  float v34; // s4
  float v35; // s5
  float v36; // s6
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  SupportServantListViewItemDraw_WarningLabelText_o *v41; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x22
  System_String_o *v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  SupportServantListViewItemDraw_WarningLabelText_o *v48; // x22
  System_String_o *WarningText; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v56; // w1
  SupportServantListViewItemDraw_WarningLabelText_o *v57; // x23
  UnityEngine_Component_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_o *v65; // x20
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  SupportServantListViewItemDraw_WarningLabelText_o *v70; // x22
  struct SupportServantListViewItemDraw_WarningLabelText_array *v71; // x1
  SupportServantListViewItemDraw_c *v72; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *itemList; // x0
  const MethodInfo *v74; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  __int64 v76; // x8
  const MethodInfo *v77; // x1
  UnityEngine_Component_o *warningLabel; // x0
  UnityEngine_GameObject_o *v79; // x0
  UILabel_o *v80; // x0
  SupportServantListViewItemDraw_c *v81; // x0
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *v82; // x20
  SupportServantListViewItemDraw_o *v83; // x8
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *v84; // x22
  struct TweenAlpha_o *v85; // x20
  SupportServantListViewItemDraw_o *v86; // x8
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *v87; // x22
  struct TweenColor_o *v88; // x20
  SupportServantListViewItemDraw_o *v89; // x8
  UITweener_o *warningTween; // x0
  UITweener_o *v91; // x0
  UITweener_o *warningTweenColor; // x0
  SupportServantListViewItemDraw_c *v93; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v94; // x0
  UnityEngine_Component_o *v95; // x0
  UnityEngine_GameObject_o *v96; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_40FDA09 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__, item);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__, v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__get_Count__,
      v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&float_TypeInfo, v16);
    sub_B16FFC(&SupportServantListViewItemDraw_TypeInfo, v17);
    sub_B16FFC(&SupportServantListViewItemDraw_WarningLabelText_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_11591/*"SELECT_FP_NUM_UP"*/, v19);
    sub_B16FFC(&StringLiteral_11583/*"SELECT_BONUS_SKILL_INVALID"*/, v20);
    sub_B16FFC(&StringLiteral_1/*""*/, v21);
    byte_40FDA09 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo,
                                                                                                  item,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_81;
  FriendPointBonus = (SupportServantListViewItemDraw_o *)SupportServantListViewItem__GetFriendPointBonus(item, v23);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v26 = (int)FriendPointBonus;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11591/*"SELECT_FP_NUM_UP"*/, 0LL);
    v28 = (double)v26 / 1000.0;
    *((float *)&methoda.return_type + 1) = v28;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&methoda.return_type + 4);
    v30 = System_String__Format(v27, v29, 0LL);
    v98.fields.b = 0.0;
    v98.fields.r = 1.0;
    v98.fields.g = 1.0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_40666012(v98, v31, v32, v33, (const MethodInfo *)&methoda.name);
    v99.fields.b = 0.8;
    v99.fields.r = 1.0;
    v99.fields.g = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_40666012(v99, v34, v35, v36, &methoda);
    v41 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B170CC(
                                                                 SupportServantListViewItemDraw_WarningLabelText_TypeInfo,
                                                                 v37,
                                                                 v38,
                                                                 v39,
                                                                 v40);
    *(_QWORD *)&v100.fields.r = methoda.methodPointer;
    *(_QWORD *)&v100.fields.b = methoda.invoker_method;
    v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)v41;
    SupportServantListViewItemDraw_WarningLabelText___ctor_20333656(
      v41,
      v30,
      *(UnityEngine_Color_o *)&methoda.name,
      v100,
      1.0,
      0,
      0LL);
    if ( !v22 )
      goto LABEL_81;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v22,
      v42,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
  }
  if ( item->fields.isInvalidRarity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11583/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    v48 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B170CC(
                                                                 SupportServantListViewItemDraw_WarningLabelText_TypeInfo,
                                                                 v44,
                                                                 v45,
                                                                 v46,
                                                                 v47);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v48, v43, 0.8, 1, 0LL);
    if ( !v22 )
      goto LABEL_81;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v22,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
  }
  WarningText = SupportServantListViewItemDraw__GetWarningText(FriendPointBonus, item, item->fields.isBase, v25);
  if ( System_String__IsNullOrEmpty(WarningText, 0LL) )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_81;
    gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !gameObject )
      goto LABEL_81;
    v56 = 0;
  }
  else
  {
    v57 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B170CC(
                                                                 SupportServantListViewItemDraw_WarningLabelText_TypeInfo,
                                                                 v50,
                                                                 v51,
                                                                 v52,
                                                                 v53);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v57, WarningText, 1.0, 0, 0LL);
    if ( !v22 )
      goto LABEL_81;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v22,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
    v58 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v58 )
      goto LABEL_81;
    gameObject = UnityEngine_Component__get_gameObject(v58, 0LL);
    if ( !gameObject )
      goto LABEL_81;
    v56 = 1;
  }
  UnityEngine_GameObject__SetActive(gameObject, v56, 0LL);
  if ( item->fields.isInvalidRarity )
  {
    if ( !v22 )
      goto LABEL_81;
    if ( v22->fields._size == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11583/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
      v70 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B170CC(
                                                                   SupportServantListViewItemDraw_WarningLabelText_TypeInfo,
                                                                   v66,
                                                                   v67,
                                                                   v68,
                                                                   v69);
      SupportServantListViewItemDraw_WarningLabelText___ctor(v70, v65, 0.8, 1, 0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v22,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
    }
  }
  else if ( !v22 )
  {
    goto LABEL_81;
  }
  if ( v22->fields._size < 1 )
    v71 = 0LL;
  else
    v71 = (struct SupportServantListViewItemDraw_WarningLabelText_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = v71;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.warningLabelTexts,
    (System_Int32_array **)v71,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v72 = SupportServantListViewItemDraw_TypeInfo;
  if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v72 = SupportServantListViewItemDraw_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v72->static_fields->itemList;
  if ( !itemList )
LABEL_81:
    sub_B170D4();
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    itemList,
    (WarBoardManager_TaskList_o *)this,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (v76 = *(_QWORD *)&warningLabelTexts->max_length) == 0 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v74);
    warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( warningLabel )
    {
      v79 = UnityEngine_Component__get_gameObject(warningLabel, 0LL);
      if ( v79 )
      {
        UnityEngine_GameObject__SetActive(v79, 0, 0LL);
        v80 = this->fields.warningLabel;
        if ( v80 )
        {
          UILabel__set_text(v80, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
    goto LABEL_81;
  }
  if ( (int)v76 >= 2 )
  {
    SupportServantListViewItemDraw__WarningTweenStart(this, v74);
    v81 = SupportServantListViewItemDraw_TypeInfo;
    if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
      v81 = SupportServantListViewItemDraw_TypeInfo;
    }
    v82 = v81->static_fields->itemList;
    if ( v82 )
    {
      if ( v82->fields._size < 1 )
      {
        warningTween = (UITweener_o *)this->fields.warningTween;
        if ( !warningTween )
          goto LABEL_81;
        UITweener__ResetToBeginning(warningTween, 0LL);
        v91 = (UITweener_o *)this->fields.warningTween;
        if ( !v91 )
          goto LABEL_81;
        UITweener__set_tweenFactor(v91, 0.125, 0LL);
        warningTweenColor = (UITweener_o *)this->fields.warningTweenColor;
        if ( !warningTweenColor )
          goto LABEL_81;
        UITweener__ResetToBeginning(warningTweenColor, 0LL);
      }
      else
      {
        if ( (BYTE3(v81->vtable._0_Equals.methodPtr) & 4) != 0 && !v81->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v81);
          v82 = SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
          if ( !v82 )
            goto LABEL_81;
        }
        if ( !v82->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v83 = v82->fields._items->m_Items[0];
        if ( !v83 )
          goto LABEL_81;
        this->fields.warningLabelTextSync2Pattern = v83->fields.warningLabelTextSync2PatternOld;
        v84 = SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
        if ( !v84 )
          goto LABEL_81;
        v85 = this->fields.warningTween;
        if ( !v84->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v86 = v84->fields._items->m_Items[0];
        if ( !v86 )
          goto LABEL_81;
        if ( !v85 )
          goto LABEL_81;
        ((void (__fastcall *)(struct TweenAlpha_o *, struct TweenAlpha_o *, void *))v85->klass->vtable._8_SynchronizeTween.method)(
          this->fields.warningTween,
          v86->fields.warningTween,
          v85->klass[1]._1.image);
        v87 = SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
        if ( !v87 )
          goto LABEL_81;
        v88 = this->fields.warningTweenColor;
        if ( !v87->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v89 = v87->fields._items->m_Items[0];
        if ( !v89 || !v88 )
          goto LABEL_81;
        ((void (__fastcall *)(struct TweenColor_o *, struct TweenColor_o *, void *))v88->klass->vtable._8_SynchronizeTween.method)(
          this->fields.warningTweenColor,
          v89->fields.warningTweenColor,
          v88->klass[1]._1.image);
      }
      v93 = SupportServantListViewItemDraw_TypeInfo;
      if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
        v93 = SupportServantListViewItemDraw_TypeInfo;
      }
      v94 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v93->static_fields->itemList;
      if ( v94 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v94,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__);
        goto LABEL_78;
      }
    }
    goto LABEL_81;
  }
  SupportServantListViewItemDraw__WarningTweenStop(this, v74);
LABEL_78:
  SupportServantListViewItemDraw__AdvanceWarningLabel(this, v77);
  v95 = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !v95 )
    goto LABEL_81;
  v96 = UnityEngine_Component__get_gameObject(v95, 0LL);
  if ( !v96 )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive(v96, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewItemDraw__WarningTweenStart(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct TweenAlpha_o *warningTween; // x8
  struct TweenAlpha_o *v4; // x8
  struct TweenAlpha_o *v5; // x20
  UnityEngine_Behaviour_o *v6; // x0
  UITweener_o *v7; // x0
  UIWidget_o *warningLabel; // x19
  int v9; // s0

  if ( (byte_40FDA0D & 1) == 0 )
  {
    sub_B16FFC(&SupportServantListViewItemDraw_TypeInfo, method);
    byte_40FDA0D = 1;
  }
  warningTween = this->fields.warningTween;
  if ( !warningTween )
    goto LABEL_13;
  warningTween->fields.from = 0.0;
  v4 = this->fields.warningTween;
  if ( !v4 )
    goto LABEL_13;
  v4->fields.to = 1.0;
  v5 = this->fields.warningTween;
  if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
  }
  if ( !v5
    || (v5->fields.duration = SupportServantListViewItemDraw_TypeInfo->static_fields->changeTimeSecond,
        (v6 = (UnityEngine_Behaviour_o *)this->fields.warningTween) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(v6, 1, 0LL), (v7 = (UITweener_o *)this->fields.warningTween) == 0LL)
    || (UITweener__ResetToBeginning(v7, 0LL),
        warningLabel = (UIWidget_o *)this->fields.warningLabel,
        *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_clear(0LL),
        !warningLabel) )
  {
LABEL_13:
    sub_B170D4();
  }
  UIWidget__set_color(warningLabel, *(UnityEngine_Color_o *)&v9, 0LL);
}


void __fastcall SupportServantListViewItemDraw__WarningTweenStop(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct TweenAlpha_o *warningTween; // x8
  UnityEngine_Behaviour_o *v3; // x0

  warningTween = this->fields.warningTween;
  if ( !warningTween
    || (warningTween->fields.duration = 0.0, (v3 = (UnityEngine_Behaviour_o *)this->fields.warningTween) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(v3, 0, 0LL);
}


void __fastcall SupportServantListViewItemDraw_WarningLabelText___ctor(
        SupportServantListViewItemDraw_WarningLabelText_o *this,
        System_String_o *s,
        float scaleX,
        bool isSkillInvalid,
        const MethodInfo *method)
{
  SupportServantListViewItemDraw_WarningLabelText_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.text = s;
  v8 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v8 + 16);
  sub_B16F98((BattleServantConfConponent_o *)v8, (System_Int32_array **)s, v9, v10, v11, v12, v13, v14);
  LOWORD(v8->monitor) = 0;
  white = UnityEngine_Color__get_white(0LL);
  v8->fields.top = white;
  *(UnityEngine_Color_o *)((char *)&v8->monitor + 4) = white;
  v8->fields.bottom.fields.r = scaleX;
  LOBYTE(v8->fields.bottom.fields.g) = isSkillInvalid;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewItemDraw_WarningLabelText___ctor_20333656(
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
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
  sub_B16F98((BattleServantConfConponent_o *)v16, (System_Int32_array **)s, v17, v18, v19, v20, v21, v22);
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