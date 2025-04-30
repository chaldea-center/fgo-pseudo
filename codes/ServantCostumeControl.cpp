void __fastcall ServantCostumeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A5230D & 1) == 0 )
  {
    sub_1B863B8(&ServantCostumeControl_TypeInfo, v1);
    byte_4A5230D = 1;
  }
  *ServantCostumeControl_TypeInfo->static_fields = (struct ServantCostumeControl_StaticFields)xmmword_BC4030;
}


void __fastcall ServantCostumeControl___ctor(ServantCostumeControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5230C & 1) == 0 )
  {
    sub_1B863B8(&CombineMenuControl_TypeInfo, method);
    byte_4A5230C = 1;
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
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  EventServantEntity_o *v19; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v21; // x21
  System_String_o *v22; // x23
  Il2CppObject *v23; // x1
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  System_String_o *v26; // x24
  CommonConfirmDialog_ClickDelegate_o *v27; // x25

  if ( (byte_4A52307 & 1) == 0 )
  {
    sub_1B863B8(&CommonConfirmDialog_ClickDelegate_TypeInfo, callBack);
    sub_1B863B8(&LocalizationManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&string_TypeInfo, v7);
    sub_1B863B8(&Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__, v8);
    sub_1B863B8(&ServantCostumeControl___c__DisplayClass56_0_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_3735/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, v10);
    sub_1B863B8(&StringLiteral_3734/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, v11);
    sub_1B863B8(&StringLiteral_3733/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, v12);
    sub_1B863B8(&StringLiteral_3736/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, v13);
    byte_4A52307 = 1;
  }
  v14 = sub_1B86604(ServantCostumeControl___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_17;
  *(_QWORD *)(v14 + 16) = callBack;
  sub_1B8635C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)callBack, v17, v18);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_17;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0LL);
  if ( !this->fields.baseSvt )
    goto LABEL_17;
  v19 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0LL);
  v23 = (Il2CppObject *)(v19 ? EventServantEntity__getEndTimeStr(v19, 0LL) : string_TypeInfo->static_fields->Empty);
  v24 = System_String__Format(v22, v23, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0LL);
  v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B86604(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)v14,
    Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__,
    0LL);
  if ( !Instance )
LABEL_17:
    sub_1B86614(baseSvt, v16);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v21,
    v24,
    v25,
    v26,
    v27,
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
    0LL);
}


void __fastcall ServantCostumeControl__CheckIsSelectBaseSvt(
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

  if ( (byte_4A52301 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4A52301 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v17, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v16, 0LL) )
      {
        ServantCostumeControl__InitDispInfo(this, v10);
        this->fields.baseSvtCostume = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSvtCostume, 0, v11, v12);
        this->fields.eventCombineCostumeEnt = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, 0, v13, v14);
      }
    }
  }
  else
  {
    ServantCostumeControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    ServantCostumeControl__ResetInit(this, v15);
  }
  this->fields.baseUserServantEntity = selectBase;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBase, (int32_t)method, v3);
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
        sub_1B8661C(this, method);
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
    sub_1B86614(this, method);
  }
}


void __fastcall ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_1B86614(0LL, method);
  ListViewManager__DestroyList(costumeListInfo, 0LL);
}


int32_t __fastcall ServantCostumeControl__GetTutorialOpenType(ServantCostumeControl_o *this, const MethodInfo *method)
{
  return 31;
}


void __fastcall ServantCostumeControl__InitBaseCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.baseSvtCostume = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSvtCostume, 0, v2, v3);
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, 0, v5, v6);
}


void __fastcall ServantCostumeControl__InitCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *costumeFaceIconFrame; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4A522FE & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_9084/*"N0"*/, v3);
    byte_4A522FE = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  ServantCostumeControl__InitDispInfo(this, v4);
  ServantCostumeControl__ClearItemList(this, v5);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  costumeFaceIconFrame = System_Int32__ToString_63159428((int)this + 312, (System_String_o *)StringLiteral_9084/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_14;
  UILabel__set_text(spendQpLb, costumeFaceIconFrame, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v9);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v10);
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
        ServantCostumeControl__SetExeBtnState(this, v12),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeListInfo) == 0LL)
    || (costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)costumeFaceIconFrame,
                                                    0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 0, 0LL),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL) )
  {
LABEL_14:
    sub_1B86614(costumeFaceIconFrame, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0LL);
  ServantCostumeControl__ResetInit(this, v13);
}


void __fastcall ServantCostumeControl__InitCombineCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *gameObject; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v12; // x1
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A52300 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_9084/*"N0"*/, v3);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A52300 = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  gameObject = System_Int32__ToString_63159428((int)this + 312, (System_String_o *)StringLiteral_9084/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_17;
  UILabel__set_text(spendQpLb, gameObject, 0LL);
  gameObject = (System_String_o *)this->fields.spendQpLb;
  if ( !gameObject )
    goto LABEL_17;
  v13.fields.r = 1.0;
  v13.fields.g = 1.0;
  v13.fields.b = 1.0;
  v13.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v13, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v8);
  ServantCostumeControl__ClearItemList(this, v9);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v10);
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
        ServantCostumeControl__SetExeBtnState(this, v12),
        (gameObject = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = (System_String_o *)this->fields.eventCombineCostumeBalloon) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
LABEL_17:
    sub_1B86614(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4A522FF & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A522FF = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1B86614(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)p_charaGraph, 0, v7, v8);
  }
}


void __fastcall ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4A5230B & 1) == 0 )
  {
    sub_1B863B8(&Method_ServantCostumeControl_OnClickBase__, method);
    byte_4A5230B = 1;
  }
  v3 = Method_ServantCostumeControl_OnClickBase__;
  if ( (*((_BYTE *)Method_ServantCostumeControl_OnClickBase__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_ServantCostumeControl_OnClickBase__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B86614(0LL, v5);
  CombineRootComponent__ShowBaseListSvtCostume(combineRootComponent, 0LL);
}


void __fastcall ServantCostumeControl__OnClickExeCostumeCombine(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  ServantCostumeControl_o *v2; // x19
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
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  EventEntity_o *v16; // x20
  SetRarityDialogControl_o *exeCombineDlg; // x20
  EventCombineCostumeEntity_o *v18; // x21
  System_Action_o *v19; // x22
  System_Action_o *v20; // x23
  struct ServantCostumeEntity_o *v21; // x8
  System_String_o *name; // x21
  SetRarityDialogControl_o *v23; // x20
  int32_t spendQpVal; // w22
  int32_t haveQpVal; // w23
  System_Action_o *v26; // x24
  int64_t startedAt; // x22
  __int64 v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v32; // x21
  __int64 v33; // x22
  __int64 v34; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  CombineCostumeEntity_o *Entity; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  SetRarityDialogControl_o *v39; // x21
  bool v40; // w22
  CombineCostumeEntity_o *v41; // x23
  EventCombineCostumeEntity_o *v42; // x24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v44; // x25
  System_Action_o *v45; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v2 = this;
  if ( (byte_4A52308 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, method);
    sub_1B863B8(&System_Action_TypeInfo, v3);
    sub_1B863B8(&Method_DataManager_GetMaster_CombineCostumeMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B863B8(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v10);
    sub_1B863B8(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__, v11);
    sub_1B863B8(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__, v12);
    sub_1B863B8(&Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__, v13);
    this = (ServantCostumeControl_o *)sub_1B863B8(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo, v14);
    byte_4A52308 = 1;
  }
  if ( v2->fields.eventCombineCostumeEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v2->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_33;
    if ( !this )
      goto LABEL_33;
    this = (ServantCostumeControl_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    v16 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0LL) )
    {
      exeCombineDlg = v2->fields.exeCombineDlg;
      v18 = v2->fields.eventCombineCostumeEnt;
      v19 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)v2,
        Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__,
        0LL);
      v20 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v18, v19, v20, 0LL);
        return;
      }
LABEL_33:
      sub_1B86614(this, method);
    }
    startedAt = v16->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v16, 0, 0LL) )
    {
      v28 = sub_1B86604(ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v28, 0LL);
      if ( !v28 )
        goto LABEL_33;
      *(_QWORD *)(v28 + 24) = v2;
      sub_1B8635C((CGThumbnailListItem_o *)(v28 + 24), (int32_t)v2, v29, v30);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v2->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_33;
      v32 = (CombineCostumeMaster_o *)this;
      v34 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v46.fields.currentCryptoKey = v34;
      *(_QWORD *)&v46.fields.fakeValue = v33;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v46, 0LL);
      baseSvtCostume = v2->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v32 )
        goto LABEL_33;
      Entity = CombineCostumeMaster__GetEntity(v32, (int32_t)this, baseSvtCostume->fields.id, 0LL);
      *(_QWORD *)(v28 + 16) = Entity;
      sub_1B8635C((CGThumbnailListItem_o *)(v28 + 16), (int32_t)Entity, v37, v38);
      v39 = v2->fields.exeCombineDlg;
      v40 = v2->fields.isShortNeedItem || v2->fields.isShortQp;
      v41 = *(CombineCostumeEntity_o **)(v28 + 16);
      v42 = v2->fields.eventCombineCostumeEnt;
      isShortEventItem = v2->fields.isShortEventItem;
      v44 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v44,
        (Il2CppObject *)v28,
        Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__,
        0LL);
      v45 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v45, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( !v39 )
        goto LABEL_33;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v39,
        v41,
        v42,
        v40,
        isShortEventItem,
        v44,
        v45,
        0LL);
    }
  }
  else
  {
    v21 = v2->fields.baseSvtCostume;
    if ( !v21 )
      goto LABEL_33;
    name = v21->fields.name;
    v23 = v2->fields.exeCombineDlg;
    spendQpVal = v2->fields.spendQpVal;
    haveQpVal = v2->fields.haveQpVal;
    v26 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__, 0LL);
    if ( !v23 )
      goto LABEL_33;
    SetRarityDialogControl__SetConfirmCombineCostume(v23, name, spendQpVal, haveQpVal, v26, 0LL, 0LL);
  }
}


void __fastcall ServantCostumeControl__RefreshAlreadyGetInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *alreadyGetInfo; // x0
  UILabel_o *alreadyGetLabel; // x20
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x21
  int max_length; // w8
  unsigned int v9; // w22
  Il2CppClass **v10; // x8
  UnityEngine_Component_o *v11; // x20
  struct UnityEngine_Transform_array *v12; // x8
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A52309 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B863B8(&LocalizationManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_3836/*"COSTUME_SELECT_SERVANT_MSG"*/, v4);
    byte_4A52309 = 1;
  }
  alreadyGetInfo = this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(alreadyGetInfo, 1, 0LL);
  alreadyGetLabel = this->fields.alreadyGetLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COSTUME_SELECT_SERVANT_MSG"*/, 0LL);
  if ( !alreadyGetLabel )
    goto LABEL_25;
  UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_25;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < max_length )
    {
      v10 = &alreadyGetLabelBgList->obj.klass + (int)v9;
      v11 = (UnityEngine_Component_o *)v10[4];
      if ( !v11 )
        goto LABEL_25;
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)v10[4],
                                                     (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0LL);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     v11,
                                                     (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v13.fields.x = 0.0;
      v13.fields.y = 0.0;
      v13.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v11, v13, 0LL);
      alreadyGetInfo = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(alreadyGetInfo, 0, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
LABEL_26:
    sub_1B8661C(alreadyGetInfo, method);
  }
LABEL_16:
  v12 = this->fields.alreadyGetLabelBgList;
  if ( !v12 )
    goto LABEL_25;
  if ( !v12->max_length )
    goto LABEL_26;
  alreadyGetInfo = (UnityEngine_GameObject_o *)v12->m_Items[0];
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
    sub_1B86614(alreadyGetInfo, method);
  }
  v14.fields.x = 0.0;
  v14.fields.y = -1.0;
  v14.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v14, 0LL);
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
  AssetData_o *eventCombineCostumeBalloonData; // x21
  struct EventCombineCostumeEntity_o *v32; // x8
  struct System_Int32_array *itemIds; // x8
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  Il2CppObject *Object_object__49610244; // x21
  int32_t generatedBalloonId; // w8
  struct EventCombineCostumeEntity_o *v38; // x9
  struct System_Int32_array *v39; // x9
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v42; // x2
  struct EventCombineCostumeEntity_o *v43; // x8
  struct System_Int32_array *v44; // x8
  struct EventCombineCostumeEntity_o *v45; // x8
  struct System_Int32_array *v46; // x8
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x22
  int max_length; // w8
  unsigned int v49; // w23
  Il2CppClass **v50; // x8
  UnityEngine_Component_o *v51; // x21
  struct UnityEngine_Transform_array *v52; // x8
  System_TimeSpan_o v53; // x0
  int64_t endedAt; // x22
  int64_t ticks; // x21
  uint64_t dateData; // x22
  System_Object_array *v57; // x21
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  Il2CppObject *v63; // x22
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x22
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  Il2CppObject *v75; // x22
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  Il2CppObject *v81; // x22
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  Il2CppObject *v87; // x22
  System_String_o *v88; // x0
  UILabel_o *alreadyGetLabel; // x21
  Il2CppObject *v90; // x22
  System_String_o *v91; // x23
  Il2CppObject *v92; // x0
  _BOOL8 v93; // x0
  __int64 v94; // x1
  Il2CppObject *current; // x21
  __int64 v96; // x0
  int64_t startedAt; // x21
  UILabel_o *v98; // x20
  System_String_o *v99; // x21
  Il2CppObject *v100; // x0
  _BOOL8 v101; // x0
  __int64 v102; // x1
  Il2CppObject *v103; // x19
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+0h] [xbp-90h] BYREF
  int32_t Minute; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t Hour; // [xsp+20h] [xbp-70h] BYREF
  int32_t Day; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t Month; // [xsp+28h] [xbp-68h] BYREF
  int32_t Year; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+30h] [xbp-60h] BYREF
  uint64_t v111; // [xsp+58h] [xbp-38h] BYREF
  System_DateTime_o v112; // 0:x0.8
  System_DateTime_o v113; // 0:x0.8
  System_DateTime_o v114; // 0:x0.8
  System_DateTime_o v115; // 0:x0.8
  System_DateTime_o v116; // 0:x0.8
  System_DateTime_o v117; // 0:x0.8
  System_TimeSpan_o v118; // 0:x1.8
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v122; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v123; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5230A & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, method);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B863B8(&System_DateTime_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__, v9);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___, v10);
    sub_1B863B8(&int_TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__, v12);
    sub_1B863B8(&LocalizationManager_TypeInfo, v13);
    sub_1B863B8(&NetworkManager_TypeInfo, v14);
    sub_1B863B8(&object___TypeInfo, v15);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B863B8(&System_TimeSpan_TypeInfo, v18);
    sub_1B863B8(&StringLiteral_12500/*"ServantCostumeEventBalloon_"*/, v19);
    sub_1B863B8(&StringLiteral_3835/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v20);
    sub_1B863B8(&StringLiteral_3834/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v21);
    sub_1B863B8(&StringLiteral_24892/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v22);
    sub_1B863B8(&StringLiteral_5498/*"EVENT_COMBINE_COSTUME_ITEM"*/, v23);
    byte_4A5230A = 1;
  }
  v111 = 0LL;
  memset(&v110, 0, sizeof(v110));
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0LL);
  if ( !this->fields.eventCombineCostumeEnt )
    return;
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_108;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_108;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v28 = (EventEntity_o *)Entity;
  ServantCostumeControl__SetSvtCostumeCombineData(this, v27);
  ServantCostumeControl__SetExeBtnState(this, v29);
  ServantCostumeControl__SetStateInfoMsg(this, 2, v30);
  eventCombineCostumeBalloonData = this->fields.eventCombineCostumeBalloonData;
  if ( eventCombineCostumeBalloonData )
  {
    v32 = this->fields.eventCombineCostumeEnt;
    if ( !v32 )
      goto LABEL_108;
    itemIds = v32->fields.itemIds;
    if ( !itemIds )
      goto LABEL_108;
    if ( !itemIds->max_length )
      goto LABEL_87;
    v34 = System_Int32__ToString((int)itemIds + 32, 0LL);
    v35 = System_String__Concat_61645176((System_String_o *)StringLiteral_12500/*"ServantCostumeEventBalloon_"*/, v34, 0LL);
    Object_object__49610244 = AssetData__GetObject_object__49610244(
                                eventCombineCostumeBalloonData,
                                v35,
                                (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    alreadyGetInfo = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49610244, 0LL, 0LL);
    if ( (alreadyGetInfo & 1) != 0 )
    {
      generatedBalloonId = this->fields.generatedBalloonId;
      if ( generatedBalloonId )
      {
        v38 = this->fields.eventCombineCostumeEnt;
        if ( !v38 )
          goto LABEL_108;
        v39 = v38->fields.itemIds;
        if ( !v39 )
          goto LABEL_108;
        if ( !v39->max_length )
          goto LABEL_87;
        if ( generatedBalloonId == v39->m_Items[1] )
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
        UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
        this->fields.generatedBalloonId = 0;
      }
      alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
      alreadyGetInfo = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  (UnityEngine_GameObject_o *)Object_object__49610244,
                                  transform,
                                  0LL,
                                  0LL);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)alreadyGetInfo,
                                  (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
      v43 = this->fields.eventCombineCostumeEnt;
      if ( !v43 )
        goto LABEL_108;
      v44 = v43->fields.itemIds;
      if ( !v44 )
        goto LABEL_108;
      if ( !v44->max_length )
        goto LABEL_87;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      ServantCostumeEventBalloon__Set((ServantCostumeEventBalloon_o *)alreadyGetInfo, v44->m_Items[1], v42);
      v45 = this->fields.eventCombineCostumeEnt;
      if ( !v45 )
        goto LABEL_108;
      v46 = v45->fields.itemIds;
      if ( !v46 )
        goto LABEL_108;
      if ( !v46->max_length )
        goto LABEL_87;
      this->fields.generatedBalloonId = v46->m_Items[1];
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
    v49 = 0;
    while ( v49 < max_length )
    {
      v50 = &alreadyGetLabelBgList->obj.klass + (int)v49;
      v51 = (UnityEngine_Component_o *)v50[4];
      if ( !v51 )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)v50[4],
                                  (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v51,
                                  (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v119.fields.x = 0.0;
      v119.fields.y = -15.0;
      v119.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v51, v119, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject(v51, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v49 >= max_length )
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
  v120.fields.x = 0.0;
  v120.fields.y = -16.0;
  v120.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v120, 0LL);
  alreadyGetInfo = EventEntity__IsOpen(v28, 0, 0LL);
  if ( (alreadyGetInfo & 1) != 0 )
  {
    v52 = this->fields.alreadyGetLabelBgList;
    if ( v52 )
    {
      if ( v52->max_length <= 1 )
        goto LABEL_87;
      alreadyGetInfo = (__int64)v52->m_Items[1];
      if ( alreadyGetInfo )
      {
        alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
        if ( alreadyGetInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0LL);
          if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
          v53.fields._ticks = System_TimeSpan__FromMinutes(1.0, 0LL).fields._ticks;
          endedAt = v28->fields.endedAt;
          ticks = v53.fields._ticks;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          dateData = NetworkManager__getServerDateTime_39522968(endedAt, 0LL).fields._dateData;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v112.fields._dateData = dateData;
          v118.fields._ticks = ticks;
          v111 = System_DateTime__op_Addition(v112, v118, 0LL).fields._dateData;
          v57 = (System_Object_array *)sub_1B86460(object___TypeInfo, 5LL);
          v113.fields._dateData = (uint64_t)&v111;
          Year = System_DateTime__get_Year(v113, 0LL);
          alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Year, v58, v59, v60);
          if ( v57 )
          {
            v63 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1B864F4(alreadyGetInfo, v57->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( !v57->max_length )
              goto LABEL_87;
            v57->m_Items[0] = v63;
            sub_1B8635C((CGThumbnailListItem_o *)v57->m_Items, (int32_t)v63, v61, v62);
            v114.fields._dateData = (uint64_t)&v111;
            Month = System_DateTime__get_Month(v114, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Month, v64, v65, v66);
            v69 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1B864F4(alreadyGetInfo, v57->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v57->max_length <= 1 )
              goto LABEL_87;
            v57->m_Items[1] = v69;
            sub_1B8635C((CGThumbnailListItem_o *)&v57->m_Items[1], (int32_t)v69, v67, v68);
            v115.fields._dateData = (uint64_t)&v111;
            Day = System_DateTime__get_Day(v115, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Day, v70, v71, v72);
            v75 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1B864F4(alreadyGetInfo, v57->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v57->max_length <= 2 )
              goto LABEL_87;
            v57->m_Items[2] = v75;
            sub_1B8635C((CGThumbnailListItem_o *)&v57->m_Items[2], (int32_t)v75, v73, v74);
            v116.fields._dateData = (uint64_t)&v111;
            Hour = System_DateTime__get_Hour(v116, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v76, v77, v78);
            v81 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1B864F4(alreadyGetInfo, v57->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v57->max_length <= 3 )
              goto LABEL_87;
            v57->m_Items[3] = v81;
            sub_1B8635C((CGThumbnailListItem_o *)&v57->m_Items[3], (int32_t)v81, v79, v80);
            v117.fields._dateData = (uint64_t)&v111;
            Minute = System_DateTime__get_Minute(v117, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v82, v83, v84);
            v87 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1B864F4(alreadyGetInfo, v57->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_89:
                v96 = sub_1B86638(alreadyGetInfo);
                sub_1B864E0(v96, 0LL);
              }
            }
            if ( v57->max_length <= 4 )
LABEL_87:
              sub_1B8661C(alreadyGetInfo, method);
            v57->m_Items[4] = v87;
            sub_1B8635C((CGThumbnailListItem_o *)&v57->m_Items[4], (int32_t)v87, v85, v86);
            v88 = System_String__Format_61686604((System_String_o *)StringLiteral_24892/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v57, 0LL);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            v90 = (Il2CppObject *)v88;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v91 = LocalizationManager__Get((System_String_o *)StringLiteral_3835/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
            v92 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5498/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
            alreadyGetInfo = (__int64)System_String__Format_61686468(v91, v92, v90, 0LL);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
              alreadyGetInfo = (__int64)this->fields.spendQpLb;
              if ( alreadyGetInfo )
              {
                v121.fields.r = 0.32941;
                v121.fields.a = 1.0;
                v121.fields.g = 0.32941;
                v121.fields.b = 0.32941;
                UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v121, 0LL);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v104,
                    (System_Collections_Generic_List_object__o *)alreadyGetInfo,
                    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  v110 = v104;
                  while ( 1 )
                  {
                    v93 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v110,
                            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v93 )
                      break;
                    current = v110.fields._current;
                    if ( !v110.fields._current )
                      sub_1B86614(v93, v94);
                    LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v110.fields._current, 1, 0LL);
                    LOBYTE(current[6].klass) = 1;
                  }
LABEL_106:
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v110,
                    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
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
    v98 = this->fields.alreadyGetLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
    v100 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5498/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
    alreadyGetInfo = (__int64)System_String__Format(v99, v100, 0LL);
    if ( v98 )
    {
      UILabel__set_text(v98, (System_String_o *)alreadyGetInfo, 0LL);
      alreadyGetInfo = (__int64)this->fields.spendQpLb;
      if ( alreadyGetInfo )
      {
        v122.fields.r = 1.0;
        v122.fields.g = 1.0;
        v122.fields.b = 1.0;
        v122.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v122, 0LL);
        if ( this->fields.haveQpVal < this->fields.spendQpVal )
        {
          alreadyGetInfo = (__int64)this->fields.spendQpLb;
          if ( !alreadyGetInfo )
            goto LABEL_108;
          v123.fields.r = 1.0;
          v123.fields.g = 0.0;
          v123.fields.b = 0.0;
          v123.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v123, 0LL);
        }
        alreadyGetInfo = (__int64)this->fields.itemInfoList;
        if ( alreadyGetInfo )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v104,
            (System_Collections_Generic_List_object__o *)alreadyGetInfo,
            (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
          v110 = v104;
          while ( 1 )
          {
            v101 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v110,
                     (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
            if ( !v101 )
              break;
            v103 = v110.fields._current;
            if ( !v110.fields._current )
              sub_1B86614(v101, v102);
            LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v110.fields._current, 0, 0LL);
            LOBYTE(v103[6].klass) = 1;
          }
          goto LABEL_106;
        }
      }
    }
LABEL_108:
    sub_1B86614(alreadyGetInfo, method);
  }
}


void __fastcall ServantCostumeControl__ResetEventCombineCostume(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, 0, v2, v3);
  this->fields.isShortEventItem = 0;
}


void __fastcall ServantCostumeControl__ResetInit(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.baseSvt = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSvt, 0, v2, v3);
  this->fields.baseSvtCostume = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSvtCostume, 0, v5, v6);
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, 0, v7, v8);
}


void __fastcall ServantCostumeControl__SetBaseSvtCardImg(
        ServantCostumeControl_o *this,
        UserServantEntity_o *userSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UICharaGraphTexture_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.baseSvt = userSvtData;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSvt, (int32_t)userSvtData, (int32_t)method, v3);
  v6 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(ServantCostumeControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                         this,
                                         this->fields.charaGraph,
                                         userSvtData,
                                         this->klass[1]._1.image);
  this->fields.charaGraph = v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)v6, v7, v8);
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
    sub_1B86614(executeButton, method);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0LL);
}


void __fastcall ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4A52303 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_9084/*"N0"*/, method);
    byte_4A52303 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63159428((int)this + 308, (System_String_o *)StringLiteral_9084/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B86614(SelfUserGame, v4);
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

  if ( (byte_4A52306 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_1B863B8(&ServantCostumeControl_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_11981/*"SHORT_RELEASE_COND_MSG"*/, v6);
    sub_1B863B8(&StringLiteral_3827/*"COSTUME_EXE_MSG"*/, v7);
    sub_1B863B8(&StringLiteral_7309/*"INFO_MSG_SELECT_COSTUME"*/, v8);
    sub_1B863B8(&StringLiteral_11979/*"SHORT_ITEM_INFO_MSG"*/, v9);
    sub_1B863B8(&StringLiteral_11980/*"SHORT_QP_INFO_MSG"*/, v10);
    sub_1B863B8(&StringLiteral_1/*""*/, v11);
    sub_1B863B8(&StringLiteral_7304/*"INFO_MSG_COSTUME_SELECT_BASE"*/, v12);
    byte_4A52306 = 1;
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
    sub_1B86614(v13, *(_QWORD *)&state);
  UIWidget__set_color(detailInfoLb, *(UnityEngine_Color_o *)*((_QWORD *)v13 + 23), 0LL);
  if ( state == 3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_7309/*"INFO_MSG_SELECT_COSTUME"*/;
    goto LABEL_33;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state != 2 )
  {
    if ( state )
      goto LABEL_34;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_7304/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_33;
  }
  if ( this->fields.isCanCombine )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_3827/*"COSTUME_EXE_MSG"*/;
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
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11980/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11979/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_11981/*"SHORT_RELEASE_COND_MSG"*/;
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
  int64_t v18; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v20; // x20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o **p_itemInfoList; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UserServantEntity_o *baseSvt; // x8
  __int64 v25; // x20
  __int64 v26; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x22
  struct System_Int32_array *itemIds; // x26
  int max_length; // w23
  struct System_Int32_array *itemNums; // x28
  il2cpp_array_size_t i; // w27
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v34; // x22
  char *v35; // x24
  int32_t v36; // w2
  int32_t *v37; // x24
  int32_t v38; // t1
  int32_t *v39; // x25
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  bool v46; // w26
  int32_t v47; // w22
  struct ServantCostumeEntity_o *v48; // x8
  struct ServantCostumeEntity_o *v49; // x8
  struct UserServantEntity_o *v50; // x8
  UISprite_o *costumeFaceIcon; // x21
  __int64 v52; // x22
  __int64 v53; // x23
  struct ServantCostumeEntity_o *v54; // x8
  int32_t v55; // w22
  int32_t id; // w23
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v58; // x8
  int v59; // w23
  int v60; // w26
  Il2CppObject *v61; // x21
  struct EventCombineCostumeEntity_o *v62; // x8
  struct System_Int32_array *v63; // x8
  struct EventCombineCostumeEntity_o *v64; // x8
  struct System_Int32_array *v65; // x10
  struct UserServantEntity_o *v66; // x8
  ServantCostumeReleaseMaster_o *v67; // x21
  ServantCostumeEntity_o *v68; // x22
  __int64 v69; // x23
  __int64 v70; // x24
  struct UserServantEntity_o *v71; // x8
  __int128 v72; // q1
  int32_t v73; // w23
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v75; // x8
  struct EventCombineCostumeEntity_o *v76; // x8
  EventEntity_o *v77; // x21
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *v82; // [xsp+40h] [xbp-70h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A52304 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_CombineCostumeMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v10);
    sub_1B863B8(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v11);
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&StringLiteral_9084/*"N0"*/, v16);
    byte_4A52304 = 1;
  }
  v82 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = &this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v20;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.itemInfoList, (int32_t)v20, v22, v23);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_118;
  v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v84.fields.currentCryptoKey = v26;
  *(_QWORD *)&v84.fields.fakeValue = v25;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v84, 0LL);
  baseSvtCostume = this->fields.baseSvtCostume;
  if ( !baseSvtCostume || !MasterData_object )
    goto LABEL_118;
  Instance = CombineCostumeMaster__TryGetEntity(
               (CombineCostumeMaster_o *)MasterData_object,
               &entity,
               Instance,
               baseSvtCostume->fields.id,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_118;
    spendQpLb = this->fields.spendQpLb;
    this->fields.spendQpVal = entity->fields.qp;
    Instance = (int64_t)System_Int32__ToString_63159428((int)this + 312, (System_String_o *)StringLiteral_9084/*"N0"*/, 0LL);
    if ( !spendQpLb )
      goto LABEL_118;
    UILabel__set_text(spendQpLb, (System_String_o *)Instance, 0LL);
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
        if ( i >= itemInfos->max_length )
          goto LABEL_119;
        v34 = itemInfos->m_Items[i];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, v18);
          byte_4A48C25 = 1;
        }
        Instance = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (int64_t)NetworkManager_TypeInfo;
        }
        if ( i >= itemIds->max_length )
          goto LABEL_119;
        v35 = (char *)itemIds + 4 * (int)i;
        v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
        v38 = *((_DWORD *)v35 + 8);
        v37 = (int32_t *)(v35 + 32);
        v36 = v38;
        if ( !itemNums )
          goto LABEL_118;
        if ( i >= itemNums->max_length )
          goto LABEL_119;
        if ( !v34 )
          goto LABEL_118;
        v39 = &itemNums->m_Items[i + 1];
        LimitCntUpItemComponent__setLimitUpItemInfo(v34, v18, v36, *v39, 0LL);
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_118;
        v42 = *(_QWORD *)(Instance + 16);
        v43 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v42 )
          goto LABEL_118;
        v44 = *(int *)(Instance + 24);
        if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v34,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = v42 + 8 * v44;
          *(_DWORD *)(Instance + 24) = v44 + 1;
          *(_QWORD *)(v45 + 32) = v34;
          sub_1B8635C((CGThumbnailListItem_o *)(v45 + 32), (int32_t)v34, v40, v41);
        }
        LimitCntUpItemComponent__SetMaskSprite(v34, 0, 0LL);
        v34->fields.disableOpenItemDetailDialog = 0;
        if ( i >= itemIds->max_length || i >= itemNums->max_length )
LABEL_119:
          sub_1B8661C(Instance, v18);
        CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, *v37, *v39, 0LL);
      }
      v46 = 0;
      v47 = 0;
      while ( 1 )
      {
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_118;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)Instance,
                              v47,
                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( !Instance )
          goto LABEL_118;
        if ( *(_BYTE *)(Instance + 112) )
        {
          v46 = ++v47 >= max_length;
          if ( max_length != v47 )
            continue;
        }
        goto LABEL_44;
      }
    }
    v46 = max_length < 1;
LABEL_44:
    v48 = this->fields.baseSvtCostume;
    if ( !v48 )
      goto LABEL_118;
    Instance = (int64_t)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_118;
    UILabel__set_text((UILabel_o *)Instance, v48->fields.name, 0LL);
    v49 = this->fields.baseSvtCostume;
    if ( !v49 )
      goto LABEL_118;
    Instance = (int64_t)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_118;
    UILabel__set_text((UILabel_o *)Instance, v49->fields.releaseInfo, 0LL);
    v50 = this->fields.baseSvt;
    if ( !v50 )
      goto LABEL_118;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    v53 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
    v52 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v85.fields.currentCryptoKey = v53;
    *(_QWORD *)&v85.fields.fakeValue = v52;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v85, 0LL);
    v54 = this->fields.baseSvtCostume;
    if ( !v54 )
      goto LABEL_118;
    v55 = Instance;
    id = v54->fields.id;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceImage(costumeFaceIcon, v55, id, 1, 0LL, 0LL);
    Instance = (int64_t)this->fields.costumeFaceIcon;
    if ( !Instance )
      goto LABEL_118;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.costumeFaceIconFrame;
    if ( !Instance )
      goto LABEL_118;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_118;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  else
  {
    v46 = 0;
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
  Instance = (int64_t)this->fields.spendQpLb;
  if ( !Instance )
    goto LABEL_118;
  v87.fields.r = 1.0;
  v87.fields.g = 1.0;
  v87.fields.b = 1.0;
  v87.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v87, 0LL);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    Instance = (int64_t)this->fields.spendQpLb;
    if ( !Instance )
      goto LABEL_118;
    v88.fields.r = 1.0;
    v88.fields.g = 0.0;
    v88.fields.b = 0.0;
    v88.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v88, 0LL);
    this->fields.isShortQp = 1;
  }
  if ( !v46 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v58 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v58 )
      goto LABEL_118;
    v59 = -1;
    while ( 1 )
    {
      v60 = v59 + 1;
      if ( v59 + 1 >= (signed int)v58->max_length )
        break;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_118;
      v61 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v18);
        byte_4A48C25 = 1;
      }
      Instance = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (int64_t)NetworkManager_TypeInfo;
      }
      v62 = this->fields.eventCombineCostumeEnt;
      if ( !v62 )
        goto LABEL_118;
      v63 = v62->fields.itemIds;
      if ( !v63 )
        goto LABEL_118;
      if ( v60 >= v63->max_length )
        goto LABEL_119;
      if ( !v61 )
        goto LABEL_118;
      Instance = UserItemMaster__TryGetEntity(
                   (UserItemMaster_o *)v61,
                   &v82,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   v63->m_Items[v60 + 1],
                   0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_88;
      if ( !v82 )
        goto LABEL_118;
      v64 = this->fields.eventCombineCostumeEnt;
      if ( !v64 )
        goto LABEL_118;
      v65 = v64->fields.itemNums;
      if ( !v65 )
        goto LABEL_118;
      if ( ++v59 >= v65->max_length )
        goto LABEL_119;
      if ( v82->fields.num < v65->m_Items[v60 + 1] )
      {
LABEL_88:
        this->fields.isShortEventItem = 1;
        break;
      }
      v58 = v64->fields.itemIds;
      if ( !v58 )
        goto LABEL_118;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v66 = this->fields.baseSvt;
  if ( !v66 )
    goto LABEL_118;
  v67 = (ServantCostumeReleaseMaster_o *)Instance;
  v68 = this->fields.baseSvtCostume;
  v70 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
  v69 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v70;
  *(_QWORD *)&v86.fields.fakeValue = v69;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v86, 0LL);
  v71 = this->fields.baseSvt;
  if ( !v71 )
    goto LABEL_118;
  v72 = *(_OWORD *)&v71->fields.id.fields.fakeValue;
  v73 = Instance;
  *(_OWORD *)&v81.fields.currentCryptoKey = *(_OWORD *)&v71->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v81.fields.fakeValue = v72;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v80 = v81;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v80, 0LL);
  if ( !v67 )
LABEL_118:
    sub_1B86614(Instance, v18);
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v67, v68, v73, Instance, 0LL);
  v75 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v75 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_106;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
  v76 = this->fields.eventCombineCostumeEnt;
  if ( !v76 )
    goto LABEL_118;
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        v76->fields.eventId,
                        (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_118;
  v77 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_115;
  }
  startedAt = v77->fields.startedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v77, 0, 0LL) )
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


void __fastcall ServantCostumeControl__ShowCostumeCombineInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct CostumeListViewManager_o *costumeListInfo; // x8
  struct ServantCostumeEntity_o *baseSvtCostume; // x1
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x21
  struct EventCombineCostumeEntity_o **p_eventCombineCostumeEnt; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  LimitCntUpItemComponent_o *eventItemIcon; // x21
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

  if ( (byte_4A52302 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A52302 = 1;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  costumeListInfo = this->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_34;
  baseSvtCostume = costumeListInfo->fields.baseSvtCostume;
  p_baseSvtCostume = &this->fields.baseSvtCostume;
  this->fields.baseSvtCostume = baseSvtCostume;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSvtCostume, (int32_t)baseSvtCostume, v8, v9);
  p_eventCombineCostumeEnt = &this->fields.eventCombineCostumeEnt;
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, 0, v14, v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_34;
  v17 = (EventCombineCostumeMaster_o *)Instance;
  v19 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v19;
  *(_QWORD *)&v34.fields.fakeValue = v18;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v34, 0LL);
  if ( !*p_baseSvtCostume || !v17 )
    goto LABEL_34;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              v17,
                              (int32_t)Instance,
                              (*p_baseSvtCostume)->fields.id,
                              0LL);
  *p_eventCombineCostumeEnt = ListBySvtIdAndCostumeId;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventCombineCostumeEnt, (int32_t)ListBySvtIdAndCostumeId, v21, v22);
  if ( *p_eventCombineCostumeEnt )
  {
    eventItemIcon = this->fields.eventItemIcon;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v7);
      byte_4A48C25 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v24 = *p_eventCombineCostumeEnt;
    if ( *p_eventCombineCostumeEnt )
    {
      itemIds = v24->fields.itemIds;
      if ( itemIds )
      {
        if ( !itemIds->max_length )
          goto LABEL_35;
        itemNums = v24->fields.itemNums;
        if ( !itemNums )
          goto LABEL_34;
        if ( !itemNums->max_length )
          goto LABEL_35;
        if ( eventItemIcon )
        {
          LimitCntUpItemComponent__setLimitUpItemInfo(
            eventItemIcon,
            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
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
                  goto LABEL_34;
                if ( v29->max_length )
                {
                  CombineMenuControl__AddCombineItemInfo(
                    (CombineMenuControl_o *)this,
                    v28->m_Items[1],
                    v29->m_Items[1],
                    0LL);
                  goto LABEL_29;
                }
              }
LABEL_35:
              sub_1B8661C(Instance, v7);
            }
          }
        }
      }
    }
LABEL_34:
    sub_1B86614(Instance, v7);
  }
LABEL_29:
  Instance = (DataManager_o *)this->fields.costumeListInfo;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v30);
  ServantCostumeControl__SetSvtCostumeCombineData(this, v31);
  ServantCostumeControl__SetExeBtnState(this, v32);
  Instance = (DataManager_o *)this->fields.costumeReleaseInfo;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_34;
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
    sub_1B86614(costumeListInfo, method);
  }
  CostumeListViewManager__SetMode_46513744((CostumeListViewManager_o *)costumeListInfo, 2, v5);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__57_0(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B86614(0LL, method);
  CombineRootComponent__RequestCombineCostume(combineRootComponent, 0, this->fields.itemInfoList, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__57_1(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  ServantCostumeControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  SetRarityDialogControl_o *exeCombineDlg; // x20
  System_String_o *name; // x21
  int32_t qp; // w22
  int32_t haveQpVal; // w23
  System_Action_o *v11; // x24
  System_Action_o *v12; // x25

  v2 = this;
  if ( (byte_4A5230E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v3);
    this = (ServantCostumeControl_o *)sub_1B863B8(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__, v4);
    byte_4A5230E = 1;
  }
  baseSvtCostume = v2->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_7;
  eventCombineCostumeEnt = v2->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_7;
  exeCombineDlg = v2->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  qp = eventCombineCostumeEnt->fields.qp;
  haveQpVal = v2->fields.haveQpVal;
  v11 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__, 0LL);
  v12 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
LABEL_7:
    sub_1B86614(this, method);
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, qp, haveQpVal, v11, v12, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__57_2(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *eventItemIcon; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_4A5230F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v4);
    byte_4A5230F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v5 )
    goto LABEL_11;
  eventItemIcon = (Il2CppObject *)this->fields.eventItemIcon;
  items = v5->fields._items;
  v11 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_11;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      eventItemIcon,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v13[4] = (Il2CppClass *)eventItemIcon;
    sub_1B8635C((CGThumbnailListItem_o *)(v13 + 4), (int32_t)eventItemIcon, v8, v9);
  }
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || (combineRootComponent = this->fields.combineRootComponent) == 0LL )
LABEL_11:
    sub_1B86614(combineRootComponent, eventItemIcon);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventCombineCostumeEnt->fields.eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)v5,
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
  const MethodInfo *v13; // x3
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_4A52305 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_1B863B8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A52305 = 1;
  }
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v9 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v18.fields.fakeValue = v9;
    p_baseSvt = &this->fields.baseSvt;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v17 = v18;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v17, 0LL);
    *p_baseSvt = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSvt, 0, v12, v13);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (Il2CppObject **)&this->fields.baseSvt,
               v11,
               (const MethodInfo_3216828 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.baseSvt,
                   v11,
                   (const MethodInfo_3216828 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_1B86614(Instance, v15);
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
  __int64 v6; // x1

  if ( (byte_4A52310 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_4A52310 = 1;
  }
  if ( decide )
    ActionExtensions__Call(this->fields.callBack, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
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
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v18; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int32_t haveQpVal; // w23
  System_Action_o *v22; // x25
  Il2CppObject *v23; // x20
  System_Action_o *v24; // x19

  if ( (byte_4A52311 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, useEventItem);
    sub_1B863B8(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v5);
    sub_1B863B8(&Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__, v6);
    sub_1B863B8(&ServantCostumeControl___c__DisplayClass57_1_TypeInfo, v7);
    byte_4A52311 = 1;
  }
  v8 = sub_1B86604(ServantCostumeControl___c__DisplayClass57_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12);
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
    sub_1B86614(v9, v10);
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
  v18 = *p_qp;
  exeCombineDlg = _4__this->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = _4__this->fields.haveQpVal;
  v22 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v8,
    Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__,
    0LL);
  v23 = (Il2CppObject *)this->fields.__4__this;
  v24 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v24, v23, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
    goto LABEL_14;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v18, haveQpVal, v22, v24, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemInfoList; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *eventItemIcon; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ServantCostumeControl___c__DisplayClass57_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  struct ServantCostumeControl___c__DisplayClass57_0_o *v18; // x8
  struct ServantCostumeControl_o *v19; // x8

  if ( (byte_4A52312 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v4);
    byte_4A52312 = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    itemInfoList,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
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
    v15 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
    ++itemInfoList->fields._version;
    if ( !items )
      goto LABEL_19;
    size = itemInfoList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemInfoList,
        eventItemIcon,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      itemInfoList->fields._size = size + 1;
      v17[4] = (Il2CppClass *)eventItemIcon;
      sub_1B8635C((CGThumbnailListItem_o *)(v17 + 4), (int32_t)eventItemIcon, v8, v9);
    }
  }
  else
  {
    eventId = 0;
  }
  v18 = this->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_19;
  v19 = v18->fields.__4__this;
  if ( !v19 )
    goto LABEL_19;
  combineRootComponent = v19->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_object__o *)v19->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_19:
    sub_1B86614(combineRootComponent, eventItemIcon);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0LL);
}