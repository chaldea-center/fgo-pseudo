void __fastcall ServantCostumeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFD6E & 1) == 0 )
  {
    sub_1B640C8(&ServantCostumeControl_TypeInfo, v1);
    byte_49FFD6E = 1;
  }
  *ServantCostumeControl_TypeInfo->static_fields = (struct ServantCostumeControl_StaticFields)xmmword_BA42B0;
}


void __fastcall ServantCostumeControl___ctor(ServantCostumeControl_o *this, const MethodInfo *method)
{
  if ( (byte_49FFD6D & 1) == 0 )
  {
    sub_1B640C8(&CombineMenuControl_TypeInfo, method);
    byte_49FFD6D = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall ServantCostumeControl__CheckCondJoin(
        ServantCostumeControl_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  UserServantEntity_o *baseSvt; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  EventServantEntity_o *v18; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v20; // x21
  System_String_o *v21; // x23
  Il2CppObject *v22; // x1
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  CommonConfirmDialog_ClickDelegate_o *v28; // x25

  if ( (byte_49FFD68 & 1) == 0 )
  {
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, callBack);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&string_TypeInfo, v7);
    sub_1B640C8(&Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__, v8);
    sub_1B640C8(&ServantCostumeControl___c__DisplayClass56_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_3790/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, v10);
    sub_1B640C8(&StringLiteral_3789/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, v11);
    sub_1B640C8(&StringLiteral_3788/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, v12);
    sub_1B640C8(&StringLiteral_3791/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, v13);
    byte_49FFD68 = 1;
  }
  v14 = sub_1B64314(ServantCostumeControl___c__DisplayClass56_0_TypeInfo, callBack, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_17;
  *(_QWORD *)(v14 + 16) = callBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)callBack, v16, v17);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_17;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0LL);
  if ( !this->fields.baseSvt )
    goto LABEL_17;
  v18 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0LL);
  v22 = (Il2CppObject *)(v18 ? EventServantEntity__getEndTimeStr(v18, 0LL) : string_TypeInfo->static_fields->Empty);
  v23 = System_String__Format(v21, v22, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3791/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3789/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0LL);
  v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v26, v27);
  CommonConfirmDialog_ClickDelegate___ctor(
    v28,
    (Il2CppObject *)v14,
    Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__,
    0LL);
  if ( !Instance )
LABEL_17:
    sub_1B64324(baseSvt);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v20,
    v23,
    v24,
    v25,
    v28,
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
    0LL);
}


void __fastcall ServantCostumeControl__CheckIsSelectBaseSvt(
        ServantCostumeControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  if ( (byte_49FFD61 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_49FFD61 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v17, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL) )
      {
        ServantCostumeControl__InitDispInfo(this, v10);
        this->fields.baseSvtCostume = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSvtCostume, 0, v11, v12);
        this->fields.eventCombineCostumeEnt = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventCombineCostumeEnt, 0, v13, v14);
      }
    }
  }
  else
  {
    ServantCostumeControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    ServantCostumeControl__ResetInit(this, v15);
  }
  this->fields.baseUserServantEntity = selectBase;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBase,
    (int32_t)method,
    v3);
}


void __fastcall ServantCostumeControl__ClearItemList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  int max_length; // w20
  ServantCostumeControl_o *v4; // x19
  il2cpp_array_size_t v5; // w21

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
      if ( v5 >= itemInfos->max_length )
        sub_1B6432C(this, method);
      this = (ServantCostumeControl_o *)itemInfos->m_Items[v5];
      if ( !this )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
      if ( max_length == ++v5 )
        return;
      itemInfos = v4->fields.itemInfos;
    }
    while ( itemInfos );
LABEL_8:
    sub_1B64324(this);
  }
}


void __fastcall ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_1B64324(0LL);
  ListViewManager__DestroyList(costumeListInfo, 0LL);
}


int32_t __fastcall ServantCostumeControl__GetTutorialOpenType(ServantCostumeControl_o *this, const MethodInfo *method)
{
  return 31;
}


void __fastcall ServantCostumeControl__InitBaseCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3

  this->fields.baseSvtCostume = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSvtCostume, 0, v2, v3);
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventCombineCostumeEnt, 0, v5, v6);
}


void __fastcall ServantCostumeControl__InitCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *costumeFaceIconFrame; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_49FFD5E & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v3);
    byte_49FFD5E = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  ServantCostumeControl__InitDispInfo(this, v4);
  ServantCostumeControl__ClearItemList(this, v5);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  costumeFaceIconFrame = System_Int32__ToString_62180668((int)this + 312, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_14;
  UILabel__set_text(spendQpLb, costumeFaceIconFrame, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v8);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v9);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetNoMountFace(costumeFaceIcon, 0LL);
  costumeFaceIconFrame = (System_String_o *)this->fields.costumeFaceIconFrame;
  if ( !costumeFaceIconFrame )
    goto LABEL_14;
  costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)costumeFaceIconFrame,
                                              0LL);
  if ( !costumeFaceIconFrame )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0LL);
  costumeFaceIconFrame = (System_String_o *)this->fields.costumeFaceIcon;
  if ( !costumeFaceIconFrame )
    goto LABEL_14;
  costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)costumeFaceIconFrame,
                                              0LL);
  if ( !costumeFaceIconFrame
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0LL),
        this->fields.isCanCombine = 0,
        ServantCostumeControl__SetExeBtnState(this, v11),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeListInfo) == 0LL)
    || (costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)costumeFaceIconFrame,
                                                    0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 0, 0LL),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL) )
  {
LABEL_14:
    sub_1B64324(costumeFaceIconFrame);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0LL);
  ServantCostumeControl__ResetInit(this, v12);
}


void __fastcall ServantCostumeControl__InitCombineCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *gameObject; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v11; // x1
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFD60 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FFD60 = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  gameObject = System_Int32__ToString_62180668((int)this + 312, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_17;
  UILabel__set_text(spendQpLb, gameObject, 0LL);
  gameObject = (System_String_o *)this->fields.spendQpLb;
  if ( !gameObject )
    goto LABEL_17;
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v12, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v7);
  ServantCostumeControl__ClearItemList(this, v8);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v9);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetNoMountFace(costumeFaceIcon, 0LL);
  gameObject = (System_String_o *)this->fields.costumeFaceIcon;
  if ( !gameObject )
    goto LABEL_17;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (System_String_o *)this->fields.costumeFaceIconFrame;
  if ( !gameObject )
    goto LABEL_17;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (System_String_o *)this->fields.costumeNameLb;
  if ( !gameObject )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (System_String_o *)this->fields.conditionLb;
  if ( !gameObject
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        ServantCostumeControl__SetExeBtnState(this, v11),
        (gameObject = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = (System_String_o *)this->fields.eventCombineCostumeBalloon) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
LABEL_17:
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FFD5F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFD5F = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_charaGraph, 0, v6, v7);
  }
}


void __fastcall ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49FFD6C & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantCostumeControl_OnClickBase__, method);
    byte_49FFD6C = 1;
  }
  v3 = Method_ServantCostumeControl_OnClickBase__;
  if ( (*((_BYTE *)Method_ServantCostumeControl_OnClickBase__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_ServantCostumeControl_OnClickBase__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__ShowBaseListSvtCostume(combineRootComponent, 0LL);
}


void __fastcall ServantCostumeControl__OnClickExeCostumeCombine(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCostumeControl_o *v3; // x19
  __int64 v4; // x1
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
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  EventEntity_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  SetRarityDialogControl_o *exeCombineDlg; // x20
  EventCombineCostumeEntity_o *v21; // x21
  System_Action_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x23
  struct ServantCostumeEntity_o *v26; // x8
  System_String_o *name; // x21
  SetRarityDialogControl_o *v28; // x20
  int32_t spendQpVal; // w22
  int32_t haveQpVal; // w23
  System_Action_o *v31; // x24
  int64_t startedAt; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v39; // x21
  __int64 v40; // x22
  __int64 v41; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  CombineCostumeEntity_o *Entity; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x1
  __int64 v47; // x2
  SetRarityDialogControl_o *v48; // x21
  bool v49; // w22
  CombineCostumeEntity_o *v50; // x23
  EventCombineCostumeEntity_o *v51; // x24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v53; // x25
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_o *v56; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  v3 = this;
  if ( (byte_49FFD69 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&System_Action_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_CombineCostumeMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v11);
    sub_1B640C8(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__, v12);
    sub_1B640C8(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__, v13);
    sub_1B640C8(&Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__, v14);
    this = (ServantCostumeControl_o *)sub_1B640C8(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo, v15);
    byte_49FFD69 = 1;
  }
  if ( v3->fields.eventCombineCostumeEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v3->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_33;
    if ( !this )
      goto LABEL_33;
    this = (ServantCostumeControl_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    v17 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0LL) )
    {
      exeCombineDlg = v3->fields.exeCombineDlg;
      v21 = v3->fields.eventCombineCostumeEnt;
      v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v3,
        Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__,
        0LL);
      v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
      System_Action___ctor(v25, (Il2CppObject *)v3, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v21, v22, v25, 0LL);
        return;
      }
LABEL_33:
      sub_1B64324(this);
    }
    startedAt = v17->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v17, 0, 0LL) )
    {
      v35 = sub_1B64314(ServantCostumeControl___c__DisplayClass57_0_TypeInfo, v33, v34);
      System_Object___ctor((Il2CppObject *)v35, 0LL);
      if ( !v35 )
        goto LABEL_33;
      *(_QWORD *)(v35 + 24) = v3;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 24), (int32_t)v3, v36, v37);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v3->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_33;
      v39 = (CombineCostumeMaster_o *)this;
      v41 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v57.fields.currentCryptoKey = v41;
      *(_QWORD *)&v57.fields.fakeValue = v40;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v57, 0LL);
      baseSvtCostume = v3->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v39 )
        goto LABEL_33;
      Entity = CombineCostumeMaster__GetEntity(v39, (int32_t)this, baseSvtCostume->fields.id, 0LL);
      *(_QWORD *)(v35 + 16) = Entity;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 16), (int32_t)Entity, v44, v45);
      v48 = v3->fields.exeCombineDlg;
      v49 = v3->fields.isShortNeedItem || v3->fields.isShortQp;
      v50 = *(CombineCostumeEntity_o **)(v35 + 16);
      v51 = v3->fields.eventCombineCostumeEnt;
      isShortEventItem = v3->fields.isShortEventItem;
      v53 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v46, v47);
      System_Action_bool____ctor(
        v53,
        (Il2CppObject *)v35,
        Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__,
        0LL);
      v56 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v54, v55);
      System_Action___ctor(v56, (Il2CppObject *)v3, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( !v48 )
        goto LABEL_33;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v48,
        v50,
        v51,
        v49,
        isShortEventItem,
        v53,
        v56,
        0LL);
    }
  }
  else
  {
    v26 = v3->fields.baseSvtCostume;
    if ( !v26 )
      goto LABEL_33;
    name = v26->fields.name;
    v28 = v3->fields.exeCombineDlg;
    spendQpVal = v3->fields.spendQpVal;
    haveQpVal = v3->fields.haveQpVal;
    v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v31, (Il2CppObject *)v3, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__, 0LL);
    if ( !v28 )
      goto LABEL_33;
    SetRarityDialogControl__SetConfirmCombineCostume(v28, name, spendQpVal, haveQpVal, v31, 0LL, 0LL);
  }
}


void __fastcall ServantCostumeControl__RefreshAlreadyGetInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *alreadyGetInfo; // x0
  UILabel_o *alreadyGetLabel; // x20
  __int64 v7; // x1
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x21
  int max_length; // w8
  unsigned int v10; // w22
  Il2CppClass **v11; // x8
  UnityEngine_Component_o *v12; // x20
  struct UnityEngine_Transform_array *v13; // x8
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFD6A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_3880/*"COSTUME_SELECT_SERVANT_MSG"*/, v4);
    byte_49FFD6A = 1;
  }
  alreadyGetInfo = this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(alreadyGetInfo, 1, 0LL);
  alreadyGetLabel = this->fields.alreadyGetLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3880/*"COSTUME_SELECT_SERVANT_MSG"*/, 0LL);
  if ( !alreadyGetLabel )
    goto LABEL_25;
  UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_25;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( v10 < max_length )
    {
      v11 = &alreadyGetLabelBgList->obj.klass + (int)v10;
      v12 = (UnityEngine_Component_o *)v11[4];
      if ( !v12 )
        goto LABEL_25;
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)v11[4],
                                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0LL);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     v12,
                                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v14.fields.x = 0.0;
      v14.fields.y = 0.0;
      v14.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v12, v14, 0LL);
      alreadyGetInfo = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(alreadyGetInfo, 0, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_16;
    }
LABEL_26:
    sub_1B6432C(alreadyGetInfo, v7);
  }
LABEL_16:
  v13 = this->fields.alreadyGetLabelBgList;
  if ( !v13 )
    goto LABEL_25;
  if ( !v13->max_length )
    goto LABEL_26;
  alreadyGetInfo = (UnityEngine_GameObject_o *)v13->m_Items[0];
  if ( !alreadyGetInfo )
    goto LABEL_25;
  alreadyGetInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
  if ( !alreadyGetInfo
    || (UnityEngine_GameObject__SetActive(alreadyGetInfo, 1, 0LL),
        (alreadyGetInfo = (UnityEngine_GameObject_o *)this->fields.alreadyGetLabel) == 0LL)
    || (UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0LL),
        (alreadyGetInfo = (UnityEngine_GameObject_o *)this->fields.alreadyGetLabel) == 0LL)
    || (UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 554, 0LL),
        (alreadyGetInfo = (UnityEngine_GameObject_o *)this->fields.alreadyGetLabel) == 0LL)
    || (alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)alreadyGetInfo,
                                                       0LL)) == 0LL )
  {
LABEL_25:
    sub_1B64324(alreadyGetInfo);
  }
  v15.fields.x = 0.0;
  v15.fields.y = -1.0;
  v15.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v15, 0LL);
}


void __fastcall ServantCostumeControl__RefreshEventCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 alreadyGetInfo; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  Il2CppObject *Entity; // x0
  const MethodInfo *v27; // x1
  EventEntity_o *v28; // x20
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  AssetData_o *eventCombineCostumeBalloonData; // x21
  struct EventCombineCostumeEntity_o *v33; // x8
  struct System_Int32_array *itemIds; // x8
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  Il2CppObject *Object_object__48347676; // x21
  int32_t generatedBalloonId; // w8
  struct EventCombineCostumeEntity_o *v39; // x9
  struct System_Int32_array *v40; // x9
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v43; // x2
  struct EventCombineCostumeEntity_o *v44; // x8
  struct System_Int32_array *v45; // x8
  struct EventCombineCostumeEntity_o *v46; // x8
  struct System_Int32_array *v47; // x8
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x22
  int max_length; // w8
  unsigned int v50; // w23
  Il2CppClass **v51; // x8
  UnityEngine_Component_o *v52; // x21
  struct UnityEngine_Transform_array *v53; // x8
  System_TimeSpan_o v54; // x0
  int64_t endedAt; // x22
  int64_t ticks; // x21
  uint64_t dateData; // x22
  System_Object_array *v58; // x21
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x22
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *v64; // x22
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x22
  int32_t v68; // w2
  int32_t v69; // w3
  Il2CppObject *v70; // x22
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x22
  System_String_o *v74; // x0
  UILabel_o *alreadyGetLabel; // x21
  Il2CppObject *v76; // x22
  System_String_o *v77; // x23
  Il2CppObject *v78; // x0
  _BOOL8 v79; // x0
  Il2CppObject *current; // x21
  __int64 v81; // x0
  int64_t startedAt; // x21
  UILabel_o *v83; // x20
  System_String_o *v84; // x21
  Il2CppObject *v85; // x0
  _BOOL8 v86; // x0
  Il2CppObject *v87; // x19
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+0h] [xbp-90h] BYREF
  int32_t Minute; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t Hour; // [xsp+20h] [xbp-70h] BYREF
  int32_t Day; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t Month; // [xsp+28h] [xbp-68h] BYREF
  int32_t Year; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+30h] [xbp-60h] BYREF
  uint64_t v95; // [xsp+58h] [xbp-38h] BYREF
  System_DateTime_o v96; // 0:x0.8
  System_DateTime_o v97; // 0:x0.8
  System_DateTime_o v98; // 0:x0.8
  System_DateTime_o v99; // 0:x0.8
  System_DateTime_o v100; // 0:x0.8
  System_DateTime_o v101; // 0:x0.8
  System_TimeSpan_o v102; // 0:x1.8
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFD6B & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B640C8(&System_DateTime_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&object___TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&System_TimeSpan_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_12563/*"ServantCostumeEventBalloon_"*/, v19);
    sub_1B640C8(&StringLiteral_3879/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v20);
    sub_1B640C8(&StringLiteral_3878/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v21);
    sub_1B640C8(&StringLiteral_24960/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v22);
    sub_1B640C8(&StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, v23);
    byte_49FFD6B = 1;
  }
  v95 = 0LL;
  memset(&v94, 0, sizeof(v94));
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0LL);
  if ( !this->fields.eventCombineCostumeEnt )
    return;
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_108;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_108;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v28 = (EventEntity_o *)Entity;
  ServantCostumeControl__SetSvtCostumeCombineData(this, v27);
  ServantCostumeControl__SetExeBtnState(this, v29);
  ServantCostumeControl__SetStateInfoMsg(this, 2, v30);
  eventCombineCostumeBalloonData = this->fields.eventCombineCostumeBalloonData;
  if ( eventCombineCostumeBalloonData )
  {
    v33 = this->fields.eventCombineCostumeEnt;
    if ( !v33 )
      goto LABEL_108;
    itemIds = v33->fields.itemIds;
    if ( !itemIds )
      goto LABEL_108;
    if ( !itemIds->max_length )
      goto LABEL_87;
    v35 = System_Int32__ToString((int)itemIds + 32, 0LL);
    v36 = System_String__Concat_61375396((System_String_o *)StringLiteral_12563/*"ServantCostumeEventBalloon_"*/, v35, 0LL);
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                eventCombineCostumeBalloonData,
                                v36,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    alreadyGetInfo = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL);
    if ( (alreadyGetInfo & 1) != 0 )
    {
      generatedBalloonId = this->fields.generatedBalloonId;
      if ( generatedBalloonId )
      {
        v39 = this->fields.eventCombineCostumeEnt;
        if ( !v39 )
          goto LABEL_108;
        v40 = v39->fields.itemIds;
        if ( !v40 )
          goto LABEL_108;
        if ( !v40->max_length )
          goto LABEL_87;
        if ( generatedBalloonId == v40->m_Items[1] )
          goto LABEL_37;
        alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
        if ( !alreadyGetInfo )
          goto LABEL_108;
        alreadyGetInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
        if ( !alreadyGetInfo )
          goto LABEL_108;
        alreadyGetInfo = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)alreadyGetInfo, 0, 0LL);
        if ( !alreadyGetInfo )
          goto LABEL_108;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)alreadyGetInfo,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
        this->fields.generatedBalloonId = 0;
      }
      alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
      alreadyGetInfo = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  (UnityEngine_GameObject_o *)Object_object__48347676,
                                  transform,
                                  0LL,
                                  0LL);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)alreadyGetInfo,
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
      v44 = this->fields.eventCombineCostumeEnt;
      if ( !v44 )
        goto LABEL_108;
      v45 = v44->fields.itemIds;
      if ( !v45 )
        goto LABEL_108;
      if ( !v45->max_length )
        goto LABEL_87;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      ServantCostumeEventBalloon__Set((ServantCostumeEventBalloon_o *)alreadyGetInfo, v45->m_Items[1], v43);
      v46 = this->fields.eventCombineCostumeEnt;
      if ( !v46 )
        goto LABEL_108;
      v47 = v46->fields.itemIds;
      if ( !v47 )
        goto LABEL_108;
      if ( !v47->max_length )
        goto LABEL_87;
      this->fields.generatedBalloonId = v47->m_Items[1];
    }
  }
LABEL_37:
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0LL);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_108;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v50 = 0;
    while ( v50 < max_length )
    {
      v51 = &alreadyGetLabelBgList->obj.klass + (int)v50;
      v52 = (UnityEngine_Component_o *)v51[4];
      if ( !v52 )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)v51[4],
                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v52,
                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v103.fields.x = 0.0;
      v103.fields.y = -15.0;
      v103.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v52, v103, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject(v52, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v50 >= max_length )
        goto LABEL_47;
    }
    goto LABEL_87;
  }
LABEL_47:
  alreadyGetInfo = (__int64)this->fields.alreadyGetLabel;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0LL);
  alreadyGetInfo = (__int64)this->fields.alreadyGetLabel;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 720, 0LL);
  alreadyGetInfo = (__int64)this->fields.alreadyGetLabel;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  alreadyGetInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
  if ( !alreadyGetInfo )
    goto LABEL_108;
  v104.fields.x = 0.0;
  v104.fields.y = -16.0;
  v104.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v104, 0LL);
  alreadyGetInfo = EventEntity__IsOpen(v28, 0, 0LL);
  if ( (alreadyGetInfo & 1) != 0 )
  {
    v53 = this->fields.alreadyGetLabelBgList;
    if ( v53 )
    {
      if ( v53->max_length <= 1 )
        goto LABEL_87;
      alreadyGetInfo = (__int64)v53->m_Items[1];
      if ( alreadyGetInfo )
      {
        alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
        if ( alreadyGetInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0LL);
          if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
          v54.fields._ticks = System_TimeSpan__FromMinutes(1.0, 0LL).fields._ticks;
          endedAt = v28->fields.endedAt;
          ticks = v54.fields._ticks;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          dateData = NetworkManager__getServerDateTime_38078100(endedAt, 0LL).fields._dateData;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v96.fields._dateData = dateData;
          v102.fields._ticks = ticks;
          v95 = System_DateTime__op_Addition(v96, v102, 0LL).fields._dateData;
          v58 = (System_Object_array *)sub_1B64170(object___TypeInfo, 5LL);
          v97.fields._dateData = (uint64_t)&v95;
          Year = System_DateTime__get_Year(v97, 0LL);
          alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Year);
          if ( v58 )
          {
            v61 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1B64204(alreadyGetInfo, v58->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( !v58->max_length )
              goto LABEL_87;
            v58->m_Items[0] = v61;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)v58->m_Items, (int32_t)v61, v59, v60);
            v98.fields._dateData = (uint64_t)&v95;
            Month = System_DateTime__get_Month(v98, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Month);
            v64 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1B64204(alreadyGetInfo, v58->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v58->max_length <= 1 )
              goto LABEL_87;
            v58->m_Items[1] = v64;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->m_Items[1], (int32_t)v64, v62, v63);
            v99.fields._dateData = (uint64_t)&v95;
            Day = System_DateTime__get_Day(v99, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Day);
            v67 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1B64204(alreadyGetInfo, v58->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v58->max_length <= 2 )
              goto LABEL_87;
            v58->m_Items[2] = v67;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->m_Items[2], (int32_t)v67, v65, v66);
            v100.fields._dateData = (uint64_t)&v95;
            Hour = System_DateTime__get_Hour(v100, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
            v70 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1B64204(alreadyGetInfo, v58->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v58->max_length <= 3 )
              goto LABEL_87;
            v58->m_Items[3] = v70;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->m_Items[3], (int32_t)v70, v68, v69);
            v101.fields._dateData = (uint64_t)&v95;
            Minute = System_DateTime__get_Minute(v101, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
            v73 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1B64204(alreadyGetInfo, v58->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_89:
                v81 = sub_1B64348(alreadyGetInfo);
                sub_1B641F0(v81, 0LL);
              }
            }
            if ( v58->max_length <= 4 )
LABEL_87:
              sub_1B6432C(alreadyGetInfo, v31);
            v58->m_Items[4] = v73;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->m_Items[4], (int32_t)v73, v71, v72);
            v74 = System_String__Format_61389904((System_String_o *)StringLiteral_24960/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v58, 0LL);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            v76 = (Il2CppObject *)v74;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v77 = LocalizationManager__Get((System_String_o *)StringLiteral_3879/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
            v78 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
            alreadyGetInfo = (__int64)System_String__Format_61389768(v77, v78, v76, 0LL);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
              alreadyGetInfo = (__int64)this->fields.spendQpLb;
              if ( alreadyGetInfo )
              {
                v105.fields.r = 0.32941;
                v105.fields.a = 1.0;
                v105.fields.g = 0.32941;
                v105.fields.b = 0.32941;
                UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v105, 0LL);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v88,
                    (System_Collections_Generic_List_object__o *)alreadyGetInfo,
                    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  v94 = v88;
                  while ( 1 )
                  {
                    v79 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v94,
                            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v79 )
                      break;
                    current = v94.fields._current;
                    if ( !v94.fields._current )
                      sub_1B64324(v79);
                    LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v94.fields._current, 1, 0LL);
                    LOBYTE(current[6].klass) = 1;
                  }
LABEL_106:
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v94,
                    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
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
  startedAt = v28->fields.startedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v28, 0, 0LL) )
  {
    v83 = this->fields.alreadyGetLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_3878/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
    v85 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
    alreadyGetInfo = (__int64)System_String__Format(v84, v85, 0LL);
    if ( v83 )
    {
      UILabel__set_text(v83, (System_String_o *)alreadyGetInfo, 0LL);
      alreadyGetInfo = (__int64)this->fields.spendQpLb;
      if ( alreadyGetInfo )
      {
        v106.fields.r = 1.0;
        v106.fields.g = 1.0;
        v106.fields.b = 1.0;
        v106.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v106, 0LL);
        if ( this->fields.haveQpVal < this->fields.spendQpVal )
        {
          alreadyGetInfo = (__int64)this->fields.spendQpLb;
          if ( !alreadyGetInfo )
            goto LABEL_108;
          v107.fields.r = 1.0;
          v107.fields.g = 0.0;
          v107.fields.b = 0.0;
          v107.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v107, 0LL);
        }
        alreadyGetInfo = (__int64)this->fields.itemInfoList;
        if ( alreadyGetInfo )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v88,
            (System_Collections_Generic_List_object__o *)alreadyGetInfo,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
          v94 = v88;
          while ( 1 )
          {
            v86 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v94,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
            if ( !v86 )
              break;
            v87 = v94.fields._current;
            if ( !v94.fields._current )
              sub_1B64324(v86);
            LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v94.fields._current, 0, 0LL);
            LOBYTE(v87[6].klass) = 1;
          }
          goto LABEL_106;
        }
      }
    }
LABEL_108:
    sub_1B64324(alreadyGetInfo);
  }
}


void __fastcall ServantCostumeControl__ResetEventCombineCostume(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventCombineCostumeEnt, 0, v2, v3);
  this->fields.isShortEventItem = 0;
}


void __fastcall ServantCostumeControl__ResetInit(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3

  this->fields.baseSvt = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSvt, 0, v2, v3);
  this->fields.baseSvtCostume = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSvtCostume, 0, v5, v6);
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventCombineCostumeEnt, 0, v7, v8);
}


void __fastcall ServantCostumeControl__SetBaseSvtCardImg(
        ServantCostumeControl_o *this,
        UserServantEntity_o *userSvtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  ServantLimitImageMaster_o *v14; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v17; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_37591604; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49FFD62 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtData);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FFD62 = 1;
  }
  this->fields.baseSvt = userSvtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSvt, (int32_t)userSvtData, (int32_t)method, v3);
  if ( !userSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtData, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v13 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  v14 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v22, 0LL);
  if ( !v14 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v14,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v17 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37591604 = CharaGraphManager__CreateTexturePrefab_37591604(
                               this->fields.charaGraphBase,
                               userSvtData,
                               v17,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_37591604;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph,
      (int32_t)TexturePrefab_37591604,
      v20,
      v21);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1B64324(Instance);
  UICharaGraphTexture__SetCharacter_40502984((UICharaGraphTexture_o *)Instance, userSvtData, v17, 0LL, 0, 0LL);
}


void __fastcall ServantCostumeControl__SetExeBtnState(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *executeButton; // x0
  __int64 v4; // x1
  EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  UnityEngine_GameObject_o *v6; // x19

  executeButton = (UnityEngine_Component_o *)this->fields.executeButton;
  if ( !executeButton )
    goto LABEL_11;
  ((void (__fastcall *)(UnityEngine_Component_o *, bool, void *))executeButton->klass[1]._1.namespaze)(
    executeButton,
    this->fields.isCanCombine,
    executeButton->klass[1]._1.byval_arg.data);
  executeButton = (UnityEngine_Component_o *)this->fields.executeButton;
  if ( !executeButton )
    goto LABEL_11;
  v4 = this->fields.isCanCombine ? 0LL : 3LL;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))executeButton->klass[1]._1.implementedInterfaces)(
    executeButton,
    v4,
    1LL,
    executeButton->klass[1]._1.interfaceOffsets);
  executeButton = (UnityEngine_Component_o *)this->fields.eventCombineCostumeBalloon;
  if ( !executeButton )
    goto LABEL_11;
  executeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(executeButton, 0LL);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  v6 = (UnityEngine_GameObject_o *)executeButton;
  if ( eventCombineCostumeEnt )
  {
    executeButton = (UnityEngine_Component_o *)EventCombineCostumeEntity__IsShortEventItem(eventCombineCostumeEnt, 0LL);
    LOBYTE(eventCombineCostumeEnt) = (unsigned __int8)executeButton ^ 1;
  }
  if ( !v6 )
LABEL_11:
    sub_1B64324(executeButton);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0LL);
}


void __fastcall ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  UILabel_o *haveQpLb; // x20

  if ( (byte_49FFD64 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, method);
    byte_49FFD64 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62180668((int)this + 308, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B64324(SelfUserGame);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__SetStateInfoMsg(
        ServantCostumeControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *v13; // x0
  UIWidget_o *detailInfoLb; // x21
  System_String_o *v15; // x21
  __int64 *v16; // x8
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFD67 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_1B640C8(&ServantCostumeControl_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_12056/*"SHORT_RELEASE_COND_MSG"*/, v6);
    sub_1B640C8(&StringLiteral_3872/*"COSTUME_EXE_MSG"*/, v7);
    sub_1B640C8(&StringLiteral_7332/*"INFO_MSG_SELECT_COSTUME"*/, v8);
    sub_1B640C8(&StringLiteral_12054/*"SHORT_ITEM_INFO_MSG"*/, v9);
    sub_1B640C8(&StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    sub_1B640C8(&StringLiteral_7327/*"INFO_MSG_COSTUME_SELECT_BASE"*/, v12);
    byte_49FFD67 = 1;
  }
  v13 = ServantCostumeControl_TypeInfo;
  detailInfoLb = (UIWidget_o *)this->fields.detailInfoLb;
  if ( !ServantCostumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeControl_TypeInfo);
    v13 = ServantCostumeControl_TypeInfo;
  }
  if ( !detailInfoLb )
LABEL_36:
    sub_1B64324(v13);
  UIWidget__set_color(detailInfoLb, *(UnityEngine_Color_o *)*((_QWORD *)v13 + 23), 0LL);
  if ( state == 3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_7332/*"INFO_MSG_SELECT_COSTUME"*/;
    goto LABEL_33;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state != 2 )
  {
    if ( state )
      goto LABEL_34;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_7327/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_33;
  }
  if ( this->fields.isCanCombine )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_3872/*"COSTUME_EXE_MSG"*/;
LABEL_33:
    v15 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
    goto LABEL_34;
  }
  v13 = this->fields.detailInfoLb;
  if ( !v13 )
    goto LABEL_36;
  v17.fields.r = 1.0;
  v17.fields.g = 1.0;
  v17.fields.b = 1.0;
  v17.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v13, v17, 0LL);
  if ( this->fields.isShortQp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_12056/*"SHORT_RELEASE_COND_MSG"*/;
    goto LABEL_33;
  }
LABEL_34:
  v13 = this->fields.detailInfoLb;
  if ( !v13 )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)v13, v15, 0LL);
}


void __fastcall ServantCostumeControl__SetSvtCostumeCombineData(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v16; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o **p_itemInfoList; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  struct UserServantEntity_o *baseSvt; // x8
  __int64 v26; // x22
  __int64 v27; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x21
  __int64 v30; // x1
  struct System_Int32_array *itemIds; // x23
  int max_length; // w22
  struct System_Int32_array *itemNums; // x28
  il2cpp_array_size_t i; // w27
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v36; // x21
  char *v37; // x26
  int32_t v38; // w2
  int32_t *v39; // x26
  int32_t v40; // t1
  int32_t *v41; // x24
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  bool v48; // w23
  int32_t v49; // w21
  struct ServantCostumeEntity_o *v50; // x8
  struct ServantCostumeEntity_o *v51; // x8
  struct UserServantEntity_o *v52; // x8
  UISprite_o *costumeFaceIcon; // x20
  __int64 v54; // x21
  __int64 v55; // x22
  struct ServantCostumeEntity_o *v56; // x8
  int32_t v57; // w21
  int32_t id; // w22
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v60; // x8
  int v61; // w22
  int v62; // w23
  Il2CppObject *v63; // x20
  struct EventCombineCostumeEntity_o *v64; // x8
  struct System_Int32_array *v65; // x8
  struct EventCombineCostumeEntity_o *v66; // x8
  struct System_Int32_array *v67; // x10
  struct UserServantEntity_o *v68; // x8
  ServantCostumeReleaseMaster_o *v69; // x20
  ServantCostumeEntity_o *v70; // x21
  __int64 v71; // x22
  __int64 v72; // x23
  struct UserServantEntity_o *v73; // x8
  __int128 v74; // q1
  int32_t v75; // w22
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v77; // x8
  struct EventCombineCostumeEntity_o *v78; // x8
  EventEntity_o *v79; // x20
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *v84; // [xsp+40h] [xbp-70h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFD65 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineCostumeMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v16);
    byte_49FFD65 = 1;
  }
  v84 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = &this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemInfoList, (int32_t)v21, v23, v24);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_110;
  v27 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v27;
  *(_QWORD *)&v86.fields.fakeValue = v26;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v86, 0LL);
  baseSvtCostume = this->fields.baseSvtCostume;
  if ( !baseSvtCostume || !MasterData_object )
    goto LABEL_110;
  Instance = CombineCostumeMaster__TryGetEntity(
               (CombineCostumeMaster_o *)MasterData_object,
               &entity,
               Instance,
               baseSvtCostume->fields.id,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_110;
    spendQpLb = this->fields.spendQpLb;
    this->fields.spendQpVal = entity->fields.qp;
    Instance = (int64_t)System_Int32__ToString_62180668((int)this + 312, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
    if ( !spendQpLb )
      goto LABEL_110;
    UILabel__set_text(spendQpLb, (System_String_o *)Instance, 0LL);
    if ( !entity )
      goto LABEL_110;
    itemIds = entity->fields.itemIds;
    if ( !itemIds )
      goto LABEL_110;
    max_length = itemIds->max_length;
    if ( max_length >= 1 )
    {
      itemNums = entity->fields.itemNums;
      for ( i = 0; i != max_length; ++i )
      {
        itemInfos = this->fields.itemInfos;
        if ( !itemInfos )
          goto LABEL_110;
        if ( i >= itemInfos->max_length )
          goto LABEL_111;
        v36 = itemInfos->m_Items[i];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( i >= itemIds->max_length )
          goto LABEL_111;
        v37 = (char *)itemIds + 4 * (int)i;
        v40 = *((_DWORD *)v37 + 8);
        v39 = (int32_t *)(v37 + 32);
        v38 = v40;
        if ( !itemNums )
          goto LABEL_110;
        if ( i >= itemNums->max_length )
          goto LABEL_111;
        if ( !v36 )
          goto LABEL_110;
        v41 = &itemNums->m_Items[i + 1];
        LimitCntUpItemComponent__setLimitUpItemInfo(v36, Instance, v38, *v41, 0LL);
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_110;
        v44 = *(_QWORD *)(Instance + 16);
        v45 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v44 )
          goto LABEL_110;
        v46 = *(int *)(Instance + 24);
        if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v36,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = v44 + 8 * v46;
          *(_DWORD *)(Instance + 24) = v46 + 1;
          *(_QWORD *)(v47 + 32) = v36;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 32), (int32_t)v36, v42, v43);
        }
        LimitCntUpItemComponent__SetMaskSprite(v36, 0, 0LL);
        v36->fields.disableOpenItemDetailDialog = 0;
        if ( i >= itemIds->max_length || i >= itemNums->max_length )
LABEL_111:
          sub_1B6432C(Instance, v30);
        CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, *v39, *v41, 0LL);
      }
      CombineMenuControl__SortCombineItemInfoList((CombineMenuControl_o *)this, 0LL);
      CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
      v48 = 0;
      v49 = 0;
      while ( 1 )
      {
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_110;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)Instance,
                              v49,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( !Instance )
          goto LABEL_110;
        if ( *(_BYTE *)(Instance + 112) )
        {
          v48 = ++v49 >= max_length;
          if ( max_length != v49 )
            continue;
        }
        goto LABEL_40;
      }
    }
    CombineMenuControl__SortCombineItemInfoList((CombineMenuControl_o *)this, 0LL);
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
    v48 = 1;
LABEL_40:
    v50 = this->fields.baseSvtCostume;
    if ( !v50 )
      goto LABEL_110;
    Instance = (int64_t)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_110;
    UILabel__set_text((UILabel_o *)Instance, v50->fields.name, 0LL);
    v51 = this->fields.baseSvtCostume;
    if ( !v51 )
      goto LABEL_110;
    Instance = (int64_t)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_110;
    UILabel__set_text((UILabel_o *)Instance, v51->fields.releaseInfo, 0LL);
    v52 = this->fields.baseSvt;
    if ( !v52 )
      goto LABEL_110;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    v55 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
    v54 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v87.fields.currentCryptoKey = v55;
    *(_QWORD *)&v87.fields.fakeValue = v54;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v87, 0LL);
    v56 = this->fields.baseSvtCostume;
    if ( !v56 )
      goto LABEL_110;
    v57 = Instance;
    id = v56->fields.id;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceImage(costumeFaceIcon, v57, id, 0LL);
    Instance = (int64_t)this->fields.costumeFaceIcon;
    if ( !Instance )
      goto LABEL_110;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.costumeFaceIconFrame;
    if ( !Instance )
      goto LABEL_110;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_110;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  else
  {
    v48 = 0;
  }
  Instance = (int64_t)this->fields.spendQpLb;
  if ( !Instance )
    goto LABEL_110;
  v89.fields.r = 1.0;
  v89.fields.g = 1.0;
  v89.fields.b = 1.0;
  v89.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v89, 0LL);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    Instance = (int64_t)this->fields.spendQpLb;
    if ( !Instance )
      goto LABEL_110;
    v90.fields.r = 1.0;
    v90.fields.g = 0.0;
    v90.fields.b = 0.0;
    v90.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v90, 0LL);
    this->fields.isShortQp = 1;
  }
  if ( !v48 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v60 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v60 )
      goto LABEL_110;
    v61 = -1;
    while ( 1 )
    {
      v62 = v61 + 1;
      if ( v61 + 1 >= (signed int)v60->max_length )
        break;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      v63 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v64 = this->fields.eventCombineCostumeEnt;
      if ( !v64 )
        goto LABEL_110;
      v65 = v64->fields.itemIds;
      if ( !v65 )
        goto LABEL_110;
      if ( v62 >= v65->max_length )
        goto LABEL_111;
      if ( !v63 )
        goto LABEL_110;
      Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)v63, &v84, Instance, v65->m_Items[v62 + 1], 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_80;
      if ( !v84 )
        goto LABEL_110;
      v66 = this->fields.eventCombineCostumeEnt;
      if ( !v66 )
        goto LABEL_110;
      v67 = v66->fields.itemNums;
      if ( !v67 )
        goto LABEL_110;
      if ( ++v61 >= v67->max_length )
        goto LABEL_111;
      if ( v84->fields.num < v67->m_Items[v62 + 1] )
      {
LABEL_80:
        this->fields.isShortEventItem = 1;
        break;
      }
      v60 = v66->fields.itemIds;
      if ( !v60 )
        goto LABEL_110;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v68 = this->fields.baseSvt;
  if ( !v68 )
    goto LABEL_110;
  v69 = (ServantCostumeReleaseMaster_o *)Instance;
  v70 = this->fields.baseSvtCostume;
  v72 = *(_QWORD *)&v68->fields.svtId.fields.currentCryptoKey;
  v71 = *(_QWORD *)&v68->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v88.fields.currentCryptoKey = v72;
  *(_QWORD *)&v88.fields.fakeValue = v71;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v88, 0LL);
  v73 = this->fields.baseSvt;
  if ( !v73 )
    goto LABEL_110;
  v74 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
  v75 = Instance;
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v74;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v82 = v83;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v82, 0LL);
  if ( !v69 )
LABEL_110:
    sub_1B64324(Instance);
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v69, v70, v75, Instance, 0LL);
  v77 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v77 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_98;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  v78 = this->fields.eventCombineCostumeEnt;
  if ( !v78 )
    goto LABEL_110;
  if ( !Instance )
    goto LABEL_110;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        v78->fields.eventId,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_110;
  v79 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_107;
  }
  startedAt = v79->fields.startedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v79, 0, 0LL) )
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


void __fastcall ServantCostumeControl__ShowCostumeCombineInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct CostumeListViewManager_o *costumeListInfo; // x8
  struct ServantCostumeEntity_o *baseSvtCostume; // x1
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x21
  struct EventCombineCostumeEntity_o **p_eventCombineCostumeEnt; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v16; // x22
  __int64 v17; // x23
  __int64 v18; // x24
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  LimitCntUpItemComponent_o *eventItemIcon; // x21
  __int64 v23; // x1
  struct EventCombineCostumeEntity_o *v24; // x9
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  struct EventCombineCostumeEntity_o *v27; // x9
  struct System_Int32_array *v28; // x8
  struct System_Int32_array *v29; // x9
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_49FFD63 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFD63 = 1;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  costumeListInfo = this->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_30;
  baseSvtCostume = costumeListInfo->fields.baseSvtCostume;
  p_baseSvtCostume = &this->fields.baseSvtCostume;
  this->fields.baseSvtCostume = baseSvtCostume;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSvtCostume, (int32_t)baseSvtCostume, v7, v8);
  p_eventCombineCostumeEnt = &this->fields.eventCombineCostumeEnt;
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventCombineCostumeEnt, 0, v13, v14);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_30;
  v16 = (EventCombineCostumeMaster_o *)Instance;
  v18 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v18;
  *(_QWORD *)&v34.fields.fakeValue = v17;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v34, 0LL);
  if ( !*p_baseSvtCostume || !v16 )
    goto LABEL_30;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              v16,
                              Instance,
                              (*p_baseSvtCostume)->fields.id,
                              0LL);
  *p_eventCombineCostumeEnt = ListBySvtIdAndCostumeId;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventCombineCostumeEnt,
    (int32_t)ListBySvtIdAndCostumeId,
    v20,
    v21);
  if ( *p_eventCombineCostumeEnt )
  {
    eventItemIcon = this->fields.eventItemIcon;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    v24 = *p_eventCombineCostumeEnt;
    if ( *p_eventCombineCostumeEnt )
    {
      itemIds = v24->fields.itemIds;
      if ( itemIds )
      {
        if ( !itemIds->max_length )
          goto LABEL_31;
        itemNums = v24->fields.itemNums;
        if ( !itemNums )
          goto LABEL_30;
        if ( !itemNums->max_length )
          goto LABEL_31;
        if ( eventItemIcon )
        {
          LimitCntUpItemComponent__setLimitUpItemInfo(
            eventItemIcon,
            Instance,
            itemIds->m_Items[1],
            itemNums->m_Items[1],
            0LL);
          v27 = *p_eventCombineCostumeEnt;
          if ( *p_eventCombineCostumeEnt )
          {
            v28 = v27->fields.itemIds;
            if ( v28 )
            {
              if ( v28->max_length )
              {
                v29 = v27->fields.itemNums;
                if ( !v29 )
                  goto LABEL_30;
                if ( v29->max_length )
                {
                  CombineMenuControl__AddCombineItemInfo(
                    (CombineMenuControl_o *)this,
                    v28->m_Items[1],
                    v29->m_Items[1],
                    0LL);
                  goto LABEL_25;
                }
              }
LABEL_31:
              sub_1B6432C(Instance, v23);
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B64324(Instance);
  }
LABEL_25:
  Instance = (int64_t)this->fields.costumeListInfo;
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v30);
  ServantCostumeControl__SetSvtCostumeCombineData(this, v31);
  ServantCostumeControl__SetExeBtnState(this, v32);
  Instance = (int64_t)this->fields.costumeReleaseInfo;
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  ServantCostumeControl__RefreshEventCostumeInfo(this, v33);
}


void __fastcall ServantCostumeControl__ShowCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *costumeListInfo; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo
    || (costumeListInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(costumeListInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeListInfo, 1, 0LL),
        (costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo) == 0LL)
    || (CostumeListViewManager__CreateList((CostumeListViewManager_o *)costumeListInfo, this->fields.baseSvt, v4),
        (costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo) == 0LL) )
  {
    sub_1B64324(costumeListInfo);
  }
  CostumeListViewManager__SetMode_44729044((CostumeListViewManager_o *)costumeListInfo, 2, v5);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__57_0(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__RequestCombineCostume(combineRootComponent, 0, this->fields.itemInfoList, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__57_1(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCostumeControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  SetRarityDialogControl_o *exeCombineDlg; // x20
  System_String_o *name; // x21
  int32_t qp; // w22
  int32_t haveQpVal; // w23
  System_Action_o *v12; // x24
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x25

  v3 = this;
  if ( (byte_49FFD6F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v4);
    this = (ServantCostumeControl_o *)sub_1B640C8(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__, v5);
    byte_49FFD6F = 1;
  }
  baseSvtCostume = v3->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_7;
  eventCombineCostumeEnt = v3->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_7;
  exeCombineDlg = v3->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  qp = eventCombineCostumeEnt->fields.qp;
  haveQpVal = v3->fields.haveQpVal;
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v12, (Il2CppObject *)v3, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__, 0LL);
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)v3, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
LABEL_7:
    sub_1B64324(this);
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, qp, haveQpVal, v12, v15, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__57_2(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *eventItemIcon; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_49FFD70 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v5);
    byte_49FFD70 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v6 )
    goto LABEL_11;
  eventItemIcon = (Il2CppObject *)this->fields.eventItemIcon;
  items = v6->fields._items;
  v12 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_11;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      eventItemIcon,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v14[4] = (Il2CppClass *)eventItemIcon;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)eventItemIcon, v8, v9);
  }
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || (combineRootComponent = this->fields.combineRootComponent) == 0LL )
LABEL_11:
    sub_1B64324(combineRootComponent);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventCombineCostumeEnt->fields.eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)v6,
    0LL);
}


UserServantEntity_o *__fastcall ServantCostumeControl__getBaseSelectedSvt(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UserServantEntity_o *baseSvt; // x8
  __int128 v9; // q1
  UserServantEntity_o **p_baseSvt; // x20
  int64_t v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Instance; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]

  if ( (byte_49FFD66 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFD66 = 1;
  }
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v9 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v17.fields.fakeValue = v9;
    p_baseSvt = &this->fields.baseSvt;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v16 = v17;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL);
    *p_baseSvt = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSvt, 0, v12, v13);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (Il2CppObject **)&this->fields.baseSvt,
               v11,
               (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.baseSvt,
                   v11,
                   (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_1B64324(Instance);
  }
  return 0LL;
}


ServantCostumeEntity_o *__fastcall ServantCostumeControl__getBaseSvtCostume(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  return this->fields.baseSvtCostume;
}


bool __fastcall ServantCostumeControl__getExeBtnState(ServantCostumeControl_o *this, const MethodInfo *method)
{
  return this->fields.isCanCombine;
}


bool __fastcall ServantCostumeControl__get_isBaseSvtFromStorage(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  return this->fields._isBaseSvtFromStorage_k__BackingField;
}


void __fastcall ServantCostumeControl__set_isBaseSvtFromStorage(
        ServantCostumeControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isBaseSvtFromStorage_k__BackingField = value;
}


void __fastcall ServantCostumeControl___c__DisplayClass56_0___ctor(
        ServantCostumeControl___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl___c__DisplayClass56_0___CheckCondJoin_b__0(
        ServantCostumeControl___c__DisplayClass56_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FFD71 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_49FFD71 = 1;
  }
  if ( decide )
    ActionExtensions__Call(this->fields.callBack, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ServantCostumeControl___c__DisplayClass57_0___ctor(
        ServantCostumeControl___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl___c__DisplayClass57_0___OnClickExeCostumeCombine_b__3(
        ServantCostumeControl___c__DisplayClass57_0_o *this,
        bool useEventItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v19; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int32_t haveQpVal; // w23
  System_Action_o *v23; // x25
  Il2CppObject *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x19

  if ( (byte_49FFD72 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, useEventItem);
    sub_1B640C8(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v5);
    sub_1B640C8(&Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__, v6);
    sub_1B640C8(&ServantCostumeControl___c__DisplayClass57_1_TypeInfo, v7);
    byte_49FFD72 = 1;
  }
  v8 = sub_1B64314(ServantCostumeControl___c__DisplayClass57_1_TypeInfo, useEventItem, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11);
  *(_BYTE *)(v8 + 16) = useEventItem;
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
    sub_1B64324(v9);
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
  v19 = *p_qp;
  exeCombineDlg = _4__this->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = _4__this->fields.haveQpVal;
  v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__,
    0LL);
  v24 = (Il2CppObject *)this->fields.__4__this;
  v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(v27, v24, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
    goto LABEL_14;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v19, haveQpVal, v23, v27, 0LL);
}


void __fastcall ServantCostumeControl___c__DisplayClass57_1___ctor(
        ServantCostumeControl___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCostumeControl___c__DisplayClass57_1___OnClickExeCostumeCombine_b__4(
        ServantCostumeControl___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *itemInfoList; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct ServantCostumeControl___c__DisplayClass57_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  Il2CppObject *eventItemIcon; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  struct ServantCostumeControl___c__DisplayClass57_0_o *v19; // x8
  struct ServantCostumeControl_o *v20; // x8

  if ( (byte_49FFD73 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v5);
    byte_49FFD73 = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                                method,
                                                                v2);
  System_Collections_Generic_List_object____ctor(
    itemInfoList,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
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
    v16 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
    ++itemInfoList->fields._version;
    if ( !items )
      goto LABEL_19;
    size = itemInfoList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemInfoList,
        eventItemIcon,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      itemInfoList->fields._size = size + 1;
      v18[4] = (Il2CppClass *)eventItemIcon;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)eventItemIcon, v8, v9);
    }
  }
  else
  {
    eventId = 0;
  }
  v19 = this->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_19;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_19;
  combineRootComponent = v20->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_object__o *)v20->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_19:
    sub_1B64324(combineRootComponent);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0LL);
}