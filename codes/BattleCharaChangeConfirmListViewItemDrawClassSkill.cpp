void BattleCharaChangeConfirmListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  if ( (byte_4C3E242 & 1) == 0 )
  {
    sub_1C37058(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
    byte_4C3E242 = 1;
  }
  *BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->static_fields = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill_StaticFields)0x3F80000000000019LL;
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill___ctor(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3E241 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___TypeInfo);
    byte_4C3E241 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *)sub_1C37100(
                                                                                               BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___TypeInfo,
                                                                                               (unsigned int)v3->static_fields->SvtPassiveSkillListMax);
  this->fields.nowClassSkillUIObjectList = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nowClassSkillUIObjectList, (int32_t)v4, v5, v6);
  v7 = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *)sub_1C37100(
                                                                                               BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___TypeInfo,
                                                                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  this->fields.nextClassSkillUIObjectList = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nextClassSkillUIObjectList, (int32_t)v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill__Awake(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  ;
}


float BattleCharaChangeConfirmListViewItemDrawClassSkill__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawClassSkill_c *v2; // x0

  if ( (byte_4C3E240 & 1) == 0 )
  {
    sub_1C37058(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
    byte_4C3E240 = 1;
  }
  v2 = BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
    v2 = BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo;
  }
  return v2->static_fields->ArrowOffsetPosY;
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill__Init(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *nowGrid; // x0
  UILabel_o *nowTitleLabel; // x20
  UILabel_o *nextTitleLabel; // x20
  unsigned int i; // w20
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *nowClassSkillUIObjectList; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *nextClassSkillUIObjectList; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v11; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v12; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v13; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v14; // x8

  if ( (byte_4C3E23C & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11894/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_CLASS_SKILL_TITLE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E23C = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, method);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowGrid;
  if ( !nowGrid )
    goto LABEL_33;
  UnityEngine_Behaviour__set_enabled(nowGrid, 1, 0);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextGrid;
  if ( !nowGrid )
    goto LABEL_33;
  UnityEngine_Behaviour__set_enabled(nowGrid, 1, 0);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_CLASS_SKILL_TITLE"*/, 0);
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)nowGrid, 0),
        nextTitleLabel = this->fields.nextTitleLabel,
        nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_CLASS_SKILL_TITLE"*/, 0),
        !nextTitleLabel) )
  {
LABEL_33:
    sub_1C372B4(nowGrid);
  }
  UILabel__set_text(nextTitleLabel, (System_String_o *)nowGrid, 0);
  for ( i = 0; ; ++i )
  {
    nowGrid = (UnityEngine_Behaviour_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      nowGrid = (UnityEngine_Behaviour_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(nowGrid[7].fields.m_CachedPtr + 40) )
      break;
    nowClassSkillUIObjectList = this->fields.nowClassSkillUIObjectList;
    if ( !nowClassSkillUIObjectList )
      goto LABEL_33;
    if ( i >= LODWORD(nowClassSkillUIObjectList->max_length) )
LABEL_34:
      sub_1C372BC(nowGrid);
    nowGrid = (UnityEngine_Behaviour_o *)nowClassSkillUIObjectList->m_Items[i].fields.baseObject;
    if ( !nowGrid )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0);
    nextClassSkillUIObjectList = this->fields.nextClassSkillUIObjectList;
    if ( !nextClassSkillUIObjectList )
      goto LABEL_33;
    if ( i >= LODWORD(nextClassSkillUIObjectList->max_length) )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)nextClassSkillUIObjectList->m_Items[i].fields.baseObject;
    if ( !nowGrid )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0);
    v11 = this->fields.nowClassSkillUIObjectList;
    if ( !v11 )
      goto LABEL_33;
    if ( i >= LODWORD(v11->max_length) )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v11->m_Items[i].fields.icon;
    if ( !nowGrid )
      goto LABEL_33;
    SkillIconComponent__Clear((SkillIconComponent_o *)nowGrid, 0);
    v12 = this->fields.nextClassSkillUIObjectList;
    if ( !v12 )
      goto LABEL_33;
    if ( i >= LODWORD(v12->max_length) )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v12->m_Items[i].fields.icon;
    if ( !nowGrid )
      goto LABEL_33;
    SkillIconComponent__Clear((SkillIconComponent_o *)nowGrid, 0);
    v13 = this->fields.nowClassSkillUIObjectList;
    if ( !v13 )
      goto LABEL_33;
    if ( i >= LODWORD(v13->max_length) )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v13->m_Items[i].fields.nameLabel;
    if ( !nowGrid )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0);
    v14 = this->fields.nextClassSkillUIObjectList;
    if ( !v14 )
      goto LABEL_33;
    if ( i >= LODWORD(v14->max_length) )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v14->m_Items[i].fields.nameLabel;
    if ( !nowGrid )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill__ModifyColor(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        System_String_o *color,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *nextClassSkillUIObjectList; // x8
  UILabel_o *nameLabel; // x19
  System_String_o *v6; // x1

  nextClassSkillUIObjectList = this->fields.nextClassSkillUIObjectList;
  if ( !nextClassSkillUIObjectList )
    goto LABEL_5;
  if ( LODWORD(nextClassSkillUIObjectList->max_length) <= index )
    sub_1C372BC(this);
  nameLabel = nextClassSkillUIObjectList->m_Items[index].fields.nameLabel;
  if ( !nameLabel )
LABEL_5:
    sub_1C372B4(this);
  v6 = System_String__Concat_63561656(color, nameLabel->fields.mText, 0);
  UILabel__set_text(nameLabel, v6, 0);
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill__ReSize(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UISprite_o *nowFrameSprite; // x22
  UIGrid_o *nowGrid; // x20
  BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *nowClassSkillUIObjectList; // x21
  const MethodInfo *v7; // x3
  UIWidget_o *v8; // x0
  struct UISprite_o *nextFrameSprite; // x8
  int32_t mHeight; // w9
  int32_t v11; // w1

  if ( (byte_4C3E23F & 1) == 0 )
  {
    sub_1C37058(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
    byte_4C3E23F = 1;
  }
  nowFrameSprite = this->fields.nowFrameSprite;
  nowGrid = this->fields.nowGrid;
  nowClassSkillUIObjectList = this->fields.nowClassSkillUIObjectList;
  if ( !BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
  BattleCharaChangeConfirmListViewItemDrawClassSkill___ReSize_g__CalcCellHeight_12_0(
    nowFrameSprite,
    nowGrid,
    nowClassSkillUIObjectList,
    v2);
  BattleCharaChangeConfirmListViewItemDrawClassSkill___ReSize_g__CalcCellHeight_12_0(
    this->fields.nextFrameSprite,
    this->fields.nextGrid,
    this->fields.nextClassSkillUIObjectList,
    v7);
  v8 = (UIWidget_o *)this->fields.nowFrameSprite;
  if ( !v8 || (nextFrameSprite = this->fields.nextFrameSprite) == 0 )
    sub_1C372B4(v8);
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


void BattleCharaChangeConfirmListViewItemDrawClassSkill__SetItem(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawClassSkill_o *v6; // x19
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x9
  System_Int32_array *ClassPassiveSkillArray_k__BackingField; // x20
  struct System_Int32_array *v10; // x21
  BattleCharaChangeConfirmListViewItemDrawClassSkill_o *v11; // x0
  const MethodInfo *v12; // x3
  unsigned __int64 i; // x22
  const MethodInfo *v14; // x3

  v6 = this;
  if ( (byte_4C3E23D & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    this = (BattleCharaChangeConfirmListViewItemDrawClassSkill_o *)sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C3E23D = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode )
  {
    NowData_k__BackingField = item->fields._NowData_k__BackingField;
    if ( !NowData_k__BackingField || (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0 )
LABEL_18:
      sub_1C372B4(this);
    ClassPassiveSkillArray_k__BackingField = NowData_k__BackingField->fields._ClassPassiveSkillArray_k__BackingField;
    v10 = NextData_k__BackingField->fields._ClassPassiveSkillArray_k__BackingField;
    BattleCharaChangeConfirmListViewItemDrawClassSkill__SetUI(
      this,
      ClassPassiveSkillArray_k__BackingField,
      v6->fields.nowClassSkillUIObjectList,
      method);
    BattleCharaChangeConfirmListViewItemDrawClassSkill__SetUI(v11, v10, v6->fields.nextClassSkillUIObjectList, v12);
    for ( i = 0; ; ++i )
    {
      this = (BattleCharaChangeConfirmListViewItemDrawClassSkill_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BattleCharaChangeConfirmListViewItemDrawClassSkill_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= SHIDWORD(this[1].fields.arrowSprite->fields.rightAnchor) )
        break;
      if ( !v10 )
        goto LABEL_18;
      if ( i >= LODWORD(v10->max_length) )
        sub_1C372BC(this);
      if ( !System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)ClassPassiveSkillArray_k__BackingField,
              v10->m_Items[i],
              (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
        BattleCharaChangeConfirmListViewItemDrawClassSkill__ModifyColor(v6, v6->fields.modifyColor, i, v14);
    }
    ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawClassSkill_o *, const MethodInfo *))v6->klass->vtable._6_ReSize.methodPtr)(
      v6,
      v6->klass->vtable._6_ReSize.method);
    ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawClassSkill_o *, const MethodInfo *))v6->klass->vtable._7_RePosition.methodPtr)(
      v6,
      v6->klass->vtable._7_RePosition.method);
  }
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill__SetUI(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        System_Int32_array *classSkillIds,
        BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *uiObjects,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawClassSkill___c_c *v6; // x0
  System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__o *_9__11_0; // x21
  Il2CppObject *v8; // x22
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Master_object; // x21
  unsigned __int64 v13; // x25
  struct UILabel_o **i; // x27
  UnityEngine_GameObject_o *Name; // x0
  UILabel_o *v16; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3E23E & 1) == 0 )
  {
    sub_1C37058(&System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__SetUI_b__11_0__);
    sub_1C37058(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
    byte_4C3E23E = 1;
  }
  v6 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  entity = 0;
  if ( !BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
    v6 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  }
  _9__11_0 = v6->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__11_0 = (System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__o *)sub_1C372A4(System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__TypeInfo);
    System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject____ctor(
      _9__11_0,
      v8,
      Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__SetUI_b__11_0__,
      0);
    static_fields = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = _9__11_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v10, v11);
  }
  BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_(
    (System_Collections_Generic_IEnumerable_T__o *)uiObjects,
    (System_Action_T__o *)_9__11_0,
    (const MethodInfo_30D49E8 *)Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)classSkillIds, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
    v13 = 0;
    for ( i = &uiObjects->m_Items[0].fields.nameLabel; ; i += 3 )
    {
      Name = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Name = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v13 >= *(int *)(Name[7].fields.m_CachedPtr + 44) )
        break;
      if ( !classSkillIds )
        goto LABEL_34;
      if ( v13 >= LODWORD(classSkillIds->max_length) )
        goto LABEL_35;
      if ( !Master_object )
        goto LABEL_34;
      Name = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &entity,
                                           classSkillIds->m_Items[v13],
                                           (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Name & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_34;
        if ( SLODWORD(entity[1].klass) >= 1 )
        {
          if ( !uiObjects )
            goto LABEL_34;
          if ( v13 >= LODWORD(uiObjects->max_length) )
            goto LABEL_35;
          Name = (UnityEngine_GameObject_o *)*(i - 2);
          if ( !Name )
            goto LABEL_34;
          UnityEngine_GameObject__SetActive(Name, 1, 0);
          if ( v13 >= LODWORD(uiObjects->max_length) )
LABEL_35:
            sub_1C372BC(Name);
          if ( !entity )
            goto LABEL_34;
          Name = (UnityEngine_GameObject_o *)*(i - 1);
          if ( !Name )
            goto LABEL_34;
          SkillIconComponent__Set((SkillIconComponent_o *)Name, (int32_t)entity[1].klass, 0);
          if ( v13 >= LODWORD(uiObjects->max_length) )
            goto LABEL_35;
          Name = (UnityEngine_GameObject_o *)entity;
          if ( !entity
            || (v16 = *i, Name = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0), !v16) )
          {
LABEL_34:
            sub_1C372B4(Name);
          }
          UILabel__set_text(v16, (System_String_o *)Name, 0);
        }
      }
      ++v13;
    }
  }
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill___ReSize_g__CalcCellHeight_12_0(
        UISprite_o *frame,
        UIGrid_o *grid,
        BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *uiObjects,
        const MethodInfo *method)
{
  UIWidget_o *v6; // x19
  float cellHeight; // s8
  BattleCharaChangeConfirmListViewItemDrawClassSkill___c_c *v8; // x0
  System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__o *_9__12_1; // x21
  Il2CppObject *v10; // x22
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int v14; // w20
  int v15; // w9

  v6 = (UIWidget_o *)frame;
  if ( (byte_4C3E243 & 1) == 0 )
  {
    sub_1C37058(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___);
    sub_1C37058(&System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__TypeInfo);
    sub_1C37058(&Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__ReSize_b__12_1__);
    frame = (UISprite_o *)sub_1C37058(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
    byte_4C3E243 = 1;
  }
  if ( !grid )
    goto LABEL_17;
  cellHeight = grid->fields.cellHeight;
  v8 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
    v8 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  }
  _9__12_1 = v8->static_fields->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__12_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__o *)sub_1C372A4(System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool____ctor(
      _9__12_1,
      v10,
      Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__ReSize_b__12_1__,
      0);
    static_fields = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields;
    static_fields->__9__12_1 = _9__12_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__12_1, (int32_t)_9__12_1, v12, v13);
  }
  frame = (UISprite_o *)System_Linq_Enumerable__Count_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
                          (System_Func_TSource__bool__o *)_9__12_1,
                          (const MethodInfo_310A044 *)Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___);
  v14 = (int)frame;
  if ( !BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
  if ( !v6 )
LABEL_17:
    sub_1C372B4(frame);
  if ( cellHeight == INFINITY )
    v15 = 0x80000000;
  else
    v15 = (int)cellHeight;
  UIWidget__set_height(
    v6,
    BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->static_fields->TitleCellHeight + v14 * v15,
    0);
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3E244 & 1) == 0 )
  {
    sub_1C37058(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
    byte_4C3E244 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill___c___ctor(
        BattleCharaChangeConfirmListViewItemDrawClassSkill___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleCharaChangeConfirmListViewItemDrawClassSkill___c___ReSize_b__12_1(
        BattleCharaChangeConfirmListViewItemDrawClassSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_o *uiObj,
        const MethodInfo *method)
{
  if ( !uiObj->fields.baseObject )
    sub_1C372B4(0);
  return UnityEngine_GameObject__get_activeSelf(uiObj->fields.baseObject, 0);
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill___c___SetUI_b__11_0(
        BattleCharaChangeConfirmListViewItemDrawClassSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj->fields.baseObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(obj->fields.baseObject, 0, 0);
}