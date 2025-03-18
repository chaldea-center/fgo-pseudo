void __fastcall AppendSkillExchangeDialog___ctor(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C25890 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C25890 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AppendSkillExchangeDialog__Close(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall AppendSkillExchangeDialog__EndOpen(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AppendSkillExchangeDialog__ExchangeLvText(
        AppendSkillExchangeDialog_o *this,
        int32_t currentLv,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2588C & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&currentLv);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_8408/*"MAX_RECOMMEND_SUPPORT_DECK_NUM"*/, v5);
    sub_1C3B764(&StringLiteral_2098/*"AXIX"*/, v6);
    byte_4C2588C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( currentLv <= 0 )
    return LocalizationManager__Get((System_String_o *)StringLiteral_2098/*"AXIX"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8408/*"MAX_RECOMMEND_SUPPORT_DECK_NUM"*/, 0LL);
  v13 = currentLv;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v8, v9, v10);
  return System_String__Format(v7, v11, 0LL);
}


void __fastcall AppendSkillExchangeDialog__Init(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C2588A & 1) == 0 )
  {
    sub_1C3B764(&string_TypeInfo, method);
    byte_4C2588A = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillBaseInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.beforeAppendSkillBaseLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.afterAppendSkillBaseLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillIconBaseTitleLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillIconBaseMessageLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillTargetInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.beforeAppendSkillTargetLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.afterAppendSkillTargetLvInfo;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillIconTargetTitleLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillIconTargetMessageLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  titleLabel = this->fields.appendSkillWarningMessageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = this->fields.remainingCountLabel) == 0LL)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = this->fields.decideButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = this->fields.cancelButtonLabel) == 0LL) )
  {
LABEL_19:
    sub_1C3B9C0(titleLabel, method);
  }
  UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AppendSkillExchangeDialog__OnClickCancel(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C2588E & 1) == 0 )
  {
    sub_1C3B764(&Method_AppendSkillExchangeDialog_OnClickCancel__, method);
    byte_4C2588E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_AppendSkillExchangeDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_AppendSkillExchangeDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall AppendSkillExchangeDialog__OnClickDecide(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4C2588D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_AppendSkillExchangeDialog_OnClickDecide__, v3);
    sub_1C3B764(&Method_AppendSkillExchangeDialog__OnClickDecide_b__24_0__, v4);
    byte_4C2588D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v5 = Method_AppendSkillExchangeDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_AppendSkillExchangeDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_AppendSkillExchangeDialog__OnClickDecide_b__24_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall AppendSkillExchangeDialog__OnEnable(AppendSkillExchangeDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C2588F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3225/*"Breadcrumbs size must be greater or equal to 10kB"*/, method);
    byte_4C2588F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43310944(transform, (System_String_o *)StringLiteral_3225/*"Breadcrumbs size must be greater or equal to 10kB"*/, 0LL);
}


void __fastcall AppendSkillExchangeDialog__Open(
        AppendSkillExchangeDialog_o *this,
        SetLevelUpData_o *baseData,
        SetLevelUpData_o *targetData,
        int32_t remainingCount,
        System_Action_o *decideAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UILabel_o *titleLabel; // x23
  System_String_o *appendSkillBaseIconComp; // x0
  __int64 v31; // x1
  UILabel_o *appendSkillBaseInfo; // x23
  UILabel_o *beforeAppendSkillBaseLvInfo; // x23
  AppendSkillExchangeDialog_o *v34; // x0
  const MethodInfo *v35; // x2
  UILabel_o *afterAppendSkillBaseLvInfo; // x23
  const MethodInfo *v37; // x2
  System_String_o *v38; // x24
  Il2CppObject *appended; // x0
  UILabel_o *appendSkillTargetInfo; // x23
  UILabel_o *beforeAppendSkillTargetLvInfo; // x23
  AppendSkillExchangeDialog_o *v42; // x0
  const MethodInfo *v43; // x2
  UILabel_o *afterAppendSkillTargetLvInfo; // x23
  AppendSkillExchangeDialog_o *v45; // x0
  int32_t currentLv; // w1
  System_String_o *v47; // x22
  const MethodInfo *v48; // x2
  Il2CppObject *v49; // x0
  bool IsExchangeLimited; // w0
  UILabel_o *appendSkillWarningMessageLabel; // x21
  bool v52; // w22
  System_String_o *v53; // x22
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  System_String_o *v58; // x22
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x0
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  System_Action_o *v65; // x20
  int32_t v66; // [xsp+8h] [xbp-48h] BYREF
  int32_t v67; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C2588B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, baseData);
    sub_1C3B764(&Method_AppendSkillExchangeDialog_EndOpen__, v11);
    sub_1C3B764(&int_TypeInfo, v12);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_2109/*"AcceptOverwrittenShadow"*/, v14);
    sub_1C3B764(&StringLiteral_2107/*"Accept-Language"*/, v15);
    sub_1C3B764(&StringLiteral_2088/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, v16);
    sub_1C3B764(&StringLiteral_2100/*"AZazÀÖØöøıĴľŁňŊžƀǃǍǰǴǵǺȗɐʨʻˁΆΆΈΊΌΌΎΡΣώϐϖϚϚϜϜϞϞϠϠϢϳЁЌЎяёќўҁҐӄӇӈӋӌӐӫӮӵӸӹԱՖՙՙաֆאתװײءغفيٱڷںھۀێېۓەەۥۦअहऽऽक़ॡঅঌএঐওনপরললশহড়ঢ়য়ৡৰৱਅਊਏਐਓਨਪਰਲਲ਼ਵਸ਼ਸਹਖ਼ੜਫ਼ਫ਼ੲੴઅઋઍઍએઑઓનપરલળવહઽઽૠૠଅଌଏଐଓନପରଲଳଶହଽଽଡ଼ଢ଼ୟୡஅஊஎஐஒகஙசஜஜஞடணதநபமவஷஹఅఌఎఐఒనపళవహౠౡಅಌಎಐಒನಪಳವಹೞೞೠೡഅഌഎഐഒനപഹൠൡกฮะะาำเๅກຂຄຄງຈຊຊຍຍດທນຟມຣລລວວສຫອຮະະາຳຽຽເໄཀཇཉཀྵႠჅაჶᄀᄀᄂᄃᄅᄇᄉᄉᄋᄌᄎᄒᄼᄼᄾᄾᅀᅀᅌᅌᅎᅎᅐᅐᅔᅕᅙᅙᅟᅡᅣᅣᅥᅥᅧᅧᅩᅩᅭᅮᅲᅳᅵᅵᆞᆞᆨᆨᆫᆫᆮᆯᆷᆸᆺᆺᆼᇂᇫᇫᇰᇰᇹᇹḀẛẠỹἀἕἘἝἠὅὈὍὐὗὙὙὛὛὝὝὟώᾀᾴᾶᾼιιῂῄῆῌῐΐῖΊῠῬῲῴῶῼΩΩKÅ℮℮ↀↂ〇〇〡〩ぁゔァヺㄅㄬ一龥가힣"*/, v17);
    sub_1C3B764(&StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v18);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v19);
    sub_1C3B764(&StringLiteral_2099/*"AZ__azÀÖØöøıĴľŁňŊžƀǃǍǰǴǵǺȗɐʨʻˁΆΆΈΊΌΌΎΡΣώϐϖϚϚϜϜϞϞϠϠϢϳЁЌЎяёќўҁҐӄӇӈӋӌӐӫӮӵӸӹԱՖՙՙաֆאתװײءغفيٱڷںھۀێېۓەەۥۦअहऽऽक़ॡঅঌএঐওনপরললশহড়ঢ়য়ৡৰৱਅਊਏਐਓਨਪਰਲਲ਼ਵਸ਼ਸਹਖ਼ੜਫ਼ਫ਼ੲੴઅઋઍઍએઑઓનપરલળવહઽઽૠૠଅଌଏଐଓନପରଲଳଶହଽଽଡ଼ଢ଼ୟୡஅஊஎஐஒகஙசஜஜஞடணதநபமவஷஹఅఌఎఐఒనపళవహౠౡಅಌಎಐಒನಪಳವಹೞೞೠೡഅഌഎഐഒനപഹൠൡกฮะะาำเๅກຂຄຄງຈຊຊຍຍດທນຟມຣລລວວສຫອຮະະາຳຽຽເໄཀཇཉཀྵႠჅაჶᄀᄀᄂᄃᄅᄇᄉᄉᄋᄌᄎᄒᄼᄼᄾᄾᅀᅀᅌᅌᅎᅎᅐᅐᅔᅕᅙᅙᅟᅡᅣᅣᅥᅥᅧᅧᅩᅩᅭᅮᅲᅳᅵᅵᆞᆞᆨᆨᆫᆫᆮᆯᆷᆸᆺᆺᆼᇂᇫᇫᇰᇰᇹᇹḀẛẠỹἀἕἘἝἠὅὈὍὐὗὙὙὛὛὝὝὟώᾀᾴᾶᾼιιῂῄῆῌῐΐῖΊῠῬῲῴῶῼΩΩKÅ℮℮ↀↂ〇〇〡〩ぁゔァヺㄅㄬ一龥가힣"*/, v20);
    sub_1C3B764(&StringLiteral_2108/*"Accept-Ranges"*/, v21);
    sub_1C3B764(&StringLiteral_2104/*"Accept"*/, v22);
    byte_4C2588B = 1;
  }
  AppendSkillExchangeDialog__Init(this, (const MethodInfo *)baseData);
  this->fields.onDecide = decideAction;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)decideAction, v23, v24, v25, v26, v27, v28);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2108/*"Accept-Ranges"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, appendSkillBaseIconComp, 0LL);
  appendSkillBaseInfo = this->fields.appendSkillBaseInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2088/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
  if ( !appendSkillBaseInfo )
    goto LABEL_32;
  UILabel__set_text(appendSkillBaseInfo, appendSkillBaseIconComp, 0LL);
  if ( !baseData )
    goto LABEL_32;
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillBaseIconComp;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  SkillIconComponent__Set((SkillIconComponent_o *)appendSkillBaseIconComp, baseData->fields.currentId, 0LL);
  beforeAppendSkillBaseLvInfo = this->fields.beforeAppendSkillBaseLvInfo;
  appendSkillBaseIconComp = AppendSkillExchangeDialog__ExchangeLvText(v34, baseData->fields.currentLv, v35);
  if ( !beforeAppendSkillBaseLvInfo )
    goto LABEL_32;
  UILabel__set_text(beforeAppendSkillBaseLvInfo, appendSkillBaseIconComp, 0LL);
  afterAppendSkillBaseLvInfo = this->fields.afterAppendSkillBaseLvInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2099/*"AZ__azÀÖØöøıĴľŁňŊžƀǃǍǰǴǵǺȗɐʨʻˁΆΆΈΊΌΌΎΡΣώϐϖϚϚϜϜϞϞϠϠϢϳЁЌЎяёќўҁҐӄӇӈӋӌӐӫӮӵӸӹԱՖՙՙաֆאתװײءغفيٱڷںھۀێېۓەەۥۦअहऽऽक़ॡঅঌএঐওনপরললশহড়ঢ়য়ৡৰৱਅਊਏਐਓਨਪਰਲਲ਼ਵਸ਼ਸਹਖ਼ੜਫ਼ਫ਼ੲੴઅઋઍઍએઑઓનપરલળવહઽઽૠૠଅଌଏଐଓନପରଲଳଶହଽଽଡ଼ଢ଼ୟୡஅஊஎஐஒகஙசஜஜஞடணதநபமவஷஹఅఌఎఐఒనపళవహౠౡಅಌಎಐಒನಪಳವಹೞೞೠೡഅഌഎഐഒനപഹൠൡกฮะะาำเๅກຂຄຄງຈຊຊຍຍດທນຟມຣລລວວສຫອຮະະາຳຽຽເໄཀཇཉཀྵႠჅაჶᄀᄀᄂᄃᄅᄇᄉᄉᄋᄌᄎᄒᄼᄼᄾᄾᅀᅀᅌᅌᅎᅎᅐᅐᅔᅕᅙᅙᅟᅡᅣᅣᅥᅥᅧᅧᅩᅩᅭᅮᅲᅳᅵᅵᆞᆞᆨᆨᆫᆫᆮᆯᆷᆸᆺᆺᆼᇂᇫᇫᇰᇰᇹᇹḀẛẠỹἀἕἘἝἠὅὈὍὐὗὙὙὛὛὝὝὟώᾀᾴᾶᾼιιῂῄῆῌῐΐῖΊῠῬῲῴῶῼΩΩKÅ℮℮ↀↂ〇〇〡〩ぁゔァヺㄅㄬ一龥가힣"*/, 0LL);
  if ( !targetData )
    goto LABEL_32;
  v38 = appendSkillBaseIconComp;
  appended = (Il2CppObject *)AppendSkillExchangeDialog__ExchangeLvText(
                               (AppendSkillExchangeDialog_o *)appendSkillBaseIconComp,
                               targetData->fields.currentLv,
                               v37);
  appendSkillBaseIconComp = System_String__Format(v38, appended, 0LL);
  if ( !afterAppendSkillBaseLvInfo )
    goto LABEL_32;
  UILabel__set_text(afterAppendSkillBaseLvInfo, appendSkillBaseIconComp, 0LL);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconBaseTitleLabel;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, baseData->fields.targetName, 0LL);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconBaseMessageLabel;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, baseData->fields.targetDetail, 0LL);
  appendSkillTargetInfo = this->fields.appendSkillTargetInfo;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2107/*"Accept-Language"*/, 0LL);
  if ( !appendSkillTargetInfo )
    goto LABEL_32;
  UILabel__set_text(appendSkillTargetInfo, appendSkillBaseIconComp, 0LL);
  appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillTargetIconComp;
  if ( !appendSkillBaseIconComp )
    goto LABEL_32;
  SkillIconComponent__Set((SkillIconComponent_o *)appendSkillBaseIconComp, targetData->fields.currentId, 0LL);
  beforeAppendSkillTargetLvInfo = this->fields.beforeAppendSkillTargetLvInfo;
  appendSkillBaseIconComp = AppendSkillExchangeDialog__ExchangeLvText(v42, targetData->fields.currentLv, v43);
  if ( !beforeAppendSkillTargetLvInfo )
    goto LABEL_32;
  UILabel__set_text(beforeAppendSkillTargetLvInfo, appendSkillBaseIconComp, 0LL);
  afterAppendSkillTargetLvInfo = this->fields.afterAppendSkillTargetLvInfo;
  v45 = (AppendSkillExchangeDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2099/*"AZ__azÀÖØöøıĴľŁňŊžƀǃǍǰǴǵǺȗɐʨʻˁΆΆΈΊΌΌΎΡΣώϐϖϚϚϜϜϞϞϠϠϢϳЁЌЎяёќўҁҐӄӇӈӋӌӐӫӮӵӸӹԱՖՙՙաֆאתװײءغفيٱڷںھۀێېۓەەۥۦअहऽऽक़ॡঅঌএঐওনপরললশহড়ঢ়য়ৡৰৱਅਊਏਐਓਨਪਰਲਲ਼ਵਸ਼ਸਹਖ਼ੜਫ਼ਫ਼ੲੴઅઋઍઍએઑઓનપરલળવહઽઽૠૠଅଌଏଐଓନପରଲଳଶହଽଽଡ଼ଢ଼ୟୡஅஊஎஐஒகஙசஜஜஞடணதநபமவஷஹఅఌఎఐఒనపళవహౠౡಅಌಎಐಒನಪಳವಹೞೞೠೡഅഌഎഐഒനപഹൠൡกฮะะาำเๅກຂຄຄງຈຊຊຍຍດທນຟມຣລລວວສຫອຮະະາຳຽຽເໄཀཇཉཀྵႠჅაჶᄀᄀᄂᄃᄅᄇᄉᄉᄋᄌᄎᄒᄼᄼᄾᄾᅀᅀᅌᅌᅎᅎᅐᅐᅔᅕᅙᅙᅟᅡᅣᅣᅥᅥᅧᅧᅩᅩᅭᅮᅲᅳᅵᅵᆞᆞᆨᆨᆫᆫᆮᆯᆷᆸᆺᆺᆼᇂᇫᇫᇰᇰᇹᇹḀẛẠỹἀἕἘἝἠὅὈὍὐὗὙὙὛὛὝὝὟώᾀᾴᾶᾼιιῂῄῆῌῐΐῖΊῠῬῲῴῶῼΩΩKÅ℮℮ↀↂ〇〇〡〩ぁゔァヺㄅㄬ一龥가힣"*/, 0LL);
  currentLv = baseData->fields.currentLv;
  v47 = (System_String_o *)v45;
  v49 = (Il2CppObject *)AppendSkillExchangeDialog__ExchangeLvText(v45, currentLv, v48);
  appendSkillBaseIconComp = System_String__Format(v47, v49, 0LL);
  if ( !afterAppendSkillTargetLvInfo
    || (UILabel__set_text(afterAppendSkillTargetLvInfo, appendSkillBaseIconComp, 0LL),
        (appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconTargetTitleLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, targetData->fields.targetName, 0LL),
        (appendSkillBaseIconComp = (System_String_o *)this->fields.appendSkillIconTargetMessageLabel) == 0LL) )
  {
LABEL_32:
    sub_1C3B9C0(appendSkillBaseIconComp, v31);
  }
  UILabel__set_text((UILabel_o *)appendSkillBaseIconComp, targetData->fields.targetDetail, 0LL);
  IsExchangeLimited = UserServantAppendPassiveSkillMaster__IsExchangeLimited(0LL);
  appendSkillWarningMessageLabel = this->fields.appendSkillWarningMessageLabel;
  v52 = IsExchangeLimited;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v52 )
      goto LABEL_22;
LABEL_26:
    appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_2109/*"AcceptOverwrittenShadow"*/, 0LL);
    if ( !appendSkillWarningMessageLabel )
      goto LABEL_32;
    goto LABEL_27;
  }
  if ( !IsExchangeLimited )
    goto LABEL_26;
LABEL_22:
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2100/*"AZazÀÖØöøıĴľŁňŊžƀǃǍǰǴǵǺȗɐʨʻˁΆΆΈΊΌΌΎΡΣώϐϖϚϚϜϜϞϞϠϠϢϳЁЌЎяёќўҁҐӄӇӈӋӌӐӫӮӵӸӹԱՖՙՙաֆאתװײءغفيٱڷںھۀێېۓەەۥۦअहऽऽक़ॡঅঌএঐওনপরললশহড়ঢ়য়ৡৰৱਅਊਏਐਓਨਪਰਲਲ਼ਵਸ਼ਸਹਖ਼ੜਫ਼ਫ਼ੲੴઅઋઍઍએઑઓનપરલળવહઽઽૠૠଅଌଏଐଓନପରଲଳଶହଽଽଡ଼ଢ଼ୟୡஅஊஎஐஒகஙசஜஜஞடணதநபமவஷஹఅఌఎఐఒనపళవహౠౡಅಌಎಐಒನಪಳವಹೞೞೠೡഅഌഎഐഒനപഹൠൡกฮะะาำเๅກຂຄຄງຈຊຊຍຍດທນຟມຣລລວວສຫອຮະະາຳຽຽເໄཀཇཉཀྵႠჅაჶᄀᄀᄂᄃᄅᄇᄉᄉᄋᄌᄎᄒᄼᄼᄾᄾᅀᅀᅌᅌᅎᅎᅐᅐᅔᅕᅙᅙᅟᅡᅣᅣᅥᅥᅧᅧᅩᅩᅭᅮᅲᅳᅵᅵᆞᆞᆨᆨᆫᆫᆮᆯᆷᆸᆺᆺᆼᇂᇫᇫᇰᇰᇹᇹḀẛẠỹἀἕἘἝἠὅὈὍὐὗὙὙὛὛὝὝὟώᾀᾴᾶᾼιιῂῄῆῌῐΐῖΊῠῬῲῴῶῼΩΩKÅ℮℮ↀↂ〇〇〡〩ぁゔァヺㄅㄬ一龥가힣"*/, 0LL);
  v67 = remainingCount;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v54, v55, v56);
  appendSkillBaseIconComp = System_String__Format(v53, v57, 0LL);
  if ( !appendSkillWarningMessageLabel )
    goto LABEL_32;
  UILabel__set_text(appendSkillWarningMessageLabel, appendSkillBaseIconComp, 0LL);
  appendSkillWarningMessageLabel = this->fields.remainingCountLabel;
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_2104/*"Accept"*/, 0LL);
  v66 = remainingCount;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v59, v60, v61);
  appendSkillBaseIconComp = System_String__Format(v58, v62, 0LL);
  if ( !appendSkillWarningMessageLabel )
    goto LABEL_32;
LABEL_27:
  UILabel__set_text(appendSkillWarningMessageLabel, appendSkillBaseIconComp, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_32;
  UILabel__set_text(decideButtonLabel, appendSkillBaseIconComp, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  appendSkillBaseIconComp = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_32;
  UILabel__set_text(cancelButtonLabel, appendSkillBaseIconComp, 0LL);
  v65 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v65, (Il2CppObject *)this, Method_AppendSkillExchangeDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0LL);
}


void __fastcall AppendSkillExchangeDialog___OnClickDecide_b__24_0(
        AppendSkillExchangeDialog_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onDecide, 0LL);
}