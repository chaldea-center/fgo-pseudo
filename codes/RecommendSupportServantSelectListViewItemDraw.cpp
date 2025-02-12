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

  if ( (byte_4BC3C9D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw___ctor__, v1);
    sub_1C1ABD4(&System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__TypeInfo, v2);
    sub_1C1ABD4(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v3);
    byte_4BC3C9D = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw___ctor__);
  RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields->ItemList = (struct System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__o *)v4;
  sub_1C1AB78(
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
  if ( (byte_4BC3C9C & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Count__,
      method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__, v3);
    sub_1C1ABD4(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v4);
    this = (RecommendSupportServantSelectListViewItemDraw_o *)sub_1C1ABD4(&StringLiteral_1/*""*/, v5);
    byte_4BC3C9C = 1;
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
      sub_1C1AE38(this, method);
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
                         (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
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
      v14->fields.to = (struct UnityEngine_Color_o)xmmword_BFA7C0;
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
    sub_1C1AE30(warningLabel, method);
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

  if ( (byte_4BC3C9A & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, item);
    sub_1C1ABD4(&StringLiteral_11704/*"SELECT_CANNOT"*/, v6);
    sub_1C1ABD4(&StringLiteral_10475/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v7);
    sub_1C1ABD4(&StringLiteral_11728/*"SELECT_SERVANT_EVENT_JOIN"*/, v8);
    sub_1C1ABD4(&StringLiteral_11715/*"SELECT_NO_SORTIE"*/, v9);
    sub_1C1ABD4(&StringLiteral_12696/*"SUPPORT_SELECT_USE_SUPPORT"*/, v10);
    sub_1C1ABD4(&StringLiteral_12646/*"SUPPORT_SELECT_ALREADY_SET"*/, v11);
    sub_1C1ABD4(&StringLiteral_10523/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/, v12);
    this = (RecommendSupportServantSelectListViewItemDraw_o *)sub_1C1ABD4(&StringLiteral_10524/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v13);
    byte_4BC3C9A = 1;
  }
  if ( !item )
    sub_1C1AE30(this, item);
  if ( item->fields._IsPushMode_k__BackingField )
  {
    if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_11704/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    if ( item->fields._IsEventJoin_k__BackingField )
    {
LABEL_14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_11728/*"SELECT_SERVANT_EVENT_JOIN"*/;
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
      v14 = &StringLiteral_10523/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    if ( !RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0LL;
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_11715/*"SELECT_NO_SORTIE"*/;
    return LocalizationManager__Get((System_String_o *)*v14, 0LL);
  }
  if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_18;
  if ( item->fields._IsSame_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_10524/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v14, 0LL);
  }
  if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(item, v15) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_12696/*"SUPPORT_SELECT_USE_SUPPORT"*/;
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
      v14 = &StringLiteral_10475/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    return 0LL;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12646/*"SUPPORT_SELECT_ALREADY_SET"*/, 0LL);
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

  if ( (byte_4BC3C97 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__, method);
    sub_1C1ABD4(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v3);
    byte_4BC3C97 = 1;
  }
  v4 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v4 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  ItemList = (System_Collections_Generic_List_object__o *)v4->static_fields->ItemList;
  if ( !ItemList )
    sub_1C1AE30(0LL, method);
  System_Collections_Generic_List_object___Remove(
    ItemList,
    (Il2CppObject *)this,
    (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__);
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

  if ( (byte_4BC3C9B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    byte_4BC3C9B = 1;
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
                                                      (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1C1AE30(Component_object, v9);
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

  if ( (byte_4BC3C98 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, item);
    byte_4BC3C98 = 1;
  }
  if ( item && mode )
  {
    IsBase_k__BackingField = item->fields._IsBase_k__BackingField;
    servantFaceIcon = this->fields.servantFaceIcon;
    UserServant_k__BackingField = item->fields._UserServant_k__BackingField;
    EquipList = RecommendSupportServantSelectListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_36;
    ServantFaceIconComponent__Set_39418660(
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
      sub_1C1AE30(EquipList, v11);
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
  const MethodInfo *v35; // x3
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_String_o *v46; // x23
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v47; // x22
  const MethodInfo *v48; // x3
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_String_o *WarningText; // x23
  bool v60; // w1
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v61; // x22
  const MethodInfo *v62; // x3
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_String_o *v79; // x22
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v80; // x21
  const MethodInfo *v81; // x3
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  System_Object_array *v92; // x1
  RecommendSupportServantSelectListViewItemDraw_c *v93; // x0
  const MethodInfo *v94; // x1
  struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  __int64 v96; // x8
  const MethodInfo *v97; // x1
  System_Collections_Generic_List_object__o *ItemList; // x8
  struct TweenAlpha_o *warningTween; // x20
  struct TweenColor_o *warningTweenColor; // x20
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  RecommendSupportServantSelectListViewItemDraw_c *v107; // x0
  __int64 v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x8
  float v112; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4BC3C99 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__,
      item);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__, v6);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__ToArray__,
      v7);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor__,
      v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Count__, v9);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__get_Count__,
      v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__, v11);
    sub_1C1ABD4(
      &System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__TypeInfo,
      v12);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v13);
    sub_1C1ABD4(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v14);
    sub_1C1ABD4(&float_TypeInfo, v15);
    sub_1C1ABD4(&RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo, v16);
    sub_1C1ABD4(&StringLiteral_11712/*"SELECT_FP_NUM_UP"*/, v17);
    sub_1C1ABD4(&StringLiteral_11703/*"SELECT_BONUS_SKILL_INVALID"*/, v18);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v19);
    byte_4BC3C99 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor__);
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
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11712/*"SELECT_FP_NUM_UP"*/, 0LL);
    v27 = (double)v25 / 1000.0;
    v112 = v27;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v112, v28, v29, v30);
    v32 = System_String__Format(v26, v31, 0LL);
    v33 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1C1AE20(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    v114.fields.b = 0.8;
    v113.fields.r = 1.0;
    v113.fields.g = 1.0;
    v113.fields.b = 0.0;
    v113.fields.a = 1.0;
    v114.fields.r = 1.0;
    v114.fields.g = 1.0;
    v114.fields.a = 1.0;
    v34 = (Il2CppObject *)v33;
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor_33612008(v33, v32, v113, v114, 1.0, 0, v35);
    if ( !v20 )
      goto LABEL_85;
    items = v20->fields._items;
    v43 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_85;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        v34,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v45[4] = (Il2CppClass *)v34;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v34, v36, v37, v38, v39, v40, v41);
    }
  }
  if ( item->fields._IsInvalidRarity_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11703/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    v47 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1C1AE20(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v47, v46, 0.8, 1, v48);
    if ( !v20 )
      goto LABEL_85;
    v55 = v20->fields._items;
    v56 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !v55 )
      goto LABEL_85;
    v57 = v20->fields._size;
    if ( (unsigned int)v57 >= v55->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v47,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      v20->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v47;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v47, v49, v50, v51, v52, v53, v54);
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
    v60 = 0;
  }
  else
  {
    v61 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1C1AE20(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v61, WarningText, 1.0, 0, v62);
    if ( !v20 )
      goto LABEL_85;
    v69 = v20->fields._items;
    v70 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !v69 )
      goto LABEL_85;
    v71 = v20->fields._size;
    if ( (unsigned int)v71 >= v69->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v61,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = &v69->obj.klass + v71;
      v20->fields._size = v71 + 1;
      v72[4] = (Il2CppClass *)v61;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v72 + 4), (int64_t)v61, v63, v64, v65, v66, v67, v68);
    }
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_85;
    v60 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v60, 0LL);
  if ( item->fields._IsInvalidRarity_k__BackingField )
  {
    if ( !v20 )
      goto LABEL_85;
    if ( v20->fields._size == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11703/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
      v80 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1C1AE20(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
      RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v80, v79, 0.8, 1, v81);
      v88 = v20->fields._items;
      v89 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
      ++v20->fields._version;
      if ( !v88 )
        goto LABEL_85;
      v90 = v20->fields._size;
      if ( (unsigned int)v90 >= v88->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v80,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = &v88->obj.klass + v90;
        v20->fields._size = v90 + 1;
        v91[4] = (Il2CppClass *)v80;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v80, v82, v83, v84, v85, v86, v87);
      }
    }
  }
  else if ( !v20 )
  {
    goto LABEL_85;
  }
  if ( v20->fields._size < 1 )
    v92 = 0LL;
  else
    v92 = System_Collections_Generic_List_object___ToArray(
            v20,
            (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = (struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *)v92;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.warningLabelTexts, (int64_t)v92, v73, v74, v75, v76, v77, v78);
  v93 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v93 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v93->static_fields->ItemList;
  if ( !maskSprite )
    goto LABEL_85;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)maskSprite,
    (Il2CppObject *)this,
    (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (v96 = *(_QWORD *)&warningLabelTexts->max_length) == 0 )
  {
    RecommendSupportServantSelectListViewItemDraw__WarningTweenStop(this, v94);
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
  if ( (int)v96 < 2 )
  {
    RecommendSupportServantSelectListViewItemDraw__WarningTweenStop(this, v94);
    goto LABEL_82;
  }
  RecommendSupportServantSelectListViewItemDraw__WarningTweenStart(this, v94);
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
                          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
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
                          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
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
                          (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
    if ( !maskSprite || !warningTweenColor )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenColor_o *, _QWORD, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
      warningTweenColor,
      *((_QWORD *)maskSprite + 14),
      warningTweenColor->klass[1]._1.image);
  }
  v107 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v107 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v107->static_fields->ItemList;
  if ( !maskSprite
    || (v108 = *((_QWORD *)maskSprite + 2),
        v109 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Add__,
        ++maskSprite[7],
        !v108) )
  {
LABEL_85:
    sub_1C1AE30(maskSprite, v22);
  }
  v110 = maskSprite[6];
  if ( (unsigned int)v110 >= *(_DWORD *)(v108 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)this,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v111 = v108 + 8 * v110;
    maskSprite[6] = v110 + 1;
    *(_QWORD *)(v111 + 32) = this;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v111 + 32), (int64_t)this, v101, v102, v103, v104, v105, v106);
  }
LABEL_82:
  RecommendSupportServantSelectListViewItemDraw__AdvanceWarningLabel(this, v97);
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
    sub_1C1AE30(warningTween, method);
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
    sub_1C1AE30(0LL, method);
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
  sub_1C1AB78((PartyOrganizationUtility_o *)v7, (int64_t)s, v9, v10, v11, v12, v13, v14);
  __asm { FMOV            V0.4S, #1.0 }
  LOWORD(v7->monitor) = 0;
  v7->fields.bottom.fields.r = scaleX;
  v7->fields.top = _Q0;
  *(struct UnityEngine_Color_o *)((char *)&v7->monitor + 4) = _Q0;
  LOBYTE(v7->fields.bottom.fields.g) = v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor_33612008(
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
  sub_1C1AB78((PartyOrganizationUtility_o *)v15, (int64_t)s, v17, v18, v19, v20, v21, v22);
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