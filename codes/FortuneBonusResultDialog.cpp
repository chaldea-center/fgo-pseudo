void __fastcall FortuneBonusResultDialog___ctor(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_421761F & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421761F = 1;
  }
  *(_OWORD *)&this->fields.dayLabelWidth = xmmword_3215280;
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
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_4217619 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_FortuneBonusResultDialog_EndClose__, v10);
    byte_4217619 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_FortuneBonusResultDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


ItemIconComponent_o *__fastcall FortuneBonusResultDialog__CreateItemIcon(
        FortuneBonusResultDialog_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *itemIconBasePrefab; // x21
  bool v8; // w8
  ItemIconComponent_o *result; // x0
  struct UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Object_o *v11; // x20
  bool v12; // w8
  __int64 v13; // x0

  if ( (byte_4217618 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, parent);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4217618 = 1;
  }
  itemIconBasePrefab = (UnityEngine_Object_o *)this->fields.itemIconBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(itemIconBasePrefab, 0LL, 0LL);
  result = 0LL;
  if ( !v8 )
  {
    v10 = this->fields.itemIconBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)v10,
                                    (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v12 = UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
    result = 0LL;
    if ( !v12 )
    {
      GameObjectExtensions__SafeSetParent_31184716((UnityEngine_GameObject_o *)v11, parent, 0LL);
      if ( !v11 )
        sub_B0D97C(v13);
      return (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v11,
                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
  sub_B0D840(v2, 0LL, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_421761D & 1) == 0 )
  {
    this = (FortuneBonusResultDialog_o *)sub_B0D8A4(&StringLiteral_9289/*"N0"*/, *(_QWORD *)&gType);
    byte_421761D = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_B0D97C(this);
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
  v9 = System_Int32__ToString_38473032((int32_t)&v11, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
  return System_String__Concat_43849904(v8, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CommonUI_FortuneBonusDetailData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusDetailData(
        FortuneBonusResultDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  FortuneBonusResultDialog___c__DisplayClass27_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusDetailData_array *details; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_4217617 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Func_CommonUI_FortuneBonusDetailData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__, v7);
    sub_B0D8A4(&FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo, v8);
    byte_4217617 = 1;
  }
  v9 = (FortuneBonusResultDialog___c__DisplayClass27_0_o *)sub_B0D974(
                                                             FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo,
                                                             *(_QWORD *)&index,
                                                             method);
  FortuneBonusResultDialog___c__DisplayClass27_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.index = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_CommonUI_FortuneBonusDetailData__bool___ctor__);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)details,
                                                (System_Func_T__bool__o *)v15,
                                                (const MethodInfo_170767C *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
}


// local variable allocation has failed, the output may be wrong!
CommonUI_FortuneBonusRewardData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusLogData(
        FortuneBonusResultDialog_o *this,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  FortuneBonusResultDialog___c__DisplayClass26_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_4217616 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___, *(_QWORD *)&day);
    sub_B0D8A4(&Method_System_Func_CommonUI_FortuneBonusRewardData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__, v7);
    sub_B0D8A4(&FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo, v8);
    byte_4217616 = 1;
  }
  v9 = (FortuneBonusResultDialog___c__DisplayClass26_0_o *)sub_B0D974(
                                                             FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo,
                                                             *(_QWORD *)&day,
                                                             method);
  FortuneBonusResultDialog___c__DisplayClass26_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.day = day;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  logs = fortuneBonusData->fields.logs;
  if ( !logs || !*(_QWORD *)&logs->max_length )
    return 0LL;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_CommonUI_FortuneBonusRewardData__bool___ctor__);
  return (CommonUI_FortuneBonusRewardData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)logs,
                                                (System_Func_T__bool__o *)v15,
                                                (const MethodInfo_170767C *)Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___);
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  LocalizationManager_c *v15; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *age; // x1
  FortuneBonusResultDialog_o *v31; // x0
  const MethodInfo *v32; // x4
  System_String_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421761C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, giftEnt);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_421761C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4212885 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, giftEnt);
    byte_4212885 = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v15->static_fields->unknownNameText;
  *nameText = unknownNameText;
  sub_B0D840(
    (BattleServantConfConponent_o *)nameText,
    (System_Int32_array **)unknownNameText,
    (System_String_array **)nameText,
    (System_String_array **)countText,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)countText,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !giftEnt )
    goto LABEL_21;
  if ( giftEnt->fields.type != 2 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  giftEnt->fields.objectId,
                                                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return;
  if ( !entity )
LABEL_21:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  age = entity->fields.age;
  *nameText = age;
  sub_B0D840((BattleServantConfConponent_o *)nameText, (System_Int32_array **)age, v24, v25, v26, v27, v28, v29);
  v33 = FortuneBonusResultDialog__GetCountText(
          v31,
          giftEnt->fields.type,
          (ItemEntity_o *)entity,
          giftEnt->fields.num,
          v32);
  *countText = v33;
  sub_B0D840((BattleServantConfConponent_o *)countText, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
}


void __fastcall FortuneBonusResultDialog__Init(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4217611 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217611 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.okBtnLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B0D97C(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortuneBonusResultDialog__OnClickButton(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_421761A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FortuneBonusResultDialog_OnClickButton__, v3);
    sub_B0D8A4(&Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, v4);
    byte_421761A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_FortuneBonusResultDialog_OnClickButton__;
    if ( (*((_BYTE *)Method_FortuneBonusResultDialog_OnClickButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B0D8AC(Method_FortuneBonusResultDialog_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, 0LL);
    FortuneBonusResultDialog__Close(this, v9, v10);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x22
  int v22; // s0
  UILabel_o *titleLabel; // x22
  UILabel_o *subTitleLabel; // x22
  UILabel_o *okBtnLabel; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UISprite_array *lineSpriteArray; // x8
  unsigned __int64 v35; // x23
  unsigned __int64 max_length; // x9
  UISprite_o *v37; // x22
  MethodInfo *v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x1
  __int64 v46; // x0

  if ( (byte_4217612 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, fortuneBonus);
    sub_B0D8A4(&AtlasManager_TypeInfo, v9);
    sub_B0D8A4(&Method_FortuneBonusResultDialog__Open_b__20_0__, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_17480/*"chronology_line"*/, v12);
    sub_B0D8A4(&StringLiteral_6463/*"FORTUNE_BONUS_RESULT_TITLE"*/, v13);
    sub_B0D8A4(&StringLiteral_6459/*"FORTUNE_BONUS_RESULT_BUTTON"*/, v14);
    sub_B0D8A4(&StringLiteral_6462/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, v15);
    sub_B0D8A4(&StringLiteral_17515/*"clear00"*/, v16);
    byte_4217612 = 1;
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  if ( isEnabledOpenAnim )
  {
    v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_FortuneBonusResultDialog__Open_b__20_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_17515/*"clear00"*/, 0LL);
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
    *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v22, 0LL);
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6463/*"FORTUNE_BONUS_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6462/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, 0LL);
  if ( !subTitleLabel
    || (UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL),
        okBtnLabel = this->fields.okBtnLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6459/*"FORTUNE_BONUS_RESULT_BUTTON"*/, 0LL),
        !okBtnLabel)
    || (UILabel__set_text(okBtnLabel, (System_String_o *)gameObject, 0LL),
        (lineSpriteArray = this->fields.lineSpriteArray) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(gameObject);
  }
  v35 = 0LL;
  while ( 1 )
  {
    max_length = lineSpriteArray->max_length;
    if ( (__int64)v35 >= (int)max_length )
      break;
    if ( v35 >= max_length )
    {
      v46 = sub_B0D9A8(gameObject);
      sub_B0D948(v46, 0LL);
    }
    v37 = lineSpriteArray->m_Items[v35];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v37, (System_String_o *)StringLiteral_17480/*"chronology_line"*/, 0LL);
    lineSpriteArray = this->fields.lineSpriteArray;
    ++v35;
    if ( !lineSpriteArray )
      goto LABEL_25;
  }
  this->fields.fortuneBonusData = fortuneBonus;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fortuneBonusData,
    (System_Int32_array **)fortuneBonus,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( fortuneBonusData )
  {
    logs = fortuneBonusData->fields.logs;
    if ( logs )
    {
      if ( *(_QWORD *)&logs->max_length )
        FortuneBonusResultDialog__SetupRewardDisp(this, logs, v38);
    }
  }
  this->fields.clickFunc = nextAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)nextAction,
    (System_String_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43);
}


void __fastcall FortuneBonusResultDialog__Release(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v4; // x19

  if ( (byte_421761B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421761B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v4 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(v4, 0LL);
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
    sub_B0D97C(this);
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
  FortuneBonusResultDialog_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *ItemIcon; // x23
  int prioredIconId; // w1
  int32_t num; // w3
  const MethodInfo *v14; // x4
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x4
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  v8 = this;
  if ( (byte_4217615 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, itemDispUnit);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    this = (FortuneBonusResultDialog_o *)sub_B0D8A4(&StringLiteral_10537/*"PRESENT_INFO"*/, v10);
    byte_4217615 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( giftEnt )
  {
    if ( !itemDispUnit )
      goto LABEL_24;
    ItemIcon = (UnityEngine_Object_o *)FortuneBonusResultDialog__CreateItemIcon(
                                         v8,
                                         itemDispUnit->fields.itemIconRoot,
                                         (const MethodInfo *)giftEnt);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (FortuneBonusResultDialog_o *)UnityEngine_Object__op_Equality(ItemIcon, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      prioredIconId = giftEnt->fields.prioredIconId;
      if ( prioredIconId < 1 )
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
        ItemIconComponent__SetItemImage_26857760(
          (ItemIconComponent_o *)ItemIcon,
          prioredIconId,
          giftEnt->fields.objectId,
          num,
          0LL);
      }
      FortuneBonusResultDialog__GetGiftInfo(v8, giftEnt, &nameText, &countText, v14);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10537/*"PRESENT_INFO"*/, 0LL);
      v16 = System_String__Format_43845440(v15, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        (FortuneBonusResultDialog_o *)v16,
        itemDispUnit->fields.itemName,
        v16,
        textWidth,
        v17);
      this = (FortuneBonusResultDialog_o *)itemDispUnit->fields.itemNoName;
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
      sub_B0D97C(this);
    }
  }
}


void __fastcall FortuneBonusResultDialog__SetupRewardDisp(
        FortuneBonusResultDialog_o *this,
        CommonUI_FortuneBonusRewardData_array *logDataArray,
        const MethodInfo *method)
{
  FortuneBonusResultDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct FortuneBonusResultDialog_RewardDispUnit_array *rewardDispUnitArray; // x8
  int max_length; // w23
  il2cpp_array_size_t v18; // w9
  __int64 v19; // x28
  FortuneBonusResultDialog_RewardDispUnit_o *v20; // x8
  int32_t targetDay; // w20
  UILabel_o *dayLabel; // x21
  System_String_o *v23; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x2
  CommonUI_FortuneBonusRewardData_o *FortuneBonusLogData; // x0
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x4
  struct FortuneBonusResultDialog_RewardDispUnit_array *v31; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v32; // x8
  FortuneBonusResultDialog_o *v33; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v34; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  FortuneBonusResultDialog_o *v38; // x20
  FortuneBonusResultDialog___c_c *v39; // x0
  struct FortuneBonusResultDialog___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__21_0; // x21
  Il2CppObject *v42; // x22
  struct FortuneBonusResultDialog___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  const MethodInfo *v50; // x3
  struct FortuneBonusResultDialog_RewardDispUnit_array *v51; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v52; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v53; // x8
  System_String_o *v54; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v55; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v56; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v57; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v58; // x8
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x21
  int v60; // w8
  unsigned int v61; // w22
  FortuneBonusResultDialog_ItemDispUnit_o *v62; // x27
  __int64 v63; // x0
  int32_t v64; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4217613 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_GiftEntity___ctor__, logDataArray);
    sub_B0D8A4(&System_Comparison_GiftEntity__TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__, v12);
    sub_B0D8A4(&FortuneBonusResultDialog___c_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_6461/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, v14);
    this = (FortuneBonusResultDialog_o *)sub_B0D8A4(&StringLiteral_6460/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, v15);
    byte_4217613 = 1;
  }
  if ( !logDataArray || (rewardDispUnitArray = v4->fields.rewardDispUnitArray) == 0LL )
LABEL_66:
    sub_B0D97C(this);
  max_length = rewardDispUnitArray->max_length;
  if ( max_length >= (signed int)logDataArray->max_length && max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= rewardDispUnitArray->max_length )
        goto LABEL_68;
      v19 = (int)v18;
      v20 = rewardDispUnitArray->m_Items[v18];
      if ( !v20 )
        goto LABEL_66;
      targetDay = v20->fields.targetDay;
      dayLabel = v20->fields.dayLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6460/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, 0LL);
      v64 = targetDay;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
      v25 = System_String__Format(v23, v24, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        (FortuneBonusResultDialog_o *)v25,
        dayLabel,
        v25,
        v4->fields.dayLabelWidth,
        v26);
      FortuneBonusLogData = FortuneBonusResultDialog__GetFortuneBonusLogData(v4, targetDay, v27);
      if ( FortuneBonusLogData )
      {
        this = (FortuneBonusResultDialog_o *)FortuneBonusResultDialog__GetFortuneBonusDetailData(
                                               v4,
                                               FortuneBonusLogData->fields.idx,
                                               v29);
        if ( this )
        {
          v31 = v4->fields.rewardDispUnitArray;
          if ( !v31 )
            goto LABEL_66;
          if ( (unsigned int)v19 >= v31->max_length )
            goto LABEL_68;
          v32 = v31->m_Items[v19];
          if ( !v32 )
            goto LABEL_66;
          v33 = this;
          FortuneBonusResultDialog__SetTextAndCondensedScale(
            this,
            v32->fields.fortuneName,
            (System_String_o *)this->fields.basePanel,
            v4->fields.fortuneNameWidth,
            v30);
          v34 = v4->fields.rewardDispUnitArray;
          if ( !v34 )
            goto LABEL_66;
          if ( (unsigned int)v19 >= v34->max_length )
            goto LABEL_68;
          v35 = v34->m_Items[v19];
          if ( !v35 )
            goto LABEL_66;
          this = (FortuneBonusResultDialog_o *)v35->fields.fortuneNoName;
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
          this = (FortuneBonusResultDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GiftMaster___);
          if ( !this )
            goto LABEL_66;
          this = (FortuneBonusResultDialog_o *)GiftMaster__GetListById(
                                                 (GiftMaster_o *)this,
                                                 (int32_t)v33->fields.basePanelList,
                                                 0LL);
          if ( this )
          {
            v38 = this;
            if ( SLODWORD(this->fields.basePanel) >= 1 )
            {
              v39 = FortuneBonusResultDialog___c_TypeInfo;
              if ( (BYTE3(FortuneBonusResultDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !FortuneBonusResultDialog___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FortuneBonusResultDialog___c_TypeInfo);
                v39 = FortuneBonusResultDialog___c_TypeInfo;
              }
              static_fields = v39->static_fields;
              _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__21_0;
              if ( !_9__21_0 )
              {
                if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v39);
                  static_fields = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                }
                v42 = (Il2CppObject *)static_fields->__9;
                _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                                       System_Comparison_GiftEntity__TypeInfo,
                                                                                       v36,
                                                                                       v37);
                System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
                  _9__21_0,
                  v42,
                  Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__,
                  (const MethodInfo_2412E90 *)Method_System_Comparison_GiftEntity___ctor__);
                v43 = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                v43->__9__21_0 = (struct System_Comparison_GiftEntity__o *)_9__21_0;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v43->__9__21_0,
                  (System_Int32_array **)_9__21_0,
                  v44,
                  v45,
                  v46,
                  v47,
                  v48,
                  v49);
              }
              System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
                (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v38,
                (System_Comparison_T__o *)_9__21_0,
                (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
              v51 = v4->fields.rewardDispUnitArray;
              if ( !v51 )
                goto LABEL_66;
              if ( (unsigned int)v19 >= v51->max_length )
                goto LABEL_68;
              FortuneBonusResultDialog__SetupRewardDispUnit(
                v4,
                v51->m_Items[v19],
                (System_Collections_Generic_List_GiftEntity__o *)v38,
                v50);
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
        this = (FortuneBonusResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6461/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, 0LL);
        v52 = v4->fields.rewardDispUnitArray;
        if ( !v52 )
          goto LABEL_66;
        if ( (unsigned int)v19 >= v52->max_length )
          goto LABEL_68;
        v53 = v52->m_Items[v19];
        if ( !v53 )
          goto LABEL_66;
        v54 = (System_String_o *)this;
        this = (FortuneBonusResultDialog_o *)v53->fields.fortuneName;
        if ( !this )
          goto LABEL_66;
        this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v55 = v4->fields.rewardDispUnitArray;
        if ( !v55 )
          goto LABEL_66;
        if ( (unsigned int)v19 >= v55->max_length )
          goto LABEL_68;
        v56 = v55->m_Items[v19];
        if ( !v56 )
          goto LABEL_66;
        this = (FortuneBonusResultDialog_o *)v56->fields.fortuneNoName;
        if ( !this )
          goto LABEL_66;
        UILabel__set_text((UILabel_o *)this, v54, 0LL);
        v57 = v4->fields.rewardDispUnitArray;
        if ( !v57 )
          goto LABEL_66;
        if ( (unsigned int)v19 >= v57->max_length )
          goto LABEL_68;
        v58 = v57->m_Items[v19];
        if ( !v58 )
          goto LABEL_66;
        itemDispUnitArray = v58->fields.itemDispUnitArray;
        if ( !itemDispUnitArray )
          goto LABEL_66;
        v60 = itemDispUnitArray->max_length;
        if ( v60 >= 1 )
        {
          v61 = 0;
          while ( v61 < v60 )
          {
            v62 = itemDispUnitArray->m_Items[v61];
            if ( !v62 )
              goto LABEL_66;
            this = (FortuneBonusResultDialog_o *)v62->fields.itemName;
            if ( !this )
              goto LABEL_66;
            this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !this )
              goto LABEL_66;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FortuneBonusResultDialog_o *)v62->fields.itemNoName;
            if ( !this )
              goto LABEL_66;
            UILabel__set_text((UILabel_o *)this, v54, 0LL);
            v60 = itemDispUnitArray->max_length;
            if ( (int)++v61 >= v60 )
              goto LABEL_64;
          }
LABEL_68:
          v63 = sub_B0D9A8(this);
          sub_B0D948(v63, 0LL);
        }
      }
LABEL_64:
      v18 = v19 + 1;
      if ( (int)v19 + 1 >= max_length )
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
  __int64 v8; // x1
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x9
  int32_t size; // w8
  __int64 v11; // x9
  __int64 v12; // x24
  __int64 i; // x25
  unsigned __int64 v14; // x28
  GiftEntity_o *v15; // x2
  struct FortuneBonusResultDialog_ItemDispUnit_array *v16; // x8
  __int64 v17; // x9
  __int64 v18; // x0

  v7 = this;
  if ( (byte_4217614 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, rewardDispUnit);
    this = (FortuneBonusResultDialog_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v8);
    byte_4217614 = 1;
  }
  if ( !rewardDispUnit || (itemDispUnitArray = rewardDispUnit->fields.itemDispUnitArray) == 0LL || !giftEntList )
LABEL_23:
    sub_B0D97C(this);
  size = giftEntList->fields._size;
  v11 = *(_QWORD *)&itemDispUnitArray->max_length;
  if ( size >= (int)v11 && (int)v11 >= 1 )
  {
    v12 = (int)v11;
    for ( i = 4LL; ; ++i )
    {
      v14 = i - 4;
      if ( i - 4 >= (unsigned __int64)(unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = (GiftEntity_o *)*((_QWORD *)&giftEntList->fields._items->obj.klass + i);
      if ( v15 )
      {
        v16 = rewardDispUnit->fields.itemDispUnitArray;
        if ( i == 4 )
          v17 = 136LL;
        else
          v17 = 140LL;
        if ( !v16 )
          goto LABEL_23;
        if ( v14 >= v16->max_length )
        {
          v18 = sub_B0D9A8(this);
          sub_B0D948(v18, 0LL);
        }
        if ( v14 >= (unsigned int)giftEntList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        FortuneBonusResultDialog__SetupItemDispUnitArray(
          v7,
          *((FortuneBonusResultDialog_ItemDispUnit_o **)&v16->obj.klass + i),
          v15,
          *(_DWORD *)((char *)&v7->klass + v17),
          v4);
      }
      if ( i - 3 >= v12 )
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
  sub_B0D840(p_clickFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_421761E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15535/*"Window/OkBtn"*/, method);
    byte_421761E = 1;
  }
  return (System_String_o *)StringLiteral_15535/*"Window/OkBtn"*/;
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct FortuneBonusResultDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4210F5C & 1) == 0 )
  {
    sub_B0D8A4(&FortuneBonusResultDialog___c_TypeInfo, v1);
    byte_4210F5C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(FortuneBonusResultDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = FortuneBonusResultDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FortuneBonusResultDialog___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return n->fields.idx == this->fields.index;
}