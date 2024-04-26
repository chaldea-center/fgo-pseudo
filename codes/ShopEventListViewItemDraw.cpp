void __fastcall ShopEventListViewItemDraw___ctor(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopEventListViewItemDraw__Awake(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4357A56 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357A56 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_B7076C(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
}


int32_t __fastcall ShopEventListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) >= 3 )
    return 0;
  return initMode;
}


void __fastcall ShopEventListViewItemDraw__SetBaseButtonState(
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
  UIWidget_o *v12; // x20
  float *v13; // x11
  float *v14; // x8
  float *v15; // x9
  float *v16; // x10
  float *v17; // x11
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4357A5A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UICommonButtonColor_TypeInfo);
    byte_4357A5A = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (void *)UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( item )
    {
      v8 = this->fields.baseButton;
      if ( item->fields.isFinished || (isLocked = item->fields.isLocked) )
        isLocked = 1;
      if ( v8 )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)v8, mode == 3 || isLocked, 1, 0LL);
        v8 = this->fields.baseButton;
        if ( item->fields.isFinished )
        {
          v9 = 0LL;
          if ( !v8 )
            goto LABEL_39;
        }
        else
        {
          v9 = !item->fields.isLocked;
          if ( !v8 )
            goto LABEL_39;
        }
        (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v8 + 392LL))(
          v8,
          v9,
          *(_QWORD *)(*(_QWORD *)v8 + 400LL));
        v8 = this->fields.baseButton;
        if ( item->fields.isFinished || item->fields.isLocked )
        {
          v9 = 3LL;
          if ( !v8 )
            goto LABEL_39;
        }
        else
        {
          v9 = 0LL;
          if ( !v8 )
            goto LABEL_39;
        }
        (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 536LL))(
          v8,
          v9,
          1LL,
          *(_QWORD *)(*(_QWORD *)v8 + 544LL));
        return;
      }
    }
LABEL_39:
    sub_B7076C(v8, v9);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (void *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( item )
    {
      v12 = (UIWidget_o *)this->fields.baseSprite;
      if ( item->fields.isFinished || item->fields.isLocked )
      {
        v8 = UICommonButtonColor_TypeInfo;
        if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
          v8 = UICommonButtonColor_TypeInfo;
        }
        v13 = (float *)*((_QWORD *)v8 + 23);
        v14 = v13 + 12;
        v15 = v13 + 13;
        v16 = v13 + 14;
        v17 = v13 + 15;
        if ( v12 )
        {
LABEL_27:
          v18.fields.b = *v16;
          v18.fields.g = *v15;
          v18.fields.r = *v14;
          v18.fields.a = *v17;
          UIWidget__set_color(v12, v18, 0LL);
          return;
        }
      }
      else
      {
        v8 = UICommonButtonColor_TypeInfo;
        if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
          v8 = UICommonButtonColor_TypeInfo;
        }
        v14 = (float *)*((_QWORD *)v8 + 23);
        v15 = v14 + 1;
        v16 = v14 + 2;
        v17 = v14 + 3;
        if ( v12 )
          goto LABEL_27;
      }
    }
    goto LABEL_39;
  }
}


bool __fastcall ShopEventListViewItemDraw__SetBaseSprite(
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

  if ( (byte_4357A59 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357A59 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return 0;
  if ( !item )
    goto LABEL_21;
  v9 = this->fields.baseSprite;
  eventId = item->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetShopBanner(v9, eventId, 0LL) )
  {
    baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(baseAtlas, 0LL, 0LL) )
      return 0;
    v6 = this->fields.baseSprite;
    if ( v6 )
    {
      UISprite__set_atlas(v6, this->fields.baseAtlas, 0LL);
      v6 = this->fields.baseSprite;
      if ( v6 )
      {
        UISprite__set_spriteName(v6, this->fields.baseSpriteName, 0LL);
        return 0;
      }
    }
LABEL_21:
    sub_B7076C(v6, v7);
  }
  return 1;
}


void __fastcall ShopEventListViewItemDraw__SetItem(
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
  UILabel_o *eventPeriodLabel; // x22
  int64_t startedAt; // x23
  int64_t endedAt; // x24
  ShopEventListViewItemDraw_o *v23; // x0
  const MethodInfo *v24; // x3
  UILabel_o *changePeriodLabel; // x22
  const MethodInfo *v26; // x3
  UILabel_o *v27; // x22
  UILabel_o *v28; // x22
  UILabel_o *condMessageLabel; // x22
  UILabel_o *v30; // x22

  v6 = this;
  if ( (byte_4357A57 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_5802/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/);
    sub_B70694(&StringLiteral_15882/*"[000000]"*/);
    sub_B70694(&StringLiteral_5800/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/);
    sub_B70694(&StringLiteral_5803/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/);
    this = (ShopEventListViewItemDraw_o *)sub_B70694(&StringLiteral_5801/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/);
    byte_4357A57 = 1;
  }
  rangeSprite = v6->fields.rangeSprite;
  if ( !item )
  {
    ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, 0, method);
    ShopEventListViewItemDraw__SetSpriteActive(v23, v6->fields.addRangeSprite, 0, v24);
    return;
  }
  ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, mode == 0, method);
  ShopEventListViewItemDraw__SetSpriteActive(v8, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v9);
  if ( mode )
  {
    infoBase = v6->fields.infoBase;
    NameText = (System_String_o *)ShopEventListViewItemDraw__SetBaseSprite(v6, item, v10);
    if ( infoBase )
    {
      UnityEngine_GameObject__SetActive(infoBase, ((unsigned __int8)NameText & 1) == 0, 0LL);
      nameTextLabel = v6->fields.nameTextLabel;
      NameText = ShopEventListViewItem__get_NameText(item, v15);
      if ( nameTextLabel )
      {
        UILabel__set_text(nameTextLabel, NameText, 0LL);
        messageTextLabel = v6->fields.messageTextLabel;
        DetailText = ShopEventListViewItem__get_DetailText(item, v17);
        NameText = System_String__Concat_44758168((System_String_o *)StringLiteral_15882/*"[000000]"*/, DetailText, 0LL);
        if ( messageTextLabel )
        {
          UILabel__set_text(messageTextLabel, NameText, 0LL);
          eventEntity = item->fields.eventEntity;
          eventPeriodLabel = v6->fields.eventPeriodLabel;
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
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          NameText = LocalizationManager__GetPeriod(startedAt, endedAt, 0, 0, 0LL);
          if ( eventPeriodLabel )
          {
            UILabel__set_text(eventPeriodLabel, NameText, 0LL);
            changePeriodLabel = v6->fields.changePeriodLabel;
            NameText = LocalizationManager__GetPeriod(item->fields.openedAt, item->fields.closedAt, 0, 1, 0LL);
            if ( changePeriodLabel )
            {
              UILabel__set_text(changePeriodLabel, NameText, 0LL);
              if ( item->fields.isFinished )
                goto LABEL_51;
              if ( item->fields.isLocked )
              {
                condMessageLabel = v6->fields.condMessageLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5803/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0LL);
                if ( !condMessageLabel )
                  goto LABEL_48;
                UILabel__set_text(condMessageLabel, NameText, 0LL);
                if ( item->fields.isFinished )
                  goto LABEL_51;
              }
              if ( item->fields.isClosedLimit )
              {
                v30 = v6->fields.condMessageLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5800/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0LL);
                if ( !v30 )
                  goto LABEL_48;
                UILabel__set_text(v30, NameText, 0LL);
                if ( item->fields.isFinished )
                {
LABEL_51:
                  if ( item->fields.isLocked )
                    goto LABEL_52;
                  v27 = v6->fields.condMessageLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5802/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, 0LL);
                  if ( !v27 )
                    goto LABEL_48;
                  UILabel__set_text(v27, NameText, 0LL);
                  if ( item->fields.isFinished )
                  {
LABEL_52:
                    if ( !item->fields.isLocked )
                      goto LABEL_47;
                    v28 = v6->fields.condMessageLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5801/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/, 0LL);
                    if ( !v28 )
                      goto LABEL_48;
                    UILabel__set_text(v28, NameText, 0LL);
                    if ( item->fields.isFinished )
                      goto LABEL_47;
                  }
                }
              }
              if ( item->fields.isLocked )
              {
LABEL_47:
                ShopEventListViewItemDraw__SetBaseButtonState(v6, item, mode, v26);
                return;
              }
              NameText = (System_String_o *)v6->fields.condMessageLabel;
              if ( NameText )
              {
                UILabel__set_text((UILabel_o *)NameText, string_TypeInfo->static_fields->Empty, 0LL);
                goto LABEL_47;
              }
            }
          }
        }
      }
    }
LABEL_48:
    sub_B7076C(NameText, v13);
  }
}


void __fastcall ShopEventListViewItemDraw__SetSpriteActive(
        ShopEventListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4357A58 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357A58 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B7076C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}