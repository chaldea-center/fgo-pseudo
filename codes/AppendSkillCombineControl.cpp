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
  __int64 v6; // x19
  __int64 v7; // x8
  struct CombineRootComponent_o *combineRootComponent; // x21
  unsigned __int64 v9; // x20
  __int64 v10; // x22
  __int64 v12; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418A6A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, resData);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    this = (AppendSkillCombineControl_o *)sub_B2C35C(
                                            &Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__,
                                            v5);
    byte_418A6A0 = 1;
  }
  entity = 0LL;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0LL)) == 0LL
    || (v6 = *(_QWORD *)&this->fields.m_CachedPtr) == 0 )
  {
LABEL_25:
    sub_B2C434(this, resData);
  }
  v7 = *(_QWORD *)(v6 + 24);
  if ( (int)v7 < 1 )
    return 1;
  combineRootComponent = this->fields.combineRootComponent;
  v9 = 0LL;
  v10 = v6 + 32;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v7 )
    {
LABEL_24:
      v12 = sub_B2C460(this);
      sub_B2C400(v12, 0LL);
    }
    if ( *(int *)(v10 + 4 * v9) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
      if ( v9 >= *(unsigned int *)(v6 + 24) )
        goto LABEL_24;
      if ( !this )
        goto LABEL_25;
      this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                              &entity,
                                              *(_DWORD *)(v10 + 4 * v9),
                                              (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !combineRootComponent )
          goto LABEL_25;
        if ( v9 >= LODWORD(combineRootComponent->fields.myFSM) )
          goto LABEL_24;
        if ( *((_DWORD *)&combineRootComponent->fields.uiRoot + v9) < SLODWORD(entity->fields.longName) )
          return 0;
      }
    }
    LODWORD(v7) = *(_DWORD *)(v6 + 24);
    if ( (__int64)++v9 >= (int)v7 )
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
  System_String_o *gameObject; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  int size; // w20
  unsigned int v14; // w21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  int v16; // w20
  unsigned int v17; // w21

  if ( (byte_418A697 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&string_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1703/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, v8);
    byte_418A697 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_1703/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0LL);
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
    v14 = 0;
    do
    {
      if ( skillInfoList->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      gameObject = (System_String_o *)skillInfoList->fields._items->m_Items[v14];
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( (int)++v14 >= size )
        goto LABEL_20;
      skillInfoList = this->fields.skillInfoList;
    }
    while ( skillInfoList );
LABEL_28:
    sub_B2C434(gameObject, v11);
  }
LABEL_20:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_28;
  v16 = itemInfoList->fields._size;
  if ( v16 >= 1 )
  {
    v17 = 0;
    do
    {
      if ( itemInfoList->fields._size <= v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      gameObject = (System_String_o *)itemInfoList->fields._items->m_Items[v17];
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( (int)++v17 >= v16 )
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
  __int64 v8; // x1
  void *helpBtn; // x0
  const MethodInfo *v10; // x1
  int32_t v11; // w8
  UISprite_o *titleImg; // x20
  UnityEngine_Object_o *charaGraph; // x20
  BattleServantConfConponent_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_418A696 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_19686/*"img_txt_extraskill_item"*/, v4);
    sub_B2C35C(&StringLiteral_17149/*"buttontxt_synthesis"*/, v5);
    sub_B2C35C(&StringLiteral_19685/*"img_txt_extraskill"*/, v6);
    byte_418A696 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0LL, 0, 0, 0, 0, 0LL);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  AppendSkillCombineControl__InitDispCombineInfo(this, v7);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v10);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_24;
  v11 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.combineTxtImg;
  this->fields.userQp = v11;
  if ( !helpBtn )
    goto LABEL_24;
  UISprite__set_atlas((UISprite_o *)helpBtn, this->fields.baseAtlas, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_24;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17149/*"buttontxt_synthesis"*/, 0LL);
  titleImg = this->fields.titleImg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_19685/*"img_txt_extraskill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_19686/*"img_txt_extraskill_item"*/, 0LL);
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
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B2C2F8(p_charaGraph, 0LL, v16, v17, v18, v19, v20, v21);
      return;
    }
LABEL_24:
    sub_B2C434(helpBtn, v8);
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
  __int64 v9; // x1
  System_String_o *v10; // x2
  bool v11; // w3
  SetRarityDialogControl_o *v12; // x0
  SetLevelUpData_o *v13; // x1
  struct SetRarityDialogControl_o *exeCombineDlg; // x20
  struct SetLevelUpData_o *lvUpData; // x19

  if ( (byte_418A6A2 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1708/*"APPEND_SKILL_LVUP_TITLE"*/, v3);
    sub_B2C35C(&StringLiteral_1713/*"APPEND_SKILL_OPEN_TITLE"*/, v4);
    byte_418A6A2 = 1;
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
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1708/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
    if ( exeCombineDlg )
    {
      v10 = v8;
      v12 = exeCombineDlg;
      v13 = lvUpData;
      v11 = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B2C434(v8, v9);
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
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1713/*"APPEND_SKILL_OPEN_TITLE"*/, 0LL);
    if ( v6 )
    {
      v10 = v8;
      v11 = 1;
      v12 = v6;
      v13 = v7;
LABEL_15:
      SetRarityDialogControl__SetAppendSkillCombineInfo(v12, v13, v10, v11, 0LL);
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
  UnityEngine_Component_o *v13; // x19
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *transform; // x20
  int v17; // s0
  __int64 v20; // x0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_418A6A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    this = (AppendSkillCombineControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418A6A4 = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_22;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_22;
  if ( svtSkillLvList->max_length <= idx )
  {
    v20 = sub_B2C460(this);
    sub_B2C400(v20, 0LL);
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
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
      if ( this )
      {
        v13 = (UnityEngine_Component_o *)this;
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)this, callback, 0LL);
        this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v13, 0LL);
        skillInfoList = v6->fields.skillInfoList;
        if ( skillInfoList )
        {
          v15 = (UnityEngine_Transform_o *)this;
          if ( skillInfoList->fields._size <= (unsigned int)idx )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
              if ( v15 )
              {
                UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)this, 0LL);
                transform = UnityEngine_Component__get_transform(v13, 0LL);
                *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
                if ( transform )
                {
                  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
                  this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v13, 0LL);
                  if ( this )
                  {
                    v21.fields.x = 0.5;
                    v21.fields.y = 0.5;
                    v21.fields.z = 0.5;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v21, 0LL);
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
LABEL_22:
    sub_B2C434(this, *(_QWORD *)&idx);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitImageMaster_o *v12; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v15; // w21
  AppendSkillCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_25402508; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_418A69A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, userSvtEnt);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    this = (AppendSkillCombineControl_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_418A69A = 1;
  }
  if ( !userSvtEnt )
    goto LABEL_18;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtEnt, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
  if ( !v12 )
    goto LABEL_18;
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
  p_charaGraph = (AppendSkillCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_25402508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25402508(
                                                      v4->fields.charaGraphBase,
                                                      userSvtEnt,
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
LABEL_18:
    sub_B2C434(this, userSvtEnt);
  UICharaGraphTexture__SetCharacter_35719956((UICharaGraphTexture_o *)this, userSvtEnt, v15, 0LL, 0, 0LL);
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

  if ( (byte_418A698 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtEnt);
    byte_418A698 = 1;
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v25, 0LL);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v8;
    sub_B2C2F8(
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
      sub_B2C434(preSelectBaseLb, v15);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_B2C2F8(
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
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v8; // x19
  int v9; // s0
  int v13; // s0

  if ( (byte_418A6A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_418A6A1 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v8 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( v5 )
    {
      UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v9, 0LL);
      if ( v8 )
      {
        UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v8, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B2C434(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_gray(0LL);
  if ( !v5 )
    goto LABEL_12;
  UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v13, 0LL);
  if ( !v8 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
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
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x23
  __int64 v11; // x21
  int size; // w8
  struct System_Int32_array *useSkillIdList; // x8
  const MethodInfo *v14; // x2
  __int64 v15; // x0

  v4 = this;
  if ( (byte_418A69B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, *(_QWORD *)&idx);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    this = (AppendSkillCombineControl_o *)sub_B2C35C(&StringLiteral_8843/*"MSG_SKILL_SELECT"*/, v7);
    byte_418A69B = 1;
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
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8843/*"MSG_SKILL_SELECT"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0LL), (targetList = v4->fields.targetList) == 0LL) )
    {
LABEL_18:
      sub_B2C434(this, *(_QWORD *)&idx);
    }
    v11 = 0LL;
    while ( 1 )
    {
      size = targetList->fields._size;
      if ( (int)v11 >= size )
        break;
      if ( size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
        {
          v15 = sub_B2C460(this);
          sub_B2C400(v15, 0LL);
        }
        this = (AppendSkillCombineControl_o *)targetList->fields._items->m_Items[v11];
        if ( this )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.titleImg),
            0LL);
          AppendSkillCombineControl__SetSvtSkillCombineData(v4, v11, v14);
          targetList = v4->fields.targetList;
          ++v11;
          if ( targetList )
            continue;
        }
      }
      goto LABEL_18;
    }
    AppendSkillCombineControl__SetSvtSkillCombineData(v4, idx, v9);
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
  if ( (byte_418A69D & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                            needItemIds);
    byte_418A69D = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( (unsigned int)v8 >= needItemIds->max_length )
        goto LABEL_18;
      if ( !needItemNums )
        break;
      if ( (unsigned int)v8 >= needItemNums->max_length )
      {
LABEL_18:
        v14 = sub_B2C460(this);
        sub_B2C400(v14, 0LL);
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
    sub_B2C434(this, needItemIds);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Int32_array **svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v21; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  unsigned __int64 v30; // x23
  struct System_Int32_array *v31; // x8
  int32_t v32; // w24
  int32_t baseUserServantEntity; // w25
  struct CombineRootComponent_o **p_combineRootComponent; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x19
  System_String_o *v37; // x26
  int32_t v38; // w28
  ServantSkillInfoIconComponent_o *v39; // x27
  ServantSkillInfoIconComponent_ClickDelegate_o *v40; // x19
  __int64 v41; // x0
  AppendSkillCombineControl_o **p_targetList; // [xsp+0h] [xbp-60h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+8h] [xbp-58h]

  v9 = this;
  if ( (byte_418A699 & 1) == 0 )
  {
    sub_B2C35C(&Method_AppendSkillCombineControl_OnClickInfo__, skillData);
    sub_B2C35C(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v17);
    this = (AppendSkillCombineControl_o *)sub_B2C35C(&StringLiteral_747/*"-"*/, v18);
    byte_418A699 = 1;
  }
  if ( !skillData )
    goto LABEL_27;
  svtUseSkillIdList = (System_Int32_array **)skillData->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_B2C2F8(
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
  v21 = *(_QWORD *)&useSkillIdList->max_length;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v22;
  p_targetList = (AppendSkillCombineControl_o **)&v9->fields.targetList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v9->fields.targetList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( (int)v21 >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      v31 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v30 >= v31->max_length )
        goto LABEL_28;
      v32 = v31->m_Items[v30 + 1];
      if ( v32 >= 1 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                v32,
                                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          baseUserServantEntity = (int32_t)this->fields.baseUserServantEntity;
          p_combineRootComponent = &this->fields.combineRootComponent;
        }
        else
        {
          p_combineRootComponent = (struct CombineRootComponent_o **)&StringLiteral_747/*"-"*/;
          baseUserServantEntity = 10;
        }
        svtSkillLvList = skillData->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v30 >= svtSkillLvList->max_length )
        {
LABEL_28:
          v41 = sub_B2C460(this);
          sub_B2C400(v41, 0LL);
        }
        skillInfoList = v9->fields.skillInfoList;
        if ( !skillInfoList )
          break;
        v37 = (System_String_o *)*p_combineRootComponent;
        v38 = svtSkillLvList->m_Items[v30 + 1];
        if ( v30 >= (unsigned int)skillInfoList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v39 = skillInfoList->fields._items->m_Items[v30];
        v40 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_B2C42C(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v40,
          (Il2CppObject *)v9,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0LL);
        if ( !v39 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_28897608(v39, v30, v37, v32, v38, baseUserServantEntity, v40, 0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
      }
      if ( (__int64)++v30 >= (int)v21 )
        goto LABEL_26;
    }
LABEL_27:
    sub_B2C434(this, skillData);
  }
LABEL_26:
  AppendSkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v29);
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

  if ( (byte_418A69E & 1) == 0 )
  {
    sub_B2C35C(&SetLevelUpData_TypeInfo, *(_QWORD *)&idx);
    byte_418A69E = 1;
  }
  v17 = (SetLevelUpData_o *)sub_B2C42C(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v17, 0LL);
  this->fields.lvUpData = v17;
  p_lvUpData = &this->fields.lvUpData;
  sub_B2C2F8((BattleServantConfConponent_o *)p_lvUpData, (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
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
  sub_B2C2F8(
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
        sub_B2C2F8(
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
    sub_B2C434(v25, v26);
  }
  v25->fields.targetDetail = skillDetail;
  sub_B2C2F8(
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
    sub_B2C434(this, qp);
  v4->fields.haveQp = this->fields.userQp;
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
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  signed __int64 v13; // x23
  struct SetLevelUpData_o *lvUpData; // x8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserSvtCoinMaster_o *v16; // x20
  int64_t userId; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  struct SetLevelUpData_o *v20; // x9
  __int64 v21; // x0
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v6 = this;
  if ( (byte_418A69F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, needItemIds);
    sub_B2C35C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    this = (AppendSkillCombineControl_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_418A69F = 1;
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
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v12 >= needItemIds->max_length )
        break;
      if ( !this )
        goto LABEL_30;
      this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                              needItemIds->m_Items[v12 + 1],
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( this && LODWORD(this->fields.charaGraphBase) == 29 )
      {
        if ( !needItemNums )
          goto LABEL_30;
        if ( v12 >= needItemNums->max_length )
          break;
        lvUpData = v6->fields.lvUpData;
        if ( !lvUpData )
          goto LABEL_30;
        lvUpData->fields.spendSvtCoin = needItemNums->m_Items[v12 + 1];
      }
      if ( (__int64)++v12 >= v13 )
        goto LABEL_18;
    }
    v21 = sub_B2C460(this);
    sub_B2C400(v21, 0LL);
  }
LABEL_18:
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  baseUserServantEntity = v6->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_30;
  v16 = (UserSvtCoinMaster_o *)this;
  userId = v6->fields.userId;
  v19 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v19;
  *(_QWORD *)&v23.fields.fakeValue = v18;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
  if ( !v16 )
    goto LABEL_30;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v16, &entity, userId, (int32_t)this, 0LL);
  if ( !entity )
    return;
  v20 = v6->fields.lvUpData;
  if ( !v20 )
LABEL_30:
    sub_B2C434(this, needItemIds);
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
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v12; // x20
  float v13; // s4
  float v14; // s5
  float v15; // s6
  UILabel_o *v16; // x19
  __int64 *v17; // x8
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A6A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1706/*"APPEND_SKILL_LVMAX_MSG"*/, v6);
    sub_B2C35C(&StringLiteral_1707/*"APPEND_SKILL_LVUP_MSG"*/, v7);
    sub_B2C35C(&StringLiteral_1711/*"APPEND_SKILL_OPEN_MSG"*/, v8);
    sub_B2C35C(&StringLiteral_1701/*"APPEND_SKILL_COMBINE_INFO"*/, v9);
    byte_418A6A3 = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    if ( !detailInfoLb )
      goto LABEL_26;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                detailInfoLb,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v19.fields.g = 0.87891;
    v19.fields.b = 0.98828;
    v12 = (UIWidget_o *)Component_WebViewObject;
    v19.fields.r = 0.0;
    *(_QWORD *)&v18.fields.r = 0LL;
    *(_QWORD *)&v18.fields.b = 0LL;
    UnityEngine_Color___ctor_40633184(v19, v13, v14, v15, (const MethodInfo *)&v18);
    if ( !v12 )
LABEL_26:
      sub_B2C434(detailInfoLb, *(_QWORD *)&state);
    UIWidget__set_color(v12, v18, 0LL);
    switch ( this->fields.nowStatus )
    {
      case 0:
        v16 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_1701/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_23;
      case 1:
        v16 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_1711/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_23;
      case 2:
        v16 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_1707/*"APPEND_SKILL_LVUP_MSG"*/;
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
        v17 = &StringLiteral_1706/*"APPEND_SKILL_LVMAX_MSG"*/;
LABEL_23:
        detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v17, 0LL);
        if ( !v16 )
          goto LABEL_26;
        UILabel__set_text(v16, (System_String_o *)detailInfoLb, 0LL);
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
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x28
  int32_t baseUserServantEntity; // w25
  SkillEntity_o *v34; // x26
  __int64 v35; // x27
  int size; // w8
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v38; // x27
  float v39; // s4
  float v40; // s5
  float v41; // s6
  const MethodInfo *v42; // x2
  int v43; // w8
  int32_t nowStatus; // w8
  System_String_o *v45; // x24
  UISprite_o *combineTxtImg; // x25
  struct UserServantEntity_o *v47; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v48; // x27
  __int64 v49; // x25
  __int64 v50; // x28
  const MethodInfo *v51; // x3
  AppendSkillCombineControl_o *v52; // x27
  bool appended; // w0
  System_String_o *name; // x28
  System_Int32_array *combineRootComponent; // x23
  bool v56; // w25
  System_String_o *EffectExplanation; // x0
  const MethodInfo *v58; // x3
  bool v59; // w25
  char v60; // w28
  struct UserServantEntity_o *v61; // x8
  CombineAppendPassiveSkillMaster_o *v62; // x27
  __int64 v63; // x25
  __int64 v64; // x28
  CombineAppendPassiveSkillEntity_o *EntityWithTryNum; // x0
  UILabel_o *spendQpLabel; // x28
  CombineAppendPassiveSkillEntity_o *v67; // x27
  System_String_o *v68; // x25
  Il2CppObject *v69; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v71; // x23
  Il2CppObject *v72; // x0
  const MethodInfo *v73; // x3
  bool v74; // w0
  int32_t v75; // w8
  int32_t qp; // w9
  const MethodInfo *v77; // x2
  UIWidget_o *v78; // x23
  int v79; // s0
  bool v83; // w23
  System_String_o *v84; // x25
  UIWidget_o *v85; // x24
  int v86; // s0
  int32_t v90; // w24
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x21
  const MethodInfo *v92; // x1
  __int64 v93; // x0
  const MethodInfo *v94; // [xsp+0h] [xbp-90h]
  UIWidget_o *v95; // [xsp+18h] [xbp-78h]
  UIWidget_o *v96; // [xsp+18h] [xbp-78h]
  int32_t currentSkillId; // [xsp+24h] [xbp-6Ch]
  int32_t num; // [xsp+28h] [xbp-68h]
  int32_t userQp; // [xsp+2Ch] [xbp-64h] BYREF
  MethodInfo methoda; // [xsp+30h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_418A69C & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_9271/*"NEED_QP"*/, v17);
    sub_B2C35C(&StringLiteral_17075/*"btn_txt_open2"*/, v18);
    sub_B2C35C(&StringLiteral_17149/*"buttontxt_synthesis"*/, v19);
    sub_B2C35C(&StringLiteral_12214/*"SHORT_ITEM_INFO_MSG"*/, v20);
    sub_B2C35C(&StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, v21);
    sub_B2C35C(&StringLiteral_1702/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, v22);
    sub_B2C35C(&StringLiteral_1/*""*/, v23);
    this = (AppendSkillCombineControl_o *)sub_B2C35C(&StringLiteral_17147/*"buttontxt_notsynthesis"*/, v24);
    byte_418A69C = 1;
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
    v93 = sub_B2C460(this);
    sub_B2C400(v93, 0LL);
  }
  v29 = svtUseSkillIdList->m_Items[idx + 1];
  v30 = svtSkillLvList->m_Items[idx + 1];
  v31 = svtSkillNumsList->m_Items[idx + 1];
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_22;
  this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          v29,
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !this )
    return;
  currentSkillId = v29;
  num = v31;
  itemInfoList = v4->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_22;
  baseUserServantEntity = (int32_t)this->fields.baseUserServantEntity;
  v34 = (SkillEntity_o *)this;
  v35 = 0LL;
  while ( 1 )
  {
    size = itemInfoList->fields._size;
    if ( (int)v35 >= size )
      break;
    if ( size <= (unsigned int)v35 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (AppendSkillCombineControl_o *)itemInfoList->fields._items->m_Items[v35];
    if ( this )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
      itemInfoList = v4->fields.itemInfoList;
      ++v35;
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
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v103.fields.g = 0.87891;
  v103.fields.b = 0.98828;
  v38 = (UIWidget_o *)Component_WebViewObject;
  v103.fields.r = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_40633184(v103, v39, v40, v41, &methoda);
  if ( !v38 )
    goto LABEL_22;
  *(_QWORD *)&v104.fields.r = methoda.methodPointer;
  *(_QWORD *)&v104.fields.b = methoda.invoker_method;
  UIWidget__set_color(v38, v104, 0LL);
  if ( v30 >= baseUserServantEntity )
    v43 = 3;
  else
    v43 = v30 ? 2 : 1;
  v4->fields.nowStatus = v43;
  AppendSkillCombineControl__SetStateInfoMsg(v4, 0, v42);
  this = (AppendSkillCombineControl_o *)v4->fields.combineQpInfo;
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  nowStatus = v4->fields.nowStatus;
  v45 = (System_String_o *)StringLiteral_1/*""*/;
  if ( nowStatus == 1 )
  {
    combineTxtImg = v4->fields.combineTxtImg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17075/*"btn_txt_open2"*/, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_22;
    v95 = v38;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v47 = v4->fields.baseUserServantEntity;
    if ( !v47 )
      goto LABEL_22;
    v48 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
    v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v101.fields.currentCryptoKey = v50;
    *(_QWORD *)&v101.fields.fakeValue = v49;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v101, 0LL);
    if ( !v48 )
      goto LABEL_22;
    this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v48, (int32_t)this, num, 0LL);
    v4->fields._IsExeCombine_k__BackingField = 1;
    if ( !this )
      goto LABEL_22;
    v52 = this;
    appended = AppendSkillCombineControl__SetNeedItemList(
                 v4,
                 (System_Int32_array *)this->fields.combineRootComponent,
                 *(System_Int32_array **)&this->fields.type,
                 v51);
    name = v34->fields.name;
    combineRootComponent = (System_Int32_array *)v52->fields.combineRootComponent;
    v56 = appended;
    EffectExplanation = SkillEntity__getEffectExplanation(v34, v30 + 1, 0LL);
    AppendSkillCombineControl__SetSkillLevelUpData(
      v4,
      idx,
      currentSkillId,
      v30,
      num,
      name,
      combineRootComponent,
      EffectExplanation,
      v94);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v4,
      (System_Int32_array *)v52->fields.combineRootComponent,
      *(System_Int32_array **)&v52->fields.type,
      v58);
    if ( v56 )
    {
      v38 = v95;
      v59 = 1;
      v60 = 1;
      goto LABEL_87;
    }
    v38 = v95;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_1702/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17147/*"buttontxt_notsynthesis"*/, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_22;
      ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
        this,
        this->klass[2]._1.name);
    }
LABEL_86:
    v60 = 0;
    v59 = 1;
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17149/*"buttontxt_synthesis"*/, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_22;
  v96 = v38;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v61 = v4->fields.baseUserServantEntity;
  if ( !v61 )
    goto LABEL_22;
  v62 = (CombineAppendPassiveSkillMaster_o *)this;
  v64 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v102.fields.currentCryptoKey = v64;
  *(_QWORD *)&v102.fields.fakeValue = v63;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v102, 0LL);
  if ( !v62 )
    goto LABEL_22;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v62, (int32_t)this, num, v30, 0LL);
  spendQpLabel = v4->fields.spendQpLabel;
  v67 = EntityWithTryNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9271/*"NEED_QP"*/, 0LL);
  if ( !v67 )
    goto LABEL_22;
  v68 = (System_String_o *)this;
  LODWORD(methoda.methodPointer) = v67->fields.qp;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  this = (AppendSkillCombineControl_o *)System_String__Format(v68, v69, 0LL);
  if ( !spendQpLabel )
    goto LABEL_22;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0LL);
  haveQpLabel = v4->fields.haveQpLabel;
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_9271/*"NEED_QP"*/, 0LL);
  userQp = v4->fields.userQp;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userQp);
  this = (AppendSkillCombineControl_o *)System_String__Format(v71, v72, 0LL);
  if ( !haveQpLabel )
    goto LABEL_22;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0LL);
  v4->fields._IsExeCombine_k__BackingField = 1;
  v74 = AppendSkillCombineControl__SetNeedItemList(v4, v67->fields.itemIds, v67->fields.itemNums, v73);
  v75 = v4->fields.userQp;
  qp = v67->fields.qp;
  v60 = v74;
  v59 = v75 >= qp;
  if ( v75 < qp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( (v60 & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  AppendSkillCombineControl__SetSkillLevelUpData(
    v4,
    idx,
    currentSkillId,
    v30,
    num,
    v34->fields.name,
    v67->fields.itemIds,
    (System_String_o *)StringLiteral_1/*""*/,
    v94);
  AppendSkillCombineControl__SetSkillNeedQpData(v4, v67->fields.qp, v77);
  v38 = v96;
LABEL_87:
  v78 = (UIWidget_o *)v4->fields.spendQpLabel;
  *(UnityEngine_Color_o *)&v79 = UnityEngine_Color__get_white(0LL);
  if ( !v78 )
    goto LABEL_22;
  UIWidget__set_color(v78, *(UnityEngine_Color_o *)&v79, 0LL);
  v83 = v59 & v60;
  if ( (v59 & (unsigned __int8)v60 & 1) == 0 && v4->fields.nowStatus != 3 )
  {
    if ( !v59 )
    {
      v84 = v45;
      v85 = (UIWidget_o *)v4->fields.spendQpLabel;
      *(UnityEngine_Color_o *)&v86 = UnityEngine_Color__get_red(0LL);
      if ( !v85 )
        goto LABEL_22;
      UIWidget__set_color(v85, *(UnityEngine_Color_o *)&v86, 0LL);
      v45 = v84;
    }
    white = UnityEngine_Color__get_white(0LL);
    UIWidget__set_color(v38, white, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v45, 0LL);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_95;
    }
LABEL_22:
    sub_B2C434(this, *(_QWORD *)&idx);
  }
LABEL_95:
  v90 = v30;
  targetList = v4->fields.targetList;
  if ( !targetList )
    goto LABEL_22;
  if ( targetList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (AppendSkillCombineControl_o *)targetList->fields._items->m_Items[idx];
  if ( !this )
    goto LABEL_22;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp((ServantSkillInfoIconComponent_o *)this, v90, v83, 0LL);
  AppendSkillCombineControl__SetExeBtnState(v4, v92);
}