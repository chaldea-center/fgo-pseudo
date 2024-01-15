void __fastcall AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall AppendSkillCombineControl__CheckIsMaxLvSkills(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *AppendSkillInfo; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x19
  __int64 v10; // x8
  struct System_String_o *MasterName_k__BackingField; // x21
  unsigned __int64 v12; // x20
  __int64 v13; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FC9D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, resData);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    byte_40FC9D9 = 1;
  }
  entity = 0LL;
  if ( !resData
    || (AppendSkillInfo = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantEntity__getAppendSkillInfo(
                                                                           resData,
                                                                           0LL)) == 0LL
    || (v9 = *(_QWORD *)&AppendSkillInfo->fields._MasterKind_k__BackingField) == 0 )
  {
LABEL_25:
    sub_B170D4();
  }
  v10 = *(_QWORD *)(v9 + 24);
  if ( (int)v10 < 1 )
    return 1;
  MasterName_k__BackingField = AppendSkillInfo->fields._MasterName_k__BackingField;
  v12 = 0LL;
  v13 = v9 + 32;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
    {
LABEL_24:
      sub_B17100(AppendSkillInfo, v7, v8);
      sub_B170A0();
    }
    if ( *(int *)(v13 + 4 * v12) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      AppendSkillInfo = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
      if ( v12 >= *(unsigned int *)(v9 + 24) )
        goto LABEL_24;
      if ( !AppendSkillInfo )
        goto LABEL_25;
      AppendSkillInfo = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                         AppendSkillInfo,
                                                                         &entity,
                                                                         *(_DWORD *)(v13 + 4 * v12),
                                                                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)AppendSkillInfo & 1) != 0 )
      {
        if ( !entity || !MasterName_k__BackingField )
          goto LABEL_25;
        if ( v12 >= LODWORD(MasterName_k__BackingField[1].klass) )
          goto LABEL_24;
        if ( *((_DWORD *)&MasterName_k__BackingField[1].monitor + v12) < SLODWORD(entity->fields.longName) )
          return 0;
      }
    }
    LODWORD(v10) = *(_DWORD *)(v9 + 24);
    if ( (__int64)++v12 >= (int)v10 )
      return 1;
  }
}


SetLevelUpData_o *__fastcall AppendSkillCombineControl__GetTargetData(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  return this->fields.lvUpData;
}


int32_t __fastcall AppendSkillCombineControl__GetTutorialOpenType(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  return 70;
}


void __fastcall AppendSkillCombineControl__InitDispCombineInfo(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *v10; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  UILabel_o *selectSkillHelpLb; // x0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  int size; // w20
  unsigned int v17; // w21
  ServantSkillInfoIconComponent_o *v18; // x0
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  int v20; // w20
  unsigned int v21; // w21
  LimitCntUpItemComponent_o *v22; // x0

  if ( (byte_40FC9D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&string_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1705/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, v8);
    byte_40FC9D0 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1705/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_28;
  UILabel__set_text(preSelectBaseLb, v10, 0LL);
  v11 = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !v11 )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
  selectSkillHelpLb = this->fields.selectSkillHelpLb;
  if ( !selectSkillHelpLb )
    goto LABEL_28;
  UILabel__set_text(selectSkillHelpLb, string_TypeInfo->static_fields->Empty, 0LL);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_28;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    do
    {
      if ( skillInfoList->fields._size <= v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = skillInfoList->fields._items->m_Items[v17];
      if ( !v18 )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo(v18, 0LL);
      if ( (int)++v17 >= size )
        goto LABEL_20;
      skillInfoList = this->fields.skillInfoList;
    }
    while ( skillInfoList );
LABEL_28:
    sub_B170D4();
  }
LABEL_20:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_28;
  v20 = itemInfoList->fields._size;
  if ( v20 >= 1 )
  {
    v21 = 0;
    do
    {
      if ( itemInfoList->fields._size <= v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v22 = itemInfoList->fields._items->m_Items[v21];
      if ( !v22 )
        break;
      LimitCntUpItemComponent__enableDispItemInfo(v22, 0LL);
      if ( (int)++v21 >= v20 )
        return;
      itemInfoList = this->fields.itemInfoList;
    }
    while ( itemInfoList );
    goto LABEL_28;
  }
}


void __fastcall AppendSkillCombineControl__InitSvtSkillCombine(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v9; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t qp; // w8
  UISprite_o *combineTxtImg; // x0
  UISprite_o *v13; // x0
  UISprite_o *titleImg; // x20
  struct UISprite_o *v15; // x0
  struct UISprite_o *v16; // x0
  struct UISprite_o *itemTitleImg; // x0
  UnityEngine_GameObject_o *combineQpInfo; // x0
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40FC9CF & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_19612/*"img_txt_extraskill_item"*/, v4);
    sub_B16FFC(&StringLiteral_17083/*"buttontxt_synthesis"*/, v5);
    sub_B16FFC(&StringLiteral_19611/*"img_txt_extraskill"*/, v6);
    byte_40FC9CF = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0LL, 0, 0, 0, 0, 0LL);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  AppendSkillCombineControl__InitDispCombineInfo(this, v7);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v9);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  qp = SelfUserGame->fields.qp;
  combineTxtImg = this->fields.combineTxtImg;
  this->fields.userQp = qp;
  if ( !combineTxtImg )
    goto LABEL_24;
  UISprite__set_atlas(combineTxtImg, this->fields.baseAtlas, 0LL);
  v13 = this->fields.combineTxtImg;
  if ( !v13 )
    goto LABEL_24;
  UISprite__set_spriteName(v13, (System_String_o *)StringLiteral_17083/*"buttontxt_synthesis"*/, 0LL);
  titleImg = this->fields.titleImg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_19611/*"img_txt_extraskill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_19612/*"img_txt_extraskill_item"*/, 0LL);
  v15 = this->fields.combineTxtImg;
  if ( !v15 )
    goto LABEL_24;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v15->klass->vtable._33_MakePixelPerfect.method)(
    v15,
    v15->klass->vtable._34_get_minWidth.methodPtr);
  v16 = this->fields.titleImg;
  if ( !v16 )
    goto LABEL_24;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
    v16,
    v16->klass->vtable._34_get_minWidth.methodPtr);
  itemTitleImg = this->fields.itemTitleImg;
  if ( !itemTitleImg )
    goto LABEL_24;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))itemTitleImg->klass->vtable._33_MakePixelPerfect.method)(
    itemTitleImg,
    itemTitleImg->klass->vtable._34_get_minWidth.methodPtr);
  combineQpInfo = this->fields.combineQpInfo;
  if ( !combineQpInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(combineQpInfo, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( *p_charaGraph )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      *p_charaGraph = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_charaGraph, 0LL, v22, v23, v24, v25, v26, v27);
      return;
    }
LABEL_24:
    sub_B170D4();
  }
}


void __fastcall AppendSkillCombineControl__OnClickExeCombine(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t nowStatus; // w8
  struct SetRarityDialogControl_o *v6; // x20
  struct SetLevelUpData_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x2
  bool v10; // w3
  SetRarityDialogControl_o *v11; // x0
  SetLevelUpData_o *v12; // x1
  struct SetRarityDialogControl_o *exeCombineDlg; // x20
  struct SetLevelUpData_o *lvUpData; // x19
  System_String_o *v15; // x0

  if ( (byte_40FC9DB & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1710/*"APPEND_SKILL_LVUP_TITLE"*/, v3);
    sub_B16FFC(&StringLiteral_1715/*"APPEND_SKILL_OPEN_TITLE"*/, v4);
    byte_40FC9DB = 1;
  }
  nowStatus = this->fields.nowStatus;
  if ( nowStatus == 2 )
  {
    exeCombineDlg = this->fields.exeCombineDlg;
    lvUpData = this->fields.lvUpData;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_1710/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
    if ( exeCombineDlg )
    {
      v9 = v15;
      v11 = exeCombineDlg;
      v12 = lvUpData;
      v10 = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( nowStatus == 1 )
  {
    v6 = this->fields.exeCombineDlg;
    v7 = this->fields.lvUpData;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1715/*"APPEND_SKILL_OPEN_TITLE"*/, 0LL);
    if ( v6 )
    {
      v9 = v8;
      v10 = 1;
      v11 = v6;
      v12 = v7;
LABEL_15:
      SetRarityDialogControl__SetAppendSkillCombineInfo(v11, v12, v9, v10, 0LL);
      return;
    }
    goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__OnClickInfo(
        AppendSkillCombineControl_o *this,
        bool isdecide,
        int32_t idx,
        const MethodInfo *method)
{
  this->fields.currentIdx = idx;
  AppendSkillCombineControl__SetNeedItemInfo(this, idx, *(const MethodInfo **)&idx);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__PlayUnlockEffect(
        AppendSkillCombineControl_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct SvtUseSkillData_o *skillData; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *effect; // x19
  UnityEngine_GameObject_o *v13; // x0
  CommandCodeEffectComponent_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v15; // x19
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_40FC9DD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    this = (AppendSkillCombineControl_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FC9DD = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_22;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_22;
  if ( svtSkillLvList->max_length <= idx )
  {
    sub_B17100(this, *(_QWORD *)&idx, callback);
    sub_B170A0();
  }
  if ( svtSkillLvList->m_Items[idx + 1] == 1 )
  {
    effect = (UnityEngine_UI_Dropdown_DropdownItem_o *)v6->fields.effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        effect,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( v13 )
    {
      Component_srcLineSprite = (CommandCodeEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v13,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
      if ( Component_srcLineSprite )
      {
        v15 = (UnityEngine_Component_o *)Component_srcLineSprite;
        CommandCodeEffectComponent__SetEndEffectCallbak(Component_srcLineSprite, callback, 0LL);
        transform = UnityEngine_Component__get_transform(v15, 0LL);
        skillInfoList = v6->fields.skillInfoList;
        if ( skillInfoList )
        {
          v18 = transform;
          if ( skillInfoList->fields._size <= (unsigned int)idx )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v19 = (UnityEngine_Component_o *)skillInfoList->fields._items->m_Items[idx];
          if ( v19 )
          {
            gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
            if ( gameObject )
            {
              v21 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
              if ( v18 )
              {
                UnityEngine_Transform__set_parent(v18, v21, 0LL);
                v22 = UnityEngine_Component__get_transform(v15, 0LL);
                *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
                if ( v22 )
                {
                  UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
                  v26 = UnityEngine_Component__get_transform(v15, 0LL);
                  if ( v26 )
                  {
                    v27.fields.x = 0.5;
                    v27.fields.y = 0.5;
                    v27.fields.z = 0.5;
                    UnityEngine_Transform__set_localScale(v26, v27, 0LL);
                    CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v15, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall AppendSkillCombineControl__SetBaseSvtCardImg(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitImageMaster_o *v12; // x22
  int32_t v13; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v16; // w21
  UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26882832; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_40FC9D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, userSvtEnt);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FC9D3 = 1;
  }
  if ( !userSvtEnt )
    goto LABEL_18;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtEnt, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v11;
  *(_QWORD *)&v25.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL);
  if ( !v12 )
    goto LABEL_18;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v12,
                                 v13,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v16 = ServantImageLimitSealAfter;
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
                               userSvtEnt,
                               v16,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26882832;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26882832,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    return;
  }
  if ( !*p_charaGraph )
LABEL_18:
    sub_B170D4();
  UICharaGraphTexture__SetCharacter_35080076(*p_charaGraph, userSvtEnt, v16, 0LL, 0, 0LL);
}


void __fastcall AppendSkillCombineControl__SetBaseSvtSkillInfo(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
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
  UnityEngine_Component_o *preSelectBaseLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-40h]

  if ( (byte_40FC9D1 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtEnt);
    byte_40FC9D1 = 1;
  }
  if ( userSvtEnt )
  {
    v7 = *(_OWORD *)&userSvtEnt->fields.userId.fields.fakeValue;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v26 = v27;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v26, 0LL);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
      (System_Int32_array **)userSvtEnt,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.skillData,
      (System_Int32_array **)AppendSkillInfo,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    AppendSkillCombineControl__SetSkillIconInfo(this, this->fields.skillData, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetExeBtnState(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v6; // x20
  WebViewObject_o *v7; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v9; // x19
  int v10; // s0
  int v14; // s0

  if ( (byte_40FC9DA & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_40FC9DA = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              combineBtnBg,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v6 = (UIWidget_o *)Component_WebViewObject;
  v7 = UnityEngine_Component__GetComponent_WebViewObject_(
         (UnityEngine_Component_o *)this->fields.combineTxtImg,
         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v9 = (UnityEngine_Behaviour_o *)v7;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
    if ( v6 )
    {
      UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v10, 0LL);
      if ( v9 )
      {
        UnityEngine_Behaviour__set_enabled(v9, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v9, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
  if ( !v6 )
    goto LABEL_12;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v14, 0LL);
  if ( !v9 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetNeedItemInfo(
        AppendSkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *selectSkillHelpLb; // x21
  System_String_o *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x23
  __int64 v14; // x21
  int size; // w8
  struct System_Int32_array *useSkillIdList; // x8
  ServantSkillInfoIconComponent_o *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_40FC9D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_8814/*"MSG_SKILL_SELECT"*/, v7);
    byte_40FC9D4 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    if ( !this->fields.targetList )
      goto LABEL_18;
    selectSkillHelpLb = this->fields.selectSkillHelpLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8814/*"MSG_SKILL_SELECT"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, v9, 0LL), (targetList = this->fields.targetList) == 0LL) )
    {
LABEL_18:
      sub_B170D4();
    }
    v14 = 0LL;
    while ( 1 )
    {
      size = targetList->fields._size;
      if ( (int)v14 >= size )
        break;
      if ( size <= (unsigned int)v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      useSkillIdList = this->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
        {
          sub_B17100(v10, v11, v12);
          sub_B170A0();
        }
        v17 = targetList->fields._items->m_Items[v14];
        if ( v17 )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            v17,
            useSkillIdList->m_Items[idx + 1] == v17->fields.currentSkillId,
            0LL);
          AppendSkillCombineControl__SetSvtSkillCombineData(this, v14, v18);
          targetList = this->fields.targetList;
          ++v14;
          if ( targetList )
            continue;
        }
      }
      goto LABEL_18;
    }
    AppendSkillCombineControl__SetSvtSkillCombineData(this, idx, v12);
  }
}


bool __fastcall AppendSkillCombineControl__SetNeedItemList(
        AppendSkillCombineControl_o *this,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v6; // x21
  signed int max_length; // w24
  __int64 v8; // x25
  char v9; // w22
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x23
  __int64 v11; // x8
  __int64 v12; // x23

  v6 = this;
  if ( (byte_40FC9D6 & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_B16FFC(
                                            &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                            needItemIds);
    byte_40FC9D6 = 1;
  }
  if ( !needItemIds )
    goto LABEL_17;
  max_length = needItemIds->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0LL;
    v9 = 1;
    while ( 1 )
    {
      itemInfoList = v6->fields.itemInfoList;
      if ( !itemInfoList )
        break;
      if ( itemInfoList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( (unsigned int)v8 >= needItemIds->max_length )
        goto LABEL_18;
      if ( !needItemNums )
        break;
      if ( (unsigned int)v8 >= needItemNums->max_length )
      {
LABEL_18:
        sub_B17100(this, needItemIds, needItemNums);
        sub_B170A0();
      }
      v11 = (__int64)itemInfoList->fields._items + 8 * v8;
      v12 = *(_QWORD *)(v11 + 32);
      if ( !v12 )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        *(LimitCntUpItemComponent_o **)(v11 + 32),
        v6->fields.userId,
        needItemIds->m_Items[v8 + 1],
        needItemNums->m_Items[v8 + 1],
        0LL);
      ++v8;
      v9 &= *(_BYTE *)(v12 + 104) != 0;
      if ( (int)v8 >= max_length )
        return v9;
    }
LABEL_17:
    sub_B170D4();
  }
  return 1;
}


void __fastcall AppendSkillCombineControl__SetSkillCombineStatus(
        AppendSkillCombineControl_o *this,
        int32_t currentSkillLv,
        int32_t maxLv,
        const MethodInfo *method)
{
  int32_t v4; // w8

  if ( currentSkillLv >= maxLv )
  {
    v4 = 3;
  }
  else if ( currentSkillLv )
  {
    v4 = 2;
  }
  else
  {
    v4 = 1;
  }
  this->fields.nowStatus = v4;
}


void __fastcall AppendSkillCombineControl__SetSkillIconInfo(
        AppendSkillCombineControl_o *this,
        SvtUseSkillData_o *skillData,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_Int32_array *svtUseSkillIdList; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v25; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WarEntity_o *Entity; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  unsigned __int64 v36; // x23
  struct System_Int32_array *v37; // x8
  int32_t v38; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v40; // x3
  __int64 v41; // x4
  int32_t longName; // w25
  System_String_o **p_age; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x19
  System_String_o *v46; // x26
  int32_t v47; // w28
  ServantSkillInfoIconComponent_o *v48; // x27
  ServantSkillInfoIconComponent_ClickDelegate_o *v49; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_targetList; // [xsp+0h] [xbp-60h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+8h] [xbp-58h]

  if ( (byte_40FC9D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_AppendSkillCombineControl_OnClickInfo__, skillData);
    sub_B16FFC(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v17);
    sub_B16FFC(&StringLiteral_746/*"-"*/, v18);
    byte_40FC9D2 = 1;
  }
  if ( !skillData )
    goto LABEL_27;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  p_useSkillIdList = &this->fields.useSkillIdList;
  this->fields.useSkillIdList = svtUseSkillIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useSkillIdList,
    (System_Int32_array **)svtUseSkillIdList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  useSkillIdList = this->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_27;
  v25 = *(_QWORD *)&useSkillIdList->max_length;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  this->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v26;
  p_targetList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.targetList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( (int)v25 >= 1 )
  {
    v36 = 0LL;
    while ( 1 )
    {
      v37 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v36 >= v37->max_length )
        goto LABEL_28;
      v38 = v37->m_Items[v36 + 1];
      if ( v38 >= 1 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Master_WarQuestSelectionMaster )
          break;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   Master_WarQuestSelectionMaster,
                   v38,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Entity )
        {
          longName = (int32_t)Entity->fields.longName;
          p_age = &Entity->fields.age;
        }
        else
        {
          p_age = (System_String_o **)&StringLiteral_746/*"-"*/;
          longName = 10;
        }
        svtSkillLvList = skillData->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v36 >= svtSkillLvList->max_length )
        {
LABEL_28:
          sub_B17100(Entity, v34, v35);
          sub_B170A0();
        }
        skillInfoList = this->fields.skillInfoList;
        if ( !skillInfoList )
          break;
        v46 = *p_age;
        v47 = svtSkillLvList->m_Items[v36 + 1];
        if ( v36 >= (unsigned int)skillInfoList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v48 = skillInfoList->fields._items->m_Items[v36];
        v49 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_B170CC(
                                                                 ServantSkillInfoIconComponent_ClickDelegate_TypeInfo,
                                                                 v34,
                                                                 v35,
                                                                 v40,
                                                                 v41);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v49,
          (Il2CppObject *)this,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0LL);
        if ( !v48 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_28339620(v48, v36, v46, v38, v47, longName, v49, 0LL);
        if ( !*p_targetList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_targetList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
      }
      if ( (__int64)++v36 >= (int)v25 )
        goto LABEL_26;
    }
LABEL_27:
    sub_B170D4();
  }
LABEL_26:
  AppendSkillCombineControl__SetNeedItemInfo(this, this->fields.currentIdx, v35);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetSkillLevelUpData(
        AppendSkillCombineControl_o *this,
        int32_t idx,
        int32_t currentSkillId,
        int32_t currentSkillLv,
        int32_t currentSkillNum,
        System_String_o *skillName,
        System_Int32_array *combineItemIds,
        System_String_o *skillDetail,
        const MethodInfo *method)
{
  SetLevelUpData_o *v17; // x27
  struct SetLevelUpData_o **p_lvUpData; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct SetLevelUpData_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct SetLevelUpData_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct SetLevelUpData_o *v45; // x0

  if ( (byte_40FC9D7 & 1) == 0 )
  {
    sub_B16FFC(&SetLevelUpData_TypeInfo, *(_QWORD *)&idx);
    byte_40FC9D7 = 1;
  }
  v17 = (SetLevelUpData_o *)sub_B170CC(
                              SetLevelUpData_TypeInfo,
                              *(_QWORD *)&idx,
                              *(_QWORD *)&currentSkillId,
                              *(_QWORD *)&currentSkillLv,
                              *(_QWORD *)&currentSkillNum);
  SetLevelUpData___ctor(v17, 0LL);
  this->fields.lvUpData = v17;
  p_lvUpData = &this->fields.lvUpData;
  sub_B16F98((BattleServantConfConponent_o *)p_lvUpData, (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
  if ( !*p_lvUpData )
    goto LABEL_12;
  (*p_lvUpData)->fields.realIndex = idx;
  if ( !*p_lvUpData )
    goto LABEL_12;
  (*p_lvUpData)->fields.currentId = currentSkillId;
  v31 = *p_lvUpData;
  if ( !*p_lvUpData )
    goto LABEL_12;
  v31->fields.targetName = skillName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v31->fields.targetName,
    (System_Int32_array **)skillName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !*p_lvUpData
    || ((*p_lvUpData)->fields.currentLv = currentSkillLv, !*p_lvUpData)
    || ((*p_lvUpData)->fields.nextLv = currentSkillLv + 1, !*p_lvUpData)
    || ((*p_lvUpData)->fields.currentIndex = currentSkillNum, (v38 = *p_lvUpData) == 0LL)
    || (v38->fields.combineItemIds = combineItemIds,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v38->fields.combineItemIds,
          (System_Int32_array **)combineItemIds,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37),
        (v45 = *p_lvUpData) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  v45->fields.targetDetail = skillDetail;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v45->fields.targetDetail,
    (System_Int32_array **)skillDetail,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


void __fastcall AppendSkillCombineControl__SetSkillNeedQpData(
        AppendSkillCombineControl_o *this,
        int32_t qp,
        const MethodInfo *method)
{
  struct SetLevelUpData_o *lvUpData; // x8
  struct SetLevelUpData_o *v4; // x8

  lvUpData = this->fields.lvUpData;
  if ( !lvUpData || (lvUpData->fields.spendQp = qp, (v4 = this->fields.lvUpData) == 0LL) )
    sub_B170D4();
  v4->fields.haveQp = this->fields.userQp;
}


void __fastcall AppendSkillCombineControl__SetSkillOpenNeedData(
        AppendSkillCombineControl_o *this,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  signed __int64 v13; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct SetLevelUpData_o *lvUpData; // x8
  WarQuestSelectionMaster_o *v18; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserSvtCoinMaster_o *v20; // x20
  int64_t userId; // x21
  __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w0
  struct SetLevelUpData_o *v25; // x9
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40FC9D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, needItemIds);
    sub_B16FFC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_40FC9D8 = 1;
  }
  entity = 0LL;
  if ( !needItemIds )
    goto LABEL_30;
  v11 = *(_QWORD *)&needItemIds->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    v13 = (int)v11;
    while ( 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v12 >= needItemIds->max_length )
        break;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_30;
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                        Master_WarQuestSelectionMaster,
                                                                                        needItemIds->m_Items[v12 + 1],
                                                                                        (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( Master_WarQuestSelectionMaster && LODWORD(Master_WarQuestSelectionMaster->fields.seriazlier) == 29 )
      {
        if ( !needItemNums )
          goto LABEL_30;
        if ( v12 >= needItemNums->max_length )
          break;
        lvUpData = this->fields.lvUpData;
        if ( !lvUpData )
          goto LABEL_30;
        lvUpData->fields.spendSvtCoin = needItemNums->m_Items[v12 + 1];
      }
      if ( (__int64)++v12 >= v13 )
        goto LABEL_18;
    }
    sub_B17100(Master_WarQuestSelectionMaster, v15, v16);
    sub_B170A0();
  }
LABEL_18:
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v18 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_30;
  v20 = (UserSvtCoinMaster_o *)v18;
  userId = this->fields.userId;
  v23 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v23;
  *(_QWORD *)&v27.fields.fakeValue = v22;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
  if ( !v20 )
    goto LABEL_30;
  UserSvtCoinMaster__TryGetEntity(v20, &entity, userId, v24, 0LL);
  if ( !entity )
    return;
  v25 = this->fields.lvUpData;
  if ( !v25 )
LABEL_30:
    sub_B170D4();
  v25->fields.haveSvtCoin = entity->fields.num;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetStateInfoMsg(
        AppendSkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v12; // x20
  float v13; // s4
  float v14; // s5
  float v15; // s6
  UILabel_o *v16; // x19
  __int64 *v17; // x8
  System_String_o *v18; // x0
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC9DC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1708/*"APPEND_SKILL_LVMAX_MSG"*/, v6);
    sub_B16FFC(&StringLiteral_1709/*"APPEND_SKILL_LVUP_MSG"*/, v7);
    sub_B16FFC(&StringLiteral_1713/*"APPEND_SKILL_OPEN_MSG"*/, v8);
    sub_B16FFC(&StringLiteral_1703/*"APPEND_SKILL_COMBINE_INFO"*/, v9);
    byte_40FC9DC = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    if ( !detailInfoLb )
      goto LABEL_26;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                detailInfoLb,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v20.fields.g = 0.87891;
    v20.fields.b = 0.98828;
    v12 = (UIWidget_o *)Component_WebViewObject;
    v20.fields.r = 0.0;
    *(_QWORD *)&v19.fields.r = 0LL;
    *(_QWORD *)&v19.fields.b = 0LL;
    UnityEngine_Color___ctor_40666012(v20, v13, v14, v15, (const MethodInfo *)&v19);
    if ( !v12 )
LABEL_26:
      sub_B170D4();
    UIWidget__set_color(v12, v19, 0LL);
    switch ( this->fields.nowStatus )
    {
      case 0:
        v16 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_1703/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_23;
      case 1:
        v16 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_1713/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_23;
      case 2:
        v16 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_1709/*"APPEND_SKILL_LVUP_MSG"*/;
        goto LABEL_23;
      case 3:
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v12, white, 0LL);
        v16 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_1708/*"APPEND_SKILL_LVMAX_MSG"*/;
LABEL_23:
        v18 = LocalizationManager__Get((System_String_o *)*v17, 0LL);
        if ( !v16 )
          goto LABEL_26;
        UILabel__set_text(v16, v18, 0LL);
        break;
      default:
        return;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetSvtSkillCombineData(
        AppendSkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v4; // x19
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
  struct SvtUseSkillData_o *skillData; // x10
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Int32_array *svtSkillNumsList; // x10
  int32_t v29; // w25
  int32_t v30; // w21
  int32_t v31; // w24
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x28
  int32_t longName; // w25
  SkillEntity_o *v36; // x26
  __int64 v37; // x27
  int size; // w8
  LimitCntUpItemComponent_o *v39; // x0
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v42; // x27
  float v43; // s4
  float v44; // s5
  float v45; // s6
  const MethodInfo *v46; // x2
  int v47; // w8
  UnityEngine_GameObject_o *combineQpInfo; // x0
  const MethodInfo *v49; // x1
  int32_t nowStatus; // w8
  System_String_o *v51; // x24
  UISprite_o *v52; // x0
  UISprite_o *v53; // x0
  struct UISprite_o *v54; // x0
  UISprite_o *combineTxtImg; // x25
  struct UISprite_o *v56; // x0
  WarQuestSelectionMaster_o *v57; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v59; // x27
  __int64 v60; // x25
  __int64 v61; // x28
  int32_t v62; // w0
  SvtAppendPassiveSkillUnlockEntity_o *v63; // x0
  const MethodInfo *v64; // x3
  SvtAppendPassiveSkillUnlockEntity_o *v65; // x27
  bool appended; // w0
  System_String_o *name; // x28
  System_Int32_array *itemIds; // x23
  bool v69; // w25
  System_String_o *EffectExplanation; // x0
  const MethodInfo *v71; // x3
  bool v72; // w25
  char v73; // w28
  UnityEngine_GameObject_o *v74; // x0
  UISprite_o *v75; // x0
  UISprite_o *v76; // x0
  struct UISprite_o *v77; // x0
  WarQuestSelectionMaster_o *v78; // x0
  struct UserServantEntity_o *v79; // x8
  CombineAppendPassiveSkillMaster_o *v80; // x27
  __int64 v81; // x25
  __int64 v82; // x28
  int32_t v83; // w0
  CombineAppendPassiveSkillEntity_o *EntityWithTryNum; // x0
  UILabel_o *spendQpLabel; // x28
  CombineAppendPassiveSkillEntity_o *v86; // x27
  System_String_o *v87; // x0
  System_String_o *v88; // x25
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v92; // x23
  Il2CppObject *v93; // x0
  System_String_o *v94; // x0
  const MethodInfo *v95; // x3
  bool v96; // w0
  int32_t v97; // w8
  int32_t qp; // w9
  const MethodInfo *v99; // x2
  UIWidget_o *v100; // x23
  int v101; // s0
  bool v105; // w23
  System_String_o *v106; // x25
  UIWidget_o *v107; // x24
  int v108; // s0
  UILabel_o *v112; // x0
  int32_t v113; // w24
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x21
  ServantSkillInfoIconComponent_o *v115; // x0
  const MethodInfo *v116; // x1
  const MethodInfo *v117; // [xsp+0h] [xbp-90h]
  UIWidget_o *v118; // [xsp+18h] [xbp-78h]
  UIWidget_o *v119; // [xsp+18h] [xbp-78h]
  int32_t currentSkillId; // [xsp+24h] [xbp-6Ch]
  int32_t num; // [xsp+28h] [xbp-68h]
  int32_t userQp; // [xsp+2Ch] [xbp-64h] BYREF
  MethodInfo methoda; // [xsp+30h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  UnityEngine_Color_o v126; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v127; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_40FC9D5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v17);
    sub_B16FFC(&StringLiteral_17009/*"btn_txt_open2"*/, v18);
    sub_B16FFC(&StringLiteral_17083/*"buttontxt_synthesis"*/, v19);
    sub_B16FFC(&StringLiteral_12161/*"SHORT_ITEM_INFO_MSG"*/, v20);
    sub_B16FFC(&StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/, v21);
    sub_B16FFC(&StringLiteral_1704/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, v22);
    sub_B16FFC(&StringLiteral_1/*""*/, v23);
    this = (AppendSkillCombineControl_o *)sub_B16FFC(&StringLiteral_17081/*"buttontxt_notsynthesis"*/, v24);
    byte_40FC9D5 = 1;
  }
  skillData = v4->fields.skillData;
  if ( !skillData )
    goto LABEL_22;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_22;
  if ( svtUseSkillIdList->max_length <= idx )
    goto LABEL_101;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_22;
  if ( svtSkillLvList->max_length <= idx )
    goto LABEL_101;
  svtSkillNumsList = skillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_22;
  if ( svtSkillNumsList->max_length <= idx )
  {
LABEL_101:
    sub_B17100(this, *(_QWORD *)&idx, method);
    sub_B170A0();
  }
  v29 = svtUseSkillIdList->m_Items[idx + 1];
  v30 = svtSkillLvList->m_Items[idx + 1];
  v31 = svtSkillNumsList->m_Items[idx + 1];
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             v29,
             (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  currentSkillId = v29;
  num = v31;
  itemInfoList = v4->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_22;
  longName = (int32_t)Entity->fields.longName;
  v36 = (SkillEntity_o *)Entity;
  v37 = 0LL;
  while ( 1 )
  {
    size = itemInfoList->fields._size;
    if ( (int)v37 >= size )
      break;
    if ( size <= (unsigned int)v37 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v39 = itemInfoList->fields._items->m_Items[v37];
    if ( v39 )
    {
      LimitCntUpItemComponent__enableDispItemInfo(v39, 0LL);
      itemInfoList = v4->fields.itemInfoList;
      ++v37;
      if ( itemInfoList )
        continue;
    }
    goto LABEL_22;
  }
  detailInfoLb = (UnityEngine_Component_o *)v4->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v126.fields.g = 0.87891;
  v126.fields.b = 0.98828;
  v42 = (UIWidget_o *)Component_WebViewObject;
  v126.fields.r = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_40666012(v126, v43, v44, v45, &methoda);
  if ( !v42 )
    goto LABEL_22;
  *(_QWORD *)&v127.fields.r = methoda.methodPointer;
  *(_QWORD *)&v127.fields.b = methoda.invoker_method;
  UIWidget__set_color(v42, v127, 0LL);
  if ( v30 >= longName )
    v47 = 3;
  else
    v47 = v30 ? 2 : 1;
  v4->fields.nowStatus = v47;
  AppendSkillCombineControl__SetStateInfoMsg(v4, 0, v46);
  combineQpInfo = v4->fields.combineQpInfo;
  if ( !combineQpInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(combineQpInfo, 0, 0LL);
  nowStatus = v4->fields.nowStatus;
  v51 = (System_String_o *)StringLiteral_1/*""*/;
  if ( nowStatus == 1 )
  {
    combineTxtImg = v4->fields.combineTxtImg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17009/*"btn_txt_open2"*/, 0LL);
    v56 = v4->fields.combineTxtImg;
    if ( !v56 )
      goto LABEL_22;
    v118 = v42;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v56->klass->vtable._33_MakePixelPerfect.method)(
      v56,
      v56->klass->vtable._34_get_minWidth.methodPtr);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v57 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_22;
    v59 = (SvtAppendPassiveSkillUnlockMaster_o *)v57;
    v61 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v60 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v124.fields.currentCryptoKey = v61;
    *(_QWORD *)&v124.fields.fakeValue = v60;
    v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v124, 0LL);
    if ( !v59 )
      goto LABEL_22;
    v63 = SvtAppendPassiveSkillUnlockMaster__GetEntity(v59, v62, num, 0LL);
    v4->fields._IsExeCombine_k__BackingField = 1;
    if ( !v63 )
      goto LABEL_22;
    v65 = v63;
    appended = AppendSkillCombineControl__SetNeedItemList(v4, v63->fields.itemIds, v63->fields.itemNums, v64);
    name = v36->fields.name;
    itemIds = v65->fields.itemIds;
    v69 = appended;
    EffectExplanation = SkillEntity__getEffectExplanation(v36, v30 + 1, 0LL);
    AppendSkillCombineControl__SetSkillLevelUpData(
      v4,
      idx,
      currentSkillId,
      v30,
      num,
      name,
      itemIds,
      EffectExplanation,
      v117);
    AppendSkillCombineControl__SetSkillOpenNeedData(v4, v65->fields.itemIds, v65->fields.itemNums, v71);
    if ( v69 )
    {
      v42 = v118;
      v72 = 1;
      v73 = 1;
      goto LABEL_87;
    }
    v42 = v118;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_1704/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0LL);
    goto LABEL_86;
  }
  if ( nowStatus != 2 )
  {
    if ( nowStatus == 3 )
    {
      v4->fields._IsExeCombine_k__BackingField = 0;
      AppendSkillCombineControl__SetExeBtnState(v4, v49);
      v52 = v4->fields.combineTxtImg;
      if ( !v52 )
        goto LABEL_22;
      UISprite__set_atlas(v52, v4->fields.baseAtlas, 0LL);
      v53 = v4->fields.combineTxtImg;
      if ( !v53 )
        goto LABEL_22;
      UISprite__set_spriteName(v53, (System_String_o *)StringLiteral_17081/*"buttontxt_notsynthesis"*/, 0LL);
      v54 = v4->fields.combineTxtImg;
      if ( !v54 )
        goto LABEL_22;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v54->klass->vtable._33_MakePixelPerfect.method)(
        v54,
        v54->klass->vtable._34_get_minWidth.methodPtr);
    }
LABEL_86:
    v73 = 0;
    v72 = 1;
    goto LABEL_87;
  }
  v74 = v4->fields.combineQpInfo;
  if ( !v74 )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(v74, 1, 0LL);
  v75 = v4->fields.combineTxtImg;
  if ( !v75 )
    goto LABEL_22;
  UISprite__set_atlas(v75, v4->fields.baseAtlas, 0LL);
  v76 = v4->fields.combineTxtImg;
  if ( !v76 )
    goto LABEL_22;
  UISprite__set_spriteName(v76, (System_String_o *)StringLiteral_17083/*"buttontxt_synthesis"*/, 0LL);
  v77 = v4->fields.combineTxtImg;
  if ( !v77 )
    goto LABEL_22;
  v119 = v42;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v77->klass->vtable._33_MakePixelPerfect.method)(
    v77,
    v77->klass->vtable._34_get_minWidth.methodPtr);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v78 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v79 = v4->fields.baseUserServantEntity;
  if ( !v79 )
    goto LABEL_22;
  v80 = (CombineAppendPassiveSkillMaster_o *)v78;
  v82 = *(_QWORD *)&v79->fields.svtId.fields.currentCryptoKey;
  v81 = *(_QWORD *)&v79->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v125.fields.currentCryptoKey = v82;
  *(_QWORD *)&v125.fields.fakeValue = v81;
  v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v125, 0LL);
  if ( !v80 )
    goto LABEL_22;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v80, v83, num, v30, 0LL);
  spendQpLabel = v4->fields.spendQpLabel;
  v86 = EntityWithTryNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v87 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  if ( !v86 )
    goto LABEL_22;
  v88 = v87;
  LODWORD(methoda.methodPointer) = v86->fields.qp;
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  v90 = System_String__Format(v88, v89, 0LL);
  if ( !spendQpLabel )
    goto LABEL_22;
  UILabel__set_text(spendQpLabel, v90, 0LL);
  haveQpLabel = v4->fields.haveQpLabel;
  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  userQp = v4->fields.userQp;
  v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userQp);
  v94 = System_String__Format(v92, v93, 0LL);
  if ( !haveQpLabel )
    goto LABEL_22;
  UILabel__set_text(haveQpLabel, v94, 0LL);
  v4->fields._IsExeCombine_k__BackingField = 1;
  v96 = AppendSkillCombineControl__SetNeedItemList(v4, v86->fields.itemIds, v86->fields.itemNums, v95);
  v97 = v4->fields.userQp;
  qp = v86->fields.qp;
  v73 = v96;
  v72 = v97 >= qp;
  if ( v97 < qp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( (v73 & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12161/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  AppendSkillCombineControl__SetSkillLevelUpData(
    v4,
    idx,
    currentSkillId,
    v30,
    num,
    v36->fields.name,
    v86->fields.itemIds,
    (System_String_o *)StringLiteral_1/*""*/,
    v117);
  AppendSkillCombineControl__SetSkillNeedQpData(v4, v86->fields.qp, v99);
  v42 = v119;
LABEL_87:
  v100 = (UIWidget_o *)v4->fields.spendQpLabel;
  *(UnityEngine_Color_o *)&v101 = UnityEngine_Color__get_white(0LL);
  if ( !v100 )
    goto LABEL_22;
  UIWidget__set_color(v100, *(UnityEngine_Color_o *)&v101, 0LL);
  v105 = v72 & v73;
  if ( (v72 & (unsigned __int8)v73 & 1) == 0 && v4->fields.nowStatus != 3 )
  {
    if ( !v72 )
    {
      v106 = v51;
      v107 = (UIWidget_o *)v4->fields.spendQpLabel;
      *(UnityEngine_Color_o *)&v108 = UnityEngine_Color__get_red(0LL);
      if ( !v107 )
        goto LABEL_22;
      UIWidget__set_color(v107, *(UnityEngine_Color_o *)&v108, 0LL);
      v51 = v106;
    }
    white = UnityEngine_Color__get_white(0LL);
    UIWidget__set_color(v42, white, 0LL);
    v112 = v4->fields.detailInfoLb;
    if ( v112 )
    {
      UILabel__set_text(v112, v51, 0LL);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_95;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_95:
  v113 = v30;
  targetList = v4->fields.targetList;
  if ( !targetList )
    goto LABEL_22;
  if ( targetList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v115 = targetList->fields._items->m_Items[idx];
  if ( !v115 )
    goto LABEL_22;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(v115, v113, v105, 0LL);
  AppendSkillCombineControl__SetExeBtnState(v4, v116);
}