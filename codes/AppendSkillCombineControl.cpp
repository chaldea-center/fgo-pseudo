void AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CCB2C3 & 1) == 0 )
  {
    sub_1C713B0(&CombineMenuControl_TypeInfo);
    byte_4CCB2C3 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, method);
}


bool AppendSkillCombineControl__CheckIsMaxLvSkills(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  intptr_t m_CachedPtr; // x19
  __int64 v5; // x8
  bool v6; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x23
  unsigned __int64 v8; // x21
  intptr_t v9; // x27
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CCB2BE & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_4CCB2BE = 1;
  }
  entity = 0;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0)) == 0
    || (m_CachedPtr = this->fields.m_CachedPtr) == 0 )
  {
LABEL_22:
    sub_1C71608(this, resData);
  }
  v5 = *(_QWORD *)(m_CachedPtr + 24);
  v6 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v8 = 0;
    v9 = m_CachedPtr + 32;
    do
    {
      if ( v8 >= (unsigned int)v5 )
LABEL_21:
        sub_1C71610(this);
      if ( *(int *)(v9 + 4 * v8) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( v8 >= *(unsigned int *)(m_CachedPtr + 24) )
          goto LABEL_21;
        if ( !this )
          goto LABEL_22;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                &entity,
                                                *(_DWORD *)(v9 + 4 * v8),
                                                (const MethodInfo_3408ECC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
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
      LODWORD(v5) = *(_DWORD *)(m_CachedPtr + 24);
      v6 = (__int64)++v8 < (int)v5;
    }
    while ( (__int64)v8 < (int)v5 );
  }
  return !v6;
}


SetLevelUpData_o *AppendSkillCombineControl__GetTargetData(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.lvUpData;
}


int32_t AppendSkillCombineControl__GetTutorialOpenType(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  return 70;
}


void AppendSkillCombineControl__InitDispCombineInfo(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *preSelectBaseLb; // x20
  void *gameObject; // x0
  __int64 v5; // x1
  int v6; // w21
  int32_t v7; // w20
  int v8; // w21
  int32_t v9; // w20

  if ( (byte_4CCB2B5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&StringLiteral_1973/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/);
    byte_4CCB2B5 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_1973/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0);
  if ( !preSelectBaseLb )
    goto LABEL_23;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)gameObject, 0);
  gameObject = this->fields.preSelectBaseLb;
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = this->fields.baseSelectInfoLb;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = this->fields.selectSkillHelpLb;
  if ( !gameObject )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)gameObject, string_TypeInfo->static_fields->Empty, 0);
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
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0);
      if ( v6 == ++v7 )
        goto LABEL_17;
      gameObject = this->fields.skillInfoList;
    }
    while ( gameObject );
LABEL_23:
    sub_1C71608(gameObject, v5);
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
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0);
      if ( v8 == ++v9 )
        return;
      gameObject = this->fields.itemInfoList;
    }
    while ( gameObject );
    goto LABEL_23;
  }
}


void AppendSkillCombineControl__InitSvtSkillCombine(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v7; // x1
  int64_t klass; // x8
  UISprite_o *titleImg; // x20
  UnityEngine_Object_o *charaGraph; // x20
  GrandQuestFolderBoardItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CCB2B4 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_20727/*"img_txt_extraskill_item"*/);
    sub_1C713B0(&StringLiteral_17694/*"buttontxt_synthesis"*/);
    sub_1C713B0(&StringLiteral_20726/*"img_txt_extraskill"*/);
    byte_4CCB2B4 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0, 0, 0, 0, 0, 0);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, v3);
  AppendSkillCombineControl__InitDispCombineInfo(this, v4);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v7);
  helpBtn = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( !helpBtn )
    goto LABEL_21;
  klass = (int64_t)helpBtn[4].klass;
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  this->fields.userQp = klass;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_atlas((UISprite_o *)helpBtn, this->fields.baseAtlas, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17694/*"buttontxt_synthesis"*/, 0);
  titleImg = this->fields.titleImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_20726/*"img_txt_extraskill"*/, 0);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20727/*"img_txt_extraskill_item"*/, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_21;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.parent)(
    helpBtn,
    helpBtn->klass[2]._1.generic_class);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.titleImg;
  if ( !helpBtn )
    goto LABEL_21;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.parent)(
    helpBtn,
    helpBtn->klass[2]._1.generic_class);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.itemTitleImg;
  if ( !helpBtn )
    goto LABEL_21;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.parent)(
    helpBtn,
    helpBtn->klass[2]._1.generic_class);
  helpBtn = this->fields.combineQpInfo;
  if ( !helpBtn )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (GrandQuestFolderBoardItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(gameObject, 0);
      p_charaGraph->klass = 0;
      sub_1C71354(p_charaGraph, 0, v13, v14, v15, v16, v17, v18);
      return;
    }
LABEL_21:
    sub_1C71608(helpBtn, v5);
  }
}


void AppendSkillCombineControl__OnClickExeCombine(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  int32_t nowStatus; // w8
  struct SetRarityDialogControl_o *v4; // x20
  struct SetLevelUpData_o *v5; // x19
  int64_t Master_object; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  bool v9; // w3
  SetRarityDialogControl_o *v10; // x0
  SetLevelUpData_o *v11; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserServantMaster_o *v13; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  System_Collections_Generic_List_object__o *v16; // x20
  int v17; // w27
  int32_t v18; // w21
  int64_t v19; // x22
  __int128 v20; // q0
  struct UserServantEntity_o *v21; // x8
  __int128 v22; // q0
  int64_t v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x0
  __int64 v35; // x8
  int v36; // w9
  unsigned int v37; // w10
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  int64_t v47; // x1
  Il2CppClass **v48; // x0
  int32_t v49; // w8
  ServantCheckWarningDialog_o *appendSkillWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v51; // x22
  struct SetRarityDialogControl_o *exeCombineDlg; // x20
  struct SetLevelUpData_o *lvUpData; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4CCB2C0 & 1) == 0 )
  {
    sub_1C713B0(&Method_AppendSkillCombineControl__OnClickExeCombine_b__49_0__);
    sub_1C713B0(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&StringLiteral_2000/*"APPEND_SKILL_LVUP_TITLE"*/);
    sub_1C713B0(&StringLiteral_2005/*"APPEND_SKILL_OPEN_TITLE"*/);
    byte_4CCB2C0 = 1;
  }
  userServantList = 0;
  nowStatus = this->fields.nowStatus;
  if ( nowStatus == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v13 = (UserServantMaster_o *)Master_object;
      v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v15;
      *(_QWORD *)&v58.fields.fakeValue = v14;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v58, 0);
      if ( v13 )
      {
        UserServantMaster__TryGetEntityListBySvtId(v13, &userServantList, Master_object, 1, 0);
        v16 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v16,
          (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
        Master_object = (int64_t)userServantList;
        if ( userServantList )
        {
          v17 = 0;
          v18 = 0;
          while ( v18 < *(_DWORD *)(Master_object + 24) )
          {
            Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)Master_object,
                                       v18,
                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !Master_object )
              goto LABEL_60;
            Master_object = (int64_t)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Master_object, 0);
            if ( !userServantList )
              goto LABEL_60;
            v19 = Master_object;
            Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)userServantList,
                                       v18,
                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !Master_object )
              goto LABEL_60;
            v20 = *(_OWORD *)(Master_object + 32);
            *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)(Master_object + 16);
            *(_OWORD *)&v56.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v55 = v56;
            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v55, 0);
            v21 = this->fields.baseUserServantEntity;
            if ( !v21 )
              goto LABEL_60;
            v22 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
            v23 = Master_object;
            *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v54.fields.fakeValue = v22;
            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v54, 0);
            if ( v23 == Master_object )
            {
              Master_object = (int64_t)userServantList;
              if ( !userServantList )
                goto LABEL_60;
              Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)userServantList,
                                         v18,
                                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
              if ( !v16 )
                goto LABEL_60;
              items = v16->fields._items;
              v31 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v16->fields._version;
              if ( !items )
                goto LABEL_60;
              size = v16->fields._size;
              v33 = Master_object;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v16,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v16->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v33;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v34 + 4), v33, v24, v25, v26, v27, v28, v29);
              }
            }
            else
            {
              if ( !v19 )
                goto LABEL_60;
              v35 = *(_QWORD *)(v19 + 24);
              if ( !v35 )
                goto LABEL_60;
              v36 = *(_DWORD *)(v35 + 24);
              if ( v36 >= 1 )
              {
                v37 = 0;
                while ( 1 )
                {
                  if ( v37 >= v36 )
                    sub_1C71610(Master_object);
                  if ( *(int *)(v35 + 4LL * (int)v37 + 32) >= 2 )
                    break;
                  if ( (int)++v37 >= v36 )
                    goto LABEL_46;
                }
                Master_object = (int64_t)userServantList;
                if ( !userServantList )
                  goto LABEL_60;
                Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)userServantList,
                                           v18,
                                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
                if ( !v16 )
                  goto LABEL_60;
                v44 = v16->fields._items;
                v45 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v16->fields._version;
                if ( !v44 )
                  goto LABEL_60;
                v46 = v16->fields._size;
                v47 = Master_object;
                if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v16,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                }
                else
                {
                  v48 = &v44->obj.klass + v46;
                  v16->fields._size = v46 + 1;
                  v48[4] = (Il2CppClass *)v47;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v48 + 4), v47, v38, v39, v40, v41, v42, v43);
                }
                v17 = 1;
              }
            }
LABEL_46:
            Master_object = (int64_t)userServantList;
            ++v18;
            if ( !userServantList )
              goto LABEL_60;
          }
          if ( v16 )
          {
            v49 = v16->fields._size;
            if ( v49 )
              v49 = !this->fields._IsSkillCombined_k__BackingField;
            if ( (v17 & v49 & 1) != 0 )
            {
              appendSkillWarningDialog = this->fields.appendSkillWarningDialog;
              v51 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1C715FC(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
              ServantCheckWarningDialog_ClickDelegate___ctor(
                v51,
                (Il2CppObject *)this,
                Method_AppendSkillCombineControl__OnClickExeCombine_b__49_0__,
                0);
              if ( appendSkillWarningDialog )
              {
                ServantCheckWarningDialog__OpenAppendSkillWarning(
                  appendSkillWarningDialog,
                  (System_Collections_Generic_List_UserServantEntity__o *)v16,
                  v51,
                  0);
                return;
              }
            }
            else
            {
              exeCombineDlg = this->fields.exeCombineDlg;
              lvUpData = this->fields.lvUpData;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2000/*"APPEND_SKILL_LVUP_TITLE"*/, 0);
              if ( exeCombineDlg )
              {
                v8 = (System_String_o *)Master_object;
                v10 = exeCombineDlg;
                v11 = lvUpData;
                v9 = 0;
                goto LABEL_58;
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1C71608(Master_object, v7);
  }
  if ( nowStatus != 1 )
    return;
  v4 = this->fields.exeCombineDlg;
  v5 = this->fields.lvUpData;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2005/*"APPEND_SKILL_OPEN_TITLE"*/, 0);
  if ( !v4 )
    goto LABEL_60;
  v8 = (System_String_o *)Master_object;
  v9 = 1;
  v10 = v4;
  v11 = v5;
LABEL_58:
  SetRarityDialogControl__SetAppendSkillCombineInfo(v10, v11, v8, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void AppendSkillCombineControl__OnClickInfo(
        AppendSkillCombineControl_o *this,
        bool isdecide,
        int32_t idx,
        const MethodInfo *method)
{
  this->fields.currentIdx = idx;
  AppendSkillCombineControl__SetNeedItemInfo(this, idx, *(const MethodInfo **)&idx);
}


// local variable allocation has failed, the output may be wrong!
void AppendSkillCombineControl__PlayUnlockEffect(
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
  if ( (byte_4CCB2C2 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (AppendSkillCombineControl_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB2C2 = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_21;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_21;
  if ( LODWORD(svtSkillLvList->max_length) <= idx )
    sub_1C71610(this);
  if ( svtSkillLvList->m_Items[idx] == 1 )
  {
    effect = (Il2CppObject *)v6->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (AppendSkillCombineControl_o *)UnityEngine_Object__Instantiate_object_(
                                            effect,
                                            (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
      if ( this )
      {
        v10 = (UnityEngine_Component_o *)this;
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)this, callback, 0);
        this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v10, 0);
        skillInfoList = (System_Collections_Generic_List_object__o *)v6->fields.skillInfoList;
        if ( skillInfoList )
        {
          v12 = this;
          this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                                  skillInfoList,
                                                  idx,
                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
          if ( this )
          {
            this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
            if ( this )
            {
              this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)this,
                                                      0);
              if ( v12 )
              {
                UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v12, (UnityEngine_Transform_o *)this, 0);
                this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v10, 0);
                v13 = this;
                if ( !byte_4CC0D09 )
                {
                  this = (AppendSkillCombineControl_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
                  byte_4CC0D09 = 1;
                }
                if ( v13 )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)v13,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0);
                  this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v10, 0);
                  if ( this )
                  {
                    v14.fields.x = 0.5;
                    v14.fields.y = 0.5;
                    v14.fields.z = 0.5;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v14, 0);
                    CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v10, 0);
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
    sub_1C71608(this, *(_QWORD *)&idx);
  }
  ActionExtensions__Call(callback, 0);
}


void AppendSkillCombineControl__SetBaseSvtCardImg(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  struct UICharaGraphTexture_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(AppendSkillCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         userSvtEnt,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_charaGraph, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


void AppendSkillCombineControl__SetBaseSvtSkillInfo(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t lastSelectSvtUniqueId; // x23
  __int128 v9; // q0
  int64_t v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int128 v17; // q0
  __int64 v18; // x1
  int64_t v19; // x8
  UnityEngine_Component_o *preSelectBaseLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+60h] [xbp-50h]

  if ( (byte_4CCB2B6 & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CCB2B6 = 1;
  }
  if ( userSvtEnt )
  {
    v7 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
    lastSelectSvtUniqueId = this->fields.lastSelectSvtUniqueId;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v32.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v31 = v32;
    if ( lastSelectSvtUniqueId != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v31, 0) )
      this->fields._IsSkillCombined_k__BackingField = 0;
    v9 = *(_OWORD *)&userSvtEnt->fields.userId.fields.fakeValue;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v32.fields.fakeValue = v9;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v30 = v32;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v30, 0);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v10;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseUserServantEntity,
      (int32_t)userSvtEnt,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v17 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v29.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v29, 0);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.lastSelectSvtUniqueId = v19;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0) )
    {
      sub_1C71608(preSelectBaseLb, v18);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0);
    this->fields.skillData = AppendSkillInfo;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.skillData,
      (int32_t)AppendSkillInfo,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    AppendSkillCombineControl__SetSkillIconInfo(this, this->fields.skillData, v28);
  }
}


void AppendSkillCombineControl__SetExeBtnState(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v6; // x19
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCB2BF & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CCB2BF = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
      UIWidget__set_color(v4, v7, 0);
      if ( v6 )
      {
        UnityEngine_Behaviour__set_enabled(v6, 1, 0);
        UITweener__PlayForward((UITweener_o *)v6, 0);
        return;
      }
    }
LABEL_12:
    sub_1C71608(combineBtnBg, method);
  }
  if ( !v4 )
    goto LABEL_12;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  UIWidget__set_color(v4, v8, 0);
  if ( !v6 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v6, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void AppendSkillCombineControl__SetNeedItemInfo(
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
  if ( (byte_4CCB2B8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1C713B0(&StringLiteral_8810/*"MSG_SKILL_SELECT"*/);
    byte_4CCB2B8 = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList )
      goto LABEL_15;
    selectSkillHelpLb = v4->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8810/*"MSG_SKILL_SELECT"*/, 0);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0),
          (this = (AppendSkillCombineControl_o *)v4->fields.targetList) == 0) )
    {
LABEL_15:
      sub_1C71608(this, *(_QWORD *)&idx);
    }
    v7 = 0;
    while ( v7 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v7,
                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( LODWORD(useSkillIdList->max_length) <= idx )
          sub_1C71610(this);
        if ( this )
        {
          ServantSkillInfoIconComponent__SetDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx] == LODWORD(this->fields.preSelectBaseLb),
            0);
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


bool AppendSkillCombineControl__SetNeedItemList(
        AppendSkillCombineControl_o *this,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v6; // x21
  unsigned __int64 v7; // x23
  __int64 max_length; // x26
  char v9; // w22
  AppendSkillCombineControl_o *v10; // x24

  v6 = this;
  if ( (byte_4CCB2BA & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_1C713B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_4CCB2BA = 1;
  }
  if ( !needItemIds )
    goto LABEL_15;
  if ( (int)needItemIds->max_length >= 1 )
  {
    v7 = 0;
    max_length = (unsigned int)needItemIds->max_length;
    v9 = 1;
    while ( 1 )
    {
      this = (AppendSkillCombineControl_o *)v6->fields.itemInfoList;
      if ( !this )
        break;
      this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v7,
                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( v7 >= LODWORD(needItemIds->max_length) )
        goto LABEL_16;
      if ( !needItemNums )
        break;
      if ( v7 >= LODWORD(needItemNums->max_length) )
LABEL_16:
        sub_1C71610(this);
      v10 = this;
      if ( !this )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)this,
        v6->fields.userId,
        needItemIds->m_Items[v7],
        needItemNums->m_Items[v7],
        0);
      ++v7;
      v9 &= LOBYTE(v10->fields.infoBack) != 0;
      if ( max_length == v7 )
        return v9;
    }
LABEL_15:
    sub_1C71608(this, needItemIds);
  }
  return 1;
}


void AppendSkillCombineControl__SetSkillCombineStatus(
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


void AppendSkillCombineControl__SetSkillIconInfo(
        AppendSkillCombineControl_o *this,
        SvtUseSkillData_o *skillData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SvtUseSkillData_o *v8; // x26
  AppendSkillCombineControl_o *v9; // x20
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array **p_useSkillIdList; // x21
  struct System_Int32_array *useSkillIdList; // x8
  il2cpp_array_size_t max_length; // x19
  System_Collections_Generic_List_object__o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2
  unsigned __int64 v22; // x23
  struct System_Int32_array *v23; // x8
  int32_t v24; // w24
  int32_t type; // w25
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v28; // x27
  int32_t v29; // w28
  SvtUseSkillData_o *v30; // x22
  Il2CppObject *Item; // x26
  ServantSkillInfoIconComponent_ClickDelegate_o *v32; // x29
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v40; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v42; // x8
  AppendSkillCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v8 = skillData;
  v9 = this;
  if ( (byte_4CCB2B7 & 1) == 0 )
  {
    sub_1C713B0(&Method_AppendSkillCombineControl_OnClickInfo__);
    sub_1C713B0(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1C713B0(&StringLiteral_858/*"-"*/);
    byte_4CCB2B7 = 1;
  }
  if ( !v8 )
    goto LABEL_28;
  svtUseSkillIdList = v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = svtUseSkillIdList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v9->fields.useSkillIdList,
    (int32_t)svtUseSkillIdList,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  useSkillIdList = v9->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_28;
  max_length = useSkillIdList->max_length;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v14;
  p_targetList = (AppendSkillCombineControl_o **)&v9->fields.targetList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->fields.targetList, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  if ( (int)max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v22 >= LODWORD(v23->max_length) )
        goto LABEL_29;
      v24 = v23->m_Items[v22];
      if ( v24 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                v24,
                                                (const MethodInfo_3408E80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          type = this->fields.type;
          p_m_CancellationTokenSource = &this->fields.m_CancellationTokenSource;
        }
        else
        {
          p_m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o **)&StringLiteral_858/*"-"*/;
          type = 10;
        }
        svtSkillLvList = v8->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v22 >= LODWORD(svtSkillLvList->max_length) )
LABEL_29:
          sub_1C71610(this);
        this = (AppendSkillCombineControl_o *)v9->fields.skillInfoList;
        if ( !this )
          break;
        v28 = (System_String_o *)*p_m_CancellationTokenSource;
        v29 = svtSkillLvList->m_Items[v22];
        v30 = v8;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v22,
                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v32 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1C715FC(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v32,
          (Il2CppObject *)v9,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_31723880(
          (ServantSkillInfoIconComponent_o *)Item,
          v22,
          v28,
          v24,
          v29,
          type,
          v32,
          1,
          0);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v40 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v42 + 32) = Item;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v42 + 32), (int32_t)Item, v33, v34, v35, v36, v37, v38);
        }
        v8 = v30;
      }
      if ( (unsigned int)max_length == ++v22 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1C71608(this, skillData);
  }
LABEL_27:
  AppendSkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v21);
}


void AppendSkillCombineControl__SetSkillLevelUpData(
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
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct SetLevelUpData_o *lvUpData; // x0
  GrandQuestFolderBoardItem_o *p_targetName; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  GrandQuestFolderBoardItem_o *p_combineItemIds; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7

  if ( (byte_4CCB2BB & 1) == 0 )
  {
    sub_1C713B0(&SetLevelUpData_TypeInfo);
    byte_4CCB2BB = 1;
  }
  v17 = (SetLevelUpData_o *)sub_1C715FC(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v17, 0);
  p_lvUpData = &this->fields.lvUpData;
  this->fields.lvUpData = v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.lvUpData, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_7;
  lvUpData->fields.targetName = skillName;
  p_targetName = (GrandQuestFolderBoardItem_o *)&lvUpData->fields.targetName;
  HIDWORD(p_targetName[-1].fields._ListCreatedTime_k__BackingField) = idx;
  p_targetName[-1].fields._IconId_k__BackingField = currentSkillId;
  *(&p_targetName[-1].fields._IconId_k__BackingField + 1) = currentSkillId;
  sub_1C71354(p_targetName, (int32_t)skillName, v26, v27, v28, v29, v30, v31);
  lvUpData = *p_lvUpData;
  if ( !*p_lvUpData
    || (lvUpData->fields.combineItemIds = combineItemIds,
        p_combineItemIds = (GrandQuestFolderBoardItem_o *)&lvUpData->fields.combineItemIds,
        LODWORD(p_combineItemIds[-1].fields._Name_k__BackingField) = currentSkillLv,
        HIDWORD(p_combineItemIds[-1].fields._Name_k__BackingField) = currentSkillLv + 1,
        LODWORD(p_combineItemIds[-1].fields.sortValueLast) = currentSkillNum,
        sub_1C71354(p_combineItemIds, (int32_t)combineItemIds, v34, v35, v36, v37, v38, v39),
        (lvUpData = *p_lvUpData) == 0) )
  {
LABEL_7:
    sub_1C71608(lvUpData, v25);
  }
  lvUpData->fields.targetDetail = skillDetail;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&lvUpData->fields.targetDetail,
    (int32_t)skillDetail,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


void AppendSkillCombineControl__SetSkillNeedQpData(
        AppendSkillCombineControl_o *this,
        int32_t qp,
        const MethodInfo *method)
{
  struct SetLevelUpData_o *lvUpData; // x8

  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    sub_1C71608(this, qp);
  lvUpData->fields.spendQp = qp;
  lvUpData->fields.haveQp = this->fields.userQp;
}


void AppendSkillCombineControl__SetSkillOpenNeedData(
        AppendSkillCombineControl_o *this,
        System_Int32_array *needItemIds,
        System_Int32_array *needItemNums,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v6; // x19
  unsigned __int64 v7; // x23
  __int64 max_length; // x26
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
  if ( (byte_4CCB2BC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (AppendSkillCombineControl_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CCB2BC = 1;
  }
  if ( !needItemIds )
    goto LABEL_27;
  if ( (int)needItemIds->max_length >= 1 )
  {
    v7 = 0;
    max_length = (unsigned int)needItemIds->max_length;
    while ( 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v7 >= LODWORD(needItemIds->max_length) )
        break;
      if ( !this )
        goto LABEL_27;
      this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              needItemIds->m_Items[v7],
                                              (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( this && LODWORD(this->fields.baseUserServantEntity) == 29 )
      {
        if ( !needItemNums )
          goto LABEL_27;
        if ( v7 >= LODWORD(needItemNums->max_length) )
          break;
        lvUpData = v6->fields.lvUpData;
        if ( !lvUpData )
          goto LABEL_27;
        lvUpData->fields.spendSvtCoin = needItemNums->m_Items[v7];
      }
      if ( max_length == ++v7 )
        goto LABEL_17;
    }
    sub_1C71610(this);
  }
LABEL_17:
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v17, 0);
  if ( !v11 )
    goto LABEL_27;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v11, &entity, userId, (int32_t)this, 0);
  if ( !entity )
    return;
  v15 = v6->fields.lvUpData;
  if ( !v15 )
LABEL_27:
    sub_1C71608(this, needItemIds);
  v15->fields.haveSvtCoin = entity->fields.num;
}


// local variable allocation has failed, the output may be wrong!
void AppendSkillCombineControl__SetStateInfoMsg(
        AppendSkillCombineControl_o *this,
        int32_t state,
        int64_t svtid,
        const MethodInfo *method)
{
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v8; // x20
  UILabel_o *v9; // x19
  __int64 *v10; // x8
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCB2C1 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1998/*"APPEND_SKILL_LVMAX_MSG"*/);
    sub_1C713B0(&StringLiteral_1999/*"APPEND_SKILL_LVUP_MSG"*/);
    sub_1C713B0(&StringLiteral_2003/*"APPEND_SKILL_OPEN_MSG"*/);
    sub_1C713B0(&StringLiteral_1971/*"APPEND_SKILL_COMBINE_INFO"*/);
    byte_4CCB2C1 = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    this->fields.lastSelectSvtUniqueId = svtid;
    if ( !detailInfoLb
      || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      detailInfoLb,
                                                      (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
    {
LABEL_21:
      sub_1C71608(detailInfoLb, *(_QWORD *)&state);
    }
    v11.fields.r = 0.0;
    v11.fields.a = 1.0;
    v11.fields.g = 0.87891;
    v11.fields.b = 0.98828;
    v8 = (UIWidget_o *)detailInfoLb;
    UIWidget__set_color((UIWidget_o *)detailInfoLb, v11, 0);
    switch ( this->fields.nowStatus )
    {
      case 0:
        v9 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_1971/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_19;
      case 1:
        v9 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_2003/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_19;
      case 2:
        v9 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_1999/*"APPEND_SKILL_LVUP_MSG"*/;
        goto LABEL_19;
      case 3:
        v12.fields.r = 1.0;
        v12.fields.g = 1.0;
        v12.fields.b = 1.0;
        v12.fields.a = 1.0;
        UIWidget__set_color(v8, v12, 0);
        v9 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_1998/*"APPEND_SKILL_LVMAX_MSG"*/;
LABEL_19:
        detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v10, 0);
        if ( !v9 )
          goto LABEL_21;
        UILabel__set_text(v9, (System_String_o *)detailInfoLb, 0);
        break;
      default:
        return;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void AppendSkillCombineControl__SetSvtSkillCombineData(
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
  const MethodInfo *v17; // x3
  int v18; // w8
  int64_t lastSelectSvtUniqueId; // x2
  int32_t nowStatus; // w8
  System_String_o *v21; // x29
  UISprite_o *combineTxtImg; // x27
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v24; // x27
  __int64 v25; // x28
  __int64 v26; // x29
  const MethodInfo *v27; // x3
  AppendSkillCombineControl_o *v28; // x27
  bool appended; // w0
  System_String_o *name; // x29
  System_Int32_array *m_CancellationTokenSource; // x25
  bool v32; // w28
  System_String_o *EffectExplanation; // x0
  const MethodInfo *v34; // x3
  bool v35; // w25
  char v36; // w28
  struct UserServantEntity_o *v37; // x8
  CombineAppendPassiveSkillMaster_o *v38; // x27
  __int64 v39; // x28
  __int64 v40; // x29
  CombineAppendPassiveSkillEntity_o *EntityWithTryNum; // x0
  UILabel_o *spendQpLabel; // x28
  CombineAppendPassiveSkillEntity_o *v43; // x27
  AppendSkillCombineControl_o *v44; // x29
  Il2CppObject *v45; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v47; // x25
  Il2CppObject *v48; // x0
  const MethodInfo *v49; // x3
  bool v50; // w0
  int64_t v51; // x8
  int64_t v52; // x9
  struct SetLevelUpData_o *lvUpData; // x8
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // [xsp+0h] [xbp-80h]
  System_String_o *v56; // [xsp+8h] [xbp-78h]
  System_String_o *v57; // [xsp+8h] [xbp-78h]
  int64_t userQp; // [xsp+10h] [xbp-70h] BYREF
  int32_t qp; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4CCB2B9 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C713B0(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&long_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&StringLiteral_9238/*"NEED_QP"*/);
    sub_1C713B0(&StringLiteral_17610/*"btn_txt_open2"*/);
    sub_1C713B0(&StringLiteral_17694/*"buttontxt_synthesis"*/);
    sub_1C713B0(&StringLiteral_12194/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1C713B0(&StringLiteral_12195/*"SHORT_QP_INFO_MSG"*/);
    sub_1C713B0(&StringLiteral_1972/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    this = (AppendSkillCombineControl_o *)sub_1C713B0(&StringLiteral_17691/*"buttontxt_notsynthesis"*/);
    byte_4CCB2B9 = 1;
  }
  skillData = v4->fields.skillData;
  if ( !skillData )
    goto LABEL_19;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_19;
  if ( LODWORD(svtUseSkillIdList->max_length) <= idx )
    goto LABEL_88;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_19;
  if ( LODWORD(svtSkillLvList->max_length) <= idx )
    goto LABEL_88;
  svtSkillNumsList = skillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_19;
  if ( LODWORD(svtSkillNumsList->max_length) <= idx )
LABEL_88:
    sub_1C71610(this);
  v9 = svtUseSkillIdList->m_Items[idx];
  v10 = svtSkillLvList->m_Items[idx];
  v11 = svtSkillNumsList->m_Items[idx];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v9,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
                                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( this )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0);
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
                                          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_19;
  v62.fields.r = 0.0;
  v62.fields.a = 1.0;
  v62.fields.g = 0.87891;
  v62.fields.b = 0.98828;
  v16 = (UIWidget_o *)this;
  UIWidget__set_color((UIWidget_o *)this, v62, 0);
  if ( v10 >= maxLv )
    v18 = 3;
  else
    v18 = v10 ? 2 : 1;
  lastSelectSvtUniqueId = v4->fields.lastSelectSvtUniqueId;
  v4->fields.nowStatus = v18;
  AppendSkillCombineControl__SetStateInfoMsg(v4, 0, lastSelectSvtUniqueId, v17);
  this = (AppendSkillCombineControl_o *)v4->fields.combineQpInfo;
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  nowStatus = v4->fields.nowStatus;
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  if ( nowStatus == 1 )
  {
    combineTxtImg = v4->fields.combineTxtImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17610/*"btn_txt_open2"*/, 0);
    this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_19;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._5_OnClickHelp.method)(
      this,
      this->klass[1].vtable._6_GetTutorialOpenType.methodPtr);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v56 = v21;
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_19;
    v24 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v26 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v60.fields.currentCryptoKey = v26;
    *(_QWORD *)&v60.fields.fakeValue = v25;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v60, 0);
    if ( !v24 )
      goto LABEL_19;
    this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v24, (int32_t)this, v11, 0);
    v4->fields._IsExeCombine_k__BackingField = 1;
    if ( !this )
      goto LABEL_19;
    v28 = this;
    appended = AppendSkillCombineControl__SetNeedItemList(
                 v4,
                 (System_Int32_array *)this->fields.m_CancellationTokenSource,
                 (System_Int32_array *)this->fields.combineRootComponent,
                 v27);
    name = v13->fields.name;
    m_CancellationTokenSource = (System_Int32_array *)v28->fields.m_CancellationTokenSource;
    v32 = appended;
    EffectExplanation = SkillEntity__getEffectExplanation(v13, v10 + 1, 0);
    AppendSkillCombineControl__SetSkillLevelUpData(
      v4,
      idx,
      v9,
      v10,
      v11,
      name,
      m_CancellationTokenSource,
      EffectExplanation,
      v55);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v4,
      (System_Int32_array *)v28->fields.m_CancellationTokenSource,
      (System_Int32_array *)v28->fields.combineRootComponent,
      v34);
    if ( v32 )
    {
      v21 = v56;
      v35 = 1;
      v36 = 1;
      goto LABEL_76;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_1972/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0);
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
      UISprite__set_atlas((UISprite_o *)this, v4->fields.baseAtlas, 0);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17691/*"buttontxt_notsynthesis"*/, 0);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._5_OnClickHelp.method)(
        this,
        this->klass[1].vtable._6_GetTutorialOpenType.methodPtr);
    }
LABEL_75:
    v36 = 0;
    v35 = 1;
    goto LABEL_76;
  }
  this = (AppendSkillCombineControl_o *)v4->fields.combineQpInfo;
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)this, v4->fields.baseAtlas, 0);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17694/*"buttontxt_synthesis"*/, 0);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._5_OnClickHelp.method)(
    this,
    this->klass[1].vtable._6_GetTutorialOpenType.methodPtr);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v57 = v21;
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v37 = v4->fields.baseUserServantEntity;
  if ( !v37 )
    goto LABEL_19;
  v38 = (CombineAppendPassiveSkillMaster_o *)this;
  v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v40;
  *(_QWORD *)&v61.fields.fakeValue = v39;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v61, 0);
  if ( !v38 )
    goto LABEL_19;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v38, (int32_t)this, v11, v10, 0);
  spendQpLabel = v4->fields.spendQpLabel;
  v43 = EntityWithTryNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9238/*"NEED_QP"*/, 0);
  if ( !v43 )
    goto LABEL_19;
  v44 = this;
  qp = v43->fields.qp;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp);
  this = (AppendSkillCombineControl_o *)System_String__Format((System_String_o *)v44, v45, 0);
  if ( !spendQpLabel )
    goto LABEL_19;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0);
  haveQpLabel = v4->fields.haveQpLabel;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9238/*"NEED_QP"*/, 0);
  userQp = v4->fields.userQp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &userQp);
  this = (AppendSkillCombineControl_o *)System_String__Format(v47, v48, 0);
  v21 = v57;
  if ( !haveQpLabel )
    goto LABEL_19;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0);
  v4->fields._IsExeCombine_k__BackingField = 1;
  v50 = AppendSkillCombineControl__SetNeedItemList(v4, v43->fields.itemIds, v43->fields.itemNums, v49);
  v51 = v4->fields.userQp;
  v52 = v43->fields.qp;
  v36 = v50;
  v35 = v51 >= v52;
  if ( v51 < v52 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12195/*"SHORT_QP_INFO_MSG"*/, 0);
  }
  if ( (v36 & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12194/*"SHORT_ITEM_INFO_MSG"*/, 0);
  }
  AppendSkillCombineControl__SetSkillLevelUpData(
    v4,
    idx,
    v9,
    v10,
    v11,
    v13->fields.name,
    v43->fields.itemIds,
    (System_String_o *)StringLiteral_1/*""*/,
    v55);
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_19;
  lvUpData->fields.spendQp = v43->fields.qp;
  lvUpData->fields.haveQp = v4->fields.userQp;
LABEL_76:
  this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
  if ( !this )
    goto LABEL_19;
  v63.fields.r = 1.0;
  v63.fields.g = 1.0;
  v63.fields.b = 1.0;
  v63.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v63, 0);
  if ( (v35 & (unsigned __int8)v36 & 1) == 0 && v4->fields.nowStatus != 3 )
  {
    if ( !v35 )
    {
      this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
      if ( !this )
        goto LABEL_19;
      v64.fields.r = 1.0;
      v64.fields.g = 0.0;
      v64.fields.b = 0.0;
      v64.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v64, 0);
    }
    v65.fields.r = 1.0;
    v65.fields.g = 1.0;
    v65.fields.b = 1.0;
    v65.fields.a = 1.0;
    UIWidget__set_color(v16, v65, 0);
    this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v21, 0);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_84;
    }
LABEL_19:
    sub_1C71608(this, *(_QWORD *)&idx);
  }
LABEL_84:
  this = (AppendSkillCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_19;
  this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          idx,
                                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_19;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
    (ServantSkillInfoIconComponent_o *)this,
    v10,
    v35 & v36,
    1,
    1,
    0);
  AppendSkillCombineControl__SetExeBtnState(v4, v54);
}


// local variable allocation has failed, the output may be wrong!
void AppendSkillCombineControl__UpdateCombineItemInfoList(
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
  const MethodInfo *v16; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  AppendSkillCombineControl_o *v18; // x20
  __int64 v19; // x21
  unsigned __int64 registeredCallbacksLists_low; // x10
  unsigned __int64 v21; // x9
  struct CombineRootComponent_o *combineRootComponent; // x10
  struct UserServantEntity_o *v23; // x8
  CombineAppendPassiveSkillMaster_o *v24; // x22
  __int64 v25; // x23
  __int64 v26; // x24
  const MethodInfo *v27; // x3
  struct CombineRootComponent_o *v28; // x8
  AppendSkillCombineControl_o *v29; // x20
  __int64 v30; // x21
  unsigned __int64 m_CancellationTokenSource_low; // x10
  unsigned __int64 v32; // x9
  __int64 v33; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v4 = this;
  if ( (byte_4CCB2BD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CCB2BD = 1;
  }
  skillData = v4->fields.skillData;
  if ( !skillData )
    goto LABEL_41;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_41;
  if ( LODWORD(svtUseSkillIdList->max_length) <= idx )
    goto LABEL_43;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_41;
  if ( LODWORD(svtSkillLvList->max_length) <= idx )
    goto LABEL_43;
  svtSkillNumsList = skillData->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_41;
  if ( LODWORD(svtSkillNumsList->max_length) <= idx )
LABEL_43:
    sub_1C71610(this);
  v9 = svtSkillLvList->m_Items[idx];
  v10 = svtSkillNumsList->m_Items[idx];
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, *(const MethodInfo **)&idx);
  nowStatus = v4->fields.nowStatus;
  if ( nowStatus != 2 )
  {
    if ( nowStatus != 1 )
      goto LABEL_42;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v13 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
      v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = v15;
      *(_QWORD *)&v34.fields.fakeValue = v14;
      this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v34, 0);
      if ( v13 )
      {
        this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v13, (int32_t)this, v10, 0);
        if ( this )
        {
          m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
          v18 = this;
          if ( m_CancellationTokenSource )
          {
            v19 = 8;
            while ( 1 )
            {
              registeredCallbacksLists_low = LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists);
              v21 = v19 - 8;
              if ( v19 - 8 >= (int)registeredCallbacksLists_low )
                goto LABEL_42;
              if ( v21 >= registeredCallbacksLists_low )
                goto LABEL_43;
              combineRootComponent = v18->fields.combineRootComponent;
              if ( combineRootComponent )
              {
                if ( v21 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
                  goto LABEL_43;
                CombineMenuControl__AddCombineItemInfo(
                  (CombineMenuControl_o *)v4,
                  *((_DWORD *)&m_CancellationTokenSource->klass + v19),
                  *((_DWORD *)&combineRootComponent->klass + v19),
                  v16);
                m_CancellationTokenSource = v18->fields.m_CancellationTokenSource;
                ++v19;
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
    sub_1C71608(this, *(_QWORD *)&idx);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v23 = v4->fields.baseUserServantEntity;
  if ( !v23 )
    goto LABEL_41;
  v24 = (CombineAppendPassiveSkillMaster_o *)this;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v26;
  *(_QWORD *)&v35.fields.fakeValue = v25;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v35, 0);
  if ( !v24 )
    goto LABEL_41;
  this = (AppendSkillCombineControl_o *)CombineAppendPassiveSkillMaster__GetEntityWithTryNum(
                                          v24,
                                          (int32_t)this,
                                          v10,
                                          v9,
                                          0);
  if ( !this )
    goto LABEL_41;
  v28 = this->fields.combineRootComponent;
  v29 = this;
  if ( !v28 )
    goto LABEL_41;
  v30 = 8;
  while ( 1 )
  {
    m_CancellationTokenSource_low = LODWORD(v28->fields.m_CancellationTokenSource);
    v32 = v30 - 8;
    if ( v30 - 8 >= (int)m_CancellationTokenSource_low )
      break;
    if ( v32 >= m_CancellationTokenSource_low )
      goto LABEL_43;
    v33 = *(_QWORD *)&v29->fields.type;
    if ( v33 )
    {
      if ( v32 >= *(unsigned int *)(v33 + 24) )
        goto LABEL_43;
      CombineMenuControl__AddCombineItemInfo(
        (CombineMenuControl_o *)v4,
        *((_DWORD *)&v28->klass + v30),
        *(_DWORD *)(v33 + 4 * v30),
        v27);
      v28 = v29->fields.combineRootComponent;
      ++v30;
      if ( v28 )
        continue;
    }
    goto LABEL_41;
  }
LABEL_42:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, *(const MethodInfo **)&idx);
}


void AppendSkillCombineControl___OnClickExeCombine_b__49_0(
        AppendSkillCombineControl_o *this,
        bool decide,
        const MethodInfo *method)
{
  SetRarityDialogControl_o *exeCombineDlg; // x19
  SetLevelUpData_o *lvUpData; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4CCB2C4 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_2000/*"APPEND_SKILL_LVUP_TITLE"*/);
    byte_4CCB2C4 = 1;
  }
  if ( decide )
  {
    exeCombineDlg = this->fields.exeCombineDlg;
    lvUpData = this->fields.lvUpData;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2000/*"APPEND_SKILL_LVUP_TITLE"*/, 0);
    if ( !exeCombineDlg )
      sub_1C71608(v7, v8);
    SetRarityDialogControl__SetAppendSkillCombineInfo(exeCombineDlg, lvUpData, v7, 0, 0);
  }
}


bool AppendSkillCombineControl__get_IsSkillCombined(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._IsSkillCombined_k__BackingField;
}


void AppendSkillCombineControl__set_IsSkillCombined(
        AppendSkillCombineControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSkillCombined_k__BackingField = value;
}