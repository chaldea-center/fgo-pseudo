void __fastcall AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19850 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19850 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall AppendSkillCombineControl__CheckIsMaxLvSkills(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x19
  __int64 v9; // x8
  bool v10; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x23
  unsigned __int64 v12; // x21
  __int64 v13; // x27
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1984B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, resData, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    this = (AppendSkillCombineControl_o *)sub_1BCA7E0(
                                            &Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__,
                                            v6,
                                            v7);
    byte_4B1984B = 1;
  }
  entity = 0LL;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0LL)) == 0LL
    || (v8 = *(_QWORD *)&this->fields.m_CachedPtr) == 0 )
  {
LABEL_22:
    sub_1BCAA3C(this, resData);
  }
  v9 = *(_QWORD *)(v8 + 24);
  v10 = (int)v9 > 0;
  if ( (int)v9 >= 1 )
  {
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v12 = 0LL;
    v13 = v8 + 32;
    do
    {
      if ( v12 >= (unsigned int)v9 )
LABEL_21:
        sub_1BCAA44(this, resData);
      if ( *(int *)(v13 + 4 * v12) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resData);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
        if ( v12 >= *(unsigned int *)(v8 + 24) )
          goto LABEL_21;
        if ( !this )
          goto LABEL_22;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                &entity,
                                                *(_DWORD *)(v13 + 4 * v12),
                                                (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity || !m_CancellationTokenSource )
            goto LABEL_22;
          if ( v12 >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
            goto LABEL_21;
          if ( *(&m_CancellationTokenSource->fields._state + v12) < SLODWORD(entity[2].monitor) )
            break;
        }
      }
      LODWORD(v9) = *(_DWORD *)(v8 + 24);
      v10 = (__int64)++v12 < (int)v9;
    }
    while ( (__int64)v12 < (int)v9 );
  }
  return !v10;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *preSelectBaseLb; // x20
  void *gameObject; // x0
  __int64 v18; // x1
  int v19; // w21
  int32_t v20; // w20
  int v21; // w21
  int32_t v22; // w20

  if ( (byte_4B19841 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&string_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_2096/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, v14, v15);
    byte_4B19841 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_2096/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0LL);
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
  v19 = *((_DWORD *)gameObject + 6);
  if ( v19 >= 1 )
  {
    v20 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v20,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( v19 == ++v20 )
        goto LABEL_17;
      gameObject = this->fields.skillInfoList;
    }
    while ( gameObject );
LABEL_23:
    sub_1BCAA3C(gameObject, v18);
  }
LABEL_17:
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_23;
  v21 = *((_DWORD *)gameObject + 6);
  if ( v21 >= 1 )
  {
    v22 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v22,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( v21 == ++v22 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  void *helpBtn; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w8
  __int64 v17; // x1
  UISprite_o *titleImg; // x20
  __int64 v19; // x1
  UnityEngine_Object_o *charaGraph; // x20
  PartyOrganizationUtility_o *p_charaGraph; // x19
  __int64 v22; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B19840 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_20750/*"img_txt_extraskill_item"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17855/*"buttontxt_synthesis"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20749/*"img_txt_extraskill"*/, v10, v11);
    byte_4B19840 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0LL, 0, 0, 0, 0, 0LL);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  AppendSkillCombineControl__InitDispCombineInfo(this, v12);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v15);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_21;
  v16 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.combineTxtImg;
  this->fields.userQp = v16;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_atlas((UISprite_o *)helpBtn, this->fields.baseAtlas, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17855/*"buttontxt_synthesis"*/, 0LL);
  titleImg = this->fields.titleImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_20749/*"img_txt_extraskill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20750/*"img_txt_extraskill_item"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (PartyOrganizationUtility_o *)&this->fields.charaGraph;
    helpBtn = p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1BCA784(p_charaGraph, 0LL, v24, v25, v26, v27, v28, v29);
      return;
    }
LABEL_21:
    sub_1BCAA3C(helpBtn, v13);
  }
}


void __fastcall AppendSkillCombineControl__OnClickExeCombine(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t nowStatus; // w8
  struct SetRarityDialogControl_o *v9; // x20
  struct SetLevelUpData_o *v10; // x19
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  bool v14; // w3
  SetRarityDialogControl_o *v15; // x0
  SetLevelUpData_o *v16; // x1
  struct SetRarityDialogControl_o *exeCombineDlg; // x20
  struct SetLevelUpData_o *lvUpData; // x19

  if ( (byte_4B1984D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2123/*"APPEND_SKILL_LVUP_TITLE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_2128/*"APPEND_SKILL_OPEN_TITLE"*/, v6, v7);
    byte_4B1984D = 1;
  }
  nowStatus = this->fields.nowStatus;
  if ( nowStatus == 2 )
  {
    exeCombineDlg = this->fields.exeCombineDlg;
    lvUpData = this->fields.lvUpData;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2123/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
    if ( exeCombineDlg )
    {
      v13 = v11;
      v15 = exeCombineDlg;
      v16 = lvUpData;
      v14 = 0;
      goto LABEL_13;
    }
LABEL_15:
    sub_1BCAA3C(v11, v12);
  }
  if ( nowStatus == 1 )
  {
    v9 = this->fields.exeCombineDlg;
    v10 = this->fields.lvUpData;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2128/*"APPEND_SKILL_OPEN_TITLE"*/, 0LL);
    if ( v9 )
    {
      v13 = v11;
      v14 = 1;
      v15 = v9;
      v16 = v10;
LABEL_13:
      SetRarityDialogControl__SetAppendSkillCombineInfo(v15, v16, v13, v14, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct SvtUseSkillData_o *skillData; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  Il2CppObject *effect; // x19
  UnityEngine_Component_o *v16; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  AppendSkillCombineControl_o *v18; // x21
  __int64 v19; // x2
  AppendSkillCombineControl_o *v20; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B1984F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    this = (AppendSkillCombineControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1984F = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_21;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_21;
  if ( svtSkillLvList->max_length <= idx )
    sub_1BCAA44(this, *(_QWORD *)&idx);
  if ( svtSkillLvList->m_Items[idx + 1] == 1 )
  {
    effect = (Il2CppObject *)v6->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
    this = (AppendSkillCombineControl_o *)UnityEngine_Object__Instantiate_object_(
                                            effect,
                                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
      if ( this )
      {
        v16 = (UnityEngine_Component_o *)this;
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)this, callback, 0LL);
        this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v16, 0LL);
        skillInfoList = (System_Collections_Generic_List_object__o *)v6->fields.skillInfoList;
        if ( skillInfoList )
        {
          v18 = this;
          this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                                  skillInfoList,
                                                  idx,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
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
              if ( v18 )
              {
                UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v18, (UnityEngine_Transform_o *)this, 0LL);
                this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v16, 0LL);
                v20 = this;
                if ( !byte_4B109C1 )
                {
                  this = (AppendSkillCombineControl_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&idx, v19);
                  byte_4B109C1 = 1;
                }
                if ( v20 )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)v20,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v16, 0LL);
                  if ( this )
                  {
                    v21.fields.x = 0.5;
                    v21.fields.y = 0.5;
                    v21.fields.z = 0.5;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v21, 0LL);
                    CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v16, 0LL);
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
    sub_1BCAA3C(this, *(_QWORD *)&idx);
  }
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall AppendSkillCombineControl__SetBaseSvtCardImg(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x23
  __int64 v16; // x24
  ServantLimitImageMaster_o *v17; // x22
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v19; // x1
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v21; // w21
  AppendSkillCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v4 = this;
  if ( (byte_4B19844 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, userSvtEnt, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (AppendSkillCombineControl_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B19844 = 1;
  }
  if ( !userSvtEnt )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtEnt, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  v17 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v30.fields.currentCryptoKey = v16;
  *(_QWORD *)&v30.fields.fakeValue = v15;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v30, 0LL);
  if ( !v17 )
    goto LABEL_15;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v17,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v21 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  p_charaGraph = (AppendSkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                               v4->fields.charaGraphBase,
                               userSvtEnt,
                               v21,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_38621628;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.charaGraph,
      (int64_t)TexturePrefab_38621628,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_15:
    sub_1BCAA3C(this, userSvtEnt);
  UICharaGraphTexture__SetCharacter_41557848((UICharaGraphTexture_o *)this, userSvtEnt, v21, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetBaseSvtSkillInfo(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-50h]

  if ( (byte_4B19842 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtEnt, *(_QWORD *)&idx);
    byte_4B19842 = 1;
  }
  if ( userSvtEnt )
  {
    v7 = *(_OWORD *)&userSvtEnt->fields.userId.fields.fakeValue;
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtEnt);
    v25 = v26;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v25, 0LL);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v8;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
      (int64_t)userSvtEnt,
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
      sub_1BCAA3C(preSelectBaseLb, v15);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.skillData,
      (int64_t)AppendSkillInfo,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    AppendSkillCombineControl__SetSkillIconInfo(this, this->fields.skillData, v24);
  }
}


void __fastcall AppendSkillCombineControl__SetExeBtnState(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v7; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v9; // x19
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1984C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenScale___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v4, v5);
    byte_4B1984C = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v7 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v9 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( v7 )
    {
      v10.fields.r = 1.0;
      v10.fields.g = 1.0;
      v10.fields.b = 1.0;
      v10.fields.a = 1.0;
      UIWidget__set_color(v7, v10, 0LL);
      if ( v9 )
      {
        UnityEngine_Behaviour__set_enabled(v9, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v9, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(combineBtnBg, method);
  }
  if ( !v7 )
    goto LABEL_12;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v7, v11, 0LL);
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
  AppendSkillCombineControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *selectSkillHelpLb; // x21
  const MethodInfo *v12; // x2
  int32_t v13; // w21
  struct System_Int32_array *useSkillIdList; // x8
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_4B19845 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__,
      *(_QWORD *)&idx,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    this = (AppendSkillCombineControl_o *)sub_1BCA7E0(&StringLiteral_8896/*"MSG_SKILL_SELECT"*/, v9, v10);
    byte_4B19845 = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList )
      goto LABEL_15;
    selectSkillHelpLb = v4->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&idx);
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8896/*"MSG_SKILL_SELECT"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0LL),
          (this = (AppendSkillCombineControl_o *)v4->fields.targetList) == 0LL) )
    {
LABEL_15:
      sub_1BCAA3C(this, *(_QWORD *)&idx);
    }
    v13 = 0;
    while ( v13 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v13,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
          sub_1BCAA44(this, *(_QWORD *)&idx);
        if ( this )
        {
          ServantSkillInfoIconComponent__SetDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.preSelectBaseLb),
            0LL);
          AppendSkillCombineControl__SetSvtSkillCombineData(v4, v13, v15);
          this = (AppendSkillCombineControl_o *)v4->fields.targetList;
          ++v13;
          if ( this )
            continue;
        }
      }
      goto LABEL_15;
    }
    AppendSkillCombineControl__SetSvtSkillCombineData(v4, idx, v12);
    AppendSkillCombineControl__UpdateCombineItemInfoList(v4, idx, v16);
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
  if ( (byte_4B19847 & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_1BCA7E0(
                                            &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                            needItemIds,
                                            needItemNums);
    byte_4B19847 = 1;
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
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( v7 >= needItemIds->max_length )
        goto LABEL_16;
      if ( !needItemNums )
        break;
      if ( v7 >= needItemNums->max_length )
LABEL_16:
        sub_1BCAA44(this, needItemIds);
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
    sub_1BCAA3C(this, needItemIds);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SvtUseSkillData_o *v8; // x26
  AppendSkillCombineControl_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t svtUseSkillIdList; // x1
  struct System_Int32_array **p_useSkillIdList; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v33; // x19
  System_Collections_Generic_List_object__o *v34; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x2
  unsigned __int64 v42; // x23
  struct System_Int32_array *v43; // x8
  int32_t v44; // w24
  int32_t type; // w25
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v48; // x27
  int32_t v49; // w28
  SvtUseSkillData_o *v50; // x22
  Il2CppObject *Item; // x26
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  ServantSkillInfoIconComponent_ClickDelegate_o *v55; // x29
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v65; // x8
  AppendSkillCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v8 = skillData;
  v9 = this;
  if ( (byte_4B19843 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AppendSkillCombineControl_OnClickInfo__, skillData, method);
    sub_1BCA7E0(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v24, v25);
    this = (AppendSkillCombineControl_o *)sub_1BCA7E0(&StringLiteral_915/*"-"*/, v26, v27);
    byte_4B19843 = 1;
  }
  if ( !v8 )
    goto LABEL_28;
  svtUseSkillIdList = (int64_t)v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v9->fields.useSkillIdList,
    svtUseSkillIdList,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  useSkillIdList = v9->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_28;
  v33 = *(_QWORD *)&useSkillIdList->max_length;
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo,
                                                       skillData,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v34;
  p_targetList = (AppendSkillCombineControl_o **)&v9->fields.targetList;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.targetList, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  if ( (int)v33 >= 1 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      v43 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v42 >= v43->max_length )
        goto LABEL_29;
      v44 = v43->m_Items[v42 + 1];
      if ( v44 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillData);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                v44,
                                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          type = this->fields.type;
          p_m_CancellationTokenSource = &this->fields.m_CancellationTokenSource;
        }
        else
        {
          p_m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o **)&StringLiteral_915/*"-"*/;
          type = 10;
        }
        svtSkillLvList = v8->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v42 >= svtSkillLvList->max_length )
LABEL_29:
          sub_1BCAA44(this, skillData);
        this = (AppendSkillCombineControl_o *)v9->fields.skillInfoList;
        if ( !this )
          break;
        v48 = (System_String_o *)*p_m_CancellationTokenSource;
        v49 = svtSkillLvList->m_Items[v42 + 1];
        v50 = v8;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v42,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v55 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                                 ServantSkillInfoIconComponent_ClickDelegate_TypeInfo,
                                                                 v52,
                                                                 v53,
                                                                 v54);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v55,
          (Il2CppObject *)v9,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0LL);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_46205128(
          (ServantSkillInfoIconComponent_o *)Item,
          v42,
          v48,
          v44,
          v49,
          type,
          v55,
          1,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v62 = *(_QWORD *)&this->fields.m_CachedPtr;
        v63 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v62 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v62 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = v62 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v65 + 32) = Item;
          sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 32), (int64_t)Item, v56, v57, v58, v59, v60, v61);
        }
        v8 = v50;
      }
      if ( (unsigned int)v33 == ++v42 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1BCAA3C(this, skillData);
  }
LABEL_27:
  AppendSkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v41);
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
  SetLevelUpData_o *v17; // x28
  struct SetLevelUpData_o **p_lvUpData; // x26
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct SetLevelUpData_o *lvUpData; // x0
  PartyOrganizationUtility_o *p_targetName; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  PartyOrganizationUtility_o *p_combineItemIds; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B19848 & 1) == 0 )
  {
    sub_1BCA7E0(&SetLevelUpData_TypeInfo, *(_QWORD *)&idx, *(_QWORD *)&currentSkillId);
    byte_4B19848 = 1;
  }
  v17 = (SetLevelUpData_o *)sub_1BCAA2C(
                              SetLevelUpData_TypeInfo,
                              *(_QWORD *)&idx,
                              *(_QWORD *)&currentSkillId,
                              *(_QWORD *)&currentSkillLv);
  SetLevelUpData___ctor(v17, 0LL);
  p_lvUpData = &this->fields.lvUpData;
  this->fields.lvUpData = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lvUpData, (int64_t)v17, v19, v20, v21, v22, v23, v24);
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_7;
  lvUpData->fields.targetName = skillName;
  p_targetName = (PartyOrganizationUtility_o *)&lvUpData->fields.targetName;
  LODWORD(p_targetName[-1].fields._TransitionDestinationFromDetail_k__BackingField) = idx;
  LODWORD(p_targetName[-1].fields.temporaryPartyInfo) = currentSkillId;
  sub_1BCA784(p_targetName, (int64_t)skillName, v26, v27, v28, v29, v30, v31);
  lvUpData = *p_lvUpData;
  if ( !*p_lvUpData
    || (lvUpData->fields.combineItemIds = combineItemIds,
        p_combineItemIds = (PartyOrganizationUtility_o *)&lvUpData->fields.combineItemIds,
        p_combineItemIds[-1].fields._WaveBattleRestartWave_k__BackingField = currentSkillLv,
        *(&p_combineItemIds[-1].fields._WaveBattleRestartWave_k__BackingField + 1) = currentSkillLv + 1,
        HIDWORD(p_combineItemIds[-1].fields._BasePartyItem_k__BackingField) = currentSkillNum,
        sub_1BCA784(p_combineItemIds, (int64_t)combineItemIds, v34, v35, v36, v37, v38, v39),
        (lvUpData = *p_lvUpData) == 0LL) )
  {
LABEL_7:
    sub_1BCAA3C(lvUpData, v25);
  }
  lvUpData->fields.targetDetail = skillDetail;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&lvUpData->fields.targetDetail,
    (int64_t)skillDetail,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetSkillNeedQpData(
        AppendSkillCombineControl_o *this,
        int32_t qp,
        const MethodInfo *method)
{
  struct SetLevelUpData_o *lvUpData; // x8

  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    sub_1BCAA3C(this, *(_QWORD *)&qp);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned __int64 v15; // x23
  __int64 v16; // x26
  struct SetLevelUpData_o *lvUpData; // x8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserSvtCoinMaster_o *v19; // x20
  int64_t userId; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  struct SetLevelUpData_o *v23; // x9
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v6 = this;
  if ( (byte_4B19849 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, needItemIds, needItemNums);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11, v12);
    this = (AppendSkillCombineControl_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    byte_4B19849 = 1;
  }
  if ( !needItemIds )
    goto LABEL_27;
  if ( (int)*(_QWORD *)&needItemIds->max_length >= 1 )
  {
    v15 = 0LL;
    v16 = (unsigned int)*(_QWORD *)&needItemIds->max_length;
    while ( 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, needItemIds);
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v15 >= needItemIds->max_length )
        break;
      if ( !this )
        goto LABEL_27;
      this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              needItemIds->m_Items[v15 + 1],
                                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( this && LODWORD(this->fields.baseUserServantEntity) == 29 )
      {
        if ( !needItemNums )
          goto LABEL_27;
        if ( v15 >= needItemNums->max_length )
          break;
        lvUpData = v6->fields.lvUpData;
        if ( !lvUpData )
          goto LABEL_27;
        lvUpData->fields.spendSvtCoin = needItemNums->m_Items[v15 + 1];
      }
      if ( v16 == ++v15 )
        goto LABEL_17;
    }
    sub_1BCAA44(this, needItemIds);
  }
LABEL_17:
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, needItemIds);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  baseUserServantEntity = v6->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v19 = (UserSvtCoinMaster_o *)this;
  userId = v6->fields.userId;
  v22 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, needItemIds);
  *(_QWORD *)&v25.fields.currentCryptoKey = v22;
  *(_QWORD *)&v25.fields.fakeValue = v21;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  if ( !v19 )
    goto LABEL_27;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v19, &entity, userId, (int32_t)this, 0LL);
  if ( !entity )
    return;
  v23 = v6->fields.lvUpData;
  if ( !v23 )
LABEL_27:
    sub_1BCAA3C(this, needItemIds);
  v23->fields.haveSvtCoin = entity->fields.num;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetStateInfoMsg(
        AppendSkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v16; // x20
  __int64 v17; // x1
  UILabel_o *v18; // x19
  __int64 *v19; // x8
  __int64 v20; // x1
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1984E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_2121/*"APPEND_SKILL_LVMAX_MSG"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_2122/*"APPEND_SKILL_LVUP_MSG"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2126/*"APPEND_SKILL_OPEN_MSG"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2094/*"APPEND_SKILL_COMBINE_INFO"*/, v13, v14);
    byte_4B1984E = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    if ( !detailInfoLb
      || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      detailInfoLb,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
    {
LABEL_21:
      sub_1BCAA3C(detailInfoLb, *(_QWORD *)&state);
    }
    v21.fields.r = 0.0;
    v21.fields.a = 1.0;
    v21.fields.g = 0.87891;
    v21.fields.b = 0.98828;
    v16 = (UIWidget_o *)detailInfoLb;
    UIWidget__set_color((UIWidget_o *)detailInfoLb, v21, 0LL);
    switch ( this->fields.nowStatus )
    {
      case 0:
        v18 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
        v19 = &StringLiteral_2094/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_19;
      case 1:
        v18 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
        v19 = &StringLiteral_2126/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_19;
      case 2:
        v18 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
        v19 = &StringLiteral_2122/*"APPEND_SKILL_LVUP_MSG"*/;
        goto LABEL_19;
      case 3:
        v22.fields.r = 1.0;
        v22.fields.g = 1.0;
        v22.fields.b = 1.0;
        v22.fields.a = 1.0;
        UIWidget__set_color(v16, v22, 0LL);
        v18 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
        v19 = &StringLiteral_2121/*"APPEND_SKILL_LVMAX_MSG"*/;
LABEL_19:
        detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v19, 0LL);
        if ( !v18 )
          goto LABEL_21;
        UILabel__set_text(v18, (System_String_o *)detailInfoLb, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  struct SvtUseSkillData_o *skillData; // x10
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Int32_array *svtSkillNumsList; // x10
  int32_t v49; // w24
  int32_t v50; // w21
  int32_t v51; // w23
  Il2CppObject *Entity; // x0
  SkillEntity_o *v53; // x26
  int32_t maxLv; // w27
  int32_t v55; // w22
  UIWidget_o *v56; // x22
  const MethodInfo *v57; // x2
  int v58; // w8
  int32_t nowStatus; // w8
  System_String_o *v60; // x29
  UISprite_o *combineTxtImg; // x27
  __int64 v62; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v64; // x27
  __int64 v65; // x28
  __int64 v66; // x29
  const MethodInfo *v67; // x3
  AppendSkillCombineControl_o *v68; // x27
  bool appended; // w0
  System_String_o *name; // x29
  System_Int32_array *m_CancellationTokenSource; // x25
  bool v72; // w28
  System_String_o *EffectExplanation; // x0
  const MethodInfo *v74; // x3
  bool v75; // w25
  char v76; // w28
  __int64 v77; // x1
  struct UserServantEntity_o *v78; // x8
  CombineAppendPassiveSkillMaster_o *v79; // x27
  __int64 v80; // x28
  __int64 v81; // x29
  CombineAppendPassiveSkillEntity_o *EntityWithTryNum; // x0
  __int64 v83; // x1
  UILabel_o *spendQpLabel; // x28
  CombineAppendPassiveSkillEntity_o *v85; // x27
  AppendSkillCombineControl_o *v86; // x29
  Il2CppObject *v87; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v89; // x25
  Il2CppObject *v90; // x0
  const MethodInfo *v91; // x3
  bool v92; // w0
  __int64 v93; // x1
  int32_t v94; // w8
  int32_t v95; // w9
  struct SetLevelUpData_o *lvUpData; // x8
  const MethodInfo *v97; // x1
  const MethodInfo *v98; // [xsp+0h] [xbp-80h]
  System_String_o *v99; // [xsp+10h] [xbp-70h]
  System_String_o *v100; // [xsp+10h] [xbp-70h]
  int32_t userQp; // [xsp+18h] [xbp-68h] BYREF
  int32_t qp; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4B19846 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&idx, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17775/*"btn_txt_open2"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17855/*"buttontxt_synthesis"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_2095/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v41, v42);
    this = (AppendSkillCombineControl_o *)sub_1BCA7E0(&StringLiteral_17852/*"buttontxt_notsynthesis"*/, v43, v44);
    byte_4B19846 = 1;
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
    sub_1BCAA44(this, *(_QWORD *)&idx);
  v49 = svtUseSkillIdList->m_Items[idx + 1];
  v50 = svtSkillLvList->m_Items[idx + 1];
  v51 = svtSkillNumsList->m_Items[idx + 1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&idx);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v49,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v53 = (SkillEntity_o *)Entity;
  this = (AppendSkillCombineControl_o *)v4->fields.itemInfoList;
  if ( !this )
    goto LABEL_19;
  maxLv = v53->fields.maxLv;
  v55 = 0;
  while ( v55 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v55,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( this )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.itemInfoList;
      ++v55;
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
                                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_19;
  v105.fields.r = 0.0;
  v105.fields.a = 1.0;
  v105.fields.g = 0.87891;
  v105.fields.b = 0.98828;
  v56 = (UIWidget_o *)this;
  UIWidget__set_color((UIWidget_o *)this, v105, 0LL);
  if ( v50 >= maxLv )
    v58 = 3;
  else
    v58 = v50 ? 2 : 1;
  v4->fields.nowStatus = v58;
  AppendSkillCombineControl__SetStateInfoMsg(v4, 0, v57);
  this = (AppendSkillCombineControl_o *)v4->fields.combineQpInfo;
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  nowStatus = v4->fields.nowStatus;
  v60 = (System_String_o *)StringLiteral_1/*""*/;
  if ( nowStatus == 1 )
  {
    combineTxtImg = v4->fields.combineTxtImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&idx);
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17775/*"btn_txt_open2"*/, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_19;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62);
    v99 = v60;
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_19;
    v64 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v66 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v65 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&idx);
    *(_QWORD *)&v103.fields.currentCryptoKey = v66;
    *(_QWORD *)&v103.fields.fakeValue = v65;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v103, 0LL);
    if ( !v64 )
      goto LABEL_19;
    this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v64, (int32_t)this, v51, 0LL);
    v4->fields._IsExeCombine_k__BackingField = 1;
    if ( !this )
      goto LABEL_19;
    v68 = this;
    appended = AppendSkillCombineControl__SetNeedItemList(
                 v4,
                 (System_Int32_array *)this->fields.m_CancellationTokenSource,
                 (System_Int32_array *)this->fields.combineRootComponent,
                 v67);
    name = v53->fields.name;
    m_CancellationTokenSource = (System_Int32_array *)v68->fields.m_CancellationTokenSource;
    v72 = appended;
    EffectExplanation = SkillEntity__getEffectExplanation(v53, v50 + 1, 0LL);
    AppendSkillCombineControl__SetSkillLevelUpData(
      v4,
      idx,
      v49,
      v50,
      v51,
      name,
      m_CancellationTokenSource,
      EffectExplanation,
      v98);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v4,
      (System_Int32_array *)v68->fields.m_CancellationTokenSource,
      (System_Int32_array *)v68->fields.combineRootComponent,
      v74);
    if ( v72 )
    {
      v60 = v99;
      v75 = 1;
      v76 = 1;
      goto LABEL_76;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&idx);
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_2095/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17852/*"buttontxt_notsynthesis"*/, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
        this,
        this->klass[2]._1.name);
    }
LABEL_75:
    v76 = 0;
    v75 = 1;
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17855/*"buttontxt_synthesis"*/, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v77);
  v100 = v60;
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v78 = v4->fields.baseUserServantEntity;
  if ( !v78 )
    goto LABEL_19;
  v79 = (CombineAppendPassiveSkillMaster_o *)this;
  v81 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
  v80 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&idx);
  *(_QWORD *)&v104.fields.currentCryptoKey = v81;
  *(_QWORD *)&v104.fields.fakeValue = v80;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v104, 0LL);
  if ( !v79 )
    goto LABEL_19;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v79, (int32_t)this, v51, v50, 0LL);
  spendQpLabel = v4->fields.spendQpLabel;
  v85 = EntityWithTryNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83);
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  if ( !v85 )
    goto LABEL_19;
  v86 = this;
  qp = v85->fields.qp;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  this = (AppendSkillCombineControl_o *)System_String__Format((System_String_o *)v86, v87, 0LL);
  if ( !spendQpLabel )
    goto LABEL_19;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0LL);
  haveQpLabel = v4->fields.haveQpLabel;
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  userQp = v4->fields.userQp;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userQp);
  this = (AppendSkillCombineControl_o *)System_String__Format(v89, v90, 0LL);
  v60 = v100;
  if ( !haveQpLabel )
    goto LABEL_19;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0LL);
  v4->fields._IsExeCombine_k__BackingField = 1;
  v92 = AppendSkillCombineControl__SetNeedItemList(v4, v85->fields.itemIds, v85->fields.itemNums, v91);
  v94 = v4->fields.userQp;
  v95 = v85->fields.qp;
  v76 = v92;
  v75 = v94 >= v95;
  if ( v94 < v95 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93);
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( (v76 & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93);
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12265/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  AppendSkillCombineControl__SetSkillLevelUpData(
    v4,
    idx,
    v49,
    v50,
    v51,
    v53->fields.name,
    v85->fields.itemIds,
    (System_String_o *)StringLiteral_1/*""*/,
    v98);
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_19;
  lvUpData->fields.spendQp = v85->fields.qp;
  lvUpData->fields.haveQp = v4->fields.userQp;
LABEL_76:
  this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
  if ( !this )
    goto LABEL_19;
  v106.fields.r = 1.0;
  v106.fields.g = 1.0;
  v106.fields.b = 1.0;
  v106.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v106, 0LL);
  if ( (v75 & (unsigned __int8)v76 & 1) == 0 && v4->fields.nowStatus != 3 )
  {
    if ( !v75 )
    {
      this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
      if ( !this )
        goto LABEL_19;
      v107.fields.r = 1.0;
      v107.fields.g = 0.0;
      v107.fields.b = 0.0;
      v107.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v107, 0LL);
    }
    v108.fields.r = 1.0;
    v108.fields.g = 1.0;
    v108.fields.b = 1.0;
    v108.fields.a = 1.0;
    UIWidget__set_color(v56, v108, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v60, 0LL);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_84;
    }
LABEL_19:
    sub_1BCAA3C(this, *(_QWORD *)&idx);
  }
LABEL_84:
  this = (AppendSkillCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_19;
  this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          idx,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_19;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
    (ServantSkillInfoIconComponent_o *)this,
    v50,
    v75 & v76,
    1,
    1,
    0LL);
  AppendSkillCombineControl__SetExeBtnState(v4, v97);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__UpdateCombineItemInfoList(
        AppendSkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct SvtUseSkillData_o *skillData; // x8
  struct System_Int32_array *svtUseSkillIdList; // x9
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Int32_array *svtSkillNumsList; // x8
  int32_t v15; // w21
  int32_t v16; // w20
  __int64 v17; // x1
  int32_t nowStatus; // w8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  AppendSkillCombineControl_o *v24; // x20
  __int64 v25; // x21
  unsigned __int64 registeredCallbacksLists_low; // x10
  unsigned __int64 v27; // x9
  struct CombineRootComponent_o *combineRootComponent; // x10
  struct UserServantEntity_o *v29; // x8
  CombineAppendPassiveSkillMaster_o *v30; // x22
  __int64 v31; // x23
  __int64 v32; // x24
  struct CombineRootComponent_o *v33; // x8
  AppendSkillCombineControl_o *v34; // x20
  __int64 v35; // x21
  unsigned __int64 m_CancellationTokenSource_low; // x10
  unsigned __int64 v37; // x9
  __int64 v38; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v4 = this;
  if ( (byte_4B1984A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, *(_QWORD *)&idx, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    this = (AppendSkillCombineControl_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    byte_4B1984A = 1;
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
    sub_1BCAA44(this, *(_QWORD *)&idx);
  v15 = svtSkillLvList->m_Items[idx + 1];
  v16 = svtSkillNumsList->m_Items[idx + 1];
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, 0LL);
  nowStatus = v4->fields.nowStatus;
  if ( nowStatus != 2 )
  {
    if ( nowStatus != 1 )
      goto LABEL_42;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v20 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
      v22 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&idx);
      *(_QWORD *)&v39.fields.currentCryptoKey = v22;
      *(_QWORD *)&v39.fields.fakeValue = v21;
      this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v39,
                                              0LL);
      if ( v20 )
      {
        this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v20, (int32_t)this, v16, 0LL);
        if ( this )
        {
          m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
          v24 = this;
          if ( m_CancellationTokenSource )
          {
            v25 = 8LL;
            while ( 1 )
            {
              registeredCallbacksLists_low = LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists);
              v27 = v25 - 8;
              if ( v25 - 8 >= (int)registeredCallbacksLists_low )
                goto LABEL_42;
              if ( v27 >= registeredCallbacksLists_low )
                goto LABEL_43;
              combineRootComponent = v24->fields.combineRootComponent;
              if ( combineRootComponent )
              {
                if ( v27 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
                  goto LABEL_43;
                CombineMenuControl__AddCombineItemInfo(
                  (CombineMenuControl_o *)v4,
                  *((_DWORD *)&m_CancellationTokenSource->klass + v25),
                  *((_DWORD *)&combineRootComponent->klass + v25),
                  0LL);
                m_CancellationTokenSource = v24->fields.m_CancellationTokenSource;
                ++v25;
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
    sub_1BCAA3C(this, *(_QWORD *)&idx);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v29 = v4->fields.baseUserServantEntity;
  if ( !v29 )
    goto LABEL_41;
  v30 = (CombineAppendPassiveSkillMaster_o *)this;
  v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&idx);
  *(_QWORD *)&v40.fields.currentCryptoKey = v32;
  *(_QWORD *)&v40.fields.fakeValue = v31;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v40, 0LL);
  if ( !v30 )
    goto LABEL_41;
  this = (AppendSkillCombineControl_o *)CombineAppendPassiveSkillMaster__GetEntityWithTryNum(
                                          v30,
                                          (int32_t)this,
                                          v16,
                                          v15,
                                          0LL);
  if ( !this )
    goto LABEL_41;
  v33 = this->fields.combineRootComponent;
  v34 = this;
  if ( !v33 )
    goto LABEL_41;
  v35 = 8LL;
  while ( 1 )
  {
    m_CancellationTokenSource_low = LODWORD(v33->fields.m_CancellationTokenSource);
    v37 = v35 - 8;
    if ( v35 - 8 >= (int)m_CancellationTokenSource_low )
      break;
    if ( v37 >= m_CancellationTokenSource_low )
      goto LABEL_43;
    v38 = *(_QWORD *)&v34->fields.type;
    if ( v38 )
    {
      if ( v37 >= *(unsigned int *)(v38 + 24) )
        goto LABEL_43;
      CombineMenuControl__AddCombineItemInfo(
        (CombineMenuControl_o *)v4,
        *((_DWORD *)&v33->klass + v35),
        *(_DWORD *)(v38 + 4 * v35),
        0LL);
      v33 = v34->fields.combineRootComponent;
      ++v35;
      if ( v33 )
        continue;
    }
    goto LABEL_41;
  }
LABEL_42:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0LL);
}