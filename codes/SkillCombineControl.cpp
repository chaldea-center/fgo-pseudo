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

  if ( (byte_4186D63 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, resData);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    this = (SkillCombineControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186D63 = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, 0LL),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))resData->klass->vtable._6_getSkillLevelList.method)(
                                          resData,
                                          resData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_18:
    sub_B2C434(this, resData);
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
      v14 = sub_B2C460(this);
      sub_B2C400(v14, 0LL);
    }
    v11 = SkillIdList->m_Items[v9 + 1];
    if ( v11 >= 1 )
    {
      v12 = p_type[v9];
      this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_18;
      this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_18;
      this = (SkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        v11,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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

  if ( (byte_4186D5C & 1) == 0 )
  {
    sub_B2C35C(&SvtUseSkillData_TypeInfo, usrSvtData);
    byte_4186D5C = 1;
  }
  v5 = (SvtUseSkillData_o *)sub_B2C42C(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor(v5, 0LL);
  this->fields.skillData = v5;
  p_skillData = &this->fields.skillData;
  sub_B2C2F8((BattleServantConfConponent_o *)p_skillData, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  if ( !usrSvtData
    || (v15 = *p_skillData,
        SkillIdList = (System_Int32_array **)UserServantEntity__getSkillIdList(usrSvtData, -1, -1, 1, 0LL),
        !v15)
    || (v15->fields.svtUseSkillIdList = (struct System_Int32_array *)SkillIdList,
        sub_B2C2F8((BattleServantConfConponent_o *)&v15->fields, SkillIdList, v16, v17, v18, v19, v20, v21),
        v22 = *p_skillData,
        SkillIdList = (System_Int32_array **)((__int64 (__fastcall *)(UserServantEntity_o *, void *))usrSvtData->klass->vtable._6_getSkillLevelList.method)(
                                               usrSvtData,
                                               usrSvtData->klass[1]._1.image),
        !v22) )
  {
    sub_B2C434(SkillIdList, v14);
  }
  v22->fields.svtSkillLvList = (struct System_Int32_array *)SkillIdList;
  sub_B2C2F8((BattleServantConfConponent_o *)&v22->fields.svtSkillLvList, SkillIdList, v23, v24, v25, v26, v27, v28);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  UILabel_o *selectSkillHelpLb; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  UIWidget_o *v17; // x20
  int v18; // s0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  int size; // w20
  unsigned int v24; // w21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  int v26; // w20
  unsigned int v27; // w21

  if ( (byte_4186D58 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_8841/*"MSG_PRESELECT_BASE_SVT"*/, v7);
    sub_B2C35C(&StringLiteral_8843/*"MSG_SKILL_SELECT"*/, v8);
    sub_B2C35C(&StringLiteral_9272/*"NEED_QP_INFO"*/, v9);
    byte_4186D58 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8841/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  SkillCombineControl__SetHaveQpInfo(this, v13);
  selectSkillHelpLb = this->fields.selectSkillHelpLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MSG_SKILL_SELECT"*/, 0LL);
  if ( !selectSkillHelpLb )
    goto LABEL_32;
  UILabel__set_text(selectSkillHelpLb, gameObject, 0LL);
  needQpLb = this->fields.needQpLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9272/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_32;
  UILabel__set_text(needQpLb, gameObject, 0LL);
  this->fields.spendQpVal = 0;
  qpLb = this->fields.qpLb;
  gameObject = System_Int32__ToString((int)this + 228, 0LL);
  if ( !qpLb )
    goto LABEL_32;
  UILabel__set_text(qpLb, gameObject, 0LL);
  v17 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
  if ( !v17 )
    goto LABEL_32;
  UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v18, 0LL);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_32;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v24 = 0;
    do
    {
      if ( skillInfoList->fields._size <= v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      gameObject = (System_String_o *)skillInfoList->fields._items->m_Items[v24];
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( (int)++v24 >= size )
        goto LABEL_24;
      skillInfoList = this->fields.skillInfoList;
    }
    while ( skillInfoList );
LABEL_32:
    sub_B2C434(gameObject, v12);
  }
LABEL_24:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_32;
  v26 = itemInfoList->fields._size;
  if ( v26 >= 1 )
  {
    v27 = 0;
    do
    {
      if ( itemInfoList->fields._size <= v27 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      gameObject = (System_String_o *)itemInfoList->fields._items->m_Items[v27];
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( (int)++v27 >= v26 )
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
  __int64 v9; // x1
  void *helpBtn; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  MenuListControl_o *v32; // x0
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4186D57 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_17149/*"buttontxt_synthesis"*/, v8);
    byte_4186D57 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  EventTutorialMaster__CheckTutorial(0, 37, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  SkillCombineControl__InitDispCombineInfo(this, v11);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v12);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17149/*"buttontxt_synthesis"*/, 0LL);
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
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v15, v16, v17, v18, v19, v20);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_30:
    sub_B2C434(helpBtn, v9);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v29 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v29 && v29->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v33,
      v29,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v30 )
        break;
      if ( !v33.fields.current )
        sub_B2C434(v30, v31);
      if ( HIDWORD(v33.fields.current[1].klass) == 8 )
      {
        v32 = this->fields.menuListCtr;
        if ( !v32 )
          sub_B2C434(0LL, v31);
        MenuListControl__setBannerIcon(
          v32,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v33.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v33,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4186D61 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3335/*"CONFIRM_TITLE_SKILL_COMBINE"*/, v3);
    byte_4186D61 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3335/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B2C434(v4, v5);
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
  System_Int32_array **TexturePrefab_25402508; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4186D5B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (SkillCombineControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4186D5B = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
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
    TexturePrefab_25402508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25402508(
                                                      v4->fields.charaGraphBase,
                                                      usrSvtData,
                                                      v15,
                                                      10,
                                                      0LL,
                                                      0,
                                                      0LL);
    v4->fields.charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_25402508;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v4->fields.charaGraph,
      TexturePrefab_25402508,
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
    sub_B2C434(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_35719956((UICharaGraphTexture_o *)this, usrSvtData, v15, 0LL, 0, 0LL);
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
  __int64 v16; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  const MethodInfo *v18; // x2
  SvtUseSkillData_o *SvtSkillData; // x0
  __int64 v20; // x21
  __int64 v21; // x22
  SvtUseSkillData_o *v22; // x20
  int32_t v23; // w0
  UnityEngine_GameObject_o *v24; // x2
  const MethodInfo *v25; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4186D5A & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtEn);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_4186D5A = 1;
  }
  if ( usrSvtEn )
  {
    v8 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v8;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v26 = v27;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v26, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v9;
    sub_B2C2F8(
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
      sub_B2C434(preSelectBaseLb, v16);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    SvtSkillData = SkillCombineControl__GetSvtSkillData(this, usrSvtEn, v18);
    v21 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    v22 = SvtSkillData;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v28.fields.currentCryptoKey = v21;
    *(_QWORD *)&v28.fields.fakeValue = v20;
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
    SkillCombineControl__SetCombineSkillList(this, v22, v24, v23, v25);
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
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v23; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x2
  unsigned __int64 v32; // x24
  struct System_Int32_array *v33; // x8
  int32_t v34; // w25
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x19
  int32_t v37; // w22
  ServantSkillInfoIconComponent_o *v38; // x26
  SkillEntity_o *Entity; // x0
  const MethodInfo *v40; // x1
  SkillEntity_o *v41; // x19
  int32_t IconId; // w23
  const MethodInfo *v43; // x1
  System_String_o *Name; // x0
  int maxLv; // w28
  System_String_o *v46; // x19
  int32_t v47; // w19
  SkillCombineControl_o *v48; // x21
  int32_t skillRecord; // w28
  int32_t v50; // w22
  struct UserServantEntity_o *baseUserServantEntity; // x8
  Il2CppObject *v52; // x20
  __int64 v53; // x21
  __int64 v54; // x27
  int32_t baseSvtId; // w21
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x27
  __int64 v57; // x0
  SvtUseSkillData_o *v58; // [xsp+20h] [xbp-90h]
  SkillCombineControl_o **p_targetList; // [xsp+28h] [xbp-88h]
  signed __int64 v61; // [xsp+38h] [xbp-78h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+40h] [xbp-70h]
  int32_t skillMaxLv; // [xsp+4Ch] [xbp-64h]
  System_String_o *skillName; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  v8 = skillData;
  v9 = this;
  if ( (byte_4186D5D & 1) == 0 )
  {
    sub_B2C35C(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, skillData);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v15);
    sub_B2C35C(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_SkillCombineControl_OnClickInfo__, v19);
    this = (SkillCombineControl_o *)sub_B2C35C(&StringLiteral_747/*"-"*/, v20);
    byte_4186D5D = 1;
  }
  if ( !v8 )
    goto LABEL_35;
  svtUseSkillIdList = (System_Int32_array **)v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_B2C2F8(
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
  v23 = *(_QWORD *)&useSkillIdList->max_length;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v24;
  p_targetList = (SkillCombineControl_o **)&v9->fields.targetList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v9->fields.targetList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( (int)v23 >= 1 )
  {
    v61 = (int)v23;
    v32 = 0LL;
    v58 = v8;
    while ( 1 )
    {
      v33 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v32 >= v33->max_length )
        goto LABEL_36;
      v34 = v33->m_Items[v32 + 1];
      if ( v34 <= 0 )
      {
        ++v32;
      }
      else
      {
        svtSkillLvList = v8->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v32 >= svtSkillLvList->max_length )
        {
LABEL_36:
          v57 = sub_B2C460(this);
          sub_B2C400(v57, 0LL);
        }
        skillInfoList = v9->fields.skillInfoList;
        if ( !skillInfoList )
          break;
        v37 = svtSkillLvList->m_Items[v32 + 1];
        if ( v32 >= (unsigned int)skillInfoList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v38 = skillInfoList->fields._items->m_Items[v32];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    v34,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v41 = Entity;
          IconId = SkillEntity__GetIconId(Entity, v40);
          Name = SkillEntity__getName(v41, v43);
          maxLv = v41->fields.maxLv;
          v46 = Name;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          v46 = (System_String_o *)StringLiteral_747/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        skillMaxLv = maxLv;
        skillName = v46;
        v47 = v37;
        this = (SkillCombineControl_o *)ServantSkillMaster__getEntityFromSkillId(
                                          (ServantSkillMaster_o *)this,
                                          svtId,
                                          (int)v32 + 1,
                                          v34,
                                          0LL);
        if ( this )
        {
          v48 = this;
          this = (SkillCombineControl_o *)ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)this, 0LL);
          skillRecord = HIDWORD(v48->fields.exeCombineDlg);
          v50 = (int)this;
        }
        else
        {
          v50 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v9->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v52 = (Il2CppObject *)v9;
        v54 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v53 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v65.fields.currentCryptoKey = v54;
        *(_QWORD *)&v65.fields.fakeValue = v53;
        baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v65, 0LL);
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_B2C42C(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(callback, v52, Method_SkillCombineControl_OnClickInfo__, 0LL);
        if ( !v38 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          v38,
          v32,
          v34,
          v47,
          skillMaxLv,
          skillName,
          IconId,
          v50,
          skillRecord,
          baseSvtId,
          callback,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
        v9 = (SkillCombineControl_o *)v52;
        v8 = v58;
        ++v32;
      }
      if ( (__int64)v32 >= v61 )
        goto LABEL_34;
    }
LABEL_35:
    sub_B2C434(this, skillData);
  }
LABEL_34:
  SkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v31);
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

  if ( (byte_4186D60 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4186D60 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_B2C434(combineBtnBg, method);
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
  __int64 v4; // x1
  int32_t *p_haveQpVal; // x19
  UILabel_o *v6; // x20

  if ( (byte_4186D59 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, method);
    byte_4186D59 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v6 = (UILabel_o *)*((_QWORD *)p_haveQpVal - 10),
        SelfUserGame = System_Int32__ToString_38381416((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL),
        !v6) )
  {
    sub_B2C434(SelfUserGame, v4);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x23
  __int64 v8; // x21
  int size; // w8
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v11; // x0

  v4 = this;
  if ( (byte_4186D5E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, *(_QWORD *)&idx);
    this = (SkillCombineControl_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__,
                                      v5);
    byte_4186D5E = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList
      || (this = (SkillCombineControl_o *)v4->fields.selectSkillInfo) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (targetList = v4->fields.targetList) == 0LL) )
    {
LABEL_15:
      sub_B2C434(this, *(_QWORD *)&idx);
    }
    v8 = 0LL;
    while ( 1 )
    {
      size = targetList->fields._size;
      if ( (int)v8 >= size )
        break;
      if ( size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
        {
          v11 = sub_B2C460(this);
          sub_B2C400(v11, 0LL);
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
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v10; // x21
  float v11; // s4
  float v12; // s5
  float v13; // s6
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4186D62 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_7283/*"INFO_MSG_SKILLUP"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4186D62 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_13;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v15.fields.g = 0.87891;
  v15.fields.b = 0.98828;
  v10 = (UIWidget_o *)Component_WebViewObject;
  v15.fields.r = 0.0;
  *(_QWORD *)&v14.fields.r = 0LL;
  *(_QWORD *)&v14.fields.b = 0LL;
  UnityEngine_Color___ctor_40633184(v15, v11, v12, v13, (const MethodInfo *)&v14);
  if ( !v10 )
    goto LABEL_13;
  UIWidget__set_color(v10, v14, 0LL);
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
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7283/*"INFO_MSG_SKILLUP"*/, 0LL);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_13:
    sub_B2C434(detailInfoLb, *(_QWORD *)&state);
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
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
  System_String_o *v49; // x21
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x25
  __int64 v52; // x27
  __int64 v53; // x28
  WarEntity_o *v54; // x25
  SkillCombineControl_o *v55; // x28
  int *p_spendQpVal; // x25
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  float v58; // s0
  double v59; // d0
  _BOOL8 v60; // x0
  __int64 v61; // x1
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
  SetLevelUpData_o *v86; // x26
  SkillCombineControl_o **p_lvUpData; // x24
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct SetLevelUpData_o *lvUpData; // x8
  System_Int32_array **v101; // x1
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  UIWidget_o *v114; // x20
  int v115; // s0
  __int64 v119; // x0
  int v120; // [xsp+Ch] [xbp-B4h]
  UIWidget_o *v121; // [xsp+10h] [xbp-B0h]
  struct UserServantEntity_o *v122; // [xsp+18h] [xbp-A8h]
  int32_t v123; // [xsp+20h] [xbp-A0h]
  int32_t v124; // [xsp+24h] [xbp-9Ch]
  MethodInfo methoda; // [xsp+28h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  UnityEngine_Color_o v127; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v128; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4186D5F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&idx);
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineSkillMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&SetLevelUpData_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_5763/*"EXE_SUMMON_COMBINE_TXT"*/, v22);
    sub_B2C35C(&StringLiteral_17149/*"buttontxt_synthesis"*/, v23);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v24);
    sub_B2C35C(&StringLiteral_12214/*"SHORT_ITEM_INFO_MSG"*/, v25);
    sub_B2C35C(&StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, v26);
    sub_B2C35C(&StringLiteral_1/*""*/, v27);
    sub_B2C35C(&StringLiteral_17147/*"buttontxt_notsynthesis"*/, v28);
    this = (SkillCombineControl_o *)sub_B2C35C(&StringLiteral_953/*"0"*/, v29);
    byte_4186D5F = 1;
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
    v119 = sub_B2C460(this);
    sub_B2C400(v119, 0LL);
  }
  v33 = svtUseSkillIdList->m_Items[idx + 1];
  if ( v33 >= 1 )
  {
    v34 = svtSkillLvList->m_Items[idx + 1];
    this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !this )
      goto LABEL_97;
    Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                v33,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
    this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v127.fields.g = 0.87891;
    v127.fields.b = 0.98828;
    v44 = (UIWidget_o *)Component_WebViewObject;
    v127.fields.r = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_40633184(v127, v45, v46, v47, &methoda);
    if ( !v44 )
      goto LABEL_97;
    *(_QWORD *)&v128.fields.r = methoda.methodPointer;
    *(_QWORD *)&v128.fields.b = methoda.invoker_method;
    UIWidget__set_color(v44, v128, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"EXE_SUMMON_COMBINE_TXT"*/, 0LL);
    if ( v34 < maxLv )
    {
      v49 = v48;
      this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17149/*"buttontxt_synthesis"*/, 0LL);
        this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
        if ( this )
        {
          ((void (__fastcall *)(SkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
            this,
            this->klass[2]._1.name);
          this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            *(_QWORD *)&methoda.token = v49;
            v122 = (struct UserServantEntity_o *)Name;
            v123 = v33;
            this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
            baseUserServantEntity = v4->fields.baseUserServantEntity;
            if ( baseUserServantEntity )
            {
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
              v53 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
              v52 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v126.fields.currentCryptoKey = v53;
              *(_QWORD *)&v126.fields.fakeValue = v52;
              this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                v126,
                                                0LL);
              if ( v51 )
              {
                v54 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v51,
                        (int32_t)this,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineSkillMaster___);
                  if ( v54 )
                  {
                    if ( this )
                    {
                      this = (SkillCombineControl_o *)CombineSkillMaster__GetEntity(
                                                        (CombineSkillMaster_o *)this,
                                                        (int32_t)v54->fields.coordinates,
                                                        v34,
                                                        0LL);
                      if ( this )
                      {
                        v55 = this;
                        v4->fields.spendQpVal = (int32_t)this->fields.combineRootComponent;
                        p_spendQpVal = &v4->fields.spendQpVal;
                        combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.combineEventList;
                        if ( combineEventList && combineEventList->fields._size >= 1 )
                        {
                          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
                            combineEventList,
                            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          methoda.parameters = methoda.name;
                          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
                          while ( 1 )
                          {
                            v60 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
                                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v60 )
                              break;
                            if ( !methoda.parameters )
                              sub_B2C434(v60, v61);
                            if ( *((_DWORD *)methoda.parameters + 5) == 8 )
                            {
                              v58 = *((float *)methoda.parameters + 14) * (float)*p_spendQpVal;
                              if ( v58 == INFINITY )
                                v59 = -INFINITY;
                              else
                                v59 = v58;
                              *p_spendQpVal = (int)v59;
                            }
                          }
                          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
                            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
                        }
                        qpLb = v4->fields.qpLb;
                        this = (SkillCombineControl_o *)System_Int32__ToString_38381416(
                                                          (int)v4 + 228,
                                                          (System_String_o *)StringLiteral_9266/*"N0"*/,
                                                          0LL);
                        if ( qpLb )
                        {
                          v121 = v44;
                          UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
                          v63 = *(struct MenuListControl_o **)&v55->fields.type;
                          if ( v63 )
                          {
                            v64 = v55->fields.baseUserServantEntity;
                            v120 = v34 + 1;
                            v65 = 0LL;
                            v124 = v34;
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
                                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
                                UIWidget__set_color(v121, white, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, 0LL);
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
                                v130 = UnityEngine_Color__get_white(0LL);
                                UIWidget__set_color(v121, v130, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
                                v4->fields._IsExeCombine_k__BackingField = 0;
                              }
                              SkillCombineControl__SetExeBtnState(v4, v76);
                              this = (SkillCombineControl_o *)v4->fields.detailInfoLb;
                              if ( this )
                              {
                                UILabel__set_text((UILabel_o *)this, v85, 0LL);
                                v86 = (SetLevelUpData_o *)sub_B2C42C(SetLevelUpData_TypeInfo);
                                SetLevelUpData___ctor(v86, 0LL);
                                p_lvUpData = (SkillCombineControl_o **)&v4->fields.lvUpData;
                                v4->fields.lvUpData = v86;
                                sub_B2C2F8(
                                  (BattleServantConfConponent_o *)&v4->fields.lvUpData,
                                  (System_Int32_array **)v86,
                                  v88,
                                  v89,
                                  v90,
                                  v91,
                                  v92,
                                  v93);
                                lvUpData = v4->fields.lvUpData;
                                if ( lvUpData )
                                {
                                  lvUpData->fields.currentId = v123;
                                  if ( *p_lvUpData )
                                  {
                                    *((_DWORD *)&(*p_lvUpData)->fields.BaseMonoBehaviour_Fields + 1) = idx + 1;
                                    if ( *p_lvUpData )
                                    {
                                      LODWORD((*p_lvUpData)->fields.combineRootComponent) = idx;
                                      this = *p_lvUpData;
                                      if ( *p_lvUpData )
                                      {
                                        v101 = (System_Int32_array **)StringLiteral_1/*""*/;
                                        *(_QWORD *)&this->fields.type = StringLiteral_1/*""*/;
                                        sub_B2C2F8(
                                          (BattleServantConfConponent_o *)&this->fields.type,
                                          v101,
                                          v94,
                                          v95,
                                          v96,
                                          v97,
                                          v98,
                                          v99);
                                        this = *p_lvUpData;
                                        if ( *p_lvUpData )
                                        {
                                          this->fields.baseUserServantEntity = v122;
                                          sub_B2C2F8(
                                            (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
                                            (System_Int32_array **)v122,
                                            v102,
                                            v103,
                                            v104,
                                            v105,
                                            v106,
                                            v107);
                                          if ( *p_lvUpData )
                                          {
                                            LODWORD((*p_lvUpData)->fields.exeCombineDlg) = v124;
                                            if ( *p_lvUpData )
                                            {
                                              HIDWORD((*p_lvUpData)->fields.exeCombineDlg) = v120;
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
                                                    sub_B2C2F8(
                                                      (BattleServantConfConponent_o *)&this->fields.menuListCtr,
                                                      (System_Int32_array **)v63,
                                                      v108,
                                                      v109,
                                                      v110,
                                                      v111,
                                                      v112,
                                                      v113);
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
      sub_B2C434(this, *(_QWORD *)&idx);
    }
    v4->fields._IsExeCombine_k__BackingField = 0;
    SkillCombineControl__SetExeBtnState(v4, *(const MethodInfo **)&idx);
    this = (SkillCombineControl_o *)v4->fields.qpLb;
    if ( !this )
      goto LABEL_97;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_953/*"0"*/, 0LL);
    v114 = (UIWidget_o *)v4->fields.qpLb;
    *(UnityEngine_Color_o *)&v115 = UnityEngine_Color__get_white(0LL);
    if ( !v114 )
      goto LABEL_97;
    UIWidget__set_color(v114, *(UnityEngine_Color_o *)&v115, 0LL);
    this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_97;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17147/*"buttontxt_notsynthesis"*/, 0LL);
    this = (SkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_97;
    ((void (__fastcall *)(SkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
  }
}