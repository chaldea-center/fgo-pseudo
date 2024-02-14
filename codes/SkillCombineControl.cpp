void __fastcall SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SkillCombineControl__CheckIsMaxLvSkills(
        SkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_Int32_array *SkillIdList; // x19
  __int64 v7; // x8
  SkillCombineControl_o *v8; // x20
  unsigned __int64 v9; // x22
  int32_t *p_type; // x23
  int32_t v11; // w21
  int32_t v12; // w28
  __int64 v14; // x0

  if ( (byte_42154E6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, resData);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    this = (SkillCombineControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42154E6 = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, 0LL),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))resData->klass->vtable._6_getSkillLevelList.method)(
                                          resData,
                                          resData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_18:
    sub_B0D97C(this);
  }
  v7 = *(_QWORD *)&SkillIdList->max_length;
  if ( (int)v7 < 1 )
    return 1;
  v8 = this;
  v9 = 0LL;
  p_type = &this->fields.type;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v7 )
      goto LABEL_19;
    if ( !v8 )
      goto LABEL_18;
    if ( v9 >= LODWORD(v8->fields.combineRootComponent) )
    {
LABEL_19:
      v14 = sub_B0D9A8(this);
      sub_B0D948(v14, 0LL);
    }
    v11 = SkillIdList->m_Items[v9 + 1];
    if ( v11 >= 1 )
    {
      v12 = p_type[v9];
      this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_18;
      this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_18;
      this = (SkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        v11,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_18;
      if ( v12 < SLODWORD(this->fields.baseUserServantEntity) )
        return 0;
    }
    LODWORD(v7) = SkillIdList->max_length;
    if ( (__int64)++v9 >= (int)v7 )
      return 1;
  }
}


SvtUseSkillData_o *__fastcall SkillCombineControl__GetSvtSkillData(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  SvtUseSkillData_o *v5; // x21
  struct SvtUseSkillData_o **p_skillData; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **SkillIdList; // x0
  struct SvtUseSkillData_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct SvtUseSkillData_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42154DF & 1) == 0 )
  {
    sub_B0D8A4(&SvtUseSkillData_TypeInfo, usrSvtData);
    byte_42154DF = 1;
  }
  v5 = (SvtUseSkillData_o *)sub_B0D974(SvtUseSkillData_TypeInfo, usrSvtData, method);
  SvtUseSkillData___ctor(v5, 0LL);
  this->fields.skillData = v5;
  p_skillData = &this->fields.skillData;
  sub_B0D840((BattleServantConfConponent_o *)p_skillData, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  if ( !usrSvtData
    || (v14 = *p_skillData,
        SkillIdList = (System_Int32_array **)UserServantEntity__getSkillIdList(usrSvtData, -1, -1, 1, 0LL),
        !v14)
    || (v14->fields.svtUseSkillIdList = (struct System_Int32_array *)SkillIdList,
        sub_B0D840((BattleServantConfConponent_o *)&v14->fields, SkillIdList, v15, v16, v17, v18, v19, v20),
        v21 = *p_skillData,
        SkillIdList = (System_Int32_array **)((__int64 (__fastcall *)(UserServantEntity_o *, void *))usrSvtData->klass->vtable._6_getSkillLevelList.method)(
                                               usrSvtData,
                                               usrSvtData->klass[1]._1.image),
        !v21) )
  {
    sub_B0D97C(SkillIdList);
  }
  v21->fields.svtSkillLvList = (struct System_Int32_array *)SkillIdList;
  sub_B0D840((BattleServantConfConponent_o *)&v21->fields.svtSkillLvList, SkillIdList, v22, v23, v24, v25, v26, v27);
  return *p_skillData;
}


SetLevelUpData_o *__fastcall SkillCombineControl__GetTargetData(SkillCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.lvUpData;
}


int32_t __fastcall SkillCombineControl__GetTutorialOpenType(SkillCombineControl_o *this, const MethodInfo *method)
{
  return 37;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__InitDispCombineInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *gameObject; // x0
  const MethodInfo *v12; // x1
  UILabel_o *selectSkillHelpLb; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  UIWidget_o *v16; // x20
  int v17; // s0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  int size; // w20
  unsigned int v23; // w21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  int v25; // w20
  unsigned int v26; // w21

  if ( (byte_42154DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_8864/*"MSG_PRESELECT_BASE_SVT"*/, v7);
    sub_B0D8A4(&StringLiteral_8866/*"MSG_SKILL_SELECT"*/, v8);
    sub_B0D8A4(&StringLiteral_9295/*"NEED_QP_INFO"*/, v9);
    byte_42154DB = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8864/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_32;
  UILabel__set_text(preSelectBaseLb, gameObject, 0LL);
  gameObject = (System_String_o *)this->fields.preSelectBaseLb;
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (System_String_o *)this->fields.baseSelectInfoLb;
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (System_String_o *)this->fields.selectSkillInfo;
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  SkillCombineControl__SetHaveQpInfo(this, v12);
  selectSkillHelpLb = this->fields.selectSkillHelpLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8866/*"MSG_SKILL_SELECT"*/, 0LL);
  if ( !selectSkillHelpLb )
    goto LABEL_32;
  UILabel__set_text(selectSkillHelpLb, gameObject, 0LL);
  needQpLb = this->fields.needQpLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9295/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_32;
  UILabel__set_text(needQpLb, gameObject, 0LL);
  this->fields.spendQpVal = 0;
  qpLb = this->fields.qpLb;
  gameObject = System_Int32__ToString((int)this + 228, 0LL);
  if ( !qpLb )
    goto LABEL_32;
  UILabel__set_text(qpLb, gameObject, 0LL);
  v16 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
  if ( !v16 )
    goto LABEL_32;
  UIWidget__set_color(v16, *(UnityEngine_Color_o *)&v17, 0LL);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_32;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v23 = 0;
    do
    {
      if ( skillInfoList->fields._size <= v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      gameObject = (System_String_o *)skillInfoList->fields._items->m_Items[v23];
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( (int)++v23 >= size )
        goto LABEL_24;
      skillInfoList = this->fields.skillInfoList;
    }
    while ( skillInfoList );
LABEL_32:
    sub_B0D97C(gameObject);
  }
LABEL_24:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_32;
  v25 = itemInfoList->fields._size;
  if ( v25 >= 1 )
  {
    v26 = 0;
    do
    {
      if ( itemInfoList->fields._size <= v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      gameObject = (System_String_o *)itemInfoList->fields._items->m_Items[v26];
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( (int)++v26 >= v25 )
        return;
      itemInfoList = this->fields.itemInfoList;
    }
    while ( itemInfoList );
    goto LABEL_32;
  }
}


void __fastcall SkillCombineControl__InitSvtSkillCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *helpBtn; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v28; // x0
  _BOOL8 v29; // x0
  MenuListControl_o *v30; // x0
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42154DA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_17201/*"buttontxt_synthesis"*/, v8);
    byte_42154DA = 1;
  }
  memset(&v31, 0, sizeof(v31));
  EventTutorialMaster__CheckTutorial(0, 37, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  SkillCombineControl__InitDispCombineInfo(this, v10);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v11);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17201/*"buttontxt_synthesis"*/, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_30;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_30;
  this->fields.userQP = *((_DWORD *)helpBtn + 24);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    helpBtn = this->fields.charaGraph;
    if ( !helpBtn )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v14, v15, v16, v17, v18, v19);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_30:
    sub_B0D97C(helpBtn);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v28 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v28 && v28->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v31,
      v28,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v31,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v29 )
        break;
      if ( !v31.fields.current )
        sub_B0D97C(v29);
      if ( HIDWORD(v31.fields.current[1].klass) == 8 )
      {
        v30 = this->fields.menuListCtr;
        if ( !v30 )
          sub_B0D97C(0LL);
        MenuListControl__setBannerIcon(
          v30,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v31.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v31,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0

  if ( (byte_42154E4 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3348/*"CONFIRM_TITLE_SKILL_COMBINE"*/, v3);
    byte_42154E4 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3348/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B0D97C(v4);
  SetRarityDialogControl__SetSkillNpCombineInfo(this->fields.exeCombineDlg, this->fields.lvUpData, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__OnClickInfo(
        SkillCombineControl_o *this,
        bool isdecide,
        int32_t idx,
        const MethodInfo *method)
{
  SkillCombineControl__SetNeedItemInfo(this, idx, *(const MethodInfo **)&idx);
}


void __fastcall SkillCombineControl__SetBaseSvtCardImg(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitImageMaster_o *v12; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v15; // w21
  SkillCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_24036516; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_42154DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (SkillCombineControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42154DE = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v24, 0LL);
  if ( !v12 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v12,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v15 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = (SkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_24036516 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24036516(
                                                      v4->fields.charaGraphBase,
                                                      usrSvtData,
                                                      v15,
                                                      10,
                                                      0LL,
                                                      0,
                                                      0LL);
    v4->fields.charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_24036516;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v4->fields.charaGraph,
      TexturePrefab_24036516,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B0D97C(this);
  UICharaGraphTexture__SetCharacter_35242912((UICharaGraphTexture_o *)this, usrSvtData, v15, 0LL, 0, 0LL);
}


void __fastcall SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int128 v8; // q1
  int64_t v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Component_o *preSelectBaseLb; // x0
  const MethodInfo *v17; // x2
  SvtUseSkillData_o *SvtSkillData; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  SvtUseSkillData_o *v21; // x20
  int32_t v22; // w0
  UnityEngine_GameObject_o *v23; // x2
  const MethodInfo *v24; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42154DD & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtEn);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_42154DD = 1;
  }
  if ( usrSvtEn )
  {
    v8 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v8;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v25 = v26;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v25, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v9;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
      (System_Int32_array **)usrSvtEn,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
    {
      sub_B0D97C(preSelectBaseLb);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    SvtSkillData = SkillCombineControl__GetSvtSkillData(this, usrSvtEn, v17);
    v20 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    v21 = SvtSkillData;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v20;
    *(_QWORD *)&v27.fields.fakeValue = v19;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL);
    SkillCombineControl__SetCombineSkillList(this, v21, v23, v22, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetCombineSkillList(
        SkillCombineControl_o *this,
        SvtUseSkillData_o *skillData,
        UnityEngine_GameObject_o *targetGo,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SvtUseSkillData_o *v8; // x21
  SkillCombineControl_o *v9; // x27
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
  System_Int32_array **svtUseSkillIdList; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v25; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  unsigned __int64 v34; // x24
  struct System_Int32_array *v35; // x8
  int32_t v36; // w25
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x19
  int32_t v39; // w22
  ServantSkillInfoIconComponent_o *v40; // x26
  SkillEntity_o *Entity; // x0
  const MethodInfo *v42; // x1
  SkillEntity_o *v43; // x19
  int32_t IconId; // w23
  const MethodInfo *v45; // x1
  System_String_o *Name; // x0
  int maxLv; // w28
  System_String_o *v48; // x19
  int32_t v49; // w19
  SkillCombineControl_o *v50; // x21
  int32_t skillRecord; // w28
  int32_t v52; // w22
  struct UserServantEntity_o *baseUserServantEntity; // x8
  Il2CppObject *v54; // x20
  __int64 v55; // x21
  __int64 v56; // x27
  int32_t baseSvtId; // w21
  __int64 v58; // x1
  __int64 v59; // x2
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x27
  __int64 v61; // x0
  SvtUseSkillData_o *v62; // [xsp+20h] [xbp-90h]
  SkillCombineControl_o **p_targetList; // [xsp+28h] [xbp-88h]
  signed __int64 v65; // [xsp+38h] [xbp-78h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+40h] [xbp-70h]
  int32_t skillMaxLv; // [xsp+4Ch] [xbp-64h]
  System_String_o *skillName; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  v8 = skillData;
  v9 = this;
  if ( (byte_42154E0 & 1) == 0 )
  {
    sub_B0D8A4(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, skillData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&Method_SkillCombineControl_OnClickInfo__, v19);
    this = (SkillCombineControl_o *)sub_B0D8A4(&StringLiteral_753/*"-"*/, v20);
    byte_42154E0 = 1;
  }
  if ( !v8 )
    goto LABEL_35;
  svtUseSkillIdList = (System_Int32_array **)v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v9->fields.useSkillIdList,
    svtUseSkillIdList,
    (System_String_array **)targetGo,
    *(System_String_array ***)&svtId,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  useSkillIdList = v9->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_35;
  v25 = *(_QWORD *)&useSkillIdList->max_length;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v26;
  p_targetList = (SkillCombineControl_o **)&v9->fields.targetList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v9->fields.targetList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( (int)v25 >= 1 )
  {
    v65 = (int)v25;
    v34 = 0LL;
    v62 = v8;
    while ( 1 )
    {
      v35 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v34 >= v35->max_length )
        goto LABEL_36;
      v36 = v35->m_Items[v34 + 1];
      if ( v36 <= 0 )
      {
        ++v34;
      }
      else
      {
        svtSkillLvList = v8->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v34 >= svtSkillLvList->max_length )
        {
LABEL_36:
          v61 = sub_B0D9A8(this);
          sub_B0D948(v61, 0LL);
        }
        skillInfoList = v9->fields.skillInfoList;
        if ( !skillInfoList )
          break;
        v39 = svtSkillLvList->m_Items[v34 + 1];
        if ( v34 >= (unsigned int)skillInfoList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v40 = skillInfoList->fields._items->m_Items[v34];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    v36,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v43 = Entity;
          IconId = SkillEntity__GetIconId(Entity, v42);
          Name = SkillEntity__getName(v43, v45);
          maxLv = v43->fields.maxLv;
          v48 = Name;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          v48 = (System_String_o *)StringLiteral_753/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        skillMaxLv = maxLv;
        skillName = v48;
        v49 = v39;
        this = (SkillCombineControl_o *)ServantSkillMaster__getEntityFromSkillId(
                                          (ServantSkillMaster_o *)this,
                                          svtId,
                                          (int)v34 + 1,
                                          v36,
                                          0LL);
        if ( this )
        {
          v50 = this;
          this = (SkillCombineControl_o *)ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)this, 0LL);
          skillRecord = HIDWORD(v50->fields.exeCombineDlg);
          v52 = (int)this;
        }
        else
        {
          v52 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v9->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v54 = (Il2CppObject *)v9;
        v56 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v55 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v69.fields.currentCryptoKey = v56;
        *(_QWORD *)&v69.fields.fakeValue = v55;
        baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v69, 0LL);
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_B0D974(
                                                                      ServantSkillInfoIconComponent_ClickDelegate_TypeInfo,
                                                                      v58,
                                                                      v59);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(callback, v54, Method_SkillCombineControl_OnClickInfo__, 0LL);
        if ( !v40 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          v40,
          v34,
          v36,
          v49,
          skillMaxLv,
          skillName,
          IconId,
          v52,
          skillRecord,
          baseSvtId,
          callback,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
        v9 = (SkillCombineControl_o *)v54;
        v8 = v62;
        ++v34;
      }
      if ( (__int64)v34 >= v65 )
        goto LABEL_34;
    }
LABEL_35:
    sub_B0D97C(this);
  }
LABEL_34:
  SkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetExeBtnState(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v9; // x19
  int v10; // s0
  int v14; // s0
  int v18; // s0
  int v22; // s0

  if ( (byte_42154E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_42154E3 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v9 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v10, 0LL);
      *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
      if ( v5 )
      {
        UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v14, 0LL);
        if ( v9 )
        {
          UnityEngine_Behaviour__set_enabled(v9, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v9, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B0D97C(combineBtnBg);
  }
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v18, 0LL);
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
  if ( !v5 )
    goto LABEL_14;
  UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v22, 0LL);
  if ( !v9 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
}


void __fastcall SkillCombineControl__SetHaveQpInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  int32_t *p_haveQpVal; // x19
  UILabel_o *v5; // x20

  if ( (byte_42154DC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, method);
    byte_42154DC = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v5 = (UILabel_o *)*((_QWORD *)p_haveQpVal - 10),
        SelfUserGame = System_Int32__ToString_38473032((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL),
        !v5) )
  {
    sub_B0D97C(SelfUserGame);
  }
  UILabel__set_text(v5, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetNeedItemInfo(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x23
  __int64 v8; // x21
  int size; // w8
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v11; // x0

  v4 = this;
  if ( (byte_42154E1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, *(_QWORD *)&idx);
    this = (SkillCombineControl_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__,
                                      v5);
    byte_42154E1 = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList
      || (this = (SkillCombineControl_o *)v4->fields.selectSkillInfo) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (targetList = v4->fields.targetList) == 0LL) )
    {
LABEL_15:
      sub_B0D97C(this);
    }
    v8 = 0LL;
    while ( 1 )
    {
      size = targetList->fields._size;
      if ( (int)v8 >= size )
        break;
      if ( size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
        {
          v11 = sub_B0D9A8(this);
          sub_B0D948(v11, 0LL);
        }
        this = (SkillCombineControl_o *)targetList->fields._items->m_Items[v8];
        if ( this )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.qpLb),
            0LL);
          targetList = v4->fields.targetList;
          ++v8;
          if ( targetList )
            continue;
        }
      }
      goto LABEL_15;
    }
    SkillCombineControl__SetSvtSkillCombineData(v4, idx, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetStateInfoMsg(
        SkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v10; // x21
  float v11; // s4
  float v12; // s5
  float v13; // s6
  System_String_o *v14; // x1
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42154E5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_7303/*"INFO_MSG_SKILLUP"*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_42154E5 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_13;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v16.fields.g = 0.87891;
  v16.fields.b = 0.98828;
  v10 = (UIWidget_o *)Component_WebViewObject;
  v16.fields.r = 0.0;
  *(_QWORD *)&v15.fields.r = 0LL;
  *(_QWORD *)&v15.fields.b = 0LL;
  UnityEngine_Color___ctor_40757524(v16, v11, v12, v13, (const MethodInfo *)&v15);
  if ( !v10 )
    goto LABEL_13;
  UIWidget__set_color(v10, v15, 0LL);
  if ( state )
  {
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_7303/*"INFO_MSG_SKILLUP"*/, 0LL);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_13:
    sub_B0D97C(detailInfoLb);
  UILabel__set_text((UILabel_o *)detailInfoLb, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetSvtSkillCombineData(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x19
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  struct SvtUseSkillData_o *skillData; // x9
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  int32_t v33; // w26
  int32_t v34; // w24
  SkillEntity_o *Entity; // x0
  const MethodInfo *v36; // x1
  int maxLv; // w25
  System_String_o *Name; // x27
  const MethodInfo *v39; // x3
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  __int64 v41; // x21
  int size; // w8
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v44; // x22
  float v45; // s4
  float v46; // s5
  float v47; // s6
  System_String_o *v48; // x0
  const MethodInfo *v49; // x1
  System_String_o *v50; // x21
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x25
  __int64 v53; // x27
  __int64 v54; // x28
  WarEntity_o *v55; // x25
  SkillCombineControl_o *v56; // x28
  int *p_spendQpVal; // x25
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  float v59; // s0
  double v60; // d0
  _BOOL8 v61; // x0
  UILabel_o *qpLb; // x27
  struct MenuListControl_o *v63; // x27
  struct UserServantEntity_o *v64; // x21
  unsigned __int64 v65; // x26
  __int64 v66; // x22
  char v67; // w23
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v68; // x28
  LimitCntUpItemComponent_o *v69; // x28
  UIWidget_o *v71; // x28
  int v72; // s0
  const MethodInfo *v76; // x1
  int32_t haveQpVal; // w8
  int32_t spendQpVal; // w9
  System_String_o *v79; // x0
  UIWidget_o *v80; // x28
  int v81; // s0
  System_String_o *v85; // x26
  __int64 v86; // x1
  __int64 v87; // x2
  SetLevelUpData_o *v88; // x26
  SkillCombineControl_o **p_lvUpData; // x24
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct SetLevelUpData_o *lvUpData; // x8
  System_Int32_array **v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  UIWidget_o *v116; // x20
  int v117; // s0
  __int64 v121; // x0
  int v122; // [xsp+Ch] [xbp-B4h]
  UIWidget_o *v123; // [xsp+10h] [xbp-B0h]
  struct UserServantEntity_o *v124; // [xsp+18h] [xbp-A8h]
  int32_t v125; // [xsp+20h] [xbp-A0h]
  int32_t v126; // [xsp+24h] [xbp-9Ch]
  MethodInfo methoda; // [xsp+28h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  UnityEngine_Color_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42154E2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineSkillMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B0D8A4(&SetLevelUpData_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/, v22);
    sub_B0D8A4(&StringLiteral_17201/*"buttontxt_synthesis"*/, v23);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v24);
    sub_B0D8A4(&StringLiteral_12252/*"SHORT_ITEM_INFO_MSG"*/, v25);
    sub_B0D8A4(&StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/, v26);
    sub_B0D8A4(&StringLiteral_1/*""*/, v27);
    sub_B0D8A4(&StringLiteral_17199/*"buttontxt_notsynthesis"*/, v28);
    this = (SkillCombineControl_o *)sub_B0D8A4(&StringLiteral_960/*"0"*/, v29);
    byte_42154E2 = 1;
  }
  memset(&methoda.klass, 0, 24);
  skillData = v4->fields.skillData;
  if ( !skillData )
    goto LABEL_97;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_97;
  if ( svtUseSkillIdList->max_length <= idx )
    goto LABEL_98;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_97;
  if ( svtSkillLvList->max_length <= idx )
  {
LABEL_98:
    v121 = sub_B0D9A8(this);
    sub_B0D948(v121, 0LL);
  }
  v33 = svtUseSkillIdList->m_Items[idx + 1];
  if ( v33 >= 1 )
  {
    v34 = svtSkillLvList->m_Items[idx + 1];
    this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !this )
      goto LABEL_97;
    Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                v33,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( Entity )
    {
      maxLv = Entity->fields.maxLv;
      Name = SkillEntity__getName(Entity, v36);
    }
    else
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      maxLv = 10;
    }
    this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v33, v34, v39);
    itemInfoList = v4->fields.itemInfoList;
    if ( !itemInfoList )
      goto LABEL_97;
    v41 = 0LL;
    while ( 1 )
    {
      size = itemInfoList->fields._size;
      if ( (int)v41 >= size )
        break;
      if ( size <= (unsigned int)v41 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (SkillCombineControl_o *)itemInfoList->fields._items->m_Items[v41];
      if ( this )
      {
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
        itemInfoList = v4->fields.itemInfoList;
        ++v41;
        if ( itemInfoList )
          continue;
      }
      goto LABEL_97;
    }
    this = (SkillCombineControl_o *)v4->fields.detailInfoLb;
    if ( !this )
      goto LABEL_97;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v129.fields.g = 0.87891;
    v129.fields.b = 0.98828;
    v44 = (UIWidget_o *)Component_WebViewObject;
    v129.fields.r = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_40757524(v129, v45, v46, v47, &methoda);
    if ( !v44 )
      goto LABEL_97;
    *(_QWORD *)&v130.fields.r = methoda.methodPointer;
    *(_QWORD *)&v130.fields.b = methoda.invoker_method;
    UIWidget__set_color(v44, v130, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/, 0LL);
    if ( v34 < maxLv )
    {
      v50 = v48;
      this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17201/*"buttontxt_synthesis"*/, 0LL);
        this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
        if ( this )
        {
          ((void (__fastcall *)(SkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
            this,
            this->klass[2]._1.name);
          this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            *(_QWORD *)&methoda.token = v50;
            v124 = (struct UserServantEntity_o *)Name;
            v125 = v33;
            this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
            baseUserServantEntity = v4->fields.baseUserServantEntity;
            if ( baseUserServantEntity )
            {
              v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
              v54 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
              v53 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v128.fields.currentCryptoKey = v54;
              *(_QWORD *)&v128.fields.fakeValue = v53;
              this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                v128,
                                                0LL);
              if ( v52 )
              {
                v55 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v52,
                        (int32_t)this,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
                  if ( v55 )
                  {
                    if ( this )
                    {
                      this = (SkillCombineControl_o *)CombineSkillMaster__GetEntity(
                                                        (CombineSkillMaster_o *)this,
                                                        (int32_t)v55->fields.coordinates,
                                                        v34,
                                                        0LL);
                      if ( this )
                      {
                        v56 = this;
                        v4->fields.spendQpVal = (int32_t)this->fields.combineRootComponent;
                        p_spendQpVal = &v4->fields.spendQpVal;
                        combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.combineEventList;
                        if ( combineEventList && combineEventList->fields._size >= 1 )
                        {
                          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
                            combineEventList,
                            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          methoda.parameters = methoda.name;
                          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
                          while ( 1 )
                          {
                            v61 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
                                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v61 )
                              break;
                            if ( !methoda.parameters )
                              sub_B0D97C(v61);
                            if ( *((_DWORD *)methoda.parameters + 5) == 8 )
                            {
                              v59 = *((float *)methoda.parameters + 14) * (float)*p_spendQpVal;
                              if ( v59 == INFINITY )
                                v60 = -INFINITY;
                              else
                                v60 = v59;
                              *p_spendQpVal = (int)v60;
                            }
                          }
                          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
                            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
                        }
                        qpLb = v4->fields.qpLb;
                        this = (SkillCombineControl_o *)System_Int32__ToString_38473032(
                                                          (int)v4 + 228,
                                                          (System_String_o *)StringLiteral_9289/*"N0"*/,
                                                          0LL);
                        if ( qpLb )
                        {
                          v123 = v44;
                          UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
                          v63 = *(struct MenuListControl_o **)&v56->fields.type;
                          if ( v63 )
                          {
                            v64 = v56->fields.baseUserServantEntity;
                            v122 = v34 + 1;
                            v65 = 0LL;
                            v126 = v34;
                            v66 = (((__int64)v63->fields.combineData << 32) - 0x100000000LL) >> 32;
                            v67 = 1;
                            do
                            {
                              if ( (__int64)v65 <= v66 )
                              {
                                v68 = v4->fields.itemInfoList;
                                if ( !v68 )
                                  goto LABEL_97;
                                if ( v65 >= (unsigned int)v68->fields._size )
                                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                                if ( v65 >= LODWORD(v63->fields.combineData) )
                                  goto LABEL_98;
                                if ( !v64 )
                                  goto LABEL_97;
                                if ( v65 >= LODWORD(v64->fields.id.fields.hiddenValue) )
                                  goto LABEL_98;
                                v69 = v68->fields._items->m_Items[v65];
                                if ( !v69 )
                                  goto LABEL_97;
                                LimitCntUpItemComponent__setLimitUpItemInfo(
                                  v69,
                                  v4->fields.userId,
                                  *((_DWORD *)&v63->fields.menuListScrollView + v65),
                                  *((_DWORD *)&v64->fields.id.fields.fakeValue + v65),
                                  0LL);
                                v67 &= v69->fields.isItemNum;
                              }
                            }
                            while ( v65++ < 4 );
                            v71 = (UIWidget_o *)v4->fields.qpLb;
                            *(UnityEngine_Color_o *)&v72 = UnityEngine_Color__get_white(0LL);
                            if ( v71 )
                            {
                              UIWidget__set_color(v71, *(UnityEngine_Color_o *)&v72, 0LL);
                              haveQpVal = v4->fields.haveQpVal;
                              spendQpVal = v4->fields.spendQpVal;
                              v4->fields._IsExeCombine_k__BackingField = 1;
                              if ( haveQpVal < spendQpVal )
                              {
                                white = UnityEngine_Color__get_white(0LL);
                                UIWidget__set_color(v123, white, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/, 0LL);
                                v80 = (UIWidget_o *)v4->fields.qpLb;
                                *(_QWORD *)&methoda.token = v79;
                                *(UnityEngine_Color_o *)&v81 = UnityEngine_Color__get_red(0LL);
                                if ( !v80 )
                                  goto LABEL_97;
                                UIWidget__set_color(v80, *(UnityEngine_Color_o *)&v81, 0LL);
                                v4->fields._IsExeCombine_k__BackingField = 0;
                              }
                              v85 = *(System_String_o **)&methoda.token;
                              if ( (v67 & 1) == 0 )
                              {
                                v132 = UnityEngine_Color__get_white(0LL);
                                UIWidget__set_color(v123, v132, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12252/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
                                v4->fields._IsExeCombine_k__BackingField = 0;
                              }
                              SkillCombineControl__SetExeBtnState(v4, v76);
                              this = (SkillCombineControl_o *)v4->fields.detailInfoLb;
                              if ( this )
                              {
                                UILabel__set_text((UILabel_o *)this, v85, 0LL);
                                v88 = (SetLevelUpData_o *)sub_B0D974(SetLevelUpData_TypeInfo, v86, v87);
                                SetLevelUpData___ctor(v88, 0LL);
                                p_lvUpData = (SkillCombineControl_o **)&v4->fields.lvUpData;
                                v4->fields.lvUpData = v88;
                                sub_B0D840(
                                  (BattleServantConfConponent_o *)&v4->fields.lvUpData,
                                  (System_Int32_array **)v88,
                                  v90,
                                  v91,
                                  v92,
                                  v93,
                                  v94,
                                  v95);
                                lvUpData = v4->fields.lvUpData;
                                if ( lvUpData )
                                {
                                  lvUpData->fields.currentId = v125;
                                  if ( *p_lvUpData )
                                  {
                                    *((_DWORD *)&(*p_lvUpData)->fields.BaseMonoBehaviour_Fields + 1) = idx + 1;
                                    if ( *p_lvUpData )
                                    {
                                      LODWORD((*p_lvUpData)->fields.combineRootComponent) = idx;
                                      this = *p_lvUpData;
                                      if ( *p_lvUpData )
                                      {
                                        v103 = (System_Int32_array **)StringLiteral_1/*""*/;
                                        *(_QWORD *)&this->fields.type = StringLiteral_1/*""*/;
                                        sub_B0D840(
                                          (BattleServantConfConponent_o *)&this->fields.type,
                                          v103,
                                          v96,
                                          v97,
                                          v98,
                                          v99,
                                          v100,
                                          v101);
                                        this = *p_lvUpData;
                                        if ( *p_lvUpData )
                                        {
                                          this->fields.baseUserServantEntity = v124;
                                          sub_B0D840(
                                            (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
                                            (System_Int32_array **)v124,
                                            v104,
                                            v105,
                                            v106,
                                            v107,
                                            v108,
                                            v109);
                                          if ( *p_lvUpData )
                                          {
                                            LODWORD((*p_lvUpData)->fields.exeCombineDlg) = v126;
                                            if ( *p_lvUpData )
                                            {
                                              HIDWORD((*p_lvUpData)->fields.exeCombineDlg) = v122;
                                              if ( *p_lvUpData )
                                              {
                                                LODWORD((*p_lvUpData)->fields.helpBtn) = *p_spendQpVal;
                                                if ( *p_lvUpData )
                                                {
                                                  HIDWORD((*p_lvUpData)->fields.helpBtn) = v4->fields.userQP;
                                                  this = (SkillCombineControl_o *)v4->fields.lvUpData;
                                                  if ( this )
                                                  {
                                                    this->fields.menuListCtr = v63;
                                                    sub_B0D840(
                                                      (BattleServantConfConponent_o *)&this->fields.menuListCtr,
                                                      (System_Int32_array **)v63,
                                                      v110,
                                                      v111,
                                                      v112,
                                                      v113,
                                                      v114,
                                                      v115);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_97:
      sub_B0D97C(this);
    }
    v4->fields._IsExeCombine_k__BackingField = 0;
    SkillCombineControl__SetExeBtnState(v4, v49);
    this = (SkillCombineControl_o *)v4->fields.qpLb;
    if ( !this )
      goto LABEL_97;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_960/*"0"*/, 0LL);
    v116 = (UIWidget_o *)v4->fields.qpLb;
    *(UnityEngine_Color_o *)&v117 = UnityEngine_Color__get_white(0LL);
    if ( !v116 )
      goto LABEL_97;
    UIWidget__set_color(v116, *(UnityEngine_Color_o *)&v117, 0LL);
    this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_97;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17199/*"buttontxt_notsynthesis"*/, 0LL);
    this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_97;
    ((void (__fastcall *)(SkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
  }
}