void __fastcall SummonHistoryListViewItemDraw___ctor(SummonHistoryListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonHistoryListViewItemDraw__SetBonusMessagePosition(
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
    || (titleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleLabel, 0LL)) == 0LL
    || (titleLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)titleLabel,
                                                  0LL)) == 0LL
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)titleLabel,
                                        0LL),
        (v5 = this->fields.titleLabel) == 0LL)
    || (bonusItemSpr = this->fields.bonusItemSpr) == 0LL
    || (titleLabel = (UnityEngine_Component_o *)this->fields.messageLabel2) == 0LL )
  {
    sub_B5D69C(titleLabel, method);
  }
  v7 = *(float *)&localPosition;
  mWidth = (float)v5->fields.mWidth;
  v9 = (float)bonusItemSpr->fields.mWidth;
  gameObject = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)((float)(v7 + mWidth) + v9) + 3.0, 0LL);
}


void __fastcall SummonHistoryListViewItemDraw__SetItem(
        SummonHistoryListViewItemDraw_o *this,
        SummonHistoryListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SummonHistoryListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t Layout_k__BackingField; // w8
  SummonHistoryListViewItemDraw_o *v10; // x20
  System_String_o *Message_k__BackingField; // x1
  UILabel_o *dotLabel; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  v5 = this;
  if ( (byte_42EC8F6 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    this = (SummonHistoryListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_6916/*"GACHA_HISTORY_LIST_DOT"*/, v6, v7, v8);
    byte_42EC8F6 = 1;
  }
  if ( !item )
    goto LABEL_55;
  Layout_k__BackingField = item->fields._Layout_k__BackingField;
  switch ( Layout_k__BackingField )
  {
    case 2:
      this = (SummonHistoryListViewItemDraw_o *)v5->fields.messageLabel;
      if ( this )
      {
        this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (SummonHistoryListViewItemDraw_o *)v5->fields.dotLabel;
          if ( this )
          {
            this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (SummonHistoryListViewItemDraw_o *)v5->fields.datetimeLabel;
              if ( this )
              {
                this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                  this = (SummonHistoryListViewItemDraw_o *)v5->fields.titleLabel;
                  if ( this )
                  {
                    this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
                    if ( this )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      this = (SummonHistoryListViewItemDraw_o *)v5->fields.messageLabel2;
                      if ( this )
                      {
                        this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
                        if ( this )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                          this = (SummonHistoryListViewItemDraw_o *)v5->fields.bonusItemIconComponent;
                          if ( this )
                          {
                            this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL);
                            if ( this )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                              this = (SummonHistoryListViewItemDraw_o *)v5->fields.titleLabel;
                              if ( this )
                              {
                                UILabel__set_text((UILabel_o *)this, item->fields._Title_k__BackingField, 0LL);
                                this = (SummonHistoryListViewItemDraw_o *)v5->fields.messageLabel2;
                                if ( this )
                                {
                                  UILabel__set_text((UILabel_o *)this, item->fields._Message_k__BackingField, 0LL);
                                  this = (SummonHistoryListViewItemDraw_o *)v5->fields.bonusItemIconComponent;
                                  if ( this )
                                  {
                                    ItemIconComponent__SetItem(
                                      (ItemIconComponent_o *)this,
                                      item->fields._itemID_k__BackingField,
                                      -1,
                                      0LL);
                                    dotLabel = v5->fields.dotLabel;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    this = (SummonHistoryListViewItemDraw_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_6916/*"GACHA_HISTORY_LIST_DOT"*/,
                                                                                0LL);
                                    if ( dotLabel )
                                    {
                                      UILabel__set_text(dotLabel, (System_String_o *)this, 0LL);
                                      SummonHistoryListViewItemDraw__SetBonusMessagePosition(v5, v13);
                                      SummonHistoryListViewItemDraw__SetItemIconPosition(v5, v14);
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
      goto LABEL_55;
    case 1:
      this = (SummonHistoryListViewItemDraw_o *)v5->fields.messageLabel;
      if ( !this )
        goto LABEL_55;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (SummonHistoryListViewItemDraw_o *)v5->fields.dotLabel;
      if ( !this )
        goto LABEL_55;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (SummonHistoryListViewItemDraw_o *)v5->fields.datetimeLabel;
      if ( !this )
        goto LABEL_55;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (SummonHistoryListViewItemDraw_o *)v5->fields.datetimeLabel;
      if ( !this )
        goto LABEL_55;
      Message_k__BackingField = item->fields._Message_k__BackingField;
LABEL_47:
      UILabel__set_text((UILabel_o *)this, Message_k__BackingField, 0LL);
      this = (SummonHistoryListViewItemDraw_o *)v5->fields.titleLabel;
      if ( this )
      {
        this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (SummonHistoryListViewItemDraw_o *)v5->fields.messageLabel2;
          if ( this )
          {
            this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              this = (SummonHistoryListViewItemDraw_o *)v5->fields.bonusItemIconComponent;
              if ( this )
              {
                this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_55:
      sub_B5D69C(this, item);
    case 0:
      this = (SummonHistoryListViewItemDraw_o *)v5->fields.messageLabel;
      if ( !this )
        goto LABEL_55;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (SummonHistoryListViewItemDraw_o *)v5->fields.dotLabel;
      if ( !this )
        goto LABEL_55;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (SummonHistoryListViewItemDraw_o *)v5->fields.datetimeLabel;
      if ( !this )
        goto LABEL_55;
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (SummonHistoryListViewItemDraw_o *)v5->fields.messageLabel;
      if ( !this )
        goto LABEL_55;
      UILabel__set_text((UILabel_o *)this, item->fields._Message_k__BackingField, 0LL);
      v10 = (SummonHistoryListViewItemDraw_o *)v5->fields.dotLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (SummonHistoryListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6916/*"GACHA_HISTORY_LIST_DOT"*/, 0LL);
      if ( !v10 )
        goto LABEL_55;
      Message_k__BackingField = (System_String_o *)this;
      this = v10;
      goto LABEL_47;
  }
}


void __fastcall SummonHistoryListViewItemDraw__SetItemIconPosition(
        SummonHistoryListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonHistoryListViewItemDraw_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UILabel_o *titleLabel; // x8
  float mWidth; // s8
  float v10; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  struct UISprite_o *bonusItemSpr; // x8
  UnityEngine_GameObject_o *v14; // x0
  struct UISprite_o *v15; // x8
  UnityEngine_Component_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x19
  float v18; // s0

  v4 = this;
  if ( (byte_42EC8F7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1226/*"7"*/, (_DWORD)method, v2, v3);
    this = (SummonHistoryListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_1228/*"7999"*/, v5, v6, v7);
    byte_42EC8F7 = 1;
  }
  titleLabel = v4->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_17;
  this = (SummonHistoryListViewItemDraw_o *)v4->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_17;
  mWidth = (float)titleLabel->fields.mWidth;
  v10 = (float)(SLODWORD(this[2].klass) / 2);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, mWidth + v10, 0LL);
  this = (SummonHistoryListViewItemDraw_o *)v4->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_17;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, 0.0, 0LL);
  bonusItemSpr = v4->fields.bonusItemSpr;
  if ( !bonusItemSpr )
    goto LABEL_17;
  this = (SummonHistoryListViewItemDraw_o *)System_String__op_Equality(
                                              bonusItemSpr->fields.mSpriteName,
                                              (System_String_o *)StringLiteral_1226/*"7"*/,
                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonHistoryListViewItemDraw_o *)v4->fields.bonusItemSpr;
    if ( !this )
      goto LABEL_17;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v14, 1.0, 0LL);
  }
  v15 = v4->fields.bonusItemSpr;
  if ( !v15 )
LABEL_17:
    sub_B5D69C(this, method);
  if ( System_String__op_Equality(v15->fields.mSpriteName, (System_String_o *)StringLiteral_1228/*"7999"*/, 0LL) )
  {
    this = (SummonHistoryListViewItemDraw_o *)v4->fields.bonusItemSpr;
    if ( this )
    {
      this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      v16 = (UnityEngine_Component_o *)v4->fields.bonusItemSpr;
      if ( v16 )
      {
        v17 = (UnityEngine_GameObject_o *)this;
        this = (SummonHistoryListViewItemDraw_o *)UnityEngine_Component__get_transform(v16, 0LL);
        if ( this )
        {
          v18 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL));
          GameObjectExtensions__SetLocalPositionX(v17, v18 + -1.0, 0LL);
          return;
        }
      }
    }
    goto LABEL_17;
  }
}