void __fastcall AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall AppendSkillCombineControl__CheckIsMaxLvSkills(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x8
  struct CombineRootComponent_o *combineRootComponent; // x21
  unsigned __int64 v7; // x20
  __int64 v8; // x22
  __int64 v10; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B2D7C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_42B2D7C = 1;
  }
  entity = 0LL;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0LL)) == 0LL
    || (v4 = *(_QWORD *)&this->fields.m_CachedPtr) == 0 )
  {
LABEL_25:
    sub_B52A5C(this, resData);
  }
  v5 = *(_QWORD *)(v4 + 24);
  if ( (int)v5 < 1 )
    return 1;
  combineRootComponent = this->fields.combineRootComponent;
  v7 = 0LL;
  v8 = v4 + 32;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
LABEL_24:
      v10 = sub_B52A88(this);
      sub_B52A28(v10, 0LL);
    }
    if ( *(int *)(v8 + 4 * v7) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
      if ( v7 >= *(unsigned int *)(v4 + 24) )
        goto LABEL_24;
      if ( !this )
        goto LABEL_25;
      this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                              &entity,
                                              *(_DWORD *)(v8 + 4 * v7),
                                              (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !combineRootComponent )
          goto LABEL_25;
        if ( v7 >= LODWORD(combineRootComponent->fields.myFSM) )
          goto LABEL_24;
        if ( *((_DWORD *)&combineRootComponent->fields.uiRoot + v7) < SLODWORD(entity->fields.longName) )
          return 0;
      }
    }
    LODWORD(v5) = *(_DWORD *)(v4 + 24);
    if ( (__int64)++v7 >= (int)v5 )
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
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *gameObject; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  int size; // w20
  unsigned int v8; // w21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  int v10; // w20
  unsigned int v11; // w21

  if ( (byte_42B2D73 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_1723/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/);
    byte_42B2D73 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_1723/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_28;
  UILabel__set_text(preSelectBaseLb, gameObject, 0LL);
  gameObject = (System_String_o *)this->fields.preSelectBaseLb;
  if ( !gameObject )
    goto LABEL_28;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (System_String_o *)this->fields.baseSelectInfoLb;
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (System_String_o *)this->fields.selectSkillHelpLb;
  if ( !gameObject )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0LL);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_28;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    do
    {
      if ( skillInfoList->fields._size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      gameObject = (System_String_o *)skillInfoList->fields._items->m_Items[v8];
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( (int)++v8 >= size )
        goto LABEL_20;
      skillInfoList = this->fields.skillInfoList;
    }
    while ( skillInfoList );
LABEL_28:
    sub_B52A5C(gameObject, v5);
  }
LABEL_20:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_28;
  v10 = itemInfoList->fields._size;
  if ( v10 >= 1 )
  {
    v11 = 0;
    do
    {
      if ( itemInfoList->fields._size <= v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      gameObject = (System_String_o *)itemInfoList->fields._items->m_Items[v11];
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( (int)++v11 >= v10 )
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
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  void *helpBtn; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w8
  UISprite_o *titleImg; // x20
  UnityEngine_Object_o *charaGraph; // x20
  BattleServantConfConponent_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B2D72 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_19833/*"img_txt_extraskill_item"*/);
    sub_B52984(&StringLiteral_17268/*"buttontxt_synthesis"*/);
    sub_B52984(&StringLiteral_19832/*"img_txt_extraskill"*/);
    byte_42B2D72 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0LL, 0, 0, 0, 0, 0LL);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  AppendSkillCombineControl__InitDispCombineInfo(this, v3);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v6);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_24;
  v7 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.combineTxtImg;
  this->fields.userQp = v7;
  if ( !helpBtn )
    goto LABEL_24;
  UISprite__set_atlas((UISprite_o *)helpBtn, this->fields.baseAtlas, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_24;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17268/*"buttontxt_synthesis"*/, 0LL);
  titleImg = this->fields.titleImg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_19832/*"img_txt_extraskill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_19833/*"img_txt_extraskill_item"*/, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_24;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  helpBtn = this->fields.titleImg;
  if ( !helpBtn )
    goto LABEL_24;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  helpBtn = this->fields.itemTitleImg;
  if ( !helpBtn )
    goto LABEL_24;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)helpBtn + 840LL))(
    helpBtn,
    *(_QWORD *)(*(_QWORD *)helpBtn + 848LL));
  helpBtn = this->fields.combineQpInfo;
  if ( !helpBtn )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (BattleServantConfConponent_o *)&this->fields.charaGraph;
    helpBtn = p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B52920(p_charaGraph, 0LL, v12, v13, v14, v15, v16, v17);
      return;
    }
LABEL_24:
    sub_B52A5C(helpBtn, v4);
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

  if ( (byte_42B2D7E & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1728/*"APPEND_SKILL_LVUP_TITLE"*/);
    sub_B52984(&StringLiteral_1733/*"APPEND_SKILL_OPEN_TITLE"*/);
    byte_42B2D7E = 1;
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
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1728/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
    if ( exeCombineDlg )
    {
      v8 = v6;
      v10 = exeCombineDlg;
      v11 = lvUpData;
      v9 = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B52A5C(v6, v7);
  }
  if ( nowStatus == 1 )
  {
    v4 = this->fields.exeCombineDlg;
    v5 = this->fields.lvUpData;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1733/*"APPEND_SKILL_OPEN_TITLE"*/, 0LL);
    if ( v4 )
    {
      v8 = v6;
      v9 = 1;
      v10 = v4;
      v11 = v5;
LABEL_15:
      SetRarityDialogControl__SetAppendSkillCombineInfo(v10, v11, v8, v9, 0LL);
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
  struct SvtUseSkillData_o *skillData; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *effect; // x19
  UnityEngine_Component_o *v10; // x19
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *transform; // x20
  int v14; // s0
  __int64 v17; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42B2D80 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (AppendSkillCombineControl_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2D80 = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_22;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_22;
  if ( svtSkillLvList->max_length <= idx )
  {
    v17 = sub_B52A88(this);
    sub_B52A28(v17, 0LL);
  }
  if ( svtSkillLvList->m_Items[idx + 1] == 1 )
  {
    effect = (UnityEngine_UI_Dropdown_DropdownItem_o *)v6->fields.effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (AppendSkillCombineControl_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            effect,
                                            (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
      if ( this )
      {
        v10 = (UnityEngine_Component_o *)this;
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)this, callback, 0LL);
        this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v10, 0LL);
        skillInfoList = v6->fields.skillInfoList;
        if ( skillInfoList )
        {
          v12 = (UnityEngine_Transform_o *)this;
          if ( skillInfoList->fields._size <= (unsigned int)idx )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          this = (AppendSkillCombineControl_o *)skillInfoList->fields._items->m_Items[idx];
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
                UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)this, 0LL);
                transform = UnityEngine_Component__get_transform(v10, 0LL);
                *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
                if ( transform )
                {
                  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
                  this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v10, 0LL);
                  if ( this )
                  {
                    v18.fields.x = 0.5;
                    v18.fields.y = 0.5;
                    v18.fields.z = 0.5;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v18, 0LL);
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
LABEL_22:
    sub_B52A5C(this, *(_QWORD *)&idx);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  ServantLimitImageMaster_o *v9; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v12; // w21
  AppendSkillCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_24904472; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v4 = this;
  if ( (byte_42B2D76 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2D76 = 1;
  }
  if ( !userSvtEnt )
    goto LABEL_18;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtEnt, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v8 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v8;
  *(_QWORD *)&v21.fields.fakeValue = v7;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v21, 0LL);
  if ( !v9 )
    goto LABEL_18;
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
  p_charaGraph = (AppendSkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_24904472 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24904472(
                                                      v4->fields.charaGraphBase,
                                                      userSvtEnt,
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
LABEL_18:
    sub_B52A5C(this, userSvtEnt);
  UICharaGraphTexture__SetCharacter_35944152((UICharaGraphTexture_o *)this, userSvtEnt, v12, 0LL, 0, 0LL);
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
  __int64 v15; // x1
  UnityEngine_Component_o *preSelectBaseLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-40h]

  if ( (byte_42B2D74 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B2D74 = 1;
  }
  if ( userSvtEnt )
  {
    v7 = *(_OWORD *)&userSvtEnt->fields.userId.fields.fakeValue;
    *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v26.fields.fakeValue = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v25 = v26;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v25, 0LL);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v8;
    sub_B52920(
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
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
    {
      sub_B52A5C(preSelectBaseLb, v15);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.skillData,
      (System_Int32_array **)AppendSkillInfo,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    AppendSkillCombineControl__SetSkillIconInfo(this, this->fields.skillData, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetExeBtnState(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v7; // x19
  int v8; // s0
  int v12; // s0

  if ( (byte_42B2D7D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_42B2D7D = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v7 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
    if ( v4 )
    {
      UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v8, 0LL);
      if ( v7 )
      {
        UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v7, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B52A5C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
  if ( !v4 )
    goto LABEL_12;
  UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v12, 0LL);
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
  UILabel_o *selectSkillHelpLb; // x21
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x23
  __int64 v8; // x21
  int size; // w8
  struct System_Int32_array *useSkillIdList; // x8
  const MethodInfo *v11; // x2
  __int64 v12; // x0

  v4 = this;
  if ( (byte_42B2D77 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_B52984(&StringLiteral_8897/*"MSG_SKILL_SELECT"*/);
    byte_42B2D77 = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList )
      goto LABEL_18;
    selectSkillHelpLb = v4->fields.selectSkillHelpLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8897/*"MSG_SKILL_SELECT"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0LL), (targetList = v4->fields.targetList) == 0LL) )
    {
LABEL_18:
      sub_B52A5C(this, *(_QWORD *)&idx);
    }
    v8 = 0LL;
    while ( 1 )
    {
      size = targetList->fields._size;
      if ( (int)v8 >= size )
        break;
      if ( size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
        {
          v12 = sub_B52A88(this);
          sub_B52A28(v12, 0LL);
        }
        this = (AppendSkillCombineControl_o *)targetList->fields._items->m_Items[v8];
        if ( this )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.titleImg),
            0LL);
          AppendSkillCombineControl__SetSvtSkillCombineData(v4, v8, v11);
          targetList = v4->fields.targetList;
          ++v8;
          if ( targetList )
            continue;
        }
      }
      goto LABEL_18;
    }
    AppendSkillCombineControl__SetSvtSkillCombineData(v4, idx, v6);
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
  __int64 v14; // x0

  v6 = this;
  if ( (byte_42B2D79 & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_42B2D79 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( (unsigned int)v8 >= needItemIds->max_length )
        goto LABEL_18;
      if ( !needItemNums )
        break;
      if ( (unsigned int)v8 >= needItemNums->max_length )
      {
LABEL_18:
        v14 = sub_B52A88(this);
        sub_B52A28(v14, 0LL);
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
    sub_B52A5C(this, needItemIds);
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
  AppendSkillCombineControl_o *v9; // x20
  System_Int32_array **svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v12; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  unsigned __int64 v21; // x23
  struct System_Int32_array *v22; // x8
  int32_t v23; // w24
  int32_t baseUserServantEntity; // w25
  struct CombineRootComponent_o **p_combineRootComponent; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x19
  System_String_o *v28; // x26
  int32_t v29; // w28
  ServantSkillInfoIconComponent_o *v30; // x27
  ServantSkillInfoIconComponent_ClickDelegate_o *v31; // x19
  __int64 v32; // x0
  AppendSkillCombineControl_o **p_targetList; // [xsp+0h] [xbp-60h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+8h] [xbp-58h]

  v9 = this;
  if ( (byte_42B2D75 & 1) == 0 )
  {
    sub_B52984(&Method_AppendSkillCombineControl_OnClickInfo__);
    sub_B52984(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_B52984(&StringLiteral_757/*"-"*/);
    byte_42B2D75 = 1;
  }
  if ( !skillData )
    goto LABEL_27;
  svtUseSkillIdList = (System_Int32_array **)skillData->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->fields.useSkillIdList,
    svtUseSkillIdList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  useSkillIdList = v9->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_27;
  v12 = *(_QWORD *)&useSkillIdList->max_length;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v13;
  p_targetList = (AppendSkillCombineControl_o **)&v9->fields.targetList;
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
    v21 = 0LL;
    while ( 1 )
    {
      v22 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v21 >= v22->max_length )
        goto LABEL_28;
      v23 = v22->m_Items[v21 + 1];
      if ( v23 >= 1 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                v23,
                                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          baseUserServantEntity = (int32_t)this->fields.baseUserServantEntity;
          p_combineRootComponent = &this->fields.combineRootComponent;
        }
        else
        {
          p_combineRootComponent = (struct CombineRootComponent_o **)&StringLiteral_757/*"-"*/;
          baseUserServantEntity = 10;
        }
        svtSkillLvList = skillData->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v21 >= svtSkillLvList->max_length )
        {
LABEL_28:
          v32 = sub_B52A88(this);
          sub_B52A28(v32, 0LL);
        }
        skillInfoList = v9->fields.skillInfoList;
        if ( !skillInfoList )
          break;
        v28 = (System_String_o *)*p_combineRootComponent;
        v29 = svtSkillLvList->m_Items[v21 + 1];
        if ( v21 >= (unsigned int)skillInfoList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v30 = skillInfoList->fields._items->m_Items[v21];
        v31 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_B52A54(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v31,
          (Il2CppObject *)v9,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0LL);
        if ( !v30 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_29020452(v30, v21, v28, v23, v29, baseUserServantEntity, v31, 0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
      }
      if ( (__int64)++v21 >= (int)v12 )
        goto LABEL_26;
    }
LABEL_27:
    sub_B52A5C(this, skillData);
  }
LABEL_26:
  AppendSkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v20);
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
  SetLevelUpData_o *v17; // x27
  struct SetLevelUpData_o **p_lvUpData; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct SetLevelUpData_o *v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42B2D7A & 1) == 0 )
  {
    sub_B52984(&SetLevelUpData_TypeInfo);
    byte_42B2D7A = 1;
  }
  v17 = (SetLevelUpData_o *)sub_B52A54(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v17, 0LL);
  this->fields.lvUpData = v17;
  p_lvUpData = &this->fields.lvUpData;
  sub_B52920((BattleServantConfConponent_o *)p_lvUpData, (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
  if ( !*p_lvUpData )
    goto LABEL_12;
  (*p_lvUpData)->fields.realIndex = idx;
  if ( !*p_lvUpData )
    goto LABEL_12;
  (*p_lvUpData)->fields.currentId = currentSkillId;
  v25 = *p_lvUpData;
  if ( !*p_lvUpData )
    goto LABEL_12;
  v25->fields.targetName = skillName;
  sub_B52920(
    (BattleServantConfConponent_o *)&v25->fields.targetName,
    (System_Int32_array **)skillName,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !*p_lvUpData
    || ((*p_lvUpData)->fields.currentLv = currentSkillLv, !*p_lvUpData)
    || ((*p_lvUpData)->fields.nextLv = currentSkillLv + 1, !*p_lvUpData)
    || ((*p_lvUpData)->fields.currentIndex = currentSkillNum, (v25 = *p_lvUpData) == 0LL)
    || (v25->fields.combineItemIds = combineItemIds,
        sub_B52920(
          (BattleServantConfConponent_o *)&v25->fields.combineItemIds,
          (System_Int32_array **)combineItemIds,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (v25 = *p_lvUpData) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(v25, v26);
  }
  v25->fields.targetDetail = skillDetail;
  sub_B52920(
    (BattleServantConfConponent_o *)&v25->fields.targetDetail,
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
    sub_B52A5C(this, qp);
  v4->fields.haveQp = this->fields.userQp;
}


void __fastcall AppendSkillCombineControl__SetSkillOpenNeedData(
        AppendSkillCombineControl_o *this,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v6; // x19
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  signed __int64 v9; // x23
  struct SetLevelUpData_o *lvUpData; // x8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserSvtCoinMaster_o *v12; // x20
  int64_t userId; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  struct SetLevelUpData_o *v16; // x9
  __int64 v17; // x0
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v6 = this;
  if ( (byte_42B2D7B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (AppendSkillCombineControl_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B2D7B = 1;
  }
  entity = 0LL;
  if ( !needItemIds )
    goto LABEL_30;
  v7 = *(_QWORD *)&needItemIds->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = (int)v7;
    while ( 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v8 >= needItemIds->max_length )
        break;
      if ( !this )
        goto LABEL_30;
      this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                              needItemIds->m_Items[v8 + 1],
                                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( this && LODWORD(this->fields.charaGraphBase) == 29 )
      {
        if ( !needItemNums )
          goto LABEL_30;
        if ( v8 >= needItemNums->max_length )
          break;
        lvUpData = v6->fields.lvUpData;
        if ( !lvUpData )
          goto LABEL_30;
        lvUpData->fields.spendSvtCoin = needItemNums->m_Items[v8 + 1];
      }
      if ( (__int64)++v8 >= v9 )
        goto LABEL_18;
    }
    v17 = sub_B52A88(this);
    sub_B52A28(v17, 0LL);
  }
LABEL_18:
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  baseUserServantEntity = v6->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_30;
  v12 = (UserSvtCoinMaster_o *)this;
  userId = v6->fields.userId;
  v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v19, 0LL);
  if ( !v12 )
    goto LABEL_30;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v12, &entity, userId, (int32_t)this, 0LL);
  if ( !entity )
    return;
  v16 = v6->fields.lvUpData;
  if ( !v16 )
LABEL_30:
    sub_B52A5C(this, needItemIds);
  v16->fields.haveSvtCoin = entity->fields.num;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetStateInfoMsg(
        AppendSkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v7; // x20
  float v8; // s4
  float v9; // s5
  float v10; // s6
  UILabel_o *v11; // x19
  __int64 *v12; // x8
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B2D7F & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1726/*"APPEND_SKILL_LVMAX_MSG"*/);
    sub_B52984(&StringLiteral_1727/*"APPEND_SKILL_LVUP_MSG"*/);
    sub_B52984(&StringLiteral_1731/*"APPEND_SKILL_OPEN_MSG"*/);
    sub_B52984(&StringLiteral_1721/*"APPEND_SKILL_COMBINE_INFO"*/);
    byte_42B2D7F = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    if ( !detailInfoLb )
      goto LABEL_26;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                detailInfoLb,
                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v14.fields.g = 0.87891;
    v14.fields.b = 0.98828;
    v7 = (UIWidget_o *)Component_WebViewObject;
    v14.fields.r = 0.0;
    *(_QWORD *)&v13.fields.r = 0LL;
    *(_QWORD *)&v13.fields.b = 0LL;
    UnityEngine_Color___ctor_41463668(v14, v8, v9, v10, (const MethodInfo *)&v13);
    if ( !v7 )
LABEL_26:
      sub_B52A5C(detailInfoLb, *(_QWORD *)&state);
    UIWidget__set_color(v7, v13, 0LL);
    switch ( this->fields.nowStatus )
    {
      case 0:
        v11 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v12 = &StringLiteral_1721/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_23;
      case 1:
        v11 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v12 = &StringLiteral_1731/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_23;
      case 2:
        v11 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v12 = &StringLiteral_1727/*"APPEND_SKILL_LVUP_MSG"*/;
        goto LABEL_23;
      case 3:
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v7, white, 0LL);
        v11 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v12 = &StringLiteral_1726/*"APPEND_SKILL_LVMAX_MSG"*/;
LABEL_23:
        detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v12, 0LL);
        if ( !v11 )
          goto LABEL_26;
        UILabel__set_text(v11, (System_String_o *)detailInfoLb, 0LL);
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
  int32_t v9; // w25
  int32_t v10; // w21
  int32_t v11; // w24
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x28
  int32_t baseUserServantEntity; // w25
  SkillEntity_o *v14; // x26
  __int64 v15; // x27
  int size; // w8
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v18; // x27
  float v19; // s4
  float v20; // s5
  float v21; // s6
  const MethodInfo *v22; // x2
  int v23; // w8
  int32_t nowStatus; // w8
  System_String_o *v25; // x24
  UISprite_o *combineTxtImg; // x25
  struct UserServantEntity_o *v27; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v28; // x27
  __int64 v29; // x25
  __int64 v30; // x28
  const MethodInfo *v31; // x3
  AppendSkillCombineControl_o *v32; // x27
  bool appended; // w0
  System_String_o *name; // x28
  System_Int32_array *combineRootComponent; // x23
  bool v36; // w25
  System_String_o *EffectExplanation; // x0
  const MethodInfo *v38; // x3
  bool v39; // w25
  char v40; // w28
  struct UserServantEntity_o *v41; // x8
  CombineAppendPassiveSkillMaster_o *v42; // x27
  __int64 v43; // x25
  __int64 v44; // x28
  CombineAppendPassiveSkillEntity_o *EntityWithTryNum; // x0
  UILabel_o *spendQpLabel; // x28
  CombineAppendPassiveSkillEntity_o *v47; // x27
  System_String_o *v48; // x25
  Il2CppObject *v49; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v51; // x23
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x3
  bool v54; // w0
  int32_t v55; // w8
  int32_t qp; // w9
  const MethodInfo *v57; // x2
  UIWidget_o *v58; // x23
  int v59; // s0
  bool v63; // w23
  System_String_o *v64; // x25
  UIWidget_o *v65; // x24
  int v66; // s0
  int32_t v70; // w24
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x21
  const MethodInfo *v72; // x1
  __int64 v73; // x0
  const MethodInfo *v74; // [xsp+0h] [xbp-90h]
  UIWidget_o *v75; // [xsp+18h] [xbp-78h]
  UIWidget_o *v76; // [xsp+18h] [xbp-78h]
  int32_t currentSkillId; // [xsp+24h] [xbp-6Ch]
  int32_t num; // [xsp+28h] [xbp-68h]
  int32_t userQp; // [xsp+2Ch] [xbp-64h] BYREF
  MethodInfo methoda; // [xsp+30h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42B2D78 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_9328/*"NEED_QP"*/);
    sub_B52984(&StringLiteral_17193/*"btn_txt_open2"*/);
    sub_B52984(&StringLiteral_17268/*"buttontxt_synthesis"*/);
    sub_B52984(&StringLiteral_12303/*"SHORT_ITEM_INFO_MSG"*/);
    sub_B52984(&StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/);
    sub_B52984(&StringLiteral_1722/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    this = (AppendSkillCombineControl_o *)sub_B52984(&StringLiteral_17266/*"buttontxt_notsynthesis"*/);
    byte_42B2D78 = 1;
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
    v73 = sub_B52A88(this);
    sub_B52A28(v73, 0LL);
  }
  v9 = svtUseSkillIdList->m_Items[idx + 1];
  v10 = svtSkillLvList->m_Items[idx + 1];
  v11 = svtSkillNumsList->m_Items[idx + 1];
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_22;
  this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          v9,
                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !this )
    return;
  currentSkillId = v9;
  num = v11;
  itemInfoList = v4->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_22;
  baseUserServantEntity = (int32_t)this->fields.baseUserServantEntity;
  v14 = (SkillEntity_o *)this;
  v15 = 0LL;
  while ( 1 )
  {
    size = itemInfoList->fields._size;
    if ( (int)v15 >= size )
      break;
    if ( size <= (unsigned int)v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (AppendSkillCombineControl_o *)itemInfoList->fields._items->m_Items[v15];
    if ( this )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
      itemInfoList = v4->fields.itemInfoList;
      ++v15;
      if ( itemInfoList )
        continue;
    }
    goto LABEL_22;
  }
  this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
  if ( !this )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v83.fields.g = 0.87891;
  v83.fields.b = 0.98828;
  v18 = (UIWidget_o *)Component_WebViewObject;
  v83.fields.r = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_41463668(v83, v19, v20, v21, &methoda);
  if ( !v18 )
    goto LABEL_22;
  *(_QWORD *)&v84.fields.r = methoda.methodPointer;
  *(_QWORD *)&v84.fields.b = methoda.invoker_method;
  UIWidget__set_color(v18, v84, 0LL);
  if ( v10 >= baseUserServantEntity )
    v23 = 3;
  else
    v23 = v10 ? 2 : 1;
  v4->fields.nowStatus = v23;
  AppendSkillCombineControl__SetStateInfoMsg(v4, 0, v22);
  this = (AppendSkillCombineControl_o *)v4->fields.combineQpInfo;
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  nowStatus = v4->fields.nowStatus;
  v25 = (System_String_o *)StringLiteral_1/*""*/;
  if ( nowStatus == 1 )
  {
    combineTxtImg = v4->fields.combineTxtImg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17193/*"btn_txt_open2"*/, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_22;
    v75 = v18;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v27 = v4->fields.baseUserServantEntity;
    if ( !v27 )
      goto LABEL_22;
    v28 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v30 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v81.fields.currentCryptoKey = v30;
    *(_QWORD *)&v81.fields.fakeValue = v29;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v81, 0LL);
    if ( !v28 )
      goto LABEL_22;
    this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v28, (int32_t)this, num, 0LL);
    v4->fields._IsExeCombine_k__BackingField = 1;
    if ( !this )
      goto LABEL_22;
    v32 = this;
    appended = AppendSkillCombineControl__SetNeedItemList(
                 v4,
                 (System_Int32_array *)this->fields.combineRootComponent,
                 *(System_Int32_array **)&this->fields.type,
                 v31);
    name = v14->fields.name;
    combineRootComponent = (System_Int32_array *)v32->fields.combineRootComponent;
    v36 = appended;
    EffectExplanation = SkillEntity__getEffectExplanation(v14, v10 + 1, 0LL);
    AppendSkillCombineControl__SetSkillLevelUpData(
      v4,
      idx,
      currentSkillId,
      v10,
      num,
      name,
      combineRootComponent,
      EffectExplanation,
      v74);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v4,
      (System_Int32_array *)v32->fields.combineRootComponent,
      *(System_Int32_array **)&v32->fields.type,
      v38);
    if ( v36 )
    {
      v18 = v75;
      v39 = 1;
      v40 = 1;
      goto LABEL_87;
    }
    v18 = v75;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1722/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0LL);
    goto LABEL_86;
  }
  if ( nowStatus != 2 )
  {
    if ( nowStatus == 3 )
    {
      v4->fields._IsExeCombine_k__BackingField = 0;
      AppendSkillCombineControl__SetExeBtnState(v4, *(const MethodInfo **)&idx);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_22;
      UISprite__set_atlas((UISprite_o *)this, v4->fields.baseAtlas, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_22;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17266/*"buttontxt_notsynthesis"*/, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_22;
      ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
        this,
        this->klass[2]._1.name);
    }
LABEL_86:
    v40 = 0;
    v39 = 1;
    goto LABEL_87;
  }
  this = (AppendSkillCombineControl_o *)v4->fields.combineQpInfo;
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_22;
  UISprite__set_atlas((UISprite_o *)this, v4->fields.baseAtlas, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_22;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17268/*"buttontxt_synthesis"*/, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_22;
  v76 = v18;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v41 = v4->fields.baseUserServantEntity;
  if ( !v41 )
    goto LABEL_22;
  v42 = (CombineAppendPassiveSkillMaster_o *)this;
  v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v82.fields.currentCryptoKey = v44;
  *(_QWORD *)&v82.fields.fakeValue = v43;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v82, 0LL);
  if ( !v42 )
    goto LABEL_22;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v42, (int32_t)this, num, v10, 0LL);
  spendQpLabel = v4->fields.spendQpLabel;
  v47 = EntityWithTryNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9328/*"NEED_QP"*/, 0LL);
  if ( !v47 )
    goto LABEL_22;
  v48 = (System_String_o *)this;
  LODWORD(methoda.methodPointer) = v47->fields.qp;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  this = (AppendSkillCombineControl_o *)System_String__Format(v48, v49, 0LL);
  if ( !spendQpLabel )
    goto LABEL_22;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0LL);
  haveQpLabel = v4->fields.haveQpLabel;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9328/*"NEED_QP"*/, 0LL);
  userQp = v4->fields.userQp;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userQp);
  this = (AppendSkillCombineControl_o *)System_String__Format(v51, v52, 0LL);
  if ( !haveQpLabel )
    goto LABEL_22;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0LL);
  v4->fields._IsExeCombine_k__BackingField = 1;
  v54 = AppendSkillCombineControl__SetNeedItemList(v4, v47->fields.itemIds, v47->fields.itemNums, v53);
  v55 = v4->fields.userQp;
  qp = v47->fields.qp;
  v40 = v54;
  v39 = v55 >= qp;
  if ( v55 < qp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( (v40 & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12303/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  AppendSkillCombineControl__SetSkillLevelUpData(
    v4,
    idx,
    currentSkillId,
    v10,
    num,
    v14->fields.name,
    v47->fields.itemIds,
    (System_String_o *)StringLiteral_1/*""*/,
    v74);
  AppendSkillCombineControl__SetSkillNeedQpData(v4, v47->fields.qp, v57);
  v18 = v76;
LABEL_87:
  v58 = (UIWidget_o *)v4->fields.spendQpLabel;
  *(UnityEngine_Color_o *)&v59 = UnityEngine_Color__get_white(0LL);
  if ( !v58 )
    goto LABEL_22;
  UIWidget__set_color(v58, *(UnityEngine_Color_o *)&v59, 0LL);
  v63 = v39 & v40;
  if ( (v39 & (unsigned __int8)v40 & 1) == 0 && v4->fields.nowStatus != 3 )
  {
    if ( !v39 )
    {
      v64 = v25;
      v65 = (UIWidget_o *)v4->fields.spendQpLabel;
      *(UnityEngine_Color_o *)&v66 = UnityEngine_Color__get_red(0LL);
      if ( !v65 )
        goto LABEL_22;
      UIWidget__set_color(v65, *(UnityEngine_Color_o *)&v66, 0LL);
      v25 = v64;
    }
    white = UnityEngine_Color__get_white(0LL);
    UIWidget__set_color(v18, white, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v25, 0LL);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_95;
    }
LABEL_22:
    sub_B52A5C(this, *(_QWORD *)&idx);
  }
LABEL_95:
  v70 = v10;
  targetList = v4->fields.targetList;
  if ( !targetList )
    goto LABEL_22;
  if ( targetList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  this = (AppendSkillCombineControl_o *)targetList->fields._items->m_Items[idx];
  if ( !this )
    goto LABEL_22;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp((ServantSkillInfoIconComponent_o *)this, v70, v63, 0LL);
  AppendSkillCombineControl__SetExeBtnState(v4, v72);
}