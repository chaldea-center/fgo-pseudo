void __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *v12; // x8

  if ( (byte_4A4A163 & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_20416/*"img_windowbg_saintquartz_2"*/, v4);
    sub_1B863B8(&StringLiteral_20034/*"img_arrow_change"*/, v5);
    byte_4A4A163 = 1;
  }
  static_fields = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields;
  static_fields->TitleCellHeight = 0;
  v7 = StringLiteral_20034/*"img_arrow_change"*/;
  static_fields->ArrowChangeSpriteName = (struct System_String_o *)StringLiteral_20034/*"img_arrow_change"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->ArrowChangeSpriteName, v7, v2, v3);
  v8 = StringLiteral_20416/*"img_windowbg_saintquartz_2"*/;
  v9 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields;
  v9->BgChangeSpriteName = (struct System_String_o *)StringLiteral_20416/*"img_windowbg_saintquartz_2"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v9->BgChangeSpriteName, v8, v10, v11);
  v12 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields;
  *(_QWORD *)&v12->MultiGridPosOffsetX = 0xC0E0000041100000LL;
  v12->ArrowOffsetPosY = 1.0;
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice___ctor(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice__Awake(
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
  nowTitleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nowTitleLabel, 0LL);
  if ( !nowTitleLabel )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nowTitleLabel, 0LL);
  nowTitleLabel = (UnityEngine_Component_o *)this->fields.nextTitleLabel;
  this->fields.cachedNowTitlePos = localPosition;
  if ( !nowTitleLabel )
    goto LABEL_10;
  nowTitleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nowTitleLabel, 0LL);
  if ( !nowTitleLabel )
    goto LABEL_10;
  v5 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nowTitleLabel, 0LL);
  nowTitleLabel = (UnityEngine_Component_o *)this->fields.nowGrid;
  this->fields.cachedNextTitlePos = v5;
  if ( !nowTitleLabel
    || (nowTitleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nowTitleLabel, 0LL)) == 0LL
    || (v6 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)nowTitleLabel, 0LL),
        nowTitleLabel = (UnityEngine_Component_o *)this->fields.nextGrid,
        this->fields.cachedNowGridPos = v6,
        !nowTitleLabel)
    || (nowTitleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(nowTitleLabel, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1B86614(nowTitleLabel, method);
  }
  this->fields.cachedNextGridPos = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)nowTitleLabel,
                                     0LL);
}


float __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        const MethodInfo *method)
{
  return this->fields.arrowPosY;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice__Init(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Behaviour_o *nowGrid; // x0
  UILabel_o *nowTitleLabel; // x20
  UILabel_o *nextTitleLabel; // x20
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_c *v13; // x0
  UISprite_o *nowChangeArrowSprite; // x20
  System_String_o *ArrowChangeSpriteName; // x21

  if ( (byte_4A4A15E & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_11695/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, v7);
    sub_1B863B8(&StringLiteral_1/*""*/, v8);
    byte_4A4A15E = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, method);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowGrid;
  if ( !nowGrid )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(nowGrid, 1, 0LL);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextGrid;
  if ( !nowGrid )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(nowGrid, 1, 0LL);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11695/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nowTitleLabel )
    goto LABEL_26;
  UILabel__set_text(nowTitleLabel, (System_String_o *)nowGrid, 0LL);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  nowGrid = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nowGrid, 0LL);
  if ( !nowGrid )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0LL);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nextTitleLabel = this->fields.nextTitleLabel;
  nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11695/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0LL);
  if ( !nextTitleLabel )
    goto LABEL_26;
  UILabel__set_text(nextTitleLabel, (System_String_o *)nowGrid, 0LL);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  nowGrid = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nowGrid, 0LL);
  if ( !nowGrid )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0LL);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowAddNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  nowGrid = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nowGrid, 0LL);
  if ( !nowGrid )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0LL);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowAddNameLabel;
  if ( !nowGrid )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v13 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
  nowChangeArrowSprite = this->fields.nowChangeArrowSprite;
  if ( !BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    v13 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
  }
  ArrowChangeSpriteName = v13->static_fields->ArrowChangeSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(nowChangeArrowSprite, ArrowChangeSpriteName, 0LL);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.nowChangeBgSprite,
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->BgChangeSpriteName,
    0LL);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextAddNameLabel;
  if ( !nowGrid
    || (nowGrid = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)nowGrid,
                                               0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0LL),
        (nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextAddNameLabel) == 0LL) )
  {
LABEL_26:
    sub_1B86614(nowGrid, v9);
  }
  UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.nextChangeArrowSprite,
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->ArrowChangeSpriteName,
    0LL);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.nextChangeBgSprite,
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->BgChangeSpriteName,
    0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice__ModifyColor(
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
    || (v6 = System_String__Concat_61645176(color, nextNameLabel->fields.mText, 0LL),
        UILabel__set_text(nextNameLabel, v6, 0LL),
        (nextAddNameLabel = this->fields.nextAddNameLabel) == 0LL) )
  {
    sub_1B86614(this, color);
  }
  v8 = System_String__Concat_61645176(color, nextAddNameLabel->fields.mText, 0LL);
  UILabel__set_text(nextAddNameLabel, v8, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice__RePosition(
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

  if ( (byte_4A4A162 & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, method);
    byte_4A4A162 = 1;
  }
  nowAddNameLabel = (UnityEngine_Component_o *)this->fields.nowAddNameLabel;
  if ( !nowAddNameLabel
    || (nowAddNameLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nowAddNameLabel, 0LL)) == 0LL
    || (nowAddNameLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                       (UnityEngine_GameObject_o *)nowAddNameLabel,
                                                       0LL),
        !this->fields.nextAddNameLabel)
    || (v4 = (int)nowAddNameLabel,
        (nowAddNameLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this->fields.nextAddNameLabel,
                                                        0LL)) == 0LL) )
  {
    sub_1B86614(nowAddNameLabel, method);
  }
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)nowAddNameLabel, 0LL);
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
      0LL);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)this->fields.nextTitleLabel,
      this->fields.cachedNextTitlePos.fields.y
    + BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->MultiGridPosOffsetY,
      0LL);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)this->fields.nowGrid,
      this->fields.cachedNowGridPos.fields.y
    + BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->MultiGridPosOffsetY,
      0LL);
    ComponentHelper__SetLocalPositionY(
      (UnityEngine_Component_o *)this->fields.nextGrid,
      this->fields.cachedNextGridPos.fields.y
    + BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->MultiGridPosOffsetY,
      0LL);
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
      ComponentHelper__SetLocalPositionX(nowGrid, x + v10->static_fields->MultiGridPosOffsetX, 0LL);
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
      ComponentHelper__SetLocalPositionX(nextGrid, v15 + v13->static_fields->MultiGridPosOffsetX, 0LL);
    }
  }
  else
  {
    v16 = (UnityEngine_Component_o *)this->fields.nowTitleLabel;
    cachedNowTitlePos = this->fields.cachedNowTitlePos;
    this->fields.arrowPosY = 0.0;
    ComponentHelper__SetLocalPosition(v16, cachedNowTitlePos, 0LL);
    ComponentHelper__SetLocalPosition(
      (UnityEngine_Component_o *)this->fields.nextTitleLabel,
      this->fields.cachedNextTitlePos,
      0LL);
    ComponentHelper__SetLocalPosition(
      (UnityEngine_Component_o *)this->fields.nowGrid,
      this->fields.cachedNowGridPos,
      0LL);
    ComponentHelper__SetLocalPosition(
      (UnityEngine_Component_o *)this->fields.nextGrid,
      this->fields.cachedNextGridPos,
      0LL);
  }
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice__ReSize(
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

  if ( (byte_4A4A161 & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, method);
    byte_4A4A161 = 1;
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
  if ( !v10 || (nextFrameSprite = this->fields.nextFrameSprite) == 0LL )
    sub_1B86614(v10, v9);
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
  UIWidget__set_height(v10, v13, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice__SetItem(
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
  if ( (byte_4A4A15F & 1) == 0 )
  {
    this = (BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *)sub_1B863B8(&ImageLimitCount_TypeInfo, item);
    byte_4A4A15F = 1;
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
                                                                         0LL);
    NextData_k__BackingField = item->fields._NextData_k__BackingField;
    if ( !NextData_k__BackingField
      || (v12 = (int)this,
          this = (BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                               NextData_k__BackingField->fields._DispLimitCount_k__BackingField,
                                                                               LimitCount_k__BackingField,
                                                                               0LL),
          (v14 = item->fields._NowData_k__BackingField) == 0LL)
      || (v15 = item->fields._NextData_k__BackingField) == 0LL )
    {
LABEL_15:
      sub_1B86614(this, item);
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
    ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *, Il2CppMethodPointer))v6->klass->vtable._7_RePosition.method)(
      v6,
      v6->klass->vtable._8_GetArrowOffsetY.methodPtr);
    ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *, Il2CppMethodPointer))v6->klass->vtable._6_ReSize.method)(
      v6,
      v6->klass->vtable._7_RePosition.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice__SetUI(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        TreasureDvcInfo_o *treasureDeviceInfo,
        UILabel_o *nameLabel,
        UILabel_o *addNameLabel,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *Master_object; // x25
  Il2CppObject *v23; // x28
  ServantLimitAddMaster_o *gameObject; // x0
  __int64 v25; // x1
  UILabel_o *v26; // x19
  ServantLimitAddMaster_o *v27; // x24
  int id; // w4
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x0
  ServantTreasureDeviceAddEntity_o *v30; // x26
  struct System_Int32_array *treasureDeviceIds; // x20
  __int64 v32; // x21
  ServantLimitAddMaster_o *v33; // x28
  System_Collections_Generic_List_object__o *v34; // x26
  unsigned __int64 v35; // x23
  int32_t v36; // w19
  TreasureDvcEntity_o *v37; // x0
  TreasureDvcEntity_o *v38; // x29
  System_String_o *v39; // x0
  System_String_o *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  ServantLimitAddMaster_o *v46; // x1
  Il2CppClass **v47; // x0
  System_String_o *OverwriteTDName; // x0
  Il2CppObject *v49; // x1
  UILabel_o *v50; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v52; // x0
  Il2CppObject *v53; // x0

  if ( (byte_4A4A160 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMaster_TreasureDvcMaster___, v13);
    sub_1B863B8(&DataManager_TypeInfo, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Item__, v17);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v18);
    sub_1B863B8(&LocalizationManager_TypeInfo, v19);
    sub_1B863B8(&StringLiteral_9176/*"NO_ENTRY_NAME"*/, v20);
    sub_1B863B8(&StringLiteral_9207/*"NP_NAME"*/, v21);
    byte_4A4A160 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  v23 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  gameObject = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v26 = nameLabel;
  if ( !nameLabel )
    goto LABEL_57;
  v27 = gameObject;
  gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)nameLabel,
                                            0LL);
  if ( !gameObject )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( !addNameLabel )
    goto LABEL_57;
  gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)addNameLabel,
                                            0LL);
  if ( !gameObject )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( !treasureDeviceInfo || (id = treasureDeviceInfo->fields.id, id <= 0) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0LL);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9176/*"NO_ENTRY_NAME"*/, 0LL);
LABEL_48:
    v49 = (Il2CppObject *)OverwriteTDName;
    v50 = v26;
LABEL_49:
    UILabel__set_text(v50, (System_String_o *)v49, 0LL);
    return;
  }
  if ( !v23 )
    goto LABEL_57;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   (ServantTreasureDeviceAddMaster_o *)v23,
                   svtId,
                   limitCount,
                   dispLimitCount,
                   id,
                   0,
                   0LL);
  if ( !EnableEntity
    || (v30 = EnableEntity, !ServantTreasureDeviceAddEntity__HasKeyEnableDispOnBattleConfirmDialog(EnableEntity, 0LL)) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0LL);
    if ( !gameObject )
      goto LABEL_57;
    goto LABEL_46;
  }
  treasureDeviceIds = v30->fields.treasureDeviceIds;
  gameObject = (ServantLimitAddMaster_o *)ServantTreasureDeviceAddEntity__GetEnableDispOnBattleConfirmDialog(v30, 0LL);
  if ( !treasureDeviceIds )
    goto LABEL_57;
  v32 = *(_QWORD *)&treasureDeviceIds->max_length;
  v33 = gameObject;
  v34 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)v32 >= 1 )
  {
    if ( v33 )
    {
      v35 = 0LL;
      while ( 1 )
      {
        if ( v35 >= LODWORD(v33->fields._MasterName_k__BackingField) )
LABEL_58:
          sub_1B8661C(gameObject, v25);
        if ( !*(&v33->fields.revision + v35) )
          goto LABEL_37;
        if ( v35 >= treasureDeviceIds->max_length )
          goto LABEL_58;
        if ( !Master_object )
          break;
        v36 = dispLimitCount;
        v37 = TreasureDvcMaster__GetEntityCheckServantOverwrite(
                (TreasureDvcMaster_o *)Master_object,
                svtId,
                treasureDeviceIds->m_Items[v35 + 1],
                0LL);
        v38 = v37;
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( !v37 )
            goto LABEL_26;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !v38 )
          {
LABEL_26:
            if ( !byte_4A49A43 )
            {
              sub_1B863B8(&LocalizationManager_TypeInfo, v25);
              byte_4A49A43 = 1;
            }
            gameObject = (ServantLimitAddMaster_o *)LocalizationManager_TypeInfo;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              gameObject = (ServantLimitAddMaster_o *)LocalizationManager_TypeInfo;
            }
            v40 = (System_String_o *)*((_QWORD *)gameObject[2].monitor + 4);
            goto LABEL_31;
          }
        }
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9207/*"NP_NAME"*/, 0LL);
        gameObject = (ServantLimitAddMaster_o *)System_String__Format(v39, (Il2CppObject *)v38->fields.name, 0LL);
        v40 = (System_String_o *)gameObject;
LABEL_31:
        dispLimitCount = v36;
        if ( !v27 )
          break;
        gameObject = (ServantLimitAddMaster_o *)ServantLimitAddMaster__GetOverwriteTDName(v27, svtId, v36, v40, 0, 0LL);
        if ( !v34 )
          break;
        items = v34->fields._items;
        v44 = Method_System_Collections_Generic_List_string__Add__;
        ++v34->fields._version;
        if ( !items )
          break;
        size = v34->fields._size;
        v46 = gameObject;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            (Il2CppObject *)gameObject,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v34->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v46;
          sub_1B8635C((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v46, v41, v42);
        }
LABEL_37:
        if ( (unsigned int)v32 == ++v35 )
          goto LABEL_38;
      }
    }
LABEL_57:
    sub_1B86614(gameObject, v25);
  }
LABEL_38:
  gameObject = (ServantLimitAddMaster_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v34, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v26 = nameLabel;
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0LL);
    if ( !gameObject )
      goto LABEL_57;
LABEL_46:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (ServantLimitAddMaster_o *)TreasureDvcInfo__GetName(treasureDeviceInfo, svtId, 0LL);
    if ( !v27 )
      goto LABEL_57;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v27,
                        svtId,
                        dispLimitCount,
                        (System_String_o *)gameObject,
                        0,
                        0LL);
    goto LABEL_48;
  }
  if ( !v34 )
    goto LABEL_57;
  Item = System_Collections_Generic_List_object___get_Item(
           v34,
           0,
           (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Item, 0LL) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0LL);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v52 = System_Collections_Generic_List_object___get_Item(
            v34,
            0,
            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
    UILabel__set_text(nameLabel, (System_String_o *)v52, 0LL);
  }
  v53 = System_Collections_Generic_List_object___get_Item(
          v34,
          1,
          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v53, 0LL) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)addNameLabel,
                                              0LL);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v49 = System_Collections_Generic_List_object___get_Item(
            v34,
            1,
            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
    v50 = addNameLabel;
    goto LABEL_49;
  }
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawTreasureDevice___ReSize_g__CalcCellHeight_26_0(
        UISprite_o *frame,
        UIGrid_o *grid,
        UILabel_o *nameLabel,
        UILabel_o *addNameLabel,
        const MethodInfo *method)
{
  UIWidget_o *v8; // x19
  __int64 v9; // x1
  float cellHeight; // s8
  bool activeSelf; // w21
  int v12; // w21
  bool v13; // w0
  int v14; // w20
  int v15; // w10

  v8 = (UIWidget_o *)frame;
  if ( (byte_4A4A164 & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, grid);
    frame = (UISprite_o *)sub_1B863B8(&System_Convert_TypeInfo, v9);
    byte_4A4A164 = 1;
  }
  if ( !grid )
    goto LABEL_17;
  if ( !nameLabel )
    goto LABEL_17;
  cellHeight = grid->fields.cellHeight;
  frame = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
  if ( !frame )
    goto LABEL_17;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)frame, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  frame = (UISprite_o *)System_Convert__ToInt32_62685532(activeSelf, 0LL);
  if ( !addNameLabel )
    goto LABEL_17;
  v12 = (int)frame;
  frame = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addNameLabel, 0LL);
  if ( !frame )
    goto LABEL_17;
  v13 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)frame, 0LL);
  frame = (UISprite_o *)System_Convert__ToInt32_62685532(v13, 0LL);
  v14 = (int)frame;
  if ( !BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
  if ( !v8 )
LABEL_17:
    sub_1B86614(frame, grid);
  if ( cellHeight == INFINITY )
    v15 = 0x80000000;
  else
    v15 = (int)cellHeight;
  UIWidget__set_height(
    v8,
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->TitleCellHeight + (v14 + v12) * v15,
    0LL);
}