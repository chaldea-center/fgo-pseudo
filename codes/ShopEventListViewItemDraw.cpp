void __fastcall ShopEventListViewItemDraw___ctor(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopEventListViewItemDraw__Awake(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UISprite_o *v10; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UISprite_o *v18; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_40FF87F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FF87F = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    v10 = this->fields.baseSprite;
    if ( !v10
      || (mAtlas = v10->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v4,
            v5,
            v6,
            v7,
            v8,
            v9),
          (v18 = this->fields.baseSprite) == 0LL) )
    {
      sub_B170D4();
    }
    mSpriteName = v18->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
  UnityEngine_Object_o *baseSprite; // x21
  UICommonButton_o *v10; // x0
  bool isLocked; // w8
  struct UICommonButton_o *v12; // x0
  _BOOL8 v13; // x1
  UIWidget_o *v14; // x20
  UICommonButtonColor_c *v15; // x0
  struct UICommonButtonColor_StaticFields *static_fields; // x11
  float *p_r; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  struct UICommonButton_o *v21; // x0
  __int64 v22; // x1
  UICommonButtonColor_c *v23; // x0
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FF883 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    sub_B16FFC(&UICommonButtonColor_TypeInfo, v7);
    byte_40FF883 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    if ( item )
    {
      v10 = this->fields.baseButton;
      if ( item->fields.isFinished || (isLocked = item->fields.isLocked) )
        isLocked = 1;
      if ( v10 )
      {
        UICommonButton__SetColliderEnable(v10, mode == 3 || isLocked, 1, 0LL);
        v12 = this->fields.baseButton;
        if ( item->fields.isFinished )
        {
          v13 = 0LL;
          if ( !v12 )
            goto LABEL_39;
        }
        else
        {
          v13 = !item->fields.isLocked;
          if ( !v12 )
            goto LABEL_39;
        }
        ((void (__fastcall *)(struct UICommonButton_o *, _BOOL8, Il2CppMethodPointer))v12->klass->vtable._5_set_isEnabled.method)(
          v12,
          v13,
          v12->klass->vtable._6_OnInit.methodPtr);
        v21 = this->fields.baseButton;
        if ( item->fields.isFinished || item->fields.isLocked )
        {
          v22 = 3LL;
          if ( !v21 )
            goto LABEL_39;
        }
        else
        {
          v22 = 0LL;
          if ( !v21 )
            goto LABEL_39;
        }
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v21->klass->vtable._14_SetState.method)(
          v21,
          v22,
          1LL,
          v21->klass->vtable._15_OnPress.methodPtr);
        return;
      }
    }
LABEL_39:
    sub_B170D4();
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    if ( item )
    {
      v14 = (UIWidget_o *)this->fields.baseSprite;
      if ( item->fields.isFinished || item->fields.isLocked )
      {
        v15 = UICommonButtonColor_TypeInfo;
        if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
          v15 = UICommonButtonColor_TypeInfo;
        }
        static_fields = v15->static_fields;
        p_r = &static_fields->disabledColor.fields.r;
        p_g = &static_fields->disabledColor.fields.g;
        p_b = &static_fields->disabledColor.fields.b;
        p_a = &static_fields->disabledColor.fields.a;
        if ( v14 )
        {
LABEL_27:
          v24.fields.b = *p_b;
          v24.fields.g = *p_g;
          v24.fields.r = *p_r;
          v24.fields.a = *p_a;
          UIWidget__set_color(v14, v24, 0LL);
          return;
        }
      }
      else
      {
        v23 = UICommonButtonColor_TypeInfo;
        if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
          v23 = UICommonButtonColor_TypeInfo;
        }
        p_r = &v23->static_fields->normal.fields.r;
        p_g = p_r + 1;
        p_b = p_r + 2;
        p_a = p_r + 3;
        if ( v14 )
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
  UISprite_o *v8; // x21
  int32_t eventId; // w20
  UnityEngine_Object_o *baseAtlas; // x20
  UISprite_o *v11; // x0
  UISprite_o *v12; // x0

  if ( (byte_40FF882 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FF882 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
    return 0;
  if ( !item )
    goto LABEL_21;
  v8 = this->fields.baseSprite;
  eventId = item->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetShopBanner(v8, eventId, 0LL) )
  {
    baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(baseAtlas, 0LL, 0LL) )
      return 0;
    v11 = this->fields.baseSprite;
    if ( v11 )
    {
      UISprite__set_atlas(v11, this->fields.baseAtlas, 0LL);
      v12 = this->fields.baseSprite;
      if ( v12 )
      {
        UISprite__set_spriteName(v12, this->fields.baseSpriteName, 0LL);
        return 0;
      }
    }
LABEL_21:
    sub_B170D4();
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
  bool v18; // w0
  UILabel_o *nameTextLabel; // x22
  const MethodInfo *v20; // x1
  System_String_o *NameText; // x0
  UILabel_o *messageTextLabel; // x22
  const MethodInfo *v23; // x1
  System_String_o *DetailText; // x0
  System_String_o *v25; // x0
  struct EventEntity_o *eventEntity; // x8
  UILabel_o *eventPeriodLabel; // x22
  int64_t startedAt; // x23
  int64_t endedAt; // x24
  ShopEventListViewItemDraw_o *v30; // x0
  const MethodInfo *v31; // x3
  System_String_o *Period; // x0
  UILabel_o *changePeriodLabel; // x22
  System_String_o *v34; // x0
  const MethodInfo *v35; // x3
  UILabel_o *v36; // x22
  System_String_o *v37; // x0
  UILabel_o *v38; // x22
  System_String_o *v39; // x0
  UILabel_o *condMessageLabel; // x22
  System_String_o *v41; // x0
  UILabel_o *v42; // x22
  System_String_o *v43; // x0
  UILabel_o *v44; // x0

  v6 = this;
  if ( (byte_40FF880 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&string_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_5695, v8);
    sub_B16FFC(&StringLiteral_15598, v9);
    sub_B16FFC(&StringLiteral_5693, v10);
    sub_B16FFC(&StringLiteral_5696, v11);
    this = (ShopEventListViewItemDraw_o *)sub_B16FFC(&StringLiteral_5694, v12);
    byte_40FF880 = 1;
  }
  rangeSprite = v6->fields.rangeSprite;
  if ( !item )
  {
    ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, 0, method);
    ShopEventListViewItemDraw__SetSpriteActive(v30, v6->fields.addRangeSprite, 0, v31);
    return;
  }
  ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, mode == 0, method);
  ShopEventListViewItemDraw__SetSpriteActive(v14, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v15);
  if ( mode )
  {
    infoBase = v6->fields.infoBase;
    v18 = ShopEventListViewItemDraw__SetBaseSprite(v6, item, v16);
    if ( infoBase )
    {
      UnityEngine_GameObject__SetActive(infoBase, !v18, 0LL);
      nameTextLabel = v6->fields.nameTextLabel;
      NameText = ShopEventListViewItem__get_NameText(item, v20);
      if ( nameTextLabel )
      {
        UILabel__set_text(nameTextLabel, NameText, 0LL);
        messageTextLabel = v6->fields.messageTextLabel;
        DetailText = ShopEventListViewItem__get_DetailText(item, v23);
        v25 = System_String__Concat_43743732((System_String_o *)StringLiteral_15598, DetailText, 0LL);
        if ( messageTextLabel )
        {
          UILabel__set_text(messageTextLabel, v25, 0LL);
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
          Period = LocalizationManager__GetPeriod(startedAt, endedAt, 0, 0, 0LL);
          if ( eventPeriodLabel )
          {
            UILabel__set_text(eventPeriodLabel, Period, 0LL);
            changePeriodLabel = v6->fields.changePeriodLabel;
            v34 = LocalizationManager__GetPeriod(item->fields.openedAt, item->fields.closedAt, 0, 1, 0LL);
            if ( changePeriodLabel )
            {
              UILabel__set_text(changePeriodLabel, v34, 0LL);
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
                v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5696, 0LL);
                if ( !condMessageLabel )
                  goto LABEL_48;
                UILabel__set_text(condMessageLabel, v41, 0LL);
                if ( item->fields.isFinished )
                  goto LABEL_51;
              }
              if ( item->fields.isClosedLimit )
              {
                v42 = v6->fields.condMessageLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5693, 0LL);
                if ( !v42 )
                  goto LABEL_48;
                UILabel__set_text(v42, v43, 0LL);
                if ( item->fields.isFinished )
                {
LABEL_51:
                  if ( item->fields.isLocked )
                    goto LABEL_52;
                  v36 = v6->fields.condMessageLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5695, 0LL);
                  if ( !v36 )
                    goto LABEL_48;
                  UILabel__set_text(v36, v37, 0LL);
                  if ( item->fields.isFinished )
                  {
LABEL_52:
                    if ( !item->fields.isLocked )
                      goto LABEL_47;
                    v38 = v6->fields.condMessageLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5694, 0LL);
                    if ( !v38 )
                      goto LABEL_48;
                    UILabel__set_text(v38, v39, 0LL);
                    if ( item->fields.isFinished )
                      goto LABEL_47;
                  }
                }
              }
              if ( item->fields.isLocked )
              {
LABEL_47:
                ShopEventListViewItemDraw__SetBaseButtonState(v6, item, mode, v35);
                return;
              }
              v44 = v6->fields.condMessageLabel;
              if ( v44 )
              {
                UILabel__set_text(v44, string_TypeInfo->static_fields->Empty, 0LL);
                goto LABEL_47;
              }
            }
          }
        }
      }
    }
LABEL_48:
    sub_B170D4();
  }
}


void __fastcall ShopEventListViewItemDraw__SetSpriteActive(
        ShopEventListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FF881 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FF881 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}