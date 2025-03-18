void __fastcall RecommendSupportServantSelectListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C1E10B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw___ctor__, v1);
    sub_1C3B764(&System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__TypeInfo, v2);
    sub_1C3B764(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v3);
    byte_4C1E10B = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw___ctor__);
  RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields->ItemList = (struct System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__o *)v4;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall RecommendSupportServantSelectListViewItemDraw___ctor(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewItemDraw__AdvanceWarningLabel(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItemDraw_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  int max_length; // w10
  __int64 warningLabelTextSync2Pattern; // x9
  void *warningLabel; // x0
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *ItemList; // x8
  struct TweenColor_o *v13; // x20
  struct TweenColor_o *v14; // x8
  float v15; // s0
  float v16; // s1
  int v17; // s0
  int v18; // s1
  int v19; // s2
  int v20; // s3
  struct TweenColor_o *warningTweenColor; // x8
  struct TweenColor_o *v27; // x8
  _BOOL4 isSkillInvalid; // w9
  int32_t v30; // w10
  struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *v31; // x9
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C1E10A & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Count__,
      method);
    sub_1C3B764(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__, v3);
    sub_1C3B764(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v4);
    this = (RecommendSupportServantSelectListViewItemDraw_o *)sub_1C3B764(&StringLiteral_1/*""*/, v5);
    byte_4C1E10A = 1;
  }
  warningLabelTexts = v2->fields.warningLabelTexts;
  if ( warningLabelTexts )
  {
    max_length = warningLabelTexts->max_length;
    if ( max_length < 2 )
      warningLabelTextSync2Pattern = 0LL;
    else
      warningLabelTextSync2Pattern = v2->fields.warningLabelTextSync2Pattern;
    if ( (unsigned int)warningLabelTextSync2Pattern >= max_length )
      sub_1C3B9C8(this, method);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    v10 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
    if ( !v10 )
    {
      UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_45;
      UILabel__set_applyGradient((UILabel_o *)warningLabel, 0, 0LL);
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_45;
      v33.fields.r = 1.0;
      v33.fields.g = 1.0;
      v33.fields.b = 1.0;
      v33.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)warningLabel, v33, 0LL);
      warningTweenColor = v2->fields.warningTweenColor;
      if ( !warningTweenColor )
        goto LABEL_45;
      __asm { FMOV            V0.4S, #1.0 }
      warningTweenColor->fields.to = _Q0;
      goto LABEL_39;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)warningLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(gameObject, v10->fields.scale, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)warningLabel, v10->fields.text, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    UILabel__set_applyGradient((UILabel_o *)warningLabel, v10->fields.gradation, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    UILabel__set_gradientTop((UILabel_o *)warningLabel, v10->fields.top, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    UILabel__set_gradientBottom((UILabel_o *)warningLabel, v10->fields.bottom, 0LL);
    if ( v10->fields.colorAnime )
    {
      warningLabel = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
      if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
        warningLabel = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
      }
      ItemList = (System_Collections_Generic_List_object__o *)**((_QWORD **)warningLabel + 23);
      if ( !ItemList )
        goto LABEL_45;
      if ( ItemList->fields._size >= 1 )
      {
        v13 = v2->fields.warningTweenColor;
        if ( !*((_DWORD *)warningLabel + 56) )
        {
          j_il2cpp_runtime_class_init_0(warningLabel);
          ItemList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields->ItemList;
          if ( !ItemList )
            goto LABEL_45;
        }
        warningLabel = System_Collections_Generic_List_object___get_Item(
                         ItemList,
                         0,
                         (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
        if ( !warningLabel || !v13 )
          goto LABEL_45;
        warningLabel = (void *)((__int64 (__fastcall *)(struct TweenColor_o *, _QWORD, void *))v13->klass->vtable._8_SynchronizeTween.method)(
                                 v13,
                                 *((_QWORD *)warningLabel + 14),
                                 v13->klass[1]._1.image);
      }
      v14 = v2->fields.warningTweenColor;
      if ( !v14 )
        goto LABEL_45;
      v14->fields.to = (struct UnityEngine_Color_o)xmmword_C0DAF0;
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_45;
      v15 = 2.0;
      v16 = 2.0;
    }
    else
    {
      v27 = v2->fields.warningTweenColor;
      if ( !v27 )
        goto LABEL_45;
      __asm { FMOV            V0.4S, #1.0 }
      isSkillInvalid = v10->fields.isSkillInvalid;
      v27->fields.to = _Q0;
      warningLabel = v2->fields.warningLabel;
      if ( isSkillInvalid )
      {
        if ( !warningLabel )
          goto LABEL_45;
        v32.fields.x = 2.0;
        v32.fields.y = 2.0;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, v32, 0LL);
        warningLabel = v2->fields.warningLabel;
        if ( !warningLabel )
          goto LABEL_45;
        v20 = 1056997505;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        goto LABEL_38;
      }
      if ( !warningLabel )
        goto LABEL_45;
      v15 = 1.0;
      v16 = 1.0;
    }
    UILabel__set_effectDistance((UILabel_o *)warningLabel, *(UnityEngine_Vector2_o *)&v15, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 1.0;
LABEL_38:
    UILabel__set_effectColor((UILabel_o *)warningLabel, *(UnityEngine_Color_o *)&v17, 0LL);
LABEL_39:
    v30 = v2->fields.warningLabelTextSync2Pattern;
    v31 = v2->fields.warningLabelTexts;
    v2->fields.warningLabelTextSync2Pattern = v30 + 1;
    v2->fields.warningLabelTextSync2PatternOld = v30;
    if ( v31 )
    {
      if ( v30 + 1 >= (signed int)v31->max_length )
        v2->fields.warningLabelTextSync2Pattern = 0;
      return;
    }
LABEL_45:
    sub_1C3B9C0(warningLabel, method);
  }
}


void __fastcall RecommendSupportServantSelectListViewItemDraw__Awake(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall RecommendSupportServantSelectListViewItemDraw__GetWarningText(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        RecommendSupportServantSelectListViewItem_o *item,
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
  __int64 v13; // x1
  __int64 *v14; // x8
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  System_String_o *v18; // x0
  int32_t UseSet_k__BackingField; // w8
  System_String_o *v20; // x19
  Il2CppObject *v21; // x1

  if ( (byte_4C1E108 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, item);
    sub_1C3B764(&StringLiteral_11731/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/, v6);
    sub_1C3B764(&StringLiteral_10484/*"PreserveSig"*/, v7);
    sub_1C3B764(&StringLiteral_11755/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, v8);
    sub_1C3B764(&StringLiteral_11742/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/, v9);
    sub_1C3B764(&StringLiteral_12743/*"State not in FSM!"*/, v10);
    sub_1C3B764(&StringLiteral_12693/*"SrareTreasureGet"*/, v11);
    sub_1C3B764(&StringLiteral_10532/*"Protocol family not supported"*/, v12);
    this = (RecommendSupportServantSelectListViewItemDraw_o *)sub_1C3B764(&StringLiteral_10533/*"Protocol not supported"*/, v13);
    byte_4C1E108 = 1;
  }
  if ( !item )
    sub_1C3B9C0(this, item);
  if ( item->fields._IsPushMode_k__BackingField )
  {
    if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_11731/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    if ( item->fields._IsEventJoin_k__BackingField )
    {
LABEL_14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_11755/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    return 0LL;
  }
  if ( item->fields._IsBase_k__BackingField )
  {
    if ( !isBaseSelect )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_10532/*"Protocol family not supported"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    if ( !RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0LL;
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_11742/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/;
    return LocalizationManager__Get((System_String_o *)*v14, 0LL);
  }
  if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_18;
  if ( item->fields._IsSame_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_10533/*"Protocol not supported"*/;
    return LocalizationManager__Get((System_String_o *)*v14, 0LL);
  }
  if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(item, v15) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_12743/*"State not in FSM!"*/;
    return LocalizationManager__Get((System_String_o *)*v14, 0LL);
  }
  if ( item->fields._IsEventJoin_k__BackingField )
    goto LABEL_14;
  if ( !item->fields._IsUseInSet_k__BackingField )
  {
    if ( RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(item, v16) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_10484/*"PreserveSig"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    return 0LL;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12693/*"SrareTreasureGet"*/, 0LL);
  UseSet_k__BackingField = item->fields._UseSet_k__BackingField;
  v20 = v18;
  v21 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(UseSet_k__BackingField, 0LL);
  return System_String__Format(v20, v21, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItemDraw__OnDisable(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RecommendSupportServantSelectListViewItemDraw_c *v4; // x0
  System_Collections_Generic_List_object__o *ItemList; // x0

  if ( (byte_4C1E105 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__, method);
    sub_1C3B764(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v3);
    byte_4C1E105 = 1;
  }
  v4 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v4 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  ItemList = (System_Collections_Generic_List_object__o *)v4->static_fields->ItemList;
  if ( !ItemList )
    sub_1C3B9C0(0LL, method);
  System_Collections_Generic_List_object___Remove(
    ItemList,
    (Il2CppObject *)this,
    (const MethodInfo_368D194 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__);
}


void __fastcall RecommendSupportServantSelectListViewItemDraw__OnFinishWarningAnime(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  RecommendSupportServantSelectListViewItemDraw__AdvanceWarningLabel(this, method);
  RecommendSupportServantSelectListViewItemDraw__WarningTweenStart(this, v3);
}


void __fastcall RecommendSupportServantSelectListViewItemDraw__SetInput(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        RecommendSupportServantSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *v16; // x21

  if ( (byte_4C1E109 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C1E109 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_40;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_40;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_40;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
        Component_object,
        0LL,
        1LL,
        Component_object->klass[1]._1.interfaceOffsets);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)Component_object,
        item->fields._IsBase_k__BackingField,
        0LL);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_object )
        goto LABEL_40;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)Component_object,
        item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
        0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_object )
        goto LABEL_40;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)Component_object,
        item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
        0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !Component_object )
        goto LABEL_40;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)Component_object,
        item->fields._IsPush_k__BackingField,
        0LL);
    }
    RecommendSupportServantSelectListViewItemDraw__SetWarning(this, item, v15);
    v16 = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)Component_object,
          item->fields._IsBase_k__BackingField,
          0LL);
        return;
      }
LABEL_40:
      sub_1C3B9C0(Component_object, v9);
    }
  }
}


void __fastcall RecommendSupportServantSelectListViewItemDraw__SetItem(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        RecommendSupportServantSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  _BOOL4 IsBase_k__BackingField; // w23
  ServantFaceIconComponent_o *servantFaceIcon; // x21
  UserServantEntity_o *UserServant_k__BackingField; // x22
  System_Int64_array *EquipList; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_4C1E106 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, item);
    byte_4C1E106 = 1;
  }
  if ( item && mode )
  {
    IsBase_k__BackingField = item->fields._IsBase_k__BackingField;
    servantFaceIcon = this->fields.servantFaceIcon;
    UserServant_k__BackingField = item->fields._UserServant_k__BackingField;
    EquipList = RecommendSupportServantSelectListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_36;
    ServantFaceIconComponent__Set_39644684(
      servantFaceIcon,
      UserServant_k__BackingField,
      EquipList,
      item->fields._IconInfo1_k__BackingField,
      item->fields._IconInfo2_k__BackingField,
      0LL);
    if ( IsBase_k__BackingField )
    {
      partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
      {
        EquipList = (System_Int64_array *)this->fields.partyIcon;
        if ( !EquipList )
          goto LABEL_36;
        FlashingIconComponent__Clear((FlashingIconComponent_o *)EquipList, 0LL);
      }
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.lockSprite;
      if ( !EquipList )
        goto LABEL_36;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0LL);
      if ( !EquipList )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)EquipList,
        item->fields._IsSwapLock_k__BackingField != item->fields._IsLock_k__BackingField,
        0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.choiceSprite;
      if ( !EquipList )
        goto LABEL_36;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0LL);
      if ( !EquipList )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)EquipList,
        item->fields._IsSwapChoice_k__BackingField != item->fields._IsChoice_k__BackingField,
        0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.pushSprite;
      if ( !EquipList )
        goto LABEL_36;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0LL);
      if ( !EquipList )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)EquipList,
        item->fields._IsPush_k__BackingField,
        0LL);
    }
    RecommendSupportServantSelectListViewItemDraw__SetWarning(this, item, v16);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.selectObject;
      if ( EquipList )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)EquipList,
          item->fields._IsBase_k__BackingField,
          0LL);
        return;
      }
LABEL_36:
      sub_1C3B9C0(EquipList, v11);
    }
  }
}


void __fastcall RecommendSupportServantSelectListViewItemDraw__SetWarning(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        RecommendSupportServantSelectListViewItem_o *item,
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
  System_Collections_Generic_List_object__o *v20; // x20
  int *maskSprite; // x0
  const MethodInfo *v22; // x1
  RecommendSupportServantSelectListViewItemDraw_o *FriendPointBonus; // x0
  const MethodInfo *v24; // x3
  int v25; // w22
  System_String_o *v26; // x23
  float v27; // s0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  System_String_o *v32; // x23
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v33; // x0
  Il2CppObject *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_String_o *v45; // x23
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  System_String_o *WarningText; // x23
  bool v58; // w1
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v59; // x22
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_String_o *v76; // x22
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v77; // x21
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  System_Object_array *v88; // x1
  RecommendSupportServantSelectListViewItemDraw_c *v89; // x0
  const MethodInfo *v90; // x1
  struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  __int64 v92; // x8
  const MethodInfo *v93; // x1
  System_Collections_Generic_List_object__o *ItemList; // x8
  struct TweenAlpha_o *warningTween; // x20
  struct TweenColor_o *warningTweenColor; // x20
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  RecommendSupportServantSelectListViewItemDraw_c *v103; // x0
  __int64 v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  __int64 v107; // x8
  float v108; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v110; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4C1E107 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__,
      item);
    sub_1C3B764(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__, v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__ToArray__,
      v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor__,
      v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Count__, v9);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__get_Count__,
      v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__, v11);
    sub_1C3B764(
      &System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__TypeInfo,
      v12);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v14);
    sub_1C3B764(&float_TypeInfo, v15);
    sub_1C3B764(&RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo, v16);
    sub_1C3B764(&StringLiteral_11739/*"SHOP_BULK_WINDOW_CONNECT_WARDS_CHAR"*/, v17);
    sub_1C3B764(&StringLiteral_11730/*"SHOP04_SHOP_STATE"*/, v18);
    sub_1C3B764(&StringLiteral_1/*""*/, v19);
    byte_4C1E107 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_85;
  FriendPointBonus = (RecommendSupportServantSelectListViewItemDraw_o *)RecommendSupportServantSelectListViewItem__GetFriendPointBonus(
                                                                          item,
                                                                          v22);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v25 = (int)FriendPointBonus;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11739/*"SHOP_BULK_WINDOW_CONNECT_WARDS_CHAR"*/, 0LL);
    v27 = (double)v25 / 1000.0;
    v108 = v27;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v108, v28, v29, v30);
    v32 = System_String__Format(v26, v31, 0LL);
    v33 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1C3B9B0(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    v110.fields.b = 0.8;
    v109.fields.r = 1.0;
    v109.fields.g = 1.0;
    v109.fields.b = 0.0;
    v109.fields.a = 1.0;
    v110.fields.r = 1.0;
    v110.fields.g = 1.0;
    v110.fields.a = 1.0;
    v34 = (Il2CppObject *)v33;
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor_33808964(v33, v32, v109, v110, 1.0, 0, 0LL);
    if ( !v20 )
      goto LABEL_85;
    items = v20->fields._items;
    v42 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_85;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        v34,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v44[4] = (Il2CppClass *)v34;
      sub_1C3B708((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v34, v35, v36, v37, v38, v39, v40);
    }
  }
  if ( item->fields._IsInvalidRarity_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SHOP04_SHOP_STATE"*/, 0LL);
    v46 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1C3B9B0(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v46, v45, 0.8, 1, 0LL);
    if ( !v20 )
      goto LABEL_85;
    v53 = v20->fields._items;
    v54 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !v53 )
      goto LABEL_85;
    v55 = v20->fields._size;
    if ( (unsigned int)v55 >= v53->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v46,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &v53->obj.klass + v55;
      v20->fields._size = v55 + 1;
      v56[4] = (Il2CppClass *)v46;
      sub_1C3B708((PartyOrganizationUtility_o *)(v56 + 4), (int64_t)v46, v47, v48, v49, v50, v51, v52);
    }
  }
  WarningText = RecommendSupportServantSelectListViewItemDraw__GetWarningText(
                  FriendPointBonus,
                  item,
                  item->fields._IsBase_k__BackingField,
                  v24);
  if ( System_String__IsNullOrEmpty(WarningText, 0LL) )
  {
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_85;
    v58 = 0;
  }
  else
  {
    v59 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1C3B9B0(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v59, WarningText, 1.0, 0, 0LL);
    if ( !v20 )
      goto LABEL_85;
    v66 = v20->fields._items;
    v67 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !v66 )
      goto LABEL_85;
    v68 = v20->fields._size;
    if ( (unsigned int)v68 >= v66->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v59,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v20->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v59;
      sub_1C3B708((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v59, v60, v61, v62, v63, v64, v65);
    }
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_85;
    v58 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v58, 0LL);
  if ( item->fields._IsInvalidRarity_k__BackingField )
  {
    if ( !v20 )
      goto LABEL_85;
    if ( v20->fields._size == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SHOP04_SHOP_STATE"*/, 0LL);
      v77 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1C3B9B0(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
      RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v77, v76, 0.8, 1, 0LL);
      v84 = v20->fields._items;
      v85 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
      ++v20->fields._version;
      if ( !v84 )
        goto LABEL_85;
      v86 = v20->fields._size;
      if ( (unsigned int)v86 >= v84->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v77,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = &v84->obj.klass + v86;
        v20->fields._size = v86 + 1;
        v87[4] = (Il2CppClass *)v77;
        sub_1C3B708((PartyOrganizationUtility_o *)(v87 + 4), (int64_t)v77, v78, v79, v80, v81, v82, v83);
      }
    }
  }
  else if ( !v20 )
  {
    goto LABEL_85;
  }
  if ( v20->fields._size < 1 )
    v88 = 0LL;
  else
    v88 = System_Collections_Generic_List_object___ToArray(
            v20,
            (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = (struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *)v88;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.warningLabelTexts, (int64_t)v88, v70, v71, v72, v73, v74, v75);
  v89 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v89 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v89->static_fields->ItemList;
  if ( !maskSprite )
    goto LABEL_85;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)maskSprite,
    (Il2CppObject *)this,
    (const MethodInfo_368D194 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (v92 = *(_QWORD *)&warningLabelTexts->max_length) == 0 )
  {
    RecommendSupportServantSelectListViewItemDraw__WarningTweenStop(this, v90);
    maskSprite = (int *)this->fields.warningLabel;
    if ( maskSprite )
    {
      maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      if ( maskSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
        maskSprite = (int *)this->fields.warningLabel;
        if ( maskSprite )
        {
          UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
    goto LABEL_85;
  }
  if ( (int)v92 < 2 )
  {
    RecommendSupportServantSelectListViewItemDraw__WarningTweenStop(this, v90);
    goto LABEL_82;
  }
  RecommendSupportServantSelectListViewItemDraw__WarningTweenStart(this, v90);
  maskSprite = (int *)RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    maskSprite = (int *)RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  ItemList = (System_Collections_Generic_List_object__o *)**((_QWORD **)maskSprite + 23);
  if ( !ItemList )
    goto LABEL_85;
  if ( ItemList->fields._size < 1 )
  {
    maskSprite = (int *)this->fields.warningTween;
    if ( !maskSprite )
      goto LABEL_85;
    UITweener__ResetToBeginning((UITweener_o *)maskSprite, 0LL);
    maskSprite = (int *)this->fields.warningTween;
    if ( !maskSprite )
      goto LABEL_85;
    UITweener__set_tweenFactor((UITweener_o *)maskSprite, 0.125, 0LL);
    maskSprite = (int *)this->fields.warningTweenColor;
    if ( !maskSprite )
      goto LABEL_85;
    UITweener__ResetToBeginning((UITweener_o *)maskSprite, 0LL);
  }
  else
  {
    if ( !maskSprite[56] )
    {
      j_il2cpp_runtime_class_init_0(maskSprite);
      ItemList = (System_Collections_Generic_List_object__o *)RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields->ItemList;
      if ( !ItemList )
        goto LABEL_85;
    }
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          ItemList,
                          0,
                          (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
    if ( !maskSprite )
      goto LABEL_85;
    this->fields.warningLabelTextSync2Pattern = maskSprite[33];
    maskSprite = (int *)RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields->ItemList;
    if ( !maskSprite )
      goto LABEL_85;
    warningTween = this->fields.warningTween;
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)maskSprite,
                          0,
                          (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
    if ( !maskSprite )
      goto LABEL_85;
    if ( !warningTween )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenAlpha_o *, _QWORD, void *))warningTween->klass->vtable._8_SynchronizeTween.method)(
      warningTween,
      *((_QWORD *)maskSprite + 13),
      warningTween->klass[1]._1.image);
    maskSprite = (int *)RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields->ItemList;
    if ( !maskSprite )
      goto LABEL_85;
    warningTweenColor = this->fields.warningTweenColor;
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)maskSprite,
                          0,
                          (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
    if ( !maskSprite || !warningTweenColor )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenColor_o *, _QWORD, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
      warningTweenColor,
      *((_QWORD *)maskSprite + 14),
      warningTweenColor->klass[1]._1.image);
  }
  v103 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v103 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v103->static_fields->ItemList;
  if ( !maskSprite
    || (v104 = *((_QWORD *)maskSprite + 2),
        v105 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Add__,
        ++maskSprite[7],
        !v104) )
  {
LABEL_85:
    sub_1C3B9C0(maskSprite, v22);
  }
  v106 = maskSprite[6];
  if ( (unsigned int)v106 >= *(_DWORD *)(v104 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)this,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
  }
  else
  {
    v107 = v104 + 8 * v106;
    maskSprite[6] = v106 + 1;
    *(_QWORD *)(v107 + 32) = this;
    sub_1C3B708((PartyOrganizationUtility_o *)(v107 + 32), (int64_t)this, v97, v98, v99, v100, v101, v102);
  }
LABEL_82:
  RecommendSupportServantSelectListViewItemDraw__AdvanceWarningLabel(this, v93);
  maskSprite = (int *)this->fields.warningLabel;
  if ( !maskSprite )
    goto LABEL_85;
  maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItemDraw__WarningTweenStart(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *warningTween; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  warningTween = (UnityEngine_Behaviour_o *)this->fields.warningTween;
  if ( !warningTween
    || (warningTween[5].monitor = (void *)0x3F80000000000000LL,
        LODWORD(warningTween[2].monitor) = 1082130432,
        UnityEngine_Behaviour__set_enabled(warningTween, 1, 0LL),
        (warningTween = (UnityEngine_Behaviour_o *)this->fields.warningTween) == 0LL)
    || (UITweener__ResetToBeginning((UITweener_o *)warningTween, 0LL),
        (warningTween = (UnityEngine_Behaviour_o *)this->fields.warningLabel) == 0LL) )
  {
    sub_1C3B9C0(warningTween, method);
  }
  v4.fields.r = 0.0;
  v4.fields.g = 0.0;
  v4.fields.b = 0.0;
  v4.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)warningTween, v4, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItemDraw__WarningTweenStop(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct TweenAlpha_o *warningTween; // x0

  warningTween = this->fields.warningTween;
  if ( !warningTween )
    sub_1C3B9C0(0LL, method);
  warningTween->fields.duration = 0.0;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningTween, 0, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(
        RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *this,
        System_String_o *s,
        float scaleX,
        bool isInvalidSkill,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v7; // x20
  bool v8; // w21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v7 = this;
  v8 = isInvalidSkill;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7->fields.text = s;
  v7 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)((char *)v7 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)v7, (int64_t)s, v9, v10, v11, v12, v13, v14);
  __asm { FMOV            V0.4S, #1.0 }
  LOWORD(v7->monitor) = 0;
  v7->fields.bottom.fields.r = scaleX;
  v7->fields.top = _Q0;
  *(struct UnityEngine_Color_o *)((char *)&v7->monitor + 4) = _Q0;
  LOBYTE(v7->fields.bottom.fields.g) = v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor_33808964(
        RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *this,
        System_String_o *s,
        UnityEngine_Color_o t,
        UnityEngine_Color_o b,
        float scaleX,
        bool isInvalidSkillId,
        const MethodInfo *method)
{
  float v8; // s9
  float g; // s10
  float r; // s11
  float v11; // s12
  float v12; // s13
  float v13; // s14
  float v14; // s15
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v15; // x20
  bool v16; // w21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
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
  v16 = isInvalidSkillId;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15->fields.text = s;
  v15 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)((char *)v15 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)v15, (int64_t)s, v17, v18, v19, v20, v21, v22);
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