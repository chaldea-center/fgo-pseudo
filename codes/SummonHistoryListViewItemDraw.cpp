void SummonHistoryListViewItemDraw___ctor(SummonHistoryListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SummonHistoryListViewItemDraw__SetBonusMessagePosition(
        SummonHistoryListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleLabel; // x0
  unsigned int localPosition; // s0
  struct UILabel_o *v5; // x8
  struct UISprite_o *bonusItemSpr; // x9
  float v7; // s8
  float mWidth; // s9
  float v9; // s10
  UnityEngine_GameObject_o *gameObject; // x0

  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel
    || (titleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleLabel, 0)) == 0
    || (titleLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)titleLabel,
                                                  0)) == 0
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)titleLabel, 0),
        (v5 = this->fields.titleLabel) == 0)
    || (bonusItemSpr = this->fields.bonusItemSpr) == 0
    || (titleLabel = (UnityEngine_Component_o *)this->fields.messageLabel2) == 0 )
  {
    sub_1C32E7C(titleLabel);
  }
  v7 = *(float *)&localPosition;
  mWidth = (float)bonusItemSpr->fields.mWidth;
  v9 = (float)v5->fields.mWidth;
  gameObject = UnityEngine_Component__get_gameObject(titleLabel, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)((float)(v7 + v9) + mWidth) + 3.0, 0);
}


void SummonHistoryListViewItemDraw__SetItem(
        SummonHistoryListViewItemDraw_o *this,
        SummonHistoryListViewItem_o *item,
        const MethodInfo *method)
{
  SummonHistoryListViewItemDraw_o *v4; // x19
  int32_t Layout_k__BackingField; // w8
  SummonHistoryListViewItemDraw_o *v6; // x20
  System_String_o *Message_k__BackingField; // x1
  UILabel_o *dotLabel; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  v4 = this;
  if ( (byte_4C33DBF & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    this = (SummonHistoryListViewItemDraw_o *)sub_1C32C20(&StringLiteral_6905/*"GACHA_HISTORY_LIST_DOT"*/);
    byte_4C33DBF = 1;
  }
  if ( !item )
    goto LABEL_53;
  Layout_k__BackingField = item->fields._Layout_k__BackingField;
  switch ( Layout_k__BackingField )
  {
    case 2:
      this = (SummonHistoryListViewItemDraw_o *)v4->fields.messageLabel;
      if ( this )
      {
        this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (SummonHistoryListViewItemDraw_o *)v4->fields.dotLabel;
          if ( this )
          {
            this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (SummonHistoryListViewItemDraw_o *)v4->fields.datetimeLabel;
              if ( this )
              {
                this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                  this = (SummonHistoryListViewItemDraw_o *)v4->fields.titleLabel;
                  if ( this )
                  {
                    this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
                    if ( this )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                      this = (SummonHistoryListViewItemDraw_o *)v4->fields.messageLabel2;
                      if ( this )
                      {
                        this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
                        if ( this )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                          this = (SummonHistoryListViewItemDraw_o *)v4->fields.bonusItemIconComponent;
                          if ( this )
                          {
                            this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
                            if ( this )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                              this = (SummonHistoryListViewItemDraw_o *)v4->fields.titleLabel;
                              if ( this )
                              {
                                UILabel__set_text((UILabel_o *)this, item->fields._Title_k__BackingField, 0);
                                this = (SummonHistoryListViewItemDraw_o *)v4->fields.messageLabel2;
                                if ( this )
                                {
                                  UILabel__set_text((UILabel_o *)this, item->fields._Message_k__BackingField, 0);
                                  this = (SummonHistoryListViewItemDraw_o *)v4->fields.bonusItemIconComponent;
                                  if ( this )
                                  {
                                    ItemIconComponent__SetItem(
                                      (ItemIconComponent_o *)this,
                                      item->fields._itemID_k__BackingField,
                                      -1,
                                      1,
                                      0);
                                    dotLabel = v4->fields.dotLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    this = (SummonHistoryListViewItemDraw_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_6905/*"GACHA_HISTORY_LIST_DOT"*/,
                                                                                0);
                                    if ( dotLabel )
                                    {
                                      UILabel__set_text(dotLabel, (System_String_o *)this, 0);
                                      SummonHistoryListViewItemDraw__SetBonusMessagePosition(v4, v9);
                                      SummonHistoryListViewItemDraw__SetItemIconPosition(v4, v10);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_53;
    case 1:
      this = (SummonHistoryListViewItemDraw_o *)v4->fields.messageLabel;
      if ( !this )
        goto LABEL_53;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (SummonHistoryListViewItemDraw_o *)v4->fields.dotLabel;
      if ( !this )
        goto LABEL_53;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (SummonHistoryListViewItemDraw_o *)v4->fields.datetimeLabel;
      if ( !this )
        goto LABEL_53;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (SummonHistoryListViewItemDraw_o *)v4->fields.datetimeLabel;
      if ( !this )
        goto LABEL_53;
      Message_k__BackingField = item->fields._Message_k__BackingField;
LABEL_45:
      UILabel__set_text((UILabel_o *)this, Message_k__BackingField, 0);
      this = (SummonHistoryListViewItemDraw_o *)v4->fields.titleLabel;
      if ( this )
      {
        this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (SummonHistoryListViewItemDraw_o *)v4->fields.messageLabel2;
          if ( this )
          {
            this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              this = (SummonHistoryListViewItemDraw_o *)v4->fields.bonusItemIconComponent;
              if ( this )
              {
                this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_53:
      sub_1C32E7C(this);
    case 0:
      this = (SummonHistoryListViewItemDraw_o *)v4->fields.messageLabel;
      if ( !this )
        goto LABEL_53;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (SummonHistoryListViewItemDraw_o *)v4->fields.dotLabel;
      if ( !this )
        goto LABEL_53;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (SummonHistoryListViewItemDraw_o *)v4->fields.datetimeLabel;
      if ( !this )
        goto LABEL_53;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      if ( !this )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (SummonHistoryListViewItemDraw_o *)v4->fields.messageLabel;
      if ( !this )
        goto LABEL_53;
      UILabel__set_text((UILabel_o *)this, item->fields._Message_k__BackingField, 0);
      v6 = (SummonHistoryListViewItemDraw_o *)v4->fields.dotLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SummonHistoryListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6905/*"GACHA_HISTORY_LIST_DOT"*/, 0);
      if ( !v6 )
        goto LABEL_53;
      Message_k__BackingField = (System_String_o *)this;
      this = v6;
      goto LABEL_45;
  }
}


void SummonHistoryListViewItemDraw__SetItemIconPosition(
        SummonHistoryListViewItemDraw_o *this,
        const MethodInfo *method)
{
  SummonHistoryListViewItemDraw_o *v2; // x19
  struct UILabel_o *titleLabel; // x8
  float mWidth; // s8
  float v5; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x0
  struct UISprite_o *bonusItemSpr; // x8
  UnityEngine_GameObject_o *v9; // x0
  struct UISprite_o *v10; // x8
  UnityEngine_Component_o *v11; // x8
  SummonHistoryListViewItemDraw_o *v12; // x19
  float v13; // s0

  v2 = this;
  if ( (byte_4C33DC0 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1440/*"7"*/);
    this = (SummonHistoryListViewItemDraw_o *)sub_1C32C20(&StringLiteral_1442/*"7999"*/);
    byte_4C33DC0 = 1;
  }
  titleLabel = v2->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_17;
  this = (SummonHistoryListViewItemDraw_o *)v2->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_17;
  mWidth = (float)titleLabel->fields.mWidth;
  v5 = (float)(SLODWORD(this[1].fields.bonusItemSpr) / 2);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, mWidth + v5, 0);
  this = (SummonHistoryListViewItemDraw_o *)v2->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_17;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v7, 0.0, 0);
  bonusItemSpr = v2->fields.bonusItemSpr;
  if ( !bonusItemSpr )
    goto LABEL_17;
  this = (SummonHistoryListViewItemDraw_o *)System_String__op_Equality(
                                              bonusItemSpr->fields.mSpriteName,
                                              (System_String_o *)StringLiteral_1440/*"7"*/,
                                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonHistoryListViewItemDraw_o *)v2->fields.bonusItemSpr;
    if ( !this )
      goto LABEL_17;
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPositionY(v9, 1.0, 0);
  }
  v10 = v2->fields.bonusItemSpr;
  if ( !v10 )
LABEL_17:
    sub_1C32E7C(this);
  if ( System_String__op_Equality(v10->fields.mSpriteName, (System_String_o *)StringLiteral_1442/*"7999"*/, 0) )
  {
    this = (SummonHistoryListViewItemDraw_o *)v2->fields.bonusItemSpr;
    if ( this )
    {
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
      v11 = (UnityEngine_Component_o *)v2->fields.bonusItemSpr;
      if ( v11 )
      {
        v12 = this;
        this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_transform(v11, 0);
        if ( this )
        {
          v13 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0));
          GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)v12, v13 + -1.0, 0);
          return;
        }
      }
    }
    goto LABEL_17;
  }
}