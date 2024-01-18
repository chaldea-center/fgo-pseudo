void __fastcall SupportServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418B32B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo, v2);
    sub_B2C35C(&SupportServantListViewItemDraw_TypeInfo, v3);
    byte_418B32B = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
  static_fields = (BattleServantConfConponent_o *)SupportServantListViewItemDraw_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  int max_length; // w10
  int32_t warningLabelTextSync2Pattern; // w9
  SupportServantListViewItemDraw_c *warningLabel; // x0
  SupportServantListViewItemDraw_WarningLabelText_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *itemList; // x22
  struct TweenColor_o *warningTweenColor; // x20
  SupportServantListViewItemDraw_o *v14; // x8
  struct TweenColor_o *v15; // x20
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s3
  float v20; // s0
  float v21; // s1
  UILabel_o *v22; // x20
  int v23; // s0
  UIWidget_o *v27; // x20
  int v28; // s0
  struct TweenColor_o *v32; // x20
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s3
  _BOOL4 isSkillInvalid; // w20
  struct TweenColor_o *v38; // x21
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // s3
  int32_t v43; // w8
  struct SupportServantListViewItemDraw_WarningLabelText_array *v44; // x9
  int32_t v45; // w8
  __int64 v46; // x0
  UnityEngine_Color32_o v47; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v51; // 0:x0.8
  UnityEngine_Color32_o v52; // 0:x0.8
  UnityEngine_Vector2_o v53; // 0:s0.4,4:s1.4

  v2 = this;
  if ( (byte_418B329 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__, v3);
    sub_B2C35C(&SupportServantListViewItemDraw_TypeInfo, v4);
    this = (SupportServantListViewItemDraw_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418B329 = 1;
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
    v46 = sub_B2C460(this);
    sub_B2C400(v46, 0LL);
  }
  warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_49;
  v10 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
  if ( v10 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)warningLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(gameObject, v10->fields.scaleX, 0LL);
    warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_49;
    UILabel__set_text((UILabel_o *)warningLabel, v10->fields.text, 0LL);
    warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_49;
    UILabel__set_applyGradient((UILabel_o *)warningLabel, v10->fields.gradation, 0LL);
    warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_49;
    UILabel__set_gradientTop((UILabel_o *)warningLabel, v10->fields.top, 0LL);
    warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_49;
    UILabel__set_gradientBottom((UILabel_o *)warningLabel, v10->fields.bottom, 0LL);
    if ( v10->fields.coloranime )
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v14 = itemList->fields._items->m_Items[0];
          if ( !v14 || !warningTweenColor )
            goto LABEL_49;
          ((void (__fastcall *)(struct TweenColor_o *, struct TweenColor_o *, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
            warningTweenColor,
            v14->fields.warningTweenColor,
            warningTweenColor->klass[1]._1.image);
        }
        v15 = v2->fields.warningTweenColor;
        p_c = (UnityEngine_Color32_o)&c;
        c.fields.rgba = 0;
        UnityEngine_Color32___ctor(p_c, 0xFFu, 0xB2u, 0x54u, 0xFFu, 0LL);
        rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
        *(UnityEngine_Color_o *)&v16 = UnityEngine_Color32__op_Implicit_40636156(rgba, 0LL);
        if ( v15 )
        {
          v15->fields.to.fields.r = v16;
          v15->fields.to.fields.g = v17;
          v15->fields.to.fields.b = v18;
          v15->fields.to.fields.a = v19;
          warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
          if ( warningLabel )
          {
            v20 = 2.0;
            goto LABEL_31;
          }
        }
      }
    }
    else
    {
      isSkillInvalid = v10->fields.isSkillInvalid;
      v38 = v2->fields.warningTweenColor;
      *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
      if ( !v38 )
        goto LABEL_49;
      v38->fields.to.fields.r = v39;
      v38->fields.to.fields.g = v40;
      v38->fields.to.fields.b = v41;
      v38->fields.to.fields.a = v42;
      warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
      if ( !isSkillInvalid )
      {
        if ( !warningLabel )
          goto LABEL_49;
        v20 = 1.0;
LABEL_31:
        v21 = v20;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, *(UnityEngine_Vector2_o *)&v20, 0LL);
        v22 = v2->fields.warningLabel;
        *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_black(0LL);
        if ( !v22 )
          goto LABEL_49;
        goto LABEL_42;
      }
      if ( warningLabel )
      {
        v53.fields.x = 2.0;
        v53.fields.y = 2.0;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, v53, 0LL);
        v22 = v2->fields.warningLabel;
        v51 = (UnityEngine_Color32_o)&v47;
        v47.fields.rgba = 0;
        UnityEngine_Color32___ctor(v51, 0, 0, 0, 0x80u, 0LL);
        v52 = (UnityEngine_Color32_o)(unsigned int)v47.fields.rgba;
        *(UnityEngine_Color_o *)&v23 = UnityEngine_Color32__op_Implicit_40636156(v52, 0LL);
        if ( v22 )
        {
LABEL_42:
          UILabel__set_effectColor(v22, *(UnityEngine_Color_o *)&v23, 0LL);
          goto LABEL_43;
        }
      }
    }
LABEL_49:
    sub_B2C434(warningLabel, method);
  }
  UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_49;
  UILabel__set_applyGradient((UILabel_o *)warningLabel, 0, 0LL);
  v27 = (UIWidget_o *)v2->fields.warningLabel;
  *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
  if ( !v27 )
    goto LABEL_49;
  UIWidget__set_color(v27, *(UnityEngine_Color_o *)&v28, 0LL);
  v32 = v2->fields.warningTweenColor;
  *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
  if ( !v32 )
    goto LABEL_49;
  v32->fields.to.fields.r = v33;
  v32->fields.to.fields.g = v34;
  v32->fields.to.fields.b = v35;
  v32->fields.to.fields.a = v36;
  warningLabel = (SupportServantListViewItemDraw_c *)v2->fields.warningTweenColor;
  if ( !warningLabel )
    goto LABEL_49;
  TweenColor__get_value((TweenColor_o *)warningLabel, 0LL);
LABEL_43:
  v43 = v2->fields.warningLabelTextSync2Pattern;
  v44 = v2->fields.warningLabelTexts;
  v2->fields.warningLabelTextSync2PatternOld = v43;
  v45 = v43 + 1;
  v2->fields.warningLabelTextSync2Pattern = v45;
  if ( !v44 )
    goto LABEL_49;
  if ( v45 >= (signed int)v44->max_length )
    v2->fields.warningLabelTextSync2Pattern = 0;
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

  if ( (byte_418B327 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&StringLiteral_11620/*"SELECT_CANNOT"*/, v6);
    sub_B2C35C(&StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/, v7);
    sub_B2C35C(&StringLiteral_11630/*"SELECT_NO_SORTIE"*/, v8);
    sub_B2C35C(&StringLiteral_12555/*"SUPPORT_SELECT_USE_SUPPORT"*/, v9);
    sub_B2C35C(&StringLiteral_12505/*"SUPPORT_SELECT_ALREADY_SET"*/, v10);
    sub_B2C35C(&StringLiteral_10408/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/, v11);
    this = (SupportServantListViewItemDraw_o *)sub_B2C35C(&StringLiteral_10409/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v12);
    byte_418B327 = 1;
  }
  if ( !item )
    sub_B2C434(this, item);
  if ( item->fields.isPushMode )
  {
    if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v13 = &StringLiteral_11620/*"SELECT_CANNOT"*/;
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
      v13 = &StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/;
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
      v13 = &StringLiteral_10408/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
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
    v13 = &StringLiteral_11630/*"SELECT_NO_SORTIE"*/;
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
    v13 = &StringLiteral_10409/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
  }
  if ( SupportServantListViewItem__get_IsUseServant(item, v14) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_12555/*"SUPPORT_SELECT_USE_SUPPORT"*/;
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
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12505/*"SUPPORT_SELECT_ALREADY_SET"*/, 0LL);
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

  if ( (byte_418B324 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__, method);
    sub_B2C35C(&SupportServantListViewItemDraw_TypeInfo, v3);
    byte_418B324 = 1;
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
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    itemList,
    (WarBoardManager_TaskList_o *)this,
    (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
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
  __int64 v9; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *v16; // x21

  if ( (byte_418B328 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418B328 = 1;
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
                                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    SupportServantListViewItemDraw__SetWarning(this, item, v15);
    v16 = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_WebViewObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, item->fields.isBase, 0LL);
        return;
      }
LABEL_46:
      sub_B2C434(Component_WebViewObject, v9);
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

  if ( (byte_418B325 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_418B325 = 1;
  }
  if ( item && mode )
  {
    isBase = item->fields.isBase;
    servantFaceIcon = this->fields.servantFaceIcon;
    userServantEntity = item->fields.userServantEntity;
    EquipList = SupportServantListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_41;
    ServantFaceIconComponent__Set_30793916(
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
      sub_B2C434(EquipList, v11);
    }
  }
}


void __fastcall SupportServantListViewItemDraw__SetWarning(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  void *maskSprite; // x0
  const MethodInfo *v22; // x1
  SupportServantListViewItemDraw_o *FriendPointBonus; // x0
  const MethodInfo *v24; // x3
  int v25; // w22
  System_String_o *v26; // x23
  float v27; // s0
  Il2CppObject *v28; // x0
  System_String_o *v29; // x23
  float v30; // s4
  float v31; // s5
  float v32; // s6
  float v33; // s4
  float v34; // s5
  float v35; // s6
  SupportServantListViewItemDraw_WarningLabelText_o *v36; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x22
  System_String_o *v38; // x23
  SupportServantListViewItemDraw_WarningLabelText_o *v39; // x22
  System_String_o *WarningText; // x22
  bool v41; // w1
  SupportServantListViewItemDraw_WarningLabelText_o *v42; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_o *v49; // x20
  SupportServantListViewItemDraw_WarningLabelText_o *v50; // x22
  struct SupportServantListViewItemDraw_WarningLabelText_array *v51; // x1
  SupportServantListViewItemDraw_c *v52; // x0
  const MethodInfo *v53; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  __int64 v55; // x8
  const MethodInfo *v56; // x1
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *itemList; // x20
  SupportServantListViewItemDraw_o *v58; // x8
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *v59; // x22
  struct TweenAlpha_o *warningTween; // x20
  SupportServantListViewItemDraw_o *v61; // x8
  struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *v62; // x22
  struct TweenColor_o *warningTweenColor; // x20
  SupportServantListViewItemDraw_o *v64; // x8
  SupportServantListViewItemDraw_c *v65; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_418B326 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__, item);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&float_TypeInfo, v14);
    sub_B2C35C(&SupportServantListViewItemDraw_TypeInfo, v15);
    sub_B2C35C(&SupportServantListViewItemDraw_WarningLabelText_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_11627/*"SELECT_FP_NUM_UP"*/, v17);
    sub_B2C35C(&StringLiteral_11619/*"SELECT_BONUS_SKILL_INVALID"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    byte_418B326 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_81;
  FriendPointBonus = (SupportServantListViewItemDraw_o *)SupportServantListViewItem__GetFriendPointBonus(item, v22);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v25 = (int)FriendPointBonus;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11627/*"SELECT_FP_NUM_UP"*/, 0LL);
    v27 = (double)v25 / 1000.0;
    *((float *)&methoda.return_type + 1) = v27;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&methoda.return_type + 4);
    v29 = System_String__Format(v26, v28, 0LL);
    v67.fields.b = 0.0;
    v67.fields.r = 1.0;
    v67.fields.g = 1.0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_40633184(v67, v30, v31, v32, (const MethodInfo *)&methoda.name);
    v68.fields.b = 0.8;
    v68.fields.r = 1.0;
    v68.fields.g = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_40633184(v68, v33, v34, v35, &methoda);
    v36 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B2C42C(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    *(_QWORD *)&v69.fields.r = methoda.methodPointer;
    *(_QWORD *)&v69.fields.b = methoda.invoker_method;
    v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)v36;
    SupportServantListViewItemDraw_WarningLabelText___ctor_18924532(
      v36,
      v29,
      *(UnityEngine_Color_o *)&methoda.name,
      v69,
      1.0,
      0,
      0LL);
    if ( !v20 )
      goto LABEL_81;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      v37,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
  }
  if ( item->fields.isInvalidRarity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11619/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    v39 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B2C42C(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v39, v38, 0.8, 1, 0LL);
    if ( !v20 )
      goto LABEL_81;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
  }
  WarningText = SupportServantListViewItemDraw__GetWarningText(FriendPointBonus, item, item->fields.isBase, v24);
  if ( System_String__IsNullOrEmpty(WarningText, 0LL) )
  {
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_81;
    maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_81;
    v41 = 0;
  }
  else
  {
    v42 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B2C42C(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v42, WarningText, 1.0, 0, 0LL);
    if ( !v20 )
      goto LABEL_81;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_81;
    maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_81;
    v41 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v41, 0LL);
  if ( item->fields.isInvalidRarity )
  {
    if ( !v20 )
      goto LABEL_81;
    if ( v20->fields._size == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11619/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
      v50 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_B2C42C(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
      SupportServantListViewItemDraw_WarningLabelText___ctor(v50, v49, 0.8, 1, 0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__);
    }
  }
  else if ( !v20 )
  {
    goto LABEL_81;
  }
  if ( v20->fields._size < 1 )
    v51 = 0LL;
  else
    v51 = (struct SupportServantListViewItemDraw_WarningLabelText_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = v51;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.warningLabelTexts,
    (System_Int32_array **)v51,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v52 = SupportServantListViewItemDraw_TypeInfo;
  if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v52 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = v52->static_fields->itemList;
  if ( !maskSprite )
LABEL_81:
    sub_B2C434(maskSprite, v22);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)maskSprite,
    (WarBoardManager_TaskList_o *)this,
    (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (v55 = *(_QWORD *)&warningLabelTexts->max_length) == 0 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v53);
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
  if ( (int)v55 >= 2 )
  {
    SupportServantListViewItemDraw__WarningTweenStart(this, v53);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v58 = itemList->fields._items->m_Items[0];
        if ( !v58 )
          goto LABEL_81;
        this->fields.warningLabelTextSync2Pattern = v58->fields.warningLabelTextSync2PatternOld;
        v59 = SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
        if ( !v59 )
          goto LABEL_81;
        warningTween = this->fields.warningTween;
        if ( !v59->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v61 = v59->fields._items->m_Items[0];
        if ( !v61 )
          goto LABEL_81;
        if ( !warningTween )
          goto LABEL_81;
        maskSprite = (void *)((__int64 (__fastcall *)(struct TweenAlpha_o *, struct TweenAlpha_o *, void *))warningTween->klass->vtable._8_SynchronizeTween.method)(
                               this->fields.warningTween,
                               v61->fields.warningTween,
                               warningTween->klass[1]._1.image);
        v62 = SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
        if ( !v62 )
          goto LABEL_81;
        warningTweenColor = this->fields.warningTweenColor;
        if ( !v62->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v64 = v62->fields._items->m_Items[0];
        if ( !v64 || !warningTweenColor )
          goto LABEL_81;
        ((void (__fastcall *)(struct TweenColor_o *, struct TweenColor_o *, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
          this->fields.warningTweenColor,
          v64->fields.warningTweenColor,
          warningTweenColor->klass[1]._1.image);
      }
      v65 = SupportServantListViewItemDraw_TypeInfo;
      if ( (BYTE3(SupportServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
        v65 = SupportServantListViewItemDraw_TypeInfo;
      }
      maskSprite = v65->static_fields->itemList;
      if ( maskSprite )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)maskSprite,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__);
        goto LABEL_78;
      }
    }
    goto LABEL_81;
  }
  SupportServantListViewItemDraw__WarningTweenStop(this, v53);
LABEL_78:
  SupportServantListViewItemDraw__AdvanceWarningLabel(this, v56);
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
  if ( (byte_418B32A & 1) == 0 )
  {
    this = (SupportServantListViewItemDraw_o *)sub_B2C35C(&SupportServantListViewItemDraw_TypeInfo, method);
    byte_418B32A = 1;
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
  sub_B2C2F8(v8, s);
  LOWORD(v8->monitor) = 0;
  white = UnityEngine_Color__get_white(0LL);
  v8->fields.top = white;
  *(UnityEngine_Color_o *)((char *)&v8->monitor + 4) = white;
  v8->fields.bottom.fields.r = scaleX;
  LOBYTE(v8->fields.bottom.fields.g) = isSkillInvalid;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewItemDraw_WarningLabelText___ctor_18924532(
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
  sub_B2C2F8(v16, s);
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