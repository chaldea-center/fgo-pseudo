void ServantCostumeControl___cctor(const MethodInfo *method)
{
  if ( (byte_596A279 & 1) == 0 )
  {
    sub_2213A60(&ServantCostumeControl_TypeInfo);
    byte_596A279 = 1;
  }
  *ServantCostumeControl_TypeInfo->static_fields = (struct ServantCostumeControl_StaticFields)xmmword_E9CD90;
}


void ServantCostumeControl___ctor(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A278 & 1) == 0 )
  {
    sub_2213A60(&CombineMenuControl_TypeInfo);
    byte_596A278 = 1;
  }
  if ( !*(&CombineMenuControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method, v2);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  EventServantEntity_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v24; // x21
  System_String_o *v25; // x23
  Il2CppObject *v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  System_String_o *v29; // x22
  System_String_o *v30; // x23
  System_String_o *v31; // x24
  CommonConfirmDialog_ClickDelegate_o *v32; // x25

  if ( (byte_596A273 & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__);
    sub_2213A60(&ServantCostumeControl___c__DisplayClass56_0_TypeInfo);
    sub_2213A60(&StringLiteral_3890/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/);
    sub_2213A60(&StringLiteral_3889/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/);
    sub_2213A60(&StringLiteral_3888/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3891/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/);
    byte_596A273 = 1;
  }
  v5 = sub_2213CCC(ServantCostumeControl___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = callBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callBack, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_17;
  baseSvt = (UserServantEntity_o *)UserServantEntity__getEventServant(baseSvt, 0);
  if ( !this->fields.baseSvt )
    goto LABEL_17;
  v20 = (EventServantEntity_o *)baseSvt;
  if ( !UserServantEntity__IsCondJoin(this->fields.baseSvt, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3890/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_TITIE"*/, 0);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3888/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_MESSAGE"*/, 0);
  v26 = v20 ? (Il2CppObject *)EventServantEntity__getEndTimeStr(v20, 0) : **(Il2CppObject ***)(qword_5984390 + 184);
  v29 = System_String__Format(v25, v26, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3891/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_YES"*/, 0);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3889/*"CONFIRM_COSTUME_COMBINE_COND_JOIN_SERVANT_NO"*/, 0);
  v32 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_ServantCostumeControl___c__DisplayClass56_0__CheckCondJoin_b__0__,
    0);
  if ( !Instance )
LABEL_17:
    sub_2213CDC(baseSvt, v7);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v24,
    v29,
    v30,
    v31,
    v32,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v11; // q1
  int64_t v12; // x0
  __int128 v13; // q1
  const MethodInfo *v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+40h] [xbp-40h]

  if ( (byte_596A26D & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596A26D = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v11 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v30.fields.fakeValue = v11;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase, method);
      v29 = v30;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v29, 0);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v28.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v28, 0) )
      {
        ServantCostumeControl__InitDispInfo(this, v14);
        this->fields.baseSvtCostume = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtCostume, 0, v15, v16, v17, v18, v19, v20);
        this->fields.eventCombineCostumeEnt = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.eventCombineCostumeEnt,
          0,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBase,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantCostumeControl__ClearItemList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  il2cpp_array_size_t max_length; // x20
  ServantCostumeControl_o *v4; // x19
  __int64 v5; // x21
  struct LimitCntUpItemComponent_array *v6; // x8

  itemInfos = this->fields.itemInfos;
  if ( !itemInfos )
    goto LABEL_9;
  max_length = itemInfos->max_length;
  if ( (int)max_length >= 1 )
  {
    v4 = this;
    v5 = 0;
    while ( 1 )
    {
      v6 = v4->fields.itemInfos;
      if ( !v6 )
        break;
      if ( (unsigned int)v5 >= LODWORD(v6->max_length) )
        sub_2213CE4(this);
      this = (ServantCostumeControl_o *)v6->m_Items[v5];
      if ( !this )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0);
      if ( (_DWORD)max_length == (_DWORD)++v5 )
        return;
    }
LABEL_9:
    sub_2213CDC(this, method);
  }
}


void ServantCostumeControl__DestroyCostumeList(ServantCostumeControl_o *this, const MethodInfo *method)
{
  ListViewManager_o *costumeListInfo; // x0

  costumeListInfo = (ListViewManager_o *)this->fields.costumeListInfo;
  if ( !costumeListInfo )
    sub_2213CDC(0, method);
  ListViewManager__DestroyList(costumeListInfo, 0);
}


int32_t ServantCostumeControl__GetTutorialOpenType(ServantCostumeControl_o *this, const MethodInfo *method)
{
  return 31;
}


void ServantCostumeControl__InitBaseCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  this->fields.baseSvtCostume = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtCostume, 0, v2, v3, v4, v5, v6, v7);
  this->fields.eventCombineCostumeEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventCombineCostumeEnt, 0, v9, v10, v11, v12, v13, v14);
}


void ServantCostumeControl__InitCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  System_String_o *v5; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *costumeFaceIconFrame; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_596A26A & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_596A26A = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 31, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  ServantCostumeControl__InitDispInfo(this, v3);
  ServantCostumeControl__ClearItemList(this, v4);
  v5 = (System_String_o *)StringLiteral_9617/*"N0"*/;
  spendQpLb = this->fields.spendQpLb;
  this->fields.spendQpVal = 0;
  costumeFaceIconFrame = System_Int32__ToString_77138656((int)this + 392, v5, 0);
  if ( !spendQpLb )
    goto LABEL_14;
  UILabel__set_text(spendQpLb, costumeFaceIconFrame, 0);
  ServantCostumeControl__SetHaveQpInfo(this, v9);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v10);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
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
        ServantCostumeControl__SetExeBtnState(this, v14),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeListInfo) == 0)
    || (costumeFaceIconFrame = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)costumeFaceIconFrame,
                                                    0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 0, 0),
        (costumeFaceIconFrame = (System_String_o *)this->fields.costumeReleaseInfo) == 0) )
  {
LABEL_14:
    sub_2213CDC(costumeFaceIconFrame, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)costumeFaceIconFrame, 1, 0);
  ServantCostumeControl__ResetInit(this, v15);
}


void ServantCostumeControl__InitCombineCostumeInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x1
  UILabel_o *spendQpLb; // x20
  System_String_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  UISprite_o *costumeFaceIcon; // x20
  const MethodInfo *v13; // x1
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A26C & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A26C = 1;
  }
  v3 = (System_String_o *)StringLiteral_9617/*"N0"*/;
  spendQpLb = this->fields.spendQpLb;
  this->fields.isCanCombine = 0;
  *(_WORD *)&this->fields.isShortQp = 0;
  this->fields.isShortEventItem = 0;
  this->fields.spendQpVal = 0;
  gameObject = System_Int32__ToString_77138656((int)this + 392, v3, 0);
  if ( !spendQpLb )
    goto LABEL_17;
  UILabel__set_text(spendQpLb, gameObject, 0);
  gameObject = (System_String_o *)this->fields.spendQpLb;
  if ( !gameObject )
    goto LABEL_17;
  v14.fields.r = 1.0;
  v14.fields.g = 1.0;
  v14.fields.b = 1.0;
  v14.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)gameObject, v14, 0);
  ServantCostumeControl__SetHaveQpInfo(this, v7);
  ServantCostumeControl__ClearItemList(this, v8);
  ServantCostumeControl__RefreshAlreadyGetInfo(this, v9);
  costumeFaceIcon = this->fields.costumeFaceIcon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
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
        ServantCostumeControl__SetExeBtnState(this, v13),
        (gameObject = (System_String_o *)this->fields.costumeReleaseInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
        (gameObject = (System_String_o *)this->fields.eventCombineCostumeBalloon) == 0)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_17:
    sub_2213CDC(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
}


void ServantCostumeControl__InitDispInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596A26B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A26B = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.charaGraph;
    if ( !v6 )
      sub_2213CDC(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    this->fields.charaGraph = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, 0, v10, v11, v12, v13, v14, v15);
  }
}


void ServantCostumeControl__OnClickBase(ServantCostumeControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_596A277 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantCostumeControl_OnClickBase__);
    byte_596A277 = 1;
  }
  v3 = Method_ServantCostumeControl_OnClickBase__;
  if ( (*((_BYTE *)Method_ServantCostumeControl_OnClickBase__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantCostumeControl_OnClickBase__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_2213CDC(0, v5);
  CombineRootComponent__ShowBaseListSvtCostume(combineRootComponent, 0);
}


void ServantCostumeControl__OnClickExeCostumeCombine(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCostumeControl_o *v3; // x19
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  EventEntity_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  SetRarityDialogControl_o *exeCombineDlg; // x20
  EventCombineCostumeEntity_o *v9; // x21
  System_Action_o *v10; // x22
  System_Action_o *v11; // x23
  struct ServantCostumeEntity_o *v12; // x8
  SetRarityDialogControl_o *v13; // x20
  System_String_o *name; // x21
  int32_t spendQpVal; // w22
  int64_t haveQpVal; // x23
  System_Action_o *v17; // x24
  int64_t startedAt; // x22
  __int64 v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x2
  struct UserServantEntity_o *baseSvt; // x8
  CombineCostumeMaster_o *v30; // x21
  __int64 v31; // x22
  __int64 v32; // x23
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  CombineCostumeEntity_o *Entity; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  SetRarityDialogControl_o *v41; // x21
  bool v42; // w22
  CombineCostumeEntity_o *v43; // x23
  EventCombineCostumeEntity_o *v44; // x24
  _BOOL4 isShortEventItem; // w26
  System_Action_bool__o *v46; // x25
  System_Action_o *v47; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  v3 = this;
  if ( (byte_596A274 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_CombineCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    sub_2213A60(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__);
    sub_2213A60(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__);
    sub_2213A60(&Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__);
    this = (ServantCostumeControl_o *)sub_2213A60(&ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
    byte_596A274 = 1;
  }
  if ( v3->fields.eventCombineCostumeEnt )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
    eventCombineCostumeEnt = v3->fields.eventCombineCostumeEnt;
    if ( !eventCombineCostumeEnt )
      goto LABEL_33;
    if ( !this )
      goto LABEL_33;
    this = (ServantCostumeControl_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        eventCombineCostumeEnt->fields.eventId,
                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_33;
    v5 = (EventEntity_o *)this;
    if ( EventEntity__IsOpen((EventEntity_o *)this, 0, 0) )
    {
      exeCombineDlg = v3->fields.exeCombineDlg;
      v9 = v3->fields.eventCombineCostumeEnt;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)v3, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_1__, 0);
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)v3, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
      if ( exeCombineDlg )
      {
        SetRarityDialogControl__SetConfirmCombineCostumeEventItem(exeCombineDlg, v9, v10, v11, 0);
        return;
      }
LABEL_33:
      sub_2213CDC(this, method);
    }
    startedAt = v5->fields.startedAt;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    if ( startedAt <= NetworkManager__getTime(0) && !EventEntity__IsOpen(v5, 0, 0) )
    {
      v19 = sub_2213CCC(ServantCostumeControl___c__DisplayClass57_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v19, 0);
      if ( !v19 )
        goto LABEL_33;
      *(_QWORD *)(v19 + 24) = v3;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 24), (int32_t)v3, v20, v21, v22, v23, v24, v25);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26, v27);
      this = (ServantCostumeControl_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CombineCostumeMaster___);
      baseSvt = v3->fields.baseSvt;
      if ( !baseSvt )
        goto LABEL_33;
      v30 = (CombineCostumeMaster_o *)this;
      v31 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v28);
      *(_QWORD *)&v48.fields.currentCryptoKey = v31;
      *(_QWORD *)&v48.fields.fakeValue = v32;
      this = (ServantCostumeControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v48, 0);
      baseSvtCostume = v3->fields.baseSvtCostume;
      if ( !baseSvtCostume || !v30 )
        goto LABEL_33;
      Entity = CombineCostumeMaster__GetEntity(v30, (int32_t)this, baseSvtCostume->fields.id, 0);
      *(_QWORD *)(v19 + 16) = Entity;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 16), (int32_t)Entity, v35, v36, v37, v38, v39, v40);
      v41 = v3->fields.exeCombineDlg;
      v42 = v3->fields.isShortNeedItem || v3->fields.isShortQp;
      v43 = *(CombineCostumeEntity_o **)(v19 + 16);
      v44 = v3->fields.eventCombineCostumeEnt;
      isShortEventItem = v3->fields.isShortEventItem;
      v46 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v46,
        (Il2CppObject *)v19,
        (intptr_t)Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__,
        0);
      v47 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v47, (Il2CppObject *)v3, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
      if ( !v41 )
        goto LABEL_33;
      SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        v41,
        v43,
        v44,
        v42,
        isShortEventItem,
        v46,
        v47,
        0);
    }
  }
  else
  {
    v12 = v3->fields.baseSvtCostume;
    if ( !v12 )
      goto LABEL_33;
    v13 = v3->fields.exeCombineDlg;
    name = v12->fields.name;
    spendQpVal = v3->fields.spendQpVal;
    haveQpVal = v3->fields.haveQpVal;
    v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)v3, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_0__, 0);
    if ( !v13 )
      goto LABEL_33;
    SetRarityDialogControl__SetConfirmCombineCostume(v13, name, spendQpVal, haveQpVal, v17, 0, 0);
  }
}


void ServantCostumeControl__RefreshAlreadyGetInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *alreadyGetInfo; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *alreadyGetLabel; // x20
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x21
  int max_length; // w8
  __int64 v9; // x22
  UnityEngine_Component_o *v10; // x20
  struct UnityEngine_Transform_array *v11; // x8
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A275 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_4000/*"COSTUME_SELECT_SERVANT_MSG"*/);
    byte_596A275 = 1;
  }
  alreadyGetInfo = this->fields.alreadyGetInfo;
  if ( !alreadyGetInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(alreadyGetInfo, 1, 0);
  alreadyGetLabel = this->fields.alreadyGetLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  alreadyGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4000/*"COSTUME_SELECT_SERVANT_MSG"*/, 0);
  if ( !alreadyGetLabel )
    goto LABEL_25;
  UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0);
  alreadyGetLabelBgList = this->fields.alreadyGetLabelBgList;
  if ( !alreadyGetLabelBgList )
    goto LABEL_25;
  max_length = alreadyGetLabelBgList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( (unsigned int)v9 < max_length )
    {
      v10 = (UnityEngine_Component_o *)alreadyGetLabelBgList->m_Items[v9];
      if ( !v10 )
        goto LABEL_25;
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)alreadyGetLabelBgList->m_Items[v9],
                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 32, 0);
      alreadyGetInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     v10,
                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0);
      v12.fields.x = 0.0;
      v12.fields.y = 0.0;
      v12.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v10, v12, 0);
      alreadyGetInfo = UnityEngine_Component__get_gameObject(v10, 0);
      if ( !alreadyGetInfo )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(alreadyGetInfo, 0, 0);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
LABEL_26:
    sub_2213CE4(alreadyGetInfo);
  }
LABEL_16:
  v11 = this->fields.alreadyGetLabelBgList;
  if ( !v11 )
    goto LABEL_25;
  if ( !LODWORD(v11->max_length) )
    goto LABEL_26;
  alreadyGetInfo = (UnityEngine_GameObject_o *)v11->m_Items[0];
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
    sub_2213CDC(alreadyGetInfo, method);
  }
  v13.fields.x = 0.0;
  v13.fields.z = 0.0;
  v13.fields.y = -1.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v13, 0);
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
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Object_object__58532980; // x21
  int32_t generatedBalloonId; // w8
  struct EventCombineCostumeEntity_o *v19; // x9
  struct System_Int32_array *v20; // x9
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v25; // x2
  struct EventCombineCostumeEntity_o *v26; // x8
  struct System_Int32_array *v27; // x8
  struct EventCombineCostumeEntity_o *v28; // x8
  struct System_Int32_array *v29; // x8
  struct UnityEngine_Transform_array *alreadyGetLabelBgList; // x22
  int max_length; // w8
  __int64 v32; // x23
  UnityEngine_Component_o *v33; // x21
  __int64 v34; // x2
  struct UnityEngine_Transform_array *v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  System_TimeSpan_o v38; // x1
  System_TimeSpan_o v39; // x2
  System_TimeSpan_o v40; // x21
  int64_t endedAt; // x22
  System_DateTime_o v42; // x1
  System_DateTime_o v43; // x2
  System_DateTime_o v44; // x22
  System_DateTime_o v45; // x0
  System_TimeSpan_o v46; // x1
  System_Object_array *v47; // x21
  System_DateTime_o v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  Il2CppObject *v55; // x22
  __int64 v56; // x1
  System_DateTime_o v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  Il2CppObject *v64; // x22
  System_DateTime_o v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  Il2CppObject *v72; // x22
  System_DateTime_o v73; // x0
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  Il2CppObject *v80; // x22
  System_DateTime_o v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  Il2CppObject *v88; // x22
  __int64 v89; // x1
  __int64 v90; // x2
  Il2CppObject *v91; // x22
  UILabel_o *alreadyGetLabel; // x21
  System_String_o *v93; // x23
  Il2CppObject *v94; // x0
  _BOOL8 v95; // x0
  __int64 v96; // x1
  Il2CppObject *current; // x21
  __int64 v98; // x0
  int64_t startedAt; // x21
  __int64 v100; // x1
  __int64 v101; // x2
  UILabel_o *v102; // x20
  System_String_o *v103; // x21
  Il2CppObject *v104; // x0
  _BOOL8 v105; // x0
  __int64 v106; // x1
  Il2CppObject *v107; // x19
  System_Collections_Generic_List_Enumerator_object__o v108; // [xsp+0h] [xbp-90h] BYREF
  int32_t Minute; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t Hour; // [xsp+20h] [xbp-70h] BYREF
  int32_t Day; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t Month; // [xsp+28h] [xbp-68h] BYREF
  int32_t Year; // [xsp+2Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v114; // [xsp+30h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A276 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&System_TimeSpan_TypeInfo);
    sub_2213A60(&StringLiteral_13264/*"ServantCostumeEventBalloon_"*/);
    sub_2213A60(&StringLiteral_3999/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/);
    sub_2213A60(&StringLiteral_3998/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/);
    sub_2213A60(&StringLiteral_26554/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/);
    sub_2213A60(&StringLiteral_5743/*"EVENT_COMBINE_COSTUME_ITEM"*/);
    byte_596A276 = 1;
  }
  alreadyGetInfo = (__int64)this->fields.alreadyGetInfo;
  dateData = 0;
  memset(&v114, 0, sizeof(v114));
  if ( !alreadyGetInfo )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0);
  if ( !this->fields.eventCombineCostumeEnt )
    return;
  alreadyGetInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !alreadyGetInfo )
    goto LABEL_108;
  alreadyGetInfo = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)alreadyGetInfo,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || !alreadyGetInfo )
    goto LABEL_108;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)alreadyGetInfo,
             eventCombineCostumeEnt->fields.eventId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
    v14 = System_String__Concat_75651716((System_String_o *)StringLiteral_13264/*"ServantCostumeEventBalloon_"*/, v13, 0);
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                eventCombineCostumeBalloonData,
                                v14,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    alreadyGetInfo = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
    if ( (alreadyGetInfo & 1) != 0 )
    {
      generatedBalloonId = this->fields.generatedBalloonId;
      if ( generatedBalloonId )
      {
        v19 = this->fields.eventCombineCostumeEnt;
        if ( !v19 )
          goto LABEL_108;
        v20 = v19->fields.itemIds;
        if ( !v20 )
          goto LABEL_108;
        if ( !LODWORD(v20->max_length) )
          goto LABEL_87;
        if ( generatedBalloonId == v20->m_Items[0] )
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
        UnityEngine_Object__Destroy_83459800(gameObject, 0);
        this->fields.generatedBalloonId = 0;
      }
      alreadyGetInfo = (__int64)this->fields.eventCombineCostumeBalloon;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)alreadyGetInfo, 0);
      alreadyGetInfo = (__int64)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  (UnityEngine_GameObject_o *)Object_object__58532980,
                                  transform,
                                  0,
                                  0);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)alreadyGetInfo,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantCostumeEventBalloon___);
      v26 = this->fields.eventCombineCostumeEnt;
      if ( !v26 )
        goto LABEL_108;
      v27 = v26->fields.itemIds;
      if ( !v27 )
        goto LABEL_108;
      if ( !LODWORD(v27->max_length) )
        goto LABEL_87;
      if ( !alreadyGetInfo )
        goto LABEL_108;
      ServantCostumeEventBalloon__Set((ServantCostumeEventBalloon_o *)alreadyGetInfo, v27->m_Items[0], v25);
      v28 = this->fields.eventCombineCostumeEnt;
      if ( !v28 )
        goto LABEL_108;
      v29 = v28->fields.itemIds;
      if ( !v29 )
        goto LABEL_108;
      if ( !LODWORD(v29->max_length) )
        goto LABEL_87;
      this->fields.generatedBalloonId = v29->m_Items[0];
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
    v32 = 0;
    while ( (unsigned int)v32 < max_length )
    {
      v33 = (UnityEngine_Component_o *)alreadyGetLabelBgList->m_Items[v32];
      if ( !v33 )
        goto LABEL_108;
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)alreadyGetLabelBgList->m_Items[v32],
                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_height((UIWidget_o *)alreadyGetInfo, 56, 0);
      alreadyGetInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  v33,
                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UIWidget__set_width((UIWidget_o *)alreadyGetInfo, 726, 0);
      v116.fields.x = 0.0;
      v116.fields.z = 0.0;
      v116.fields.y = -15.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v33, v116, 0);
      alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject(v33, 0);
      if ( !alreadyGetInfo )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 1, 0);
      max_length = alreadyGetLabelBgList->max_length;
      if ( (int)++v32 >= max_length )
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
  v117.fields.x = 0.0;
  v117.fields.z = 0.0;
  v117.fields.y = -16.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)alreadyGetInfo, v117, 0);
  alreadyGetInfo = EventEntity__IsOpen(v7, 0, 0);
  if ( (alreadyGetInfo & 1) != 0 )
  {
    v35 = this->fields.alreadyGetLabelBgList;
    if ( v35 )
    {
      if ( (v35->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_87;
      alreadyGetInfo = (__int64)v35->m_Items[1];
      if ( alreadyGetInfo )
      {
        alreadyGetInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)alreadyGetInfo, 0);
        if ( alreadyGetInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alreadyGetInfo, 0, 0);
          if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v36, v37);
          v40.fields._ticks = System_TimeSpan__FromMinutes(1.0, 0).fields._ticks;
          endedAt = v7->fields.endedAt;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38.fields._ticks, v39.fields._ticks);
          v44.fields._dateData = NetworkManager__getServerDateTime_48347596(endedAt, 0).fields._dateData;
          dateData = v44.fields._dateData;
          if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v42.fields._dateData, v43.fields._dateData);
          v45.fields._dateData = v44.fields._dateData;
          v46.fields._ticks = v40.fields._ticks;
          dateData = System_DateTime__op_Addition(v45, v46, 0).fields._dateData;
          v47 = (System_Object_array *)sub_2213B20(object___TypeInfo, 5);
          v48.fields._dateData = (uint64_t)&dateData;
          Year = System_DateTime__get_Year(v48, 0);
          alreadyGetInfo = j_il2cpp_value_box_0(qword_5984348, &Year);
          if ( v47 )
          {
            v55 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_2213BB4(alreadyGetInfo, v47->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( !LODWORD(v47->max_length) )
              goto LABEL_87;
            v47->m_Items[0] = v55;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)v47->m_Items, (int32_t)v55, v49, v50, v51, v52, v53, v54);
            v57.fields._dateData = (uint64_t)&dateData;
            Month = System_DateTime__get_Month(v57, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(qword_5984348, &Month);
            v64 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_2213BB4(alreadyGetInfo, v47->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( (v47->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_87;
            v47->m_Items[1] = v64;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v47->m_Items[1],
              (int32_t)v64,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63);
            v65.fields._dateData = (uint64_t)&dateData;
            Day = System_DateTime__get_Day(v65, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(qword_5984348, &Day);
            v72 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_2213BB4(alreadyGetInfo, v47->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( LODWORD(v47->max_length) <= 2 )
              goto LABEL_87;
            v47->m_Items[2] = v72;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v47->m_Items[2],
              (int32_t)v72,
              v66,
              v67,
              v68,
              v69,
              v70,
              v71);
            v73.fields._dateData = (uint64_t)&dateData;
            Hour = System_DateTime__get_Hour(v73, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(qword_5984348, &Hour);
            v80 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_2213BB4(alreadyGetInfo, v47->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
                goto LABEL_89;
            }
            if ( (v47->max_length & 0xFFFFFFFC) == 0 )
              goto LABEL_87;
            v47->m_Items[3] = v80;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v47->m_Items[3],
              (int32_t)v80,
              v74,
              v75,
              v76,
              v77,
              v78,
              v79);
            v81.fields._dateData = (uint64_t)&dateData;
            Minute = System_DateTime__get_Minute(v81, 0);
            alreadyGetInfo = j_il2cpp_value_box_0(qword_5984348, &Minute);
            v88 = (Il2CppObject *)alreadyGetInfo;
            if ( alreadyGetInfo )
            {
              alreadyGetInfo = sub_2213BB4(alreadyGetInfo, v47->obj.klass->_1.element_class);
              if ( !alreadyGetInfo )
              {
LABEL_89:
                v98 = sub_2213D00(alreadyGetInfo, v56);
                sub_2213BA0(v98, 0);
              }
            }
            if ( LODWORD(v47->max_length) <= 4 )
LABEL_87:
              sub_2213CE4(alreadyGetInfo);
            v47->m_Items[4] = v88;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v47->m_Items[4],
              (int32_t)v88,
              v82,
              v83,
              v84,
              v85,
              v86,
              v87);
            v91 = (Il2CppObject *)System_String__Format_75698016((System_String_o *)StringLiteral_26554/*"{0}/{1}/{2} {3:D2}:{4:D2}"*/, v47, 0);
            alreadyGetLabel = this->fields.alreadyGetLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v89, v90);
            v93 = LocalizationManager__Get((System_String_o *)StringLiteral_3999/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0);
            v94 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5743/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
            alreadyGetInfo = (__int64)System_String__Format_75697880(v93, v94, v91, 0);
            if ( alreadyGetLabel )
            {
              UILabel__set_text(alreadyGetLabel, (System_String_o *)alreadyGetInfo, 0);
              alreadyGetInfo = (__int64)this->fields.spendQpLb;
              if ( alreadyGetInfo )
              {
                v118.fields.a = 1.0;
                v118.fields.r = 0.32941;
                v118.fields.g = 0.32941;
                v118.fields.b = 0.32941;
                UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v118, 0);
                alreadyGetInfo = (__int64)this->fields.itemInfoList;
                if ( alreadyGetInfo )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v108,
                    (System_Collections_Generic_List_object__o *)alreadyGetInfo,
                    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
                  v114 = v108;
                  v108.fields._list = 0;
                  *(_QWORD *)&v108.fields._index = &v114;
                  while ( 1 )
                  {
                    v95 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v114,
                            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
                    if ( !v95 )
                      break;
                    current = v114.fields._current;
                    if ( !v114.fields._current )
                      sub_2213CDC(v95, v96);
                    LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v114.fields._current, 1, 0);
                    LOBYTE(current[6].klass) = 1;
                  }
LABEL_106:
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v114,
                    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__Dispose__);
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
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v34);
  if ( startedAt <= NetworkManager__getTime(0) && !EventEntity__IsOpen(v7, 0, 0) )
  {
    v102 = this->fields.alreadyGetLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v100, v101);
    v103 = LocalizationManager__Get((System_String_o *)StringLiteral_3998/*"COSTUME_SELECT_SERVANT_EVENT_END_ITEM_COSTUME_MSG"*/, 0);
    v104 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5743/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0);
    alreadyGetInfo = (__int64)System_String__Format(v103, v104, 0);
    if ( v102 )
    {
      UILabel__set_text(v102, (System_String_o *)alreadyGetInfo, 0);
      alreadyGetInfo = (__int64)this->fields.spendQpLb;
      if ( alreadyGetInfo )
      {
        v119.fields.r = 1.0;
        v119.fields.g = 1.0;
        v119.fields.b = 1.0;
        v119.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v119, 0);
        if ( this->fields.haveQpVal < this->fields.spendQpVal )
        {
          alreadyGetInfo = (__int64)this->fields.spendQpLb;
          if ( !alreadyGetInfo )
            goto LABEL_108;
          v120.fields.g = 0.0;
          v120.fields.b = 0.0;
          v120.fields.r = 1.0;
          v120.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)alreadyGetInfo, v120, 0);
        }
        alreadyGetInfo = (__int64)this->fields.itemInfoList;
        if ( alreadyGetInfo )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v108,
            (System_Collections_Generic_List_object__o *)alreadyGetInfo,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__GetEnumerator__);
          v114 = v108;
          v108.fields._list = 0;
          *(_QWORD *)&v108.fields._index = &v114;
          while ( 1 )
          {
            v105 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v114,
                     (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_LimitCntUpItemComponent__MoveNext__);
            if ( !v105 )
              break;
            v107 = v114.fields._current;
            if ( !v114.fields._current )
              sub_2213CDC(v105, v106);
            LimitCntUpItemComponent__SetMaskSprite((LimitCntUpItemComponent_o *)v114.fields._current, 0, 0);
            LOBYTE(v107[6].klass) = 1;
          }
          goto LABEL_106;
        }
      }
    }
LABEL_108:
    sub_2213CDC(alreadyGetInfo, method);
  }
}


void ServantCostumeControl__ResetEventCombineCostume(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventCombineCostumeEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventCombineCostumeEnt, 0, v2, v3, v4, v5, v6, v7);
  this->fields.isShortEventItem = 0;
}


void ServantCostumeControl__ResetInit(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  this->fields.baseSvt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseSvt, 0, v2, v3, v4, v5, v6, v7);
  this->fields.baseSvtCostume = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtCostume, 0, v9, v10, v11, v12, v13, v14);
  this->fields.eventCombineCostumeEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventCombineCostumeEnt, 0, v15, v16, v17, v18, v19, v20);
}


void ServantCostumeControl__SetBaseSvtCardImg(
        ServantCostumeControl_o *this,
        UserServantEntity_o *userSvtData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UICharaGraphTexture_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  this->fields.baseSvt = userSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvt,
    (int32_t)userSvtData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(ServantCostumeControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                          this,
                                          this->fields.charaGraph,
                                          userSvtData,
                                          this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
    sub_2213CDC(executeButton, method);
  UnityEngine_GameObject__SetActive(v6, (unsigned __int8)eventCombineCostumeEnt & 1, 0);
}


void ServantCostumeControl__SetHaveQpInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20
  System_String_o *v6; // x1

  if ( (byte_596A26F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_596A26F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        v6 = (System_String_o *)StringLiteral_9617/*"N0"*/,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_77143864((int64_t)&this->fields.haveQpVal, v6, 0),
        !haveQpLb) )
  {
    sub_2213CDC(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCostumeControl__SetStateInfoMsg(ServantCostumeControl_o *this, int32_t state, const MethodInfo *method)
{
  UIWidget_o *v5; // x0
  UIWidget_o *detailInfoLb; // x21
  __int64 v7; // x2
  System_String_o *v8; // x21
  LocalizationManager_c *v9; // x0
  __int64 *v10; // x20
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A272 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ServantCostumeControl_TypeInfo);
    sub_2213A60(&StringLiteral_12707/*"SHORT_RELEASE_COND_MSG"*/);
    sub_2213A60(&StringLiteral_3991/*"COSTUME_EXE_MSG"*/);
    sub_2213A60(&StringLiteral_7772/*"INFO_MSG_SELECT_COSTUME"*/);
    sub_2213A60(&StringLiteral_12705/*"SHORT_ITEM_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_7767/*"INFO_MSG_COSTUME_SELECT_BASE"*/);
    byte_596A272 = 1;
  }
  v5 = (UIWidget_o *)ServantCostumeControl_TypeInfo;
  detailInfoLb = (UIWidget_o *)this->fields.detailInfoLb;
  if ( !*(&ServantCostumeControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCostumeControl_TypeInfo, *(_QWORD *)&state, method);
  if ( !detailInfoLb )
    goto LABEL_32;
  UIWidget__set_color(detailInfoLb, ServantCostumeControl_TypeInfo->static_fields->defaultDetailColor, 0);
  if ( state == 3 )
  {
    v9 = LocalizationManager_TypeInfo;
    v10 = &StringLiteral_7772/*"INFO_MSG_SELECT_COSTUME"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_15:
      j_il2cpp_runtime_class_init_0(v9, *(_QWORD *)&state, v7);
LABEL_16:
    v8 = LocalizationManager__Get((System_String_o *)*v10, 0);
    goto LABEL_17;
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  if ( state != 2 )
  {
    if ( state )
      goto LABEL_17;
    v9 = LocalizationManager_TypeInfo;
    v10 = &StringLiteral_7767/*"INFO_MSG_COSTUME_SELECT_BASE"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( this->fields.isCanCombine )
  {
    v9 = LocalizationManager_TypeInfo;
    v10 = &StringLiteral_3991/*"COSTUME_EXE_MSG"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_15;
    goto LABEL_16;
  }
  v5 = (UIWidget_o *)this->fields.detailInfoLb;
  if ( !v5 )
LABEL_32:
    sub_2213CDC(v5, *(_QWORD *)&state);
  v11.fields.r = 1.0;
  v11.fields.g = 1.0;
  v11.fields.b = 1.0;
  v11.fields.a = 1.0;
  UIWidget__set_color(v5, v11, 0);
  if ( this->fields.isShortQp )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state, v7);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/, 0);
  }
  if ( this->fields.isShortNeedItem || this->fields.isShortEventItem )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&state, v7);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12705/*"SHORT_ITEM_INFO_MSG"*/, 0);
  }
  if ( this->fields.isNotClearReleaseCond )
  {
    v9 = LocalizationManager_TypeInfo;
    v10 = &StringLiteral_12707/*"SHORT_RELEASE_COND_MSG"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_16;
    goto LABEL_15;
  }
LABEL_17:
  v5 = (UIWidget_o *)this->fields.detailInfoLb;
  if ( !v5 )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)v5, v8, 0);
}


void ServantCostumeControl__SetSvtCostumeCombineData(ServantCostumeControl_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct ServantCostumeEntity_o *baseSvtCostume; // x8
  UILabel_o *spendQpLb; // x21
  System_String_o *v15; // x1
  __int64 v16; // x2
  struct System_Int32_array *itemIds; // x23
  il2cpp_array_size_t max_length; // x22
  bool v19; // w25
  struct System_Int32_array *itemNums; // x27
  __int64 v21; // x26
  int32_t *m_Items; // x29
  int32_t *v23; // x24
  struct LimitCntUpItemComponent_array *itemInfos; // x8
  LimitCntUpItemComponent_o *v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  unsigned int v36; // w8
  int32_t v37; // w21
  struct ServantCostumeEntity_o *v38; // x8
  struct ServantCostumeEntity_o *v39; // x8
  __int64 v40; // x2
  struct ServantCostumeEntity_o *v41; // x8
  UISprite_o *costumeFaceIcon; // x21
  int32_t svtId; // w22
  int32_t id; // w23
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8
  struct System_Int32_array *v46; // x8
  int v47; // w23
  int v48; // w26
  __int64 v49; // x2
  Il2CppObject *v50; // x21
  struct EventCombineCostumeEntity_o *v51; // x8
  struct System_Int32_array *v52; // x8
  struct EventCombineCostumeEntity_o *v53; // x8
  struct System_Int32_array *v54; // x10
  __int64 v55; // x2
  struct ServantCostumeEntity_o *v56; // x21
  struct UserServantEntity_o *baseSvt; // x8
  ServantCostumeReleaseMaster_o *v58; // x22
  __int128 v59; // q1
  int32_t v60; // w23
  bool IsCostumeReleaseCondClear; // w0
  struct EventCombineCostumeEntity_o *v62; // x9
  struct EventCombineCostumeEntity_o *v63; // x8
  EventEntity_o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  _BOOL4 isNotClearReleaseCond; // w8
  int64_t startedAt; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *v71; // [xsp+40h] [xbp-70h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A270 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_596A270 = 1;
  }
  v71 = 0;
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineCostumeMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  this->fields.itemInfoList = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemInfoList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  baseSvtCostume = this->fields.baseSvtCostume;
  if ( !baseSvtCostume || !MasterData_object )
    goto LABEL_79;
  Instance = CombineCostumeMaster__TryGetEntity(
               (CombineCostumeMaster_o *)MasterData_object,
               &entity,
               baseSvtCostume->fields.svtId,
               baseSvtCostume->fields.id,
               0);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_79;
    spendQpLb = this->fields.spendQpLb;
    v15 = (System_String_o *)StringLiteral_9617/*"N0"*/;
    this->fields.spendQpVal = entity->fields.qp;
    Instance = (int64_t)System_Int32__ToString_77138656((int)this + 392, v15, 0);
    if ( !spendQpLb )
      goto LABEL_79;
    UILabel__set_text(spendQpLb, (System_String_o *)Instance, 0);
    if ( !entity )
      goto LABEL_79;
    itemIds = entity->fields.itemIds;
    if ( !itemIds )
      goto LABEL_79;
    max_length = itemIds->max_length;
    v19 = 1;
    if ( (int)max_length >= 1 )
    {
      itemNums = entity->fields.itemNums;
      v21 = 0;
      m_Items = itemIds->m_Items;
      v23 = itemNums->m_Items;
      do
      {
        itemInfos = this->fields.itemInfos;
        if ( !itemInfos )
          goto LABEL_79;
        if ( (unsigned int)v21 >= LODWORD(itemInfos->max_length) )
          goto LABEL_108;
        v25 = itemInfos->m_Items[v21];
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v16);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        Instance = (int64_t)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v16);
          Instance = (int64_t)NetworkManager_TypeInfo;
        }
        if ( (unsigned int)v21 >= LODWORD(itemIds->max_length) )
          goto LABEL_108;
        if ( !itemNums )
          goto LABEL_79;
        if ( (unsigned int)v21 >= LODWORD(itemNums->max_length) )
          goto LABEL_108;
        if ( !v25 )
          goto LABEL_79;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          v25,
          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
          m_Items[v21],
          v23[v21],
          0);
        Instance = (int64_t)this->fields.itemInfoList;
        if ( !Instance )
          goto LABEL_79;
        v32 = *(_QWORD *)(Instance + 16);
        v33 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v32 )
          goto LABEL_79;
        v34 = *(int *)(Instance + 24);
        if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v25,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = v32 + 8 * v34;
          *(_DWORD *)(Instance + 24) = v34 + 1;
          *(_QWORD *)(v35 + 32) = v25;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 32), (int32_t)v25, v26, v27, v28, v29, v30, v31);
        }
        LimitCntUpItemComponent__SetMaskSprite(v25, 0, 0);
        v36 = itemIds->max_length;
        v25->fields.disableOpenItemDetailDialog = 0;
        if ( (unsigned int)v21 >= v36 || (unsigned int)v21 >= LODWORD(itemNums->max_length) )
LABEL_108:
          sub_2213CE4(Instance);
        CombineMenuControl__AddCombineItemInfo((CombineMenuControl_o *)this, m_Items[v21], v23[v21], 0);
        ++v21;
      }
      while ( (_DWORD)max_length != (_DWORD)v21 );
      v19 = 0;
      v37 = 0;
      while ( 1 )
      {
        Instance = (int64_t)this->fields.itemInfoList;
        if ( !Instance )
          goto LABEL_79;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)Instance,
                              v37,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
        if ( !Instance )
          goto LABEL_79;
        if ( *(_BYTE *)(Instance + 112) )
        {
          v19 = ++v37 >= (int)max_length;
          if ( (_DWORD)max_length != v37 )
            continue;
        }
        break;
      }
    }
    v38 = this->fields.baseSvtCostume;
    if ( !v38 )
      goto LABEL_79;
    Instance = (int64_t)this->fields.costumeNameLb;
    if ( !Instance )
      goto LABEL_79;
    UILabel__set_text((UILabel_o *)Instance, v38->fields.name, 0);
    v39 = this->fields.baseSvtCostume;
    if ( !v39 )
      goto LABEL_79;
    Instance = (int64_t)this->fields.conditionLb;
    if ( !Instance )
      goto LABEL_79;
    UILabel__set_text((UILabel_o *)Instance, v39->fields.releaseInfo, 0);
    v41 = this->fields.baseSvtCostume;
    if ( !v41 )
      goto LABEL_79;
    costumeFaceIcon = this->fields.costumeFaceIcon;
    svtId = v41->fields.svtId;
    id = v41->fields.id;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v40);
    AtlasManager__SetFaceImage(costumeFaceIcon, svtId, id, 1, 0, 0, 0);
    Instance = (int64_t)this->fields.costumeFaceIcon;
    if ( !Instance )
      goto LABEL_79;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_79;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (int64_t)this->fields.costumeFaceIconFrame;
    if ( !Instance )
      goto LABEL_79;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_79;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  }
  else
  {
    v19 = 0;
  }
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)this, 0);
  Instance = (int64_t)this->fields.spendQpLb;
  if ( !Instance )
    goto LABEL_79;
  v73.fields.r = 1.0;
  v73.fields.g = 1.0;
  v73.fields.b = 1.0;
  v73.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v73, 0);
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    Instance = (int64_t)this->fields.spendQpLb;
    if ( !Instance )
      goto LABEL_79;
    v74.fields.g = 0.0;
    v74.fields.b = 0.0;
    v74.fields.r = 1.0;
    v74.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Instance, v74, 0);
    this->fields.isShortQp = 1;
  }
  if ( !v19 )
    this->fields.isShortNeedItem = 1;
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( eventCombineCostumeEnt )
  {
    v46 = eventCombineCostumeEnt->fields.itemIds;
    this->fields.isShortEventItem = 0;
    if ( !v46 )
      goto LABEL_79;
    v47 = -1;
    while ( 1 )
    {
      v48 = v47 + 1;
      if ( v47 + 1 >= SLODWORD(v46->max_length) )
        break;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_79;
      v50 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v49);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (int64_t)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v49);
        Instance = (int64_t)NetworkManager_TypeInfo;
      }
      v51 = this->fields.eventCombineCostumeEnt;
      if ( !v51 )
        goto LABEL_79;
      v52 = v51->fields.itemIds;
      if ( !v52 )
        goto LABEL_79;
      if ( (unsigned int)v48 >= LODWORD(v52->max_length) )
        goto LABEL_108;
      if ( !v50 )
        goto LABEL_79;
      Instance = UserItemMaster__TryGetEntity(
                   (UserItemMaster_o *)v50,
                   &v71,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   v52->m_Items[v48],
                   0);
      if ( (Instance & 1) == 0 )
        goto LABEL_80;
      if ( !v71 )
        goto LABEL_79;
      v53 = this->fields.eventCombineCostumeEnt;
      if ( !v53 )
        goto LABEL_79;
      v54 = v53->fields.itemNums;
      if ( !v54 )
        goto LABEL_79;
      if ( (unsigned int)++v47 >= LODWORD(v54->max_length) )
        goto LABEL_108;
      if ( v71->fields.num < v54->m_Items[v48] )
      {
LABEL_80:
        this->fields.isShortEventItem = 1;
        break;
      }
      v46 = v53->fields.itemIds;
      if ( !v46 )
        goto LABEL_79;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeReleaseMaster___);
  v56 = this->fields.baseSvtCostume;
  if ( !v56 )
    goto LABEL_79;
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_79;
  v58 = (ServantCostumeReleaseMaster_o *)Instance;
  v59 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
  v60 = v56->fields.svtId;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v59;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v55);
  v69 = v70;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v69, 0);
  if ( !v58 )
LABEL_79:
    sub_2213CDC(Instance, v4);
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(v58, v56, v60, Instance, 0);
  v62 = this->fields.eventCombineCostumeEnt;
  this->fields.isCanCombine = 0;
  this->fields.isNotClearReleaseCond = !IsCostumeReleaseCondClear;
  if ( !v62 )
  {
    if ( !IsCostumeReleaseCondClear )
      return;
    goto LABEL_96;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  v63 = this->fields.eventCombineCostumeEnt;
  if ( !v63 )
    goto LABEL_79;
  if ( !Instance )
    goto LABEL_79;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        v63->fields.eventId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_79;
  v64 = (EventEntity_o *)Instance;
  if ( EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0) )
  {
    if ( this->fields.isShortEventItem )
      return;
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    goto LABEL_105;
  }
  startedAt = v64->fields.startedAt;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v65, v66);
  if ( startedAt <= NetworkManager__getTime(0) && !EventEntity__IsOpen(v64, 0, 0) )
  {
    isNotClearReleaseCond = this->fields.isNotClearReleaseCond;
    if ( !this->fields.isShortEventItem )
    {
LABEL_105:
      if ( !isNotClearReleaseCond )
        this->fields.isCanCombine = 1;
      return;
    }
    if ( this->fields.isNotClearReleaseCond )
      return;
LABEL_96:
    if ( this->fields.isShortNeedItem )
      return;
    isNotClearReleaseCond = this->fields.isShortQp;
    goto LABEL_105;
  }
}


void ServantCostumeControl__ShowCostumeCombineInfo(ServantCostumeControl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct CostumeListViewManager_o *costumeListInfo; // x8
  struct ServantCostumeEntity_o *baseSvtCostume; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x2
  struct UserServantEntity_o *baseSvt; // x8
  EventCombineCostumeMaster_o *v21; // x20
  __int64 v22; // x21
  __int64 v23; // x22
  struct ServantCostumeEntity_o *v24; // x8
  struct EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x2
  LimitCntUpItemComponent_o *eventItemIcon; // x20
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  struct EventCombineCostumeEntity_o *v37; // x9
  struct System_Int32_array *v38; // x8
  struct System_Int32_array *v39; // x9
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_596A26E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A26E = 1;
  }
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)this, 0);
  costumeListInfo = this->fields.costumeListInfo;
  if ( !costumeListInfo )
    goto LABEL_34;
  baseSvtCostume = costumeListInfo->fields.baseSvtCostume;
  this->fields.baseSvtCostume = baseSvtCostume;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtCostume,
    (int32_t)baseSvtCostume,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.eventCombineCostumeEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventCombineCostumeEnt, 0, v13, v14, v15, v16, v17, v18);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
  baseSvt = this->fields.baseSvt;
  if ( !baseSvt )
    goto LABEL_34;
  v21 = (EventCombineCostumeMaster_o *)Instance;
  v22 = *(_QWORD *)&baseSvt->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&baseSvt->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v19);
  *(_QWORD *)&v44.fields.currentCryptoKey = v22;
  *(_QWORD *)&v44.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v44, 0);
  v24 = this->fields.baseSvtCostume;
  if ( !v24 || !v21 )
    goto LABEL_34;
  ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                              v21,
                              (int32_t)Instance,
                              v24->fields.id,
                              0);
  this->fields.eventCombineCostumeEnt = ListBySvtIdAndCostumeId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventCombineCostumeEnt,
    (int32_t)ListBySvtIdAndCostumeId,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( this->fields.eventCombineCostumeEnt )
  {
    eventItemIcon = this->fields.eventItemIcon;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v32);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v32);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
    if ( eventCombineCostumeEnt )
    {
      itemIds = eventCombineCostumeEnt->fields.itemIds;
      if ( itemIds )
      {
        if ( !LODWORD(itemIds->max_length) )
          goto LABEL_35;
        itemNums = eventCombineCostumeEnt->fields.itemNums;
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
          v37 = this->fields.eventCombineCostumeEnt;
          if ( v37 )
          {
            v38 = v37->fields.itemIds;
            if ( v38 )
            {
              if ( LODWORD(v38->max_length) )
              {
                v39 = v37->fields.itemNums;
                if ( !v39 )
                  goto LABEL_34;
                if ( LODWORD(v39->max_length) )
                {
                  CombineMenuControl__AddCombineItemInfo(
                    (CombineMenuControl_o *)this,
                    v38->m_Items[0],
                    v39->m_Items[0],
                    0);
                  goto LABEL_29;
                }
              }
LABEL_35:
              sub_2213CE4(Instance);
            }
          }
        }
      }
    }
LABEL_34:
    sub_2213CDC(Instance, v4);
  }
LABEL_29:
  Instance = (DataManager_o *)this->fields.costumeListInfo;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  ServantCostumeControl__SetHaveQpInfo(this, v40);
  ServantCostumeControl__SetSvtCostumeCombineData(this, v41);
  ServantCostumeControl__SetExeBtnState(this, v42);
  Instance = (DataManager_o *)this->fields.costumeReleaseInfo;
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  ServantCostumeControl__RefreshEventCostumeInfo(this, v43);
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
    sub_2213CDC(costumeListInfo, method);
  }
  CostumeListViewManager__SetMode_37707464((CostumeListViewManager_o *)costumeListInfo, 2, v5);
}


void ServantCostumeControl___OnClickExeCostumeCombine_b__57_0(ServantCostumeControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_2213CDC(0, method);
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
  if ( (byte_596A27A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    this = (ServantCostumeControl_o *)sub_2213A60(&Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__);
    byte_596A27A = 1;
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
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, v2, Method_ServantCostumeControl__OnClickExeCostumeCombine_b__57_2__, 0);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, v2, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
  if ( !v5 )
LABEL_7:
    sub_2213CDC(this, method);
  SetRarityDialogControl__SetConfirmCombineCostume(v5, v6, namespaze_high, v8, v9, v10, 0);
}


void ServantCostumeControl___OnClickExeCostumeCombine_b__57_2(ServantCostumeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *eventItemIcon; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x8

  if ( (byte_596A27B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    byte_596A27B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  if ( !v3 )
    goto LABEL_11;
  items = v3->fields._items;
  eventItemIcon = (Il2CppObject *)this->fields.eventItemIcon;
  v13 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_11;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      eventItemIcon,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v15[4] = (Il2CppClass *)eventItemIcon;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 4), (int32_t)eventItemIcon, v6, v7, v8, v9, v10, v11);
  }
  eventCombineCostumeEnt = this->fields.eventCombineCostumeEnt;
  if ( !eventCombineCostumeEnt || (combineRootComponent = this->fields.combineRootComponent) == 0 )
LABEL_11:
    sub_2213CDC(combineRootComponent, eventItemIcon);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventCombineCostumeEnt->fields.eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)v3,
    0);
}


UserServantEntity_o *ServantCostumeControl__getBaseSelectedSvt(ServantCostumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UserServantEntity_o *baseSvt; // x8
  __int128 v5; // q0
  __int128 v6; // q1
  int v7; // w8
  int64_t v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  if ( (byte_596A271 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A271 = 1;
  }
  baseSvt = this->fields.baseSvt;
  this->fields._isBaseSvtFromStorage_k__BackingField = 0;
  if ( baseSvt )
  {
    v5 = *(_OWORD *)&baseSvt->fields.id.fields.currentCryptoKey;
    v6 = *(_OWORD *)&baseSvt->fields.id.fields.fakeValue;
    v7 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v19.fields.currentCryptoKey = v5;
    *(_OWORD *)&v19.fields.fakeValue = v6;
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    v18 = v19;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v18, 0);
    this->fields.baseSvt = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseSvt, 0, v9, v10, v11, v12, v13, v14);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        if ( DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (Il2CppObject **)&this->fields.baseSvt,
               v8,
               (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
        {
          return this->fields.baseSvt;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
          if ( Instance )
          {
            if ( DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.baseSvt,
                   v8,
                   (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
            {
              this->fields._isBaseSvtFromStorage_k__BackingField = 1;
            }
            return this->fields.baseSvt;
          }
        }
      }
    }
    sub_2213CDC(Instance, v16);
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
  if ( (byte_596A27C & 1) == 0 )
  {
    this = (ServantCostumeControl___c__DisplayClass56_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A27C = 1;
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
      sub_2213CDC(this, decide);
    combineRootComponent->fields._IsExeButtonProcessing_k__BackingField = 0;
  }
  this = (ServantCostumeControl___c__DisplayClass56_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  _BYTE *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t *p_qp; // x9
  struct CombineCostumeEntity_o *combineCostumeEntity; // x9
  struct ServantCostumeEntity_o *baseSvtCostume; // x10
  int32_t v21; // w21
  SetRarityDialogControl_o *exeCombineDlg; // x22
  System_String_o *name; // x24
  int64_t haveQpVal; // x23
  System_Action_o *v25; // x25
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x19

  if ( (byte_596A27D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantCostumeControl_RefreshEventCostumeInfo__);
    sub_2213A60(&Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__);
    sub_2213A60(&Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__);
    sub_2213A60(&ServantCostumeControl___c__DisplayClass57_1_TypeInfo);
    byte_596A27D = 1;
  }
  v5 = sub_2213CCC(ServantCostumeControl___c__DisplayClass57_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = Method_ServantCostumeControl___c__DisplayClass57_0__OnClickExeCostumeCombine_b__3__;
  *(_BYTE *)(v5 + 16) = useEventItem;
  if ( (v14[83] & 2) != 0 )
    v14 = (_BYTE *)sub_2213A78(v14);
  v15 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, *((_QWORD *)v14 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
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
    sub_2213CDC(v6, v7);
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
  v21 = *p_qp;
  exeCombineDlg = _4__this->fields.exeCombineDlg;
  name = baseSvtCostume->fields.name;
  haveQpVal = _4__this->fields.haveQpVal;
  v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_ServantCostumeControl___c__DisplayClass57_1__OnClickExeCostumeCombine_b__4__,
    0);
  v26 = (Il2CppObject *)this->fields.__4__this;
  v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v27, v26, Method_ServantCostumeControl_RefreshEventCostumeInfo__, 0);
  if ( !exeCombineDlg )
    goto LABEL_16;
  SetRarityDialogControl__SetConfirmCombineCostume(exeCombineDlg, name, v21, haveQpVal, v25, v27, 0);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct ServantCostumeControl___c__DisplayClass57_0_o *CS___8__locals1; // x8
  struct ServantCostumeControl_o *_4__this; // x8
  struct EventCombineCostumeEntity_o *eventCombineCostumeEnt; // x9
  int32_t eventId; // w21
  struct System_Object_array *items; // x9
  _QWORD *v17; // x8
  __int64 size; // x10
  Il2CppClass **v19; // x0
  struct ServantCostumeControl___c__DisplayClass57_0_o *v20; // x8
  struct ServantCostumeControl_o *v21; // x8

  if ( (byte_596A27E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    byte_596A27E = 1;
  }
  itemInfoList = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    itemInfoList,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
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
    items = itemInfoList->fields._items;
    eventItemIcon = (Il2CppObject *)_4__this->fields.eventItemIcon;
    v17 = Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__;
    ++itemInfoList->fields._version;
    if ( !items )
      goto LABEL_19;
    size = itemInfoList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemInfoList,
        eventItemIcon,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      itemInfoList->fields._size = size + 1;
      v19[4] = (Il2CppClass *)eventItemIcon;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)eventItemIcon, v6, v7, v8, v9, v10, v11);
    }
  }
  else
  {
    eventId = 0;
  }
  v20 = this->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_19;
  v21 = v20->fields.__4__this;
  if ( !v21 )
    goto LABEL_19;
  combineRootComponent = v21->fields.combineRootComponent;
  if ( !this->fields.useEventItem )
    itemInfoList = (System_Collections_Generic_List_object__o *)v21->fields.itemInfoList;
  if ( !combineRootComponent )
LABEL_19:
    sub_2213CDC(combineRootComponent, eventItemIcon);
  CombineRootComponent__RequestCombineCostume(
    combineRootComponent,
    eventId,
    (System_Collections_Generic_List_LimitCntUpItemComponent__o *)itemInfoList,
    0);
}