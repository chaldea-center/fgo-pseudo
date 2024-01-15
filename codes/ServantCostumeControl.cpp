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

  if ( (byte_40FCEC8 & 1) == 0 )
  {
    sub_B16FFC(&ServantCostumeControl_TypeInfo, v1);
    byte_40FCEC8 = 1;
  }
  v6 = 1063321600;
  v7 = 1065156608;
  v8 = 0;
  v9 = (struct ServantCostumeControl_StaticFields)0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v9);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UserServantEntity_o *baseSvt; // x0
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v25; // x22
  CommonUI_o *Instance; // x20
  System_String_o *v27; // x21
  System_String_o *v28; // x23
  Il2CppObject *v29; // x1
  System_String_o *v30; // x22
  System_String_o *v31; // x23
  System_String_o *v32; // x24
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  CommonConfirmDialog_ClickDelegate_o *v37; // x25

  if ( (byte_40FCEC3 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, callBack);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&string_TypeInfo, v9);
    sub_B16FFC(&Method_ServantCostumeControl___c__DisplayClass57_0__CheckCondJoin_b__0__, v10);
    sub_B16FFC(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_3307/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, v12);
    sub_B16FFC(&StringLiteral_3306/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, v13);
    sub_B16FFC(&StringLiteral_3305/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, v14);
    sub_B16FFC(&StringLiteral_3308/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, v15);
    byte_40FCEC3 = 1;
  }
  v16 = sub_B170CC(ServantCostumeControl___c__DisplayClass57_0_TypeInfo, callBack, method, v3, v4);
  ServantCostumeControl___c__DisplayClass57_0___ctor((ServantCostumeControl___c__DisplayClass57_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_19;
  *(_QWORD *)(v16 + 16) = callBack;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)callBack, v17, v18, v19, v20, v21, v22);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_19;
  EventServant = UserServantEntity__getEventServant(baseSvt, 0LL);
  if ( !this->fields.baseSvt )
    goto LABEL_19;
  v25 = EventServant;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v16 + 16), 0LL);
    return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3307/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3305/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0LL);
  v29 = (Il2CppObject *)(v25 ? EventServantEntity__getEndTimeStr(v25, 0LL) : string_TypeInfo->static_fields->Empty);
  v30 = System_String__Format(v28, v29, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3308/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3306/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0LL);
  v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v33,
                                                 v34,
                                                 v35,
                                                 v36);
  CommonConfirmDialog_ClickDelegate___ctor(
    v37,
    (Il2CppObject *)v16,
    Method_ServantCostumeControl___c__DisplayClass57_0__CheckCondJoin_b__0__,
    0LL);
  if ( !Instance )
LABEL_19:
    sub_B170D4();
  CommonUI__OpenConfirmDecideDlg(Instance, v27, v30, v31, v32, v37, 0, 0.0, 14.7, 0, 0, 0, 290, 0, 0LL);
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

  if ( (byte_40FCEBC & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_40FCEBC = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v30, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v29, 0LL) )
      {
        ServantCostumeControl__InitDispInfo(this, v15);
        this->fields.baseSvtCostume = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseSvtCostume, 0LL, v16, v17, v18, v19, v20, v21);
        this->fields.eventCombineCostumeEnt = 0LL;
        sub_B16F98(
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
  sub_B16F98(
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
  __int64 v2; // x2
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  int max_length; // w20
  il2cpp_array_size_t v6; // w21
  LimitCntUpItemComponent_o *v7; // x0

  itemInfos = this->fields.itemInfos;
  if ( !itemInfos )
    goto LABEL_8;
  max_length = itemInfos->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= itemInfos->max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v7 = itemInfos->m_Items[v6];
      if ( !v7 )
        break;
      LimitCntUpItemComponent__enableDispItemInfo(v7, 0LL);
      if ( (int)++v6 >= max_length )
        return;
      itemInfos = this->fields.itemInfos;
    }
    while ( itemInfos );
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseSvtCostume, 0LL, v2, v3, v4, v5, v6, v7);
  p_baseSvtCostume[6] = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)(p_baseSvtCostume + 6), 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall ServantCostumeControl__InitCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UISprite_o *costumeFaceIcon; // x20
  UnityEngine_Component_o *costumeFaceIconFrame; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Component_o *costumeListInfo; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *costumeReleaseInfo; // x0
  const MethodInfo *v19; // x1

  if ( (byte_40FCEB9 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v3);
    byte_40FCEB9 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isBaseSelect = 0;
  ServantCostumeControl__InitDispInfo(this, v4);
  ServantCostumeControl__ClearItemList(this, v5);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  v7 = System_Int32__ToString_38275808((int)this + 256, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_15;
  UILabel__set_text(spendQpLb, v7, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v8);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v9);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetNoMountFace(costumeFaceIcon, 0LL);
  costumeFaceIconFrame = (UnityEngine_Component_o *)this->fields.costumeFaceIconFrame;
  if ( !costumeFaceIconFrame )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject(costumeFaceIconFrame, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v13 = (UnityEngine_Component_o *)this->fields.costumeFaceIcon;
  if ( !v13 )
    goto LABEL_15;
  v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
  if ( !v14
    || (UnityEngine_GameObject__SetActive(v14, 1, 0LL),
        this->fields.isCanCombine = 0,
        ServantCostumeControl__SetExeBtnState(this, v15),
        (costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo) == 0LL)
    || (v17 = UnityEngine_Component__get_gameObject(costumeListInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v17, 0, 0LL), (costumeReleaseInfo = this->fields.costumeReleaseInfo) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(costumeReleaseInfo, 1, 0LL);
  ServantCostumeControl__ResetInit(this, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__InitCombineCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *v6; // x0
  UIWidget_o *v7; // x20
  int v8; // s0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UISprite_o *costumeFaceIcon; // x20
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *costumeFaceIconFrame; // x0
  UnityEngine_GameObject_o *v19; // x0
  UILabel_o *costumeNameLb; // x0
  UILabel_o *conditionLb; // x0
  const MethodInfo *v22; // x1
  UnityEngine_GameObject_o *costumeReleaseInfo; // x0
  UnityEngine_Component_o *eventCombineCostumeBalloon; // x0
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_40FCEBB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FCEBB = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  v6 = System_Int32__ToString_38275808((int)this + 256, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_18;
  UILabel__set_text(spendQpLb, v6, 0LL);
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
  v16 = (UnityEngine_Component_o *)this->fields.costumeFaceIcon;
  if ( !v16 )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  costumeFaceIconFrame = (UnityEngine_Component_o *)this->fields.costumeFaceIconFrame;
  if ( !costumeFaceIconFrame )
    goto LABEL_18;
  v19 = UnityEngine_Component__get_gameObject(costumeFaceIconFrame, 0LL);
  if ( !v19 )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(v19, 1, 0LL);
  costumeNameLb = this->fields.costumeNameLb;
  if ( !costumeNameLb )
    goto LABEL_18;
  UILabel__set_text(costumeNameLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  conditionLb = this->fields.conditionLb;
  if ( !conditionLb
    || (UILabel__set_text(conditionLb, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        ServantCostumeControl__SetExeBtnState(this, v22),
        (costumeReleaseInfo = this->fields.costumeReleaseInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(costumeReleaseInfo, 0, 0LL),
        (eventCombineCostumeBalloon = (UnityEngine_Component_o *)this->fields.eventCombineCostumeBalloon) == 0LL)
    || (v25 = UnityEngine_Component__get_gameObject(eventCombineCostumeBalloon, 0LL)) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v25, 0, 0LL);
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

  if ( (byte_40FCEBA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCEBA = 1;
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
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_charaGraph, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FCEC7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCEC7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__ShowBaseListSvtCostume(combineRootComponent, 0LL);
}


void __fastcall ServantCostumeControl__OnClickExeCostumeCombine(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  EventEntity_o *Entity; // x0
  EventEntity_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  SetRarityDialogControl_o *exeCombineDlg; // x20
  EventCombineCostumeEntity_o *v28; // x21
  System_Action_o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_o *v34; // x23
  struct ServantCostumeEntity_o *v35; // x8
  System_String_o *name; // x21
  SetRarityDialogControl_o *v37; // x20
  int32_t haveQpVal; // w22
  int32_t spendQpVal; // w23
  System_Action_o *v40; // x24
  int64_t startedAt; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  WarQuestSelectionMaster_o *v53; // x0
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v55; // x21
  __int64 v56; // x22
  __int64 v57; // x23
  int32_t v58; // w0
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  SetRarityDialogControl_o *v71; // x21
  CombineCostumeEntity_o *v72; // x22
  EventCombineCostumeEntity_o *v73; // x23
  bool v74; // w24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v76; // x25
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  System_Action_o *v81; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_40FCEC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v6);
    sub_B16FFC(&System_Action_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_CombineCostumeMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v14);
    sub_B16FFC(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_0__, v15);
    sub_B16FFC(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_1__, v16);
    sub_B16FFC(&Method_ServantCostumeControl___c__DisplayClass58_0__OnClickExeCostumeCombine_b__3__, v17);
    sub_B16FFC(&ServantCostumeControl___c__DisplayClass58_0_TypeInfo, v18);
    byte_40FCEC4 = 1;
  }
  if ( this->fields.eventCombineCostumeEnt )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_37;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_37;
    Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                Master_WarQuestSelectionMaster,
                                eventCombineCostumeEnt->fields.eventId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_37;
    v22 = Entity;
    if ( EventEntity__IsOpen(Entity, 0, 0LL) )
    {
      exeCombineDlg = this->fields.exeCombineDlg;
      v28 = this->fields.eventCombineCostumeEnt;
      v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
      System_Action___ctor(
        v29,
        (Il2CppObject *)this,
        Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_1__,
        0LL);
      v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
      System_Action___ctor(v34, (Il2CppObject *)this, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v28, v29, v34, 0LL);
        return;
      }
LABEL_37:
      sub_B170D4();
    }
    startedAt = v22->fields.startedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v22, 0, 0LL) )
    {
      v46 = sub_B170CC(ServantCostumeControl___c__DisplayClass58_0_TypeInfo, v42, v43, v44, v45);
      ServantCostumeControl___c__DisplayClass58_0___ctor((ServantCostumeControl___c__DisplayClass58_0_o *)v46, 0LL);
      if ( !v46 )
        goto LABEL_37;
      *(_QWORD *)(v46 + 24) = this;
      sub_B16F98((BattleServantConfConponent_o *)(v46 + 24), (System_Int32_array **)this, v47, v48, v49, v50, v51, v52);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v53 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = this->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_37;
      v55 = (CombineCostumeMaster_o *)v53;
      v57 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v56 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v82.fields.currentCryptoKey = v57;
      *(_QWORD *)&v82.fields.fakeValue = v56;
      v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v82, 0LL);
      baseSvtCostume = this->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v55 )
        goto LABEL_37;
      v60 = (System_Int32_array **)CombineCostumeMaster__GetEntity(v55, v58, baseSvtCostume->fields.id, 0LL);
      *(_QWORD *)(v46 + 16) = v60;
      sub_B16F98((BattleServantConfConponent_o *)(v46 + 16), v60, v61, v62, v63, v64, v65, v66);
      v71 = this->fields.exeCombineDlg;
      v72 = *(CombineCostumeEntity_o **)(v46 + 16);
      v73 = this->fields.eventCombineCostumeEnt;
      v74 = this->fields.isShortNeedItem || this->fields.isShortQp;
      isShortEventItem = this->fields.isShortEventItem;
      v76 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v67, v68, v69, v70);
      System_Action_bool____ctor(
        v76,
        (Il2CppObject *)v46,
        Method_ServantCostumeControl___c__DisplayClass58_0__OnClickExeCostumeCombine_b__3__,
        (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
      v81 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v77, v78, v79, v80);
      System_Action___ctor(v81, (Il2CppObject *)this, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( !v71 )
        goto LABEL_37;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v71,
        v72,
        v73,
        v74,
        isShortEventItem,
        v76,
        v81,
        0LL);
    }
  }
  else
  {
    v35 = this->fields.baseSvtCostume;
    if ( !v35 )
      goto LABEL_37;
    name = v35->fields.name;
    v37 = this->fields.exeCombineDlg;
    haveQpVal = this->fields.haveQpVal;
    spendQpVal = this->fields.spendQpVal;
    v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      v40,
      (Il2CppObject *)this,
      Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_0__,
      0LL);
    if ( !v37 )
      goto LABEL_37;
    SetRarityDialogControl__SetConfirmCombineCostume(v37, name, spendQpVal, haveQpVal, v40, 0LL, 0LL);
  }
}


void __fastcall ServantCostumeControl__RefreshAlreadyGetInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *alreadyGetInfo; // x0
  UILabel_o *alreadyGetLabel; // x20
  System_String_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x21
  int max_length; // w8
  unsigned int v13; // w22
  Il2CppClass **v14; // x8
  UnityEngine_Component_o *v15; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  WebViewObject_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_Transform_array *v19; // x8
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UIWidget_o *v22; // x0
  UIWidget_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCEC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_3393/*"COSTUME_SELECT_SERVANT_MSG"*/, v4);
    byte_40FCEC5 = 1;
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
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3393/*"COSTUME_SELECT_SERVANT_MSG"*/, 0LL);
  if ( !alreadyGetLabel )
    goto LABEL_26;
  UILabel__set_text(alreadyGetLabel, v7, 0LL);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_26;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( v13 < max_length )
    {
      v14 = &alreadyGetLabelBgList->obj.klass + (int)v13;
      v15 = (UnityEngine_Component_o *)v14[4];
      if ( !v15 )
        goto LABEL_26;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)v14[4],
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !Component_WebViewObject )
        goto LABEL_26;
      UIWidget__set_height((UIWidget_o *)Component_WebViewObject, 32, 0LL);
      v17 = UnityEngine_Component__GetComponent_WebViewObject_(
              v15,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !v17 )
        goto LABEL_26;
      UIWidget__set_width((UIWidget_o *)v17, 726, 0LL);
      v26.fields.x = 0.0;
      v26.fields.y = 0.0;
      v26.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v15, v26, 0LL);
      gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_17;
    }
LABEL_27:
    sub_B17100(v8, v9, v10);
    sub_B170A0();
  }
LABEL_17:
  v19 = this->fields.alreadyGetLabelBgList;
  if ( !v19 )
    goto LABEL_26;
  if ( !v19->max_length )
    goto LABEL_27;
  v20 = (UnityEngine_Component_o *)v19->m_Items[0];
  if ( !v20 )
    goto LABEL_26;
  v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
  if ( !v21
    || (UnityEngine_GameObject__SetActive(v21, 1, 0LL), (v22 = (UIWidget_o *)this->fields.alreadyGetLabel) == 0LL)
    || (UIWidget__set_height(v22, 32, 0LL), (v23 = (UIWidget_o *)this->fields.alreadyGetLabel) == 0LL)
    || (UIWidget__set_width(v23, 554, 0LL), (v24 = (UnityEngine_Component_o *)this->fields.alreadyGetLabel) == 0LL)
    || (transform = UnityEngine_Component__get_transform(v24, 0LL)) == 0LL )
  {
LABEL_26:
    sub_B170D4();
  }
  v27.fields.y = -1.0;
  v27.fields.x = 0.0;
  v27.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v27, 0LL);
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
  UnityEngine_GameObject_o *alreadyGetInfo; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  WarEntity_o *Entity; // x0
  const MethodInfo *v29; // x1
  EventEntity_o *v30; // x20
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  __int64 Component_srcLineSprite; // x0
  __int64 v34; // x1
  MethodInfo *v35; // x2
  AssetData_o *eventCombineCostumeBalloonData; // x21
  struct EventCombineCostumeEntity_o *v37; // x8
  struct System_Int32_array *itemIds; // x8
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  int32_t generatedBalloonId; // w8
  struct EventCombineCostumeEntity_o *v43; // x9
  struct System_Int32_array *v44; // x9
  UnityEngine_Component_o *eventCombineCostumeBalloon; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *v49; // x0
  UnityEngine_Transform_o *v50; // x0
  UnityEngine_GameObject_o *Object; // x0
  struct EventCombineCostumeEntity_o *v52; // x8
  struct System_Int32_array *v53; // x8
  struct EventCombineCostumeEntity_o *v54; // x8
  struct System_Int32_array *v55; // x8
  UnityEngine_GameObject_o *v56; // x0
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x22
  int max_length; // w8
  unsigned int v59; // w23
  Il2CppClass **v60; // x8
  UnityEngine_Component_o *v61; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  WebViewObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UIWidget_o *alreadyGetLabel; // x0
  UIWidget_o *v66; // x0
  UnityEngine_Component_o *v67; // x0
  UnityEngine_Transform_o *v68; // x0
  struct UnityEngine_Transform_array *v69; // x8
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  System_TimeSpan_o v72; // x0
  int64_t endedAt; // x22
  int64_t ticks; // x21
  __int64 v75; // x2
  System_Object_array *v76; // x21
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x22
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x22
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x22
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x22
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x22
  System_String_o *v107; // x0
  UILabel_o *v108; // x21
  Il2CppObject *v109; // x22
  System_String_o *v110; // x23
  Il2CppObject *v111; // x0
  System_String_o *v112; // x0
  UIWidget_o *spendQpLb; // x21
  float v114; // s4
  float v115; // s5
  float v116; // s6
  float v117; // s7
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x0
  __int64 v119; // x21
  int64_t startedAt; // x21
  UILabel_o *v121; // x20
  System_String_o *v122; // x21
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  UIWidget_o *v125; // x20
  int v126; // s0
  UIWidget_o *v130; // x20
  int v131; // s0
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v135; // x0
  __int64 v136; // x19
  int v137; // w19
  System_Collections_Generic_List_Enumerator_T__o v138; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+18h] [xbp-98h] BYREF
  uint64_t dateData; // [xsp+78h] [xbp-38h] BYREF
  System_DateTime_o v141; // 0:x0.8
  System_DateTime_o v142; // 0:x0.8
  System_DateTime_o v143; // 0:x0.8
  System_DateTime_o v144; // 0:x0.8
  System_DateTime_o v145; // 0:x0.8
  System_DateTime_o v146; // 0:x0.8
  System_TimeSpan_o v147; // 0:x1.8
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v150; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v151; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCEC6 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B16FFC(&System_DateTime_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&object___TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&System_TimeSpan_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_12652/*"ServantCostumeEventBalloon_"*/, v19);
    sub_B16FFC(&StringLiteral_3392/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v20);
    sub_B16FFC(&StringLiteral_3391/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v21);
    sub_B16FFC(&StringLiteral_23522/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v22);
    sub_B16FFC(&StringLiteral_5560/*"EVENT_COMBINE_COSTUME_ITEM"*/, v23);
    byte_40FCEC6 = 1;
  }
  dateData = 0LL;
  memset(&methoda.genericMethod, 0, 24);
  LODWORD(methoda.rgctx_data) = 0;
  alreadyGetInfo = this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(alreadyGetInfo, 0, 0LL);
  if ( !this->fields.eventCombineCostumeEnt )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !MasterData_WarQuestSelectionMaster )
    goto LABEL_119;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v30 = (EventEntity_o *)Entity;
  ServantCostumeControl__SetSvtCostumeCombineData(this, v29);
  ServantCostumeControl__SetExeBtnState(this, v31);
  ServantCostumeControl__SetStateInfoMsg(this, 2, v32);
  eventCombineCostumeBalloonData = this->fields.eventCombineCostumeBalloonData;
  if ( eventCombineCostumeBalloonData )
  {
    v37 = this->fields.eventCombineCostumeEnt;
    if ( !v37 )
      goto LABEL_119;
    itemIds = v37->fields.itemIds;
    if ( !itemIds )
      goto LABEL_119;
    if ( !itemIds->max_length )
      goto LABEL_94;
    v39 = System_Int32__ToString((int)itemIds + 32, 0LL);
    v40 = System_String__Concat_43743732((System_String_o *)StringLiteral_12652/*"ServantCostumeEventBalloon_"*/, v39, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               eventCombineCostumeBalloonData,
                                                               v40,
                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
    if ( (Component_srcLineSprite & 1) != 0 )
    {
      generatedBalloonId = this->fields.generatedBalloonId;
      if ( generatedBalloonId )
      {
        v43 = this->fields.eventCombineCostumeEnt;
        if ( !v43 )
          goto LABEL_119;
        v44 = v43->fields.itemIds;
        if ( !v44 )
          goto LABEL_119;
        if ( !v44->max_length )
          goto LABEL_94;
        if ( generatedBalloonId == v44->m_Items[1] )
          goto LABEL_39;
        eventCombineCostumeBalloon = (UnityEngine_Component_o *)this->fields.eventCombineCostumeBalloon;
        if ( !eventCombineCostumeBalloon )
          goto LABEL_119;
        transform = UnityEngine_Component__get_transform(eventCombineCostumeBalloon, 0LL);
        if ( !transform )
          goto LABEL_119;
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(transform, 0, 0LL);
        if ( !Child )
          goto LABEL_119;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
        this->fields.generatedBalloonId = 0;
      }
      v49 = (UnityEngine_Component_o *)this->fields.eventCombineCostumeBalloon;
      if ( !v49 )
        goto LABEL_119;
      v50 = UnityEngine_Component__get_transform(v49, 0LL);
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                 v50,
                 0LL,
                 0LL);
      if ( !Object )
        goto LABEL_119;
      Component_srcLineSprite = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           Object,
                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
      v52 = this->fields.eventCombineCostumeEnt;
      if ( !v52 )
        goto LABEL_119;
      v53 = v52->fields.itemIds;
      if ( !v53 )
        goto LABEL_119;
      if ( !v53->max_length )
        goto LABEL_94;
      if ( !Component_srcLineSprite )
        goto LABEL_119;
      ServantCostumeEventBalloon__Set((ServantCostumeEventBalloon_o *)Component_srcLineSprite, v53->m_Items[1], v35);
      v54 = this->fields.eventCombineCostumeEnt;
      if ( !v54 )
        goto LABEL_119;
      v55 = v54->fields.itemIds;
      if ( !v55 )
        goto LABEL_119;
      if ( !v55->max_length )
        goto LABEL_94;
      this->fields.generatedBalloonId = v55->m_Items[1];
    }
  }
LABEL_39:
  v56 = this->fields.alreadyGetInfo;
  if ( !v56 )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(v56, 1, 0LL);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_119;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v59 = 0;
    while ( v59 < max_length )
    {
      v60 = &alreadyGetLabelBgList->obj.klass + (int)v59;
      v61 = (UnityEngine_Component_o *)v60[4];
      if ( !v61 )
        goto LABEL_119;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)v60[4],
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !Component_WebViewObject )
        goto LABEL_119;
      UIWidget__set_height((UIWidget_o *)Component_WebViewObject, 56, 0LL);
      v63 = UnityEngine_Component__GetComponent_WebViewObject_(
              v61,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !v63 )
        goto LABEL_119;
      UIWidget__set_width((UIWidget_o *)v63, 726, 0LL);
      v148.fields.x = 0.0;
      v148.fields.z = 0.0;
      v148.fields.y = -15.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v61, v148, 0LL);
      v64 = UnityEngine_Component__get_gameObject(v61, 0LL);
      if ( !v64 )
        goto LABEL_119;
      UnityEngine_GameObject__SetActive(v64, 1, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v59 >= max_length )
        goto LABEL_49;
    }
    goto LABEL_94;
  }
LABEL_49:
  alreadyGetLabel = (UIWidget_o *)this->fields.alreadyGetLabel;
  if ( !alreadyGetLabel )
    goto LABEL_119;
  UIWidget__set_height(alreadyGetLabel, 56, 0LL);
  v66 = (UIWidget_o *)this->fields.alreadyGetLabel;
  if ( !v66 )
    goto LABEL_119;
  UIWidget__set_width(v66, 720, 0LL);
  v67 = (UnityEngine_Component_o *)this->fields.alreadyGetLabel;
  if ( !v67 )
    goto LABEL_119;
  v68 = UnityEngine_Component__get_transform(v67, 0LL);
  if ( !v68 )
    goto LABEL_119;
  v149.fields.y = -16.0;
  v149.fields.x = 0.0;
  v149.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v68, v149, 0LL);
  Component_srcLineSprite = EventEntity__IsOpen(v30, 0, 0LL);
  if ( (Component_srcLineSprite & 1) != 0 )
  {
    v69 = this->fields.alreadyGetLabelBgList;
    if ( v69 )
    {
      if ( v69->max_length <= 1 )
        goto LABEL_94;
      v70 = (UnityEngine_Component_o *)v69->m_Items[1];
      if ( v70 )
      {
        v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
        if ( v71 )
        {
          UnityEngine_GameObject__SetActive(v71, 0, 0LL);
          if ( (BYTE3(System_TimeSpan_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_TimeSpan_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
          }
          v72.fields._ticks = System_TimeSpan__FromMinutes(1.0, 0LL).fields._ticks;
          endedAt = v30->fields.endedAt;
          ticks = v72.fields._ticks;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          dateData = NetworkManager__getServerDateTime_23685560(endedAt, 0LL).fields.dateData;
          if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_DateTime_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          }
          v141.fields.dateData = dateData;
          v147.fields._ticks = ticks;
          dateData = System_DateTime__op_Addition(v141, v147, 0LL).fields.dateData;
          v76 = (System_Object_array *)sub_B17014(object___TypeInfo, 5LL, v75);
          v142.fields.dateData = (uint64_t)&dateData;
          HIDWORD(methoda.return_type) = System_DateTime__get_Year(v142, 0LL);
          Component_srcLineSprite = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.return_type + 4);
          if ( v76 )
          {
            v82 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = sub_B170BC(Component_srcLineSprite, v76->obj.klass->_1.element_class);
              if ( !Component_srcLineSprite )
                goto LABEL_96;
            }
            if ( !v76->max_length )
              goto LABEL_94;
            v76->m_Items[0] = (Il2CppObject *)v82;
            sub_B16F98(
              (BattleServantConfConponent_o *)v76->m_Items,
              v82,
              (System_String_array **)v35,
              v77,
              v78,
              v79,
              v80,
              v81);
            v143.fields.dateData = (uint64_t)&dateData;
            LODWORD(methoda.return_type) = System_DateTime__get_Month(v143, 0LL);
            Component_srcLineSprite = j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
            v88 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = sub_B170BC(Component_srcLineSprite, v76->obj.klass->_1.element_class);
              if ( !Component_srcLineSprite )
                goto LABEL_96;
            }
            if ( v76->max_length <= 1 )
              goto LABEL_94;
            v76->m_Items[1] = (Il2CppObject *)v88;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v76->m_Items[1],
              v88,
              (System_String_array **)v35,
              v83,
              v84,
              v85,
              v86,
              v87);
            v144.fields.dateData = (uint64_t)&dateData;
            HIDWORD(methoda.klass) = System_DateTime__get_Day(v144, 0LL);
            Component_srcLineSprite = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.klass + 4);
            v94 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = sub_B170BC(Component_srcLineSprite, v76->obj.klass->_1.element_class);
              if ( !Component_srcLineSprite )
                goto LABEL_96;
            }
            if ( v76->max_length <= 2 )
              goto LABEL_94;
            v76->m_Items[2] = (Il2CppObject *)v94;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v76->m_Items[2],
              v94,
              (System_String_array **)v35,
              v89,
              v90,
              v91,
              v92,
              v93);
            v145.fields.dateData = (uint64_t)&dateData;
            LODWORD(methoda.klass) = System_DateTime__get_Hour(v145, 0LL);
            Component_srcLineSprite = j_il2cpp_value_box_0(int_TypeInfo, &methoda.klass);
            v100 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = sub_B170BC(Component_srcLineSprite, v76->obj.klass->_1.element_class);
              if ( !Component_srcLineSprite )
                goto LABEL_96;
            }
            if ( v76->max_length <= 3 )
              goto LABEL_94;
            v76->m_Items[3] = (Il2CppObject *)v100;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v76->m_Items[3],
              v100,
              (System_String_array **)v35,
              v95,
              v96,
              v97,
              v98,
              v99);
            v146.fields.dateData = (uint64_t)&dateData;
            HIDWORD(methoda.name) = System_DateTime__get_Minute(v146, 0LL);
            Component_srcLineSprite = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.name + 4);
            v106 = (System_Int32_array **)Component_srcLineSprite;
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = sub_B170BC(Component_srcLineSprite, v76->obj.klass->_1.element_class);
              if ( !Component_srcLineSprite )
              {
LABEL_96:
                sub_B170F4(Component_srcLineSprite);
                sub_B170A0();
              }
            }
            if ( v76->max_length <= 4 )
            {
LABEL_94:
              sub_B17100(Component_srcLineSprite, v34, v35);
              sub_B170A0();
            }
            v76->m_Items[4] = (Il2CppObject *)v106;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v76->m_Items[4],
              v106,
              (System_String_array **)v35,
              v101,
              v102,
              v103,
              v104,
              v105);
            v107 = System_String__Format_43822456((System_String_o *)StringLiteral_23522/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v76, 0LL);
            v108 = this->fields.alreadyGetLabel;
            v109 = (Il2CppObject *)v107;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v110 = LocalizationManager__Get((System_String_o *)StringLiteral_3392/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
            v111 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
            v112 = System_String__Format_43739268(v110, v111, v109, 0LL);
            if ( v108 )
            {
              UILabel__set_text(v108, v112, 0LL);
              v150.fields.r = 0.32941;
              spendQpLb = (UIWidget_o *)this->fields.spendQpLb;
              v150.fields.a = 1.0;
              v150.fields.g = 0.32941;
              v150.fields.b = 0.32941;
              methoda.methodPointer = 0LL;
              methoda.invoker_method = 0LL;
              UnityEngine_Color___ctor(v150, v114, v115, v116, v117, &methoda);
              if ( spendQpLb )
              {
                *(_QWORD *)&v151.fields.r = methoda.methodPointer;
                *(_QWORD *)&v151.fields.b = methoda.invoker_method;
                UIWidget__set_color(spendQpLb, v151, 0LL);
                itemInfoList = this->fields.itemInfoList;
                if ( itemInfoList )
                {
                  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                    &v138,
                    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemInfoList,
                    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  *(_QWORD *)&methoda.slot = v138.fields.current;
                  *(_OWORD *)&methoda.genericMethod = *(_OWORD *)&v138.fields.list;
                  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
                            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__) )
                  {
                    v119 = *(_QWORD *)&methoda.slot;
                    if ( !*(_QWORD *)&methoda.slot )
                      sub_B170D4();
                    LimitCntUpItemComponent__SetMaskSprite(*(LimitCntUpItemComponent_o **)&methoda.slot, 1, 0LL);
                    *(_BYTE *)(v119 + 88) = 1;
                  }
                  LODWORD(methoda.parameters) = 908;
                  LODWORD(methoda.rgctx_data) = 1;
                  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
                    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
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
  startedAt = v30->fields.startedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v30, 0, 0LL) )
  {
    v121 = this->fields.alreadyGetLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v122 = LocalizationManager__Get((System_String_o *)StringLiteral_3391/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
    v123 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
    v124 = System_String__Format(v122, v123, 0LL);
    if ( !v121 )
      goto LABEL_119;
    UILabel__set_text(v121, v124, 0LL);
    v125 = (UIWidget_o *)this->fields.spendQpLb;
    *(UnityEngine_Color_o *)&v126 = UnityEngine_Color__get_white(0LL);
    if ( !v125 )
      goto LABEL_119;
    UIWidget__set_color(v125, *(UnityEngine_Color_o *)&v126, 0LL);
    if ( this->fields.haveQpVal < this->fields.spendQpVal )
    {
      v130 = (UIWidget_o *)this->fields.spendQpLb;
      *(UnityEngine_Color_o *)&v131 = UnityEngine_Color__get_red(0LL);
      if ( !v130 )
        goto LABEL_119;
      UIWidget__set_color(v130, *(UnityEngine_Color_o *)&v131, 0LL);
    }
    v135 = this->fields.itemInfoList;
    if ( !v135 )
LABEL_119:
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v138,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v135,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
    *(_QWORD *)&methoda.slot = v138.fields.current;
    *(_OWORD *)&methoda.genericMethod = *(_OWORD *)&v138.fields.list;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__) )
    {
      v136 = *(_QWORD *)&methoda.slot;
      if ( !*(_QWORD *)&methoda.slot )
        sub_B170D4();
      LimitCntUpItemComponent__SetMaskSprite(*(LimitCntUpItemComponent_o **)&methoda.slot, 0, 0LL);
      *(_BYTE *)(v136 + 88) = 1;
    }
    LODWORD(methoda.parameters) = 908;
    v137 = ++LODWORD(methoda.rgctx_data);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
    if ( v137 && *((_DWORD *)&methoda.return_type + v137 + 1) == 908 )
      LODWORD(methoda.rgctx_data) = v137 - 1;
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventCombineCostumeEnt, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseSvt, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.baseSvtCostume = 0LL;
  v8 = (ServantCostumeControl_o *)((char *)v8 + 232);
  sub_B16F98((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  v8->fields.charaGraphBase = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v8->fields.charaGraphBase, 0LL, v15, v16, v17, v18, v19, v20);
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
  int32_t CardImageLimitCount; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  ServantLimitImageMaster_o *v18; // x22
  int32_t v19; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UICharaGraphTexture_o **p_charaGraph; // x21
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v23; // w22
  struct UICharaGraphTexture_o *TexturePrefab_26882832; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_40FCEBD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, userSvtData);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FCEBD = 1;
  }
  this->fields.baseSvt = userSvtData;
  sub_B16F98(
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  v18 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v17;
  *(_QWORD *)&v31.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31, 0LL);
  if ( !v18 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v18,
                                 v19,
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
    TexturePrefab_26882832 = CharaGraphManager__CreateTexturePrefab_26882832(
                               this->fields.charaGraphBase,
                               userSvtData,
                               v23,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26882832;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26882832,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    return;
  }
  if ( !*p_charaGraph )
LABEL_16:
    sub_B170D4();
  UICharaGraphTexture__SetCharacter_35080076(*p_charaGraph, userSvtData, v23, 0LL, 0, 0LL);
}


void __fastcall ServantCostumeControl__SetExeBtnState(ServantCostumeControl_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *executeButton; // x0
  struct UICommonButton_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *eventCombineCostumeBalloon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  UnityEngine_GameObject_o *v9; // x19

  executeButton = this->fields.executeButton;
  if ( !executeButton )
    goto LABEL_11;
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))executeButton->klass->vtable._5_set_isEnabled.method)(
    executeButton,
    this->fields.isCanCombine,
    executeButton->klass->vtable._6_OnInit.methodPtr);
  v4 = this->fields.executeButton;
  if ( !v4 )
    goto LABEL_11;
  v5 = this->fields.isCanCombine ? 0LL : 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._14_SetState.method)(
    v4,
    v5,
    1LL,
    v4->klass->vtable._15_OnPress.methodPtr);
  eventCombineCostumeBalloon = (UnityEngine_Component_o *)this->fields.eventCombineCostumeBalloon;
  if ( !eventCombineCostumeBalloon )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(eventCombineCostumeBalloon, 0LL);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  v9 = gameObject;
  if ( eventCombineCostumeEnt )
    LOBYTE(eventCombineCostumeEnt) = !EventCombineCostumeEntity__IsShortEventItem(eventCombineCostumeEnt, 0LL);
  if ( !v9 )
LABEL_11:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v9, (unsigned __int8)eventCombineCostumeEnt & 1, 0LL);
}


void __fastcall ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  int32_t *p_haveQpVal; // x19
  UILabel_o *v5; // x20
  System_String_o *v6; // x0

  if ( (byte_40FCEBF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, method);
    byte_40FCEBF = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = SelfUserGame->fields.qp,
        p_haveQpVal = &this->fields.haveQpVal,
        v5 = *(UILabel_o **)(p_haveQpVal - 29),
        v6 = System_Int32__ToString_38275808((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL),
        !v5) )
  {
    sub_B170D4();
  }
  UILabel__set_text(v5, v6, 0LL);
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
  ServantCostumeControl_c *v14; // x0
  System_String_o *v15; // x21
  __int64 *v16; // x8
  UILabel_o *v17; // x0
  UIWidget_o *v18; // x20
  int v19; // s0

  if ( (byte_40FCEC2 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&ServantCostumeControl_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12163/*"SHORT_RELEASE_COND_MSG"*/, v6);
    sub_B16FFC(&StringLiteral_3384/*"COSTUME_EXE_MSG"*/, v7);
    sub_B16FFC(&StringLiteral_7254/*"INFO_MSG_SELECT_COSTUME"*/, v8);
    sub_B16FFC(&StringLiteral_12161/*"SHORT_ITEM_INFO_MSG"*/, v9);
    sub_B16FFC(&StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    sub_B16FFC(&StringLiteral_7249/*"INFO_MSG_COSTUME_SELECT_BASE"*/, v12);
    byte_40FCEC2 = 1;
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
  UIWidget__set_color(detailInfoLb, v14->static_fields->defaultDetailColor, 0LL);
  if ( state == 3 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_7254/*"INFO_MSG_SELECT_COSTUME"*/;
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
    v16 = &StringLiteral_7249/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_23;
  }
  if ( this->fields.isCanCombine )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_3384/*"COSTUME_EXE_MSG"*/;
LABEL_23:
    v15 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
    goto LABEL_24;
  }
  v18 = (UIWidget_o *)this->fields.detailInfoLb;
  *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
  if ( !v18 )
LABEL_43:
    sub_B170D4();
  UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v19, 0LL);
  if ( this->fields.isShortQp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12161/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_12163/*"SHORT_RELEASE_COND_MSG"*/;
    goto LABEL_23;
  }
LABEL_24:
  v17 = this->fields.detailInfoLb;
  if ( !v17 )
    goto LABEL_43;
  UILabel__set_text(v17, v15, 0LL);
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
  WebViewManager_o *Instance; // x0
  CombineCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemInfoList; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UserServantEntity_o *baseSvt; // x8
  __int64 v32; // x22
  __int64 v33; // x23
  int32_t v34; // w0
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x21
  struct UILabel_o **p_spendQpLb; // x23
  System_String_o *v38; // x0
  int64_t UserId; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  struct System_Int32_array *itemIds; // x26
  int max_length; // w22
  struct System_Int32_array *itemNums; // x28
  __int64 v45; // x27
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v47; // x21
  __int64 v48; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x8
  char v51; // w26
  struct ServantCostumeEntity_o *v52; // x8
  UILabel_o *costumeNameLb; // x0
  struct ServantCostumeEntity_o *v54; // x8
  UILabel_o *conditionLb; // x0
  struct UserServantEntity_o *v56; // x8
  UISprite_o *costumeFaceIcon; // x20
  __int64 v58; // x21
  __int64 v59; // x22
  int32_t v60; // w0
  struct ServantCostumeEntity_o *v61; // x8
  int32_t v62; // w21
  int32_t id; // w22
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *costumeFaceIconFrame; // x0
  UnityEngine_GameObject_o *v67; // x0
  UIWidget_o *v68; // x20
  int v69; // s0
  UIWidget_o *v73; // x20
  int v74; // s0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v79; // x8
  il2cpp_array_size_t v80; // w21
  WebViewManager_o *v81; // x0
  UserItemMaster_o *v82; // x20
  struct EventCombineCostumeEntity_o *v83; // x8
  struct System_Int32_array *v84; // x8
  struct EventCombineCostumeEntity_o *v85; // x8
  struct System_Int32_array *v86; // x10
  WebViewManager_o *v87; // x0
  WarQuestSelectionMaster_o *v88; // x0
  struct UserServantEntity_o *v89; // x8
  ServantCostumeReleaseMaster_o *v90; // x20
  ServantCostumeEntity_o *v91; // x21
  __int64 v92; // x22
  __int64 v93; // x23
  int32_t v94; // w0
  struct UserServantEntity_o *v95; // x8
  __int128 v96; // q1
  int32_t v97; // w22
  int64_t v98; // x0
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v100; // x8
  WebViewManager_o *v101; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v102; // x0
  struct EventCombineCostumeEntity_o *v103; // x8
  EventEntity_o *v104; // x0
  EventEntity_o *v105; // x20
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+30h] [xbp-80h]
  UserItemEntity_o *v110; // [xsp+50h] [xbp-60h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_40FCEC0 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineCostumeMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v16);
    byte_40FCEC0 = 1;
  }
  v110 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_116;
  MasterData_WarQuestSelectionMaster = (CombineCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemInfoList,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_116;
  v33 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v112.fields.currentCryptoKey = v33;
  *(_QWORD *)&v112.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v112, 0LL);
  baseSvtCostume = this->fields.baseSvtCostume;
  if ( !baseSvtCostume || !MasterData_WarQuestSelectionMaster )
    goto LABEL_116;
  if ( CombineCostumeMaster__TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         v34,
         baseSvtCostume->fields.id,
         0LL) )
  {
    if ( !entity )
      goto LABEL_116;
    p_spendQpLb = &this->fields.spendQpLb;
    spendQpLb = this->fields.spendQpLb;
    this->fields.spendQpVal = entity->fields.qp;
    v38 = System_Int32__ToString_38275808((int)this + 256, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
    if ( !spendQpLb )
      goto LABEL_116;
    UILabel__set_text(spendQpLb, v38, 0LL);
    if ( !entity )
      goto LABEL_116;
    itemIds = entity->fields.itemIds;
    if ( !itemIds )
      goto LABEL_116;
    max_length = itemIds->max_length;
    if ( max_length < 1 )
    {
      v51 = 1;
    }
    else
    {
      itemNums = entity->fields.itemNums;
      v45 = 0LL;
      do
      {
        itemInfos = this->fields.itemInfos;
        if ( !itemInfos )
          goto LABEL_116;
        if ( (unsigned int)v45 >= itemInfos->max_length )
          goto LABEL_117;
        v47 = itemInfos->m_Items[v45];
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( (unsigned int)v45 >= itemIds->max_length )
          goto LABEL_117;
        if ( !itemNums )
          goto LABEL_116;
        if ( (unsigned int)v45 >= itemNums->max_length )
        {
LABEL_117:
          sub_B17100(UserId, v40, v41);
          sub_B170A0();
        }
        if ( !v47 )
          goto LABEL_116;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v47,
          UserId,
          itemIds->m_Items[v45 + 1],
          itemNums->m_Items[v45 + 1],
          0LL);
        if ( !*p_itemInfoList )
          goto LABEL_116;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_itemInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
        LimitCntUpItemComponent__SetMaskSprite(v47, 0, 0LL);
        ++v45;
        v47->fields.disableOpenItemDetailDialog = 0;
      }
      while ( (int)v45 < max_length );
      v48 = 0LL;
      while ( 1 )
      {
        v49 = *p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_116;
        if ( v49->fields._size <= (unsigned int)v48 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v50 = v49->fields._items->m_Items[v48];
        if ( !v50 )
          goto LABEL_116;
        if ( !LOBYTE(v50[2].fields.targetId) )
          break;
        if ( (int)++v48 >= max_length )
        {
          v51 = 1;
          goto LABEL_39;
        }
      }
      v51 = 0;
LABEL_39:
      p_spendQpLb = &this->fields.spendQpLb;
    }
    v52 = this->fields.baseSvtCostume;
    if ( !v52 )
      goto LABEL_116;
    costumeNameLb = this->fields.costumeNameLb;
    if ( !costumeNameLb )
      goto LABEL_116;
    UILabel__set_text(costumeNameLb, v52->fields.name, 0LL);
    v54 = this->fields.baseSvtCostume;
    if ( !v54 )
      goto LABEL_116;
    conditionLb = this->fields.conditionLb;
    if ( !conditionLb )
      goto LABEL_116;
    UILabel__set_text(conditionLb, v54->fields.releaseInfo, 0LL);
    v56 = this->fields.baseSvt;
    if ( !v56 )
      goto LABEL_116;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    v59 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
    v58 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v113.fields.currentCryptoKey = v59;
    *(_QWORD *)&v113.fields.fakeValue = v58;
    v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v113, 0LL);
    v61 = this->fields.baseSvtCostume;
    if ( !v61 )
      goto LABEL_116;
    v62 = v60;
    id = v61->fields.id;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceImage(costumeFaceIcon, v62, id, 0LL);
    v64 = (UnityEngine_Component_o *)this->fields.costumeFaceIcon;
    if ( !v64 )
      goto LABEL_116;
    gameObject = UnityEngine_Component__get_gameObject(v64, 0LL);
    if ( !gameObject )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    costumeFaceIconFrame = (UnityEngine_Component_o *)this->fields.costumeFaceIconFrame;
    if ( !costumeFaceIconFrame )
      goto LABEL_116;
    v67 = UnityEngine_Component__get_gameObject(costumeFaceIconFrame, 0LL);
    if ( !v67 )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive(v67, 1, 0LL);
  }
  else
  {
    v51 = 0;
    p_spendQpLb = &this->fields.spendQpLb;
  }
  v68 = (UIWidget_o *)*p_spendQpLb;
  *(UnityEngine_Color_o *)&v69 = UnityEngine_Color__get_white(0LL);
  if ( !v68 )
    goto LABEL_116;
  UIWidget__set_color(v68, *(UnityEngine_Color_o *)&v69, 0LL);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    v73 = (UIWidget_o *)*p_spendQpLb;
    *(UnityEngine_Color_o *)&v74 = UnityEngine_Color__get_red(0LL);
    if ( !v73 )
      goto LABEL_116;
    UIWidget__set_color(v73, *(UnityEngine_Color_o *)&v74, 0LL);
    this->fields.isShortQp = 1;
  }
  if ( (v51 & 1) == 0 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v79 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v79 )
      goto LABEL_116;
    v80 = 0;
    while ( (signed int)v80 < (signed int)v79->max_length )
    {
      v81 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v81 )
        goto LABEL_116;
      v82 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v81,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v83 = this->fields.eventCombineCostumeEnt;
      if ( !v83 )
        goto LABEL_116;
      v84 = v83->fields.itemIds;
      if ( !v84 )
        goto LABEL_116;
      if ( v80 >= v84->max_length )
        goto LABEL_117;
      if ( !v82 )
        goto LABEL_116;
      UserId = UserItemMaster__TryGetEntity(v82, &v110, UserId, v84->m_Items[v80 + 1], 0LL);
      if ( (UserId & 1) == 0 )
        goto LABEL_83;
      if ( !v110 )
        goto LABEL_116;
      v85 = this->fields.eventCombineCostumeEnt;
      if ( !v85 )
        goto LABEL_116;
      v86 = v85->fields.itemNums;
      if ( !v86 )
        goto LABEL_116;
      if ( v80 >= v86->max_length )
        goto LABEL_117;
      if ( v110->fields.num < v86->m_Items[v80 + 1] )
      {
LABEL_83:
        this->fields.isShortEventItem = 1;
        break;
      }
      v79 = v85->fields.itemIds;
      ++v80;
      if ( !v79 )
        goto LABEL_116;
    }
  }
  v87 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v87 )
    goto LABEL_116;
  v88 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v87,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v89 = this->fields.baseSvt;
  if ( !v89 )
    goto LABEL_116;
  v90 = (ServantCostumeReleaseMaster_o *)v88;
  v91 = this->fields.baseSvtCostume;
  v93 = *(_QWORD *)&v89->fields.svtId.fields.currentCryptoKey;
  v92 = *(_QWORD *)&v89->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v114.fields.currentCryptoKey = v93;
  *(_QWORD *)&v114.fields.fakeValue = v92;
  v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v114, 0LL);
  v95 = this->fields.baseSvt;
  if ( !v95 )
    goto LABEL_116;
  v96 = *(_OWORD *)&v95->fields.id.fields.fakeValue;
  v97 = v94;
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v95->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v109.fields.fakeValue = v96;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v108 = v109;
  v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v108, 0LL);
  if ( !v90 )
    goto LABEL_116;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v90, v91, v97, v98, 0LL);
  v100 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v100 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_103;
  }
  v101 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v101
    || (v102 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)v101,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___),
        (v103 = this->fields.eventCombineCostumeEnt) == 0LL)
    || !v102
    || (v104 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v102,
                                  v103->fields.eventId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_116:
    sub_B170D4();
  }
  v105 = v104;
  if ( EventEntity__IsOpen(v104, 0, 0LL) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_113;
  }
  startedAt = v105->fields.startedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v105, 0, 0LL) )
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CostumeListViewManager_o *costumeListInfo; // x8
  struct ServantCostumeEntity_o *baseSvtCostume; // x1
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x21
  struct EventCombineCostumeEntity_o **p_eventCombineCostumeEnt; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v25; // x22
  __int64 v26; // x23
  __int64 v27; // x24
  int32_t v28; // w0
  System_Int32_array **ListBySvtIdAndCostumeId; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  LimitCntUpItemComponent_o *eventItemIcon; // x21
  int64_t UserId; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  struct EventCombineCostumeEntity_o *v40; // x9
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  UnityEngine_GameObject_o *costumeReleaseInfo; // x0
  UnityEngine_GameObject_o *v49; // x0
  const MethodInfo *v50; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_40FCEBE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FCEBE = 1;
  }
  costumeListInfo = this->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_27;
  baseSvtCostume = costumeListInfo->fields.baseSvtCostume;
  this->fields.baseSvtCostume = baseSvtCostume;
  p_baseSvtCostume = &this->fields.baseSvtCostume;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseSvtCostume,
    (System_Int32_array **)baseSvtCostume,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  p_eventCombineCostumeEnt = &this->fields.eventCombineCostumeEnt;
  this->fields.eventCombineCostumeEnt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventCombineCostumeEnt, 0LL, v16, v17, v18, v19, v20, v21);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_27;
  v25 = (EventCombineCostumeMaster_o *)MasterData_WarQuestSelectionMaster;
  v27 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v27;
  *(_QWORD *)&v51.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v51, 0LL);
  if ( !*p_baseSvtCostume || !v25 )
    goto LABEL_27;
  ListBySvtIdAndCostumeId = (System_Int32_array **)EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                                     v25,
                                                     v28,
                                                     (*p_baseSvtCostume)->fields.id,
                                                     0LL);
  *p_eventCombineCostumeEnt = (struct EventCombineCostumeEntity_o *)ListBySvtIdAndCostumeId;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventCombineCostumeEnt,
    ListBySvtIdAndCostumeId,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( *p_eventCombineCostumeEnt )
  {
    eventItemIcon = this->fields.eventItemIcon;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v40 = *p_eventCombineCostumeEnt;
    if ( *p_eventCombineCostumeEnt )
    {
      itemIds = v40->fields.itemIds;
      if ( itemIds )
      {
        if ( !itemIds->max_length )
          goto LABEL_28;
        itemNums = v40->fields.itemNums;
        if ( !itemNums )
          goto LABEL_27;
        if ( !itemNums->max_length )
        {
LABEL_28:
          sub_B17100(UserId, v38, v39);
          sub_B170A0();
        }
        if ( eventItemIcon )
        {
          LimitCntUpItemComponent__setLimitUpItemInfo(
            eventItemIcon,
            UserId,
            itemIds->m_Items[1],
            itemNums->m_Items[1],
            0LL);
          goto LABEL_22;
        }
      }
    }
LABEL_27:
    sub_B170D4();
  }
LABEL_22:
  v43 = (UnityEngine_Component_o *)this->fields.costumeListInfo;
  if ( !v43 )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(v43, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v45);
  ServantCostumeControl__SetSvtCostumeCombineData(this, v46);
  ServantCostumeControl__SetExeBtnState(this, v47);
  costumeReleaseInfo = this->fields.costumeReleaseInfo;
  if ( !costumeReleaseInfo )
    goto LABEL_27;
  v49 = UnityEngine_GameObject__get_gameObject(costumeReleaseInfo, 0LL);
  if ( !v49 )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(v49, 1, 0LL);
  ServantCostumeControl__RefreshEventCostumeInfo(this, v50);
}


void __fastcall ServantCostumeControl__ShowCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *costumeListInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  CostumeListViewManager_o *v5; // x0
  CostumeListViewManager_o *v6; // x0

  costumeListInfo = (UnityEngine_Component_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo
    || (gameObject = UnityEngine_Component__get_gameObject(costumeListInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (v5 = this->fields.costumeListInfo) == 0LL)
    || (CostumeListViewManager__CreateList(v5, this->fields.baseSvt, 0LL), (v6 = this->fields.costumeListInfo) == 0LL) )
  {
    sub_B170D4();
  }
  CostumeListViewManager__SetMode_28508924(v6, 2, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_0(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__RequestCombineCostume(combineRootComponent, 0, this->fields.itemInfoList, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_1(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  SetRarityDialogControl_o *exeCombineDlg; // x20
  System_String_o *name; // x21
  int32_t qp; // w22
  int32_t haveQpVal; // w23
  System_Action_o *v14; // x24
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x25

  if ( (byte_40FCEC9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v6);
    sub_B16FFC(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_2__, v7);
    byte_40FCEC9 = 1;
  }
  baseSvtCostume = this->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_7;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_7;
  exeCombineDlg = this->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  qp = eventCombineCostumeEnt->fields.qp;
  haveQpVal = this->fields.haveQpVal;
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_2__, 0LL);
  v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
LABEL_7:
    sub_B170D4();
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, qp, haveQpVal, v14, v19, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_2(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FCECA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v7);
    byte_40FCECA = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v8
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.eventItemIcon,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__),
        (eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt) == 0LL)
    || (combineRootComponent = this->fields.combineRootComponent) == 0LL )
  {
    sub_B170D4();
  }
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventCombineCostumeEnt->fields.eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)v8,
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v20; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-40h]

  if ( (byte_40FCEC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FCEC1 = 1;
  }
  p_baseSvt = &this->fields.baseSvt;
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v10 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v24.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v23 = v24;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v23, 0LL);
    *p_baseSvt = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseSvt, 0LL, v12, v13, v14, v15, v16, v17);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &this->fields.baseSvt,
               v11,
               (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v20 )
        {
          v21 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                         (DataManager_o *)v20,
                                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( v21 )
          {
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   v21,
                   &this->fields.baseSvt,
                   v11,
                   (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_B170D4();
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

  if ( (byte_40F761E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_40F761E = 1;
  }
  if ( decide )
    ActionExtensions__Call(this->fields.callBack, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct ServantCostumeControl_o *v21; // x8
  struct ServantCostumeControl_o **p__4__this; // x19
  struct ServantCostumeControl_o *v23; // t1
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeControl_o *_4__this; // t1
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v29; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int32_t haveQpVal; // w23
  System_Action_o *v33; // x25
  Il2CppObject *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Action_o *v39; // x19

  if ( (byte_40F761F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, useEventItem);
    sub_B16FFC(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v7);
    sub_B16FFC(&Method_ServantCostumeControl___c__DisplayClass58_1__OnClickExeCostumeCombine_b__4__, v8);
    sub_B16FFC(&ServantCostumeControl___c__DisplayClass58_1_TypeInfo, v9);
    byte_40F761F = 1;
  }
  v10 = sub_B170CC(ServantCostumeControl___c__DisplayClass58_1_TypeInfo, useEventItem, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_14;
  *(_QWORD *)(v10 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_BYTE *)(v10 + 16) = useEventItem;
  if ( !useEventItem )
  {
    combineCostumeEntity = this->fields.combineCostumeEntity;
    if ( combineCostumeEntity )
    {
      _4__this = this->fields.__4__this;
      p__4__this = &this->fields.__4__this;
      v21 = _4__this;
      if ( _4__this )
      {
        p_qp = &combineCostumeEntity->fields.qp;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_B170D4();
  }
  v23 = this->fields.__4__this;
  p__4__this = &this->fields.__4__this;
  v21 = v23;
  if ( !v23 )
    goto LABEL_14;
  eventCombineCostumeEnt = v21->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_14;
  p_qp = &eventCombineCostumeEnt->fields.qp;
LABEL_11:
  baseSvtCostume = v21->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_14;
  v29 = *p_qp;
  exeCombineDlg = v21->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = v21->fields.haveQpVal;
  v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v10,
    Method_ServantCostumeControl___c__DisplayClass58_1__OnClickExeCostumeCombine_b__4__,
    0LL);
  v34 = (Il2CppObject *)*p__4__this;
  v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
  System_Action___ctor(v39, v34, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
    goto LABEL_14;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v29, haveQpVal, v33, v39, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemInfoList; // x20
  struct ServantCostumeControl___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct ServantCostumeControl___c__DisplayClass58_0_o *v13; // x8
  struct ServantCostumeControl_o *v14; // x8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40F7620 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v7);
    byte_40F7620 = 1;
  }
  itemInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, method, v2, v3, v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    itemInfoList,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
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
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
  }
  else
  {
    eventId = 0;
  }
  v13 = this->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_16;
  v14 = v13->fields.__4__this;
  if ( !v14 )
    goto LABEL_16;
  combineRootComponent = v14->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_16:
    sub_B170D4();
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0LL);
}