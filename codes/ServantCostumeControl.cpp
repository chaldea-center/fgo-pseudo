void ServantCostumeControl___cctor(const MethodInfo *method)
{
  if ( (byte_4CBA531 & 1) == 0 )
  {
    sub_1C6BA08(&ServantCostumeControl_TypeInfo);
    byte_4CBA531 = 1;
  }
  *ServantCostumeControl_TypeInfo->static_fields = (struct ServantCostumeControl_StaticFields)xmmword_CED8F0;
}


void ServantCostumeControl___ctor(ServantCostumeControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CBA530 & 1) == 0 )
  {
    sub_1C6BA08(&CombineMenuControl_TypeInfo);
    byte_4CBA530 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


void ServantCostumeControl__CheckCondJoin(
        ServantCostumeControl_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UserServantEntity_o *baseSvt; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  EventServantEntity_o *v10; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v12; // x21
  System_String_o *v13; // x23
  Il2CppObject *v14; // x1
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  System_String_o *v17; // x24
  CommonConfirmDialog_ClickDelegate_o *v18; // x25

  if ( (byte_4CBA52B & 1) == 0 )
  {
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__);
    sub_1C6BA08(&ServantCostumeControl___c__DisplayClass56_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_3739/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/);
    sub_1C6BA08(&StringLiteral_3738/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/);
    sub_1C6BA08(&StringLiteral_3737/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_3740/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/);
    byte_4CBA52B = 1;
  }
  v5 = sub_1C6BC54(ServantCostumeControl___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = callBack;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callBack, v8, v9);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_17;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0);
  if ( !this->fields.baseSvt )
    goto LABEL_17;
  v10 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3739/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0);
  v14 = (Il2CppObject *)(v10 ? EventServantEntity__getEndTimeStr(v10, 0) : string_TypeInfo->static_fields->Empty);
  v15 = System_String__Format(v13, v14, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3738/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0);
  v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__,
    0);
  if ( !Instance )
LABEL_17:
    sub_1C6BC60(baseSvt, v7);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v12,
    v15,
    v16,
    v17,
    v18,
    0,
    0.0,
    14.7,
    0,
    0,
    0,
    290,
    0,
    1,
    0,
    0,
    0);
}


void ServantCostumeControl__CheckIsSelectBaseSvt(
        ServantCostumeControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  if ( (byte_4CBA525 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CBA525 = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v7 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v7;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v17 = v18;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v17, 0);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v16, 0) )
      {
        ServantCostumeControl__InitDispInfo(this, v10);
        this->fields.baseSvtCostume = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSvtCostume, 0, v11, v12);
        this->fields.eventCombineCostumeEnt = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, 0, v13, v14);
      }
    }
  }
  else
  {
    ServantCostumeControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    ServantCostumeControl__ResetInit(this, v15);
  }
  this->fields.baseUserServantEntity = selectBase;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBase, (int32_t)method, v3);
}


void ServantCostumeControl__ClearItemList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  int max_length; // w20
  ServantCostumeControl_o *v4; // x19
  unsigned int v5; // w21

  itemInfos = this->fields.itemInfos;
  if ( !itemInfos )
    goto LABEL_8;
  max_length = itemInfos->max_length;
  if ( max_length >= 1 )
  {
    v4 = this;
    v5 = 0;
    do
    {
      if ( v5 >= LODWORD(itemInfos->max_length) )
        sub_1C6BC68(this);
      this = (ServantCostumeControl_o *)itemInfos->m_Items[v5];
      if ( !this )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0);
      if ( max_length == ++v5 )
        return;
      itemInfos = v4->fields.itemInfos;
    }
    while ( itemInfos );
LABEL_8:
    sub_1C6BC60(this, method);
  }
}


void ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_1C6BC60(0, method);
  ListViewManager__DestroyList(costumeListInfo, 0);
}


int32_t ServantCostumeControl__GetTutorialOpenType(ServantCostumeControl_o *this, const MethodInfo *method)
{
  return 31;
}


void ServantCostumeControl__InitBaseCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.baseSvtCostume = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSvtCostume, 0, v2, v3);
  this->fields.eventCombineCostumeEnt = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, 0, v5, v6);
}


void ServantCostumeControl__InitCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *costumeFaceIconFrame; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4CBA522 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    byte_4CBA522 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  ServantCostumeControl__InitDispInfo(this, v3);
  ServantCostumeControl__ClearItemList(this, v4);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  costumeFaceIconFrame = System_Int32__ToString_65475288((int)this + 320, (System_String_o *)StringLiteral_9229/*"N0"*/, 0);
  if ( !spendQpLb )
    goto LABEL_14;
  UILabel__set_text(spendQpLb, costumeFaceIconFrame, 0);
  ServantCostumeControl__SetHaveQpInfo(this, v8);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v9);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetNoMountFace(costumeFaceIcon, 0);
  costumeFaceIconFrame = (System_String_o *)this->fields.costumeFaceIconFrame;
  if ( !costumeFaceIconFrame )
    goto LABEL_14;
  costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)costumeFaceIconFrame,
                                              0);
  if ( !costumeFaceIconFrame )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0);
  costumeFaceIconFrame = (System_String_o *)this->fields.costumeFaceIcon;
  if ( !costumeFaceIconFrame )
    goto LABEL_14;
  costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)costumeFaceIconFrame,
                                              0);
  if ( !costumeFaceIconFrame
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0),
        this->fields.isCanCombine = 0,
        ServantCostumeControl__SetExeBtnState(this, v11),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeListInfo) == 0)
    || (costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)costumeFaceIconFrame,
                                                    0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 0, 0),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeReleaseInfo) == 0) )
  {
LABEL_14:
    sub_1C6BC60(costumeFaceIconFrame, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0);
  ServantCostumeControl__ResetInit(this, v12);
}


void ServantCostumeControl__InitCombineCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UILabel_o *spendQpLb; // x20
  System_String_o *gameObject; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v10; // x1
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CBA524 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA524 = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  gameObject = System_Int32__ToString_65475288((int)this + 320, (System_String_o *)StringLiteral_9229/*"N0"*/, 0);
  if ( !spendQpLb )
    goto LABEL_17;
  UILabel__set_text(spendQpLb, gameObject, 0);
  gameObject = (System_String_o *)this->fields.spendQpLb;
  if ( !gameObject )
    goto LABEL_17;
  v11.fields.r = 1.0;
  v11.fields.g = 1.0;
  v11.fields.b = 1.0;
  v11.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v11, 0);
  ServantCostumeControl__SetHaveQpInfo(this, v6);
  ServantCostumeControl__ClearItemList(this, v7);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v8);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetNoMountFace(costumeFaceIcon, 0);
  gameObject = (System_String_o *)this->fields.costumeFaceIcon;
  if ( !gameObject )
    goto LABEL_17;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (System_String_o *)this->fields.costumeFaceIconFrame;
  if ( !gameObject )
    goto LABEL_17;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (System_String_o *)this->fields.costumeNameLb;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (System_String_o *)this->fields.conditionLb;
  if ( !gameObject
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        ServantCostumeControl__SetExeBtnState(this, v10),
        (gameObject = (System_String_o *)this->fields.costumeReleaseInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
        (gameObject = (System_String_o *)this->fields.eventCombineCostumeBalloon) == 0)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_17:
    sub_1C6BC60(gameObject, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
}


void ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CBA523 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA523 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1C6BC60(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
    *p_charaGraph = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_charaGraph, 0, v7, v8);
  }
}


void ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4CBA52F & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantCostumeControl_OnClickBase__);
    byte_4CBA52F = 1;
  }
  v3 = Method_ServantCostumeControl_OnClickBase__;
  if ( (*((_BYTE *)Method_ServantCostumeControl_OnClickBase__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_ServantCostumeControl_OnClickBase__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C6BC60(0, v5);
  CombineRootComponent__ShowBaseListSvtCostume(combineRootComponent, 0);
}


void ServantCostumeControl__OnClickExeCostumeCombine(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ServantCostumeControl_o *v2; // x19
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  EventEntity_o *v4; // x20
  SetRarityDialogControl_o *exeCombineDlg; // x20
  EventCombineCostumeEntity_o *v6; // x21
  System_Action_o *v7; // x22
  System_Action_o *v8; // x23
  struct ServantCostumeEntity_o *v9; // x8
  System_String_o *name; // x21
  SetRarityDialogControl_o *v11; // x20
  int32_t spendQpVal; // w22
  int64_t haveQpVal; // x23
  System_Action_o *v14; // x24
  int64_t startedAt; // x22
  __int64 v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  CombineCostumeEntity_o *Entity; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  SetRarityDialogControl_o *v27; // x21
  bool v28; // w22
  CombineCostumeEntity_o *v29; // x23
  EventCombineCostumeEntity_o *v30; // x24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v32; // x25
  System_Action_o *v33; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v2 = this;
  if ( (byte_4CBA52C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_CombineCostumeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    sub_1C6BA08(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__);
    sub_1C6BA08(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__);
    sub_1C6BA08(&Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__);
    this = (ServantCostumeControl_o *)sub_1C6BA08(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
    byte_4CBA52C = 1;
  }
  if ( v2->fields.eventCombineCostumeEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v2->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_33;
    if ( !this )
      goto LABEL_33;
    this = (ServantCostumeControl_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    v4 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0) )
    {
      exeCombineDlg = v2->fields.exeCombineDlg;
      v6 = v2->fields.eventCombineCostumeEnt;
      v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__, 0);
      v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v6, v7, v8, 0);
        return;
      }
LABEL_33:
      sub_1C6BC60(this, method);
    }
    startedAt = v4->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( startedAt <= NetworkManager__getTime(0) && !EventEntity__IsOpen(v4, 0, 0) )
    {
      v16 = sub_1C6BC54(ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0);
      if ( !v16 )
        goto LABEL_33;
      *(_QWORD *)(v16 + 24) = v2;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 24), (int32_t)v2, v17, v18);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v2->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_33;
      v20 = (CombineCostumeMaster_o *)this;
      v22 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = v22;
      *(_QWORD *)&v34.fields.fakeValue = v21;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v34, 0);
      baseSvtCostume = v2->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v20 )
        goto LABEL_33;
      Entity = CombineCostumeMaster__GetEntity(v20, (int32_t)this, baseSvtCostume->fields.id, 0);
      *(_QWORD *)(v16 + 16) = Entity;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 16), (int32_t)Entity, v25, v26);
      v27 = v2->fields.exeCombineDlg;
      v28 = v2->fields.isShortNeedItem || v2->fields.isShortQp;
      v29 = *(CombineCostumeEntity_o **)(v16 + 16);
      v30 = v2->fields.eventCombineCostumeEnt;
      isShortEventItem = v2->fields.isShortEventItem;
      v32 = (System_Action_bool__o *)sub_1C6BC54(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v32,
        (Il2CppObject *)v16,
        Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__,
        0);
      v33 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
      if ( !v27 )
        goto LABEL_33;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v27,
        v29,
        v30,
        v28,
        isShortEventItem,
        v32,
        v33,
        0);
    }
  }
  else
  {
    v9 = v2->fields.baseSvtCostume;
    if ( !v9 )
      goto LABEL_33;
    name = v9->fields.name;
    v11 = v2->fields.exeCombineDlg;
    spendQpVal = v2->fields.spendQpVal;
    haveQpVal = v2->fields.haveQpVal;
    v14 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__, 0);
    if ( !v11 )
      goto LABEL_33;
    SetRarityDialogControl__SetConfirmCombineCostume(v11, name, spendQpVal, haveQpVal, v14, 0, 0);
  }
}


void ServantCostumeControl__RefreshAlreadyGetInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *alreadyGetInfo; // x0
  UILabel_o *alreadyGetLabel; // x20
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x21
  int max_length; // w8
  unsigned int v7; // w22
  Il2CppClass **v8; // x8
  UnityEngine_Component_o *v9; // x20
  struct UnityEngine_Transform_array *v10; // x8
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBA52D & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3848/*"COSTUME_SELECT_SERVANT_MSG"*/);
    byte_4CBA52D = 1;
  }
  alreadyGetInfo = this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(alreadyGetInfo, 1, 0);
  alreadyGetLabel = this->fields.alreadyGetLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3848/*"COSTUME_SELECT_SERVANT_MSG"*/, 0);
  if ( !alreadyGetLabel )
    goto LABEL_25;
  UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_25;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( v7 < max_length )
    {
      v8 = &alreadyGetLabelBgList->obj.klass + (int)v7;
      v9 = (UnityEngine_Component_o *)v8[4];
      if ( !v9 )
        goto LABEL_25;
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)v8[4],
                                                     (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     v9,
                                                     (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0);
      v11.fields.x = 0.0;
      v11.fields.y = 0.0;
      v11.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v9, v11, 0);
      alreadyGetInfo = UnityEngine_Component__get_gameObject(v9, 0);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(alreadyGetInfo, 0, 0);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_16;
    }
LABEL_26:
    sub_1C6BC68(alreadyGetInfo);
  }
LABEL_16:
  v10 = this->fields.alreadyGetLabelBgList;
  if ( !v10 )
    goto LABEL_25;
  if ( !LODWORD(v10->max_length) )
    goto LABEL_26;
  alreadyGetInfo = (UnityEngine_GameObject_o *)v10->m_Items[0];
  if ( !alreadyGetInfo )
    goto LABEL_25;
  alreadyGetInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)alreadyGetInfo, 0);
  if ( !alreadyGetInfo
    || (UnityEngine_GameObject__SetActive(alreadyGetInfo, 1, 0),
        (alreadyGetInfo = (UnityEngine_GameObject_o *)this->fields.alreadyGetLabel) == 0)
    || (UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0),
        (alreadyGetInfo = (UnityEngine_GameObject_o *)this->fields.alreadyGetLabel) == 0)
    || (UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 554, 0),
        (alreadyGetInfo = (UnityEngine_GameObject_o *)this->fields.alreadyGetLabel) == 0)
    || (alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)alreadyGetInfo,
                                                       0)) == 0 )
  {
LABEL_25:
    sub_1C6BC60(alreadyGetInfo, method);
  }
  v12.fields.x = 0.0;
  v12.fields.y = -1.0;
  v12.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v12, 0);
}


void ServantCostumeControl__RefreshEventCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 alreadyGetInfo; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1
  EventEntity_o *v7; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  AssetData_o *eventCombineCostumeBalloonData; // x21
  struct EventCombineCostumeEntity_o *v11; // x8
  struct System_Int32_array *itemIds; // x8
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  Il2CppObject *Object_object__51495936; // x21
  int32_t generatedBalloonId; // w8
  struct EventCombineCostumeEntity_o *v17; // x9
  struct System_Int32_array *v18; // x9
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v21; // x2
  struct EventCombineCostumeEntity_o *v22; // x8
  struct System_Int32_array *v23; // x8
  struct EventCombineCostumeEntity_o *v24; // x8
  struct System_Int32_array *v25; // x8
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x22
  int max_length; // w8
  unsigned int v28; // w23
  Il2CppClass **v29; // x8
  UnityEngine_Component_o *v30; // x21
  struct UnityEngine_Transform_array *v31; // x8
  System_TimeSpan_o v32; // x0
  int64_t endedAt; // x22
  int64_t ticks; // x21
  System_DateTime_o v35; // x22
  System_DateTime_o v36; // x0
  System_TimeSpan_o v37; // x1
  System_Object_array *v38; // x21
  System_DateTime_o v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x22
  System_DateTime_o v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x22
  System_DateTime_o v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x22
  System_DateTime_o v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x22
  System_DateTime_o v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x22
  System_String_o *v59; // x0
  UILabel_o *alreadyGetLabel; // x21
  Il2CppObject *v61; // x22
  System_String_o *v62; // x23
  Il2CppObject *v63; // x0
  _BOOL8 v64; // x0
  __int64 v65; // x1
  Il2CppObject *current; // x21
  __int64 v67; // x0
  int64_t startedAt; // x21
  UILabel_o *v69; // x20
  System_String_o *v70; // x21
  Il2CppObject *v71; // x0
  _BOOL8 v72; // x0
  __int64 v73; // x1
  Il2CppObject *v74; // x19
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+0h] [xbp-90h] BYREF
  int32_t Minute; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t Hour; // [xsp+20h] [xbp-70h] BYREF
  int32_t Day; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t Month; // [xsp+28h] [xbp-68h] BYREF
  int32_t Year; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+30h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CBA52E & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&System_TimeSpan_TypeInfo);
    sub_1C6BA08(&StringLiteral_12728/*"ServantCostumeEventBalloon_"*/);
    sub_1C6BA08(&StringLiteral_3847/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/);
    sub_1C6BA08(&StringLiteral_3846/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/);
    sub_1C6BA08(&StringLiteral_25272/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/);
    sub_1C6BA08(&StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4CBA52E = 1;
  }
  dateData = 0;
  memset(&v81, 0, sizeof(v81));
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0);
  if ( !this->fields.eventCombineCostumeEnt )
    return;
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_108;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_108;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v7 = (EventEntity_o *)Entity;
  ServantCostumeControl__SetSvtCostumeCombineData(this, v6);
  ServantCostumeControl__SetExeBtnState(this, v8);
  ServantCostumeControl__SetStateInfoMsg(this, 2, v9);
  eventCombineCostumeBalloonData = this->fields.eventCombineCostumeBalloonData;
  if ( eventCombineCostumeBalloonData )
  {
    v11 = this->fields.eventCombineCostumeEnt;
    if ( !v11 )
      goto LABEL_108;
    itemIds = v11->fields.itemIds;
    if ( !itemIds )
      goto LABEL_108;
    if ( !LODWORD(itemIds->max_length) )
      goto LABEL_87;
    v13 = System_Int32__ToString((int)itemIds + 32, 0);
    v14 = System_String__Concat_63966792((System_String_o *)StringLiteral_12728/*"ServantCostumeEventBalloon_"*/, v13, 0);
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                eventCombineCostumeBalloonData,
                                v14,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    alreadyGetInfo = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51495936, 0, 0);
    if ( (alreadyGetInfo & 1) != 0 )
    {
      generatedBalloonId = this->fields.generatedBalloonId;
      if ( generatedBalloonId )
      {
        v17 = this->fields.eventCombineCostumeEnt;
        if ( !v17 )
          goto LABEL_108;
        v18 = v17->fields.itemIds;
        if ( !v18 )
          goto LABEL_108;
        if ( !LODWORD(v18->max_length) )
          goto LABEL_87;
        if ( generatedBalloonId == v18->m_Items[0] )
          goto LABEL_37;
        alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
        if ( !alreadyGetInfo )
          goto LABEL_108;
        alreadyGetInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0);
        if ( !alreadyGetInfo )
          goto LABEL_108;
        alreadyGetInfo = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)alreadyGetInfo, 0, 0);
        if ( !alreadyGetInfo )
          goto LABEL_108;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)alreadyGetInfo,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71659676(gameObject, 0);
        this->fields.generatedBalloonId = 0;
      }
      alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0);
      alreadyGetInfo = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  (UnityEngine_GameObject_o *)Object_object__51495936,
                                  transform,
                                  0,
                                  0);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)alreadyGetInfo,
                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
      v22 = this->fields.eventCombineCostumeEnt;
      if ( !v22 )
        goto LABEL_108;
      v23 = v22->fields.itemIds;
      if ( !v23 )
        goto LABEL_108;
      if ( !LODWORD(v23->max_length) )
        goto LABEL_87;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      ServantCostumeEventBalloon__Set((ServantCostumeEventBalloon_o *)alreadyGetInfo, v23->m_Items[0], v21);
      v24 = this->fields.eventCombineCostumeEnt;
      if ( !v24 )
        goto LABEL_108;
      v25 = v24->fields.itemIds;
      if ( !v25 )
        goto LABEL_108;
      if ( !LODWORD(v25->max_length) )
        goto LABEL_87;
      this->fields.generatedBalloonId = v25->m_Items[0];
    }
  }
LABEL_37:
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_108;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    while ( v28 < max_length )
    {
      v29 = &alreadyGetLabelBgList->obj.klass + (int)v28;
      v30 = (UnityEngine_Component_o *)v29[4];
      if ( !v30 )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)v29[4],
                                  (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v30,
                                  (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0);
      v83.fields.x = 0.0;
      v83.fields.y = -15.0;
      v83.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v30, v83, 0);
      alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject(v30, 0);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v28 >= max_length )
        goto LABEL_47;
    }
    goto LABEL_87;
  }
LABEL_47:
  alreadyGetInfo = (__int64)this->fields.alreadyGetLabel;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0);
  alreadyGetInfo = (__int64)this->fields.alreadyGetLabel;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 720, 0);
  alreadyGetInfo = (__int64)this->fields.alreadyGetLabel;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  alreadyGetInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0);
  if ( !alreadyGetInfo )
    goto LABEL_108;
  v84.fields.x = 0.0;
  v84.fields.y = -16.0;
  v84.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v84, 0);
  alreadyGetInfo = EventEntity__IsOpen(v7, 0, 0);
  if ( (alreadyGetInfo & 1) != 0 )
  {
    v31 = this->fields.alreadyGetLabelBgList;
    if ( v31 )
    {
      if ( LODWORD(v31->max_length) <= 1 )
        goto LABEL_87;
      alreadyGetInfo = (__int64)v31->m_Items[1];
      if ( alreadyGetInfo )
      {
        alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)alreadyGetInfo, 0);
        if ( alreadyGetInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0);
          if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
          v32.fields._ticks = System_TimeSpan__FromMinutes(1.0, 0).fields._ticks;
          endedAt = v7->fields.endedAt;
          ticks = v32.fields._ticks;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v35.fields._dateData = NetworkManager__getServerDateTime_41600872(endedAt, 0).fields._dateData;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v36.fields._dateData = v35.fields._dateData;
          v37.fields._ticks = ticks;
          dateData = System_DateTime__op_Addition(v36, v37, 0).fields._dateData;
          v38 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 5);
          v39.fields._dateData = (uint64_t)&dateData;
          Year = System_DateTime__get_Year(v39, 0);
          alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Year);
          if ( v38 )
          {
            v42 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1C6BB44(alreadyGetInfo, v38->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( !LODWORD(v38->max_length) )
              goto LABEL_87;
            v38->m_Items[0] = v42;
            sub_1C6B9AC((CGThumbnailListItem_o *)v38->m_Items, (int32_t)v42, v40, v41);
            v43.fields._dateData = (uint64_t)&dateData;
            Month = System_DateTime__get_Month(v43, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Month);
            v46 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1C6BB44(alreadyGetInfo, v38->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( LODWORD(v38->max_length) <= 1 )
              goto LABEL_87;
            v38->m_Items[1] = v46;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v38->m_Items[1], (int32_t)v46, v44, v45);
            v47.fields._dateData = (uint64_t)&dateData;
            Day = System_DateTime__get_Day(v47, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Day);
            v50 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1C6BB44(alreadyGetInfo, v38->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( LODWORD(v38->max_length) <= 2 )
              goto LABEL_87;
            v38->m_Items[2] = v50;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v38->m_Items[2], (int32_t)v50, v48, v49);
            v51.fields._dateData = (uint64_t)&dateData;
            Hour = System_DateTime__get_Hour(v51, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
            v54 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1C6BB44(alreadyGetInfo, v38->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( LODWORD(v38->max_length) <= 3 )
              goto LABEL_87;
            v38->m_Items[3] = v54;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v38->m_Items[3], (int32_t)v54, v52, v53);
            v55.fields._dateData = (uint64_t)&dateData;
            Minute = System_DateTime__get_Minute(v55, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
            v58 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1C6BB44(alreadyGetInfo, v38->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_89:
                v67 = sub_1C6BC84(alreadyGetInfo);
                sub_1C6BB30(v67, 0);
              }
            }
            if ( LODWORD(v38->max_length) <= 4 )
LABEL_87:
              sub_1C6BC68(alreadyGetInfo);
            v38->m_Items[4] = v58;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v38->m_Items[4], (int32_t)v58, v56, v57);
            v59 = System_String__Format_64008236((System_String_o *)StringLiteral_25272/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v38, 0);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            v61 = (Il2CppObject *)v59;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0);
            v63 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
            alreadyGetInfo = (__int64)System_String__Format_64008100(v62, v63, v61, 0);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0);
              alreadyGetInfo = (__int64)this->fields.spendQpLb;
              if ( alreadyGetInfo )
              {
                v85.fields.r = 0.32941;
                v85.fields.a = 1.0;
                v85.fields.g = 0.32941;
                v85.fields.b = 0.32941;
                UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v85, 0);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
                    (System_Collections_Generic_List_object__o *)alreadyGetInfo,
                    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  v81 = v75;
                  while ( 1 )
                  {
                    v64 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v81,
                            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v64 )
                      break;
                    current = v81.fields._current;
                    if ( !v81.fields._current )
                      sub_1C6BC60(v64, v65);
                    LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v81.fields._current, 1, 0);
                    LOBYTE(current[6].klass) = 1;
                  }
LABEL_106:
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v81,
                    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
                  return;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_108;
  }
  startedAt = v7->fields.startedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( startedAt <= NetworkManager__getTime(0) && !EventEntity__IsOpen(v7, 0, 0) )
  {
    v69 = this->fields.alreadyGetLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0);
    v71 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5533/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
    alreadyGetInfo = (__int64)System_String__Format(v70, v71, 0);
    if ( v69 )
    {
      UILabel__set_text(v69, (System_String_o *)alreadyGetInfo, 0);
      alreadyGetInfo = (__int64)this->fields.spendQpLb;
      if ( alreadyGetInfo )
      {
        v86.fields.r = 1.0;
        v86.fields.g = 1.0;
        v86.fields.b = 1.0;
        v86.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v86, 0);
        if ( this->fields.haveQpVal < this->fields.spendQpVal )
        {
          alreadyGetInfo = (__int64)this->fields.spendQpLb;
          if ( !alreadyGetInfo )
            goto LABEL_108;
          v87.fields.r = 1.0;
          v87.fields.g = 0.0;
          v87.fields.b = 0.0;
          v87.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v87, 0);
        }
        alreadyGetInfo = (__int64)this->fields.itemInfoList;
        if ( alreadyGetInfo )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v75,
            (System_Collections_Generic_List_object__o *)alreadyGetInfo,
            (const MethodInfo_380146C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
          v81 = v75;
          while ( 1 )
          {
            v72 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v81,
                    (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
            if ( !v72 )
              break;
            v74 = v81.fields._current;
            if ( !v81.fields._current )
              sub_1C6BC60(v72, v73);
            LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v81.fields._current, 0, 0);
            LOBYTE(v74[6].klass) = 1;
          }
          goto LABEL_106;
        }
      }
    }
LABEL_108:
    sub_1C6BC60(alreadyGetInfo, method);
  }
}


void ServantCostumeControl__ResetEventCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.eventCombineCostumeEnt = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, 0, v2, v3);
  this->fields.isShortEventItem = 0;
}


void ServantCostumeControl__ResetInit(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.baseSvt = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSvt, 0, v2, v3);
  this->fields.baseSvtCostume = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSvtCostume, 0, v5, v6);
  this->fields.eventCombineCostumeEnt = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, 0, v7, v8);
}


void ServantCostumeControl__SetBaseSvtCardImg(
        ServantCostumeControl_o *this,
        UserServantEntity_o *userSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UICharaGraphTexture_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.baseSvt = userSvtData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSvt, (int32_t)userSvtData, (int32_t)method, v3);
  v6 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(ServantCostumeControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         userSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)v6, v7, v8);
}


void ServantCostumeControl__SetExeBtnState(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *executeButton; // x0
  __int64 v4; // x1
  EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  UnityEngine_GameObject_o *v6; // x19

  executeButton = (UnityEngine_Component_o *)this->fields.executeButton;
  if ( !executeButton )
    goto LABEL_11;
  ((void (__fastcall *)(UnityEngine_Component_o *, bool, const char *))executeButton->klass[1]._1.name)(
    executeButton,
    this->fields.isCanCombine,
    executeButton->klass[1]._1.namespaze);
  executeButton = (UnityEngine_Component_o *)this->fields.executeButton;
  if ( !executeButton )
    goto LABEL_11;
  v4 = this->fields.isCanCombine ? 0LL : 3LL;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppClass **))executeButton->klass[1]._1.nestedTypes)(
    executeButton,
    v4,
    1,
    executeButton->klass[1]._1.implementedInterfaces);
  executeButton = (UnityEngine_Component_o *)this->fields.eventCombineCostumeBalloon;
  if ( !executeButton )
    goto LABEL_11;
  executeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(executeButton, 0);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  v6 = (UnityEngine_GameObject_o *)executeButton;
  if ( eventCombineCostumeEnt )
  {
    executeButton = (UnityEngine_Component_o *)EventCombineCostumeEntity__IsShortEventItem(eventCombineCostumeEnt, 0);
    LOBYTE(eventCombineCostumeEnt) = (unsigned __int8)executeButton ^ 1;
  }
  if ( !v6 )
LABEL_11:
    sub_1C6BC60(executeButton, method);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0);
}


void ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4CBA527 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    byte_4CBA527 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_65480464(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9229/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C6BC60(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCostumeControl__SetStateInfoMsg(ServantCostumeControl_o *this, int32_t state, const MethodInfo *method)
{
  void *v5; // x0
  UIWidget_o *detailInfoLb; // x21
  System_String_o *v7; // x21
  __int64 *v8; // x8
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CBA52A & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&ServantCostumeControl_TypeInfo);
    sub_1C6BA08(&StringLiteral_12190/*"SHORT_RELEASE_COND_MSG"*/);
    sub_1C6BA08(&StringLiteral_3839/*"COSTUME_EXE_MSG"*/);
    sub_1C6BA08(&StringLiteral_7445/*"INFO_MSG_SELECT_COSTUME"*/);
    sub_1C6BA08(&StringLiteral_12188/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1C6BA08(&StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_7440/*"INFO_MSG_COSTUME_SELECT_BASE"*/);
    byte_4CBA52A = 1;
  }
  v5 = ServantCostumeControl_TypeInfo;
  detailInfoLb = (UIWidget_o *)this->fields.detailInfoLb;
  if ( !ServantCostumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeControl_TypeInfo);
    v5 = ServantCostumeControl_TypeInfo;
  }
  if ( !detailInfoLb )
LABEL_36:
    sub_1C6BC60(v5, *(_QWORD *)&state);
  UIWidget__set_color(detailInfoLb, *(UnityEngine_Color_o *)*((_QWORD *)v5 + 23), 0);
  if ( state == 3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_7445/*"INFO_MSG_SELECT_COSTUME"*/;
    goto LABEL_33;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state != 2 )
  {
    if ( state )
      goto LABEL_34;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_7440/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_33;
  }
  if ( this->fields.isCanCombine )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_3839/*"COSTUME_EXE_MSG"*/;
LABEL_33:
    v7 = LocalizationManager__Get((System_String_o *)*v8, 0);
    goto LABEL_34;
  }
  v5 = this->fields.detailInfoLb;
  if ( !v5 )
    goto LABEL_36;
  v9.fields.r = 1.0;
  v9.fields.g = 1.0;
  v9.fields.b = 1.0;
  v9.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v5, v9, 0);
  if ( this->fields.isShortQp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/, 0);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12188/*"SHORT_ITEM_INFO_MSG"*/, 0);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_12190/*"SHORT_RELEASE_COND_MSG"*/;
    goto LABEL_33;
  }
LABEL_34:
  v5 = this->fields.detailInfoLb;
  if ( !v5 )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)v5, v7, 0);
}


void ServantCostumeControl__SetSvtCostumeCombineData(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  int64_t v4; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v6; // x20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o **p_itemInfoList; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UserServantEntity_o *baseSvt; // x8
  __int64 v11; // x20
  __int64 v12; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x22
  struct System_Int32_array *itemIds; // x26
  int max_length; // w23
  struct System_Int32_array *itemNums; // x28
  unsigned int i; // w27
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v20; // x22
  char *v21; // x24
  int32_t v22; // w2
  int32_t *v23; // x24
  int32_t v24; // t1
  int32_t *v25; // x25
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  bool v32; // w26
  int32_t v33; // w22
  struct ServantCostumeEntity_o *v34; // x8
  struct ServantCostumeEntity_o *v35; // x8
  struct UserServantEntity_o *v36; // x8
  UISprite_o *costumeFaceIcon; // x21
  __int64 v38; // x22
  __int64 v39; // x23
  struct ServantCostumeEntity_o *v40; // x8
  int32_t v41; // w22
  int32_t id; // w23
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v44; // x8
  int v45; // w23
  int v46; // w26
  Il2CppObject *v47; // x21
  struct EventCombineCostumeEntity_o *v48; // x8
  struct System_Int32_array *v49; // x8
  struct EventCombineCostumeEntity_o *v50; // x8
  struct System_Int32_array *v51; // x10
  struct UserServantEntity_o *v52; // x8
  ServantCostumeReleaseMaster_o *v53; // x21
  ServantCostumeEntity_o *v54; // x22
  __int64 v55; // x23
  __int64 v56; // x24
  struct UserServantEntity_o *v57; // x8
  __int128 v58; // q1
  int32_t v59; // w23
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v61; // x8
  struct EventCombineCostumeEntity_o *v62; // x8
  EventEntity_o *v63; // x21
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *v68; // [xsp+40h] [xbp-70h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CBA528 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    byte_4CBA528 = 1;
  }
  v68 = 0;
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = &this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.itemInfoList, (int32_t)v6, v8, v9);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_118;
  v12 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v70.fields.currentCryptoKey = v12;
  *(_QWORD *)&v70.fields.fakeValue = v11;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v70, 0);
  baseSvtCostume = this->fields.baseSvtCostume;
  if ( !baseSvtCostume || !MasterData_object )
    goto LABEL_118;
  Instance = CombineCostumeMaster__TryGetEntity(
               (CombineCostumeMaster_o *)MasterData_object,
               &entity,
               Instance,
               baseSvtCostume->fields.id,
               0);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_118;
    spendQpLb = this->fields.spendQpLb;
    this->fields.spendQpVal = entity->fields.qp;
    Instance = (int64_t)System_Int32__ToString_65475288((int)this + 320, (System_String_o *)StringLiteral_9229/*"N0"*/, 0);
    if ( !spendQpLb )
      goto LABEL_118;
    UILabel__set_text(spendQpLb, (System_String_o *)Instance, 0);
    if ( !entity )
      goto LABEL_118;
    itemIds = entity->fields.itemIds;
    if ( !itemIds )
      goto LABEL_118;
    max_length = itemIds->max_length;
    if ( max_length > 0 )
    {
      itemNums = entity->fields.itemNums;
      for ( i = 0; i != max_length; ++i )
      {
        itemInfos = this->fields.itemInfos;
        if ( !itemInfos )
          goto LABEL_118;
        if ( i >= LODWORD(itemInfos->max_length) )
          goto LABEL_119;
        v20 = itemInfos->m_Items[i];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        Instance = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (int64_t)NetworkManager_TypeInfo;
        }
        if ( i >= LODWORD(itemIds->max_length) )
          goto LABEL_119;
        v21 = (char *)itemIds + 4 * (int)i;
        v4 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
        v24 = *((_DWORD *)v21 + 8);
        v23 = (int32_t *)(v21 + 32);
        v22 = v24;
        if ( !itemNums )
          goto LABEL_118;
        if ( i >= LODWORD(itemNums->max_length) )
          goto LABEL_119;
        if ( !v20 )
          goto LABEL_118;
        v25 = &itemNums->m_Items[i];
        LimitCntUpItemComponent__setLimitUpItemInfo(v20, v4, v22, *v25, 0);
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_118;
        v28 = *(_QWORD *)(Instance + 16);
        v29 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v28 )
          goto LABEL_118;
        v30 = *(int *)(Instance + 24);
        if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v20,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = v28 + 8 * v30;
          *(_DWORD *)(Instance + 24) = v30 + 1;
          *(_QWORD *)(v31 + 32) = v20;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v20, v26, v27);
        }
        LimitCntUpItemComponent__SetMaskSprite(v20, 0, 0);
        v20->fields.disableOpenItemDetailDialog = 0;
        if ( i >= LODWORD(itemIds->max_length) || i >= LODWORD(itemNums->max_length) )
LABEL_119:
          sub_1C6BC68(Instance);
        CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, *v23, *v25, 0);
      }
      v32 = 0;
      v33 = 0;
      while ( 1 )
      {
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_118;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)Instance,
                              v33,
                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( !Instance )
          goto LABEL_118;
        if ( *(_BYTE *)(Instance + 112) )
        {
          v32 = ++v33 >= max_length;
          if ( max_length != v33 )
            continue;
        }
        goto LABEL_44;
      }
    }
    v32 = max_length < 1;
LABEL_44:
    v34 = this->fields.baseSvtCostume;
    if ( !v34 )
      goto LABEL_118;
    Instance = (int64_t)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_118;
    UILabel__set_text((UILabel_o *)Instance, v34->fields.name, 0);
    v35 = this->fields.baseSvtCostume;
    if ( !v35 )
      goto LABEL_118;
    Instance = (int64_t)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_118;
    UILabel__set_text((UILabel_o *)Instance, v35->fields.releaseInfo, 0);
    v36 = this->fields.baseSvt;
    if ( !v36 )
      goto LABEL_118;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
    v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v71.fields.currentCryptoKey = v39;
    *(_QWORD *)&v71.fields.fakeValue = v38;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v71, 0);
    v40 = this->fields.baseSvtCostume;
    if ( !v40 )
      goto LABEL_118;
    v41 = Instance;
    id = v40->fields.id;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceImage(costumeFaceIcon, v41, id, 1, 0, 0);
    Instance = (int64_t)this->fields.costumeFaceIcon;
    if ( !Instance )
      goto LABEL_118;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (int64_t)this->fields.costumeFaceIconFrame;
    if ( !Instance )
      goto LABEL_118;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  }
  else
  {
    v32 = 0;
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
  Instance = (int64_t)this->fields.spendQpLb;
  if ( !Instance )
    goto LABEL_118;
  v73.fields.r = 1.0;
  v73.fields.g = 1.0;
  v73.fields.b = 1.0;
  v73.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v73, 0);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    Instance = (int64_t)this->fields.spendQpLb;
    if ( !Instance )
      goto LABEL_118;
    v74.fields.r = 1.0;
    v74.fields.g = 0.0;
    v74.fields.b = 0.0;
    v74.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v74, 0);
    this->fields.isShortQp = 1;
  }
  if ( !v32 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v44 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v44 )
      goto LABEL_118;
    v45 = -1;
    while ( 1 )
    {
      v46 = v45 + 1;
      if ( v45 + 1 >= SLODWORD(v44->max_length) )
        break;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_118;
      v47 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      Instance = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (int64_t)NetworkManager_TypeInfo;
      }
      v48 = this->fields.eventCombineCostumeEnt;
      if ( !v48 )
        goto LABEL_118;
      v49 = v48->fields.itemIds;
      if ( !v49 )
        goto LABEL_118;
      if ( (unsigned int)v46 >= LODWORD(v49->max_length) )
        goto LABEL_119;
      if ( !v47 )
        goto LABEL_118;
      Instance = UserItemMaster__TryGetEntity(
                   (UserItemMaster_o *)v47,
                   &v68,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   v49->m_Items[v46],
                   0);
      if ( (Instance & 1) == 0 )
        goto LABEL_88;
      if ( !v68 )
        goto LABEL_118;
      v50 = this->fields.eventCombineCostumeEnt;
      if ( !v50 )
        goto LABEL_118;
      v51 = v50->fields.itemNums;
      if ( !v51 )
        goto LABEL_118;
      if ( (unsigned int)++v45 >= LODWORD(v51->max_length) )
        goto LABEL_119;
      if ( v68->fields.num < v51->m_Items[v46] )
      {
LABEL_88:
        this->fields.isShortEventItem = 1;
        break;
      }
      v44 = v50->fields.itemIds;
      if ( !v44 )
        goto LABEL_118;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v52 = this->fields.baseSvt;
  if ( !v52 )
    goto LABEL_118;
  v53 = (ServantCostumeReleaseMaster_o *)Instance;
  v54 = this->fields.baseSvtCostume;
  v56 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
  v55 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v72.fields.currentCryptoKey = v56;
  *(_QWORD *)&v72.fields.fakeValue = v55;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v72, 0);
  v57 = this->fields.baseSvt;
  if ( !v57 )
    goto LABEL_118;
  v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
  v59 = Instance;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v58;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v66 = v67;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v66, 0);
  if ( !v53 )
LABEL_118:
    sub_1C6BC60(Instance, v4);
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v53, v54, v59, Instance, 0);
  v61 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v61 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_106;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  v62 = this->fields.eventCombineCostumeEnt;
  if ( !v62 )
    goto LABEL_118;
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        v62->fields.eventId,
                        (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_118;
  v63 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_115;
  }
  startedAt = v63->fields.startedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( startedAt <= NetworkManager__getTime(0) && !EventEntity__IsOpen(v63, 0, 0) )
  {
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    if ( !this->fields.isShortEventItem )
    {
LABEL_115:
      if ( !isNotClearReleaseCond )
        this->fields.isCanCombine = 1;
      return;
    }
    if ( this->fields.isNotClearReleaseCond )
      return;
LABEL_106:
    if ( this->fields.isShortNeedItem )
      return;
    isNotClearReleaseCond = this->fields.isShortQp;
    goto LABEL_115;
  }
}


void ServantCostumeControl__ShowCostumeCombineInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct CostumeListViewManager_o *costumeListInfo; // x8
  struct ServantCostumeEntity_o *baseSvtCostume; // x1
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x21
  struct EventCombineCostumeEntity_o **p_eventCombineCostumeEnt; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  LimitCntUpItemComponent_o *eventItemIcon; // x21
  struct EventCombineCostumeEntity_o *v21; // x9
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  struct EventCombineCostumeEntity_o *v24; // x9
  struct System_Int32_array *v25; // x8
  struct System_Int32_array *v26; // x9
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4CBA526 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA526 = 1;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  costumeListInfo = this->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_34;
  baseSvtCostume = costumeListInfo->fields.baseSvtCostume;
  p_baseSvtCostume = &this->fields.baseSvtCostume;
  this->fields.baseSvtCostume = baseSvtCostume;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSvtCostume, (int32_t)baseSvtCostume, v5, v6);
  p_eventCombineCostumeEnt = &this->fields.eventCombineCostumeEnt;
  this->fields.eventCombineCostumeEnt = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, 0, v11, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_34;
  v14 = (EventCombineCostumeMaster_o *)Instance;
  v16 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v16;
  *(_QWORD *)&v31.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v31, 0);
  if ( !*p_baseSvtCostume || !v14 )
    goto LABEL_34;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              v14,
                              (int32_t)Instance,
                              (*p_baseSvtCostume)->fields.id,
                              0);
  *p_eventCombineCostumeEnt = ListBySvtIdAndCostumeId;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, (int32_t)ListBySvtIdAndCostumeId, v18, v19);
  if ( *p_eventCombineCostumeEnt )
  {
    eventItemIcon = this->fields.eventItemIcon;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v21 = *p_eventCombineCostumeEnt;
    if ( *p_eventCombineCostumeEnt )
    {
      itemIds = v21->fields.itemIds;
      if ( itemIds )
      {
        if ( !LODWORD(itemIds->max_length) )
          goto LABEL_35;
        itemNums = v21->fields.itemNums;
        if ( !itemNums )
          goto LABEL_34;
        if ( !LODWORD(itemNums->max_length) )
          goto LABEL_35;
        if ( eventItemIcon )
        {
          LimitCntUpItemComponent__setLimitUpItemInfo(
            eventItemIcon,
            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
            itemIds->m_Items[0],
            itemNums->m_Items[0],
            0);
          v24 = *p_eventCombineCostumeEnt;
          if ( *p_eventCombineCostumeEnt )
          {
            v25 = v24->fields.itemIds;
            if ( v25 )
            {
              if ( LODWORD(v25->max_length) )
              {
                v26 = v24->fields.itemNums;
                if ( !v26 )
                  goto LABEL_34;
                if ( LODWORD(v26->max_length) )
                {
                  CombineMenuControl__AddCombineItemInfo(
                    (CombineMenuControl_o *)this,
                    v25->m_Items[0],
                    v26->m_Items[0],
                    0);
                  goto LABEL_29;
                }
              }
LABEL_35:
              sub_1C6BC68(Instance);
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C6BC60(Instance, v4);
  }
LABEL_29:
  Instance = (DataManager_o *)this->fields.costumeListInfo;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  ServantCostumeControl__SetHaveQpInfo(this, v27);
  ServantCostumeControl__SetSvtCostumeCombineData(this, v28);
  ServantCostumeControl__SetExeBtnState(this, v29);
  Instance = (DataManager_o *)this->fields.costumeReleaseInfo;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  ServantCostumeControl__RefreshEventCostumeInfo(this, v30);
}


void ServantCostumeControl__ShowCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *costumeListInfo; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo
    || (costumeListInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(costumeListInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeListInfo, 1, 0),
        (costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo) == 0)
    || (CostumeListViewManager__CreateList((CostumeListViewManager_o *)costumeListInfo, this->fields.baseSvt, v4),
        (costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo) == 0) )
  {
    sub_1C6BC60(costumeListInfo, method);
  }
  CostumeListViewManager__SetMode_49075968((CostumeListViewManager_o *)costumeListInfo, 2, v5);
}


void ServantCostumeControl___OnClickExeCostumeCombine_b__57_0(ServantCostumeControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C6BC60(0, method);
  CombineRootComponent__RequestCombineCostume(combineRootComponent, 0, this->fields.itemInfoList, 0);
}


void ServantCostumeControl___OnClickExeCostumeCombine_b__57_1(ServantCostumeControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  _DWORD *monitor; // x9
  SetRarityDialogControl_o *v5; // x20
  System_String_o *data; // x21
  int32_t v7; // w22
  int64_t v8; // x23
  System_Action_o *v9; // x24
  System_Action_o *v10; // x25

  v2 = (Il2CppObject *)this;
  if ( (byte_4CBA532 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    this = (ServantCostumeControl_o *)sub_1C6BA08(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__);
    byte_4CBA532 = 1;
  }
  klass = v2[18].klass;
  if ( !klass )
    goto LABEL_7;
  monitor = v2[21].monitor;
  if ( !monitor )
    goto LABEL_7;
  v5 = (SetRarityDialogControl_o *)v2[4].klass;
  data = (System_String_o *)klass->_1.byval_arg.data;
  v7 = monitor[7];
  v8 = (int64_t)v2[19].monitor;
  v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v9, v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__, 0);
  v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v10, v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
  if ( !v5 )
LABEL_7:
    sub_1C6BC60(this, method);
  SetRarityDialogControl__SetConfirmCombineCostume(v5, data, v7, v8, v9, v10, 0);
}


void ServantCostumeControl___OnClickExeCostumeCombine_b__57_2(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *eventItemIcon; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_4CBA533 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    byte_4CBA533 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v3 )
    goto LABEL_11;
  eventItemIcon = (Il2CppObject *)this->fields.eventItemIcon;
  items = v3->fields._items;
  v9 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_11;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      eventItemIcon,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v11[4] = (Il2CppClass *)eventItemIcon;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 4), (int32_t)eventItemIcon, v6, v7);
  }
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || (combineRootComponent = this->fields.combineRootComponent) == 0 )
LABEL_11:
    sub_1C6BC60(combineRootComponent, eventItemIcon);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventCombineCostumeEnt->fields.eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)v3,
    0);
}


UserServantEntity_o *ServantCostumeControl__getBaseSelectedSvt(ServantCostumeControl_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *baseSvt; // x8
  __int128 v4; // q1
  UserServantEntity_o **p_baseSvt; // x20
  int64_t v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-50h]

  if ( (byte_4CBA529 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA529 = 1;
  }
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v4 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v13.fields.fakeValue = v4;
    p_baseSvt = &this->fields.baseSvt;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v12 = v13;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v12, 0);
    *p_baseSvt = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSvt, 0, v7, v8);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (Il2CppObject **)&this->fields.baseSvt,
               v6,
               (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.baseSvt,
                   v6,
                   (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_1C6BC60(Instance, v10);
  }
  return 0;
}


ServantCostumeEntity_o *ServantCostumeControl__getBaseSvtCostume(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  return this->fields.baseSvtCostume;
}


bool ServantCostumeControl__getExeBtnState(ServantCostumeControl_o *this, const MethodInfo *method)
{
  return this->fields.isCanCombine;
}


bool ServantCostumeControl__get_isBaseSvtFromStorage(ServantCostumeControl_o *this, const MethodInfo *method)
{
  return this->fields._isBaseSvtFromStorage_k__BackingField;
}


void ServantCostumeControl__set_isBaseSvtFromStorage(
        ServantCostumeControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isBaseSvtFromStorage_k__BackingField = value;
}


void ServantCostumeControl___c__DisplayClass56_0___ctor(
        ServantCostumeControl___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCostumeControl___c__DisplayClass56_0___CheckCondJoin_b__0(
        ServantCostumeControl___c__DisplayClass56_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CBA534 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CBA534 = 1;
  }
  if ( decide )
    ActionExtensions__Call(this->fields.callBack, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void ServantCostumeControl___c__DisplayClass57_0___ctor(
        ServantCostumeControl___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCostumeControl___c__DisplayClass57_0___OnClickExeCostumeCombine_b__3(
        ServantCostumeControl___c__DisplayClass57_0_o *this,
        bool useEventItem,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v15; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int64_t haveQpVal; // x23
  System_Action_o *v19; // x25
  Il2CppObject *v20; // x20
  System_Action_o *v21; // x19

  if ( (byte_4CBA535 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    sub_1C6BA08(&Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__);
    sub_1C6BA08(&ServantCostumeControl___c__DisplayClass57_1_TypeInfo);
    byte_4CBA535 = 1;
  }
  v5 = sub_1C6BC54(ServantCostumeControl___c__DisplayClass57_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 16) = useEventItem;
  if ( !useEventItem )
  {
    combineCostumeEntity = this->fields.combineCostumeEntity;
    if ( combineCostumeEntity )
    {
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        p_qp = &combineCostumeEntity->fields.qp;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_1C6BC60(v6, v7);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  eventCombineCostumeEnt = _4__this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_14;
  p_qp = &eventCombineCostumeEnt->fields.qp;
LABEL_11:
  baseSvtCostume = _4__this->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_14;
  v15 = *p_qp;
  exeCombineDlg = _4__this->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = _4__this->fields.haveQpVal;
  v19 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__,
    0);
  v20 = (Il2CppObject *)this->fields.__4__this;
  v21 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v21, v20, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
  if ( !exeCombineDlg )
    goto LABEL_14;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v15, haveQpVal, v19, v21, 0);
}


void ServantCostumeControl___c__DisplayClass57_1___ctor(
        ServantCostumeControl___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCostumeControl___c__DisplayClass57_1___OnClickExeCostumeCombine_b__4(
        ServantCostumeControl___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemInfoList; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *eventItemIcon; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct ServantCostumeControl___c__DisplayClass57_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  struct ServantCostumeControl___c__DisplayClass57_0_o *v16; // x8
  struct ServantCostumeControl_o *v17; // x8

  if ( (byte_4CBA536 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    byte_4CBA536 = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    itemInfoList,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( this->fields.useEventItem )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_19;
    _4__this = CS___8__locals1->fields.__4__this;
    if ( !_4__this )
      goto LABEL_19;
    eventCombineCostumeEnt = _4__this->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_19;
    if ( !itemInfoList )
      goto LABEL_19;
    eventId = eventCombineCostumeEnt->fields.eventId;
    eventItemIcon = (Il2CppObject *)_4__this->fields.eventItemIcon;
    items = itemInfoList->fields._items;
    v13 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
    ++itemInfoList->fields._version;
    if ( !items )
      goto LABEL_19;
    size = itemInfoList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemInfoList,
        eventItemIcon,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      itemInfoList->fields._size = size + 1;
      v15[4] = (Il2CppClass *)eventItemIcon;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)eventItemIcon, v6, v7);
    }
  }
  else
  {
    eventId = 0;
  }
  v16 = this->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_19;
  v17 = v16->fields.__4__this;
  if ( !v17 )
    goto LABEL_19;
  combineRootComponent = v17->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_object__o *)v17->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_19:
    sub_1C6BC60(combineRootComponent, eventItemIcon);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0);
}