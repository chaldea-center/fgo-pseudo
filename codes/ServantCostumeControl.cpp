void __fastcall ServantCostumeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19D7A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCostumeControl_TypeInfo, v1, v2);
    byte_4B19D7A = 1;
  }
  *ServantCostumeControl_TypeInfo->static_fields = (struct ServantCostumeControl_StaticFields)xmmword_BD3CE0;
}


void __fastcall ServantCostumeControl___ctor(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19D79 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19D79 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall ServantCostumeControl__CheckCondJoin(
        ServantCostumeControl_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x19
  UserServantEntity_o *baseSvt; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  EventServantEntity_o *v33; // x22
  __int64 v34; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v36; // x21
  System_String_o *v37; // x23
  Il2CppObject *v38; // x1
  __int64 v39; // x1
  System_String_o *v40; // x22
  System_String_o *v41; // x23
  System_String_o *v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  CommonConfirmDialog_ClickDelegate_o *v46; // x25

  if ( (byte_4B19D74 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, callBack, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&string_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__, v12, v13);
    sub_1BCA7E0(&ServantCostumeControl___c__DisplayClass56_0_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_3846/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3845/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_3844/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_3847/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, v22, v23);
    byte_4B19D74 = 1;
  }
  v24 = sub_1BCAA2C(ServantCostumeControl___c__DisplayClass56_0_TypeInfo, callBack, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_17;
  *(_QWORD *)(v24 + 16) = callBack;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)callBack, v27, v28, v29, v30, v31, v32);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_17;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0LL);
  if ( !this->fields.baseSvt )
    goto LABEL_17;
  v33 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v24 + 16), 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0LL);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3844/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0LL);
  v38 = (Il2CppObject *)(v33 ? EventServantEntity__getEndTimeStr(v33, 0LL) : string_TypeInfo->static_fields->Empty);
  v40 = System_String__Format(v37, v38, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0LL);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3845/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0LL);
  v46 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v43, v44, v45);
  CommonConfirmDialog_ClickDelegate___ctor(
    v46,
    (Il2CppObject *)v24,
    Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__,
    0LL);
  if ( !Instance )
LABEL_17:
    sub_1BCAA3C(baseSvt, v26);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v36,
    v40,
    v41,
    v42,
    v46,
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

  if ( (byte_4B19D6D & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase, method);
    byte_4B19D6D = 1;
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
      v29 = v30;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v29, 0LL);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v28, 0LL) )
      {
        ServantCostumeControl__InitDispInfo(this, v14);
        this->fields.baseSvtCostume = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSvtCostume, 0LL, v15, v16, v17, v18, v19, v20);
        this->fields.eventCombineCostumeEnt = 0LL;
        sub_1BCA784(
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
  sub_1BCA784(
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
        sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  }
}


void __fastcall ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSvtCostume, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall ServantCostumeControl__InitCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *costumeFaceIconFrame; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_4B19D6A & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v4, v5);
    byte_4B19D6A = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  ServantCostumeControl__InitDispInfo(this, v6);
  ServantCostumeControl__ClearItemList(this, v7);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  costumeFaceIconFrame = System_Int32__ToString_63206828((int)this + 312, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_14;
  UILabel__set_text(spendQpLb, costumeFaceIconFrame, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v11);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v12);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
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
        ServantCostumeControl__SetExeBtnState(this, v15),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeListInfo) == 0LL)
    || (costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)costumeFaceIconFrame,
                                                    0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 0, 0LL),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(costumeFaceIconFrame, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0LL);
  ServantCostumeControl__ResetInit(this, v16);
}


void __fastcall ServantCostumeControl__InitCombineCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *spendQpLb; // x20
  System_String_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v16; // x1
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19D6C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B19D6C = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  gameObject = System_Int32__ToString_63206828((int)this + 312, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_17;
  UILabel__set_text(spendQpLb, gameObject, 0LL);
  gameObject = (System_String_o *)this->fields.spendQpLb;
  if ( !gameObject )
    goto LABEL_17;
  v17.fields.r = 1.0;
  v17.fields.g = 1.0;
  v17.fields.b = 1.0;
  v17.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v17, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v11);
  ServantCostumeControl__ClearItemList(this, v12);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v13);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
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
        ServantCostumeControl__SetExeBtnState(this, v16),
        (gameObject = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = (System_String_o *)this->fields.eventCombineCostumeBalloon) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(gameObject, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v5; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B19D6B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19D6B = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1BCAA3C(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_charaGraph, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B19D78 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantCostumeControl_OnClickBase__, method, v2);
    byte_4B19D78 = 1;
  }
  v4 = Method_ServantCostumeControl_OnClickBase__;
  if ( (*((_BYTE *)Method_ServantCostumeControl_OnClickBase__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ServantCostumeControl_OnClickBase__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, v6);
  CombineRootComponent__ShowBaseListSvtCostume(combineRootComponent, 0LL);
}


void __fastcall ServantCostumeControl__OnClickExeCostumeCombine(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantCostumeControl_o *v4; // x19
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  EventEntity_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  SetRarityDialogControl_o *exeCombineDlg; // x20
  EventCombineCostumeEntity_o *v35; // x21
  System_Action_o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_o *v40; // x23
  struct ServantCostumeEntity_o *v41; // x8
  System_String_o *name; // x21
  SetRarityDialogControl_o *v43; // x20
  int32_t spendQpVal; // w22
  int32_t haveQpVal; // w23
  System_Action_o *v46; // x24
  int64_t startedAt; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v60; // x21
  __int64 v61; // x22
  __int64 v62; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  CombineCostumeEntity_o *Entity; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  SetRarityDialogControl_o *v74; // x21
  bool v75; // w22
  CombineCostumeEntity_o *v76; // x23
  EventCombineCostumeEntity_o *v77; // x24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v79; // x25
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Action_o *v83; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  v4 = this;
  if ( (byte_4B19D75 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineCostumeMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v19, v20);
    sub_1BCA7E0(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__, v21, v22);
    sub_1BCA7E0(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__, v23, v24);
    sub_1BCA7E0(&Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__, v25, v26);
    this = (ServantCostumeControl_o *)sub_1BCA7E0(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo, v27, v28);
    byte_4B19D75 = 1;
  }
  if ( v4->fields.eventCombineCostumeEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v4->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_33;
    if ( !this )
      goto LABEL_33;
    this = (ServantCostumeControl_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    v30 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0LL) )
    {
      exeCombineDlg = v4->fields.exeCombineDlg;
      v35 = v4->fields.eventCombineCostumeEnt;
      v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
      System_Action___ctor(
        v36,
        (Il2CppObject *)v4,
        Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__,
        0LL);
      v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
      System_Action___ctor(v40, (Il2CppObject *)v4, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v35, v36, v40, 0LL);
        return;
      }
LABEL_33:
      sub_1BCAA3C(this, method);
    }
    startedAt = v30->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
    if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v30, 0, 0LL) )
    {
      v51 = sub_1BCAA2C(ServantCostumeControl___c__DisplayClass57_0_TypeInfo, v48, v49, v50);
      System_Object___ctor((Il2CppObject *)v51, 0LL);
      if ( !v51 )
        goto LABEL_33;
      *(_QWORD *)(v51 + 24) = v4;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 24), (int64_t)v4, v52, v53, v54, v55, v56, v57);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v58);
      this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v4->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_33;
      v60 = (CombineCostumeMaster_o *)this;
      v62 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      *(_QWORD *)&v84.fields.currentCryptoKey = v62;
      *(_QWORD *)&v84.fields.fakeValue = v61;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v84, 0LL);
      baseSvtCostume = v4->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v60 )
        goto LABEL_33;
      Entity = CombineCostumeMaster__GetEntity(v60, (int32_t)this, baseSvtCostume->fields.id, 0LL);
      *(_QWORD *)(v51 + 16) = Entity;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 16), (int64_t)Entity, v65, v66, v67, v68, v69, v70);
      v74 = v4->fields.exeCombineDlg;
      v75 = v4->fields.isShortNeedItem || v4->fields.isShortQp;
      v76 = *(CombineCostumeEntity_o **)(v51 + 16);
      v77 = v4->fields.eventCombineCostumeEnt;
      isShortEventItem = v4->fields.isShortEventItem;
      v79 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v71, v72, v73);
      System_Action_bool____ctor(
        v79,
        (Il2CppObject *)v51,
        Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__,
        0LL);
      v83 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v80, v81, v82);
      System_Action___ctor(v83, (Il2CppObject *)v4, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( !v74 )
        goto LABEL_33;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v74,
        v76,
        v77,
        v75,
        isShortEventItem,
        v79,
        v83,
        0LL);
    }
  }
  else
  {
    v41 = v4->fields.baseSvtCostume;
    if ( !v41 )
      goto LABEL_33;
    name = v41->fields.name;
    v43 = v4->fields.exeCombineDlg;
    spendQpVal = v4->fields.spendQpVal;
    haveQpVal = v4->fields.haveQpVal;
    v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(v46, (Il2CppObject *)v4, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__, 0LL);
    if ( !v43 )
      goto LABEL_33;
    SetRarityDialogControl__SetConfirmCombineCostume(v43, name, spendQpVal, haveQpVal, v46, 0LL, 0LL);
  }
}


void __fastcall ServantCostumeControl__RefreshAlreadyGetInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *alreadyGetInfo; // x0
  __int64 v9; // x1
  UILabel_o *alreadyGetLabel; // x20
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x21
  int max_length; // w8
  unsigned int v13; // w22
  Il2CppClass **v14; // x8
  UnityEngine_Component_o *v15; // x20
  struct UnityEngine_Transform_array *v16; // x8
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19D76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_3936/*"COSTUME_SELECT_SERVANT_MSG"*/, v6, v7);
    byte_4B19D76 = 1;
  }
  alreadyGetInfo = this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(alreadyGetInfo, 1, 0LL);
  alreadyGetLabel = this->fields.alreadyGetLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3936/*"COSTUME_SELECT_SERVANT_MSG"*/, 0LL);
  if ( !alreadyGetLabel )
    goto LABEL_25;
  UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_25;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( v13 < max_length )
    {
      v14 = &alreadyGetLabelBgList->obj.klass + (int)v13;
      v15 = (UnityEngine_Component_o *)v14[4];
      if ( !v15 )
        goto LABEL_25;
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)v14[4],
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0LL);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     v15,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v17.fields.x = 0.0;
      v17.fields.y = 0.0;
      v17.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v15, v17, 0LL);
      alreadyGetInfo = UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(alreadyGetInfo, 0, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_16;
    }
LABEL_26:
    sub_1BCAA44(alreadyGetInfo, method);
  }
LABEL_16:
  v16 = this->fields.alreadyGetLabelBgList;
  if ( !v16 )
    goto LABEL_25;
  if ( !v16->max_length )
    goto LABEL_26;
  alreadyGetInfo = (UnityEngine_GameObject_o *)v16->m_Items[0];
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
    sub_1BCAA3C(alreadyGetInfo, method);
  }
  v18.fields.x = 0.0;
  v18.fields.y = -1.0;
  v18.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v18, 0LL);
}


void __fastcall ServantCostumeControl__RefreshEventCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 alreadyGetInfo; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  Il2CppObject *Entity; // x0
  const MethodInfo *v49; // x1
  EventEntity_o *v50; // x20
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x2
  AssetData_o *eventCombineCostumeBalloonData; // x21
  struct EventCombineCostumeEntity_o *v54; // x8
  struct System_Int32_array *itemIds; // x8
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  __int64 v58; // x1
  Il2CppObject *Object_object__49237568; // x21
  int32_t generatedBalloonId; // w8
  struct EventCombineCostumeEntity_o *v61; // x9
  struct System_Int32_array *v62; // x9
  __int64 v63; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v66; // x2
  struct EventCombineCostumeEntity_o *v67; // x8
  struct System_Int32_array *v68; // x8
  struct EventCombineCostumeEntity_o *v69; // x8
  struct System_Int32_array *v70; // x8
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x22
  int max_length; // w8
  unsigned int v73; // w23
  Il2CppClass **v74; // x8
  UnityEngine_Component_o *v75; // x21
  struct UnityEngine_Transform_array *v76; // x8
  __int64 v77; // x1
  System_TimeSpan_o v78; // x0
  System_TimeSpan_o v79; // x1
  int64_t endedAt; // x22
  int64_t ticks; // x21
  __int64 v82; // x1
  uint64_t dateData; // x22
  System_Object_array *v84; // x21
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x22
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x22
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x22
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x22
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x22
  System_String_o *v120; // x0
  __int64 v121; // x1
  UILabel_o *alreadyGetLabel; // x21
  Il2CppObject *v123; // x22
  System_String_o *v124; // x23
  Il2CppObject *v125; // x0
  _BOOL8 v126; // x0
  __int64 v127; // x1
  Il2CppObject *current; // x21
  __int64 v129; // x0
  int64_t startedAt; // x21
  __int64 v131; // x1
  UILabel_o *v132; // x20
  System_String_o *v133; // x21
  Il2CppObject *v134; // x0
  _BOOL8 v135; // x0
  __int64 v136; // x1
  Il2CppObject *v137; // x19
  System_Collections_Generic_List_Enumerator_object__o v138; // [xsp+0h] [xbp-90h] BYREF
  int32_t Minute; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t Hour; // [xsp+20h] [xbp-70h] BYREF
  int32_t Day; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t Month; // [xsp+28h] [xbp-68h] BYREF
  int32_t Year; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v144; // [xsp+30h] [xbp-60h] BYREF
  uint64_t v145; // [xsp+58h] [xbp-38h] BYREF
  System_DateTime_o v146; // 0:x0.8
  System_DateTime_o v147; // 0:x0.8
  System_DateTime_o v148; // 0:x0.8
  System_DateTime_o v149; // 0:x0.8
  System_DateTime_o v150; // 0:x0.8
  System_DateTime_o v151; // 0:x0.8
  System_TimeSpan_o v152; // 0:x1.8
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v156; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19D77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___, v18, v19);
    sub_1BCA7E0(&int_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&object___TypeInfo, v28, v29);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&System_TimeSpan_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_12782/*"ServantCostumeEventBalloon_"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_3935/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_3934/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_25315/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, v44, v45);
    byte_4B19D77 = 1;
  }
  v145 = 0LL;
  memset(&v144, 0, sizeof(v144));
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0LL);
  if ( !this->fields.eventCombineCostumeEnt )
    return;
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_108;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_108;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v50 = (EventEntity_o *)Entity;
  ServantCostumeControl__SetSvtCostumeCombineData(this, v49);
  ServantCostumeControl__SetExeBtnState(this, v51);
  ServantCostumeControl__SetStateInfoMsg(this, 2, v52);
  eventCombineCostumeBalloonData = this->fields.eventCombineCostumeBalloonData;
  if ( eventCombineCostumeBalloonData )
  {
    v54 = this->fields.eventCombineCostumeEnt;
    if ( !v54 )
      goto LABEL_108;
    itemIds = v54->fields.itemIds;
    if ( !itemIds )
      goto LABEL_108;
    if ( !itemIds->max_length )
      goto LABEL_87;
    v56 = System_Int32__ToString((int)itemIds + 32, 0LL);
    v57 = System_String__Concat_62401220((System_String_o *)StringLiteral_12782/*"ServantCostumeEventBalloon_"*/, v56, 0LL);
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                eventCombineCostumeBalloonData,
                                v57,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58);
    alreadyGetInfo = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL);
    if ( (alreadyGetInfo & 1) != 0 )
    {
      generatedBalloonId = this->fields.generatedBalloonId;
      if ( generatedBalloonId )
      {
        v61 = this->fields.eventCombineCostumeEnt;
        if ( !v61 )
          goto LABEL_108;
        v62 = v61->fields.itemIds;
        if ( !v62 )
          goto LABEL_108;
        if ( !v62->max_length )
          goto LABEL_87;
        if ( generatedBalloonId == v62->m_Items[1] )
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
        this->fields.generatedBalloonId = 0;
      }
      alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
      alreadyGetInfo = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  (UnityEngine_GameObject_o *)Object_object__49237568,
                                  transform,
                                  0LL,
                                  0LL);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)alreadyGetInfo,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
      v67 = this->fields.eventCombineCostumeEnt;
      if ( !v67 )
        goto LABEL_108;
      v68 = v67->fields.itemIds;
      if ( !v68 )
        goto LABEL_108;
      if ( !v68->max_length )
        goto LABEL_87;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      ServantCostumeEventBalloon__Set((ServantCostumeEventBalloon_o *)alreadyGetInfo, v68->m_Items[1], v66);
      v69 = this->fields.eventCombineCostumeEnt;
      if ( !v69 )
        goto LABEL_108;
      v70 = v69->fields.itemIds;
      if ( !v70 )
        goto LABEL_108;
      if ( !v70->max_length )
        goto LABEL_87;
      this->fields.generatedBalloonId = v70->m_Items[1];
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
    v73 = 0;
    while ( v73 < max_length )
    {
      v74 = &alreadyGetLabelBgList->obj.klass + (int)v73;
      v75 = (UnityEngine_Component_o *)v74[4];
      if ( !v75 )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)v74[4],
                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v75,
                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v153.fields.x = 0.0;
      v153.fields.y = -15.0;
      v153.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v75, v153, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject(v75, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v73 >= max_length )
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
  v154.fields.x = 0.0;
  v154.fields.y = -16.0;
  v154.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v154, 0LL);
  alreadyGetInfo = EventEntity__IsOpen(v50, 0, 0LL);
  if ( (alreadyGetInfo & 1) != 0 )
  {
    v76 = this->fields.alreadyGetLabelBgList;
    if ( v76 )
    {
      if ( v76->max_length <= 1 )
        goto LABEL_87;
      alreadyGetInfo = (__int64)v76->m_Items[1];
      if ( alreadyGetInfo )
      {
        alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
        if ( alreadyGetInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0LL);
          if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v77);
          v78.fields._ticks = System_TimeSpan__FromMinutes(1.0, 0LL).fields._ticks;
          endedAt = v50->fields.endedAt;
          ticks = v78.fields._ticks;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v79.fields._ticks);
          dateData = NetworkManager__getServerDateTime_39270492(endedAt, 0LL).fields._dateData;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v82);
          v146.fields._dateData = dateData;
          v152.fields._ticks = ticks;
          v145 = System_DateTime__op_Addition(v146, v152, 0LL).fields._dateData;
          v84 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 5LL);
          v147.fields._dateData = (uint64_t)&v145;
          Year = System_DateTime__get_Year(v147, 0LL);
          alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Year);
          if ( v84 )
          {
            v91 = alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1BCA91C(alreadyGetInfo, v84->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( !v84->max_length )
              goto LABEL_87;
            v84->m_Items[0] = (Il2CppObject *)v91;
            sub_1BCA784((PartyOrganizationUtility_o *)v84->m_Items, v91, v85, v86, v87, v88, v89, v90);
            v148.fields._dateData = (uint64_t)&v145;
            Month = System_DateTime__get_Month(v148, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Month);
            v98 = alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1BCA91C(alreadyGetInfo, v84->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v84->max_length <= 1 )
              goto LABEL_87;
            v84->m_Items[1] = (Il2CppObject *)v98;
            sub_1BCA784((PartyOrganizationUtility_o *)&v84->m_Items[1], v98, v92, v93, v94, v95, v96, v97);
            v149.fields._dateData = (uint64_t)&v145;
            Day = System_DateTime__get_Day(v149, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Day);
            v105 = alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1BCA91C(alreadyGetInfo, v84->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v84->max_length <= 2 )
              goto LABEL_87;
            v84->m_Items[2] = (Il2CppObject *)v105;
            sub_1BCA784((PartyOrganizationUtility_o *)&v84->m_Items[2], v105, v99, v100, v101, v102, v103, v104);
            v150.fields._dateData = (uint64_t)&v145;
            Hour = System_DateTime__get_Hour(v150, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
            v112 = alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1BCA91C(alreadyGetInfo, v84->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( v84->max_length <= 3 )
              goto LABEL_87;
            v84->m_Items[3] = (Il2CppObject *)v112;
            sub_1BCA784((PartyOrganizationUtility_o *)&v84->m_Items[3], v112, v106, v107, v108, v109, v110, v111);
            v151.fields._dateData = (uint64_t)&v145;
            Minute = System_DateTime__get_Minute(v151, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
            v119 = alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_1BCA91C(alreadyGetInfo, v84->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_89:
                v129 = sub_1BCAA60(alreadyGetInfo);
                sub_1BCA908(v129, 0LL);
              }
            }
            if ( v84->max_length <= 4 )
LABEL_87:
              sub_1BCAA44(alreadyGetInfo, method);
            v84->m_Items[4] = (Il2CppObject *)v119;
            sub_1BCA784((PartyOrganizationUtility_o *)&v84->m_Items[4], v119, v113, v114, v115, v116, v117, v118);
            v120 = System_String__Format_62415728((System_String_o *)StringLiteral_25315/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v84, 0LL);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            v123 = (Il2CppObject *)v120;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121);
            v124 = LocalizationManager__Get((System_String_o *)StringLiteral_3935/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
            v125 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
            alreadyGetInfo = (__int64)System_String__Format_62415592(v124, v125, v123, 0LL);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
              alreadyGetInfo = (__int64)this->fields.spendQpLb;
              if ( alreadyGetInfo )
              {
                v155.fields.r = 0.32941;
                v155.fields.a = 1.0;
                v155.fields.g = 0.32941;
                v155.fields.b = 0.32941;
                UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v155, 0LL);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v138,
                    (System_Collections_Generic_List_object__o *)alreadyGetInfo,
                    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  v144 = v138;
                  while ( 1 )
                  {
                    v126 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v144,
                             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v126 )
                      break;
                    current = v144.fields._current;
                    if ( !v144.fields._current )
                      sub_1BCAA3C(v126, v127);
                    LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v144.fields._current, 1, 0LL);
                    LOBYTE(current[6].klass) = 1;
                  }
LABEL_106:
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v144,
                    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
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
  startedAt = v50->fields.startedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v50, 0, 0LL) )
  {
    v132 = this->fields.alreadyGetLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v131);
    v133 = LocalizationManager__Get((System_String_o *)StringLiteral_3934/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
    v134 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
    alreadyGetInfo = (__int64)System_String__Format(v133, v134, 0LL);
    if ( v132 )
    {
      UILabel__set_text(v132, (System_String_o *)alreadyGetInfo, 0LL);
      alreadyGetInfo = (__int64)this->fields.spendQpLb;
      if ( alreadyGetInfo )
      {
        v156.fields.r = 1.0;
        v156.fields.g = 1.0;
        v156.fields.b = 1.0;
        v156.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v156, 0LL);
        if ( this->fields.haveQpVal < this->fields.spendQpVal )
        {
          alreadyGetInfo = (__int64)this->fields.spendQpLb;
          if ( !alreadyGetInfo )
            goto LABEL_108;
          v157.fields.r = 1.0;
          v157.fields.g = 0.0;
          v157.fields.b = 0.0;
          v157.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v157, 0LL);
        }
        alreadyGetInfo = (__int64)this->fields.itemInfoList;
        if ( alreadyGetInfo )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v138,
            (System_Collections_Generic_List_object__o *)alreadyGetInfo,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
          v144 = v138;
          while ( 1 )
          {
            v135 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v144,
                     (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
            if ( !v135 )
              break;
            v137 = v144.fields._current;
            if ( !v144.fields._current )
              sub_1BCAA3C(v135, v136);
            LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v144.fields._current, 0, 0LL);
            LOBYTE(v137[6].klass) = 1;
          }
          goto LABEL_106;
        }
      }
    }
LABEL_108:
    sub_1BCAA3C(alreadyGetInfo, method);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSvt, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.baseSvtCostume = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSvtCostume, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt, 0LL, v15, v16, v17, v18, v19, v20);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  __int64 v21; // x23
  __int64 v22; // x24
  ServantLimitImageMaster_o *v23; // x22
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v25; // x1
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v27; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B19D6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtData, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B19D6E = 1;
  }
  this->fields.baseSvt = userSvtData;
  sub_1BCA784(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v22 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  v23 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v36.fields.currentCryptoKey = v22;
  *(_QWORD *)&v36.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
  if ( !v23 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v23,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v27 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                               this->fields.charaGraphBase,
                               userSvtData,
                               v27,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_38621628;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.charaGraph,
      (int64_t)TexturePrefab_38621628,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1BCAA3C(Instance, v17);
  UICharaGraphTexture__SetCharacter_41557848((UICharaGraphTexture_o *)Instance, userSvtData, v27, 0LL, 0, 0LL);
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
    sub_1BCAA3C(executeButton, method);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0LL);
}


void __fastcall ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v5; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B19D70 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    byte_4B19D70 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63206828((int)this + 308, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1BCAA3C(SelfUserGame, v5);
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
  void *v21; // x0
  UIWidget_o *detailInfoLb; // x21
  System_String_o *v23; // x21
  __int64 *v24; // x8
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19D73 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&ServantCostumeControl_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_12267/*"SHORT_RELEASE_COND_MSG"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_3928/*"COSTUME_EXE_MSG"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_7487/*"INFO_MSG_SELECT_COSTUME"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_7482/*"INFO_MSG_COSTUME_SELECT_BASE"*/, v19, v20);
    byte_4B19D73 = 1;
  }
  v21 = ServantCostumeControl_TypeInfo;
  detailInfoLb = (UIWidget_o *)this->fields.detailInfoLb;
  if ( !ServantCostumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeControl_TypeInfo, *(_QWORD *)&state);
    v21 = ServantCostumeControl_TypeInfo;
  }
  if ( !detailInfoLb )
LABEL_36:
    sub_1BCAA3C(v21, *(_QWORD *)&state);
  UIWidget__set_color(detailInfoLb, *(UnityEngine_Color_o *)*((_QWORD *)v21 + 23), 0LL);
  if ( state == 3 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    v24 = &StringLiteral_7487/*"INFO_MSG_SELECT_COSTUME"*/;
    goto LABEL_33;
  }
  v23 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state != 2 )
  {
    if ( state )
      goto LABEL_34;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    v24 = &StringLiteral_7482/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_33;
  }
  if ( this->fields.isCanCombine )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    v24 = &StringLiteral_3928/*"COSTUME_EXE_MSG"*/;
LABEL_33:
    v23 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
    goto LABEL_34;
  }
  v21 = this->fields.detailInfoLb;
  if ( !v21 )
    goto LABEL_36;
  v25.fields.r = 1.0;
  v25.fields.g = 1.0;
  v25.fields.b = 1.0;
  v25.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v21, v25, 0LL);
  if ( this->fields.isShortQp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state);
    v24 = &StringLiteral_12267/*"SHORT_RELEASE_COND_MSG"*/;
    goto LABEL_33;
  }
LABEL_34:
  v21 = this->fields.detailInfoLb;
  if ( !v21 )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)v21, v23, 0LL);
}


void __fastcall ServantCostumeControl__SetSvtCostumeCombineData(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  int64_t Instance; // x0
  __int64 v33; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_List_object__o *v38; // x22
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o **p_itemInfoList; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UserServantEntity_o *baseSvt; // x8
  __int64 v47; // x22
  __int64 v48; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x21
  struct System_Int32_array *itemIds; // x23
  int max_length; // w22
  struct System_Int32_array *itemNums; // x28
  il2cpp_array_size_t i; // w27
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v56; // x21
  char *v57; // x26
  int32_t v58; // w2
  int32_t *v59; // x26
  int32_t v60; // t1
  int32_t *v61; // x24
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x8
  bool v72; // w23
  int32_t v73; // w21
  struct ServantCostumeEntity_o *v74; // x8
  struct ServantCostumeEntity_o *v75; // x8
  struct UserServantEntity_o *v76; // x8
  UISprite_o *costumeFaceIcon; // x20
  __int64 v78; // x21
  __int64 v79; // x22
  struct ServantCostumeEntity_o *v80; // x8
  int32_t v81; // w21
  int32_t id; // w22
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v84; // x8
  int v85; // w22
  int v86; // w23
  __int64 v87; // x1
  Il2CppObject *v88; // x20
  struct EventCombineCostumeEntity_o *v89; // x8
  struct System_Int32_array *v90; // x8
  struct EventCombineCostumeEntity_o *v91; // x8
  struct System_Int32_array *v92; // x10
  struct UserServantEntity_o *v93; // x8
  ServantCostumeReleaseMaster_o *v94; // x20
  ServantCostumeEntity_o *v95; // x21
  __int64 v96; // x22
  __int64 v97; // x23
  struct UserServantEntity_o *v98; // x8
  __int128 v99; // q1
  int32_t v100; // w22
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v102; // x8
  struct EventCombineCostumeEntity_o *v103; // x8
  EventEntity_o *v104; // x20
  __int64 v105; // x1
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *v110; // [xsp+40h] [xbp-70h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19D71 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineCostumeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v30, v31);
    byte_4B19D71 = 1;
  }
  v110 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                       v35,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = &this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemInfoList, (int64_t)v38, v40, v41, v42, v43, v44, v45);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_110;
  v48 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v47 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
  *(_QWORD *)&v112.fields.currentCryptoKey = v48;
  *(_QWORD *)&v112.fields.fakeValue = v47;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v112, 0LL);
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
    Instance = (int64_t)System_Int32__ToString_63206828((int)this + 312, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
    if ( !spendQpLb )
      goto LABEL_110;
    UILabel__set_text(spendQpLb, (System_String_o *)Instance, 0LL);
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
        if ( i >= itemInfos->max_length )
          goto LABEL_111;
        v56 = itemInfos->m_Items[i];
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
        Instance = NetworkManager__get_UserId(0LL);
        if ( i >= itemIds->max_length )
          goto LABEL_111;
        v57 = (char *)itemIds + 4 * (int)i;
        v60 = *((_DWORD *)v57 + 8);
        v59 = (int32_t *)(v57 + 32);
        v58 = v60;
        if ( !itemNums )
          goto LABEL_110;
        if ( i >= itemNums->max_length )
          goto LABEL_111;
        if ( !v56 )
          goto LABEL_110;
        v61 = &itemNums->m_Items[i + 1];
        LimitCntUpItemComponent__setLimitUpItemInfo(v56, Instance, v58, *v61, 0LL);
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_110;
        v68 = *(_QWORD *)(Instance + 16);
        v69 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v68 )
          goto LABEL_110;
        v70 = *(int *)(Instance + 24);
        if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v56,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = v68 + 8 * v70;
          *(_DWORD *)(Instance + 24) = v70 + 1;
          *(_QWORD *)(v71 + 32) = v56;
          sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 32), (int64_t)v56, v62, v63, v64, v65, v66, v67);
        }
        LimitCntUpItemComponent__SetMaskSprite(v56, 0, 0LL);
        v56->fields.disableOpenItemDetailDialog = 0;
        if ( i >= itemIds->max_length || i >= itemNums->max_length )
LABEL_111:
          sub_1BCAA44(Instance, v33);
        CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, *v59, *v61, 0LL);
      }
      CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
      v72 = 0;
      v73 = 0;
      while ( 1 )
      {
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_110;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)Instance,
                              v73,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( !Instance )
          goto LABEL_110;
        if ( *(_BYTE *)(Instance + 112) )
        {
          v72 = ++v73 >= max_length;
          if ( max_length != v73 )
            continue;
        }
        goto LABEL_40;
      }
    }
    v72 = max_length < 1;
    CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0LL);
LABEL_40:
    v74 = this->fields.baseSvtCostume;
    if ( !v74 )
      goto LABEL_110;
    Instance = (int64_t)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_110;
    UILabel__set_text((UILabel_o *)Instance, v74->fields.name, 0LL);
    v75 = this->fields.baseSvtCostume;
    if ( !v75 )
      goto LABEL_110;
    Instance = (int64_t)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_110;
    UILabel__set_text((UILabel_o *)Instance, v75->fields.releaseInfo, 0LL);
    v76 = this->fields.baseSvt;
    if ( !v76 )
      goto LABEL_110;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    v79 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
    v78 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    *(_QWORD *)&v113.fields.currentCryptoKey = v79;
    *(_QWORD *)&v113.fields.fakeValue = v78;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v113, 0LL);
    v80 = this->fields.baseSvtCostume;
    if ( !v80 )
      goto LABEL_110;
    v81 = Instance;
    id = v80->fields.id;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v33);
    AtlasManager__SetFaceImage(costumeFaceIcon, v81, id, 0LL);
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
    v72 = 0;
  }
  Instance = (int64_t)this->fields.spendQpLb;
  if ( !Instance )
    goto LABEL_110;
  v115.fields.r = 1.0;
  v115.fields.g = 1.0;
  v115.fields.b = 1.0;
  v115.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v115, 0LL);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    Instance = (int64_t)this->fields.spendQpLb;
    if ( !Instance )
      goto LABEL_110;
    v116.fields.r = 1.0;
    v116.fields.g = 0.0;
    v116.fields.b = 0.0;
    v116.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v116, 0LL);
    this->fields.isShortQp = 1;
  }
  if ( !v72 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v84 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v84 )
      goto LABEL_110;
    v85 = -1;
    while ( 1 )
    {
      v86 = v85 + 1;
      if ( v85 + 1 >= (signed int)v84->max_length )
        break;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      v88 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v87);
      Instance = NetworkManager__get_UserId(0LL);
      v89 = this->fields.eventCombineCostumeEnt;
      if ( !v89 )
        goto LABEL_110;
      v90 = v89->fields.itemIds;
      if ( !v90 )
        goto LABEL_110;
      if ( v86 >= v90->max_length )
        goto LABEL_111;
      if ( !v88 )
        goto LABEL_110;
      Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)v88, &v110, Instance, v90->m_Items[v86 + 1], 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_80;
      if ( !v110 )
        goto LABEL_110;
      v91 = this->fields.eventCombineCostumeEnt;
      if ( !v91 )
        goto LABEL_110;
      v92 = v91->fields.itemNums;
      if ( !v92 )
        goto LABEL_110;
      if ( ++v85 >= v92->max_length )
        goto LABEL_111;
      if ( v110->fields.num < v92->m_Items[v86 + 1] )
      {
LABEL_80:
        this->fields.isShortEventItem = 1;
        break;
      }
      v84 = v91->fields.itemIds;
      if ( !v84 )
        goto LABEL_110;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v93 = this->fields.baseSvt;
  if ( !v93 )
    goto LABEL_110;
  v94 = (ServantCostumeReleaseMaster_o *)Instance;
  v95 = this->fields.baseSvtCostume;
  v97 = *(_QWORD *)&v93->fields.svtId.fields.currentCryptoKey;
  v96 = *(_QWORD *)&v93->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
  *(_QWORD *)&v114.fields.currentCryptoKey = v97;
  *(_QWORD *)&v114.fields.fakeValue = v96;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v114, 0LL);
  v98 = this->fields.baseSvt;
  if ( !v98 )
    goto LABEL_110;
  v99 = *(_OWORD *)&v98->fields.id.fields.fakeValue;
  v100 = Instance;
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v98->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v109.fields.fakeValue = v99;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33);
  v108 = v109;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v108, 0LL);
  if ( !v94 )
LABEL_110:
    sub_1BCAA3C(Instance, v33);
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v94, v95, v100, Instance, 0LL);
  v102 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v102 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_98;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  v103 = this->fields.eventCombineCostumeEnt;
  if ( !v103 )
    goto LABEL_110;
  if ( !Instance )
    goto LABEL_110;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        v103->fields.eventId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_110;
  v104 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_107;
  }
  startedAt = v104->fields.startedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v105);
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v104, 0, 0LL) )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct CostumeListViewManager_o *costumeListInfo; // x8
  struct ServantCostumeEntity_o *baseSvtCostume; // x1
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x21
  struct EventCombineCostumeEntity_o **p_eventCombineCostumeEnt; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v29; // x22
  __int64 v30; // x23
  __int64 v31; // x24
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  LimitCntUpItemComponent_o *eventItemIcon; // x21
  struct EventCombineCostumeEntity_o *v40; // x9
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  struct EventCombineCostumeEntity_o *v43; // x9
  struct System_Int32_array *v44; // x8
  struct System_Int32_array *v45; // x9
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B19D6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19D6F = 1;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0LL);
  costumeListInfo = this->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_30;
  baseSvtCostume = costumeListInfo->fields.baseSvtCostume;
  p_baseSvtCostume = &this->fields.baseSvtCostume;
  this->fields.baseSvtCostume = baseSvtCostume;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseSvtCostume,
    (int64_t)baseSvtCostume,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  p_eventCombineCostumeEnt = &this->fields.eventCombineCostumeEnt;
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt, 0LL, v22, v23, v24, v25, v26, v27);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_30;
  v29 = (EventCombineCostumeMaster_o *)Instance;
  v31 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v50.fields.currentCryptoKey = v31;
  *(_QWORD *)&v50.fields.fakeValue = v30;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
  if ( !*p_baseSvtCostume || !v29 )
    goto LABEL_30;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              v29,
                              Instance,
                              (*p_baseSvtCostume)->fields.id,
                              0LL);
  *p_eventCombineCostumeEnt = ListBySvtIdAndCostumeId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventCombineCostumeEnt,
    (int64_t)ListBySvtIdAndCostumeId,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( *p_eventCombineCostumeEnt )
  {
    eventItemIcon = this->fields.eventItemIcon;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
    Instance = NetworkManager__get_UserId(0LL);
    v40 = *p_eventCombineCostumeEnt;
    if ( *p_eventCombineCostumeEnt )
    {
      itemIds = v40->fields.itemIds;
      if ( itemIds )
      {
        if ( !itemIds->max_length )
          goto LABEL_31;
        itemNums = v40->fields.itemNums;
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
          v43 = *p_eventCombineCostumeEnt;
          if ( *p_eventCombineCostumeEnt )
          {
            v44 = v43->fields.itemIds;
            if ( v44 )
            {
              if ( v44->max_length )
              {
                v45 = v43->fields.itemNums;
                if ( !v45 )
                  goto LABEL_30;
                if ( v45->max_length )
                {
                  CombineMenuControl__AddCombineItemInfo(
                    (CombineMenuControl_o *)this,
                    v44->m_Items[1],
                    v45->m_Items[1],
                    0LL);
                  goto LABEL_25;
                }
              }
LABEL_31:
              sub_1BCAA44(Instance, v11);
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(Instance, v11);
  }
LABEL_25:
  Instance = (int64_t)this->fields.costumeListInfo;
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v46);
  ServantCostumeControl__SetSvtCostumeCombineData(this, v47);
  ServantCostumeControl__SetExeBtnState(this, v48);
  Instance = (int64_t)this->fields.costumeReleaseInfo;
  if ( !Instance )
    goto LABEL_30;
  Instance = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  ServantCostumeControl__RefreshEventCostumeInfo(this, v49);
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
    sub_1BCAA3C(costumeListInfo, method);
  }
  CostumeListViewManager__SetMode_45996560((CostumeListViewManager_o *)costumeListInfo, 2, v5);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__57_0(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestCombineCostume(combineRootComponent, 0, this->fields.itemInfoList, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__57_1(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ServantCostumeControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  SetRarityDialogControl_o *exeCombineDlg; // x20
  System_String_o *name; // x21
  int32_t qp; // w22
  int32_t haveQpVal; // w23
  System_Action_o *v15; // x24
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x25

  v4 = this;
  if ( (byte_4B19D7B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v5, v6);
    this = (ServantCostumeControl_o *)sub_1BCA7E0(
                                        &Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__,
                                        v7,
                                        v8);
    byte_4B19D7B = 1;
  }
  baseSvtCostume = v4->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_7;
  eventCombineCostumeEnt = v4->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_7;
  exeCombineDlg = v4->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  qp = eventCombineCostumeEnt->fields.qp;
  haveQpVal = v4->fields.haveQpVal;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v15, (Il2CppObject *)v4, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__, 0LL);
  v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)v4, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
LABEL_7:
    sub_1BCAA3C(this, method);
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, qp, haveQpVal, v15, v19, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__57_2(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *eventItemIcon; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_4B19D7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v7, v8);
    byte_4B19D7C = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v9 )
    goto LABEL_11;
  eventItemIcon = (Il2CppObject *)this->fields.eventItemIcon;
  items = v9->fields._items;
  v19 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_11;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      eventItemIcon,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v21[4] = (Il2CppClass *)eventItemIcon;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)eventItemIcon, v12, v13, v14, v15, v16, v17);
  }
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || (combineRootComponent = this->fields.combineRootComponent) == 0LL )
LABEL_11:
    sub_1BCAA3C(combineRootComponent, eventItemIcon);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventCombineCostumeEnt->fields.eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)v9,
    0LL);
}


UserServantEntity_o *__fastcall ServantCostumeControl__getBaseSelectedSvt(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct UserServantEntity_o *baseSvt; // x8
  __int128 v15; // q1
  UserServantEntity_o **p_baseSvt; // x20
  int64_t v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-50h]

  if ( (byte_4B19D72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B19D72 = 1;
  }
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v15 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v28.fields.fakeValue = v15;
    p_baseSvt = &this->fields.baseSvt;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    v27 = v28;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v27, 0LL);
    *p_baseSvt = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSvt, 0LL, v18, v19, v20, v21, v22, v23);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (Il2CppObject **)&this->fields.baseSvt,
               v17,
               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.baseSvt,
                   v17,
                   (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_1BCAA3C(Instance, v25);
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

  if ( (byte_4B19D7D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide, method);
    byte_4B19D7D = 1;
  }
  if ( decide )
    ActionExtensions__Call(this->fields.callBack, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x2
  __int64 v22; // x3
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v28; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int32_t haveQpVal; // w23
  System_Action_o *v32; // x25
  Il2CppObject *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_o *v37; // x19

  if ( (byte_4B19D7E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, useEventItem, method);
    sub_1BCA7E0(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v6, v7);
    sub_1BCA7E0(&Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__, v8, v9);
    sub_1BCA7E0(&ServantCostumeControl___c__DisplayClass57_1_TypeInfo, v10, v11);
    byte_4B19D7E = 1;
  }
  v12 = sub_1BCAA2C(ServantCostumeControl___c__DisplayClass57_1_TypeInfo, useEventItem, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_BYTE *)(v12 + 16) = useEventItem;
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
    sub_1BCAA3C(v13, v14);
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
  v28 = *p_qp;
  exeCombineDlg = _4__this->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = _4__this->fields.haveQpVal;
  v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v21, v22);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v12,
    Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__,
    0LL);
  v33 = (Il2CppObject *)this->fields.__4__this;
  v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
  System_Action___ctor(v37, v33, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
    goto LABEL_14;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v28, haveQpVal, v32, v37, 0LL);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *itemInfoList; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *eventItemIcon; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct ServantCostumeControl___c__DisplayClass57_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct ServantCostumeControl___c__DisplayClass57_0_o *v26; // x8
  struct ServantCostumeControl_o *v27; // x8

  if ( (byte_4B19D7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v7, v8);
    byte_4B19D7F = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3);
  System_Collections_Generic_List_object____ctor(
    itemInfoList,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
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
    v23 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
    ++itemInfoList->fields._version;
    if ( !items )
      goto LABEL_19;
    size = itemInfoList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemInfoList,
        eventItemIcon,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      itemInfoList->fields._size = size + 1;
      v25[4] = (Il2CppClass *)eventItemIcon;
      sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)eventItemIcon, v12, v13, v14, v15, v16, v17);
    }
  }
  else
  {
    eventId = 0;
  }
  v26 = this->fields.CS___8__locals1;
  if ( !v26 )
    goto LABEL_19;
  v27 = v26->fields.__4__this;
  if ( !v27 )
    goto LABEL_19;
  combineRootComponent = v27->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_object__o *)v27->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_19:
    sub_1BCAA3C(combineRootComponent, eventItemIcon);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0LL);
}