void BattleCharaChangeConfirmListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  if ( (byte_596BABC & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
    byte_596BABC = 1;
  }
  *BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->static_fields = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill_StaticFields)0x3F80000000000019LL;
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill___ctor(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596BABB & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___TypeInfo);
    byte_596BABB = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *)sub_2213B20(
                                                                                               BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___TypeInfo,
                                                                                               (unsigned int)v4->static_fields->SvtPassiveSkillListMax);
  this->fields.nowClassSkillUIObjectList = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nowClassSkillUIObjectList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *)sub_2213B20(
                                                                                                BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___TypeInfo,
                                                                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  this->fields.nextClassSkillUIObjectList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nextClassSkillUIObjectList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  __int64 v2; // x2
  BattleCharaChangeConfirmListViewItemDrawClassSkill_c *v3; // x0

  if ( (byte_596BABA & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
    byte_596BABA = 1;
  }
  v3 = BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo, method, v2);
    v3 = BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo;
  }
  return v3->static_fields->ArrowOffsetPosY;
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill__Init(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *nowGrid; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *nowTitleLabel; // x20
  UILabel_o *nextTitleLabel; // x20
  __int64 v11; // x2
  __int64 v12; // x20
  unsigned int i; // w23
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *nowClassSkillUIObjectList; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *nextClassSkillUIObjectList; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v16; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v17; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v18; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v19; // x8

  if ( (byte_596BAB6 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12405/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_CLASS_SKILL_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BAB6 = 1;
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12405/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_CLASS_SKILL_TITLE"*/, 0);
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)nowGrid, 0),
        nextTitleLabel = this->fields.nextTitleLabel,
        nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12405/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_CLASS_SKILL_TITLE"*/, 0),
        !nextTitleLabel) )
  {
LABEL_33:
    sub_2213CDC(nowGrid, v5);
  }
  UILabel__set_text(nextTitleLabel, (System_String_o *)nowGrid, 0);
  v12 = 0;
  for ( i = 0; ; ++i )
  {
    nowGrid = (UnityEngine_Behaviour_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v11);
      nowGrid = (UnityEngine_Behaviour_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(nowGrid[7].fields.m_CachedPtr + 40) )
      break;
    nowClassSkillUIObjectList = this->fields.nowClassSkillUIObjectList;
    if ( !nowClassSkillUIObjectList )
      goto LABEL_33;
    if ( i >= LODWORD(nowClassSkillUIObjectList->max_length) )
LABEL_34:
      sub_2213CE4(nowGrid);
    nowGrid = (UnityEngine_Behaviour_o *)nowClassSkillUIObjectList->m_Items[v12].fields.baseObject;
    if ( !nowGrid )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0);
    nextClassSkillUIObjectList = this->fields.nextClassSkillUIObjectList;
    if ( !nextClassSkillUIObjectList )
      goto LABEL_33;
    if ( i >= LODWORD(nextClassSkillUIObjectList->max_length) )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)nextClassSkillUIObjectList->m_Items[v12].fields.baseObject;
    if ( !nowGrid )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0);
    v16 = this->fields.nowClassSkillUIObjectList;
    if ( !v16 )
      goto LABEL_33;
    if ( i >= LODWORD(v16->max_length) )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v16->m_Items[v12].fields.icon;
    if ( !nowGrid )
      goto LABEL_33;
    SkillIconComponent__Clear((SkillIconComponent_o *)nowGrid, 0);
    v17 = this->fields.nextClassSkillUIObjectList;
    if ( !v17 )
      goto LABEL_33;
    if ( i >= LODWORD(v17->max_length) )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v17->m_Items[v12].fields.icon;
    if ( !nowGrid )
      goto LABEL_33;
    SkillIconComponent__Clear((SkillIconComponent_o *)nowGrid, 0);
    v18 = this->fields.nowClassSkillUIObjectList;
    if ( !v18 )
      goto LABEL_33;
    if ( i >= LODWORD(v18->max_length) )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v18->m_Items[v12].fields.nameLabel;
    if ( !nowGrid )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0);
    v19 = this->fields.nextClassSkillUIObjectList;
    if ( !v19 )
      goto LABEL_33;
    if ( i >= LODWORD(v19->max_length) )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v19->m_Items[v12].fields.nameLabel;
    if ( !nowGrid )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0);
    ++v12;
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
    sub_2213CE4(this);
  nameLabel = nextClassSkillUIObjectList->m_Items[index].fields.nameLabel;
  if ( !nameLabel )
LABEL_5:
    sub_2213CDC(this, color);
  v6 = System_String__Concat_75651716(color, nameLabel->fields.mText, 0);
  UILabel__set_text(nameLabel, v6, 0);
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill__ReSize(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  UISprite_o *nowFrameSprite; // x20
  UIGrid_o *nowGrid; // x21
  BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *nowClassSkillUIObjectList; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  struct UISprite_o *nextFrameSprite; // x8
  int32_t mHeight; // w9
  int32_t v13; // w1

  if ( (byte_596BAB9 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
    byte_596BAB9 = 1;
  }
  nowFrameSprite = this->fields.nowFrameSprite;
  nowGrid = this->fields.nowGrid;
  nowClassSkillUIObjectList = this->fields.nowClassSkillUIObjectList;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo, method, v2);
  BattleCharaChangeConfirmListViewItemDrawClassSkill___ReSize_g__CalcCellHeight_12_0(
    nowFrameSprite,
    nowGrid,
    nowClassSkillUIObjectList,
    v3);
  BattleCharaChangeConfirmListViewItemDrawClassSkill___ReSize_g__CalcCellHeight_12_0(
    this->fields.nextFrameSprite,
    this->fields.nextGrid,
    this->fields.nextClassSkillUIObjectList,
    v8);
  v10 = (UIWidget_o *)this->fields.nowFrameSprite;
  if ( !v10 || (nextFrameSprite = this->fields.nextFrameSprite) == 0 )
    sub_2213CDC(v10, v9);
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
  __int64 v13; // x2
  unsigned __int64 i; // x22
  const MethodInfo *v15; // x3

  v6 = this;
  if ( (byte_596BAB7 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    this = (BattleCharaChangeConfirmListViewItemDrawClassSkill_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_596BAB7 = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode )
  {
    NowData_k__BackingField = item->fields._NowData_k__BackingField;
    if ( !NowData_k__BackingField || (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0 )
LABEL_18:
      sub_2213CDC(this, item);
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
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v13);
        this = (BattleCharaChangeConfirmListViewItemDrawClassSkill_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= *(int *)(*((_QWORD *)this + 23) + 44LL) )
        break;
      if ( !v10 )
        goto LABEL_18;
      if ( i >= LODWORD(v10->max_length) )
        sub_2213CE4(this);
      if ( !System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)ClassPassiveSkillArray_k__BackingField,
              v10->m_Items[i],
              (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
        BattleCharaChangeConfirmListViewItemDrawClassSkill__ModifyColor(v6, v6->fields.modifyColor, i, v15);
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
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_StaticFields *static_fields; // x8
  System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__o *_9__11_0; // x21
  Il2CppObject *v9; // x22
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Master_object; // x21
  unsigned __int64 v22; // x25
  struct UILabel_o **i; // x27
  UnityEngine_GameObject_o *Name; // x0
  UILabel_o *v25; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596BAB8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__SetUI_b__11_0__);
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
    byte_596BAB8 = 1;
  }
  v6 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  entity = 0;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(
      BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo,
      classSkillIds,
      uiObjects);
    v6 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__11_0 = static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, classSkillIds, uiObjects);
      static_fields = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__o *)sub_2213CCC(System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__TypeInfo);
    System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject____ctor(
      _9__11_0,
      v9,
      Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__SetUI_b__11_0__,
      0);
    v10 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields;
    v10->__9__11_0 = _9__11_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__11_0, (int32_t)_9__11_0, v11, v12, v13, v14, v15, v16);
  }
  BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_(
    (System_Collections_Generic_IEnumerable_T__o *)uiObjects,
    (System_Action_T__o *)_9__11_0,
    (const MethodInfo_3813554 *)Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)classSkillIds, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
    v22 = 0;
    for ( i = &uiObjects->m_Items[0].fields.nameLabel; ; i += 3 )
    {
      Name = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19, v20);
        Name = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v22 >= *(int *)(Name[7].fields.m_CachedPtr + 44) )
        break;
      if ( !classSkillIds )
        goto LABEL_34;
      if ( v22 >= LODWORD(classSkillIds->max_length) )
        goto LABEL_35;
      if ( !Master_object )
        goto LABEL_34;
      Name = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &entity,
                                           classSkillIds->m_Items[v22],
                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Name & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_34;
        if ( SLODWORD(entity[1].klass) >= 1 )
        {
          if ( !uiObjects )
            goto LABEL_34;
          if ( v22 >= LODWORD(uiObjects->max_length) )
            goto LABEL_35;
          Name = (UnityEngine_GameObject_o *)*(i - 2);
          if ( !Name )
            goto LABEL_34;
          UnityEngine_GameObject__SetActive(Name, 1, 0);
          if ( v22 >= LODWORD(uiObjects->max_length) )
LABEL_35:
            sub_2213CE4(Name);
          if ( !entity )
            goto LABEL_34;
          Name = (UnityEngine_GameObject_o *)*(i - 1);
          if ( !Name )
            goto LABEL_34;
          SkillIconComponent__Set((SkillIconComponent_o *)Name, (int32_t)entity[1].klass, 0);
          if ( v22 >= LODWORD(uiObjects->max_length) )
            goto LABEL_35;
          Name = (UnityEngine_GameObject_o *)entity;
          if ( !entity
            || (v25 = *i, Name = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0), !v25) )
          {
LABEL_34:
            sub_2213CDC(Name, v19);
          }
          UILabel__set_text(v25, (System_String_o *)Name, 0);
        }
      }
      ++v22;
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
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_StaticFields *static_fields; // x8
  System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__o *_9__12_1; // x21
  Il2CppObject *v11; // x22
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x2
  int v20; // w20
  int v21; // w9

  v6 = (UIWidget_o *)frame;
  if ( (byte_596BABD & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___);
    sub_2213A60(&System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__TypeInfo);
    sub_2213A60(&Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__ReSize_b__12_1__);
    frame = (UISprite_o *)sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
    byte_596BABD = 1;
  }
  if ( !grid )
    goto LABEL_16;
  cellHeight = grid->fields.cellHeight;
  v8 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo, grid, uiObjects);
    v8 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__12_1 = static_fields->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, grid, uiObjects);
      static_fields = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__12_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__o *)sub_2213CCC(System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool____ctor(
      _9__12_1,
      v11,
      Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__ReSize_b__12_1__,
      0);
    v12 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields;
    v12->__9__12_1 = _9__12_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__12_1, (int32_t)_9__12_1, v13, v14, v15, v16, v17, v18);
  }
  frame = (UISprite_o *)System_Linq_Enumerable__Count_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
                          (System_Func_TSource__bool__o *)_9__12_1,
                          (const MethodInfo_387B6A8 *)Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___);
  v20 = (int)frame;
  if ( !*(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo, grid, v19);
  if ( !v6 )
LABEL_16:
    sub_2213CDC(frame, grid);
  v21 = (int)cellHeight;
  if ( cellHeight == INFINITY )
    v21 = 0x80000000;
  UIWidget__set_height(
    v6,
    BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->static_fields->TitleCellHeight + v20 * v21,
    0);
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BAC0 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
    byte_596BAC0 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(0, uiObj);
  return UnityEngine_GameObject__get_activeSelf(uiObj->fields.baseObject, 0);
}


void BattleCharaChangeConfirmListViewItemDrawClassSkill___c___SetUI_b__11_0(
        BattleCharaChangeConfirmListViewItemDrawClassSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj->fields.baseObject )
    sub_2213CDC(0, obj);
  UnityEngine_GameObject__SetActive(obj->fields.baseObject, 0, 0);
}