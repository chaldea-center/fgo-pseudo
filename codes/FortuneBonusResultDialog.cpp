void __fastcall FortuneBonusResultDialog___ctor(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A728E3 & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    byte_4A728E3 = 1;
  }
  *(_OWORD *)&this->fields.dayLabelWidth = xmmword_BB8640;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
        sub_1B90274(this, method);
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
    sub_1B9026C(this, method);
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
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A728DD & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_FortuneBonusResultDialog_EndClose__, v6);
    byte_4A728DD = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FortuneBonusResultDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


ItemIconComponent_o *__fastcall FortuneBonusResultDialog__CreateItemIcon(
        FortuneBonusResultDialog_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *itemIconBasePrefab; // x21
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x20
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A728DC & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, parent);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    byte_4A728DC = 1;
  }
  itemIconBasePrefab = (UnityEngine_Object_o *)this->fields.itemIconBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(itemIconBasePrefab, 0LL, 0LL) )
    return 0LL;
  v8 = (Il2CppObject *)this->fields.itemIconBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         v8,
         (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
    return 0LL;
  GameObjectExtensions__SafeSetParent_33776688((UnityEngine_GameObject_o *)v9, parent, 0LL);
  if ( !v9 )
    sub_1B9026C(v11, v12);
  return (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v9,
                                  (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
}


void __fastcall FortuneBonusResultDialog__EndClose(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  FortuneBonusResultDialog_o *v2; // x19
  System_Action_o *closeEndFunc; // t1
  int32_t v4; // w2
  int32_t v5; // w3

  v2 = this;
  FortuneBonusResultDialog__Init(this, method);
  closeEndFunc = v2->fields.closeEndFunc;
  v2 = (FortuneBonusResultDialog_o *)((char *)v2 + 184);
  ActionExtensions__Call(closeEndFunc, 0LL);
  v2->klass = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v2, 0, v4, v5);
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
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = num;
  if ( (byte_4A728E1 & 1) == 0 )
  {
    this = (FortuneBonusResultDialog_o *)sub_1B90010(&StringLiteral_9210/*"N0"*/, *(_QWORD *)&gType);
    byte_4A728E1 = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_1B9026C(this, *(_QWORD *)&gType);
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
  v9 = System_Int32__ToString_62592372((int32_t)&v11, (System_String_o *)StringLiteral_9210/*"N0"*/, 0LL);
  return System_String__Concat_61787092(v8, v9, 0LL);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusDetailData_array *details; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4A728DB & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___, *(_QWORD *)&index);
    sub_1B90010(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo, v5);
    sub_1B90010(&Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__, v6);
    sub_1B90010(&FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo, v7);
    byte_4A728DB = 1;
  }
  v8 = sub_1B9025C(FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B9026C(v9, v10);
  *(_DWORD *)(v8 + 16) = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v13 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__,
    0LL);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_object_(
                                                (System_Object_array *)details,
                                                (System_Func_T__bool__o *)v13,
                                                (const MethodInfo_2E7A1B0 *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4A728DA & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___, *(_QWORD *)&day);
    sub_1B90010(&System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo, v5);
    sub_1B90010(&Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__, v6);
    sub_1B90010(&FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo, v7);
    byte_4A728DA = 1;
  }
  v8 = sub_1B9025C(FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B9026C(v9, v10);
  *(_DWORD *)(v8 + 16) = day;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  logs = fortuneBonusData->fields.logs;
  if ( !logs || !*(_QWORD *)&logs->max_length )
    return 0LL;
  v13 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__,
    0LL);
  return (CommonUI_FortuneBonusRewardData_o *)BasicHelper__Find_object_(
                                                (System_Object_array *)logs,
                                                (System_Func_T__bool__o *)v13,
                                                (const MethodInfo_2E7A1B0 *)Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___);
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
    sub_1B90274(this, method);
  return rewards->m_Items[0];
}


void __fastcall FortuneBonusResultDialog__GetGiftInfo(
        FortuneBonusResultDialog_o *this,
        GiftEntity_o *giftEnt,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  LocalizationManager_c *v12; // x0
  System_String_o *unknownNameText; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *monitor; // x1
  FortuneBonusResultDialog_o *v21; // x0
  const MethodInfo *v22; // x4
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A728E0 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_ItemMaster___, giftEnt);
    sub_1B90010(&DataManager_TypeInfo, v8);
    sub_1B90010(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1B90010(&LocalizationManager_TypeInfo, v10);
    sub_1B90010(&StringLiteral_1/*""*/, v11);
    byte_4A728E0 = 1;
  }
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A6B70D )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, giftEnt);
    byte_4A6B70D = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v12->static_fields->unknownNameText;
  *nameText = unknownNameText;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)nameText,
    (int32_t)unknownNameText,
    (int32_t)nameText,
    (int32_t)countText);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)countText, (int32_t)StringLiteral_1/*""*/, v14, v15);
  if ( !giftEnt )
    goto LABEL_18;
  if ( giftEnt->fields.type != 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_18;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    giftEnt->fields.objectId,
                                    (const MethodInfo_312C5FC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_18:
    sub_1B9026C(Master_object, v17);
  monitor = (System_String_o *)entity[1].monitor;
  *nameText = monitor;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)nameText, (int32_t)monitor, v18, v19);
  v23 = FortuneBonusResultDialog__GetCountText(
          v21,
          giftEnt->fields.type,
          (ItemEntity_o *)entity,
          giftEnt->fields.num,
          v22);
  *countText = v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)countText, (int32_t)v23, v24, v25);
}


void __fastcall FortuneBonusResultDialog__Init(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A728D5 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A728D5 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.okBtnLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B9026C(titleLabel, method);
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
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4A728DE & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_FortuneBonusResultDialog_OnClickButton__, v3);
    sub_1B90010(&Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, v4);
    byte_4A728DE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_FortuneBonusResultDialog_OnClickButton__;
    if ( (*((_BYTE *)Method_FortuneBonusResultDialog_OnClickButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B90028(Method_FortuneBonusResultDialog_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, 0LL);
    FortuneBonusResultDialog__Close(this, v7, v8);
  }
}


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
  System_Action_o *v17; // x22
  __int64 gameObject; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *subTitleLabel; // x22
  UILabel_o *okBtnLabel; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  struct UISprite_array *lineSpriteArray; // x8
  unsigned __int64 v27; // x23
  unsigned __int64 max_length; // x9
  UISprite_o *v29; // x22
  const MethodInfo *v30; // x2
  int32_t v31; // w3
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x1

  if ( (byte_4A728D6 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, fortuneBonus);
    sub_1B90010(&AtlasManager_TypeInfo, v9);
    sub_1B90010(&Method_FortuneBonusResultDialog__Open_b__20_0__, v10);
    sub_1B90010(&LocalizationManager_TypeInfo, v11);
    sub_1B90010(&StringLiteral_17994/*"chronology_line"*/, v12);
    sub_1B90010(&StringLiteral_6481/*"FORTUNE_BONUS_RESULT_TITLE"*/, v13);
    sub_1B90010(&StringLiteral_6477/*"FORTUNE_BONUS_RESULT_BUTTON"*/, v14);
    sub_1B90010(&StringLiteral_6480/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, v15);
    sub_1B90010(&StringLiteral_18028/*"clear00"*/, v16);
    byte_4A728D6 = 1;
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  if ( isEnabledOpenAnim )
  {
    v17 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_FortuneBonusResultDialog__Open_b__20_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
  }
  else
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_25;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_18028/*"clear00"*/, 0LL);
    gameObject = (__int64)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_25;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      1.0);
    gameObject = (__int64)this->fields.baseWindow;
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
    v20 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4A6A9C6 )
    {
      gameObject = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v19);
      byte_4A6A9C6 = 1;
    }
    if ( !v20 )
LABEL_25:
      sub_1B9026C(gameObject, v19);
    UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6481/*"FORTUNE_BONUS_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6480/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_25;
  UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL);
  okBtnLabel = this->fields.okBtnLabel;
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6477/*"FORTUNE_BONUS_RESULT_BUTTON"*/, 0LL);
  if ( !okBtnLabel )
    goto LABEL_25;
  UILabel__set_text(okBtnLabel, (System_String_o *)gameObject, 0LL);
  lineSpriteArray = this->fields.lineSpriteArray;
  if ( !lineSpriteArray )
    goto LABEL_25;
  v27 = 0LL;
  while ( 1 )
  {
    max_length = lineSpriteArray->max_length;
    if ( (__int64)v27 >= (int)max_length )
      break;
    if ( v27 >= max_length )
      sub_1B90274(gameObject, v19);
    v29 = lineSpriteArray->m_Items[v27];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = AtlasManager__SetEventUI(v29, (System_String_o *)StringLiteral_17994/*"chronology_line"*/, 0LL);
    lineSpriteArray = this->fields.lineSpriteArray;
    ++v27;
    if ( !lineSpriteArray )
      goto LABEL_25;
  }
  this->fields.fortuneBonusData = fortuneBonus;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fortuneBonusData, (int32_t)fortuneBonus, v24, v25);
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( fortuneBonusData )
  {
    logs = fortuneBonusData->fields.logs;
    if ( logs )
    {
      if ( *(_QWORD *)&logs->max_length )
        FortuneBonusResultDialog__SetupRewardDisp(this, logs, v30);
    }
  }
  this->fields.clickFunc = nextAction;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)nextAction, (int32_t)v30, v31);
}


void __fastcall FortuneBonusResultDialog__Release(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4A728DF & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A728DF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69539440(v5, 0LL);
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
    sub_1B9026C(this, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *ItemIcon; // x23
  int32_t num; // w3
  const MethodInfo *v13; // x4
  System_String_o *v14; // x0
  FortuneBonusResultDialog_o *v15; // x0
  const MethodInfo *v16; // x4
  Il2CppObject *v17; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-38h] BYREF

  v7 = itemDispUnit;
  v8 = this;
  if ( (byte_4A728D9 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, itemDispUnit);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    this = (FortuneBonusResultDialog_o *)sub_1B90010(&StringLiteral_10462/*"PRESENT_INFO"*/, v10);
    byte_4A728D9 = 1;
  }
  v17 = 0LL;
  nameText = 0LL;
  if ( giftEnt )
  {
    if ( !v7 )
      goto LABEL_22;
    ItemIcon = (UnityEngine_Object_o *)FortuneBonusResultDialog__CreateItemIcon(
                                         v8,
                                         v7->fields.itemIconRoot,
                                         (const MethodInfo *)giftEnt);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FortuneBonusResultDialog_o *)UnityEngine_Object__op_Equality(ItemIcon, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      itemDispUnit = (FortuneBonusResultDialog_ItemDispUnit_o *)(unsigned int)giftEnt->fields.prioredIconId;
      if ( (int)itemDispUnit < 1 )
      {
        if ( !ItemIcon )
          goto LABEL_22;
        ItemIconComponent__SetGift_38197016(
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
          goto LABEL_22;
        if ( giftEnt->fields.num <= 1 )
          num = -1;
        else
          num = giftEnt->fields.num;
        ItemIconComponent__SetItemImage_38200632(
          (ItemIconComponent_o *)ItemIcon,
          (int32_t)itemDispUnit,
          giftEnt->fields.objectId,
          num,
          0LL);
      }
      FortuneBonusResultDialog__GetGiftInfo(v8, giftEnt, &nameText, (System_String_o **)&v17, v13);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10462/*"PRESENT_INFO"*/, 0LL);
      v15 = (FortuneBonusResultDialog_o *)System_String__Format_61801464(v14, (Il2CppObject *)nameText, v17, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        v15,
        v7->fields.itemName,
        (System_String_o *)v15,
        textWidth,
        v16);
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
LABEL_22:
      sub_1B9026C(this, itemDispUnit);
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
  struct FortuneBonusResultDialog_RewardDispUnit_array *rewardDispUnitArray; // x8
  int max_length; // w23
  il2cpp_array_size_t v17; // w9
  __int64 v18; // x27
  FortuneBonusResultDialog_RewardDispUnit_o *v19; // x8
  int32_t targetDay; // w20
  UILabel_o *dayLabel; // x21
  System_String_o *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  FortuneBonusResultDialog_o *v27; // x0
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x2
  CommonUI_FortuneBonusRewardData_o *FortuneBonusLogData; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  struct FortuneBonusResultDialog_RewardDispUnit_array *v33; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v34; // x8
  FortuneBonusResultDialog_o *v35; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v36; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v37; // x8
  FortuneBonusResultDialog_o *v38; // x20
  FortuneBonusResultDialog___c_c *v39; // x0
  System_Comparison_T__o *_9__21_0; // x21
  struct FortuneBonusResultDialog_RewardDispUnit_array *v41; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v42; // x8
  FortuneBonusResultDialog_o *v43; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v44; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v45; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v46; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v47; // x8
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x21
  int v49; // w8
  unsigned int v50; // w22
  FortuneBonusResultDialog_ItemDispUnit_o *v51; // x28
  Il2CppObject *v52; // x22
  struct FortuneBonusResultDialog___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  const MethodInfo *v56; // x3
  struct FortuneBonusResultDialog_RewardDispUnit_array *v57; // x8
  int32_t v58; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4A728D7 & 1) == 0 )
  {
    sub_1B90010(&System_Comparison_GiftEntity__TypeInfo, logDataArray);
    sub_1B90010(&Method_DataManager_GetMaster_GiftMaster___, v5);
    sub_1B90010(&DataManager_TypeInfo, v6);
    sub_1B90010(&int_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v9);
    sub_1B90010(&LocalizationManager_TypeInfo, v10);
    sub_1B90010(&Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__, v11);
    sub_1B90010(&FortuneBonusResultDialog___c_TypeInfo, v12);
    sub_1B90010(&StringLiteral_6479/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, v13);
    this = (FortuneBonusResultDialog_o *)sub_1B90010(&StringLiteral_6478/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, v14);
    byte_4A728D7 = 1;
  }
  if ( !logDataArray || (rewardDispUnitArray = v4->fields.rewardDispUnitArray) == 0LL )
LABEL_63:
    sub_1B9026C(this, logDataArray);
  max_length = rewardDispUnitArray->max_length;
  if ( max_length >= (signed int)logDataArray->max_length && max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= rewardDispUnitArray->max_length )
        goto LABEL_65;
      v18 = (int)v17;
      v19 = rewardDispUnitArray->m_Items[v17];
      if ( !v19 )
        goto LABEL_63;
      targetDay = v19->fields.targetDay;
      dayLabel = v19->fields.dayLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6478/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, 0LL);
      v58 = targetDay;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v23, v24, v25);
      v27 = (FortuneBonusResultDialog_o *)System_String__Format(v22, v26, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        v27,
        dayLabel,
        (System_String_o *)v27,
        v4->fields.dayLabelWidth,
        v28);
      FortuneBonusLogData = FortuneBonusResultDialog__GetFortuneBonusLogData(v4, targetDay, v29);
      if ( FortuneBonusLogData )
      {
        this = (FortuneBonusResultDialog_o *)FortuneBonusResultDialog__GetFortuneBonusDetailData(
                                               v4,
                                               FortuneBonusLogData->fields.idx,
                                               v31);
        if ( this )
        {
          v33 = v4->fields.rewardDispUnitArray;
          if ( !v33 )
            goto LABEL_63;
          if ( (unsigned int)v18 >= v33->max_length )
            goto LABEL_65;
          v34 = v33->m_Items[v18];
          if ( !v34 )
            goto LABEL_63;
          v35 = this;
          FortuneBonusResultDialog__SetTextAndCondensedScale(
            this,
            v34->fields.fortuneName,
            (System_String_o *)this->fields.m_CancellationTokenSource,
            v4->fields.fortuneNameWidth,
            v32);
          v36 = v4->fields.rewardDispUnitArray;
          if ( !v36 )
            goto LABEL_63;
          if ( (unsigned int)v18 >= v36->max_length )
            goto LABEL_65;
          v37 = v36->m_Items[v18];
          if ( !v37 )
            goto LABEL_63;
          this = (FortuneBonusResultDialog_o *)v37->fields.fortuneNoName;
          if ( !this )
            goto LABEL_63;
          this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
          if ( !this )
            goto LABEL_63;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (FortuneBonusResultDialog_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_GiftMaster___);
          if ( !this )
            goto LABEL_63;
          this = (FortuneBonusResultDialog_o *)GiftMaster__GetListById(
                                                 (GiftMaster_o *)this,
                                                 (int32_t)v35->fields.basePanel,
                                                 0LL);
          if ( this )
          {
            v38 = this;
            if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
            {
              v39 = FortuneBonusResultDialog___c_TypeInfo;
              if ( !FortuneBonusResultDialog___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FortuneBonusResultDialog___c_TypeInfo);
                v39 = FortuneBonusResultDialog___c_TypeInfo;
              }
              _9__21_0 = (System_Comparison_T__o *)v39->static_fields->__9__21_0;
              if ( !_9__21_0 )
              {
                if ( !v39->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v39);
                  v39 = FortuneBonusResultDialog___c_TypeInfo;
                }
                v52 = (Il2CppObject *)v39->static_fields->__9;
                _9__21_0 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_GiftEntity__TypeInfo);
                System_Comparison_object____ctor(
                  _9__21_0,
                  v52,
                  Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__,
                  0LL);
                static_fields = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                static_fields->__9__21_0 = (struct System_Comparison_GiftEntity__o *)_9__21_0;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v54, v55);
              }
              System_Collections_Generic_List_object___Sort_55649412(
                (System_Collections_Generic_List_object__o *)v38,
                _9__21_0,
                (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
              v57 = v4->fields.rewardDispUnitArray;
              if ( !v57 )
                goto LABEL_63;
              if ( (unsigned int)v18 >= v57->max_length )
                goto LABEL_65;
              FortuneBonusResultDialog__SetupRewardDispUnit(
                v4,
                v57->m_Items[v18],
                (System_Collections_Generic_List_GiftEntity__o *)v38,
                v56);
            }
          }
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FortuneBonusResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6479/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, 0LL);
        v41 = v4->fields.rewardDispUnitArray;
        if ( !v41 )
          goto LABEL_63;
        if ( (unsigned int)v18 >= v41->max_length )
          goto LABEL_65;
        v42 = v41->m_Items[v18];
        if ( !v42 )
          goto LABEL_63;
        v43 = this;
        this = (FortuneBonusResultDialog_o *)v42->fields.fortuneName;
        if ( !this )
          goto LABEL_63;
        this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_63;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v44 = v4->fields.rewardDispUnitArray;
        if ( !v44 )
          goto LABEL_63;
        if ( (unsigned int)v18 >= v44->max_length )
          goto LABEL_65;
        v45 = v44->m_Items[v18];
        if ( !v45 )
          goto LABEL_63;
        this = (FortuneBonusResultDialog_o *)v45->fields.fortuneNoName;
        if ( !this )
          goto LABEL_63;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)v43, 0LL);
        v46 = v4->fields.rewardDispUnitArray;
        if ( !v46 )
          goto LABEL_63;
        if ( (unsigned int)v18 >= v46->max_length )
          goto LABEL_65;
        v47 = v46->m_Items[v18];
        if ( !v47 )
          goto LABEL_63;
        itemDispUnitArray = v47->fields.itemDispUnitArray;
        if ( !itemDispUnitArray )
          goto LABEL_63;
        v49 = itemDispUnitArray->max_length;
        if ( v49 >= 1 )
        {
          v50 = 0;
          while ( v50 < v49 )
          {
            v51 = itemDispUnitArray->m_Items[v50];
            if ( !v51 )
              goto LABEL_63;
            this = (FortuneBonusResultDialog_o *)v51->fields.itemName;
            if ( !this )
              goto LABEL_63;
            this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !this )
              goto LABEL_63;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FortuneBonusResultDialog_o *)v51->fields.itemNoName;
            if ( !this )
              goto LABEL_63;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v43, 0LL);
            v49 = itemDispUnitArray->max_length;
            if ( (int)++v50 >= v49 )
              goto LABEL_61;
          }
LABEL_65:
          sub_1B90274(this, logDataArray);
        }
      }
LABEL_61:
      v17 = v18 + 1;
      if ( (_DWORD)v18 + 1 == max_length )
        return;
      rewardDispUnitArray = v4->fields.rewardDispUnitArray;
      if ( !rewardDispUnitArray )
        goto LABEL_63;
    }
  }
}


void __fastcall FortuneBonusResultDialog__SetupRewardDispUnit(
        FortuneBonusResultDialog_o *this,
        FortuneBonusResultDialog_RewardDispUnit_o *rewardDispUnit,
        System_Collections_Generic_List_GiftEntity__o *giftEntList,
        const MethodInfo *method)
{
  FortuneBonusResultDialog_o *v6; // x21
  __int64 v7; // x1
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x8
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  __int64 v11; // x25
  struct FortuneBonusResultDialog_ItemDispUnit_array *v12; // x8
  __int64 v13; // x9
  int32_t v14; // w23
  FortuneBonusResultDialog_ItemDispUnit_o *v15; // x24
  Il2CppObject *Item; // x0
  const MethodInfo *v17; // x4

  v6 = this;
  if ( (byte_4A728D8 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, rewardDispUnit);
    this = (FortuneBonusResultDialog_o *)sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v7);
    byte_4A728D8 = 1;
  }
  if ( !rewardDispUnit || (itemDispUnitArray = rewardDispUnit->fields.itemDispUnitArray) == 0LL || !giftEntList )
LABEL_18:
    sub_1B9026C(this, rewardDispUnit);
  v9 = *(_QWORD *)&itemDispUnitArray->max_length;
  if ( giftEntList->fields._size >= (int)v9 && (int)v9 >= 1 )
  {
    v10 = 0LL;
    v11 = (unsigned int)v9;
    do
    {
      this = (FortuneBonusResultDialog_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)giftEntList,
                                             v10,
                                             (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( this )
      {
        v12 = rewardDispUnit->fields.itemDispUnitArray;
        if ( v10 )
          v13 = 148LL;
        else
          v13 = 144LL;
        if ( !v12 )
          goto LABEL_18;
        if ( v10 >= v12->max_length )
          sub_1B90274(this, rewardDispUnit);
        v14 = *(_DWORD *)((char *)&v6->klass + v13);
        v15 = v12->m_Items[v10];
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)giftEntList,
                 v10,
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        FortuneBonusResultDialog__SetupItemDispUnitArray(v6, v15, (GiftEntity_o *)Item, v14, v17);
      }
      ++v10;
    }
    while ( v11 != v10 );
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
  ServantStatusBattleListViewItem_o *p_clickFunc; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  p_clickFunc = (ServantStatusBattleListViewItem_o *)&this->fields.clickFunc;
  ActionExtensions__Call(this->fields.clickFunc, 0LL);
  p_clickFunc->klass = 0LL;
  sub_1B8FFB4(p_clickFunc, 0, v4, v5);
  FortuneBonusResultDialog__Release(this, v6);
}


void __fastcall FortuneBonusResultDialog___Open_b__20_0(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall FortuneBonusResultDialog__get_closeBtnPath(
        FortuneBonusResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A728E2 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_15677/*"Window/OkBtn"*/, method);
    byte_4A728E2 = 1;
  }
  return (System_String_o *)StringLiteral_15677/*"Window/OkBtn"*/;
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A728E4 & 1) == 0 )
  {
    sub_1B90010(&FortuneBonusResultDialog___c_TypeInfo, v1);
    byte_4A728E4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(FortuneBonusResultDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FortuneBonusResultDialog___c_TypeInfo->static_fields->__9 = (struct FortuneBonusResultDialog___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)FortuneBonusResultDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B9026C(this, a);
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
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, 0LL);
  return n->fields.idx == this->fields.index;
}