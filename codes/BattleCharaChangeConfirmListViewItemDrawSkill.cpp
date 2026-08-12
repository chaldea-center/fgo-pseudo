void BattleCharaChangeConfirmListViewItemDrawSkill___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  struct BattleCharaChangeConfirmListViewItemDrawSkill_StaticFields *static_fields; // x0
  __int64 v8; // x1
  int32_t v9; // w1
  struct BattleCharaChangeConfirmListViewItemDrawSkill_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596BAD6 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_2213A60(&StringLiteral_21731/*"img_windowbg_saintquartz_2"*/);
    sub_2213A60(&StringLiteral_21285/*"img_arrow_change"*/);
    byte_596BAD6 = 1;
  }
  static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TitleCellHeight = 0x3F80000000000019LL;
  v8 = StringLiteral_21285/*"img_arrow_change"*/;
  static_fields->MultipleOffsetPosY = 4;
  static_fields->ArrowChangeSpriteName = (struct System_String_o *)v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->ArrowChangeSpriteName, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_21731/*"img_windowbg_saintquartz_2"*/;
  v10 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->static_fields;
  v10->BgChangeSpriteName = (struct System_String_o *)StringLiteral_21731/*"img_windowbg_saintquartz_2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->BgChangeSpriteName, v9, v11, v12, v13, v14, v15, v16);
}


void BattleCharaChangeConfirmListViewItemDrawSkill___ctor(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596BAD5 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo);
    byte_596BAD5 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *)sub_2213B20(
                                                                                       BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo,
                                                                                       (unsigned int)v4->static_fields->SvtSkillListMax);
  this->fields.nowSkillBaseObjectList = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nowSkillBaseObjectList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *)sub_2213B20(
                                                                                        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___TypeInfo,
                                                                                        (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.nextSkillBaseObjectList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nextSkillBaseObjectList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  __int64 v2; // x2
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v3; // x0

  if ( (byte_596BAD4 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    byte_596BAD4 = 1;
  }
  v3 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, method, v2);
    v3 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  return v3->static_fields->ArrowOffsetPosY;
}


void BattleCharaChangeConfirmListViewItemDrawSkill__Init(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *nowTitleLabel; // x20
  System_String_o *v8; // x0
  const MethodInfo *v9; // x1
  UILabel_o *nextTitleLabel; // x20
  __int64 v11; // x2
  unsigned __int64 v12; // x20
  __int64 i; // x23
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nowSkillBaseObjectList; // x24
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nextSkillBaseObjectList; // x8

  if ( (byte_596BACE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    sub_2213A60(&StringLiteral_12413/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/);
    byte_596BACE = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, method);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0);
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, v8, 0),
        nextTitleLabel = this->fields.nextTitleLabel,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_SKILL_TITLE"*/, 0),
        !nextTitleLabel) )
  {
LABEL_19:
    sub_2213CDC(v8, v9);
  }
  UILabel__set_text(nextTitleLabel, v8, 0);
  v12 = 0;
  for ( i = 32; ; i += 40 )
  {
    v8 = (System_String_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v11);
      v8 = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= *(int *)(*(_QWORD *)&v8[7].fields + 40LL) )
      break;
    nowSkillBaseObjectList = this->fields.nowSkillBaseObjectList;
    if ( !nowSkillBaseObjectList )
      goto LABEL_19;
    v8 = (System_String_o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v9, v11);
    if ( v12 >= LODWORD(nowSkillBaseObjectList->max_length) )
      goto LABEL_20;
    BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Init(
      (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)((char *)nowSkillBaseObjectList + i),
      v9);
    nextSkillBaseObjectList = this->fields.nextSkillBaseObjectList;
    if ( !nextSkillBaseObjectList )
      goto LABEL_19;
    if ( v12 >= LODWORD(nextSkillBaseObjectList->max_length) )
LABEL_20:
      sub_2213CE4(v8);
    BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Init(
      (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)((char *)nextSkillBaseObjectList + i),
      v9);
    ++v12;
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
  if ( (byte_596BACF & 1) == 0 )
  {
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_596BACF = 1;
  }
  nextSkillBaseObjectList = v6->fields.nextSkillBaseObjectList;
  if ( !nextSkillBaseObjectList )
    sub_2213CDC(this, color);
  v8 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo,
      color,
      *(_QWORD *)&index);
  if ( LODWORD(nextSkillBaseObjectList->max_length) <= index )
    sub_2213CE4(v8);
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__ModifyColor(
    &nextSkillBaseObjectList->m_Items[index],
    color,
    *(const MethodInfo **)&index);
}


void BattleCharaChangeConfirmListViewItemDrawSkill__RePosition(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *nowSkillBaseObjectList; // x20
  const MethodInfo *v5; // x1

  if ( (byte_596BAD2 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    byte_596BAD2 = 1;
  }
  nowSkillBaseObjectList = this->fields.nowSkillBaseObjectList;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, method, v2);
  BattleCharaChangeConfirmListViewItemDrawSkill___RePosition_g__CalcPosition_14_0(nowSkillBaseObjectList, method);
  BattleCharaChangeConfirmListViewItemDrawSkill___RePosition_g__CalcPosition_14_0(
    this->fields.nextSkillBaseObjectList,
    v5);
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

  if ( (byte_596BAD3 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    byte_596BAD3 = 1;
  }
  nowFrameSprite = this->fields.nowFrameSprite;
  nowSkillBaseObjectList = this->fields.nowSkillBaseObjectList;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, method, v2);
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
    sub_2213CDC(v8, v7);
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


// local variable allocation has failed, the output may be wrong!
void BattleCharaChangeConfirmListViewItemDrawSkill__SetItem(
        BattleCharaChangeConfirmListViewItemDrawSkill_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v6; // x19
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  int32_t DispLimitCount_k__BackingField; // w22
  int32_t SvtId_k__BackingField; // w20
  int32_t LimitCount_k__BackingField; // w21
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x8
  const MethodInfo *v12; // x6
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v13; // x8
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *v14; // x9
  struct SkillInfo_array *SkillInfoArray_k__BackingField; // x24
  struct SkillInfo_array *v16; // x25
  int32_t v17; // w23
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v18; // x0
  const MethodInfo *v19; // x6
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  int32_t i; // w26
  SkillInfo_o *v23; // x8
  SkillInfo_o *v24; // x9
  int32_t id; // w27
  BattleCharaChangeConfirmListViewItemDrawSkill_o *v26; // x28
  ServantSkillAddEntity_o *EnableEntity; // x29
  ServantSkillAddEntity_o *v28; // x0
  ServantSkillAddEntity_o *v29; // x28
  System_Collections_Generic_IEnumerable_TSource__o *skillIds; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x1
  int32_t limitCountAfter; // [xsp+Ch] [xbp-64h]

  v6 = this;
  if ( (byte_596BAD0 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)sub_2213A60(&int___TypeInfo);
    byte_596BAD0 = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode )
  {
    NowData_k__BackingField = item->fields._NowData_k__BackingField;
    if ( !NowData_k__BackingField )
      goto LABEL_37;
    DispLimitCount_k__BackingField = NowData_k__BackingField->fields._DispLimitCount_k__BackingField;
    SvtId_k__BackingField = item->fields._SvtId_k__BackingField;
    LimitCount_k__BackingField = item->fields._LimitCount_k__BackingField;
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, item, *(_QWORD *)&mode);
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
      sub_2213CDC(this, item);
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
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v20);
        this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*((_QWORD *)this + 23) + 40LL) )
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
        sub_2213CE4(this);
      v23 = SkillInfoArray_k__BackingField->m_Items[i];
      if ( !v23 || !v16 )
        goto LABEL_37;
      if ( (unsigned int)i >= LODWORD(v16->max_length) )
        goto LABEL_38;
      v24 = v16->m_Items[i];
      if ( !v24 )
        goto LABEL_37;
      id = v23->fields.id;
      if ( id == v24->fields.id )
        break;
LABEL_33:
      BattleCharaChangeConfirmListViewItemDrawSkill__ModifyColor(v6, v6->fields.modifyColor, i, v21);
LABEL_34:
      ;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v20);
    this = (BattleCharaChangeConfirmListViewItemDrawSkill_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
    if ( !this )
      goto LABEL_37;
    v26 = this;
    EnableEntity = ServantSkillAddMaster__GetEnableEntity(
                     (ServantSkillAddMaster_o *)this,
                     SvtId_k__BackingField,
                     LimitCount_k__BackingField,
                     id,
                     0,
                     limitCountAfter,
                     1,
                     0);
    v28 = ServantSkillAddMaster__GetEnableEntity(
            (ServantSkillAddMaster_o *)v26,
            SvtId_k__BackingField,
            LimitCount_k__BackingField,
            id,
            0,
            v17,
            1,
            0);
    v29 = v28;
    if ( EnableEntity
      && (skillIds = (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.skillIds) != 0 )
    {
      if ( !v28 )
        goto LABEL_31;
    }
    else
    {
      skillIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213B20(int___TypeInfo, 0);
      if ( !v29 )
      {
LABEL_31:
        v31 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213B20(int___TypeInfo, 0);
LABEL_32:
        if ( System_Linq_Enumerable__SequenceEqual_int_(
               skillIds,
               v31,
               (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
        {
          goto LABEL_34;
        }
        goto LABEL_33;
      }
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29->fields.skillIds;
    if ( v31 )
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
  __int64 v13; // x2
  const MethodInfo *v14; // x5
  unsigned __int64 v15; // x26
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *m_Items; // x24
  _DWORD *v17; // x0
  SkillInfo_o *v18; // x25

  if ( (byte_596BAD1 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_596BAD1 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillInfoArray, 0) )
  {
    v15 = 0;
    m_Items = uiObjects->m_Items;
    v17 = BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( !v17[57] )
      {
        j_il2cpp_runtime_class_init_0(v17, v12, v13);
        v17 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v15 >= *(int *)(*((_QWORD *)v17 + 23) + 40LL) )
        break;
      if ( !skillInfoArray )
        goto LABEL_20;
      if ( v15 >= LODWORD(skillInfoArray->max_length) )
        goto LABEL_21;
      v18 = skillInfoArray->m_Items[v15];
      if ( v18 && v18->fields.id >= 1 && v18->fields.lv >= 1 )
      {
        if ( !uiObjects )
LABEL_20:
          sub_2213CDC(v17, v12);
        v17 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo,
            v12,
            v13);
        if ( v15 >= LODWORD(uiObjects->max_length) )
LABEL_21:
          sub_2213CE4(v17);
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Set(
          m_Items,
          svtId,
          limitCount,
          v18,
          limitCountAfter,
          v14);
        v17 = BalanceConfig_TypeInfo;
      }
      ++v15;
      ++m_Items;
    }
  }
}


void BattleCharaChangeConfirmListViewItemDrawSkill___RePosition_g__CalcPosition_14_0(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *uiObjects,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCharaChangeConfirmListViewItemDrawSkill___c_c *v4; // x0
  int v5; // w8
  struct BattleCharaChangeConfirmListViewItemDrawSkill___c_StaticFields *static_fields; // x8
  System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *_9__14_1; // x20
  Il2CppObject *v8; // x21
  struct BattleCharaChangeConfirmListViewItemDrawSkill___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  void *v17; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  __int64 v20; // x8
  unsigned int *v21; // x19
  unsigned __int64 v22; // x23
  char *v23; // x20
  __int128 v24; // q1
  struct UISprite_o *v25; // x9
  __int128 v26; // q1
  struct UISprite_o *v27; // x8
  int v28; // w9
  float LocalPositionY; // s8
  const MethodInfo *v30; // x1
  int32_t v31; // w21
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  unsigned int v34; // w22
  const MethodInfo *v35; // x1
  __int64 v36; // x2
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v37; // x0
  int v38; // w26
  UnityEngine_GameObject_o *baseObject; // x0
  float v40; // s0
  float v41; // s1
  const MethodInfo *v42; // x1
  __int64 v43; // x2
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v44; // x0
  int v45; // w21
  unsigned int v46; // w8
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v47; // [xsp+0h] [xbp-B0h] BYREF
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o self; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_596BAD7 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_2213A60(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__RePosition_b__14_1__);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    byte_596BAD7 = 1;
  }
  v4 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  v5 = *(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->_2.cctor_finished + 1);
  memset(&v47, 0, sizeof(v47));
  memset(&self, 0, sizeof(self));
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo, method, v2);
    v4 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__14_1 = static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__14_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *)sub_2213CCC(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool____ctor(
      _9__14_1,
      v8,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__RePosition_b__14_1__,
      0);
    v9 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields;
    v9->__9__14_1 = _9__14_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__14_1, (int32_t)_9__14_1, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_38A43AC *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  v17 = System_Linq_Enumerable__ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          v16,
          (const MethodInfo_389BE60 *)Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  if ( !v17 )
    sub_2213CDC(0, v18);
  v20 = *((_QWORD *)v17 + 3);
  v21 = (unsigned int *)v17;
  if ( (int)v20 >= 1 )
  {
    v22 = 0;
    v23 = (char *)v17 - 8;
    do
    {
      if ( v22 )
      {
        if ( (int)v22 - 1 >= (unsigned int)v20 )
          goto LABEL_45;
        v24 = *((_OWORD *)v23 + 1);
        v25 = (struct UISprite_o *)*((_QWORD *)v23 + 4);
        *(_OWORD *)&self.fields.baseObject = *(_OWORD *)v23;
        *(_OWORD *)&self.fields.uiObject = v24;
        self.fields.changeBgSprite = v25;
        if ( v22 >= (unsigned int)v20 )
          goto LABEL_45;
        v26 = *(_OWORD *)(v23 + 56);
        v27 = (struct UISprite_o *)*((_QWORD *)v23 + 9);
        v28 = *(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v47.fields.baseObject = *(_OWORD *)(v23 + 40);
        *(_OWORD *)&v47.fields.uiObject = v26;
        v47.fields.changeBgSprite = v27;
        if ( !v28 )
          j_il2cpp_runtime_class_init_0(
            BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo,
            v18,
            v19);
        LocalPositionY = GameObjectExtensions__GetLocalPositionY(self.fields.baseObject, 0);
        v31 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&self, v30);
        v17 = (void *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v47, v32);
        if ( (int)v22 - 1 >= v21[6] )
          goto LABEL_45;
        v34 = (unsigned int)v17;
        if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
                (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v23,
                v33) )
          goto LABEL_26;
        v17 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo,
            v35,
            v36);
        if ( v22 >= v21[6] )
          goto LABEL_45;
        if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
               (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v23 + 1,
               v35) )
        {
          v37 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, v35, v36);
            v37 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          }
          v38 = -v37->static_fields->MultipleOffsetPosY;
        }
        else
        {
LABEL_26:
          v38 = 0;
        }
        if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo,
            v35,
            v36);
        baseObject = v47.fields.baseObject;
        v40 = (float)(LocalPositionY - vcvts_n_f32_s32(v31, 1u)) - vcvts_n_f32_s32(v34, 1u);
        v41 = (float)v38;
      }
      else
      {
        v17 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(
            BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo,
            v18,
            v19);
          LODWORD(v20) = v21[6];
        }
        if ( !(_DWORD)v20 )
          goto LABEL_45;
        if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
               (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)(v21 + 8),
               v18) )
        {
          v44 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, v42, v43);
            v44 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
          }
          v45 = -v44->static_fields->MultipleOffsetPosY;
        }
        else
        {
          v45 = 0;
        }
        v17 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
        if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo,
            v42,
            v43);
        if ( !v21[6]
          || (v17 = (void *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(
                              (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)(v21 + 8),
                              v42),
              !v21[6]) )
        {
LABEL_45:
          sub_2213CE4(v17);
        }
        v46 = -(int)v17;
        v41 = (float)v45;
        baseObject = (UnityEngine_GameObject_o *)*((_QWORD *)v21 + 4);
        v40 = vcvts_n_f32_s32(v46, 1u);
      }
      GameObjectExtensions__SetLocalPositionY(baseObject, v40 + v41, 0);
      LODWORD(v20) = v21[6];
      ++v22;
      v23 += 40;
    }
    while ( (__int64)v22 < (int)v20 );
  }
}


void BattleCharaChangeConfirmListViewItemDrawSkill___ReSize_g__CalcCellHeight_15_0(
        UISprite_o *frame,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_array *uiObjects,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawSkill___c_c *v5; // x0
  int v6; // w8
  struct BattleCharaChangeConfirmListViewItemDrawSkill___c_StaticFields *static_fields; // x8
  System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *_9__15_1; // x21
  Il2CppObject *v9; // x22
  struct BattleCharaChangeConfirmListViewItemDrawSkill___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  struct UISprite_o **v18; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  struct UISprite_o **v21; // x20
  __int128 v22; // q1
  struct UISprite_o *v23; // x8
  int v24; // w9
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  bool v27; // w8
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v28; // x0
  int32_t MultipleOffsetPosY; // w23
  int32_t TitleCellHeight; // w24
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  struct UISprite_o *v33; // x8
  char *v34; // x23
  unsigned __int64 v35; // x24
  __int128 v36; // q1
  struct UISprite_o *v37; // x9
  int v38; // w10
  unsigned __int64 v39; // x24
  const MethodInfo *v40; // x1
  __int64 v41; // x2
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v42; // x0
  int32_t v43; // w25
  int32_t mHeight; // w26
  int32_t v45; // w0
  __int64 v46; // x1
  __int64 v47; // x2
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v48; // x0
  int32_t v49; // w20
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v50; // [xsp+0h] [xbp-B0h] BYREF
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o v51; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_596BAD8 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
    sub_2213A60(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__ReSize_b__15_1__);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    byte_596BAD8 = 1;
  }
  v5 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  v6 = *(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->_2.cctor_finished + 1);
  memset(&v50, 0, sizeof(v50));
  memset(&v51, 0, sizeof(v51));
  if ( !v6 )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo, uiObjects, method);
    v5 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__15_1 = static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, uiObjects, method);
      static_fields = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__15_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__o *)sub_2213CCC(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__bool____ctor(
      _9__15_1,
      v9,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill___c__ReSize_b__15_1__,
      0);
    v10 = BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields;
    v10->__9__15_1 = _9__15_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__15_1, (int32_t)_9__15_1, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
          (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
          (System_Func_TSource__bool__o *)_9__15_1,
          (const MethodInfo_38A43AC *)Method_System_Linq_Enumerable_Where_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  v18 = (struct UISprite_o **)System_Linq_Enumerable__ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_(
                                v17,
                                (const MethodInfo_389BE60 *)Method_System_Linq_Enumerable_ToArray_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___);
  if ( !v18 )
    goto LABEL_50;
  v21 = v18;
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_49;
  v22 = *((_OWORD *)v18 + 3);
  v23 = v18[8];
  *(_OWORD *)&v51.fields.baseObject = *((_OWORD *)v18 + 2);
  v24 = *(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v51.fields.uiObject = v22;
  v51.fields.changeBgSprite = v23;
  if ( !v24 )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v19, v20);
  v27 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(&v51, v19);
  v28 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  if ( v27 )
  {
    if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, v25, v26);
      v28 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
    }
    MultipleOffsetPosY = v28->static_fields->MultipleOffsetPosY;
  }
  else
  {
    MultipleOffsetPosY = 0;
  }
  if ( !*(&v28->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v28, v25, v26);
    v28 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  TitleCellHeight = v28->static_fields->TitleCellHeight;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v25, v26);
  v18 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v51, v25);
  if ( !frame )
LABEL_50:
    sub_2213CDC(v18, v19);
  UIWidget__set_height((UIWidget_o *)frame, TitleCellHeight + MultipleOffsetPosY + (_DWORD)v18, 0);
  v33 = v21[3];
  if ( (int)v33 >= 2 )
  {
    v34 = (char *)(v21 + 9);
    v35 = 1;
    while ( v35 < (unsigned int)v33 )
    {
      v18 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
      v36 = *((_OWORD *)v34 + 1);
      v37 = (struct UISprite_o *)*((_QWORD *)v34 + 4);
      v38 = *(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v50.fields.baseObject = *(_OWORD *)v34;
      *(_OWORD *)&v50.fields.uiObject = v36;
      v50.fields.changeBgSprite = v37;
      if ( !v38 )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v31, v32);
        LODWORD(v33) = *((_DWORD *)v21 + 6);
      }
      v39 = v35 - 1;
      if ( v39 >= (unsigned int)v33 )
        break;
      if ( !BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
              (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)v34 - 1,
              v31) )
        goto LABEL_36;
      if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v40, v41);
      if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(&v50, v40) )
      {
        v42 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
        if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, v40, v41);
          v42 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
        }
        v43 = v42->static_fields->MultipleOffsetPosY;
      }
      else
      {
LABEL_36:
        v43 = 0;
      }
      mHeight = frame->fields.mHeight;
      if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v40, v41);
      v45 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(&v50, v40);
      UIWidget__set_height((UIWidget_o *)frame, mHeight + v43 + v45, 0);
      v33 = v21[3];
      v35 = v39 + 2;
      v34 += 40;
      if ( (__int64)v35 >= (int)v33 )
        goto LABEL_40;
    }
LABEL_49:
    sub_2213CE4(v18);
  }
LABEL_40:
  if ( v33 )
  {
    v18 = (struct UISprite_o **)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v31, v32);
      LODWORD(v33) = *((_DWORD *)v21 + 6);
    }
    if ( !(_DWORD)v33 )
      goto LABEL_49;
    if ( BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
           (BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *)&v21[5 * (int)v33 - 1],
           v31) )
    {
      v48 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
      v49 = frame->fields.mHeight;
      if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, v46, v47);
        v48 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
      }
      UIWidget__set_height((UIWidget_o *)frame, v48->static_fields->MultipleOffsetPosY + v49, 0);
    }
  }
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___cctor(const MethodInfo *method)
{
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_StaticFields *static_fields; // x8

  if ( (byte_596BAE3 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_596BAE3 = 1;
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
  __int64 v4; // x1
  __int64 v5; // x2
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *uiObject; // x20
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_StaticFields *static_fields; // x8
  System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__o *_9__15_0; // x21
  Il2CppObject *v10; // x22
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x2
  BattleCharaChangeConfirmListViewItemDrawSkill_c *v20; // x0
  UISprite_o *changeArrowSprite; // x20
  System_String_o *ArrowChangeSpriteName; // x21

  if ( (byte_596BAE0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__Init_b__15_0__);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    byte_596BAE0 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !this->fields.baseObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0);
  v6 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  uiObject = (System_Collections_Generic_IEnumerable_T__o *)this->fields.uiObject;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo, v4, v5);
    v6 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__15_0 = static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__o *)sub_2213CCC(System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__TypeInfo);
    System_Action_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject____ctor(
      _9__15_0,
      v10,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__Init_b__15_0__,
      0);
    v11 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields;
    v11->__9__15_0 = _9__15_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__15_0, (int32_t)_9__15_0, v12, v13, v14, v15, v16, v17);
  }
  BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_(
    uiObject,
    (System_Action_T__o *)_9__15_0,
    (const MethodInfo_381384C *)Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___);
  baseObject = (UnityEngine_GameObject_o *)this->fields.changeArrowSprite;
  if ( !baseObject )
    goto LABEL_19;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0);
  v20 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  changeArrowSprite = this->fields.changeArrowSprite;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo, v18, v19);
    v20 = BattleCharaChangeConfirmListViewItemDrawSkill_TypeInfo;
  }
  ArrowChangeSpriteName = v20->static_fields->ArrowChangeSpriteName;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18, v19);
  AtlasManager__SetDownloadCommonSprite(changeArrowSprite, ArrowChangeSpriteName, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.changeBgSprite;
  if ( !baseObject
    || (baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0)) == 0 )
  {
LABEL_19:
    sub_2213CDC(baseObject, method);
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

  if ( (byte_596BAE2 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_596BAE2 = 1;
  }
  v5 = 0;
  for ( i = 32; ; i += 24 )
  {
    v7 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo,
        color,
        method);
      v7 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    }
    if ( (__int64)v5 >= v7->static_fields->AddSkillMaxNum )
      break;
    uiObject = this->fields.uiObject;
    if ( !uiObject )
      sub_2213CDC(v7, color);
    if ( v5 >= LODWORD(uiObject->max_length) )
      sub_2213CE4(v7);
    BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__ModifyColor(
      (BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *)((char *)uiObject + i),
      color,
      method);
    ++v5;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__Set(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        int32_t svtId,
        int32_t limitCount,
        SkillInfo_o *skillInfo,
        int32_t limitCountAfter,
        const MethodInfo *method)
{
  int v10; // w8
  Il2CppObject *Master_object; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *EnableEntity; // x0
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  ServantSkillAddEntity_o *v15; // x25
  struct System_Int32_array *skillIds; // x28
  __int64 v17; // x2
  System_Int32_array *EnableDispOnBattleConfirmDialog; // x19
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c **v19; // x27
  int32_t *m_Items; // x21
  unsigned __int64 v21; // x29
  int32_t *v22; // x25
  __int64 v23; // x20
  int32_t v24; // w26
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_array *v25; // x20
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  unsigned __int64 max_length_low; // x8
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c **v29; // x21
  int32_t v30; // w27
  System_String_o *EffectTitle; // x4
  System_String_o *OverwriteSkillName; // x0
  System_String_o *unknownNameText; // x2
  LocalizationManager_c *v34; // x0
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *v35; // x0
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_array *uiObject; // x20
  int32_t id; // w23
  System_String_o *Name; // x4
  const MethodInfo *v39; // x3
  System_Int32_array *v40; // [xsp+8h] [xbp-98h]
  int32_t *v41; // [xsp+10h] [xbp-90h]
  int32_t v42; // [xsp+18h] [xbp-88h]
  ServantLimitAddMaster_o *v43; // [xsp+20h] [xbp-80h]
  __int64 v44; // [xsp+28h] [xbp-78h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_596BAE1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_596BAE1 = 1;
  }
  v10 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillAddMaster___);
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this->fields.baseObject )
    goto LABEL_52;
  v14 = EnableEntity;
  UnityEngine_GameObject__SetActive(this->fields.baseObject, 1, 0);
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  if ( !skillInfo )
    goto LABEL_52;
  v43 = (ServantLimitAddMaster_o *)EnableEntity;
  if ( !Master_object )
    goto LABEL_52;
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
    || (v15 = (ServantSkillAddEntity_o *)EnableEntity,
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
      EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)v43;
      if ( v43 )
      {
        EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitAddMaster__GetOverwriteSkillName(
                                                                       v43,
                                                                       svtId,
                                                                       limitCountAfter,
                                                                       id,
                                                                       Name,
                                                                       0);
        if ( !LODWORD(uiObject->max_length) )
LABEL_53:
          sub_2213CE4(EnableEntity);
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Set(
          uiObject->m_Items,
          id,
          (System_String_o *)EnableEntity,
          v39);
        EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grid;
        if ( EnableEntity )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)EnableEntity, 1, 0);
          return;
        }
      }
    }
LABEL_52:
    sub_2213CDC(EnableEntity, v13);
  }
  skillIds = v15->fields.skillIds;
  v42 = svtId;
  EnableDispOnBattleConfirmDialog = ServantSkillAddEntity__GetEnableDispOnBattleConfirmDialog(v15, 0);
  v19 = &BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
  m_Items = EnableDispOnBattleConfirmDialog->m_Items;
  v21 = 0;
  v22 = skillIds->m_Items;
  v23 = 32;
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
  v40 = EnableDispOnBattleConfirmDialog;
  v41 = EnableDispOnBattleConfirmDialog->m_Items;
  while ( 1 )
  {
    if ( !HIDWORD(EnableEntity[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(EnableEntity, v13, v17);
      EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)*v19;
    }
    if ( (__int64)v21 >= (__int64)EnableEntity[2].fields.list->klass )
      break;
    if ( !skillIds )
      goto LABEL_52;
    if ( v21 >= LODWORD(skillIds->max_length) )
      goto LABEL_53;
    v24 = v22[v21];
    if ( v24 >= 1 )
    {
      if ( !EnableDispOnBattleConfirmDialog )
        goto LABEL_52;
      if ( v21 >= LODWORD(EnableDispOnBattleConfirmDialog->max_length) )
        goto LABEL_53;
      if ( m_Items[v21] >= 1 )
      {
        v44 = v23;
        v25 = this->fields.uiObject;
        if ( !v25 || !v14 )
          goto LABEL_52;
        EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                       v14,
                                                                       &entity,
                                                                       v24,
                                                                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        max_length_low = LODWORD(v25->max_length);
        if ( ((unsigned __int8)EnableEntity & 1) != 0 )
        {
          if ( v21 >= max_length_low || v21 >= LODWORD(skillIds->max_length) )
            goto LABEL_53;
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
          if ( !entity )
            goto LABEL_52;
          v29 = v19;
          v30 = v22[v21];
          EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)entity, 0, 0);
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)v43;
          if ( !v43 )
            goto LABEL_52;
          OverwriteSkillName = ServantLimitAddMaster__GetOverwriteSkillName(
                                 v43,
                                 v42,
                                 limitCountAfter,
                                 v30,
                                 EffectTitle,
                                 0);
          v19 = v29;
          EnableDispOnBattleConfirmDialog = v40;
          m_Items = v41;
          unknownNameText = OverwriteSkillName;
        }
        else
        {
          if ( v21 >= max_length_low )
            goto LABEL_53;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v26);
          if ( !byte_596B976 )
          {
            sub_2213A60(&LocalizationManager_TypeInfo);
            byte_596B976 = 1;
          }
          v34 = LocalizationManager_TypeInfo;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v26);
            v34 = LocalizationManager_TypeInfo;
          }
          unknownNameText = v34->static_fields->unknownNameText;
        }
        v35 = (BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *)((char *)v25 + v44);
        v23 = v44;
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Set(v35, v24, unknownNameText, v27);
        EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)*v19;
        if ( !*(&(*v19)->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EnableEntity, v13, v17);
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)*v19;
        }
        if ( (System_Collections_ObjectModel_ObservableCollection_TEntity__c *)v21 == (System_Collections_ObjectModel_ObservableCollection_TEntity__c *)((char *)&EnableEntity[2].fields.list->klass[-1].vtable._42_OnCollectionChanged.method + 7) )
        {
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeBgSprite;
          if ( !EnableEntity )
            goto LABEL_52;
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)EnableEntity,
                                                                         0);
          if ( !EnableEntity )
            goto LABEL_52;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EnableEntity, 1, 0);
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeArrowSprite;
          if ( !EnableEntity )
            goto LABEL_52;
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)EnableEntity,
                                                                         0);
          if ( !EnableEntity )
            goto LABEL_52;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EnableEntity, 1, 0);
          EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)*v19;
        }
      }
    }
    ++v21;
    v23 += 24;
  }
  EnableEntity = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.grid;
  if ( !EnableEntity )
    goto LABEL_52;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)EnableEntity, 1, 0);
}


int32_t BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_Height(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UISprite_o *changeBgSprite; // x8
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v8; // x0
  int32_t mHeight; // w19
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_c *v11; // x0

  if ( (byte_596BADE & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo);
    byte_596BADE = 1;
  }
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, method, v2);
  v4 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(this, method);
  if ( v4 )
  {
    changeBgSprite = this->fields.changeBgSprite;
    if ( !changeBgSprite )
      sub_2213CDC(v4, v5);
    v8 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    mHeight = changeBgSprite->fields.mHeight;
    if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v5, v6);
      v8 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    }
    return v8->static_fields->ChangeBgSpriteOffset + mHeight;
  }
  else
  {
    v11 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo, v5, v6);
      v11 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_TypeInfo;
    }
    return v11->static_fields->ObjectHeight;
  }
}


bool BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject__get_IsMultiple(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *uiObject; // x19
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_StaticFields *static_fields; // x8
  System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__o *_9__11_0; // x20
  Il2CppObject *v8; // x21
  struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596BADF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___);
    sub_2213A60(&System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__get_IsMultiple_b__11_0__);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    byte_596BADF = 1;
  }
  v4 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  uiObject = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.uiObject;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(
      BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo,
      method,
      v2);
    v4 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__11_0 = static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__o *)sub_2213CCC(System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__bool____ctor(
      _9__11_0,
      v8,
      Method_BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c__get_IsMultiple_b__11_0__,
      0);
    v9 = BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields;
    v9->__9__11_0 = _9__11_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__11_0, (int32_t)_9__11_0, v10, v11, v12, v13, v14, v15);
  }
  return System_Linq_Enumerable__Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_(
           uiObject,
           (System_Func_TSource__bool__o *)_9__11_0,
           (const MethodInfo_387B9F0 *)Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject___) > 1;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BAE4 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
    byte_596BAE4 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject___c_TypeInfo->static_fields,
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
    sub_2213CDC(0, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject__Init(
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillUIObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_596BADB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BADB = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !this->fields.baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.icon) == 0)
    || (SkillIconComponent__Clear((SkillIconComponent_o *)baseObject, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0) )
  {
    sub_2213CDC(baseObject, method);
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
    sub_2213CDC(this, color);
  v4 = System_String__Concat_75651716(color, nameLabel->fields.mText, 0);
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
    sub_2213CDC(baseObject, *(_QWORD *)&skillId);
  }
  UILabel__set_text((UILabel_o *)baseObject, skillName, 0);
}


void BattleCharaChangeConfirmListViewItemDrawSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BAE5 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
    byte_596BAE5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawSkill___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleCharaChangeConfirmListViewItemDrawSkill___c_TypeInfo->static_fields,
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
    sub_2213CDC(0, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0);
}


bool BattleCharaChangeConfirmListViewItemDrawSkill___c___ReSize_b__15_1(
        BattleCharaChangeConfirmListViewItemDrawSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawSkill_SkillBaseObject_o *ui,
        const MethodInfo *method)
{
  if ( !ui->fields.baseObject )
    sub_2213CDC(0, ui);
  return UnityEngine_GameObject__get_activeSelf(ui->fields.baseObject, 0);
}