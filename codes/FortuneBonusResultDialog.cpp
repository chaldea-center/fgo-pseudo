void __fastcall FortuneBonusResultDialog___ctor(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18B6B & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B18B6B = 1;
  }
  *(_OWORD *)&this->fields.dayLabelWidth = xmmword_BD3970;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
        sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B18B65 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_FortuneBonusResultDialog_EndClose__, v10, v11);
    byte_4B18B65 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_FortuneBonusResultDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


ItemIconComponent_o *__fastcall FortuneBonusResultDialog__CreateItemIcon(
        FortuneBonusResultDialog_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *itemIconBasePrefab; // x21
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x20
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B18B64 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, parent, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B18B64 = 1;
  }
  itemIconBasePrefab = (UnityEngine_Object_o *)this->fields.itemIconBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  if ( UnityEngine_Object__op_Equality(itemIconBasePrefab, 0LL, 0LL) )
    return 0LL;
  v11 = (Il2CppObject *)this->fields.itemIconBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__Instantiate_object_(
          v11,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
    return 0LL;
  GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v12, parent, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v14, v15);
  return (ItemIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v12,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
}


void __fastcall FortuneBonusResultDialog__EndClose(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *v2; // x19
  System_Action_o *npcFollowerInfos; // t1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  v2 = (PartyOrganizationUtility_o *)this;
  FortuneBonusResultDialog__Init(this, method);
  npcFollowerInfos = (System_Action_o *)v2[1].fields._npcFollowerInfos;
  v2 = (PartyOrganizationUtility_o *)((char *)v2 + 184);
  ActionExtensions__Call(npcFollowerInfos, 0LL);
  v2->klass = 0LL;
  sub_1BCA784(v2, 0LL, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4B18B69 & 1) == 0 )
  {
    this = (FortuneBonusResultDialog_o *)sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, *(_QWORD *)&gType, itemEnt);
    byte_4B18B69 = 1;
  }
  if ( gType == 2 )
  {
    if ( !itemEnt )
      sub_1BCAA3C(this, *(_QWORD *)&gType);
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
  v9 = System_Int32__ToString_63206828((int32_t)&v11, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
  return System_String__Concat_62401220(v8, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CommonUI_FortuneBonusDetailData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusDetailData(
        FortuneBonusResultDialog_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusDetailData_array *details; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4B18B63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__, v8, v9);
    sub_1BCA7E0(&FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo, v10, v11);
    byte_4B18B63 = 1;
  }
  v12 = sub_1BCAA2C(FortuneBonusResultDialog___c__DisplayClass27_0_TypeInfo, *(_QWORD *)&index, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = index;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  details = fortuneBonusData->fields.details;
  if ( !details || !*(_QWORD *)&details->max_length )
    return 0LL;
  v19 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_CommonUI_FortuneBonusDetailData__bool__TypeInfo,
                                         v14,
                                         v15,
                                         v16);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_FortuneBonusResultDialog___c__DisplayClass27_0__GetFortuneBonusDetailData_b__0__,
    0LL);
  return (CommonUI_FortuneBonusDetailData_o *)BasicHelper__Find_object_(
                                                (System_Object_array *)details,
                                                (System_Func_T__bool__o *)v19,
                                                (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_CommonUI_FortuneBonusDetailData___);
}


// local variable allocation has failed, the output may be wrong!
CommonUI_FortuneBonusRewardData_o *__fastcall FortuneBonusResultDialog__GetFortuneBonusLogData(
        FortuneBonusResultDialog_o *this,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4B18B62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___, *(_QWORD *)&day, method);
    sub_1BCA7E0(&System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__, v8, v9);
    sub_1BCA7E0(&FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo, v10, v11);
    byte_4B18B62 = 1;
  }
  v12 = sub_1BCAA2C(FortuneBonusResultDialog___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&day, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = day;
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( !fortuneBonusData )
    return 0LL;
  logs = fortuneBonusData->fields.logs;
  if ( !logs || !*(_QWORD *)&logs->max_length )
    return 0LL;
  v19 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_CommonUI_FortuneBonusRewardData__bool__TypeInfo,
                                         v14,
                                         v15,
                                         v16);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_FortuneBonusResultDialog___c__DisplayClass26_0__GetFortuneBonusLogData_b__0__,
    0LL);
  return (CommonUI_FortuneBonusRewardData_o *)BasicHelper__Find_object_(
                                                (System_Object_array *)logs,
                                                (System_Func_T__bool__o *)v19,
                                                (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_CommonUI_FortuneBonusRewardData___);
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
    sub_1BCAA44(this, method);
  return rewards->m_Items[0];
}


void __fastcall FortuneBonusResultDialog__GetGiftInfo(
        FortuneBonusResultDialog_o *this,
        GiftEntity_o *giftEnt,
        System_String_o **nameText,
        System_String_o **countText,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  LocalizationManager_c *v19; // x0
  System_String_o *unknownNameText; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_String_o *monitor; // x1
  FortuneBonusResultDialog_o *v36; // x0
  const MethodInfo *v37; // x4
  System_String_o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B18B68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, giftEnt, nameText);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B18B68 = 1;
  }
  entity = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, giftEnt);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, giftEnt, nameText);
    byte_4B1194D = 1;
  }
  v19 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, giftEnt);
    v19 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v19->static_fields->unknownNameText;
  *nameText = unknownNameText;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)nameText,
    (int64_t)unknownNameText,
    (int64_t)nameText,
    (int32_t)countText,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  *countText = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)countText, (int64_t)StringLiteral_1/*""*/, v21, v22, v23, v24, v25, v26);
  if ( !giftEnt )
    goto LABEL_18;
  if ( giftEnt->fields.type != 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_18;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    giftEnt->fields.objectId,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
LABEL_18:
    sub_1BCAA3C(Master_object, v28);
  monitor = (System_String_o *)entity[1].monitor;
  *nameText = monitor;
  sub_1BCA784((PartyOrganizationUtility_o *)nameText, (int64_t)monitor, v29, v30, v31, v32, v33, v34);
  v38 = FortuneBonusResultDialog__GetCountText(
          v36,
          giftEnt->fields.type,
          (ItemEntity_o *)entity,
          giftEnt->fields.num,
          v37);
  *countText = v38;
  sub_1BCA784((PartyOrganizationUtility_o *)countText, (int64_t)v38, v39, v40, v41, v42, v43, v44);
}


void __fastcall FortuneBonusResultDialog__Init(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B18B5D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B18B5D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.okBtnLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortuneBonusResultDialog__OnClickButton(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B18B66 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FortuneBonusResultDialog_OnClickButton__, v4, v5);
    sub_1BCA7E0(&Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, v6, v7);
    byte_4B18B66 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v8 = Method_FortuneBonusResultDialog_OnClickButton__;
    if ( (*((_BYTE *)Method_FortuneBonusResultDialog_OnClickButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_FortuneBonusResultDialog_OnClickButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_FortuneBonusResultDialog__OnClickButton_b__31_0__, 0LL);
    FortuneBonusResultDialog__Close(this, v13, v14);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x22
  __int64 v29; // x1
  __int64 gameObject; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Transform_o *v33; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *subTitleLabel; // x22
  UILabel_o *okBtnLabel; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct UISprite_array *lineSpriteArray; // x8
  unsigned __int64 v44; // x23
  unsigned __int64 max_length; // x9
  UISprite_o *v46; // x22
  const MethodInfo *v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct CommonUI_FortuneBonusData_o *fortuneBonusData; // x8
  struct CommonUI_FortuneBonusRewardData_array *logs; // x1

  if ( (byte_4B18B5E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, fortuneBonus, nextAction);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_FortuneBonusResultDialog__Open_b__20_0__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_18149/*"chronology_line"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_6598/*"FORTUNE_BONUS_RESULT_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_6594/*"FORTUNE_BONUS_RESULT_BUTTON"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_6597/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_18184/*"clear00"*/, v23, v24);
    byte_4B18B5E = 1;
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  if ( isEnabledOpenAnim )
  {
    v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_FortuneBonusResultDialog__Open_b__20_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
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
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_18184/*"clear00"*/, 0LL);
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
    v33 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4B109C6 )
    {
      gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v31, v32);
      byte_4B109C6 = 1;
    }
    if ( !v33 )
LABEL_25:
      sub_1BCAA3C(gameObject, v31);
    UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6598/*"FORTUNE_BONUS_RESULT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_25;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  subTitleLabel = this->fields.subTitleLabel;
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6597/*"FORTUNE_BONUS_RESULT_SUBTITLE"*/, 0LL);
  if ( !subTitleLabel )
    goto LABEL_25;
  UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL);
  okBtnLabel = this->fields.okBtnLabel;
  gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6594/*"FORTUNE_BONUS_RESULT_BUTTON"*/, 0LL);
  if ( !okBtnLabel )
    goto LABEL_25;
  UILabel__set_text(okBtnLabel, (System_String_o *)gameObject, 0LL);
  lineSpriteArray = this->fields.lineSpriteArray;
  if ( !lineSpriteArray )
    goto LABEL_25;
  v44 = 0LL;
  while ( 1 )
  {
    max_length = lineSpriteArray->max_length;
    if ( (__int64)v44 >= (int)max_length )
      break;
    if ( v44 >= max_length )
      sub_1BCAA44(gameObject, v31);
    v46 = lineSpriteArray->m_Items[v44];
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
    gameObject = AtlasManager__SetEventUI(v46, (System_String_o *)StringLiteral_18149/*"chronology_line"*/, 0LL);
    lineSpriteArray = this->fields.lineSpriteArray;
    ++v44;
    if ( !lineSpriteArray )
      goto LABEL_25;
  }
  this->fields.fortuneBonusData = fortuneBonus;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.fortuneBonusData,
    (int64_t)fortuneBonus,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  fortuneBonusData = this->fields.fortuneBonusData;
  if ( fortuneBonusData )
  {
    logs = fortuneBonusData->fields.logs;
    if ( logs )
    {
      if ( *(_QWORD *)&logs->max_length )
        FortuneBonusResultDialog__SetupRewardDisp(this, logs, v47);
    }
  }
  this->fields.clickFunc = nextAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clickFunc,
    (int64_t)nextAction,
    (int64_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52);
}


void __fastcall FortuneBonusResultDialog__Release(FortuneBonusResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4B18B67 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18B67 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  UnityEngine_Object__Destroy_70154244(v7, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *ItemIcon; // x23
  int32_t num; // w3
  const MethodInfo *v16; // x4
  __int64 v17; // x1
  System_String_o *v18; // x0
  FortuneBonusResultDialog_o *v19; // x0
  const MethodInfo *v20; // x4
  Il2CppObject *v21; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+8h] [xbp-38h] BYREF

  v7 = itemDispUnit;
  v8 = this;
  if ( (byte_4B18B61 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, itemDispUnit, giftEnt);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    this = (FortuneBonusResultDialog_o *)sub_1BCA7E0(&StringLiteral_10589/*"PRESENT_INFO"*/, v11, v12);
    byte_4B18B61 = 1;
  }
  v21 = 0LL;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    this = (FortuneBonusResultDialog_o *)UnityEngine_Object__op_Equality(ItemIcon, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      itemDispUnit = (FortuneBonusResultDialog_ItemDispUnit_o *)(unsigned int)giftEnt->fields.prioredIconId;
      if ( (int)itemDispUnit < 1 )
      {
        if ( !ItemIcon )
          goto LABEL_22;
        ItemIconComponent__SetGift_38855180(
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
        ItemIconComponent__SetItemImage_38858796(
          (ItemIconComponent_o *)ItemIcon,
          (int32_t)itemDispUnit,
          giftEnt->fields.objectId,
          num,
          0LL);
      }
      FortuneBonusResultDialog__GetGiftInfo(v8, giftEnt, &nameText, (System_String_o **)&v21, v16);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10589/*"PRESENT_INFO"*/, 0LL);
      v19 = (FortuneBonusResultDialog_o *)System_String__Format_62415592(v18, (Il2CppObject *)nameText, v21, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        v19,
        v7->fields.itemName,
        (System_String_o *)v19,
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
LABEL_22:
      sub_1BCAA3C(this, itemDispUnit);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  struct FortuneBonusResultDialog_RewardDispUnit_array *rewardDispUnitArray; // x8
  int max_length; // w23
  il2cpp_array_size_t v27; // w9
  __int64 v28; // x27
  FortuneBonusResultDialog_RewardDispUnit_o *v29; // x8
  int32_t targetDay; // w20
  UILabel_o *dayLabel; // x21
  System_String_o *v32; // x22
  Il2CppObject *v33; // x0
  FortuneBonusResultDialog_o *v34; // x0
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x2
  CommonUI_FortuneBonusRewardData_o *FortuneBonusLogData; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x4
  struct FortuneBonusResultDialog_RewardDispUnit_array *v41; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v42; // x8
  FortuneBonusResultDialog_o *v43; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v44; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v45; // x8
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  FortuneBonusResultDialog_o *v49; // x20
  FortuneBonusResultDialog___c_c *v50; // x0
  System_Comparison_T__o *_9__21_0; // x21
  struct FortuneBonusResultDialog_RewardDispUnit_array *v52; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v53; // x8
  FortuneBonusResultDialog_o *v54; // x20
  struct FortuneBonusResultDialog_RewardDispUnit_array *v55; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v56; // x8
  struct FortuneBonusResultDialog_RewardDispUnit_array *v57; // x8
  FortuneBonusResultDialog_RewardDispUnit_o *v58; // x8
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x21
  int v60; // w8
  unsigned int v61; // w22
  FortuneBonusResultDialog_ItemDispUnit_o *v62; // x28
  Il2CppObject *v63; // x22
  struct FortuneBonusResultDialog___c_StaticFields *static_fields; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  const MethodInfo *v71; // x3
  struct FortuneBonusResultDialog_RewardDispUnit_array *v72; // x8
  int32_t v73; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4B18B5F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_GiftEntity__TypeInfo, logDataArray, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Sort__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__, v17, v18);
    sub_1BCA7E0(&FortuneBonusResultDialog___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_6596/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, v21, v22);
    this = (FortuneBonusResultDialog_o *)sub_1BCA7E0(&StringLiteral_6595/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, v23, v24);
    byte_4B18B5F = 1;
  }
  if ( !logDataArray || (rewardDispUnitArray = v4->fields.rewardDispUnitArray) == 0LL )
LABEL_63:
    sub_1BCAA3C(this, logDataArray);
  max_length = rewardDispUnitArray->max_length;
  if ( max_length >= (signed int)logDataArray->max_length && max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= rewardDispUnitArray->max_length )
        goto LABEL_65;
      v28 = (int)v27;
      v29 = rewardDispUnitArray->m_Items[v27];
      if ( !v29 )
        goto LABEL_63;
      targetDay = v29->fields.targetDay;
      dayLabel = v29->fields.dayLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, logDataArray);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_6595/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, 0LL);
      v73 = targetDay;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
      v34 = (FortuneBonusResultDialog_o *)System_String__Format(v32, v33, 0LL);
      FortuneBonusResultDialog__SetTextAndCondensedScale(
        v34,
        dayLabel,
        (System_String_o *)v34,
        v4->fields.dayLabelWidth,
        v35);
      FortuneBonusLogData = FortuneBonusResultDialog__GetFortuneBonusLogData(v4, targetDay, v36);
      if ( FortuneBonusLogData )
      {
        this = (FortuneBonusResultDialog_o *)FortuneBonusResultDialog__GetFortuneBonusDetailData(
                                               v4,
                                               FortuneBonusLogData->fields.idx,
                                               v39);
        if ( this )
        {
          v41 = v4->fields.rewardDispUnitArray;
          if ( !v41 )
            goto LABEL_63;
          if ( (unsigned int)v28 >= v41->max_length )
            goto LABEL_65;
          v42 = v41->m_Items[v28];
          if ( !v42 )
            goto LABEL_63;
          v43 = this;
          FortuneBonusResultDialog__SetTextAndCondensedScale(
            this,
            v42->fields.fortuneName,
            (System_String_o *)this->fields.m_CancellationTokenSource,
            v4->fields.fortuneNameWidth,
            v40);
          v44 = v4->fields.rewardDispUnitArray;
          if ( !v44 )
            goto LABEL_63;
          if ( (unsigned int)v28 >= v44->max_length )
            goto LABEL_65;
          v45 = v44->m_Items[v28];
          if ( !v45 )
            goto LABEL_63;
          this = (FortuneBonusResultDialog_o *)v45->fields.fortuneNoName;
          if ( !this )
            goto LABEL_63;
          this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
          if ( !this )
            goto LABEL_63;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v46);
          this = (FortuneBonusResultDialog_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
          if ( !this )
            goto LABEL_63;
          this = (FortuneBonusResultDialog_o *)GiftMaster__GetListById(
                                                 (GiftMaster_o *)this,
                                                 (int32_t)v43->fields.basePanel,
                                                 0LL);
          if ( this )
          {
            v49 = this;
            if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
            {
              v50 = FortuneBonusResultDialog___c_TypeInfo;
              if ( !FortuneBonusResultDialog___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FortuneBonusResultDialog___c_TypeInfo, logDataArray);
                v50 = FortuneBonusResultDialog___c_TypeInfo;
              }
              _9__21_0 = (System_Comparison_T__o *)v50->static_fields->__9__21_0;
              if ( !_9__21_0 )
              {
                if ( !v50->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v50, logDataArray);
                  v50 = FortuneBonusResultDialog___c_TypeInfo;
                }
                v63 = (Il2CppObject *)v50->static_fields->__9;
                _9__21_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                                       System_Comparison_GiftEntity__TypeInfo,
                                                       logDataArray,
                                                       v47,
                                                       v48);
                System_Comparison_object____ctor(
                  _9__21_0,
                  v63,
                  Method_FortuneBonusResultDialog___c__SetupRewardDisp_b__21_0__,
                  0LL);
                static_fields = FortuneBonusResultDialog___c_TypeInfo->static_fields;
                static_fields->__9__21_0 = (struct System_Comparison_GiftEntity__o *)_9__21_0;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
                  (int64_t)_9__21_0,
                  v65,
                  v66,
                  v67,
                  v68,
                  v69,
                  v70);
              }
              System_Collections_Generic_List_object___Sort_56244000(
                (System_Collections_Generic_List_object__o *)v49,
                _9__21_0,
                (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_GiftEntity__Sort__);
              v72 = v4->fields.rewardDispUnitArray;
              if ( !v72 )
                goto LABEL_63;
              if ( (unsigned int)v28 >= v72->max_length )
                goto LABEL_65;
              FortuneBonusResultDialog__SetupRewardDispUnit(
                v4,
                v72->m_Items[v28],
                (System_Collections_Generic_List_GiftEntity__o *)v49,
                v71);
            }
          }
        }
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
        this = (FortuneBonusResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6596/*"FORTUNE_BONUS_RESULT_NO_NAME"*/, 0LL);
        v52 = v4->fields.rewardDispUnitArray;
        if ( !v52 )
          goto LABEL_63;
        if ( (unsigned int)v28 >= v52->max_length )
          goto LABEL_65;
        v53 = v52->m_Items[v28];
        if ( !v53 )
          goto LABEL_63;
        v54 = this;
        this = (FortuneBonusResultDialog_o *)v53->fields.fortuneName;
        if ( !this )
          goto LABEL_63;
        this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_63;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v55 = v4->fields.rewardDispUnitArray;
        if ( !v55 )
          goto LABEL_63;
        if ( (unsigned int)v28 >= v55->max_length )
          goto LABEL_65;
        v56 = v55->m_Items[v28];
        if ( !v56 )
          goto LABEL_63;
        this = (FortuneBonusResultDialog_o *)v56->fields.fortuneNoName;
        if ( !this )
          goto LABEL_63;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)v54, 0LL);
        v57 = v4->fields.rewardDispUnitArray;
        if ( !v57 )
          goto LABEL_63;
        if ( (unsigned int)v28 >= v57->max_length )
          goto LABEL_65;
        v58 = v57->m_Items[v28];
        if ( !v58 )
          goto LABEL_63;
        itemDispUnitArray = v58->fields.itemDispUnitArray;
        if ( !itemDispUnitArray )
          goto LABEL_63;
        v60 = itemDispUnitArray->max_length;
        if ( v60 >= 1 )
        {
          v61 = 0;
          while ( v61 < v60 )
          {
            v62 = itemDispUnitArray->m_Items[v61];
            if ( !v62 )
              goto LABEL_63;
            this = (FortuneBonusResultDialog_o *)v62->fields.itemName;
            if ( !this )
              goto LABEL_63;
            this = (FortuneBonusResultDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !this )
              goto LABEL_63;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FortuneBonusResultDialog_o *)v62->fields.itemNoName;
            if ( !this )
              goto LABEL_63;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v54, 0LL);
            v60 = itemDispUnitArray->max_length;
            if ( (int)++v61 >= v60 )
              goto LABEL_61;
          }
LABEL_65:
          sub_1BCAA44(this, logDataArray);
        }
      }
LABEL_61:
      v27 = v28 + 1;
      if ( (_DWORD)v28 + 1 == max_length )
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
  __int64 v8; // x2
  struct FortuneBonusResultDialog_ItemDispUnit_array *itemDispUnitArray; // x8
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  __int64 v12; // x25
  struct FortuneBonusResultDialog_ItemDispUnit_array *v13; // x8
  __int64 v14; // x9
  int32_t v15; // w23
  FortuneBonusResultDialog_ItemDispUnit_o *v16; // x24
  Il2CppObject *Item; // x0
  const MethodInfo *v18; // x4

  v6 = this;
  if ( (byte_4B18B60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, rewardDispUnit, giftEntList);
    this = (FortuneBonusResultDialog_o *)sub_1BCA7E0(
                                           &Method_System_Collections_Generic_List_GiftEntity__get_Item__,
                                           v7,
                                           v8);
    byte_4B18B60 = 1;
  }
  if ( !rewardDispUnit || (itemDispUnitArray = rewardDispUnit->fields.itemDispUnitArray) == 0LL || !giftEntList )
LABEL_18:
    sub_1BCAA3C(this, rewardDispUnit);
  v10 = *(_QWORD *)&itemDispUnitArray->max_length;
  if ( giftEntList->fields._size >= (int)v10 && (int)v10 >= 1 )
  {
    v11 = 0LL;
    v12 = (unsigned int)v10;
    do
    {
      this = (FortuneBonusResultDialog_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)giftEntList,
                                             v11,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( this )
      {
        v13 = rewardDispUnit->fields.itemDispUnitArray;
        if ( v11 )
          v14 = 148LL;
        else
          v14 = 144LL;
        if ( !v13 )
          goto LABEL_18;
        if ( v11 >= v13->max_length )
          sub_1BCAA44(this, rewardDispUnit);
        v15 = *(_DWORD *)((char *)&v6->klass + v14);
        v16 = v13->m_Items[v11];
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)giftEntList,
                 v11,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        FortuneBonusResultDialog__SetupItemDispUnitArray(v6, v16, (GiftEntity_o *)Item, v15, v18);
      }
      ++v11;
    }
    while ( v12 != v11 );
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
  PartyOrganizationUtility_o *p_clickFunc; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x1

  p_clickFunc = (PartyOrganizationUtility_o *)&this->fields.clickFunc;
  ActionExtensions__Call(this->fields.clickFunc, 0LL);
  p_clickFunc->klass = 0LL;
  sub_1BCA784(p_clickFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  __int64 v2; // x2

  if ( (byte_4B18B6A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15819/*"Window/OkBtn"*/, method, v2);
    byte_4B18B6A = 1;
  }
  return (System_String_o *)StringLiteral_15819/*"Window/OkBtn"*/;
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18B6C & 1) == 0 )
  {
    sub_1BCA7E0(&FortuneBonusResultDialog___c_TypeInfo, v1, v2);
    byte_4B18B6C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FortuneBonusResultDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FortuneBonusResultDialog___c_TypeInfo->static_fields->__9 = (struct FortuneBonusResultDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)FortuneBonusResultDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return n->fields.idx == this->fields.index;
}