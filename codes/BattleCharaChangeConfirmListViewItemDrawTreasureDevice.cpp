void BattleCharaChangeConfirmListViewItemDrawTreasureDevice___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *v17; // x8

  if ( (byte_596BAEB & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    sub_2213A60(&StringLiteral_21731/*"img_windowbg_saintquartz_2"*/);
    sub_2213A60(&StringLiteral_21285/*"img_arrow_change"*/);
    byte_596BAEB = 1;
  }
  v7 = StringLiteral_21285/*"img_arrow_change"*/;
  static_fields = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields;
  static_fields->TitleCellHeight = 0;
  static_fields->ArrowChangeSpriteName = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->ArrowChangeSpriteName, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_21731/*"img_windowbg_saintquartz_2"*/;
  v10 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields;
  v10->BgChangeSpriteName = (struct System_String_o *)StringLiteral_21731/*"img_windowbg_saintquartz_2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->BgChangeSpriteName, v9, v11, v12, v13, v14, v15, v16);
  v17 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields;
  *(_QWORD *)&v17->MultiGridPosOffsetX = 0xC0E0000041100000LL;
  v17->ArrowOffsetPosY = 1.0;
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
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v5; // 0:kr14_12.12
  UnityEngine_Vector3_o v6; // 0:kr20_12.12

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
    sub_2213CDC(nowTitleLabel, method);
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
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *nowTitleLabel; // x20
  UILabel_o *nextTitleLabel; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_c *v13; // x0
  UISprite_o *nowChangeArrowSprite; // x20
  System_String_o *ArrowChangeSpriteName; // x21

  if ( (byte_596BAE6 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12411/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BAE6 = 1;
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0);
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
  nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_NP_TITLE"*/, 0);
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
  v13 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
  nowChangeArrowSprite = this->fields.nowChangeArrowSprite;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, v11, v12);
    v13 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
  }
  ArrowChangeSpriteName = v13->static_fields->ArrowChangeSpriteName;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
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
    sub_2213CDC(nowGrid, v5);
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
    || (v6 = System_String__Concat_75651716(color, nextNameLabel->fields.mText, 0),
        UILabel__set_text(nextNameLabel, v6, 0),
        (nextAddNameLabel = this->fields.nextAddNameLabel) == 0) )
  {
    sub_2213CDC(this, color);
  }
  v8 = System_String__Concat_75651716(color, nextAddNameLabel->fields.mText, 0);
  UILabel__set_text(nextAddNameLabel, v8, 0);
}


void BattleCharaChangeConfirmListViewItemDrawTreasureDevice__RePosition(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *nowAddNameLabel; // x0
  int v4; // w21
  _BOOL4 activeSelf; // w0
  __int64 v6; // x1
  __int64 v7; // x2
  bool v8; // w20
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_c *v9; // x0
  struct BattleCharaChangeConfirmListViewItemDrawTreasureDevice_StaticFields *static_fields; // x8
  UnityEngine_Component_o *nowTitleLabel; // x0
  float v12; // s0
  __int64 v13; // x1
  __int64 v14; // x2
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_c *v15; // x0
  UnityEngine_Component_o *nowGrid; // x21
  float x; // s8
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_c *v18; // x0
  UnityEngine_Component_o *nextGrid; // x20
  float v20; // s8
  UnityEngine_Component_o *v21; // x0
  UnityEngine_Vector3_o cachedNowTitlePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596BAEA & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    byte_596BAEA = 1;
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
    sub_2213CDC(nowAddNameLabel, method);
  }
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)nowAddNameLabel, 0);
  if ( ((v4 | activeSelf) & 1) != 0 )
  {
    v8 = activeSelf;
    v9 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
    if ( !*(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, v6, v7);
      v9 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
    }
    static_fields = v9->static_fields;
    nowTitleLabel = (UnityEngine_Component_o *)this->fields.nowTitleLabel;
    v12 = this->fields.cachedNowTitlePos.fields.y + static_fields->MultiGridPosOffsetY;
    this->fields.arrowPosY = static_fields->ArrowOffsetPosY;
    ComponentHelper__SetLocalPositionY(nowTitleLabel, v12, 0);
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
      v15 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
      nowGrid = (UnityEngine_Component_o *)this->fields.nowGrid;
      x = this->fields.cachedNowGridPos.fields.x;
      if ( !*(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, v13, v14);
        v15 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
      }
      ComponentHelper__SetLocalPositionX(nowGrid, x + v15->static_fields->MultiGridPosOffsetX, 0);
    }
    if ( v8 )
    {
      v18 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
      nextGrid = (UnityEngine_Component_o *)this->fields.nextGrid;
      v20 = this->fields.cachedNextGridPos.fields.x;
      if ( !*(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, v13, v14);
        v18 = BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo;
      }
      ComponentHelper__SetLocalPositionX(nextGrid, v20 + v18->static_fields->MultiGridPosOffsetX, 0);
    }
  }
  else
  {
    cachedNowTitlePos = this->fields.cachedNowTitlePos;
    v21 = (UnityEngine_Component_o *)this->fields.nowTitleLabel;
    this->fields.arrowPosY = 0.0;
    ComponentHelper__SetLocalPosition(v21, cachedNowTitlePos, 0);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  UISprite_o *nowFrameSprite; // x20
  UIGrid_o *nowGrid; // x21
  UILabel_o *nowNameLabel; // x22
  UILabel_o *nowAddNameLabel; // x23
  const MethodInfo *v9; // x4
  __int64 v10; // x1
  UIWidget_o *v11; // x0
  struct UISprite_o *nextFrameSprite; // x8
  int32_t mHeight; // w9
  int32_t v14; // w1

  if ( (byte_596BAE9 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    byte_596BAE9 = 1;
  }
  nowFrameSprite = this->fields.nowFrameSprite;
  nowGrid = this->fields.nowGrid;
  nowNameLabel = this->fields.nowNameLabel;
  nowAddNameLabel = this->fields.nowAddNameLabel;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, method, v2);
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice___ReSize_g__CalcCellHeight_26_0(
    nowFrameSprite,
    nowGrid,
    nowNameLabel,
    nowAddNameLabel,
    v3);
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice___ReSize_g__CalcCellHeight_26_0(
    this->fields.nextFrameSprite,
    this->fields.nextGrid,
    this->fields.nextNameLabel,
    this->fields.nextAddNameLabel,
    v9);
  v11 = (UIWidget_o *)this->fields.nowFrameSprite;
  if ( !v11 || (nextFrameSprite = this->fields.nextFrameSprite) == 0 )
    sub_2213CDC(v11, v10);
  mHeight = v11->fields.mHeight;
  v14 = nextFrameSprite->fields.mHeight;
  if ( mHeight <= v14 )
  {
    if ( mHeight >= v14 )
      return;
  }
  else
  {
    v11 = (UIWidget_o *)this->fields.nextFrameSprite;
    v14 = mHeight;
  }
  UIWidget__set_height(v11, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCharaChangeConfirmListViewItemDrawTreasureDevice__SetItem(
        BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *v6; // x19
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  int32_t DispLimitCount_k__BackingField; // w23
  int32_t LimitCount_k__BackingField; // w21
  int32_t SvtId_k__BackingField; // w22
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
  if ( (byte_596BAE7 & 1) == 0 )
  {
    this = (BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *)sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596BAE7 = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode )
  {
    NowData_k__BackingField = item->fields._NowData_k__BackingField;
    if ( !NowData_k__BackingField )
      goto LABEL_16;
    DispLimitCount_k__BackingField = NowData_k__BackingField->fields._DispLimitCount_k__BackingField;
    SvtId_k__BackingField = item->fields._SvtId_k__BackingField;
    LimitCount_k__BackingField = item->fields._LimitCount_k__BackingField;
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, item, *(_QWORD *)&mode);
    this = (BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                         DispLimitCount_k__BackingField,
                                                                         LimitCount_k__BackingField,
                                                                         0);
    NextData_k__BackingField = item->fields._NextData_k__BackingField;
    if ( !NextData_k__BackingField )
      goto LABEL_16;
    v12 = (int)this;
    this = (BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                         NextData_k__BackingField->fields._DispLimitCount_k__BackingField,
                                                                         LimitCount_k__BackingField,
                                                                         0);
    v14 = item->fields._NowData_k__BackingField;
    if ( !v14
      || (v15 = item->fields._NextData_k__BackingField) == 0
      || (TreasureDeviceInfo_k__BackingField = v14->fields._TreasureDeviceInfo_k__BackingField,
          v17 = v15->fields._TreasureDeviceInfo_k__BackingField,
          v18 = (int)this,
          BattleCharaChangeConfirmListViewItemDrawTreasureDevice__SetUI(
            this,
            SvtId_k__BackingField,
            LimitCount_k__BackingField,
            v12,
            TreasureDeviceInfo_k__BackingField,
            v6->fields.nowNameLabel,
            v6->fields.nowAddNameLabel,
            v13),
          BattleCharaChangeConfirmListViewItemDrawTreasureDevice__SetUI(
            v19,
            SvtId_k__BackingField,
            LimitCount_k__BackingField,
            v18,
            v17,
            v6->fields.nextNameLabel,
            v6->fields.nextAddNameLabel,
            v20),
          !v17) )
    {
LABEL_16:
      sub_2213CDC(this, item);
    }
    if ( !TreasureDvcInfo__Equals(v17, TreasureDeviceInfo_k__BackingField, 0) )
      BattleCharaChangeConfirmListViewItemDrawTreasureDevice__ModifyColor(v6, v6->fields.modifyColor, v21);
    ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *, const MethodInfo *))v6->klass->vtable._7_RePosition.methodPtr)(
      v6,
      v6->klass->vtable._7_RePosition.method);
    ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_o *, const MethodInfo *))v6->klass->vtable._6_ReSize.methodPtr)(
      v6,
      v6->klass->vtable._6_ReSize.method);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  Il2CppObject *v14; // x28
  ServantLimitAddMaster_o *gameObject; // x0
  __int64 v16; // x1
  ServantLimitAddMaster_o *v17; // x24
  int id; // w4
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x0
  ServantTreasureDeviceAddEntity_o *v20; // x26
  struct System_Int32_array *treasureDeviceIds; // x20
  ServantLimitAddMaster_o *v22; // x28
  il2cpp_array_size_t max_length; // x20
  System_Collections_Generic_List_object__o *v24; // x26
  unsigned __int64 v25; // x23
  __int64 v26; // x21
  __int64 v27; // x2
  TreasureDvcEntity_o *v28; // x20
  int v29; // w8
  System_String_o *v30; // x0
  System_String_o *v31; // x3
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  ServantLimitAddMaster_o *v41; // x1
  Il2CppClass **v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  System_String_o *OverwriteTDName; // x0
  Il2CppObject *v46; // x1
  UILabel_o *v47; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v49; // x0
  Il2CppObject *v50; // x0
  struct System_Int32_array *v51; // [xsp+10h] [xbp-70h]

  if ( (byte_596BAE8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9710/*"NO_ENTRY_NAME"*/);
    sub_2213A60(&StringLiteral_9748/*"NP_NAME"*/);
    byte_596BAE8 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  gameObject = (ServantLimitAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !nameLabel )
    goto LABEL_59;
  v17 = gameObject;
  gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  if ( !addNameLabel )
    goto LABEL_59;
  gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)addNameLabel,
                                            0);
  if ( !gameObject )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  if ( !treasureDeviceInfo || (id = treasureDeviceInfo->fields.id, id <= 0) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43, v44);
    OverwriteTDName = LocalizationManager__Get((System_String_o *)StringLiteral_9710/*"NO_ENTRY_NAME"*/, 0);
LABEL_50:
    v46 = (Il2CppObject *)OverwriteTDName;
    v47 = nameLabel;
LABEL_51:
    UILabel__set_text(v47, (System_String_o *)v46, 0);
    return;
  }
  if ( !v14 )
    goto LABEL_59;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(
                   (ServantTreasureDeviceAddMaster_o *)v14,
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
      goto LABEL_59;
    goto LABEL_48;
  }
  treasureDeviceIds = v20->fields.treasureDeviceIds;
  gameObject = (ServantLimitAddMaster_o *)ServantTreasureDeviceAddEntity__GetEnableDispOnBattleConfirmDialog(v20, 0);
  if ( !treasureDeviceIds )
    goto LABEL_59;
  v22 = gameObject;
  v51 = treasureDeviceIds;
  max_length = treasureDeviceIds->max_length;
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (int)max_length >= 1 )
  {
    if ( v22 )
    {
      v25 = 0;
      v26 = (unsigned int)max_length;
      while ( 1 )
      {
        if ( v25 >= LODWORD(v22->fields._MasterName_k__BackingField) )
LABEL_60:
          sub_2213CE4(gameObject);
        if ( *(&v22->fields.revision + v25) )
        {
          if ( v25 >= LODWORD(v51->max_length) )
            goto LABEL_60;
          if ( !Master_object )
            break;
          v28 = TreasureDvcMaster__GetEntityCheckServantOverwrite(
                  (TreasureDvcMaster_o *)Master_object,
                  svtId,
                  v51->m_Items[v25],
                  0);
          v29 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
          if ( v28 )
          {
            if ( !v29 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v27);
            v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9748/*"NP_NAME"*/, 0);
            gameObject = (ServantLimitAddMaster_o *)System_String__Format(v30, (Il2CppObject *)v28->fields.name, 0);
            v31 = (System_String_o *)gameObject;
            if ( !v17 )
              break;
          }
          else
          {
            if ( !v29 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v27);
            if ( !byte_596B976 )
            {
              sub_2213A60(&LocalizationManager_TypeInfo);
              byte_596B976 = 1;
            }
            gameObject = (ServantLimitAddMaster_o *)LocalizationManager_TypeInfo;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v27);
              gameObject = (ServantLimitAddMaster_o *)LocalizationManager_TypeInfo;
            }
            v31 = (System_String_o *)*((_QWORD *)gameObject[2].monitor + 4);
            if ( !v17 )
              break;
          }
          gameObject = (ServantLimitAddMaster_o *)ServantLimitAddMaster__GetOverwriteTDName(
                                                    v17,
                                                    svtId,
                                                    dispLimitCount,
                                                    v31,
                                                    0,
                                                    0);
          if ( !v24 )
            break;
          items = v24->fields._items;
          v39 = Method_System_Collections_Generic_List_string__Add__;
          ++v24->fields._version;
          if ( !items )
            break;
          size = v24->fields._size;
          v41 = gameObject;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)gameObject,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v41;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v41, v32, v33, v34, v35, v36, v37);
          }
        }
        if ( v26 == ++v25 )
          goto LABEL_40;
      }
    }
LABEL_59:
    sub_2213CDC(gameObject, v16);
  }
LABEL_40:
  gameObject = (ServantLimitAddMaster_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v24, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0);
    if ( !gameObject )
      goto LABEL_59;
LABEL_48:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (ServantLimitAddMaster_o *)TreasureDvcInfo__GetName(treasureDeviceInfo, svtId, 0);
    if ( !v17 )
      goto LABEL_59;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v17,
                        svtId,
                        dispLimitCount,
                        (System_String_o *)gameObject,
                        0,
                        0);
    goto LABEL_50;
  }
  if ( !v24 )
    goto LABEL_59;
  Item = System_Collections_Generic_List_object___get_Item(
           v24,
           0,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Item, 0) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)nameLabel,
                                              0);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v49 = System_Collections_Generic_List_object___get_Item(
            v24,
            0,
            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
    UILabel__set_text(nameLabel, (System_String_o *)v49, 0);
  }
  v50 = System_Collections_Generic_List_object___get_Item(
          v24,
          1,
          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v50, 0) )
  {
    gameObject = (ServantLimitAddMaster_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)addNameLabel,
                                              0);
    if ( !gameObject )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v46 = System_Collections_Generic_List_object___get_Item(
            v24,
            1,
            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
    v47 = addNameLabel;
    goto LABEL_51;
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
  __int64 v10; // x1
  __int64 v11; // x2
  bool activeSelf; // w21
  int v13; // w21
  bool v14; // w0
  __int64 v15; // x2
  int v16; // w20
  int v17; // w9

  v8 = (UIWidget_o *)frame;
  if ( (byte_596BAEC & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo);
    frame = (UISprite_o *)sub_2213A60(&System_Convert_TypeInfo);
    byte_596BAEC = 1;
  }
  if ( !grid )
    goto LABEL_16;
  if ( !nameLabel )
    goto LABEL_16;
  cellHeight = grid->fields.cellHeight;
  frame = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
  if ( !frame )
    goto LABEL_16;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)frame, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v10, v11);
  frame = (UISprite_o *)System_Convert__ToInt32_76657380(activeSelf, 0);
  if ( !addNameLabel )
    goto LABEL_16;
  v13 = (int)frame;
  frame = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addNameLabel, 0);
  if ( !frame )
    goto LABEL_16;
  v14 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)frame, 0);
  frame = (UISprite_o *)System_Convert__ToInt32_76657380(v14, 0);
  v16 = (int)frame;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo, grid, v15);
  if ( !v8 )
LABEL_16:
    sub_2213CDC(frame, grid);
  v17 = (int)cellHeight;
  if ( cellHeight == INFINITY )
    v17 = 0x80000000;
  UIWidget__set_height(
    v8,
    BattleCharaChangeConfirmListViewItemDrawTreasureDevice_TypeInfo->static_fields->TitleCellHeight + (v16 + v13) * v17,
    0);
}