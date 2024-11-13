void __fastcall SupportServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B12C12 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo, v4, v5);
    sub_1BCA7E0(&SupportServantListViewItemDraw_TypeInfo, v6, v7);
    byte_4B12C12 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo,
                                                      v1,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
  SupportServantListViewItemDraw_TypeInfo->static_fields->itemList = (struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SupportServantListViewItemDraw_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  int max_length; // w10
  __int64 warningLabelTextSync2Pattern; // x9
  void *warningLabel; // x0
  SupportServantListViewItemDraw_WarningLabelText_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *itemList; // x8
  struct TweenColor_o *v17; // x20
  struct TweenColor_o *v18; // x8
  float v19; // s0
  float v20; // s1
  int v21; // s0
  int v22; // s1
  int v23; // s2
  int v24; // s3
  struct TweenColor_o *warningTweenColor; // x8
  struct TweenColor_o *v31; // x8
  _BOOL4 isSkillInvalid; // w9
  int32_t v34; // w10
  struct SupportServantListViewItemDraw_WarningLabelText_array *v35; // x9
  UnityEngine_Vector2_o v36; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B12C10 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__, v4, v5);
    sub_1BCA7E0(&SupportServantListViewItemDraw_TypeInfo, v6, v7);
    this = (SupportServantListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B12C10 = 1;
  }
  warningLabelTexts = v3->fields.warningLabelTexts;
  if ( warningLabelTexts )
  {
    max_length = warningLabelTexts->max_length;
    if ( max_length < 2 )
      warningLabelTextSync2Pattern = 0LL;
    else
      warningLabelTextSync2Pattern = v3->fields.warningLabelTextSync2Pattern;
    if ( (unsigned int)warningLabelTextSync2Pattern >= max_length )
      sub_1BCAA44(this, method);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    v14 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
    if ( !v14 )
    {
      UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      warningLabel = v3->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      UILabel__set_applyGradient((UILabel_o *)warningLabel, 0, 0LL);
      warningLabel = v3->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      v37.fields.r = 1.0;
      v37.fields.g = 1.0;
      v37.fields.b = 1.0;
      v37.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)warningLabel, v37, 0LL);
      warningTweenColor = v3->fields.warningTweenColor;
      if ( !warningTweenColor )
        goto LABEL_46;
      __asm { FMOV            V0.4S, #1.0 }
      warningTweenColor->fields.to = _Q0;
      warningLabel = v3->fields.warningTweenColor;
      if ( !warningLabel )
        goto LABEL_46;
      TweenColor__get_value((TweenColor_o *)warningLabel, 0LL);
      goto LABEL_40;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)warningLabel, 0LL);
    GameObjectExtensions__SetLocalScaleX(gameObject, v14->fields.scaleX, 0LL);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)warningLabel, v14->fields.text, 0LL);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_applyGradient((UILabel_o *)warningLabel, v14->fields.gradation, 0LL);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_gradientTop((UILabel_o *)warningLabel, v14->fields.top, 0LL);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_gradientBottom((UILabel_o *)warningLabel, v14->fields.bottom, 0LL);
    if ( v14->fields.coloranime )
    {
      warningLabel = SupportServantListViewItemDraw_TypeInfo;
      if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, method);
        warningLabel = SupportServantListViewItemDraw_TypeInfo;
      }
      itemList = (System_Collections_Generic_List_object__o *)**((_QWORD **)warningLabel + 23);
      if ( !itemList )
        goto LABEL_46;
      if ( itemList->fields._size >= 1 )
      {
        v17 = v3->fields.warningTweenColor;
        if ( !*((_DWORD *)warningLabel + 56) )
        {
          j_il2cpp_runtime_class_init_0(warningLabel, method);
          itemList = (System_Collections_Generic_List_object__o *)SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
          if ( !itemList )
            goto LABEL_46;
        }
        warningLabel = System_Collections_Generic_List_object___get_Item(
                         itemList,
                         0,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
        if ( !warningLabel || !v17 )
          goto LABEL_46;
        warningLabel = (void *)((__int64 (__fastcall *)(struct TweenColor_o *, _QWORD, void *))v17->klass->vtable._8_SynchronizeTween.method)(
                                 v17,
                                 *((_QWORD *)warningLabel + 14),
                                 v17->klass[1]._1.image);
      }
      v18 = v3->fields.warningTweenColor;
      if ( !v18 )
        goto LABEL_46;
      v18->fields.to = (struct UnityEngine_Color_o)xmmword_BD2DA0;
      warningLabel = v3->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      v19 = 2.0;
      v20 = 2.0;
    }
    else
    {
      v31 = v3->fields.warningTweenColor;
      if ( !v31 )
        goto LABEL_46;
      __asm { FMOV            V0.4S, #1.0 }
      isSkillInvalid = v14->fields.isSkillInvalid;
      v31->fields.to = _Q0;
      warningLabel = v3->fields.warningLabel;
      if ( isSkillInvalid )
      {
        if ( !warningLabel )
          goto LABEL_46;
        v36.fields.x = 2.0;
        v36.fields.y = 2.0;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, v36, 0LL);
        warningLabel = v3->fields.warningLabel;
        if ( !warningLabel )
          goto LABEL_46;
        v24 = 1056997505;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        goto LABEL_39;
      }
      if ( !warningLabel )
        goto LABEL_46;
      v19 = 1.0;
      v20 = 1.0;
    }
    UILabel__set_effectDistance((UILabel_o *)warningLabel, *(UnityEngine_Vector2_o *)&v19, 0LL);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 1.0;
LABEL_39:
    UILabel__set_effectColor((UILabel_o *)warningLabel, *(UnityEngine_Color_o *)&v21, 0LL);
LABEL_40:
    v34 = v3->fields.warningLabelTextSync2Pattern;
    v35 = v3->fields.warningLabelTexts;
    v3->fields.warningLabelTextSync2Pattern = v34 + 1;
    v3->fields.warningLabelTextSync2PatternOld = v34;
    if ( v35 )
    {
      if ( v34 + 1 >= (signed int)v35->max_length )
        v3->fields.warningLabelTextSync2Pattern = 0;
      return;
    }
LABEL_46:
    sub_1BCAA3C(warningLabel, method);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportServantListViewItemDraw__GetWarningText(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        bool isBaseSelect,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 *v21; // x8
  const MethodInfo *v22; // x1
  System_String_o *v24; // x0
  int32_t useSet; // w8
  System_String_o *v26; // x19
  Il2CppObject *v27; // x1

  if ( (byte_4B12C0E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, isBaseSelect);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11645/*"SELECT_NO_SORTIE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12618/*"SUPPORT_SELECT_USE_SUPPORT"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_12568/*"SUPPORT_SELECT_ALREADY_SET"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_10462/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/, v16, v17);
    this = (SupportServantListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_10463/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v18, v19);
    byte_4B12C0E = 1;
  }
  if ( !item )
    sub_1BCAA3C(this, item);
  if ( item->fields.isPushMode )
  {
    if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      v21 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v21, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
LABEL_14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      v21 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
      return LocalizationManager__Get((System_String_o *)*v21, 0LL);
    }
    return 0LL;
  }
  if ( item->fields.isBase )
  {
    if ( !isBaseSelect )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v21 = &StringLiteral_10462/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
      return LocalizationManager__Get((System_String_o *)*v21, 0LL);
    }
    if ( !SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0LL;
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v21 = &StringLiteral_11645/*"SELECT_NO_SORTIE"*/;
    return LocalizationManager__Get((System_String_o *)*v21, 0LL);
  }
  if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_18;
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v21 = &StringLiteral_10463/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v21, 0LL);
  }
  if ( SupportServantListViewItem__get_IsUseServant(item, v22) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    v21 = &StringLiteral_12618/*"SUPPORT_SELECT_USE_SUPPORT"*/;
    return LocalizationManager__Get((System_String_o *)*v21, 0LL);
  }
  if ( item->fields.isEventJoin )
    goto LABEL_14;
  if ( !item->fields.isUseInSet )
    return 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SUPPORT_SELECT_ALREADY_SET"*/, 0LL);
  useSet = item->fields.useSet;
  v26 = v24;
  v27 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(useSet, 0LL);
  return System_String__Format(v26, v27, 0LL);
}


void __fastcall SupportServantListViewItemDraw__OnDisable(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SupportServantListViewItemDraw_c *v6; // x0
  System_Collections_Generic_List_object__o *itemList; // x0

  if ( (byte_4B12C0B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__, method, v2);
    sub_1BCA7E0(&SupportServantListViewItemDraw_TypeInfo, v4, v5);
    byte_4B12C0B = 1;
  }
  v6 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, method);
    v6 = SupportServantListViewItemDraw_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_object__o *)v6->static_fields->itemList;
  if ( !itemList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___Remove(
    itemList,
    (Il2CppObject *)this,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
}


void __fastcall SupportServantListViewItemDraw__OnFinishWarningAnime(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SupportServantListViewItemDraw__AdvanceWarningLabel(this, method);
  SupportServantListViewItemDraw__WarningTweenStart(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewItemDraw__SetInput(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *baseButton; // x22
  __int64 v10; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x21

  if ( (byte_4B12C0F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, item, isInput);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B12C0F = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_46;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0LL);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
    SupportServantListViewItemDraw__SetWarning(this, item, v18);
    v20 = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0LL);
        return;
      }
LABEL_46:
      sub_1BCAA3C(Component_object, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v19; // x1
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_4B12C0C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    byte_4B12C0C = 1;
  }
  if ( item && mode )
  {
    isBase = item->fields.isBase;
    servantFaceIcon = this->fields.servantFaceIcon;
    userServantEntity = item->fields.userServantEntity;
    EquipList = SupportServantListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_42;
    ServantFaceIconComponent__Set_38932288(
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      EquipList = (System_Int64_array *)this->fields.selectObject;
      if ( EquipList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EquipList, item->fields.isBase, 0LL);
        return;
      }
LABEL_42:
      sub_1BCAA3C(EquipList, v11);
    }
  }
}


void __fastcall SupportServantListViewItemDraw__SetWarning(
        SupportServantListViewItemDraw_o *this,
        SupportServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_object__o *v36; // x20
  int *maskSprite; // x0
  const MethodInfo *v38; // x1
  SupportServantListViewItemDraw_o *FriendPointBonus; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  int v42; // w22
  System_String_o *v43; // x23
  float v44; // s0
  Il2CppObject *v45; // x0
  System_String_o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  SupportServantListViewItemDraw_WarningLabelText_o *v50; // x0
  Il2CppObject *v51; // x22
  const MethodInfo *v52; // x3
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  System_String_o *v63; // x23
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  SupportServantListViewItemDraw_WarningLabelText_o *v67; // x22
  const MethodInfo *v68; // x3
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  System_String_o *WarningText; // x23
  __int64 v80; // x2
  __int64 v81; // x3
  bool v82; // w1
  SupportServantListViewItemDraw_WarningLabelText_o *v83; // x22
  const MethodInfo *v84; // x3
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_String_o *v101; // x22
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  SupportServantListViewItemDraw_WarningLabelText_o *v105; // x21
  const MethodInfo *v106; // x3
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  Il2CppClass **v116; // x0
  System_Object_array *v117; // x1
  SupportServantListViewItemDraw_c *v118; // x0
  const MethodInfo *v119; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  __int64 v121; // x8
  const MethodInfo *v122; // x1
  System_Collections_Generic_List_object__o *itemList; // x8
  struct TweenAlpha_o *warningTween; // x20
  struct TweenColor_o *warningTweenColor; // x20
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  SupportServantListViewItemDraw_c *v132; // x0
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  __int64 v136; // x8
  float v137; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v139; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4B12C0D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__,
      item,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__get_Count__,
      v14,
      v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&float_TypeInfo, v24, v25);
    sub_1BCA7E0(&SupportServantListViewItemDraw_TypeInfo, v26, v27);
    sub_1BCA7E0(&SupportServantListViewItemDraw_WarningLabelText_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_11642/*"SELECT_FP_NUM_UP"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_11633/*"SELECT_BONUS_SKILL_INVALID"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v34, v35);
    byte_4B12C0D = 1;
  }
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo,
                                                       item,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_85;
  FriendPointBonus = (SupportServantListViewItemDraw_o *)SupportServantListViewItem__GetFriendPointBonus(item, v38);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v42 = (int)FriendPointBonus;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11642/*"SELECT_FP_NUM_UP"*/, 0LL);
    v44 = (double)v42 / 1000.0;
    v137 = v44;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v137);
    v46 = System_String__Format(v43, v45, 0LL);
    v50 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1BCAA2C(
                                                                 SupportServantListViewItemDraw_WarningLabelText_TypeInfo,
                                                                 v47,
                                                                 v48,
                                                                 v49);
    v139.fields.b = 0.8;
    v138.fields.r = 1.0;
    v138.fields.g = 1.0;
    v138.fields.b = 0.0;
    v138.fields.a = 1.0;
    v139.fields.r = 1.0;
    v139.fields.g = 1.0;
    v139.fields.a = 1.0;
    v51 = (Il2CppObject *)v50;
    SupportServantListViewItemDraw_WarningLabelText___ctor_34047332(v50, v46, v138, v139, 1.0, 0, v52);
    if ( !v36 )
      goto LABEL_85;
    items = v36->fields._items;
    v60 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v36->fields._version;
    if ( !items )
      goto LABEL_85;
    size = v36->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        v51,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = &items->obj.klass + size;
      v36->fields._size = size + 1;
      v62[4] = (Il2CppClass *)v51;
      sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v51, v53, v54, v55, v56, v57, v58);
    }
  }
  if ( item->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11633/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    v67 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1BCAA2C(
                                                                 SupportServantListViewItemDraw_WarningLabelText_TypeInfo,
                                                                 v64,
                                                                 v65,
                                                                 v66);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v67, v63, 0.8, 1, v68);
    if ( !v36 )
      goto LABEL_85;
    v75 = v36->fields._items;
    v76 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v36->fields._version;
    if ( !v75 )
      goto LABEL_85;
    v77 = v36->fields._size;
    if ( (unsigned int)v77 >= v75->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)v67,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = &v75->obj.klass + v77;
      v36->fields._size = v77 + 1;
      v78[4] = (Il2CppClass *)v67;
      sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 4), (int64_t)v67, v69, v70, v71, v72, v73, v74);
    }
  }
  WarningText = SupportServantListViewItemDraw__GetWarningText(FriendPointBonus, item, item->fields.isBase, v41);
  if ( System_String__IsNullOrEmpty(WarningText, 0LL) )
  {
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_85;
    v82 = 0;
  }
  else
  {
    v83 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1BCAA2C(
                                                                 SupportServantListViewItemDraw_WarningLabelText_TypeInfo,
                                                                 v38,
                                                                 v80,
                                                                 v81);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v83, WarningText, 1.0, 0, v84);
    if ( !v36 )
      goto LABEL_85;
    v91 = v36->fields._items;
    v92 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v36->fields._version;
    if ( !v91 )
      goto LABEL_85;
    v93 = v36->fields._size;
    if ( (unsigned int)v93 >= v91->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)v83,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    }
    else
    {
      v94 = &v91->obj.klass + v93;
      v36->fields._size = v93 + 1;
      v94[4] = (Il2CppClass *)v83;
      sub_1BCA784((PartyOrganizationUtility_o *)(v94 + 4), (int64_t)v83, v85, v86, v87, v88, v89, v90);
    }
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_85;
    v82 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v82, 0LL);
  if ( item->fields.isInvalidRarity )
  {
    if ( !v36 )
      goto LABEL_85;
    if ( v36->fields._size == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11633/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
      v105 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1BCAA2C(
                                                                    SupportServantListViewItemDraw_WarningLabelText_TypeInfo,
                                                                    v102,
                                                                    v103,
                                                                    v104);
      SupportServantListViewItemDraw_WarningLabelText___ctor(v105, v101, 0.8, 1, v106);
      v113 = v36->fields._items;
      v114 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
      ++v36->fields._version;
      if ( !v113 )
        goto LABEL_85;
      v115 = v36->fields._size;
      if ( (unsigned int)v115 >= v113->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v105,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
      }
      else
      {
        v116 = &v113->obj.klass + v115;
        v36->fields._size = v115 + 1;
        v116[4] = (Il2CppClass *)v105;
        sub_1BCA784((PartyOrganizationUtility_o *)(v116 + 4), (int64_t)v105, v107, v108, v109, v110, v111, v112);
      }
    }
  }
  else if ( !v36 )
  {
    goto LABEL_85;
  }
  if ( v36->fields._size < 1 )
    v117 = 0LL;
  else
    v117 = System_Collections_Generic_List_object___ToArray(
             v36,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = (struct SupportServantListViewItemDraw_WarningLabelText_array *)v117;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.warningLabelTexts,
    (int64_t)v117,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  v118 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, v38);
    v118 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v118->static_fields->itemList;
  if ( !maskSprite )
    goto LABEL_85;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)maskSprite,
    (Il2CppObject *)this,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (v121 = *(_QWORD *)&warningLabelTexts->max_length) == 0 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v119);
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
  if ( (int)v121 < 2 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v119);
    goto LABEL_82;
  }
  SupportServantListViewItemDraw__WarningTweenStart(this, v119);
  maskSprite = (int *)SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, v38);
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
      j_il2cpp_runtime_class_init_0(maskSprite, v38);
      itemList = (System_Collections_Generic_List_object__o *)SupportServantListViewItemDraw_TypeInfo->static_fields->itemList;
      if ( !itemList )
        goto LABEL_85;
    }
    maskSprite = (int *)System_Collections_Generic_List_object___get_Item(
                          itemList,
                          0,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
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
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
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
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    if ( !maskSprite || !warningTweenColor )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenColor_o *, _QWORD, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
      warningTweenColor,
      *((_QWORD *)maskSprite + 14),
      warningTweenColor->klass[1]._1.image);
  }
  v132 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, v38);
    v132 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v132->static_fields->itemList;
  if ( !maskSprite
    || (v133 = *((_QWORD *)maskSprite + 2),
        v134 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__,
        ++maskSprite[7],
        !v133) )
  {
LABEL_85:
    sub_1BCAA3C(maskSprite, v38);
  }
  v135 = maskSprite[6];
  if ( (unsigned int)v135 >= *(_DWORD *)(v133 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
  }
  else
  {
    v136 = v133 + 8 * v135;
    maskSprite[6] = v135 + 1;
    *(_QWORD *)(v136 + 32) = this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v136 + 32), (int64_t)this, v126, v127, v128, v129, v130, v131);
  }
LABEL_82:
  SupportServantListViewItemDraw__AdvanceWarningLabel(this, v122);
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
  __int64 v2; // x2
  SupportServantListViewItemDraw_o *v3; // x19
  struct TweenAlpha_o *warningTween; // x20
  SupportServantListViewItemDraw_c *v5; // x8
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B12C11 & 1) == 0 )
  {
    this = (SupportServantListViewItemDraw_o *)sub_1BCA7E0(&SupportServantListViewItemDraw_TypeInfo, method, v2);
    byte_4B12C11 = 1;
  }
  warningTween = v3->fields.warningTween;
  if ( !warningTween )
    goto LABEL_11;
  *(_QWORD *)&warningTween->fields.from = 0x3F80000000000000LL;
  v5 = SupportServantListViewItemDraw_TypeInfo;
  if ( SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    this = (SupportServantListViewItemDraw_o *)warningTween;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo, method);
    v5 = SupportServantListViewItemDraw_TypeInfo;
    this = (SupportServantListViewItemDraw_o *)v3->fields.warningTween;
  }
  warningTween->fields.duration = v5->static_fields->changeTimeSecond;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL),
        (this = (SupportServantListViewItemDraw_o *)v3->fields.warningTween) == 0LL)
    || (UITweener__ResetToBeginning((UITweener_o *)this, 0LL),
        (this = (SupportServantListViewItemDraw_o *)v3->fields.warningLabel) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, method);
  }
  v6.fields.r = 0.0;
  v6.fields.g = 0.0;
  v6.fields.b = 0.0;
  v6.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)this, v6, 0LL);
}


void __fastcall SupportServantListViewItemDraw__WarningTweenStop(
        SupportServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct TweenAlpha_o *warningTween; // x0

  warningTween = this->fields.warningTween;
  if ( !warningTween )
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784((PartyOrganizationUtility_o *)v7, (int64_t)s, v9, v10, v11, v12, v13, v14);
  __asm { FMOV            V0.4S, #1.0 }
  LOWORD(v7->monitor) = 0;
  v7->fields.bottom.fields.r = scaleX;
  v7->fields.top = _Q0;
  *(struct UnityEngine_Color_o *)((char *)&v7->monitor + 4) = _Q0;
  LOBYTE(v7->fields.bottom.fields.g) = v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewItemDraw_WarningLabelText___ctor_34047332(
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
  sub_1BCA784((PartyOrganizationUtility_o *)v15, (int64_t)s, v17, v18, v19, v20, v21, v22);
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