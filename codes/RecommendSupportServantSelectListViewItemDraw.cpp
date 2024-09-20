void __fastcall RecommendSupportServantSelectListViewItemDraw___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57492 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__TypeInfo);
    sub_1B885B0(&RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    byte_4A57492 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw___ctor__);
  RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields->ItemList = (struct System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendSupportServantSelectListViewItemDraw_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  int max_length; // w10
  __int64 warningLabelTextSync2Pattern; // x9
  void *warningLabel; // x0
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *ItemList; // x8
  struct TweenColor_o *v10; // x20
  struct TweenColor_o *v11; // x8
  float v12; // s0
  float v13; // s1
  int v14; // s0
  int v15; // s1
  int v16; // s2
  int v17; // s3
  struct TweenColor_o *warningTweenColor; // x8
  struct TweenColor_o *v24; // x8
  _BOOL4 isSkillInvalid; // w9
  int32_t v27; // w10
  struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *v28; // x9
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A57491 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
    sub_1B885B0(&RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    this = (RecommendSupportServantSelectListViewItemDraw_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57491 = 1;
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
      sub_1B88814(this, method);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    v7 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
    if ( !v7 )
    {
      UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_45;
      UILabel__set_applyGradient((UILabel_o *)warningLabel, 0, 0LL);
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_45;
      v30.fields.r = 1.0;
      v30.fields.g = 1.0;
      v30.fields.b = 1.0;
      v30.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)warningLabel, v30, 0LL);
      warningTweenColor = v2->fields.warningTweenColor;
      if ( !warningTweenColor )
        goto LABEL_45;
      __asm { FMOV            V0.4S, #1.0 }
      warningTweenColor->fields.to = _Q0;
      goto LABEL_39;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)warningLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(gameObject, v7->fields.scale, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)warningLabel, v7->fields.text, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    UILabel__set_applyGradient((UILabel_o *)warningLabel, v7->fields.gradation, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    UILabel__set_gradientTop((UILabel_o *)warningLabel, v7->fields.top, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    UILabel__set_gradientBottom((UILabel_o *)warningLabel, v7->fields.bottom, 0LL);
    if ( v7->fields.colorAnime )
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
        v10 = v2->fields.warningTweenColor;
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
                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
        if ( !warningLabel || !v10 )
          goto LABEL_45;
        warningLabel = (void *)((__int64 (__fastcall *)(struct TweenColor_o *, _QWORD, void *))v10->klass->vtable._8_SynchronizeTween.method)(
                                 v10,
                                 *((_QWORD *)warningLabel + 14),
                                 v10->klass[1]._1.image);
      }
      v11 = v2->fields.warningTweenColor;
      if ( !v11 )
        goto LABEL_45;
      v11->fields.to = (struct UnityEngine_Color_o)xmmword_BB4BD0;
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_45;
      v12 = 2.0;
      v13 = 2.0;
    }
    else
    {
      v24 = v2->fields.warningTweenColor;
      if ( !v24 )
        goto LABEL_45;
      __asm { FMOV            V0.4S, #1.0 }
      isSkillInvalid = v7->fields.isSkillInvalid;
      v24->fields.to = _Q0;
      warningLabel = v2->fields.warningLabel;
      if ( isSkillInvalid )
      {
        if ( !warningLabel )
          goto LABEL_45;
        v29.fields.x = 2.0;
        v29.fields.y = 2.0;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, v29, 0LL);
        warningLabel = v2->fields.warningLabel;
        if ( !warningLabel )
          goto LABEL_45;
        v17 = 1056997505;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        goto LABEL_38;
      }
      if ( !warningLabel )
        goto LABEL_45;
      v12 = 1.0;
      v13 = 1.0;
    }
    UILabel__set_effectDistance((UILabel_o *)warningLabel, *(UnityEngine_Vector2_o *)&v12, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_45;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 1.0;
LABEL_38:
    UILabel__set_effectColor((UILabel_o *)warningLabel, *(UnityEngine_Color_o *)&v14, 0LL);
LABEL_39:
    v27 = v2->fields.warningLabelTextSync2Pattern;
    v28 = v2->fields.warningLabelTexts;
    v2->fields.warningLabelTextSync2Pattern = v27 + 1;
    v2->fields.warningLabelTextSync2PatternOld = v27;
    if ( v28 )
    {
      if ( v27 + 1 >= (signed int)v28->max_length )
        v2->fields.warningLabelTextSync2Pattern = 0;
      return;
    }
LABEL_45:
    sub_1B8880C(warningLabel, method);
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
  __int64 *v6; // x8
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  System_String_o *v10; // x0
  int32_t UseSet_k__BackingField; // w8
  System_String_o *v12; // x19
  Il2CppObject *v13; // x1

  if ( (byte_4A5748F & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11496/*"SELECT_CANNOT"*/);
    sub_1B885B0(&StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1B885B0(&StringLiteral_11520/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1B885B0(&StringLiteral_11507/*"SELECT_NO_SORTIE"*/);
    sub_1B885B0(&StringLiteral_12462/*"SUPPORT_SELECT_USE_SUPPORT"*/);
    sub_1B885B0(&StringLiteral_12412/*"SUPPORT_SELECT_ALREADY_SET"*/);
    sub_1B885B0(&StringLiteral_10329/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/);
    this = (RecommendSupportServantSelectListViewItemDraw_o *)sub_1B885B0(&StringLiteral_10330/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/);
    byte_4A5748F = 1;
  }
  if ( !item )
    sub_1B8880C(this, item);
  if ( item->fields._IsPushMode_k__BackingField )
  {
    if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_11496/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    if ( item->fields._IsEventJoin_k__BackingField )
    {
LABEL_14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_11520/*"SELECT_SERVANT_EVENT_JOIN"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    return 0LL;
  }
  if ( item->fields._IsBase_k__BackingField )
  {
    if ( !isBaseSelect )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_10329/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    if ( !RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0LL;
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11507/*"SELECT_NO_SORTIE"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( RecommendSupportServantSelectListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_18;
  if ( item->fields._IsSame_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_10330/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( RecommendSupportServantSelectListViewItem__get_IsUseServant(item, v7) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_12462/*"SUPPORT_SELECT_USE_SUPPORT"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( item->fields._IsEventJoin_k__BackingField )
    goto LABEL_14;
  if ( !item->fields._IsUseInSet_k__BackingField )
  {
    if ( RecommendSupportServantSelectListViewItem__get_IsQuestRestriction(item, v8) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0LL);
    }
    return 0LL;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12412/*"SUPPORT_SELECT_ALREADY_SET"*/, 0LL);
  UseSet_k__BackingField = item->fields._UseSet_k__BackingField;
  v12 = v10;
  v13 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(UseSet_k__BackingField, 0LL);
  return System_String__Format(v12, v13, 0LL);
}


void __fastcall RecommendSupportServantSelectListViewItemDraw__OnDisable(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  RecommendSupportServantSelectListViewItemDraw_c *v3; // x0
  System_Collections_Generic_List_object__o *ItemList; // x0

  if ( (byte_4A5748C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__);
    sub_1B885B0(&RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    byte_4A5748C = 1;
  }
  v3 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v3 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  ItemList = (System_Collections_Generic_List_object__o *)v3->static_fields->ItemList;
  if ( !ItemList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___Remove(
    ItemList,
    (Il2CppObject *)this,
    (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__);
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
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4A57490 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57490 = 1;
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
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    RecommendSupportServantSelectListViewItemDraw__SetWarning(this, item, v14);
    v15 = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
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
      sub_1B8880C(Component_object, v8);
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

  if ( (byte_4A5748D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5748D = 1;
  }
  if ( item && mode )
  {
    IsBase_k__BackingField = item->fields._IsBase_k__BackingField;
    servantFaceIcon = this->fields.servantFaceIcon;
    UserServant_k__BackingField = item->fields._UserServant_k__BackingField;
    EquipList = RecommendSupportServantSelectListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_36;
    ServantFaceIconComponent__Set_38221296(
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
      sub_1B8880C(EquipList, v11);
    }
  }
}


void __fastcall RecommendSupportServantSelectListViewItemDraw__SetWarning(
        RecommendSupportServantSelectListViewItemDraw_o *this,
        RecommendSupportServantSelectListViewItem_o *item,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  int *maskSprite; // x0
  const MethodInfo *v7; // x1
  RecommendSupportServantSelectListViewItemDraw_o *FriendPointBonus; // x0
  const MethodInfo *v9; // x3
  int v10; // w22
  System_String_o *v11; // x23
  float v12; // s0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x23
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v18; // x0
  Il2CppObject *v19; // x22
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_String_o *v27; // x23
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v28; // x22
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  System_String_o *WarningText; // x23
  bool v37; // w1
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v38; // x22
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x22
  RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *v49; // x21
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  System_Object_array *v57; // x1
  RecommendSupportServantSelectListViewItemDraw_c *v58; // x0
  const MethodInfo *v59; // x1
  struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  __int64 v61; // x8
  const MethodInfo *v62; // x1
  System_Collections_Generic_List_object__o *ItemList; // x8
  struct TweenAlpha_o *warningTween; // x20
  struct TweenColor_o *warningTweenColor; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  RecommendSupportServantSelectListViewItemDraw_c *v68; // x0
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  float v73; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4A5748E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    sub_1B885B0(&StringLiteral_11504/*"SELECT_FP_NUM_UP"*/);
    sub_1B885B0(&StringLiteral_11495/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5748E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_85;
  FriendPointBonus = (RecommendSupportServantSelectListViewItemDraw_o *)RecommendSupportServantSelectListViewItem__GetFriendPointBonus(
                                                                          item,
                                                                          v7);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v10 = (int)FriendPointBonus;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11504/*"SELECT_FP_NUM_UP"*/, 0LL);
    v12 = (double)v10 / 1000.0;
    v73 = v12;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v73, v13, v14, v15);
    v17 = System_String__Format(v11, v16, 0LL);
    v18 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1B887FC(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    v75.fields.b = 0.8;
    v74.fields.r = 1.0;
    v74.fields.g = 1.0;
    v74.fields.b = 0.0;
    v74.fields.a = 1.0;
    v75.fields.r = 1.0;
    v75.fields.g = 1.0;
    v75.fields.a = 1.0;
    v19 = (Il2CppObject *)v18;
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor_32550324(v18, v17, v74, v75, 1.0, 0, v20);
    if ( !v5 )
      goto LABEL_85;
    items = v5->fields._items;
    v24 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_85;
    size = v5->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        v19,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v19;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
    }
  }
  if ( item->fields._IsInvalidRarity_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11495/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    v28 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1B887FC(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v28, v27, 0.8, 1, v29);
    if ( !v5 )
      goto LABEL_85;
    v32 = v5->fields._items;
    v33 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !v32 )
      goto LABEL_85;
    v34 = v5->fields._size;
    if ( (unsigned int)v34 >= v32->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v28,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &v32->obj.klass + v34;
      v5->fields._size = v34 + 1;
      v35[4] = (Il2CppClass *)v28;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
    }
  }
  WarningText = RecommendSupportServantSelectListViewItemDraw__GetWarningText(
                  FriendPointBonus,
                  item,
                  item->fields._IsBase_k__BackingField,
                  v9);
  if ( System_String__IsNullOrEmpty(WarningText, 0LL) )
  {
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_85;
    v37 = 0;
  }
  else
  {
    v38 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1B887FC(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
    RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v38, WarningText, 1.0, 0, v39);
    if ( !v5 )
      goto LABEL_85;
    v42 = v5->fields._items;
    v43 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
    ++v5->fields._version;
    if ( !v42 )
      goto LABEL_85;
    v44 = v5->fields._size;
    if ( (unsigned int)v44 >= v42->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v38,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v5->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)v38;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v38, v40, v41);
    }
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_85;
    v37 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v37, 0LL);
  if ( item->fields._IsInvalidRarity_k__BackingField )
  {
    if ( !v5 )
      goto LABEL_85;
    if ( v5->fields._size == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11495/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
      v49 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)sub_1B887FC(RecommendSupportServantSelectListViewItemDraw_WarningLabelText_TypeInfo);
      RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor(v49, v48, 0.8, 1, v50);
      v53 = v5->fields._items;
      v54 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__Add__;
      ++v5->fields._version;
      if ( !v53 )
        goto LABEL_85;
      v55 = v5->fields._size;
      if ( (unsigned int)v55 >= v53->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v49,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &v53->obj.klass + v55;
        v5->fields._size = v55 + 1;
        v56[4] = (Il2CppClass *)v49;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v49, v51, v52);
      }
    }
  }
  else if ( !v5 )
  {
    goto LABEL_85;
  }
  if ( v5->fields._size < 1 )
    v57 = 0LL;
  else
    v57 = System_Collections_Generic_List_object___ToArray(
            v5,
            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = (struct RecommendSupportServantSelectListViewItemDraw_WarningLabelText_array *)v57;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.warningLabelTexts, (int32_t)v57, v46, v47);
  v58 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v58 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v58->static_fields->ItemList;
  if ( !maskSprite )
    goto LABEL_85;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)maskSprite,
    (Il2CppObject *)this,
    (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (v61 = *(_QWORD *)&warningLabelTexts->max_length) == 0 )
  {
    RecommendSupportServantSelectListViewItemDraw__WarningTweenStop(this, v59);
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
  if ( (int)v61 < 2 )
  {
    RecommendSupportServantSelectListViewItemDraw__WarningTweenStop(this, v59);
    goto LABEL_82;
  }
  RecommendSupportServantSelectListViewItemDraw__WarningTweenStart(this, v59);
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
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
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
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
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
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__get_Item__);
    if ( !maskSprite || !warningTweenColor )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenColor_o *, _QWORD, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
      warningTweenColor,
      *((_QWORD *)maskSprite + 14),
      warningTweenColor->klass[1]._1.image);
  }
  v68 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  if ( !RecommendSupportServantSelectListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportServantSelectListViewItemDraw_TypeInfo);
    v68 = RecommendSupportServantSelectListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v68->static_fields->ItemList;
  if ( !maskSprite
    || (v69 = *((_QWORD *)maskSprite + 2),
        v70 = Method_System_Collections_Generic_List_RecommendSupportServantSelectListViewItemDraw__Add__,
        ++maskSprite[7],
        !v69) )
  {
LABEL_85:
    sub_1B8880C(maskSprite, v7);
  }
  v71 = maskSprite[6];
  if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)this,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = v69 + 8 * v71;
    maskSprite[6] = v71 + 1;
    *(_QWORD *)(v72 + 32) = this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v72 + 32), (int32_t)this, v66, v67);
  }
LABEL_82:
  RecommendSupportServantSelectListViewItemDraw__AdvanceWarningLabel(this, v62);
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
    sub_1B8880C(warningTween, method);
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
    sub_1B8880C(0LL, method);
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
  int32_t v10; // w3

  v7 = this;
  v8 = isInvalidSkill;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7->fields.text = s;
  v7 = (RecommendSupportServantSelectListViewItemDraw_WarningLabelText_o *)((char *)v7 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v7, (int32_t)s, v9, v10);
  __asm { FMOV            V0.4S, #1.0 }
  LOWORD(v7->monitor) = 0;
  v7->fields.bottom.fields.r = scaleX;
  v7->fields.top = _Q0;
  *(struct UnityEngine_Color_o *)((char *)&v7->monitor + 4) = _Q0;
  LOBYTE(v7->fields.bottom.fields.g) = v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportServantSelectListViewItemDraw_WarningLabelText___ctor_32550324(
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
  int32_t v18; // w3
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)v15, (int32_t)s, v17, v18);
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