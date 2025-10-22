void BattleCharaChangeConfirmListViewItemDrawTreasureDevice___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *v9; // x8

  if ( (byte_4C51FEB & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    sub_1C3E564(&StringLiteral_20750/*"img_windowbg_saintquartz_2"*/);
    sub_1C3E564(&StringLiteral_20320/*"img_arrow_change"*/);
    byte_4C51FEB = 1;
  }
  static_fields = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields;
  static_fields->TitleCellHeight = 0;
  v4 = StringLiteral_20320/*"img_arrow_change"*/;
  static_fields->ArrowChangeSpriteName = (struct System_String_o *)StringLiteral_20320/*"img_arrow_change"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->ArrowChangeSpriteName, v4, v1, v2);
  v5 = StringLiteral_20750/*"img_windowbg_saintquartz_2"*/;
  v6 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields;
  v6->BgChangeSpriteName = (struct System_String_o *)StringLiteral_20750/*"img_windowbg_saintquartz_2"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->BgChangeSpriteName, v5, v7, v8);
  v9 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields;
  *(_QWORD *)&v9->MultiGridPosOffsetX = 0xC0E0000041100000LL;
  v9->ArrowOffsetPosY = 1.0;
}


void BattleCharaChangeConfirmListViewItemDrawTreasureDevice___ctor(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleCharaChangeConfirmListViewItemDrawTreasureDevice__Awake(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *nowTitleLabel; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  nowTitleLabel = (UnityEngine_Component_o *)this->fields.nowTitleLabel;
  if ( !nowTitleLabel )
    goto LABEL_10;
  nowTitleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nowTitleLabel, 0);
  if ( !nowTitleLabel )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nowTitleLabel, 0);
  nowTitleLabel = (UnityEngine_Component_o *)this->fields.nextTitleLabel;
  this->fields.cachedNowTitlePos = localPosition;
  if ( !nowTitleLabel )
    goto LABEL_10;
  nowTitleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nowTitleLabel, 0);
  if ( !nowTitleLabel )
    goto LABEL_10;
  v5 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nowTitleLabel, 0);
  nowTitleLabel = (UnityEngine_Component_o *)this->fields.nowGrid;
  this->fields.cachedNextTitlePos = v5;
  if ( !nowTitleLabel
    || (nowTitleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nowTitleLabel, 0)) == 0
    || (v6 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nowTitleLabel, 0),
        nowTitleLabel = (UnityEngine_Component_o *)this->fields.nextGrid,
        this->fields.cachedNowGridPos = v6,
        !nowTitleLabel)
    || (nowTitleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nowTitleLabel, 0)) == 0 )
  {
LABEL_10:
    sub_1C3E7C0(nowTitleLabel, method);
  }
  this->fields.cachedNextGridPos = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nowTitleLabel, 0);
}


float BattleCharaChangeConfirmListViewItemDrawTreasureDevice__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        const MethodInfo *method)
{
  return this->fields.arrowPosY;
}


void BattleCharaChangeConfirmListViewItemDrawTreasureDevice__Init(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *nowGrid; // x0
  UILabel_o *nowTitleLabel; // x20
  UILabel_o *nextTitleLabel; // x20
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_c *v9; // x0
  UISprite_o *nowChangeArrowSprite; // x20
  System_String_o *ArrowChangeSpriteName; // x21

  if ( (byte_4C51FE6 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11902/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C51FE6 = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, method);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowGrid;
  if ( !nowGrid )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(nowGrid, 1, 0);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextGrid;
  if ( !nowGrid )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(nowGrid, 1, 0);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11902/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0);
  if ( !nowTitleLabel )
    goto LABEL_26;
  UILabel__set_text(nowTitleLabel, (System_String_o *)nowGrid, 0);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  nowGrid = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nowGrid, 0);
  if ( !nowGrid )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0);
  nextTitleLabel = this->fields.nextTitleLabel;
  nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11902/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0);
  if ( !nextTitleLabel )
    goto LABEL_26;
  UILabel__set_text(nextTitleLabel, (System_String_o *)nowGrid, 0);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  nowGrid = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nowGrid, 0);
  if ( !nowGrid )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowAddNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  nowGrid = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nowGrid, 0);
  if ( !nowGrid )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowAddNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0);
  v9 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
  nowChangeArrowSprite = this->fields.nowChangeArrowSprite;
  if ( !BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    v9 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
  }
  ArrowChangeSpriteName = v9->static_fields->ArrowChangeSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(nowChangeArrowSprite, ArrowChangeSpriteName, 0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.nowChangeBgSprite,
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->BgChangeSpriteName,
    0);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextAddNameLabel;
  if ( !nowGrid
    || (nowGrid = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)nowGrid,
                                               0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0),
        (nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextAddNameLabel) == 0) )
  {
LABEL_26:
    sub_1C3E7C0(nowGrid, v5);
  }
  UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.nextChangeArrowSprite,
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->ArrowChangeSpriteName,
    0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.nextChangeBgSprite,
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->BgChangeSpriteName,
    0);
}


void BattleCharaChangeConfirmListViewItemDrawTreasureDevice__ModifyColor(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        System_String_o *color,
        const MethodInfo *method)
{
  struct UILabel_o *nextNameLabel; // x21
  System_String_o *v6; // x0
  struct UILabel_o *nextAddNameLabel; // x20
  System_String_o *v8; // x1

  nextNameLabel = this->fields.nextNameLabel;
  if ( !nextNameLabel
    || (v6 = System_String__Concat_63636468(color, nextNameLabel->fields.mText, 0),
        UILabel__set_text(nextNameLabel, v6, 0),
        (nextAddNameLabel = this->fields.nextAddNameLabel) == 0) )
  {
    sub_1C3E7C0(this, color);
  }
  v8 = System_String__Concat_63636468(color, nextAddNameLabel->fields.mText, 0);
  UILabel__set_text(nextAddNameLabel, v8, 0);
}


void BattleCharaChangeConfirmListViewItemDrawTreasureDevice__RePosition(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *nowAddNameLabel; // x0
  int v4; // w21
  _BOOL4 activeSelf; // w0
  bool v6; // w20
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_c *v7; // x0
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *static_fields; // x8
  UnityEngine_Component_o *nowTitleLabel; // x0
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_c *v10; // x0
  UnityEngine_Component_o *nowGrid; // x21
  float x; // s8
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_c *v13; // x0
  UnityEngine_Component_o *nextGrid; // x20
  float v15; // s8
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Vector3_o cachedNowTitlePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C51FEA & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    byte_4C51FEA = 1;
  }
  nowAddNameLabel = (UnityEngine_Component_o *)this->fields.nowAddNameLabel;
  if ( !nowAddNameLabel
    || (nowAddNameLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nowAddNameLabel, 0)) == 0
    || (nowAddNameLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                       (UnityEngine_GameObject_o *)nowAddNameLabel,
                                                       0),
        !this->fields.nextAddNameLabel)
    || (v4 = (int)nowAddNameLabel,
        (nowAddNameLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this->fields.nextAddNameLabel,
                                                        0)) == 0) )
  {
    sub_1C3E7C0(nowAddNameLabel, method);
  }
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)nowAddNameLabel, 0);
  if ( ((v4 | activeSelf) & 1) != 0 )
  {
    v6 = activeSelf;
    v7 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
    if ( !BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
      v7 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
    }
    static_fields = v7->static_fields;
    nowTitleLabel = (UnityEngine_Component_o *)this->fields.nowTitleLabel;
    this->fields.arrowPosY = static_fields->ArrowOffsetPosY;
    ComponentHelper__SetLocalPositionY(
      nowTitleLabel,
      this->fields.cachedNowTitlePos.fields.y + static_fields->MultiGridPosOffsetY,
      0);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)this->fields.nextTitleLabel,
      this->fields.cachedNextTitlePos.fields.y
    + BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->MultiGridPosOffsetY,
      0);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)this->fields.nowGrid,
      this->fields.cachedNowGridPos.fields.y
    + BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->MultiGridPosOffsetY,
      0);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)this->fields.nextGrid,
      this->fields.cachedNextGridPos.fields.y
    + BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->MultiGridPosOffsetY,
      0);
    if ( (v4 & 1) != 0 )
    {
      v10 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
      nowGrid = (UnityEngine_Component_o *)this->fields.nowGrid;
      x = this->fields.cachedNowGridPos.fields.x;
      if ( !BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
        v10 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
      }
      ComponentHelper__SetLocalPositionX(nowGrid, x + v10->static_fields->MultiGridPosOffsetX, 0);
    }
    if ( v6 )
    {
      v13 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
      nextGrid = (UnityEngine_Component_o *)this->fields.nextGrid;
      v15 = this->fields.cachedNextGridPos.fields.x;
      if ( !BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
        v13 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
      }
      ComponentHelper__SetLocalPositionX(nextGrid, v15 + v13->static_fields->MultiGridPosOffsetX, 0);
    }
  }
  else
  {
    v16 = (UnityEngine_Component_o *)this->fields.nowTitleLabel;
    cachedNowTitlePos = this->fields.cachedNowTitlePos;
    this->fields.arrowPosY = 0.0;
    ComponentHelper__SetLocalPosition(v16, cachedNowTitlePos, 0);
    ComponentHelper__SetLocalPosition(
      (UnityEngine_Component_o *)this->fields.nextTitleLabel,
      this->fields.cachedNextTitlePos,
      0);
    ComponentHelper__SetLocalPosition((UnityEngine_Component_o *)this->fields.nowGrid, this->fields.cachedNowGridPos, 0);
    ComponentHelper__SetLocalPosition(
      (UnityEngine_Component_o *)this->fields.nextGrid,
      this->fields.cachedNextGridPos,
      0);
  }
}


void BattleCharaChangeConfirmListViewItemDrawTreasureDevice__ReSize(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  UISprite_o *nowFrameSprite; // x23
  UIGrid_o *nowGrid; // x22
  UILabel_o *nowNameLabel; // x20
  UILabel_o *nowAddNameLabel; // x21
  const MethodInfo *v8; // x4
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  struct UISprite_o *nextFrameSprite; // x8
  int32_t mHeight; // w9
  int32_t v13; // w1

  if ( (byte_4C51FE9 & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    byte_4C51FE9 = 1;
  }
  nowFrameSprite = this->fields.nowFrameSprite;
  nowGrid = this->fields.nowGrid;
  nowNameLabel = this->fields.nowNameLabel;
  nowAddNameLabel = this->fields.nowAddNameLabel;
  if ( !BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice___ReSize_g__CalcCellHeight_26_0(
    nowFrameSprite,
    nowGrid,
    nowNameLabel,
    nowAddNameLabel,
    v2);
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice___ReSize_g__CalcCellHeight_26_0(
    this->fields.nextFrameSprite,
    this->fields.nextGrid,
    this->fields.nextNameLabel,
    this->fields.nextAddNameLabel,
    v8);
  v10 = (UIWidget_o *)this->fields.nowFrameSprite;
  if ( !v10 || (nextFrameSprite = this->fields.nextFrameSprite) == 0 )
    sub_1C3E7C0(v10, v9);
  mHeight = v10->fields.mHeight;
  v13 = nextFrameSprite->fields.mHeight;
  if ( mHeight <= v13 )
  {
    if ( mHeight >= v13 )
      return;
  }
  else
  {
    v10 = (UIWidget_o *)this->fields.nextFrameSprite;
    v13 = mHeight;
  }
  UIWidget__set_height(v10, v13, 0);
}


void BattleCharaChangeConfirmListViewItemDrawTreasureDevice__SetItem(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *v6; // x19
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  int32_t LimitCount_k__BackingField; // w21
  int32_t SvtId_k__BackingField; // w22
  int32_t DispLimitCount_k__BackingField; // w23
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  int32_t v12; // w23
  const MethodInfo *v13; // x7
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v14; // x8
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v15; // x9
  TreasureDvcInfo_o *TreasureDeviceInfo_k__BackingField; // x20
  TreasureDvcInfo_o *v17; // x25
  int32_t v18; // w24
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *v19; // x0
  const MethodInfo *v20; // x7
  const MethodInfo *v21; // x2

  v6 = this;
  if ( (byte_4C51FE7 & 1) == 0 )
  {
    this = (BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *)sub_1C3E564(&ImageLimitCount_TypeInfo);
    byte_4C51FE7 = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode )
  {
    NowData_k__BackingField = item->fields._NowData_k__BackingField;
    if ( !NowData_k__BackingField )
      goto LABEL_15;
    SvtId_k__BackingField = item->fields._SvtId_k__BackingField;
    LimitCount_k__BackingField = item->fields._LimitCount_k__BackingField;
    DispLimitCount_k__BackingField = NowData_k__BackingField->fields._DispLimitCount_k__BackingField;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    this = (BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                         DispLimitCount_k__BackingField,
                                                                         LimitCount_k__BackingField,
                                                                         0);
    NextData_k__BackingField = item->fields._NextData_k__BackingField;
    if ( !NextData_k__BackingField
      || (v12 = (int)this,
          this = (BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                               NextData_k__BackingField->fields._DispLimitCount_k__BackingField,
                                                                               LimitCount_k__BackingField,
                                                                               0),
          (v14 = item->fields._NowData_k__BackingField) == 0)
      || (v15 = item->fields._NextData_k__BackingField) == 0 )
    {
LABEL_15:
      sub_1C3E7C0(this, item);
    }
    TreasureDeviceInfo_k__BackingField = v14->fields._TreasureDeviceInfo_k__BackingField;
    v17 = v15->fields._TreasureDeviceInfo_k__BackingField;
    v18 = (int)this;
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice__SetUI(
      this,
      SvtId_k__BackingField,
      LimitCount_k__BackingField,
      v12,
      TreasureDeviceInfo_k__BackingField,
      v6->fields.nowNameLabel,
      v6->fields.nowAddNameLabel,
      v13);
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice__SetUI(
      v19,
      SvtId_k__BackingField,
      LimitCount_k__BackingField,
      v18,
      v17,
      v6->fields.nextNameLabel,
      v6->fields.nextAddNameLabel,
      v20);
    if ( v17 != TreasureDeviceInfo_k__BackingField )
      BattleCharaChangeConfirmListViewItemDrawTreasureDevice__ModifyColor(v6, v6->fields.modifyColor, v21);
    ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *, const MethodInfo *))v6->klass->vtable._7_RePosition.methodPtr)(
      v6,
      v6->klass->vtable._7_RePosition.method);
    ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *, const MethodInfo *))v6->klass->vtable._6_ReSize.methodPtr)(
      v6,
      v6->klass->vtable._6_ReSize.method);
  }
}


void BattleCharaChangeConfirmListViewItemDrawTreasureDevice__SetUI(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        TreasureDvcInfo_o *treasureDeviceInfo,
        UILabel_o *nameLabel,
        UILabel_o *addNameLabel,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x25
  Il2CppObject *v13; // x28
  ServantLimitAddMaster_o *gameObject; // x0
  __int64 v15; // x1
  UILabel_o *v16; // x19
  ServantLimitAddMaster_o *v17; // x24
  int id; // w4
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x0
  ServantTreasureDeviceAddEntity_o *v20; // x26
  struct System_Int32_array *treasureDeviceIds; // x20
  il2cpp_array_size_t max_length; // x21
  ServantLimitAddMaster_o *v23; // x28
  System_Collections_Generic_List_object__o *v24; // x26
  unsigned __int64 v25; // x23
  int32_t v26; // w19
  TreasureDvcEntity_o *v27; // x0
  TreasureDvcEntity_o *v28; // x29
  System_String_o *v29; // x0
  System_String_o *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  ServantLimitAddMaster_o *v36; // x1
  Il2CppClass **v37; // x0
  System_String_o *OverwriteTDName; // x0
  Il2CppObject *v39; // x1
  UILabel_o *v40; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v42; // x0
  Il2CppObject *v43; // x0

  if ( (byte_4C51FE8 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_9325/*"NO_ENTRY_NAME"*/);
    sub_1C3E564(&StringLiteral_9362/*"NP_NAME"*/);
    byte_4C51FE8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  gameObject = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v16 = nameLabel;
  if ( !nameLabel )
    goto LABEL_57;
  v17 = gameObject;
  gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  if ( !gameObject )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  if ( !addNameLabel )
    goto LABEL_57;
  gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)addNameLabel,
                                            0);
  if ( !gameObject )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  if ( !treasureDeviceInfo || (id = treasureDeviceInfo->fields.id, id <= 0) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9325/*"NO_ENTRY_NAME"*/, 0);
LABEL_48:
    v39 = (Il2CppObject *)OverwriteTDName;
    v40 = v16;
LABEL_49:
    UILabel__set_text(v40, (System_String_o *)v39, 0);
    return;
  }
  if ( !v13 )
    goto LABEL_57;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   (ServantTreasureDeviceAddMaster_o *)v13,
                   svtId,
                   limitCount,
                   dispLimitCount,
                   id,
                   0,
                   0);
  if ( !EnableEntity
    || (v20 = EnableEntity, !ServantTreasureDeviceAddEntity__HasKeyEnableDispOnBattleConfirmDialog(EnableEntity, 0)) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0);
    if ( !gameObject )
      goto LABEL_57;
    goto LABEL_46;
  }
  treasureDeviceIds = v20->fields.treasureDeviceIds;
  gameObject = (ServantLimitAddMaster_o *)ServantTreasureDeviceAddEntity__GetEnableDispOnBattleConfirmDialog(v20, 0);
  if ( !treasureDeviceIds )
    goto LABEL_57;
  max_length = treasureDeviceIds->max_length;
  v23 = gameObject;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)max_length >= 1 )
  {
    if ( v23 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= LODWORD(v23->fields._MasterName_k__BackingField) )
LABEL_58:
          sub_1C3E7C8(gameObject, v15);
        if ( !*(&v23->fields.revision + v25) )
          goto LABEL_37;
        if ( v25 >= LODWORD(treasureDeviceIds->max_length) )
          goto LABEL_58;
        if ( !Master_object )
          break;
        v26 = dispLimitCount;
        v27 = TreasureDvcMaster__GetEntityCheckServantOverwrite(
                (TreasureDvcMaster_o *)Master_object,
                svtId,
                treasureDeviceIds->m_Items[v25],
                0);
        v28 = v27;
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( !v27 )
            goto LABEL_26;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !v28 )
          {
LABEL_26:
            if ( !byte_4C5204F )
            {
              sub_1C3E564(&LocalizationManager_TypeInfo);
              byte_4C5204F = 1;
            }
            gameObject = (ServantLimitAddMaster_o *)LocalizationManager_TypeInfo;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (ServantLimitAddMaster_o *)LocalizationManager_TypeInfo;
            }
            v30 = (System_String_o *)*((_QWORD *)gameObject[2].monitor + 4);
            goto LABEL_31;
          }
        }
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9362/*"NP_NAME"*/, 0);
        gameObject = (ServantLimitAddMaster_o *)System_String__Format(v29, (Il2CppObject *)v28->fields.name, 0);
        v30 = (System_String_o *)gameObject;
LABEL_31:
        dispLimitCount = v26;
        if ( !v17 )
          break;
        gameObject = (ServantLimitAddMaster_o *)ServantLimitAddMaster__GetOverwriteTDName(v17, svtId, v26, v30, 0, 0);
        if ( !v24 )
          break;
        items = v24->fields._items;
        v34 = Method_System_Collections_Generic_List_string__Add__;
        ++v24->fields._version;
        if ( !items )
          break;
        size = v24->fields._size;
        v36 = gameObject;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v24->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v36;
          sub_1C3E508((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v36, v31, v32);
        }
LABEL_37:
        if ( (unsigned int)max_length == ++v25 )
          goto LABEL_38;
      }
    }
LABEL_57:
    sub_1C3E7C0(gameObject, v15);
  }
LABEL_38:
  gameObject = (ServantLimitAddMaster_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v24, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v16 = nameLabel;
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0);
    if ( !gameObject )
      goto LABEL_57;
LABEL_46:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (ServantLimitAddMaster_o *)TreasureDvcInfo__GetName(treasureDeviceInfo, svtId, 0);
    if ( !v17 )
      goto LABEL_57;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v17,
                        svtId,
                        dispLimitCount,
                        (System_String_o *)gameObject,
                        0,
                        0);
    goto LABEL_48;
  }
  if ( !v24 )
    goto LABEL_57;
  Item = System_Collections_Generic_List_object___get_Item(
           v24,
           0,
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Item, 0) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v42 = System_Collections_Generic_List_object___get_Item(
            v24,
            0,
            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
    UILabel__set_text(nameLabel, (System_String_o *)v42, 0);
  }
  v43 = System_Collections_Generic_List_object___get_Item(
          v24,
          1,
          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v43, 0) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)addNameLabel,
                                              0);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v39 = System_Collections_Generic_List_object___get_Item(
            v24,
            1,
            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
    v40 = addNameLabel;
    goto LABEL_49;
  }
}


void BattleCharaChangeConfirmListViewItemDrawTreasureDevice___ReSize_g__CalcCellHeight_26_0(
        UISprite_o *frame,
        UIGrid_o *grid,
        UILabel_o *nameLabel,
        UILabel_o *addNameLabel,
        const MethodInfo *method)
{
  UIWidget_o *v8; // x19
  float cellHeight; // s8
  bool activeSelf; // w21
  int v11; // w21
  bool v12; // w0
  int v13; // w20
  int v14; // w10

  v8 = (UIWidget_o *)frame;
  if ( (byte_4C51FEC & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    frame = (UISprite_o *)sub_1C3E564(&System_Convert_TypeInfo);
    byte_4C51FEC = 1;
  }
  if ( !grid )
    goto LABEL_17;
  if ( !nameLabel )
    goto LABEL_17;
  cellHeight = grid->fields.cellHeight;
  frame = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  if ( !frame )
    goto LABEL_17;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)frame, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  frame = (UISprite_o *)System_Convert__ToInt32_64691728(activeSelf, 0);
  if ( !addNameLabel )
    goto LABEL_17;
  v11 = (int)frame;
  frame = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addNameLabel, 0);
  if ( !frame )
    goto LABEL_17;
  v12 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)frame, 0);
  frame = (UISprite_o *)System_Convert__ToInt32_64691728(v12, 0);
  v13 = (int)frame;
  if ( !BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
  if ( !v8 )
LABEL_17:
    sub_1C3E7C0(frame, grid);
  if ( cellHeight == INFINITY )
    v14 = 0x80000000;
  else
    v14 = (int)cellHeight;
  UIWidget__set_height(
    v8,
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->TitleCellHeight + (v13 + v11) * v14,
    0);
}