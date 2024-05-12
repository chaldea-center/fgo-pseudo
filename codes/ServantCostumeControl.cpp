// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl___cctor(const MethodInfo *method)
{
  int v1; // s3
  float v2; // s4
  float v3; // s5
  float v4; // s6
  int v5; // s1
  int v6; // s2
  int v7; // s0
  struct ServantCostumeControl_StaticFields v8; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_438C7B4 & 1) == 0 )
  {
    sub_B775C4(&ServantCostumeControl_TypeInfo);
    byte_438C7B4 = 1;
  }
  v5 = 1063321600;
  v6 = 1065156608;
  v7 = 0;
  v8 = (struct ServantCostumeControl_StaticFields)0LL;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, (const MethodInfo *)&v8);
  *ServantCostumeControl_TypeInfo->static_fields = v8;
}


void __fastcall ServantCostumeControl___ctor(ServantCostumeControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall ServantCostumeControl__CheckCondJoin(
        ServantCostumeControl_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UserServantEntity_o *baseSvt; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  EventServantEntity_o *v14; // x22
  CommonUI_o *Instance; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x23
  Il2CppObject *v18; // x1
  System_String_o *v19; // x22
  System_String_o *v20; // x23
  System_String_o *v21; // x24
  CommonConfirmDialog_ClickDelegate_o *v22; // x25

  if ( (byte_438C7AF & 1) == 0 )
  {
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&Method_ServantCostumeControl___c__DisplayClass57_0__CheckCondJoin_b__0__);
    sub_B775C4(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
    sub_B775C4(&StringLiteral_3442/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/);
    sub_B775C4(&StringLiteral_3441/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/);
    sub_B775C4(&StringLiteral_3440/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/);
    sub_B775C4(&StringLiteral_3443/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/);
    byte_438C7AF = 1;
  }
  v5 = sub_B77694(ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
  ServantCostumeControl___c__DisplayClass57_0___ctor((ServantCostumeControl___c__DisplayClass57_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = callBack;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)callBack, v8, v9, v10, v11, v12, v13);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_19;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0LL);
  if ( !this->fields.baseSvt )
    goto LABEL_19;
  v14 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0LL);
    return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3442/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3440/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0LL);
  v18 = (Il2CppObject *)(v14 ? EventServantEntity__getEndTimeStr(v14, 0LL) : string_TypeInfo->static_fields->Empty);
  v19 = System_String__Format(v17, v18, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3443/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3441/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0LL);
  v22 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_ServantCostumeControl___c__DisplayClass57_0__CheckCondJoin_b__0__,
    0LL);
  if ( !Instance )
LABEL_19:
    sub_B7769C(baseSvt, v7);
  CommonUI__OpenConfirmDecideDlg(Instance, v16, v19, v20, v21, v22, 0, 0.0, 14.7, 0, 0, 0, 290, 0, 1, 0, 0LL);
}


void __fastcall ServantCostumeControl__CheckIsSelectBaseSvt(
        ServantCostumeControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  BattleServantConfConponent_o *p_baseUserServantEntity; // x21
  __int128 v12; // q1
  int64_t v13; // x0
  __int128 v14; // q0
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-40h]

  if ( (byte_438C7A8 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438C7A8 = 1;
  }
  if ( selectBase )
  {
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v12 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v31.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v30 = v31;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v30, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v29, 0LL) )
      {
        ServantCostumeControl__InitDispInfo(this, v15);
        this->fields.baseSvtCostume = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&this->fields.baseSvtCostume, 0LL, v16, v17, v18, v19, v20, v21);
        this->fields.eventCombineCostumeEnt = 0LL;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.eventCombineCostumeEnt,
          0LL,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
    }
    this->fields.isBaseSelect = 1;
  }
  else
  {
    ServantCostumeControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    ServantCostumeControl__ResetInit(this, v28);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    this->fields.isBaseSelect = 0;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B77560(
    p_baseUserServantEntity,
    (System_Int32_array **)selectBase,
    (System_String_array **)method,
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
  __int64 v6; // x0

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
      {
        v6 = sub_B776C8(this);
        sub_B77668(v6, 0LL);
      }
      this = (ServantCostumeControl_o *)itemInfos->m_Items[v5];
      if ( !this )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
      if ( (int)++v5 >= max_length )
        return;
      itemInfos = v4->fields.itemInfos;
    }
    while ( itemInfos );
LABEL_8:
    sub_B7769C(this, method);
  }
}


void __fastcall ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_B7769C(0LL, method);
  ListViewManager__DestroyList(costumeListInfo, 0LL);
}


int32_t __fastcall ServantCostumeControl__GetTutorialOpenType(ServantCostumeControl_o *this, const MethodInfo *method)
{
  return 31;
}


void __fastcall ServantCostumeControl__InitBaseCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  this->fields.baseSvtCostume = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.baseSvtCostume, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.eventCombineCostumeEnt, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall ServantCostumeControl__InitCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
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

  if ( (byte_438C7A5 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    byte_438C7A5 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isBaseSelect = 0;
  ServantCostumeControl__InitDispInfo(this, v3);
  ServantCostumeControl__ClearItemList(this, v4);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  costumeFaceIconFrame = System_Int32__ToString_39547236((int)this + 280, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_15;
  UILabel__set_text(spendQpLb, costumeFaceIconFrame, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v8);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v9);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetNoMountFace(costumeFaceIcon, 0LL);
  costumeFaceIconFrame = (System_String_o *)this->fields.costumeFaceIconFrame;
  if ( !costumeFaceIconFrame )
    goto LABEL_15;
  costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)costumeFaceIconFrame,
                                              0LL);
  if ( !costumeFaceIconFrame )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0LL);
  costumeFaceIconFrame = (System_String_o *)this->fields.costumeFaceIcon;
  if ( !costumeFaceIconFrame )
    goto LABEL_15;
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
LABEL_15:
    sub_B7769C(costumeFaceIconFrame, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0LL);
  ServantCostumeControl__ResetInit(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__InitCombineCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UILabel_o *spendQpLb; // x20
  System_String_o *gameObject; // x0
  __int64 v5; // x1
  UIWidget_o *v6; // x20
  int v7; // s0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v15; // x1

  if ( (byte_438C7A7 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C7A7 = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  gameObject = System_Int32__ToString_39547236((int)this + 280, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_18;
  UILabel__set_text(spendQpLb, gameObject, 0LL);
  v6 = (UIWidget_o *)this->fields.spendQpLb;
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
  if ( !v6 )
    goto LABEL_18;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v7, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v11);
  ServantCostumeControl__ClearItemList(this, v12);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v13);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetNoMountFace(costumeFaceIcon, 0LL);
  gameObject = (System_String_o *)this->fields.costumeFaceIcon;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (System_String_o *)this->fields.costumeFaceIconFrame;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (System_String_o *)this->fields.costumeNameLb;
  if ( !gameObject )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (System_String_o *)this->fields.conditionLb;
  if ( !gameObject
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        ServantCostumeControl__SetExeBtnState(this, v15),
        (gameObject = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = (System_String_o *)this->fields.eventCombineCostumeBalloon) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
LABEL_18:
    sub_B7769C(gameObject, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438C7A6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C7A6 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_B7769C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B77560((BattleServantConfConponent_o *)p_charaGraph, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_438C7B3 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C7B3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, v3);
  CombineRootComponent__ShowBaseListSvtCostume(combineRootComponent, 0LL);
}


void __fastcall ServantCostumeControl__OnClickExeCostumeCombine(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
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
  int32_t haveQpVal; // w23
  System_Action_o *v14; // x24
  int64_t startedAt; // x22
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  System_Int32_array **Entity; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  SetRarityDialogControl_o *v35; // x21
  CombineCostumeEntity_o *v36; // x22
  EventCombineCostumeEntity_o *v37; // x23
  bool v38; // w24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v40; // x25
  System_Action_o *v41; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v2 = this;
  if ( (byte_438C7B0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_CombineCostumeMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    sub_B775C4(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_0__);
    sub_B775C4(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_1__);
    sub_B775C4(&Method_ServantCostumeControl___c__DisplayClass58_0__OnClickExeCostumeCombine_b__3__);
    this = (ServantCostumeControl_o *)sub_B775C4(&ServantCostumeControl___c__DisplayClass58_0_TypeInfo);
    byte_438C7B0 = 1;
  }
  if ( v2->fields.eventCombineCostumeEnt )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v2->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_37;
    if ( !this )
      goto LABEL_37;
    this = (ServantCostumeControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    v4 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0LL) )
    {
      exeCombineDlg = v2->fields.exeCombineDlg;
      v6 = v2->fields.eventCombineCostumeEnt;
      v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_1__,
        0LL);
      v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v6, v7, v8, 0LL);
        return;
      }
LABEL_37:
      sub_B7769C(this, method);
    }
    startedAt = v4->fields.startedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v4, 0, 0LL) )
    {
      v16 = sub_B77694(ServantCostumeControl___c__DisplayClass58_0_TypeInfo);
      ServantCostumeControl___c__DisplayClass58_0___ctor((ServantCostumeControl___c__DisplayClass58_0_o *)v16, 0LL);
      if ( !v16 )
        goto LABEL_37;
      *(_QWORD *)(v16 + 24) = v2;
      sub_B77560((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)v2, v17, v18, v19, v20, v21, v22);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ServantCostumeControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v2->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_37;
      v24 = (CombineCostumeMaster_o *)this;
      v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v42.fields.currentCryptoKey = v26;
      *(_QWORD *)&v42.fields.fakeValue = v25;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v42, 0LL);
      baseSvtCostume = v2->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v24 )
        goto LABEL_37;
      Entity = (System_Int32_array **)CombineCostumeMaster__GetEntity(
                                        v24,
                                        (int32_t)this,
                                        baseSvtCostume->fields.id,
                                        0LL);
      *(_QWORD *)(v16 + 16) = Entity;
      sub_B77560((BattleServantConfConponent_o *)(v16 + 16), Entity, v29, v30, v31, v32, v33, v34);
      v35 = v2->fields.exeCombineDlg;
      v36 = *(CombineCostumeEntity_o **)(v16 + 16);
      v37 = v2->fields.eventCombineCostumeEnt;
      v38 = v2->fields.isShortNeedItem || v2->fields.isShortQp;
      isShortEventItem = v2->fields.isShortEventItem;
      v40 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v40,
        (Il2CppObject *)v16,
        Method_ServantCostumeControl___c__DisplayClass58_0__OnClickExeCostumeCombine_b__3__,
        (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
      v41 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( !v35 )
        goto LABEL_37;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v35,
        v36,
        v37,
        v38,
        isShortEventItem,
        v40,
        v41,
        0LL);
    }
  }
  else
  {
    v9 = v2->fields.baseSvtCostume;
    if ( !v9 )
      goto LABEL_37;
    name = v9->fields.name;
    v11 = v2->fields.exeCombineDlg;
    spendQpVal = v2->fields.spendQpVal;
    haveQpVal = v2->fields.haveQpVal;
    v14 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_0__, 0LL);
    if ( !v11 )
      goto LABEL_37;
    SetRarityDialogControl__SetConfirmCombineCostume(v11, name, spendQpVal, haveQpVal, v14, 0LL, 0LL);
  }
}


void __fastcall ServantCostumeControl__RefreshAlreadyGetInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *alreadyGetInfo; // x0
  UILabel_o *alreadyGetLabel; // x20
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x21
  int max_length; // w8
  unsigned int v7; // w22
  Il2CppClass **v8; // x8
  UnityEngine_Component_o *v9; // x20
  struct UnityEngine_Transform_array *v10; // x8
  __int64 v11; // x0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C7B1 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3532/*"COSTUME_SELECT_SERVANT_MSG"*/);
    byte_438C7B1 = 1;
  }
  alreadyGetInfo = this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(alreadyGetInfo, 1, 0LL);
  alreadyGetLabel = this->fields.alreadyGetLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3532/*"COSTUME_SELECT_SERVANT_MSG"*/, 0LL);
  if ( !alreadyGetLabel )
    goto LABEL_26;
  UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_26;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( v7 < max_length )
    {
      v8 = &alreadyGetLabelBgList->obj.klass + (int)v7;
      v9 = (UnityEngine_Component_o *)v8[4];
      if ( !v9 )
        goto LABEL_26;
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)v8[4],
                                                     (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_26;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0LL);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     v9,
                                                     (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_26;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v12.fields.x = 0.0;
      v12.fields.y = 0.0;
      v12.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v9, v12, 0LL);
      alreadyGetInfo = UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(alreadyGetInfo, 0, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_17;
    }
LABEL_27:
    v11 = sub_B776C8(alreadyGetInfo);
    sub_B77668(v11, 0LL);
  }
LABEL_17:
  v10 = this->fields.alreadyGetLabelBgList;
  if ( !v10 )
    goto LABEL_26;
  if ( !v10->max_length )
    goto LABEL_27;
  alreadyGetInfo = (UnityEngine_GameObject_o *)v10->m_Items[0];
  if ( !alreadyGetInfo )
    goto LABEL_26;
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
LABEL_26:
    sub_B7769C(alreadyGetInfo, method);
  }
  v13.fields.y = -1.0;
  v13.fields.x = 0.0;
  v13.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__RefreshEventCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 alreadyGetInfo; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  WarEntity_o *Entity; // x0
  const MethodInfo *v6; // x1
  EventEntity_o *v7; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  AssetData_o *eventCombineCostumeBalloonData; // x21
  struct EventCombineCostumeEntity_o *v11; // x8
  struct System_Int32_array *itemIds; // x8
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  int32_t generatedBalloonId; // w8
  struct EventCombineCostumeEntity_o *v17; // x9
  struct System_Int32_array *v18; // x9
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x0
  struct EventCombineCostumeEntity_o *v21; // x8
  struct System_Int32_array *v22; // x8
  struct EventCombineCostumeEntity_o *v23; // x8
  struct System_Int32_array *v24; // x8
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x22
  int max_length; // w8
  unsigned int v27; // w23
  Il2CppClass **v28; // x8
  UnityEngine_Component_o *v29; // x21
  struct UnityEngine_Transform_array *v30; // x8
  System_TimeSpan_o v31; // x0
  int64_t endedAt; // x22
  int64_t ticks; // x21
  System_Object_array *v34; // x21
  __int64 v35; // x2
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  __int64 v43; // x2
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x22
  __int64 v51; // x2
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x22
  __int64 v59; // x2
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x22
  __int64 v67; // x2
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x22
  System_String_o *v75; // x0
  UILabel_o *alreadyGetLabel; // x21
  Il2CppObject *v77; // x22
  System_String_o *v78; // x23
  Il2CppObject *v79; // x0
  UIWidget_o *spendQpLb; // x21
  float v81; // s4
  float v82; // s5
  float v83; // s6
  float v84; // s7
  __int64 v85; // x21
  _BOOL8 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x0
  __int64 v89; // x0
  int64_t startedAt; // x21
  UILabel_o *v91; // x20
  System_String_o *v92; // x21
  Il2CppObject *v93; // x0
  UIWidget_o *v94; // x20
  int v95; // s0
  UIWidget_o *v99; // x20
  int v100; // s0
  __int64 v104; // x19
  _BOOL8 v105; // x0
  __int64 v106; // x1
  int v107; // w19
  System_Collections_Generic_List_Enumerator_T__o v108; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+18h] [xbp-98h] BYREF
  uint64_t dateData; // [xsp+78h] [xbp-38h] BYREF
  System_DateTime_o v111; // 0:x0.8
  System_DateTime_o v112; // 0:x0.8
  System_DateTime_o v113; // 0:x0.8
  System_DateTime_o v114; // 0:x0.8
  System_DateTime_o v115; // 0:x0.8
  System_DateTime_o v116; // 0:x0.8
  System_TimeSpan_o v117; // 0:x1.8
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C7B2 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&System_DateTime_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&System_TimeSpan_TypeInfo);
    sub_B775C4(&StringLiteral_12944/*"ServantCostumeEventBalloon_"*/);
    sub_B775C4(&StringLiteral_3531/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/);
    sub_B775C4(&StringLiteral_3530/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/);
    sub_B775C4(&StringLiteral_24103/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/);
    sub_B775C4(&StringLiteral_5718/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_438C7B2 = 1;
  }
  dateData = 0LL;
  memset(&methoda.genericMethod, 0, 24);
  LODWORD(methoda.rgctx_data) = 0;
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0LL);
  if ( !this->fields.eventCombineCostumeEnt )
    return;
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_119;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_119;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
      goto LABEL_119;
    itemIds = v11->fields.itemIds;
    if ( !itemIds )
      goto LABEL_119;
    if ( !itemIds->max_length )
      goto LABEL_94;
    v13 = System_Int32__ToString((int)itemIds + 32, 0LL);
    v14 = System_String__Concat_44901936((System_String_o *)StringLiteral_12944/*"ServantCostumeEventBalloon_"*/, v13, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               eventCombineCostumeBalloonData,
                                                               v14,
                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    alreadyGetInfo = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
    if ( (alreadyGetInfo & 1) != 0 )
    {
      generatedBalloonId = this->fields.generatedBalloonId;
      if ( generatedBalloonId )
      {
        v17 = this->fields.eventCombineCostumeEnt;
        if ( !v17 )
          goto LABEL_119;
        v18 = v17->fields.itemIds;
        if ( !v18 )
          goto LABEL_119;
        if ( !v18->max_length )
          goto LABEL_94;
        if ( generatedBalloonId == v18->m_Items[1] )
          goto LABEL_39;
        alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
        if ( !alreadyGetInfo )
          goto LABEL_119;
        alreadyGetInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
        if ( !alreadyGetInfo )
          goto LABEL_119;
        alreadyGetInfo = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)alreadyGetInfo, 0, 0LL);
        if ( !alreadyGetInfo )
          goto LABEL_119;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)alreadyGetInfo,
                                               0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
        this->fields.generatedBalloonId = 0;
      }
      alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
      if ( !alreadyGetInfo )
        goto LABEL_119;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
      alreadyGetInfo = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                  transform,
                                  0LL,
                                  0LL);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      alreadyGetInfo = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)alreadyGetInfo,
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
      v21 = this->fields.eventCombineCostumeEnt;
      if ( !v21 )
        goto LABEL_119;
      v22 = v21->fields.itemIds;
      if ( !v22 )
        goto LABEL_119;
      if ( !v22->max_length )
        goto LABEL_94;
      if ( !alreadyGetInfo )
        goto LABEL_119;
      ServantCostumeEventBalloon__Set((ServantCostumeEventBalloon_o *)alreadyGetInfo, v22->m_Items[1], 0LL);
      v23 = this->fields.eventCombineCostumeEnt;
      if ( !v23 )
        goto LABEL_119;
      v24 = v23->fields.itemIds;
      if ( !v24 )
        goto LABEL_119;
      if ( !v24->max_length )
        goto LABEL_94;
      this->fields.generatedBalloonId = v24->m_Items[1];
    }
  }
LABEL_39:
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0LL);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_119;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( v27 < max_length )
    {
      v28 = &alreadyGetLabelBgList->obj.klass + (int)v27;
      v29 = (UnityEngine_Component_o *)v28[4];
      if ( !v29 )
        goto LABEL_119;
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)v28[4],
                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  v29,
                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v118.fields.x = 0.0;
      v118.fields.z = 0.0;
      v118.fields.y = -15.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v29, v118, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject(v29, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_49;
    }
    goto LABEL_94;
  }
LABEL_49:
  alreadyGetInfo = (__int64)this->fields.alreadyGetLabel;
  if ( !alreadyGetInfo )
    goto LABEL_119;
  UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0LL);
  alreadyGetInfo = (__int64)this->fields.alreadyGetLabel;
  if ( !alreadyGetInfo )
    goto LABEL_119;
  UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 720, 0LL);
  alreadyGetInfo = (__int64)this->fields.alreadyGetLabel;
  if ( !alreadyGetInfo )
    goto LABEL_119;
  alreadyGetInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
  if ( !alreadyGetInfo )
    goto LABEL_119;
  v119.fields.y = -16.0;
  v119.fields.x = 0.0;
  v119.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v119, 0LL);
  alreadyGetInfo = EventEntity__IsOpen(v7, 0, 0LL);
  if ( (alreadyGetInfo & 1) != 0 )
  {
    v30 = this->fields.alreadyGetLabelBgList;
    if ( v30 )
    {
      if ( v30->max_length <= 1 )
        goto LABEL_94;
      alreadyGetInfo = (__int64)v30->m_Items[1];
      if ( alreadyGetInfo )
      {
        alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)alreadyGetInfo, 0LL);
        if ( alreadyGetInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0LL);
          if ( (BYTE3(System_TimeSpan_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_TimeSpan_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
          }
          v31.fields._ticks = System_TimeSpan__FromMinutes(1.0, 0LL).fields._ticks;
          endedAt = v7->fields.endedAt;
          ticks = v31.fields._ticks;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          dateData = NetworkManager__getServerDateTime_26207672(endedAt, 0LL).fields.dateData;
          if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_DateTime_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          }
          v111.fields.dateData = dateData;
          v117.fields._ticks = ticks;
          dateData = System_DateTime__op_Addition(v111, v117, 0LL).fields.dateData;
          v34 = (System_Object_array *)sub_B775DC(object___TypeInfo, 5LL);
          v112.fields.dateData = (uint64_t)&dateData;
          HIDWORD(methoda.return_type) = System_DateTime__get_Year(v112, 0LL);
          alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.return_type + 4, v35);
          if ( v34 )
          {
            v42 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B77684(alreadyGetInfo, v34->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( !v34->max_length )
              goto LABEL_94;
            v34->m_Items[0] = (Il2CppObject *)v42;
            sub_B77560((BattleServantConfConponent_o *)v34->m_Items, v42, v36, v37, v38, v39, v40, v41);
            v113.fields.dateData = (uint64_t)&dateData;
            LODWORD(methoda.return_type) = System_DateTime__get_Month(v113, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type, v43);
            v50 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B77684(alreadyGetInfo, v34->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v34->max_length <= 1 )
              goto LABEL_94;
            v34->m_Items[1] = (Il2CppObject *)v50;
            sub_B77560((BattleServantConfConponent_o *)&v34->m_Items[1], v50, v44, v45, v46, v47, v48, v49);
            v114.fields.dateData = (uint64_t)&dateData;
            HIDWORD(methoda.klass) = System_DateTime__get_Day(v114, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.klass + 4, v51);
            v58 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B77684(alreadyGetInfo, v34->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v34->max_length <= 2 )
              goto LABEL_94;
            v34->m_Items[2] = (Il2CppObject *)v58;
            sub_B77560((BattleServantConfConponent_o *)&v34->m_Items[2], v58, v52, v53, v54, v55, v56, v57);
            v115.fields.dateData = (uint64_t)&dateData;
            LODWORD(methoda.klass) = System_DateTime__get_Hour(v115, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &methoda.klass, v59);
            v66 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B77684(alreadyGetInfo, v34->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v34->max_length <= 3 )
              goto LABEL_94;
            v34->m_Items[3] = (Il2CppObject *)v66;
            sub_B77560((BattleServantConfConponent_o *)&v34->m_Items[3], v66, v60, v61, v62, v63, v64, v65);
            v116.fields.dateData = (uint64_t)&dateData;
            HIDWORD(methoda.name) = System_DateTime__get_Minute(v116, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.name + 4, v67);
            v74 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B77684(alreadyGetInfo, v34->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_96:
                v89 = sub_B776BC(alreadyGetInfo);
                sub_B77668(v89, 0LL);
              }
            }
            if ( v34->max_length <= 4 )
            {
LABEL_94:
              v88 = sub_B776C8(alreadyGetInfo);
              sub_B77668(v88, 0LL);
            }
            v34->m_Items[4] = (Il2CppObject *)v74;
            sub_B77560((BattleServantConfConponent_o *)&v34->m_Items[4], v74, v68, v69, v70, v71, v72, v73);
            v75 = System_String__Format_44980660((System_String_o *)StringLiteral_24103/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v34, 0LL);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            v77 = (Il2CppObject *)v75;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v78 = LocalizationManager__Get((System_String_o *)StringLiteral_3531/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
            v79 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5718/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
            alreadyGetInfo = (__int64)System_String__Format_44897472(v78, v79, v77, 0LL);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
              v120.fields.r = 0.32941;
              spendQpLb = (UIWidget_o *)this->fields.spendQpLb;
              v120.fields.a = 1.0;
              v120.fields.g = 0.32941;
              v120.fields.b = 0.32941;
              methoda.methodPointer = 0LL;
              methoda.invoker_method = 0LL;
              UnityEngine_Color___ctor(v120, v81, v82, v83, v84, &methoda);
              if ( spendQpLb )
              {
                *(_QWORD *)&v121.fields.r = methoda.methodPointer;
                *(_QWORD *)&v121.fields.b = methoda.invoker_method;
                UIWidget__set_color(spendQpLb, v121, 0LL);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                    &v108,
                    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alreadyGetInfo,
                    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  *(_QWORD *)&methoda.slot = v108.fields.current;
                  *(_OWORD *)&methoda.genericMethod = *(_OWORD *)&v108.fields.list;
                  while ( 1 )
                  {
                    v86 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
                            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v86 )
                      break;
                    v85 = *(_QWORD *)&methoda.slot;
                    if ( !*(_QWORD *)&methoda.slot )
                      sub_B7769C(v86, v87);
                    LimitCntUpItemComponent__SetMaskSprite(*(LimitCntUpItemComponent_o **)&methoda.slot, 1, 0LL);
                    *(_BYTE *)(v85 + 88) = 1;
                  }
                  LODWORD(methoda.parameters) = 908;
                  LODWORD(methoda.rgctx_data) = 1;
                  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
                    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
                  LODWORD(methoda.rgctx_data) = 0;
                  return;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_119;
  }
  startedAt = v7->fields.startedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v7, 0, 0LL) )
  {
    v91 = this->fields.alreadyGetLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v92 = LocalizationManager__Get((System_String_o *)StringLiteral_3530/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
    v93 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5718/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
    alreadyGetInfo = (__int64)System_String__Format(v92, v93, 0LL);
    if ( !v91 )
      goto LABEL_119;
    UILabel__set_text(v91, (System_String_o *)alreadyGetInfo, 0LL);
    v94 = (UIWidget_o *)this->fields.spendQpLb;
    *(UnityEngine_Color_o *)&v95 = UnityEngine_Color__get_white(0LL);
    if ( !v94 )
      goto LABEL_119;
    UIWidget__set_color(v94, *(UnityEngine_Color_o *)&v95, 0LL);
    if ( this->fields.haveQpVal < this->fields.spendQpVal )
    {
      v99 = (UIWidget_o *)this->fields.spendQpLb;
      *(UnityEngine_Color_o *)&v100 = UnityEngine_Color__get_red(0LL);
      if ( !v99 )
        goto LABEL_119;
      UIWidget__set_color(v99, *(UnityEngine_Color_o *)&v100, 0LL);
    }
    alreadyGetInfo = (__int64)this->fields.itemInfoList;
    if ( !alreadyGetInfo )
LABEL_119:
      sub_B7769C(alreadyGetInfo, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v108,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alreadyGetInfo,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
    *(_QWORD *)&methoda.slot = v108.fields.current;
    *(_OWORD *)&methoda.genericMethod = *(_OWORD *)&v108.fields.list;
    while ( 1 )
    {
      v105 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
               (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
      if ( !v105 )
        break;
      v104 = *(_QWORD *)&methoda.slot;
      if ( !*(_QWORD *)&methoda.slot )
        sub_B7769C(v105, v106);
      LimitCntUpItemComponent__SetMaskSprite(*(LimitCntUpItemComponent_o **)&methoda.slot, 0, 0LL);
      *(_BYTE *)(v104 + 88) = 1;
    }
    LODWORD(methoda.parameters) = 908;
    v107 = ++LODWORD(methoda.rgctx_data);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
    if ( v107 && *((_DWORD *)&methoda.return_type + v107 + 1) == 908 )
      LODWORD(methoda.rgctx_data) = v107 - 1;
  }
}


void __fastcall ServantCostumeControl__ResetEventCombineCostume(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventCombineCostumeEnt = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.eventCombineCostumeEnt, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.isShortEventItem = 0;
}


void __fastcall ServantCostumeControl__ResetInit(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_baseSvt; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  this->fields.baseSvt = 0LL;
  p_baseSvt = &this->fields.baseSvt;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.baseSvt, 0LL, v2, v3, v4, v5, v6, v7);
  p_baseSvt[1] = 0LL;
  sub_B77560((BattleServantConfConponent_o *)(p_baseSvt + 1), 0LL, v9, v10, v11, v12, v13, v14);
  p_baseSvt[7] = 0LL;
  sub_B77560((BattleServantConfConponent_o *)(p_baseSvt + 7), 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall ServantCostumeControl__SetBaseSvtCardImg(
        ServantCostumeControl_o *this,
        UserServantEntity_o *userSvtData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  ServantLimitImageMaster_o *v16; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v19; // w21
  struct UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_31047328; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_438C7A9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C7A9 = 1;
  }
  this->fields.baseSvt = userSvtData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseSvt,
    (System_Int32_array **)userSvtData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !userSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtData, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v28, 0LL);
  if ( !v16 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v16,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v19 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_31047328 = CharaGraphManager__CreateTexturePrefab_31047328(
                               this->fields.charaGraphBase,
                               userSvtData,
                               v19,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_31047328;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_31047328,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B7769C(Instance, v11);
  UICharaGraphTexture__SetCharacter_36683416((UICharaGraphTexture_o *)Instance, userSvtData, v19, 0LL, 0, 0LL);
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
    sub_B7769C(executeButton, method);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0LL);
}


void __fastcall ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_438C7AB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    byte_438C7AB = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39547236((int)this + 276, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B7769C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__SetStateInfoMsg(
        ServantCostumeControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UIWidget_o *detailInfoLb; // x21
  void *v6; // x0
  System_String_o *v7; // x21
  __int64 *v8; // x8
  UIWidget_o *v9; // x20
  int v10; // s0

  if ( (byte_438C7AE & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ServantCostumeControl_TypeInfo);
    sub_B775C4(&StringLiteral_12448/*"SHORT_RELEASE_COND_MSG"*/);
    sub_B775C4(&StringLiteral_3524/*"COSTUME_EXE_MSG"*/);
    sub_B775C4(&StringLiteral_7435/*"INFO_MSG_SELECT_COSTUME"*/);
    sub_B775C4(&StringLiteral_12446/*"SHORT_ITEM_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_12447/*"SHORT_QP_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_7430/*"INFO_MSG_COSTUME_SELECT_BASE"*/);
    byte_438C7AE = 1;
  }
  detailInfoLb = (UIWidget_o *)this->fields.detailInfoLb;
  v6 = ServantCostumeControl_TypeInfo;
  if ( (BYTE3(ServantCostumeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeControl_TypeInfo);
    v6 = ServantCostumeControl_TypeInfo;
  }
  if ( !detailInfoLb )
    goto LABEL_43;
  UIWidget__set_color(detailInfoLb, *(UnityEngine_Color_o *)*((_QWORD *)v6 + 23), 0LL);
  if ( state == 3 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = &StringLiteral_7435/*"INFO_MSG_SELECT_COSTUME"*/;
    goto LABEL_23;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state != 2 )
  {
    if ( state )
      goto LABEL_24;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = &StringLiteral_7430/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_23;
  }
  if ( this->fields.isCanCombine )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = &StringLiteral_3524/*"COSTUME_EXE_MSG"*/;
LABEL_23:
    v7 = LocalizationManager__Get((System_String_o *)*v8, 0LL);
    goto LABEL_24;
  }
  v9 = (UIWidget_o *)this->fields.detailInfoLb;
  *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
  if ( !v9 )
LABEL_43:
    sub_B7769C(v6, *(_QWORD *)&state);
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v10, 0LL);
  if ( this->fields.isShortQp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12446/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = &StringLiteral_12448/*"SHORT_RELEASE_COND_MSG"*/;
    goto LABEL_23;
  }
LABEL_24:
  v6 = this->fields.detailInfoLb;
  if ( !v6 )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)v6, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__SetSvtCostumeCombineData(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  CombineCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o **p_itemInfoList; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UserServantEntity_o *baseSvt; // x8
  __int64 v15; // x22
  __int64 v16; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x21
  struct UILabel_o **p_spendQpLb; // x23
  struct System_Int32_array *itemIds; // x26
  int max_length; // w22
  struct System_Int32_array *itemNums; // x28
  __int64 v23; // x27
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v25; // x21
  __int64 v26; // x21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v27; // x23
  LimitCntUpItemComponent_o *v28; // x8
  char v29; // w26
  struct ServantCostumeEntity_o *v30; // x8
  struct ServantCostumeEntity_o *v31; // x8
  struct UserServantEntity_o *v32; // x8
  UISprite_o *costumeFaceIcon; // x20
  __int64 v34; // x21
  __int64 v35; // x22
  struct ServantCostumeEntity_o *v36; // x8
  int32_t v37; // w21
  int32_t id; // w22
  UIWidget_o *v39; // x20
  int v40; // s0
  UIWidget_o *v44; // x20
  int v45; // s0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v50; // x8
  il2cpp_array_size_t v51; // w21
  UserItemMaster_o *v52; // x20
  struct EventCombineCostumeEntity_o *v53; // x8
  struct System_Int32_array *v54; // x8
  struct EventCombineCostumeEntity_o *v55; // x8
  struct System_Int32_array *v56; // x10
  struct UserServantEntity_o *v57; // x8
  ServantCostumeReleaseMaster_o *v58; // x20
  ServantCostumeEntity_o *v59; // x21
  __int64 v60; // x22
  __int64 v61; // x23
  struct UserServantEntity_o *v62; // x8
  __int128 v63; // q1
  int32_t v64; // w22
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v66; // x8
  struct EventCombineCostumeEntity_o *v67; // x8
  EventEntity_o *v68; // x20
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x21
  __int64 v71; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+30h] [xbp-80h]
  UserItemEntity_o *v74; // [xsp+50h] [xbp-60h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_438C7AC & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    byte_438C7AC = 1;
  }
  v74 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_116;
  MasterData_WarQuestSelectionMaster = (CombineCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = &this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v6;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemInfoList,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_116;
  v16 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v76.fields.currentCryptoKey = v16;
  *(_QWORD *)&v76.fields.fakeValue = v15;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v76, 0LL);
  baseSvtCostume = this->fields.baseSvtCostume;
  if ( !baseSvtCostume || !MasterData_WarQuestSelectionMaster )
    goto LABEL_116;
  Instance = CombineCostumeMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               baseSvtCostume->fields.id,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_116;
    p_spendQpLb = &this->fields.spendQpLb;
    spendQpLb = this->fields.spendQpLb;
    this->fields.spendQpVal = entity->fields.qp;
    Instance = (int64_t)System_Int32__ToString_39547236((int)this + 280, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL);
    if ( !spendQpLb )
      goto LABEL_116;
    UILabel__set_text(spendQpLb, (System_String_o *)Instance, 0LL);
    if ( !entity )
      goto LABEL_116;
    itemIds = entity->fields.itemIds;
    if ( !itemIds )
      goto LABEL_116;
    max_length = itemIds->max_length;
    if ( max_length < 1 )
    {
      v29 = 1;
    }
    else
    {
      itemNums = entity->fields.itemNums;
      v23 = 0LL;
      do
      {
        itemInfos = this->fields.itemInfos;
        if ( !itemInfos )
          goto LABEL_116;
        if ( (unsigned int)v23 >= itemInfos->max_length )
          goto LABEL_117;
        v25 = itemInfos->m_Items[v23];
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( (unsigned int)v23 >= itemIds->max_length )
          goto LABEL_117;
        if ( !itemNums )
          goto LABEL_116;
        if ( (unsigned int)v23 >= itemNums->max_length )
        {
LABEL_117:
          v71 = sub_B776C8(Instance);
          sub_B77668(v71, 0LL);
        }
        if ( !v25 )
          goto LABEL_116;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v25,
          Instance,
          itemIds->m_Items[v23 + 1],
          itemNums->m_Items[v23 + 1],
          0LL);
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_116;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
        LimitCntUpItemComponent__SetMaskSprite(v25, 0, 0LL);
        ++v23;
        v25->fields.disableOpenItemDetailDialog = 0;
      }
      while ( (int)v23 < max_length );
      v26 = 0LL;
      while ( 1 )
      {
        v27 = *p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_116;
        if ( v27->fields._size <= (unsigned int)v26 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v28 = v27->fields._items->m_Items[v26];
        if ( !v28 )
          goto LABEL_116;
        if ( !v28->fields.isItemNum )
          break;
        if ( (int)++v26 >= max_length )
        {
          v29 = 1;
          goto LABEL_39;
        }
      }
      v29 = 0;
LABEL_39:
      p_spendQpLb = &this->fields.spendQpLb;
    }
    v30 = this->fields.baseSvtCostume;
    if ( !v30 )
      goto LABEL_116;
    Instance = (int64_t)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)Instance, v30->fields.name, 0LL);
    v31 = this->fields.baseSvtCostume;
    if ( !v31 )
      goto LABEL_116;
    Instance = (int64_t)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)Instance, v31->fields.releaseInfo, 0LL);
    v32 = this->fields.baseSvt;
    if ( !v32 )
      goto LABEL_116;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    v35 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
    v34 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v77.fields.currentCryptoKey = v35;
    *(_QWORD *)&v77.fields.fakeValue = v34;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v77, 0LL);
    v36 = this->fields.baseSvtCostume;
    if ( !v36 )
      goto LABEL_116;
    v37 = Instance;
    id = v36->fields.id;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceImage(costumeFaceIcon, v37, id, 0LL);
    Instance = (int64_t)this->fields.costumeFaceIcon;
    if ( !Instance )
      goto LABEL_116;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.costumeFaceIconFrame;
    if ( !Instance )
      goto LABEL_116;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  else
  {
    v29 = 0;
    p_spendQpLb = &this->fields.spendQpLb;
  }
  v39 = (UIWidget_o *)*p_spendQpLb;
  *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
  if ( !v39 )
    goto LABEL_116;
  UIWidget__set_color(v39, *(UnityEngine_Color_o *)&v40, 0LL);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    v44 = (UIWidget_o *)*p_spendQpLb;
    *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_red(0LL);
    if ( !v44 )
      goto LABEL_116;
    UIWidget__set_color(v44, *(UnityEngine_Color_o *)&v45, 0LL);
    this->fields.isShortQp = 1;
  }
  if ( (v29 & 1) == 0 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v50 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v50 )
      goto LABEL_116;
    v51 = 0;
    while ( (signed int)v51 < (signed int)v50->max_length )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_116;
      v52 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v53 = this->fields.eventCombineCostumeEnt;
      if ( !v53 )
        goto LABEL_116;
      v54 = v53->fields.itemIds;
      if ( !v54 )
        goto LABEL_116;
      if ( v51 >= v54->max_length )
        goto LABEL_117;
      if ( !v52 )
        goto LABEL_116;
      Instance = UserItemMaster__TryGetEntity(v52, &v74, Instance, v54->m_Items[v51 + 1], 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_83;
      if ( !v74 )
        goto LABEL_116;
      v55 = this->fields.eventCombineCostumeEnt;
      if ( !v55 )
        goto LABEL_116;
      v56 = v55->fields.itemNums;
      if ( !v56 )
        goto LABEL_116;
      if ( v51 >= v56->max_length )
        goto LABEL_117;
      if ( v74->fields.num < v56->m_Items[v51 + 1] )
      {
LABEL_83:
        this->fields.isShortEventItem = 1;
        break;
      }
      v50 = v55->fields.itemIds;
      ++v51;
      if ( !v50 )
        goto LABEL_116;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_116;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v57 = this->fields.baseSvt;
  if ( !v57 )
    goto LABEL_116;
  v58 = (ServantCostumeReleaseMaster_o *)Instance;
  v59 = this->fields.baseSvtCostume;
  v61 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v78.fields.currentCryptoKey = v61;
  *(_QWORD *)&v78.fields.fakeValue = v60;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v78, 0LL);
  v62 = this->fields.baseSvt;
  if ( !v62 )
    goto LABEL_116;
  v63 = *(_OWORD *)&v62->fields.id.fields.fakeValue;
  v64 = Instance;
  *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&v62->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v73.fields.fakeValue = v63;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v72 = v73;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v72, 0LL);
  if ( !v58 )
    goto LABEL_116;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v58, v59, v64, Instance, 0LL);
  v66 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v66 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_103;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___),
        (v67 = this->fields.eventCombineCostumeEnt) == 0LL)
    || !Instance
    || (Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              v67->fields.eventId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
LABEL_116:
    sub_B7769C(Instance, v4);
  }
  v68 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_113;
  }
  startedAt = v68->fields.startedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v68, 0, 0LL) )
  {
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    if ( !this->fields.isShortEventItem )
    {
LABEL_113:
      if ( !isNotClearReleaseCond )
        this->fields.isCanCombine = 1;
      return;
    }
    if ( this->fields.isNotClearReleaseCond )
      return;
LABEL_103:
    if ( this->fields.isShortNeedItem )
      return;
    isNotClearReleaseCond = this->fields.isShortQp;
    goto LABEL_113;
  }
}


void __fastcall ServantCostumeControl__ShowCostumeCombineInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantCostumeControl_o *v8; // x19
  struct CostumeListViewManager_o *costumeListInfo; // x8
  System_Int32_array **baseSvtCostume; // x1
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x21
  __int64 *p_eventCombineCostumeEnt; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v20; // x22
  __int64 v21; // x23
  __int64 v22; // x24
  System_Int32_array **ListBySvtIdAndCostumeId; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  LimitCntUpItemComponent_o *eventItemIcon; // x21
  __int64 v31; // x9
  __int64 v32; // x8
  __int64 v33; // x9
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v8 = this;
  if ( (byte_438C7AA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantCostumeControl_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C7AA = 1;
  }
  costumeListInfo = v8->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_27;
  baseSvtCostume = (System_Int32_array **)costumeListInfo->fields.baseSvtCostume;
  p_baseSvtCostume = &v8->fields.baseSvtCostume;
  v8->fields.baseSvtCostume = (struct ServantCostumeEntity_o *)baseSvtCostume;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields.baseSvtCostume, baseSvtCostume, v2, v3, v4, v5, v6, v7);
  p_eventCombineCostumeEnt = (__int64 *)&v8->fields.eventCombineCostumeEnt;
  v8->fields.eventCombineCostumeEnt = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields.eventCombineCostumeEnt, 0LL, v13, v14, v15, v16, v17, v18);
  this = (ServantCostumeControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_27;
  this = (ServantCostumeControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = v8->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_27;
  v20 = (EventCombineCostumeMaster_o *)this;
  v22 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v22;
  *(_QWORD *)&v39.fields.fakeValue = v21;
  this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v39, 0LL);
  if ( !*p_baseSvtCostume || !v20 )
    goto LABEL_27;
  ListBySvtIdAndCostumeId = (System_Int32_array **)EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                                     v20,
                                                     (int32_t)this,
                                                     (*p_baseSvtCostume)->fields.id,
                                                     0LL);
  *p_eventCombineCostumeEnt = (__int64)ListBySvtIdAndCostumeId;
  sub_B77560(
    (BattleServantConfConponent_o *)&v8->fields.eventCombineCostumeEnt,
    ListBySvtIdAndCostumeId,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( *p_eventCombineCostumeEnt )
  {
    eventItemIcon = v8->fields.eventItemIcon;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (ServantCostumeControl_o *)NetworkManager__get_UserId(0LL);
    v31 = *p_eventCombineCostumeEnt;
    if ( *p_eventCombineCostumeEnt )
    {
      v32 = *(_QWORD *)(v31 + 40);
      if ( v32 )
      {
        if ( !*(_DWORD *)(v32 + 24) )
          goto LABEL_28;
        v33 = *(_QWORD *)(v31 + 32);
        if ( !v33 )
          goto LABEL_27;
        if ( !*(_DWORD *)(v33 + 24) )
        {
LABEL_28:
          v38 = sub_B776C8(this);
          sub_B77668(v38, 0LL);
        }
        if ( eventItemIcon )
        {
          LimitCntUpItemComponent__setLimitUpItemInfo(
            eventItemIcon,
            (int64_t)this,
            *(_DWORD *)(v32 + 32),
            *(_DWORD *)(v33 + 32),
            0LL);
          goto LABEL_22;
        }
      }
    }
LABEL_27:
    sub_B7769C(this, method);
  }
LABEL_22:
  this = (ServantCostumeControl_o *)v8->fields.costumeListInfo;
  if ( !this )
    goto LABEL_27;
  this = (ServantCostumeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ServantCostumeControl__SetHaveQpInfo(v8, v34);
  ServantCostumeControl__SetSvtCostumeCombineData(v8, v35);
  ServantCostumeControl__SetExeBtnState(v8, v36);
  this = (ServantCostumeControl_o *)v8->fields.costumeReleaseInfo;
  if ( !this )
    goto LABEL_27;
  this = (ServantCostumeControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  ServantCostumeControl__RefreshEventCostumeInfo(v8, v37);
}


void __fastcall ServantCostumeControl__ShowCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *costumeListInfo; // x0

  costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo
    || (costumeListInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(costumeListInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeListInfo, 1, 0LL),
        (costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo) == 0LL)
    || (CostumeListViewManager__CreateList((CostumeListViewManager_o *)costumeListInfo, this->fields.baseSvt, 0LL),
        (costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo) == 0LL) )
  {
    sub_B7769C(costumeListInfo, method);
  }
  CostumeListViewManager__SetMode_28485820((CostumeListViewManager_o *)costumeListInfo, 2, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_0(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestCombineCostume(combineRootComponent, 0, this->fields.itemInfoList, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_1(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  ServantCostumeControl_o *v2; // x19
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  SetRarityDialogControl_o *exeCombineDlg; // x20
  System_String_o *name; // x21
  int32_t qp; // w22
  int32_t haveQpVal; // w23
  System_Action_o *v9; // x24
  System_Action_o *v10; // x25

  v2 = this;
  if ( (byte_438C7B5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    this = (ServantCostumeControl_o *)sub_B775C4(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_2__);
    byte_438C7B5 = 1;
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
  v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_2__, 0LL);
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
LABEL_7:
    sub_B7769C(this, method);
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, qp, haveQpVal, v9, v10, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_2(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v5; // x1
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_438C7B6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    byte_438C7B6 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v3
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.eventItemIcon,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__),
        (eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt) == 0LL)
    || (combineRootComponent = this->fields.combineRootComponent) == 0LL )
  {
    sub_B7769C(combineRootComponent, v5);
  }
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventCombineCostumeEnt->fields.eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)v3,
    0LL);
}


UserServantEntity_o *__fastcall ServantCostumeControl__getBaseSelectedSvt(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseSvt; // x8
  UserServantEntity_o **p_baseSvt; // x20
  __int128 v5; // q1
  int64_t v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  if ( (byte_438C7AD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C7AD = 1;
  }
  p_baseSvt = &this->fields.baseSvt;
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v5 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v17.fields.fakeValue = v5;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v16 = v17;
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v16, 0LL);
    *p_baseSvt = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.baseSvt, 0LL, v7, v8, v9, v10, v11, v12);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               &this->fields.baseSvt,
               v6,
               (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &this->fields.baseSvt,
                   v6,
                   (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_B7769C(Instance, v14);
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


void __fastcall ServantCostumeControl___c__DisplayClass57_0___ctor(
        ServantCostumeControl___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCostumeControl___c__DisplayClass57_0___CheckCondJoin_b__0(
        ServantCostumeControl___c__DisplayClass57_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_438880A & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438880A = 1;
  }
  if ( decide )
    ActionExtensions__Call(this->fields.callBack, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall ServantCostumeControl___c__DisplayClass58_0___ctor(
        ServantCostumeControl___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCostumeControl___c__DisplayClass58_0___OnClickExeCostumeCombine_b__3(
        ServantCostumeControl___c__DisplayClass58_0_o *this,
        bool useEventItem,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct ServantCostumeControl_o *v8; // x8
  struct ServantCostumeControl_o **p__4__this; // x19
  struct ServantCostumeControl_o *v10; // t1
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeControl_o *_4__this; // t1
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v16; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int32_t haveQpVal; // w23
  System_Action_o *v20; // x25
  Il2CppObject *v21; // x20
  System_Action_o *v22; // x19

  if ( (byte_438880B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    sub_B775C4(&Method_ServantCostumeControl___c__DisplayClass58_1__OnClickExeCostumeCombine_b__4__);
    sub_B775C4(&ServantCostumeControl___c__DisplayClass58_1_TypeInfo);
    byte_438880B = 1;
  }
  v5 = sub_B77694(ServantCostumeControl___c__DisplayClass58_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 24) = this;
  sub_B77560(v5 + 24);
  *(_BYTE *)(v5 + 16) = useEventItem;
  if ( !useEventItem )
  {
    combineCostumeEntity = this->fields.combineCostumeEntity;
    if ( combineCostumeEntity )
    {
      _4__this = this->fields.__4__this;
      p__4__this = &this->fields.__4__this;
      v8 = _4__this;
      if ( _4__this )
      {
        p_qp = &combineCostumeEntity->fields.qp;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_B7769C(v6, v7);
  }
  v10 = this->fields.__4__this;
  p__4__this = &this->fields.__4__this;
  v8 = v10;
  if ( !v10 )
    goto LABEL_14;
  eventCombineCostumeEnt = v8->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_14;
  p_qp = &eventCombineCostumeEnt->fields.qp;
LABEL_11:
  baseSvtCostume = v8->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_14;
  v16 = *p_qp;
  exeCombineDlg = v8->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = v8->fields.haveQpVal;
  v20 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ServantCostumeControl___c__DisplayClass58_1__OnClickExeCostumeCombine_b__4__,
    0LL);
  v21 = (Il2CppObject *)*p__4__this;
  v22 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v22, v21, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
    goto LABEL_14;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v16, haveQpVal, v20, v22, 0LL);
}


void __fastcall ServantCostumeControl___c__DisplayClass58_1___ctor(
        ServantCostumeControl___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCostumeControl___c__DisplayClass58_1___OnClickExeCostumeCombine_b__4(
        ServantCostumeControl___c__DisplayClass58_1_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemInfoList; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v5; // x1
  struct ServantCostumeControl___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct ServantCostumeControl___c__DisplayClass58_0_o *v10; // x8
  struct ServantCostumeControl_o *v11; // x8

  if ( (byte_438880C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    byte_438880C = 1;
  }
  itemInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    itemInfoList,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( this->fields.useEventItem )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_16;
    _4__this = CS___8__locals1->fields.__4__this;
    if ( !_4__this )
      goto LABEL_16;
    eventCombineCostumeEnt = _4__this->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt || !itemInfoList )
      goto LABEL_16;
    eventId = eventCombineCostumeEnt->fields.eventId;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      itemInfoList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)_4__this->fields.eventItemIcon,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
  }
  else
  {
    eventId = 0;
  }
  v10 = this->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_16;
  v11 = v10->fields.__4__this;
  if ( !v11 )
    goto LABEL_16;
  combineRootComponent = v11->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v11->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_16:
    sub_B7769C(combineRootComponent, v5);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0LL);
}