void BattleCharaChangeConfirmListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct BattleCharaChangeConfirmListViewItemDrawSkill_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct BattleCharaChangeConfirmListViewItemDrawSkill_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2C1B1 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_1C93AD4(&StringLiteral_20966/*"img_windowbg_saintquartz_2"*/);
    sub_1C93AD4(&StringLiteral_20529/*"img_arrow_change"*/);
    byte_4D2C1B1 = 1;
  }
  static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleCellHeight = 0x3F80000000000019LL;
  static_fields->MultipleOffsetPosY = 4;
  v8 = StringLiteral_20529/*"img_arrow_change"*/;
  static_fields->ArrowChangeSpriteName = (struct System_String_o *)StringLiteral_20529/*"img_arrow_change"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->ArrowChangeSpriteName, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_20966/*"img_windowbg_saintquartz_2"*/;
  v10 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->static_fields;
  v10->BgChangeSpriteName = (struct System_String_o *)StringLiteral_20966/*"img_windowbg_saintquartz_2"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10->BgChangeSpriteName, v9, v11, v12, v13, v14, v15, v16);
}


void BattleCharaChangeConfirmListViewItemDrawSkill___ctor(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2C1B0 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo);
    byte_4D2C1B0 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *)sub_1C93B7C(
                                                                                       BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo,
                                                                                       (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseObjectList = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.nowSkillBaseObjectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *)sub_1C93B7C(
                                                                                        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo,
                                                                                        (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseObjectList = v11;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.nextSkillBaseObjectList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BattleCharaChangeConfirmListViewItemDraw___ctor((BattleCharaChangeConfirmListViewItemDraw_o *)this, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill__Awake(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDraw__Awake((BattleCharaChangeConfirmListViewItemDraw_o *)this, 0);
}


float BattleCharaChangeConfirmListViewItemDrawSkill__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v2; // x0

  if ( (byte_4D2C1AF & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    byte_4D2C1AF = 1;
  }
  v2 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    v2 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  return v2->static_fields->ArrowOffsetPosY;
}


void BattleCharaChangeConfirmListViewItemDrawSkill__Init(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UILabel_o *nowTitleLabel; // x20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1
  UILabel_o *nextTitleLabel; // x20
  unsigned __int64 v9; // x20
  __int64 i; // x23
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nowSkillBaseObjectList; // x24
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nextSkillBaseObjectList; // x8

  if ( (byte_4D2C1A9 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    sub_1C93AD4(&StringLiteral_11989/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/);
    byte_4D2C1A9 = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, 0);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11989/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0);
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, v6, 0),
        nextTitleLabel = this->fields.nextTitleLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11989/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0),
        !nextTitleLabel) )
  {
LABEL_19:
    sub_1C93D2C(v6, v7);
  }
  UILabel__set_text(nextTitleLabel, v6, 0);
  v9 = 0;
  for ( i = 32; ; i += 40 )
  {
    v6 = (System_String_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= *(int *)(*(_QWORD *)&v6[7].fields + 40LL) )
      break;
    nowSkillBaseObjectList = this->fields.nowSkillBaseObjectList;
    if ( !nowSkillBaseObjectList )
      goto LABEL_19;
    v6 = (System_String_o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    if ( v9 >= LODWORD(nowSkillBaseObjectList->max_length) )
      goto LABEL_20;
    BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Init(
      (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)((char *)nowSkillBaseObjectList + i),
      v7);
    nextSkillBaseObjectList = this->fields.nextSkillBaseObjectList;
    if ( !nextSkillBaseObjectList )
      goto LABEL_19;
    if ( v9 >= LODWORD(nextSkillBaseObjectList->max_length) )
LABEL_20:
      sub_1C93D34(v6);
    BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Init(
      (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)((char *)nextSkillBaseObjectList + i),
      v7);
    ++v9;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCharaChangeConfirmListViewItemDrawSkill__ModifyColor(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        System_String_o *color,
        int32_t index,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v6; // x21
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nextSkillBaseObjectList; // x21
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v8; // x0

  v6 = this;
  if ( (byte_4D2C1AA & 1) == 0 )
  {
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4D2C1AA = 1;
  }
  nextSkillBaseObjectList = v6->fields.nextSkillBaseObjectList;
  if ( !nextSkillBaseObjectList )
    sub_1C93D2C(this, color);
  v8 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  if ( LODWORD(nextSkillBaseObjectList->max_length) <= index )
    sub_1C93D34(v8);
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__ModifyColor(
    &nextSkillBaseObjectList->m_Items[index],
    color,
    *(const MethodInfo **)&index);
}


void BattleCharaChangeConfirmListViewItemDrawSkill__RePosition(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nowSkillBaseObjectList; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4D2C1AD & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    byte_4D2C1AD = 1;
  }
  nowSkillBaseObjectList = this->fields.nowSkillBaseObjectList;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
  BattleCharaChangeConfirmListViewItemDrawSkill___RePosition_g__CalcPosition_14_0(nowSkillBaseObjectList, method);
  BattleCharaChangeConfirmListViewItemDrawSkill___RePosition_g__CalcPosition_14_0(
    this->fields.nextSkillBaseObjectList,
    v4);
}


void BattleCharaChangeConfirmListViewItemDrawSkill__ReSize(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UISprite_o *nowFrameSprite; // x20
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nowSkillBaseObjectList; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  UIWidget_o *v8; // x0
  struct UISprite_o *nextFrameSprite; // x8
  int32_t mHeight; // w9
  int32_t v11; // w1

  if ( (byte_4D2C1AE & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    byte_4D2C1AE = 1;
  }
  nowFrameSprite = this->fields.nowFrameSprite;
  nowSkillBaseObjectList = this->fields.nowSkillBaseObjectList;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
  BattleCharaChangeConfirmListViewItemDrawSkill___ReSize_g__CalcCellHeight_15_0(
    nowFrameSprite,
    nowSkillBaseObjectList,
    v2);
  BattleCharaChangeConfirmListViewItemDrawSkill___ReSize_g__CalcCellHeight_15_0(
    this->fields.nextFrameSprite,
    this->fields.nextSkillBaseObjectList,
    v6);
  v8 = (UIWidget_o *)this->fields.nowFrameSprite;
  if ( !v8 || (nextFrameSprite = this->fields.nextFrameSprite) == 0 )
    sub_1C93D2C(v8, v7);
  mHeight = v8->fields.mHeight;
  v11 = nextFrameSprite->fields.mHeight;
  if ( mHeight <= v11 )
  {
    if ( mHeight >= v11 )
      return;
  }
  else
  {
    v8 = (UIWidget_o *)this->fields.nextFrameSprite;
    v11 = mHeight;
  }
  UIWidget__set_height(v8, v11, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill__SetItem(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_o *LimitCountByDispLimit; // x0
  __int64 v8; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  int32_t SvtId_k__BackingField; // w20
  int32_t LimitCount_k__BackingField; // w21
  int32_t DispLimitCount_k__BackingField; // w22
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  const MethodInfo *v14; // x6
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v15; // x8
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v16; // x9
  struct SkillInfo_array *SkillInfoArray_k__BackingField; // x24
  struct SkillInfo_array *v18; // x25
  int32_t v19; // w23
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v20; // x0
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x3
  int32_t i; // w26
  SkillInfo_o *v24; // x8
  SkillInfo_o *v25; // x9
  int32_t id; // w27
  ServantSkillAddMaster_o *v27; // x28
  ServantSkillAddEntity_o *EnableEntity; // x29
  ServantSkillAddEntity_o *v29; // x0
  ServantSkillAddEntity_o *v30; // x28
  System_Collections_Generic_IEnumerable_TSource__o *skillIds; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x1
  int32_t limitCountAfter; // [xsp+Ch] [xbp-64h]

  if ( (byte_4D2C1AB & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D2C1AB = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__SetItem((BattleCharaChangeConfirmListViewItemDraw_o *)this, item, mode, 0);
  if ( item && mode )
  {
    NowData_k__BackingField = item->fields._NowData_k__BackingField;
    if ( !NowData_k__BackingField )
      goto LABEL_37;
    SvtId_k__BackingField = item->fields._SvtId_k__BackingField;
    LimitCount_k__BackingField = item->fields._LimitCount_k__BackingField;
    DispLimitCount_k__BackingField = NowData_k__BackingField->fields._DispLimitCount_k__BackingField;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByDispLimit = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                                 DispLimitCount_k__BackingField,
                                                                                 LimitCount_k__BackingField,
                                                                                 0);
    NextData_k__BackingField = item->fields._NextData_k__BackingField;
    limitCountAfter = (int)LimitCountByDispLimit;
    if ( !NextData_k__BackingField
      || (LimitCountByDispLimit = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                                       NextData_k__BackingField->fields._DispLimitCount_k__BackingField,
                                                                                       LimitCount_k__BackingField,
                                                                                       0),
          (v15 = item->fields._NowData_k__BackingField) == 0)
      || (v16 = item->fields._NextData_k__BackingField) == 0 )
    {
LABEL_37:
      sub_1C93D2C(LimitCountByDispLimit, v8);
    }
    SkillInfoArray_k__BackingField = v15->fields._SkillInfoArray_k__BackingField;
    v18 = v16->fields._SkillInfoArray_k__BackingField;
    v19 = (int)LimitCountByDispLimit;
    BattleCharaChangeConfirmListViewItemDrawSkill__SetUI(
      LimitCountByDispLimit,
      SvtId_k__BackingField,
      LimitCount_k__BackingField,
      limitCountAfter,
      SkillInfoArray_k__BackingField,
      this->fields.nowSkillBaseObjectList,
      v14);
    BattleCharaChangeConfirmListViewItemDrawSkill__SetUI(
      v20,
      SvtId_k__BackingField,
      LimitCount_k__BackingField,
      v19,
      v18,
      this->fields.nextSkillBaseObjectList,
      v21);
    for ( i = 0; ; ++i )
    {
      LimitCountByDispLimit = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        LimitCountByDispLimit = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)&LimitCountByDispLimit[1].fields.dispMode + 40LL) )
      {
        ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawSkill_o *, const MethodInfo *))this->klass->vtable._7_RePosition.methodPtr)(
          this,
          this->klass->vtable._7_RePosition.method);
        ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawSkill_o *, const MethodInfo *))this->klass->vtable._6_ReSize.methodPtr)(
          this,
          this->klass->vtable._6_ReSize.method);
        return;
      }
      if ( !SkillInfoArray_k__BackingField )
        goto LABEL_37;
      if ( (unsigned int)i >= LODWORD(SkillInfoArray_k__BackingField->max_length) )
LABEL_38:
        sub_1C93D34(LimitCountByDispLimit);
      v24 = SkillInfoArray_k__BackingField->m_Items[i];
      if ( !v24 || !v18 )
        goto LABEL_37;
      if ( (unsigned int)i >= LODWORD(v18->max_length) )
        goto LABEL_38;
      v25 = v18->m_Items[i];
      if ( !v25 )
        goto LABEL_37;
      id = v24->fields.id;
      if ( id == v25->fields.id )
        break;
LABEL_33:
      BattleCharaChangeConfirmListViewItemDrawSkill__ModifyColor(this, this->fields.modifyColor, i, v22);
LABEL_34:
      ;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    LimitCountByDispLimit = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
    if ( !LimitCountByDispLimit )
      goto LABEL_37;
    v27 = (ServantSkillAddMaster_o *)LimitCountByDispLimit;
    EnableEntity = ServantSkillAddMaster__GetEnableEntity(
                     (ServantSkillAddMaster_o *)LimitCountByDispLimit,
                     SvtId_k__BackingField,
                     LimitCount_k__BackingField,
                     id,
                     0,
                     limitCountAfter,
                     1,
                     0);
    v29 = ServantSkillAddMaster__GetEnableEntity(
            v27,
            SvtId_k__BackingField,
            LimitCount_k__BackingField,
            id,
            0,
            v19,
            1,
            0);
    v30 = v29;
    if ( EnableEntity
      && (skillIds = (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.skillIds) != 0 )
    {
      if ( !v29 )
        goto LABEL_31;
    }
    else
    {
      skillIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93B7C(int___TypeInfo, 0);
      if ( !v30 )
      {
LABEL_31:
        v32 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93B7C(int___TypeInfo, 0);
LABEL_32:
        if ( System_Linq_Enumerable__SequenceEqual_int_(
               skillIds,
               v32,
               (const MethodInfo_31DDB0C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
        {
          goto LABEL_34;
        }
        goto LABEL_33;
      }
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30->fields.skillIds;
    if ( v32 )
      goto LABEL_32;
    goto LABEL_31;
  }
}


void BattleCharaChangeConfirmListViewItemDrawSkill__SetUI(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t limitCountAfter,
        SkillInfo_array *skillInfoArray,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *uiObjects,
        const MethodInfo *method)
{
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  unsigned __int64 v14; // x26
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *i; // x24
  _QWORD *p_image; // x0
  SkillInfo_o *v17; // x25

  if ( (byte_4D2C1AC & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4D2C1AC = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoArray, 0) )
  {
    v14 = 0;
    for ( i = uiObjects->m_Items; ; ++i )
    {
      p_image = &BalanceConfig_TypeInfo->_1.image;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        p_image = &BalanceConfig_TypeInfo->_1.image;
      }
      if ( (__int64)v14 >= *(int *)(p_image[23] + 40LL) )
        break;
      if ( !skillInfoArray )
        goto LABEL_20;
      if ( v14 >= LODWORD(skillInfoArray->max_length) )
        goto LABEL_21;
      v17 = skillInfoArray->m_Items[v14];
      if ( v17 && v17->fields.id >= 1 && v17->fields.lv >= 1 )
      {
        if ( !uiObjects )
LABEL_20:
          sub_1C93D2C(p_image, v12);
        p_image = &BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_1.image;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        if ( v14 >= LODWORD(uiObjects->max_length) )
LABEL_21:
          sub_1C93D34(p_image);
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Set(
          i,
          svtId,
          limitCount,
          v17,
          limitCountAfter,
          v13);
      }
      ++v14;
    }
  }
}


void BattleCharaChangeConfirmListViewItemDrawSkill___RePosition_g__CalcPosition_14_0(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *uiObjects,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill___c_c *v3; // x0
  System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *_9__14_1; // x20
  Il2CppObject *v5; // x21
  struct BattleCharaChangeConfirmListViewItemDrawSkill___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  void *v14; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x8
  unsigned int *v17; // x19
  unsigned __int64 v18; // x24
  UnityEngine_GameObject_o **v19; // x20
  char *v20; // x21
  __int128 v21; // q0
  __int128 v22; // q1
  __int128 v23; // q0
  __int128 v24; // q1
  float LocalPositionY; // s8
  const MethodInfo *v26; // x1
  int32_t v27; // w22
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  int v30; // w23
  const MethodInfo *v31; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v32; // x0
  int v33; // w27
  UnityEngine_GameObject_o *baseObject; // x0
  float v35; // s0
  float v36; // s1
  const MethodInfo *v37; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v38; // x0
  int v39; // w22
  int v40; // w8
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v41; // [xsp+0h] [xbp-C0h] BYREF
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o self; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4D2C1B2 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_1C93AD4(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    sub_1C93AD4(&Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__RePosition_b__14_1__);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    byte_4D2C1B2 = 1;
  }
  v3 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    v3 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  }
  _9__14_1 = v3->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__14_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *)sub_1C93D20(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool____ctor(
      _9__14_1,
      v5,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__RePosition_b__14_1__,
      0);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v7, v8, v9, v10, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_31EBE2C *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  v14 = System_Linq_Enumerable__ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          v13,
          (const MethodInfo_31E3FC4 *)Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  if ( !v14 )
    sub_1C93D2C(0, v15);
  v16 = *((_QWORD *)v14 + 3);
  v17 = (unsigned int *)v14;
  if ( (int)v16 >= 1 )
  {
    v18 = 0;
    v19 = (UnityEngine_GameObject_o **)((char *)v14 + 32);
    v20 = (char *)v14 - 8;
    do
    {
      if ( v18 )
      {
        if ( (int)v18 - 1 >= (unsigned int)v16 )
          goto LABEL_45;
        v22 = *(_OWORD *)v20;
        v21 = *((_OWORD *)v20 + 1);
        self.fields.changeBgSprite = (struct UISprite_o *)*((_QWORD *)v20 + 4);
        *(_OWORD *)&self.fields.baseObject = v22;
        *(_OWORD *)&self.fields.uiObject = v21;
        if ( v18 >= (unsigned int)v16 )
          goto LABEL_45;
        v23 = *(_OWORD *)(v20 + 56);
        v24 = *(_OWORD *)(v20 + 40);
        v41.fields.changeBgSprite = (struct UISprite_o *)*((_QWORD *)v20 + 9);
        *(_OWORD *)&v41.fields.baseObject = v24;
        *(_OWORD *)&v41.fields.uiObject = v23;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(self.fields.baseObject, 0);
        v27 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&self, v26);
        v14 = (void *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v41, v28);
        if ( (int)v18 - 1 >= v17[6] )
          goto LABEL_45;
        v30 = (int)v14;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
                (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v20,
                v29) )
          goto LABEL_26;
        v14 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        if ( v18 >= v17[6] )
          goto LABEL_45;
        if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
               (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v20 + 1,
               v31) )
        {
          v32 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
            v32 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          }
          v33 = -v32->static_fields->MultipleOffsetPosY;
        }
        else
        {
LABEL_26:
          v33 = 0;
        }
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        baseObject = v41.fields.baseObject;
        v35 = (float)(LocalPositionY - (float)((float)v27 * 0.5)) - (float)((float)v30 * 0.5);
        v36 = (float)v33;
      }
      else
      {
        v14 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
          LODWORD(v16) = v17[6];
        }
        if ( !(_DWORD)v16 )
          goto LABEL_45;
        if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
               (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)(v17 + 8),
               v15) )
        {
          v38 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
            v38 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          }
          v39 = -v38->static_fields->MultipleOffsetPosY;
        }
        else
        {
          v39 = 0;
        }
        v14 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        if ( !v17[6]
          || (v14 = (void *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(
                              (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)(v17 + 8),
                              v37),
              !v17[6]) )
        {
LABEL_45:
          sub_1C93D34(v14);
        }
        v40 = -(int)v14;
        baseObject = *v19;
        v35 = (float)v40 * 0.5;
        v36 = (float)v39;
      }
      GameObjectExtensions__SetLocalPositionY(baseObject, v35 + v36, 0);
      LODWORD(v16) = v17[6];
      ++v18;
      v20 += 40;
    }
    while ( (__int64)v18 < (int)v16 );
  }
}


void BattleCharaChangeConfirmListViewItemDrawSkill___ReSize_g__CalcCellHeight_15_0(
        UISprite_o *frame,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *uiObjects,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill___c_c *v5; // x0
  System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *_9__15_1; // x21
  Il2CppObject *v7; // x22
  struct BattleCharaChangeConfirmListViewItemDrawSkill___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  struct UISprite_o **v16; // x0
  const MethodInfo *v17; // x1
  struct UISprite_o **v18; // x20
  __int128 v19; // q0
  __int128 v20; // q1
  bool v21; // w0
  const MethodInfo *v22; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v23; // x8
  int32_t MultipleOffsetPosY; // w23
  int32_t TitleCellHeight; // w24
  const MethodInfo *v26; // x1
  struct UISprite_o *v27; // x8
  char *v28; // x23
  unsigned __int64 v29; // x24
  __int128 v30; // q0
  __int128 v31; // q1
  unsigned __int64 v32; // x24
  const MethodInfo *v33; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v34; // x0
  int32_t v35; // w25
  int32_t mHeight; // w26
  int32_t v37; // w0
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v38; // x0
  int32_t v39; // w20
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v40; // [xsp+0h] [xbp-B0h] BYREF
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v41; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4D2C1B3 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_1C93AD4(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    sub_1C93AD4(&Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__ReSize_b__15_1__);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    byte_4D2C1B3 = 1;
  }
  v5 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  memset(&v40, 0, sizeof(v40));
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    v5 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  }
  _9__15_1 = v5->static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__15_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *)sub_1C93D20(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool____ctor(
      _9__15_1,
      v7,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__ReSize_b__15_1__,
      0);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = _9__15_1;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_1,
      (int32_t)_9__15_1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
          (System_Func_TSource__bool__o *)_9__15_1,
          (const MethodInfo_31EBE2C *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  v16 = (struct UISprite_o **)System_Linq_Enumerable__ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
                                v15,
                                (const MethodInfo_31E3FC4 *)Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  if ( !v16 )
    goto LABEL_50;
  v18 = v16;
  if ( !*((_DWORD *)v16 + 6) )
    goto LABEL_49;
  v19 = *((_OWORD *)v16 + 2);
  v20 = *((_OWORD *)v16 + 3);
  v41.fields.changeBgSprite = v16[8];
  *(_OWORD *)&v41.fields.baseObject = v19;
  *(_OWORD *)&v41.fields.uiObject = v20;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  v21 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(&v41, v17);
  v23 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  if ( v21 )
  {
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
      v23 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
    }
    MultipleOffsetPosY = v23->static_fields->MultipleOffsetPosY;
  }
  else
  {
    MultipleOffsetPosY = 0;
  }
  if ( !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  TitleCellHeight = v23->static_fields->TitleCellHeight;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  v16 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v41, v22);
  if ( !frame )
LABEL_50:
    sub_1C93D2C(v16, v17);
  UIWidget__set_height((UIWidget_o *)frame, TitleCellHeight + MultipleOffsetPosY + (_DWORD)v16, 0);
  v27 = v18[3];
  if ( (int)v27 >= 2 )
  {
    v28 = (char *)(v18 + 9);
    v29 = 1;
    while ( v29 < (unsigned int)v27 )
    {
      v31 = *(_OWORD *)v28;
      v30 = *((_OWORD *)v28 + 1);
      v16 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
      v40.fields.changeBgSprite = (struct UISprite_o *)*((_QWORD *)v28 + 4);
      *(_OWORD *)&v40.fields.baseObject = v31;
      *(_OWORD *)&v40.fields.uiObject = v30;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        LODWORD(v27) = *((_DWORD *)v18 + 6);
      }
      v32 = v29 - 1;
      if ( v32 >= (unsigned int)v27 )
        break;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
              (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v28 - 1,
              v26) )
        goto LABEL_36;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(&v40, v33) )
      {
        v34 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
          v34 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
        }
        v35 = v34->static_fields->MultipleOffsetPosY;
      }
      else
      {
LABEL_36:
        v35 = 0;
      }
      mHeight = frame->fields.mHeight;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      v37 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v40, v33);
      UIWidget__set_height((UIWidget_o *)frame, mHeight + v35 + v37, 0);
      v27 = v18[3];
      v29 = v32 + 2;
      v28 += 40;
      if ( (__int64)v29 >= (int)v27 )
        goto LABEL_40;
    }
LABEL_49:
    sub_1C93D34(v16);
  }
LABEL_40:
  if ( v27 )
  {
    v16 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      v27 = v18[3];
    }
    if ( !(_DWORD)v27 )
      goto LABEL_49;
    if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
           (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)&v18[5 * (int)v27 - 1],
           v26) )
    {
      v38 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
      v39 = frame->fields.mHeight;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
        v38 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
      }
      UIWidget__set_height((UIWidget_o *)frame, v38->static_fields->MultipleOffsetPosY + v39, 0);
    }
  }
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___cctor(const MethodInfo *method)
{
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_StaticFields *static_fields; // x8

  if ( (byte_4D2C1BE & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4D2C1BE = 1;
  }
  static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->AddSkillMaxNum = 0x3700000002LL;
  static_fields->ChangeBgSpriteOffset = 3;
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Init(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *uiObject; // x20
  System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__o *_9__15_0; // x21
  Il2CppObject *v7; // x22
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v15; // x0
  UISprite_o *changeArrowSprite; // x20
  System_String_o *ArrowChangeSpriteName; // x21

  if ( (byte_4D2C1BB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_1C93AD4(&Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__Init_b__15_0__);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    byte_4D2C1BB = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !this->fields.baseObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0);
  v4 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  uiObject = (System_Collections_Generic_IEnumerable_T__o *)this->fields.uiObject;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    v4 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  }
  _9__15_0 = v4->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__15_0 = (System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__o *)sub_1C93D20(System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__TypeInfo);
    System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject____ctor(
      _9__15_0,
      v7,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__Init_b__15_0__,
      0);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = _9__15_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0,
      (int32_t)_9__15_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_(
    uiObject,
    (System_Action_T__o *)_9__15_0,
    (const MethodInfo_319189C *)Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___);
  baseObject = (UnityEngine_GameObject_o *)this->fields.changeArrowSprite;
  if ( !baseObject )
    goto LABEL_19;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0);
  v15 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  changeArrowSprite = this->fields.changeArrowSprite;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    v15 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  ArrowChangeSpriteName = v15->static_fields->ArrowChangeSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(changeArrowSprite, ArrowChangeSpriteName, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.changeBgSprite;
  if ( !baseObject
    || (baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0)) == 0 )
  {
LABEL_19:
    sub_1C93D2C(baseObject, method);
  }
  UnityEngine_GameObject__SetActive(baseObject, 0, 0);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.changeBgSprite,
    BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->static_fields->BgChangeSpriteName,
    0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__ModifyColor(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        System_String_o *color,
        const MethodInfo *method)
{
  unsigned __int64 v5; // x21
  __int64 i; // x23
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v7; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_array *uiObject; // x8

  if ( (byte_4D2C1BD & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4D2C1BD = 1;
  }
  v5 = 0;
  for ( i = 32; ; i += 24 )
  {
    v7 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      v7 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    }
    if ( (__int64)v5 >= v7->static_fields->AddSkillMaxNum )
      break;
    uiObject = this->fields.uiObject;
    if ( !uiObject )
      sub_1C93D2C(v7, color);
    if ( v5 >= LODWORD(uiObject->max_length) )
      sub_1C93D34(v7);
    BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__ModifyColor(
      (BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *)((char *)uiObject + i),
      color,
      method);
    ++v5;
  }
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Set(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        int32_t svtId,
        int32_t limitCount,
        SkillInfo_o *skillInfo,
        int32_t limitCountAfter,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *EnableEntity; // x0
  __int64 v12; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  ServantSkillAddEntity_o *v14; // x25
  struct System_Int32_array *skillIds; // x28
  System_Int32_array *EnableDispOnBattleConfirmDialog; // x23
  unsigned __int64 v17; // x29
  int32_t *m_Items; // x25
  int32_t *v19; // x27
  __int64 v20; // x19
  int32_t v21; // w26
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_array *v22; // x20
  const MethodInfo *v23; // x3
  int32_t *v24; // x19
  int32_t v25; // w27
  System_String_o *EffectTitle; // x4
  System_String_o *OverwriteSkillName; // x0
  System_String_o *unknownNameText; // x2
  LocalizationManager_c *v29; // x0
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v30; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_array *uiObject; // x20
  int32_t id; // w23
  System_String_o *Name; // x4
  const MethodInfo *v34; // x3
  System_Int32_array *v35; // [xsp+8h] [xbp-98h]
  int32_t v36; // [xsp+10h] [xbp-90h]
  ServantLimitAddMaster_o *v37; // [xsp+18h] [xbp-88h]
  __int64 v38; // [xsp+20h] [xbp-80h]
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // [xsp+28h] [xbp-78h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4D2C1BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4D2C1BC = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this->fields.baseObject )
    goto LABEL_50;
  v13 = EnableEntity;
  UnityEngine_GameObject__SetActive(this->fields.baseObject, 1, 0);
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !skillInfo )
    goto LABEL_50;
  v37 = (ServantLimitAddMaster_o *)EnableEntity;
  if ( !Master_object )
    goto LABEL_50;
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantSkillAddMaster__GetEnableEntity(
                                                                 (ServantSkillAddMaster_o *)Master_object,
                                                                 svtId,
                                                                 limitCount,
                                                                 skillInfo->fields.id,
                                                                 0,
                                                                 limitCountAfter,
                                                                 1,
                                                                 0);
  if ( !EnableEntity
    || (v14 = (ServantSkillAddEntity_o *)EnableEntity,
        EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantSkillAddEntity__HasKeyEnableDispOnBattleConfirmDialog(
                                                                       (ServantSkillAddEntity_o *)EnableEntity,
                                                                       0),
        ((unsigned __int8)EnableEntity & 1) == 0) )
  {
    uiObject = this->fields.uiObject;
    if ( uiObject )
    {
      id = skillInfo->fields.id;
      Name = SkillInfo__GetName(skillInfo, 0);
      EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)v37;
      if ( v37 )
      {
        EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitAddMaster__GetOverwriteSkillName(
                                                                       v37,
                                                                       svtId,
                                                                       limitCountAfter,
                                                                       id,
                                                                       Name,
                                                                       0);
        if ( !LODWORD(uiObject->max_length) )
LABEL_51:
          sub_1C93D34(EnableEntity);
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Set(
          uiObject->m_Items,
          id,
          (System_String_o *)EnableEntity,
          v34);
        goto LABEL_48;
      }
    }
LABEL_50:
    sub_1C93D2C(EnableEntity, v12);
  }
  skillIds = v14->fields.skillIds;
  v39 = v13;
  v36 = svtId;
  EnableDispOnBattleConfirmDialog = ServantSkillAddEntity__GetEnableDispOnBattleConfirmDialog(v14, 0);
  v17 = 0;
  m_Items = skillIds->m_Items;
  v19 = EnableDispOnBattleConfirmDialog->m_Items;
  v20 = 32;
  v35 = EnableDispOnBattleConfirmDialog;
  while ( 1 )
  {
    EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    }
    if ( (__int64)v17 >= (__int64)EnableEntity[2].fields.list->klass )
      break;
    if ( !skillIds )
      goto LABEL_50;
    if ( v17 >= LODWORD(skillIds->max_length) )
      goto LABEL_51;
    v21 = m_Items[v17];
    if ( v21 >= 1 )
    {
      if ( !EnableDispOnBattleConfirmDialog )
        goto LABEL_50;
      if ( v17 >= LODWORD(EnableDispOnBattleConfirmDialog->max_length) )
        goto LABEL_51;
      if ( v19[v17] >= 1 )
      {
        v22 = this->fields.uiObject;
        if ( !v22 || !v39 )
          goto LABEL_50;
        EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                       v39,
                                                                       &entity,
                                                                       v21,
                                                                       (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( v17 >= LODWORD(v22->max_length) )
          goto LABEL_51;
        if ( ((unsigned __int8)EnableEntity & 1) != 0 )
        {
          v38 = v20;
          if ( v17 >= LODWORD(skillIds->max_length) )
            goto LABEL_51;
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
          if ( !entity )
            goto LABEL_50;
          v24 = v19;
          v25 = m_Items[v17];
          EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)entity, 0, 0);
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)v37;
          if ( !v37 )
            goto LABEL_50;
          OverwriteSkillName = ServantLimitAddMaster__GetOverwriteSkillName(
                                 v37,
                                 v36,
                                 limitCountAfter,
                                 v25,
                                 EffectTitle,
                                 0);
          v19 = v24;
          EnableDispOnBattleConfirmDialog = v35;
          v20 = v38;
          unknownNameText = OverwriteSkillName;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !byte_4D2BD02 )
          {
            sub_1C93AD4(&LocalizationManager_TypeInfo);
            byte_4D2BD02 = 1;
          }
          v29 = LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v29 = LocalizationManager_TypeInfo;
          }
          unknownNameText = v29->static_fields->unknownNameText;
        }
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Set(
          (BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *)((char *)v22 + v20),
          v21,
          unknownNameText,
          v23);
        v30 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
          v30 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        }
        if ( v17 == v30->static_fields->AddSkillMaxNum - 1 )
        {
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeBgSprite;
          if ( !EnableEntity )
            goto LABEL_50;
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)EnableEntity,
                                                                         0);
          if ( !EnableEntity )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EnableEntity, 1, 0);
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeArrowSprite;
          if ( !EnableEntity )
            goto LABEL_50;
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)EnableEntity,
                                                                         0);
          if ( !EnableEntity )
            goto LABEL_50;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EnableEntity, 1, 0);
        }
      }
    }
    ++v17;
    v20 += 24;
  }
LABEL_48:
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grid;
  if ( !EnableEntity )
    goto LABEL_50;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)EnableEntity, 1, 0);
}


int32_t BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  struct UISprite_o *changeBgSprite; // x8
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v6; // x0
  int32_t mHeight; // w19
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v9; // x0

  if ( (byte_4D2C1B9 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4D2C1B9 = 1;
  }
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  v3 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(this, method);
  if ( v3 )
  {
    changeBgSprite = this->fields.changeBgSprite;
    if ( !changeBgSprite )
      sub_1C93D2C(v3, v4);
    v6 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    mHeight = changeBgSprite->fields.mHeight;
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      v6 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    }
    return v6->static_fields->ChangeBgSpriteOffset + mHeight;
  }
  else
  {
    v9 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      v9 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    }
    return v9->static_fields->ObjectHeight;
  }
}


bool BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *uiObject; // x19
  System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__o *_9__11_0; // x20
  Il2CppObject *v6; // x21
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2C1BA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___);
    sub_1C93AD4(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__TypeInfo);
    sub_1C93AD4(&Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__get_IsMultiple_b__11_0__);
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    byte_4D2C1BA = 1;
  }
  v3 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  uiObject = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.uiObject;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    v3 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  }
  _9__11_0 = v3->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__11_0 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__o *)sub_1C93D20(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool____ctor(
      _9__11_0,
      v6,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__get_IsMultiple_b__11_0__,
      0);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = _9__11_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v8, v9, v10, v11, v12, v13);
  }
  return System_Linq_Enumerable__Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_(
           uiObject,
           (System_Func_TSource__bool__o *)_9__11_0,
           (const MethodInfo_31C6830 *)Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___) > 1;
}


float BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_PositionY(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        const MethodInfo *method)
{
  return GameObjectExtensions__GetLocalPositionY(this->fields.baseObject, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__set_PositionY(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        float value,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.baseObject, value, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C1BF & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    byte_4D2C1BF = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c___ctor(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c___Init_b__15_0(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *ui,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Init(ui, (const MethodInfo *)ui);
}


bool BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c___get_IsMultiple_b__11_0(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *ui,
        const MethodInfo *method)
{
  if ( !ui->fields.baseObject )
    sub_1C93D2C(0, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Init(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_4D2C1B6 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C1B6 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !this->fields.baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.icon) == 0)
    || (SkillIconComponent__Clear((SkillIconComponent_o *)baseObject, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0) )
  {
    sub_1C93D2C(baseObject, method);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__ModifyColor(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *this,
        System_String_o *color,
        const MethodInfo *method)
{
  struct UILabel_o *nameLabel; // x19
  System_String_o *v4; // x1

  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    sub_1C93D2C(this, color);
  v4 = System_String__Concat_64425724(color, nameLabel->fields.mText, 0);
  UILabel__set_text(nameLabel, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Set(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *this,
        int32_t skillId,
        System_String_o *skillName,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 1, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.icon) == 0)
    || (SkillIconComponent__Set((SkillIconComponent_o *)baseObject, skillId, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0) )
  {
    sub_1C93D2C(baseObject, *(_QWORD *)&skillId);
  }
  UILabel__set_text((UILabel_o *)baseObject, skillName, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C1C0 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    byte_4D2C1C0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSkill___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCharaChangeConfirmListViewItemDrawSkill___c___ctor(
        BattleCharaChangeConfirmListViewItemDrawSkill___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleCharaChangeConfirmListViewItemDrawSkill___c___RePosition_b__14_1(
        BattleCharaChangeConfirmListViewItemDrawSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *ui,
        const MethodInfo *method)
{
  if ( !ui->fields.baseObject )
    sub_1C93D2C(0, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0);
}


bool BattleCharaChangeConfirmListViewItemDrawSkill___c___ReSize_b__15_1(
        BattleCharaChangeConfirmListViewItemDrawSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *ui,
        const MethodInfo *method)
{
  if ( !ui->fields.baseObject )
    sub_1C93D2C(0, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0);
}