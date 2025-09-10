void ShopEventListViewItemDraw___ctor(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ShopEventListViewItemDraw__Awake(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4C23560 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23560 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( !v4 )
  {
    v8 = this->fields.baseSprite;
    if ( !v8
      || (mAtlas = v8->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7),
          (v12 = this->fields.baseSprite) == 0) )
    {
      sub_1C2D6EC(v4, v5);
    }
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v10, v11);
  }
}


int32_t ShopEventListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) >= 3 )
    return 0;
  return initMode;
}


void ShopEventListViewItemDraw__SetBaseButtonState(
        ShopEventListViewItemDraw_o *this,
        ShopEventListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  void *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *baseSprite; // x21
  bool isLocked; // w8
  struct UISprite_o *v12; // x20
  UIWidget_o *v13; // x19
  int v14; // w21
  __int64 v15; // x8
  float *v16; // x12
  __int64 v17; // x9
  __int64 v18; // x10
  __int64 v19; // x11
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C23564 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UICommonButtonColor_TypeInfo);
    byte_4C23564 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (void *)UnityEngine_Object__op_Equality(baseButton, 0, 0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( item )
    {
      v8 = this->fields.baseButton;
      if ( item->fields.isFinished || (isLocked = item->fields.isLocked) )
        isLocked = 1;
      if ( v8 )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)v8, mode == 3 || isLocked, 1, 0);
        v8 = this->fields.baseButton;
        if ( item->fields.isFinished )
        {
          v9 = 0;
          if ( !v8 )
            goto LABEL_35;
        }
        else
        {
          v9 = !item->fields.isLocked;
          if ( !v8 )
            goto LABEL_35;
        }
        (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v8 + 392LL))(
          v8,
          v9,
          *(_QWORD *)(*(_QWORD *)v8 + 400LL));
        v8 = this->fields.baseButton;
        if ( item->fields.isFinished || item->fields.isLocked )
        {
          v9 = 3;
          if ( !v8 )
            goto LABEL_35;
        }
        else
        {
          v9 = 0;
          if ( !v8 )
            goto LABEL_35;
        }
        (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 536LL))(
          v8,
          v9,
          1,
          *(_QWORD *)(*(_QWORD *)v8 + 544LL));
        return;
      }
    }
LABEL_35:
    sub_1C2D6EC(v8, v9);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (void *)UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( item )
    {
      v12 = this->fields.baseSprite;
      if ( item->fields.isFinished || item->fields.isLocked )
      {
        v13 = 0;
        v14 = 1;
      }
      else
      {
        v14 = 0;
        v13 = (UIWidget_o *)v12;
      }
      v8 = UICommonButtonColor_TypeInfo;
      if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
        v8 = UICommonButtonColor_TypeInfo;
      }
      v15 = *((_QWORD *)v8 + 23);
      if ( v14 )
      {
        v16 = (float *)(v15 + 48);
        v17 = 60;
        v18 = 56;
        v19 = 52;
        v13 = (UIWidget_o *)v12;
      }
      else
      {
        v17 = 12;
        v18 = 8;
        v19 = 4;
        v16 = (float *)*((_QWORD *)v8 + 23);
      }
      if ( v13 )
      {
        v20.fields.a = *(float *)(v15 + v17);
        v20.fields.b = *(float *)(v15 + v18);
        v20.fields.g = *(float *)(v15 + v19);
        v20.fields.r = *v16;
        UIWidget__set_color(v13, v20, 0);
        return;
      }
    }
    goto LABEL_35;
  }
}


bool ShopEventListViewItemDraw__SetBaseSprite(
        ShopEventListViewItemDraw_o *this,
        ShopEventListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v6; // x0
  __int64 v7; // x1
  UISprite_o *v9; // x21
  int32_t eventId; // w20
  UnityEngine_Object_o *baseAtlas; // x20

  if ( (byte_4C23563 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23563 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return 0;
  if ( !item )
    goto LABEL_18;
  v9 = this->fields.baseSprite;
  eventId = item->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetShopBanner(v9, eventId, 0) )
  {
    baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(baseAtlas, 0, 0) )
      return 0;
    v6 = this->fields.baseSprite;
    if ( v6 )
    {
      UISprite__set_atlas(v6, this->fields.baseAtlas, 0);
      v6 = this->fields.baseSprite;
      if ( v6 )
      {
        UISprite__set_spriteName(v6, this->fields.baseSpriteName, 0);
        return 0;
      }
    }
LABEL_18:
    sub_1C2D6EC(v6, v7);
  }
  return 1;
}


void ShopEventListViewItemDraw__SetItem(
        ShopEventListViewItemDraw_o *this,
        ShopEventListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ShopEventListViewItemDraw_o *v6; // x19
  UISprite_o *rangeSprite; // x1
  ShopEventListViewItemDraw_o *v8; // x0
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *infoBase; // x22
  System_String_o *NameText; // x0
  __int64 v13; // x1
  UILabel_o *nameTextLabel; // x22
  const MethodInfo *v15; // x1
  UILabel_o *messageTextLabel; // x22
  const MethodInfo *v17; // x1
  System_String_o *DetailText; // x0
  struct EventEntity_o *eventEntity; // x8
  int64_t startedAt; // x22
  int64_t endedAt; // x24
  ShopEventListViewItemDraw_o *v22; // x0
  const MethodInfo *v23; // x3
  UILabel_o *eventPeriodLabel; // x23
  UILabel_o *changePeriodLabel; // x22
  const MethodInfo *v26; // x3
  UILabel_o *v27; // x22
  UILabel_o *condMessageLabel; // x22
  UILabel_o *v29; // x22
  UILabel_o *v30; // x22

  v6 = this;
  if ( (byte_4C23561 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_5702/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/);
    sub_1C2D490(&StringLiteral_15836/*"[000000]"*/);
    sub_1C2D490(&StringLiteral_5700/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/);
    sub_1C2D490(&StringLiteral_5703/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/);
    this = (ShopEventListViewItemDraw_o *)sub_1C2D490(&StringLiteral_5701/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/);
    byte_4C23561 = 1;
  }
  rangeSprite = v6->fields.rangeSprite;
  if ( !item )
  {
    ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, 0, method);
    ShopEventListViewItemDraw__SetSpriteActive(v22, v6->fields.addRangeSprite, 0, v23);
    return;
  }
  ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, mode == 0, method);
  ShopEventListViewItemDraw__SetSpriteActive(v8, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v9);
  if ( mode )
  {
    infoBase = v6->fields.infoBase;
    NameText = (System_String_o *)ShopEventListViewItemDraw__SetBaseSprite(v6, item, v10);
    if ( !infoBase )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(infoBase, ((unsigned __int8)NameText & 1) == 0, 0);
    nameTextLabel = v6->fields.nameTextLabel;
    NameText = ShopEventListViewItem__get_NameText(item, v15);
    if ( !nameTextLabel )
      goto LABEL_45;
    UILabel__set_text(nameTextLabel, NameText, 0);
    messageTextLabel = v6->fields.messageTextLabel;
    DetailText = ShopEventListViewItem__get_DetailText(item, v17);
    NameText = System_String__Concat_63457864((System_String_o *)StringLiteral_15836/*"[000000]"*/, DetailText, 0);
    if ( !messageTextLabel )
      goto LABEL_45;
    UILabel__set_text(messageTextLabel, NameText, 0);
    eventEntity = item->fields.eventEntity;
    if ( eventEntity )
    {
      startedAt = eventEntity->fields.startedAt;
      endedAt = eventEntity->fields.endedAt;
    }
    else
    {
      startedAt = 0;
      endedAt = 0;
    }
    eventPeriodLabel = v6->fields.eventPeriodLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NameText = LocalizationManager__GetPeriod(startedAt, endedAt, 0, 0, 0);
    if ( !eventPeriodLabel )
      goto LABEL_45;
    UILabel__set_text(eventPeriodLabel, NameText, 0);
    changePeriodLabel = v6->fields.changePeriodLabel;
    NameText = LocalizationManager__GetPeriod(item->fields.openedAt, item->fields.closedAt, 0, 1, 0);
    if ( !changePeriodLabel )
      goto LABEL_45;
    UILabel__set_text(changePeriodLabel, NameText, 0);
    if ( !item->fields.isFinished )
    {
      if ( !item->fields.isLocked )
        goto LABEL_48;
      condMessageLabel = v6->fields.condMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0);
      if ( !condMessageLabel )
        goto LABEL_45;
      UILabel__set_text(condMessageLabel, NameText, 0);
      if ( !item->fields.isFinished )
      {
LABEL_48:
        if ( !item->fields.isClosedLimit )
          goto LABEL_41;
        v29 = v6->fields.condMessageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5700/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0);
        if ( !v29 )
          goto LABEL_45;
        UILabel__set_text(v29, NameText, 0);
        if ( !item->fields.isFinished )
          goto LABEL_41;
      }
    }
    if ( !item->fields.isLocked )
    {
      v30 = v6->fields.condMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5702/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, 0);
      if ( !v30 )
        goto LABEL_45;
      UILabel__set_text(v30, NameText, 0);
      if ( !item->fields.isFinished )
      {
LABEL_41:
        if ( !item->fields.isLocked )
        {
          NameText = (System_String_o *)v6->fields.condMessageLabel;
          if ( NameText )
          {
            UILabel__set_text((UILabel_o *)NameText, string_TypeInfo->static_fields->Empty, 0);
            goto LABEL_44;
          }
LABEL_45:
          sub_1C2D6EC(NameText, v13);
        }
LABEL_44:
        ShopEventListViewItemDraw__SetBaseButtonState(v6, item, mode, v26);
        return;
      }
      if ( !item->fields.isLocked )
        goto LABEL_44;
    }
    v27 = v6->fields.condMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5701/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/, 0);
    if ( !v27 )
      goto LABEL_45;
    UILabel__set_text(v27, NameText, 0);
    if ( item->fields.isFinished )
      goto LABEL_44;
    goto LABEL_41;
  }
}


void ShopEventListViewItemDraw__SetSpriteActive(
        ShopEventListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C23562 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23562 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_1C2D6EC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}