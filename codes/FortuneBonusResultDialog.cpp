void __fastcall FortuneBonusResultDialog___ctor(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_43554FB & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_43554FB = 1;
  }
  *(_OWORD *)&this->fields.dayLabelWidth = xmmword_32FCD00;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortuneBonusResultDialog__CheckSerializeField(
        FortuneBonusResultDialog_o *this,
        const MethodInfo *method)
{
  struct FortuneBonusResultDialog_RewardDispUnit_array *rewardDispUnitArray; // x8
  int max_length; // w9
  unsigned int v4; // w10
  FortuneBonusResultDialog_RewardDispUnit_o *v5; // x11
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x11
  int v7; // w13
  struct UISprite_array *lineSpriteArray; // x8
  int v9; // w8
  int v10; // w9
  __int64 v11; // x0

  rewardDispUnitArray = this->fields.rewardDispUnitArray;
  if ( !rewardDispUnitArray )
    goto LABEL_14;
  max_length = rewardDispUnitArray->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v11 = sub_B70798(this);
        sub_B70738(v11, 0LL);
      }
      v5 = rewardDispUnitArray->m_Items[v4];
      if ( !v5 )
        break;
      itemDispUnitArray = v5->fields.itemDispUnitArray;
      if ( !itemDispUnitArray )
        break;
      v7 = -1;
      do
        ++v7;
      while ( v7 < (signed int)itemDispUnitArray->max_length );
      if ( (int)++v4 >= max_length )
        goto LABEL_10;
    }
LABEL_14:
    sub_B7076C(this, method);
  }
LABEL_10:
  lineSpriteArray = this->fields.lineSpriteArray;
  if ( !lineSpriteArray )
    goto LABEL_14;
  v9 = lineSpriteArray->max_length;
  v10 = -1;
  do
    ++v10;
  while ( v10 < v9 );
}


void __fastcall FortuneBonusResultDialog__Close(
        FortuneBonusResultDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_43554F5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FortuneBonusResultDialog_EndClose__);
    byte_43554F5 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_FortuneBonusResultDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


ItemIconComponent_o *__fastcall FortuneBonusResultDialog__CreateItemIcon(
        FortuneBonusResultDialog_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconBasePrefab; // x21
  bool v6; // w8
  ItemIconComponent_o *result; // x0
  struct UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Object_o *v9; // x20
  bool v10; // w8
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_43554F4 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43554F4 = 1;
  }
  itemIconBasePrefab = (UnityEngine_Object_o *)this->fields.itemIconBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(itemIconBasePrefab, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    v8 = this->fields.itemIconBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v8,
                                   (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v10 = UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    result = 0LL;
    if ( !v10 )
    {
      GameObjectExtensions__SafeSetParent_32503456((UnityEngine_GameObject_o *)v9, parent, 0LL);
      if ( !v9 )
        sub_B7076C(v11, v12);
      return (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v9,
                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    }
  }
  return result;
}


void __fastcall FortuneBonusResultDialog__EndClose(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  System_Action_o *buffListView; // t1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  v2 = (BattleServantConfConponent_o *)this;
  FortuneBonusResultDialog__Init(this, method);
  buffListView = (System_Action_o *)v2->fields.buffListView;
  v2 = (BattleServantConfConponent_o *)((char *)v2 + 176);
  ActionExtensions__Call(buffListView, 0LL);
  v2->klass = 0LL;
  sub_B70630(v2, 0LL, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall FortuneBonusResultDialog__GetCountText(
        FortuneBonusResultDialog_o *this,
        int32_t gType,
        ItemEntity_o *itemEnt,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PlusOperatorString; // x0
  System_String_o *v8; // x19
  System_String_o *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = num;
  if ( (byte_43554F9 & 1) == 0 )
  {
    this = (FortuneBonusResultDialog_o *)sub_B70694(&StringLiteral_9376/*"N0"*/);
    byte_43554F9 = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_B7076C(this, *(_QWORD *)&gType);
    if ( !ItemType__IsCountableWithPlus(itemEnt->fields.type, 0LL) )
      goto LABEL_6;
LABEL_8:
    PlusOperatorString = ItemType__get_PlusOperatorString(0LL);
    goto LABEL_9;
  }
  if ( (unsigned int)(gType - 3) < 2 )
    goto LABEL_8;
LABEL_6:
  PlusOperatorString = ItemType__get_CrossOperatorString(0LL);
LABEL_9:
  v8 = PlusOperatorString;
  v9 = System_Int32__ToString_39283984((int32_t)&v11, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
  return System_String__Concat_44758168(v8, v9, 0LL);
}


CommonUI_FortuneBonusDetailData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusDetailData(
        FortuneBonusResultDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  FortuneBonusResultDialog___c__DisplayClass27_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusDetailData_array *details; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x20

  if ( (byte_43554F3 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
    sub_B70694(&Method_System_Func_CommonUI_FortuneBonusDetailData__bool___ctor__);
    sub_B70694(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
    sub_B70694(&Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__);
    sub_B70694(&FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo);
    byte_43554F3 = 1;
  }
  v5 = (FortuneBonusResultDialog___c__DisplayClass27_0_o *)sub_B70764(FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo);
  FortuneBonusResultDialog___c__DisplayClass27_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.index = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_CommonUI_FortuneBonusDetailData__bool___ctor__);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)details,
                                                (System_Func_T__bool__o *)v10,
                                                (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
}


CommonUI_FortuneBonusRewardData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusLogData(
        FortuneBonusResultDialog_o *this,
        int32_t day,
        const MethodInfo *method)
{
  FortuneBonusResultDialog___c__DisplayClass26_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x20

  if ( (byte_43554F2 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___);
    sub_B70694(&Method_System_Func_CommonUI_FortuneBonusRewardData__bool___ctor__);
    sub_B70694(&System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo);
    sub_B70694(&Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__);
    sub_B70694(&FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo);
    byte_43554F2 = 1;
  }
  v5 = (FortuneBonusResultDialog___c__DisplayClass26_0_o *)sub_B70764(FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo);
  FortuneBonusResultDialog___c__DisplayClass26_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.day = day;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  logs = fortuneBonusData->fields.logs;
  if ( !logs || !*(_QWORD *)&logs->max_length )
    return 0LL;
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_CommonUI_FortuneBonusRewardData__bool___ctor__);
  return (CommonUI_FortuneBonusRewardData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)logs,
                                                (System_Func_T__bool__o *)v10,
                                                (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___);
}


CommonUI_FortuneBonusRewardData_array *__fastcall FortuneBonusResultDialog__GetFortuneBonusLogs(
        FortuneBonusResultDialog_o *this,
        const MethodInfo *method)
{
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x8

  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  logs = fortuneBonusData->fields.logs;
  if ( !logs )
    return 0LL;
  if ( *(_QWORD *)&logs->max_length )
    return logs;
  return 0LL;
}


CommonUI_FortuneBonusRewardData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusRewardData(
        FortuneBonusResultDialog_o *this,
        const MethodInfo *method)
{
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *rewards; // x8
  __int64 v4; // x9
  __int64 v6; // x0

  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  rewards = fortuneBonusData->fields.rewards;
  if ( !rewards )
    return 0LL;
  v4 = *(_QWORD *)&rewards->max_length;
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
  {
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
  }
  return rewards->m_Items[0];
}


void __fastcall FortuneBonusResultDialog__GetGiftInfo(
        FortuneBonusResultDialog_o *this,
        GiftEntity_o *giftEnt,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  LocalizationManager_c *v11; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_o *age; // x1
  FortuneBonusResultDialog_o *v28; // x0
  const MethodInfo *v29; // x4
  System_String_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43554F8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43554F8 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434F6FF )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434F6FF = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v11->static_fields->unknownNameText;
  *nameText = unknownNameText;
  sub_B70630(
    (BattleServantConfConponent_o *)nameText,
    (System_Int32_array **)unknownNameText,
    (System_String_array **)nameText,
    (System_String_array **)countText,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
    (BattleServantConfConponent_o *)countText,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !giftEnt )
    goto LABEL_21;
  if ( giftEnt->fields.type != 2 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  giftEnt->fields.objectId,
                                                                  (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return;
  if ( !entity )
LABEL_21:
    sub_B7076C(Master_WarQuestSelectionMaster, v20);
  age = entity->fields.age;
  *nameText = age;
  sub_B70630((BattleServantConfConponent_o *)nameText, (System_Int32_array **)age, v21, v22, v23, v24, v25, v26);
  v30 = FortuneBonusResultDialog__GetCountText(
          v28,
          giftEnt->fields.type,
          (ItemEntity_o *)entity,
          giftEnt->fields.num,
          v29);
  *countText = v30;
  sub_B70630((BattleServantConfConponent_o *)countText, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
}


void __fastcall FortuneBonusResultDialog__Init(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_43554ED & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43554ED = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.okBtnLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7076C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortuneBonusResultDialog__OnClickButton(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_43554F6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FortuneBonusResultDialog_OnClickButton__);
    sub_B70694(&Method_FortuneBonusResultDialog__OnClickButton_b__31_0__);
    byte_43554F6 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_FortuneBonusResultDialog_OnClickButton__;
    if ( (*((_BYTE *)Method_FortuneBonusResultDialog_OnClickButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_FortuneBonusResultDialog_OnClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, 0LL);
    FortuneBonusResultDialog__Close(this, v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortuneBonusResultDialog__Open(
        FortuneBonusResultDialog_o *this,
        CommonUI_FortuneBonusData_o *fortuneBonus,
        System_Action_o *nextAction,
        bool isEnabledOpenAnim,
        const MethodInfo *method)
{
  System_Action_o *v9; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *transform; // x22
  int v13; // s0
  UILabel_o *titleLabel; // x22
  UILabel_o *subTitleLabel; // x22
  UILabel_o *okBtnLabel; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UISprite_array *lineSpriteArray; // x8
  unsigned __int64 v26; // x23
  unsigned __int64 max_length; // x9
  UISprite_o *v28; // x22
  MethodInfo *v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x1
  __int64 v37; // x0

  if ( (byte_43554EE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_FortuneBonusResultDialog__Open_b__20_0__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_17690/*"chronology_line"*/);
    sub_B70694(&StringLiteral_6538/*"FORTUNE_BONUS_RESULT_TITLE"*/);
    sub_B70694(&StringLiteral_6534/*"FORTUNE_BONUS_RESULT_BUTTON"*/);
    sub_B70694(&StringLiteral_6537/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/);
    sub_B70694(&StringLiteral_17725/*"clear00"*/);
    byte_43554EE = 1;
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  if ( isEnabledOpenAnim )
  {
    v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_FortuneBonusResultDialog__Open_b__20_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v9, 0, 0LL);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_25;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_17725/*"clear00"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_25;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
      gameObject,
      gameObject->klass[1]._1.declaringType,
      1.0);
    gameObject = this->fields.baseWindow;
    if ( !gameObject )
      goto LABEL_25;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6538/*"FORTUNE_BONUS_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6537/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, 0LL);
  if ( !subTitleLabel
    || (UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL),
        okBtnLabel = this->fields.okBtnLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6534/*"FORTUNE_BONUS_RESULT_BUTTON"*/, 0LL),
        !okBtnLabel)
    || (UILabel__set_text(okBtnLabel, (System_String_o *)gameObject, 0LL),
        (lineSpriteArray = this->fields.lineSpriteArray) == 0LL) )
  {
LABEL_25:
    sub_B7076C(gameObject, v11);
  }
  v26 = 0LL;
  while ( 1 )
  {
    max_length = lineSpriteArray->max_length;
    if ( (__int64)v26 >= (int)max_length )
      break;
    if ( v26 >= max_length )
    {
      v37 = sub_B70798(gameObject);
      sub_B70738(v37, 0LL);
    }
    v28 = lineSpriteArray->m_Items[v26];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v28, (System_String_o *)StringLiteral_17690/*"chronology_line"*/, 0LL);
    lineSpriteArray = this->fields.lineSpriteArray;
    ++v26;
    if ( !lineSpriteArray )
      goto LABEL_25;
  }
  this->fields.fortuneBonusData = fortuneBonus;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.fortuneBonusData,
    (System_Int32_array **)fortuneBonus,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( fortuneBonusData )
  {
    logs = fortuneBonusData->fields.logs;
    if ( logs )
    {
      if ( *(_QWORD *)&logs->max_length )
        FortuneBonusResultDialog__SetupRewardDisp(this, logs, v29);
    }
  }
  this->fields.clickFunc = nextAction;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)nextAction,
    (System_String_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void __fastcall FortuneBonusResultDialog__Release(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19

  if ( (byte_43554F7 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43554F7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(v5, 0LL);
}


void __fastcall FortuneBonusResultDialog__SetEnableButton(
        FortuneBonusResultDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = isEnable;
}


void __fastcall FortuneBonusResultDialog__SetTextAndCondensedScale(
        FortuneBonusResultDialog_o *this,
        UILabel_o *targetLebel,
        System_String_o *text,
        int32_t width,
        const MethodInfo *method)
{
  if ( !targetLebel )
    sub_B7076C(this, 0LL);
  UILabel__set_text(targetLebel, text, 0LL);
  if ( width >= 1 )
    UILabel__SetCondensedScale(targetLebel, width, 0LL);
}


void __fastcall FortuneBonusResultDialog__SetupItemDispUnitArray(
        FortuneBonusResultDialog_o *this,
        FortuneBonusResultDialog_ItemDispUnit_o *itemDispUnit,
        GiftEntity_o *giftEnt,
        int32_t textWidth,
        const MethodInfo *method)
{
  FortuneBonusResultDialog_ItemDispUnit_o *v7; // x19
  FortuneBonusResultDialog_o *v8; // x22
  UnityEngine_Object_o *ItemIcon; // x23
  int32_t num; // w3
  const MethodInfo *v11; // x4
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x4
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  v7 = itemDispUnit;
  v8 = this;
  if ( (byte_43554F1 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (FortuneBonusResultDialog_o *)sub_B70694(&StringLiteral_10650/*"PRESENT_INFO"*/);
    byte_43554F1 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( giftEnt )
  {
    if ( !v7 )
      goto LABEL_24;
    ItemIcon = (UnityEngine_Object_o *)FortuneBonusResultDialog__CreateItemIcon(
                                         v8,
                                         v7->fields.itemIconRoot,
                                         (const MethodInfo *)giftEnt);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (FortuneBonusResultDialog_o *)UnityEngine_Object__op_Equality(ItemIcon, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      itemDispUnit = (FortuneBonusResultDialog_ItemDispUnit_o *)(unsigned int)giftEnt->fields.prioredIconId;
      if ( (int)itemDispUnit < 1 )
      {
        if ( !ItemIcon )
          goto LABEL_24;
        ItemIconComponent__SetGift(
          (ItemIconComponent_o *)ItemIcon,
          giftEnt->fields.type,
          giftEnt->fields.objectId,
          -1,
          0,
          0LL);
      }
      else
      {
        if ( !ItemIcon )
          goto LABEL_24;
        if ( giftEnt->fields.num <= 1 )
          num = -1;
        else
          num = giftEnt->fields.num;
        ItemIconComponent__SetItemImage_27826864(
          (ItemIconComponent_o *)ItemIcon,
          (int32_t)itemDispUnit,
          giftEnt->fields.objectId,
          num,
          0LL);
      }
      FortuneBonusResultDialog__GetGiftInfo(v8, giftEnt, &nameText, &countText, v11);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10650/*"PRESENT_INFO"*/, 0LL);
      v13 = System_String__Format_44753704(v12, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        (FortuneBonusResultDialog_o *)v13,
        v7->fields.itemName,
        v13,
        textWidth,
        v14);
      this = (FortuneBonusResultDialog_o *)v7->fields.itemNoName;
      if ( this )
      {
        this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          return;
        }
      }
LABEL_24:
      sub_B7076C(this, itemDispUnit);
    }
  }
}


void __fastcall FortuneBonusResultDialog__SetupRewardDisp(
        FortuneBonusResultDialog_o *this,
        CommonUI_FortuneBonusRewardData_array *logDataArray,
        const MethodInfo *method)
{
  FortuneBonusResultDialog_o *v4; // x19
  struct FortuneBonusResultDialog_RewardDispUnit_array *rewardDispUnitArray; // x8
  int max_length; // w23
  il2cpp_array_size_t v7; // w9
  __int64 v8; // x28
  FortuneBonusResultDialog_RewardDispUnit_o *v9; // x8
  int32_t targetDay; // w20
  UILabel_o *dayLabel; // x21
  System_String_o *v12; // x22
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x2
  CommonUI_FortuneBonusRewardData_o *FortuneBonusLogData; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x4
  struct FortuneBonusResultDialog_RewardDispUnit_array *v21; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v22; // x8
  FortuneBonusResultDialog_o *v23; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v24; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v25; // x8
  FortuneBonusResultDialog_o *v26; // x20
  FortuneBonusResultDialog___c_c *v27; // x0
  struct FortuneBonusResultDialog___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__21_0; // x21
  Il2CppObject *v30; // x22
  struct FortuneBonusResultDialog___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x3
  struct FortuneBonusResultDialog_RewardDispUnit_array *v39; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v40; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v41; // x8
  System_String_o *v42; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v43; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v44; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v45; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v46; // x8
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x21
  int v48; // w8
  unsigned int v49; // w22
  FortuneBonusResultDialog_ItemDispUnit_o *v50; // x27
  __int64 v51; // x0
  int32_t v52; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_43554EF & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_GiftEntity___ctor__);
    sub_B70694(&System_Comparison_GiftEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__);
    sub_B70694(&FortuneBonusResultDialog___c_TypeInfo);
    sub_B70694(&StringLiteral_6536/*"FORTUNE_BONUS_RESULT_NO_NAME"*/);
    this = (FortuneBonusResultDialog_o *)sub_B70694(&StringLiteral_6535/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/);
    byte_43554EF = 1;
  }
  if ( !logDataArray || (rewardDispUnitArray = v4->fields.rewardDispUnitArray) == 0LL )
LABEL_66:
    sub_B7076C(this, logDataArray);
  max_length = rewardDispUnitArray->max_length;
  if ( max_length >= (signed int)logDataArray->max_length && max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= rewardDispUnitArray->max_length )
        goto LABEL_68;
      v8 = (int)v7;
      v9 = rewardDispUnitArray->m_Items[v7];
      if ( !v9 )
        goto LABEL_66;
      targetDay = v9->fields.targetDay;
      dayLabel = v9->fields.dayLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6535/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, 0LL);
      v52 = targetDay;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v13);
      v15 = System_String__Format(v12, v14, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        (FortuneBonusResultDialog_o *)v15,
        dayLabel,
        v15,
        v4->fields.dayLabelWidth,
        v16);
      FortuneBonusLogData = FortuneBonusResultDialog__GetFortuneBonusLogData(v4, targetDay, v17);
      if ( FortuneBonusLogData )
      {
        this = (FortuneBonusResultDialog_o *)FortuneBonusResultDialog__GetFortuneBonusDetailData(
                                               v4,
                                               FortuneBonusLogData->fields.idx,
                                               v19);
        if ( this )
        {
          v21 = v4->fields.rewardDispUnitArray;
          if ( !v21 )
            goto LABEL_66;
          if ( (unsigned int)v8 >= v21->max_length )
            goto LABEL_68;
          v22 = v21->m_Items[v8];
          if ( !v22 )
            goto LABEL_66;
          v23 = this;
          FortuneBonusResultDialog__SetTextAndCondensedScale(
            this,
            v22->fields.fortuneName,
            (System_String_o *)this->fields.basePanel,
            v4->fields.fortuneNameWidth,
            v20);
          v24 = v4->fields.rewardDispUnitArray;
          if ( !v24 )
            goto LABEL_66;
          if ( (unsigned int)v8 >= v24->max_length )
            goto LABEL_68;
          v25 = v24->m_Items[v8];
          if ( !v25 )
            goto LABEL_66;
          this = (FortuneBonusResultDialog_o *)v25->fields.fortuneNoName;
          if ( !this )
            goto LABEL_66;
          this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
          if ( !this )
            goto LABEL_66;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (FortuneBonusResultDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GiftMaster___);
          if ( !this )
            goto LABEL_66;
          this = (FortuneBonusResultDialog_o *)GiftMaster__GetListById(
                                                 (GiftMaster_o *)this,
                                                 (int32_t)v23->fields.basePanelList,
                                                 0LL);
          if ( this )
          {
            v26 = this;
            if ( SLODWORD(this->fields.basePanel) >= 1 )
            {
              v27 = FortuneBonusResultDialog___c_TypeInfo;
              if ( (BYTE3(FortuneBonusResultDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !FortuneBonusResultDialog___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FortuneBonusResultDialog___c_TypeInfo);
                v27 = FortuneBonusResultDialog___c_TypeInfo;
              }
              static_fields = v27->static_fields;
              _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__21_0;
              if ( !_9__21_0 )
              {
                if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v27);
                  static_fields = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                }
                v30 = (Il2CppObject *)static_fields->__9;
                _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_GiftEntity__TypeInfo);
                System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
                  _9__21_0,
                  v30,
                  Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__,
                  (const MethodInfo_2B05B38 *)Method_System_Comparison_GiftEntity___ctor__);
                v31 = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                v31->__9__21_0 = (struct System_Comparison_GiftEntity__o *)_9__21_0;
                sub_B70630(
                  (BattleServantConfConponent_o *)&v31->__9__21_0,
                  (System_Int32_array **)_9__21_0,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37);
              }
              System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
                (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26,
                (System_Comparison_T__o *)_9__21_0,
                (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
              v39 = v4->fields.rewardDispUnitArray;
              if ( !v39 )
                goto LABEL_66;
              if ( (unsigned int)v8 >= v39->max_length )
                goto LABEL_68;
              FortuneBonusResultDialog__SetupRewardDispUnit(
                v4,
                v39->m_Items[v8],
                (System_Collections_Generic_List_GiftEntity__o *)v26,
                v38);
            }
          }
        }
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (FortuneBonusResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6536/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, 0LL);
        v40 = v4->fields.rewardDispUnitArray;
        if ( !v40 )
          goto LABEL_66;
        if ( (unsigned int)v8 >= v40->max_length )
          goto LABEL_68;
        v41 = v40->m_Items[v8];
        if ( !v41 )
          goto LABEL_66;
        v42 = (System_String_o *)this;
        this = (FortuneBonusResultDialog_o *)v41->fields.fortuneName;
        if ( !this )
          goto LABEL_66;
        this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v43 = v4->fields.rewardDispUnitArray;
        if ( !v43 )
          goto LABEL_66;
        if ( (unsigned int)v8 >= v43->max_length )
          goto LABEL_68;
        v44 = v43->m_Items[v8];
        if ( !v44 )
          goto LABEL_66;
        this = (FortuneBonusResultDialog_o *)v44->fields.fortuneNoName;
        if ( !this )
          goto LABEL_66;
        UILabel__set_text((UILabel_o *)this, v42, 0LL);
        v45 = v4->fields.rewardDispUnitArray;
        if ( !v45 )
          goto LABEL_66;
        if ( (unsigned int)v8 >= v45->max_length )
          goto LABEL_68;
        v46 = v45->m_Items[v8];
        if ( !v46 )
          goto LABEL_66;
        itemDispUnitArray = v46->fields.itemDispUnitArray;
        if ( !itemDispUnitArray )
          goto LABEL_66;
        v48 = itemDispUnitArray->max_length;
        if ( v48 >= 1 )
        {
          v49 = 0;
          while ( v49 < v48 )
          {
            v50 = itemDispUnitArray->m_Items[v49];
            if ( !v50 )
              goto LABEL_66;
            this = (FortuneBonusResultDialog_o *)v50->fields.itemName;
            if ( !this )
              goto LABEL_66;
            this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !this )
              goto LABEL_66;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FortuneBonusResultDialog_o *)v50->fields.itemNoName;
            if ( !this )
              goto LABEL_66;
            UILabel__set_text((UILabel_o *)this, v42, 0LL);
            v48 = itemDispUnitArray->max_length;
            if ( (int)++v49 >= v48 )
              goto LABEL_64;
          }
LABEL_68:
          v51 = sub_B70798(this);
          sub_B70738(v51, 0LL);
        }
      }
LABEL_64:
      v7 = v8 + 1;
      if ( (int)v8 + 1 >= max_length )
        return;
      rewardDispUnitArray = v4->fields.rewardDispUnitArray;
      if ( !rewardDispUnitArray )
        goto LABEL_66;
    }
  }
}


void __fastcall FortuneBonusResultDialog__SetupRewardDispUnit(
        FortuneBonusResultDialog_o *this,
        FortuneBonusResultDialog_RewardDispUnit_o *rewardDispUnit,
        System_Collections_Generic_List_GiftEntity__o *giftEntList,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  FortuneBonusResultDialog_o *v7; // x21
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x9
  int32_t size; // w8
  __int64 v10; // x9
  __int64 v11; // x24
  __int64 i; // x25
  unsigned __int64 v13; // x28
  GiftEntity_o *v14; // x2
  struct FortuneBonusResultDialog_ItemDispUnit_array *v15; // x8
  __int64 v16; // x9
  __int64 v17; // x0

  v7 = this;
  if ( (byte_43554F0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    this = (FortuneBonusResultDialog_o *)sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    byte_43554F0 = 1;
  }
  if ( !rewardDispUnit || (itemDispUnitArray = rewardDispUnit->fields.itemDispUnitArray) == 0LL || !giftEntList )
LABEL_23:
    sub_B7076C(this, rewardDispUnit);
  size = giftEntList->fields._size;
  v10 = *(_QWORD *)&itemDispUnitArray->max_length;
  if ( size >= (int)v10 && (int)v10 >= 1 )
  {
    v11 = (int)v10;
    for ( i = 4LL; ; ++i )
    {
      v13 = i - 4;
      if ( i - 4 >= (unsigned __int64)(unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v14 = (GiftEntity_o *)*((_QWORD *)&giftEntList->fields._items->obj.klass + i);
      if ( v14 )
      {
        v15 = rewardDispUnit->fields.itemDispUnitArray;
        if ( i == 4 )
          v16 = 136LL;
        else
          v16 = 140LL;
        if ( !v15 )
          goto LABEL_23;
        if ( v13 >= v15->max_length )
        {
          v17 = sub_B70798(this);
          sub_B70738(v17, 0LL);
        }
        if ( v13 >= (unsigned int)giftEntList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        FortuneBonusResultDialog__SetupItemDispUnitArray(
          v7,
          *((FortuneBonusResultDialog_ItemDispUnit_o **)&v15->obj.klass + i),
          v14,
          *(_DWORD *)((char *)&v7->klass + v16),
          v4);
      }
      if ( i - 3 >= v11 )
        return;
      size = giftEntList->fields._size;
    }
  }
}


// attributes: thunk
void __fastcall FortuneBonusResultDialog__Start(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  FortuneBonusResultDialog__CheckSerializeField(this, method);
}


void __fastcall FortuneBonusResultDialog___OnClickButton_b__31_0(
        FortuneBonusResultDialog_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_clickFunc; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  p_clickFunc = (BattleServantConfConponent_o *)&this->fields.clickFunc;
  ActionExtensions__Call(this->fields.clickFunc, 0LL);
  p_clickFunc->klass = 0LL;
  sub_B70630(p_clickFunc, 0LL, v4, v5, v6, v7, v8, v9);
  FortuneBonusResultDialog__Release(this, v10);
}


void __fastcall FortuneBonusResultDialog___Open_b__20_0(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall FortuneBonusResultDialog__get_closeBtnPath(
        FortuneBonusResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_43554FA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15709/*"Window/OkBtn"*/);
    byte_43554FA = 1;
  }
  return (System_String_o *)StringLiteral_15709/*"Window/OkBtn"*/;
}


void __fastcall FortuneBonusResultDialog_ItemDispUnit___ctor(
        FortuneBonusResultDialog_ItemDispUnit_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall FortuneBonusResultDialog_ItemDispUnit__get_ItemIconRoot(
        FortuneBonusResultDialog_ItemDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.itemIconRoot;
}


UILabel_o *__fastcall FortuneBonusResultDialog_ItemDispUnit__get_ItemName(
        FortuneBonusResultDialog_ItemDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.itemName;
}


UILabel_o *__fastcall FortuneBonusResultDialog_ItemDispUnit__get_ItemNoName(
        FortuneBonusResultDialog_ItemDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.itemNoName;
}


void __fastcall FortuneBonusResultDialog_RewardDispUnit___ctor(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UILabel_o *__fastcall FortuneBonusResultDialog_RewardDispUnit__get_DayLabel(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.dayLabel;
}


UILabel_o *__fastcall FortuneBonusResultDialog_RewardDispUnit__get_FortuneName(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.fortuneName;
}


UILabel_o *__fastcall FortuneBonusResultDialog_RewardDispUnit__get_FortuneNoName(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.fortuneNoName;
}


FortuneBonusResultDialog_ItemDispUnit_array *__fastcall FortuneBonusResultDialog_RewardDispUnit__get_ItemDispUnitArray(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.itemDispUnitArray;
}


int32_t __fastcall FortuneBonusResultDialog_RewardDispUnit__get_TargetDay(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.targetDay;
}


UnityEngine_GameObject_o *__fastcall FortuneBonusResultDialog_RewardDispUnit__get_UnitObject(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.unitObject;
}


void __fastcall FortuneBonusResultDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct FortuneBonusResultDialog___c_StaticFields *static_fields; // x0

  if ( (byte_434EAC8 & 1) == 0 )
  {
    sub_B70694(&FortuneBonusResultDialog___c_TypeInfo);
    byte_434EAC8 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(FortuneBonusResultDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = FortuneBonusResultDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FortuneBonusResultDialog___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall FortuneBonusResultDialog___c___ctor(FortuneBonusResultDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FortuneBonusResultDialog___c___SetupRewardDisp_b__21_0(
        FortuneBonusResultDialog___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall FortuneBonusResultDialog___c__DisplayClass26_0___ctor(
        FortuneBonusResultDialog___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortuneBonusResultDialog___c__DisplayClass26_0___GetFortuneBonusLogData_b__0(
        FortuneBonusResultDialog___c__DisplayClass26_0_o *this,
        CommonUI_FortuneBonusRewardData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_B7076C(this, 0LL);
  return d->fields.day == this->fields.day;
}


void __fastcall FortuneBonusResultDialog___c__DisplayClass27_0___ctor(
        FortuneBonusResultDialog___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortuneBonusResultDialog___c__DisplayClass27_0___GetFortuneBonusDetailData_b__0(
        FortuneBonusResultDialog___c__DisplayClass27_0_o *this,
        CommonUI_FortuneBonusDetailData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B7076C(this, 0LL);
  return n->fields.idx == this->fields.index;
}