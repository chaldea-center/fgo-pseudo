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

  if ( (byte_4189F2F & 1) == 0 )
  {
    sub_B2C35C(&ServantCostumeControl_TypeInfo, v1);
    byte_4189F2F = 1;
  }
  v6 = 1063321600;
  v7 = 1065156608;
  v8 = 0;
  v9 = (struct ServantCostumeControl_StaticFields)0LL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v9);
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  EventServantEntity_o *v23; // x22
  CommonUI_o *Instance; // x20
  System_String_o *v25; // x21
  System_String_o *v26; // x23
  Il2CppObject *v27; // x1
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  System_String_o *v30; // x24
  CommonConfirmDialog_ClickDelegate_o *v31; // x25

  if ( (byte_4189F2A & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, callBack);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&string_TypeInfo, v7);
    sub_B2C35C(&Method_ServantCostumeControl___c__DisplayClass57_0__CheckCondJoin_b__0__, v8);
    sub_B2C35C(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_3316/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, v10);
    sub_B2C35C(&StringLiteral_3315/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, v11);
    sub_B2C35C(&StringLiteral_3314/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, v12);
    sub_B2C35C(&StringLiteral_3317/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, v13);
    byte_4189F2A = 1;
  }
  v14 = sub_B2C42C(ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
  ServantCostumeControl___c__DisplayClass57_0___ctor((ServantCostumeControl___c__DisplayClass57_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  *(_QWORD *)(v14 + 16) = callBack;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)callBack, v17, v18, v19, v20, v21, v22);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_19;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0LL);
  if ( !this->fields.baseSvt )
    goto LABEL_19;
  v23 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
    return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3316/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3314/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0LL);
  v27 = (Il2CppObject *)(v23 ? EventServantEntity__getEndTimeStr(v23, 0LL) : string_TypeInfo->static_fields->Empty);
  v28 = System_String__Format(v26, v27, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3317/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3315/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0LL);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)v14,
    Method_ServantCostumeControl___c__DisplayClass57_0__CheckCondJoin_b__0__,
    0LL);
  if ( !Instance )
LABEL_19:
    sub_B2C434(baseSvt, v16);
  CommonUI__OpenConfirmDecideDlg(Instance, v25, v28, v29, v30, v31, 0, 0.0, 14.7, 0, 0, 0, 290, 0, 0LL);
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

  if ( (byte_4189F23 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4189F23 = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v29, 0LL) )
      {
        ServantCostumeControl__InitDispInfo(this, v15);
        this->fields.baseSvtCostume = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseSvtCostume, 0LL, v16, v17, v18, v19, v20, v21);
        this->fields.eventCombineCostumeEnt = 0LL;
        sub_B2C2F8(
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
  sub_B2C2F8(
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
        v6 = sub_B2C460(this);
        sub_B2C400(v6, 0LL);
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
    sub_B2C434(this, method);
  }
}


void __fastcall ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_B2C434(0LL, method);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseSvtCostume, 0LL, v2, v3, v4, v5, v6, v7);
  p_baseSvtCostume[6] = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_baseSvtCostume + 6), 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4189F20 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v3);
    byte_4189F20 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isBaseSelect = 0;
  ServantCostumeControl__InitDispInfo(this, v4);
  ServantCostumeControl__ClearItemList(this, v5);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  costumeFaceIconFrame = System_Int32__ToString_38381416((int)this + 256, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_15;
  UILabel__set_text(spendQpLb, costumeFaceIconFrame, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v9);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v10);
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
        ServantCostumeControl__SetExeBtnState(this, v12),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeListInfo) == 0LL)
    || (costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)costumeFaceIconFrame,
                                                    0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 0, 0LL),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL) )
  {
LABEL_15:
    sub_B2C434(costumeFaceIconFrame, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0LL);
  ServantCostumeControl__ResetInit(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__InitCombineCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *gameObject; // x0
  __int64 v7; // x1
  UIWidget_o *v8; // x20
  int v9; // s0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v17; // x1

  if ( (byte_4189F22 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4189F22 = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  gameObject = System_Int32__ToString_38381416((int)this + 256, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_18;
  UILabel__set_text(spendQpLb, gameObject, 0LL);
  v8 = (UIWidget_o *)this->fields.spendQpLb;
  *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
  if ( !v8 )
    goto LABEL_18;
  UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v9, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v13);
  ServantCostumeControl__ClearItemList(this, v14);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v15);
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
        ServantCostumeControl__SetExeBtnState(this, v17),
        (gameObject = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = (System_String_o *)this->fields.eventCombineCostumeBalloon) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
LABEL_18:
    sub_B2C434(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *v4; // x20
  struct UICharaGraphTexture_o *charaGraph; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4189F21 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189F21 = 1;
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
      sub_B2C434(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_charaGraph, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4189F2E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189F2E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B2C434(0LL, v3);
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
  __int64 v15; // x1
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  EventEntity_o *v17; // x20
  SetRarityDialogControl_o *exeCombineDlg; // x20
  EventCombineCostumeEntity_o *v19; // x21
  System_Action_o *v20; // x22
  System_Action_o *v21; // x23
  struct ServantCostumeEntity_o *v22; // x8
  System_String_o *name; // x21
  SetRarityDialogControl_o *v24; // x20
  int32_t haveQpVal; // w22
  int32_t spendQpVal; // w23
  System_Action_o *v27; // x24
  int64_t startedAt; // x22
  __int64 v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v37; // x21
  __int64 v38; // x22
  __int64 v39; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  System_Int32_array **Entity; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  SetRarityDialogControl_o *v48; // x21
  CombineCostumeEntity_o *v49; // x22
  EventCombineCostumeEntity_o *v50; // x23
  bool v51; // w24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v53; // x25
  System_Action_o *v54; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v2 = this;
  if ( (byte_4189F2B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&System_Action_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_CombineCostumeMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v11);
    sub_B2C35C(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_0__, v12);
    sub_B2C35C(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_1__, v13);
    sub_B2C35C(&Method_ServantCostumeControl___c__DisplayClass58_0__OnClickExeCostumeCombine_b__3__, v14);
    this = (ServantCostumeControl_o *)sub_B2C35C(&ServantCostumeControl___c__DisplayClass58_0_TypeInfo, v15);
    byte_4189F2B = 1;
  }
  if ( v2->fields.eventCombineCostumeEnt )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v2->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_37;
    if ( !this )
      goto LABEL_37;
    this = (ServantCostumeControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    v17 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0LL) )
    {
      exeCombineDlg = v2->fields.exeCombineDlg;
      v19 = v2->fields.eventCombineCostumeEnt;
      v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)v2,
        Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_1__,
        0LL);
      v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v21, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v19, v20, v21, 0LL);
        return;
      }
LABEL_37:
      sub_B2C434(this, method);
    }
    startedAt = v17->fields.startedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v17, 0, 0LL) )
    {
      v29 = sub_B2C42C(ServantCostumeControl___c__DisplayClass58_0_TypeInfo);
      ServantCostumeControl___c__DisplayClass58_0___ctor((ServantCostumeControl___c__DisplayClass58_0_o *)v29, 0LL);
      if ( !v29 )
        goto LABEL_37;
      *(_QWORD *)(v29 + 24) = v2;
      sub_B2C2F8((BattleServantConfConponent_o *)(v29 + 24), (System_Int32_array **)v2, v30, v31, v32, v33, v34, v35);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ServantCostumeControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v2->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_37;
      v37 = (CombineCostumeMaster_o *)this;
      v39 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v55.fields.currentCryptoKey = v39;
      *(_QWORD *)&v55.fields.fakeValue = v38;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v55, 0LL);
      baseSvtCostume = v2->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v37 )
        goto LABEL_37;
      Entity = (System_Int32_array **)CombineCostumeMaster__GetEntity(
                                        v37,
                                        (int32_t)this,
                                        baseSvtCostume->fields.id,
                                        0LL);
      *(_QWORD *)(v29 + 16) = Entity;
      sub_B2C2F8((BattleServantConfConponent_o *)(v29 + 16), Entity, v42, v43, v44, v45, v46, v47);
      v48 = v2->fields.exeCombineDlg;
      v49 = *(CombineCostumeEntity_o **)(v29 + 16);
      v50 = v2->fields.eventCombineCostumeEnt;
      v51 = v2->fields.isShortNeedItem || v2->fields.isShortQp;
      isShortEventItem = v2->fields.isShortEventItem;
      v53 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v53,
        (Il2CppObject *)v29,
        Method_ServantCostumeControl___c__DisplayClass58_0__OnClickExeCostumeCombine_b__3__,
        (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
      v54 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v54, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( !v48 )
        goto LABEL_37;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v48,
        v49,
        v50,
        v51,
        isShortEventItem,
        v53,
        v54,
        0LL);
    }
  }
  else
  {
    v22 = v2->fields.baseSvtCostume;
    if ( !v22 )
      goto LABEL_37;
    name = v22->fields.name;
    v24 = v2->fields.exeCombineDlg;
    haveQpVal = v2->fields.haveQpVal;
    spendQpVal = v2->fields.spendQpVal;
    v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_0__, 0LL);
    if ( !v24 )
      goto LABEL_37;
    SetRarityDialogControl__SetConfirmCombineCostume(v24, name, spendQpVal, haveQpVal, v27, 0LL, 0LL);
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

  if ( (byte_4189F2C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_3406/*"COSTUME_SELECT_SERVANT_MSG"*/, v4);
    byte_4189F2C = 1;
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
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3406/*"COSTUME_SELECT_SERVANT_MSG"*/, 0LL);
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
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_26;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0LL);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     v11,
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    v13 = sub_B2C460(alreadyGetInfo);
    sub_B2C400(v13, 0LL);
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
    sub_B2C434(alreadyGetInfo, method);
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
  System_Object_array *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x22
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x22
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x22
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x22
  System_String_o *v92; // x0
  UILabel_o *alreadyGetLabel; // x21
  Il2CppObject *v94; // x22
  System_String_o *v95; // x23
  Il2CppObject *v96; // x0
  UIWidget_o *spendQpLb; // x21
  float v98; // s4
  float v99; // s5
  float v100; // s6
  float v101; // s7
  __int64 v102; // x21
  _BOOL8 v103; // x0
  __int64 v104; // x1
  __int64 v105; // x0
  __int64 v106; // x0
  int64_t startedAt; // x21
  UILabel_o *v108; // x20
  System_String_o *v109; // x21
  Il2CppObject *v110; // x0
  UIWidget_o *v111; // x20
  int v112; // s0
  UIWidget_o *v116; // x20
  int v117; // s0
  __int64 v121; // x19
  _BOOL8 v122; // x0
  __int64 v123; // x1
  int v124; // w19
  System_Collections_Generic_List_Enumerator_T__o v125; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+18h] [xbp-98h] BYREF
  uint64_t dateData; // [xsp+78h] [xbp-38h] BYREF
  System_DateTime_o v128; // 0:x0.8
  System_DateTime_o v129; // 0:x0.8
  System_DateTime_o v130; // 0:x0.8
  System_DateTime_o v131; // 0:x0.8
  System_DateTime_o v132; // 0:x0.8
  System_DateTime_o v133; // 0:x0.8
  System_TimeSpan_o v134; // 0:x1.8
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189F2D & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B2C35C(&System_DateTime_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___, v10);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&object___TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&System_TimeSpan_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_12708/*"ServantCostumeEventBalloon_"*/, v19);
    sub_B2C35C(&StringLiteral_3405/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v20);
    sub_B2C35C(&StringLiteral_3404/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v21);
    sub_B2C35C(&StringLiteral_23616/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v22);
    sub_B2C35C(&StringLiteral_5575/*"EVENT_COMBINE_COSTUME_ITEM"*/, v23);
    byte_4189F2D = 1;
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
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_119;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_119;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
    v35 = System_String__Concat_44305532((System_String_o *)StringLiteral_12708/*"ServantCostumeEventBalloon_"*/, v34, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               eventCombineCostumeBalloonData,
                                                               v35,
                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
        UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
      v43 = this->fields.eventCombineCostumeEnt;
      if ( !v43 )
        goto LABEL_119;
      v44 = v43->fields.itemIds;
      if ( !v44 )
        goto LABEL_119;
      if ( !v44->max_length )
        goto LABEL_94;
      if ( !alreadyGetInfo )
        goto LABEL_119;
      ServantCostumeEventBalloon__Set((ServantCostumeEventBalloon_o *)alreadyGetInfo, v44->m_Items[1], v42);
      v45 = this->fields.eventCombineCostumeEnt;
      if ( !v45 )
        goto LABEL_119;
      v46 = v45->fields.itemIds;
      if ( !v46 )
        goto LABEL_119;
      if ( !v46->max_length )
        goto LABEL_94;
      this->fields.generatedBalloonId = v46->m_Items[1];
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
    v49 = 0;
    while ( v49 < max_length )
    {
      v50 = &alreadyGetLabelBgList->obj.klass + (int)v49;
      v51 = (UnityEngine_Component_o *)v50[4];
      if ( !v51 )
        goto LABEL_119;
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)v50[4],
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  v51,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v135.fields.x = 0.0;
      v135.fields.z = 0.0;
      v135.fields.y = -15.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v51, v135, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject(v51, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v49 >= max_length )
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
  v136.fields.y = -16.0;
  v136.fields.x = 0.0;
  v136.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v136, 0LL);
  alreadyGetInfo = EventEntity__IsOpen(v28, 0, 0LL);
  if ( (alreadyGetInfo & 1) != 0 )
  {
    v52 = this->fields.alreadyGetLabelBgList;
    if ( v52 )
    {
      if ( v52->max_length <= 1 )
        goto LABEL_94;
      alreadyGetInfo = (__int64)v52->m_Items[1];
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
          v53.fields._ticks = System_TimeSpan__FromMinutes(1.0, 0LL).fields._ticks;
          endedAt = v28->fields.endedAt;
          ticks = v53.fields._ticks;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          dateData = NetworkManager__getServerDateTime_26271756(endedAt, 0LL).fields.dateData;
          if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_DateTime_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          }
          v128.fields.dateData = dateData;
          v134.fields._ticks = ticks;
          dateData = System_DateTime__op_Addition(v128, v134, 0LL).fields.dateData;
          v56 = (System_Object_array *)sub_B2C374(object___TypeInfo, 5LL);
          v129.fields.dateData = (uint64_t)&dateData;
          HIDWORD(methoda.return_type) = System_DateTime__get_Year(v129, 0LL);
          alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.return_type + 4);
          if ( v56 )
          {
            v63 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B2C41C(alreadyGetInfo, v56->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( !v56->max_length )
              goto LABEL_94;
            v56->m_Items[0] = (Il2CppObject *)v63;
            sub_B2C2F8((BattleServantConfConponent_o *)v56->m_Items, v63, v57, v58, v59, v60, v61, v62);
            v130.fields.dateData = (uint64_t)&dateData;
            LODWORD(methoda.return_type) = System_DateTime__get_Month(v130, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
            v70 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B2C41C(alreadyGetInfo, v56->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v56->max_length <= 1 )
              goto LABEL_94;
            v56->m_Items[1] = (Il2CppObject *)v70;
            sub_B2C2F8((BattleServantConfConponent_o *)&v56->m_Items[1], v70, v64, v65, v66, v67, v68, v69);
            v131.fields.dateData = (uint64_t)&dateData;
            HIDWORD(methoda.klass) = System_DateTime__get_Day(v131, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.klass + 4);
            v77 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B2C41C(alreadyGetInfo, v56->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v56->max_length <= 2 )
              goto LABEL_94;
            v56->m_Items[2] = (Il2CppObject *)v77;
            sub_B2C2F8((BattleServantConfConponent_o *)&v56->m_Items[2], v77, v71, v72, v73, v74, v75, v76);
            v132.fields.dateData = (uint64_t)&dateData;
            LODWORD(methoda.klass) = System_DateTime__get_Hour(v132, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &methoda.klass);
            v84 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B2C41C(alreadyGetInfo, v56->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v56->max_length <= 3 )
              goto LABEL_94;
            v56->m_Items[3] = (Il2CppObject *)v84;
            sub_B2C2F8((BattleServantConfConponent_o *)&v56->m_Items[3], v84, v78, v79, v80, v81, v82, v83);
            v133.fields.dateData = (uint64_t)&dateData;
            HIDWORD(methoda.name) = System_DateTime__get_Minute(v133, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.name + 4);
            v91 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B2C41C(alreadyGetInfo, v56->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_96:
                v106 = sub_B2C454(alreadyGetInfo);
                sub_B2C400(v106, 0LL);
              }
            }
            if ( v56->max_length <= 4 )
            {
LABEL_94:
              v105 = sub_B2C460(alreadyGetInfo);
              sub_B2C400(v105, 0LL);
            }
            v56->m_Items[4] = (Il2CppObject *)v91;
            sub_B2C2F8((BattleServantConfConponent_o *)&v56->m_Items[4], v91, v85, v86, v87, v88, v89, v90);
            v92 = System_String__Format_44384256((System_String_o *)StringLiteral_23616/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v56, 0LL);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            v94 = (Il2CppObject *)v92;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v95 = LocalizationManager__Get((System_String_o *)StringLiteral_3405/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
            v96 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5575/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
            alreadyGetInfo = (__int64)System_String__Format_44301068(v95, v96, v94, 0LL);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
              v137.fields.r = 0.32941;
              spendQpLb = (UIWidget_o *)this->fields.spendQpLb;
              v137.fields.a = 1.0;
              v137.fields.g = 0.32941;
              v137.fields.b = 0.32941;
              methoda.methodPointer = 0LL;
              methoda.invoker_method = 0LL;
              UnityEngine_Color___ctor(v137, v98, v99, v100, v101, &methoda);
              if ( spendQpLb )
              {
                *(_QWORD *)&v138.fields.r = methoda.methodPointer;
                *(_QWORD *)&v138.fields.b = methoda.invoker_method;
                UIWidget__set_color(spendQpLb, v138, 0LL);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                    &v125,
                    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alreadyGetInfo,
                    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  *(_QWORD *)&methoda.slot = v125.fields.current;
                  *(_OWORD *)&methoda.genericMethod = *(_OWORD *)&v125.fields.list;
                  while ( 1 )
                  {
                    v103 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                             (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
                             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v103 )
                      break;
                    v102 = *(_QWORD *)&methoda.slot;
                    if ( !*(_QWORD *)&methoda.slot )
                      sub_B2C434(v103, v104);
                    LimitCntUpItemComponent__SetMaskSprite(*(LimitCntUpItemComponent_o **)&methoda.slot, 1, 0LL);
                    *(_BYTE *)(v102 + 88) = 1;
                  }
                  LODWORD(methoda.parameters) = 908;
                  LODWORD(methoda.rgctx_data) = 1;
                  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
                    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
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
    v108 = this->fields.alreadyGetLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v109 = LocalizationManager__Get((System_String_o *)StringLiteral_3404/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
    v110 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5575/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
    alreadyGetInfo = (__int64)System_String__Format(v109, v110, 0LL);
    if ( !v108 )
      goto LABEL_119;
    UILabel__set_text(v108, (System_String_o *)alreadyGetInfo, 0LL);
    v111 = (UIWidget_o *)this->fields.spendQpLb;
    *(UnityEngine_Color_o *)&v112 = UnityEngine_Color__get_white(0LL);
    if ( !v111 )
      goto LABEL_119;
    UIWidget__set_color(v111, *(UnityEngine_Color_o *)&v112, 0LL);
    if ( this->fields.haveQpVal < this->fields.spendQpVal )
    {
      v116 = (UIWidget_o *)this->fields.spendQpLb;
      *(UnityEngine_Color_o *)&v117 = UnityEngine_Color__get_red(0LL);
      if ( !v116 )
        goto LABEL_119;
      UIWidget__set_color(v116, *(UnityEngine_Color_o *)&v117, 0LL);
    }
    alreadyGetInfo = (__int64)this->fields.itemInfoList;
    if ( !alreadyGetInfo )
LABEL_119:
      sub_B2C434(alreadyGetInfo, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v125,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alreadyGetInfo,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
    *(_QWORD *)&methoda.slot = v125.fields.current;
    *(_OWORD *)&methoda.genericMethod = *(_OWORD *)&v125.fields.list;
    while ( 1 )
    {
      v122 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
               (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
      if ( !v122 )
        break;
      v121 = *(_QWORD *)&methoda.slot;
      if ( !*(_QWORD *)&methoda.slot )
        sub_B2C434(v122, v123);
      LimitCntUpItemComponent__SetMaskSprite(*(LimitCntUpItemComponent_o **)&methoda.slot, 0, 0LL);
      *(_BYTE *)(v121 + 88) = 1;
    }
    LODWORD(methoda.parameters) = 908;
    v124 = ++LODWORD(methoda.rgctx_data);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
    if ( v124 && *((_DWORD *)&methoda.return_type + v124 + 1) == 908 )
      LODWORD(methoda.rgctx_data) = v124 - 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventCombineCostumeEnt, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseSvt, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.baseSvtCostume = 0LL;
  v8 = (ServantCostumeControl_o *)((char *)v8 + 232);
  sub_B2C2F8((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  v8->fields.charaGraphBase = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.charaGraphBase, 0LL, v15, v16, v17, v18, v19, v20);
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
  __int64 v14; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  ServantLimitImageMaster_o *v19; // x22
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v23; // w22
  struct UICharaGraphTexture_o *TexturePrefab_25402508; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4189F24 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtData);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4189F24 = 1;
  }
  this->fields.baseSvt = userSvtData;
  sub_B2C2F8(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v18 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL);
  if ( !v19 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v19,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v23 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_25402508 = CharaGraphManager__CreateTexturePrefab_25402508(
                               this->fields.charaGraphBase,
                               userSvtData,
                               v23,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_25402508;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_25402508,
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
LABEL_16:
    sub_B2C434(Instance, v14);
  UICharaGraphTexture__SetCharacter_35719956((UICharaGraphTexture_o *)Instance, userSvtData, v23, 0LL, 0, 0LL);
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
    sub_B2C434(executeButton, method);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0LL);
}


void __fastcall ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t *p_haveQpVal; // x19
  UILabel_o *v6; // x20

  if ( (byte_4189F26 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, method);
    byte_4189F26 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v6 = *(UILabel_o **)(p_haveQpVal - 29),
        SelfUserGame = System_Int32__ToString_38381416((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL),
        !v6) )
  {
    sub_B2C434(SelfUserGame, v4);
  }
  UILabel__set_text(v6, SelfUserGame, 0LL);
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

  if ( (byte_4189F29 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&ServantCostumeControl_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_12216/*"SHORT_RELEASE_COND_MSG"*/, v6);
    sub_B2C35C(&StringLiteral_3398/*"COSTUME_EXE_MSG"*/, v7);
    sub_B2C35C(&StringLiteral_7282/*"INFO_MSG_SELECT_COSTUME"*/, v8);
    sub_B2C35C(&StringLiteral_12214/*"SHORT_ITEM_INFO_MSG"*/, v9);
    sub_B2C35C(&StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    sub_B2C35C(&StringLiteral_7277/*"INFO_MSG_COSTUME_SELECT_BASE"*/, v12);
    byte_4189F29 = 1;
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
    v16 = &StringLiteral_7282/*"INFO_MSG_SELECT_COSTUME"*/;
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
    v16 = &StringLiteral_7277/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_23;
  }
  if ( this->fields.isCanCombine )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_3398/*"COSTUME_EXE_MSG"*/;
LABEL_23:
    v15 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
    goto LABEL_24;
  }
  v17 = (UIWidget_o *)this->fields.detailInfoLb;
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
  if ( !v17 )
LABEL_43:
    sub_B2C434(v14, *(_QWORD *)&state);
  UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v18, 0LL);
  if ( this->fields.isShortQp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_12216/*"SHORT_RELEASE_COND_MSG"*/;
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
  __int64 v18; // x1
  CombineCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o **p_itemInfoList; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UserServantEntity_o *baseSvt; // x8
  __int64 v29; // x22
  __int64 v30; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x21
  struct UILabel_o **p_spendQpLb; // x23
  struct System_Int32_array *itemIds; // x26
  int max_length; // w22
  struct System_Int32_array *itemNums; // x28
  __int64 v37; // x27
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v39; // x21
  __int64 v40; // x21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v41; // x23
  LimitCntUpItemComponent_o *v42; // x8
  char v43; // w26
  struct ServantCostumeEntity_o *v44; // x8
  struct ServantCostumeEntity_o *v45; // x8
  struct UserServantEntity_o *v46; // x8
  UISprite_o *costumeFaceIcon; // x20
  __int64 v48; // x21
  __int64 v49; // x22
  struct ServantCostumeEntity_o *v50; // x8
  int32_t v51; // w21
  int32_t id; // w22
  UIWidget_o *v53; // x20
  int v54; // s0
  UIWidget_o *v58; // x20
  int v59; // s0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v64; // x8
  il2cpp_array_size_t v65; // w21
  UserItemMaster_o *v66; // x20
  struct EventCombineCostumeEntity_o *v67; // x8
  struct System_Int32_array *v68; // x8
  struct EventCombineCostumeEntity_o *v69; // x8
  struct System_Int32_array *v70; // x10
  struct UserServantEntity_o *v71; // x8
  ServantCostumeReleaseMaster_o *v72; // x20
  ServantCostumeEntity_o *v73; // x21
  __int64 v74; // x22
  __int64 v75; // x23
  struct UserServantEntity_o *v76; // x8
  __int128 v77; // q1
  int32_t v78; // w22
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v80; // x8
  struct EventCombineCostumeEntity_o *v81; // x8
  EventEntity_o *v82; // x20
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x21
  __int64 v85; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+30h] [xbp-80h]
  UserItemEntity_o *v88; // [xsp+50h] [xbp-60h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4189F27 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineCostumeMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v16);
    byte_4189F27 = 1;
  }
  v88 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_116;
  MasterData_WarQuestSelectionMaster = (CombineCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = &this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemInfoList,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_116;
  v30 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v90.fields.currentCryptoKey = v30;
  *(_QWORD *)&v90.fields.fakeValue = v29;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v90, 0LL);
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
    Instance = (int64_t)System_Int32__ToString_38381416((int)this + 256, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL);
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
      v43 = 1;
    }
    else
    {
      itemNums = entity->fields.itemNums;
      v37 = 0LL;
      do
      {
        itemInfos = this->fields.itemInfos;
        if ( !itemInfos )
          goto LABEL_116;
        if ( (unsigned int)v37 >= itemInfos->max_length )
          goto LABEL_117;
        v39 = itemInfos->m_Items[v37];
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( (unsigned int)v37 >= itemIds->max_length )
          goto LABEL_117;
        if ( !itemNums )
          goto LABEL_116;
        if ( (unsigned int)v37 >= itemNums->max_length )
        {
LABEL_117:
          v85 = sub_B2C460(Instance);
          sub_B2C400(v85, 0LL);
        }
        if ( !v39 )
          goto LABEL_116;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v39,
          Instance,
          itemIds->m_Items[v37 + 1],
          itemNums->m_Items[v37 + 1],
          0LL);
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_116;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
        LimitCntUpItemComponent__SetMaskSprite(v39, 0, 0LL);
        ++v37;
        v39->fields.disableOpenItemDetailDialog = 0;
      }
      while ( (int)v37 < max_length );
      v40 = 0LL;
      while ( 1 )
      {
        v41 = *p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_116;
        if ( v41->fields._size <= (unsigned int)v40 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v42 = v41->fields._items->m_Items[v40];
        if ( !v42 )
          goto LABEL_116;
        if ( !v42->fields.isItemNum )
          break;
        if ( (int)++v40 >= max_length )
        {
          v43 = 1;
          goto LABEL_39;
        }
      }
      v43 = 0;
LABEL_39:
      p_spendQpLb = &this->fields.spendQpLb;
    }
    v44 = this->fields.baseSvtCostume;
    if ( !v44 )
      goto LABEL_116;
    Instance = (int64_t)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)Instance, v44->fields.name, 0LL);
    v45 = this->fields.baseSvtCostume;
    if ( !v45 )
      goto LABEL_116;
    Instance = (int64_t)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)Instance, v45->fields.releaseInfo, 0LL);
    v46 = this->fields.baseSvt;
    if ( !v46 )
      goto LABEL_116;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    v49 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
    v48 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v91.fields.currentCryptoKey = v49;
    *(_QWORD *)&v91.fields.fakeValue = v48;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v91, 0LL);
    v50 = this->fields.baseSvtCostume;
    if ( !v50 )
      goto LABEL_116;
    v51 = Instance;
    id = v50->fields.id;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceImage(costumeFaceIcon, v51, id, 0LL);
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
    v43 = 0;
    p_spendQpLb = &this->fields.spendQpLb;
  }
  v53 = (UIWidget_o *)*p_spendQpLb;
  *(UnityEngine_Color_o *)&v54 = UnityEngine_Color__get_white(0LL);
  if ( !v53 )
    goto LABEL_116;
  UIWidget__set_color(v53, *(UnityEngine_Color_o *)&v54, 0LL);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    v58 = (UIWidget_o *)*p_spendQpLb;
    *(UnityEngine_Color_o *)&v59 = UnityEngine_Color__get_red(0LL);
    if ( !v58 )
      goto LABEL_116;
    UIWidget__set_color(v58, *(UnityEngine_Color_o *)&v59, 0LL);
    this->fields.isShortQp = 1;
  }
  if ( (v43 & 1) == 0 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v64 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v64 )
      goto LABEL_116;
    v65 = 0;
    while ( (signed int)v65 < (signed int)v64->max_length )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_116;
      v66 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v67 = this->fields.eventCombineCostumeEnt;
      if ( !v67 )
        goto LABEL_116;
      v68 = v67->fields.itemIds;
      if ( !v68 )
        goto LABEL_116;
      if ( v65 >= v68->max_length )
        goto LABEL_117;
      if ( !v66 )
        goto LABEL_116;
      Instance = UserItemMaster__TryGetEntity(v66, &v88, Instance, v68->m_Items[v65 + 1], 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_83;
      if ( !v88 )
        goto LABEL_116;
      v69 = this->fields.eventCombineCostumeEnt;
      if ( !v69 )
        goto LABEL_116;
      v70 = v69->fields.itemNums;
      if ( !v70 )
        goto LABEL_116;
      if ( v65 >= v70->max_length )
        goto LABEL_117;
      if ( v88->fields.num < v70->m_Items[v65 + 1] )
      {
LABEL_83:
        this->fields.isShortEventItem = 1;
        break;
      }
      v64 = v69->fields.itemIds;
      ++v65;
      if ( !v64 )
        goto LABEL_116;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_116;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v71 = this->fields.baseSvt;
  if ( !v71 )
    goto LABEL_116;
  v72 = (ServantCostumeReleaseMaster_o *)Instance;
  v73 = this->fields.baseSvtCostume;
  v75 = *(_QWORD *)&v71->fields.svtId.fields.currentCryptoKey;
  v74 = *(_QWORD *)&v71->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v92.fields.currentCryptoKey = v75;
  *(_QWORD *)&v92.fields.fakeValue = v74;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v92, 0LL);
  v76 = this->fields.baseSvt;
  if ( !v76 )
    goto LABEL_116;
  v77 = *(_OWORD *)&v76->fields.id.fields.fakeValue;
  v78 = Instance;
  *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v76->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v87.fields.fakeValue = v77;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v86 = v87;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v86, 0LL);
  if ( !v72 )
    goto LABEL_116;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v72, v73, v78, Instance, 0LL);
  v80 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v80 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_103;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___),
        (v81 = this->fields.eventCombineCostumeEnt) == 0LL)
    || !Instance
    || (Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              v81->fields.eventId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
LABEL_116:
    sub_B2C434(Instance, v18);
  }
  v82 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_113;
  }
  startedAt = v82->fields.startedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v82, 0, 0LL) )
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
  if ( (byte_4189F25 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    this = (ServantCostumeControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4189F25 = 1;
  }
  costumeListInfo = v8->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_27;
  baseSvtCostume = (System_Int32_array **)costumeListInfo->fields.baseSvtCostume;
  v8->fields.baseSvtCostume = (struct ServantCostumeEntity_o *)baseSvtCostume;
  p_baseSvtCostume = &v8->fields.baseSvtCostume;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.baseSvtCostume, baseSvtCostume, v2, v3, v4, v5, v6, v7);
  p_eventCombineCostumeEnt = (__int64 *)&v8->fields.eventCombineCostumeEnt;
  v8->fields.eventCombineCostumeEnt = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.eventCombineCostumeEnt, 0LL, v16, v17, v18, v19, v20, v21);
  this = (ServantCostumeControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_27;
  this = (ServantCostumeControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
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
  this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
  if ( !*p_baseSvtCostume || !v23 )
    goto LABEL_27;
  ListBySvtIdAndCostumeId = (System_Int32_array **)EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                                     v23,
                                                     (int32_t)this,
                                                     (*p_baseSvtCostume)->fields.id,
                                                     0LL);
  *p_eventCombineCostumeEnt = (__int64)ListBySvtIdAndCostumeId;
  sub_B2C2F8(
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
          v41 = sub_B2C460(this);
          sub_B2C400(v41, 0LL);
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
    sub_B2C434(this, method);
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
    sub_B2C434(costumeListInfo, method);
  }
  CostumeListViewManager__SetMode_28285684((CostumeListViewManager_o *)costumeListInfo, 2, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_0(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B2C434(0LL, method);
  CombineRootComponent__RequestCombineCostume(combineRootComponent, 0, this->fields.itemInfoList, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_1(
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
  if ( (byte_4189F30 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v3);
    this = (ServantCostumeControl_o *)sub_B2C35C(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_2__, v4);
    byte_4189F30 = 1;
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
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_2__, 0LL);
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
LABEL_7:
    sub_B2C434(this, method);
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, qp, haveQpVal, v11, v12, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_2(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v7; // x1
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_4189F31 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v4);
    byte_4189F31 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v5
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.eventItemIcon,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__),
        (eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt) == 0LL)
    || (combineRootComponent = this->fields.combineRootComponent) == 0LL )
  {
    sub_B2C434(combineRootComponent, v7);
  }
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
  __int64 v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-40h]

  if ( (byte_4189F28 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4189F28 = 1;
  }
  p_baseSvt = &this->fields.baseSvt;
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v10 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v21 = v22;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v21, 0LL);
    *p_baseSvt = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseSvt, 0LL, v12, v13, v14, v15, v16, v17);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               &this->fields.baseSvt,
               v11,
               (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &this->fields.baseSvt,
                   v11,
                   (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_B2C434(Instance, v19);
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
  __int64 v6; // x1

  if ( (byte_41853DA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_41853DA = 1;
  }
  if ( decide )
    ActionExtensions__Call(this->fields.callBack, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
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
  struct ServantCostumeControl_o *v11; // x8
  struct ServantCostumeControl_o **p__4__this; // x19
  struct ServantCostumeControl_o *v13; // t1
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeControl_o *_4__this; // t1
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v19; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int32_t haveQpVal; // w23
  System_Action_o *v23; // x25
  Il2CppObject *v24; // x20
  System_Action_o *v25; // x19

  if ( (byte_41853DB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, useEventItem);
    sub_B2C35C(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v5);
    sub_B2C35C(&Method_ServantCostumeControl___c__DisplayClass58_1__OnClickExeCostumeCombine_b__4__, v6);
    sub_B2C35C(&ServantCostumeControl___c__DisplayClass58_1_TypeInfo, v7);
    byte_41853DB = 1;
  }
  v8 = sub_B2C42C(ServantCostumeControl___c__DisplayClass58_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 24) = this;
  sub_B2C2F8(v8 + 24, this);
  *(_BYTE *)(v8 + 16) = useEventItem;
  if ( !useEventItem )
  {
    combineCostumeEntity = this->fields.combineCostumeEntity;
    if ( combineCostumeEntity )
    {
      _4__this = this->fields.__4__this;
      p__4__this = &this->fields.__4__this;
      v11 = _4__this;
      if ( _4__this )
      {
        p_qp = &combineCostumeEntity->fields.qp;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_B2C434(v9, v10);
  }
  v13 = this->fields.__4__this;
  p__4__this = &this->fields.__4__this;
  v11 = v13;
  if ( !v13 )
    goto LABEL_14;
  eventCombineCostumeEnt = v11->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_14;
  p_qp = &eventCombineCostumeEnt->fields.qp;
LABEL_11:
  baseSvtCostume = v11->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_14;
  v19 = *p_qp;
  exeCombineDlg = v11->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = v11->fields.haveQpVal;
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ServantCostumeControl___c__DisplayClass58_1__OnClickExeCostumeCombine_b__4__,
    0LL);
  v24 = (Il2CppObject *)*p__4__this;
  v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v25, v24, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
    goto LABEL_14;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v19, haveQpVal, v23, v25, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemInfoList; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v7; // x1
  struct ServantCostumeControl___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct ServantCostumeControl___c__DisplayClass58_0_o *v12; // x8
  struct ServantCostumeControl_o *v13; // x8

  if ( (byte_41853DC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v4);
    byte_41853DC = 1;
  }
  itemInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    itemInfoList,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
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
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
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
    sub_B2C434(combineRootComponent, v7);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0LL);
}