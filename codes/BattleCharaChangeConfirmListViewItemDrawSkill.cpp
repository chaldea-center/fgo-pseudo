void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleCharaChangeConfirmListViewItemDrawSkill_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattleCharaChangeConfirmListViewItemDrawSkill_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4A152 & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_20416/*"img_windowbg_saintquartz_2"*/, v4);
    sub_1B863B8(&StringLiteral_20034/*"img_arrow_change"*/, v5);
    byte_4A4A152 = 1;
  }
  static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleCellHeight = 0x3F80000000000019LL;
  static_fields->MultipleOffsetPosY = 4;
  v7 = StringLiteral_20034/*"img_arrow_change"*/;
  static_fields->ArrowChangeSpriteName = (struct System_String_o *)StringLiteral_20034/*"img_arrow_change"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->ArrowChangeSpriteName, v7, v2, v3);
  v8 = StringLiteral_20416/*"img_windowbg_saintquartz_2"*/;
  v9 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->static_fields;
  v9->BgChangeSpriteName = (struct System_String_o *)StringLiteral_20416/*"img_windowbg_saintquartz_2"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v9->BgChangeSpriteName, v8, v10, v11);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill___ctor(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A4A151 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo, v3);
    byte_4A4A151 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *)sub_1B86460(
                                                                                       BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo,
                                                                                       (unsigned int)v4->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseObjectList = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nowSkillBaseObjectList, (int32_t)v5, v6, v7);
  v8 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *)sub_1B86460(
                                                                                       BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo,
                                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseObjectList = v8;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nextSkillBaseObjectList, (int32_t)v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill__Awake(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  ;
}


float __fastcall BattleCharaChangeConfirmListViewItemDrawSkill__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v2; // x0

  if ( (byte_4A4A150 & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, method);
    byte_4A4A150 = 1;
  }
  v2 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    v2 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  return v2->static_fields->ArrowOffsetPosY;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill__Init(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *nowTitleLabel; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x1
  UILabel_o *nextTitleLabel; // x20
  unsigned __int64 v12; // x20
  __int64 i; // x23
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nowSkillBaseObjectList; // x24
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nextSkillBaseObjectList; // x8

  if ( (byte_4A4A14A & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&LocalizationManager_TypeInfo, v5);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_11697/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, v7);
    byte_4A4A14A = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, method);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11697/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL);
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, v9, 0LL),
        nextTitleLabel = this->fields.nextTitleLabel,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11697/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0LL),
        !nextTitleLabel) )
  {
LABEL_19:
    sub_1B86614(v9, v10);
  }
  UILabel__set_text(nextTitleLabel, v9, 0LL);
  v12 = 0LL;
  for ( i = 32LL; ; i += 40LL )
  {
    v9 = (System_String_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= *(int *)(*(_QWORD *)&v9[7].fields + 32LL) )
      break;
    nowSkillBaseObjectList = this->fields.nowSkillBaseObjectList;
    if ( !nowSkillBaseObjectList )
      goto LABEL_19;
    v9 = (System_String_o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    if ( v12 >= nowSkillBaseObjectList->max_length )
      goto LABEL_20;
    BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Init(
      (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)((char *)nowSkillBaseObjectList + i),
      v10);
    nextSkillBaseObjectList = this->fields.nextSkillBaseObjectList;
    if ( !nextSkillBaseObjectList )
      goto LABEL_19;
    if ( v12 >= nextSkillBaseObjectList->max_length )
LABEL_20:
      sub_1B8661C(v9, v10);
    BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Init(
      (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)((char *)nextSkillBaseObjectList + i),
      v10);
    ++v12;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill__ModifyColor(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        System_String_o *color,
        int32_t index,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v6; // x21
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nextSkillBaseObjectList; // x21
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v8; // x0

  v6 = this;
  if ( (byte_4A4A14B & 1) == 0 )
  {
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)sub_1B863B8(
                                                                &BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo,
                                                                color);
    byte_4A4A14B = 1;
  }
  nextSkillBaseObjectList = v6->fields.nextSkillBaseObjectList;
  if ( !nextSkillBaseObjectList )
    sub_1B86614(this, color);
  v8 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  if ( nextSkillBaseObjectList->max_length <= index )
    sub_1B8661C(v8, color);
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__ModifyColor(
    &nextSkillBaseObjectList->m_Items[index],
    color,
    *(const MethodInfo **)&index);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill__RePosition(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nowSkillBaseObjectList; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4A4A14E & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, method);
    byte_4A4A14E = 1;
  }
  nowSkillBaseObjectList = this->fields.nowSkillBaseObjectList;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
  BattleCharaChangeConfirmListViewItemDrawSkill___RePosition_g__CalcPosition_14_0(nowSkillBaseObjectList, method);
  BattleCharaChangeConfirmListViewItemDrawSkill___RePosition_g__CalcPosition_14_0(
    this->fields.nextSkillBaseObjectList,
    v4);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill__ReSize(
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

  if ( (byte_4A4A14F & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, method);
    byte_4A4A14F = 1;
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
  if ( !v8 || (nextFrameSprite = this->fields.nextFrameSprite) == 0LL )
    sub_1B86614(v8, v7);
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
  UIWidget__set_height(v8, v11, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill__SetItem(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  int32_t SvtId_k__BackingField; // w20
  int32_t LimitCount_k__BackingField; // w21
  int32_t DispLimitCount_k__BackingField; // w22
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  const MethodInfo *v17; // x6
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v18; // x8
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v19; // x9
  SkillInfo_array *SkillInfoArray_k__BackingField; // x24
  SkillInfo_array *v21; // x25
  int32_t v22; // w23
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v23; // x0
  const MethodInfo *v24; // x6
  const MethodInfo *v25; // x3
  int32_t i; // w26
  SkillInfo_o *v27; // x8
  SkillInfo_o *v28; // x9
  int32_t id; // w27
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v30; // x28
  ServantSkillAddEntity_o *EnableEntity; // x29
  ServantSkillAddEntity_o *v32; // x0
  ServantSkillAddEntity_o *v33; // x28
  System_Collections_Generic_IEnumerable_TSource__o *skillIds; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x1
  int32_t dispLimitCount; // [xsp+Ch] [xbp-64h]

  v6 = this;
  if ( (byte_4A4A14C & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, item);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantSkillAddMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v9);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v10);
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)sub_1B863B8(&int___TypeInfo, v11);
    byte_4A4A14C = 1;
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
                                                                0LL);
    NextData_k__BackingField = item->fields._NextData_k__BackingField;
    dispLimitCount = (int)this;
    if ( !NextData_k__BackingField
      || (this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                                                      NextData_k__BackingField->fields._DispLimitCount_k__BackingField,
                                                                      LimitCount_k__BackingField,
                                                                      0LL),
          (v18 = item->fields._NowData_k__BackingField) == 0LL)
      || (v19 = item->fields._NextData_k__BackingField) == 0LL )
    {
LABEL_37:
      sub_1B86614(this, item);
    }
    SkillInfoArray_k__BackingField = v18->fields._SkillInfoArray_k__BackingField;
    v21 = v19->fields._SkillInfoArray_k__BackingField;
    v22 = (int)this;
    BattleCharaChangeConfirmListViewItemDrawSkill__SetUI(
      this,
      SvtId_k__BackingField,
      LimitCount_k__BackingField,
      dispLimitCount,
      SkillInfoArray_k__BackingField,
      v6->fields.nowSkillBaseObjectList,
      v17);
    BattleCharaChangeConfirmListViewItemDrawSkill__SetUI(
      v23,
      SvtId_k__BackingField,
      LimitCount_k__BackingField,
      v22,
      v21,
      v6->fields.nextSkillBaseObjectList,
      v24);
    for ( i = 0; ; ++i )
    {
      this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)&this[1].fields.dispMode + 32LL) )
      {
        ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawSkill_o *, Il2CppMethodPointer))v6->klass->vtable._7_RePosition.method)(
          v6,
          v6->klass->vtable._8_GetArrowOffsetY.methodPtr);
        ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawSkill_o *, Il2CppMethodPointer))v6->klass->vtable._6_ReSize.method)(
          v6,
          v6->klass->vtable._7_RePosition.methodPtr);
        return;
      }
      if ( !SkillInfoArray_k__BackingField )
        goto LABEL_37;
      if ( i >= SkillInfoArray_k__BackingField->max_length )
LABEL_38:
        sub_1B8661C(this, item);
      v27 = SkillInfoArray_k__BackingField->m_Items[i];
      if ( !v27 || !v21 )
        goto LABEL_37;
      if ( i >= v21->max_length )
        goto LABEL_38;
      v28 = v21->m_Items[i];
      if ( !v28 )
        goto LABEL_37;
      id = v27->fields.id;
      if ( id == v28->fields.id )
        break;
LABEL_33:
      BattleCharaChangeConfirmListViewItemDrawSkill__ModifyColor(v6, v6->fields.modifyColor, i, v25);
LABEL_34:
      ;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
    if ( !this )
      goto LABEL_37;
    v30 = this;
    EnableEntity = ServantSkillAddMaster__GetEnableEntity(
                     (ServantSkillAddMaster_o *)this,
                     SvtId_k__BackingField,
                     LimitCount_k__BackingField,
                     id,
                     0,
                     dispLimitCount,
                     1,
                     0LL);
    v32 = ServantSkillAddMaster__GetEnableEntity(
            (ServantSkillAddMaster_o *)v30,
            SvtId_k__BackingField,
            LimitCount_k__BackingField,
            id,
            0,
            v22,
            1,
            0LL);
    v33 = v32;
    if ( EnableEntity
      && (skillIds = (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.skillIds) != 0LL )
    {
      if ( !v32 )
        goto LABEL_31;
    }
    else
    {
      skillIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B86460(int___TypeInfo, 0LL);
      if ( !v33 )
      {
LABEL_31:
        v35 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B86460(int___TypeInfo, 0LL);
LABEL_32:
        if ( System_Linq_Enumerable__SequenceEqual_int_(
               skillIds,
               v35,
               (const MethodInfo_2FA3FBC *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
        {
          goto LABEL_34;
        }
        goto LABEL_33;
      }
    }
    v35 = (System_Collections_Generic_IEnumerable_TSource__o *)v33->fields.skillIds;
    if ( v35 )
      goto LABEL_32;
    goto LABEL_31;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill__SetUI(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        SkillInfo_array *skillInfoArray,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *uiObjects,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x5
  unsigned __int64 v15; // x26
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *i; // x24
  _QWORD *p_image; // x0
  SkillInfo_o *v18; // x25

  if ( (byte_4A4A14D & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v12);
    byte_4A4A14D = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoArray, 0LL) )
  {
    v15 = 0LL;
    for ( i = uiObjects->m_Items; ; ++i )
    {
      p_image = &BalanceConfig_TypeInfo->_1.image;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        p_image = &BalanceConfig_TypeInfo->_1.image;
      }
      if ( (__int64)v15 >= *(int *)(p_image[23] + 32LL) )
        break;
      if ( !skillInfoArray )
        goto LABEL_20;
      if ( v15 >= skillInfoArray->max_length )
        goto LABEL_21;
      v18 = skillInfoArray->m_Items[v15];
      if ( v18 && v18->fields.id >= 1 && v18->fields.lv >= 1 )
      {
        if ( !uiObjects )
LABEL_20:
          sub_1B86614(p_image, v13);
        p_image = &BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_1.image;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        if ( v15 >= uiObjects->max_length )
LABEL_21:
          sub_1B8661C(p_image, v13);
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Set(
          i,
          svtId,
          limitCount,
          v18,
          dispLimitCount,
          v14);
      }
      ++v15;
    }
  }
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill___RePosition_g__CalcPosition_14_0(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *uiObjects,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill___c_c *v9; // x0
  System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *_9__14_1; // x20
  Il2CppObject *v11; // x21
  struct BattleCharaChangeConfirmListViewItemDrawSkill___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  void *v16; // x0
  const MethodInfo *v17; // x1
  __int64 v18; // x8
  unsigned int *v19; // x19
  unsigned __int64 v20; // x24
  UnityEngine_GameObject_o **v21; // x20
  char *v22; // x21
  __int128 v23; // q0
  __int128 v24; // q1
  __int128 v25; // q0
  __int128 v26; // q1
  float LocalPositionY; // s8
  const MethodInfo *v28; // x1
  int32_t v29; // w22
  const MethodInfo *v30; // x1
  int v31; // w23
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v32; // x0
  int v33; // w27
  UnityEngine_GameObject_o *baseObject; // x0
  float v35; // s0
  float v36; // s1
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v37; // x0
  int v38; // w22
  int v39; // w8
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v40; // [xsp+0h] [xbp-C0h] BYREF
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o self; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A4A153 & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, method);
    sub_1B863B8(
      &Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___,
      v3);
    sub_1B863B8(
      &Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___,
      v4);
    sub_1B863B8(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo, v5);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v6);
    sub_1B863B8(&Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__RePosition_b__14_1__, v7);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo, v8);
    byte_4A4A153 = 1;
  }
  v9 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    v9 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  }
  _9__14_1 = v9->static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__14_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *)sub_1B86604(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool____ctor(
      _9__14_1,
      v11,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__RePosition_b__14_1__,
      0LL);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = _9__14_1;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__14_1, (int32_t)_9__14_1, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_2FB0880 *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  v16 = System_Linq_Enumerable__ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          v15,
          (const MethodInfo_2FA9B84 *)Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  if ( !v16 )
    sub_1B86614(0LL, v17);
  v18 = *((_QWORD *)v16 + 3);
  v19 = (unsigned int *)v16;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    v21 = (UnityEngine_GameObject_o **)((char *)v16 + 32);
    v22 = (char *)v16 - 8;
    do
    {
      if ( v20 )
      {
        if ( (int)v20 - 1 >= (unsigned int)v18 )
          goto LABEL_45;
        v24 = *(_OWORD *)v22;
        v23 = *((_OWORD *)v22 + 1);
        self.fields.changeBgSprite = (struct UISprite_o *)*((_QWORD *)v22 + 4);
        *(_OWORD *)&self.fields.baseObject = v24;
        *(_OWORD *)&self.fields.uiObject = v23;
        if ( v20 >= (unsigned int)v18 )
          goto LABEL_45;
        v25 = *(_OWORD *)(v22 + 56);
        v26 = *(_OWORD *)(v22 + 40);
        v40.fields.changeBgSprite = (struct UISprite_o *)*((_QWORD *)v22 + 9);
        *(_OWORD *)&v40.fields.baseObject = v26;
        *(_OWORD *)&v40.fields.uiObject = v25;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(self.fields.baseObject, 0LL);
        v29 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&self, v28);
        v16 = (void *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v40, v30);
        if ( (int)v20 - 1 >= v19[6] )
          goto LABEL_45;
        v31 = (int)v16;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
                (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v22,
                v17) )
          goto LABEL_26;
        v16 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        if ( v20 >= v19[6] )
          goto LABEL_45;
        if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
               (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v22 + 1,
               v17) )
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
        baseObject = v40.fields.baseObject;
        v35 = (float)(LocalPositionY - (float)((float)v29 * 0.5)) - (float)((float)v31 * 0.5);
        v36 = (float)v33;
      }
      else
      {
        v16 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
          LODWORD(v18) = v19[6];
        }
        if ( !(_DWORD)v18 )
          goto LABEL_45;
        if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
               (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)(v19 + 8),
               v17) )
        {
          v37 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
            v37 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          }
          v38 = -v37->static_fields->MultipleOffsetPosY;
        }
        else
        {
          v38 = 0;
        }
        v16 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        if ( !v19[6]
          || (v16 = (void *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(
                              (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)(v19 + 8),
                              v17),
              !v19[6]) )
        {
LABEL_45:
          sub_1B8661C(v16, v17);
        }
        v39 = -(int)v16;
        baseObject = *v21;
        v35 = (float)v39 * 0.5;
        v36 = (float)v38;
      }
      GameObjectExtensions__SetLocalPositionY(baseObject, v35 + v36, 0LL);
      LODWORD(v18) = v19[6];
      ++v20;
      v22 += 40;
    }
    while ( (__int64)v20 < (int)v18 );
  }
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill___ReSize_g__CalcCellHeight_15_0(
        UISprite_o *frame,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *uiObjects,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill___c_c *v11; // x0
  System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *_9__15_1; // x21
  Il2CppObject *v13; // x22
  struct BattleCharaChangeConfirmListViewItemDrawSkill___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  struct UISprite_o **v18; // x0
  const MethodInfo *v19; // x1
  struct UISprite_o **v20; // x20
  __int128 v21; // q0
  __int128 v22; // q1
  bool v23; // w0
  const MethodInfo *v24; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v25; // x8
  int32_t MultipleOffsetPosY; // w23
  int32_t TitleCellHeight; // w24
  struct UISprite_o *v28; // x8
  char *v29; // x23
  unsigned __int64 v30; // x24
  __int128 v31; // q0
  __int128 v32; // q1
  unsigned __int64 v33; // x24
  const MethodInfo *v34; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v35; // x0
  int32_t v36; // w25
  int32_t mHeight; // w26
  int32_t v38; // w0
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v39; // x0
  int32_t v40; // w20
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v41; // [xsp+0h] [xbp-B0h] BYREF
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v42; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A4A154 & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, uiObjects);
    sub_1B863B8(
      &Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___,
      v5);
    sub_1B863B8(
      &Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___,
      v6);
    sub_1B863B8(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo, v7);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v8);
    sub_1B863B8(&Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__ReSize_b__15_1__, v9);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo, v10);
    byte_4A4A154 = 1;
  }
  v11 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  memset(&v41, 0, sizeof(v41));
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    v11 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  }
  _9__15_1 = v11->static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__15_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *)sub_1B86604(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool____ctor(
      _9__15_1,
      v13,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__ReSize_b__15_1__,
      0LL);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = _9__15_1;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__15_1, (int32_t)_9__15_1, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
          (System_Func_TSource__bool__o *)_9__15_1,
          (const MethodInfo_2FB0880 *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  v18 = (struct UISprite_o **)System_Linq_Enumerable__ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
                                v17,
                                (const MethodInfo_2FA9B84 *)Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  if ( !v18 )
    goto LABEL_50;
  v20 = v18;
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_49;
  v21 = *((_OWORD *)v18 + 2);
  v22 = *((_OWORD *)v18 + 3);
  v42.fields.changeBgSprite = v18[8];
  *(_OWORD *)&v42.fields.baseObject = v21;
  *(_OWORD *)&v42.fields.uiObject = v22;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  v23 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(&v42, v19);
  v25 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  if ( v23 )
  {
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
      v25 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
    }
    MultipleOffsetPosY = v25->static_fields->MultipleOffsetPosY;
  }
  else
  {
    MultipleOffsetPosY = 0;
  }
  if ( !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  TitleCellHeight = v25->static_fields->TitleCellHeight;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  v18 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v42, v24);
  if ( !frame )
LABEL_50:
    sub_1B86614(v18, v19);
  UIWidget__set_height((UIWidget_o *)frame, TitleCellHeight + MultipleOffsetPosY + (_DWORD)v18, 0LL);
  v28 = v20[3];
  if ( (int)v28 >= 2 )
  {
    v29 = (char *)(v20 + 9);
    v30 = 1LL;
    while ( v30 < (unsigned int)v28 )
    {
      v32 = *(_OWORD *)v29;
      v31 = *((_OWORD *)v29 + 1);
      v18 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
      v41.fields.changeBgSprite = (struct UISprite_o *)*((_QWORD *)v29 + 4);
      *(_OWORD *)&v41.fields.baseObject = v32;
      *(_OWORD *)&v41.fields.uiObject = v31;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        LODWORD(v28) = *((_DWORD *)v20 + 6);
      }
      v33 = v30 - 1;
      if ( v33 >= (unsigned int)v28 )
        break;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
              (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v29 - 1,
              v19) )
        goto LABEL_36;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(&v41, v34) )
      {
        v35 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
          v35 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
        }
        v36 = v35->static_fields->MultipleOffsetPosY;
      }
      else
      {
LABEL_36:
        v36 = 0;
      }
      mHeight = frame->fields.mHeight;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      v38 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v41, v34);
      UIWidget__set_height((UIWidget_o *)frame, mHeight + v36 + v38, 0LL);
      v28 = v20[3];
      v30 = v33 + 2;
      v29 += 40;
      if ( (__int64)v30 >= (int)v28 )
        goto LABEL_40;
    }
LABEL_49:
    sub_1B8661C(v18, v19);
  }
LABEL_40:
  if ( v28 )
  {
    v18 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
      v28 = v20[3];
    }
    if ( !(_DWORD)v28 )
      goto LABEL_49;
    if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
           (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)&v20[5 * (int)v28 - 1],
           v19) )
    {
      v39 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
      v40 = frame->fields.mHeight;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
        v39 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
      }
      UIWidget__set_height((UIWidget_o *)frame, v39->static_fields->MultipleOffsetPosY + v40, 0LL);
    }
  }
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_StaticFields *static_fields; // x8

  if ( (byte_4A4A15B & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v1);
    byte_4A4A15B = 1;
  }
  static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->AddSkillMaxNum = 0x3700000002LL;
  static_fields->ChangeBgSpriteOffset = 3;
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Init(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_c *v9; // x0
  System_Collections_Generic_IEnumerable_T__o *uiObject; // x20
  System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__o *_9__15_0; // x21
  Il2CppObject *v12; // x22
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v16; // x0
  UISprite_o *changeArrowSprite; // x20
  System_String_o *ArrowChangeSpriteName; // x21

  if ( (byte_4A4A158 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__TypeInfo, method);
    sub_1B863B8(&AtlasManager_TypeInfo, v3);
    sub_1B863B8(&Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___, v4);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, v5);
    sub_1B863B8(&Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__Init_b__15_0__, v6);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo, v7);
    byte_4A4A158 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !this->fields.baseObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
  v9 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  uiObject = (System_Collections_Generic_IEnumerable_T__o *)this->fields.uiObject;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    v9 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  }
  _9__15_0 = v9->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__15_0 = (System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__o *)sub_1B86604(System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__TypeInfo);
    System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject____ctor(
      _9__15_0,
      v12,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__Init_b__15_0__,
      0LL);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = _9__15_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v14, v15);
  }
  BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_(
    uiObject,
    (System_Action_T__o *)_9__15_0,
    (const MethodInfo_2F5B0B4 *)Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___);
  baseObject = (UnityEngine_GameObject_o *)this->fields.changeArrowSprite;
  if ( !baseObject )
    goto LABEL_19;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
  v16 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  changeArrowSprite = this->fields.changeArrowSprite;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    v16 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  ArrowChangeSpriteName = v16->static_fields->ArrowChangeSpriteName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(changeArrowSprite, ArrowChangeSpriteName, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.changeBgSprite;
  if ( !baseObject
    || (baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1B86614(baseObject, method);
  }
  UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.changeBgSprite,
    BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->static_fields->BgChangeSpriteName,
    0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__ModifyColor(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        System_String_o *color,
        const MethodInfo *method)
{
  unsigned __int64 v5; // x21
  __int64 i; // x23
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v7; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_array *uiObject; // x8

  if ( (byte_4A4A15A & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, color);
    byte_4A4A15A = 1;
  }
  v5 = 0LL;
  for ( i = 32LL; ; i += 24LL )
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
      sub_1B86614(v7, color);
    if ( v5 >= uiObject->max_length )
      sub_1B8661C(v7, color);
    BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__ModifyColor(
      (BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *)((char *)uiObject + i),
      color,
      method);
    ++v5;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Set(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        int32_t svtId,
        int32_t limitCount,
        SkillInfo_o *skillInfo,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Master_object; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *EnableEntity; // x0
  __int64 v18; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  ServantSkillAddEntity_o *v20; // x22
  struct System_Int32_array *skillIds; // x24
  System_Int32_array *EnableDispOnBattleConfirmDialog; // x21
  unsigned __int64 v23; // x25
  int32_t *v24; // x27
  __int64 v25; // x28
  int32_t v26; // w23
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_array *uiObject; // x22
  const MethodInfo *v28; // x3
  System_String_o *EffectTitle; // x2
  LocalizationManager_c *v30; // x0
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v31; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_array *v32; // x22
  int32_t id; // w20
  const MethodInfo *v34; // x3
  System_Int32_array *v35; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A4A159 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantSkillAddMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1B863B8(&DataManager_TypeInfo, v12);
    sub_1B863B8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v13);
    sub_1B863B8(&LocalizationManager_TypeInfo, v14);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v15);
    byte_4A4A159 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this->fields.baseObject )
    goto LABEL_47;
  v19 = EnableEntity;
  UnityEngine_GameObject__SetActive(this->fields.baseObject, 1, 0LL);
  if ( !skillInfo || !Master_object )
    goto LABEL_47;
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantSkillAddMaster__GetEnableEntity(
                                                                 (ServantSkillAddMaster_o *)Master_object,
                                                                 svtId,
                                                                 limitCount,
                                                                 skillInfo->fields.id,
                                                                 0,
                                                                 dispLimitCount,
                                                                 1,
                                                                 0LL);
  if ( EnableEntity
    && (v20 = (ServantSkillAddEntity_o *)EnableEntity,
        EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantSkillAddEntity__HasKeyEnableDispOnBattleConfirmDialog(
                                                                       (ServantSkillAddEntity_o *)EnableEntity,
                                                                       0LL),
        ((unsigned __int8)EnableEntity & 1) != 0) )
  {
    skillIds = v20->fields.skillIds;
    EnableDispOnBattleConfirmDialog = ServantSkillAddEntity__GetEnableDispOnBattleConfirmDialog(v20, 0LL);
    v23 = 0LL;
    v24 = &EnableDispOnBattleConfirmDialog->m_Items[1];
    v25 = 32LL;
    v35 = EnableDispOnBattleConfirmDialog;
    while ( 1 )
    {
      EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
        EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
      }
      if ( (__int64)v23 >= (__int64)EnableEntity[2].fields.list->klass )
        break;
      if ( !skillIds )
        goto LABEL_47;
      if ( v23 >= skillIds->max_length )
        goto LABEL_48;
      v26 = skillIds->m_Items[v23 + 1];
      if ( v26 >= 1 )
      {
        if ( !EnableDispOnBattleConfirmDialog )
          goto LABEL_47;
        if ( v23 >= EnableDispOnBattleConfirmDialog->max_length )
          goto LABEL_48;
        if ( v24[v23] >= 1 )
        {
          uiObject = this->fields.uiObject;
          if ( !uiObject || !v19 )
            goto LABEL_47;
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                         v19,
                                                                         &entity,
                                                                         v26,
                                                                         (const MethodInfo_32142CC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( v23 >= uiObject->max_length )
            goto LABEL_48;
          if ( ((unsigned __int8)EnableEntity & 1) != 0 )
          {
            EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
            if ( !entity )
              goto LABEL_47;
            EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)entity, 0, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( !byte_4A49A43 )
            {
              sub_1B863B8(&LocalizationManager_TypeInfo, v18);
              byte_4A49A43 = 1;
            }
            v30 = LocalizationManager_TypeInfo;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v30 = LocalizationManager_TypeInfo;
            }
            EffectTitle = v30->static_fields->unknownNameText;
            EnableDispOnBattleConfirmDialog = v35;
          }
          BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Set(
            (BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *)((char *)uiObject + v25),
            v26,
            EffectTitle,
            v28);
          v31 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
          if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
            v31 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
          }
          if ( v23 == v31->static_fields->AddSkillMaxNum - 1 )
          {
            EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeBgSprite;
            if ( !EnableEntity )
              goto LABEL_47;
            EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)EnableEntity,
                                                                           0LL);
            if ( !EnableEntity )
              goto LABEL_47;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EnableEntity, 1, 0LL);
            EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeArrowSprite;
            if ( !EnableEntity )
              goto LABEL_47;
            EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)EnableEntity,
                                                                           0LL);
            if ( !EnableEntity )
              goto LABEL_47;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EnableEntity, 1, 0LL);
          }
        }
      }
      ++v23;
      v25 += 24LL;
    }
  }
  else
  {
    v32 = this->fields.uiObject;
    if ( !v32 )
      goto LABEL_47;
    id = skillInfo->fields.id;
    EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillInfo__GetName(skillInfo, 0LL);
    if ( !v32->max_length )
LABEL_48:
      sub_1B8661C(EnableEntity, v18);
    BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Set(
      v32->m_Items,
      id,
      (System_String_o *)EnableEntity,
      v34);
  }
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grid;
  if ( !EnableEntity )
LABEL_47:
    sub_1B86614(EnableEntity, v18);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)EnableEntity, 1, 0LL);
}


int32_t __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  struct UISprite_o *changeBgSprite; // x8
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v6; // x0
  int32_t mHeight; // w19
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v9; // x0

  if ( (byte_4A4A156 & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, method);
    byte_4A4A156 = 1;
  }
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
  v3 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(this, method);
  if ( v3 )
  {
    changeBgSprite = this->fields.changeBgSprite;
    if ( !changeBgSprite )
      sub_1B86614(v3, v4);
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


bool __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *uiObject; // x19
  System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__o *_9__11_0; // x20
  Il2CppObject *v9; // x21
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A4A157 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___,
      method);
    sub_1B863B8(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__TypeInfo, v3);
    sub_1B863B8(&Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__get_IsMultiple_b__11_0__, v4);
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo, v5);
    byte_4A4A157 = 1;
  }
  v6 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  uiObject = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.uiObject;
  if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    v6 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  }
  _9__11_0 = v6->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__11_0 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__o *)sub_1B86604(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool____ctor(
      _9__11_0,
      v9,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__get_IsMultiple_b__11_0__,
      0LL);
    static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = _9__11_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v11, v12);
  }
  return System_Linq_Enumerable__Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_(
           uiObject,
           (System_Func_TSource__bool__o *)_9__11_0,
           (const MethodInfo_2F8D8E8 *)Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___) > 1;
}


float __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_PositionY(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        const MethodInfo *method)
{
  return GameObjectExtensions__GetLocalPositionY(this->fields.baseObject, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__set_PositionY(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        float value,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.baseObject, value, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4A15C & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo, v1);
    byte_4A4A15C = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_o *)v2;
  sub_1B8635C(
    (CGThumbnailListItem_o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c___ctor(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c___Init_b__15_0(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *ui,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Init(ui, (const MethodInfo *)ui);
}


bool __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c___get_IsMultiple_b__11_0(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *ui,
        const MethodInfo *method)
{
  if ( !ui->fields.baseObject )
    sub_1B86614(0LL, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Init(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_4A4A155 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4A155 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !this->fields.baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.icon) == 0LL)
    || (SkillIconComponent__Clear((SkillIconComponent_o *)baseObject, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0LL) )
  {
    sub_1B86614(baseObject, method);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__ModifyColor(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *this,
        System_String_o *color,
        const MethodInfo *method)
{
  struct UILabel_o *nameLabel; // x19
  System_String_o *v4; // x1

  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    sub_1B86614(this, color);
  v4 = System_String__Concat_61645176(color, nameLabel->fields.mText, 0LL);
  UILabel__set_text(nameLabel, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Set(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *this,
        int32_t skillId,
        System_String_o *skillName,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 1, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.icon) == 0LL)
    || (SkillIconComponent__Set((SkillIconComponent_o *)baseObject, skillId, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0LL) )
  {
    sub_1B86614(baseObject, *(_QWORD *)&skillId);
  }
  UILabel__set_text((UILabel_o *)baseObject, skillName, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4A15D & 1) == 0 )
  {
    sub_1B863B8(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo, v1);
    byte_4A4A15D = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSkill___c_o *)v2;
  sub_1B8635C(
    (CGThumbnailListItem_o *)BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawSkill___c___ctor(
        BattleCharaChangeConfirmListViewItemDrawSkill___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCharaChangeConfirmListViewItemDrawSkill___c___RePosition_b__14_1(
        BattleCharaChangeConfirmListViewItemDrawSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *ui,
        const MethodInfo *method)
{
  if ( !ui->fields.baseObject )
    sub_1B86614(0LL, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0LL);
}


bool __fastcall BattleCharaChangeConfirmListViewItemDrawSkill___c___ReSize_b__15_1(
        BattleCharaChangeConfirmListViewItemDrawSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *ui,
        const MethodInfo *method)
{
  if ( !ui->fields.baseObject )
    sub_1B86614(0LL, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0LL);
}