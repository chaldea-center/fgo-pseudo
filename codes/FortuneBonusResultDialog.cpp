void __fastcall FortuneBonusResultDialog___ctor(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5DBCC & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5DBCC = 1;
  }
  *(_OWORD *)&this->fields.dayLabelWidth = xmmword_BB57B0;
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
        sub_1B88814(this, method);
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
    sub_1B8880C(this, method);
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
  System_Action_o *v6; // x20

  if ( (byte_4A5DBC6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FortuneBonusResultDialog_EndClose__);
    byte_4A5DBC6 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FortuneBonusResultDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


ItemIconComponent_o *__fastcall FortuneBonusResultDialog__CreateItemIcon(
        FortuneBonusResultDialog_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconBasePrefab; // x21
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x20
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5DBC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DBC5 = 1;
  }
  itemIconBasePrefab = (UnityEngine_Object_o *)this->fields.itemIconBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(itemIconBasePrefab, 0LL, 0LL) )
    return 0LL;
  v6 = (Il2CppObject *)this->fields.itemIconBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         v6,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
    return 0LL;
  GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v7, parent, 0LL);
  if ( !v7 )
    sub_1B8880C(v9, v10);
  return (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v7,
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)v2, 0, v4, v5);
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
  if ( (byte_4A5DBCA & 1) == 0 )
  {
    this = (FortuneBonusResultDialog_o *)sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5DBCA = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_1B8880C(this, *(_QWORD *)&gType);
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
  v9 = System_Int32__ToString_62512312((int32_t)&v11, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
  return System_String__Concat_61707032(v8, v9, 0LL);
}


CommonUI_FortuneBonusDetailData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusDetailData(
        FortuneBonusResultDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusDetailData_array *details; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4A5DBC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
    sub_1B885B0(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
    sub_1B885B0(&Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__);
    sub_1B885B0(&FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo);
    byte_4A5DBC4 = 1;
  }
  v5 = sub_1B887FC(FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v10 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__,
    0LL);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_object_(
                                                (System_Object_array *)details,
                                                (System_Func_T__bool__o *)v10,
                                                (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
}


CommonUI_FortuneBonusRewardData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusLogData(
        FortuneBonusResultDialog_o *this,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4A5DBC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___);
    sub_1B885B0(&System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo);
    sub_1B885B0(&Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__);
    sub_1B885B0(&FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo);
    byte_4A5DBC3 = 1;
  }
  v5 = sub_1B887FC(FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = day;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  logs = fortuneBonusData->fields.logs;
  if ( !logs || !*(_QWORD *)&logs->max_length )
    return 0LL;
  v10 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__,
    0LL);
  return (CommonUI_FortuneBonusRewardData_o *)BasicHelper__Find_object_(
                                                (System_Object_array *)logs,
                                                (System_Func_T__bool__o *)v10,
                                                (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___);
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
    sub_1B88814(this, method);
  return rewards->m_Items[0];
}


void __fastcall FortuneBonusResultDialog__GetGiftInfo(
        FortuneBonusResultDialog_o *this,
        GiftEntity_o *giftEnt,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  LocalizationManager_c *v8; // x0
  System_String_o *unknownNameText; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *monitor; // x1
  FortuneBonusResultDialog_o *v17; // x0
  const MethodInfo *v18; // x4
  System_String_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5DBC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DBC9 = 1;
  }
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
  }
  v8 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v8->static_fields->unknownNameText;
  *nameText = unknownNameText;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)nameText,
    (int32_t)unknownNameText,
    (int32_t)nameText,
    (int32_t)countText);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)countText, (int32_t)StringLiteral_1/*""*/, v10, v11);
  if ( !giftEnt )
    goto LABEL_18;
  if ( giftEnt->fields.type != 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_18;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    giftEnt->fields.objectId,
                                    (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_18:
    sub_1B8880C(Master_object, v13);
  monitor = (System_String_o *)entity[1].monitor;
  *nameText = monitor;
  sub_1B88554((ServantStatusBattleListViewItem_o *)nameText, (int32_t)monitor, v14, v15);
  v19 = FortuneBonusResultDialog__GetCountText(
          v17,
          giftEnt->fields.type,
          (ItemEntity_o *)entity,
          giftEnt->fields.num,
          v18);
  *countText = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)countText, (int32_t)v19, v20, v21);
}


void __fastcall FortuneBonusResultDialog__Init(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A5DBBE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DBBE = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.okBtnLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(titleLabel, method);
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

  if ( (byte_4A5DBC7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FortuneBonusResultDialog_OnClickButton__);
    sub_1B885B0(&Method_FortuneBonusResultDialog__OnClickButton_b__31_0__);
    byte_4A5DBC7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_FortuneBonusResultDialog_OnClickButton__;
    if ( (*((_BYTE *)Method_FortuneBonusResultDialog_OnClickButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FortuneBonusResultDialog_OnClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, 0LL);
    FortuneBonusResultDialog__Close(this, v5, v6);
  }
}


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
  UnityEngine_Transform_o *v12; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *subTitleLabel; // x22
  UILabel_o *okBtnLabel; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  struct UISprite_array *lineSpriteArray; // x8
  unsigned __int64 v19; // x23
  unsigned __int64 max_length; // x9
  UISprite_o *v21; // x22
  const MethodInfo *v22; // x2
  int32_t v23; // w3
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x1

  if ( (byte_4A5DBBF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_FortuneBonusResultDialog__Open_b__20_0__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17968/*"chronology_line"*/);
    sub_1B885B0(&StringLiteral_6479/*"FORTUNE_BONUS_RESULT_TITLE"*/);
    sub_1B885B0(&StringLiteral_6475/*"FORTUNE_BONUS_RESULT_BUTTON"*/);
    sub_1B885B0(&StringLiteral_6478/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/);
    sub_1B885B0(&StringLiteral_18002/*"clear00"*/);
    byte_4A5DBBF = 1;
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  if ( isEnabledOpenAnim )
  {
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_18002/*"clear00"*/, 0LL);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    v12 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4A55CE6 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v12 )
LABEL_25:
      sub_1B8880C(gameObject, v11);
    UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6479/*"FORTUNE_BONUS_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6478/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_25;
  UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL);
  okBtnLabel = this->fields.okBtnLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6475/*"FORTUNE_BONUS_RESULT_BUTTON"*/, 0LL);
  if ( !okBtnLabel )
    goto LABEL_25;
  UILabel__set_text(okBtnLabel, (System_String_o *)gameObject, 0LL);
  lineSpriteArray = this->fields.lineSpriteArray;
  if ( !lineSpriteArray )
    goto LABEL_25;
  v19 = 0LL;
  while ( 1 )
  {
    max_length = lineSpriteArray->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      sub_1B88814(gameObject, v11);
    v21 = lineSpriteArray->m_Items[v19];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v21, (System_String_o *)StringLiteral_17968/*"chronology_line"*/, 0LL);
    lineSpriteArray = this->fields.lineSpriteArray;
    ++v19;
    if ( !lineSpriteArray )
      goto LABEL_25;
  }
  this->fields.fortuneBonusData = fortuneBonus;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fortuneBonusData, (int32_t)fortuneBonus, v16, v17);
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( fortuneBonusData )
  {
    logs = fortuneBonusData->fields.logs;
    if ( logs )
    {
      if ( *(_QWORD *)&logs->max_length )
        FortuneBonusResultDialog__SetupRewardDisp(this, logs, v22);
    }
  }
  this->fields.clickFunc = nextAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)nextAction, (int32_t)v22, v23);
}


void __fastcall FortuneBonusResultDialog__Release(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4A5DBC8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DBC8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(v5, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  FortuneBonusResultDialog_o *v13; // x0
  const MethodInfo *v14; // x4
  Il2CppObject *v15; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-38h] BYREF

  v7 = itemDispUnit;
  v8 = this;
  if ( (byte_4A5DBC2 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (FortuneBonusResultDialog_o *)sub_1B885B0(&StringLiteral_10456/*"PRESENT_INFO"*/);
    byte_4A5DBC2 = 1;
  }
  v15 = 0LL;
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
        ItemIconComponent__SetGift_38144896(
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
        ItemIconComponent__SetItemImage_38148512(
          (ItemIconComponent_o *)ItemIcon,
          (int32_t)itemDispUnit,
          giftEnt->fields.objectId,
          num,
          0LL);
      }
      FortuneBonusResultDialog__GetGiftInfo(v8, giftEnt, &nameText, (System_String_o **)&v15, v11);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10456/*"PRESENT_INFO"*/, 0LL);
      v13 = (FortuneBonusResultDialog_o *)System_String__Format_61721404(v12, (Il2CppObject *)nameText, v15, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        v13,
        v7->fields.itemName,
        (System_String_o *)v13,
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
LABEL_22:
      sub_1B8880C(this, itemDispUnit);
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
  __int64 v8; // x27
  FortuneBonusResultDialog_RewardDispUnit_o *v9; // x8
  int32_t targetDay; // w20
  UILabel_o *dayLabel; // x21
  System_String_o *v12; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  FortuneBonusResultDialog_o *v17; // x0
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x2
  CommonUI_FortuneBonusRewardData_o *FortuneBonusLogData; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x4
  struct FortuneBonusResultDialog_RewardDispUnit_array *v23; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v24; // x8
  FortuneBonusResultDialog_o *v25; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v26; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v27; // x8
  FortuneBonusResultDialog_o *v28; // x20
  FortuneBonusResultDialog___c_c *v29; // x0
  System_Comparison_T__o *_9__21_0; // x21
  struct FortuneBonusResultDialog_RewardDispUnit_array *v31; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v32; // x8
  FortuneBonusResultDialog_o *v33; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v34; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v35; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v36; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v37; // x8
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x21
  int v39; // w8
  unsigned int v40; // w22
  FortuneBonusResultDialog_ItemDispUnit_o *v41; // x28
  Il2CppObject *v42; // x22
  struct FortuneBonusResultDialog___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  const MethodInfo *v46; // x3
  struct FortuneBonusResultDialog_RewardDispUnit_array *v47; // x8
  int32_t v48; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4A5DBC0 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_GiftEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__);
    sub_1B885B0(&FortuneBonusResultDialog___c_TypeInfo);
    sub_1B885B0(&StringLiteral_6477/*"FORTUNE_BONUS_RESULT_NO_NAME"*/);
    this = (FortuneBonusResultDialog_o *)sub_1B885B0(&StringLiteral_6476/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/);
    byte_4A5DBC0 = 1;
  }
  if ( !logDataArray || (rewardDispUnitArray = v4->fields.rewardDispUnitArray) == 0LL )
LABEL_63:
    sub_1B8880C(this, logDataArray);
  max_length = rewardDispUnitArray->max_length;
  if ( max_length >= (signed int)logDataArray->max_length && max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= rewardDispUnitArray->max_length )
        goto LABEL_65;
      v8 = (int)v7;
      v9 = rewardDispUnitArray->m_Items[v7];
      if ( !v9 )
        goto LABEL_63;
      targetDay = v9->fields.targetDay;
      dayLabel = v9->fields.dayLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6476/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, 0LL);
      v48 = targetDay;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v13, v14, v15);
      v17 = (FortuneBonusResultDialog_o *)System_String__Format(v12, v16, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        v17,
        dayLabel,
        (System_String_o *)v17,
        v4->fields.dayLabelWidth,
        v18);
      FortuneBonusLogData = FortuneBonusResultDialog__GetFortuneBonusLogData(v4, targetDay, v19);
      if ( FortuneBonusLogData )
      {
        this = (FortuneBonusResultDialog_o *)FortuneBonusResultDialog__GetFortuneBonusDetailData(
                                               v4,
                                               FortuneBonusLogData->fields.idx,
                                               v21);
        if ( this )
        {
          v23 = v4->fields.rewardDispUnitArray;
          if ( !v23 )
            goto LABEL_63;
          if ( (unsigned int)v8 >= v23->max_length )
            goto LABEL_65;
          v24 = v23->m_Items[v8];
          if ( !v24 )
            goto LABEL_63;
          v25 = this;
          FortuneBonusResultDialog__SetTextAndCondensedScale(
            this,
            v24->fields.fortuneName,
            (System_String_o *)this->fields.m_CancellationTokenSource,
            v4->fields.fortuneNameWidth,
            v22);
          v26 = v4->fields.rewardDispUnitArray;
          if ( !v26 )
            goto LABEL_63;
          if ( (unsigned int)v8 >= v26->max_length )
            goto LABEL_65;
          v27 = v26->m_Items[v8];
          if ( !v27 )
            goto LABEL_63;
          this = (FortuneBonusResultDialog_o *)v27->fields.fortuneNoName;
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
          this = (FortuneBonusResultDialog_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
          if ( !this )
            goto LABEL_63;
          this = (FortuneBonusResultDialog_o *)GiftMaster__GetListById(
                                                 (GiftMaster_o *)this,
                                                 (int32_t)v25->fields.basePanel,
                                                 0LL);
          if ( this )
          {
            v28 = this;
            if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
            {
              v29 = FortuneBonusResultDialog___c_TypeInfo;
              if ( !FortuneBonusResultDialog___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FortuneBonusResultDialog___c_TypeInfo);
                v29 = FortuneBonusResultDialog___c_TypeInfo;
              }
              _9__21_0 = (System_Comparison_T__o *)v29->static_fields->__9__21_0;
              if ( !_9__21_0 )
              {
                if ( !v29->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v29);
                  v29 = FortuneBonusResultDialog___c_TypeInfo;
                }
                v42 = (Il2CppObject *)v29->static_fields->__9;
                _9__21_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_GiftEntity__TypeInfo);
                System_Comparison_object____ctor(
                  _9__21_0,
                  v42,
                  Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__,
                  0LL);
                static_fields = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                static_fields->__9__21_0 = (struct System_Comparison_GiftEntity__o *)_9__21_0;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v44, v45);
              }
              System_Collections_Generic_List_object___Sort_55571192(
                (System_Collections_Generic_List_object__o *)v28,
                _9__21_0,
                (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
              v47 = v4->fields.rewardDispUnitArray;
              if ( !v47 )
                goto LABEL_63;
              if ( (unsigned int)v8 >= v47->max_length )
                goto LABEL_65;
              FortuneBonusResultDialog__SetupRewardDispUnit(
                v4,
                v47->m_Items[v8],
                (System_Collections_Generic_List_GiftEntity__o *)v28,
                v46);
            }
          }
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FortuneBonusResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6477/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, 0LL);
        v31 = v4->fields.rewardDispUnitArray;
        if ( !v31 )
          goto LABEL_63;
        if ( (unsigned int)v8 >= v31->max_length )
          goto LABEL_65;
        v32 = v31->m_Items[v8];
        if ( !v32 )
          goto LABEL_63;
        v33 = this;
        this = (FortuneBonusResultDialog_o *)v32->fields.fortuneName;
        if ( !this )
          goto LABEL_63;
        this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_63;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v34 = v4->fields.rewardDispUnitArray;
        if ( !v34 )
          goto LABEL_63;
        if ( (unsigned int)v8 >= v34->max_length )
          goto LABEL_65;
        v35 = v34->m_Items[v8];
        if ( !v35 )
          goto LABEL_63;
        this = (FortuneBonusResultDialog_o *)v35->fields.fortuneNoName;
        if ( !this )
          goto LABEL_63;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)v33, 0LL);
        v36 = v4->fields.rewardDispUnitArray;
        if ( !v36 )
          goto LABEL_63;
        if ( (unsigned int)v8 >= v36->max_length )
          goto LABEL_65;
        v37 = v36->m_Items[v8];
        if ( !v37 )
          goto LABEL_63;
        itemDispUnitArray = v37->fields.itemDispUnitArray;
        if ( !itemDispUnitArray )
          goto LABEL_63;
        v39 = itemDispUnitArray->max_length;
        if ( v39 >= 1 )
        {
          v40 = 0;
          while ( v40 < v39 )
          {
            v41 = itemDispUnitArray->m_Items[v40];
            if ( !v41 )
              goto LABEL_63;
            this = (FortuneBonusResultDialog_o *)v41->fields.itemName;
            if ( !this )
              goto LABEL_63;
            this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !this )
              goto LABEL_63;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FortuneBonusResultDialog_o *)v41->fields.itemNoName;
            if ( !this )
              goto LABEL_63;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v33, 0LL);
            v39 = itemDispUnitArray->max_length;
            if ( (int)++v40 >= v39 )
              goto LABEL_61;
          }
LABEL_65:
          sub_1B88814(this, logDataArray);
        }
      }
LABEL_61:
      v7 = v8 + 1;
      if ( (_DWORD)v8 + 1 == max_length )
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
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x8
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  __int64 v10; // x25
  struct FortuneBonusResultDialog_ItemDispUnit_array *v11; // x8
  __int64 v12; // x9
  int32_t v13; // w23
  FortuneBonusResultDialog_ItemDispUnit_o *v14; // x24
  Il2CppObject *Item; // x0
  const MethodInfo *v16; // x4

  v6 = this;
  if ( (byte_4A5DBC1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    this = (FortuneBonusResultDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    byte_4A5DBC1 = 1;
  }
  if ( !rewardDispUnit || (itemDispUnitArray = rewardDispUnit->fields.itemDispUnitArray) == 0LL || !giftEntList )
LABEL_18:
    sub_1B8880C(this, rewardDispUnit);
  v8 = *(_QWORD *)&itemDispUnitArray->max_length;
  if ( giftEntList->fields._size >= (int)v8 && (int)v8 >= 1 )
  {
    v9 = 0LL;
    v10 = (unsigned int)v8;
    do
    {
      this = (FortuneBonusResultDialog_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)giftEntList,
                                             v9,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( this )
      {
        v11 = rewardDispUnit->fields.itemDispUnitArray;
        if ( v9 )
          v12 = 148LL;
        else
          v12 = 144LL;
        if ( !v11 )
          goto LABEL_18;
        if ( v9 >= v11->max_length )
          sub_1B88814(this, rewardDispUnit);
        v13 = *(_DWORD *)((char *)&v6->klass + v12);
        v14 = v11->m_Items[v9];
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)giftEntList,
                 v9,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        FortuneBonusResultDialog__SetupItemDispUnitArray(v6, v14, (GiftEntity_o *)Item, v13, v16);
      }
      ++v9;
    }
    while ( v10 != v9 );
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
  sub_1B88554(p_clickFunc, 0, v4, v5);
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
  if ( (byte_4A5DBCB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15652/*"Window/OkBtn"*/);
    byte_4A5DBCB = 1;
  }
  return (System_String_o *)StringLiteral_15652/*"Window/OkBtn"*/;
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DBCD & 1) == 0 )
  {
    sub_1B885B0(&FortuneBonusResultDialog___c_TypeInfo);
    byte_4A5DBCD = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(FortuneBonusResultDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FortuneBonusResultDialog___c_TypeInfo->static_fields->__9 = (struct FortuneBonusResultDialog___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)FortuneBonusResultDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return n->fields.idx == this->fields.index;
}