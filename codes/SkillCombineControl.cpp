void __fastcall SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SkillCombineControl__CheckIsMaxLvSkills(
        SkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  System_Int32_array *SkillIdList; // x19
  __int64 v5; // x8
  SkillCombineControl_o *v6; // x20
  unsigned __int64 v7; // x22
  int32_t *p_type; // x23
  int32_t v9; // w21
  int32_t v10; // w28
  __int64 v12; // x0

  if ( (byte_42B0D11 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (SkillCombineControl_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0D11 = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, 0LL),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))resData->klass->vtable._6_getSkillLevelList.method)(
                                          resData,
                                          resData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_18:
    sub_B52A5C(this, resData);
  }
  v5 = *(_QWORD *)&SkillIdList->max_length;
  if ( (int)v5 < 1 )
    return 1;
  v6 = this;
  v7 = 0LL;
  p_type = &this->fields.type;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
      goto LABEL_19;
    if ( !v6 )
      goto LABEL_18;
    if ( v7 >= LODWORD(v6->fields.combineRootComponent) )
    {
LABEL_19:
      v12 = sub_B52A88(this);
      sub_B52A28(v12, 0LL);
    }
    v9 = SkillIdList->m_Items[v7 + 1];
    if ( v9 >= 1 )
    {
      v10 = p_type[v7];
      this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_18;
      this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_18;
      this = (SkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        v9,
                                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_18;
      if ( v10 < SLODWORD(this->fields.baseUserServantEntity) )
        return 0;
    }
    LODWORD(v5) = SkillIdList->max_length;
    if ( (__int64)++v7 >= (int)v5 )
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
  __int64 v14; // x1
  struct SvtUseSkillData_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct SvtUseSkillData_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42B0D0A & 1) == 0 )
  {
    sub_B52984(&SvtUseSkillData_TypeInfo);
    byte_42B0D0A = 1;
  }
  v5 = (SvtUseSkillData_o *)sub_B52A54(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor(v5, 0LL);
  this->fields.skillData = v5;
  p_skillData = &this->fields.skillData;
  sub_B52920((BattleServantConfConponent_o *)p_skillData, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  if ( !usrSvtData
    || (v15 = *p_skillData,
        SkillIdList = (System_Int32_array **)UserServantEntity__getSkillIdList(usrSvtData, -1, -1, 1, 0LL),
        !v15)
    || (v15->fields.svtUseSkillIdList = (struct System_Int32_array *)SkillIdList,
        sub_B52920((BattleServantConfConponent_o *)&v15->fields, SkillIdList, v16, v17, v18, v19, v20, v21),
        v22 = *p_skillData,
        SkillIdList = (System_Int32_array **)((__int64 (__fastcall *)(UserServantEntity_o *, void *))usrSvtData->klass->vtable._6_getSkillLevelList.method)(
                                               usrSvtData,
                                               usrSvtData->klass[1]._1.image),
        !v22) )
  {
    sub_B52A5C(SkillIdList, v14);
  }
  v22->fields.svtSkillLvList = (struct System_Int32_array *)SkillIdList;
  sub_B52920((BattleServantConfConponent_o *)&v22->fields.svtSkillLvList, SkillIdList, v23, v24, v25, v26, v27, v28);
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
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *gameObject; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UILabel_o *selectSkillHelpLb; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  UIWidget_o *v10; // x20
  int v11; // s0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  int size; // w20
  unsigned int v17; // w21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  int v19; // w20
  unsigned int v20; // w21

  if ( (byte_42B0D06 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8895/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_B52984(&StringLiteral_8897/*"MSG_SKILL_SELECT"*/);
    sub_B52984(&StringLiteral_9329/*"NEED_QP_INFO"*/);
    byte_42B0D06 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8895/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  SkillCombineControl__SetHaveQpInfo(this, v6);
  selectSkillHelpLb = this->fields.selectSkillHelpLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8897/*"MSG_SKILL_SELECT"*/, 0LL);
  if ( !selectSkillHelpLb )
    goto LABEL_32;
  UILabel__set_text(selectSkillHelpLb, gameObject, 0LL);
  needQpLb = this->fields.needQpLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9329/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_32;
  UILabel__set_text(needQpLb, gameObject, 0LL);
  this->fields.spendQpVal = 0;
  qpLb = this->fields.qpLb;
  gameObject = System_Int32__ToString((int)this + 228, 0LL);
  if ( !qpLb )
    goto LABEL_32;
  UILabel__set_text(qpLb, gameObject, 0LL);
  v10 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
  if ( !v10 )
    goto LABEL_32;
  UIWidget__set_color(v10, *(UnityEngine_Color_o *)&v11, 0LL);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_32;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    do
    {
      if ( skillInfoList->fields._size <= v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      gameObject = (System_String_o *)skillInfoList->fields._items->m_Items[v17];
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( (int)++v17 >= size )
        goto LABEL_24;
      skillInfoList = this->fields.skillInfoList;
    }
    while ( skillInfoList );
LABEL_32:
    sub_B52A5C(gameObject, v5);
  }
LABEL_24:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_32;
  v19 = itemInfoList->fields._size;
  if ( v19 >= 1 )
  {
    v20 = 0;
    do
    {
      if ( itemInfoList->fields._size <= v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      gameObject = (System_String_o *)itemInfoList->fields._items->m_Items[v20];
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( (int)++v20 >= v19 )
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
  void *helpBtn; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
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
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v23; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  MenuListControl_o *v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B0D05 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_17268/*"buttontxt_synthesis"*/);
    byte_42B0D05 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  EventTutorialMaster__CheckTutorial(0, 37, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  SkillCombineControl__InitDispCombineInfo(this, v5);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v6);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17268/*"buttontxt_synthesis"*/, 0LL);
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
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v9, v10, v11, v12, v13, v14);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_30:
    sub_B52A5C(helpBtn, v3);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v23 && v23->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      v23,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v27,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v24 )
        break;
      if ( !v27.fields.current )
        sub_B52A5C(v24, v25);
      if ( HIDWORD(v27.fields.current[1].klass) == 8 )
      {
        v26 = this->fields.menuListCtr;
        if ( !v26 )
          sub_B52A5C(0LL, v25);
        MenuListControl__setBannerIcon(
          v26,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v27.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v27,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_42B0D0F & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3368/*"CONFIRM_TITLE_SKILL_COMBINE"*/);
    byte_42B0D0F = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3368/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B52A5C(v3, v4);
  SetRarityDialogControl__SetSkillNpCombineInfo(this->fields.exeCombineDlg, this->fields.lvUpData, v3, 0LL);
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
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  ServantLimitImageMaster_o *v9; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v12; // w21
  SkillCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_24904472; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v4 = this;
  if ( (byte_42B0D09 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (SkillCombineControl_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0D09 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v8 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v8;
  *(_QWORD *)&v21.fields.fakeValue = v7;
  this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v21, 0LL);
  if ( !v9 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v9,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v12 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = (SkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_24904472 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24904472(
                                                      v4->fields.charaGraphBase,
                                                      usrSvtData,
                                                      v12,
                                                      10,
                                                      0LL,
                                                      0,
                                                      0LL);
    v4->fields.charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_24904472;
    sub_B52920(
      (BattleServantConfConponent_o *)&v4->fields.charaGraph,
      TexturePrefab_24904472,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B52A5C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_35944152((UICharaGraphTexture_o *)this, usrSvtData, v12, 0LL, 0, 0LL);
}


void __fastcall SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
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

  if ( (byte_42B0D08 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B0D08 = 1;
  }
  if ( usrSvtEn )
  {
    v7 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v25 = v26;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v25, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v8;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
      (System_Int32_array **)usrSvtEn,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
    {
      sub_B52A5C(preSelectBaseLb, v15);
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
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v27, 0LL);
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
  System_Int32_array **svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v12; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  unsigned __int64 v21; // x24
  struct System_Int32_array *v22; // x8
  int32_t v23; // w25
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x19
  int32_t v26; // w22
  ServantSkillInfoIconComponent_o *v27; // x26
  SkillEntity_o *Entity; // x0
  const MethodInfo *v29; // x1
  SkillEntity_o *v30; // x19
  int32_t IconId; // w23
  const MethodInfo *v32; // x1
  System_String_o *Name; // x0
  int maxLv; // w28
  System_String_o *v35; // x19
  int32_t v36; // w19
  SkillCombineControl_o *v37; // x21
  int32_t skillRecord; // w28
  int32_t v39; // w22
  struct UserServantEntity_o *baseUserServantEntity; // x8
  Il2CppObject *v41; // x20
  __int64 v42; // x21
  __int64 v43; // x27
  int32_t baseSvtId; // w21
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x27
  __int64 v46; // x0
  SvtUseSkillData_o *v47; // [xsp+20h] [xbp-90h]
  SkillCombineControl_o **p_targetList; // [xsp+28h] [xbp-88h]
  signed __int64 v50; // [xsp+38h] [xbp-78h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+40h] [xbp-70h]
  int32_t skillMaxLv; // [xsp+4Ch] [xbp-64h]
  System_String_o *skillName; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  v8 = skillData;
  v9 = this;
  if ( (byte_42B0D0B & 1) == 0 )
  {
    sub_B52984(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SkillCombineControl_OnClickInfo__);
    this = (SkillCombineControl_o *)sub_B52984(&StringLiteral_757/*"-"*/);
    byte_42B0D0B = 1;
  }
  if ( !v8 )
    goto LABEL_35;
  svtUseSkillIdList = (System_Int32_array **)v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_B52920(
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
  v12 = *(_QWORD *)&useSkillIdList->max_length;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v13;
  p_targetList = (SkillCombineControl_o **)&v9->fields.targetList;
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->fields.targetList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( (int)v12 >= 1 )
  {
    v50 = (int)v12;
    v21 = 0LL;
    v47 = v8;
    while ( 1 )
    {
      v22 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v21 >= v22->max_length )
        goto LABEL_36;
      v23 = v22->m_Items[v21 + 1];
      if ( v23 <= 0 )
      {
        ++v21;
      }
      else
      {
        svtSkillLvList = v8->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v21 >= svtSkillLvList->max_length )
        {
LABEL_36:
          v46 = sub_B52A88(this);
          sub_B52A28(v46, 0LL);
        }
        skillInfoList = v9->fields.skillInfoList;
        if ( !skillInfoList )
          break;
        v26 = svtSkillLvList->m_Items[v21 + 1];
        if ( v21 >= (unsigned int)skillInfoList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v27 = skillInfoList->fields._items->m_Items[v21];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    v23,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v30 = Entity;
          IconId = SkillEntity__GetIconId(Entity, v29);
          Name = SkillEntity__getName(v30, v32);
          maxLv = v30->fields.maxLv;
          v35 = Name;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          v35 = (System_String_o *)StringLiteral_757/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        skillMaxLv = maxLv;
        skillName = v35;
        v36 = v26;
        this = (SkillCombineControl_o *)ServantSkillMaster__getEntityFromSkillId(
                                          (ServantSkillMaster_o *)this,
                                          svtId,
                                          (int)v21 + 1,
                                          v23,
                                          0LL);
        if ( this )
        {
          v37 = this;
          this = (SkillCombineControl_o *)ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)this, 0LL);
          skillRecord = HIDWORD(v37->fields.exeCombineDlg);
          v39 = (int)this;
        }
        else
        {
          v39 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v9->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v41 = (Il2CppObject *)v9;
        v43 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v42 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v54.fields.currentCryptoKey = v43;
        *(_QWORD *)&v54.fields.fakeValue = v42;
        baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v54, 0LL);
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_B52A54(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(callback, v41, Method_SkillCombineControl_OnClickInfo__, 0LL);
        if ( !v27 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          v27,
          v21,
          v23,
          v36,
          skillMaxLv,
          skillName,
          IconId,
          v39,
          skillRecord,
          baseSvtId,
          callback,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
        v9 = (SkillCombineControl_o *)v41;
        v8 = v47;
        ++v21;
      }
      if ( (__int64)v21 >= v50 )
        goto LABEL_34;
    }
LABEL_35:
    sub_B52A5C(this, skillData);
  }
LABEL_34:
  SkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetExeBtnState(SkillCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v8; // x19
  int v9; // s0
  int v13; // s0
  int v17; // s0
  int v21; // s0

  if ( (byte_42B0D0E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_42B0D0E = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v8 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v9, 0LL);
      *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
      if ( v4 )
      {
        UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v13, 0LL);
        if ( v8 )
        {
          UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v8, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B52A5C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v17, 0LL);
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  if ( !v4 )
    goto LABEL_14;
  UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v21, 0LL);
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
}


void __fastcall SkillCombineControl__SetHaveQpInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t *p_haveQpVal; // x19
  UILabel_o *v6; // x20

  if ( (byte_42B0D07 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B0D07 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v6 = (UILabel_o *)*((_QWORD *)p_haveQpVal - 10),
        SelfUserGame = System_Int32__ToString_39387012((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL),
        !v6) )
  {
    sub_B52A5C(SelfUserGame, v4);
  }
  UILabel__set_text(v6, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetNeedItemInfo(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x20
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x23
  __int64 v7; // x21
  int size; // w8
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v10; // x0

  v4 = this;
  if ( (byte_42B0D0C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    this = (SkillCombineControl_o *)sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    byte_42B0D0C = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList
      || (this = (SkillCombineControl_o *)v4->fields.selectSkillInfo) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (targetList = v4->fields.targetList) == 0LL) )
    {
LABEL_15:
      sub_B52A5C(this, *(_QWORD *)&idx);
    }
    v7 = 0LL;
    while ( 1 )
    {
      size = targetList->fields._size;
      if ( (int)v7 >= size )
        break;
      if ( size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
        {
          v10 = sub_B52A88(this);
          sub_B52A28(v10, 0LL);
        }
        this = (SkillCombineControl_o *)targetList->fields._items->m_Items[v7];
        if ( this )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.qpLb),
            0LL);
          targetList = v4->fields.targetList;
          ++v7;
          if ( targetList )
            continue;
        }
      }
      goto LABEL_15;
    }
    SkillCombineControl__SetSvtSkillCombineData(v4, idx, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetStateInfoMsg(
        SkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v7; // x21
  float v8; // s4
  float v9; // s5
  float v10; // s6
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_42B0D10 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_7329/*"INFO_MSG_SKILLUP"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0D10 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_13;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v12.fields.g = 0.87891;
  v12.fields.b = 0.98828;
  v7 = (UIWidget_o *)Component_WebViewObject;
  v12.fields.r = 0.0;
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  UnityEngine_Color___ctor_41463668(v12, v8, v9, v10, (const MethodInfo *)&v11);
  if ( !v7 )
    goto LABEL_13;
  UIWidget__set_color(v7, v11, 0LL);
  if ( v3 )
  {
    *(_QWORD *)&state = StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7329/*"INFO_MSG_SKILLUP"*/, 0LL);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_13:
    sub_B52A5C(detailInfoLb, *(_QWORD *)&state);
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetSvtSkillCombineData(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  SkillCombineControl_o *v4; // x19
  struct SvtUseSkillData_o *skillData; // x9
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  int32_t v8; // w26
  int32_t v9; // w24
  SkillEntity_o *Entity; // x0
  const MethodInfo *v11; // x1
  int maxLv; // w25
  System_String_o *Name; // x27
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  __int64 v16; // x21
  int size; // w8
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v19; // x22
  float v20; // s4
  float v21; // s5
  float v22; // s6
  System_String_o *v23; // x0
  System_String_o *v24; // x21
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x25
  __int64 v27; // x27
  __int64 v28; // x28
  WarEntity_o *v29; // x25
  SkillCombineControl_o *v30; // x28
  int *p_spendQpVal; // x25
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  float v33; // s0
  double v34; // d0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  UILabel_o *qpLb; // x27
  struct MenuListControl_o *v38; // x27
  struct UserServantEntity_o *v39; // x21
  unsigned __int64 v40; // x26
  __int64 v41; // x22
  char v42; // w23
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v43; // x28
  LimitCntUpItemComponent_o *v44; // x28
  UIWidget_o *v46; // x28
  int v47; // s0
  const MethodInfo *v51; // x1
  int32_t haveQpVal; // w8
  int32_t spendQpVal; // w9
  System_String_o *v54; // x0
  UIWidget_o *v55; // x28
  int v56; // s0
  System_String_o *v60; // x26
  SetLevelUpData_o *v61; // x26
  SkillCombineControl_o **p_lvUpData; // x24
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct SetLevelUpData_o *lvUpData; // x8
  System_Int32_array **v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  UIWidget_o *v89; // x20
  int v90; // s0
  __int64 v94; // x0
  int v95; // [xsp+Ch] [xbp-B4h]
  UIWidget_o *v96; // [xsp+10h] [xbp-B0h]
  struct UserServantEntity_o *v97; // [xsp+18h] [xbp-A8h]
  int32_t v98; // [xsp+20h] [xbp-A0h]
  int32_t v99; // [xsp+24h] [xbp-9Ch]
  MethodInfo methoda; // [xsp+28h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  UnityEngine_Color_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42B0D0D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&SetLevelUpData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_5805/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_B52984(&StringLiteral_17268/*"buttontxt_synthesis"*/);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    sub_B52984(&StringLiteral_12303/*"SHORT_ITEM_INFO_MSG"*/);
    sub_B52984(&StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_17266/*"buttontxt_notsynthesis"*/);
    this = (SkillCombineControl_o *)sub_B52984(&StringLiteral_969/*"0"*/);
    byte_42B0D0D = 1;
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
    v94 = sub_B52A88(this);
    sub_B52A28(v94, 0LL);
  }
  v8 = svtUseSkillIdList->m_Items[idx + 1];
  if ( v8 >= 1 )
  {
    v9 = svtSkillLvList->m_Items[idx + 1];
    this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !this )
      goto LABEL_97;
    Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                v8,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( Entity )
    {
      maxLv = Entity->fields.maxLv;
      Name = SkillEntity__getName(Entity, v11);
    }
    else
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      maxLv = 10;
    }
    this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v8, v9, v14);
    itemInfoList = v4->fields.itemInfoList;
    if ( !itemInfoList )
      goto LABEL_97;
    v16 = 0LL;
    while ( 1 )
    {
      size = itemInfoList->fields._size;
      if ( (int)v16 >= size )
        break;
      if ( size <= (unsigned int)v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (SkillCombineControl_o *)itemInfoList->fields._items->m_Items[v16];
      if ( this )
      {
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
        itemInfoList = v4->fields.itemInfoList;
        ++v16;
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
                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v102.fields.g = 0.87891;
    v102.fields.b = 0.98828;
    v19 = (UIWidget_o *)Component_WebViewObject;
    v102.fields.r = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_41463668(v102, v20, v21, v22, &methoda);
    if ( !v19 )
      goto LABEL_97;
    *(_QWORD *)&v103.fields.r = methoda.methodPointer;
    *(_QWORD *)&v103.fields.b = methoda.invoker_method;
    UIWidget__set_color(v19, v103, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5805/*"EXE_SUMMON_COMBINE_TXT"*/, 0LL);
    if ( v9 < maxLv )
    {
      v24 = v23;
      this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17268/*"buttontxt_synthesis"*/, 0LL);
        this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
        if ( this )
        {
          ((void (__fastcall *)(SkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
            this,
            this->klass[2]._1.name);
          this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            *(_QWORD *)&methoda.token = v24;
            v97 = (struct UserServantEntity_o *)Name;
            v98 = v8;
            this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
            baseUserServantEntity = v4->fields.baseUserServantEntity;
            if ( baseUserServantEntity )
            {
              v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
              v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
              v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v101.fields.currentCryptoKey = v28;
              *(_QWORD *)&v101.fields.fakeValue = v27;
              this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                v101,
                                                0LL);
              if ( v26 )
              {
                v29 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v26,
                        (int32_t)this,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
                  if ( v29 )
                  {
                    if ( this )
                    {
                      this = (SkillCombineControl_o *)CombineSkillMaster__GetEntity(
                                                        (CombineSkillMaster_o *)this,
                                                        (int32_t)v29->fields.coordinates,
                                                        v9,
                                                        0LL);
                      if ( this )
                      {
                        v30 = this;
                        v4->fields.spendQpVal = (int32_t)this->fields.combineRootComponent;
                        p_spendQpVal = &v4->fields.spendQpVal;
                        combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.combineEventList;
                        if ( combineEventList && combineEventList->fields._size >= 1 )
                        {
                          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
                            combineEventList,
                            (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          methoda.parameters = methoda.name;
                          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
                          while ( 1 )
                          {
                            v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
                                    (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v35 )
                              break;
                            if ( !methoda.parameters )
                              sub_B52A5C(v35, v36);
                            if ( *((_DWORD *)methoda.parameters + 5) == 8 )
                            {
                              v33 = *((float *)methoda.parameters + 14) * (float)*p_spendQpVal;
                              if ( v33 == INFINITY )
                                v34 = -INFINITY;
                              else
                                v34 = v33;
                              *p_spendQpVal = (int)v34;
                            }
                          }
                          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
                            (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
                        }
                        qpLb = v4->fields.qpLb;
                        this = (SkillCombineControl_o *)System_Int32__ToString_39387012(
                                                          (int)v4 + 228,
                                                          (System_String_o *)StringLiteral_9323/*"N0"*/,
                                                          0LL);
                        if ( qpLb )
                        {
                          v96 = v19;
                          UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
                          v38 = *(struct MenuListControl_o **)&v30->fields.type;
                          if ( v38 )
                          {
                            v39 = v30->fields.baseUserServantEntity;
                            v95 = v9 + 1;
                            v40 = 0LL;
                            v99 = v9;
                            v41 = (((__int64)v38->fields.combineData << 32) - 0x100000000LL) >> 32;
                            v42 = 1;
                            do
                            {
                              if ( (__int64)v40 <= v41 )
                              {
                                v43 = v4->fields.itemInfoList;
                                if ( !v43 )
                                  goto LABEL_97;
                                if ( v40 >= (unsigned int)v43->fields._size )
                                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                                if ( v40 >= LODWORD(v38->fields.combineData) )
                                  goto LABEL_98;
                                if ( !v39 )
                                  goto LABEL_97;
                                if ( v40 >= LODWORD(v39->fields.id.fields.hiddenValue) )
                                  goto LABEL_98;
                                v44 = v43->fields._items->m_Items[v40];
                                if ( !v44 )
                                  goto LABEL_97;
                                LimitCntUpItemComponent__setLimitUpItemInfo(
                                  v44,
                                  v4->fields.userId,
                                  *((_DWORD *)&v38->fields.menuListScrollView + v40),
                                  *((_DWORD *)&v39->fields.id.fields.fakeValue + v40),
                                  0LL);
                                v42 &= v44->fields.isItemNum;
                              }
                            }
                            while ( v40++ < 4 );
                            v46 = (UIWidget_o *)v4->fields.qpLb;
                            *(UnityEngine_Color_o *)&v47 = UnityEngine_Color__get_white(0LL);
                            if ( v46 )
                            {
                              UIWidget__set_color(v46, *(UnityEngine_Color_o *)&v47, 0LL);
                              haveQpVal = v4->fields.haveQpVal;
                              spendQpVal = v4->fields.spendQpVal;
                              v4->fields._IsExeCombine_k__BackingField = 1;
                              if ( haveQpVal < spendQpVal )
                              {
                                white = UnityEngine_Color__get_white(0LL);
                                UIWidget__set_color(v96, white, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/, 0LL);
                                v55 = (UIWidget_o *)v4->fields.qpLb;
                                *(_QWORD *)&methoda.token = v54;
                                *(UnityEngine_Color_o *)&v56 = UnityEngine_Color__get_red(0LL);
                                if ( !v55 )
                                  goto LABEL_97;
                                UIWidget__set_color(v55, *(UnityEngine_Color_o *)&v56, 0LL);
                                v4->fields._IsExeCombine_k__BackingField = 0;
                              }
                              v60 = *(System_String_o **)&methoda.token;
                              if ( (v42 & 1) == 0 )
                              {
                                v105 = UnityEngine_Color__get_white(0LL);
                                UIWidget__set_color(v96, v105, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12303/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
                                v4->fields._IsExeCombine_k__BackingField = 0;
                              }
                              SkillCombineControl__SetExeBtnState(v4, v51);
                              this = (SkillCombineControl_o *)v4->fields.detailInfoLb;
                              if ( this )
                              {
                                UILabel__set_text((UILabel_o *)this, v60, 0LL);
                                v61 = (SetLevelUpData_o *)sub_B52A54(SetLevelUpData_TypeInfo);
                                SetLevelUpData___ctor(v61, 0LL);
                                p_lvUpData = (SkillCombineControl_o **)&v4->fields.lvUpData;
                                v4->fields.lvUpData = v61;
                                sub_B52920(
                                  (BattleServantConfConponent_o *)&v4->fields.lvUpData,
                                  (System_Int32_array **)v61,
                                  v63,
                                  v64,
                                  v65,
                                  v66,
                                  v67,
                                  v68);
                                lvUpData = v4->fields.lvUpData;
                                if ( lvUpData )
                                {
                                  lvUpData->fields.currentId = v98;
                                  if ( *p_lvUpData )
                                  {
                                    *((_DWORD *)&(*p_lvUpData)->fields.BaseMonoBehaviour_Fields + 1) = idx + 1;
                                    if ( *p_lvUpData )
                                    {
                                      LODWORD((*p_lvUpData)->fields.combineRootComponent) = idx;
                                      this = *p_lvUpData;
                                      if ( *p_lvUpData )
                                      {
                                        v76 = (System_Int32_array **)StringLiteral_1/*""*/;
                                        *(_QWORD *)&this->fields.type = StringLiteral_1/*""*/;
                                        sub_B52920(
                                          (BattleServantConfConponent_o *)&this->fields.type,
                                          v76,
                                          v69,
                                          v70,
                                          v71,
                                          v72,
                                          v73,
                                          v74);
                                        this = *p_lvUpData;
                                        if ( *p_lvUpData )
                                        {
                                          this->fields.baseUserServantEntity = v97;
                                          sub_B52920(
                                            (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
                                            (System_Int32_array **)v97,
                                            v77,
                                            v78,
                                            v79,
                                            v80,
                                            v81,
                                            v82);
                                          if ( *p_lvUpData )
                                          {
                                            LODWORD((*p_lvUpData)->fields.exeCombineDlg) = v99;
                                            if ( *p_lvUpData )
                                            {
                                              HIDWORD((*p_lvUpData)->fields.exeCombineDlg) = v95;
                                              if ( *p_lvUpData )
                                              {
                                                LODWORD((*p_lvUpData)->fields.helpBtn) = *p_spendQpVal;
                                                if ( *p_lvUpData )
                                                {
                                                  HIDWORD((*p_lvUpData)->fields.helpBtn) = v4->fields.userQP;
                                                  this = (SkillCombineControl_o *)v4->fields.lvUpData;
                                                  if ( this )
                                                  {
                                                    this->fields.menuListCtr = v38;
                                                    sub_B52920(
                                                      (BattleServantConfConponent_o *)&this->fields.menuListCtr,
                                                      (System_Int32_array **)v38,
                                                      v83,
                                                      v84,
                                                      v85,
                                                      v86,
                                                      v87,
                                                      v88);
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
      sub_B52A5C(this, *(_QWORD *)&idx);
    }
    v4->fields._IsExeCombine_k__BackingField = 0;
    SkillCombineControl__SetExeBtnState(v4, *(const MethodInfo **)&idx);
    this = (SkillCombineControl_o *)v4->fields.qpLb;
    if ( !this )
      goto LABEL_97;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_969/*"0"*/, 0LL);
    v89 = (UIWidget_o *)v4->fields.qpLb;
    *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_white(0LL);
    if ( !v89 )
      goto LABEL_97;
    UIWidget__set_color(v89, *(UnityEngine_Color_o *)&v90, 0LL);
    this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_97;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17266/*"buttontxt_notsynthesis"*/, 0LL);
    this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_97;
    ((void (__fastcall *)(SkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
  }
}