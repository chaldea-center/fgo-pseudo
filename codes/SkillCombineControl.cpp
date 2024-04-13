void __fastcall SkillCombineControl___ctor(SkillCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall SkillCombineControl__CheckIsMaxLvSkills(
        SkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Int32_array *SkillIdList; // x19
  __int64 v12; // x8
  SkillCombineControl_o *v13; // x20
  unsigned __int64 v14; // x22
  int32_t *p_type; // x23
  int32_t v16; // w21
  int32_t v17; // w28
  __int64 v19; // x0

  if ( (byte_42E97AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)resData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5, v6, v7);
    this = (SkillCombineControl_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E97AB = 1;
  }
  if ( !resData
    || (SkillIdList = UserServantEntity__getSkillIdList(resData, -1, -1, 1, 0LL),
        this = (SkillCombineControl_o *)((__int64 (__fastcall *)(UserServantEntity_o *, void *))resData->klass->vtable._6_getSkillLevelList.method)(
                                          resData,
                                          resData->klass[1]._1.image),
        !SkillIdList) )
  {
LABEL_18:
    sub_B5D69C(this, resData);
  }
  v12 = *(_QWORD *)&SkillIdList->max_length;
  if ( (int)v12 < 1 )
    return 1;
  v13 = this;
  v14 = 0LL;
  p_type = &this->fields.type;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v12 )
      goto LABEL_19;
    if ( !v13 )
      goto LABEL_18;
    if ( v14 >= LODWORD(v13->fields.combineRootComponent) )
    {
LABEL_19:
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
    }
    v16 = SkillIdList->m_Items[v14 + 1];
    if ( v16 >= 1 )
    {
      v17 = p_type[v14];
      this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_18;
      this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_18;
      this = (SkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        v16,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_18;
      if ( v17 < SLODWORD(this->fields.baseUserServantEntity) )
        return 0;
    }
    LODWORD(v12) = SkillIdList->max_length;
    if ( (__int64)++v14 >= (int)v12 )
      return 1;
  }
}


SvtUseSkillData_o *__fastcall SkillCombineControl__GetSvtSkillData(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SvtUseSkillData_o *v6; // x21
  struct SvtUseSkillData_o **p_skillData; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **SkillIdList; // x0
  __int64 v15; // x1
  struct SvtUseSkillData_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct SvtUseSkillData_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42E97A4 & 1) == 0 )
  {
    sub_B5D5C4(&SvtUseSkillData_TypeInfo, (_DWORD)usrSvtData, (_DWORD)method, v3);
    byte_42E97A4 = 1;
  }
  v6 = (SvtUseSkillData_o *)sub_B5D694(SvtUseSkillData_TypeInfo);
  SvtUseSkillData___ctor(v6, 0LL);
  this->fields.skillData = v6;
  p_skillData = &this->fields.skillData;
  sub_B5D560((BattleServantConfConponent_o *)p_skillData, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  if ( !usrSvtData
    || (v16 = *p_skillData,
        SkillIdList = (System_Int32_array **)UserServantEntity__getSkillIdList(usrSvtData, -1, -1, 1, 0LL),
        !v16)
    || (v16->fields.svtUseSkillIdList = (struct System_Int32_array *)SkillIdList,
        sub_B5D560((BattleServantConfConponent_o *)&v16->fields, SkillIdList, v17, v18, v19, v20, v21, v22),
        v23 = *p_skillData,
        SkillIdList = (System_Int32_array **)((__int64 (__fastcall *)(UserServantEntity_o *, void *))usrSvtData->klass->vtable._6_getSkillLevelList.method)(
                                               usrSvtData,
                                               usrSvtData->klass[1]._1.image),
        !v23) )
  {
    sub_B5D69C(SkillIdList, v15);
  }
  v23->fields.svtSkillLvList = (struct System_Int32_array *)SkillIdList;
  sub_B5D560((BattleServantConfConponent_o *)&v23->fields.svtSkillLvList, SkillIdList, v24, v25, v26, v27, v28, v29);
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
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *gameObject; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x1
  UILabel_o *selectSkillHelpLb; // x20
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  UIWidget_o *v33; // x20
  int v34; // s0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  int size; // w20
  unsigned int v40; // w21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  int v42; // w20
  unsigned int v43; // w21

  if ( (byte_42E97A0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_8932/*"MSG_PRESELECT_BASE_SVT"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8934/*"MSG_SKILL_SELECT"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9367/*"NEED_QP_INFO"*/, v23, v24, v25);
    byte_42E97A0 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8932/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  SkillCombineControl__SetHaveQpInfo(this, v29);
  selectSkillHelpLb = this->fields.selectSkillHelpLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8934/*"MSG_SKILL_SELECT"*/, 0LL);
  if ( !selectSkillHelpLb )
    goto LABEL_32;
  UILabel__set_text(selectSkillHelpLb, gameObject, 0LL);
  needQpLb = this->fields.needQpLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9367/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_32;
  UILabel__set_text(needQpLb, gameObject, 0LL);
  this->fields.spendQpVal = 0;
  qpLb = this->fields.qpLb;
  gameObject = System_Int32__ToString((int)this + 228, 0LL);
  if ( !qpLb )
    goto LABEL_32;
  UILabel__set_text(qpLb, gameObject, 0LL);
  v33 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
  if ( !v33 )
    goto LABEL_32;
  UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v34, 0LL);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_32;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v40 = 0;
    do
    {
      if ( skillInfoList->fields._size <= v40 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      gameObject = (System_String_o *)skillInfoList->fields._items->m_Items[v40];
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__Clear((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( (int)++v40 >= size )
        goto LABEL_24;
      skillInfoList = this->fields.skillInfoList;
    }
    while ( skillInfoList );
LABEL_32:
    sub_B5D69C(gameObject, v28);
  }
LABEL_24:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_32;
  v42 = itemInfoList->fields._size;
  if ( v42 >= 1 )
  {
    v43 = 0;
    do
    {
      if ( itemInfoList->fields._size <= v43 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      gameObject = (System_String_o *)itemInfoList->fields._items->m_Items[v43];
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( (int)++v43 >= v42 )
        return;
      itemInfoList = this->fields.itemInfoList;
    }
    while ( itemInfoList );
    goto LABEL_32;
  }
}


void __fastcall SkillCombineControl__InitSvtSkillCombine(SkillCombineControl_o *this, const MethodInfo *method)
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
  __int64 v23; // x1
  void *helpBtn; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v43; // x0
  _BOOL8 v44; // x0
  __int64 v45; // x1
  MenuListControl_o *v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E979F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17362/*"buttontxt_synthesis"*/, v20, v21, v22);
    byte_42E979F = 1;
  }
  memset(&v47, 0, sizeof(v47));
  EventTutorialMaster__CheckTutorial(0, 37, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  SkillCombineControl__InitDispCombineInfo(this, v25);
  this->fields._IsExeCombine_k__BackingField = 0;
  SkillCombineControl__SetExeBtnState(this, v26);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17362/*"buttontxt_synthesis"*/, 0LL);
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    this->fields.charaGraph = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v29, v30, v31, v32, v33, v34);
  }
  helpBtn = this->fields.eventNoticeImg;
  if ( !helpBtn
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL),
        (menuListCtr = this->fields.menuListCtr) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(helpBtn, v23);
  }
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v43 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v43 && v43->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v47,
      v43,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v47,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v44 )
        break;
      if ( !v47.fields.current )
        sub_B5D69C(v44, v45);
      if ( HIDWORD(v47.fields.current[1].klass) == 8 )
      {
        v46 = this->fields.menuListCtr;
        if ( !v46 )
          sub_B5D69C(0LL, v45);
        MenuListControl__setBannerIcon(
          v46,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v47.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v47,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


void __fastcall SkillCombineControl__OnClickExeCombine(SkillCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E97A9 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3401/*"CONFIRM_TITLE_SKILL_COMBINE"*/, v5, v6, v7);
    byte_42E97A9 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3401/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B5D69C(v8, v9);
  SetRarityDialogControl__SetSkillNpCombineInfo(this->fields.exeCombineDlg, this->fields.lvUpData, v8, 0LL);
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
  __int64 v3; // x3
  SkillCombineControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  ServantLimitImageMaster_o *v19; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v22; // w21
  SkillCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_26715804; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v5 = this;
  if ( (byte_42E97A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)usrSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    this = (SkillCombineControl_o *)sub_B5D5C4(
                                      &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                      v12,
                                      v13,
                                      v14);
    byte_42E97A3 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
  if ( !v19 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v19,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v5->fields.charaGraph;
  v22 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = (SkillCombineControl_o **)&v5->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26715804 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26715804(
                                                      v5->fields.charaGraphBase,
                                                      usrSvtData,
                                                      v22,
                                                      10,
                                                      0LL,
                                                      0,
                                                      0LL);
    v5->fields.charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_26715804;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.charaGraph,
      TexturePrefab_26715804,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B5D69C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_35988116((UICharaGraphTexture_o *)this, usrSvtData, v22, 0LL, 0, 0LL);
}


void __fastcall SkillCombineControl__SetBaseSvtSkillInfo(
        SkillCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        int32_t idx,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int128 v10; // q1
  int64_t v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  const MethodInfo *v20; // x2
  SvtUseSkillData_o *SvtSkillData; // x0
  __int64 v22; // x21
  __int64 v23; // x22
  SvtUseSkillData_o *v24; // x20
  int32_t v25; // w0
  UnityEngine_GameObject_o *v26; // x2
  const MethodInfo *v27; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42E97A2 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)usrSvtEn, idx, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8, v9);
    byte_42E97A2 = 1;
  }
  if ( usrSvtEn )
  {
    v10 = *(_OWORD *)&usrSvtEn->fields.userId.fields.fakeValue;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&usrSvtEn->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v29.fields.fakeValue = v10;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v28 = v29;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v28, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.userId = v11;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
      (System_Int32_array **)usrSvtEn,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
    {
      sub_B5D69C(preSelectBaseLb, v18);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    SvtSkillData = SkillCombineControl__GetSvtSkillData(this, usrSvtEn, v20);
    v23 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    v24 = SvtSkillData;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v23;
    *(_QWORD *)&v30.fields.fakeValue = v22;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
    SkillCombineControl__SetCombineSkillList(this, v24, v26, v25, v27);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_Int32_array **svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v45; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x19
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x2
  unsigned __int64 v54; // x24
  struct System_Int32_array *v55; // x8
  int32_t v56; // w25
  struct System_Int32_array *svtSkillLvList; // x8
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x19
  int32_t v59; // w22
  ServantSkillInfoIconComponent_o *v60; // x26
  SkillEntity_o *Entity; // x0
  const MethodInfo *v62; // x1
  SkillEntity_o *v63; // x19
  int32_t IconId; // w23
  const MethodInfo *v65; // x1
  System_String_o *Name; // x0
  int maxLv; // w28
  System_String_o *v68; // x19
  int32_t v69; // w19
  SkillCombineControl_o *v70; // x21
  int32_t skillRecord; // w28
  int32_t v72; // w22
  struct UserServantEntity_o *baseUserServantEntity; // x8
  Il2CppObject *v74; // x20
  __int64 v75; // x21
  __int64 v76; // x27
  int32_t baseSvtId; // w21
  ServantSkillInfoIconComponent_ClickDelegate_o *callback; // x27
  __int64 v79; // x0
  SvtUseSkillData_o *v80; // [xsp+20h] [xbp-90h]
  SkillCombineControl_o **p_targetList; // [xsp+28h] [xbp-88h]
  signed __int64 v83; // [xsp+38h] [xbp-78h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+40h] [xbp-70h]
  int32_t skillMaxLv; // [xsp+4Ch] [xbp-64h]
  System_String_o *skillName; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  v8 = skillData;
  v9 = this;
  if ( (byte_42E97A5 & 1) == 0 )
  {
    sub_B5D5C4(
      &ServantSkillInfoIconComponent_ClickDelegate_TypeInfo,
      (_DWORD)skillData,
      (_DWORD)targetGo,
      *(_QWORD *)&svtId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&Method_SkillCombineControl_OnClickInfo__, v37, v38, v39);
    this = (SkillCombineControl_o *)sub_B5D5C4(&StringLiteral_755/*"-"*/, v40, v41, v42);
    byte_42E97A5 = 1;
  }
  if ( !v8 )
    goto LABEL_35;
  svtUseSkillIdList = (System_Int32_array **)v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_B5D560(
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
  v45 = *(_QWORD *)&useSkillIdList->max_length;
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v46;
  p_targetList = (SkillCombineControl_o **)&v9->fields.targetList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.targetList,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( (int)v45 >= 1 )
  {
    v83 = (int)v45;
    v54 = 0LL;
    v80 = v8;
    while ( 1 )
    {
      v55 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v54 >= v55->max_length )
        goto LABEL_36;
      v56 = v55->m_Items[v54 + 1];
      if ( v56 <= 0 )
      {
        ++v54;
      }
      else
      {
        svtSkillLvList = v8->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v54 >= svtSkillLvList->max_length )
        {
LABEL_36:
          v79 = sub_B5D6C8(this);
          sub_B5D668(v79, 0LL);
        }
        skillInfoList = v9->fields.skillInfoList;
        if ( !skillInfoList )
          break;
        v59 = svtSkillLvList->m_Items[v54 + 1];
        if ( v54 >= (unsigned int)skillInfoList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v60 = skillInfoList->fields._items->m_Items[v54];
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !this )
          break;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                    v56,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          v63 = Entity;
          IconId = SkillEntity__GetIconId(Entity, v62);
          Name = SkillEntity__getName(v63, v65);
          maxLv = v63->fields.maxLv;
          v68 = Name;
        }
        else
        {
          IconId = 400;
          maxLv = 10;
          v68 = (System_String_o *)StringLiteral_755/*"-"*/;
        }
        this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          break;
        this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        if ( !this )
          break;
        skillMaxLv = maxLv;
        skillName = v68;
        v69 = v59;
        this = (SkillCombineControl_o *)ServantSkillMaster__getEntityFromSkillId(
                                          (ServantSkillMaster_o *)this,
                                          svtId,
                                          (int)v54 + 1,
                                          v56,
                                          0LL);
        if ( this )
        {
          v70 = this;
          this = (SkillCombineControl_o *)ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)this, 0LL);
          skillRecord = HIDWORD(v70->fields.exeCombineDlg);
          v72 = (int)this;
        }
        else
        {
          v72 = 0;
          skillRecord = 0;
        }
        baseUserServantEntity = v9->fields.baseUserServantEntity;
        if ( !baseUserServantEntity )
          break;
        v74 = (Il2CppObject *)v9;
        v76 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
        v75 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v87.fields.currentCryptoKey = v76;
        *(_QWORD *)&v87.fields.fakeValue = v75;
        baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v87, 0LL);
        callback = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_B5D694(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(callback, v74, Method_SkillCombineControl_OnClickInfo__, 0LL);
        if ( !v60 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo(
          v60,
          v54,
          v56,
          v69,
          skillMaxLv,
          skillName,
          IconId,
          v72,
          skillRecord,
          baseSvtId,
          callback,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
        v9 = (SkillCombineControl_o *)v74;
        v8 = v80;
        ++v54;
      }
      if ( (__int64)v54 >= v83 )
        goto LABEL_34;
    }
LABEL_35:
    sub_B5D69C(this, skillData);
  }
LABEL_34:
  SkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v53);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetExeBtnState(SkillCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v9; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v13; // x19
  int v14; // s0
  int v18; // s0
  int v22; // s0
  int v26; // s0

  if ( (byte_42E97A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenScale___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    byte_42E97A8 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v9 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v13 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v14, 0LL);
      *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
      if ( v9 )
      {
        UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v18, 0LL);
        if ( v13 )
        {
          UnityEngine_Behaviour__set_enabled(v13, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v13, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v22, 0LL);
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_gray(0LL);
  if ( !v9 )
    goto LABEL_14;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v26, 0LL);
  if ( !v13 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v13, 0, 0LL);
}


void __fastcall SkillCombineControl__SetHaveQpInfo(SkillCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  int32_t *p_haveQpVal; // x19
  UILabel_o *v8; // x20

  if ( (byte_42E97A1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, (_DWORD)method, v2, v3);
    byte_42E97A1 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v8 = (UILabel_o *)*((_QWORD *)p_haveQpVal - 10),
        SelfUserGame = System_Int32__ToString_39741776((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL),
        !v8) )
  {
    sub_B5D69C(SelfUserGame, v6);
  }
  UILabel__set_text(v8, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetNeedItemInfo(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SkillCombineControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x23
  __int64 v11; // x21
  int size; // w8
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v14; // x0

  v5 = this;
  if ( (byte_42E97A6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__,
      idx,
      (_DWORD)method,
      v3);
    this = (SkillCombineControl_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__,
                                      v6,
                                      v7,
                                      v8);
    byte_42E97A6 = 1;
  }
  if ( v5->fields.baseUserServantEntity )
  {
    if ( !v5->fields.targetList
      || (this = (SkillCombineControl_o *)v5->fields.selectSkillInfo) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (targetList = v5->fields.targetList) == 0LL) )
    {
LABEL_15:
      sub_B5D69C(this, *(_QWORD *)&idx);
    }
    v11 = 0LL;
    while ( 1 )
    {
      size = targetList->fields._size;
      if ( (int)v11 >= size )
        break;
      if ( size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      useSkillIdList = v5->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
        {
          v14 = sub_B5D6C8(this);
          sub_B5D668(v14, 0LL);
        }
        this = (SkillCombineControl_o *)targetList->fields._items->m_Items[v11];
        if ( this )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.qpLb),
            0LL);
          targetList = v5->fields.targetList;
          ++v11;
          if ( targetList )
            continue;
        }
      }
      goto LABEL_15;
    }
    SkillCombineControl__SetSvtSkillCombineData(v5, idx, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetStateInfoMsg(
        SkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v17; // x21
  float v18; // s4
  float v19; // s5
  float v20; // s6
  UnityEngine_Color_o v21; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = state;
  if ( (byte_42E97AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, state, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_7365/*"INFO_MSG_SKILLUP"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42E97AA = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_13;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v22.fields.g = 0.87891;
  v22.fields.b = 0.98828;
  v17 = (UIWidget_o *)Component_WebViewObject;
  v22.fields.r = 0.0;
  *(_QWORD *)&v21.fields.r = 0LL;
  *(_QWORD *)&v21.fields.b = 0LL;
  UnityEngine_Color___ctor_41567816(v22, v18, v19, v20, (const MethodInfo *)&v21);
  if ( !v17 )
    goto LABEL_13;
  UIWidget__set_color(v17, v21, 0LL);
  if ( v4 )
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
    *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)StringLiteral_7365/*"INFO_MSG_SKILLUP"*/, 0LL);
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
LABEL_13:
    sub_B5D69C(detailInfoLb, *(_QWORD *)&state);
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillCombineControl__SetSvtSkillCombineData(
        SkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SkillCombineControl_o *v5; // x19
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
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  struct SvtUseSkillData_o *skillData; // x9
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  int32_t v84; // w26
  int32_t v85; // w24
  SkillEntity_o *Entity; // x0
  const MethodInfo *v87; // x1
  int maxLv; // w25
  System_String_o *Name; // x27
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  __int64 v91; // x21
  int size; // w8
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v94; // x22
  float v95; // s4
  float v96; // s5
  float v97; // s6
  System_String_o *v98; // x0
  System_String_o *v99; // x21
  struct UserServantEntity_o *baseUserServantEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v101; // x25
  __int64 v102; // x27
  __int64 v103; // x28
  WarEntity_o *v104; // x25
  SkillCombineControl_o *v105; // x28
  int *p_spendQpVal; // x25
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  float v108; // s0
  double v109; // d0
  _BOOL8 v110; // x0
  __int64 v111; // x1
  UILabel_o *qpLb; // x27
  struct MenuListControl_o *v113; // x27
  struct UserServantEntity_o *v114; // x21
  unsigned __int64 v115; // x26
  __int64 v116; // x22
  char v117; // w23
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *v118; // x28
  LimitCntUpItemComponent_o *v119; // x28
  UIWidget_o *v121; // x28
  int v122; // s0
  const MethodInfo *v126; // x1
  int32_t haveQpVal; // w8
  int32_t spendQpVal; // w9
  System_String_o *v129; // x0
  UIWidget_o *v130; // x28
  int v131; // s0
  System_String_o *v135; // x26
  SetLevelUpData_o *v136; // x26
  SkillCombineControl_o **p_lvUpData; // x24
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  struct SetLevelUpData_o *lvUpData; // x8
  System_Int32_array **v151; // x1
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  UIWidget_o *v164; // x20
  int v165; // s0
  __int64 v169; // x0
  int v170; // [xsp+Ch] [xbp-B4h]
  UIWidget_o *v171; // [xsp+10h] [xbp-B0h]
  struct UserServantEntity_o *v172; // [xsp+18h] [xbp-A8h]
  int32_t v173; // [xsp+20h] [xbp-A0h]
  int32_t v174; // [xsp+24h] [xbp-9Ch]
  MethodInfo methoda; // [xsp+28h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  UnityEngine_Color_o v177; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v178; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v180; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = this;
  if ( (byte_42E97A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, idx, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineSkillMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v42, v43, v44);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&SetLevelUpData_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_17362/*"buttontxt_synthesis"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_1/*""*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_17359/*"buttontxt_notsynthesis"*/, v75, v76, v77);
    this = (SkillCombineControl_o *)sub_B5D5C4(&StringLiteral_973/*"0"*/, v78, v79, v80);
    byte_42E97A7 = 1;
  }
  memset(&methoda.klass, 0, 24);
  skillData = v5->fields.skillData;
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
    v169 = sub_B5D6C8(this);
    sub_B5D668(v169, 0LL);
  }
  v84 = svtUseSkillIdList->m_Items[idx + 1];
  if ( v84 >= 1 )
  {
    v85 = svtSkillLvList->m_Items[idx + 1];
    this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !this )
      goto LABEL_97;
    Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                v84,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( Entity )
    {
      maxLv = Entity->fields.maxLv;
      Name = SkillEntity__getName(Entity, v87);
    }
    else
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      maxLv = 10;
    }
    this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !this )
      goto LABEL_97;
    this = (SkillCombineControl_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v84, v85, 0LL);
    itemInfoList = v5->fields.itemInfoList;
    if ( !itemInfoList )
      goto LABEL_97;
    v91 = 0LL;
    while ( 1 )
    {
      size = itemInfoList->fields._size;
      if ( (int)v91 >= size )
        break;
      if ( size <= (unsigned int)v91 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (SkillCombineControl_o *)itemInfoList->fields._items->m_Items[v91];
      if ( this )
      {
        LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
        itemInfoList = v5->fields.itemInfoList;
        ++v91;
        if ( itemInfoList )
          continue;
      }
      goto LABEL_97;
    }
    this = (SkillCombineControl_o *)v5->fields.detailInfoLb;
    if ( !this )
      goto LABEL_97;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v177.fields.g = 0.87891;
    v177.fields.b = 0.98828;
    v94 = (UIWidget_o *)Component_WebViewObject;
    v177.fields.r = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor_41567816(v177, v95, v96, v97, &methoda);
    if ( !v94 )
      goto LABEL_97;
    *(_QWORD *)&v178.fields.r = methoda.methodPointer;
    *(_QWORD *)&v178.fields.b = methoda.invoker_method;
    UIWidget__set_color(v94, v178, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v98 = LocalizationManager__Get((System_String_o *)StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/, 0LL);
    if ( v85 < maxLv )
    {
      v99 = v98;
      this = (SkillCombineControl_o *)v5->fields.combineTxtImg;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17362/*"buttontxt_synthesis"*/, 0LL);
        this = (SkillCombineControl_o *)v5->fields.combineTxtImg;
        if ( this )
        {
          ((void (__fastcall *)(SkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
            this,
            this->klass[2]._1.name);
          this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            *(_QWORD *)&methoda.token = v99;
            v172 = (struct UserServantEntity_o *)Name;
            v173 = v84;
            this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
            baseUserServantEntity = v5->fields.baseUserServantEntity;
            if ( baseUserServantEntity )
            {
              v101 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
              v103 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
              v102 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v176.fields.currentCryptoKey = v103;
              *(_QWORD *)&v176.fields.fakeValue = v102;
              this = (SkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v176,
                                                0LL);
              if ( v101 )
              {
                v104 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v101,
                         (int32_t)this,
                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (SkillCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (SkillCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineSkillMaster___);
                  if ( v104 )
                  {
                    if ( this )
                    {
                      this = (SkillCombineControl_o *)CombineSkillMaster__GetEntity(
                                                        (CombineSkillMaster_o *)this,
                                                        (int32_t)v104->fields.coordinates,
                                                        v85,
                                                        0LL);
                      if ( this )
                      {
                        v105 = this;
                        v5->fields.spendQpVal = (int32_t)this->fields.combineRootComponent;
                        p_spendQpVal = &v5->fields.spendQpVal;
                        combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5->fields.combineEventList;
                        if ( combineEventList && combineEventList->fields._size >= 1 )
                        {
                          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
                            combineEventList,
                            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          methoda.parameters = methoda.name;
                          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
                          while ( 1 )
                          {
                            v110 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                     (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
                                     (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v110 )
                              break;
                            if ( !methoda.parameters )
                              sub_B5D69C(v110, v111);
                            if ( *((_DWORD *)methoda.parameters + 5) == 8 )
                            {
                              v108 = *((float *)methoda.parameters + 14) * (float)*p_spendQpVal;
                              if ( v108 == INFINITY )
                                v109 = -INFINITY;
                              else
                                v109 = v108;
                              *p_spendQpVal = (int)v109;
                            }
                          }
                          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
                            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
                        }
                        qpLb = v5->fields.qpLb;
                        this = (SkillCombineControl_o *)System_Int32__ToString_39741776(
                                                          (int)v5 + 228,
                                                          (System_String_o *)StringLiteral_9361/*"N0"*/,
                                                          0LL);
                        if ( qpLb )
                        {
                          v171 = v94;
                          UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
                          v113 = *(struct MenuListControl_o **)&v105->fields.type;
                          if ( v113 )
                          {
                            v114 = v105->fields.baseUserServantEntity;
                            v170 = v85 + 1;
                            v115 = 0LL;
                            v174 = v85;
                            v116 = (((__int64)v113->fields.combineData << 32) - 0x100000000LL) >> 32;
                            v117 = 1;
                            do
                            {
                              if ( (__int64)v115 <= v116 )
                              {
                                v118 = v5->fields.itemInfoList;
                                if ( !v118 )
                                  goto LABEL_97;
                                if ( v115 >= (unsigned int)v118->fields._size )
                                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                                if ( v115 >= LODWORD(v113->fields.combineData) )
                                  goto LABEL_98;
                                if ( !v114 )
                                  goto LABEL_97;
                                if ( v115 >= LODWORD(v114->fields.id.fields.hiddenValue) )
                                  goto LABEL_98;
                                v119 = v118->fields._items->m_Items[v115];
                                if ( !v119 )
                                  goto LABEL_97;
                                LimitCntUpItemComponent__setLimitUpItemInfo(
                                  v119,
                                  v5->fields.userId,
                                  *((_DWORD *)&v113->fields.menuListScrollView + v115),
                                  *((_DWORD *)&v114->fields.id.fields.fakeValue + v115),
                                  0LL);
                                v117 &= v119->fields.isItemNum;
                              }
                            }
                            while ( v115++ < 4 );
                            v121 = (UIWidget_o *)v5->fields.qpLb;
                            *(UnityEngine_Color_o *)&v122 = UnityEngine_Color__get_white(0LL);
                            if ( v121 )
                            {
                              UIWidget__set_color(v121, *(UnityEngine_Color_o *)&v122, 0LL);
                              haveQpVal = v5->fields.haveQpVal;
                              spendQpVal = v5->fields.spendQpVal;
                              v5->fields._IsExeCombine_k__BackingField = 1;
                              if ( haveQpVal < spendQpVal )
                              {
                                white = UnityEngine_Color__get_white(0LL);
                                UIWidget__set_color(v171, white, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v129 = LocalizationManager__Get((System_String_o *)StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, 0LL);
                                v130 = (UIWidget_o *)v5->fields.qpLb;
                                *(_QWORD *)&methoda.token = v129;
                                *(UnityEngine_Color_o *)&v131 = UnityEngine_Color__get_red(0LL);
                                if ( !v130 )
                                  goto LABEL_97;
                                UIWidget__set_color(v130, *(UnityEngine_Color_o *)&v131, 0LL);
                                v5->fields._IsExeCombine_k__BackingField = 0;
                              }
                              v135 = *(System_String_o **)&methoda.token;
                              if ( (v117 & 1) == 0 )
                              {
                                v180 = UnityEngine_Color__get_white(0LL);
                                UIWidget__set_color(v171, v180, 0LL);
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v135 = LocalizationManager__Get((System_String_o *)StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
                                v5->fields._IsExeCombine_k__BackingField = 0;
                              }
                              SkillCombineControl__SetExeBtnState(v5, v126);
                              this = (SkillCombineControl_o *)v5->fields.detailInfoLb;
                              if ( this )
                              {
                                UILabel__set_text((UILabel_o *)this, v135, 0LL);
                                v136 = (SetLevelUpData_o *)sub_B5D694(SetLevelUpData_TypeInfo);
                                SetLevelUpData___ctor(v136, 0LL);
                                p_lvUpData = (SkillCombineControl_o **)&v5->fields.lvUpData;
                                v5->fields.lvUpData = v136;
                                sub_B5D560(
                                  (BattleServantConfConponent_o *)&v5->fields.lvUpData,
                                  (System_Int32_array **)v136,
                                  v138,
                                  v139,
                                  v140,
                                  v141,
                                  v142,
                                  v143);
                                lvUpData = v5->fields.lvUpData;
                                if ( lvUpData )
                                {
                                  lvUpData->fields.currentId = v173;
                                  if ( *p_lvUpData )
                                  {
                                    *((_DWORD *)&(*p_lvUpData)->fields.BaseMonoBehaviour_Fields + 1) = idx + 1;
                                    if ( *p_lvUpData )
                                    {
                                      LODWORD((*p_lvUpData)->fields.combineRootComponent) = idx;
                                      this = *p_lvUpData;
                                      if ( *p_lvUpData )
                                      {
                                        v151 = (System_Int32_array **)StringLiteral_1/*""*/;
                                        *(_QWORD *)&this->fields.type = StringLiteral_1/*""*/;
                                        sub_B5D560(
                                          (BattleServantConfConponent_o *)&this->fields.type,
                                          v151,
                                          v144,
                                          v145,
                                          v146,
                                          v147,
                                          v148,
                                          v149);
                                        this = *p_lvUpData;
                                        if ( *p_lvUpData )
                                        {
                                          this->fields.baseUserServantEntity = v172;
                                          sub_B5D560(
                                            (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
                                            (System_Int32_array **)v172,
                                            v152,
                                            v153,
                                            v154,
                                            v155,
                                            v156,
                                            v157);
                                          if ( *p_lvUpData )
                                          {
                                            LODWORD((*p_lvUpData)->fields.exeCombineDlg) = v174;
                                            if ( *p_lvUpData )
                                            {
                                              HIDWORD((*p_lvUpData)->fields.exeCombineDlg) = v170;
                                              if ( *p_lvUpData )
                                              {
                                                LODWORD((*p_lvUpData)->fields.helpBtn) = *p_spendQpVal;
                                                if ( *p_lvUpData )
                                                {
                                                  HIDWORD((*p_lvUpData)->fields.helpBtn) = v5->fields.userQP;
                                                  this = (SkillCombineControl_o *)v5->fields.lvUpData;
                                                  if ( this )
                                                  {
                                                    this->fields.menuListCtr = v113;
                                                    sub_B5D560(
                                                      (BattleServantConfConponent_o *)&this->fields.menuListCtr,
                                                      (System_Int32_array **)v113,
                                                      v158,
                                                      v159,
                                                      v160,
                                                      v161,
                                                      v162,
                                                      v163);
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
      sub_B5D69C(this, *(_QWORD *)&idx);
    }
    v5->fields._IsExeCombine_k__BackingField = 0;
    SkillCombineControl__SetExeBtnState(v5, *(const MethodInfo **)&idx);
    this = (SkillCombineControl_o *)v5->fields.qpLb;
    if ( !this )
      goto LABEL_97;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_973/*"0"*/, 0LL);
    v164 = (UIWidget_o *)v5->fields.qpLb;
    *(UnityEngine_Color_o *)&v165 = UnityEngine_Color__get_white(0LL);
    if ( !v164 )
      goto LABEL_97;
    UIWidget__set_color(v164, *(UnityEngine_Color_o *)&v165, 0LL);
    this = (SkillCombineControl_o *)v5->fields.combineTxtImg;
    if ( !this )
      goto LABEL_97;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17359/*"buttontxt_notsynthesis"*/, 0LL);
    this = (SkillCombineControl_o *)v5->fields.combineTxtImg;
    if ( !this )
      goto LABEL_97;
    ((void (__fastcall *)(SkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
  }
}