void __fastcall WarehouseListViewItemDraw___ctor(WarehouseListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItemDraw__SetDisp(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  _BOOL4 v4; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *gameObject; // x0
  __int64 v12; // x1
  _BOOL4 IsSelect; // w0
  __int64 v14; // x1
  UnityEngine_Object_o *lockSprite; // x23
  _BOOL4 v16; // w22
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x23
  bool isChoice; // w1
  UnityEngine_Object_o *friendShipSprite; // x23
  UnityEngine_Object_o *chocolateSprite; // x23
  UnityEngine_Object_o *pushSprite; // x23
  __int64 v23; // x1
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v25; // x23
  struct UILabel_o *warningLabel; // x8
  bool IsNullOrEmpty; // w0
  bool v28; // w1
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v4 = isSelectEnable;
  if ( (byte_4B141B0 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, isSelectEnable);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_23183/*"ribbon_noblephantasmup_01"*/, v9, v10);
    byte_4B141B0 = 1;
  }
  WarehouseListViewItemDraw__SetWarning(this, item, (const MethodInfo *)isSelectEnable);
  if ( !item )
    goto LABEL_65;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  v16 = IsSelect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_65;
    if ( item->fields.isSwapLock )
      isLock = !item->fields.isLock;
    else
      isLock = item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isLock, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_65;
    if ( item->fields.isSwapChoice )
      isChoice = !item->fields.isChoice;
    else
      isChoice = item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isChoice, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isChocolateSvtEquip, 0LL);
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0LL);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_65;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_65;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v25 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
      gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                v25,
                                                (System_String_o *)StringLiteral_23183/*"ribbon_noblephantasmup_01"*/,
                                                0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_65;
        v29.fields.x = 0.65;
        v29.fields.y = 1.0;
        v29.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v29, 0LL);
      }
    }
  }
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_65;
  IsNullOrEmpty = System_String__IsNullOrEmpty(warningLabel->fields.mText, 0LL);
  if ( (v16 || v4) && IsNullOrEmpty && !item->fields.isFortification )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        v28 = 0;
        goto LABEL_59;
      }
    }
LABEL_65:
    sub_1BCAA3C(gameObject, v12);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_65;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_65;
  v28 = 1;
LABEL_59:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v28, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.dragSelect;
  if ( !gameObject )
    goto LABEL_65;
  DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)gameObject, -1, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.dragSelect;
  if ( !gameObject )
    goto LABEL_65;
  DragSelectComponent__Set((DragSelectComponent_o *)gameObject, item->fields.selectNum, item->fields.dragSelectNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItemDraw__SetInput(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct UICommonButton_o *v10; // x0

  if ( (byte_4B141AF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, isSelectEnable);
    byte_4B141AF = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v10 = this->fields.baseButton;
    if ( !v10
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._5_set_isEnabled.method)(
            v10,
            1LL,
            v10->klass->vtable._6_OnInit.methodPtr),
          (v10 = this->fields.baseButton) == 0LL) )
    {
      sub_1BCAA3C(v10, v8);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v10->klass->vtable._14_SetState.method)(
      v10,
      0LL,
      1LL,
      v10->klass->vtable._15_OnPress.methodPtr);
  }
  if ( item )
    WarehouseListViewItemDraw__SetDisp(this, item, isSelectEnable, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItemDraw__SetItem(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        const MethodInfo *method)
{
  WarehouseListViewItem_o *v7; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *partyIcon; // x22
  __int64 v14; // x1
  UnityEngine_Object_o *useSprite; // x22
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v17; // x3

  v7 = item;
  if ( (byte_4B141AD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B141AD = 1;
  }
  if ( v7 && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_32;
    ServantFaceIconComponent__Set_38931252(
      servantFaceIcon,
      v7->fields.userServantEntity,
      v7->fields.iconLabelInfo1,
      v7->fields.iconLabelInfo2,
      0LL);
    partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
      if ( v7->fields.isUse )
      {
        item = 0LL;
        if ( !servantFaceIcon )
          goto LABEL_32;
      }
      else
      {
        item = (WarehouseListViewItem_o *)(v7->fields.partyIndex >= 0);
        if ( !servantFaceIcon )
          goto LABEL_32;
      }
      FlashingIconComponent__Set_38836528((FlashingIconComponent_o *)servantFaceIcon, (bool)item, 0LL);
    }
    useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(useSprite, 0LL, 0LL) )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
      if ( !servantFaceIcon )
        goto LABEL_32;
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)servantFaceIcon,
                                                        0LL);
      if ( !servantFaceIcon )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v7->fields.isUse, 0LL);
    }
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.baseButton;
      if ( !servantFaceIcon )
        goto LABEL_32;
      ((void (__fastcall *)(ServantFaceIconComponent_o *, __int64, void *))servantFaceIcon->klass->vtable._5_UpdateAlpha.method)(
        servantFaceIcon,
        1LL,
        servantFaceIcon->klass[1]._1.image);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.baseButton;
      if ( !servantFaceIcon )
        goto LABEL_32;
      ((void (__fastcall *)(ServantFaceIconComponent_o *, _QWORD, __int64, void *))servantFaceIcon->klass[1]._1.events)(
        servantFaceIcon,
        0LL,
        1LL,
        servantFaceIcon->klass[1]._1.properties);
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationRootObj;
    if ( servantFaceIcon )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationNameLabel;
      if ( servantFaceIcon )
      {
        UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationDetailNameLabel;
        if ( servantFaceIcon )
        {
          UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationAppointmentLabel;
          if ( servantFaceIcon )
          {
            UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            WarehouseListViewItemDraw__SetDisp(this, v7, isSelectEnable, v17);
            return;
          }
        }
      }
    }
LABEL_32:
    sub_1BCAA3C(servantFaceIcon, item);
  }
}


void __fastcall WarehouseListViewItemDraw__SetWarning(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Component_o *warningLabel; // x0
  System_String_o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 *v42; // x8
  _BOOL4 isEventJoin; // w20
  int32_t attribute; // w8
  UnityEngine_Object_o *v45; // x21
  UnityEngine_Object_o *v46; // x21
  UILabel_o *v47; // x20
  __int64 *v48; // x8
  UnityEngine_Object_o *v49; // x21
  __int64 v50; // x1
  UILabel_o *fortificationAppointmentLabel; // x21
  UserServantEntity_o *userServantEntity; // x0
  __int64 v53; // x1
  bool IsServantMaterialTd; // w20

  if ( (byte_4B141AE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_6565/*"FORTIFICATION_APPOINTMENT"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11640/*"SELECT_FAVORITE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_12565/*"SUPPORT_MEMBER"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3803/*"COMMON_FATIGURE_RECOVERY"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11657/*"SELECT_PUSH"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11654/*"SELECT_PARTY"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11655/*"SELECT_PARTY_EQUIP"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12550/*"SUPPORT_EQUIP"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11152/*"RECOMMEND_SUPPORT_MEMBER"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3802/*"COMMON_EQUIP_USED"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_11656/*"SELECT_PROTECTED_EVENT_SVT"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_11150/*"RECOMMEND_SUPPORT_EQUIP"*/, v35, v36);
    byte_4B141AE = 1;
  }
  warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_97;
  v38 = (System_String_o *)StringLiteral_1/*""*/;
  gameObject = UnityEngine_Component__get_gameObject(warningLabel, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v39, v40);
    byte_4B109C6 = 1;
  }
  GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( !item )
    goto LABEL_97;
  if ( item->fields.isPushMode )
  {
    if ( item->fields.isEnabled )
    {
      if ( !item->fields.isFatigueRecovery )
        goto LABEL_34;
LABEL_10:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v42 = &StringLiteral_3803/*"COMMON_FATIGURE_RECOVERY"*/;
      goto LABEL_33;
    }
    isEventJoin = item->fields.isEventJoin;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( !item->fields.isEventJoin )
        goto LABEL_32;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      if ( !isEventJoin )
      {
LABEL_32:
        v42 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
        goto LABEL_33;
      }
    }
LABEL_25:
    v42 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_33:
    v38 = LocalizationManager__Get((System_String_o *)*v42, 0LL);
    goto LABEL_34;
  }
  if ( item->fields.isPush )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v42 = &StringLiteral_11657/*"SELECT_PUSH"*/;
    goto LABEL_33;
  }
  attribute = item->fields.attribute;
  if ( attribute )
  {
    if ( attribute != 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      goto LABEL_32;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    goto LABEL_25;
  }
  if ( item->fields.isFavorite )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v42 = &StringLiteral_11640/*"SELECT_FAVORITE"*/;
    goto LABEL_33;
  }
  if ( item->fields.isPartyEquip )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v42 = &StringLiteral_11655/*"SELECT_PARTY_EQUIP"*/;
    goto LABEL_33;
  }
  if ( (item->fields.partyIndex & 0x80000000) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v42 = &StringLiteral_11654/*"SELECT_PARTY"*/;
    goto LABEL_33;
  }
  if ( item->fields.isUseRecommendSupport )
  {
    v46 = (UnityEngine_Object_o *)this->fields.warningLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
    {
      v47 = this->fields.warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v48 = &StringLiteral_11152/*"RECOMMEND_SUPPORT_MEMBER"*/;
LABEL_62:
      warningLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
      if ( !v47 )
        goto LABEL_97;
      UILabel__set_text(v47, (System_String_o *)warningLabel, 0LL);
      warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
      if ( !warningLabel )
        goto LABEL_97;
      UILabel__SetCondensedScale((UILabel_o *)warningLabel, 106, 0LL);
      return;
    }
  }
  else if ( item->fields.isUseRecommendSupportEquip )
  {
    v49 = (UnityEngine_Object_o *)this->fields.warningLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
    {
      v47 = this->fields.warningLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v48 = &StringLiteral_11150/*"RECOMMEND_SUPPORT_EQUIP"*/;
      goto LABEL_62;
    }
  }
  else
  {
    if ( item->fields.isUseSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v42 = &StringLiteral_12565/*"SUPPORT_MEMBER"*/;
      goto LABEL_33;
    }
    if ( item->fields.isUseSupportEquip )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v42 = &StringLiteral_12550/*"SUPPORT_EQUIP"*/;
      goto LABEL_33;
    }
    if ( item->fields.isUse )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v42 = &StringLiteral_3802/*"COMMON_EQUIP_USED"*/;
      goto LABEL_33;
    }
    if ( item->fields.isFatigueRecovery )
      goto LABEL_10;
    if ( item->fields.isFortification )
    {
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationRootObj;
      if ( !warningLabel )
        goto LABEL_97;
      v38 = (System_String_o *)StringLiteral_1/*""*/;
      warningLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)warningLabel,
                                                  0LL);
      if ( !warningLabel )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, 1, 0LL);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationNameLabel;
      if ( !warningLabel )
        goto LABEL_97;
      UILabel__set_text((UILabel_o *)warningLabel, item->fields.fortificationName, 0LL);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationDetailNameLabel;
      if ( !warningLabel )
        goto LABEL_97;
      UILabel__set_text((UILabel_o *)warningLabel, item->fields.fortificationDetailName, 0LL);
      fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
      warningLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6565/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
      if ( !fortificationAppointmentLabel )
        goto LABEL_97;
      UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)warningLabel, 0LL);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationNameLabel;
      if ( !warningLabel )
        goto LABEL_97;
      UILabel__UpdateCondensedScaleComponent((UILabel_o *)warningLabel, 0LL);
      warningLabel = (UnityEngine_Component_o *)this->fields.fortificationDetailNameLabel;
      if ( !warningLabel )
        goto LABEL_97;
      UILabel__UpdateCondensedScaleComponent((UILabel_o *)warningLabel, 0LL);
    }
    else
    {
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity
        && !item->fields.isWarehouseServant
        && UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL) )
      {
        warningLabel = (UnityEngine_Component_o *)item->fields.servantEntity;
        if ( !warningLabel )
          goto LABEL_97;
        IsServantMaterialTd = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)warningLabel, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
        if ( !IsServantMaterialTd )
        {
          v42 = &StringLiteral_11656/*"SELECT_PROTECTED_EVENT_SVT"*/;
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      v38 = (System_String_o *)StringLiteral_1/*""*/;
    }
  }
LABEL_34:
  v45 = (UnityEngine_Object_o *)this->fields.warningLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
  {
    warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( warningLabel )
    {
      UILabel__set_text((UILabel_o *)warningLabel, v38, 0LL);
      return;
    }
LABEL_97:
    sub_1BCAA3C(warningLabel, item);
  }
}