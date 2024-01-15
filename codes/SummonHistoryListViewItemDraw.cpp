void __fastcall SummonHistoryListViewItemDraw___ctor(SummonHistoryListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonHistoryListViewItemDraw__SetBonusMessagePosition(
        SummonHistoryListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  struct UILabel_o *v7; // x8
  struct UISprite_o *bonusItemSpr; // x9
  UnityEngine_Component_o *messageLabel2; // x0
  float v10; // s8
  float mWidth; // s9
  float v12; // s10
  UnityEngine_GameObject_o *v13; // x0

  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel
    || (gameObject = UnityEngine_Component__get_gameObject(titleLabel, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL),
        (v7 = this->fields.titleLabel) == 0LL)
    || (bonusItemSpr = this->fields.bonusItemSpr) == 0LL
    || (messageLabel2 = (UnityEngine_Component_o *)this->fields.messageLabel2) == 0LL )
  {
    sub_B170D4();
  }
  v10 = *(float *)&localPosition;
  mWidth = (float)v7->fields.mWidth;
  v12 = (float)bonusItemSpr->fields.mWidth;
  v13 = UnityEngine_Component__get_gameObject(messageLabel2, 0LL);
  GameObjectExtensions__SetLocalPositionX(v13, (float)((float)(v10 + mWidth) + v12) + 3.0, 0LL);
}


void __fastcall SummonHistoryListViewItemDraw__SetItem(
        SummonHistoryListViewItemDraw_o *this,
        SummonHistoryListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t Layout_k__BackingField; // w8
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UILabel_o *v13; // x0
  struct UILabel_o *v14; // x20
  System_String_o *v15; // x0
  System_String_o *Message_k__BackingField; // x1
  UILabel_o *v17; // x0
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *dotLabel; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Component_o *datetimeLabel; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Component_o *titleLabel; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Component_o *messageLabel2; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Component_o *bonusItemIconComponent; // x0
  UnityEngine_GameObject_o *v29; // x0
  UILabel_o *v30; // x0
  UILabel_o *v31; // x0
  ItemIconComponent_o *v32; // x0
  UILabel_o *v33; // x20
  System_String_o *v34; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  UnityEngine_Component_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Component_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Component_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0

  if ( (byte_40FC003 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_6805/*"GACHA_HISTORY_LIST_DOT"*/, v5);
    byte_40FC003 = 1;
  }
  if ( !item )
    goto LABEL_55;
  Layout_k__BackingField = item->fields._Layout_k__BackingField;
  switch ( Layout_k__BackingField )
  {
    case 2:
      messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( messageLabel )
      {
        gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          dotLabel = (UnityEngine_Component_o *)this->fields.dotLabel;
          if ( dotLabel )
          {
            v21 = UnityEngine_Component__get_gameObject(dotLabel, 0LL);
            if ( v21 )
            {
              UnityEngine_GameObject__SetActive(v21, 1, 0LL);
              datetimeLabel = (UnityEngine_Component_o *)this->fields.datetimeLabel;
              if ( datetimeLabel )
              {
                v23 = UnityEngine_Component__get_gameObject(datetimeLabel, 0LL);
                if ( v23 )
                {
                  UnityEngine_GameObject__SetActive(v23, 0, 0LL);
                  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
                  if ( titleLabel )
                  {
                    v25 = UnityEngine_Component__get_gameObject(titleLabel, 0LL);
                    if ( v25 )
                    {
                      UnityEngine_GameObject__SetActive(v25, 1, 0LL);
                      messageLabel2 = (UnityEngine_Component_o *)this->fields.messageLabel2;
                      if ( messageLabel2 )
                      {
                        v27 = UnityEngine_Component__get_gameObject(messageLabel2, 0LL);
                        if ( v27 )
                        {
                          UnityEngine_GameObject__SetActive(v27, 1, 0LL);
                          bonusItemIconComponent = (UnityEngine_Component_o *)this->fields.bonusItemIconComponent;
                          if ( bonusItemIconComponent )
                          {
                            v29 = UnityEngine_Component__get_gameObject(bonusItemIconComponent, 0LL);
                            if ( v29 )
                            {
                              UnityEngine_GameObject__SetActive(v29, 1, 0LL);
                              v30 = this->fields.titleLabel;
                              if ( v30 )
                              {
                                UILabel__set_text(v30, item->fields._Title_k__BackingField, 0LL);
                                v31 = this->fields.messageLabel2;
                                if ( v31 )
                                {
                                  UILabel__set_text(v31, item->fields._Message_k__BackingField, 0LL);
                                  v32 = this->fields.bonusItemIconComponent;
                                  if ( v32 )
                                  {
                                    ItemIconComponent__SetItem(v32, item->fields._itemID_k__BackingField, -1, 0LL);
                                    v33 = this->fields.dotLabel;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6805/*"GACHA_HISTORY_LIST_DOT"*/, 0LL);
                                    if ( v33 )
                                    {
                                      UILabel__set_text(v33, v34, 0LL);
                                      SummonHistoryListViewItemDraw__SetBonusMessagePosition(this, v35);
                                      SummonHistoryListViewItemDraw__SetItemIconPosition(this, v36);
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
      v37 = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( !v37 )
        goto LABEL_55;
      v38 = UnityEngine_Component__get_gameObject(v37, 0LL);
      if ( !v38 )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v38, 0, 0LL);
      v39 = (UnityEngine_Component_o *)this->fields.dotLabel;
      if ( !v39 )
        goto LABEL_55;
      v40 = UnityEngine_Component__get_gameObject(v39, 0LL);
      if ( !v40 )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v40, 0, 0LL);
      v41 = (UnityEngine_Component_o *)this->fields.datetimeLabel;
      if ( !v41 )
        goto LABEL_55;
      v42 = UnityEngine_Component__get_gameObject(v41, 0LL);
      if ( !v42 )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v42, 1, 0LL);
      v17 = this->fields.datetimeLabel;
      if ( !v17 )
        goto LABEL_55;
      Message_k__BackingField = item->fields._Message_k__BackingField;
LABEL_47:
      UILabel__set_text(v17, Message_k__BackingField, 0LL);
      v43 = (UnityEngine_Component_o *)this->fields.titleLabel;
      if ( v43 )
      {
        v44 = UnityEngine_Component__get_gameObject(v43, 0LL);
        if ( v44 )
        {
          UnityEngine_GameObject__SetActive(v44, 0, 0LL);
          v45 = (UnityEngine_Component_o *)this->fields.messageLabel2;
          if ( v45 )
          {
            v46 = UnityEngine_Component__get_gameObject(v45, 0LL);
            if ( v46 )
            {
              UnityEngine_GameObject__SetActive(v46, 0, 0LL);
              v47 = (UnityEngine_Component_o *)this->fields.bonusItemIconComponent;
              if ( v47 )
              {
                v48 = UnityEngine_Component__get_gameObject(v47, 0LL);
                if ( v48 )
                {
                  UnityEngine_GameObject__SetActive(v48, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_55:
      sub_B170D4();
    case 0:
      v7 = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( !v7 )
        goto LABEL_55;
      v8 = UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( !v8 )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v8, 1, 0LL);
      v9 = (UnityEngine_Component_o *)this->fields.dotLabel;
      if ( !v9 )
        goto LABEL_55;
      v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( !v10 )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v10, 1, 0LL);
      v11 = (UnityEngine_Component_o *)this->fields.datetimeLabel;
      if ( !v11 )
        goto LABEL_55;
      v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !v12 )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v12, 0, 0LL);
      v13 = this->fields.messageLabel;
      if ( !v13 )
        goto LABEL_55;
      UILabel__set_text(v13, item->fields._Message_k__BackingField, 0LL);
      v14 = this->fields.dotLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6805/*"GACHA_HISTORY_LIST_DOT"*/, 0LL);
      if ( !v14 )
        goto LABEL_55;
      Message_k__BackingField = v15;
      v17 = v14;
      goto LABEL_47;
  }
}


void __fastcall SummonHistoryListViewItemDraw__SetItemIconPosition(
        SummonHistoryListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *titleLabel; // x8
  UnityEngine_Component_o *bonusItemSpr; // x0
  float mWidth; // s8
  float v7; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  struct UISprite_o *v11; // x8
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  struct UISprite_o *v14; // x8
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *v17; // x8
  UnityEngine_GameObject_o *v18; // x19
  UnityEngine_Transform_o *transform; // x0
  float v20; // s0

  if ( (byte_40FC004 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1204/*"7"*/, method);
    sub_B16FFC(&StringLiteral_1206/*"7999"*/, v3);
    byte_40FC004 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_17;
  bonusItemSpr = (UnityEngine_Component_o *)this->fields.bonusItemSpr;
  if ( !bonusItemSpr )
    goto LABEL_17;
  mWidth = (float)titleLabel->fields.mWidth;
  v7 = (float)(bonusItemSpr[6].fields.m_CachedPtr / 2);
  gameObject = UnityEngine_Component__get_gameObject(bonusItemSpr, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, mWidth + v7, 0LL);
  v9 = (UnityEngine_Component_o *)this->fields.bonusItemSpr;
  if ( !v9 )
    goto LABEL_17;
  v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
  GameObjectExtensions__SetLocalPositionY(v10, 0.0, 0LL);
  v11 = this->fields.bonusItemSpr;
  if ( !v11 )
    goto LABEL_17;
  if ( System_String__op_Equality(v11->fields.mSpriteName, (System_String_o *)StringLiteral_1204/*"7"*/, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.bonusItemSpr;
    if ( !v12 )
      goto LABEL_17;
    v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
    GameObjectExtensions__SetLocalPositionY(v13, 1.0, 0LL);
  }
  v14 = this->fields.bonusItemSpr;
  if ( !v14 )
LABEL_17:
    sub_B170D4();
  if ( System_String__op_Equality(v14->fields.mSpriteName, (System_String_o *)StringLiteral_1206/*"7999"*/, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)this->fields.bonusItemSpr;
    if ( v15 )
    {
      v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
      v17 = (UnityEngine_Component_o *)this->fields.bonusItemSpr;
      if ( v17 )
      {
        v18 = v16;
        transform = UnityEngine_Component__get_transform(v17, 0LL);
        if ( transform )
        {
          v20 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition(transform, 0LL));
          GameObjectExtensions__SetLocalPositionX(v18, v20 + -1.0, 0LL);
          return;
        }
      }
    }
    goto LABEL_17;
  }
}