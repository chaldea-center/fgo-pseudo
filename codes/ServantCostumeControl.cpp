// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v6; // s1
  int v7; // s2
  int v8; // s0
  struct ServantCostumeControl_StaticFields v9; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4215F52 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCostumeControl_TypeInfo, v1);
    byte_4215F52 = 1;
  }
  v6 = 1063321600;
  v7 = 1065156608;
  v8 = 0;
  v9 = (struct ServantCostumeControl_StaticFields)0LL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v9);
  *ServantCostumeControl_TypeInfo->static_fields = v9;
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  EventServantEntity_o *v22; // x22
  CommonUI_o *Instance; // x20
  System_String_o *v24; // x21
  System_String_o *v25; // x23
  Il2CppObject *v26; // x1
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  System_String_o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  CommonConfirmDialog_ClickDelegate_o *v32; // x25

  if ( (byte_4215F4D & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, callBack);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&string_TypeInfo, v7);
    sub_B0D8A4(&Method_ServantCostumeControl___c__DisplayClass57_0__CheckCondJoin_b__0__, v8);
    sub_B0D8A4(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_3329/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, v10);
    sub_B0D8A4(&StringLiteral_3328/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, v11);
    sub_B0D8A4(&StringLiteral_3327/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, v12);
    sub_B0D8A4(&StringLiteral_3330/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, v13);
    byte_4215F4D = 1;
  }
  v14 = sub_B0D974(ServantCostumeControl___c__DisplayClass57_0_TypeInfo, callBack, method);
  ServantCostumeControl___c__DisplayClass57_0___ctor((ServantCostumeControl___c__DisplayClass57_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  *(_QWORD *)(v14 + 16) = callBack;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)callBack, v16, v17, v18, v19, v20, v21);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_19;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0LL);
  if ( !this->fields.baseSvt )
    goto LABEL_19;
  v22 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
    return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3329/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0LL);
  v26 = (Il2CppObject *)(v22 ? EventServantEntity__getEndTimeStr(v22, 0LL) : string_TypeInfo->static_fields->Empty);
  v27 = System_String__Format(v25, v26, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0LL);
  v32 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v30, v31);
  CommonConfirmDialog_ClickDelegate___ctor(
    v32,
    (Il2CppObject *)v14,
    Method_ServantCostumeControl___c__DisplayClass57_0__CheckCondJoin_b__0__,
    0LL);
  if ( !Instance )
LABEL_19:
    sub_B0D97C(baseSvt);
  CommonUI__OpenConfirmDecideDlg(Instance, v24, v27, v28, v29, v32, 0, 0.0, 14.7, 0, 0, 0, 290, 0, 0LL);
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

  if ( (byte_4215F46 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4215F46 = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v30, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v29, 0LL) )
      {
        ServantCostumeControl__InitDispInfo(this, v15);
        this->fields.baseSvtCostume = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseSvtCostume, 0LL, v16, v17, v18, v19, v20, v21);
        this->fields.eventCombineCostumeEnt = 0LL;
        sub_B0D840(
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
  sub_B0D840(
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
        v6 = sub_B0D9A8(this);
        sub_B0D948(v6, 0LL);
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
    sub_B0D97C(this);
  }
}


void __fastcall ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_B0D97C(0LL);
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
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  this->fields.baseSvtCostume = 0LL;
  p_baseSvtCostume = &this->fields.baseSvtCostume;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseSvtCostume, 0LL, v2, v3, v4, v5, v6, v7);
  p_baseSvtCostume[6] = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)(p_baseSvtCostume + 6), 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4215F43 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v3);
    byte_4215F43 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isBaseSelect = 0;
  ServantCostumeControl__InitDispInfo(this, v4);
  ServantCostumeControl__ClearItemList(this, v5);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  costumeFaceIconFrame = System_Int32__ToString_38473032((int)this + 256, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
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
    sub_B0D97C(costumeFaceIconFrame);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0LL);
  ServantCostumeControl__ResetInit(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__InitCombineCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *gameObject; // x0
  UIWidget_o *v7; // x20
  int v8; // s0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v16; // x1

  if ( (byte_4215F45 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4215F45 = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  gameObject = System_Int32__ToString_38473032((int)this + 256, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_18;
  UILabel__set_text(spendQpLb, gameObject, 0LL);
  v7 = (UIWidget_o *)this->fields.spendQpLb;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
  if ( !v7 )
    goto LABEL_18;
  UIWidget__set_color(v7, *(UnityEngine_Color_o *)&v8, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v12);
  ServantCostumeControl__ClearItemList(this, v13);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v14);
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
        ServantCostumeControl__SetExeBtnState(this, v16),
        (gameObject = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = (System_String_o *)this->fields.eventCombineCostumeBalloon) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
LABEL_18:
    sub_B0D97C(gameObject);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *v4; // x20
  struct UICharaGraphTexture_o *charaGraph; // t1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4215F44 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215F44 = 1;
  }
  charaGraph = this->fields.charaGraph;
  p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
  v4 = (UnityEngine_Object_o *)charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_charaGraph )
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_charaGraph, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4215F51 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215F51 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
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
  __int64 v16; // x1
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  EventEntity_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  SetRarityDialogControl_o *exeCombineDlg; // x20
  EventCombineCostumeEntity_o *v22; // x21
  System_Action_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x23
  struct ServantCostumeEntity_o *v27; // x8
  System_String_o *name; // x21
  SetRarityDialogControl_o *v29; // x20
  int32_t haveQpVal; // w22
  int32_t spendQpVal; // w23
  System_Action_o *v32; // x24
  int64_t startedAt; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v44; // x21
  __int64 v45; // x22
  __int64 v46; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  System_Int32_array **Entity; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  SetRarityDialogControl_o *v57; // x21
  CombineCostumeEntity_o *v58; // x22
  EventCombineCostumeEntity_o *v59; // x23
  bool v60; // w24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v62; // x25
  __int64 v63; // x1
  __int64 v64; // x2
  System_Action_o *v65; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v3 = this;
  if ( (byte_4215F4E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v4);
    sub_B0D8A4(&System_Action_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_CombineCostumeMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v9);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v12);
    sub_B0D8A4(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_0__, v13);
    sub_B0D8A4(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_1__, v14);
    sub_B0D8A4(&Method_ServantCostumeControl___c__DisplayClass58_0__OnClickExeCostumeCombine_b__3__, v15);
    this = (ServantCostumeControl_o *)sub_B0D8A4(&ServantCostumeControl___c__DisplayClass58_0_TypeInfo, v16);
    byte_4215F4E = 1;
  }
  if ( v3->fields.eventCombineCostumeEnt )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v3->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_37;
    if ( !this )
      goto LABEL_37;
    this = (ServantCostumeControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    v18 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0LL) )
    {
      exeCombineDlg = v3->fields.exeCombineDlg;
      v22 = v3->fields.eventCombineCostumeEnt;
      v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
      System_Action___ctor(
        v23,
        (Il2CppObject *)v3,
        Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_1__,
        0LL);
      v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
      System_Action___ctor(v26, (Il2CppObject *)v3, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v22, v23, v26, 0LL);
        return;
      }
LABEL_37:
      sub_B0D97C(this);
    }
    startedAt = v18->fields.startedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v18, 0, 0LL) )
    {
      v36 = sub_B0D974(ServantCostumeControl___c__DisplayClass58_0_TypeInfo, v34, v35);
      ServantCostumeControl___c__DisplayClass58_0___ctor((ServantCostumeControl___c__DisplayClass58_0_o *)v36, 0LL);
      if ( !v36 )
        goto LABEL_37;
      *(_QWORD *)(v36 + 24) = v3;
      sub_B0D840((BattleServantConfConponent_o *)(v36 + 24), (System_Int32_array **)v3, v37, v38, v39, v40, v41, v42);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ServantCostumeControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v3->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_37;
      v44 = (CombineCostumeMaster_o *)this;
      v46 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v66.fields.currentCryptoKey = v46;
      *(_QWORD *)&v66.fields.fakeValue = v45;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v66, 0LL);
      baseSvtCostume = v3->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v44 )
        goto LABEL_37;
      Entity = (System_Int32_array **)CombineCostumeMaster__GetEntity(
                                        v44,
                                        (int32_t)this,
                                        baseSvtCostume->fields.id,
                                        0LL);
      *(_QWORD *)(v36 + 16) = Entity;
      sub_B0D840((BattleServantConfConponent_o *)(v36 + 16), Entity, v49, v50, v51, v52, v53, v54);
      v57 = v3->fields.exeCombineDlg;
      v58 = *(CombineCostumeEntity_o **)(v36 + 16);
      v59 = v3->fields.eventCombineCostumeEnt;
      v60 = v3->fields.isShortNeedItem || v3->fields.isShortQp;
      isShortEventItem = v3->fields.isShortEventItem;
      v62 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v55, v56);
      System_Action_bool____ctor(
        v62,
        (Il2CppObject *)v36,
        Method_ServantCostumeControl___c__DisplayClass58_0__OnClickExeCostumeCombine_b__3__,
        (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
      v65 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v63, v64);
      System_Action___ctor(v65, (Il2CppObject *)v3, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( !v57 )
        goto LABEL_37;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v57,
        v58,
        v59,
        v60,
        isShortEventItem,
        v62,
        v65,
        0LL);
    }
  }
  else
  {
    v27 = v3->fields.baseSvtCostume;
    if ( !v27 )
      goto LABEL_37;
    name = v27->fields.name;
    v29 = v3->fields.exeCombineDlg;
    haveQpVal = v3->fields.haveQpVal;
    spendQpVal = v3->fields.spendQpVal;
    v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v32, (Il2CppObject *)v3, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_0__, 0LL);
    if ( !v29 )
      goto LABEL_37;
    SetRarityDialogControl__SetConfirmCombineCostume(v29, name, spendQpVal, haveQpVal, v32, 0LL, 0LL);
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
  __int64 v13; // x0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215F4F & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_3419/*"COSTUME_SELECT_SERVANT_MSG"*/, v4);
    byte_4215F4F = 1;
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
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3419/*"COSTUME_SELECT_SERVANT_MSG"*/, 0LL);
  if ( !alreadyGetLabel )
    goto LABEL_26;
  UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_26;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < max_length )
    {
      v10 = &alreadyGetLabelBgList->obj.klass + (int)v9;
      v11 = (UnityEngine_Component_o *)v10[4];
      if ( !v11 )
        goto LABEL_26;
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)v10[4],
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_26;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0LL);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     v11,
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_26;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v14.fields.x = 0.0;
      v14.fields.y = 0.0;
      v14.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v11, v14, 0LL);
      alreadyGetInfo = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(alreadyGetInfo, 0, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_17;
    }
LABEL_27:
    v13 = sub_B0D9A8(alreadyGetInfo);
    sub_B0D948(v13, 0LL);
  }
LABEL_17:
  v12 = this->fields.alreadyGetLabelBgList;
  if ( !v12 )
    goto LABEL_26;
  if ( !v12->max_length )
    goto LABEL_27;
  alreadyGetInfo = (UnityEngine_GameObject_o *)v12->m_Items[0];
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
    sub_B0D97C(alreadyGetInfo);
  }
  v15.fields.y = -1.0;
  v15.fields.x = 0.0;
  v15.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  WarEntity_o *Entity; // x0
  const MethodInfo *v27; // x1
  EventEntity_o *v28; // x20
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  AssetData_o *eventCombineCostumeBalloonData; // x21
  struct EventCombineCostumeEntity_o *v32; // x8
  struct System_Int32_array *itemIds; // x8
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  int32_t generatedBalloonId; // w8
  struct EventCombineCostumeEntity_o *v38; // x9
  struct System_Int32_array *v39; // x9
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x0
  struct EventCombineCostumeEntity_o *v42; // x8
  struct System_Int32_array *v43; // x8
  struct EventCombineCostumeEntity_o *v44; // x8
  struct System_Int32_array *v45; // x8
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x22
  int max_length; // w8
  unsigned int v48; // w23
  Il2CppClass **v49; // x8
  UnityEngine_Component_o *v50; // x21
  struct UnityEngine_Transform_array *v51; // x8
  System_TimeSpan_o v52; // x0
  int64_t endedAt; // x22
  int64_t ticks; // x21
  System_Object_array *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x22
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x22
  System_String_o *v91; // x0
  UILabel_o *alreadyGetLabel; // x21
  Il2CppObject *v93; // x22
  System_String_o *v94; // x23
  Il2CppObject *v95; // x0
  UIWidget_o *spendQpLb; // x21
  float v97; // s4
  float v98; // s5
  float v99; // s6
  float v100; // s7
  __int64 v101; // x21
  _BOOL8 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  int64_t startedAt; // x21
  UILabel_o *v106; // x20
  System_String_o *v107; // x21
  Il2CppObject *v108; // x0
  UIWidget_o *v109; // x20
  int v110; // s0
  UIWidget_o *v114; // x20
  int v115; // s0
  __int64 v119; // x19
  _BOOL8 v120; // x0
  int v121; // w19
  System_Collections_Generic_List_Enumerator_T__o v122; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+18h] [xbp-98h] BYREF
  uint64_t dateData; // [xsp+78h] [xbp-38h] BYREF
  System_DateTime_o v125; // 0:x0.8
  System_DateTime_o v126; // 0:x0.8
  System_DateTime_o v127; // 0:x0.8
  System_DateTime_o v128; // 0:x0.8
  System_DateTime_o v129; // 0:x0.8
  System_DateTime_o v130; // 0:x0.8
  System_TimeSpan_o v131; // 0:x1.8
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215F50 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B0D8A4(&System_DateTime_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___, v10);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&object___TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&System_TimeSpan_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_12747/*"ServantCostumeEventBalloon_"*/, v19);
    sub_B0D8A4(&StringLiteral_3418/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v20);
    sub_B0D8A4(&StringLiteral_3417/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v21);
    sub_B0D8A4(&StringLiteral_23694/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v22);
    sub_B0D8A4(&StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, v23);
    byte_4215F50 = 1;
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
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_119;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_119;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
      goto LABEL_119;
    itemIds = v32->fields.itemIds;
    if ( !itemIds )
      goto LABEL_119;
    if ( !itemIds->max_length )
      goto LABEL_94;
    v34 = System_Int32__ToString((int)itemIds + 32, 0LL);
    v35 = System_String__Concat_43849904((System_String_o *)StringLiteral_12747/*"ServantCostumeEventBalloon_"*/, v34, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               eventCombineCostumeBalloonData,
                                                               v35,
                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
        v38 = this->fields.eventCombineCostumeEnt;
        if ( !v38 )
          goto LABEL_119;
        v39 = v38->fields.itemIds;
        if ( !v39 )
          goto LABEL_119;
        if ( !v39->max_length )
          goto LABEL_94;
        if ( generatedBalloonId == v39->m_Items[1] )
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
        UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
      v42 = this->fields.eventCombineCostumeEnt;
      if ( !v42 )
        goto LABEL_119;
      v43 = v42->fields.itemIds;
      if ( !v43 )
        goto LABEL_119;
      if ( !v43->max_length )
        goto LABEL_94;
      if ( !alreadyGetInfo )
        goto LABEL_119;
      ServantCostumeEventBalloon__Set((ServantCostumeEventBalloon_o *)alreadyGetInfo, v43->m_Items[1], 0LL);
      v44 = this->fields.eventCombineCostumeEnt;
      if ( !v44 )
        goto LABEL_119;
      v45 = v44->fields.itemIds;
      if ( !v45 )
        goto LABEL_119;
      if ( !v45->max_length )
        goto LABEL_94;
      this->fields.generatedBalloonId = v45->m_Items[1];
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
    v48 = 0;
    while ( v48 < max_length )
    {
      v49 = &alreadyGetLabelBgList->obj.klass + (int)v48;
      v50 = (UnityEngine_Component_o *)v49[4];
      if ( !v50 )
        goto LABEL_119;
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)v49[4],
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  v50,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v132.fields.x = 0.0;
      v132.fields.z = 0.0;
      v132.fields.y = -15.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v50, v132, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject(v50, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v48 >= max_length )
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
  v133.fields.y = -16.0;
  v133.fields.x = 0.0;
  v133.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v133, 0LL);
  alreadyGetInfo = EventEntity__IsOpen(v28, 0, 0LL);
  if ( (alreadyGetInfo & 1) != 0 )
  {
    v51 = this->fields.alreadyGetLabelBgList;
    if ( v51 )
    {
      if ( v51->max_length <= 1 )
        goto LABEL_94;
      alreadyGetInfo = (__int64)v51->m_Items[1];
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
          v52.fields._ticks = System_TimeSpan__FromMinutes(1.0, 0LL).fields._ticks;
          endedAt = v28->fields.endedAt;
          ticks = v52.fields._ticks;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          dateData = NetworkManager__getServerDateTime_25504848(endedAt, 0LL).fields.dateData;
          if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_DateTime_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          }
          v125.fields.dateData = dateData;
          v131.fields._ticks = ticks;
          dateData = System_DateTime__op_Addition(v125, v131, 0LL).fields.dateData;
          v55 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 5LL);
          v126.fields.dateData = (uint64_t)&dateData;
          HIDWORD(methoda.return_type) = System_DateTime__get_Year(v126, 0LL);
          alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.return_type + 4);
          if ( v55 )
          {
            v62 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B0D964(alreadyGetInfo, v55->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( !v55->max_length )
              goto LABEL_94;
            v55->m_Items[0] = (Il2CppObject *)v62;
            sub_B0D840((BattleServantConfConponent_o *)v55->m_Items, v62, v56, v57, v58, v59, v60, v61);
            v127.fields.dateData = (uint64_t)&dateData;
            LODWORD(methoda.return_type) = System_DateTime__get_Month(v127, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
            v69 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B0D964(alreadyGetInfo, v55->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v55->max_length <= 1 )
              goto LABEL_94;
            v55->m_Items[1] = (Il2CppObject *)v69;
            sub_B0D840((BattleServantConfConponent_o *)&v55->m_Items[1], v69, v63, v64, v65, v66, v67, v68);
            v128.fields.dateData = (uint64_t)&dateData;
            HIDWORD(methoda.klass) = System_DateTime__get_Day(v128, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.klass + 4);
            v76 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B0D964(alreadyGetInfo, v55->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v55->max_length <= 2 )
              goto LABEL_94;
            v55->m_Items[2] = (Il2CppObject *)v76;
            sub_B0D840((BattleServantConfConponent_o *)&v55->m_Items[2], v76, v70, v71, v72, v73, v74, v75);
            v129.fields.dateData = (uint64_t)&dateData;
            LODWORD(methoda.klass) = System_DateTime__get_Hour(v129, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &methoda.klass);
            v83 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B0D964(alreadyGetInfo, v55->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v55->max_length <= 3 )
              goto LABEL_94;
            v55->m_Items[3] = (Il2CppObject *)v83;
            sub_B0D840((BattleServantConfConponent_o *)&v55->m_Items[3], v83, v77, v78, v79, v80, v81, v82);
            v130.fields.dateData = (uint64_t)&dateData;
            HIDWORD(methoda.name) = System_DateTime__get_Minute(v130, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.name + 4);
            v90 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B0D964(alreadyGetInfo, v55->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_96:
                v104 = sub_B0D99C(alreadyGetInfo);
                sub_B0D948(v104, 0LL);
              }
            }
            if ( v55->max_length <= 4 )
            {
LABEL_94:
              v103 = sub_B0D9A8(alreadyGetInfo);
              sub_B0D948(v103, 0LL);
            }
            v55->m_Items[4] = (Il2CppObject *)v90;
            sub_B0D840((BattleServantConfConponent_o *)&v55->m_Items[4], v90, v84, v85, v86, v87, v88, v89);
            v91 = System_String__Format_43928628((System_String_o *)StringLiteral_23694/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v55, 0LL);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            v93 = (Il2CppObject *)v91;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v94 = LocalizationManager__Get((System_String_o *)StringLiteral_3418/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
            v95 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
            alreadyGetInfo = (__int64)System_String__Format_43845440(v94, v95, v93, 0LL);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
              v134.fields.r = 0.32941;
              spendQpLb = (UIWidget_o *)this->fields.spendQpLb;
              v134.fields.a = 1.0;
              v134.fields.g = 0.32941;
              v134.fields.b = 0.32941;
              methoda.methodPointer = 0LL;
              methoda.invoker_method = 0LL;
              UnityEngine_Color___ctor(v134, v97, v98, v99, v100, &methoda);
              if ( spendQpLb )
              {
                *(_QWORD *)&v135.fields.r = methoda.methodPointer;
                *(_QWORD *)&v135.fields.b = methoda.invoker_method;
                UIWidget__set_color(spendQpLb, v135, 0LL);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                    &v122,
                    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alreadyGetInfo,
                    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  *(_QWORD *)&methoda.slot = v122.fields.current;
                  *(_OWORD *)&methoda.genericMethod = *(_OWORD *)&v122.fields.list;
                  while ( 1 )
                  {
                    v102 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                             (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
                             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v102 )
                      break;
                    v101 = *(_QWORD *)&methoda.slot;
                    if ( !*(_QWORD *)&methoda.slot )
                      sub_B0D97C(v102);
                    LimitCntUpItemComponent__SetMaskSprite(*(LimitCntUpItemComponent_o **)&methoda.slot, 1, 0LL);
                    *(_BYTE *)(v101 + 88) = 1;
                  }
                  LODWORD(methoda.parameters) = 908;
                  LODWORD(methoda.rgctx_data) = 1;
                  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
                    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
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
  startedAt = v28->fields.startedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v28, 0, 0LL) )
  {
    v106 = this->fields.alreadyGetLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v107 = LocalizationManager__Get((System_String_o *)StringLiteral_3417/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
    v108 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
    alreadyGetInfo = (__int64)System_String__Format(v107, v108, 0LL);
    if ( !v106 )
      goto LABEL_119;
    UILabel__set_text(v106, (System_String_o *)alreadyGetInfo, 0LL);
    v109 = (UIWidget_o *)this->fields.spendQpLb;
    *(UnityEngine_Color_o *)&v110 = UnityEngine_Color__get_white(0LL);
    if ( !v109 )
      goto LABEL_119;
    UIWidget__set_color(v109, *(UnityEngine_Color_o *)&v110, 0LL);
    if ( this->fields.haveQpVal < this->fields.spendQpVal )
    {
      v114 = (UIWidget_o *)this->fields.spendQpLb;
      *(UnityEngine_Color_o *)&v115 = UnityEngine_Color__get_red(0LL);
      if ( !v114 )
        goto LABEL_119;
      UIWidget__set_color(v114, *(UnityEngine_Color_o *)&v115, 0LL);
    }
    alreadyGetInfo = (__int64)this->fields.itemInfoList;
    if ( !alreadyGetInfo )
LABEL_119:
      sub_B0D97C(alreadyGetInfo);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v122,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alreadyGetInfo,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
    *(_QWORD *)&methoda.slot = v122.fields.current;
    *(_OWORD *)&methoda.genericMethod = *(_OWORD *)&v122.fields.list;
    while ( 1 )
    {
      v120 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
               (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
      if ( !v120 )
        break;
      v119 = *(_QWORD *)&methoda.slot;
      if ( !*(_QWORD *)&methoda.slot )
        sub_B0D97C(v120);
      LimitCntUpItemComponent__SetMaskSprite(*(LimitCntUpItemComponent_o **)&methoda.slot, 0, 0LL);
      *(_BYTE *)(v119 + 88) = 1;
    }
    LODWORD(methoda.parameters) = 908;
    v121 = ++LODWORD(methoda.rgctx_data);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
    if ( v121 && *((_DWORD *)&methoda.return_type + v121 + 1) == 908 )
      LODWORD(methoda.rgctx_data) = v121 - 1;
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventCombineCostumeEnt, 0LL, v2, v3, v4, v5, v6, v7);
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
  ServantCostumeControl_o *v8; // x19
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

  v8 = this;
  this->fields.baseSvt = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseSvt, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.baseSvtCostume = 0LL;
  v8 = (ServantCostumeControl_o *)((char *)v8 + 232);
  sub_B0D840((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  v8->fields.charaGraphBase = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.charaGraphBase, 0LL, v15, v16, v17, v18, v19, v20);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  ServantLimitImageMaster_o *v18; // x22
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v22; // w22
  struct UICharaGraphTexture_o *TexturePrefab_24036516; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4215F47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtData);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4215F47 = 1;
  }
  this->fields.baseSvt = userSvtData;
  sub_B0D840(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  v18 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v17;
  *(_QWORD *)&v30.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL);
  if ( !v18 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v18,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v22 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_24036516 = CharaGraphManager__CreateTexturePrefab_24036516(
                               this->fields.charaGraphBase,
                               userSvtData,
                               v22,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_24036516;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_24036516,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B0D97C(Instance);
  UICharaGraphTexture__SetCharacter_35242912((UICharaGraphTexture_o *)Instance, userSvtData, v22, 0LL, 0, 0LL);
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
    sub_B0D97C(executeButton);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0LL);
}


void __fastcall ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  int32_t *p_haveQpVal; // x19
  UILabel_o *v5; // x20

  if ( (byte_4215F49 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, method);
    byte_4215F49 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v5 = *(UILabel_o **)(p_haveQpVal - 29),
        SelfUserGame = System_Int32__ToString_38473032((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL),
        !v5) )
  {
    sub_B0D97C(SelfUserGame);
  }
  UILabel__set_text(v5, SelfUserGame, 0LL);
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
  UIWidget_o *detailInfoLb; // x21
  void *v14; // x0
  System_String_o *v15; // x21
  __int64 *v16; // x8
  UIWidget_o *v17; // x20
  int v18; // s0

  if ( (byte_4215F4C & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_B0D8A4(&ServantCostumeControl_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_12254/*"SHORT_RELEASE_COND_MSG"*/, v6);
    sub_B0D8A4(&StringLiteral_3411/*"COSTUME_EXE_MSG"*/, v7);
    sub_B0D8A4(&StringLiteral_7302/*"INFO_MSG_SELECT_COSTUME"*/, v8);
    sub_B0D8A4(&StringLiteral_12252/*"SHORT_ITEM_INFO_MSG"*/, v9);
    sub_B0D8A4(&StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    sub_B0D8A4(&StringLiteral_7297/*"INFO_MSG_COSTUME_SELECT_BASE"*/, v12);
    byte_4215F4C = 1;
  }
  detailInfoLb = (UIWidget_o *)this->fields.detailInfoLb;
  v14 = ServantCostumeControl_TypeInfo;
  if ( (BYTE3(ServantCostumeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeControl_TypeInfo);
    v14 = ServantCostumeControl_TypeInfo;
  }
  if ( !detailInfoLb )
    goto LABEL_43;
  UIWidget__set_color(detailInfoLb, *(UnityEngine_Color_o *)*((_QWORD *)v14 + 23), 0LL);
  if ( state == 3 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_7302/*"INFO_MSG_SELECT_COSTUME"*/;
    goto LABEL_23;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state != 2 )
  {
    if ( state )
      goto LABEL_24;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_7297/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_23;
  }
  if ( this->fields.isCanCombine )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_3411/*"COSTUME_EXE_MSG"*/;
LABEL_23:
    v15 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
    goto LABEL_24;
  }
  v17 = (UIWidget_o *)this->fields.detailInfoLb;
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
  if ( !v17 )
LABEL_43:
    sub_B0D97C(v14);
  UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v18, 0LL);
  if ( this->fields.isShortQp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12252/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_12254/*"SHORT_RELEASE_COND_MSG"*/;
    goto LABEL_23;
  }
LABEL_24:
  v14 = this->fields.detailInfoLb;
  if ( !v14 )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)v14, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  CombineCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o **p_itemInfoList; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UserServantEntity_o *baseSvt; // x8
  __int64 v30; // x22
  __int64 v31; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x21
  struct UILabel_o **p_spendQpLb; // x23
  struct System_Int32_array *itemIds; // x26
  int max_length; // w22
  struct System_Int32_array *itemNums; // x28
  __int64 v38; // x27
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v40; // x21
  __int64 v41; // x21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v42; // x23
  LimitCntUpItemComponent_o *v43; // x8
  char v44; // w26
  struct ServantCostumeEntity_o *v45; // x8
  struct ServantCostumeEntity_o *v46; // x8
  struct UserServantEntity_o *v47; // x8
  UISprite_o *costumeFaceIcon; // x20
  __int64 v49; // x21
  __int64 v50; // x22
  struct ServantCostumeEntity_o *v51; // x8
  int32_t v52; // w21
  int32_t id; // w22
  UIWidget_o *v54; // x20
  int v55; // s0
  UIWidget_o *v59; // x20
  int v60; // s0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v65; // x8
  il2cpp_array_size_t v66; // w21
  UserItemMaster_o *v67; // x20
  struct EventCombineCostumeEntity_o *v68; // x8
  struct System_Int32_array *v69; // x8
  struct EventCombineCostumeEntity_o *v70; // x8
  struct System_Int32_array *v71; // x10
  struct UserServantEntity_o *v72; // x8
  ServantCostumeReleaseMaster_o *v73; // x20
  ServantCostumeEntity_o *v74; // x21
  __int64 v75; // x22
  __int64 v76; // x23
  struct UserServantEntity_o *v77; // x8
  __int128 v78; // q1
  int32_t v79; // w22
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v81; // x8
  struct EventCombineCostumeEntity_o *v82; // x8
  EventEntity_o *v83; // x20
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x21
  __int64 v86; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+30h] [xbp-80h]
  UserItemEntity_o *v89; // [xsp+50h] [xbp-60h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4215F4A & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineCostumeMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v16);
    byte_4215F4A = 1;
  }
  v89 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_116;
  MasterData_WarQuestSelectionMaster = (CombineCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = &this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemInfoList,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_116;
  v31 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v91.fields.currentCryptoKey = v31;
  *(_QWORD *)&v91.fields.fakeValue = v30;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v91, 0LL);
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
    Instance = (int64_t)System_Int32__ToString_38473032((int)this + 256, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL);
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
      v44 = 1;
    }
    else
    {
      itemNums = entity->fields.itemNums;
      v38 = 0LL;
      do
      {
        itemInfos = this->fields.itemInfos;
        if ( !itemInfos )
          goto LABEL_116;
        if ( (unsigned int)v38 >= itemInfos->max_length )
          goto LABEL_117;
        v40 = itemInfos->m_Items[v38];
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( (unsigned int)v38 >= itemIds->max_length )
          goto LABEL_117;
        if ( !itemNums )
          goto LABEL_116;
        if ( (unsigned int)v38 >= itemNums->max_length )
        {
LABEL_117:
          v86 = sub_B0D9A8(Instance);
          sub_B0D948(v86, 0LL);
        }
        if ( !v40 )
          goto LABEL_116;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v40,
          Instance,
          itemIds->m_Items[v38 + 1],
          itemNums->m_Items[v38 + 1],
          0LL);
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_116;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
        LimitCntUpItemComponent__SetMaskSprite(v40, 0, 0LL);
        ++v38;
        v40->fields.disableOpenItemDetailDialog = 0;
      }
      while ( (int)v38 < max_length );
      v41 = 0LL;
      while ( 1 )
      {
        v42 = *p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_116;
        if ( v42->fields._size <= (unsigned int)v41 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v43 = v42->fields._items->m_Items[v41];
        if ( !v43 )
          goto LABEL_116;
        if ( !v43->fields.isItemNum )
          break;
        if ( (int)++v41 >= max_length )
        {
          v44 = 1;
          goto LABEL_39;
        }
      }
      v44 = 0;
LABEL_39:
      p_spendQpLb = &this->fields.spendQpLb;
    }
    v45 = this->fields.baseSvtCostume;
    if ( !v45 )
      goto LABEL_116;
    Instance = (int64_t)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)Instance, v45->fields.name, 0LL);
    v46 = this->fields.baseSvtCostume;
    if ( !v46 )
      goto LABEL_116;
    Instance = (int64_t)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)Instance, v46->fields.releaseInfo, 0LL);
    v47 = this->fields.baseSvt;
    if ( !v47 )
      goto LABEL_116;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
    v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v92.fields.currentCryptoKey = v50;
    *(_QWORD *)&v92.fields.fakeValue = v49;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v92, 0LL);
    v51 = this->fields.baseSvtCostume;
    if ( !v51 )
      goto LABEL_116;
    v52 = Instance;
    id = v51->fields.id;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceImage(costumeFaceIcon, v52, id, 0LL);
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
    v44 = 0;
    p_spendQpLb = &this->fields.spendQpLb;
  }
  v54 = (UIWidget_o *)*p_spendQpLb;
  *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_white(0LL);
  if ( !v54 )
    goto LABEL_116;
  UIWidget__set_color(v54, *(UnityEngine_Color_o *)&v55, 0LL);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    v59 = (UIWidget_o *)*p_spendQpLb;
    *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_red(0LL);
    if ( !v59 )
      goto LABEL_116;
    UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v60, 0LL);
    this->fields.isShortQp = 1;
  }
  if ( (v44 & 1) == 0 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v65 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v65 )
      goto LABEL_116;
    v66 = 0;
    while ( (signed int)v66 < (signed int)v65->max_length )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_116;
      v67 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v68 = this->fields.eventCombineCostumeEnt;
      if ( !v68 )
        goto LABEL_116;
      v69 = v68->fields.itemIds;
      if ( !v69 )
        goto LABEL_116;
      if ( v66 >= v69->max_length )
        goto LABEL_117;
      if ( !v67 )
        goto LABEL_116;
      Instance = UserItemMaster__TryGetEntity(v67, &v89, Instance, v69->m_Items[v66 + 1], 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_83;
      if ( !v89 )
        goto LABEL_116;
      v70 = this->fields.eventCombineCostumeEnt;
      if ( !v70 )
        goto LABEL_116;
      v71 = v70->fields.itemNums;
      if ( !v71 )
        goto LABEL_116;
      if ( v66 >= v71->max_length )
        goto LABEL_117;
      if ( v89->fields.num < v71->m_Items[v66 + 1] )
      {
LABEL_83:
        this->fields.isShortEventItem = 1;
        break;
      }
      v65 = v70->fields.itemIds;
      ++v66;
      if ( !v65 )
        goto LABEL_116;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_116;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v72 = this->fields.baseSvt;
  if ( !v72 )
    goto LABEL_116;
  v73 = (ServantCostumeReleaseMaster_o *)Instance;
  v74 = this->fields.baseSvtCostume;
  v76 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
  v75 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v93.fields.currentCryptoKey = v76;
  *(_QWORD *)&v93.fields.fakeValue = v75;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v93, 0LL);
  v77 = this->fields.baseSvt;
  if ( !v77 )
    goto LABEL_116;
  v78 = *(_OWORD *)&v77->fields.id.fields.fakeValue;
  v79 = Instance;
  *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v77->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v88.fields.fakeValue = v78;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v87 = v88;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v87, 0LL);
  if ( !v73 )
    goto LABEL_116;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v73, v74, v79, Instance, 0LL);
  v81 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v81 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_103;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___),
        (v82 = this->fields.eventCombineCostumeEnt) == 0LL)
    || !Instance
    || (Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              v82->fields.eventId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
LABEL_116:
    sub_B0D97C(Instance);
  }
  v83 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_113;
  }
  startedAt = v83->fields.startedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v83, 0, 0LL) )
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CostumeListViewManager_o *costumeListInfo; // x8
  System_Int32_array **baseSvtCostume; // x1
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x21
  __int64 *p_eventCombineCostumeEnt; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v23; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  System_Int32_array **ListBySvtIdAndCostumeId; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  LimitCntUpItemComponent_o *eventItemIcon; // x21
  __int64 v34; // x9
  __int64 v35; // x8
  __int64 v36; // x9
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v8 = this;
  if ( (byte_4215F48 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    this = (ServantCostumeControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4215F48 = 1;
  }
  costumeListInfo = v8->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_27;
  baseSvtCostume = (System_Int32_array **)costumeListInfo->fields.baseSvtCostume;
  v8->fields.baseSvtCostume = (struct ServantCostumeEntity_o *)baseSvtCostume;
  p_baseSvtCostume = &v8->fields.baseSvtCostume;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.baseSvtCostume, baseSvtCostume, v2, v3, v4, v5, v6, v7);
  p_eventCombineCostumeEnt = (__int64 *)&v8->fields.eventCombineCostumeEnt;
  v8->fields.eventCombineCostumeEnt = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.eventCombineCostumeEnt, 0LL, v16, v17, v18, v19, v20, v21);
  this = (ServantCostumeControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_27;
  this = (ServantCostumeControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = v8->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_27;
  v23 = (EventCombineCostumeMaster_o *)this;
  v25 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v25;
  *(_QWORD *)&v42.fields.fakeValue = v24;
  this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v42, 0LL);
  if ( !*p_baseSvtCostume || !v23 )
    goto LABEL_27;
  ListBySvtIdAndCostumeId = (System_Int32_array **)EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                                     v23,
                                                     (int32_t)this,
                                                     (*p_baseSvtCostume)->fields.id,
                                                     0LL);
  *p_eventCombineCostumeEnt = (__int64)ListBySvtIdAndCostumeId;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v8->fields.eventCombineCostumeEnt,
    ListBySvtIdAndCostumeId,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( *p_eventCombineCostumeEnt )
  {
    eventItemIcon = v8->fields.eventItemIcon;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (ServantCostumeControl_o *)NetworkManager__get_UserId(0LL);
    v34 = *p_eventCombineCostumeEnt;
    if ( *p_eventCombineCostumeEnt )
    {
      v35 = *(_QWORD *)(v34 + 40);
      if ( v35 )
      {
        if ( !*(_DWORD *)(v35 + 24) )
          goto LABEL_28;
        v36 = *(_QWORD *)(v34 + 32);
        if ( !v36 )
          goto LABEL_27;
        if ( !*(_DWORD *)(v36 + 24) )
        {
LABEL_28:
          v41 = sub_B0D9A8(this);
          sub_B0D948(v41, 0LL);
        }
        if ( eventItemIcon )
        {
          LimitCntUpItemComponent__setLimitUpItemInfo(
            eventItemIcon,
            (int64_t)this,
            *(_DWORD *)(v35 + 32),
            *(_DWORD *)(v36 + 32),
            0LL);
          goto LABEL_22;
        }
      }
    }
LABEL_27:
    sub_B0D97C(this);
  }
LABEL_22:
  this = (ServantCostumeControl_o *)v8->fields.costumeListInfo;
  if ( !this )
    goto LABEL_27;
  this = (ServantCostumeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ServantCostumeControl__SetHaveQpInfo(v8, v37);
  ServantCostumeControl__SetSvtCostumeCombineData(v8, v38);
  ServantCostumeControl__SetExeBtnState(v8, v39);
  this = (ServantCostumeControl_o *)v8->fields.costumeReleaseInfo;
  if ( !this )
    goto LABEL_27;
  this = (ServantCostumeControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  ServantCostumeControl__RefreshEventCostumeInfo(v8, v40);
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
    sub_B0D97C(costumeListInfo);
  }
  CostumeListViewManager__SetMode_27760668((CostumeListViewManager_o *)costumeListInfo, 2, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_0(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestCombineCostume(combineRootComponent, 0, this->fields.itemInfoList, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_1(
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
  if ( (byte_4215F53 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v4);
    this = (ServantCostumeControl_o *)sub_B0D8A4(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_2__, v5);
    byte_4215F53 = 1;
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
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v12, (Il2CppObject *)v3, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_2__, 0LL);
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)v3, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
LABEL_7:
    sub_B0D97C(this);
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, qp, haveQpVal, v12, v15, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_2(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_4215F54 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v5);
    byte_4215F54 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v6
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.eventItemIcon,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__),
        (eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt) == 0LL)
    || (combineRootComponent = this->fields.combineRootComponent) == 0LL )
  {
    sub_B0D97C(combineRootComponent);
  }
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
  UserServantEntity_o **p_baseSvt; // x20
  __int128 v10; // q1
  int64_t v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  DataManager_o *Instance; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  if ( (byte_4215F4B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_B0D8A4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4215F4B = 1;
  }
  p_baseSvt = &this->fields.baseSvt;
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v10 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v20 = v21;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v20, 0LL);
    *p_baseSvt = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseSvt, 0LL, v12, v13, v14, v15, v16, v17);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               &this->fields.baseSvt,
               v11,
               (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &this->fields.baseSvt,
                   v11,
                   (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_B0D97C(Instance);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl___c__DisplayClass57_0___CheckCondJoin_b__0(
        ServantCostumeControl___c__DisplayClass57_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4212221 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_4212221 = 1;
  }
  if ( decide )
    ActionExtensions__Call(this->fields.callBack, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall ServantCostumeControl___c__DisplayClass58_0___ctor(
        ServantCostumeControl___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl___c__DisplayClass58_0___OnClickExeCostumeCombine_b__3(
        ServantCostumeControl___c__DisplayClass58_0_o *this,
        bool useEventItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct ServantCostumeControl_o *v12; // x8
  struct ServantCostumeControl_o **p__4__this; // x19
  struct ServantCostumeControl_o *v14; // t1
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeControl_o *_4__this; // t1
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v20; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int32_t haveQpVal; // w23
  System_Action_o *v24; // x25
  Il2CppObject *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x19

  if ( (byte_4212222 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, useEventItem);
    sub_B0D8A4(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v5);
    sub_B0D8A4(&Method_ServantCostumeControl___c__DisplayClass58_1__OnClickExeCostumeCombine_b__4__, v6);
    sub_B0D8A4(&ServantCostumeControl___c__DisplayClass58_1_TypeInfo, v7);
    byte_4212222 = 1;
  }
  v8 = sub_B0D974(ServantCostumeControl___c__DisplayClass58_1_TypeInfo, useEventItem, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 24) = this;
  sub_B0D840(v8 + 24, this);
  *(_BYTE *)(v8 + 16) = useEventItem;
  if ( !useEventItem )
  {
    combineCostumeEntity = this->fields.combineCostumeEntity;
    if ( combineCostumeEntity )
    {
      _4__this = this->fields.__4__this;
      p__4__this = &this->fields.__4__this;
      v12 = _4__this;
      if ( _4__this )
      {
        p_qp = &combineCostumeEntity->fields.qp;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_B0D97C(v9);
  }
  v14 = this->fields.__4__this;
  p__4__this = &this->fields.__4__this;
  v12 = v14;
  if ( !v14 )
    goto LABEL_14;
  eventCombineCostumeEnt = v12->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_14;
  p_qp = &eventCombineCostumeEnt->fields.qp;
LABEL_11:
  baseSvtCostume = v12->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_14;
  v20 = *p_qp;
  exeCombineDlg = v12->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = v12->fields.haveQpVal;
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_ServantCostumeControl___c__DisplayClass58_1__OnClickExeCostumeCombine_b__4__,
    0LL);
  v25 = (Il2CppObject *)*p__4__this;
  v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(v28, v25, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
    goto LABEL_14;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v20, haveQpVal, v24, v28, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemInfoList; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  struct ServantCostumeControl___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct ServantCostumeControl___c__DisplayClass58_0_o *v12; // x8
  struct ServantCostumeControl_o *v13; // x8

  if ( (byte_4212223 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v5);
    byte_4212223 = 1;
  }
  itemInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, method, v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    itemInfoList,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
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
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
  }
  else
  {
    eventId = 0;
  }
  v12 = this->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_16;
  v13 = v12->fields.__4__this;
  if ( !v13 )
    goto LABEL_16;
  combineRootComponent = v13->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v13->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_16:
    sub_B0D97C(combineRootComponent);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0LL);
}