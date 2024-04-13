void __fastcall AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


bool __fastcall AppendSkillCombineControl__CheckIsMaxLvSkills(
        AppendSkillCombineControl_o *this,
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
  __int64 v11; // x19
  __int64 v12; // x8
  struct CombineRootComponent_o *combineRootComponent; // x21
  unsigned __int64 v14; // x20
  __int64 v15; // x22
  __int64 v17; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EB75E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, (_DWORD)resData, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    this = (AppendSkillCombineControl_o *)sub_B5D5C4(
                                            &Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__,
                                            v8,
                                            v9,
                                            v10);
    byte_42EB75E = 1;
  }
  entity = 0LL;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0LL)) == 0LL
    || (v11 = *(_QWORD *)&this->fields.m_CachedPtr) == 0 )
  {
LABEL_25:
    sub_B5D69C(this, resData);
  }
  v12 = *(_QWORD *)(v11 + 24);
  if ( (int)v12 < 1 )
    return 1;
  combineRootComponent = this->fields.combineRootComponent;
  v14 = 0LL;
  v15 = v11 + 32;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v12 )
    {
LABEL_24:
      v17 = sub_B5D6C8(this);
      sub_B5D668(v17, 0LL);
    }
    if ( *(int *)(v15 + 4 * v14) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
      if ( v14 >= *(unsigned int *)(v11 + 24) )
        goto LABEL_24;
      if ( !this )
        goto LABEL_25;
      this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                              &entity,
                                              *(_DWORD *)(v15 + 4 * v14),
                                              (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !combineRootComponent )
          goto LABEL_25;
        if ( v14 >= LODWORD(combineRootComponent->fields.myFSM) )
          goto LABEL_24;
        if ( *((_DWORD *)&combineRootComponent->fields.uiRoot + v14) < SLODWORD(entity->fields.longName) )
          return 0;
      }
    }
    LODWORD(v12) = *(_DWORD *)(v11 + 24);
    if ( (__int64)++v14 >= (int)v12 )
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
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *gameObject; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  int size; // w20
  unsigned int v28; // w21
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x22
  int v30; // w20
  unsigned int v31; // w21

  if ( (byte_42EB755 & 1) == 0 )
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
    sub_B5D5C4(&string_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1728/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, v20, v21, v22);
    byte_42EB755 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_1728/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0LL);
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
    v28 = 0;
    do
    {
      if ( skillInfoList->fields._size <= v28 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      gameObject = (System_String_o *)skillInfoList->fields._items->m_Items[v28];
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( (int)++v28 >= size )
        goto LABEL_20;
      skillInfoList = this->fields.skillInfoList;
    }
    while ( skillInfoList );
LABEL_28:
    sub_B5D69C(gameObject, v25);
  }
LABEL_20:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_28;
  v30 = itemInfoList->fields._size;
  if ( v30 >= 1 )
  {
    v31 = 0;
    do
    {
      if ( itemInfoList->fields._size <= v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      gameObject = (System_String_o *)itemInfoList->fields._items->m_Items[v31];
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( (int)++v31 >= v30 )
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
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  void *helpBtn; // x0
  const MethodInfo *v20; // x1
  int32_t v21; // w8
  UISprite_o *titleImg; // x20
  UnityEngine_Object_o *charaGraph; // x20
  BattleServantConfConponent_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42EB754 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19935/*"img_txt_extraskill_item"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17362/*"buttontxt_synthesis"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19934/*"img_txt_extraskill"*/, v14, v15, v16);
    byte_42EB754 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0LL, 0, 0, 0, 0, 0LL);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  AppendSkillCombineControl__InitDispCombineInfo(this, v17);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v20);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_24;
  v21 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.combineTxtImg;
  this->fields.userQp = v21;
  if ( !helpBtn )
    goto LABEL_24;
  UISprite__set_atlas((UISprite_o *)helpBtn, this->fields.baseAtlas, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_24;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17362/*"buttontxt_synthesis"*/, 0LL);
  titleImg = this->fields.titleImg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_19934/*"img_txt_extraskill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_19935/*"img_txt_extraskill_item"*/, 0LL);
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
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B5D560(p_charaGraph, 0LL, v26, v27, v28, v29, v30, v31);
      return;
    }
LABEL_24:
    sub_B5D69C(helpBtn, v18);
  }
}


void __fastcall AppendSkillCombineControl__OnClickExeCombine(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t nowStatus; // w8
  struct SetRarityDialogControl_o *v12; // x20
  struct SetLevelUpData_o *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  bool v17; // w3
  SetRarityDialogControl_o *v18; // x0
  SetLevelUpData_o *v19; // x1
  struct SetRarityDialogControl_o *exeCombineDlg; // x20
  struct SetLevelUpData_o *lvUpData; // x19

  if ( (byte_42EB760 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1733/*"APPEND_SKILL_LVUP_TITLE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1738/*"APPEND_SKILL_OPEN_TITLE"*/, v8, v9, v10);
    byte_42EB760 = 1;
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
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1733/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
    if ( exeCombineDlg )
    {
      v16 = v14;
      v18 = exeCombineDlg;
      v19 = lvUpData;
      v17 = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B5D69C(v14, v15);
  }
  if ( nowStatus == 1 )
  {
    v12 = this->fields.exeCombineDlg;
    v13 = this->fields.lvUpData;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1738/*"APPEND_SKILL_OPEN_TITLE"*/, 0LL);
    if ( v12 )
    {
      v16 = v14;
      v17 = 1;
      v18 = v12;
      v19 = v13;
LABEL_15:
      SetRarityDialogControl__SetAppendSkillCombineInfo(v18, v19, v16, v17, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct SvtUseSkillData_o *skillData; // x8
  struct System_Int32_array *svtSkillLvList; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *effect; // x19
  UnityEngine_Component_o *v19; // x19
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x22
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Transform_o *transform; // x20
  int v23; // s0
  __int64 v26; // x0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42EB762 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, idx, (_DWORD)callback, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11, v12);
    this = (AppendSkillCombineControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42EB762 = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_22;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_22;
  if ( svtSkillLvList->max_length <= idx )
  {
    v26 = sub_B5D6C8(this);
    sub_B5D668(v26, 0LL);
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
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
      if ( this )
      {
        v19 = (UnityEngine_Component_o *)this;
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)this, callback, 0LL);
        this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v19, 0LL);
        skillInfoList = v6->fields.skillInfoList;
        if ( skillInfoList )
        {
          v21 = (UnityEngine_Transform_o *)this;
          if ( skillInfoList->fields._size <= (unsigned int)idx )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
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
              if ( v21 )
              {
                UnityEngine_Transform__set_parent(v21, (UnityEngine_Transform_o *)this, 0LL);
                transform = UnityEngine_Component__get_transform(v19, 0LL);
                *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
                if ( transform )
                {
                  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
                  this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v19, 0LL);
                  if ( this )
                  {
                    v27.fields.x = 0.5;
                    v27.fields.y = 0.5;
                    v27.fields.z = 0.5;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v27, 0LL);
                    CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v19, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&idx);
  }
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall AppendSkillCombineControl__SetBaseSvtCardImg(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AppendSkillCombineControl_o *v5; // x20
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  ServantLimitImageMaster_o *v19; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v22; // w21
  AppendSkillCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_26715804; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v5 = this;
  if ( (byte_42EB758 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, (_DWORD)userSvtEnt, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    this = (AppendSkillCombineControl_o *)sub_B5D5C4(
                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                            v12,
                                            v13,
                                            v14);
    byte_42EB758 = 1;
  }
  if ( !userSvtEnt )
    goto LABEL_18;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtEnt, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v18 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
  if ( !v19 )
    goto LABEL_18;
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
  p_charaGraph = (AppendSkillCombineControl_o **)&v5->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26715804 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26715804(
                                                      v5->fields.charaGraphBase,
                                                      userSvtEnt,
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
LABEL_18:
    sub_B5D69C(this, userSvtEnt);
  UICharaGraphTexture__SetCharacter_35988116((UICharaGraphTexture_o *)this, userSvtEnt, v22, 0LL, 0, 0LL);
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

  if ( (byte_42EB756 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)userSvtEnt, idx, method);
    byte_42EB756 = 1;
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
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v25, 0LL);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v8;
    sub_B5D560(
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
      sub_B5D69C(preSelectBaseLb, v15);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v9; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v12; // x19
  int v13; // s0
  int v17; // s0

  if ( (byte_42EB75F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenScale___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    byte_42EB75F = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v9 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v12 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
    if ( v9 )
    {
      UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v13, 0LL);
      if ( v12 )
      {
        UnityEngine_Behaviour__set_enabled(v12, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v12, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
  if ( !v9 )
    goto LABEL_12;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v17, 0LL);
  if ( !v12 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v12, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetNeedItemInfo(
        AppendSkillCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AppendSkillCombineControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UILabel_o *selectSkillHelpLb; // x21
  const MethodInfo *v16; // x2
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x23
  __int64 v18; // x21
  int size; // w8
  struct System_Int32_array *useSkillIdList; // x8
  const MethodInfo *v21; // x2
  __int64 v22; // x0

  v5 = this;
  if ( (byte_42EB759 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__,
      idx,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    this = (AppendSkillCombineControl_o *)sub_B5D5C4(&StringLiteral_8934/*"MSG_SKILL_SELECT"*/, v12, v13, v14);
    byte_42EB759 = 1;
  }
  if ( v5->fields.baseUserServantEntity )
  {
    if ( !v5->fields.targetList )
      goto LABEL_18;
    selectSkillHelpLb = v5->fields.selectSkillHelpLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8934/*"MSG_SKILL_SELECT"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0LL), (targetList = v5->fields.targetList) == 0LL) )
    {
LABEL_18:
      sub_B5D69C(this, *(_QWORD *)&idx);
    }
    v18 = 0LL;
    while ( 1 )
    {
      size = targetList->fields._size;
      if ( (int)v18 >= size )
        break;
      if ( size <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      useSkillIdList = v5->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
        {
          v22 = sub_B5D6C8(this);
          sub_B5D668(v22, 0LL);
        }
        this = (AppendSkillCombineControl_o *)targetList->fields._items->m_Items[v18];
        if ( this )
        {
          ServantSkillInfoIconComponent__setDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.titleImg),
            0LL);
          AppendSkillCombineControl__SetSvtSkillCombineData(v5, v18, v21);
          targetList = v5->fields.targetList;
          ++v18;
          if ( targetList )
            continue;
        }
      }
      goto LABEL_18;
    }
    AppendSkillCombineControl__SetSvtSkillCombineData(v5, idx, v16);
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
  if ( (byte_42EB75B & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                            (_DWORD)needItemIds,
                                            (_DWORD)needItemNums,
                                            method);
    byte_42EB75B = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( (unsigned int)v8 >= needItemIds->max_length )
        goto LABEL_18;
      if ( !needItemNums )
        break;
      if ( (unsigned int)v8 >= needItemNums->max_length )
      {
LABEL_18:
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
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
    sub_B5D69C(this, needItemIds);
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
  System_Int32_array **svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v39; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x2
  unsigned __int64 v48; // x23
  struct System_Int32_array *v49; // x8
  int32_t v50; // w24
  int32_t baseUserServantEntity; // w25
  struct CombineRootComponent_o **p_combineRootComponent; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x19
  System_String_o *v55; // x26
  int32_t v56; // w28
  ServantSkillInfoIconComponent_o *v57; // x27
  ServantSkillInfoIconComponent_ClickDelegate_o *v58; // x19
  __int64 v59; // x0
  AppendSkillCombineControl_o **p_targetList; // [xsp+0h] [xbp-60h]
  struct System_Int32_array **p_useSkillIdList; // [xsp+8h] [xbp-58h]

  v9 = this;
  if ( (byte_42EB757 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AppendSkillCombineControl_OnClickInfo__, (_DWORD)skillData, (_DWORD)method, v3);
    sub_B5D5C4(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v31, v32, v33);
    this = (AppendSkillCombineControl_o *)sub_B5D5C4(&StringLiteral_755/*"-"*/, v34, v35, v36);
    byte_42EB757 = 1;
  }
  if ( !skillData )
    goto LABEL_27;
  svtUseSkillIdList = (System_Int32_array **)skillData->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_B5D560(
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
  v39 = *(_QWORD *)&useSkillIdList->max_length;
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v40;
  p_targetList = (AppendSkillCombineControl_o **)&v9->fields.targetList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.targetList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( (int)v39 >= 1 )
  {
    v48 = 0LL;
    while ( 1 )
    {
      v49 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v48 >= v49->max_length )
        goto LABEL_28;
      v50 = v49->m_Items[v48 + 1];
      if ( v50 >= 1 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                v50,
                                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          baseUserServantEntity = (int32_t)this->fields.baseUserServantEntity;
          p_combineRootComponent = &this->fields.combineRootComponent;
        }
        else
        {
          p_combineRootComponent = (struct CombineRootComponent_o **)&StringLiteral_755/*"-"*/;
          baseUserServantEntity = 10;
        }
        svtSkillLvList = skillData->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v48 >= svtSkillLvList->max_length )
        {
LABEL_28:
          v59 = sub_B5D6C8(this);
          sub_B5D668(v59, 0LL);
        }
        skillInfoList = v9->fields.skillInfoList;
        if ( !skillInfoList )
          break;
        v55 = (System_String_o *)*p_combineRootComponent;
        v56 = svtSkillLvList->m_Items[v48 + 1];
        if ( v48 >= (unsigned int)skillInfoList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v57 = skillInfoList->fields._items->m_Items[v48];
        v58 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_B5D694(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v58,
          (Il2CppObject *)v9,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0LL);
        if ( !v57 )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_29097720(v57, v48, v55, v50, v56, baseUserServantEntity, v58, 0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
      }
      if ( (__int64)++v48 >= (int)v39 )
        goto LABEL_26;
    }
LABEL_27:
    sub_B5D69C(this, skillData);
  }
LABEL_26:
  AppendSkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v47);
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

  if ( (byte_42EB75C & 1) == 0 )
  {
    sub_B5D5C4(&SetLevelUpData_TypeInfo, idx, currentSkillId, *(_QWORD *)&currentSkillLv);
    byte_42EB75C = 1;
  }
  v17 = (SetLevelUpData_o *)sub_B5D694(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v17, 0LL);
  this->fields.lvUpData = v17;
  p_lvUpData = &this->fields.lvUpData;
  sub_B5D560((BattleServantConfConponent_o *)p_lvUpData, (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
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
  sub_B5D560(
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
        sub_B5D560(
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
    sub_B5D69C(v25, v26);
  }
  v25->fields.targetDetail = skillDetail;
  sub_B5D560(
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
    sub_B5D69C(this, qp);
  v4->fields.haveQp = this->fields.userQp;
}


void __fastcall AppendSkillCombineControl__SetSkillOpenNeedData(
        AppendSkillCombineControl_o *this,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x8
  unsigned __int64 v20; // x22
  signed __int64 v21; // x23
  struct SetLevelUpData_o *lvUpData; // x8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserSvtCoinMaster_o *v24; // x20
  int64_t userId; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  struct SetLevelUpData_o *v28; // x9
  __int64 v29; // x0
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v6 = this;
  if ( (byte_42EB75D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, (_DWORD)needItemIds, (_DWORD)needItemNums, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13, v14, v15);
    this = (AppendSkillCombineControl_o *)sub_B5D5C4(
                                            &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                            v16,
                                            v17,
                                            v18);
    byte_42EB75D = 1;
  }
  entity = 0LL;
  if ( !needItemIds )
    goto LABEL_30;
  v19 = *(_QWORD *)&needItemIds->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    v21 = (int)v19;
    while ( 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v20 >= needItemIds->max_length )
        break;
      if ( !this )
        goto LABEL_30;
      this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                              needItemIds->m_Items[v20 + 1],
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( this && LODWORD(this->fields.charaGraphBase) == 29 )
      {
        if ( !needItemNums )
          goto LABEL_30;
        if ( v20 >= needItemNums->max_length )
          break;
        lvUpData = v6->fields.lvUpData;
        if ( !lvUpData )
          goto LABEL_30;
        lvUpData->fields.spendSvtCoin = needItemNums->m_Items[v20 + 1];
      }
      if ( (__int64)++v20 >= v21 )
        goto LABEL_18;
    }
    v29 = sub_B5D6C8(this);
    sub_B5D668(v29, 0LL);
  }
LABEL_18:
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  baseUserServantEntity = v6->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_30;
  v24 = (UserSvtCoinMaster_o *)this;
  userId = v6->fields.userId;
  v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v27;
  *(_QWORD *)&v31.fields.fakeValue = v26;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
  if ( !v24 )
    goto LABEL_30;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v24, &entity, userId, (int32_t)this, 0LL);
  if ( !entity )
    return;
  v28 = v6->fields.lvUpData;
  if ( !v28 )
LABEL_30:
    sub_B5D69C(this, needItemIds);
  v28->fields.haveSvtCoin = entity->fields.num;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetStateInfoMsg(
        AppendSkillCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v23; // x20
  float v24; // s4
  float v25; // s5
  float v26; // s6
  UILabel_o *v27; // x19
  __int64 *v28; // x8
  UnityEngine_Color_o v29; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EB761 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, state, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1731/*"APPEND_SKILL_LVMAX_MSG"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1732/*"APPEND_SKILL_LVUP_MSG"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1736/*"APPEND_SKILL_OPEN_MSG"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1726/*"APPEND_SKILL_COMBINE_INFO"*/, v18, v19, v20);
    byte_42EB761 = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    if ( !detailInfoLb )
      goto LABEL_26;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                detailInfoLb,
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v30.fields.g = 0.87891;
    v30.fields.b = 0.98828;
    v23 = (UIWidget_o *)Component_WebViewObject;
    v30.fields.r = 0.0;
    *(_QWORD *)&v29.fields.r = 0LL;
    *(_QWORD *)&v29.fields.b = 0LL;
    UnityEngine_Color___ctor_41567816(v30, v24, v25, v26, (const MethodInfo *)&v29);
    if ( !v23 )
LABEL_26:
      sub_B5D69C(detailInfoLb, *(_QWORD *)&state);
    UIWidget__set_color(v23, v29, 0LL);
    switch ( this->fields.nowStatus )
    {
      case 0:
        v27 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v28 = &StringLiteral_1726/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_23;
      case 1:
        v27 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v28 = &StringLiteral_1736/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_23;
      case 2:
        v27 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v28 = &StringLiteral_1732/*"APPEND_SKILL_LVUP_MSG"*/;
        goto LABEL_23;
      case 3:
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v23, white, 0LL);
        v27 = this->fields.detailInfoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v28 = &StringLiteral_1731/*"APPEND_SKILL_LVMAX_MSG"*/;
LABEL_23:
        detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v28, 0LL);
        if ( !v27 )
          goto LABEL_26;
        UILabel__set_text(v27, (System_String_o *)detailInfoLb, 0LL);
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
  __int64 v3; // x3
  AppendSkillCombineControl_o *v5; // x19
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
  struct SvtUseSkillData_o *skillData; // x10
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Int32_array *svtSkillNumsList; // x10
  int32_t v70; // w25
  int32_t v71; // w21
  int32_t v72; // w24
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x28
  int32_t baseUserServantEntity; // w25
  SkillEntity_o *v75; // x26
  __int64 v76; // x27
  int size; // w8
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v79; // x27
  float v80; // s4
  float v81; // s5
  float v82; // s6
  const MethodInfo *v83; // x2
  int v84; // w8
  int32_t nowStatus; // w8
  System_String_o *v86; // x24
  UISprite_o *combineTxtImg; // x25
  struct UserServantEntity_o *v88; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v89; // x27
  __int64 v90; // x25
  __int64 v91; // x28
  const MethodInfo *v92; // x3
  AppendSkillCombineControl_o *v93; // x27
  bool appended; // w0
  System_String_o *name; // x28
  System_Int32_array *combineRootComponent; // x23
  bool v97; // w25
  System_String_o *EffectExplanation; // x0
  const MethodInfo *v99; // x3
  bool v100; // w25
  char v101; // w28
  struct UserServantEntity_o *v102; // x8
  CombineAppendPassiveSkillMaster_o *v103; // x27
  __int64 v104; // x25
  __int64 v105; // x28
  CombineAppendPassiveSkillEntity_o *EntityWithTryNum; // x0
  UILabel_o *spendQpLabel; // x28
  CombineAppendPassiveSkillEntity_o *v108; // x27
  System_String_o *v109; // x25
  Il2CppObject *v110; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v112; // x23
  Il2CppObject *v113; // x0
  const MethodInfo *v114; // x3
  bool v115; // w0
  int32_t v116; // w8
  int32_t qp; // w9
  const MethodInfo *v118; // x2
  UIWidget_o *v119; // x23
  int v120; // s0
  bool v124; // w23
  System_String_o *v125; // x25
  UIWidget_o *v126; // x24
  int v127; // s0
  int32_t v131; // w24
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x21
  const MethodInfo *v133; // x1
  __int64 v134; // x0
  const MethodInfo *v135; // [xsp+0h] [xbp-90h]
  UIWidget_o *v136; // [xsp+18h] [xbp-78h]
  UIWidget_o *v137; // [xsp+18h] [xbp-78h]
  int32_t currentSkillId; // [xsp+24h] [xbp-6Ch]
  int32_t num; // [xsp+28h] [xbp-68h]
  int32_t userQp; // [xsp+2Ch] [xbp-64h] BYREF
  MethodInfo methoda; // [xsp+30h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  UnityEngine_Color_o v144; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v145; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = this;
  if ( (byte_42EB75A & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, idx, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&int_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v33, v34, v35);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_17284/*"btn_txt_open2"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_17362/*"buttontxt_synthesis"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_1727/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_1/*""*/, v60, v61, v62);
    this = (AppendSkillCombineControl_o *)sub_B5D5C4(&StringLiteral_17359/*"buttontxt_notsynthesis"*/, v63, v64, v65);
    byte_42EB75A = 1;
  }
  skillData = v5->fields.skillData;
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
    v134 = sub_B5D6C8(this);
    sub_B5D668(v134, 0LL);
  }
  v70 = svtUseSkillIdList->m_Items[idx + 1];
  v71 = svtSkillLvList->m_Items[idx + 1];
  v72 = svtSkillNumsList->m_Items[idx + 1];
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_22;
  this = (AppendSkillCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                          v70,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !this )
    return;
  currentSkillId = v70;
  num = v72;
  itemInfoList = v5->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_22;
  baseUserServantEntity = (int32_t)this->fields.baseUserServantEntity;
  v75 = (SkillEntity_o *)this;
  v76 = 0LL;
  while ( 1 )
  {
    size = itemInfoList->fields._size;
    if ( (int)v76 >= size )
      break;
    if ( size <= (unsigned int)v76 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (AppendSkillCombineControl_o *)itemInfoList->fields._items->m_Items[v76];
    if ( this )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
      itemInfoList = v5->fields.itemInfoList;
      ++v76;
      if ( itemInfoList )
        continue;
    }
    goto LABEL_22;
  }
  this = (AppendSkillCombineControl_o *)v5->fields.detailInfoLb;
  if ( !this )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v144.fields.g = 0.87891;
  v144.fields.b = 0.98828;
  v79 = (UIWidget_o *)Component_WebViewObject;
  v144.fields.r = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_41567816(v144, v80, v81, v82, &methoda);
  if ( !v79 )
    goto LABEL_22;
  *(_QWORD *)&v145.fields.r = methoda.methodPointer;
  *(_QWORD *)&v145.fields.b = methoda.invoker_method;
  UIWidget__set_color(v79, v145, 0LL);
  if ( v71 >= baseUserServantEntity )
    v84 = 3;
  else
    v84 = v71 ? 2 : 1;
  v5->fields.nowStatus = v84;
  AppendSkillCombineControl__SetStateInfoMsg(v5, 0, v83);
  this = (AppendSkillCombineControl_o *)v5->fields.combineQpInfo;
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  nowStatus = v5->fields.nowStatus;
  v86 = (System_String_o *)StringLiteral_1/*""*/;
  if ( nowStatus == 1 )
  {
    combineTxtImg = v5->fields.combineTxtImg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17284/*"btn_txt_open2"*/, 0LL);
    this = (AppendSkillCombineControl_o *)v5->fields.combineTxtImg;
    if ( !this )
      goto LABEL_22;
    v136 = v79;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    v88 = v5->fields.baseUserServantEntity;
    if ( !v88 )
      goto LABEL_22;
    v89 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v91 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
    v90 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v142.fields.currentCryptoKey = v91;
    *(_QWORD *)&v142.fields.fakeValue = v90;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v142, 0LL);
    if ( !v89 )
      goto LABEL_22;
    this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v89, (int32_t)this, num, 0LL);
    v5->fields._IsExeCombine_k__BackingField = 1;
    if ( !this )
      goto LABEL_22;
    v93 = this;
    appended = AppendSkillCombineControl__SetNeedItemList(
                 v5,
                 (System_Int32_array *)this->fields.combineRootComponent,
                 *(System_Int32_array **)&this->fields.type,
                 v92);
    name = v75->fields.name;
    combineRootComponent = (System_Int32_array *)v93->fields.combineRootComponent;
    v97 = appended;
    EffectExplanation = SkillEntity__getEffectExplanation(v75, v71 + 1, 0LL);
    AppendSkillCombineControl__SetSkillLevelUpData(
      v5,
      idx,
      currentSkillId,
      v71,
      num,
      name,
      combineRootComponent,
      EffectExplanation,
      v135);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v5,
      (System_Int32_array *)v93->fields.combineRootComponent,
      *(System_Int32_array **)&v93->fields.type,
      v99);
    if ( v97 )
    {
      v79 = v136;
      v100 = 1;
      v101 = 1;
      goto LABEL_87;
    }
    v79 = v136;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_1727/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0LL);
    goto LABEL_86;
  }
  if ( nowStatus != 2 )
  {
    if ( nowStatus == 3 )
    {
      v5->fields._IsExeCombine_k__BackingField = 0;
      AppendSkillCombineControl__SetExeBtnState(v5, *(const MethodInfo **)&idx);
      this = (AppendSkillCombineControl_o *)v5->fields.combineTxtImg;
      if ( !this )
        goto LABEL_22;
      UISprite__set_atlas((UISprite_o *)this, v5->fields.baseAtlas, 0LL);
      this = (AppendSkillCombineControl_o *)v5->fields.combineTxtImg;
      if ( !this )
        goto LABEL_22;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17359/*"buttontxt_notsynthesis"*/, 0LL);
      this = (AppendSkillCombineControl_o *)v5->fields.combineTxtImg;
      if ( !this )
        goto LABEL_22;
      ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
        this,
        this->klass[2]._1.name);
    }
LABEL_86:
    v101 = 0;
    v100 = 1;
    goto LABEL_87;
  }
  this = (AppendSkillCombineControl_o *)v5->fields.combineQpInfo;
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (AppendSkillCombineControl_o *)v5->fields.combineTxtImg;
  if ( !this )
    goto LABEL_22;
  UISprite__set_atlas((UISprite_o *)this, v5->fields.baseAtlas, 0LL);
  this = (AppendSkillCombineControl_o *)v5->fields.combineTxtImg;
  if ( !this )
    goto LABEL_22;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17362/*"buttontxt_synthesis"*/, 0LL);
  this = (AppendSkillCombineControl_o *)v5->fields.combineTxtImg;
  if ( !this )
    goto LABEL_22;
  v137 = v79;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v102 = v5->fields.baseUserServantEntity;
  if ( !v102 )
    goto LABEL_22;
  v103 = (CombineAppendPassiveSkillMaster_o *)this;
  v105 = *(_QWORD *)&v102->fields.svtId.fields.currentCryptoKey;
  v104 = *(_QWORD *)&v102->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v143.fields.currentCryptoKey = v105;
  *(_QWORD *)&v143.fields.fakeValue = v104;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v143, 0LL);
  if ( !v103 )
    goto LABEL_22;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v103, (int32_t)this, num, v71, 0LL);
  spendQpLabel = v5->fields.spendQpLabel;
  v108 = EntityWithTryNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  if ( !v108 )
    goto LABEL_22;
  v109 = (System_String_o *)this;
  LODWORD(methoda.methodPointer) = v108->fields.qp;
  v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  this = (AppendSkillCombineControl_o *)System_String__Format(v109, v110, 0LL);
  if ( !spendQpLabel )
    goto LABEL_22;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0LL);
  haveQpLabel = v5->fields.haveQpLabel;
  v112 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  userQp = v5->fields.userQp;
  v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userQp);
  this = (AppendSkillCombineControl_o *)System_String__Format(v112, v113, 0LL);
  if ( !haveQpLabel )
    goto LABEL_22;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0LL);
  v5->fields._IsExeCombine_k__BackingField = 1;
  v115 = AppendSkillCombineControl__SetNeedItemList(v5, v108->fields.itemIds, v108->fields.itemNums, v114);
  v116 = v5->fields.userQp;
  qp = v108->fields.qp;
  v101 = v115;
  v100 = v116 >= qp;
  if ( v116 < qp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( (v101 & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  AppendSkillCombineControl__SetSkillLevelUpData(
    v5,
    idx,
    currentSkillId,
    v71,
    num,
    v75->fields.name,
    v108->fields.itemIds,
    (System_String_o *)StringLiteral_1/*""*/,
    v135);
  AppendSkillCombineControl__SetSkillNeedQpData(v5, v108->fields.qp, v118);
  v79 = v137;
LABEL_87:
  v119 = (UIWidget_o *)v5->fields.spendQpLabel;
  *(UnityEngine_Color_o *)&v120 = UnityEngine_Color__get_white(0LL);
  if ( !v119 )
    goto LABEL_22;
  UIWidget__set_color(v119, *(UnityEngine_Color_o *)&v120, 0LL);
  v124 = v100 & v101;
  if ( (v100 & (unsigned __int8)v101 & 1) == 0 && v5->fields.nowStatus != 3 )
  {
    if ( !v100 )
    {
      v125 = v86;
      v126 = (UIWidget_o *)v5->fields.spendQpLabel;
      *(UnityEngine_Color_o *)&v127 = UnityEngine_Color__get_red(0LL);
      if ( !v126 )
        goto LABEL_22;
      UIWidget__set_color(v126, *(UnityEngine_Color_o *)&v127, 0LL);
      v86 = v125;
    }
    white = UnityEngine_Color__get_white(0LL);
    UIWidget__set_color(v79, white, 0LL);
    this = (AppendSkillCombineControl_o *)v5->fields.detailInfoLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v86, 0LL);
      v5->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_95;
    }
LABEL_22:
    sub_B5D69C(this, *(_QWORD *)&idx);
  }
LABEL_95:
  v131 = v71;
  targetList = v5->fields.targetList;
  if ( !targetList )
    goto LABEL_22;
  if ( targetList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (AppendSkillCombineControl_o *)targetList->fields._items->m_Items[idx];
  if ( !this )
    goto LABEL_22;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp((ServantSkillInfoIconComponent_o *)this, v131, v124, 0LL);
  AppendSkillCombineControl__SetExeBtnState(v5, v133);
}