void __fastcall RecommendSupportServantSelectListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49B6FFD & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw___ctor__, v1);
    sub_1B4CF90(&System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__TypeInfo, v2);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v3);
    byte_49B6FFD = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw___ctor__);
  RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields->ItemList = (struct System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__o *)v4;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields,
    (int32_t)v4,
    v5,
    v6);
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
  if ( (byte_49B6FFC & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Count__,
      method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__, v3);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v4);
    this = (RecommendSupportServantSelectListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_1/*""*/, v5);
    byte_49B6FFC = 1;
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
      sub_1B4D1F4(this, method);
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
                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
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
      v14->fields.to = (struct UnityEngine_Color_o)xmmword_BAA540;
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
    sub_1B4D1EC(warningLabel, method);
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

  if ( (byte_49B6FFA & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, item);
    sub_1B4CF90(&StringLiteral_11264/*"SELECT_CANNOT"*/, v6);
    sub_1B4CF90(&StringLiteral_10058/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v7);
    sub_1B4CF90(&StringLiteral_11288/*"SELECT_SERVANT_EVENT_JOIN"*/, v8);
    sub_1B4CF90(&StringLiteral_11275/*"SELECT_NO_SORTIE"*/, v9);
    sub_1B4CF90(&StringLiteral_12273/*"SUPPORT_SELECT_USE_SUPPORT"*/, v10);
    sub_1B4CF90(&StringLiteral_12223/*"SUPPORT_SELECT_ALREADY_SET"*/, v11);
    sub_1B4CF90(&StringLiteral_10106/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/, v12);
    this = (RecommendSupportServantSelectListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_10107/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v13);
    byte_49B6FFA = 1;
  }
  if ( !item )
    sub_1B4D1EC(this, item);
  if ( item->fields._IsPushMode_k__BackingField )
  {
    if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_11264/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    if ( item->fields._IsEventJoin_k__BackingField )
    {
LABEL_14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_11288/*"SELECT_SERVANT_EVENT_JOIN"*/;
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
      v14 = &StringLiteral_10106/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    if ( !RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0LL;
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_11275/*"SELECT_NO_SORTIE"*/;
    return LocalizationManager__Get((System_String_o *)*v14, 0LL);
  }
  if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_18;
  if ( item->fields._IsSame_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_10107/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v14, 0LL);
  }
  if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(item, v15) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = &StringLiteral_12273/*"SUPPORT_SELECT_USE_SUPPORT"*/;
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
      v14 = &StringLiteral_10058/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/;
      return LocalizationManager__Get((System_String_o *)*v14, 0LL);
    }
    return 0LL;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12223/*"SUPPORT_SELECT_ALREADY_SET"*/, 0LL);
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

  if ( (byte_49B6FF7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__, method);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v3);
    byte_49B6FF7 = 1;
  }
  v4 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v4 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  ItemList = (System_Collections_Generic_List_object__o *)v4->static_fields->ItemList;
  if ( !ItemList )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_List_object___Remove(
    ItemList,
    (Il2CppObject *)this,
    (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__);
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

  if ( (byte_49B6FFB & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49B6FFB = 1;
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
                                                      (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1B4D1EC(Component_object, v9);
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

  if ( (byte_49B6FF8 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, item);
    byte_49B6FF8 = 1;
  }
  if ( item && mode )
  {
    IsBase_k__BackingField = item->fields._IsBase_k__BackingField;
    servantFaceIcon = this->fields.servantFaceIcon;
    UserServant_k__BackingField = item->fields._UserServant_k__BackingField;
    EquipList = RecommendSupportServantSelectListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_36;
    ServantFaceIconComponent__Set_38760900(
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
      sub_1B4D1EC(EquipList, v11);
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
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_String_o *v41; // x23
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v42; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  System_String_o *WarningText; // x23
  bool v50; // w1
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v51; // x22
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_String_o *v60; // x22
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v61; // x21
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  System_Object_array *v68; // x1
  RecommendSupportServantSelectListViewItemDraw_c *v69; // x0
  const MethodInfo *v70; // x1
  struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  __int64 v72; // x8
  const MethodInfo *v73; // x1
  System_Collections_Generic_List_object__o *ItemList; // x8
  struct TweenAlpha_o *warningTween; // x20
  struct TweenColor_o *warningTweenColor; // x20
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  RecommendSupportServantSelectListViewItemDraw_c *v79; // x0
  __int64 v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  __int64 v83; // x8
  float v84; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_49B6FF9 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__,
      item);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__, v6);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__ToArray__,
      v7);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor__,
      v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Count__, v9);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__get_Count__,
      v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__, v11);
    sub_1B4CF90(
      &System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__TypeInfo,
      v12);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v13);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItemDraw_TypeInfo, v14);
    sub_1B4CF90(&float_TypeInfo, v15);
    sub_1B4CF90(&RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo, v16);
    sub_1B4CF90(&StringLiteral_11272/*"SELECT_FP_NUM_UP"*/, v17);
    sub_1B4CF90(&StringLiteral_11263/*"SELECT_BONUS_SKILL_INVALID"*/, v18);
    sub_1B4CF90(&StringLiteral_1/*""*/, v19);
    byte_49B6FF9 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor__);
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
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11272/*"SELECT_FP_NUM_UP"*/, 0LL);
    v27 = (double)v25 / 1000.0;
    v84 = v27;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v84, v28, v29, v30);
    v32 = System_String__Format(v26, v31, 0LL);
    v33 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    v86.fields.b = 0.8;
    v85.fields.r = 1.0;
    v85.fields.g = 1.0;
    v85.fields.b = 0.0;
    v85.fields.a = 1.0;
    v86.fields.r = 1.0;
    v86.fields.g = 1.0;
    v86.fields.a = 1.0;
    v34 = (Il2CppObject *)v33;
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor_32908044(v33, v32, v85, v86, 1.0, 0, 0LL);
    if ( !v20 )
      goto LABEL_85;
    items = v20->fields._items;
    v38 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_85;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        v34,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v40[4] = (Il2CppClass *)v34;
      sub_1B4CF34((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v34, v35, v36);
    }
  }
  if ( item->fields._IsInvalidRarity_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11263/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    v42 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v42, v41, 0.8, 1, 0LL);
    if ( !v20 )
      goto LABEL_85;
    v45 = v20->fields._items;
    v46 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !v45 )
      goto LABEL_85;
    v47 = v20->fields._size;
    if ( (unsigned int)v47 >= v45->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v42,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &v45->obj.klass + v47;
      v20->fields._size = v47 + 1;
      v48[4] = (Il2CppClass *)v42;
      sub_1B4CF34((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v42, v43, v44);
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
    v50 = 0;
  }
  else
  {
    v51 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v51, WarningText, 1.0, 0, 0LL);
    if ( !v20 )
      goto LABEL_85;
    v54 = v20->fields._items;
    v55 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !v54 )
      goto LABEL_85;
    v56 = v20->fields._size;
    if ( (unsigned int)v56 >= v54->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v51,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->obj.klass + v56;
      v20->fields._size = v56 + 1;
      v57[4] = (Il2CppClass *)v51;
      sub_1B4CF34((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v51, v52, v53);
    }
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_85;
    v50 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v50, 0LL);
  if ( item->fields._IsInvalidRarity_k__BackingField )
  {
    if ( !v20 )
      goto LABEL_85;
    if ( v20->fields._size == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11263/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
      v61 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1B4D1DC(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
      RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v61, v60, 0.8, 1, 0LL);
      v64 = v20->fields._items;
      v65 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
      ++v20->fields._version;
      if ( !v64 )
        goto LABEL_85;
      v66 = v20->fields._size;
      if ( (unsigned int)v66 >= v64->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v61,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &v64->obj.klass + v66;
        v20->fields._size = v66 + 1;
        v67[4] = (Il2CppClass *)v61;
        sub_1B4CF34((CGThumbnailListItem_o *)(v67 + 4), (int32_t)v61, v62, v63);
      }
    }
  }
  else if ( !v20 )
  {
    goto LABEL_85;
  }
  if ( v20->fields._size < 1 )
    v68 = 0LL;
  else
    v68 = System_Collections_Generic_List_object___ToArray(
            v20,
            (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = (struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *)v68;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.warningLabelTexts, (int32_t)v68, v58, v59);
  v69 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v69 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v69->static_fields->ItemList;
  if ( !maskSprite )
    goto LABEL_85;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)maskSprite,
    (Il2CppObject *)this,
    (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (v72 = *(_QWORD *)&warningLabelTexts->max_length) == 0 )
  {
    RecommendSupportServantSelectListViewItemDraw__WarningTweenStop(this, v70);
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
  if ( (int)v72 < 2 )
  {
    RecommendSupportServantSelectListViewItemDraw__WarningTweenStop(this, v70);
    goto LABEL_82;
  }
  RecommendSupportServantSelectListViewItemDraw__WarningTweenStart(this, v70);
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
                          (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
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
                          (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
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
                          (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
    if ( !maskSprite || !warningTweenColor )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenColor_o *, _QWORD, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
      warningTweenColor,
      *((_QWORD *)maskSprite + 14),
      warningTweenColor->klass[1]._1.image);
  }
  v79 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v79 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v79->static_fields->ItemList;
  if ( !maskSprite
    || (v80 = *((_QWORD *)maskSprite + 2),
        v81 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Add__,
        ++maskSprite[7],
        !v80) )
  {
LABEL_85:
    sub_1B4D1EC(maskSprite, v22);
  }
  v82 = maskSprite[6];
  if ( (unsigned int)v82 >= *(_DWORD *)(v80 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)this,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
  }
  else
  {
    v83 = v80 + 8 * v82;
    maskSprite[6] = v82 + 1;
    *(_QWORD *)(v83 + 32) = this;
    sub_1B4CF34((CGThumbnailListItem_o *)(v83 + 32), (int32_t)this, v77, v78);
  }
LABEL_82:
  RecommendSupportServantSelectListViewItemDraw__AdvanceWarningLabel(this, v73);
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
    sub_1B4D1EC(warningTween, method);
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
    sub_1B4D1EC(0LL, method);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v7 = this;
  v8 = isInvalidSkill;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7->fields.text = s;
  v7 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)((char *)v7 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)v7, (int32_t)s, v9, v10);
  __asm { FMOV            V0.4S, #1.0 }
  LOWORD(v7->monitor) = 0;
  v7->fields.bottom.fields.r = scaleX;
  v7->fields.top = _Q0;
  *(struct UnityEngine_Color_o *)((char *)&v7->monitor + 4) = _Q0;
  LOBYTE(v7->fields.bottom.fields.g) = v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor_32908044(
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
  v16 = isInvalidSkillId;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15->fields.text = s;
  v15 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)((char *)v15 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)v15, (int32_t)s, v17, v18);
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