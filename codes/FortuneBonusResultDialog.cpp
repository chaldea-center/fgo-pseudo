void __fastcall FortuneBonusResultDialog___ctor(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBDDF & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDDF = 1;
  }
  *(_OWORD *)&this->fields.dayLabelWidth = xmmword_32B4CA0;
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
        v11 = sub_B5D6C8(this);
        sub_B5D668(v11, 0LL);
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
    sub_B5D69C(this, method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EBDD9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FortuneBonusResultDialog_EndClose__, v10, v11, v12);
    byte_42EBDD9 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_FortuneBonusResultDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


ItemIconComponent_o *__fastcall FortuneBonusResultDialog__CreateItemIcon(
        FortuneBonusResultDialog_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *itemIconBasePrefab; // x21
  bool v13; // w8
  ItemIconComponent_o *result; // x0
  struct UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Object_o *v16; // x20
  bool v17; // w8
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EBDD8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, (_DWORD)parent, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EBDD8 = 1;
  }
  itemIconBasePrefab = (UnityEngine_Object_o *)this->fields.itemIconBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Equality(itemIconBasePrefab, 0LL, 0LL);
  result = 0LL;
  if ( !v13 )
  {
    v15 = this->fields.itemIconBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)v15,
                                    (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v17 = UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
    result = 0LL;
    if ( !v17 )
    {
      GameObjectExtensions__SafeSetParent_32436524((UnityEngine_GameObject_o *)v16, parent, 0LL);
      if ( !v16 )
        sub_B5D69C(v18, v19);
      return (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v16,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
  sub_B5D560(v2, 0LL, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_42EBDDD & 1) == 0 )
  {
    this = (FortuneBonusResultDialog_o *)sub_B5D5C4(&StringLiteral_9361/*"N0"*/, gType, (_DWORD)itemEnt, *(_QWORD *)&num);
    byte_42EBDDD = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_B5D69C(this, *(_QWORD *)&gType);
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
  v9 = System_Int32__ToString_39741776((int32_t)&v11, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
  return System_String__Concat_44577788(v8, v9, 0LL);
}


CommonUI_FortuneBonusDetailData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusDetailData(
        FortuneBonusResultDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  FortuneBonusResultDialog___c__DisplayClass27_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusDetailData_array *details; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_42EBDD7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_CommonUI_FortuneBonusDetailData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__, v12, v13, v14);
    sub_B5D5C4(&FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo, v15, v16, v17);
    byte_42EBDD7 = 1;
  }
  v18 = (FortuneBonusResultDialog___c__DisplayClass27_0_o *)sub_B5D694(FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo);
  FortuneBonusResultDialog___c__DisplayClass27_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.index = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v18,
    Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_CommonUI_FortuneBonusDetailData__bool___ctor__);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)details,
                                                (System_Func_T__bool__o *)v23,
                                                (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
}


CommonUI_FortuneBonusRewardData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusLogData(
        FortuneBonusResultDialog_o *this,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  FortuneBonusResultDialog___c__DisplayClass26_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_42EBDD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___, day, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_CommonUI_FortuneBonusRewardData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__, v12, v13, v14);
    sub_B5D5C4(&FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo, v15, v16, v17);
    byte_42EBDD6 = 1;
  }
  v18 = (FortuneBonusResultDialog___c__DisplayClass26_0_o *)sub_B5D694(FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo);
  FortuneBonusResultDialog___c__DisplayClass26_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.day = day;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  logs = fortuneBonusData->fields.logs;
  if ( !logs || !*(_QWORD *)&logs->max_length )
    return 0LL;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v18,
    Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_CommonUI_FortuneBonusRewardData__bool___ctor__);
  return (CommonUI_FortuneBonusRewardData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)logs,
                                                (System_Func_T__bool__o *)v23,
                                                (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  LocalizationManager_c *v23; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_o *age; // x1
  FortuneBonusResultDialog_o *v40; // x0
  const MethodInfo *v41; // x4
  System_String_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EBDDC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, (_DWORD)giftEnt, (_DWORD)nameText, countText);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42EBDDC = 1;
  }
  entity = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)giftEnt, (_DWORD)nameText, countText);
    byte_42E6772 = 1;
  }
  v23 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v23->static_fields->unknownNameText;
  *nameText = unknownNameText;
  sub_B5D560(
    (BattleServantConfConponent_o *)nameText,
    (System_Int32_array **)unknownNameText,
    (System_String_array **)nameText,
    (System_String_array **)countText,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)countText,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !giftEnt )
    goto LABEL_21;
  if ( giftEnt->fields.type != 2 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  giftEnt->fields.objectId,
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return;
  if ( !entity )
LABEL_21:
    sub_B5D69C(Master_WarQuestSelectionMaster, v32);
  age = entity->fields.age;
  *nameText = age;
  sub_B5D560((BattleServantConfConponent_o *)nameText, (System_Int32_array **)age, v33, v34, v35, v36, v37, v38);
  v42 = FortuneBonusResultDialog__GetCountText(
          v40,
          giftEnt->fields.type,
          (ItemEntity_o *)entity,
          giftEnt->fields.num,
          v41);
  *countText = v42;
  sub_B5D560((BattleServantConfConponent_o *)countText, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
}


void __fastcall FortuneBonusResultDialog__Init(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EBDD1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EBDD1 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.okBtnLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortuneBonusResultDialog__OnClickButton(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42EBDDA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FortuneBonusResultDialog_OnClickButton__, v5, v6, v7);
    sub_B5D5C4(&Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, v8, v9, v10);
    byte_42EBDDA = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v11 = Method_FortuneBonusResultDialog_OnClickButton__;
    if ( (*((_BYTE *)Method_FortuneBonusResultDialog_OnClickButton__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_FortuneBonusResultDialog_OnClickButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, 0LL);
    FortuneBonusResultDialog__Close(this, v13, v14);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Action_o *v33; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  UnityEngine_Transform_o *transform; // x22
  int v37; // s0
  UILabel_o *titleLabel; // x22
  UILabel_o *subTitleLabel; // x22
  UILabel_o *okBtnLabel; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UISprite_array *lineSpriteArray; // x8
  unsigned __int64 v50; // x23
  unsigned __int64 max_length; // x9
  UISprite_o *v52; // x22
  MethodInfo *v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x1
  __int64 v61; // x0

  if ( (byte_42EBDD2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)fortuneBonus, (_DWORD)nextAction, isEnabledOpenAnim);
    sub_B5D5C4(&AtlasManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_FortuneBonusResultDialog__Open_b__20_0__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17643/*"chronology_line"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_6525/*"FORTUNE_BONUS_RESULT_TITLE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_6521/*"FORTUNE_BONUS_RESULT_BUTTON"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_6524/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17678/*"clear00"*/, v30, v31, v32);
    byte_42EBDD2 = 1;
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  if ( isEnabledOpenAnim )
  {
    v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_FortuneBonusResultDialog__Open_b__20_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_17678/*"clear00"*/, 0LL);
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
    *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_25;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v37, 0LL);
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6525/*"FORTUNE_BONUS_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6524/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, 0LL);
  if ( !subTitleLabel
    || (UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL),
        okBtnLabel = this->fields.okBtnLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6521/*"FORTUNE_BONUS_RESULT_BUTTON"*/, 0LL),
        !okBtnLabel)
    || (UILabel__set_text(okBtnLabel, (System_String_o *)gameObject, 0LL),
        (lineSpriteArray = this->fields.lineSpriteArray) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(gameObject, v35);
  }
  v50 = 0LL;
  while ( 1 )
  {
    max_length = lineSpriteArray->max_length;
    if ( (__int64)v50 >= (int)max_length )
      break;
    if ( v50 >= max_length )
    {
      v61 = sub_B5D6C8(gameObject);
      sub_B5D668(v61, 0LL);
    }
    v52 = lineSpriteArray->m_Items[v50];
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v52, (System_String_o *)StringLiteral_17643/*"chronology_line"*/, 0LL);
    lineSpriteArray = this->fields.lineSpriteArray;
    ++v50;
    if ( !lineSpriteArray )
      goto LABEL_25;
  }
  this->fields.fortuneBonusData = fortuneBonus;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fortuneBonusData,
    (System_Int32_array **)fortuneBonus,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( fortuneBonusData )
  {
    logs = fortuneBonusData->fields.logs;
    if ( logs )
    {
      if ( *(_QWORD *)&logs->max_length )
        FortuneBonusResultDialog__SetupRewardDisp(this, logs, v53);
    }
  }
  this->fields.clickFunc = nextAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)nextAction,
    (System_String_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58);
}


void __fastcall FortuneBonusResultDialog__Release(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19

  if ( (byte_42EBDDB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDDB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(v7, 0LL);
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
    sub_B5D69C(this, 0LL);
  UILabel__set_text(targetLebel, text, 0LL);
  if ( width >= 1 )
    UILabel__SetCondensedScale(targetLebel, width, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortuneBonusResultDialog__SetupItemDispUnitArray(
        FortuneBonusResultDialog_o *this,
        FortuneBonusResultDialog_ItemDispUnit_o *itemDispUnit,
        GiftEntity_o *giftEnt,
        int32_t textWidth,
        const MethodInfo *method)
{
  FortuneBonusResultDialog_ItemDispUnit_o *v7; // x19
  FortuneBonusResultDialog_o *v8; // x22
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *ItemIcon; // x23
  int32_t num; // w3
  const MethodInfo *v17; // x4
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  const MethodInfo *v20; // x4
  System_String_o *countText; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-28h] BYREF

  v7 = itemDispUnit;
  v8 = this;
  if ( (byte_42EBDD5 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)itemDispUnit, (_DWORD)giftEnt, *(_QWORD *)&textWidth);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    this = (FortuneBonusResultDialog_o *)sub_B5D5C4(&StringLiteral_10629/*"PRESENT_INFO"*/, v12, v13, v14);
    byte_42EBDD5 = 1;
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
        ItemIconComponent__SetItemImage_28499756(
          (ItemIconComponent_o *)ItemIcon,
          (int32_t)itemDispUnit,
          giftEnt->fields.objectId,
          num,
          0LL);
      }
      FortuneBonusResultDialog__GetGiftInfo(v8, giftEnt, &nameText, &countText, v17);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10629/*"PRESENT_INFO"*/, 0LL);
      v19 = System_String__Format_44573324(v18, (Il2CppObject *)nameText, (Il2CppObject *)countText, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        (FortuneBonusResultDialog_o *)v19,
        v7->fields.itemName,
        v19,
        textWidth,
        v20);
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
      sub_B5D69C(this, itemDispUnit);
    }
  }
}


void __fastcall FortuneBonusResultDialog__SetupRewardDisp(
        FortuneBonusResultDialog_o *this,
        CommonUI_FortuneBonusRewardData_array *logDataArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FortuneBonusResultDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  struct FortuneBonusResultDialog_RewardDispUnit_array *rewardDispUnitArray; // x8
  int max_length; // w23
  il2cpp_array_size_t v41; // w9
  __int64 v42; // x28
  FortuneBonusResultDialog_RewardDispUnit_o *v43; // x8
  int32_t targetDay; // w20
  UILabel_o *dayLabel; // x21
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  const MethodInfo *v49; // x4
  const MethodInfo *v50; // x2
  CommonUI_FortuneBonusRewardData_o *FortuneBonusLogData; // x0
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x4
  struct FortuneBonusResultDialog_RewardDispUnit_array *v54; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v55; // x8
  FortuneBonusResultDialog_o *v56; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v57; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v58; // x8
  FortuneBonusResultDialog_o *v59; // x20
  FortuneBonusResultDialog___c_c *v60; // x0
  struct FortuneBonusResultDialog___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__21_0; // x21
  Il2CppObject *v63; // x22
  struct FortuneBonusResultDialog___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  const MethodInfo *v71; // x3
  struct FortuneBonusResultDialog_RewardDispUnit_array *v72; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v73; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v74; // x8
  System_String_o *v75; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v76; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v77; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v78; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v79; // x8
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x21
  int v81; // w8
  unsigned int v82; // w22
  FortuneBonusResultDialog_ItemDispUnit_o *v83; // x27
  __int64 v84; // x0
  int32_t v85; // [xsp+Ch] [xbp-54h] BYREF

  v5 = this;
  if ( (byte_42EBDD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_GiftEntity___ctor__, (_DWORD)logDataArray, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_GiftEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__, v27, v28, v29);
    sub_B5D5C4(&FortuneBonusResultDialog___c_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_6523/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, v33, v34, v35);
    this = (FortuneBonusResultDialog_o *)sub_B5D5C4(&StringLiteral_6522/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, v36, v37, v38);
    byte_42EBDD3 = 1;
  }
  if ( !logDataArray || (rewardDispUnitArray = v5->fields.rewardDispUnitArray) == 0LL )
LABEL_66:
    sub_B5D69C(this, logDataArray);
  max_length = rewardDispUnitArray->max_length;
  if ( max_length >= (signed int)logDataArray->max_length && max_length >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      if ( v41 >= rewardDispUnitArray->max_length )
        goto LABEL_68;
      v42 = (int)v41;
      v43 = rewardDispUnitArray->m_Items[v41];
      if ( !v43 )
        goto LABEL_66;
      targetDay = v43->fields.targetDay;
      dayLabel = v43->fields.dayLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_6522/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, 0LL);
      v85 = targetDay;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
      v48 = System_String__Format(v46, v47, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        (FortuneBonusResultDialog_o *)v48,
        dayLabel,
        v48,
        v5->fields.dayLabelWidth,
        v49);
      FortuneBonusLogData = FortuneBonusResultDialog__GetFortuneBonusLogData(v5, targetDay, v50);
      if ( FortuneBonusLogData )
      {
        this = (FortuneBonusResultDialog_o *)FortuneBonusResultDialog__GetFortuneBonusDetailData(
                                               v5,
                                               FortuneBonusLogData->fields.idx,
                                               v52);
        if ( this )
        {
          v54 = v5->fields.rewardDispUnitArray;
          if ( !v54 )
            goto LABEL_66;
          if ( (unsigned int)v42 >= v54->max_length )
            goto LABEL_68;
          v55 = v54->m_Items[v42];
          if ( !v55 )
            goto LABEL_66;
          v56 = this;
          FortuneBonusResultDialog__SetTextAndCondensedScale(
            this,
            v55->fields.fortuneName,
            (System_String_o *)this->fields.basePanel,
            v5->fields.fortuneNameWidth,
            v53);
          v57 = v5->fields.rewardDispUnitArray;
          if ( !v57 )
            goto LABEL_66;
          if ( (unsigned int)v42 >= v57->max_length )
            goto LABEL_68;
          v58 = v57->m_Items[v42];
          if ( !v58 )
            goto LABEL_66;
          this = (FortuneBonusResultDialog_o *)v58->fields.fortuneNoName;
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
          this = (FortuneBonusResultDialog_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
          if ( !this )
            goto LABEL_66;
          this = (FortuneBonusResultDialog_o *)GiftMaster__GetListById(
                                                 (GiftMaster_o *)this,
                                                 (int32_t)v56->fields.basePanelList,
                                                 0LL);
          if ( this )
          {
            v59 = this;
            if ( SLODWORD(this->fields.basePanel) >= 1 )
            {
              v60 = FortuneBonusResultDialog___c_TypeInfo;
              if ( (BYTE3(FortuneBonusResultDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !FortuneBonusResultDialog___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FortuneBonusResultDialog___c_TypeInfo);
                v60 = FortuneBonusResultDialog___c_TypeInfo;
              }
              static_fields = v60->static_fields;
              _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__21_0;
              if ( !_9__21_0 )
              {
                if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v60);
                  static_fields = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                }
                v63 = (Il2CppObject *)static_fields->__9;
                _9__21_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_GiftEntity__TypeInfo);
                System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
                  _9__21_0,
                  v63,
                  Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__,
                  (const MethodInfo_249B1FC *)Method_System_Comparison_GiftEntity___ctor__);
                v64 = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                v64->__9__21_0 = (struct System_Comparison_GiftEntity__o *)_9__21_0;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v64->__9__21_0,
                  (System_Int32_array **)_9__21_0,
                  v65,
                  v66,
                  v67,
                  v68,
                  v69,
                  v70);
              }
              System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
                (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v59,
                (System_Comparison_T__o *)_9__21_0,
                (const MethodInfo_305909C *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
              v72 = v5->fields.rewardDispUnitArray;
              if ( !v72 )
                goto LABEL_66;
              if ( (unsigned int)v42 >= v72->max_length )
                goto LABEL_68;
              FortuneBonusResultDialog__SetupRewardDispUnit(
                v5,
                v72->m_Items[v42],
                (System_Collections_Generic_List_GiftEntity__o *)v59,
                v71);
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
        this = (FortuneBonusResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6523/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, 0LL);
        v73 = v5->fields.rewardDispUnitArray;
        if ( !v73 )
          goto LABEL_66;
        if ( (unsigned int)v42 >= v73->max_length )
          goto LABEL_68;
        v74 = v73->m_Items[v42];
        if ( !v74 )
          goto LABEL_66;
        v75 = (System_String_o *)this;
        this = (FortuneBonusResultDialog_o *)v74->fields.fortuneName;
        if ( !this )
          goto LABEL_66;
        this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v76 = v5->fields.rewardDispUnitArray;
        if ( !v76 )
          goto LABEL_66;
        if ( (unsigned int)v42 >= v76->max_length )
          goto LABEL_68;
        v77 = v76->m_Items[v42];
        if ( !v77 )
          goto LABEL_66;
        this = (FortuneBonusResultDialog_o *)v77->fields.fortuneNoName;
        if ( !this )
          goto LABEL_66;
        UILabel__set_text((UILabel_o *)this, v75, 0LL);
        v78 = v5->fields.rewardDispUnitArray;
        if ( !v78 )
          goto LABEL_66;
        if ( (unsigned int)v42 >= v78->max_length )
          goto LABEL_68;
        v79 = v78->m_Items[v42];
        if ( !v79 )
          goto LABEL_66;
        itemDispUnitArray = v79->fields.itemDispUnitArray;
        if ( !itemDispUnitArray )
          goto LABEL_66;
        v81 = itemDispUnitArray->max_length;
        if ( v81 >= 1 )
        {
          v82 = 0;
          while ( v82 < v81 )
          {
            v83 = itemDispUnitArray->m_Items[v82];
            if ( !v83 )
              goto LABEL_66;
            this = (FortuneBonusResultDialog_o *)v83->fields.itemName;
            if ( !this )
              goto LABEL_66;
            this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !this )
              goto LABEL_66;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FortuneBonusResultDialog_o *)v83->fields.itemNoName;
            if ( !this )
              goto LABEL_66;
            UILabel__set_text((UILabel_o *)this, v75, 0LL);
            v81 = itemDispUnitArray->max_length;
            if ( (int)++v82 >= v81 )
              goto LABEL_64;
          }
LABEL_68:
          v84 = sub_B5D6C8(this);
          sub_B5D668(v84, 0LL);
        }
      }
LABEL_64:
      v41 = v42 + 1;
      if ( (int)v42 + 1 >= max_length )
        return;
      rewardDispUnitArray = v5->fields.rewardDispUnitArray;
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x9
  int32_t size; // w8
  __int64 v13; // x9
  __int64 v14; // x24
  __int64 i; // x25
  unsigned __int64 v16; // x28
  GiftEntity_o *v17; // x2
  struct FortuneBonusResultDialog_ItemDispUnit_array *v18; // x8
  __int64 v19; // x9
  __int64 v20; // x0

  v7 = this;
  if ( (byte_42EBDD4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_GiftEntity__get_Count__,
      (_DWORD)rewardDispUnit,
      (_DWORD)giftEntList,
      method);
    this = (FortuneBonusResultDialog_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_GiftEntity__get_Item__,
                                           v8,
                                           v9,
                                           v10);
    byte_42EBDD4 = 1;
  }
  if ( !rewardDispUnit || (itemDispUnitArray = rewardDispUnit->fields.itemDispUnitArray) == 0LL || !giftEntList )
LABEL_23:
    sub_B5D69C(this, rewardDispUnit);
  size = giftEntList->fields._size;
  v13 = *(_QWORD *)&itemDispUnitArray->max_length;
  if ( size >= (int)v13 && (int)v13 >= 1 )
  {
    v14 = (int)v13;
    for ( i = 4LL; ; ++i )
    {
      v16 = i - 4;
      if ( i - 4 >= (unsigned __int64)(unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v17 = (GiftEntity_o *)*((_QWORD *)&giftEntList->fields._items->obj.klass + i);
      if ( v17 )
      {
        v18 = rewardDispUnit->fields.itemDispUnitArray;
        if ( i == 4 )
          v19 = 136LL;
        else
          v19 = 140LL;
        if ( !v18 )
          goto LABEL_23;
        if ( v16 >= v18->max_length )
        {
          v20 = sub_B5D6C8(this);
          sub_B5D668(v20, 0LL);
        }
        if ( v16 >= (unsigned int)giftEntList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        FortuneBonusResultDialog__SetupItemDispUnitArray(
          v7,
          *((FortuneBonusResultDialog_ItemDispUnit_o **)&v18->obj.klass + i),
          v17,
          *(_DWORD *)((char *)&v7->klass + v19),
          v4);
      }
      if ( i - 3 >= v14 )
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
  sub_B5D560(p_clickFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBDDE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15678/*"Window/OkBtn"*/, (_DWORD)method, v2, v3);
    byte_42EBDDE = 1;
  }
  return (System_String_o *)StringLiteral_15678/*"Window/OkBtn"*/;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct FortuneBonusResultDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42E56E0 & 1) == 0 )
  {
    sub_B5D5C4(&FortuneBonusResultDialog___c_TypeInfo, v1, v2, v3);
    byte_42E56E0 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(FortuneBonusResultDialog___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = FortuneBonusResultDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FortuneBonusResultDialog___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return n->fields.idx == this->fields.index;
}