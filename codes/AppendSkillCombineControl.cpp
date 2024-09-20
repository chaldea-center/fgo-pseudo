void __fastcall AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E722 & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    byte_4A5E722 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall AppendSkillCombineControl__CheckIsMaxLvSkills(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x8
  bool v6; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x23
  unsigned __int64 v8; // x21
  __int64 v9; // x27
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5E71D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_4A5E71D = 1;
  }
  entity = 0LL;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0LL)) == 0LL
    || (v4 = *(_QWORD *)&this->fields.m_CachedPtr) == 0 )
  {
LABEL_22:
    sub_1B8880C(this, resData);
  }
  v5 = *(_QWORD *)(v4 + 24);
  v6 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v8 = 0LL;
    v9 = v4 + 32;
    do
    {
      if ( v8 >= (unsigned int)v5 )
LABEL_21:
        sub_1B88814(this, resData);
      if ( *(int *)(v9 + 4 * v8) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( v8 >= *(unsigned int *)(v4 + 24) )
          goto LABEL_21;
        if ( !this )
          goto LABEL_22;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                &entity,
                                                *(_DWORD *)(v9 + 4 * v8),
                                                (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity || !m_CancellationTokenSource )
            goto LABEL_22;
          if ( v8 >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
            goto LABEL_21;
          if ( *(&m_CancellationTokenSource->fields._state + v8) < SLODWORD(entity[2].monitor) )
            break;
        }
      }
      LODWORD(v5) = *(_DWORD *)(v4 + 24);
      v6 = (__int64)++v8 < (int)v5;
    }
    while ( (__int64)v8 < (int)v5 );
  }
  return !v6;
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
  UILabel_o *preSelectBaseLb; // x20
  void *gameObject; // x0
  __int64 v5; // x1
  int v6; // w21
  int32_t v7; // w20
  int v8; // w21
  int32_t v9; // w20

  if ( (byte_4A5E713 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_2098/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/);
    byte_4A5E713 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_2098/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_23;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)gameObject, 0LL);
  gameObject = this->fields.preSelectBaseLb;
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.baseSelectInfoLb;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.selectSkillHelpLb;
  if ( !gameObject )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0LL);
  gameObject = this->fields.skillInfoList;
  if ( !gameObject )
    goto LABEL_23;
  v6 = *((_DWORD *)gameObject + 6);
  if ( v6 >= 1 )
  {
    v7 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v7,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( v6 == ++v7 )
        goto LABEL_17;
      gameObject = this->fields.skillInfoList;
    }
    while ( gameObject );
LABEL_23:
    sub_1B8880C(gameObject, v5);
  }
LABEL_17:
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_23;
  v8 = *((_DWORD *)gameObject + 6);
  if ( v8 >= 1 )
  {
    v9 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v9,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( v8 == ++v9 )
        return;
      gameObject = this->fields.itemInfoList;
    }
    while ( gameObject );
    goto LABEL_23;
  }
}


void __fastcall AppendSkillCombineControl__InitSvtSkillCombine(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  void *helpBtn; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w8
  UISprite_o *titleImg; // x20
  UnityEngine_Object_o *charaGraph; // x20
  ServantStatusBattleListViewItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5E712 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20528/*"img_txt_extraskill_item"*/);
    sub_1B885B0(&StringLiteral_17676/*"buttontxt_synthesis"*/);
    sub_1B885B0(&StringLiteral_20527/*"img_txt_extraskill"*/);
    byte_4A5E712 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0LL, 0, 0, 0, 0, 0LL);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  AppendSkillCombineControl__InitDispCombineInfo(this, v3);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v6);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_21;
  v7 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.combineTxtImg;
  this->fields.userQp = v7;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_atlas((UISprite_o *)helpBtn, this->fields.baseAtlas, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17676/*"buttontxt_synthesis"*/, 0LL);
  titleImg = this->fields.titleImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_20527/*"img_txt_extraskill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20528/*"img_txt_extraskill_item"*/, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_21;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  helpBtn = this->fields.titleImg;
  if ( !helpBtn )
    goto LABEL_21;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  helpBtn = this->fields.itemTitleImg;
  if ( !helpBtn )
    goto LABEL_21;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  helpBtn = this->fields.combineQpInfo;
  if ( !helpBtn )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph;
    helpBtn = p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1B88554(p_charaGraph, 0, v12, v13);
      return;
    }
LABEL_21:
    sub_1B8880C(helpBtn, v4);
  }
}


void __fastcall AppendSkillCombineControl__OnClickExeCombine(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  int32_t nowStatus; // w8
  struct SetRarityDialogControl_o *v4; // x20
  struct SetLevelUpData_o *v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  bool v9; // w3
  SetRarityDialogControl_o *v10; // x0
  SetLevelUpData_o *v11; // x1
  struct SetRarityDialogControl_o *exeCombineDlg; // x20
  struct SetLevelUpData_o *lvUpData; // x19

  if ( (byte_4A5E71F & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2103/*"APPEND_SKILL_LVUP_TITLE"*/);
    sub_1B885B0(&StringLiteral_2108/*"APPEND_SKILL_OPEN_TITLE"*/);
    byte_4A5E71F = 1;
  }
  nowStatus = this->fields.nowStatus;
  if ( nowStatus == 2 )
  {
    exeCombineDlg = this->fields.exeCombineDlg;
    lvUpData = this->fields.lvUpData;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2103/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
    if ( exeCombineDlg )
    {
      v8 = v6;
      v10 = exeCombineDlg;
      v11 = lvUpData;
      v9 = 0;
      goto LABEL_13;
    }
LABEL_15:
    sub_1B8880C(v6, v7);
  }
  if ( nowStatus == 1 )
  {
    v4 = this->fields.exeCombineDlg;
    v5 = this->fields.lvUpData;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2108/*"APPEND_SKILL_OPEN_TITLE"*/, 0LL);
    if ( v4 )
    {
      v8 = v6;
      v9 = 1;
      v10 = v4;
      v11 = v5;
LABEL_13:
      SetRarityDialogControl__SetAppendSkillCombineInfo(v10, v11, v8, v9, 0LL);
      return;
    }
    goto LABEL_15;
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
  struct SvtUseSkillData_o *skillData; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  Il2CppObject *effect; // x19
  UnityEngine_Component_o *v10; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  AppendSkillCombineControl_o *v12; // x21
  AppendSkillCombineControl_o *v13; // x20
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4A5E721 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (AppendSkillCombineControl_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E721 = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_21;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_21;
  if ( svtSkillLvList->max_length <= idx )
    sub_1B88814(this, *(_QWORD *)&idx);
  if ( svtSkillLvList->m_Items[idx + 1] == 1 )
  {
    effect = (Il2CppObject *)v6->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (AppendSkillCombineControl_o *)UnityEngine_Object__Instantiate_object_(
                                            effect,
                                            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
      if ( this )
      {
        v10 = (UnityEngine_Component_o *)this;
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)this, callback, 0LL);
        this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v10, 0LL);
        skillInfoList = (System_Collections_Generic_List_object__o *)v6->fields.skillInfoList;
        if ( skillInfoList )
        {
          v12 = this;
          this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                                  skillInfoList,
                                                  idx,
                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
          if ( this )
          {
            this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
            if ( this )
            {
              this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0LL);
              if ( v12 )
              {
                UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v12, (UnityEngine_Transform_o *)this, 0LL);
                this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v10, 0LL);
                v13 = this;
                if ( !byte_4A55CE1 )
                {
                  this = (AppendSkillCombineControl_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                  byte_4A55CE1 = 1;
                }
                if ( v13 )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)v13,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v10, 0LL);
                  if ( this )
                  {
                    v14.fields.x = 0.5;
                    v14.fields.y = 0.5;
                    v14.fields.z = 0.5;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v14, 0LL);
                    CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v10, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B8880C(this, *(_QWORD *)&idx);
  }
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall AppendSkillCombineControl__SetBaseSvtCardImg(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v4; // x20
  int32_t CardImageLimitCount; // w21
  Il2CppObject *Master_object; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  ServantLimitImageMaster_o *v9; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v12; // w21
  AppendSkillCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_37906428; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4A5E716 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E716 = 1;
  }
  if ( !userSvtEnt )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtEnt, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v8 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  if ( !v9 )
    goto LABEL_15;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v9,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v12 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = (AppendSkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37906428 = CharaGraphManager__CreateTexturePrefab_37906428(
                               v4->fields.charaGraphBase,
                               userSvtEnt,
                               v12,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_37906428;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.charaGraph, (int32_t)TexturePrefab_37906428, v15, v16);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_15:
    sub_1B8880C(this, userSvtEnt);
  UICharaGraphTexture__SetCharacter_40836020((UICharaGraphTexture_o *)this, userSvtEnt, v12, 0LL, 0, 0LL);
}


void __fastcall AppendSkillCombineControl__SetBaseSvtSkillInfo(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-50h]

  if ( (byte_4A5E714 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5E714 = 1;
  }
  if ( userSvtEnt )
  {
    v7 = *(_OWORD *)&userSvtEnt->fields.userId.fields.fakeValue;
    *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v18.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v17 = v18;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v17, 0LL);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, (int32_t)userSvtEnt, v9, v10);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
    {
      sub_1B8880C(preSelectBaseLb, v11);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillData, (int32_t)AppendSkillInfo, v14, v15);
    AppendSkillCombineControl__SetSkillIconInfo(this, this->fields.skillData, v16);
  }
}


void __fastcall AppendSkillCombineControl__SetExeBtnState(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v6; // x19
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E71E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5E71E = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v6 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( v4 )
    {
      v7.fields.r = 1.0;
      v7.fields.g = 1.0;
      v7.fields.b = 1.0;
      v7.fields.a = 1.0;
      UIWidget__set_color(v4, v7, 0LL);
      if ( v6 )
      {
        UnityEngine_Behaviour__set_enabled(v6, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v6, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B8880C(combineBtnBg, method);
  }
  if ( !v4 )
    goto LABEL_12;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  UIWidget__set_color(v4, v8, 0LL);
  if ( !v6 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetNeedItemInfo(
        AppendSkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v4; // x20
  UILabel_o *selectSkillHelpLb; // x21
  const MethodInfo *v6; // x2
  int32_t v7; // w21
  struct System_Int32_array *useSkillIdList; // x8
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_4A5E717 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1B885B0(&StringLiteral_8767/*"MSG_SKILL_SELECT"*/);
    byte_4A5E717 = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList )
      goto LABEL_15;
    selectSkillHelpLb = v4->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8767/*"MSG_SKILL_SELECT"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0LL),
          (this = (AppendSkillCombineControl_o *)v4->fields.targetList) == 0LL) )
    {
LABEL_15:
      sub_1B8880C(this, *(_QWORD *)&idx);
    }
    v7 = 0;
    while ( v7 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v7,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
          sub_1B88814(this, *(_QWORD *)&idx);
        if ( this )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.baseAtlas),
            0LL);
          AppendSkillCombineControl__SetSvtSkillCombineData(v4, v7, v9);
          this = (AppendSkillCombineControl_o *)v4->fields.targetList;
          ++v7;
          if ( this )
            continue;
        }
      }
      goto LABEL_15;
    }
    AppendSkillCombineControl__SetSvtSkillCombineData(v4, idx, v6);
    AppendSkillCombineControl__UpdateCombineItemInfoList(v4, idx, v10);
  }
}


bool __fastcall AppendSkillCombineControl__SetNeedItemList(
        AppendSkillCombineControl_o *this,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v6; // x21
  unsigned __int64 v7; // x23
  __int64 v8; // x26
  char v9; // w22
  AppendSkillCombineControl_o *v10; // x24

  v6 = this;
  if ( (byte_4A5E719 & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_4A5E719 = 1;
  }
  if ( !needItemIds )
    goto LABEL_15;
  if ( (int)*(_QWORD *)&needItemIds->max_length >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)*(_QWORD *)&needItemIds->max_length;
    v9 = 1;
    while ( 1 )
    {
      this = (AppendSkillCombineControl_o *)v6->fields.itemInfoList;
      if ( !this )
        break;
      this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v7,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( v7 >= needItemIds->max_length )
        goto LABEL_16;
      if ( !needItemNums )
        break;
      if ( v7 >= needItemNums->max_length )
LABEL_16:
        sub_1B88814(this, needItemIds);
      v10 = this;
      if ( !this )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)this,
        v6->fields.userId,
        needItemIds->m_Items[v7 + 1],
        needItemNums->m_Items[v7 + 1],
        0LL);
      ++v7;
      v9 &= LOBYTE(v10->fields.infoBack) != 0;
      if ( v8 == v7 )
        return v9;
    }
LABEL_15:
    sub_1B8880C(this, needItemIds);
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
  int32_t v3; // w3
  SvtUseSkillData_o *v4; // x25
  AppendSkillCombineControl_o *v5; // x20
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array **p_useSkillIdList; // x21
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v9; // x19
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  unsigned __int64 v14; // x23
  struct System_Int32_array *v15; // x8
  int32_t v16; // w24
  int32_t type; // w26
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v20; // x27
  int32_t v21; // w28
  SvtUseSkillData_o *v22; // x22
  Il2CppObject *Item; // x25
  ServantSkillInfoIconComponent_ClickDelegate_o *v24; // x29
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v30; // x8
  AppendSkillCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v4 = skillData;
  v5 = this;
  if ( (byte_4A5E715 & 1) == 0 )
  {
    sub_1B885B0(&Method_AppendSkillCombineControl_OnClickInfo__);
    sub_1B885B0(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1B885B0(&StringLiteral_919/*"-"*/);
    byte_4A5E715 = 1;
  }
  if ( !v4 )
    goto LABEL_28;
  svtUseSkillIdList = v4->fields.svtUseSkillIdList;
  p_useSkillIdList = &v5->fields.useSkillIdList;
  v5->fields.useSkillIdList = svtUseSkillIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v5->fields.useSkillIdList,
    (int32_t)svtUseSkillIdList,
    (int32_t)method,
    v3);
  useSkillIdList = v5->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_28;
  v9 = *(_QWORD *)&useSkillIdList->max_length;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v5->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v10;
  p_targetList = (AppendSkillCombineControl_o **)&v5->fields.targetList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.targetList, (int32_t)v10, v11, v12);
  if ( (int)v9 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v14 >= v15->max_length )
        goto LABEL_29;
      v16 = v15->m_Items[v14 + 1];
      if ( v16 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                v16,
                                                (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          type = this->fields.type;
          p_m_CancellationTokenSource = &this->fields.m_CancellationTokenSource;
        }
        else
        {
          p_m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o **)&StringLiteral_919/*"-"*/;
          type = 10;
        }
        svtSkillLvList = v4->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v14 >= svtSkillLvList->max_length )
LABEL_29:
          sub_1B88814(this, skillData);
        this = (AppendSkillCombineControl_o *)v5->fields.skillInfoList;
        if ( !this )
          break;
        v20 = (System_String_o *)*p_m_CancellationTokenSource;
        v21 = svtSkillLvList->m_Items[v14 + 1];
        v22 = v4;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v14,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v24 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1B887FC(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v24,
          (Il2CppObject *)v5,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0LL);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_45392452(
          (ServantSkillInfoIconComponent_o *)Item,
          v14,
          v20,
          v16,
          v21,
          type,
          v24,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v27 = *(_QWORD *)&this->fields.m_CachedPtr;
        v28 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v27 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v27 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = v27 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v30 + 32) = Item;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)Item, v25, v26);
        }
        v4 = v22;
      }
      if ( (unsigned int)v9 == ++v14 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1B8880C(this, skillData);
  }
LABEL_27:
  AppendSkillCombineControl__SetNeedItemInfo(v5, v5->fields.currentIdx, v13);
}


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
  SetLevelUpData_o *v17; // x28
  struct SetLevelUpData_o **p_lvUpData; // x26
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  struct SetLevelUpData_o *lvUpData; // x0
  ServantStatusBattleListViewItem_o *p_targetName; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  ServantStatusBattleListViewItem_o *p_combineItemIds; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A5E71A & 1) == 0 )
  {
    sub_1B885B0(&SetLevelUpData_TypeInfo);
    byte_4A5E71A = 1;
  }
  v17 = (SetLevelUpData_o *)sub_1B887FC(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v17, 0LL);
  p_lvUpData = &this->fields.lvUpData;
  this->fields.lvUpData = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lvUpData, (int32_t)v17, v19, v20);
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_7;
  lvUpData->fields.targetName = skillName;
  p_targetName = (ServantStatusBattleListViewItem_o *)&lvUpData->fields.targetName;
  LODWORD(p_targetName[-1].fields.name) = idx;
  *(_DWORD *)&p_targetName[-1].fields.isEnabled = currentSkillId;
  sub_1B88554(p_targetName, (int32_t)skillName, v22, v23);
  lvUpData = *p_lvUpData;
  if ( !*p_lvUpData
    || (lvUpData->fields.combineItemIds = combineItemIds,
        p_combineItemIds = (ServantStatusBattleListViewItem_o *)&lvUpData->fields.combineItemIds,
        p_combineItemIds[-1].fields.dispLimitCount.fields.fakeValue = currentSkillLv,
        *(_DWORD *)&p_combineItemIds[-1].fields.dispLimitCount.fields.inited = currentSkillLv + 1,
        LODWORD(p_combineItemIds[-1].fields.basePosition.fields.x) = currentSkillNum,
        sub_1B88554(p_combineItemIds, (int32_t)combineItemIds, v26, v27),
        (lvUpData = *p_lvUpData) == 0LL) )
  {
LABEL_7:
    sub_1B8880C(lvUpData, v21);
  }
  lvUpData->fields.targetDetail = skillDetail;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&lvUpData->fields.targetDetail, (int32_t)skillDetail, v29, v30);
}


void __fastcall AppendSkillCombineControl__SetSkillNeedQpData(
        AppendSkillCombineControl_o *this,
        int32_t qp,
        const MethodInfo *method)
{
  struct SetLevelUpData_o *lvUpData; // x8

  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    sub_1B8880C(this, qp);
  lvUpData->fields.spendQp = qp;
  lvUpData->fields.haveQp = this->fields.userQp;
}


void __fastcall AppendSkillCombineControl__SetSkillOpenNeedData(
        AppendSkillCombineControl_o *this,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v6; // x19
  unsigned __int64 v7; // x23
  __int64 v8; // x26
  struct SetLevelUpData_o *lvUpData; // x8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserSvtCoinMaster_o *v11; // x20
  int64_t userId; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  struct SetLevelUpData_o *v15; // x9
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v6 = this;
  if ( (byte_4A5E71B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (AppendSkillCombineControl_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E71B = 1;
  }
  if ( !needItemIds )
    goto LABEL_27;
  if ( (int)*(_QWORD *)&needItemIds->max_length >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)*(_QWORD *)&needItemIds->max_length;
    while ( 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v7 >= needItemIds->max_length )
        break;
      if ( !this )
        goto LABEL_27;
      this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              needItemIds->m_Items[v7 + 1],
                                              (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( this && LODWORD(this->fields.baseUserServantEntity) == 29 )
      {
        if ( !needItemNums )
          goto LABEL_27;
        if ( v7 >= needItemNums->max_length )
          break;
        lvUpData = v6->fields.lvUpData;
        if ( !lvUpData )
          goto LABEL_27;
        lvUpData->fields.spendSvtCoin = needItemNums->m_Items[v7 + 1];
      }
      if ( v8 == ++v7 )
        goto LABEL_17;
    }
    sub_1B88814(this, needItemIds);
  }
LABEL_17:
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  baseUserServantEntity = v6->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v11 = (UserSvtCoinMaster_o *)this;
  userId = v6->fields.userId;
  v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  if ( !v11 )
    goto LABEL_27;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v11, &entity, userId, (int32_t)this, 0LL);
  if ( !entity )
    return;
  v15 = v6->fields.lvUpData;
  if ( !v15 )
LABEL_27:
    sub_1B8880C(this, needItemIds);
  v15->fields.haveSvtCoin = entity->fields.num;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetStateInfoMsg(
        AppendSkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x20
  UILabel_o *v7; // x19
  __int64 *v8; // x8
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E720 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2101/*"APPEND_SKILL_LVMAX_MSG"*/);
    sub_1B885B0(&StringLiteral_2102/*"APPEND_SKILL_LVUP_MSG"*/);
    sub_1B885B0(&StringLiteral_2106/*"APPEND_SKILL_OPEN_MSG"*/);
    sub_1B885B0(&StringLiteral_2096/*"APPEND_SKILL_COMBINE_INFO"*/);
    byte_4A5E720 = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    if ( !detailInfoLb
      || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      detailInfoLb,
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
    {
LABEL_21:
      sub_1B8880C(detailInfoLb, *(_QWORD *)&state);
    }
    v9.fields.r = 0.0;
    v9.fields.a = 1.0;
    v9.fields.g = 0.87891;
    v9.fields.b = 0.98828;
    v6 = (UIWidget_o *)detailInfoLb;
    UIWidget__set_color((UIWidget_o *)detailInfoLb, v9, 0LL);
    switch ( this->fields.nowStatus )
    {
      case 0:
        v7 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v8 = &StringLiteral_2096/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_19;
      case 1:
        v7 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v8 = &StringLiteral_2106/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_19;
      case 2:
        v7 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v8 = &StringLiteral_2102/*"APPEND_SKILL_LVUP_MSG"*/;
        goto LABEL_19;
      case 3:
        v10.fields.r = 1.0;
        v10.fields.g = 1.0;
        v10.fields.b = 1.0;
        v10.fields.a = 1.0;
        UIWidget__set_color(v6, v10, 0LL);
        v7 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v8 = &StringLiteral_2101/*"APPEND_SKILL_LVMAX_MSG"*/;
LABEL_19:
        detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v8, 0LL);
        if ( !v7 )
          goto LABEL_21;
        UILabel__set_text(v7, (System_String_o *)detailInfoLb, 0LL);
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
  struct SvtUseSkillData_o *skillData; // x10
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Int32_array *svtSkillNumsList; // x10
  int32_t v9; // w24
  int32_t v10; // w21
  int32_t v11; // w23
  Il2CppObject *Entity; // x0
  SkillEntity_o *v13; // x26
  int32_t maxLv; // w27
  int32_t v15; // w22
  UIWidget_o *v16; // x22
  const MethodInfo *v17; // x2
  int v18; // w8
  int32_t nowStatus; // w8
  System_String_o *v20; // x29
  UISprite_o *combineTxtImg; // x27
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v23; // x27
  __int64 v24; // x28
  __int64 v25; // x29
  const MethodInfo *v26; // x3
  AppendSkillCombineControl_o *v27; // x27
  bool appended; // w0
  System_String_o *name; // x29
  System_Int32_array *m_CancellationTokenSource; // x25
  bool v31; // w28
  System_String_o *EffectExplanation; // x0
  const MethodInfo *v33; // x3
  bool v34; // w25
  char v35; // w28
  struct UserServantEntity_o *v36; // x8
  CombineAppendPassiveSkillMaster_o *v37; // x27
  __int64 v38; // x28
  __int64 v39; // x29
  CombineAppendPassiveSkillEntity_o *EntityWithTryNum; // x0
  UILabel_o *spendQpLabel; // x28
  CombineAppendPassiveSkillEntity_o *v42; // x27
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  AppendSkillCombineControl_o *v46; // x29
  Il2CppObject *v47; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v49; // x25
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  const MethodInfo *v54; // x3
  bool v55; // w0
  int32_t v56; // w8
  int32_t v57; // w9
  struct SetLevelUpData_o *lvUpData; // x8
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // [xsp+0h] [xbp-80h]
  System_String_o *v61; // [xsp+10h] [xbp-70h]
  System_String_o *v62; // [xsp+10h] [xbp-70h]
  int32_t userQp; // [xsp+18h] [xbp-68h] BYREF
  int32_t qp; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4A5E718 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_17598/*"btn_txt_open2"*/);
    sub_1B885B0(&StringLiteral_17676/*"buttontxt_synthesis"*/);
    sub_1B885B0(&StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_2097/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (AppendSkillCombineControl_o *)sub_1B885B0(&StringLiteral_17673/*"buttontxt_notsynthesis"*/);
    byte_4A5E718 = 1;
  }
  skillData = v4->fields.skillData;
  if ( !skillData )
    goto LABEL_19;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_19;
  if ( svtUseSkillIdList->max_length <= idx )
    goto LABEL_88;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_19;
  if ( svtSkillLvList->max_length <= idx )
    goto LABEL_88;
  svtSkillNumsList = skillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_19;
  if ( svtSkillNumsList->max_length <= idx )
LABEL_88:
    sub_1B88814(this, *(_QWORD *)&idx);
  v9 = svtUseSkillIdList->m_Items[idx + 1];
  v10 = svtSkillLvList->m_Items[idx + 1];
  v11 = svtSkillNumsList->m_Items[idx + 1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v9,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v13 = (SkillEntity_o *)Entity;
  this = (AppendSkillCombineControl_o *)v4->fields.itemInfoList;
  if ( !this )
    goto LABEL_19;
  maxLv = v13->fields.maxLv;
  v15 = 0;
  while ( v15 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v15,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( this )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.itemInfoList;
      ++v15;
      if ( this )
        continue;
    }
    goto LABEL_19;
  }
  this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
  if ( !this )
    goto LABEL_19;
  this = (AppendSkillCombineControl_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_19;
  v67.fields.r = 0.0;
  v67.fields.a = 1.0;
  v67.fields.g = 0.87891;
  v67.fields.b = 0.98828;
  v16 = (UIWidget_o *)this;
  UIWidget__set_color((UIWidget_o *)this, v67, 0LL);
  if ( v10 >= maxLv )
    v18 = 3;
  else
    v18 = v10 ? 2 : 1;
  v4->fields.nowStatus = v18;
  AppendSkillCombineControl__SetStateInfoMsg(v4, 0, v17);
  this = (AppendSkillCombineControl_o *)v4->fields.combineQpInfo;
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  nowStatus = v4->fields.nowStatus;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( nowStatus == 1 )
  {
    combineTxtImg = v4->fields.combineTxtImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17598/*"btn_txt_open2"*/, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_19;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v61 = v20;
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_19;
    v23 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v25 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v65.fields.currentCryptoKey = v25;
    *(_QWORD *)&v65.fields.fakeValue = v24;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v65, 0LL);
    if ( !v23 )
      goto LABEL_19;
    this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v23, (int32_t)this, v11, 0LL);
    v4->fields._IsExeCombine_k__BackingField = 1;
    if ( !this )
      goto LABEL_19;
    v27 = this;
    appended = AppendSkillCombineControl__SetNeedItemList(
                 v4,
                 (System_Int32_array *)this->fields.m_CancellationTokenSource,
                 (System_Int32_array *)this->fields.combineRootComponent,
                 v26);
    name = v13->fields.name;
    m_CancellationTokenSource = (System_Int32_array *)v27->fields.m_CancellationTokenSource;
    v31 = appended;
    EffectExplanation = SkillEntity__getEffectExplanation(v13, v10 + 1, 0LL);
    AppendSkillCombineControl__SetSkillLevelUpData(
      v4,
      idx,
      v9,
      v10,
      v11,
      name,
      m_CancellationTokenSource,
      EffectExplanation,
      v60);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v4,
      (System_Int32_array *)v27->fields.m_CancellationTokenSource,
      (System_Int32_array *)v27->fields.combineRootComponent,
      v33);
    if ( v31 )
    {
      v20 = v61;
      v34 = 1;
      v35 = 1;
      goto LABEL_76;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2097/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0LL);
    goto LABEL_75;
  }
  if ( nowStatus != 2 )
  {
    if ( nowStatus == 3 )
    {
      v4->fields._IsExeCombine_k__BackingField = 0;
      AppendSkillCombineControl__SetExeBtnState(v4, *(const MethodInfo **)&idx);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      UISprite__set_atlas((UISprite_o *)this, v4->fields.baseAtlas, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17673/*"buttontxt_notsynthesis"*/, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
        this,
        this->klass[2]._1.name);
    }
LABEL_75:
    v35 = 0;
    v34 = 1;
    goto LABEL_76;
  }
  this = (AppendSkillCombineControl_o *)v4->fields.combineQpInfo;
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)this, v4->fields.baseAtlas, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17676/*"buttontxt_synthesis"*/, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v62 = v20;
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v36 = v4->fields.baseUserServantEntity;
  if ( !v36 )
    goto LABEL_19;
  v37 = (CombineAppendPassiveSkillMaster_o *)this;
  v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v66.fields.currentCryptoKey = v39;
  *(_QWORD *)&v66.fields.fakeValue = v38;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v66, 0LL);
  if ( !v37 )
    goto LABEL_19;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v37, (int32_t)this, v11, v10, 0LL);
  spendQpLabel = v4->fields.spendQpLabel;
  v42 = EntityWithTryNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  if ( !v42 )
    goto LABEL_19;
  v46 = this;
  qp = v42->fields.qp;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v43, v44, v45);
  this = (AppendSkillCombineControl_o *)System_String__Format((System_String_o *)v46, v47, 0LL);
  if ( !spendQpLabel )
    goto LABEL_19;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0LL);
  haveQpLabel = v4->fields.haveQpLabel;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  userQp = v4->fields.userQp;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userQp, v50, v51, v52);
  this = (AppendSkillCombineControl_o *)System_String__Format(v49, v53, 0LL);
  v20 = v62;
  if ( !haveQpLabel )
    goto LABEL_19;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0LL);
  v4->fields._IsExeCombine_k__BackingField = 1;
  v55 = AppendSkillCombineControl__SetNeedItemList(v4, v42->fields.itemIds, v42->fields.itemNums, v54);
  v56 = v4->fields.userQp;
  v57 = v42->fields.qp;
  v35 = v55;
  v34 = v56 >= v57;
  if ( v56 < v57 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( (v35 & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  AppendSkillCombineControl__SetSkillLevelUpData(
    v4,
    idx,
    v9,
    v10,
    v11,
    v13->fields.name,
    v42->fields.itemIds,
    (System_String_o *)StringLiteral_1/*""*/,
    v60);
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_19;
  lvUpData->fields.spendQp = v42->fields.qp;
  lvUpData->fields.haveQp = v4->fields.userQp;
LABEL_76:
  this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
  if ( !this )
    goto LABEL_19;
  v68.fields.r = 1.0;
  v68.fields.g = 1.0;
  v68.fields.b = 1.0;
  v68.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v68, 0LL);
  if ( (v34 & (unsigned __int8)v35 & 1) == 0 && v4->fields.nowStatus != 3 )
  {
    if ( !v34 )
    {
      this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
      if ( !this )
        goto LABEL_19;
      v69.fields.r = 1.0;
      v69.fields.g = 0.0;
      v69.fields.b = 0.0;
      v69.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v69, 0LL);
    }
    v70.fields.r = 1.0;
    v70.fields.g = 1.0;
    v70.fields.b = 1.0;
    v70.fields.a = 1.0;
    UIWidget__set_color(v16, v70, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v20, 0LL);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_84;
    }
LABEL_19:
    sub_1B8880C(this, *(_QWORD *)&idx);
  }
LABEL_84:
  this = (AppendSkillCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_19;
  this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          idx,
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_19;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp((ServantSkillInfoIconComponent_o *)this, v10, v34 & v35, 0LL);
  AppendSkillCombineControl__SetExeBtnState(v4, v59);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__UpdateCombineItemInfoList(
        AppendSkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v4; // x19
  struct SvtUseSkillData_o *skillData; // x8
  struct System_Int32_array *svtUseSkillIdList; // x9
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Int32_array *svtSkillNumsList; // x8
  int32_t v9; // w21
  int32_t v10; // w20
  int32_t nowStatus; // w8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  AppendSkillCombineControl_o *v17; // x20
  __int64 v18; // x21
  unsigned __int64 registeredCallbacksLists_low; // x10
  unsigned __int64 v20; // x9
  struct CombineRootComponent_o *combineRootComponent; // x10
  struct UserServantEntity_o *v22; // x8
  CombineAppendPassiveSkillMaster_o *v23; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  struct CombineRootComponent_o *v26; // x8
  AppendSkillCombineControl_o *v27; // x20
  __int64 v28; // x21
  unsigned __int64 m_CancellationTokenSource_low; // x10
  unsigned __int64 v30; // x9
  __int64 v31; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  v4 = this;
  if ( (byte_4A5E71C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5E71C = 1;
  }
  skillData = v4->fields.skillData;
  if ( !skillData )
    goto LABEL_41;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_41;
  if ( svtUseSkillIdList->max_length <= idx )
    goto LABEL_43;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_41;
  if ( svtSkillLvList->max_length <= idx )
    goto LABEL_43;
  svtSkillNumsList = skillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_41;
  if ( svtSkillNumsList->max_length <= idx )
LABEL_43:
    sub_1B88814(this, *(_QWORD *)&idx);
  v9 = svtSkillLvList->m_Items[idx + 1];
  v10 = svtSkillNumsList->m_Items[idx + 1];
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, 0LL);
  nowStatus = v4->fields.nowStatus;
  if ( nowStatus != 2 )
  {
    if ( nowStatus != 1 )
      goto LABEL_42;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v13 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
      v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v32.fields.currentCryptoKey = v15;
      *(_QWORD *)&v32.fields.fakeValue = v14;
      this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v32,
                                              0LL);
      if ( v13 )
      {
        this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v13, (int32_t)this, v10, 0LL);
        if ( this )
        {
          m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
          v17 = this;
          if ( m_CancellationTokenSource )
          {
            v18 = 8LL;
            while ( 1 )
            {
              registeredCallbacksLists_low = LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists);
              v20 = v18 - 8;
              if ( v18 - 8 >= (int)registeredCallbacksLists_low )
                goto LABEL_42;
              if ( v20 >= registeredCallbacksLists_low )
                goto LABEL_43;
              combineRootComponent = v17->fields.combineRootComponent;
              if ( combineRootComponent )
              {
                if ( v20 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
                  goto LABEL_43;
                CombineMenuControl__AddCombineItemInfo(
                  (CombineMenuControl_o *)v4,
                  *((_DWORD *)&m_CancellationTokenSource->klass + v18),
                  *((_DWORD *)&combineRootComponent->klass + v18),
                  0LL);
                m_CancellationTokenSource = v17->fields.m_CancellationTokenSource;
                ++v18;
                if ( m_CancellationTokenSource )
                  continue;
              }
              break;
            }
          }
        }
      }
    }
LABEL_41:
    sub_1B8880C(this, *(_QWORD *)&idx);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v22 = v4->fields.baseUserServantEntity;
  if ( !v22 )
    goto LABEL_41;
  v23 = (CombineAppendPassiveSkillMaster_o *)this;
  v25 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v25;
  *(_QWORD *)&v33.fields.fakeValue = v24;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v33, 0LL);
  if ( !v23 )
    goto LABEL_41;
  this = (AppendSkillCombineControl_o *)CombineAppendPassiveSkillMaster__GetEntityWithTryNum(
                                          v23,
                                          (int32_t)this,
                                          v10,
                                          v9,
                                          0LL);
  if ( !this )
    goto LABEL_41;
  v26 = this->fields.combineRootComponent;
  v27 = this;
  if ( !v26 )
    goto LABEL_41;
  v28 = 8LL;
  while ( 1 )
  {
    m_CancellationTokenSource_low = LODWORD(v26->fields.m_CancellationTokenSource);
    v30 = v28 - 8;
    if ( v28 - 8 >= (int)m_CancellationTokenSource_low )
      break;
    if ( v30 >= m_CancellationTokenSource_low )
      goto LABEL_43;
    v31 = *(_QWORD *)&v27->fields.type;
    if ( v31 )
    {
      if ( v30 >= *(unsigned int *)(v31 + 24) )
        goto LABEL_43;
      CombineMenuControl__AddCombineItemInfo(
        (CombineMenuControl_o *)v4,
        *((_DWORD *)&v26->klass + v28),
        *(_DWORD *)(v31 + 4 * v28),
        0LL);
      v26 = v27->fields.combineRootComponent;
      ++v28;
      if ( v26 )
        continue;
    }
    goto LABEL_41;
  }
LABEL_42:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0LL);
}