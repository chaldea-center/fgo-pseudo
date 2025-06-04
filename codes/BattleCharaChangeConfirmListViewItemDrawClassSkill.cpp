void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFD6EE & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo, v1);
    byte_4AFD6EE = 1;
  }
  *BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->static_fields = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill_StaticFields)0x3F80000000000019LL;
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill___ctor(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4AFD6ED & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___TypeInfo, v3);
    byte_4AFD6ED = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *)sub_1BC30B0(
                                                                                               BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___TypeInfo,
                                                                                               (unsigned int)v4->static_fields->SvtPassiveSkillListMax);
  this->fields.nowClassSkillUIObjectList = v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.nowClassSkillUIObjectList, (int32_t)v5, v6, v7);
  v8 = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *)sub_1BC30B0(
                                                                                               BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___TypeInfo,
                                                                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  this->fields.nextClassSkillUIObjectList = v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.nextClassSkillUIObjectList, (int32_t)v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill__Awake(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  ;
}


float __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawClassSkill_c *v2; // x0

  if ( (byte_4AFD6EC & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo, method);
    byte_4AFD6EC = 1;
  }
  v2 = BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
    v2 = BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo;
  }
  return v2->static_fields->ArrowOffsetPosY;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill__Init(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Behaviour_o *nowGrid; // x0
  UILabel_o *nowTitleLabel; // x20
  UILabel_o *nextTitleLabel; // x20
  __int64 v12; // x2
  il2cpp_array_size_t i; // w20
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *nowClassSkillUIObjectList; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *nextClassSkillUIObjectList; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v16; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v17; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v18; // x8
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *v19; // x8

  if ( (byte_4AFD6E8 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_11778/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_CLASS_SKILL_TITLE"*/, v6);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4AFD6E8 = 1;
  }
  BattleCharaChangeConfirmListViewItemDraw__Init((BattleCharaChangeConfirmListViewItemDraw_o *)this, kind, method);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nowGrid;
  if ( !nowGrid )
    goto LABEL_33;
  UnityEngine_Behaviour__set_enabled(nowGrid, 1, 0LL);
  nowGrid = (UnityEngine_Behaviour_o *)this->fields.nextGrid;
  if ( !nowGrid )
    goto LABEL_33;
  UnityEngine_Behaviour__set_enabled(nowGrid, 1, 0LL);
  nowTitleLabel = this->fields.nowTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11778/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_CLASS_SKILL_TITLE"*/, 0LL);
  if ( !nowTitleLabel
    || (UILabel__set_text(nowTitleLabel, (System_String_o *)nowGrid, 0LL),
        nextTitleLabel = this->fields.nextTitleLabel,
        nowGrid = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11778/*"SERVANT_STATUS_BATTLE_CHANGE_CONFIRM_CLASS_SKILL_TITLE"*/, 0LL),
        !nextTitleLabel) )
  {
LABEL_33:
    sub_1BC3264(nowGrid, v8);
  }
  UILabel__set_text(nextTitleLabel, (System_String_o *)nowGrid, 0LL);
  for ( i = 0; ; ++i )
  {
    nowGrid = (UnityEngine_Behaviour_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      nowGrid = (UnityEngine_Behaviour_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)&nowGrid[7].fields.m_CachedPtr + 40LL) )
      break;
    nowClassSkillUIObjectList = this->fields.nowClassSkillUIObjectList;
    if ( !nowClassSkillUIObjectList )
      goto LABEL_33;
    if ( i >= nowClassSkillUIObjectList->max_length )
LABEL_34:
      sub_1BC326C(nowGrid, v8, v12);
    nowGrid = (UnityEngine_Behaviour_o *)nowClassSkillUIObjectList->m_Items[i].fields.baseObject;
    if ( !nowGrid )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0LL);
    nextClassSkillUIObjectList = this->fields.nextClassSkillUIObjectList;
    if ( !nextClassSkillUIObjectList )
      goto LABEL_33;
    if ( i >= nextClassSkillUIObjectList->max_length )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)nextClassSkillUIObjectList->m_Items[i].fields.baseObject;
    if ( !nowGrid )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowGrid, 0, 0LL);
    v16 = this->fields.nowClassSkillUIObjectList;
    if ( !v16 )
      goto LABEL_33;
    if ( i >= v16->max_length )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v16->m_Items[i].fields.icon;
    if ( !nowGrid )
      goto LABEL_33;
    SkillIconComponent__Clear((SkillIconComponent_o *)nowGrid, 0LL);
    v17 = this->fields.nextClassSkillUIObjectList;
    if ( !v17 )
      goto LABEL_33;
    if ( i >= v17->max_length )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v17->m_Items[i].fields.icon;
    if ( !nowGrid )
      goto LABEL_33;
    SkillIconComponent__Clear((SkillIconComponent_o *)nowGrid, 0LL);
    v18 = this->fields.nowClassSkillUIObjectList;
    if ( !v18 )
      goto LABEL_33;
    if ( i >= v18->max_length )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v18->m_Items[i].fields.nameLabel;
    if ( !nowGrid )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v19 = this->fields.nextClassSkillUIObjectList;
    if ( !v19 )
      goto LABEL_33;
    if ( i >= v19->max_length )
      goto LABEL_34;
    nowGrid = (UnityEngine_Behaviour_o *)v19->m_Items[i].fields.nameLabel;
    if ( !nowGrid )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)nowGrid, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill__ModifyColor(
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
  if ( nextClassSkillUIObjectList->max_length <= index )
    sub_1BC326C(this, color, *(_QWORD *)&index);
  nameLabel = nextClassSkillUIObjectList->m_Items[index].fields.nameLabel;
  if ( !nameLabel )
LABEL_5:
    sub_1BC3264(this, color);
  v6 = System_String__Concat_62348648(color, nameLabel->fields.mText, 0LL);
  UILabel__set_text(nameLabel, v6, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill__ReSize(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UISprite_o *nowFrameSprite; // x22
  UIGrid_o *nowGrid; // x20
  BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *nowClassSkillUIObjectList; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  UIWidget_o *v9; // x0
  struct UISprite_o *nextFrameSprite; // x8
  int32_t mHeight; // w9
  int32_t v12; // w1

  if ( (byte_4AFD6EB & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo, method);
    byte_4AFD6EB = 1;
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
  v9 = (UIWidget_o *)this->fields.nowFrameSprite;
  if ( !v9 || (nextFrameSprite = this->fields.nextFrameSprite) == 0LL )
    sub_1BC3264(v9, v8);
  mHeight = v9->fields.mHeight;
  v12 = nextFrameSprite->fields.mHeight;
  if ( mHeight <= v12 )
  {
    if ( mHeight >= v12 )
      return;
  }
  else
  {
    v9 = (UIWidget_o *)this->fields.nextFrameSprite;
    v12 = mHeight;
  }
  UIWidget__set_height(v9, v12, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill__SetItem(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BattleCharaChangeConfirmListViewItemDrawClassSkill_o *v6; // x19
  __int64 v7; // x1
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NowData_k__BackingField; // x8
  struct BattleCharaChangeConfirmListViewItem_DispLimitCountData_o *NextData_k__BackingField; // x9
  System_Int32_array *ClassPassiveSkillArray_k__BackingField; // x20
  System_Int32_array *v11; // x21
  BattleCharaChangeConfirmListViewItemDrawClassSkill_o *v12; // x0
  const MethodInfo *v13; // x3
  __int64 v14; // x2
  unsigned __int64 i; // x22
  const MethodInfo *v16; // x3

  v6 = this;
  if ( (byte_4AFD6E9 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, item);
    this = (BattleCharaChangeConfirmListViewItemDrawClassSkill_o *)sub_1BC3008(
                                                                     &Method_System_Linq_Enumerable_Contains_int___,
                                                                     v7);
    byte_4AFD6E9 = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode )
  {
    NowData_k__BackingField = item->fields._NowData_k__BackingField;
    if ( !NowData_k__BackingField || (NextData_k__BackingField = item->fields._NextData_k__BackingField) == 0LL )
LABEL_18:
      sub_1BC3264(this, item);
    ClassPassiveSkillArray_k__BackingField = NowData_k__BackingField->fields._ClassPassiveSkillArray_k__BackingField;
    v11 = NextData_k__BackingField->fields._ClassPassiveSkillArray_k__BackingField;
    BattleCharaChangeConfirmListViewItemDrawClassSkill__SetUI(
      this,
      ClassPassiveSkillArray_k__BackingField,
      v6->fields.nowClassSkillUIObjectList,
      method);
    BattleCharaChangeConfirmListViewItemDrawClassSkill__SetUI(v12, v11, v6->fields.nextClassSkillUIObjectList, v13);
    for ( i = 0LL; ; ++i )
    {
      this = (BattleCharaChangeConfirmListViewItemDrawClassSkill_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BattleCharaChangeConfirmListViewItemDrawClassSkill_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)i >= SHIDWORD(this[1].fields.arrowSprite->fields.rightAnchor) )
        break;
      if ( !v11 )
        goto LABEL_18;
      if ( i >= v11->max_length )
        sub_1BC326C(this, item, v14);
      if ( !System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)ClassPassiveSkillArray_k__BackingField,
              v11->m_Items[i + 1],
              (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___) )
        BattleCharaChangeConfirmListViewItemDrawClassSkill__ModifyColor(v6, v6->fields.modifyColor, i, v16);
    }
    ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawClassSkill_o *, Il2CppMethodPointer))v6->klass->vtable._6_ReSize.method)(
      v6,
      v6->klass->vtable._7_RePosition.methodPtr);
    ((void (__fastcall *)(BattleCharaChangeConfirmListViewItemDrawClassSkill_o *, Il2CppMethodPointer))v6->klass->vtable._7_RePosition.method)(
      v6,
      v6->klass->vtable._8_GetArrowOffsetY.methodPtr);
  }
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill__SetUI(
        BattleCharaChangeConfirmListViewItemDrawClassSkill_o *this,
        System_Int32_array *classSkillIds,
        BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *uiObjects,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleCharaChangeConfirmListViewItemDrawClassSkill___c_c *v13; // x0
  System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__o *_9__11_0; // x21
  Il2CppObject *v15; // x22
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Master_object; // x21
  unsigned __int64 v22; // x25
  struct UILabel_o **i; // x27
  UnityEngine_GameObject_o *Name; // x0
  UILabel_o *v25; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AFD6EA & 1) == 0 )
  {
    sub_1BC3008(
      &System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__TypeInfo,
      classSkillIds);
    sub_1BC3008(&BalanceConfig_TypeInfo, v6);
    sub_1BC3008(
      &Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___,
      v7);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__SetUI_b__11_0__, v11);
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo, v12);
    byte_4AFD6EA = 1;
  }
  v13 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  entity = 0LL;
  if ( !BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
    v13 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  }
  _9__11_0 = v13->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__11_0 = (System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__o *)sub_1BC3254(System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__TypeInfo);
    System_Action_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject____ctor(
      _9__11_0,
      v15,
      Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__SetUI_b__11_0__,
      0LL);
    static_fields = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = _9__11_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v17, v18);
  }
  BasicHelper__ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_(
    (System_Collections_Generic_IEnumerable_T__o *)uiObjects,
    (System_Action_T__o *)_9__11_0,
    (const MethodInfo_2FEECCC *)Method_BasicHelper_ForEach_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)classSkillIds, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillMaster___);
    v22 = 0LL;
    for ( i = &uiObjects->m_Items[0].fields.nameLabel; ; i += 3 )
    {
      Name = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Name = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v22 >= *(int *)(*(_QWORD *)&Name[7].fields.m_CachedPtr + 44LL) )
        break;
      if ( !classSkillIds )
        goto LABEL_34;
      if ( v22 >= classSkillIds->max_length )
        goto LABEL_35;
      if ( !Master_object )
        goto LABEL_34;
      Name = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &entity,
                                           classSkillIds->m_Items[v22 + 1],
                                           (const MethodInfo_32AF0BC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Name & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_34;
        if ( SLODWORD(entity[1].klass) >= 1 )
        {
          if ( !uiObjects )
            goto LABEL_34;
          if ( v22 >= uiObjects->max_length )
            goto LABEL_35;
          Name = (UnityEngine_GameObject_o *)*(i - 2);
          if ( !Name )
            goto LABEL_34;
          UnityEngine_GameObject__SetActive(Name, 1, 0LL);
          if ( v22 >= uiObjects->max_length )
LABEL_35:
            sub_1BC326C(Name, v19, v20);
          if ( !entity )
            goto LABEL_34;
          Name = (UnityEngine_GameObject_o *)*(i - 1);
          if ( !Name )
            goto LABEL_34;
          SkillIconComponent__Set((SkillIconComponent_o *)Name, (int32_t)entity[1].klass, 0LL);
          if ( v22 >= uiObjects->max_length )
            goto LABEL_35;
          Name = (UnityEngine_GameObject_o *)entity;
          if ( !entity
            || (v25 = *i, Name = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL), !v25) )
          {
LABEL_34:
            sub_1BC3264(Name, v19);
          }
          UILabel__set_text(v25, (System_String_o *)Name, 0LL);
        }
      }
      ++v22;
    }
  }
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill___ReSize_g__CalcCellHeight_12_0(
        UISprite_o *frame,
        UIGrid_o *grid,
        BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_array *uiObjects,
        const MethodInfo *method)
{
  UIWidget_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  float cellHeight; // s8
  BattleCharaChangeConfirmListViewItemDrawClassSkill___c_c *v12; // x0
  System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__o *_9__12_1; // x21
  Il2CppObject *v14; // x22
  struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w20
  int v19; // w9

  v6 = (UIWidget_o *)frame;
  if ( (byte_4AFD6EF & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo, grid);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___,
      v7);
    sub_1BC3008(&System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__TypeInfo, v8);
    sub_1BC3008(&Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__ReSize_b__12_1__, v9);
    frame = (UISprite_o *)sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo, v10);
    byte_4AFD6EF = 1;
  }
  if ( !grid )
    goto LABEL_17;
  cellHeight = grid->fields.cellHeight;
  v12 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  if ( !BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
    v12 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
  }
  _9__12_1 = v12->static_fields->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__12_1 = (System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__o *)sub_1BC3254(System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool__TypeInfo);
    System_Func_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject__bool____ctor(
      _9__12_1,
      v14,
      Method_BattleCharaChangeConfirmListViewItemDrawClassSkill___c__ReSize_b__12_1__,
      0LL);
    static_fields = BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields;
    static_fields->__9__12_1 = _9__12_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__12_1, (int32_t)_9__12_1, v16, v17);
  }
  frame = (UISprite_o *)System_Linq_Enumerable__Count_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)uiObjects,
                          (System_Func_TSource__bool__o *)_9__12_1,
                          (const MethodInfo_3020278 *)Method_System_Linq_Enumerable_Count_BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject___);
  v18 = (int)frame;
  if ( !BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo);
  if ( !v6 )
LABEL_17:
    sub_1BC3264(frame, grid);
  if ( cellHeight == INFINITY )
    v19 = 0x80000000;
  else
    v19 = (int)cellHeight;
  UIWidget__set_height(
    v6,
    BattleCharaChangeConfirmListViewItemDrawClassSkill_TypeInfo->static_fields->TitleCellHeight + v18 * v19,
    0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFD6F0 & 1) == 0 )
  {
    sub_1BC3008(&BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo, v1);
    byte_4AFD6F0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields->__9 = (struct BattleCharaChangeConfirmListViewItemDrawClassSkill___c_o *)v2;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)BattleCharaChangeConfirmListViewItemDrawClassSkill___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill___c___ctor(
        BattleCharaChangeConfirmListViewItemDrawClassSkill___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill___c___ReSize_b__12_1(
        BattleCharaChangeConfirmListViewItemDrawClassSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_o *uiObj,
        const MethodInfo *method)
{
  if ( !uiObj->fields.baseObject )
    sub_1BC3264(0LL, uiObj);
  return UnityEngine_GameObject__get_activeSelf(uiObj->fields.baseObject, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewItemDrawClassSkill___c___SetUI_b__11_0(
        BattleCharaChangeConfirmListViewItemDrawClassSkill___c_o *this,
        BattleCharaChangeConfirmListViewItemDrawClassSkill_ClassSkillUIObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj->fields.baseObject )
    sub_1BC3264(0LL, obj);
  UnityEngine_GameObject__SetActive(obj->fields.baseObject, 0, 0LL);
}