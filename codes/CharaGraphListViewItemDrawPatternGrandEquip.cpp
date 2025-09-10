void CharaGraphListViewItemDrawPatternGrandEquip___ctor(
        CharaGraphListViewItemDrawPatternGrandEquip_o *this,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault___ctor((CharaGraphListViewItemDrawPatternDefault_o *)this, 0);
}


void CharaGraphListViewItemDrawPatternGrandEquip__SetupUseSprite(
        CharaGraphListViewItemDrawPatternGrandEquip_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  if ( !itemDraw )
    sub_1C2D6EC(this, 0);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    (CharaGraphListViewItemDrawPatternDefault_o *)this,
    (UnityEngine_Component_o *)itemDraw->fields.useSprite,
    0,
    0);
}


void CharaGraphListViewItemDrawPatternGrandEquip__SetupWarningAndMask(
        CharaGraphListViewItemDrawPatternGrandEquip_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListViewItemDraw_o *v5; // x21
  CharaGraphListViewItemDrawPatternDefault_o *v6; // x23
  bool v7; // w24
  __int64 naturalAligment; // x10
  CharaGraphListViewItemBase_o *v9; // x26
  __int64 v10; // x2
  int64_t sortValue2B; // x8
  char v12; // w9
  __int64 v13; // x27
  __int64 v14; // x10
  unsigned __int64 v15; // x11
  UILabel_o *warningLabel3; // x22
  System_String_o *v17; // x0
  System_String_o *v18; // x23
  System_String_o *v19; // x0
  struct UILabel_o *v20; // x8
  int32_t mWidth; // w22
  struct UILabel_o *v22; // x8
  UILabel_o *warningLabel4; // x22
  UILabel_o *warningLabel2; // x22
  System_String_o *v25; // x0
  CharaGraphListViewItemDrawPatternDefault_o *v26; // [xsp+0h] [xbp-70h]
  int v27; // [xsp+Ch] [xbp-64h] BYREF

  v5 = itemDraw;
  v6 = (CharaGraphListViewItemDrawPatternDefault_o *)this;
  if ( (byte_4C220B8 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CharaGraphGrandEquipListViewItem_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_7001/*"GRAND_SERVANT_EQUIP_FRAME_"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)sub_1C2D490(&StringLiteral_5483/*"EQUIP_GRAPH_USE"*/);
    byte_4C220B8 = 1;
  }
  v27 = 0;
  if ( !item )
    goto LABEL_36;
  v7 = item->fields._IsUse_k__BackingField && !item->fields._IsBase_k__BackingField;
  naturalAligment = CharaGraphGrandEquipListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    v9 = (CharaGraphGrandEquipListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphGrandEquipListViewItem_TypeInfo
       ? item
       : 0LL;
  else
    v9 = 0;
  if ( !v5 )
    goto LABEL_36;
  this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)v5->fields.warningLabel;
  if ( !this )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)v5->fields.warningLabel2;
  if ( !this )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)v5->fields.warningLabel3;
  if ( !this )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)v5->fields.warningLabel4;
  if ( !this )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)v5->fields.warningLabel3;
  if ( !this )
    goto LABEL_36;
  this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)v5->fields.warningLabel4;
  if ( !this )
    goto LABEL_36;
  this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( v9 )
  {
    sortValue2B = v9[1].fields.sortValue2B;
    if ( sortValue2B )
    {
      v26 = v6;
      v12 = 0;
      v13 = 4;
      while ( 1 )
      {
        v14 = *(_QWORD *)(sortValue2B + 32);
        if ( !v14 )
          goto LABEL_36;
        v15 = *(unsigned int *)(v14 + 24);
        if ( v13 - 4 >= (int)v15 )
          break;
        if ( v13 - 4 >= v15 )
          sub_1C2D6F4(this, itemDraw, v10);
        if ( *(_QWORD *)(v14 + 8 * v13) == v9[1].fields.sortValueLast )
        {
          warningLabel3 = v5->fields.warningLabel3;
          if ( v7 )
          {
            v27 = v13 - 3;
            v17 = System_Int32__ToString((int32_t)&v27, 0);
            v18 = System_String__Concat_63457864((System_String_o *)StringLiteral_7001/*"GRAND_SERVANT_EQUIP_FRAME_"*/, v17, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v19 = LocalizationManager__Get(v18, 0);
            this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)System_String__Concat_63457864(
                                                                      (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                      v19,
                                                                      0);
            itemDraw = (CharaGraphListViewItemDraw_o *)this;
          }
          else
          {
            itemDraw = (CharaGraphListViewItemDraw_o *)StringLiteral_1/*""*/;
          }
          if ( !warningLabel3 )
            goto LABEL_36;
          UILabel__set_text(warningLabel3, (System_String_o *)itemDraw, 0);
          sortValue2B = v9[1].fields.sortValue2B;
          v12 = 1;
        }
        ++v13;
        if ( !sortValue2B )
          goto LABEL_36;
      }
      v6 = v26;
      if ( (v12 & 1) != 0 )
      {
        v20 = v5->fields.warningLabel3;
        if ( !v20 )
          goto LABEL_36;
        mWidth = v20->fields.mWidth;
        this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)BalanceConfig_TypeInfo;
        }
        if ( mWidth > *((_DWORD *)this[11].monitor + 323) )
        {
          v22 = v5->fields.warningLabel3;
          if ( v22 )
          {
            this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)v5->fields.warningLabel4;
            if ( this )
            {
              UILabel__set_text((UILabel_o *)this, v22->fields.mText, 0);
              this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)v5->fields.warningLabel4;
              if ( this )
              {
                this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                  this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)BalanceConfig_TypeInfo;
                  warningLabel4 = v5->fields.warningLabel4;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( warningLabel4 )
                  {
                    UILabel__SetCondensedScale(
                      warningLabel4,
                      BalanceConfig_TypeInfo->static_fields->UseEquipServantNameTextMaxWidth,
                      0,
                      0);
                    goto LABEL_53;
                  }
                }
              }
            }
          }
LABEL_36:
          sub_1C2D6EC(this, itemDraw);
        }
        this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)v5->fields.warningLabel3;
        if ( !this )
          goto LABEL_36;
        this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
        if ( !this )
          goto LABEL_36;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      }
    }
  }
LABEL_53:
  warningLabel2 = v5->fields.warningLabel2;
  if ( v7 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5483/*"EQUIP_GRAPH_USE"*/, 0);
    this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)System_String__Concat_63457864(
                                                              v25,
                                                              (System_String_o *)StringLiteral_43/*"\n"*/,
                                                              0);
    itemDraw = (CharaGraphListViewItemDraw_o *)this;
  }
  else
  {
    itemDraw = (CharaGraphListViewItemDraw_o *)StringLiteral_1/*""*/;
  }
  if ( !warningLabel2 )
    goto LABEL_36;
  UILabel__set_text(warningLabel2, (System_String_o *)itemDraw, 0);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    v6,
    (UnityEngine_Component_o *)v5->fields.maskSprite2,
    v7 && item->fields._IsUse_k__BackingField,
    0);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    v6,
    (UnityEngine_Component_o *)v5->fields.warningLabel2,
    v7 && item->fields._IsUse_k__BackingField,
    0);
}