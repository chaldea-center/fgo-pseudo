void __fastcall ShopEventListViewItemDraw___ctor(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopEventListViewItemDraw__Awake(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o *v22; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_42EE5CE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE5CE = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( !v6 )
  {
    v14 = this->fields.baseSprite;
    if ( !v14
      || (mAtlas = v14->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13),
          (v22 = this->fields.baseSprite) == 0LL) )
    {
      sub_B5D69C(v6, v7);
    }
    mSpriteName = v22->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *baseButton; // x22
  void *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *baseSprite; // x21
  bool isLocked; // w8
  UIWidget_o *v15; // x20
  float *v16; // x11
  float *v17; // x8
  float *v18; // x9
  float *v19; // x10
  float *v20; // x11
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EE5D2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&UICommonButtonColor_TypeInfo, v7, v8, v9);
    byte_42EE5D2 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (void *)UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( item )
    {
      v11 = this->fields.baseButton;
      if ( item->fields.isFinished || (isLocked = item->fields.isLocked) )
        isLocked = 1;
      if ( v11 )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)v11, mode == 3 || isLocked, 1, 0LL);
        v11 = this->fields.baseButton;
        if ( item->fields.isFinished )
        {
          v12 = 0LL;
          if ( !v11 )
            goto LABEL_39;
        }
        else
        {
          v12 = !item->fields.isLocked;
          if ( !v11 )
            goto LABEL_39;
        }
        (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v11 + 392LL))(
          v11,
          v12,
          *(_QWORD *)(*(_QWORD *)v11 + 400LL));
        v11 = this->fields.baseButton;
        if ( item->fields.isFinished || item->fields.isLocked )
        {
          v12 = 3LL;
          if ( !v11 )
            goto LABEL_39;
        }
        else
        {
          v12 = 0LL;
          if ( !v11 )
            goto LABEL_39;
        }
        (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 536LL))(
          v11,
          v12,
          1LL,
          *(_QWORD *)(*(_QWORD *)v11 + 544LL));
        return;
      }
    }
LABEL_39:
    sub_B5D69C(v11, v12);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (void *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( item )
    {
      v15 = (UIWidget_o *)this->fields.baseSprite;
      if ( item->fields.isFinished || item->fields.isLocked )
      {
        v11 = UICommonButtonColor_TypeInfo;
        if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
          v11 = UICommonButtonColor_TypeInfo;
        }
        v16 = (float *)*((_QWORD *)v11 + 23);
        v17 = v16 + 12;
        v18 = v16 + 13;
        v19 = v16 + 14;
        v20 = v16 + 15;
        if ( v15 )
        {
LABEL_27:
          v21.fields.b = *v19;
          v21.fields.g = *v18;
          v21.fields.r = *v17;
          v21.fields.a = *v20;
          UIWidget__set_color(v15, v21, 0LL);
          return;
        }
      }
      else
      {
        v11 = UICommonButtonColor_TypeInfo;
        if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
          v11 = UICommonButtonColor_TypeInfo;
        }
        v17 = (float *)*((_QWORD *)v11 + 23);
        v18 = v17 + 1;
        v19 = v17 + 2;
        v20 = v17 + 3;
        if ( v15 )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v10; // x0
  __int64 v11; // x1
  UISprite_o *v13; // x21
  int32_t eventId; // w20
  UnityEngine_Object_o *baseAtlas; // x20

  if ( (byte_42EE5D1 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EE5D1 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
    return 0;
  if ( !item )
    goto LABEL_21;
  v13 = this->fields.baseSprite;
  eventId = item->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetShopBanner(v13, eventId, 0LL) )
  {
    baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(baseAtlas, 0LL, 0LL) )
      return 0;
    v10 = this->fields.baseSprite;
    if ( v10 )
    {
      UISprite__set_atlas(v10, this->fields.baseAtlas, 0LL);
      v10 = this->fields.baseSprite;
      if ( v10 )
      {
        UISprite__set_spriteName(v10, this->fields.baseSpriteName, 0LL);
        return 0;
      }
    }
LABEL_21:
    sub_B5D69C(v10, v11);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UISprite_o *rangeSprite; // x1
  ShopEventListViewItemDraw_o *v26; // x0
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  UnityEngine_GameObject_o *infoBase; // x22
  System_String_o *NameText; // x0
  __int64 v31; // x1
  UILabel_o *nameTextLabel; // x22
  const MethodInfo *v33; // x1
  UILabel_o *messageTextLabel; // x22
  const MethodInfo *v35; // x1
  System_String_o *DetailText; // x0
  struct EventEntity_o *eventEntity; // x8
  UILabel_o *eventPeriodLabel; // x22
  int64_t startedAt; // x23
  int64_t endedAt; // x24
  ShopEventListViewItemDraw_o *v41; // x0
  const MethodInfo *v42; // x3
  UILabel_o *changePeriodLabel; // x22
  const MethodInfo *v44; // x3
  UILabel_o *v45; // x22
  UILabel_o *v46; // x22
  UILabel_o *condMessageLabel; // x22
  UILabel_o *v48; // x22

  v6 = this;
  if ( (byte_42EE5CF & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&string_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_5790/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_15851/*"[000000]"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_5788/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_5791/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, v19, v20, v21);
    this = (ShopEventListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_5789/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/, v22, v23, v24);
    byte_42EE5CF = 1;
  }
  rangeSprite = v6->fields.rangeSprite;
  if ( !item )
  {
    ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, 0, method);
    ShopEventListViewItemDraw__SetSpriteActive(v41, v6->fields.addRangeSprite, 0, v42);
    return;
  }
  ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, mode == 0, method);
  ShopEventListViewItemDraw__SetSpriteActive(v26, v6->fields.addRangeSprite, item->fields.isTerminationSpace, v27);
  if ( mode )
  {
    infoBase = v6->fields.infoBase;
    NameText = (System_String_o *)ShopEventListViewItemDraw__SetBaseSprite(v6, item, v28);
    if ( infoBase )
    {
      UnityEngine_GameObject__SetActive(infoBase, ((unsigned __int8)NameText & 1) == 0, 0LL);
      nameTextLabel = v6->fields.nameTextLabel;
      NameText = ShopEventListViewItem__get_NameText(item, v33);
      if ( nameTextLabel )
      {
        UILabel__set_text(nameTextLabel, NameText, 0LL);
        messageTextLabel = v6->fields.messageTextLabel;
        DetailText = ShopEventListViewItem__get_DetailText(item, v35);
        NameText = System_String__Concat_44577788((System_String_o *)StringLiteral_15851/*"[000000]"*/, DetailText, 0LL);
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
                NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5791/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0LL);
                if ( !condMessageLabel )
                  goto LABEL_48;
                UILabel__set_text(condMessageLabel, NameText, 0LL);
                if ( item->fields.isFinished )
                  goto LABEL_51;
              }
              if ( item->fields.isClosedLimit )
              {
                v48 = v6->fields.condMessageLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5788/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0LL);
                if ( !v48 )
                  goto LABEL_48;
                UILabel__set_text(v48, NameText, 0LL);
                if ( item->fields.isFinished )
                {
LABEL_51:
                  if ( item->fields.isLocked )
                    goto LABEL_52;
                  v45 = v6->fields.condMessageLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5790/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, 0LL);
                  if ( !v45 )
                    goto LABEL_48;
                  UILabel__set_text(v45, NameText, 0LL);
                  if ( item->fields.isFinished )
                  {
LABEL_52:
                    if ( !item->fields.isLocked )
                      goto LABEL_47;
                    v46 = v6->fields.condMessageLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5789/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/, 0LL);
                    if ( !v46 )
                      goto LABEL_48;
                    UILabel__set_text(v46, NameText, 0LL);
                    if ( item->fields.isFinished )
                      goto LABEL_47;
                  }
                }
              }
              if ( item->fields.isLocked )
              {
LABEL_47:
                ShopEventListViewItemDraw__SetBaseButtonState(v6, item, mode, v44);
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
    sub_B5D69C(NameText, v31);
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

  if ( (byte_42EE5D0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, isActive, method);
    byte_42EE5D0 = 1;
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
      sub_B5D69C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}