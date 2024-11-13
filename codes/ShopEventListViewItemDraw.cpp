void __fastcall ShopEventListViewItemDraw___ctor(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopEventListViewItemDraw__Awake(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4B12716 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12716 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v7, v8, v9, v10, v11, v12),
          (v21 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BCAA3C(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


int32_t __fastcall ShopEventListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) >= 3 )
    return 0;
  return initMode;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewItemDraw__SetBaseButtonState(
        ShopEventListViewItemDraw_o *this,
        ShopEventListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *baseButton; // x22
  void *v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *baseSprite; // x21
  bool isLocked; // w8
  struct UISprite_o *v14; // x20
  UIWidget_o *v15; // x19
  int v16; // w21
  __int64 v17; // x8
  float *v18; // x12
  __int64 v19; // x9
  __int64 v20; // x10
  __int64 v21; // x11
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1271A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&UICommonButtonColor_TypeInfo, v7, v8);
    byte_4B1271A = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v10 = (void *)UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) == 0 )
  {
    if ( item )
    {
      v10 = this->fields.baseButton;
      if ( item->fields.isFinished || (isLocked = item->fields.isLocked) )
        isLocked = 1;
      if ( v10 )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)v10, mode == 3 || isLocked, 1, 0LL);
        v10 = this->fields.baseButton;
        if ( item->fields.isFinished )
        {
          v11 = 0LL;
          if ( !v10 )
            goto LABEL_35;
        }
        else
        {
          v11 = !item->fields.isLocked;
          if ( !v10 )
            goto LABEL_35;
        }
        (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v10 + 392LL))(
          v10,
          v11,
          *(_QWORD *)(*(_QWORD *)v10 + 400LL));
        v10 = this->fields.baseButton;
        if ( item->fields.isFinished || item->fields.isLocked )
        {
          v11 = 3LL;
          if ( !v10 )
            goto LABEL_35;
        }
        else
        {
          v11 = 0LL;
          if ( !v10 )
            goto LABEL_35;
        }
        (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 536LL))(
          v10,
          v11,
          1LL,
          *(_QWORD *)(*(_QWORD *)v10 + 544LL));
        return;
      }
    }
LABEL_35:
    sub_1BCAA3C(v10, v11);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v10 = (void *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) == 0 )
  {
    if ( item )
    {
      v14 = this->fields.baseSprite;
      if ( item->fields.isFinished || item->fields.isLocked )
      {
        v15 = 0LL;
        v16 = 1;
      }
      else
      {
        v16 = 0;
        v15 = (UIWidget_o *)v14;
      }
      v10 = UICommonButtonColor_TypeInfo;
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v11);
        v10 = UICommonButtonColor_TypeInfo;
      }
      v17 = *((_QWORD *)v10 + 23);
      if ( v16 )
      {
        v18 = (float *)(v17 + 48);
        v19 = 60LL;
        v20 = 56LL;
        v21 = 52LL;
        v15 = (UIWidget_o *)v14;
      }
      else
      {
        v19 = 12LL;
        v20 = 8LL;
        v21 = 4LL;
        v18 = (float *)*((_QWORD *)v10 + 23);
      }
      if ( v15 )
      {
        v22.fields.a = *(float *)(v17 + v19);
        v22.fields.b = *(float *)(v17 + v20);
        v22.fields.g = *(float *)(v17 + v21);
        v22.fields.r = *v18;
        UIWidget__set_color(v15, v22, 0LL);
        return;
      }
    }
    goto LABEL_35;
  }
}


bool __fastcall ShopEventListViewItemDraw__SetBaseSprite(
        ShopEventListViewItemDraw_o *this,
        ShopEventListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v8; // x0
  __int64 v9; // x1
  UISprite_o *v11; // x21
  int32_t eventId; // w20
  __int64 v13; // x1
  UnityEngine_Object_o *baseAtlas; // x20

  if ( (byte_4B12719 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B12719 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  v8 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return 0;
  if ( !item )
    goto LABEL_18;
  v11 = this->fields.baseSprite;
  eventId = item->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
  if ( !AtlasManager__SetShopBanner(v11, eventId, 0LL) )
  {
    baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Equality(baseAtlas, 0LL, 0LL) )
      return 0;
    v8 = this->fields.baseSprite;
    if ( v8 )
    {
      UISprite__set_atlas(v8, this->fields.baseAtlas, 0LL);
      v8 = this->fields.baseSprite;
      if ( v8 )
      {
        UISprite__set_spriteName(v8, this->fields.baseSpriteName, 0LL);
        return 0;
      }
    }
LABEL_18:
    sub_1BCAA3C(v8, v9);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewItemDraw__SetItem(
        ShopEventListViewItemDraw_o *this,
        ShopEventListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ShopEventListViewItemDraw_o *v6; // x19
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
  UISprite_o *rangeSprite; // x1
  ShopEventListViewItemDraw_o *v20; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  UnityEngine_GameObject_o *infoBase; // x22
  System_String_o *NameText; // x0
  __int64 v25; // x1
  UILabel_o *nameTextLabel; // x22
  const MethodInfo *v27; // x1
  UILabel_o *messageTextLabel; // x22
  const MethodInfo *v29; // x1
  System_String_o *DetailText; // x0
  __int64 v31; // x1
  struct EventEntity_o *eventEntity; // x8
  int64_t startedAt; // x22
  int64_t endedAt; // x24
  ShopEventListViewItemDraw_o *v35; // x0
  const MethodInfo *v36; // x3
  UILabel_o *eventPeriodLabel; // x23
  UILabel_o *changePeriodLabel; // x22
  const MethodInfo *v39; // x3
  UILabel_o *v40; // x22
  UILabel_o *condMessageLabel; // x22
  UILabel_o *v42; // x22
  UILabel_o *v43; // x22

  v6 = this;
  if ( (byte_4B12717 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&string_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5790/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16014/*"[000000]"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_5788/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_5791/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, v15, v16);
    this = (ShopEventListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_5789/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/, v17, v18);
    byte_4B12717 = 1;
  }
  rangeSprite = v6->fields.rangeSprite;
  if ( !item )
  {
    ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, 0, method);
    ShopEventListViewItemDraw__SetSpriteActive(v35, v6->fields.addRangeSprite, 0, v36);
    return;
  }
  ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, mode == 0, method);
  ShopEventListViewItemDraw__SetSpriteActive(v20, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v21);
  if ( mode )
  {
    infoBase = v6->fields.infoBase;
    NameText = (System_String_o *)ShopEventListViewItemDraw__SetBaseSprite(v6, item, v22);
    if ( !infoBase )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(infoBase, ((unsigned __int8)NameText & 1) == 0, 0LL);
    nameTextLabel = v6->fields.nameTextLabel;
    NameText = ShopEventListViewItem__get_NameText(item, v27);
    if ( !nameTextLabel )
      goto LABEL_45;
    UILabel__set_text(nameTextLabel, NameText, 0LL);
    messageTextLabel = v6->fields.messageTextLabel;
    DetailText = ShopEventListViewItem__get_DetailText(item, v29);
    NameText = System_String__Concat_62401220((System_String_o *)StringLiteral_16014/*"[000000]"*/, DetailText, 0LL);
    if ( !messageTextLabel )
      goto LABEL_45;
    UILabel__set_text(messageTextLabel, NameText, 0LL);
    eventEntity = item->fields.eventEntity;
    if ( eventEntity )
    {
      startedAt = eventEntity->fields.startedAt;
      endedAt = eventEntity->fields.endedAt;
    }
    else
    {
      startedAt = 0LL;
      endedAt = 0LL;
    }
    eventPeriodLabel = v6->fields.eventPeriodLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
    NameText = LocalizationManager__GetPeriod(startedAt, endedAt, 0, 0, 0LL);
    if ( !eventPeriodLabel )
      goto LABEL_45;
    UILabel__set_text(eventPeriodLabel, NameText, 0LL);
    changePeriodLabel = v6->fields.changePeriodLabel;
    NameText = LocalizationManager__GetPeriod(item->fields.openedAt, item->fields.closedAt, 0, 1, 0LL);
    if ( !changePeriodLabel )
      goto LABEL_45;
    UILabel__set_text(changePeriodLabel, NameText, 0LL);
    if ( !item->fields.isFinished )
    {
      if ( !item->fields.isLocked )
        goto LABEL_48;
      condMessageLabel = v6->fields.condMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5791/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0LL);
      if ( !condMessageLabel )
        goto LABEL_45;
      UILabel__set_text(condMessageLabel, NameText, 0LL);
      if ( !item->fields.isFinished )
      {
LABEL_48:
        if ( !item->fields.isClosedLimit )
          goto LABEL_41;
        v42 = v6->fields.condMessageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
        NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5788/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0LL);
        if ( !v42 )
          goto LABEL_45;
        UILabel__set_text(v42, NameText, 0LL);
        if ( !item->fields.isFinished )
          goto LABEL_41;
      }
    }
    if ( !item->fields.isLocked )
    {
      v43 = v6->fields.condMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5790/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, 0LL);
      if ( !v43 )
        goto LABEL_45;
      UILabel__set_text(v43, NameText, 0LL);
      if ( !item->fields.isFinished )
      {
LABEL_41:
        if ( !item->fields.isLocked )
        {
          NameText = (System_String_o *)v6->fields.condMessageLabel;
          if ( NameText )
          {
            UILabel__set_text((UILabel_o *)NameText, string_TypeInfo->static_fields->Empty, 0LL);
            goto LABEL_44;
          }
LABEL_45:
          sub_1BCAA3C(NameText, v25);
        }
LABEL_44:
        ShopEventListViewItemDraw__SetBaseButtonState(v6, item, mode, v39);
        return;
      }
      if ( !item->fields.isLocked )
        goto LABEL_44;
    }
    v40 = v6->fields.condMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5789/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/, 0LL);
    if ( !v40 )
      goto LABEL_45;
    UILabel__set_text(v40, NameText, 0LL);
    if ( item->fields.isFinished )
      goto LABEL_44;
    goto LABEL_41;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewItemDraw__SetSpriteActive(
        ShopEventListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B12718 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, isActive);
    byte_4B12718 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}