void __fastcall ShopEventListViewItemDraw___ctor(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopEventListViewItemDraw__Awake(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UISprite_o *v11; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UISprite_o *v19; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_421A179 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421A179 = 1;
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
    v11 = this->fields.baseSprite;
    if ( !v11
      || (mAtlas = v11->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v5,
            v6,
            v7,
            v8,
            v9,
            v10),
          (v19 = this->fields.baseSprite) == 0LL) )
    {
      sub_B0D97C(v4);
    }
    mSpriteName = v19->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  void *v9; // x0
  UnityEngine_Object_o *baseSprite; // x21
  bool isLocked; // w8
  _BOOL8 v12; // x1
  UIWidget_o *v13; // x20
  float *v14; // x11
  float *v15; // x8
  float *v16; // x9
  float *v17; // x10
  float *v18; // x11
  __int64 v19; // x1
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421A17D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    sub_B0D8A4(&UICommonButtonColor_TypeInfo, v7);
    byte_421A17D = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (void *)UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( item )
    {
      v9 = this->fields.baseButton;
      if ( item->fields.isFinished || (isLocked = item->fields.isLocked) )
        isLocked = 1;
      if ( v9 )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)v9, mode == 3 || isLocked, 1, 0LL);
        v9 = this->fields.baseButton;
        if ( item->fields.isFinished )
        {
          v12 = 0LL;
          if ( !v9 )
            goto LABEL_39;
        }
        else
        {
          v12 = !item->fields.isLocked;
          if ( !v9 )
            goto LABEL_39;
        }
        (*(void (__fastcall **)(void *, _BOOL8, _QWORD))(*(_QWORD *)v9 + 392LL))(
          v9,
          v12,
          *(_QWORD *)(*(_QWORD *)v9 + 400LL));
        v9 = this->fields.baseButton;
        if ( item->fields.isFinished || item->fields.isLocked )
        {
          v19 = 3LL;
          if ( !v9 )
            goto LABEL_39;
        }
        else
        {
          v19 = 0LL;
          if ( !v9 )
            goto LABEL_39;
        }
        (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)v9 + 536LL))(
          v9,
          v19,
          1LL,
          *(_QWORD *)(*(_QWORD *)v9 + 544LL));
        return;
      }
    }
LABEL_39:
    sub_B0D97C(v9);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (void *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( item )
    {
      v13 = (UIWidget_o *)this->fields.baseSprite;
      if ( item->fields.isFinished || item->fields.isLocked )
      {
        v9 = UICommonButtonColor_TypeInfo;
        if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
          v9 = UICommonButtonColor_TypeInfo;
        }
        v14 = (float *)*((_QWORD *)v9 + 23);
        v15 = v14 + 12;
        v16 = v14 + 13;
        v17 = v14 + 14;
        v18 = v14 + 15;
        if ( v13 )
        {
LABEL_27:
          v20.fields.b = *v17;
          v20.fields.g = *v16;
          v20.fields.r = *v15;
          v20.fields.a = *v18;
          UIWidget__set_color(v13, v20, 0LL);
          return;
        }
      }
      else
      {
        v9 = UICommonButtonColor_TypeInfo;
        if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
          v9 = UICommonButtonColor_TypeInfo;
        }
        v15 = (float *)*((_QWORD *)v9 + 23);
        v16 = v15 + 1;
        v17 = v15 + 2;
        v18 = v15 + 3;
        if ( v13 )
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
  __int64 v5; // x1
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v7; // x0
  UISprite_o *v9; // x21
  int32_t eventId; // w20
  UnityEngine_Object_o *baseAtlas; // x20

  if ( (byte_421A17C & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421A17C = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
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
    v7 = this->fields.baseSprite;
    if ( v7 )
    {
      UISprite__set_atlas(v7, this->fields.baseAtlas, 0LL);
      v7 = this->fields.baseSprite;
      if ( v7 )
      {
        UISprite__set_spriteName(v7, this->fields.baseSpriteName, 0LL);
        return 0;
      }
    }
LABEL_21:
    sub_B0D97C(v7);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UISprite_o *rangeSprite; // x1
  ShopEventListViewItemDraw_o *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  UnityEngine_GameObject_o *infoBase; // x22
  System_String_o *NameText; // x0
  UILabel_o *nameTextLabel; // x22
  const MethodInfo *v20; // x1
  UILabel_o *messageTextLabel; // x22
  const MethodInfo *v22; // x1
  System_String_o *DetailText; // x0
  struct EventEntity_o *eventEntity; // x8
  UILabel_o *eventPeriodLabel; // x22
  int64_t startedAt; // x23
  int64_t endedAt; // x24
  ShopEventListViewItemDraw_o *v28; // x0
  const MethodInfo *v29; // x3
  UILabel_o *changePeriodLabel; // x22
  const MethodInfo *v31; // x3
  UILabel_o *v32; // x22
  UILabel_o *v33; // x22
  UILabel_o *condMessageLabel; // x22
  UILabel_o *v35; // x22

  v6 = this;
  if ( (byte_421A17A & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&string_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_5729/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, v8);
    sub_B0D8A4(&StringLiteral_15708/*"[000000]"*/, v9);
    sub_B0D8A4(&StringLiteral_5727/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, v10);
    sub_B0D8A4(&StringLiteral_5730/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, v11);
    this = (ShopEventListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_5728/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/, v12);
    byte_421A17A = 1;
  }
  rangeSprite = v6->fields.rangeSprite;
  if ( !item )
  {
    ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, 0, method);
    ShopEventListViewItemDraw__SetSpriteActive(v28, v6->fields.addRangeSprite, 0, v29);
    return;
  }
  ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, mode == 0, method);
  ShopEventListViewItemDraw__SetSpriteActive(v14, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v15);
  if ( mode )
  {
    infoBase = v6->fields.infoBase;
    NameText = (System_String_o *)ShopEventListViewItemDraw__SetBaseSprite(v6, item, v16);
    if ( infoBase )
    {
      UnityEngine_GameObject__SetActive(infoBase, ((unsigned __int8)NameText & 1) == 0, 0LL);
      nameTextLabel = v6->fields.nameTextLabel;
      NameText = ShopEventListViewItem__get_NameText(item, v20);
      if ( nameTextLabel )
      {
        UILabel__set_text(nameTextLabel, NameText, 0LL);
        messageTextLabel = v6->fields.messageTextLabel;
        DetailText = ShopEventListViewItem__get_DetailText(item, v22);
        NameText = System_String__Concat_43849904((System_String_o *)StringLiteral_15708/*"[000000]"*/, DetailText, 0LL);
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
                NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5730/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0LL);
                if ( !condMessageLabel )
                  goto LABEL_48;
                UILabel__set_text(condMessageLabel, NameText, 0LL);
                if ( item->fields.isFinished )
                  goto LABEL_51;
              }
              if ( item->fields.isClosedLimit )
              {
                v35 = v6->fields.condMessageLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5727/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0LL);
                if ( !v35 )
                  goto LABEL_48;
                UILabel__set_text(v35, NameText, 0LL);
                if ( item->fields.isFinished )
                {
LABEL_51:
                  if ( item->fields.isLocked )
                    goto LABEL_52;
                  v32 = v6->fields.condMessageLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5729/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, 0LL);
                  if ( !v32 )
                    goto LABEL_48;
                  UILabel__set_text(v32, NameText, 0LL);
                  if ( item->fields.isFinished )
                  {
LABEL_52:
                    if ( !item->fields.isLocked )
                      goto LABEL_47;
                    v33 = v6->fields.condMessageLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/, 0LL);
                    if ( !v33 )
                      goto LABEL_48;
                    UILabel__set_text(v33, NameText, 0LL);
                    if ( item->fields.isFinished )
                      goto LABEL_47;
                  }
                }
              }
              if ( item->fields.isLocked )
              {
LABEL_47:
                ShopEventListViewItemDraw__SetBaseButtonState(v6, item, mode, v31);
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
    sub_B0D97C(NameText);
  }
}


void __fastcall ShopEventListViewItemDraw__SetSpriteActive(
        ShopEventListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_421A17B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, sprite);
    byte_421A17B = 1;
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
      sub_B0D97C(gameObject);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}