void FortuneBonusResultDialog___ctor(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0

  if ( (byte_5973B3E & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5973B3E = 1;
  }
  v3 = BaseDialog_TypeInfo;
  *(_OWORD *)&this->fields.dayLabelWidth = xmmword_E9D840;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FortuneBonusResultDialog__CheckSerializeField(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  struct FortuneBonusResultDialog_RewardDispUnit_array *rewardDispUnitArray; // x8
  int max_length; // w9
  unsigned int v4; // w11
  FortuneBonusResultDialog_RewardDispUnit_o *v5; // x12
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x12
  int v7; // w12

  rewardDispUnitArray = this->fields.rewardDispUnitArray;
  if ( !rewardDispUnitArray )
    goto LABEL_15;
  max_length = rewardDispUnitArray->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 == max_length )
LABEL_14:
        sub_2213CE4(this);
      v5 = rewardDispUnitArray->m_Items[v4];
      if ( !v5 )
        break;
      itemDispUnitArray = v5->fields.itemDispUnitArray;
      if ( !itemDispUnitArray )
        break;
      v7 = (itemDispUnitArray->max_length & ~(SLODWORD(itemDispUnitArray->max_length) >> 31)) + 1;
      while ( --v7 )
      {
        if ( v4 >= max_length )
          goto LABEL_14;
      }
      if ( ++v4 == (max_length & ~(max_length >> 31)) )
        goto LABEL_12;
    }
LABEL_15:
    sub_2213CDC(this, method);
  }
LABEL_12:
  if ( !this->fields.lineSpriteArray )
    goto LABEL_15;
}


void FortuneBonusResultDialog__Close(
        FortuneBonusResultDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5973B38 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FortuneBonusResultDialog_EndClose__);
    byte_5973B38 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FortuneBonusResultDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


ItemIconComponent_o *FortuneBonusResultDialog__CreateItemIcon(
        FortuneBonusResultDialog_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconBasePrefab; // x21
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x20
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_5973B37 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B37 = 1;
  }
  itemIconBasePrefab = (UnityEngine_Object_o *)this->fields.itemIconBasePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  if ( UnityEngine_Object__op_Equality(itemIconBasePrefab, 0, 0) )
    return 0;
  v7 = (Il2CppObject *)this->fields.itemIconBasePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__Instantiate_object_(
         v7,
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0, 0) )
    return 0;
  GameObjectExtensions__SafeSetParent_42897308((UnityEngine_GameObject_o *)v8, parent, 0);
  if ( !v8 )
    sub_2213CDC(v10, v11);
  return (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v8,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
}


void FortuneBonusResultDialog__EndClose(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  FortuneBonusResultDialog__Init(this, method);
  ActionExtensions__Call(this->fields.closeEndFunc, 0);
  this->fields.closeEndFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *FortuneBonusResultDialog__GetCountText(
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
  if ( (byte_5973B3C & 1) == 0 )
  {
    this = (FortuneBonusResultDialog_o *)sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5973B3C = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_2213CDC(this, *(_QWORD *)&gType);
    if ( !ItemType__IsCountableWithPlus(itemEnt->fields.type, 0) )
      goto LABEL_6;
LABEL_8:
    PlusOperatorString = ItemType__get_PlusOperatorString(0);
    goto LABEL_9;
  }
  if ( (unsigned int)(gType - 3) < 2 )
    goto LABEL_8;
LABEL_6:
  PlusOperatorString = ItemType__get_CrossOperatorString(0);
LABEL_9:
  v8 = PlusOperatorString;
  v9 = System_Int32__ToString_77138656((int32_t)&v11, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
  return System_String__Concat_75651716(v8, v9, 0);
}


CommonUI_FortuneBonusDetailData_o *FortuneBonusResultDialog__GetFortuneBonusDetailData(
        FortuneBonusResultDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  System_Object_array *details; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_5973B36 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
    sub_2213A60(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
    sub_2213A60(&Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__);
    sub_2213A60(&FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo);
    byte_5973B36 = 1;
  }
  v5 = sub_2213CCC(FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  fortuneBonusData = this->fields.fortuneBonusData;
  *(_DWORD *)(v5 + 16) = index;
  if ( !fortuneBonusData )
    return 0;
  details = (System_Object_array *)fortuneBonusData->fields.details;
  if ( !details || !details->max_length )
    return 0;
  v10 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__,
    0);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_object_(
                                                details,
                                                (System_Func_T__bool__o *)v10,
                                                (const MethodInfo_3810A1C *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
}


CommonUI_FortuneBonusRewardData_o *FortuneBonusResultDialog__GetFortuneBonusLogData(
        FortuneBonusResultDialog_o *this,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  System_Object_array *logs; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_5973B35 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___);
    sub_2213A60(&System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo);
    sub_2213A60(&Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__);
    sub_2213A60(&FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo);
    byte_5973B35 = 1;
  }
  v5 = sub_2213CCC(FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  fortuneBonusData = this->fields.fortuneBonusData;
  *(_DWORD *)(v5 + 16) = day;
  if ( !fortuneBonusData )
    return 0;
  logs = (System_Object_array *)fortuneBonusData->fields.logs;
  if ( !logs || !logs->max_length )
    return 0;
  v10 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__,
    0);
  return (CommonUI_FortuneBonusRewardData_o *)BasicHelper__Find_object_(
                                                logs,
                                                (System_Func_T__bool__o *)v10,
                                                (const MethodInfo_3810A1C *)Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___);
}


CommonUI_FortuneBonusRewardData_array *FortuneBonusResultDialog__GetFortuneBonusLogs(
        FortuneBonusResultDialog_o *this,
        const MethodInfo *method)
{
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  CommonUI_FortuneBonusRewardData_array *logs; // x8

  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0;
  logs = fortuneBonusData->fields.logs;
  if ( !logs )
    return 0;
  if ( logs->max_length )
    return logs;
  return 0;
}


CommonUI_FortuneBonusRewardData_o *FortuneBonusResultDialog__GetFortuneBonusRewardData(
        FortuneBonusResultDialog_o *this,
        const MethodInfo *method)
{
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *rewards; // x8
  il2cpp_array_size_t max_length; // x9

  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0;
  rewards = fortuneBonusData->fields.rewards;
  if ( !rewards )
    return 0;
  max_length = rewards->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_2213CE4(this);
  return rewards->m_Items[0];
}


void FortuneBonusResultDialog__GetGiftInfo(
        FortuneBonusResultDialog_o *this,
        GiftEntity_o *giftEnt,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  LocalizationManager_c *v11; // x0
  System_String_o *unknownNameText; // x1
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *monitor; // x1
  FortuneBonusResultDialog_o *v29; // x0
  const MethodInfo *v30; // x4
  System_String_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5973B3B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973B3B = 1;
  }
  entity = 0;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, giftEnt);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, giftEnt);
    v11 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v11->static_fields->unknownNameText;
  *nameText = unknownNameText;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)nameText,
    (int32_t)unknownNameText,
    (System_String_o *)nameText,
    (System_String_o *)countText,
    (int32_t)method,
    v5,
    v6,
    v7);
  v13 = (int)StringLiteral_1/*""*/;
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)countText, v13, v14, v15, v16, v17, v18, v19);
  if ( !giftEnt )
    goto LABEL_18;
  if ( giftEnt->fields.type != 2 )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_18;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    giftEnt->fields.objectId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_18:
    sub_2213CDC(Master_object, v21);
  monitor = (System_String_o *)entity[1].monitor;
  *nameText = monitor;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)nameText, (int32_t)monitor, v22, v23, v24, v25, v26, v27);
  v31 = FortuneBonusResultDialog__GetCountText(
          v29,
          giftEnt->fields.type,
          (ItemEntity_o *)entity,
          giftEnt->fields.num,
          v30);
  *countText = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)countText, (int32_t)v31, v32, v33, v34, v35, v36, v37);
}


void FortuneBonusResultDialog__Init(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_5973B30 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973B30 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.okBtnLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void FortuneBonusResultDialog__OnClickButton(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_5973B39 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FortuneBonusResultDialog_OnClickButton__);
    sub_2213A60(&Method_FortuneBonusResultDialog__OnClickButton_b__31_0__);
    byte_5973B39 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_FortuneBonusResultDialog_OnClickButton__;
    if ( (*((_BYTE *)Method_FortuneBonusResultDialog_OnClickButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FortuneBonusResultDialog_OnClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, 0);
    FortuneBonusResultDialog__Close(this, v5, v6);
  }
}


void FortuneBonusResultDialog__Open(
        FortuneBonusResultDialog_o *this,
        CommonUI_FortuneBonusData_o *fortuneBonus,
        System_Action_o *nextAction,
        bool isEnabledOpenAnim,
        const MethodInfo *method)
{
  System_Action_o *v9; // x22
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Transform_o *v13; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *subTitleLabel; // x22
  UILabel_o *okBtnLabel; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct UISprite_array *lineSpriteArray; // x8
  unsigned __int64 v24; // x25
  unsigned __int64 max_length_low; // x9
  UISprite_o *v26; // x22
  MethodInfo *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  CommonUI_FortuneBonusRewardData_array *logs; // x1

  if ( (byte_5973B31 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_FortuneBonusResultDialog__Open_b__20_0__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18758/*"chronology_line"*/);
    sub_2213A60(&StringLiteral_6796/*"FORTUNE_BONUS_RESULT_TITLE"*/);
    sub_2213A60(&StringLiteral_6792/*"FORTUNE_BONUS_RESULT_BUTTON"*/);
    sub_2213A60(&StringLiteral_6795/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/);
    sub_2213A60(&StringLiteral_18793/*"clear00"*/);
    byte_5973B31 = 1;
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  if ( isEnabledOpenAnim )
  {
    v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_FortuneBonusResultDialog__Open_b__20_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v9, 0, 0, 0);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_25;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_18793/*"clear00"*/, 0);
    gameObject = (UnityEngine_GameObject_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
    if ( !gameObject )
      goto LABEL_25;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.element_class)(
      gameObject,
      gameObject->klass[1]._1.castClass,
      1.0);
    gameObject = this->fields.baseWindow;
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
    v13 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_5969AE5 )
    {
      gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v13 )
LABEL_25:
      sub_2213CDC(gameObject, v12);
    UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6796/*"FORTUNE_BONUS_RESULT_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  subTitleLabel = this->fields.subTitleLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6795/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, 0);
  if ( !subTitleLabel )
    goto LABEL_25;
  UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0);
  okBtnLabel = this->fields.okBtnLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6792/*"FORTUNE_BONUS_RESULT_BUTTON"*/, 0);
  if ( !okBtnLabel )
    goto LABEL_25;
  UILabel__set_text(okBtnLabel, (System_String_o *)gameObject, 0);
  lineSpriteArray = this->fields.lineSpriteArray;
  if ( !lineSpriteArray )
    goto LABEL_25;
  v24 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(lineSpriteArray->max_length);
    if ( (__int64)v24 >= (int)max_length_low )
      break;
    if ( v24 >= max_length_low )
      sub_2213CE4(gameObject);
    v26 = lineSpriteArray->m_Items[v24];
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v26, (System_String_o *)StringLiteral_18758/*"chronology_line"*/, 0);
    lineSpriteArray = this->fields.lineSpriteArray;
    ++v24;
    if ( !lineSpriteArray )
      goto LABEL_25;
  }
  this->fields.fortuneBonusData = fortuneBonus;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fortuneBonusData,
    (int32_t)fortuneBonus,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( fortuneBonusData )
  {
    logs = fortuneBonusData->fields.logs;
    if ( logs )
    {
      if ( logs->max_length )
        FortuneBonusResultDialog__SetupRewardDisp(this, logs, v27);
    }
  }
  this->fields.clickFunc = nextAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)nextAction,
    (System_String_o *)v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void FortuneBonusResultDialog__Release(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_5973B3A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B3A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  v6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  UnityEngine_Object__Destroy_83459800(v6, 0);
}


void FortuneBonusResultDialog__SetEnableButton(
        FortuneBonusResultDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = isEnable;
}


void FortuneBonusResultDialog__SetTextAndCondensedScale(
        FortuneBonusResultDialog_o *this,
        UILabel_o *targetLebel,
        System_String_o *text,
        int32_t width,
        const MethodInfo *method)
{
  if ( !targetLebel )
    sub_2213CDC(this, 0);
  UILabel__set_text(targetLebel, text, 0);
  if ( width >= 1 )
    UILabel__SetCondensedScale(targetLebel, width, 0, 0);
}


void FortuneBonusResultDialog__SetupItemDispUnitArray(
        FortuneBonusResultDialog_o *this,
        FortuneBonusResultDialog_ItemDispUnit_o *itemDispUnit,
        GiftEntity_o *giftEnt,
        int32_t textWidth,
        const MethodInfo *method)
{
  FortuneBonusResultDialog_ItemDispUnit_o *v7; // x19
  FortuneBonusResultDialog_o *v8; // x22
  __int64 v9; // x1
  UnityEngine_Object_o *ItemIcon; // x23
  int32_t num; // w3
  const MethodInfo *v12; // x4
  __int64 v13; // x1
  System_String_o *v14; // x0
  FortuneBonusResultDialog_o *v15; // x0
  const MethodInfo *v16; // x4
  Il2CppObject *v17; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-38h] BYREF

  v7 = itemDispUnit;
  v8 = this;
  if ( (byte_5973B34 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (FortuneBonusResultDialog_o *)sub_2213A60(&StringLiteral_10889/*"PRESENT_INFO"*/);
    byte_5973B34 = 1;
  }
  v17 = 0;
  nameText = 0;
  if ( giftEnt )
  {
    if ( !v7 )
      goto LABEL_22;
    ItemIcon = (UnityEngine_Object_o *)FortuneBonusResultDialog__CreateItemIcon(
                                         v8,
                                         v7->fields.itemIconRoot,
                                         (const MethodInfo *)giftEnt);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    this = (FortuneBonusResultDialog_o *)UnityEngine_Object__op_Equality(ItemIcon, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      itemDispUnit = (FortuneBonusResultDialog_ItemDispUnit_o *)(unsigned int)giftEnt->fields.prioredIconId;
      if ( (int)itemDispUnit < 1 )
      {
        if ( !ItemIcon )
          goto LABEL_22;
        ItemIconComponent__SetGift_47884936(
          (ItemIconComponent_o *)ItemIcon,
          giftEnt->fields.type,
          giftEnt->fields.objectId,
          -1,
          0,
          0);
      }
      else
      {
        if ( !ItemIcon )
          goto LABEL_22;
        if ( giftEnt->fields.num <= 1 )
          num = -1;
        else
          num = giftEnt->fields.num;
        ItemIconComponent__SetItemImage_47888684(
          (ItemIconComponent_o *)ItemIcon,
          (int32_t)itemDispUnit,
          giftEnt->fields.objectId,
          num,
          0);
      }
      FortuneBonusResultDialog__GetGiftInfo(v8, giftEnt, &nameText, (System_String_o **)&v17, v12);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10889/*"PRESENT_INFO"*/, 0);
      v15 = (FortuneBonusResultDialog_o *)System_String__Format_75697880(v14, (Il2CppObject *)nameText, v17, 0);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        v15,
        v7->fields.itemName,
        (System_String_o *)v15,
        textWidth,
        v16);
      this = (FortuneBonusResultDialog_o *)v7->fields.itemNoName;
      if ( this )
      {
        this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          return;
        }
      }
LABEL_22:
      sub_2213CDC(this, itemDispUnit);
    }
  }
}


void FortuneBonusResultDialog__SetupRewardDisp(
        FortuneBonusResultDialog_o *this,
        CommonUI_FortuneBonusRewardData_array *logDataArray,
        const MethodInfo *method)
{
  FortuneBonusResultDialog_o *v4; // x19
  struct FortuneBonusResultDialog_RewardDispUnit_array *rewardDispUnitArray; // x8
  __int64 max_length_low; // x23
  unsigned __int64 v7; // x27
  struct FortuneBonusResultDialog_RewardDispUnit_array *v8; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v9; // x8
  int32_t targetDay; // w20
  UILabel_o *dayLabel; // x21
  System_String_o *v12; // x22
  Il2CppObject *v13; // x0
  FortuneBonusResultDialog_o *v14; // x0
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x2
  CommonUI_FortuneBonusRewardData_o *FortuneBonusLogData; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x4
  struct FortuneBonusResultDialog_RewardDispUnit_array *v21; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v22; // x8
  FortuneBonusResultDialog_o *v23; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v24; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v25; // x8
  __int64 v26; // x1
  FortuneBonusResultDialog_o *v27; // x20
  FortuneBonusResultDialog___c_c *v28; // x0
  struct FortuneBonusResultDialog___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__21_0; // x21
  Il2CppObject *v31; // x22
  struct FortuneBonusResultDialog___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x3
  struct FortuneBonusResultDialog_RewardDispUnit_array *v40; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v41; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v42; // x8
  FortuneBonusResultDialog_o *v43; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v44; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v45; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v46; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v47; // x8
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x21
  int max_length; // w8
  __int64 v50; // x22
  FortuneBonusResultDialog_ItemDispUnit_o *v51; // x29
  int32_t v52; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_5973B32 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_GiftEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__);
    sub_2213A60(&FortuneBonusResultDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_6794/*"FORTUNE_BONUS_RESULT_NO_NAME"*/);
    this = (FortuneBonusResultDialog_o *)sub_2213A60(&StringLiteral_6793/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/);
    byte_5973B32 = 1;
  }
  if ( !logDataArray )
    goto LABEL_62;
  rewardDispUnitArray = v4->fields.rewardDispUnitArray;
  if ( !rewardDispUnitArray )
    goto LABEL_62;
  max_length_low = LODWORD(rewardDispUnitArray->max_length);
  if ( (int)max_length_low >= SLODWORD(logDataArray->max_length) && (int)max_length_low >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = v4->fields.rewardDispUnitArray;
      if ( !v8 )
        break;
      if ( v7 >= LODWORD(v8->max_length) )
        goto LABEL_63;
      v9 = v8->m_Items[v7];
      if ( !v9 )
        break;
      targetDay = v9->fields.targetDay;
      dayLabel = v9->fields.dayLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, logDataArray);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6793/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, 0);
      v52 = targetDay;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v52);
      v14 = (FortuneBonusResultDialog_o *)System_String__Format(v12, v13, 0);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        v14,
        dayLabel,
        (System_String_o *)v14,
        v4->fields.dayLabelWidth,
        v15);
      FortuneBonusLogData = FortuneBonusResultDialog__GetFortuneBonusLogData(v4, targetDay, v16);
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
            break;
          if ( v7 >= LODWORD(v21->max_length) )
            goto LABEL_63;
          v22 = v21->m_Items[v7];
          if ( !v22 )
            break;
          v23 = this;
          FortuneBonusResultDialog__SetTextAndCondensedScale(
            this,
            v22->fields.fortuneName,
            (System_String_o *)this->fields.m_CancellationTokenSource,
            v4->fields.fortuneNameWidth,
            v20);
          v24 = v4->fields.rewardDispUnitArray;
          if ( !v24 )
            break;
          if ( v7 >= LODWORD(v24->max_length) )
            goto LABEL_63;
          v25 = v24->m_Items[v7];
          if ( !v25 )
            break;
          this = (FortuneBonusResultDialog_o *)v25->fields.fortuneNoName;
          if ( !this )
            break;
          this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
          this = (FortuneBonusResultDialog_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
          if ( !this )
            break;
          this = (FortuneBonusResultDialog_o *)GiftMaster__GetListById(
                                                 (GiftMaster_o *)this,
                                                 (int32_t)v23->fields.basePanel,
                                                 0);
          if ( this )
          {
            v27 = this;
            if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
            {
              v28 = FortuneBonusResultDialog___c_TypeInfo;
              if ( !*(&FortuneBonusResultDialog___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(FortuneBonusResultDialog___c_TypeInfo, logDataArray);
                v28 = FortuneBonusResultDialog___c_TypeInfo;
              }
              static_fields = v28->static_fields;
              _9__21_0 = (System_Comparison_T__o *)static_fields->__9__21_0;
              if ( !_9__21_0 )
              {
                if ( !*(&v28->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v28, logDataArray);
                  static_fields = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                }
                v31 = (Il2CppObject *)static_fields->__9;
                _9__21_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_GiftEntity__TypeInfo);
                System_Comparison_object____ctor(
                  _9__21_0,
                  v31,
                  Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__,
                  0);
                v32 = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                v32->__9__21_0 = (struct System_Comparison_GiftEntity__o *)_9__21_0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v32->__9__21_0,
                  (int32_t)_9__21_0,
                  v33,
                  v34,
                  v35,
                  v36,
                  v37,
                  v38);
              }
              System_Collections_Generic_List_object___Sort_71849708(
                (System_Collections_Generic_List_object__o *)v27,
                _9__21_0,
                (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
              v40 = v4->fields.rewardDispUnitArray;
              if ( !v40 )
                break;
              if ( v7 >= LODWORD(v40->max_length) )
                goto LABEL_63;
              FortuneBonusResultDialog__SetupRewardDispUnit(
                v4,
                v40->m_Items[v7],
                (System_Collections_Generic_List_GiftEntity__o *)v27,
                v39);
            }
          }
        }
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
        this = (FortuneBonusResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6794/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, 0);
        v41 = v4->fields.rewardDispUnitArray;
        if ( !v41 )
          break;
        if ( v7 >= LODWORD(v41->max_length) )
          goto LABEL_63;
        v42 = v41->m_Items[v7];
        if ( !v42 )
          break;
        v43 = this;
        this = (FortuneBonusResultDialog_o *)v42->fields.fortuneName;
        if ( !this )
          break;
        this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v44 = v4->fields.rewardDispUnitArray;
        if ( !v44 )
          break;
        if ( v7 >= LODWORD(v44->max_length) )
          goto LABEL_63;
        v45 = v44->m_Items[v7];
        if ( !v45 )
          break;
        this = (FortuneBonusResultDialog_o *)v45->fields.fortuneNoName;
        if ( !this )
          break;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)v43, 0);
        v46 = v4->fields.rewardDispUnitArray;
        if ( !v46 )
          break;
        if ( v7 >= LODWORD(v46->max_length) )
          goto LABEL_63;
        v47 = v46->m_Items[v7];
        if ( !v47 )
          break;
        itemDispUnitArray = v47->fields.itemDispUnitArray;
        if ( !itemDispUnitArray )
          break;
        max_length = itemDispUnitArray->max_length;
        if ( max_length >= 1 )
        {
          v50 = 0;
          while ( (unsigned int)v50 < max_length )
          {
            v51 = itemDispUnitArray->m_Items[v50];
            if ( !v51 )
              goto LABEL_62;
            this = (FortuneBonusResultDialog_o *)v51->fields.itemName;
            if ( !this )
              goto LABEL_62;
            this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
            if ( !this )
              goto LABEL_62;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (FortuneBonusResultDialog_o *)v51->fields.itemNoName;
            if ( !this )
              goto LABEL_62;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v43, 0);
            max_length = itemDispUnitArray->max_length;
            if ( (int)++v50 >= max_length )
              goto LABEL_60;
          }
LABEL_63:
          sub_2213CE4(this);
        }
      }
LABEL_60:
      if ( ++v7 == max_length_low )
        return;
    }
LABEL_62:
    sub_2213CDC(this, logDataArray);
  }
}


void FortuneBonusResultDialog__SetupRewardDispUnit(
        FortuneBonusResultDialog_o *this,
        FortuneBonusResultDialog_RewardDispUnit_o *rewardDispUnit,
        System_Collections_Generic_List_GiftEntity__o *giftEntList,
        const MethodInfo *method)
{
  FortuneBonusResultDialog_o *v6; // x21
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  __int64 v10; // x26
  struct FortuneBonusResultDialog_ItemDispUnit_array *v11; // x8
  __int64 v12; // x9
  int32_t v13; // w23
  FortuneBonusResultDialog_ItemDispUnit_o *v14; // x24
  Il2CppObject *Item; // x0
  const MethodInfo *v16; // x4

  v6 = this;
  if ( (byte_5973B33 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    this = (FortuneBonusResultDialog_o *)sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    byte_5973B33 = 1;
  }
  if ( !rewardDispUnit || (itemDispUnitArray = rewardDispUnit->fields.itemDispUnitArray) == 0 || !giftEntList )
LABEL_18:
    sub_2213CDC(this, rewardDispUnit);
  max_length = itemDispUnitArray->max_length;
  if ( giftEntList->fields._size >= (int)max_length && (int)max_length >= 1 )
  {
    v9 = 0;
    v10 = (unsigned int)max_length;
    do
    {
      this = (FortuneBonusResultDialog_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)giftEntList,
                                             v9,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( this )
      {
        v11 = rewardDispUnit->fields.itemDispUnitArray;
        if ( v9 )
          v12 = 156;
        else
          v12 = 152;
        if ( !v11 )
          goto LABEL_18;
        if ( v9 >= LODWORD(v11->max_length) )
          sub_2213CE4(this);
        v13 = *(_DWORD *)((char *)&v6->klass + v12);
        v14 = v11->m_Items[v9];
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)giftEntList,
                 v9,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        FortuneBonusResultDialog__SetupItemDispUnitArray(v6, v14, (GiftEntity_o *)Item, v13, v16);
      }
      ++v9;
    }
    while ( v10 != v9 );
  }
}


// attributes: thunk
void FortuneBonusResultDialog__Start(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  FortuneBonusResultDialog__CheckSerializeField(this, method);
}


void FortuneBonusResultDialog___OnClickButton_b__31_0(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_clickFunc; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  p_clickFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc;
  ActionExtensions__Call(this->fields.clickFunc, 0);
  p_clickFunc->klass = 0;
  sub_2213A04(p_clickFunc, 0, v4, v5, v6, v7, v8, v9);
  FortuneBonusResultDialog__Release(this, v10);
}


void FortuneBonusResultDialog___Open_b__20_0(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *FortuneBonusResultDialog__get_closeBtnPath(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5973B3D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16270/*"Window/OkBtn"*/);
    byte_5973B3D = 1;
  }
  return (System_String_o *)StringLiteral_16270/*"Window/OkBtn"*/;
}


void FortuneBonusResultDialog_ItemDispUnit___ctor(
        FortuneBonusResultDialog_ItemDispUnit_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_GameObject_o *FortuneBonusResultDialog_ItemDispUnit__get_ItemIconRoot(
        FortuneBonusResultDialog_ItemDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.itemIconRoot;
}


UILabel_o *FortuneBonusResultDialog_ItemDispUnit__get_ItemName(
        FortuneBonusResultDialog_ItemDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.itemName;
}


UILabel_o *FortuneBonusResultDialog_ItemDispUnit__get_ItemNoName(
        FortuneBonusResultDialog_ItemDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.itemNoName;
}


void FortuneBonusResultDialog_RewardDispUnit___ctor(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UILabel_o *FortuneBonusResultDialog_RewardDispUnit__get_DayLabel(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.dayLabel;
}


UILabel_o *FortuneBonusResultDialog_RewardDispUnit__get_FortuneName(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.fortuneName;
}


UILabel_o *FortuneBonusResultDialog_RewardDispUnit__get_FortuneNoName(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.fortuneNoName;
}


FortuneBonusResultDialog_ItemDispUnit_array *FortuneBonusResultDialog_RewardDispUnit__get_ItemDispUnitArray(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.itemDispUnitArray;
}


int32_t FortuneBonusResultDialog_RewardDispUnit__get_TargetDay(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.targetDay;
}


UnityEngine_GameObject_o *FortuneBonusResultDialog_RewardDispUnit__get_UnitObject(
        FortuneBonusResultDialog_RewardDispUnit_o *this,
        const MethodInfo *method)
{
  return this->fields.unitObject;
}


void FortuneBonusResultDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973B3F & 1) == 0 )
  {
    sub_2213A60(&FortuneBonusResultDialog___c_TypeInfo);
    byte_5973B3F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(FortuneBonusResultDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FortuneBonusResultDialog___c_TypeInfo->static_fields->__9 = (struct FortuneBonusResultDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FortuneBonusResultDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FortuneBonusResultDialog___c___ctor(FortuneBonusResultDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t FortuneBonusResultDialog___c___SetupRewardDisp_b__21_0(
        FortuneBonusResultDialog___c_o *this,
        GiftEntity_o *a,
        GiftEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


void FortuneBonusResultDialog___c__DisplayClass26_0___ctor(
        FortuneBonusResultDialog___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool FortuneBonusResultDialog___c__DisplayClass26_0___GetFortuneBonusLogData_b__0(
        FortuneBonusResultDialog___c__DisplayClass26_0_o *this,
        CommonUI_FortuneBonusRewardData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_2213CDC(this, 0);
  return d->fields.day == this->fields.day;
}


void FortuneBonusResultDialog___c__DisplayClass27_0___ctor(
        FortuneBonusResultDialog___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool FortuneBonusResultDialog___c__DisplayClass27_0___GetFortuneBonusDetailData_b__0(
        FortuneBonusResultDialog___c__DisplayClass27_0_o *this,
        CommonUI_FortuneBonusDetailData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return n->fields.idx == this->fields.index;
}