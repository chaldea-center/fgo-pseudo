void ShopEventListViewItemDraw___ctor(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ShopEventListViewItemDraw__Awake(ShopEventListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_593470C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593470C = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( !v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas,
            (int32_t)mAtlas,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12),
          (v21 = this->fields.baseSprite) == 0) )
    {
      sub_21FFECC(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSpriteName,
      (int32_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


int32_t ShopEventListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) >= 3 )
    return 0;
  return initMode;
}


// local variable allocation has failed, the output may be wrong!
void ShopEventListViewItemDraw__SetBaseButtonState(
        ShopEventListViewItemDraw_o *this,
        ShopEventListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  void *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v12; // x2
  bool isLocked; // w8
  bool v14; // w1
  UIWidget_o *v15; // x20
  float *v16; // x11
  float *v17; // x8
  float *v18; // x9
  float *v19; // x10
  float *v20; // x11
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5934710 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICommonButtonColor_TypeInfo);
    byte_5934710 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
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
        v14 = mode == 3 || isLocked;
        UICommonButton__SetColliderEnable((UICommonButton_o *)v8, v14, 1, 0);
        v8 = this->fields.baseButton;
        if ( item->fields.isFinished )
        {
          v9 = 0;
          if ( !v8 )
            goto LABEL_38;
        }
        else
        {
          v9 = !item->fields.isLocked;
          if ( !v8 )
            goto LABEL_38;
        }
        (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v8 + 392LL))(
          v8,
          v9,
          *(_QWORD *)(*(_QWORD *)v8 + 400LL));
        v8 = this->fields.baseButton;
        v9 = 3;
        if ( !item->fields.isFinished )
        {
          if ( item->fields.isLocked )
            v9 = 3;
          else
            v9 = 0;
        }
        if ( v8 )
        {
          (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 536LL))(
            v8,
            v9,
            1,
            *(_QWORD *)(*(_QWORD *)v8 + 544LL));
          return;
        }
      }
    }
LABEL_38:
    sub_21FFECC(v8, v9);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  v8 = (void *)UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( item )
    {
      v15 = (UIWidget_o *)this->fields.baseSprite;
      if ( item->fields.isFinished || item->fields.isLocked )
      {
        v8 = UICommonButtonColor_TypeInfo;
        if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v9, v12);
          v8 = UICommonButtonColor_TypeInfo;
        }
        v16 = (float *)*((_QWORD *)v8 + 23);
        v17 = v16 + 12;
        v18 = v16 + 13;
        v19 = v16 + 14;
        v20 = v16 + 15;
        if ( v15 )
        {
LABEL_27:
          v21.fields.g = *v18;
          v21.fields.r = *v17;
          v21.fields.a = *v20;
          v21.fields.b = *v19;
          UIWidget__set_color(v15, v21, 0);
          return;
        }
      }
      else
      {
        v8 = UICommonButtonColor_TypeInfo;
        if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v9, v12);
          v8 = UICommonButtonColor_TypeInfo;
        }
        v17 = (float *)*((_QWORD *)v8 + 23);
        v18 = v17 + 1;
        v19 = v17 + 2;
        v20 = v17 + 3;
        if ( v15 )
          goto LABEL_27;
      }
    }
    goto LABEL_38;
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
  __int64 v8; // x2
  UISprite_o *v10; // x21
  int32_t eventId; // w20
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *baseAtlas; // x20

  if ( (byte_593470F & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593470F = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  v6 = (UISprite_o *)UnityEngine_Object__op_Equality(baseSprite, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return 0;
  if ( !item )
    goto LABEL_18;
  v10 = this->fields.baseSprite;
  eventId = item->fields.eventId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
  if ( !AtlasManager__SetShopBanner(v10, eventId, 0) )
  {
    baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
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
    sub_21FFECC(v6, v7);
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
  __int64 v19; // x1
  __int64 v20; // x2
  struct EventEntity_o *eventEntity; // x8
  int64_t startedAt; // x22
  int64_t endedAt; // x24
  ShopEventListViewItemDraw_o *v24; // x0
  const MethodInfo *v25; // x3
  UILabel_o *eventPeriodLabel; // x23
  UILabel_o *changePeriodLabel; // x22
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  UILabel_o *v30; // x22
  UILabel_o *condMessageLabel; // x22
  UILabel_o *v32; // x22
  UILabel_o *v33; // x22

  v6 = this;
  if ( (byte_593470D & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5930/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/);
    sub_21FFC50(&StringLiteral_16432/*"[000000]"*/);
    sub_21FFC50(&StringLiteral_5928/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/);
    sub_21FFC50(&StringLiteral_5931/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/);
    this = (ShopEventListViewItemDraw_o *)sub_21FFC50(&StringLiteral_5929/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/);
    byte_593470D = 1;
  }
  rangeSprite = v6->fields.rangeSprite;
  if ( !item )
  {
    ShopEventListViewItemDraw__SetSpriteActive(this, rangeSprite, 0, method);
    ShopEventListViewItemDraw__SetSpriteActive(v24, v6->fields.addRangeSprite, 0, v25);
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
    NameText = System_String__Concat_75438412((System_String_o *)StringLiteral_16432/*"[000000]"*/, DetailText, 0);
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v28);
      NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5931/*"EVENT_SHOP_BANNER_LOCKED_MSG"*/, 0);
      if ( !condMessageLabel )
        goto LABEL_45;
      UILabel__set_text(condMessageLabel, NameText, 0);
      if ( !item->fields.isFinished )
      {
LABEL_48:
        if ( !item->fields.isClosedLimit )
          goto LABEL_41;
        v32 = v6->fields.condMessageLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v28);
        NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5928/*"EVENT_SHOP_BANNER_CLOSED_MSG"*/, 0);
        if ( !v32 )
          goto LABEL_45;
        UILabel__set_text(v32, NameText, 0);
        if ( !item->fields.isFinished )
          goto LABEL_41;
      }
    }
    if ( !item->fields.isLocked )
    {
      v33 = v6->fields.condMessageLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v28);
      NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5930/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, 0);
      if ( !v33 )
        goto LABEL_45;
      UILabel__set_text(v33, NameText, 0);
      if ( !item->fields.isFinished )
      {
LABEL_41:
        if ( !item->fields.isLocked )
        {
          NameText = (System_String_o *)v6->fields.condMessageLabel;
          if ( NameText )
          {
            UILabel__set_text((UILabel_o *)NameText, **(System_String_o ***)(qword_594C0B8 + 184), 0);
            goto LABEL_44;
          }
LABEL_45:
          sub_21FFECC(NameText, v13);
        }
LABEL_44:
        ShopEventListViewItemDraw__SetBaseButtonState(v6, item, mode, v29);
        return;
      }
      if ( !item->fields.isLocked )
        goto LABEL_44;
    }
    v30 = v6->fields.condMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v28);
    NameText = LocalizationManager__Get((System_String_o *)StringLiteral_5929/*"EVENT_SHOP_BANNER_FINISHED_LOCKED_MSG"*/, 0);
    if ( !v30 )
      goto LABEL_45;
    UILabel__set_text(v30, NameText, 0);
    if ( item->fields.isFinished )
      goto LABEL_44;
    goto LABEL_41;
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopEventListViewItemDraw__SetSpriteActive(
        ShopEventListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_593470E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593470E = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0)) == 0 )
      sub_21FFECC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}