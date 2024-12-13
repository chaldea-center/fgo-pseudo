void __fastcall ServantCostumeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3AD6A & 1) == 0 )
  {
    sub_1BD3458(&ServantCostumeControl_TypeInfo, v1);
    byte_4B3AD6A = 1;
  }
  *ServantCostumeControl_TypeInfo->static_fields = (struct ServantCostumeControl_StaticFields)xmmword_BD9100;
}


void __fastcall ServantCostumeControl___ctor(ServantCostumeControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B3AD69 & 1) == 0 )
  {
    sub_1BD3458(&CombineMenuControl_TypeInfo, method);
    byte_4B3AD69 = 1;
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  EventServantEntity_o *v23; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v25; // x21
  System_String_o *v26; // x23
  Il2CppObject *v27; // x1
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  System_String_o *v30; // x24
  CommonConfirmDialog_ClickDelegate_o *v31; // x25

  if ( (byte_4B3AD64 & 1) == 0 )
  {
    sub_1BD3458(&CommonConfirmDialog_ClickDelegate_TypeInfo, callBack);
    sub_1BD3458(&LocalizationManager_TypeInfo, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BD3458(&string_TypeInfo, v7);
    sub_1BD3458(&Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__, v8);
    sub_1BD3458(&ServantCostumeControl___c__DisplayClass56_0_TypeInfo, v9);
    sub_1BD3458(&StringLiteral_3853/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, v10);
    sub_1BD3458(&StringLiteral_3852/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, v11);
    sub_1BD3458(&StringLiteral_3851/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, v12);
    sub_1BD3458(&StringLiteral_3854/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, v13);
    byte_4B3AD64 = 1;
  }
  v14 = sub_1BD36A4(ServantCostumeControl___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_17;
  *(_QWORD *)(v14 + 16) = callBack;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)callBack, v17, v18, v19, v20, v21, v22);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_17;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0LL);
  if ( !this->fields.baseSvt )
    goto LABEL_17;
  v23 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3853/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3851/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0LL);
  v27 = (Il2CppObject *)(v23 ? EventServantEntity__getEndTimeStr(v23, 0LL) : string_TypeInfo->static_fields->Empty);
  v28 = System_String__Format(v26, v27, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3854/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3852/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0LL);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BD36A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)v14,
    Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__,
    0LL);
  if ( !Instance )
LABEL_17:
    sub_1BD36B4(baseSvt, v16);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v25,
    v28,
    v29,
    v30,
    v31,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v11; // q1
  int64_t v12; // x0
  __int128 v13; // q1
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+40h] [xbp-40h]

  if ( (byte_4B3AD5D & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4B3AD5D = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v11 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v30.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v29 = v30;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v29, 0LL);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v28, 0LL) )
      {
        ServantCostumeControl__InitDispInfo(this, v14);
        this->fields.baseSvtCostume = 0LL;
        sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.baseSvtCostume, 0LL, v15, v16, v17, v18, v19, v20);
        this->fields.eventCombineCostumeEnt = 0LL;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt,
          0LL,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
    }
  }
  else
  {
    ServantCostumeControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    ServantCostumeControl__ResetInit(this, v27);
  }
  this->fields.baseUserServantEntity = selectBase;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
    (int64_t)selectBase,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
        sub_1BD36BC(this, method);
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
    sub_1BD36B4(this, method);
  }
}


void __fastcall ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_1BD36B4(0LL, method);
  ListViewManager__DestroyList(costumeListInfo, 0LL);
}


int32_t __fastcall ServantCostumeControl__GetTutorialOpenType(ServantCostumeControl_o *this, const MethodInfo *method)
{
  return 31;
}


void __fastcall ServantCostumeControl__InitBaseCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  this->fields.baseSvtCostume = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.baseSvtCostume, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt, 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4B3AD5A & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_9351/*"N0"*/, v3);
    byte_4B3AD5A = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  ServantCostumeControl__InitDispInfo(this, v4);
  ServantCostumeControl__ClearItemList(this, v5);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  costumeFaceIconFrame = System_Int32__ToString_63330856((int)this + 312, (System_String_o *)StringLiteral_9351/*"N0"*/, 0LL);
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
    sub_1BD36B4(costumeFaceIconFrame, v8);
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

  if ( (byte_4B3AD5C & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_9351/*"N0"*/, v3);
    sub_1BD3458(&StringLiteral_1/*""*/, v4);
    byte_4B3AD5C = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  gameObject = System_Int32__ToString_63330856((int)this + 312, (System_String_o *)StringLiteral_9351/*"N0"*/, 0LL);
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
    sub_1BD36B4(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B3AD5B & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3AD5B = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1BD36B4(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)p_charaGraph, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B3AD68 & 1) == 0 )
  {
    sub_1BD3458(&Method_ServantCostumeControl_OnClickBase__, method);
    byte_4B3AD68 = 1;
  }
  v3 = Method_ServantCostumeControl_OnClickBase__;
  if ( (*((_BYTE *)Method_ServantCostumeControl_OnClickBase__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BD3470(Method_ServantCostumeControl_OnClickBase__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BD36B4(0LL, v5);
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v36; // x21
  __int64 v37; // x22
  __int64 v38; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  CombineCostumeEntity_o *Entity; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  SetRarityDialogControl_o *v47; // x21
  bool v48; // w22
  CombineCostumeEntity_o *v49; // x23
  EventCombineCostumeEntity_o *v50; // x24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v52; // x25
  System_Action_o *v53; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  v2 = this;
  if ( (byte_4B3AD65 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_bool__TypeInfo, method);
    sub_1BD3458(&System_Action_TypeInfo, v3);
    sub_1BD3458(&Method_DataManager_GetMaster_CombineCostumeMaster___, v4);
    sub_1BD3458(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1BD3458(&DataManager_TypeInfo, v6);
    sub_1BD3458(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_1BD3458(&NetworkManager_TypeInfo, v8);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BD3458(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v10);
    sub_1BD3458(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__, v11);
    sub_1BD3458(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__, v12);
    sub_1BD3458(&Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__, v13);
    this = (ServantCostumeControl_o *)sub_1BD3458(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo, v14);
    byte_4B3AD65 = 1;
  }
  if ( v2->fields.eventCombineCostumeEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v2->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_33;
    if ( !this )
      goto LABEL_33;
    this = (ServantCostumeControl_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_31D1EF0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    v16 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0LL) )
    {
      exeCombineDlg = v2->fields.exeCombineDlg;
      v18 = v2->fields.eventCombineCostumeEnt;
      v19 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)v2,
        Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__,
        0LL);
      v20 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v18, v19, v20, 0LL);
        return;
      }
LABEL_33:
      sub_1BD36B4(this, method);
    }
    startedAt = v16->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v16, 0, 0LL) )
    {
      v28 = sub_1BD36A4(ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v28, 0LL);
      if ( !v28 )
        goto LABEL_33;
      *(_QWORD *)(v28 + 24) = v2;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)v2, v29, v30, v31, v32, v33, v34);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v2->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_33;
      v36 = (CombineCostumeMaster_o *)this;
      v38 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v54.fields.currentCryptoKey = v38;
      *(_QWORD *)&v54.fields.fakeValue = v37;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v54, 0LL);
      baseSvtCostume = v2->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v36 )
        goto LABEL_33;
      Entity = CombineCostumeMaster__GetEntity(v36, (int32_t)this, baseSvtCostume->fields.id, 0LL);
      *(_QWORD *)(v28 + 16) = Entity;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)Entity, v41, v42, v43, v44, v45, v46);
      v47 = v2->fields.exeCombineDlg;
      v48 = v2->fields.isShortNeedItem || v2->fields.isShortQp;
      v49 = *(CombineCostumeEntity_o **)(v28 + 16);
      v50 = v2->fields.eventCombineCostumeEnt;
      isShortEventItem = v2->fields.isShortEventItem;
      v52 = (System_Action_bool__o *)sub_1BD36A4(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v52,
        (Il2CppObject *)v28,
        Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__,
        0LL);
      v53 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(v53, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( !v47 )
        goto LABEL_33;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v47,
        v49,
        v50,
        v48,
        isShortEventItem,
        v52,
        v53,
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
    v26 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
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

  if ( (byte_4B3AD66 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1BD3458(&LocalizationManager_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_3943/*"COSTUME_SELECT_SERVANT_MSG"*/, v4);
    byte_4B3AD66 = 1;
  }
  alreadyGetInfo = this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(alreadyGetInfo, 1, 0LL);
  alreadyGetLabel = this->fields.alreadyGetLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3943/*"COSTUME_SELECT_SERVANT_MSG"*/, 0LL);
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
                                                     (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0LL);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     v11,
                                                     (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1BD36BC(alreadyGetInfo, method);
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
    sub_1BD36B4(alreadyGetInfo, method);
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
  Il2CppObject *Object_object__49362760; // x21
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
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x22
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x22
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x22
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x22
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x22
  System_String_o *v108; // x0
  UILabel_o *alreadyGetLabel; // x21
  Il2CppObject *v110; // x22
  System_String_o *v111; // x23
  Il2CppObject *v112; // x0
  _BOOL8 v113; // x0
  __int64 v114; // x1
  Il2CppObject *current; // x21
  __int64 v116; // x0
  int64_t startedAt; // x21
  UILabel_o *v118; // x20
  System_String_o *v119; // x21
  Il2CppObject *v120; // x0
  _BOOL8 v121; // x0
  __int64 v122; // x1
  Il2CppObject *v123; // x19
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+0h] [xbp-90h] BYREF
  int32_t Minute; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t Hour; // [xsp+20h] [xbp-70h] BYREF
  int32_t Day; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t Month; // [xsp+28h] [xbp-68h] BYREF
  int32_t Year; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+30h] [xbp-60h] BYREF
  uint64_t v131; // [xsp+58h] [xbp-38h] BYREF
  System_DateTime_o v132; // 0:x0.8
  System_DateTime_o v133; // 0:x0.8
  System_DateTime_o v134; // 0:x0.8
  System_DateTime_o v135; // 0:x0.8
  System_DateTime_o v136; // 0:x0.8
  System_DateTime_o v137; // 0:x0.8
  System_TimeSpan_o v138; // 0:x1.8
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v142; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v143; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3AD67 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, method);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1BD3458(&System_DateTime_TypeInfo, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__, v9);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___, v10);
    sub_1BD3458(&int_TypeInfo, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__, v12);
    sub_1BD3458(&LocalizationManager_TypeInfo, v13);
    sub_1BD3458(&NetworkManager_TypeInfo, v14);
    sub_1BD3458(&object___TypeInfo, v15);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v16);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BD3458(&System_TimeSpan_TypeInfo, v18);
    sub_1BD3458(&StringLiteral_12801/*"ServantCostumeEventBalloon_"*/, v19);
    sub_1BD3458(&StringLiteral_3942/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v20);
    sub_1BD3458(&StringLiteral_3941/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v21);
    sub_1BD3458(&StringLiteral_25350/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v22);
    sub_1BD3458(&StringLiteral_5653/*"EVENT_COMBINE_COSTUME_ITEM"*/, v23);
    byte_4B3AD67 = 1;
  }
  v131 = 0LL;
  memset(&v130, 0, sizeof(v130));
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0LL);
  if ( !this->fields.eventCombineCostumeEnt )
    return;
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_108;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_108;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_31D1EF0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
    v35 = System_String__Concat_62525248((System_String_o *)StringLiteral_12801/*"ServantCostumeEventBalloon_"*/, v34, 0LL);
    Object_object__49362760 = AssetData__GetObject_object__49362760(
                                eventCombineCostumeBalloonData,
                                v35,
                                (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    alreadyGetInfo = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49362760, 0LL, 0LL);
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
        UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
        this->fields.generatedBalloonId = 0;
      }
      alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
      alreadyGetInfo = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  (UnityEngine_GameObject_o *)Object_object__49362760,
                                  transform,
                                  0LL,
                                  0LL);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)alreadyGetInfo,
                                  (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
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
                                  (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v51,
                                  (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v139.fields.x = 0.0;
      v139.fields.y = -15.0;
      v139.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v51, v139, 0LL);
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
  v140.fields.x = 0.0;
  v140.fields.y = -16.0;
  v140.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v140, 0LL);
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
          dateData = NetworkManager__getServerDateTime_39341820(endedAt, 0LL).fields._dateData;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v132.fields._dateData = dateData;
          v138.fields._ticks = ticks;
          v131 = System_DateTime__op_Addition(v132, v138, 0LL).fields._dateData;
          v57 = (System_Object_array *)sub_1BD3500(object___TypeInfo, 5LL);
          v133.fields._dateData = (uint64_t)&v131;
          Year = System_DateTime__get_Year(v133, 0LL);
          alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Year, v58, v59, v60);
          if ( v57 )
          {
            v67 = alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1BD3594(alreadyGetInfo, v57->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( !v57->max_length )
              goto LABEL_87;
            v57->m_Items[0] = (Il2CppObject *)v67;
            sub_1BD33FC((PartyOrganizationUtility_o *)v57->m_Items, v67, v61, v62, v63, v64, v65, v66);
            v134.fields._dateData = (uint64_t)&v131;
            Month = System_DateTime__get_Month(v134, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Month, v68, v69, v70);
            v77 = alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1BD3594(alreadyGetInfo, v57->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v57->max_length <= 1 )
              goto LABEL_87;
            v57->m_Items[1] = (Il2CppObject *)v77;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v57->m_Items[1], v77, v71, v72, v73, v74, v75, v76);
            v135.fields._dateData = (uint64_t)&v131;
            Day = System_DateTime__get_Day(v135, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Day, v78, v79, v80);
            v87 = alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1BD3594(alreadyGetInfo, v57->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v57->max_length <= 2 )
              goto LABEL_87;
            v57->m_Items[2] = (Il2CppObject *)v87;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v57->m_Items[2], v87, v81, v82, v83, v84, v85, v86);
            v136.fields._dateData = (uint64_t)&v131;
            Hour = System_DateTime__get_Hour(v136, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v88, v89, v90);
            v97 = alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1BD3594(alreadyGetInfo, v57->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v57->max_length <= 3 )
              goto LABEL_87;
            v57->m_Items[3] = (Il2CppObject *)v97;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v57->m_Items[3], v97, v91, v92, v93, v94, v95, v96);
            v137.fields._dateData = (uint64_t)&v131;
            Minute = System_DateTime__get_Minute(v137, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v98, v99, v100);
            v107 = alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1BD3594(alreadyGetInfo, v57->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_89:
                v116 = sub_1BD36D8(alreadyGetInfo);
                sub_1BD3580(v116, 0LL);
              }
            }
            if ( v57->max_length <= 4 )
LABEL_87:
              sub_1BD36BC(alreadyGetInfo, method);
            v57->m_Items[4] = (Il2CppObject *)v107;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v57->m_Items[4], v107, v101, v102, v103, v104, v105, v106);
            v108 = System_String__Format_62539756((System_String_o *)StringLiteral_25350/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v57, 0LL);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            v110 = (Il2CppObject *)v108;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v111 = LocalizationManager__Get((System_String_o *)StringLiteral_3942/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
            v112 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5653/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
            alreadyGetInfo = (__int64)System_String__Format_62539620(v111, v112, v110, 0LL);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
              alreadyGetInfo = (__int64)this->fields.spendQpLb;
              if ( alreadyGetInfo )
              {
                v141.fields.r = 0.32941;
                v141.fields.a = 1.0;
                v141.fields.g = 0.32941;
                v141.fields.b = 0.32941;
                UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v141, 0LL);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v124,
                    (System_Collections_Generic_List_object__o *)alreadyGetInfo,
                    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  v130 = v124;
                  while ( 1 )
                  {
                    v113 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v130,
                             (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v113 )
                      break;
                    current = v130.fields._current;
                    if ( !v130.fields._current )
                      sub_1BD36B4(v113, v114);
                    LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v130.fields._current, 1, 0LL);
                    LOBYTE(current[6].klass) = 1;
                  }
LABEL_106:
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v130,
                    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
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
    v118 = this->fields.alreadyGetLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v119 = LocalizationManager__Get((System_String_o *)StringLiteral_3941/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
    v120 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5653/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
    alreadyGetInfo = (__int64)System_String__Format(v119, v120, 0LL);
    if ( v118 )
    {
      UILabel__set_text(v118, (System_String_o *)alreadyGetInfo, 0LL);
      alreadyGetInfo = (__int64)this->fields.spendQpLb;
      if ( alreadyGetInfo )
      {
        v142.fields.r = 1.0;
        v142.fields.g = 1.0;
        v142.fields.b = 1.0;
        v142.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v142, 0LL);
        if ( this->fields.haveQpVal < this->fields.spendQpVal )
        {
          alreadyGetInfo = (__int64)this->fields.spendQpLb;
          if ( !alreadyGetInfo )
            goto LABEL_108;
          v143.fields.r = 1.0;
          v143.fields.g = 0.0;
          v143.fields.b = 0.0;
          v143.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v143, 0LL);
        }
        alreadyGetInfo = (__int64)this->fields.itemInfoList;
        if ( alreadyGetInfo )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v124,
            (System_Collections_Generic_List_object__o *)alreadyGetInfo,
            (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
          v130 = v124;
          while ( 1 )
          {
            v121 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v130,
                     (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
            if ( !v121 )
              break;
            v123 = v130.fields._current;
            if ( !v130.fields._current )
              sub_1BD36B4(v121, v122);
            LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v130.fields._current, 0, 0LL);
            LOBYTE(v123[6].klass) = 1;
          }
          goto LABEL_106;
        }
      }
    }
LABEL_108:
    sub_1BD36B4(alreadyGetInfo, method);
  }
}


void __fastcall ServantCostumeControl__ResetEventCombineCostume(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.isShortEventItem = 0;
}


void __fastcall ServantCostumeControl__ResetInit(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  this->fields.baseSvt = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.baseSvt, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseSvtCostume = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.baseSvtCostume, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt, 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall ServantCostumeControl__SetBaseSvtCardImg(
        ServantCostumeControl_o *this,
        UserServantEntity_o *userSvtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  ServantLimitImageMaster_o *v19; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v22; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_38689940; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B3AD5E & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtData);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B3AD5E = 1;
  }
  this->fields.baseSvt = userSvtData;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.baseSvt,
    (int64_t)userSvtData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !userSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtData, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v18 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v31, 0LL);
  if ( !v19 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v19,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v22 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38689940 = CharaGraphManager__CreateTexturePrefab_38689940(
                               this->fields.charaGraphBase,
                               userSvtData,
                               v22,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_38689940;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.charaGraph,
      (int64_t)TexturePrefab_38689940,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1BD36B4(Instance, v14);
  UICharaGraphTexture__SetCharacter_41658772((UICharaGraphTexture_o *)Instance, userSvtData, v22, 0LL, 0, 0LL);
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
    sub_1BD36B4(executeButton, method);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0LL);
}


void __fastcall ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B3AD60 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9351/*"N0"*/, method);
    byte_4B3AD60 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63330856((int)this + 308, (System_String_o *)StringLiteral_9351/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1BD36B4(SelfUserGame, v4);
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

  if ( (byte_4B3AD63 & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_1BD3458(&ServantCostumeControl_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_12286/*"SHORT_RELEASE_COND_MSG"*/, v6);
    sub_1BD3458(&StringLiteral_3935/*"COSTUME_EXE_MSG"*/, v7);
    sub_1BD3458(&StringLiteral_7500/*"INFO_MSG_SELECT_COSTUME"*/, v8);
    sub_1BD3458(&StringLiteral_12284/*"SHORT_ITEM_INFO_MSG"*/, v9);
    sub_1BD3458(&StringLiteral_12285/*"SHORT_QP_INFO_MSG"*/, v10);
    sub_1BD3458(&StringLiteral_1/*""*/, v11);
    sub_1BD3458(&StringLiteral_7495/*"INFO_MSG_COSTUME_SELECT_BASE"*/, v12);
    byte_4B3AD63 = 1;
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
    sub_1BD36B4(v13, *(_QWORD *)&state);
  UIWidget__set_color(detailInfoLb, *(UnityEngine_Color_o *)*((_QWORD *)v13 + 23), 0LL);
  if ( state == 3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_7500/*"INFO_MSG_SELECT_COSTUME"*/;
    goto LABEL_33;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state != 2 )
  {
    if ( state )
      goto LABEL_34;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_7495/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_33;
  }
  if ( this->fields.isCanCombine )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_3935/*"COSTUME_EXE_MSG"*/;
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
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12285/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12284/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_12286/*"SHORT_RELEASE_COND_MSG"*/;
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UserServantEntity_o *baseSvt; // x8
  __int64 v29; // x20
  __int64 v30; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x22
  struct System_Int32_array *itemIds; // x26
  int max_length; // w23
  struct System_Int32_array *itemNums; // x28
  il2cpp_array_size_t i; // w27
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v38; // x22
  char *v39; // x24
  int32_t v40; // w2
  int32_t *v41; // x24
  int32_t v42; // t1
  int32_t *v43; // x25
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  bool v54; // w26
  int32_t v55; // w22
  struct ServantCostumeEntity_o *v56; // x8
  struct ServantCostumeEntity_o *v57; // x8
  struct UserServantEntity_o *v58; // x8
  UISprite_o *costumeFaceIcon; // x21
  __int64 v60; // x22
  __int64 v61; // x23
  struct ServantCostumeEntity_o *v62; // x8
  int32_t v63; // w22
  int32_t id; // w23
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v66; // x8
  int v67; // w23
  int v68; // w26
  Il2CppObject *v69; // x21
  struct EventCombineCostumeEntity_o *v70; // x8
  struct System_Int32_array *v71; // x8
  struct EventCombineCostumeEntity_o *v72; // x8
  struct System_Int32_array *v73; // x10
  struct UserServantEntity_o *v74; // x8
  ServantCostumeReleaseMaster_o *v75; // x21
  ServantCostumeEntity_o *v76; // x22
  __int64 v77; // x23
  __int64 v78; // x24
  struct UserServantEntity_o *v79; // x8
  __int128 v80; // q1
  int32_t v81; // w23
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v83; // x8
  struct EventCombineCostumeEntity_o *v84; // x8
  EventEntity_o *v85; // x21
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *v90; // [xsp+40h] [xbp-70h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3AD61 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_CombineCostumeMaster___, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1BD3458(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v10);
    sub_1BD3458(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v11);
    sub_1BD3458(&NetworkManager_TypeInfo, v12);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BD3458(&StringLiteral_9351/*"N0"*/, v16);
    byte_4B3AD61 = 1;
  }
  v90 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = &this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v20;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.itemInfoList, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_118;
  v30 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v92.fields.currentCryptoKey = v30;
  *(_QWORD *)&v92.fields.fakeValue = v29;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v92, 0LL);
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
    Instance = (int64_t)System_Int32__ToString_63330856((int)this + 312, (System_String_o *)StringLiteral_9351/*"N0"*/, 0LL);
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
        v38 = itemInfos->m_Items[i];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B31D77 )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, v18);
          byte_4B31D77 = 1;
        }
        Instance = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (int64_t)NetworkManager_TypeInfo;
        }
        if ( i >= itemIds->max_length )
          goto LABEL_119;
        v39 = (char *)itemIds + 4 * (int)i;
        v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
        v42 = *((_DWORD *)v39 + 8);
        v41 = (int32_t *)(v39 + 32);
        v40 = v42;
        if ( !itemNums )
          goto LABEL_118;
        if ( i >= itemNums->max_length )
          goto LABEL_119;
        if ( !v38 )
          goto LABEL_118;
        v43 = &itemNums->m_Items[i + 1];
        LimitCntUpItemComponent__setLimitUpItemInfo(v38, v18, v40, *v43, 0LL);
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_118;
        v50 = *(_QWORD *)(Instance + 16);
        v51 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v50 )
          goto LABEL_118;
        v52 = *(int *)(Instance + 24);
        if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v38,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = v50 + 8 * v52;
          *(_DWORD *)(Instance + 24) = v52 + 1;
          *(_QWORD *)(v53 + 32) = v38;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v53 + 32), (int64_t)v38, v44, v45, v46, v47, v48, v49);
        }
        LimitCntUpItemComponent__SetMaskSprite(v38, 0, 0LL);
        v38->fields.disableOpenItemDetailDialog = 0;
        if ( i >= itemIds->max_length || i >= itemNums->max_length )
LABEL_119:
          sub_1BD36BC(Instance, v18);
        CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, *v41, *v43, 0LL);
      }
      CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
      v54 = 0;
      v55 = 0;
      while ( 1 )
      {
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_118;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)Instance,
                              v55,
                              (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( !Instance )
          goto LABEL_118;
        if ( *(_BYTE *)(Instance + 112) )
        {
          v54 = ++v55 >= max_length;
          if ( max_length != v55 )
            continue;
        }
        goto LABEL_44;
      }
    }
    v54 = max_length < 1;
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
LABEL_44:
    v56 = this->fields.baseSvtCostume;
    if ( !v56 )
      goto LABEL_118;
    Instance = (int64_t)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_118;
    UILabel__set_text((UILabel_o *)Instance, v56->fields.name, 0LL);
    v57 = this->fields.baseSvtCostume;
    if ( !v57 )
      goto LABEL_118;
    Instance = (int64_t)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_118;
    UILabel__set_text((UILabel_o *)Instance, v57->fields.releaseInfo, 0LL);
    v58 = this->fields.baseSvt;
    if ( !v58 )
      goto LABEL_118;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    v61 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
    v60 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v93.fields.currentCryptoKey = v61;
    *(_QWORD *)&v93.fields.fakeValue = v60;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v93, 0LL);
    v62 = this->fields.baseSvtCostume;
    if ( !v62 )
      goto LABEL_118;
    v63 = Instance;
    id = v62->fields.id;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceImage(costumeFaceIcon, v63, id, 0LL);
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
    v54 = 0;
  }
  Instance = (int64_t)this->fields.spendQpLb;
  if ( !Instance )
    goto LABEL_118;
  v95.fields.r = 1.0;
  v95.fields.g = 1.0;
  v95.fields.b = 1.0;
  v95.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v95, 0LL);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    Instance = (int64_t)this->fields.spendQpLb;
    if ( !Instance )
      goto LABEL_118;
    v96.fields.r = 1.0;
    v96.fields.g = 0.0;
    v96.fields.b = 0.0;
    v96.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v96, 0LL);
    this->fields.isShortQp = 1;
  }
  if ( !v54 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v66 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v66 )
      goto LABEL_118;
    v67 = -1;
    while ( 1 )
    {
      v68 = v67 + 1;
      if ( v67 + 1 >= (signed int)v66->max_length )
        break;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_118;
      v69 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v18);
        byte_4B31D77 = 1;
      }
      Instance = (int64_t)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (int64_t)NetworkManager_TypeInfo;
      }
      v70 = this->fields.eventCombineCostumeEnt;
      if ( !v70 )
        goto LABEL_118;
      v71 = v70->fields.itemIds;
      if ( !v71 )
        goto LABEL_118;
      if ( v68 >= v71->max_length )
        goto LABEL_119;
      if ( !v69 )
        goto LABEL_118;
      Instance = UserItemMaster__TryGetEntity(
                   (UserItemMaster_o *)v69,
                   &v90,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   v71->m_Items[v68 + 1],
                   0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_88;
      if ( !v90 )
        goto LABEL_118;
      v72 = this->fields.eventCombineCostumeEnt;
      if ( !v72 )
        goto LABEL_118;
      v73 = v72->fields.itemNums;
      if ( !v73 )
        goto LABEL_118;
      if ( ++v67 >= v73->max_length )
        goto LABEL_119;
      if ( v90->fields.num < v73->m_Items[v68 + 1] )
      {
LABEL_88:
        this->fields.isShortEventItem = 1;
        break;
      }
      v66 = v72->fields.itemIds;
      if ( !v66 )
        goto LABEL_118;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v74 = this->fields.baseSvt;
  if ( !v74 )
    goto LABEL_118;
  v75 = (ServantCostumeReleaseMaster_o *)Instance;
  v76 = this->fields.baseSvtCostume;
  v78 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
  v77 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v94.fields.currentCryptoKey = v78;
  *(_QWORD *)&v94.fields.fakeValue = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v94, 0LL);
  v79 = this->fields.baseSvt;
  if ( !v79 )
    goto LABEL_118;
  v80 = *(_OWORD *)&v79->fields.id.fields.fakeValue;
  v81 = Instance;
  *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v79->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v89.fields.fakeValue = v80;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v88 = v89;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v88, 0LL);
  if ( !v75 )
LABEL_118:
    sub_1BD36B4(Instance, v18);
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v75, v76, v81, Instance, 0LL);
  v83 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v83 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_106;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
  v84 = this->fields.eventCombineCostumeEnt;
  if ( !v84 )
    goto LABEL_118;
  if ( !Instance )
    goto LABEL_118;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        v84->fields.eventId,
                        (const MethodInfo_31D1EF0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_118;
  v85 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_115;
  }
  startedAt = v85->fields.startedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v85, 0, 0LL) )
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct CostumeListViewManager_o *costumeListInfo; // x8
  struct ServantCostumeEntity_o *baseSvtCostume; // x1
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x21
  struct EventCombineCostumeEntity_o **p_eventCombineCostumeEnt; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v25; // x22
  __int64 v26; // x23
  __int64 v27; // x24
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  LimitCntUpItemComponent_o *eventItemIcon; // x21
  struct EventCombineCostumeEntity_o *v36; // x9
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  struct EventCombineCostumeEntity_o *v39; // x9
  struct System_Int32_array *v40; // x8
  struct System_Int32_array *v41; // x9
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B3AD5F & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, method);
    sub_1BD3458(&NetworkManager_TypeInfo, v3);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B3AD5F = 1;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  costumeListInfo = this->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_34;
  baseSvtCostume = costumeListInfo->fields.baseSvtCostume;
  p_baseSvtCostume = &this->fields.baseSvtCostume;
  this->fields.baseSvtCostume = baseSvtCostume;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.baseSvtCostume,
    (int64_t)baseSvtCostume,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  p_eventCombineCostumeEnt = &this->fields.eventCombineCostumeEnt;
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt, 0LL, v18, v19, v20, v21, v22, v23);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_34;
  v25 = (EventCombineCostumeMaster_o *)Instance;
  v27 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v27;
  *(_QWORD *)&v46.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v46, 0LL);
  if ( !*p_baseSvtCostume || !v25 )
    goto LABEL_34;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              v25,
                              (int32_t)Instance,
                              (*p_baseSvtCostume)->fields.id,
                              0LL);
  *p_eventCombineCostumeEnt = ListBySvtIdAndCostumeId;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt,
    (int64_t)ListBySvtIdAndCostumeId,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( *p_eventCombineCostumeEnt )
  {
    eventItemIcon = this->fields.eventItemIcon;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B31D77 )
    {
      sub_1BD3458(&NetworkManager_TypeInfo, v7);
      byte_4B31D77 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v36 = *p_eventCombineCostumeEnt;
    if ( *p_eventCombineCostumeEnt )
    {
      itemIds = v36->fields.itemIds;
      if ( itemIds )
      {
        if ( !itemIds->max_length )
          goto LABEL_35;
        itemNums = v36->fields.itemNums;
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
          v39 = *p_eventCombineCostumeEnt;
          if ( *p_eventCombineCostumeEnt )
          {
            v40 = v39->fields.itemIds;
            if ( v40 )
            {
              if ( v40->max_length )
              {
                v41 = v39->fields.itemNums;
                if ( !v41 )
                  goto LABEL_34;
                if ( v41->max_length )
                {
                  CombineMenuControl__AddCombineItemInfo(
                    (CombineMenuControl_o *)this,
                    v40->m_Items[1],
                    v41->m_Items[1],
                    0LL);
                  goto LABEL_29;
                }
              }
LABEL_35:
              sub_1BD36BC(Instance, v7);
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BD36B4(Instance, v7);
  }
LABEL_29:
  Instance = (DataManager_o *)this->fields.costumeListInfo;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v42);
  ServantCostumeControl__SetSvtCostumeCombineData(this, v43);
  ServantCostumeControl__SetExeBtnState(this, v44);
  Instance = (DataManager_o *)this->fields.costumeReleaseInfo;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  ServantCostumeControl__RefreshEventCostumeInfo(this, v45);
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
    sub_1BD36B4(costumeListInfo, method);
  }
  CostumeListViewManager__SetMode_46114352((CostumeListViewManager_o *)costumeListInfo, 2, v5);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__57_0(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BD36B4(0LL, method);
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
  if ( (byte_4B3AD6B & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v3);
    this = (ServantCostumeControl_o *)sub_1BD3458(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__, v4);
    byte_4B3AD6B = 1;
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
  v11 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__, 0LL);
  v12 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
LABEL_7:
    sub_1BD36B4(this, method);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_4B3AD6C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v3);
    sub_1BD3458(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v4);
    byte_4B3AD6C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v5 )
    goto LABEL_11;
  eventItemIcon = (Il2CppObject *)this->fields.eventItemIcon;
  items = v5->fields._items;
  v15 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_11;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      eventItemIcon,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v17[4] = (Il2CppClass *)eventItemIcon;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)eventItemIcon, v8, v9, v10, v11, v12, v13);
  }
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || (combineRootComponent = this->fields.combineRootComponent) == 0LL )
LABEL_11:
    sub_1BD36B4(combineRootComponent, eventItemIcon);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]

  if ( (byte_4B3AD62 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_1BD3458(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B3AD62 = 1;
  }
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v9 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v9;
    p_baseSvt = &this->fields.baseSvt;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v21 = v22;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v21, 0LL);
    *p_baseSvt = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.baseSvt, 0LL, v12, v13, v14, v15, v16, v17);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (Il2CppObject **)&this->fields.baseSvt,
               v11,
               (const MethodInfo_31D20F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.baseSvt,
                   v11,
                   (const MethodInfo_31D20F0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_1BD36B4(Instance, v19);
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

  if ( (byte_4B3AD6D & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_4B3AD6D = 1;
  }
  if ( decide )
    ActionExtensions__Call(this->fields.callBack, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v6);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v22; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int32_t haveQpVal; // w23
  System_Action_o *v26; // x25
  Il2CppObject *v27; // x20
  System_Action_o *v28; // x19

  if ( (byte_4B3AD6E & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, useEventItem);
    sub_1BD3458(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v5);
    sub_1BD3458(&Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__, v6);
    sub_1BD3458(&ServantCostumeControl___c__DisplayClass57_1_TypeInfo, v7);
    byte_4B3AD6E = 1;
  }
  v8 = sub_1BD36A4(ServantCostumeControl___c__DisplayClass57_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 24) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16);
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
    sub_1BD36B4(v9, v10);
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
  v22 = *p_qp;
  exeCombineDlg = _4__this->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = _4__this->fields.haveQpVal;
  v26 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v8,
    Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__,
    0LL);
  v27 = (Il2CppObject *)this->fields.__4__this;
  v28 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v28, v27, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
    goto LABEL_14;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v22, haveQpVal, v26, v28, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct ServantCostumeControl___c__DisplayClass57_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct ServantCostumeControl___c__DisplayClass57_0_o *v22; // x8
  struct ServantCostumeControl_o *v23; // x8

  if ( (byte_4B3AD6F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v3);
    sub_1BD3458(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v4);
    byte_4B3AD6F = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    itemInfoList,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
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
    v19 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
    ++itemInfoList->fields._version;
    if ( !items )
      goto LABEL_19;
    size = itemInfoList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemInfoList,
        eventItemIcon,
        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      itemInfoList->fields._size = size + 1;
      v21[4] = (Il2CppClass *)eventItemIcon;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)eventItemIcon, v8, v9, v10, v11, v12, v13);
    }
  }
  else
  {
    eventId = 0;
  }
  v22 = this->fields.CS___8__locals1;
  if ( !v22 )
    goto LABEL_19;
  v23 = v22->fields.__4__this;
  if ( !v23 )
    goto LABEL_19;
  combineRootComponent = v23->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_object__o *)v23->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_19:
    sub_1BD36B4(combineRootComponent, eventItemIcon);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0LL);
}