// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  int v8; // s1
  int v9; // s2
  int v10; // s0
  struct ServantCostumeControl_StaticFields v11; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42E9D45 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCostumeControl_TypeInfo, v1, v2, v3);
    byte_42E9D45 = 1;
  }
  v8 = 1063321600;
  v9 = 1065156608;
  v10 = 0;
  v11 = (struct ServantCostumeControl_StaticFields)0LL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v11);
  *ServantCostumeControl_TypeInfo->static_fields = v11;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x19
  UserServantEntity_o *baseSvt; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  EventServantEntity_o *v42; // x22
  CommonUI_o *Instance; // x20
  System_String_o *v44; // x21
  System_String_o *v45; // x23
  Il2CppObject *v46; // x1
  System_String_o *v47; // x22
  System_String_o *v48; // x23
  System_String_o *v49; // x24
  CommonConfirmDialog_ClickDelegate_o *v50; // x25

  if ( (byte_42E9D40 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)callBack, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&string_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ServantCostumeControl___c__DisplayClass57_0__CheckCondJoin_b__0__, v15, v16, v17);
    sub_B5D5C4(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3382/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3381/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3380/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3383/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, v30, v31, v32);
    byte_42E9D40 = 1;
  }
  v33 = sub_B5D694(ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
  ServantCostumeControl___c__DisplayClass57_0___ctor((ServantCostumeControl___c__DisplayClass57_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_19;
  *(_QWORD *)(v33 + 16) = callBack;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)callBack, v36, v37, v38, v39, v40, v41);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_19;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0LL);
  if ( !this->fields.baseSvt )
    goto LABEL_19;
  v42 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v33 + 16), 0LL);
    return;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3382/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0LL);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0LL);
  v46 = (Il2CppObject *)(v42 ? EventServantEntity__getEndTimeStr(v42, 0LL) : string_TypeInfo->static_fields->Empty);
  v47 = System_String__Format(v45, v46, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3383/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0LL);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3381/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0LL);
  v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v50,
    (Il2CppObject *)v33,
    Method_ServantCostumeControl___c__DisplayClass57_0__CheckCondJoin_b__0__,
    0LL);
  if ( !Instance )
LABEL_19:
    sub_B5D69C(baseSvt, v35);
  CommonUI__OpenConfirmDecideDlg(Instance, v44, v47, v48, v49, v50, 0, 0.0, 14.7, 0, 0, 0, 290, 0, 1, 0, 0LL);
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

  if ( (byte_42E9D39 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)selectBase, (_DWORD)method, v3);
    byte_42E9D39 = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v30, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v29.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v29, 0LL) )
      {
        ServantCostumeControl__InitDispInfo(this, v15);
        this->fields.baseSvtCostume = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseSvtCostume, 0LL, v16, v17, v18, v19, v20, v21);
        this->fields.eventCombineCostumeEnt = 0LL;
        sub_B5D560(
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
  sub_B5D560(
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
        v6 = sub_B5D6C8(this);
        sub_B5D668(v6, 0LL);
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
    sub_B5D69C(this, method);
  }
}


void __fastcall ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_B5D69C(0LL, method);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseSvtCostume, 0LL, v2, v3, v4, v5, v6, v7);
  p_baseSvtCostume[6] = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)(p_baseSvtCostume + 6), 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall ServantCostumeControl__InitCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *costumeFaceIconFrame; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  if ( (byte_42E9D36 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v5, v6, v7);
    byte_42E9D36 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  this->fields.isBaseSelect = 0;
  ServantCostumeControl__InitDispInfo(this, v8);
  ServantCostumeControl__ClearItemList(this, v9);
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  costumeFaceIconFrame = System_Int32__ToString_39741776((int)this + 256, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_15;
  UILabel__set_text(spendQpLb, costumeFaceIconFrame, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v13);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v14);
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
        ServantCostumeControl__SetExeBtnState(this, v16),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeListInfo) == 0LL)
    || (costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)costumeFaceIconFrame,
                                                    0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 0, 0LL),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(costumeFaceIconFrame, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0LL);
  ServantCostumeControl__ResetInit(this, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__InitCombineCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILabel_o *spendQpLb; // x20
  System_String_o *gameObject; // x0
  __int64 v13; // x1
  UIWidget_o *v14; // x20
  int v15; // s0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v23; // x1

  if ( (byte_42E9D38 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E9D38 = 1;
  }
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  spendQpLb = this->fields.spendQpLb;
  gameObject = System_Int32__ToString_39741776((int)this + 256, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
  if ( !spendQpLb )
    goto LABEL_18;
  UILabel__set_text(spendQpLb, gameObject, 0LL);
  v14 = (UIWidget_o *)this->fields.spendQpLb;
  *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
  if ( !v14 )
    goto LABEL_18;
  UIWidget__set_color(v14, *(UnityEngine_Color_o *)&v15, 0LL);
  ServantCostumeControl__SetHaveQpInfo(this, v19);
  ServantCostumeControl__ClearItemList(this, v20);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v21);
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
        ServantCostumeControl__SetExeBtnState(this, v23),
        (gameObject = (System_String_o *)this->fields.costumeReleaseInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL),
        (gameObject = (System_String_o *)this->fields.eventCombineCostumeBalloon) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(gameObject, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


void __fastcall ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *v6; // x20
  struct UICharaGraphTexture_o *charaGraph; // t1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E9D37 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9D37 = 1;
  }
  charaGraph = this->fields.charaGraph;
  p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
  v6 = (UnityEngine_Object_o *)charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !*p_charaGraph )
      sub_B5D69C(0LL, v8);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_charaGraph, 0LL, v10, v11, v12, v13, v14, v15);
  }
}


void __fastcall ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42E9D44 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9D44 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, v5);
  CombineRootComponent__ShowBaseListSvtCostume(combineRootComponent, 0LL);
}


void __fastcall ServantCostumeControl__OnClickExeCostumeCombine(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantCostumeControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  EventEntity_o *v45; // x20
  SetRarityDialogControl_o *exeCombineDlg; // x20
  EventCombineCostumeEntity_o *v47; // x21
  System_Action_o *v48; // x22
  System_Action_o *v49; // x23
  struct ServantCostumeEntity_o *v50; // x8
  System_String_o *name; // x21
  SetRarityDialogControl_o *v52; // x20
  int32_t haveQpVal; // w22
  int32_t spendQpVal; // w23
  System_Action_o *v55; // x24
  int64_t startedAt; // x22
  __int64 v57; // x20
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v65; // x21
  __int64 v66; // x22
  __int64 v67; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  System_Int32_array **Entity; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  SetRarityDialogControl_o *v76; // x21
  CombineCostumeEntity_o *v77; // x22
  EventCombineCostumeEntity_o *v78; // x23
  bool v79; // w24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v81; // x25
  System_Action_o *v82; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  v4 = this;
  if ( (byte_42E9D41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_CombineCostumeMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v29, v30, v31);
    sub_B5D5C4(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_0__, v32, v33, v34);
    sub_B5D5C4(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_1__, v35, v36, v37);
    sub_B5D5C4(&Method_ServantCostumeControl___c__DisplayClass58_0__OnClickExeCostumeCombine_b__3__, v38, v39, v40);
    this = (ServantCostumeControl_o *)sub_B5D5C4(&ServantCostumeControl___c__DisplayClass58_0_TypeInfo, v41, v42, v43);
    byte_42E9D41 = 1;
  }
  if ( v4->fields.eventCombineCostumeEnt )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v4->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_37;
    if ( !this )
      goto LABEL_37;
    this = (ServantCostumeControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_37;
    v45 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0LL) )
    {
      exeCombineDlg = v4->fields.exeCombineDlg;
      v47 = v4->fields.eventCombineCostumeEnt;
      v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v4,
        Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_1__,
        0LL);
      v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v49, (Il2CppObject *)v4, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v47, v48, v49, 0LL);
        return;
      }
LABEL_37:
      sub_B5D69C(this, method);
    }
    startedAt = v45->fields.startedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v45, 0, 0LL) )
    {
      v57 = sub_B5D694(ServantCostumeControl___c__DisplayClass58_0_TypeInfo);
      ServantCostumeControl___c__DisplayClass58_0___ctor((ServantCostumeControl___c__DisplayClass58_0_o *)v57, 0LL);
      if ( !v57 )
        goto LABEL_37;
      *(_QWORD *)(v57 + 24) = v4;
      sub_B5D560((BattleServantConfConponent_o *)(v57 + 24), (System_Int32_array **)v4, v58, v59, v60, v61, v62, v63);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (ServantCostumeControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v4->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_37;
      v65 = (CombineCostumeMaster_o *)this;
      v67 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v66 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v83.fields.currentCryptoKey = v67;
      *(_QWORD *)&v83.fields.fakeValue = v66;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v83, 0LL);
      baseSvtCostume = v4->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v65 )
        goto LABEL_37;
      Entity = (System_Int32_array **)CombineCostumeMaster__GetEntity(
                                        v65,
                                        (int32_t)this,
                                        baseSvtCostume->fields.id,
                                        0LL);
      *(_QWORD *)(v57 + 16) = Entity;
      sub_B5D560((BattleServantConfConponent_o *)(v57 + 16), Entity, v70, v71, v72, v73, v74, v75);
      v76 = v4->fields.exeCombineDlg;
      v77 = *(CombineCostumeEntity_o **)(v57 + 16);
      v78 = v4->fields.eventCombineCostumeEnt;
      v79 = v4->fields.isShortNeedItem || v4->fields.isShortQp;
      isShortEventItem = v4->fields.isShortEventItem;
      v81 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v81,
        (Il2CppObject *)v57,
        Method_ServantCostumeControl___c__DisplayClass58_0__OnClickExeCostumeCombine_b__3__,
        (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
      v82 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v82, (Il2CppObject *)v4, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
      if ( !v76 )
        goto LABEL_37;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v76,
        v77,
        v78,
        v79,
        isShortEventItem,
        v81,
        v82,
        0LL);
    }
  }
  else
  {
    v50 = v4->fields.baseSvtCostume;
    if ( !v50 )
      goto LABEL_37;
    name = v50->fields.name;
    v52 = v4->fields.exeCombineDlg;
    haveQpVal = v4->fields.haveQpVal;
    spendQpVal = v4->fields.spendQpVal;
    v55 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v55, (Il2CppObject *)v4, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_0__, 0LL);
    if ( !v52 )
      goto LABEL_37;
    SetRarityDialogControl__SetConfirmCombineCostume(v52, name, spendQpVal, haveQpVal, v55, 0LL, 0LL);
  }
}


void __fastcall ServantCostumeControl__RefreshAlreadyGetInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *alreadyGetInfo; // x0
  UILabel_o *alreadyGetLabel; // x20
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x21
  int max_length; // w8
  unsigned int v15; // w22
  Il2CppClass **v16; // x8
  UnityEngine_Component_o *v17; // x20
  struct UnityEngine_Transform_array *v18; // x8
  __int64 v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9D42 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3472/*"COSTUME_SELECT_SERVANT_MSG"*/, v8, v9, v10);
    byte_42E9D42 = 1;
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
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3472/*"COSTUME_SELECT_SERVANT_MSG"*/, 0LL);
  if ( !alreadyGetLabel )
    goto LABEL_26;
  UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_26;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < max_length )
    {
      v16 = &alreadyGetLabelBgList->obj.klass + (int)v15;
      v17 = (UnityEngine_Component_o *)v16[4];
      if ( !v17 )
        goto LABEL_26;
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)v16[4],
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_26;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0LL);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     v17,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_26;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v20.fields.x = 0.0;
      v20.fields.y = 0.0;
      v20.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v17, v20, 0LL);
      alreadyGetInfo = UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive(alreadyGetInfo, 0, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_17;
    }
LABEL_27:
    v19 = sub_B5D6C8(alreadyGetInfo);
    sub_B5D668(v19, 0LL);
  }
LABEL_17:
  v18 = this->fields.alreadyGetLabelBgList;
  if ( !v18 )
    goto LABEL_26;
  if ( !v18->max_length )
    goto LABEL_27;
  alreadyGetInfo = (UnityEngine_GameObject_o *)v18->m_Items[0];
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
    sub_B5D69C(alreadyGetInfo, method);
  }
  v21.fields.y = -1.0;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__RefreshEventCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  __int64 alreadyGetInfo; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  WarEntity_o *Entity; // x0
  const MethodInfo *v71; // x1
  EventEntity_o *v72; // x20
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x2
  AssetData_o *eventCombineCostumeBalloonData; // x21
  struct EventCombineCostumeEntity_o *v76; // x8
  struct System_Int32_array *itemIds; // x8
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  int32_t generatedBalloonId; // w8
  struct EventCombineCostumeEntity_o *v82; // x9
  struct System_Int32_array *v83; // x9
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x0
  struct EventCombineCostumeEntity_o *v86; // x8
  struct System_Int32_array *v87; // x8
  struct EventCombineCostumeEntity_o *v88; // x8
  struct System_Int32_array *v89; // x8
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x22
  int max_length; // w8
  unsigned int v92; // w23
  Il2CppClass **v93; // x8
  UnityEngine_Component_o *v94; // x21
  struct UnityEngine_Transform_array *v95; // x8
  System_TimeSpan_o v96; // x0
  int64_t endedAt; // x22
  int64_t ticks; // x21
  System_Object_array *v99; // x21
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x22
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x22
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x22
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x22
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x22
  System_String_o *v135; // x0
  UILabel_o *alreadyGetLabel; // x21
  Il2CppObject *v137; // x22
  System_String_o *v138; // x23
  Il2CppObject *v139; // x0
  UIWidget_o *spendQpLb; // x21
  float v141; // s4
  float v142; // s5
  float v143; // s6
  float v144; // s7
  __int64 v145; // x21
  _BOOL8 v146; // x0
  __int64 v147; // x1
  __int64 v148; // x0
  __int64 v149; // x0
  int64_t startedAt; // x21
  UILabel_o *v151; // x20
  System_String_o *v152; // x21
  Il2CppObject *v153; // x0
  UIWidget_o *v154; // x20
  int v155; // s0
  UIWidget_o *v159; // x20
  int v160; // s0
  __int64 v164; // x19
  _BOOL8 v165; // x0
  __int64 v166; // x1
  int v167; // w19
  System_Collections_Generic_List_Enumerator_T__o v168; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+18h] [xbp-98h] BYREF
  uint64_t dateData; // [xsp+78h] [xbp-38h] BYREF
  System_DateTime_o v171; // 0:x0.8
  System_DateTime_o v172; // 0:x0.8
  System_DateTime_o v173; // 0:x0.8
  System_DateTime_o v174; // 0:x0.8
  System_DateTime_o v175; // 0:x0.8
  System_DateTime_o v176; // 0:x0.8
  System_TimeSpan_o v177; // 0:x1.8
  UnityEngine_Vector3_o v178; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v179; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v180; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v181; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9D43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&System_DateTime_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___, v26, v27, v28);
    sub_B5D5C4(&int_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&NetworkManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&object___TypeInfo, v41, v42, v43);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&System_TimeSpan_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_12859/*"ServantCostumeEventBalloon_"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_3471/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_3470/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_23928/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, v65, v66, v67);
    byte_42E9D43 = 1;
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
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_119;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_119;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v72 = (EventEntity_o *)Entity;
  ServantCostumeControl__SetSvtCostumeCombineData(this, v71);
  ServantCostumeControl__SetExeBtnState(this, v73);
  ServantCostumeControl__SetStateInfoMsg(this, 2, v74);
  eventCombineCostumeBalloonData = this->fields.eventCombineCostumeBalloonData;
  if ( eventCombineCostumeBalloonData )
  {
    v76 = this->fields.eventCombineCostumeEnt;
    if ( !v76 )
      goto LABEL_119;
    itemIds = v76->fields.itemIds;
    if ( !itemIds )
      goto LABEL_119;
    if ( !itemIds->max_length )
      goto LABEL_94;
    v78 = System_Int32__ToString((int)itemIds + 32, 0LL);
    v79 = System_String__Concat_44577788((System_String_o *)StringLiteral_12859/*"ServantCostumeEventBalloon_"*/, v78, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               eventCombineCostumeBalloonData,
                                                               v79,
                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
        v82 = this->fields.eventCombineCostumeEnt;
        if ( !v82 )
          goto LABEL_119;
        v83 = v82->fields.itemIds;
        if ( !v83 )
          goto LABEL_119;
        if ( !v83->max_length )
          goto LABEL_94;
        if ( generatedBalloonId == v83->m_Items[1] )
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
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
      v86 = this->fields.eventCombineCostumeEnt;
      if ( !v86 )
        goto LABEL_119;
      v87 = v86->fields.itemIds;
      if ( !v87 )
        goto LABEL_119;
      if ( !v87->max_length )
        goto LABEL_94;
      if ( !alreadyGetInfo )
        goto LABEL_119;
      ServantCostumeEventBalloon__Set((ServantCostumeEventBalloon_o *)alreadyGetInfo, v87->m_Items[1], 0LL);
      v88 = this->fields.eventCombineCostumeEnt;
      if ( !v88 )
        goto LABEL_119;
      v89 = v88->fields.itemIds;
      if ( !v89 )
        goto LABEL_119;
      if ( !v89->max_length )
        goto LABEL_94;
      this->fields.generatedBalloonId = v89->m_Items[1];
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
    v92 = 0;
    while ( v92 < max_length )
    {
      v93 = &alreadyGetLabelBgList->obj.klass + (int)v92;
      v94 = (UnityEngine_Component_o *)v93[4];
      if ( !v94 )
        goto LABEL_119;
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)v93[4],
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                  v94,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0LL);
      v178.fields.x = 0.0;
      v178.fields.z = 0.0;
      v178.fields.y = -15.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v94, v178, 0LL);
      alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject(v94, 0LL);
      if ( !alreadyGetInfo )
        goto LABEL_119;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0LL);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v92 >= max_length )
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
  v179.fields.y = -16.0;
  v179.fields.x = 0.0;
  v179.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v179, 0LL);
  alreadyGetInfo = EventEntity__IsOpen(v72, 0, 0LL);
  if ( (alreadyGetInfo & 1) != 0 )
  {
    v95 = this->fields.alreadyGetLabelBgList;
    if ( v95 )
    {
      if ( v95->max_length <= 1 )
        goto LABEL_94;
      alreadyGetInfo = (__int64)v95->m_Items[1];
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
          v96.fields._ticks = System_TimeSpan__FromMinutes(1.0, 0LL).fields._ticks;
          endedAt = v72->fields.endedAt;
          ticks = v96.fields._ticks;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          dateData = NetworkManager__getServerDateTime_26077756(endedAt, 0LL).fields.dateData;
          if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_DateTime_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          }
          v171.fields.dateData = dateData;
          v177.fields._ticks = ticks;
          dateData = System_DateTime__op_Addition(v171, v177, 0LL).fields.dateData;
          v99 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 5LL);
          v172.fields.dateData = (uint64_t)&dateData;
          HIDWORD(methoda.return_type) = System_DateTime__get_Year(v172, 0LL);
          alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.return_type + 4);
          if ( v99 )
          {
            v106 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B5D684(alreadyGetInfo, v99->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( !v99->max_length )
              goto LABEL_94;
            v99->m_Items[0] = (Il2CppObject *)v106;
            sub_B5D560((BattleServantConfConponent_o *)v99->m_Items, v106, v100, v101, v102, v103, v104, v105);
            v173.fields.dateData = (uint64_t)&dateData;
            LODWORD(methoda.return_type) = System_DateTime__get_Month(v173, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
            v113 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B5D684(alreadyGetInfo, v99->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v99->max_length <= 1 )
              goto LABEL_94;
            v99->m_Items[1] = (Il2CppObject *)v113;
            sub_B5D560((BattleServantConfConponent_o *)&v99->m_Items[1], v113, v107, v108, v109, v110, v111, v112);
            v174.fields.dateData = (uint64_t)&dateData;
            HIDWORD(methoda.klass) = System_DateTime__get_Day(v174, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.klass + 4);
            v120 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B5D684(alreadyGetInfo, v99->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v99->max_length <= 2 )
              goto LABEL_94;
            v99->m_Items[2] = (Il2CppObject *)v120;
            sub_B5D560((BattleServantConfConponent_o *)&v99->m_Items[2], v120, v114, v115, v116, v117, v118, v119);
            v175.fields.dateData = (uint64_t)&dateData;
            LODWORD(methoda.klass) = System_DateTime__get_Hour(v175, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, &methoda.klass);
            v127 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B5D684(alreadyGetInfo, v99->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_96;
            }
            if ( v99->max_length <= 3 )
              goto LABEL_94;
            v99->m_Items[3] = (Il2CppObject *)v127;
            sub_B5D560((BattleServantConfConponent_o *)&v99->m_Items[3], v127, v121, v122, v123, v124, v125, v126);
            v176.fields.dateData = (uint64_t)&dateData;
            HIDWORD(methoda.name) = System_DateTime__get_Minute(v176, 0LL);
            alreadyGetInfo = j_il2cpp_value_box_0(int_TypeInfo, (char *)&methoda.name + 4);
            v134 = (System_Int32_array **)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_B5D684(alreadyGetInfo, v99->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_96:
                v149 = sub_B5D6BC(alreadyGetInfo);
                sub_B5D668(v149, 0LL);
              }
            }
            if ( v99->max_length <= 4 )
            {
LABEL_94:
              v148 = sub_B5D6C8(alreadyGetInfo);
              sub_B5D668(v148, 0LL);
            }
            v99->m_Items[4] = (Il2CppObject *)v134;
            sub_B5D560((BattleServantConfConponent_o *)&v99->m_Items[4], v134, v128, v129, v130, v131, v132, v133);
            v135 = System_String__Format_44656512((System_String_o *)StringLiteral_23928/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v99, 0LL);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            v137 = (Il2CppObject *)v135;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v138 = LocalizationManager__Get((System_String_o *)StringLiteral_3471/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
            v139 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
            alreadyGetInfo = (__int64)System_String__Format_44573324(v138, v139, v137, 0LL);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0LL);
              v180.fields.r = 0.32941;
              spendQpLb = (UIWidget_o *)this->fields.spendQpLb;
              v180.fields.a = 1.0;
              v180.fields.g = 0.32941;
              v180.fields.b = 0.32941;
              methoda.methodPointer = 0LL;
              methoda.invoker_method = 0LL;
              UnityEngine_Color___ctor(v180, v141, v142, v143, v144, &methoda);
              if ( spendQpLb )
              {
                *(_QWORD *)&v181.fields.r = methoda.methodPointer;
                *(_QWORD *)&v181.fields.b = methoda.invoker_method;
                UIWidget__set_color(spendQpLb, v181, 0LL);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                    &v168,
                    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alreadyGetInfo,
                    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  *(_QWORD *)&methoda.slot = v168.fields.current;
                  *(_OWORD *)&methoda.genericMethod = *(_OWORD *)&v168.fields.list;
                  while ( 1 )
                  {
                    v146 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                             (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
                             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v146 )
                      break;
                    v145 = *(_QWORD *)&methoda.slot;
                    if ( !*(_QWORD *)&methoda.slot )
                      sub_B5D69C(v146, v147);
                    LimitCntUpItemComponent__SetMaskSprite(*(LimitCntUpItemComponent_o **)&methoda.slot, 1, 0LL);
                    *(_BYTE *)(v145 + 88) = 1;
                  }
                  LODWORD(methoda.parameters) = 908;
                  LODWORD(methoda.rgctx_data) = 1;
                  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
                    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
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
  startedAt = v72->fields.startedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v72, 0, 0LL) )
  {
    v151 = this->fields.alreadyGetLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v152 = LocalizationManager__Get((System_String_o *)StringLiteral_3470/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0LL);
    v153 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
    alreadyGetInfo = (__int64)System_String__Format(v152, v153, 0LL);
    if ( !v151 )
      goto LABEL_119;
    UILabel__set_text(v151, (System_String_o *)alreadyGetInfo, 0LL);
    v154 = (UIWidget_o *)this->fields.spendQpLb;
    *(UnityEngine_Color_o *)&v155 = UnityEngine_Color__get_white(0LL);
    if ( !v154 )
      goto LABEL_119;
    UIWidget__set_color(v154, *(UnityEngine_Color_o *)&v155, 0LL);
    if ( this->fields.haveQpVal < this->fields.spendQpVal )
    {
      v159 = (UIWidget_o *)this->fields.spendQpLb;
      *(UnityEngine_Color_o *)&v160 = UnityEngine_Color__get_red(0LL);
      if ( !v159 )
        goto LABEL_119;
      UIWidget__set_color(v159, *(UnityEngine_Color_o *)&v160, 0LL);
    }
    alreadyGetInfo = (__int64)this->fields.itemInfoList;
    if ( !alreadyGetInfo )
LABEL_119:
      sub_B5D69C(alreadyGetInfo, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v168,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alreadyGetInfo,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
    *(_QWORD *)&methoda.slot = v168.fields.current;
    *(_OWORD *)&methoda.genericMethod = *(_OWORD *)&v168.fields.list;
    while ( 1 )
    {
      v165 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
               (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
      if ( !v165 )
        break;
      v164 = *(_QWORD *)&methoda.slot;
      if ( !*(_QWORD *)&methoda.slot )
        sub_B5D69C(v165, v166);
      LimitCntUpItemComponent__SetMaskSprite(*(LimitCntUpItemComponent_o **)&methoda.slot, 0, 0LL);
      *(_BYTE *)(v164 + 88) = 1;
    }
    LODWORD(methoda.parameters) = 908;
    v167 = ++LODWORD(methoda.rgctx_data);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.genericMethod,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
    if ( v167 && *((_DWORD *)&methoda.return_type + v167 + 1) == 908 )
      LODWORD(methoda.rgctx_data) = v167 - 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventCombineCostumeEnt, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseSvt, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.baseSvtCostume = 0LL;
  v8 = (ServantCostumeControl_o *)((char *)v8 + 232);
  sub_B5D560((BattleServantConfConponent_o *)v8, 0LL, v9, v10, v11, v12, v13, v14);
  v8->fields.charaGraphBase = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.charaGraphBase, 0LL, v15, v16, v17, v18, v19, v20);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x23
  __int64 v24; // x24
  ServantLimitImageMaster_o *v25; // x22
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v29; // w22
  struct UICharaGraphTexture_o *TexturePrefab_26715804; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42E9D3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)userSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E9D3A = 1;
  }
  this->fields.baseSvt = userSvtData;
  sub_B5D560(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v24 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  v25 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v24;
  *(_QWORD *)&v37.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
  if ( !v25 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v25,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v29 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26715804 = CharaGraphManager__CreateTexturePrefab_26715804(
                               this->fields.charaGraphBase,
                               userSvtData,
                               v29,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26715804;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26715804,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B5D69C(Instance, v20);
  UICharaGraphTexture__SetCharacter_35988116((UICharaGraphTexture_o *)Instance, userSvtData, v29, 0LL, 0, 0LL);
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
    sub_B5D69C(executeButton, method);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0LL);
}


void __fastcall ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  int32_t *p_haveQpVal; // x19
  UILabel_o *v8; // x20

  if ( (byte_42E9D3C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, (_DWORD)method, v2, v3);
    byte_42E9D3C = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v8 = *(UILabel_o **)(p_haveQpVal - 29),
        SelfUserGame = System_Int32__ToString_39741776((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL),
        !v8) )
  {
    sub_B5D69C(SelfUserGame, v6);
  }
  UILabel__set_text(v8, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__SetStateInfoMsg(
        ServantCostumeControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UIWidget_o *detailInfoLb; // x21
  void *v31; // x0
  System_String_o *v32; // x21
  __int64 *v33; // x8
  UIWidget_o *v34; // x20
  int v35; // s0

  if ( (byte_42E9D3F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, state, (_DWORD)method, v3);
    sub_B5D5C4(&ServantCostumeControl_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_12363/*"SHORT_RELEASE_COND_MSG"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3464/*"COSTUME_EXE_MSG"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_7364/*"INFO_MSG_SELECT_COSTUME"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_7359/*"INFO_MSG_COSTUME_SELECT_BASE"*/, v27, v28, v29);
    byte_42E9D3F = 1;
  }
  detailInfoLb = (UIWidget_o *)this->fields.detailInfoLb;
  v31 = ServantCostumeControl_TypeInfo;
  if ( (BYTE3(ServantCostumeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeControl_TypeInfo);
    v31 = ServantCostumeControl_TypeInfo;
  }
  if ( !detailInfoLb )
    goto LABEL_43;
  UIWidget__set_color(detailInfoLb, *(UnityEngine_Color_o *)*((_QWORD *)v31 + 23), 0LL);
  if ( state == 3 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_7364/*"INFO_MSG_SELECT_COSTUME"*/;
    goto LABEL_23;
  }
  v32 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state != 2 )
  {
    if ( state )
      goto LABEL_24;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_7359/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    goto LABEL_23;
  }
  if ( this->fields.isCanCombine )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_3464/*"COSTUME_EXE_MSG"*/;
LABEL_23:
    v32 = LocalizationManager__Get((System_String_o *)*v33, 0LL);
    goto LABEL_24;
  }
  v34 = (UIWidget_o *)this->fields.detailInfoLb;
  *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
  if ( !v34 )
LABEL_43:
    sub_B5D69C(v31, *(_QWORD *)&state);
  UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
  if ( this->fields.isShortQp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_12363/*"SHORT_RELEASE_COND_MSG"*/;
    goto LABEL_23;
  }
LABEL_24:
  v31 = this->fields.detailInfoLb;
  if ( !v31 )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)v31, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeControl__SetSvtCostumeCombineData(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int64_t Instance; // x0
  __int64 v48; // x1
  CombineCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x22
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o **p_itemInfoList; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UserServantEntity_o *baseSvt; // x8
  __int64 v59; // x22
  __int64 v60; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x21
  struct UILabel_o **p_spendQpLb; // x23
  struct System_Int32_array *itemIds; // x26
  int max_length; // w22
  struct System_Int32_array *itemNums; // x28
  __int64 v67; // x27
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v69; // x21
  __int64 v70; // x21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v71; // x23
  LimitCntUpItemComponent_o *v72; // x8
  char v73; // w26
  struct ServantCostumeEntity_o *v74; // x8
  struct ServantCostumeEntity_o *v75; // x8
  struct UserServantEntity_o *v76; // x8
  UISprite_o *costumeFaceIcon; // x20
  __int64 v78; // x21
  __int64 v79; // x22
  struct ServantCostumeEntity_o *v80; // x8
  int32_t v81; // w21
  int32_t id; // w22
  UIWidget_o *v83; // x20
  int v84; // s0
  UIWidget_o *v88; // x20
  int v89; // s0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v94; // x8
  il2cpp_array_size_t v95; // w21
  UserItemMaster_o *v96; // x20
  struct EventCombineCostumeEntity_o *v97; // x8
  struct System_Int32_array *v98; // x8
  struct EventCombineCostumeEntity_o *v99; // x8
  struct System_Int32_array *v100; // x10
  struct UserServantEntity_o *v101; // x8
  ServantCostumeReleaseMaster_o *v102; // x20
  ServantCostumeEntity_o *v103; // x21
  __int64 v104; // x22
  __int64 v105; // x23
  struct UserServantEntity_o *v106; // x8
  __int128 v107; // q1
  int32_t v108; // w22
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v110; // x8
  struct EventCombineCostumeEntity_o *v111; // x8
  EventEntity_o *v112; // x20
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x21
  __int64 v115; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+30h] [xbp-80h]
  UserItemEntity_o *v118; // [xsp+50h] [xbp-60h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  if ( (byte_42E9D3D & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineCostumeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&NetworkManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v44, v45, v46);
    byte_42E9D3D = 1;
  }
  v118 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_116;
  MasterData_WarQuestSelectionMaster = (CombineCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList = &this->fields.itemInfoList;
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemInfoList,
    (System_Int32_array **)v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_116;
  v60 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v120.fields.currentCryptoKey = v60;
  *(_QWORD *)&v120.fields.fakeValue = v59;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v120, 0LL);
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
    Instance = (int64_t)System_Int32__ToString_39741776((int)this + 256, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL);
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
      v73 = 1;
    }
    else
    {
      itemNums = entity->fields.itemNums;
      v67 = 0LL;
      do
      {
        itemInfos = this->fields.itemInfos;
        if ( !itemInfos )
          goto LABEL_116;
        if ( (unsigned int)v67 >= itemInfos->max_length )
          goto LABEL_117;
        v69 = itemInfos->m_Items[v67];
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( (unsigned int)v67 >= itemIds->max_length )
          goto LABEL_117;
        if ( !itemNums )
          goto LABEL_116;
        if ( (unsigned int)v67 >= itemNums->max_length )
        {
LABEL_117:
          v115 = sub_B5D6C8(Instance);
          sub_B5D668(v115, 0LL);
        }
        if ( !v69 )
          goto LABEL_116;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v69,
          Instance,
          itemIds->m_Items[v67 + 1],
          itemNums->m_Items[v67 + 1],
          0LL);
        Instance = (int64_t)*p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_116;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
        LimitCntUpItemComponent__SetMaskSprite(v69, 0, 0LL);
        ++v67;
        v69->fields.disableOpenItemDetailDialog = 0;
      }
      while ( (int)v67 < max_length );
      v70 = 0LL;
      while ( 1 )
      {
        v71 = *p_itemInfoList;
        if ( !*p_itemInfoList )
          goto LABEL_116;
        if ( v71->fields._size <= (unsigned int)v70 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v72 = v71->fields._items->m_Items[v70];
        if ( !v72 )
          goto LABEL_116;
        if ( !v72->fields.isItemNum )
          break;
        if ( (int)++v70 >= max_length )
        {
          v73 = 1;
          goto LABEL_39;
        }
      }
      v73 = 0;
LABEL_39:
      p_spendQpLb = &this->fields.spendQpLb;
    }
    v74 = this->fields.baseSvtCostume;
    if ( !v74 )
      goto LABEL_116;
    Instance = (int64_t)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)Instance, v74->fields.name, 0LL);
    v75 = this->fields.baseSvtCostume;
    if ( !v75 )
      goto LABEL_116;
    Instance = (int64_t)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_116;
    UILabel__set_text((UILabel_o *)Instance, v75->fields.releaseInfo, 0LL);
    v76 = this->fields.baseSvt;
    if ( !v76 )
      goto LABEL_116;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    v79 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
    v78 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v121.fields.currentCryptoKey = v79;
    *(_QWORD *)&v121.fields.fakeValue = v78;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v121, 0LL);
    v80 = this->fields.baseSvtCostume;
    if ( !v80 )
      goto LABEL_116;
    v81 = Instance;
    id = v80->fields.id;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceImage(costumeFaceIcon, v81, id, 0LL);
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
    v73 = 0;
    p_spendQpLb = &this->fields.spendQpLb;
  }
  v83 = (UIWidget_o *)*p_spendQpLb;
  *(UnityEngine_Color_o *)&v84 = UnityEngine_Color__get_white(0LL);
  if ( !v83 )
    goto LABEL_116;
  UIWidget__set_color(v83, *(UnityEngine_Color_o *)&v84, 0LL);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    v88 = (UIWidget_o *)*p_spendQpLb;
    *(UnityEngine_Color_o *)&v89 = UnityEngine_Color__get_red(0LL);
    if ( !v88 )
      goto LABEL_116;
    UIWidget__set_color(v88, *(UnityEngine_Color_o *)&v89, 0LL);
    this->fields.isShortQp = 1;
  }
  if ( (v73 & 1) == 0 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    this->fields.isShortEventItem = 0;
    v94 = eventCombineCostumeEnt->fields.itemIds;
    if ( !v94 )
      goto LABEL_116;
    v95 = 0;
    while ( (signed int)v95 < (signed int)v94->max_length )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_116;
      v96 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v97 = this->fields.eventCombineCostumeEnt;
      if ( !v97 )
        goto LABEL_116;
      v98 = v97->fields.itemIds;
      if ( !v98 )
        goto LABEL_116;
      if ( v95 >= v98->max_length )
        goto LABEL_117;
      if ( !v96 )
        goto LABEL_116;
      Instance = UserItemMaster__TryGetEntity(v96, &v118, Instance, v98->m_Items[v95 + 1], 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_83;
      if ( !v118 )
        goto LABEL_116;
      v99 = this->fields.eventCombineCostumeEnt;
      if ( !v99 )
        goto LABEL_116;
      v100 = v99->fields.itemNums;
      if ( !v100 )
        goto LABEL_116;
      if ( v95 >= v100->max_length )
        goto LABEL_117;
      if ( v118->fields.num < v100->m_Items[v95 + 1] )
      {
LABEL_83:
        this->fields.isShortEventItem = 1;
        break;
      }
      v94 = v99->fields.itemIds;
      ++v95;
      if ( !v94 )
        goto LABEL_116;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_116;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v101 = this->fields.baseSvt;
  if ( !v101 )
    goto LABEL_116;
  v102 = (ServantCostumeReleaseMaster_o *)Instance;
  v103 = this->fields.baseSvtCostume;
  v105 = *(_QWORD *)&v101->fields.svtId.fields.currentCryptoKey;
  v104 = *(_QWORD *)&v101->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v122.fields.currentCryptoKey = v105;
  *(_QWORD *)&v122.fields.fakeValue = v104;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v122, 0LL);
  v106 = this->fields.baseSvt;
  if ( !v106 )
    goto LABEL_116;
  v107 = *(_OWORD *)&v106->fields.id.fields.fakeValue;
  v108 = Instance;
  *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&v106->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v117.fields.fakeValue = v107;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v116 = v117;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v116, 0LL);
  if ( !v102 )
    goto LABEL_116;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v102, v103, v108, Instance, 0LL);
  v110 = this->fields.eventCombineCostumeEnt;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  this->fields.isCanCombine = 0;
  if ( !v110 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_103;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___),
        (v111 = this->fields.eventCombineCostumeEnt) == 0LL)
    || !Instance
    || (Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              v111->fields.eventId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
LABEL_116:
    sub_B5D69C(Instance, v48);
  }
  v112 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_113;
  }
  startedAt = v112->fields.startedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( startedAt <= NetworkManager__getTime(0LL) && !EventEntity__IsOpen(v112, 0, 0LL) )
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct CostumeListViewManager_o *costumeListInfo; // x8
  System_Int32_array **baseSvtCostume; // x1
  struct ServantCostumeEntity_o **p_baseSvtCostume; // x21
  __int64 *p_eventCombineCostumeEnt; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v29; // x22
  __int64 v30; // x23
  __int64 v31; // x24
  System_Int32_array **ListBySvtIdAndCostumeId; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  LimitCntUpItemComponent_o *eventItemIcon; // x21
  __int64 v40; // x9
  __int64 v41; // x8
  __int64 v42; // x9
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  v8 = this;
  if ( (byte_42E9D3B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    this = (ServantCostumeControl_o *)sub_B5D5C4(
                                        &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                        v15,
                                        v16,
                                        v17);
    byte_42E9D3B = 1;
  }
  costumeListInfo = v8->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_27;
  baseSvtCostume = (System_Int32_array **)costumeListInfo->fields.baseSvtCostume;
  v8->fields.baseSvtCostume = (struct ServantCostumeEntity_o *)baseSvtCostume;
  p_baseSvtCostume = &v8->fields.baseSvtCostume;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.baseSvtCostume, baseSvtCostume, v2, v3, v4, v5, v6, v7);
  p_eventCombineCostumeEnt = (__int64 *)&v8->fields.eventCombineCostumeEnt;
  v8->fields.eventCombineCostumeEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.eventCombineCostumeEnt, 0LL, v22, v23, v24, v25, v26, v27);
  this = (ServantCostumeControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_27;
  this = (ServantCostumeControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = v8->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_27;
  v29 = (EventCombineCostumeMaster_o *)this;
  v31 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v31;
  *(_QWORD *)&v48.fields.fakeValue = v30;
  this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v48, 0LL);
  if ( !*p_baseSvtCostume || !v29 )
    goto LABEL_27;
  ListBySvtIdAndCostumeId = (System_Int32_array **)EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                                     v29,
                                                     (int32_t)this,
                                                     (*p_baseSvtCostume)->fields.id,
                                                     0LL);
  *p_eventCombineCostumeEnt = (__int64)ListBySvtIdAndCostumeId;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v8->fields.eventCombineCostumeEnt,
    ListBySvtIdAndCostumeId,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( *p_eventCombineCostumeEnt )
  {
    eventItemIcon = v8->fields.eventItemIcon;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (ServantCostumeControl_o *)NetworkManager__get_UserId(0LL);
    v40 = *p_eventCombineCostumeEnt;
    if ( *p_eventCombineCostumeEnt )
    {
      v41 = *(_QWORD *)(v40 + 40);
      if ( v41 )
      {
        if ( !*(_DWORD *)(v41 + 24) )
          goto LABEL_28;
        v42 = *(_QWORD *)(v40 + 32);
        if ( !v42 )
          goto LABEL_27;
        if ( !*(_DWORD *)(v42 + 24) )
        {
LABEL_28:
          v47 = sub_B5D6C8(this);
          sub_B5D668(v47, 0LL);
        }
        if ( eventItemIcon )
        {
          LimitCntUpItemComponent__setLimitUpItemInfo(
            eventItemIcon,
            (int64_t)this,
            *(_DWORD *)(v41 + 32),
            *(_DWORD *)(v42 + 32),
            0LL);
          goto LABEL_22;
        }
      }
    }
LABEL_27:
    sub_B5D69C(this, method);
  }
LABEL_22:
  this = (ServantCostumeControl_o *)v8->fields.costumeListInfo;
  if ( !this )
    goto LABEL_27;
  this = (ServantCostumeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ServantCostumeControl__SetHaveQpInfo(v8, v43);
  ServantCostumeControl__SetSvtCostumeCombineData(v8, v44);
  ServantCostumeControl__SetExeBtnState(v8, v45);
  this = (ServantCostumeControl_o *)v8->fields.costumeReleaseInfo;
  if ( !this )
    goto LABEL_27;
  this = (ServantCostumeControl_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  ServantCostumeControl__RefreshEventCostumeInfo(v8, v46);
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
    sub_B5D69C(costumeListInfo, method);
  }
  CostumeListViewManager__SetMode_28770756((CostumeListViewManager_o *)costumeListInfo, 2, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_0(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, method);
  CombineRootComponent__RequestCombineCostume(combineRootComponent, 0, this->fields.itemInfoList, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_1(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantCostumeControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  SetRarityDialogControl_o *exeCombineDlg; // x20
  System_String_o *name; // x21
  int32_t qp; // w22
  int32_t haveQpVal; // w23
  System_Action_o *v17; // x24
  System_Action_o *v18; // x25

  v4 = this;
  if ( (byte_42E9D46 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v5, v6, v7);
    this = (ServantCostumeControl_o *)sub_B5D5C4(
                                        &Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_2__,
                                        v8,
                                        v9,
                                        v10);
    byte_42E9D46 = 1;
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
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v4, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__58_2__, 0LL);
  v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v4, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
LABEL_7:
    sub_B5D69C(this, method);
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, qp, haveQpVal, v17, v18, 0LL);
}


void __fastcall ServantCostumeControl___OnClickExeCostumeCombine_b__58_2(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v13; // x1
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_42E9D47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v8, v9, v10);
    byte_42E9D47 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v11
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.eventItemIcon,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__),
        (eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt) == 0LL)
    || (combineRootComponent = this->fields.combineRootComponent) == 0LL )
  {
    sub_B5D69C(combineRootComponent, v13);
  }
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventCombineCostumeEnt->fields.eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)v11,
    0LL);
}


UserServantEntity_o *__fastcall ServantCostumeControl__getBaseSelectedSvt(
        ServantCostumeControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct UserServantEntity_o *baseSvt; // x8
  UserServantEntity_o **p_baseSvt; // x20
  __int128 v22; // q1
  int64_t v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-40h]

  if ( (byte_42E9D3E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E9D3E = 1;
  }
  p_baseSvt = &this->fields.baseSvt;
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v22 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v34.fields.fakeValue = v22;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v33 = v34;
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v33, 0LL);
    *p_baseSvt = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseSvt, 0LL, v24, v25, v26, v27, v28, v29);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               &this->fields.baseSvt,
               v23,
               (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return *p_baseSvt;
        }
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &this->fields.baseSvt,
                   v23,
                   (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return *p_baseSvt;
          }
        }
      }
    }
    sub_B5D69C(Instance, v31);
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
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42E5D4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide, (_DWORD)method, v3);
    byte_42E5D4A = 1;
  }
  if ( decide )
    ActionExtensions__Call(this->fields.callBack, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  struct ServantCostumeControl_o *v18; // x8
  struct ServantCostumeControl_o **p__4__this; // x19
  struct ServantCostumeControl_o *v20; // t1
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeControl_o *_4__this; // t1
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v26; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int32_t haveQpVal; // w23
  System_Action_o *v30; // x25
  Il2CppObject *v31; // x20
  System_Action_o *v32; // x19

  if ( (byte_42E5D4B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, useEventItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantCostumeControl_RefreshEventCostumeInfo__, v6, v7, v8);
    sub_B5D5C4(&Method_ServantCostumeControl___c__DisplayClass58_1__OnClickExeCostumeCombine_b__4__, v9, v10, v11);
    sub_B5D5C4(&ServantCostumeControl___c__DisplayClass58_1_TypeInfo, v12, v13, v14);
    byte_42E5D4B = 1;
  }
  v15 = sub_B5D694(ServantCostumeControl___c__DisplayClass58_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_14;
  *(_QWORD *)(v15 + 24) = this;
  sub_B5D560(v15 + 24);
  *(_BYTE *)(v15 + 16) = useEventItem;
  if ( !useEventItem )
  {
    combineCostumeEntity = this->fields.combineCostumeEntity;
    if ( combineCostumeEntity )
    {
      _4__this = this->fields.__4__this;
      p__4__this = &this->fields.__4__this;
      v18 = _4__this;
      if ( _4__this )
      {
        p_qp = &combineCostumeEntity->fields.qp;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_B5D69C(v16, v17);
  }
  v20 = this->fields.__4__this;
  p__4__this = &this->fields.__4__this;
  v18 = v20;
  if ( !v20 )
    goto LABEL_14;
  eventCombineCostumeEnt = v18->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt )
    goto LABEL_14;
  p_qp = &eventCombineCostumeEnt->fields.qp;
LABEL_11:
  baseSvtCostume = v18->fields.baseSvtCostume;
  if ( !baseSvtCostume )
    goto LABEL_14;
  v26 = *p_qp;
  exeCombineDlg = v18->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = v18->fields.haveQpVal;
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v15,
    Method_ServantCostumeControl___c__DisplayClass58_1__OnClickExeCostumeCombine_b__4__,
    0LL);
  v31 = (Il2CppObject *)*p__4__this;
  v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v32, v31, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0LL);
  if ( !exeCombineDlg )
    goto LABEL_14;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v26, haveQpVal, v30, v32, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemInfoList; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v13; // x1
  struct ServantCostumeControl___c__DisplayClass58_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct ServantCostumeControl___c__DisplayClass58_0_o *v18; // x8
  struct ServantCostumeControl_o *v19; // x8

  if ( (byte_42E5D4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v8, v9, v10);
    byte_42E5D4C = 1;
  }
  itemInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    itemInfoList,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
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
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
  }
  else
  {
    eventId = 0;
  }
  v18 = this->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_16;
  v19 = v18->fields.__4__this;
  if ( !v19 )
    goto LABEL_16;
  combineRootComponent = v19->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_16:
    sub_B5D69C(combineRootComponent, v13);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0LL);
}