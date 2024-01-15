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
  WarEntity_o *Entity; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  WarEntity_o *v11; // x20
  unsigned __int64 v12; // x22
  struct System_String_o **p_name; // x23
  int32_t v14; // w21
  int v15; // w28
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F91F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, resData);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F91F7 = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, 0LL),
        Entity = (WarEntity_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))resData->klass->vtable._6_getSkillLevelList.method)(
                                  resData,
                                  resData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_18:
    sub_B170D4();
  }
  v10 = *(_QWORD *)&SkillIdList->max_length;
  if ( (int)v10 < 1 )
    return 1;
  v11 = Entity;
  v12 = 0LL;
  p_name = &Entity->fields.name;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
      goto LABEL_19;
    if ( !v11 )
      goto LABEL_18;
    if ( v12 >= LODWORD(v11->fields.age) )
    {
LABEL_19:
      sub_B17100(Entity, v8, v9);
      sub_B170A0();
    }
    v14 = SkillIdList->m_Items[v12 + 1];
    if ( v14 >= 1 )
    {
      v15 = *((_DWORD *)p_name + v12);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v14,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_18;
      if ( v15 < SLODWORD(Entity->fields.longName) )
        return 0;
    }
    LODWORD(v10) = SkillIdList->max_length;
    if ( (__int64)++v12 >= (int)v10 )
      return 1;
  }
}


SvtUseSkillData_o *__fastcall SkillCombineControl__GetSvtSkillData(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  SvtUseSkillData_o *v7; // x21
  struct SvtUseSkillData_o **p_skillData; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct SvtUseSkillData_o *v15; // x21
  System_Int32_array **SkillIdList; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct SvtUseSkillData_o *v23; // x21
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40F91F0 & 1) == 0 )
  {
    sub_B16FFC(&SvtUseSkillData_TypeInfo, usrSvtData);
    byte_40F91F0 = 1;
  }
  v7 = (SvtUseSkillData_o *)sub_B170CC(SvtUseSkillData_TypeInfo, usrSvtData, method, v3, v4);
  SvtUseSkillData___ctor(v7, 0LL);
  this->fields.skillData = v7;
  p_skillData = &this->fields.skillData;
  sub_B16F98((BattleServantConfConponent_o *)p_skillData, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  if ( !usrSvtData
    || (v15 = *p_skillData,
        SkillIdList = (System_Int32_array **)UserServantEntity__getSkillIdList(usrSvtData, -1, -1, 1, 0LL),
        !v15)
    || (v15->fields.svtUseSkillIdList = (struct System_Int32_array *)SkillIdList,
        sub_B16F98((BattleServantConfConponent_o *)&v15->fields, SkillIdList, v17, v18, v19, v20, v21, v22),
        v23 = *p_skillData,
        v24 = (System_Int32_array **)((__int64 (__fastcall *)(UserServantEntity_o *, void *))usrSvtData->klass->vtable._6_getSkillLevelList.method)(
                                       usrSvtData,
                                       usrSvtData->klass[1]._1.image),
        !v23) )
  {
    sub_B170D4();
  }
  v23->fields.svtSkillLvList = (struct System_Int32_array *)v24;
  sub_B16F98((BattleServantConfConponent_o *)&v23->fields.svtSkillLvList, v24, v25, v26, v27, v28, v29, v30);
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
  System_String_o *v11; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  UnityEngine_GameObject_o *selectSkillInfo; // x0
  const MethodInfo *v16; // x1
  UILabel_o *selectSkillHelpLb; // x20
  System_String_o *v18; // x0
  UILabel_o *needQpLb; // x20
  System_String_o *v20; // x0
  UILabel_o *qpLb; // x20
  System_String_o *v22; // x0
  UIWidget_o *v23; // x20
  int v24; // s0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  int size; // w20
  unsigned int v30; // w21
  ServantSkillInfoIconComponent_o *v31; // x0
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  int v33; // w20
  unsigned int v34; // w21
  LimitCntUpItemComponent_o *v35; // x0

  if ( (byte_40F91EC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_8812/*"MSG_PRESELECT_BASE_SVT"*/, v7);
    sub_B16FFC(&StringLiteral_8814/*"MSG_SKILL_SELECT"*/, v8);
    sub_B16FFC(&StringLiteral_9242/*"NEED_QP_INFO"*/, v9);
    byte_40F91EC = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8812/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_32;
  UILabel__set_text(preSelectBaseLb, v11, 0LL);
  v12 = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !v12 )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
  selectSkillInfo = this->fields.selectSkillInfo;
  if ( !selectSkillInfo )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(selectSkillInfo, 0, 0LL);
  SkillCombineControl__SetHaveQpInfo(this, v16);
  selectSkillHelpLb = this->fields.selectSkillHelpLb;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8814/*"MSG_SKILL_SELECT"*/, 0LL);
  if ( !selectSkillHelpLb )
    goto LABEL_32;
  UILabel__set_text(selectSkillHelpLb, v18, 0LL);
  needQpLb = this->fields.needQpLb;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9242/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_32;
  UILabel__set_text(needQpLb, v20, 0LL);
  this->fields.spendQpVal = 0;
  qpLb = this->fields.qpLb;
  v22 = System_Int32__ToString((int)this + 228, 0LL);
  if ( !qpLb )
    goto LABEL_32;
  UILabel__set_text(qpLb, v22, 0LL);
  v23 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
  if ( !v23 )
    goto LABEL_32;
  UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_32;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v30 = 0;
    do
    {
      if ( skillInfoList->fields._size <= v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v31 = skillInfoList->fields._items->m_Items[v30];
      if ( !v31 )
        break;
      ServantSkillInfoIconComponent__Clear(v31, 0LL);
      if ( (int)++v30 >= size )
        goto LABEL_24;
      skillInfoList = this->fields.skillInfoList;
    }
    while ( skillInfoList );
LABEL_32:
    sub_B170D4();
  }
LABEL_24:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_32;
  v33 = itemInfoList->fields._size;
  if ( v33 >= 1 )
  {
    v34 = 0;
    do
    {
      if ( itemInfoList->fields._size <= v34 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v35 = itemInfoList->fields._items->m_Items[v34];
      if ( !v35 )
        break;
      LimitCntUpItemComponent__enableDispItemInfo(v35, 0LL);
      if ( (int)++v34 >= v33 )
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
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UISprite_o *combineTxtImg; // x0
  struct UISprite_o *v13; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Component_o *eventNoticeImg; // x0
  UnityEngine_GameObject_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v34; // x0
  MenuListControl_o *v35; // x0
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F91EB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_17083/*"buttontxt_synthesis"*/, v8);
    byte_40F91EB = 1;
  }
  memset(&v36, 0, sizeof(v36));
  EventTutorialMaster__CheckTutorial(0, 37, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  SkillCombineControl__InitDispCombineInfo(this, v10);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v11);
  combineTxtImg = this->fields.combineTxtImg;
  if ( !combineTxtImg )
    goto LABEL_30;
  UISprite__set_spriteName(combineTxtImg, (System_String_o *)StringLiteral_17083/*"buttontxt_synthesis"*/, 0LL);
  v13 = this->fields.combineTxtImg;
  if ( !v13 )
    goto LABEL_30;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v13->klass->vtable._33_MakePixelPerfect.method)(
    v13,
    v13->klass->vtable._34_get_minWidth.methodPtr);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_30;
  this->fields.userQP = SelfUserGame->fields.qp;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.charaGraph;
    if ( !v16 )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v18, v19, v20, v21, v22, v23);
  }
  eventNoticeImg = (UnityEngine_Component_o *)this->fields.eventNoticeImg;
  if ( !eventNoticeImg
    || (v25 = UnityEngine_Component__get_gameObject(eventNoticeImg, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v25, 0, 0LL), (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_30:
    sub_B170D4();
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v34 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v34 && v34->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      v34,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
    {
      if ( !v36.fields.current )
        sub_B170D4();
      if ( HIDWORD(v36.fields.current[1].klass) == 8 )
      {
        v35 = this->fields.menuListCtr;
        if ( !v35 )
          sub_B170D4();
        MenuListControl__setBannerIcon(
          v35,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v36.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0

  if ( (byte_40F91F5 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3326/*"CONFIRM_TITLE_SKILL_COMBINE"*/, v3);
    byte_40F91F5 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t CardImageLimitCount; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  ServantLimitImageMaster_o *v13; // x22
  int32_t v14; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v17; // w21
  UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26882832; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40F91EF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F91EF = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v12 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v12;
  *(_QWORD *)&v26.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
  if ( !v13 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v13,
                                 v14,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v17 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26882832 = CharaGraphManager__CreateTexturePrefab_26882832(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v17,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26882832;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26882832,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    return;
  }
  if ( !*p_charaGraph )
LABEL_16:
    sub_B170D4();
  UICharaGraphTexture__SetCharacter_35080076(*p_charaGraph, usrSvtData, v17, 0LL, 0, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v19; // x2
  SvtUseSkillData_o *SvtSkillData; // x0
  __int64 v21; // x21
  __int64 v22; // x22
  SvtUseSkillData_o *v23; // x20
  int32_t v24; // w0
  UnityEngine_GameObject_o *v25; // x2
  const MethodInfo *v26; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_40F91EE & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtEn);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_40F91EE = 1;
  }
  if ( usrSvtEn )
  {
    v8 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v28.fields.fakeValue = v8;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v27 = v28;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v27, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v9;
    sub_B16F98(
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
      || (gameObject = UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          (baseSelectInfoLb = this->fields.baseSelectInfoLb) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(baseSelectInfoLb, 0, 0LL);
    SvtSkillData = SkillCombineControl__GetSvtSkillData(this, usrSvtEn, v19);
    v22 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    v23 = SvtSkillData;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v29.fields.currentCryptoKey = v22;
    *(_QWORD *)&v29.fields.fakeValue = v21;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29, 0LL);
    SkillCombineControl__SetCombineSkillList(this, v23, v25, v24, v26);
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
  struct System_Int32_array *svtUseSkillIdList; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v27; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  unsigned __int64 v38; // x24
  struct System_Int32_array *v39; // x8
  int32_t v40; // w25
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x19
  int32_t v43; // w22
  ServantSkillInfoIconComponent_o *v44; // x26
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x0
  const MethodInfo *v48; // x1
  SkillEntity_o *v49; // x19
  int32_t IconId; // w23
  const MethodInfo *v51; // x1
  System_String_o *Name; // x0
  int maxLv; // w28
  System_String_o *v54; // x19
  WebViewManager_o *v55; // x0
  ServantSkillMaster_o *v56; // x0
  int32_t v57; // w19
  ServantSkillEntity_o *EntityFromSkillId; // x0
  ServantSkillEntity_o *v59; // x21
  int32_t StrengthStatus; // w0
  int32_t skillRecord; // w28
  int32_t v62; // w22
  struct UserServantEntity_o *baseUserServantEntity; // x8
  Il2CppObject *v64; // x20
  __int64 v65; // x21
  __int64 v66; // x27
  int32_t baseSvtId; // w21
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x27
  SvtUseSkillData_o *v73; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_targetList; // [xsp+28h] [xbp-88h]
  signed __int64 v76; // [xsp+38h] [xbp-78h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+40h] [xbp-70h]
  int32_t skillMaxLv; // [xsp+4Ch] [xbp-64h]
  System_String_o *skillName; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  v8 = skillData;
  if ( (byte_40F91F1 & 1) == 0 )
  {
    sub_B16FFC(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, skillData);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_SkillCombineControl_OnClickInfo__, v19);
    sub_B16FFC(&StringLiteral_746/*"-"*/, v20);
    byte_40F91F1 = 1;
  }
  if ( !v8 )
    goto LABEL_35;
  svtUseSkillIdList = v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &this->fields.useSkillIdList;
  this->fields.useSkillIdList = svtUseSkillIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useSkillIdList,
    (System_Int32_array **)svtUseSkillIdList,
    (System_String_array **)targetGo,
    *(System_String_array ***)&svtId,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  useSkillIdList = this->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_35;
  v27 = *(_QWORD *)&useSkillIdList->max_length;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  this->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v28;
  p_targetList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.targetList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( (int)v27 >= 1 )
  {
    v76 = (int)v27;
    v38 = 0LL;
    v73 = v8;
    while ( 1 )
    {
      v39 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v38 >= v39->max_length )
        goto LABEL_36;
      v40 = v39->m_Items[v38 + 1];
      if ( v40 <= 0 )
      {
        ++v38;
      }
      else
      {
        svtSkillLvList = v8->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v38 >= svtSkillLvList->max_length )
        {
LABEL_36:
          sub_B17100(v35, v36, v37);
          sub_B170A0();
        }
        skillInfoList = this->fields.skillInfoList;
        if ( !skillInfoList )
          break;
        v43 = svtSkillLvList->m_Items[v38 + 1];
        if ( v38 >= (unsigned int)skillInfoList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v44 = skillInfoList->fields._items->m_Items[v38];
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v40,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v49 = Entity;
          IconId = SkillEntity__GetIconId(Entity, v48);
          Name = SkillEntity__getName(v49, v51);
          maxLv = v49->fields.maxLv;
          v54 = Name;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          v54 = (System_String_o *)StringLiteral_746/*"-"*/;
        }
        v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v55 )
          break;
        v56 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v55,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !v56 )
          break;
        skillMaxLv = maxLv;
        skillName = v54;
        v57 = v43;
        EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v56, svtId, (int)v38 + 1, v40, 0LL);
        if ( EntityFromSkillId )
        {
          v59 = EntityFromSkillId;
          StrengthStatus = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
          skillRecord = v59->fields.skillNum;
          v62 = StrengthStatus;
        }
        else
        {
          v62 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = this->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v64 = (Il2CppObject *)this;
        v66 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v65 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v80.fields.currentCryptoKey = v66;
        *(_QWORD *)&v80.fields.fakeValue = v65;
        baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v80, 0LL);
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_B170CC(
                                                                      ServantSkillInfoIconComponent_ClickDelegate_TypeInfo,
                                                                      v68,
                                                                      v69,
                                                                      v70,
                                                                      v71);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(callback, v64, Method_SkillCombineControl_OnClickInfo__, 0LL);
        if ( !v44 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          v44,
          v38,
          v40,
          v57,
          skillMaxLv,
          skillName,
          IconId,
          v62,
          skillRecord,
          baseSvtId,
          callback,
          0LL);
        if ( !*p_targetList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_targetList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
        this = (SkillCombineControl_o *)v64;
        v8 = v73;
        ++v38;
      }
      if ( (__int64)v38 >= v76 )
        goto LABEL_34;
    }
LABEL_35:
    sub_B170D4();
  }
LABEL_34:
  SkillCombineControl__SetNeedItemInfo(this, this->fields.currentIdx, v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetExeBtnState(SkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v6; // x20
  WebViewObject_o *v7; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v10; // x19
  int v11; // s0
  int v15; // s0
  int v19; // s0
  int v23; // s0

  if ( (byte_40F91F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_40F91F4 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              combineBtnBg,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v6 = (UIWidget_o *)Component_WebViewObject;
  v7 = UnityEngine_Component__GetComponent_WebViewObject_(
         (UnityEngine_Component_o *)this->fields.combineTxtImg,
         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v10 = (UnityEngine_Behaviour_o *)v7;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v11, 0LL);
      *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
      if ( v6 )
      {
        UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v15, 0LL);
        if ( v10 )
        {
          UnityEngine_Behaviour__set_enabled(v10, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v10, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v19, 0LL);
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_gray(0LL);
  if ( !v6 )
    goto LABEL_14;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v23, 0LL);
  if ( !v10 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
}


void __fastcall SkillCombineControl__SetHaveQpInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  int32_t *p_haveQpVal; // x19
  UILabel_o *v5; // x20
  System_String_o *v6; // x0

  if ( (byte_40F91ED & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, method);
    byte_40F91ED = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = SelfUserGame->fields.qp,
        p_haveQpVal = &this->fields.haveQpVal,
        v5 = (UILabel_o *)*((_QWORD *)p_haveQpVal - 10),
        v6 = System_Int32__ToString_38275808((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL),
        !v5) )
  {
    sub_B170D4();
  }
  UILabel__set_text(v5, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetNeedItemInfo(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *selectSkillInfo; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x23
  __int64 v11; // x21
  int size; // w8
  struct System_Int32_array *useSkillIdList; // x8
  ServantSkillInfoIconComponent_o *v14; // x0

  if ( (byte_40F91F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    byte_40F91F2 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    if ( !this->fields.targetList
      || (selectSkillInfo = this->fields.selectSkillInfo) == 0LL
      || (UnityEngine_GameObject__SetActive(selectSkillInfo, 1, 0LL), (targetList = this->fields.targetList) == 0LL) )
    {
LABEL_15:
      sub_B170D4();
    }
    v11 = 0LL;
    while ( 1 )
    {
      size = targetList->fields._size;
      if ( (int)v11 >= size )
        break;
      if ( size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      useSkillIdList = this->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
        {
          sub_B17100(v7, v8, v9);
          sub_B170A0();
        }
        v14 = targetList->fields._items->m_Items[v11];
        if ( v14 )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            v14,
            useSkillIdList->m_Items[idx + 1] == v14->fields.currentSkillId,
            0LL);
          targetList = this->fields.targetList;
          ++v11;
          if ( targetList )
            continue;
        }
      }
      goto LABEL_15;
    }
    SkillCombineControl__SetSvtSkillCombineData(this, idx, v9);
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
  UILabel_o *v15; // x0
  UnityEngine_Color_o v16; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F91F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_7255/*"INFO_MSG_SKILLUP"*/, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F91F6 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_13;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v17.fields.g = 0.87891;
  v17.fields.b = 0.98828;
  v10 = (UIWidget_o *)Component_WebViewObject;
  v17.fields.r = 0.0;
  *(_QWORD *)&v16.fields.r = 0LL;
  *(_QWORD *)&v16.fields.b = 0LL;
  UnityEngine_Color___ctor_40666012(v17, v11, v12, v13, (const MethodInfo *)&v16);
  if ( !v10 )
    goto LABEL_13;
  UIWidget__set_color(v10, v16, 0LL);
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
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_7255/*"INFO_MSG_SKILLUP"*/, 0LL);
  }
  v15 = this->fields.detailInfoLb;
  if ( !v15 )
LABEL_13:
    sub_B170D4();
  UILabel__set_text(v15, v14, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x0
  const MethodInfo *v38; // x1
  int maxLv; // w25
  System_String_o *Name; // x27
  WebViewManager_o *v41; // x0
  SkillLvMaster_o *v42; // x0
  const MethodInfo *v43; // x3
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  __int64 v45; // x21
  int size; // w8
  LimitCntUpItemComponent_o *v47; // x0
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v50; // x22
  float v51; // s4
  float v52; // s5
  float v53; // s6
  System_String_o *v54; // x0
  const MethodInfo *v55; // x1
  System_String_o *v56; // x21
  UISprite_o *combineTxtImg; // x0
  struct UISprite_o *v58; // x0
  WebViewManager_o *v59; // x0
  WarQuestSelectionMaster_o *v60; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // x25
  __int64 v63; // x27
  __int64 v64; // x28
  int32_t v65; // w0
  WarEntity_o *v66; // x25
  WebViewManager_o *v67; // x0
  CombineSkillMaster_o *v68; // x0
  CombineSkillEntity_o *v69; // x0
  CombineSkillEntity_o *v70; // x28
  int *p_spendQpVal; // x25
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  float v73; // s0
  double v74; // d0
  UILabel_o *qpLb; // x27
  System_String_o *v76; // x0
  struct System_Int32_array *itemIds; // x27
  struct System_Int32_array *itemNums; // x21
  unsigned __int64 v79; // x26
  __int64 v80; // x22
  char v81; // w23
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v82; // x28
  LimitCntUpItemComponent_o *v83; // x28
  UIWidget_o *v85; // x28
  int v86; // s0
  const MethodInfo *v90; // x1
  int32_t haveQpVal; // w8
  int32_t spendQpVal; // w9
  System_String_o *v93; // x0
  UIWidget_o *v94; // x28
  int v95; // s0
  System_String_o *v99; // x26
  UILabel_o *v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  SetLevelUpData_o *v105; // x26
  struct SetLevelUpData_o **p_lvUpData; // x24
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  struct SetLevelUpData_o *lvUpData; // x8
  struct SetLevelUpData_o *v120; // x0
  System_Int32_array **v121; // x1
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  struct SetLevelUpData_o *v128; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  struct SetLevelUpData_o *v135; // x0
  UILabel_o *v136; // x0
  UIWidget_o *v137; // x20
  int v138; // s0
  UISprite_o *v142; // x0
  struct UISprite_o *v143; // x0
  int v144; // [xsp+Ch] [xbp-B4h]
  UIWidget_o *v145; // [xsp+10h] [xbp-B0h]
  System_Int32_array **v146; // [xsp+18h] [xbp-A8h]
  int32_t v147; // [xsp+20h] [xbp-A0h]
  int32_t v148; // [xsp+24h] [xbp-9Ch]
  MethodInfo methoda; // [xsp+28h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  UnityEngine_Color_o v151; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v154; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_40F91F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&idx);
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineSkillMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B16FFC(&SetLevelUpData_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_5746/*"EXE_SUMMON_COMBINE_TXT"*/, v22);
    sub_B16FFC(&StringLiteral_17083/*"buttontxt_synthesis"*/, v23);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v24);
    sub_B16FFC(&StringLiteral_12161/*"SHORT_ITEM_INFO_MSG"*/, v25);
    sub_B16FFC(&StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/, v26);
    sub_B16FFC(&StringLiteral_1/*""*/, v27);
    sub_B16FFC(&StringLiteral_17081/*"buttontxt_notsynthesis"*/, v28);
    this = (SkillCombineControl_o *)sub_B16FFC(&StringLiteral_951/*"0"*/, v29);
    byte_40F91F3 = 1;
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
    sub_B17100(this, *(_QWORD *)&idx, method);
    sub_B170A0();
  }
  v33 = svtUseSkillIdList->m_Items[idx + 1];
  if ( v33 >= 1 )
  {
    v34 = svtSkillLvList->m_Items[idx + 1];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_97;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_97;
    Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                v33,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( Entity )
    {
      maxLv = Entity->fields.maxLv;
      Name = SkillEntity__getName(Entity, v38);
    }
    else
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      maxLv = 10;
    }
    v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v41 )
      goto LABEL_97;
    v42 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v41,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !v42 )
      goto LABEL_97;
    SkillLvMaster__GetEntity(v42, v33, v34, v43);
    itemInfoList = v4->fields.itemInfoList;
    if ( !itemInfoList )
      goto LABEL_97;
    v45 = 0LL;
    while ( 1 )
    {
      size = itemInfoList->fields._size;
      if ( (int)v45 >= size )
        break;
      if ( size <= (unsigned int)v45 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v47 = itemInfoList->fields._items->m_Items[v45];
      if ( v47 )
      {
        LimitCntUpItemComponent__enableDispItemInfo(v47, 0LL);
        itemInfoList = v4->fields.itemInfoList;
        ++v45;
        if ( itemInfoList )
          continue;
      }
      goto LABEL_97;
    }
    detailInfoLb = (UnityEngine_Component_o *)v4->fields.detailInfoLb;
    if ( !detailInfoLb )
      goto LABEL_97;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                detailInfoLb,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v151.fields.g = 0.87891;
    v151.fields.b = 0.98828;
    v50 = (UIWidget_o *)Component_WebViewObject;
    v151.fields.r = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_40666012(v151, v51, v52, v53, &methoda);
    if ( !v50 )
      goto LABEL_97;
    *(_QWORD *)&v152.fields.r = methoda.methodPointer;
    *(_QWORD *)&v152.fields.b = methoda.invoker_method;
    UIWidget__set_color(v50, v152, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_5746/*"EXE_SUMMON_COMBINE_TXT"*/, 0LL);
    if ( v34 < maxLv )
    {
      v56 = v54;
      combineTxtImg = v4->fields.combineTxtImg;
      if ( combineTxtImg )
      {
        UISprite__set_spriteName(combineTxtImg, (System_String_o *)StringLiteral_17083/*"buttontxt_synthesis"*/, 0LL);
        v58 = v4->fields.combineTxtImg;
        if ( v58 )
        {
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v58->klass->vtable._33_MakePixelPerfect.method)(
            v58,
            v58->klass->vtable._34_get_minWidth.methodPtr);
          v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( v59 )
          {
            *(_QWORD *)&methoda.token = v56;
            v146 = (System_Int32_array **)Name;
            v147 = v33;
            v60 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)v59,
                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
            baseUserServantEntity = v4->fields.baseUserServantEntity;
            if ( baseUserServantEntity )
            {
              v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)v60;
              v64 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
              v63 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v150.fields.currentCryptoKey = v64;
              *(_QWORD *)&v150.fields.fakeValue = v63;
              v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v150, 0LL);
              if ( v62 )
              {
                v66 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v62,
                        v65,
                        (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v67 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( v67 )
                {
                  v68 = (CombineSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)v67,
                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
                  if ( v66 )
                  {
                    if ( v68 )
                    {
                      v69 = CombineSkillMaster__GetEntity(v68, (int32_t)v66->fields.coordinates, v34, 0LL);
                      if ( v69 )
                      {
                        v70 = v69;
                        v4->fields.spendQpVal = v69->fields.qp;
                        p_spendQpVal = &v4->fields.spendQpVal;
                        combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.combineEventList;
                        if ( combineEventList && combineEventList->fields._size >= 1 )
                        {
                          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
                            combineEventList,
                            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          methoda.parameters = methoda.name;
                          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
                          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
                                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
                          {
                            if ( !methoda.parameters )
                              sub_B170D4();
                            if ( *((_DWORD *)methoda.parameters + 5) == 8 )
                            {
                              v73 = *((float *)methoda.parameters + 14) * (float)*p_spendQpVal;
                              if ( v73 == INFINITY )
                                v74 = -INFINITY;
                              else
                                v74 = v73;
                              *p_spendQpVal = (int)v74;
                            }
                          }
                          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
                            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
                        }
                        qpLb = v4->fields.qpLb;
                        v76 = System_Int32__ToString_38275808((int)v4 + 228, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
                        if ( qpLb )
                        {
                          v145 = v50;
                          UILabel__set_text(qpLb, v76, 0LL);
                          itemIds = v70->fields.itemIds;
                          if ( itemIds )
                          {
                            itemNums = v70->fields.itemNums;
                            v144 = v34 + 1;
                            v79 = 0LL;
                            v148 = v34;
                            v80 = ((*(_QWORD *)&itemIds->max_length << 32) - 0x100000000LL) >> 32;
                            v81 = 1;
                            do
                            {
                              if ( (__int64)v79 <= v80 )
                              {
                                v82 = v4->fields.itemInfoList;
                                if ( !v82 )
                                  goto LABEL_97;
                                if ( v79 >= (unsigned int)v82->fields._size )
                                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                                if ( v79 >= itemIds->max_length )
                                  goto LABEL_98;
                                if ( !itemNums )
                                  goto LABEL_97;
                                if ( v79 >= itemNums->max_length )
                                  goto LABEL_98;
                                v83 = v82->fields._items->m_Items[v79];
                                if ( !v83 )
                                  goto LABEL_97;
                                LimitCntUpItemComponent__setLimitUpItemInfo(
                                  v83,
                                  v4->fields.userId,
                                  itemIds->m_Items[v79 + 1],
                                  itemNums->m_Items[v79 + 1],
                                  0LL);
                                v81 &= v83->fields.isItemNum;
                              }
                            }
                            while ( v79++ < 4 );
                            v85 = (UIWidget_o *)v4->fields.qpLb;
                            *(UnityEngine_Color_o *)&v86 = UnityEngine_Color__get_white(0LL);
                            if ( v85 )
                            {
                              UIWidget__set_color(v85, *(UnityEngine_Color_o *)&v86, 0LL);
                              haveQpVal = v4->fields.haveQpVal;
                              spendQpVal = v4->fields.spendQpVal;
                              v4->fields._IsExeCombine_k__BackingField = 1;
                              if ( haveQpVal < spendQpVal )
                              {
                                white = UnityEngine_Color__get_white(0LL);
                                UIWidget__set_color(v145, white, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/, 0LL);
                                v94 = (UIWidget_o *)v4->fields.qpLb;
                                *(_QWORD *)&methoda.token = v93;
                                *(UnityEngine_Color_o *)&v95 = UnityEngine_Color__get_red(0LL);
                                if ( !v94 )
                                  goto LABEL_97;
                                UIWidget__set_color(v94, *(UnityEngine_Color_o *)&v95, 0LL);
                                v4->fields._IsExeCombine_k__BackingField = 0;
                              }
                              v99 = *(System_String_o **)&methoda.token;
                              if ( (v81 & 1) == 0 )
                              {
                                v154 = UnityEngine_Color__get_white(0LL);
                                UIWidget__set_color(v145, v154, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12161/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
                                v4->fields._IsExeCombine_k__BackingField = 0;
                              }
                              SkillCombineControl__SetExeBtnState(v4, v90);
                              v100 = v4->fields.detailInfoLb;
                              if ( v100 )
                              {
                                UILabel__set_text(v100, v99, 0LL);
                                v105 = (SetLevelUpData_o *)sub_B170CC(SetLevelUpData_TypeInfo, v101, v102, v103, v104);
                                SetLevelUpData___ctor(v105, 0LL);
                                p_lvUpData = &v4->fields.lvUpData;
                                v4->fields.lvUpData = v105;
                                sub_B16F98(
                                  (BattleServantConfConponent_o *)&v4->fields.lvUpData,
                                  (System_Int32_array **)v105,
                                  v107,
                                  v108,
                                  v109,
                                  v110,
                                  v111,
                                  v112);
                                lvUpData = v4->fields.lvUpData;
                                if ( lvUpData )
                                {
                                  lvUpData->fields.currentId = v147;
                                  if ( *p_lvUpData )
                                  {
                                    (*p_lvUpData)->fields.currentIndex = idx + 1;
                                    if ( *p_lvUpData )
                                    {
                                      (*p_lvUpData)->fields.realIndex = idx;
                                      v120 = *p_lvUpData;
                                      if ( *p_lvUpData )
                                      {
                                        v121 = (System_Int32_array **)StringLiteral_1/*""*/;
                                        v120->fields.targetRuby = (struct System_String_o *)StringLiteral_1/*""*/;
                                        sub_B16F98(
                                          (BattleServantConfConponent_o *)&v120->fields.targetRuby,
                                          v121,
                                          v113,
                                          v114,
                                          v115,
                                          v116,
                                          v117,
                                          v118);
                                        v128 = *p_lvUpData;
                                        if ( *p_lvUpData )
                                        {
                                          v128->fields.targetName = (struct System_String_o *)v146;
                                          sub_B16F98(
                                            (BattleServantConfConponent_o *)&v128->fields.targetName,
                                            v146,
                                            v122,
                                            v123,
                                            v124,
                                            v125,
                                            v126,
                                            v127);
                                          if ( *p_lvUpData )
                                          {
                                            (*p_lvUpData)->fields.currentLv = v148;
                                            if ( *p_lvUpData )
                                            {
                                              (*p_lvUpData)->fields.nextLv = v144;
                                              if ( *p_lvUpData )
                                              {
                                                (*p_lvUpData)->fields.spendQp = *p_spendQpVal;
                                                if ( *p_lvUpData )
                                                {
                                                  (*p_lvUpData)->fields.haveQp = v4->fields.userQP;
                                                  v135 = v4->fields.lvUpData;
                                                  if ( v135 )
                                                  {
                                                    v135->fields.combineItemIds = itemIds;
                                                    sub_B16F98(
                                                      (BattleServantConfConponent_o *)&v135->fields.combineItemIds,
                                                      (System_Int32_array **)itemIds,
                                                      v129,
                                                      v130,
                                                      v131,
                                                      v132,
                                                      v133,
                                                      v134);
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
      sub_B170D4();
    }
    v4->fields._IsExeCombine_k__BackingField = 0;
    SkillCombineControl__SetExeBtnState(v4, v55);
    v136 = v4->fields.qpLb;
    if ( !v136 )
      goto LABEL_97;
    UILabel__set_text(v136, (System_String_o *)StringLiteral_951/*"0"*/, 0LL);
    v137 = (UIWidget_o *)v4->fields.qpLb;
    *(UnityEngine_Color_o *)&v138 = UnityEngine_Color__get_white(0LL);
    if ( !v137 )
      goto LABEL_97;
    UIWidget__set_color(v137, *(UnityEngine_Color_o *)&v138, 0LL);
    v142 = v4->fields.combineTxtImg;
    if ( !v142 )
      goto LABEL_97;
    UISprite__set_spriteName(v142, (System_String_o *)StringLiteral_17081/*"buttontxt_notsynthesis"*/, 0LL);
    v143 = v4->fields.combineTxtImg;
    if ( !v143 )
      goto LABEL_97;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v143->klass->vtable._33_MakePixelPerfect.method)(
      v143,
      v143->klass->vtable._34_get_minWidth.methodPtr);
  }
}