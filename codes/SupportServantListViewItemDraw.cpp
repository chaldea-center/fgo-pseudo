void __fastcall SupportServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B18D40 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__, v1);
    sub_1BCAFF8(&System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo, v2);
    sub_1BCAFF8(&SupportServantListViewItemDraw_TypeInfo, v3);
    byte_4B18D40 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SupportServantListViewItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw___ctor__);
  SupportServantListViewItemDraw_TypeInfo->static_fields->itemList = (struct System_Collections_Generic_List_SupportServantListViewItemDraw__o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)SupportServantListViewItemDraw_TypeInfo->static_fields, (int32_t)v4, v5, v6);
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
  __int64 warningLabelTextSync2Pattern; // x9
  void *warningLabel; // x0
  SupportServantListViewItemDraw_WarningLabelText_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_object__o *itemList; // x8
  struct TweenColor_o *v14; // x20
  struct TweenColor_o *v15; // x8
  float v16; // s0
  float v17; // s1
  int v18; // s0
  int v19; // s1
  int v20; // s2
  int v21; // s3
  struct TweenColor_o *warningTweenColor; // x8
  struct TweenColor_o *v28; // x8
  _BOOL4 isSkillInvalid; // w9
  int32_t v31; // w10
  struct SupportServantListViewItemDraw_WarningLabelText_array *v32; // x9
  UnityEngine_Vector2_o v33; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B18D3E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__, v4);
    sub_1BCAFF8(&SupportServantListViewItemDraw_TypeInfo, v5);
    this = (SupportServantListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v6);
    byte_4B18D3E = 1;
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
      sub_1BCB25C(this, method, v2);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    v11 = warningLabelTexts->m_Items[warningLabelTextSync2Pattern];
    if ( !v11 )
    {
      UILabel__set_text((UILabel_o *)warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      warningLabel = v3->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      UILabel__set_applyGradient((UILabel_o *)warningLabel, 0, 0LL);
      warningLabel = v3->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      v34.fields.r = 1.0;
      v34.fields.g = 1.0;
      v34.fields.b = 1.0;
      v34.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)warningLabel, v34, 0LL);
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
    GameObjectExtensions__SetLocalScaleX(gameObject, v11->fields.scaleX, 0LL);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)warningLabel, v11->fields.text, 0LL);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_applyGradient((UILabel_o *)warningLabel, v11->fields.gradation, 0LL);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_gradientTop((UILabel_o *)warningLabel, v11->fields.top, 0LL);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    UILabel__set_gradientBottom((UILabel_o *)warningLabel, v11->fields.bottom, 0LL);
    if ( v11->fields.coloranime )
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
        v14 = v3->fields.warningTweenColor;
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
                         (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
        if ( !warningLabel || !v14 )
          goto LABEL_46;
        warningLabel = (void *)((__int64 (__fastcall *)(struct TweenColor_o *, _QWORD, void *))v14->klass->vtable._8_SynchronizeTween.method)(
                                 v14,
                                 *((_QWORD *)warningLabel + 14),
                                 v14->klass[1]._1.image);
      }
      v15 = v3->fields.warningTweenColor;
      if ( !v15 )
        goto LABEL_46;
      v15->fields.to = (struct UnityEngine_Color_o)xmmword_BE25B0;
      warningLabel = v3->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_46;
      v16 = 2.0;
      v17 = 2.0;
    }
    else
    {
      v28 = v3->fields.warningTweenColor;
      if ( !v28 )
        goto LABEL_46;
      __asm { FMOV            V0.4S, #1.0 }
      isSkillInvalid = v11->fields.isSkillInvalid;
      v28->fields.to = _Q0;
      warningLabel = v3->fields.warningLabel;
      if ( isSkillInvalid )
      {
        if ( !warningLabel )
          goto LABEL_46;
        v33.fields.x = 2.0;
        v33.fields.y = 2.0;
        UILabel__set_effectDistance((UILabel_o *)warningLabel, v33, 0LL);
        warningLabel = v3->fields.warningLabel;
        if ( !warningLabel )
          goto LABEL_46;
        v21 = 1056997505;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        goto LABEL_39;
      }
      if ( !warningLabel )
        goto LABEL_46;
      v16 = 1.0;
      v17 = 1.0;
    }
    UILabel__set_effectDistance((UILabel_o *)warningLabel, *(UnityEngine_Vector2_o *)&v16, 0LL);
    warningLabel = v3->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_46;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 1.0;
LABEL_39:
    UILabel__set_effectColor((UILabel_o *)warningLabel, *(UnityEngine_Color_o *)&v18, 0LL);
LABEL_40:
    v31 = v3->fields.warningLabelTextSync2Pattern;
    v32 = v3->fields.warningLabelTexts;
    v3->fields.warningLabelTextSync2Pattern = v31 + 1;
    v3->fields.warningLabelTextSync2PatternOld = v31;
    if ( v32 )
    {
      if ( v31 + 1 >= (signed int)v32->max_length )
        v3->fields.warningLabelTextSync2Pattern = 0;
      return;
    }
LABEL_46:
    sub_1BCB254(warningLabel, method);
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

  if ( (byte_4B18D3C & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, item);
    sub_1BCAFF8(&StringLiteral_11417/*"SELECT_CANNOT"*/, v6);
    sub_1BCAFF8(&StringLiteral_11448/*"SELECT_SERVANT_EVENT_JOIN"*/, v7);
    sub_1BCAFF8(&StringLiteral_11435/*"SELECT_NO_SORTIE"*/, v8);
    sub_1BCAFF8(&StringLiteral_12458/*"SUPPORT_SELECT_USE_SUPPORT"*/, v9);
    sub_1BCAFF8(&StringLiteral_12408/*"SUPPORT_SELECT_ALREADY_SET"*/, v10);
    sub_1BCAFF8(&StringLiteral_10235/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/, v11);
    this = (SupportServantListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_10236/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v12);
    byte_4B18D3C = 1;
  }
  if ( !item )
    sub_1BCB254(this, item);
  if ( item->fields.isPushMode )
  {
    if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_11417/*"SELECT_CANNOT"*/;
      return LocalizationManager__Get((System_String_o *)*v13, 0LL);
    }
    if ( item->fields.isEventJoin )
    {
LABEL_14:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_11448/*"SELECT_SERVANT_EVENT_JOIN"*/;
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
      v13 = &StringLiteral_10235/*"PARTY_ORGANIZATION_SERVANT_REMOVE_LEADER"*/;
      return LocalizationManager__Get((System_String_o *)*v13, 0LL);
    }
    if ( !SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
      return 0LL;
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_11435/*"SELECT_NO_SORTIE"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
  }
  if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(item, (const MethodInfo *)item) )
    goto LABEL_18;
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_10236/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
  }
  if ( SupportServantListViewItem__get_IsUseServant(item, v14) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_12458/*"SUPPORT_SELECT_USE_SUPPORT"*/;
    return LocalizationManager__Get((System_String_o *)*v13, 0LL);
  }
  if ( item->fields.isEventJoin )
    goto LABEL_14;
  if ( !item->fields.isUseInSet )
    return 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12408/*"SUPPORT_SELECT_ALREADY_SET"*/, 0LL);
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

  if ( (byte_4B18D39 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__, method);
    sub_1BCAFF8(&SupportServantListViewItemDraw_TypeInfo, v3);
    byte_4B18D39 = 1;
  }
  v4 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v4 = SupportServantListViewItemDraw_TypeInfo;
  }
  itemList = (System_Collections_Generic_List_object__o *)v4->static_fields->itemList;
  if ( !itemList )
    sub_1BCB254(0LL, method);
  System_Collections_Generic_List_object___Remove(
    itemList,
    (Il2CppObject *)this,
    (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
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

  if ( (byte_4B18D3D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B18D3D = 1;
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
                                                      (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1BCB254(Component_object, v9);
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

  if ( (byte_4B18D3A & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B18D3A = 1;
  }
  if ( item && mode )
  {
    isBase = item->fields.isBase;
    servantFaceIcon = this->fields.servantFaceIcon;
    userServantEntity = item->fields.userServantEntity;
    EquipList = SupportServantListViewItem__GetEquipList(item, (const MethodInfo *)item);
    if ( !servantFaceIcon )
      goto LABEL_42;
    ServantFaceIconComponent__Set_40190252(
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
      sub_1BCB254(EquipList, v11);
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
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_String_o *v42; // x23
  SupportServantListViewItemDraw_WarningLabelText_o *v43; // x22
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  System_String_o *WarningText; // x23
  bool v52; // w1
  SupportServantListViewItemDraw_WarningLabelText_o *v53; // x22
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_String_o *v63; // x22
  SupportServantListViewItemDraw_WarningLabelText_o *v64; // x21
  const MethodInfo *v65; // x3
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  System_Object_array *v72; // x1
  SupportServantListViewItemDraw_c *v73; // x0
  const MethodInfo *v74; // x1
  struct SupportServantListViewItemDraw_WarningLabelText_array *warningLabelTexts; // x8
  __int64 v76; // x8
  const MethodInfo *v77; // x1
  System_Collections_Generic_List_object__o *itemList; // x8
  struct TweenAlpha_o *warningTween; // x20
  struct TweenColor_o *warningTweenColor; // x20
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  SupportServantListViewItemDraw_c *v83; // x0
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  float v88; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4B18D3B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__, item);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__, v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__get_Count__,
      v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Count__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo, v12);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v13);
    sub_1BCAFF8(&float_TypeInfo, v14);
    sub_1BCAFF8(&SupportServantListViewItemDraw_TypeInfo, v15);
    sub_1BCAFF8(&SupportServantListViewItemDraw_WarningLabelText_TypeInfo, v16);
    sub_1BCAFF8(&StringLiteral_11427/*"SELECT_FP_NUM_UP"*/, v17);
    sub_1BCAFF8(&StringLiteral_11416/*"SELECT_BONUS_SKILL_INVALID"*/, v18);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v19);
    byte_4B18D3B = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText___ctor__);
  if ( !item )
    goto LABEL_85;
  FriendPointBonus = (SupportServantListViewItemDraw_o *)SupportServantListViewItem__GetFriendPointBonus(item, v22);
  if ( ((unsigned int)FriendPointBonus & 0x80000000) == 0 )
  {
    v25 = (int)FriendPointBonus;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11427/*"SELECT_FP_NUM_UP"*/, 0LL);
    v27 = (double)v25 / 1000.0;
    v88 = v27;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v88, v28, v29, v30);
    v32 = System_String__Format(v26, v31, 0LL);
    v33 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1BCB244(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    v90.fields.b = 0.8;
    v89.fields.r = 1.0;
    v89.fields.g = 1.0;
    v89.fields.b = 0.0;
    v89.fields.a = 1.0;
    v90.fields.r = 1.0;
    v90.fields.g = 1.0;
    v90.fields.a = 1.0;
    v34 = (Il2CppObject *)v33;
    SupportServantListViewItemDraw_WarningLabelText___ctor_35067796(v33, v32, v89, v90, 1.0, 0, v35);
    if ( !v20 )
      goto LABEL_85;
    items = v20->fields._items;
    v39 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_85;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        v34,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v41[4] = (Il2CppClass *)v34;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v34, v36, v37);
    }
  }
  if ( item->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11416/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    v43 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1BCB244(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v43, v42, 0.8, 1, v44);
    if ( !v20 )
      goto LABEL_85;
    v47 = v20->fields._items;
    v48 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !v47 )
      goto LABEL_85;
    v49 = v20->fields._size;
    if ( (unsigned int)v49 >= v47->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v43,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = &v47->obj.klass + v49;
      v20->fields._size = v49 + 1;
      v50[4] = (Il2CppClass *)v43;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v43, v45, v46);
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
    v52 = 0;
  }
  else
  {
    v53 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1BCB244(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
    SupportServantListViewItemDraw_WarningLabelText___ctor(v53, WarningText, 1.0, 0, v54);
    if ( !v20 )
      goto LABEL_85;
    v57 = v20->fields._items;
    v58 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
    ++v20->fields._version;
    if ( !v57 )
      goto LABEL_85;
    v59 = v20->fields._size;
    if ( (unsigned int)v59 >= v57->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)v53,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v60 = &v57->obj.klass + v59;
      v20->fields._size = v59 + 1;
      v60[4] = (Il2CppClass *)v53;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v53, v55, v56);
    }
    maskSprite = (int *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_85;
    maskSprite = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_85;
    v52 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, v52, 0LL);
  if ( item->fields.isInvalidRarity )
  {
    if ( !v20 )
      goto LABEL_85;
    if ( v20->fields._size == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11416/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
      v64 = (SupportServantListViewItemDraw_WarningLabelText_o *)sub_1BCB244(SupportServantListViewItemDraw_WarningLabelText_TypeInfo);
      SupportServantListViewItemDraw_WarningLabelText___ctor(v64, v63, 0.8, 1, v65);
      v68 = v20->fields._items;
      v69 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__Add__;
      ++v20->fields._version;
      if ( !v68 )
        goto LABEL_85;
      v70 = v20->fields._size;
      if ( (unsigned int)v70 >= v68->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)v64,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = &v68->obj.klass + v70;
        v20->fields._size = v70 + 1;
        v71[4] = (Il2CppClass *)v64;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v64, v66, v67);
      }
    }
  }
  else if ( !v20 )
  {
    goto LABEL_85;
  }
  if ( v20->fields._size < 1 )
    v72 = 0LL;
  else
    v72 = System_Collections_Generic_List_object___ToArray(
            v20,
            (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw_WarningLabelText__ToArray__);
  this->fields.warningLabelTexts = (struct SupportServantListViewItemDraw_WarningLabelText_array *)v72;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.warningLabelTexts, (int32_t)v72, v61, v62);
  v73 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v73 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v73->static_fields->itemList;
  if ( !maskSprite )
    goto LABEL_85;
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)maskSprite,
    (Il2CppObject *)this,
    (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Remove__);
  warningLabelTexts = this->fields.warningLabelTexts;
  if ( !warningLabelTexts || (v76 = *(_QWORD *)&warningLabelTexts->max_length) == 0 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v74);
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
  if ( (int)v76 < 2 )
  {
    SupportServantListViewItemDraw__WarningTweenStop(this, v74);
    goto LABEL_82;
  }
  SupportServantListViewItemDraw__WarningTweenStart(this, v74);
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
                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
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
                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
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
                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SupportServantListViewItemDraw__get_Item__);
    if ( !maskSprite || !warningTweenColor )
      goto LABEL_85;
    ((void (__fastcall *)(struct TweenColor_o *, _QWORD, void *))warningTweenColor->klass->vtable._8_SynchronizeTween.method)(
      warningTweenColor,
      *((_QWORD *)maskSprite + 14),
      warningTweenColor->klass[1]._1.image);
  }
  v83 = SupportServantListViewItemDraw_TypeInfo;
  if ( !SupportServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportServantListViewItemDraw_TypeInfo);
    v83 = SupportServantListViewItemDraw_TypeInfo;
  }
  maskSprite = (int *)v83->static_fields->itemList;
  if ( !maskSprite
    || (v84 = *((_QWORD *)maskSprite + 2),
        v85 = Method_System_Collections_Generic_List_SupportServantListViewItemDraw__Add__,
        ++maskSprite[7],
        !v84) )
  {
LABEL_85:
    sub_1BCB254(maskSprite, v22);
  }
  v86 = maskSprite[6];
  if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)this,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = v84 + 8 * v86;
    maskSprite[6] = v86 + 1;
    *(_QWORD *)(v87 + 32) = this;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v87 + 32), (int32_t)this, v81, v82);
  }
LABEL_82:
  SupportServantListViewItemDraw__AdvanceWarningLabel(this, v77);
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
  if ( (byte_4B18D3F & 1) == 0 )
  {
    this = (SupportServantListViewItemDraw_o *)sub_1BCAFF8(&SupportServantListViewItemDraw_TypeInfo, method);
    byte_4B18D3F = 1;
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
    sub_1BCB254(this, method);
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
    sub_1BCB254(0LL, method);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v7 = this;
  v8 = isSkillInvalid;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7->fields.text = s;
  v7 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v7 + 16);
  sub_1BCAF9C((CGThumbnailListItem_o *)v7, (int32_t)s, v9, v10);
  __asm { FMOV            V0.4S, #1.0 }
  LOWORD(v7->monitor) = 0;
  v7->fields.bottom.fields.r = scaleX;
  v7->fields.top = _Q0;
  *(struct UnityEngine_Color_o *)((char *)&v7->monitor + 4) = _Q0;
  LOBYTE(v7->fields.bottom.fields.g) = v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantListViewItemDraw_WarningLabelText___ctor_35067796(
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
  v16 = isSkillInvalid;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15->fields.text = s;
  v15 = (SupportServantListViewItemDraw_WarningLabelText_o *)((char *)v15 + 16);
  sub_1BCAF9C((CGThumbnailListItem_o *)v15, (int32_t)s, v17, v18);
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