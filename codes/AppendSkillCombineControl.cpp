void __fastcall AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_49FF93B & 1) == 0 )
  {
    sub_1B640C8(&CombineMenuControl_TypeInfo, method);
    byte_49FF93B = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x8
  bool v9; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x23
  unsigned __int64 v11; // x21
  __int64 v12; // x27
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FF936 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, resData);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    this = (AppendSkillCombineControl_o *)sub_1B640C8(
                                            &Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__,
                                            v5);
    byte_49FF936 = 1;
  }
  entity = 0LL;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0LL)) == 0LL
    || (v7 = *(_QWORD *)&this->fields.m_CachedPtr) == 0 )
  {
LABEL_22:
    sub_1B64324(this);
  }
  v8 = *(_QWORD *)(v7 + 24);
  v9 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v11 = 0LL;
    v12 = v7 + 32;
    do
    {
      if ( v11 >= (unsigned int)v8 )
LABEL_21:
        sub_1B6432C(this, v6);
      if ( *(int *)(v12 + 4 * v11) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( v11 >= *(unsigned int *)(v7 + 24) )
          goto LABEL_21;
        if ( !this )
          goto LABEL_22;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                &entity,
                                                *(_DWORD *)(v12 + 4 * v11),
                                                (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity || !m_CancellationTokenSource )
            goto LABEL_22;
          if ( v11 >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
            goto LABEL_21;
          if ( *(&m_CancellationTokenSource->fields._state + v11) < SLODWORD(entity[2].monitor) )
            break;
        }
      }
      LODWORD(v8) = *(_DWORD *)(v7 + 24);
      v9 = (__int64)++v11 < (int)v8;
    }
    while ( (__int64)v11 < (int)v8 );
  }
  return !v9;
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
  void *gameObject; // x0
  int v11; // w21
  int32_t v12; // w20
  int v13; // w21
  int32_t v14; // w20

  if ( (byte_49FF92C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&string_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_2100/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, v8);
    byte_49FF92C = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_2100/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0LL);
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
  v11 = *((_DWORD *)gameObject + 6);
  if ( v11 >= 1 )
  {
    v12 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v12,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( v11 == ++v12 )
        goto LABEL_17;
      gameObject = this->fields.skillInfoList;
    }
    while ( gameObject );
LABEL_23:
    sub_1B64324(gameObject);
  }
LABEL_17:
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_23;
  v13 = *((_DWORD *)gameObject + 6);
  if ( v13 >= 1 )
  {
    v14 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v14,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( v13 == ++v14 )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  void *helpBtn; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w8
  UISprite_o *titleImg; // x20
  UnityEngine_Object_o *charaGraph; // x20
  ServantStatusBattleListViewItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FF92B & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_20447/*"img_txt_extraskill_item"*/, v4);
    sub_1B640C8(&StringLiteral_17606/*"buttontxt_synthesis"*/, v5);
    sub_1B640C8(&StringLiteral_20446/*"img_txt_extraskill"*/, v6);
    byte_49FF92B = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0LL, 0, 0, 0, 0, 0LL);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  AppendSkillCombineControl__InitDispCombineInfo(this, v7);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v9);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_21;
  v10 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.combineTxtImg;
  this->fields.userQp = v10;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_atlas((UISprite_o *)helpBtn, this->fields.baseAtlas, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17606/*"buttontxt_synthesis"*/, 0LL);
  titleImg = this->fields.titleImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_20446/*"img_txt_extraskill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20447/*"img_txt_extraskill_item"*/, 0LL);
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1B6406C(p_charaGraph, 0, v15, v16);
      return;
    }
LABEL_21:
    sub_1B64324(helpBtn);
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

  if ( (byte_49FF938 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_2105/*"APPEND_SKILL_LVUP_TITLE"*/, v3);
    sub_1B640C8(&StringLiteral_2110/*"APPEND_SKILL_OPEN_TITLE"*/, v4);
    byte_49FF938 = 1;
  }
  nowStatus = this->fields.nowStatus;
  if ( nowStatus == 2 )
  {
    exeCombineDlg = this->fields.exeCombineDlg;
    lvUpData = this->fields.lvUpData;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2105/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
    if ( exeCombineDlg )
    {
      v9 = v8;
      v11 = exeCombineDlg;
      v12 = lvUpData;
      v10 = 0;
      goto LABEL_13;
    }
LABEL_15:
    sub_1B64324(v8);
  }
  if ( nowStatus == 1 )
  {
    v6 = this->fields.exeCombineDlg;
    v7 = this->fields.lvUpData;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2110/*"APPEND_SKILL_OPEN_TITLE"*/, 0LL);
    if ( v6 )
    {
      v9 = v8;
      v10 = 1;
      v11 = v6;
      v12 = v7;
LABEL_13:
      SetRarityDialogControl__SetAppendSkillCombineInfo(v11, v12, v9, v10, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  struct SvtUseSkillData_o *skillData; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  Il2CppObject *effect; // x19
  UnityEngine_Component_o *v13; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  AppendSkillCombineControl_o *v15; // x21
  __int64 v16; // x1
  AppendSkillCombineControl_o *v17; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_49FF93A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    this = (AppendSkillCombineControl_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FF93A = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_21;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_21;
  if ( svtSkillLvList->max_length <= idx )
    sub_1B6432C(this, *(_QWORD *)&idx);
  if ( svtSkillLvList->m_Items[idx + 1] == 1 )
  {
    effect = (Il2CppObject *)v6->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (AppendSkillCombineControl_o *)UnityEngine_Object__Instantiate_object_(
                                            effect,
                                            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
      if ( this )
      {
        v13 = (UnityEngine_Component_o *)this;
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)this, callback, 0LL);
        this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v13, 0LL);
        skillInfoList = (System_Collections_Generic_List_object__o *)v6->fields.skillInfoList;
        if ( skillInfoList )
        {
          v15 = this;
          this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                                  skillInfoList,
                                                  idx,
                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
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
              if ( v15 )
              {
                UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v15, (UnityEngine_Transform_o *)this, 0LL);
                this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v13, 0LL);
                v17 = this;
                if ( !byte_49F7111 )
                {
                  this = (AppendSkillCombineControl_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
                  byte_49F7111 = 1;
                }
                if ( v17 )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)v17,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v13, 0LL);
                  if ( this )
                  {
                    v18.fields.x = 0.5;
                    v18.fields.y = 0.5;
                    v18.fields.z = 0.5;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v18, 0LL);
                    CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v13, 0LL);
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
    sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *Master_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitImageMaster_o *v12; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v15; // w21
  AppendSkillCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_37591604; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_49FF92F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, userSvtEnt);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    this = (AppendSkillCombineControl_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FF92F = 1;
  }
  if ( !userSvtEnt )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtEnt, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v10;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
  if ( !v12 )
    goto LABEL_15;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v12,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v15 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = (AppendSkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37591604 = CharaGraphManager__CreateTexturePrefab_37591604(
                               v4->fields.charaGraphBase,
                               userSvtEnt,
                               v15,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_37591604;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.charaGraph, (int32_t)TexturePrefab_37591604, v18, v19);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_15:
    sub_1B64324(this);
  UICharaGraphTexture__SetCharacter_40502984((UICharaGraphTexture_o *)this, userSvtEnt, v15, 0LL, 0, 0LL);
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
  UnityEngine_Component_o *preSelectBaseLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]

  if ( (byte_49FF92D & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtEnt);
    byte_49FF92D = 1;
  }
  if ( userSvtEnt )
  {
    v7 = *(_OWORD *)&userSvtEnt->fields.userId.fields.fakeValue;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v17.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v16 = v17;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v16, 0LL);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, (int32_t)userSvtEnt, v9, v10);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
    {
      sub_1B64324(preSelectBaseLb);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillData, (int32_t)AppendSkillInfo, v13, v14);
    AppendSkillCombineControl__SetSkillIconInfo(this, this->fields.skillData, v15);
  }
}


void __fastcall AppendSkillCombineControl__SetExeBtnState(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v7; // x19
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF937 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_49FF937 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v7 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( v5 )
    {
      v8.fields.r = 1.0;
      v8.fields.g = 1.0;
      v8.fields.b = 1.0;
      v8.fields.a = 1.0;
      UIWidget__set_color(v5, v8, 0LL);
      if ( v7 )
      {
        UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v7, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B64324(combineBtnBg);
  }
  if ( !v5 )
    goto LABEL_12;
  v9.fields.r = 0.5;
  v9.fields.g = 0.5;
  v9.fields.b = 0.5;
  v9.fields.a = 1.0;
  UIWidget__set_color(v5, v9, 0LL);
  if ( !v7 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetNeedItemInfo(
        AppendSkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *selectSkillHelpLb; // x21
  const MethodInfo *v9; // x2
  int32_t v10; // w21
  __int64 v11; // x1
  struct System_Int32_array *useSkillIdList; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_49FF930 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, *(_QWORD *)&idx);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    this = (AppendSkillCombineControl_o *)sub_1B640C8(&StringLiteral_8725/*"MSG_SKILL_SELECT"*/, v7);
    byte_49FF930 = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList )
      goto LABEL_15;
    selectSkillHelpLb = v4->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8725/*"MSG_SKILL_SELECT"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0LL),
          (this = (AppendSkillCombineControl_o *)v4->fields.targetList) == 0LL) )
    {
LABEL_15:
      sub_1B64324(this);
    }
    v10 = 0;
    while ( v10 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v10,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
          sub_1B6432C(this, v11);
        if ( this )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.baseAtlas),
            0LL);
          AppendSkillCombineControl__SetSvtSkillCombineData(v4, v10, v13);
          this = (AppendSkillCombineControl_o *)v4->fields.targetList;
          ++v10;
          if ( this )
            continue;
        }
      }
      goto LABEL_15;
    }
    AppendSkillCombineControl__SetSvtSkillCombineData(v4, idx, v9);
    AppendSkillCombineControl__UpdateCombineItemInfoList(v4, idx, v14);
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
  __int64 v10; // x1
  AppendSkillCombineControl_o *v11; // x24

  v6 = this;
  if ( (byte_49FF932 & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_1B640C8(
                                            &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                            needItemIds);
    byte_49FF932 = 1;
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
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( v7 >= needItemIds->max_length )
        goto LABEL_16;
      if ( !needItemNums )
        break;
      if ( v7 >= needItemNums->max_length )
LABEL_16:
        sub_1B6432C(this, v10);
      v11 = this;
      if ( !this )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)this,
        v6->fields.userId,
        needItemIds->m_Items[v7 + 1],
        needItemNums->m_Items[v7 + 1],
        0LL);
      ++v7;
      v9 &= LOBYTE(v11->fields.infoBack) != 0;
      if ( v8 == v7 )
        return v9;
    }
LABEL_15:
    sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array **p_useSkillIdList; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v20; // x19
  System_Collections_Generic_List_object__o *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  unsigned __int64 v26; // x23
  struct System_Int32_array *v27; // x8
  int32_t v28; // w24
  int32_t type; // w26
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v32; // x27
  int32_t v33; // w28
  SvtUseSkillData_o *v34; // x22
  Il2CppObject *Item; // x25
  __int64 v36; // x1
  __int64 v37; // x2
  ServantSkillInfoIconComponent_ClickDelegate_o *v38; // x29
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v44; // x8
  AppendSkillCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v4 = skillData;
  v5 = this;
  if ( (byte_49FF92E & 1) == 0 )
  {
    sub_1B640C8(&Method_AppendSkillCombineControl_OnClickInfo__, skillData);
    sub_1B640C8(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v13);
    this = (AppendSkillCombineControl_o *)sub_1B640C8(&StringLiteral_920/*"-"*/, v14);
    byte_49FF92E = 1;
  }
  if ( !v4 )
    goto LABEL_28;
  svtUseSkillIdList = v4->fields.svtUseSkillIdList;
  p_useSkillIdList = &v5->fields.useSkillIdList;
  v5->fields.useSkillIdList = svtUseSkillIdList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v5->fields.useSkillIdList,
    (int32_t)svtUseSkillIdList,
    (int32_t)method,
    v3);
  useSkillIdList = v5->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_28;
  v20 = *(_QWORD *)&useSkillIdList->max_length;
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v5->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v21;
  p_targetList = (AppendSkillCombineControl_o **)&v5->fields.targetList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.targetList, (int32_t)v21, v22, v23);
  if ( (int)v20 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      v27 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v26 >= v27->max_length )
        goto LABEL_29;
      v28 = v27->m_Items[v26 + 1];
      if ( v28 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                v28,
                                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          type = this->fields.type;
          p_m_CancellationTokenSource = &this->fields.m_CancellationTokenSource;
        }
        else
        {
          p_m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o **)&StringLiteral_920/*"-"*/;
          type = 10;
        }
        svtSkillLvList = v4->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v26 >= svtSkillLvList->max_length )
LABEL_29:
          sub_1B6432C(this, v24);
        this = (AppendSkillCombineControl_o *)v5->fields.skillInfoList;
        if ( !this )
          break;
        v32 = (System_String_o *)*p_m_CancellationTokenSource;
        v33 = svtSkillLvList->m_Items[v26 + 1];
        v34 = v4;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v26,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v38 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1B64314(
                                                                 ServantSkillInfoIconComponent_ClickDelegate_TypeInfo,
                                                                 v36,
                                                                 v37);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v38,
          (Il2CppObject *)v5,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0LL);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_44934292(
          (ServantSkillInfoIconComponent_o *)Item,
          v26,
          v32,
          v28,
          v33,
          type,
          v38,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v41 = *(_QWORD *)&this->fields.m_CachedPtr;
        v42 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v41 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v41 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = v41 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v44 + 32) = Item;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 32), (int32_t)Item, v39, v40);
        }
        v4 = v34;
      }
      if ( (unsigned int)v20 == ++v26 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1B64324(this);
  }
LABEL_27:
  AppendSkillCombineControl__SetNeedItemInfo(v5, v5->fields.currentIdx, v25);
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct SetLevelUpData_o *lvUpData; // x0
  ServantStatusBattleListViewItem_o *p_targetName; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  ServantStatusBattleListViewItem_o *p_combineItemIds; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49FF933 & 1) == 0 )
  {
    sub_1B640C8(&SetLevelUpData_TypeInfo, *(_QWORD *)&idx);
    byte_49FF933 = 1;
  }
  v17 = (SetLevelUpData_o *)sub_1B64314(SetLevelUpData_TypeInfo, *(_QWORD *)&idx, *(_QWORD *)&currentSkillId);
  SetLevelUpData___ctor(v17, 0LL);
  p_lvUpData = &this->fields.lvUpData;
  this->fields.lvUpData = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lvUpData, (int32_t)v17, v19, v20);
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_7;
  lvUpData->fields.targetName = skillName;
  p_targetName = (ServantStatusBattleListViewItem_o *)&lvUpData->fields.targetName;
  LODWORD(p_targetName[-1].fields.name) = idx;
  *(_DWORD *)&p_targetName[-1].fields.isEnabled = currentSkillId;
  sub_1B6406C(p_targetName, (int32_t)skillName, v21, v22);
  lvUpData = *p_lvUpData;
  if ( !*p_lvUpData
    || (lvUpData->fields.combineItemIds = combineItemIds,
        p_combineItemIds = (ServantStatusBattleListViewItem_o *)&lvUpData->fields.combineItemIds,
        p_combineItemIds[-1].fields.dispLimitCount.fields.fakeValue = currentSkillLv,
        *(_DWORD *)&p_combineItemIds[-1].fields.dispLimitCount.fields.inited = currentSkillLv + 1,
        LODWORD(p_combineItemIds[-1].fields.basePosition.fields.x) = currentSkillNum,
        sub_1B6406C(p_combineItemIds, (int32_t)combineItemIds, v25, v26),
        (lvUpData = *p_lvUpData) == 0LL) )
  {
LABEL_7:
    sub_1B64324(lvUpData);
  }
  lvUpData->fields.targetDetail = skillDetail;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&lvUpData->fields.targetDetail, (int32_t)skillDetail, v28, v29);
}


void __fastcall AppendSkillCombineControl__SetSkillNeedQpData(
        AppendSkillCombineControl_o *this,
        int32_t qp,
        const MethodInfo *method)
{
  struct SetLevelUpData_o *lvUpData; // x8

  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    sub_1B64324(this);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  unsigned __int64 v11; // x23
  __int64 v12; // x26
  __int64 v13; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserSvtCoinMaster_o *v16; // x20
  int64_t userId; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  struct SetLevelUpData_o *v20; // x9
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v6 = this;
  if ( (byte_49FF934 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, needItemIds);
    sub_1B640C8(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    this = (AppendSkillCombineControl_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_49FF934 = 1;
  }
  if ( !needItemIds )
    goto LABEL_27;
  if ( (int)*(_QWORD *)&needItemIds->max_length >= 1 )
  {
    v11 = 0LL;
    v12 = (unsigned int)*(_QWORD *)&needItemIds->max_length;
    while ( 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v11 >= needItemIds->max_length )
        break;
      if ( !this )
        goto LABEL_27;
      this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              needItemIds->m_Items[v11 + 1],
                                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( this && LODWORD(this->fields.baseUserServantEntity) == 29 )
      {
        if ( !needItemNums )
          goto LABEL_27;
        if ( v11 >= needItemNums->max_length )
          break;
        lvUpData = v6->fields.lvUpData;
        if ( !lvUpData )
          goto LABEL_27;
        lvUpData->fields.spendSvtCoin = needItemNums->m_Items[v11 + 1];
      }
      if ( v12 == ++v11 )
        goto LABEL_17;
    }
    sub_1B6432C(this, v13);
  }
LABEL_17:
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  baseUserServantEntity = v6->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v16 = (UserSvtCoinMaster_o *)this;
  userId = v6->fields.userId;
  v19 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v19;
  *(_QWORD *)&v22.fields.fakeValue = v18;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v22, 0LL);
  if ( !v16 )
    goto LABEL_27;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v16, &entity, userId, (int32_t)this, 0LL);
  if ( !entity )
    return;
  v20 = v6->fields.lvUpData;
  if ( !v20 )
LABEL_27:
    sub_1B64324(this);
  v20->fields.haveSvtCoin = entity->fields.num;
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
  UIWidget_o *v11; // x20
  UILabel_o *v12; // x19
  __int64 *v13; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF939 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_2103/*"APPEND_SKILL_LVMAX_MSG"*/, v6);
    sub_1B640C8(&StringLiteral_2104/*"APPEND_SKILL_LVUP_MSG"*/, v7);
    sub_1B640C8(&StringLiteral_2108/*"APPEND_SKILL_OPEN_MSG"*/, v8);
    sub_1B640C8(&StringLiteral_2098/*"APPEND_SKILL_COMBINE_INFO"*/, v9);
    byte_49FF939 = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    if ( !detailInfoLb
      || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      detailInfoLb,
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
    {
LABEL_21:
      sub_1B64324(detailInfoLb);
    }
    v14.fields.r = 0.0;
    v14.fields.a = 1.0;
    v14.fields.g = 0.87891;
    v14.fields.b = 0.98828;
    v11 = (UIWidget_o *)detailInfoLb;
    UIWidget__set_color((UIWidget_o *)detailInfoLb, v14, 0LL);
    switch ( this->fields.nowStatus )
    {
      case 0:
        v12 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_2098/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_19;
      case 1:
        v12 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_2108/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_19;
      case 2:
        v12 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_2104/*"APPEND_SKILL_LVUP_MSG"*/;
        goto LABEL_19;
      case 3:
        v15.fields.r = 1.0;
        v15.fields.g = 1.0;
        v15.fields.b = 1.0;
        v15.fields.a = 1.0;
        UIWidget__set_color(v11, v15, 0LL);
        v12 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_2103/*"APPEND_SKILL_LVMAX_MSG"*/;
LABEL_19:
        detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v13, 0LL);
        if ( !v12 )
          goto LABEL_21;
        UILabel__set_text(v12, (System_String_o *)detailInfoLb, 0LL);
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
  int32_t v29; // w24
  int32_t v30; // w21
  int32_t v31; // w23
  Il2CppObject *Entity; // x0
  SkillEntity_o *v33; // x26
  int32_t maxLv; // w27
  int32_t v35; // w22
  UIWidget_o *v36; // x22
  const MethodInfo *v37; // x2
  int v38; // w8
  const MethodInfo *v39; // x1
  int32_t nowStatus; // w8
  System_String_o *v41; // x29
  UISprite_o *combineTxtImg; // x27
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v44; // x27
  __int64 v45; // x28
  __int64 v46; // x29
  const MethodInfo *v47; // x3
  AppendSkillCombineControl_o *v48; // x27
  bool appended; // w0
  System_String_o *name; // x29
  System_Int32_array *m_CancellationTokenSource; // x25
  bool v52; // w28
  System_String_o *EffectExplanation; // x0
  const MethodInfo *v54; // x3
  bool v55; // w25
  char v56; // w28
  struct UserServantEntity_o *v57; // x8
  CombineAppendPassiveSkillMaster_o *v58; // x27
  __int64 v59; // x28
  __int64 v60; // x29
  CombineAppendPassiveSkillEntity_o *EntityWithTryNum; // x0
  UILabel_o *spendQpLabel; // x28
  CombineAppendPassiveSkillEntity_o *v63; // x27
  AppendSkillCombineControl_o *v64; // x29
  Il2CppObject *v65; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v67; // x25
  Il2CppObject *v68; // x0
  const MethodInfo *v69; // x3
  bool v70; // w0
  int32_t v71; // w8
  int32_t v72; // w9
  struct SetLevelUpData_o *lvUpData; // x8
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // [xsp+0h] [xbp-80h]
  System_String_o *v76; // [xsp+10h] [xbp-70h]
  System_String_o *v77; // [xsp+10h] [xbp-70h]
  int32_t userQp; // [xsp+18h] [xbp-68h] BYREF
  int32_t qp; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_49FF931 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v17);
    sub_1B640C8(&StringLiteral_17528/*"btn_txt_open2"*/, v18);
    sub_1B640C8(&StringLiteral_17606/*"buttontxt_synthesis"*/, v19);
    sub_1B640C8(&StringLiteral_12054/*"SHORT_ITEM_INFO_MSG"*/, v20);
    sub_1B640C8(&StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/, v21);
    sub_1B640C8(&StringLiteral_2099/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, v22);
    sub_1B640C8(&StringLiteral_1/*""*/, v23);
    this = (AppendSkillCombineControl_o *)sub_1B640C8(&StringLiteral_17603/*"buttontxt_notsynthesis"*/, v24);
    byte_49FF931 = 1;
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
    sub_1B6432C(this, *(_QWORD *)&idx);
  v29 = svtUseSkillIdList->m_Items[idx + 1];
  v30 = svtSkillLvList->m_Items[idx + 1];
  v31 = svtSkillNumsList->m_Items[idx + 1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v29,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v33 = (SkillEntity_o *)Entity;
  this = (AppendSkillCombineControl_o *)v4->fields.itemInfoList;
  if ( !this )
    goto LABEL_19;
  maxLv = v33->fields.maxLv;
  v35 = 0;
  while ( v35 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v35,
                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( this )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.itemInfoList;
      ++v35;
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
                                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_19;
  v82.fields.r = 0.0;
  v82.fields.a = 1.0;
  v82.fields.g = 0.87891;
  v82.fields.b = 0.98828;
  v36 = (UIWidget_o *)this;
  UIWidget__set_color((UIWidget_o *)this, v82, 0LL);
  if ( v30 >= maxLv )
    v38 = 3;
  else
    v38 = v30 ? 2 : 1;
  v4->fields.nowStatus = v38;
  AppendSkillCombineControl__SetStateInfoMsg(v4, 0, v37);
  this = (AppendSkillCombineControl_o *)v4->fields.combineQpInfo;
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  nowStatus = v4->fields.nowStatus;
  v41 = (System_String_o *)StringLiteral_1/*""*/;
  if ( nowStatus == 1 )
  {
    combineTxtImg = v4->fields.combineTxtImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17528/*"btn_txt_open2"*/, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_19;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v76 = v41;
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_19;
    v44 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v46 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v80.fields.currentCryptoKey = v46;
    *(_QWORD *)&v80.fields.fakeValue = v45;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v80, 0LL);
    if ( !v44 )
      goto LABEL_19;
    this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v44, (int32_t)this, v31, 0LL);
    v4->fields._IsExeCombine_k__BackingField = 1;
    if ( !this )
      goto LABEL_19;
    v48 = this;
    appended = AppendSkillCombineControl__SetNeedItemList(
                 v4,
                 (System_Int32_array *)this->fields.m_CancellationTokenSource,
                 (System_Int32_array *)this->fields.combineRootComponent,
                 v47);
    name = v33->fields.name;
    m_CancellationTokenSource = (System_Int32_array *)v48->fields.m_CancellationTokenSource;
    v52 = appended;
    EffectExplanation = SkillEntity__getEffectExplanation(v33, v30 + 1, 0LL);
    AppendSkillCombineControl__SetSkillLevelUpData(
      v4,
      idx,
      v29,
      v30,
      v31,
      name,
      m_CancellationTokenSource,
      EffectExplanation,
      v75);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v4,
      (System_Int32_array *)v48->fields.m_CancellationTokenSource,
      (System_Int32_array *)v48->fields.combineRootComponent,
      v54);
    if ( v52 )
    {
      v41 = v76;
      v55 = 1;
      v56 = 1;
      goto LABEL_76;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_2099/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0LL);
    goto LABEL_75;
  }
  if ( nowStatus != 2 )
  {
    if ( nowStatus == 3 )
    {
      v4->fields._IsExeCombine_k__BackingField = 0;
      AppendSkillCombineControl__SetExeBtnState(v4, v39);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      UISprite__set_atlas((UISprite_o *)this, v4->fields.baseAtlas, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17603/*"buttontxt_notsynthesis"*/, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
        this,
        this->klass[2]._1.name);
    }
LABEL_75:
    v56 = 0;
    v55 = 1;
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17606/*"buttontxt_synthesis"*/, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v77 = v41;
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v57 = v4->fields.baseUserServantEntity;
  if ( !v57 )
    goto LABEL_19;
  v58 = (CombineAppendPassiveSkillMaster_o *)this;
  v60 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v81.fields.currentCryptoKey = v60;
  *(_QWORD *)&v81.fields.fakeValue = v59;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v81, 0LL);
  if ( !v58 )
    goto LABEL_19;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v58, (int32_t)this, v31, v30, 0LL);
  spendQpLabel = v4->fields.spendQpLabel;
  v63 = EntityWithTryNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  if ( !v63 )
    goto LABEL_19;
  v64 = this;
  qp = v63->fields.qp;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  this = (AppendSkillCombineControl_o *)System_String__Format((System_String_o *)v64, v65, 0LL);
  if ( !spendQpLabel )
    goto LABEL_19;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0LL);
  haveQpLabel = v4->fields.haveQpLabel;
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  userQp = v4->fields.userQp;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userQp);
  this = (AppendSkillCombineControl_o *)System_String__Format(v67, v68, 0LL);
  v41 = v77;
  if ( !haveQpLabel )
    goto LABEL_19;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0LL);
  v4->fields._IsExeCombine_k__BackingField = 1;
  v70 = AppendSkillCombineControl__SetNeedItemList(v4, v63->fields.itemIds, v63->fields.itemNums, v69);
  v71 = v4->fields.userQp;
  v72 = v63->fields.qp;
  v56 = v70;
  v55 = v71 >= v72;
  if ( v71 < v72 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( (v56 & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12054/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  AppendSkillCombineControl__SetSkillLevelUpData(
    v4,
    idx,
    v29,
    v30,
    v31,
    v33->fields.name,
    v63->fields.itemIds,
    (System_String_o *)StringLiteral_1/*""*/,
    v75);
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_19;
  lvUpData->fields.spendQp = v63->fields.qp;
  lvUpData->fields.haveQp = v4->fields.userQp;
LABEL_76:
  this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
  if ( !this )
    goto LABEL_19;
  v83.fields.r = 1.0;
  v83.fields.g = 1.0;
  v83.fields.b = 1.0;
  v83.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v83, 0LL);
  if ( (v55 & (unsigned __int8)v56 & 1) == 0 && v4->fields.nowStatus != 3 )
  {
    if ( !v55 )
    {
      this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
      if ( !this )
        goto LABEL_19;
      v84.fields.r = 1.0;
      v84.fields.g = 0.0;
      v84.fields.b = 0.0;
      v84.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v84, 0LL);
    }
    v85.fields.r = 1.0;
    v85.fields.g = 1.0;
    v85.fields.b = 1.0;
    v85.fields.a = 1.0;
    UIWidget__set_color(v36, v85, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v41, 0LL);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_84;
    }
LABEL_19:
    sub_1B64324(this);
  }
LABEL_84:
  this = (AppendSkillCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_19;
  this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          idx,
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_19;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp((ServantSkillInfoIconComponent_o *)this, v30, v55 & v56, 0LL);
  AppendSkillCombineControl__SetExeBtnState(v4, v74);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__UpdateCombineItemInfoList(
        AppendSkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct SvtUseSkillData_o *skillData; // x8
  struct System_Int32_array *svtUseSkillIdList; // x9
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Int32_array *svtSkillNumsList; // x8
  int32_t v12; // w21
  int32_t v13; // w20
  int32_t nowStatus; // w8
  struct UserServantEntity_o *v15; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  AppendSkillCombineControl_o *v20; // x20
  __int64 v21; // x21
  unsigned __int64 registeredCallbacksLists_low; // x10
  unsigned __int64 v23; // x9
  struct CombineRootComponent_o *v24; // x10
  struct UserServantEntity_o *baseUserServantEntity; // x8
  CombineAppendPassiveSkillMaster_o *v26; // x22
  __int64 v27; // x23
  __int64 v28; // x24
  struct CombineRootComponent_o *combineRootComponent; // x8
  AppendSkillCombineControl_o *v30; // x20
  __int64 v31; // x21
  unsigned __int64 m_CancellationTokenSource_low; // x10
  unsigned __int64 v33; // x9
  __int64 v34; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v4 = this;
  if ( (byte_49FF935 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, *(_QWORD *)&idx);
    sub_1B640C8(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    this = (AppendSkillCombineControl_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FF935 = 1;
  }
  skillData = v4->fields.skillData;
  if ( !skillData )
    goto LABEL_41;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_41;
  if ( svtUseSkillIdList->max_length <= idx )
    goto LABEL_44;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_41;
  if ( svtSkillLvList->max_length <= idx )
    goto LABEL_44;
  svtSkillNumsList = skillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_41;
  if ( svtSkillNumsList->max_length <= idx )
LABEL_44:
    sub_1B6432C(this, *(_QWORD *)&idx);
  v12 = svtSkillLvList->m_Items[idx + 1];
  v13 = svtSkillNumsList->m_Items[idx + 1];
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, 0LL);
  nowStatus = v4->fields.nowStatus;
  if ( nowStatus == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v26 = (CombineAppendPassiveSkillMaster_o *)this;
      v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v36.fields.currentCryptoKey = v28;
      *(_QWORD *)&v36.fields.fakeValue = v27;
      this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                              v36,
                                              0LL);
      if ( v26 )
      {
        this = (AppendSkillCombineControl_o *)CombineAppendPassiveSkillMaster__GetEntityWithTryNum(
                                                v26,
                                                (int32_t)this,
                                                v13,
                                                v12,
                                                0LL);
        if ( this )
        {
          combineRootComponent = this->fields.combineRootComponent;
          v30 = this;
          if ( combineRootComponent )
          {
            v31 = 8LL;
            while ( 1 )
            {
              m_CancellationTokenSource_low = LODWORD(combineRootComponent->fields.m_CancellationTokenSource);
              v33 = v31 - 8;
              if ( v31 - 8 >= (int)m_CancellationTokenSource_low )
                goto LABEL_42;
              if ( v33 >= m_CancellationTokenSource_low )
                goto LABEL_44;
              v34 = *(_QWORD *)&v30->fields.type;
              if ( v34 )
              {
                if ( v33 >= *(unsigned int *)(v34 + 24) )
                  goto LABEL_44;
                CombineMenuControl__AddCombineItemInfo(
                  (CombineMenuControl_o *)v4,
                  *((_DWORD *)&combineRootComponent->klass + v31),
                  *(_DWORD *)(v34 + 4 * v31),
                  0LL);
                combineRootComponent = v30->fields.combineRootComponent;
                ++v31;
                if ( combineRootComponent )
                  continue;
              }
              break;
            }
          }
        }
      }
    }
LABEL_41:
    sub_1B64324(this);
  }
  if ( nowStatus == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v15 = v4->fields.baseUserServantEntity;
    if ( v15 )
    {
      v16 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
      v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v35.fields.currentCryptoKey = v18;
      *(_QWORD *)&v35.fields.fakeValue = v17;
      this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                              v35,
                                              0LL);
      if ( v16 )
      {
        this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v16, (int32_t)this, v13, 0LL);
        if ( this )
        {
          m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
          v20 = this;
          if ( m_CancellationTokenSource )
          {
            v21 = 8LL;
            while ( 1 )
            {
              registeredCallbacksLists_low = LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists);
              v23 = v21 - 8;
              if ( v21 - 8 >= (int)registeredCallbacksLists_low )
                break;
              if ( v23 >= registeredCallbacksLists_low )
                goto LABEL_44;
              v24 = v20->fields.combineRootComponent;
              if ( v24 )
              {
                if ( v23 >= LODWORD(v24->fields.m_CancellationTokenSource) )
                  goto LABEL_44;
                CombineMenuControl__AddCombineItemInfo(
                  (CombineMenuControl_o *)v4,
                  *((_DWORD *)&m_CancellationTokenSource->klass + v21),
                  *((_DWORD *)&v24->klass + v21),
                  0LL);
                m_CancellationTokenSource = v20->fields.m_CancellationTokenSource;
                ++v21;
                if ( m_CancellationTokenSource )
                  continue;
              }
              goto LABEL_41;
            }
LABEL_42:
            CombineMenuControl__SortCombineItemInfoList((CombineMenuControl_o *)v4, 0LL);
            goto LABEL_43;
          }
        }
      }
    }
    goto LABEL_41;
  }
LABEL_43:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0LL);
}