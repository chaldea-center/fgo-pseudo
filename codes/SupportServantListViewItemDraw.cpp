void __fastcall SupportServantListViewItemDraw___cctor(const MethodInfo *method)
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

  if ( (byte_4BB109D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__, v1);
    sub_1C13D24(&System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo, v2);
    sub_1C13D24(&SupportServantListViewItemDraw_TypeInfo, v3);
    byte_4BB109D = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
  SupportServantListViewItemDraw_TypeInfo->static_fields->itemList = (struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *)v4;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)SupportServantListViewItemDraw_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 warningLabelTextSync2Pattern; // x9
  void *warningLabel; // x0
  SupportServantListViewItemDraw_WarningLabelText_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *itemList; // x8
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
  struct SupportServantListViewItemDraw_WarningLabelText_array *v31; // x9
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4BB109B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__, v3);
    sub_1C13D24(&SupportServantListViewItemDraw_TypeInfo, v4);
    this = (SupportServantListViewItemDraw_o *)sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB109B = 1;
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
      sub_1C13F88(this, method);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    v10 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
    if ( !v10 )
    {
      UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      UILabel__set_applyGradient((UILabel_o *)warningLabel, 0, 0LL);
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      v33.fields.r = 1.0;
      v33.fields.g = 1.0;
      v33.fields.b = 1.0;
      v33.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)warningLabel, v33, 0LL);
      warningTweenColor = v2->fields.warningTweenColor;
      if ( !warningTweenColor )
        goto LABEL_46;
      __asm { FMOV            V0.4S, #1.0 }
      warningTweenColor->fields.to = _Q0;
      warningLabel = v2->fields.warningTweenColor;
      if ( !warningLabel )
        goto LABEL_46;
      TweenColor__get_value((TweenColor_o *)warningLabel, 0LL);
      goto LABEL_40;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)warningLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(gameObject, v10->fields.scaleX, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)warningLabel, v10->fields.text, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_applyGradient((UILabel_o *)warningLabel, v10->fields.gradation, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_gradientTop((UILabel_o *)warningLabel, v10->fields.top, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_gradientBottom((UILabel_o *)warningLabel, v10->fields.bottom, 0LL);
    if ( v10->fields.coloranime )
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
        v13 = v2->fields.warningTweenColor;
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
                         (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
        if ( !warningLabel || !v13 )
          goto LABEL_46;
        warningLabel = (void *)((__int64 (__fastcall *)(struct TweenColor_o *, _QWORD, void *))v13->klass->vtable._8_SynchronizeTween.method)(
                                 v13,
                                 *((_QWORD *)warningLabel + 14),
                                 v13->klass[1]._1.image);
      }
      v14 = v2->fields.warningTweenColor;
      if ( !v14 )
        goto LABEL_46;
      v14->fields.to = (struct UnityEngine_Color_o)xmmword_BF6B30;
      warningLabel = v2->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      v15 = 2.0;
      v16 = 2.0;
    }
    else
    {
      v27 = v2->fields.warningTweenColor;
      if ( !v27 )
        goto LABEL_46;
      __asm { FMOV            V0.4S, #1.0 }
      isSkillInvalid = v10->fields.isSkillInvalid;
      v27->fields.to = _Q0;
      warningLabel = v2->fields.warningLabel;
      if ( isSkillInvalid )
      {
        if ( !warningLabel )
          goto LABEL_46;
        v32.fields.x = 2.0;
        v32.fields.y = 2.0;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, v32, 0LL);
        warningLabel = v2->fields.warningLabel;
        if ( !warningLabel )
          goto LABEL_46;
        v20 = 1056997505;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        goto LABEL_39;
      }
      if ( !warningLabel )
        goto LABEL_46;
      v15 = 1.0;
      v16 = 1.0;
    }
    UILabel__set_effectDistance((UILabel_o *)warningLabel, *(UnityEngine_Vector2_o *)&v15, 0LL);
    warningLabel = v2->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 1.0;
LABEL_39:
    UILabel__set_effectColor((UILabel_o *)warningLabel, *(UnityEngine_Color_o *)&v17, 0LL);
LABEL_40:
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
LABEL_46:
    sub_1C13F80(warningLabel, method);
  }
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

  if ( (byte_4BB1099 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, item);
    sub_1C13D24(&StringLiteral_11693/*"SDK_INT"*/, v6);
    sub_1C13D24(&StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/, v7);
    sub_1C13D24(&StringLiteral_11704/*"SELECT_CANNOT"*/, v8);
    sub_1C13D24(&StringLiteral_12684/*"SUPPORT_SELECT_HELP"*/, v9);
    sub_1C13D24(&StringLiteral_12634/*"SUPPORT_KIND_2"*/, v10);
    sub_1C13D24(&StringLiteral_10514/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/, v11);
    this = (SupportServantListViewItemDraw_o *)sub_1C13D24(&StringLiteral_10515/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/, v12);
    byte_4BB1099 = 1;
  }
  if ( !item )
    sub_1C13F80(this, item);
  if ( item->fields.isPushMode )
  {
    if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_11693/*"SDK_INT"*/;
      return LocalizationManager__Get((System_String_o *)*v13, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
LABEL_14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_11717/*"SELECT_NO_SORTIE_FATIGURE"*/;
      return LocalizationManager__Get((System_String_o *)*v13, 0LL);
    }
    return 0LL;
  }
  if ( item->fields.isBase )
  {
    if ( !isBaseSelect )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_10514/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_MY_SERVANT_OR_SUPPORT_NOT_SINGLE_SUPPORT"*/;
      return LocalizationManager__Get((System_String_o *)*v13, 0LL);
    }
    if ( !SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0LL;
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_11704/*"SELECT_CANNOT"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
  }
  if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_18;
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_10515/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_NPC"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
  }
  if ( SupportServantListViewItem__get_IsUseServant(item, v14) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_12684/*"SUPPORT_SELECT_HELP"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
  }
  if ( item->fields.isEventJoin )
    goto LABEL_14;
  if ( !item->fields.isUseInSet )
    return 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12634/*"SUPPORT_KIND_2"*/, 0LL);
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
  System_Collections_Generic_List_object__o *itemList; // x0

  if ( (byte_4BB1096 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__, method);
    sub_1C13D24(&SupportServantListViewItemDraw_TypeInfo, v3);
    byte_4BB1096 = 1;
  }
  v4 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v4 = SupportServantListViewItemDraw_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_object__o *)v4->static_fields->itemList;
  if ( !itemList )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_List_object___Remove(
    itemList,
    (Il2CppObject *)this,
    (const MethodInfo_362E6F4 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
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
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *v18; // x21

  if ( (byte_4BB109A & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB109A = 1;
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
        goto LABEL_46;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_46;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_46;
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
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0LL);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_object )
        goto LABEL_46;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_46;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isLock, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_object )
        goto LABEL_46;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_46;
      if ( item->fields.isSwapChoice )
        isChoice = !item->fields.isChoice;
      else
        isChoice = item->fields.isChoice;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isChoice, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !Component_object )
        goto LABEL_46;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0LL);
    }
    SupportServantListViewItemDraw__SetWarning(this, item, v17);
    v18 = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0LL);
        return;
      }
LABEL_46:
      sub_1C13F80(Component_object, v9);
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
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_4BB1097 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, item);
    byte_4BB1097 = 1;
  }
  if ( item && mode )
  {
    isBase = item->fields.isBase;
    servantFaceIcon = this->fields.servantFaceIcon;
    userServantEntity = item->fields.userServantEntity;
    EquipList = SupportServantListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_42;
    ServantFaceIconComponent__Set_39365076(
      servantFaceIcon,
      userServantEntity,
      EquipList,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    if ( isBase )
    {
      partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
      {
        EquipList = (System_Int64_array *)this->fields.partyIcon;
        if ( !EquipList )
          goto LABEL_42;
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
        goto LABEL_42;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0LL);
      if ( !EquipList )
        goto LABEL_42;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, isLock, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.choiceSprite;
      if ( !EquipList )
        goto LABEL_42;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0LL);
      if ( !EquipList )
        goto LABEL_42;
      if ( item->fields.isSwapChoice )
        isChoice = !item->fields.isChoice;
      else
        isChoice = item->fields.isChoice;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, isChoice, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.pushSprite;
      if ( !EquipList )
        goto LABEL_42;
      EquipList = (System_Int64_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EquipList, 0LL);
      if ( !EquipList )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, item->fields.isPush, 0LL);
    }
    SupportServantListViewItemDraw__SetWarning(this, item, v18);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.selectObject;
      if ( EquipList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, item->fields.isBase, 0LL);
        return;
      }
LABEL_42:
      sub_1C13F80(EquipList, v11);
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
  System_Collections_Generic_List_object__o *v20; // x20
  int *maskSprite; // x0
  const MethodInfo *v22; // x1
  SupportServantListViewItemDraw_o *FriendPointBonus; // x0
  const MethodInfo *v24; // x3
  int v25; // w22
  System_String_o *v26; // x23
  float v27; // s0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  System_String_o *v32; // x23
  SupportServantListViewItemDraw_WarningLabelText_o *v33; // x0
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
  SupportServantListViewItemDraw_WarningLabelText_o *v47; // x22
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
  SupportServantListViewItemDraw_WarningLabelText_o *v61; // x22
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
  SupportServantListViewItemDraw_WarningLabelText_o *v80; // x21
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
  SupportServantListViewItemDraw_c *v93; // x0
  const MethodInfo *v94; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  __int64 v96; // x8
  const MethodInfo *v97; // x1
  System_Collections_Generic_List_object__o *itemList; // x8
  struct TweenAlpha_o *warningTween; // x20
  struct TweenColor_o *warningTweenColor; // x20
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  SupportServantListViewItemDraw_c *v107; // x0
  __int64 v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  __int64 v111; // x8
  float v112; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4BB1098 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__, item);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__, v8);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__get_Count__,
      v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__, v11);
    sub_1C13D24(&System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo, v12);
    sub_1C13D24(&LocalizationManager_TypeInfo, v13);
    sub_1C13D24(&float_TypeInfo, v14);
    sub_1C13D24(&SupportServantListViewItemDraw_TypeInfo, v15);
    sub_1C13D24(&SupportServantListViewItemDraw_WarningLabelText_TypeInfo, v16);
    sub_1C13D24(&StringLiteral_11701/*"SELECTED_COMMAND_CODE"*/, v17);
    sub_1C13D24(&StringLiteral_11692/*"SCRIPT_PLAY_SELECT_OK"*/, v18);
    sub_1C13D24(&StringLiteral_1/*""*/, v19);
    byte_4BB1098 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_85;
  FriendPointBonus = (SupportServantListViewItemDraw_o *)SupportServantListViewItem__GetFriendPointBonus(item, v22);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v25 = (int)FriendPointBonus;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11701/*"SELECTED_COMMAND_CODE"*/, 0LL);
    v27 = (double)v25 / 1000.0;
    v112 = v27;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v112, v28, v29, v30);
    v32 = System_String__Format(v26, v31, 0LL);
    v33 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C13F70(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    v114.fields.b = 0.8;
    v113.fields.r = 1.0;
    v113.fields.g = 1.0;
    v113.fields.b = 0.0;
    v113.fields.a = 1.0;
    v114.fields.r = 1.0;
    v114.fields.g = 1.0;
    v114.fields.a = 1.0;
    v34 = (Il2CppObject *)v33;
    SupportServantListViewItemDraw_WarningLabelText___ctor_34427388(v33, v32, v113, v114, 1.0, 0, v35);
    if ( !v20 )
      goto LABEL_85;
    items = v20->fields._items;
    v43 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_85;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        v34,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v45[4] = (Il2CppClass *)v34;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v34, v36, v37, v38, v39, v40, v41);
    }
  }
  if ( item->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SCRIPT_PLAY_SELECT_OK"*/, 0LL);
    v47 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C13F70(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v47, v46, 0.8, 1, v48);
    if ( !v20 )
      goto LABEL_85;
    v55 = v20->fields._items;
    v56 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !v55 )
      goto LABEL_85;
    v57 = v20->fields._size;
    if ( (unsigned int)v57 >= v55->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v47,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      v20->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v47;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v47, v49, v50, v51, v52, v53, v54);
    }
  }
  WarningText = SupportServantListViewItemDraw__GetWarningText(FriendPointBonus, item, item->fields.isBase, v24);
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
    v61 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C13F70(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v61, WarningText, 1.0, 0, v62);
    if ( !v20 )
      goto LABEL_85;
    v69 = v20->fields._items;
    v70 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !v69 )
      goto LABEL_85;
    v71 = v20->fields._size;
    if ( (unsigned int)v71 >= v69->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v61,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = &v69->obj.klass + v71;
      v20->fields._size = v71 + 1;
      v72[4] = (Il2CppClass *)v61;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v72 + 4), (int64_t)v61, v63, v64, v65, v66, v67, v68);
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
  if ( item->fields.isInvalidRarity )
  {
    if ( !v20 )
      goto LABEL_85;
    if ( v20->fields._size == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SCRIPT_PLAY_SELECT_OK"*/, 0LL);
      v80 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1C13F70(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
      SupportServantListViewItemDraw_WarningLabelText___ctor(v80, v79, 0.8, 1, v81);
      v88 = v20->fields._items;
      v89 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
      ++v20->fields._version;
      if ( !v88 )
        goto LABEL_85;
      v90 = v20->fields._size;
      if ( (unsigned int)v90 >= v88->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v80,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = &v88->obj.klass + v90;
        v20->fields._size = v90 + 1;
        v91[4] = (Il2CppClass *)v80;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v80, v82, v83, v84, v85, v86, v87);
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
            (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = (struct SupportServantListViewItemDraw_WarningLabelText_array *)v92;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.warningLabelTexts, (int64_t)v92, v73, v74, v75, v76, v77, v78);
  v93 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v93 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v93->static_fields->itemList;
  if ( !maskSprite )
    goto LABEL_85;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)maskSprite,
    (Il2CppObject *)this,
    (const MethodInfo_362E6F4 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (v96 = *(_QWORD *)&warningLabelTexts->max_length) == 0 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v94);
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
    SupportServantListViewItemDraw__WarningTweenStop(this, v94);
    goto LABEL_82;
  }
  SupportServantListViewItemDraw__WarningTweenStart(this, v94);
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
      itemList = (System_Collections_Generic_List_object__o *)SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
      if ( !itemList )
        goto LABEL_85;
    }
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          0,
                          (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
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
                          (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    if ( !maskSprite )
      goto LABEL_85;
    if ( !warningTween )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenAlpha_o *, _QWORD, void *))warningTween->klass->vtable._8_SynchronizeTween.method)(
      warningTween,
      *((_QWORD *)maskSprite + 13),
      warningTween->klass[1]._1.image);
    maskSprite = (int *)SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
    if ( !maskSprite )
      goto LABEL_85;
    warningTweenColor = this->fields.warningTweenColor;
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)maskSprite,
                          0,
                          (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    if ( !maskSprite || !warningTweenColor )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenColor_o *, _QWORD, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
      warningTweenColor,
      *((_QWORD *)maskSprite + 14),
      warningTweenColor->klass[1]._1.image);
  }
  v107 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v107 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v107->static_fields->itemList;
  if ( !maskSprite
    || (v108 = *((_QWORD *)maskSprite + 2),
        v109 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__,
        ++maskSprite[7],
        !v108) )
  {
LABEL_85:
    sub_1C13F80(maskSprite, v22);
  }
  v110 = maskSprite[6];
  if ( (unsigned int)v110 >= *(_DWORD *)(v108 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)this,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v111 = v108 + 8 * v110;
    maskSprite[6] = v110 + 1;
    *(_QWORD *)(v111 + 32) = this;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v111 + 32), (int64_t)this, v101, v102, v103, v104, v105, v106);
  }
LABEL_82:
  SupportServantListViewItemDraw__AdvanceWarningLabel(this, v97);
  maskSprite = (int *)this->fields.warningLabel;
  if ( !maskSprite )
    goto LABEL_85;
  maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
}


void __fastcall SupportServantListViewItemDraw__WarningTweenStart(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  SupportServantListViewItemDraw_o *v2; // x19
  struct TweenAlpha_o *warningTween; // x20
  SupportServantListViewItemDraw_c *v4; // x8
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4BB109C & 1) == 0 )
  {
    this = (SupportServantListViewItemDraw_o *)sub_1C13D24(&SupportServantListViewItemDraw_TypeInfo, method);
    byte_4BB109C = 1;
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
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL),
        (this = (SupportServantListViewItemDraw_o *)v2->fields.warningTween) == 0LL)
    || (UITweener__ResetToBeginning((UITweener_o *)this, 0LL),
        (this = (SupportServantListViewItemDraw_o *)v2->fields.warningLabel) == 0LL) )
  {
LABEL_11:
    sub_1C13F80(this, method);
  }
  v5.fields.r = 0.0;
  v5.fields.g = 0.0;
  v5.fields.b = 0.0;
  v5.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)this, v5, 0LL);
}


void __fastcall SupportServantListViewItemDraw__WarningTweenStop(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct TweenAlpha_o *warningTween; // x0

  warningTween = this->fields.warningTween;
  if ( !warningTween )
    sub_1C13F80(0LL, method);
  warningTween->fields.duration = 0.0;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningTween, 0, 0LL);
}


void __fastcall SupportServantListViewItemDraw_WarningLabelText___ctor(
        SupportServantListViewItemDraw_WarningLabelText_o *this,
        System_String_o *s,
        float scaleX,
        bool isSkillInvalid,
        const MethodInfo *method)
{
  SupportServantListViewItemDraw_WarningLabelText_o *v7; // x20
  bool v8; // w21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v7 = this;
  v8 = isSkillInvalid;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7->fields.text = s;
  v7 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v7 + 16);
  sub_1C13CC8((PartyOrganizationUtility_o *)v7, (int64_t)s, v9, v10, v11, v12, v13, v14);
  __asm { FMOV            V0.4S, #1.0 }
  LOWORD(v7->monitor) = 0;
  v7->fields.bottom.fields.r = scaleX;
  v7->fields.top = _Q0;
  *(struct UnityEngine_Color_o *)((char *)&v7->monitor + 4) = _Q0;
  LOBYTE(v7->fields.bottom.fields.g) = v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewItemDraw_WarningLabelText___ctor_34427388(
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
  v16 = isSkillInvalid;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15->fields.text = s;
  v15 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v15 + 16);
  sub_1C13CC8((PartyOrganizationUtility_o *)v15, (int64_t)s, v17, v18, v19, v20, v21, v22);
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