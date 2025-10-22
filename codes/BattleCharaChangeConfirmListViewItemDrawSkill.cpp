void BattleCharaChangeConfirmListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSkill_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct BattleCharaChangeConfirmListViewItemDrawSkill_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C51FDA & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_1C3E564(&StringLiteral_20750/*"img_windowbg_saintquartz_2"*/);
    sub_1C3E564(&StringLiteral_20320/*"img_arrow_change"*/);
    byte_4C51FDA = 1;
  }
  static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleCellHeight = 0x3F80000000000019LL;
  static_fields->MultipleOffsetPosY = 4;
  v4 = StringLiteral_20320/*"img_arrow_change"*/;
  static_fields->ArrowChangeSpriteName = (struct System_String_o *)StringLiteral_20320/*"img_arrow_change"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->ArrowChangeSpriteName, v4, v1, v2);
  v5 = StringLiteral_20750/*"img_windowbg_saintquartz_2"*/;
  v6 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->static_fields;
  v6->BgChangeSpriteName = (struct System_String_o *)StringLiteral_20750/*"img_windowbg_saintquartz_2"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->BgChangeSpriteName, v5, v7, v8);
}


void BattleCharaChangeConfirmListViewItemDrawSkill___ctor(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C51FD9 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo);
    byte_4C51FD9 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *)sub_1C3E60C(
                                                                                       BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo,
                                                                                       (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseObjectList = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.nowSkillBaseObjectList, (int32_t)v4, v5, v6);
  v7 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *)sub_1C3E60C(
                                                                                       BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo,
                                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseObjectList = v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.nextSkillBaseObjectList, (int32_t)v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill__Awake(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  ;
}


float BattleCharaChangeConfirmListViewItemDrawSkill__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v2; // x0

  if ( (byte_4C51FD8 & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    byte_4C51FD8 = 1;
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

  if ( (byte_4C51FD2 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    sub_1C3E564(&StringLiteral_11904/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/);
    byte_4C51FD2 = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, method);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11904/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0);
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, v6, 0),
        nextTitleLabel = this->fields.nextTitleLabel,
        v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11904/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0),
        !nextTitleLabel) )
  {
LABEL_19:
    sub_1C3E7C0(v6, v7);
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
      sub_1C3E7C8(v6, v7);
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
  if ( (byte_4C51FD3 & 1) == 0 )
  {
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4C51FD3 = 1;
  }
  nextSkillBaseObjectList = v6->fields.nextSkillBaseObjectList;
  if ( !nextSkillBaseObjectList )
    sub_1C3E7C0(this, color);
  v8 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  if ( LODWORD(nextSkillBaseObjectList->max_length) <= index )
    sub_1C3E7C8(v8, color);
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

  if ( (byte_4C51FD6 & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    byte_4C51FD6 = 1;
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

  if ( (byte_4C51FD7 & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    byte_4C51FD7 = 1;
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
    sub_1C3E7C0(v8, v7);
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
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v6; // x19
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  int32_t SvtId_k__BackingField; // w20
  int32_t LimitCount_k__BackingField; // w21
  int32_t DispLimitCount_k__BackingField; // w22
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  const MethodInfo *v12; // x6
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v13; // x8
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v14; // x9
  struct SkillInfo_array *SkillInfoArray_k__BackingField; // x24
  struct SkillInfo_array *v16; // x25
  int32_t v17; // w23
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v18; // x0
  const MethodInfo *v19; // x6
  const MethodInfo *v20; // x3
  int32_t i; // w26
  SkillInfo_o *v22; // x8
  SkillInfo_o *v23; // x9
  int32_t id; // w27
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v25; // x28
  ServantSkillAddEntity_o *EnableEntity; // x29
  ServantSkillAddEntity_o *v27; // x0
  ServantSkillAddEntity_o *v28; // x28
  System_Collections_Generic_IEnumerable_TSource__o *skillIds; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x1
  int32_t limitCountAfter; // [xsp+Ch] [xbp-64h]

  v6 = this;
  if ( (byte_4C51FD4 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C3E564(&ImageLimitCount_TypeInfo);
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)sub_1C3E564(&int___TypeInfo);
    byte_4C51FD4 = 1;
  }
  v6->fields.dispMode = mode;
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
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                DispLimitCount_k__BackingField,
                                                                LimitCount_k__BackingField,
                                                                0);
    NextData_k__BackingField = item->fields._NextData_k__BackingField;
    limitCountAfter = (int)this;
    if ( !NextData_k__BackingField
      || (this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                      NextData_k__BackingField->fields._DispLimitCount_k__BackingField,
                                                                      LimitCount_k__BackingField,
                                                                      0),
          (v13 = item->fields._NowData_k__BackingField) == 0)
      || (v14 = item->fields._NextData_k__BackingField) == 0 )
    {
LABEL_37:
      sub_1C3E7C0(this, item);
    }
    SkillInfoArray_k__BackingField = v13->fields._SkillInfoArray_k__BackingField;
    v16 = v14->fields._SkillInfoArray_k__BackingField;
    v17 = (int)this;
    BattleCharaChangeConfirmListViewItemDrawSkill__SetUI(
      this,
      SvtId_k__BackingField,
      LimitCount_k__BackingField,
      limitCountAfter,
      SkillInfoArray_k__BackingField,
      v6->fields.nowSkillBaseObjectList,
      v12);
    BattleCharaChangeConfirmListViewItemDrawSkill__SetUI(
      v18,
      SvtId_k__BackingField,
      LimitCount_k__BackingField,
      v17,
      v16,
      v6->fields.nextSkillBaseObjectList,
      v19);
    for ( i = 0; ; ++i )
    {
      this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)&this[1].fields.dispMode + 40LL) )
      {
        ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawSkill_o *, const MethodInfo *))v6->klass->vtable._7_RePosition.methodPtr)(
          v6,
          v6->klass->vtable._7_RePosition.method);
        ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawSkill_o *, const MethodInfo *))v6->klass->vtable._6_ReSize.methodPtr)(
          v6,
          v6->klass->vtable._6_ReSize.method);
        return;
      }
      if ( !SkillInfoArray_k__BackingField )
        goto LABEL_37;
      if ( (unsigned int)i >= LODWORD(SkillInfoArray_k__BackingField->max_length) )
LABEL_38:
        sub_1C3E7C8(this, item);
      v22 = SkillInfoArray_k__BackingField->m_Items[i];
      if ( !v22 || !v16 )
        goto LABEL_37;
      if ( (unsigned int)i >= LODWORD(v16->max_length) )
        goto LABEL_38;
      v23 = v16->m_Items[i];
      if ( !v23 )
        goto LABEL_37;
      id = v22->fields.id;
      if ( id == v23->fields.id )
        break;
LABEL_33:
      BattleCharaChangeConfirmListViewItemDrawSkill__ModifyColor(v6, v6->fields.modifyColor, i, v20);
LABEL_34:
      ;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
    if ( !this )
      goto LABEL_37;
    v25 = this;
    EnableEntity = ServantSkillAddMaster__GetEnableEntity(
                     (ServantSkillAddMaster_o *)this,
                     SvtId_k__BackingField,
                     LimitCount_k__BackingField,
                     id,
                     0,
                     limitCountAfter,
                     1,
                     0);
    v27 = ServantSkillAddMaster__GetEnableEntity(
            (ServantSkillAddMaster_o *)v25,
            SvtId_k__BackingField,
            LimitCount_k__BackingField,
            id,
            0,
            v17,
            1,
            0);
    v28 = v27;
    if ( EnableEntity
      && (skillIds = (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.skillIds) != 0 )
    {
      if ( !v27 )
        goto LABEL_31;
    }
    else
    {
      skillIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C3E60C(int___TypeInfo, 0);
      if ( !v28 )
      {
LABEL_31:
        v30 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C3E60C(int___TypeInfo, 0);
LABEL_32:
        if ( System_Linq_Enumerable__SequenceEqual_int_(
               skillIds,
               v30,
               (const MethodInfo_3133744 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
        {
          goto LABEL_34;
        }
        goto LABEL_33;
      }
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.skillIds;
    if ( v30 )
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

  if ( (byte_4C51FD5 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4C51FD5 = 1;
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
          sub_1C3E7C0(p_image, v12);
        p_image = &BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_1.image;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        if ( v14 >= LODWORD(uiObjects->max_length) )
LABEL_21:
          sub_1C3E7C8(p_image, v12);
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
  const MethodInfo *v8; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  void *v10; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x8
  unsigned int *v13; // x19
  unsigned __int64 v14; // x24
  UnityEngine_GameObject_o **v15; // x20
  char *v16; // x21
  __int128 v17; // q0
  __int128 v18; // q1
  __int128 v19; // q0
  __int128 v20; // q1
  float LocalPositionY; // s8
  const MethodInfo *v22; // x1
  int32_t v23; // w22
  const MethodInfo *v24; // x1
  int v25; // w23
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v26; // x0
  int v27; // w27
  UnityEngine_GameObject_o *baseObject; // x0
  float v29; // s0
  float v30; // s1
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v31; // x0
  int v32; // w22
  int v33; // w8
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v34; // [xsp+0h] [xbp-C0h] BYREF
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o self; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C51FDB & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_1C3E564(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    sub_1C3E564(&Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__RePosition_b__14_1__);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    byte_4C51FDB = 1;
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
    _9__14_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *)sub_1C3E7B0(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool____ctor(
      _9__14_1,
      v5,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__RePosition_b__14_1__,
      0);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v7, v8);
  }
  v9 = System_Linq_Enumerable__Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
         (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
         (System_Func_TSource__bool__o *)_9__14_1,
         (const MethodInfo_3140E74 *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  v10 = System_Linq_Enumerable__ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          v9,
          (const MethodInfo_3139494 *)Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  if ( !v10 )
    sub_1C3E7C0(0, v11);
  v12 = *((_QWORD *)v10 + 3);
  v13 = (unsigned int *)v10;
  if ( (int)v12 >= 1 )
  {
    v14 = 0;
    v15 = (UnityEngine_GameObject_o **)((char *)v10 + 32);
    v16 = (char *)v10 - 8;
    do
    {
      if ( v14 )
      {
        if ( (int)v14 - 1 >= (unsigned int)v12 )
          goto LABEL_45;
        v18 = *(_OWORD *)v16;
        v17 = *((_OWORD *)v16 + 1);
        self.fields.changeBgSprite = (struct UISprite_o *)*((_QWORD *)v16 + 4);
        *(_OWORD *)&self.fields.baseObject = v18;
        *(_OWORD *)&self.fields.uiObject = v17;
        if ( v14 >= (unsigned int)v12 )
          goto LABEL_45;
        v19 = *(_OWORD *)(v16 + 56);
        v20 = *(_OWORD *)(v16 + 40);
        v34.fields.changeBgSprite = (struct UISprite_o *)*((_QWORD *)v16 + 9);
        *(_OWORD *)&v34.fields.baseObject = v20;
        *(_OWORD *)&v34.fields.uiObject = v19;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(self.fields.baseObject, 0);
        v23 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&self, v22);
        v10 = (void *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v34, v24);
        if ( (int)v14 - 1 >= v13[6] )
          goto LABEL_45;
        v25 = (int)v10;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
                (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v16,
                v11) )
          goto LABEL_26;
        v10 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        if ( v14 >= v13[6] )
          goto LABEL_45;
        if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
               (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v16 + 1,
               v11) )
        {
          v26 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
            v26 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          }
          v27 = -v26->static_fields->MultipleOffsetPosY;
        }
        else
        {
LABEL_26:
          v27 = 0;
        }
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        baseObject = v34.fields.baseObject;
        v29 = (float)(LocalPositionY - (float)((float)v23 * 0.5)) - (float)((float)v25 * 0.5);
        v30 = (float)v27;
      }
      else
      {
        v10 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
          LODWORD(v12) = v13[6];
        }
        if ( !(_DWORD)v12 )
          goto LABEL_45;
        if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
               (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)(v13 + 8),
               v11) )
        {
          v31 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
            v31 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          }
          v32 = -v31->static_fields->MultipleOffsetPosY;
        }
        else
        {
          v32 = 0;
        }
        v10 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        if ( !v13[6]
          || (v10 = (void *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(
                              (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)(v13 + 8),
                              v11),
              !v13[6]) )
        {
LABEL_45:
          sub_1C3E7C8(v10, v11);
        }
        v33 = -(int)v10;
        baseObject = *v15;
        v29 = (float)v33 * 0.5;
        v30 = (float)v32;
      }
      GameObjectExtensions__SetLocalPositionY(baseObject, v29 + v30, 0);
      LODWORD(v12) = v13[6];
      ++v14;
      v16 += 40;
    }
    while ( (__int64)v14 < (int)v12 );
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  struct UISprite_o **v12; // x0
  const MethodInfo *v13; // x1
  struct UISprite_o **v14; // x20
  __int128 v15; // q0
  __int128 v16; // q1
  bool v17; // w0
  const MethodInfo *v18; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v19; // x8
  int32_t MultipleOffsetPosY; // w23
  int32_t TitleCellHeight; // w24
  struct UISprite_o *v22; // x8
  char *v23; // x23
  unsigned __int64 v24; // x24
  __int128 v25; // q0
  __int128 v26; // q1
  unsigned __int64 v27; // x24
  const MethodInfo *v28; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v29; // x0
  int32_t v30; // w25
  int32_t mHeight; // w26
  int32_t v32; // w0
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v33; // x0
  int32_t v34; // w20
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v35; // [xsp+0h] [xbp-B0h] BYREF
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v36; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C51FDC & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_1C3E564(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    sub_1C3E564(&Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__ReSize_b__15_1__);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    byte_4C51FDC = 1;
  }
  v5 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  memset(&v35, 0, sizeof(v35));
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
    _9__15_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *)sub_1C3E7B0(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool____ctor(
      _9__15_1,
      v7,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__ReSize_b__15_1__,
      0);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = _9__15_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__15_1, (int32_t)_9__15_1, v9, v10);
  }
  v11 = System_Linq_Enumerable__Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
          (System_Func_TSource__bool__o *)_9__15_1,
          (const MethodInfo_3140E74 *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  v12 = (struct UISprite_o **)System_Linq_Enumerable__ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
                                v11,
                                (const MethodInfo_3139494 *)Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  if ( !v12 )
    goto LABEL_50;
  v14 = v12;
  if ( !*((_DWORD *)v12 + 6) )
    goto LABEL_49;
  v15 = *((_OWORD *)v12 + 2);
  v16 = *((_OWORD *)v12 + 3);
  v36.fields.changeBgSprite = v12[8];
  *(_OWORD *)&v36.fields.baseObject = v15;
  *(_OWORD *)&v36.fields.uiObject = v16;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  v17 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(&v36, v13);
  v19 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  if ( v17 )
  {
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
      v19 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
    }
    MultipleOffsetPosY = v19->static_fields->MultipleOffsetPosY;
  }
  else
  {
    MultipleOffsetPosY = 0;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  TitleCellHeight = v19->static_fields->TitleCellHeight;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  v12 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v36, v18);
  if ( !frame )
LABEL_50:
    sub_1C3E7C0(v12, v13);
  UIWidget__set_height((UIWidget_o *)frame, TitleCellHeight + MultipleOffsetPosY + (_DWORD)v12, 0);
  v22 = v14[3];
  if ( (int)v22 >= 2 )
  {
    v23 = (char *)(v14 + 9);
    v24 = 1;
    while ( v24 < (unsigned int)v22 )
    {
      v26 = *(_OWORD *)v23;
      v25 = *((_OWORD *)v23 + 1);
      v12 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
      v35.fields.changeBgSprite = (struct UISprite_o *)*((_QWORD *)v23 + 4);
      *(_OWORD *)&v35.fields.baseObject = v26;
      *(_OWORD *)&v35.fields.uiObject = v25;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        LODWORD(v22) = *((_DWORD *)v14 + 6);
      }
      v27 = v24 - 1;
      if ( v27 >= (unsigned int)v22 )
        break;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
              (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v23 - 1,
              v13) )
        goto LABEL_36;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(&v35, v28) )
      {
        v29 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
          v29 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
        }
        v30 = v29->static_fields->MultipleOffsetPosY;
      }
      else
      {
LABEL_36:
        v30 = 0;
      }
      mHeight = frame->fields.mHeight;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      v32 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v35, v28);
      UIWidget__set_height((UIWidget_o *)frame, mHeight + v30 + v32, 0);
      v22 = v14[3];
      v24 = v27 + 2;
      v23 += 40;
      if ( (__int64)v24 >= (int)v22 )
        goto LABEL_40;
    }
LABEL_49:
    sub_1C3E7C8(v12, v13);
  }
LABEL_40:
  if ( v22 )
  {
    v12 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      v22 = v14[3];
    }
    if ( !(_DWORD)v22 )
      goto LABEL_49;
    if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
           (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)&v14[5 * (int)v22 - 1],
           v13) )
    {
      v33 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
      v34 = frame->fields.mHeight;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
        v33 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
      }
      UIWidget__set_height((UIWidget_o *)frame, v33->static_fields->MultipleOffsetPosY + v34, 0);
    }
  }
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___cctor(const MethodInfo *method)
{
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_StaticFields *static_fields; // x8

  if ( (byte_4C51FE3 & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4C51FE3 = 1;
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
  const MethodInfo *v10; // x3
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v11; // x0
  UISprite_o *changeArrowSprite; // x20
  System_String_o *ArrowChangeSpriteName; // x21

  if ( (byte_4C51FE0 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_1C3E564(&Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__Init_b__15_0__);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    byte_4C51FE0 = 1;
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
    _9__15_0 = (System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__o *)sub_1C3E7B0(System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__TypeInfo);
    System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject____ctor(
      _9__15_0,
      v7,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__Init_b__15_0__,
      0);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = _9__15_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v9, v10);
  }
  BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_(
    uiObject,
    (System_Action_T__o *)_9__15_0,
    (const MethodInfo_30E6B34 *)Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___);
  baseObject = (UnityEngine_GameObject_o *)this->fields.changeArrowSprite;
  if ( !baseObject )
    goto LABEL_19;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0);
  v11 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  changeArrowSprite = this->fields.changeArrowSprite;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    v11 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  ArrowChangeSpriteName = v11->static_fields->ArrowChangeSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(changeArrowSprite, ArrowChangeSpriteName, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.changeBgSprite;
  if ( !baseObject
    || (baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0)) == 0 )
  {
LABEL_19:
    sub_1C3E7C0(baseObject, method);
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

  if ( (byte_4C51FE2 & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4C51FE2 = 1;
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
      sub_1C3E7C0(v7, color);
    if ( v5 >= LODWORD(uiObject->max_length) )
      sub_1C3E7C8(v7, color);
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

  if ( (byte_4C51FE1 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4C51FE1 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this->fields.baseObject )
    goto LABEL_50;
  v13 = EnableEntity;
  UnityEngine_GameObject__SetActive(this->fields.baseObject, 1, 0);
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
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
          sub_1C3E7C8(EnableEntity, v12);
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Set(
          uiObject->m_Items,
          id,
          (System_String_o *)EnableEntity,
          v34);
        goto LABEL_48;
      }
    }
LABEL_50:
    sub_1C3E7C0(EnableEntity, v12);
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
                                                                       (const MethodInfo_33B2FA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
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
          if ( !byte_4C5204F )
          {
            sub_1C3E564(&LocalizationManager_TypeInfo);
            byte_4C5204F = 1;
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

  if ( (byte_4C51FDE & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_4C51FDE = 1;
  }
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  v3 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(this, method);
  if ( v3 )
  {
    changeBgSprite = this->fields.changeBgSprite;
    if ( !changeBgSprite )
      sub_1C3E7C0(v3, v4);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C51FDF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___);
    sub_1C3E564(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__TypeInfo);
    sub_1C3E564(&Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__get_IsMultiple_b__11_0__);
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    byte_4C51FDF = 1;
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
    _9__11_0 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__o *)sub_1C3E7B0(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool____ctor(
      _9__11_0,
      v6,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__get_IsMultiple_b__11_0__,
      0);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = _9__11_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v8, v9);
  }
  return System_Linq_Enumerable__Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_(
           uiObject,
           (System_Func_TSource__bool__o *)_9__11_0,
           (const MethodInfo_311C2C0 *)Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___) > 1;
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
  const MethodInfo *v3; // x3

  if ( (byte_4C51FE4 & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    byte_4C51FE4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C3E7C0(0, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Init(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_4C51FDD & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C51FDD = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !this->fields.baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.icon) == 0)
    || (SkillIconComponent__Clear((SkillIconComponent_o *)baseObject, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0) )
  {
    sub_1C3E7C0(baseObject, method);
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
    sub_1C3E7C0(this, color);
  v4 = System_String__Concat_63636468(color, nameLabel->fields.mText, 0);
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
    sub_1C3E7C0(baseObject, *(_QWORD *)&skillId);
  }
  UILabel__set_text((UILabel_o *)baseObject, skillName, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C51FE5 & 1) == 0 )
  {
    sub_1C3E564(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    byte_4C51FE5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSkill___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C3E7C0(0, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0);
}


bool BattleCharaChangeConfirmListViewItemDrawSkill___c___ReSize_b__15_1(
        BattleCharaChangeConfirmListViewItemDrawSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *ui,
        const MethodInfo *method)
{
  if ( !ui->fields.baseObject )
    sub_1C3E7C0(0, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0);
}