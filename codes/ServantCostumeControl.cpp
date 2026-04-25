void ServantCostumeControl___cctor(const MethodInfo *method)
{
  if ( (byte_4DFE7CE & 1) == 0 )
  {
    sub_1CE6700(&ServantCostumeControl_TypeInfo);
    byte_4DFE7CE = 1;
  }
  *ServantCostumeControl_TypeInfo->static_fields = (struct ServantCostumeControl_StaticFields)xmmword_D261F0;
}


void ServantCostumeControl___ctor(ServantCostumeControl_o *this, const MethodInfo *method)
{
  if ( (byte_4DFE7CD & 1) == 0 )
  {
    sub_1CE6700(&CombineMenuControl_TypeInfo);
    byte_4DFE7CD = 1;
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
  EventServantEntity_o *v8; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x23
  Il2CppObject *v12; // x1
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  System_String_o *v15; // x24
  CommonConfirmDialog_ClickDelegate_o *v16; // x25

  if ( (byte_4DFE7C8 & 1) == 0 )
  {
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&string_TypeInfo);
    sub_1CE6700(&Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__);
    sub_1CE6700(&ServantCostumeControl___c__DisplayClass56_0_TypeInfo);
    sub_1CE6700(&StringLiteral_3776/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/);
    sub_1CE6700(&StringLiteral_3775/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/);
    sub_1CE6700(&StringLiteral_3774/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_3777/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/);
    byte_4DFE7C8 = 1;
  }
  v5 = sub_1CE694C(ServantCostumeControl___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = callBack;
  sub_1CE66A4(v5 + 16, callBack);
  *(_QWORD *)(v5 + 24) = this;
  sub_1CE66A4(v5 + 24, this);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_17;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0);
  if ( !this->fields.baseSvt )
    goto LABEL_17;
  v8 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3776/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3774/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0);
  v12 = (Il2CppObject *)(v8 ? EventServantEntity__getEndTimeStr(v8, 0) : string_TypeInfo->static_fields->Empty);
  v13 = System_String__Format(v11, v12, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3777/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3775/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0);
  v16 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__,
    0);
  if ( !Instance )
LABEL_17:
    sub_1CE6958(baseSvt, v7);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v10,
    v13,
    v14,
    v15,
    v16,
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
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v6; // q1
  int64_t v7; // x0
  __int128 v8; // q1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-40h]

  if ( (byte_4DFE7C2 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4DFE7C2 = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v6 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v6;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v12 = v13;
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v12, 0);
      v8 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v11.fields.fakeValue = v8;
      if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v11, 0) )
      {
        ServantCostumeControl__InitDispInfo(this, v9);
        this->fields.baseSvtCostume = 0;
        sub_1CE66A4(&this->fields.baseSvtCostume, 0);
        this->fields.eventCombineCostumeEnt = 0;
        sub_1CE66A4(&this->fields.eventCombineCostumeEnt, 0);
      }
    }
  }
  else
  {
    ServantCostumeControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    ServantCostumeControl__ResetInit(this, v10);
  }
  this->fields.baseUserServantEntity = selectBase;
  sub_1CE66A4(&this->fields.baseUserServantEntity, selectBase);
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
        sub_1CE6960(this);
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
    sub_1CE6958(this, method);
  }
}


void ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_1CE6958(0, method);
  ListViewManager__DestroyList(costumeListInfo, 0);
}


int32_t ServantCostumeControl__GetTutorialOpenType(ServantCostumeControl_o *this, const MethodInfo *method)
{
  return 31;
}


void ServantCostumeControl__InitBaseCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  this->fields.baseSvtCostume = 0;
  sub_1CE66A4(&this->fields.baseSvtCostume, 0);
  this->fields.eventCombineCostumeEnt = 0;
  sub_1CE66A4(&this->fields.eventCombineCostumeEnt, 0);
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

  if ( (byte_4DFE7BF & 1) == 0 )
  {
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&StringLiteral_9304/*"N0"*/);
    byte_4DFE7BF = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  ServantCostumeControl__InitDispInfo(this, v3);
  ServantCostumeControl__ClearItemList(this, v4);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  costumeFaceIconFrame = System_Int32__ToString_66631324((int)this + 392, (System_String_o *)StringLiteral_9304/*"N0"*/, 0);
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
    sub_1CE6958(costumeFaceIconFrame, v7);
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

  if ( (byte_4DFE7C1 & 1) == 0 )
  {
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&StringLiteral_9304/*"N0"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4DFE7C1 = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  gameObject = System_Int32__ToString_66631324((int)this + 392, (System_String_o *)StringLiteral_9304/*"N0"*/, 0);
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
    sub_1CE6958(gameObject, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
}


void ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4DFE7C0 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFE7C0 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1CE6958(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72918540(gameObject, 0);
    *p_charaGraph = 0;
    sub_1CE66A4(p_charaGraph, 0);
  }
}


void ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4DFE7CC & 1) == 0 )
  {
    sub_1CE6700(&Method_ServantCostumeControl_OnClickBase__);
    byte_4DFE7CC = 1;
  }
  v3 = Method_ServantCostumeControl_OnClickBase__;
  if ( (*((_BYTE *)Method_ServantCostumeControl_OnClickBase__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1CE6718(Method_ServantCostumeControl_OnClickBase__);
  v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1CE6958(0, v5);
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
  Il2CppObject *v16; // x20
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  CombineCostumeEntity_o *Entity; // x0
  SetRarityDialogControl_o *v23; // x21
  bool v24; // w22
  CombineCostumeEntity_o *klass; // x23
  EventCombineCostumeEntity_o *v26; // x24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v28; // x25
  System_Action_o *v29; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v2 = this;
  if ( (byte_4DFE7C9 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_bool__TypeInfo);
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_CombineCostumeMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    sub_1CE6700(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__);
    sub_1CE6700(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__);
    sub_1CE6700(&Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__);
    this = (ServantCostumeControl_o *)sub_1CE6700(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
    byte_4DFE7C9 = 1;
  }
  if ( v2->fields.eventCombineCostumeEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v2->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_33;
    if ( !this )
      goto LABEL_33;
    this = (ServantCostumeControl_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_34E925C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    v4 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0) )
    {
      exeCombineDlg = v2->fields.exeCombineDlg;
      v6 = v2->fields.eventCombineCostumeEnt;
      v7 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__, 0);
      v8 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v6, v7, v8, 0);
        return;
      }
LABEL_33:
      sub_1CE6958(this, method);
    }
    startedAt = v4->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( startedAt <= NetworkManager__getTime(0) && !EventEntity__IsOpen(v4, 0, 0) )
    {
      v16 = (Il2CppObject *)sub_1CE694C(ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor(v16, 0);
      if ( !v16 )
        goto LABEL_33;
      v16[1].monitor = v2;
      sub_1CE66A4(&v16[1].monitor, v2);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v2->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_33;
      v18 = (CombineCostumeMaster_o *)this;
      v20 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v30.fields.currentCryptoKey = v20;
      *(_QWORD *)&v30.fields.fakeValue = v19;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v30, 0);
      baseSvtCostume = v2->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v18 )
        goto LABEL_33;
      Entity = CombineCostumeMaster__GetEntity(v18, (int32_t)this, baseSvtCostume->fields.id, 0);
      v16[1].klass = (Il2CppClass *)Entity;
      sub_1CE66A4(&v16[1], Entity);
      v23 = v2->fields.exeCombineDlg;
      v24 = v2->fields.isShortNeedItem || v2->fields.isShortQp;
      klass = (CombineCostumeEntity_o *)v16[1].klass;
      v26 = v2->fields.eventCombineCostumeEnt;
      isShortEventItem = v2->fields.isShortEventItem;
      v28 = (System_Action_bool__o *)sub_1CE694C(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v28,
        v16,
        (intptr_t)Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__,
        0);
      v29 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
      if ( !v23 )
        goto LABEL_33;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v23,
        klass,
        v26,
        v24,
        isShortEventItem,
        v28,
        v29,
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
    v14 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
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

  if ( (byte_4DFE7CA & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_3885/*"COSTUME_SELECT_SERVANT_MSG"*/);
    byte_4DFE7CA = 1;
  }
  alreadyGetInfo = this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(alreadyGetInfo, 1, 0);
  alreadyGetLabel = this->fields.alreadyGetLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3885/*"COSTUME_SELECT_SERVANT_MSG"*/, 0);
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
                                                     (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     v9,
                                                     (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1CE6960(alreadyGetInfo);
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
    sub_1CE6958(alreadyGetInfo, method);
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
  Il2CppObject *Object_object__52317288; // x21
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
  Il2CppObject *v40; // x22
  System_DateTime_o v41; // x0
  Il2CppObject *v42; // x22
  System_DateTime_o v43; // x0
  Il2CppObject *v44; // x22
  System_DateTime_o v45; // x0
  Il2CppObject *v46; // x22
  System_DateTime_o v47; // x0
  Il2CppObject *v48; // x22
  System_String_o *v49; // x0
  UILabel_o *alreadyGetLabel; // x21
  Il2CppObject *v51; // x22
  System_String_o *v52; // x23
  Il2CppObject *v53; // x0
  _BOOL8 v54; // x0
  __int64 v55; // x1
  Il2CppObject *current; // x21
  __int64 v57; // x0
  int64_t startedAt; // x21
  UILabel_o *v59; // x20
  System_String_o *v60; // x21
  Il2CppObject *v61; // x0
  _BOOL8 v62; // x0
  __int64 v63; // x1
  Il2CppObject *v64; // x19
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+0h] [xbp-90h] BYREF
  int32_t Minute; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t Hour; // [xsp+20h] [xbp-70h] BYREF
  int32_t Day; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t Month; // [xsp+28h] [xbp-68h] BYREF
  int32_t Year; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+30h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4DFE7CB & 1) == 0 )
  {
    sub_1CE6700(&Method_AssetData_GetObject_GameObject____79905008);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1CE6700(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1CE6700(&System_DateTime_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&object___TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&System_TimeSpan_TypeInfo);
    sub_1CE6700(&StringLiteral_12860/*"ServantCostumeEventBalloon_"*/);
    sub_1CE6700(&StringLiteral_3884/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/);
    sub_1CE6700(&StringLiteral_3883/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/);
    sub_1CE6700(&StringLiteral_25575/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/);
    sub_1CE6700(&StringLiteral_5581/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_4DFE7CB = 1;
  }
  dateData = 0;
  memset(&v71, 0, sizeof(v71));
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0);
  if ( !this->fields.eventCombineCostumeEnt )
    return;
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_108;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_108;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_34E925C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
    v14 = System_String__Concat_65122828((System_String_o *)StringLiteral_12860/*"ServantCostumeEventBalloon_"*/, v13, 0);
    Object_object__52317288 = AssetData__GetObject_object__52317288(
                                eventCombineCostumeBalloonData,
                                v14,
                                (const MethodInfo_31E4C68 *)Method_AssetData_GetObject_GameObject____79905008);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    alreadyGetInfo = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__52317288, 0, 0);
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
        UnityEngine_Object__Destroy_72918540(gameObject, 0);
        this->fields.generatedBalloonId = 0;
      }
      alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0);
      alreadyGetInfo = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  (UnityEngine_GameObject_o *)Object_object__52317288,
                                  transform,
                                  0,
                                  0);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)alreadyGetInfo,
                                  (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
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
                                  (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v30,
                                  (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0);
      v73.fields.x = 0.0;
      v73.fields.y = -15.0;
      v73.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v30, v73, 0);
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
  v74.fields.x = 0.0;
  v74.fields.y = -16.0;
  v74.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v74, 0);
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
          v35.fields._dateData = NetworkManager__getServerDateTime_42521056(endedAt, 0).fields._dateData;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v36.fields._dateData = v35.fields._dateData;
          v37.fields._ticks = ticks;
          dateData = System_DateTime__op_Addition(v36, v37, 0).fields._dateData;
          v38 = (System_Object_array *)sub_1CE67A8(object___TypeInfo, 5);
          v39.fields._dateData = (uint64_t)&dateData;
          Year = System_DateTime__get_Year(v39, 0);
          alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Year);
          if ( v38 )
          {
            v40 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1CE683C(alreadyGetInfo, v38->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( !LODWORD(v38->max_length) )
              goto LABEL_87;
            v38->m_Items[0] = v40;
            sub_1CE66A4(v38->m_Items, v40);
            v41.fields._dateData = (uint64_t)&dateData;
            Month = System_DateTime__get_Month(v41, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Month);
            v42 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1CE683C(alreadyGetInfo, v38->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( LODWORD(v38->max_length) <= 1 )
              goto LABEL_87;
            v38->m_Items[1] = v42;
            sub_1CE66A4(&v38->m_Items[1], v42);
            v43.fields._dateData = (uint64_t)&dateData;
            Day = System_DateTime__get_Day(v43, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Day);
            v44 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1CE683C(alreadyGetInfo, v38->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( LODWORD(v38->max_length) <= 2 )
              goto LABEL_87;
            v38->m_Items[2] = v44;
            sub_1CE66A4(&v38->m_Items[2], v44);
            v45.fields._dateData = (uint64_t)&dateData;
            Hour = System_DateTime__get_Hour(v45, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
            v46 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1CE683C(alreadyGetInfo, v38->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( LODWORD(v38->max_length) <= 3 )
              goto LABEL_87;
            v38->m_Items[3] = v46;
            sub_1CE66A4(&v38->m_Items[3], v46);
            v47.fields._dateData = (uint64_t)&dateData;
            Minute = System_DateTime__get_Minute(v47, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
            v48 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1CE683C(alreadyGetInfo, v38->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_89:
                v57 = sub_1CE697C();
                sub_1CE6828(v57, 0);
              }
            }
            if ( LODWORD(v38->max_length) <= 4 )
LABEL_87:
              sub_1CE6960(alreadyGetInfo);
            v38->m_Items[4] = v48;
            sub_1CE66A4(&v38->m_Items[4], v48);
            v49 = System_String__Format_65164272((System_String_o *)StringLiteral_25575/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v38, 0);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            v51 = (Il2CppObject *)v49;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3884/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0);
            v53 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5581/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
            alreadyGetInfo = (__int64)System_String__Format_65164136(v52, v53, v51, 0);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0);
              alreadyGetInfo = (__int64)this->fields.spendQpLb;
              if ( alreadyGetInfo )
              {
                v75.fields.r = 0.32941;
                v75.fields.a = 1.0;
                v75.fields.g = 0.32941;
                v75.fields.b = 0.32941;
                UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v75, 0);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
                    (System_Collections_Generic_List_object__o *)alreadyGetInfo,
                    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  v71 = v65;
                  while ( 1 )
                  {
                    v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v71,
                            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v54 )
                      break;
                    current = v71.fields._current;
                    if ( !v71.fields._current )
                      sub_1CE6958(v54, v55);
                    LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v71.fields._current, 1, 0);
                    LOBYTE(current[6].klass) = 1;
                  }
LABEL_106:
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v71,
                    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
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
    v59 = this->fields.alreadyGetLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_3883/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0);
    v61 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5581/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
    alreadyGetInfo = (__int64)System_String__Format(v60, v61, 0);
    if ( v59 )
    {
      UILabel__set_text(v59, (System_String_o *)alreadyGetInfo, 0);
      alreadyGetInfo = (__int64)this->fields.spendQpLb;
      if ( alreadyGetInfo )
      {
        v76.fields.r = 1.0;
        v76.fields.g = 1.0;
        v76.fields.b = 1.0;
        v76.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v76, 0);
        if ( this->fields.haveQpVal < this->fields.spendQpVal )
        {
          alreadyGetInfo = (__int64)this->fields.spendQpLb;
          if ( !alreadyGetInfo )
            goto LABEL_108;
          v77.fields.r = 1.0;
          v77.fields.g = 0.0;
          v77.fields.b = 0.0;
          v77.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v77, 0);
        }
        alreadyGetInfo = (__int64)this->fields.itemInfoList;
        if ( alreadyGetInfo )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v65,
            (System_Collections_Generic_List_object__o *)alreadyGetInfo,
            (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
          v71 = v65;
          while ( 1 )
          {
            v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v71,
                    (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
            if ( !v62 )
              break;
            v64 = v71.fields._current;
            if ( !v71.fields._current )
              sub_1CE6958(v62, v63);
            LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v71.fields._current, 0, 0);
            LOBYTE(v64[6].klass) = 1;
          }
          goto LABEL_106;
        }
      }
    }
LABEL_108:
    sub_1CE6958(alreadyGetInfo, method);
  }
}


void ServantCostumeControl__ResetEventCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  this->fields.eventCombineCostumeEnt = 0;
  sub_1CE66A4(&this->fields.eventCombineCostumeEnt, 0);
  this->fields.isShortEventItem = 0;
}


void ServantCostumeControl__ResetInit(ServantCostumeControl_o *this, const MethodInfo *method)
{
  this->fields.baseSvt = 0;
  sub_1CE66A4(&this->fields.baseSvt, 0);
  this->fields.baseSvtCostume = 0;
  sub_1CE66A4(&this->fields.baseSvtCostume, 0);
  this->fields.eventCombineCostumeEnt = 0;
  sub_1CE66A4(&this->fields.eventCombineCostumeEnt, 0);
}


void ServantCostumeControl__SetBaseSvtCardImg(
        ServantCostumeControl_o *this,
        UserServantEntity_o *userSvtData,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *v5; // x0

  this->fields.baseSvt = userSvtData;
  sub_1CE66A4(&this->fields.baseSvt, userSvtData);
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(ServantCostumeControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         userSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v5;
  sub_1CE66A4(&this->fields.charaGraph, v5);
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
    sub_1CE6958(executeButton, method);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0);
}


void ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4DFE7C4 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_9304/*"N0"*/);
    byte_4DFE7C4 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_66636500(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9304/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1CE6958(SelfUserGame, v4);
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

  if ( (byte_4DFE7C7 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&ServantCostumeControl_TypeInfo);
    sub_1CE6700(&StringLiteral_12313/*"SHORT_RELEASE_COND_MSG"*/);
    sub_1CE6700(&StringLiteral_3876/*"COSTUME_EXE_MSG"*/);
    sub_1CE6700(&StringLiteral_7508/*"INFO_MSG_SELECT_COSTUME"*/);
    sub_1CE6700(&StringLiteral_12311/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1CE6700(&StringLiteral_12312/*"SHORT_QP_INFO_MSG"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_7503/*"INFO_MSG_COSTUME_SELECT_BASE"*/);
    byte_4DFE7C7 = 1;
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
    sub_1CE6958(v5, *(_QWORD *)&state);
  UIWidget__set_color(detailInfoLb, *(UnityEngine_Color_o *)*((_QWORD *)v5 + 23), 0);
  if ( state == 3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_7508/*"INFO_MSG_SELECT_COSTUME"*/;
    goto LABEL_33;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state != 2 )
  {
    if ( state )
      goto LABEL_34;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_7503/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_33;
  }
  if ( this->fields.isCanCombine )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_3876/*"COSTUME_EXE_MSG"*/;
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
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12312/*"SHORT_QP_INFO_MSG"*/, 0);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12311/*"SHORT_ITEM_INFO_MSG"*/, 0);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_12313/*"SHORT_RELEASE_COND_MSG"*/;
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
  __int64 Instance; // x0
  int64_t v4; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v6; // x20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o **p_itemInfoList; // x21
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x22
  struct System_Int32_array *itemIds; // x25
  int max_length; // w23
  struct System_Int32_array *itemNums; // x27
  unsigned int i; // w26
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v15; // x22
  char *v16; // x29
  int32_t v17; // w2
  int32_t *v18; // x29
  int32_t v19; // t1
  int32_t *v20; // x24
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  bool v25; // w25
  int32_t v26; // w22
  struct ServantCostumeEntity_o *v27; // x8
  struct ServantCostumeEntity_o *v28; // x8
  struct ServantCostumeEntity_o *v29; // x8
  UISprite_o *costumeFaceIcon; // x21
  int32_t id; // w22
  int32_t svtId; // w23
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v34; // x8
  int v35; // w23
  int v36; // w26
  Il2CppObject *v37; // x21
  struct EventCombineCostumeEntity_o *v38; // x8
  struct System_Int32_array *v39; // x8
  struct EventCombineCostumeEntity_o *v40; // x8
  struct System_Int32_array *v41; // x10
  struct ServantCostumeEntity_o *v42; // x21
  struct UserServantEntity_o *baseSvt; // x8
  __int128 v44; // q1
  ServantCostumeReleaseMaster_o *v45; // x22
  int32_t v46; // w23
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v48; // x8
  struct EventCombineCostumeEntity_o *v49; // x8
  EventEntity_o *v50; // x21
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *v55; // [xsp+40h] [xbp-70h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4DFE7C5 & 1) == 0 )
  {
    sub_1CE6700(&AtlasManager_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1CE6700(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&StringLiteral_9304/*"N0"*/);
    byte_4DFE7C5 = 1;
  }
  v55 = 0;
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = &this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v6;
  Instance = sub_1CE66A4(&this->fields.itemInfoList, v6);
  baseSvtCostume = this->fields.baseSvtCostume;
  if ( !baseSvtCostume || !MasterData_object )
    goto LABEL_110;
  Instance = CombineCostumeMaster__TryGetEntity(
               (CombineCostumeMaster_o *)MasterData_object,
               &entity,
               baseSvtCostume->fields.svtId,
               baseSvtCostume->fields.id,
               0);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_110;
    spendQpLb = this->fields.spendQpLb;
    this->fields.spendQpVal = entity->fields.qp;
    Instance = (__int64)System_Int32__ToString_66631324((int)this + 392, (System_String_o *)StringLiteral_9304/*"N0"*/, 0);
    if ( !spendQpLb )
      goto LABEL_110;
    UILabel__set_text(spendQpLb, (System_String_o *)Instance, 0);
    if ( !entity )
      goto LABEL_110;
    itemIds = entity->fields.itemIds;
    if ( !itemIds )
      goto LABEL_110;
    max_length = itemIds->max_length;
    if ( max_length > 0 )
    {
      itemNums = entity->fields.itemNums;
      for ( i = 0; i != max_length; ++i )
      {
        itemInfos = this->fields.itemInfos;
        if ( !itemInfos )
          goto LABEL_110;
        if ( i >= LODWORD(itemInfos->max_length) )
          goto LABEL_111;
        v15 = itemInfos->m_Items[i];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4DFE4CA )
        {
          sub_1CE6700(&NetworkManager_TypeInfo);
          byte_4DFE4CA = 1;
        }
        Instance = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (__int64)NetworkManager_TypeInfo;
        }
        if ( i >= LODWORD(itemIds->max_length) )
          goto LABEL_111;
        v16 = (char *)itemIds + 4 * (int)i;
        v4 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
        v19 = *((_DWORD *)v16 + 8);
        v18 = (int32_t *)(v16 + 32);
        v17 = v19;
        if ( !itemNums )
          goto LABEL_110;
        if ( i >= LODWORD(itemNums->max_length) )
          goto LABEL_111;
        if ( !v15 )
          goto LABEL_110;
        v20 = &itemNums->m_Items[i];
        LimitCntUpItemComponent__setLimitUpItemInfo(v15, v4, v17, *v20, 0);
        Instance = (__int64)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_110;
        v21 = *(_QWORD *)(Instance + 16);
        v22 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v21 )
          goto LABEL_110;
        v23 = *(int *)(Instance + 24);
        if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v15,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * v23;
          *(_DWORD *)(Instance + 24) = v23 + 1;
          *(_QWORD *)(v24 + 32) = v15;
          sub_1CE66A4(v24 + 32, v15);
        }
        LimitCntUpItemComponent__SetMaskSprite(v15, 0, 0);
        v15->fields.disableOpenItemDetailDialog = 0;
        if ( i >= LODWORD(itemIds->max_length) || i >= LODWORD(itemNums->max_length) )
LABEL_111:
          sub_1CE6960(Instance);
        CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, *v18, *v20, 0);
      }
      v25 = 0;
      v26 = 0;
      while ( 1 )
      {
        Instance = (__int64)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_110;
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)Instance,
                              v26,
                              (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( !Instance )
          goto LABEL_110;
        if ( *(_BYTE *)(Instance + 112) )
        {
          v25 = ++v26 >= max_length;
          if ( max_length != v26 )
            continue;
        }
        goto LABEL_41;
      }
    }
    v25 = max_length < 1;
LABEL_41:
    v27 = this->fields.baseSvtCostume;
    if ( !v27 )
      goto LABEL_110;
    Instance = (__int64)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_110;
    UILabel__set_text((UILabel_o *)Instance, v27->fields.name, 0);
    v28 = this->fields.baseSvtCostume;
    if ( !v28 )
      goto LABEL_110;
    Instance = (__int64)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_110;
    UILabel__set_text((UILabel_o *)Instance, v28->fields.releaseInfo, 0);
    v29 = this->fields.baseSvtCostume;
    if ( !v29 )
      goto LABEL_110;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    svtId = v29->fields.svtId;
    id = v29->fields.id;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceImage(costumeFaceIcon, svtId, id, 1, 0, 0, 0);
    Instance = (__int64)this->fields.costumeFaceIcon;
    if ( !Instance )
      goto LABEL_110;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (__int64)this->fields.costumeFaceIconFrame;
    if ( !Instance )
      goto LABEL_110;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  }
  else
  {
    v25 = 0;
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
  Instance = (__int64)this->fields.spendQpLb;
  if ( !Instance )
    goto LABEL_110;
  v57.fields.r = 1.0;
  v57.fields.g = 1.0;
  v57.fields.b = 1.0;
  v57.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v57, 0);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    Instance = (__int64)this->fields.spendQpLb;
    if ( !Instance )
      goto LABEL_110;
    v58.fields.r = 1.0;
    v58.fields.g = 0.0;
    v58.fields.b = 0.0;
    v58.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v58, 0);
    this->fields.isShortQp = 1;
  }
  if ( !v25 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v34 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v34 )
      goto LABEL_110;
    v35 = -1;
    while ( 1 )
    {
      v36 = v35 + 1;
      if ( v35 + 1 >= SLODWORD(v34->max_length) )
        break;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      v37 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4DFE4CA )
      {
        sub_1CE6700(&NetworkManager_TypeInfo);
        byte_4DFE4CA = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      v38 = this->fields.eventCombineCostumeEnt;
      if ( !v38 )
        goto LABEL_110;
      v39 = v38->fields.itemIds;
      if ( !v39 )
        goto LABEL_110;
      if ( (unsigned int)v36 >= LODWORD(v39->max_length) )
        goto LABEL_111;
      if ( !v37 )
        goto LABEL_110;
      Instance = UserItemMaster__TryGetEntity(
                   (UserItemMaster_o *)v37,
                   &v55,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   v39->m_Items[v36],
                   0);
      if ( (Instance & 1) == 0 )
        goto LABEL_82;
      if ( !v55 )
        goto LABEL_110;
      v40 = this->fields.eventCombineCostumeEnt;
      if ( !v40 )
        goto LABEL_110;
      v41 = v40->fields.itemNums;
      if ( !v41 )
        goto LABEL_110;
      if ( (unsigned int)++v35 >= LODWORD(v41->max_length) )
        goto LABEL_111;
      if ( v55->fields.num < v41->m_Items[v36] )
      {
LABEL_82:
        this->fields.isShortEventItem = 1;
        break;
      }
      v34 = v40->fields.itemIds;
      if ( !v34 )
        goto LABEL_110;
    }
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v42 = this->fields.baseSvtCostume;
  if ( !v42 )
    goto LABEL_110;
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_110;
  v44 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v45 = (ServantCostumeReleaseMaster_o *)Instance;
  v46 = v42->fields.svtId;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v44;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v53 = v54;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v53, 0);
  if ( !v45 )
LABEL_110:
    sub_1CE6958(Instance, v4);
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v45, v42, v46, Instance, 0);
  v48 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v48 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_98;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventMaster___);
  v49 = this->fields.eventCombineCostumeEnt;
  if ( !v49 )
    goto LABEL_110;
  if ( !Instance )
    goto LABEL_110;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        v49->fields.eventId,
                        (const MethodInfo_34E925C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_110;
  v50 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_107;
  }
  startedAt = v50->fields.startedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( startedAt <= NetworkManager__getTime(0) && !EventEntity__IsOpen(v50, 0, 0) )
  {
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    if ( !this->fields.isShortEventItem )
    {
LABEL_107:
      if ( !isNotClearReleaseCond )
        this->fields.isCanCombine = 1;
      return;
    }
    if ( this->fields.isNotClearReleaseCond )
      return;
LABEL_98:
    if ( this->fields.isShortNeedItem )
      return;
    isNotClearReleaseCond = this->fields.isShortQp;
    goto LABEL_107;
  }
}


void ServantCostumeControl__ShowCostumeCombineInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct CostumeListViewManager_o *costumeListInfo; // x8
  struct ServantCostumeEntity_o *baseSvtCostume; // x1
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x21
  struct EventCombineCostumeEntity_o **p_eventCombineCostumeEnt; // x20
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v10; // x22
  __int64 v11; // x23
  __int64 v12; // x24
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  LimitCntUpItemComponent_o *eventItemIcon; // x21
  struct EventCombineCostumeEntity_o *v15; // x9
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  struct EventCombineCostumeEntity_o *v18; // x9
  struct System_Int32_array *v19; // x8
  struct System_Int32_array *v20; // x9
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4DFE7C3 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFE7C3 = 1;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  costumeListInfo = this->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_34;
  baseSvtCostume = costumeListInfo->fields.baseSvtCostume;
  p_baseSvtCostume = &this->fields.baseSvtCostume;
  this->fields.baseSvtCostume = baseSvtCostume;
  sub_1CE66A4(&this->fields.baseSvtCostume, baseSvtCostume);
  p_eventCombineCostumeEnt = &this->fields.eventCombineCostumeEnt;
  this->fields.eventCombineCostumeEnt = 0;
  sub_1CE66A4(&this->fields.eventCombineCostumeEnt, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_34;
  v10 = (EventCombineCostumeMaster_o *)Instance;
  v12 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v12;
  *(_QWORD *)&v25.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v25, 0);
  if ( !*p_baseSvtCostume || !v10 )
    goto LABEL_34;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              v10,
                              (int32_t)Instance,
                              (*p_baseSvtCostume)->fields.id,
                              0);
  *p_eventCombineCostumeEnt = ListBySvtIdAndCostumeId;
  sub_1CE66A4(&this->fields.eventCombineCostumeEnt, ListBySvtIdAndCostumeId);
  if ( *p_eventCombineCostumeEnt )
  {
    eventItemIcon = this->fields.eventItemIcon;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4DFE4CA )
    {
      sub_1CE6700(&NetworkManager_TypeInfo);
      byte_4DFE4CA = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v15 = *p_eventCombineCostumeEnt;
    if ( *p_eventCombineCostumeEnt )
    {
      itemIds = v15->fields.itemIds;
      if ( itemIds )
      {
        if ( !LODWORD(itemIds->max_length) )
          goto LABEL_35;
        itemNums = v15->fields.itemNums;
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
          v18 = *p_eventCombineCostumeEnt;
          if ( *p_eventCombineCostumeEnt )
          {
            v19 = v18->fields.itemIds;
            if ( v19 )
            {
              if ( LODWORD(v19->max_length) )
              {
                v20 = v18->fields.itemNums;
                if ( !v20 )
                  goto LABEL_34;
                if ( LODWORD(v20->max_length) )
                {
                  CombineMenuControl__AddCombineItemInfo(
                    (CombineMenuControl_o *)this,
                    v19->m_Items[0],
                    v20->m_Items[0],
                    0);
                  goto LABEL_29;
                }
              }
LABEL_35:
              sub_1CE6960(Instance);
            }
          }
        }
      }
    }
LABEL_34:
    sub_1CE6958(Instance, v4);
  }
LABEL_29:
  Instance = (DataManager_o *)this->fields.costumeListInfo;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  ServantCostumeControl__SetHaveQpInfo(this, v21);
  ServantCostumeControl__SetSvtCostumeCombineData(this, v22);
  ServantCostumeControl__SetExeBtnState(this, v23);
  Instance = (DataManager_o *)this->fields.costumeReleaseInfo;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  ServantCostumeControl__RefreshEventCostumeInfo(this, v24);
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
    sub_1CE6958(costumeListInfo, method);
  }
  CostumeListViewManager__SetMode_32187564((CostumeListViewManager_o *)costumeListInfo, 2, v5);
}


void ServantCostumeControl___OnClickExeCostumeCombine_b__57_0(ServantCostumeControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1CE6958(0, method);
  CombineRootComponent__RequestCombineCostume(combineRootComponent, 0, this->fields.itemInfoList, 0);
}


void ServantCostumeControl___OnClickExeCostumeCombine_b__57_1(ServantCostumeControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  Il2CppClass *klass; // x9
  SetRarityDialogControl_o *v5; // x20
  System_String_o *v6; // x21
  int32_t namespaze_high; // w22
  int64_t v8; // x23
  System_Action_o *v9; // x24
  System_Action_o *v10; // x25

  v2 = (Il2CppObject *)this;
  if ( (byte_4DFE7CF & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    this = (ServantCostumeControl_o *)sub_1CE6700(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__);
    byte_4DFE7CF = 1;
  }
  monitor = v2[22].monitor;
  if ( !monitor )
    goto LABEL_7;
  klass = v2[26].klass;
  if ( !klass )
    goto LABEL_7;
  v5 = (SetRarityDialogControl_o *)v2[4].klass;
  v6 = (System_String_o *)*((_QWORD *)monitor + 4);
  namespaze_high = HIDWORD(klass->_1.namespaze);
  v8 = (int64_t)v2[24].klass;
  v9 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v9, v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__, 0);
  v10 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v10, v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
  if ( !v5 )
LABEL_7:
    sub_1CE6958(this, method);
  SetRarityDialogControl__SetConfirmCombineCostume(v5, v6, namespaze_high, v8, v9, v10, 0);
}


void ServantCostumeControl___OnClickExeCostumeCombine_b__57_2(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *eventItemIcon; // x1
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  Il2CppClass **v9; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_4DFE7D0 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    byte_4DFE7D0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v3 )
    goto LABEL_11;
  eventItemIcon = (Il2CppObject *)this->fields.eventItemIcon;
  items = v3->fields._items;
  v7 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_11;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      eventItemIcon,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v9 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v9[4] = (Il2CppClass *)eventItemIcon;
    combineRootComponent = (CombineRootComponent_o *)sub_1CE66A4(v9 + 4, eventItemIcon);
  }
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || (combineRootComponent = this->fields.combineRootComponent) == 0 )
LABEL_11:
    sub_1CE6958(combineRootComponent, eventItemIcon);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-50h]

  if ( (byte_4DFE7C6 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1CE6700(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4DFE7C6 = 1;
  }
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v4 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v11.fields.fakeValue = v4;
    p_baseSvt = &this->fields.baseSvt;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v10 = v11;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v10, 0);
    *p_baseSvt = 0;
    sub_1CE66A4(&this->fields.baseSvt, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (Il2CppObject **)&this->fields.baseSvt,
               v6,
               (const MethodInfo_34EBA58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.baseSvt,
                   v6,
                   (const MethodInfo_34EBA58 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_1CE6958(Instance, v8);
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


// local variable allocation has failed, the output may be wrong!
void ServantCostumeControl___c__DisplayClass56_0___CheckCondJoin_b__0(
        ServantCostumeControl___c__DisplayClass56_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  ServantCostumeControl___c__DisplayClass56_0_o *v4; // x20
  struct ServantCostumeControl_o *_4__this; // x8
  struct CombineRootComponent_o *combineRootComponent; // x8

  v4 = this;
  if ( (byte_4DFE7D1 & 1) == 0 )
  {
    this = (ServantCostumeControl___c__DisplayClass56_0_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFE7D1 = 1;
  }
  if ( decide )
  {
    ActionExtensions__Call(v4->fields.callBack, 0);
  }
  else
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this || (combineRootComponent = _4__this->fields.combineRootComponent) == 0 )
LABEL_10:
      sub_1CE6958(this, decide);
    combineRootComponent->fields._IsExeButtonProcessing_k__BackingField = 0;
  }
  this = (ServantCostumeControl___c__DisplayClass56_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
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

  if ( (byte_4DFE7D2 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    sub_1CE6700(&Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__);
    sub_1CE6700(&Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__);
    sub_1CE6700(&ServantCostumeControl___c__DisplayClass57_1_TypeInfo);
    byte_4DFE7D2 = 1;
  }
  v5 = sub_1CE694C(ServantCostumeControl___c__DisplayClass57_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 24) = this;
  sub_1CE66A4(v5 + 24, this);
  *(_BYTE *)(v5 + 16) = useEventItem;
  v8 = Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__;
  if ( (*((_BYTE *)Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1CE6718(Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__);
  v9 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  if ( !*(_BYTE *)(v5 + 16) )
  {
    combineCostumeEntity = this->fields.combineCostumeEntity;
    if ( combineCostumeEntity )
    {
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        p_qp = &combineCostumeEntity->fields.qp;
        goto LABEL_13;
      }
    }
LABEL_16:
    sub_1CE6958(v6, v7);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  eventCombineCostumeEnt = _4__this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_16;
  p_qp = &eventCombineCostumeEnt->fields.qp;
LABEL_13:
  baseSvtCostume = _4__this->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_16;
  v15 = *p_qp;
  exeCombineDlg = _4__this->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = _4__this->fields.haveQpVal;
  v19 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__,
    0);
  v20 = (Il2CppObject *)this->fields.__4__this;
  v21 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v21, v20, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
  if ( !exeCombineDlg )
    goto LABEL_16;
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
  struct ServantCostumeControl___c__DisplayClass57_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  struct ServantCostumeControl___c__DisplayClass57_0_o *v14; // x8
  struct ServantCostumeControl_o *v15; // x8

  if ( (byte_4DFE7D3 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    byte_4DFE7D3 = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    itemInfoList,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
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
    v11 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
    ++itemInfoList->fields._version;
    if ( !items )
      goto LABEL_19;
    size = itemInfoList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemInfoList,
        eventItemIcon,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = &items->obj.klass + size;
      itemInfoList->fields._size = size + 1;
      v13[4] = (Il2CppClass *)eventItemIcon;
      combineRootComponent = (CombineRootComponent_o *)sub_1CE66A4(v13 + 4, eventItemIcon);
    }
  }
  else
  {
    eventId = 0;
  }
  v14 = this->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_19;
  v15 = v14->fields.__4__this;
  if ( !v15 )
    goto LABEL_19;
  combineRootComponent = v15->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_object__o *)v15->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_19:
    sub_1CE6958(combineRootComponent, eventItemIcon);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0);
}