void AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_593C647 & 1) == 0 )
  {
    sub_21FFC50(&CombineMenuControl_TypeInfo);
    byte_593C647 = 1;
  }
  if ( !*(&CombineMenuControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


bool AppendSkillCombineControl__CheckIsMaxLvSkills(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  intptr_t m_CachedPtr; // x19
  __int64 v5; // x8
  bool v6; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  unsigned __int64 v8; // x21
  intptr_t v9; // x27
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_593C642 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_593C642 = 1;
  }
  entity = 0;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0)) == 0
    || (m_CachedPtr = this->fields.m_CachedPtr) == 0 )
  {
LABEL_22:
    sub_21FFECC(this, resData);
  }
  v5 = *(_QWORD *)(m_CachedPtr + 24);
  v6 = (int)v5 < 1;
  if ( (int)v5 >= 1 )
  {
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v8 = 0;
    v9 = m_CachedPtr + 32;
    do
    {
      if ( v8 >= (unsigned int)v5 )
LABEL_21:
        sub_21FFED4(this);
      if ( *(int *)(v9 + 4 * v8) >= 1 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resData);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( v8 >= *(unsigned int *)(m_CachedPtr + 24) )
          goto LABEL_21;
        if ( !this )
          goto LABEL_22;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                &entity,
                                                *(_DWORD *)(v9 + 4 * v8),
                                                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
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
      v6 = (__int64)++v8 >= (int)v5;
    }
    while ( (__int64)v8 < (int)v5 );
  }
  return v6;
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
  System_String_o *gameObject; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x8
  int size; // w21
  int32_t v8; // w20
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList; // x8
  int v10; // w21
  int32_t v11; // w20

  if ( (byte_593C639 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2073/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/);
    byte_593C639 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_2073/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0);
  if ( !preSelectBaseLb )
    goto LABEL_23;
  UILabel__set_text(preSelectBaseLb, gameObject, 0);
  gameObject = (System_String_o *)this->fields.preSelectBaseLb;
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (System_String_o *)this->fields.baseSelectInfoLb;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (System_String_o *)this->fields.selectSkillHelpLb;
  if ( !gameObject )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)gameObject, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_23;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      gameObject = (System_String_o *)this->fields.skillInfoList;
      if ( !gameObject )
        break;
      gameObject = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)gameObject,
                                        v8,
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0);
      if ( size == ++v8 )
        goto LABEL_16;
    }
LABEL_23:
    sub_21FFECC(gameObject, v5);
  }
LABEL_16:
  itemInfoList = this->fields.itemInfoList;
  if ( !itemInfoList )
    goto LABEL_23;
  v10 = itemInfoList->fields._size;
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      gameObject = (System_String_o *)this->fields.itemInfoList;
      if ( !gameObject )
        break;
      gameObject = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)gameObject,
                                        v11,
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0);
      if ( v10 == ++v11 )
        return;
    }
    goto LABEL_23;
  }
}


void AppendSkillCombineControl__InitSvtSkillCombine(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v6; // x1
  int64_t klass; // x8
  __int64 v8; // x1
  UISprite_o *titleImg; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593C638 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21605/*"img_txt_extraskill_item"*/);
    sub_21FFC50(&StringLiteral_18410/*"buttontxt_synthesis"*/);
    sub_21FFC50(&StringLiteral_21604/*"img_txt_extraskill"*/);
    byte_593C638 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0, 0, 0, 0, 0, 0);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  AppendSkillCombineControl__InitDispCombineInfo(this, v3);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v6);
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
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_18410/*"buttontxt_synthesis"*/, 0);
  titleImg = this->fields.titleImg;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_21604/*"img_txt_extraskill"*/, 0);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_21605/*"img_txt_extraskill_item"*/, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    helpBtn = (UnityEngine_GameObject_o *)this->fields.charaGraph;
    if ( helpBtn )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
      this->fields.charaGraph = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, 0, v14, v15, v16, v17, v18, v19);
      return;
    }
LABEL_21:
    sub_21FFECC(helpBtn, v4);
  }
}


void AppendSkillCombineControl__OnClickExeCombine(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  int32_t nowStatus; // w8
  SetRarityDialogControl_o *v4; // x20
  SetLevelUpData_o *v5; // x19
  int64_t Master_object; // x0
  __int64 v7; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserServantMaster_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  System_Collections_Generic_List_object__o *v12; // x20
  char v13; // w27
  int32_t v14; // w21
  int64_t v15; // x22
  __int128 v16; // q1
  int v17; // w8
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q1
  int64_t v20; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x0
  __int64 v32; // x8
  int v33; // w9
  int v34; // w11
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  int64_t v44; // x1
  Il2CppClass **v45; // x0
  ServantCheckWarningDialog_o *appendSkillWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v47; // x22
  SetRarityDialogControl_o *exeCombineDlg; // x20
  SetLevelUpData_o *lvUpData; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_593C644 & 1) == 0 )
  {
    sub_21FFC50(&Method_AppendSkillCombineControl__OnClickExeCombine_b__49_0__);
    sub_21FFC50(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&StringLiteral_2100/*"APPEND_SKILL_LVUP_TITLE"*/);
    sub_21FFC50(&StringLiteral_2105/*"APPEND_SKILL_OPEN_TITLE"*/);
    byte_593C644 = 1;
  }
  nowStatus = this->fields.nowStatus;
  userServantList = 0;
  if ( nowStatus == 2 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_47;
    v9 = (UserServantMaster_o *)Master_object;
    v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    *(_QWORD *)&v54.fields.currentCryptoKey = v10;
    *(_QWORD *)&v54.fields.fakeValue = v11;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v54, 0);
    if ( !v9 )
      goto LABEL_47;
    UserServantMaster__TryGetEntityListBySvtId(v9, &userServantList, Master_object, 1, 0);
    v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    Master_object = (int64_t)userServantList;
    if ( !userServantList )
      goto LABEL_47;
    v13 = 0;
    v14 = 0;
    while ( v14 < *(_DWORD *)(Master_object + 24) )
    {
      Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)Master_object,
                                 v14,
                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Master_object )
        goto LABEL_47;
      Master_object = (int64_t)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Master_object, 0);
      if ( !userServantList )
        goto LABEL_47;
      v15 = Master_object;
      Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)userServantList,
                                 v14,
                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Master_object )
        goto LABEL_47;
      v16 = *(_OWORD *)(Master_object + 32);
      v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(Master_object + 16);
      *(_OWORD *)&v52.fields.fakeValue = v16;
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
      v51 = v52;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v51, 0);
      v18 = this->fields.baseUserServantEntity;
      if ( !v18 )
        goto LABEL_47;
      v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
      v20 = Master_object;
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v50.fields.fakeValue = v19;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v50, 0);
      if ( v20 == Master_object )
      {
        Master_object = (int64_t)userServantList;
        if ( !userServantList )
          goto LABEL_47;
        Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)userServantList,
                                   v14,
                                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !v12 )
          goto LABEL_47;
        items = v12->fields._items;
        v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_47;
        size = v12->fields._size;
        v30 = Master_object;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)Master_object,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v30;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), v30, v21, v22, v23, v24, v25, v26);
        }
      }
      else
      {
        if ( !v15 )
          goto LABEL_47;
        v32 = *(_QWORD *)(v15 + 24);
        if ( !v32 )
          goto LABEL_47;
        v33 = *(_DWORD *)(v32 + 24);
        if ( v33 >= 1 )
        {
          v34 = 0;
          while ( 1 )
          {
            if ( v33 == v34 )
              sub_21FFED4(Master_object);
            if ( *(int *)(v32 + 4LL * v34 + 32) >= 2 )
              break;
            if ( (v33 & ~(v33 >> 31)) == ++v34 )
              goto LABEL_46;
          }
          Master_object = (int64_t)userServantList;
          if ( !userServantList )
            goto LABEL_47;
          Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)userServantList,
                                     v14,
                                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !v12 )
            goto LABEL_47;
          v41 = v12->fields._items;
          v42 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v12->fields._version;
          if ( !v41 )
            goto LABEL_47;
          v43 = v12->fields._size;
          v44 = Master_object;
          if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &v41->obj.klass + v43;
            v12->fields._size = v43 + 1;
            v45[4] = (Il2CppClass *)v44;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v45 + 4), v44, v35, v36, v37, v38, v39, v40);
          }
          v13 = 1;
        }
      }
LABEL_46:
      Master_object = (int64_t)userServantList;
      ++v14;
      if ( !userServantList )
        goto LABEL_47;
    }
    if ( !v12 )
      goto LABEL_47;
    if ( !v12->fields._size || this->fields._IsSkillCombined_k__BackingField || (v13 & 1) == 0 )
    {
      exeCombineDlg = this->fields.exeCombineDlg;
      lvUpData = this->fields.lvUpData;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
      Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2100/*"APPEND_SKILL_LVUP_TITLE"*/, 0);
      if ( !exeCombineDlg )
        goto LABEL_47;
      SetRarityDialogControl__SetAppendSkillCombineInfo(exeCombineDlg, lvUpData, (System_String_o *)Master_object, 0, 0);
    }
    else
    {
      appendSkillWarningDialog = this->fields.appendSkillWarningDialog;
      v47 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_21FFEBC(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
      ServantCheckWarningDialog_ClickDelegate___ctor(
        v47,
        (Il2CppObject *)this,
        Method_AppendSkillCombineControl__OnClickExeCombine_b__49_0__,
        0);
      if ( !appendSkillWarningDialog )
        goto LABEL_47;
      ServantCheckWarningDialog__OpenAppendSkillWarning(
        appendSkillWarningDialog,
        (System_Collections_Generic_List_UserServantEntity__o *)v12,
        v47,
        0);
    }
  }
  else if ( nowStatus == 1 )
  {
    v4 = this->fields.exeCombineDlg;
    v5 = this->fields.lvUpData;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2105/*"APPEND_SKILL_OPEN_TITLE"*/, 0);
    if ( v4 )
    {
      SetRarityDialogControl__SetAppendSkillCombineInfo(v4, v5, (System_String_o *)Master_object, 1, 0);
      return;
    }
LABEL_47:
    sub_21FFECC(Master_object, v7);
  }
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
  if ( (byte_593C646 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (AppendSkillCombineControl_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C646 = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_21;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_21;
  if ( LODWORD(svtSkillLvList->max_length) <= idx )
    sub_21FFED4(this);
  if ( svtSkillLvList->m_Items[idx] == 1 )
  {
    effect = (Il2CppObject *)v6->fields.effect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
    this = (AppendSkillCombineControl_o *)UnityEngine_Object__Instantiate_object_(
                                            effect,
                                            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
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
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
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
                if ( !byte_5931940 )
                {
                  this = (AppendSkillCombineControl_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                  byte_5931940 = 1;
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
    sub_21FFECC(this, *(_QWORD *)&idx);
  }
  ActionExtensions__Call(callback, 0);
}


void AppendSkillCombineControl__SetBaseSvtCardImg(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v4 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(AppendSkillCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         userSvtEnt,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void AppendSkillCombineControl__SetBaseSvtSkillInfo(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t lastSelectSvtUniqueId; // x23
  __int64 v9; // x1
  __int128 v10; // q1
  int v11; // w8
  int64_t v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int128 v19; // q1
  __int64 v20; // x1
  int64_t v21; // x8
  UnityEngine_Component_o *preSelectBaseLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+60h] [xbp-50h]

  if ( (byte_593C63A & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593C63A = 1;
  }
  if ( userSvtEnt )
  {
    v7 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
    lastSelectSvtUniqueId = this->fields.lastSelectSvtUniqueId;
    *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v34.fields.fakeValue = v7;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtEnt);
    v33 = v34;
    if ( lastSelectSvtUniqueId != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v33, 0) )
      this->fields._IsSkillCombined_k__BackingField = 0;
    v10 = *(_OWORD *)&userSvtEnt->fields.userId.fields.fakeValue;
    v11 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v34.fields.fakeValue = v10;
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    v32 = v34;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v32, 0);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v12;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
      (int32_t)userSvtEnt,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v19 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
    *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v31.fields.fakeValue = v19;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v31, 0);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.currentIdx = idx;
    this->fields.lastSelectSvtUniqueId = v21;
    if ( !preSelectBaseLb
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0) )
    {
      sub_21FFECC(preSelectBaseLb, v20);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0);
    this->fields.skillData = AppendSkillInfo;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.skillData,
      (int32_t)AppendSkillInfo,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    AppendSkillCombineControl__SetSkillIconInfo(this, this->fields.skillData, v30);
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

  if ( (byte_593C643 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_593C643 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_21FFECC(combineBtnBg, method);
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
  if ( (byte_593C63C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_21FFC50(&StringLiteral_9161/*"MSG_SKILL_SELECT"*/);
    byte_593C63C = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList )
      goto LABEL_15;
    selectSkillHelpLb = v4->fields.selectSkillHelpLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&idx);
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9161/*"MSG_SKILL_SELECT"*/, 0);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0),
          (this = (AppendSkillCombineControl_o *)v4->fields.targetList) == 0) )
    {
LABEL_15:
      sub_21FFECC(this, *(_QWORD *)&idx);
    }
    v7 = 0;
    while ( v7 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v7,
                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( LODWORD(useSkillIdList->max_length) <= idx )
          sub_21FFED4(this);
        if ( this )
        {
          ServantSkillInfoIconComponent__SetDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx] == LODWORD(this->fields._CondTitleLabelColorAfter_k__BackingField.fields.a),
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
  unsigned __int64 v7; // x22
  __int64 max_length; // x26
  char v9; // w23
  AppendSkillCombineControl_o *v10; // x24

  v6 = this;
  if ( (byte_593C63E & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_21FFC50(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_593C63E = 1;
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
                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( v7 >= LODWORD(needItemIds->max_length) )
        goto LABEL_16;
      if ( !needItemNums )
        break;
      if ( v7 >= LODWORD(needItemNums->max_length) )
LABEL_16:
        sub_21FFED4(this);
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
    sub_21FFECC(this, needItemIds);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AppendSkillCombineControl_o *v9; // x20
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array *useSkillIdList; // x8
  il2cpp_array_size_t max_length; // x22
  System_Collections_Generic_List_object__o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2
  unsigned __int64 v21; // x21
  __int64 v22; // x29
  struct System_Int32_array *v23; // x8
  int32_t v24; // w22
  int32_t type; // w24
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v28; // x26
  int32_t v29; // w25
  Il2CppObject *Item; // x23
  ServantSkillInfoIconComponent_ClickDelegate_o *v31; // x27
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v41; // x8

  v9 = this;
  if ( (byte_593C63B & 1) == 0 )
  {
    sub_21FFC50(&Method_AppendSkillCombineControl_OnClickInfo__);
    sub_21FFC50(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_21FFC50(&StringLiteral_923/*"-"*/);
    byte_593C63B = 1;
  }
  if ( !skillData )
    goto LABEL_27;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  v9->fields.useSkillIdList = svtUseSkillIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.useSkillIdList,
    (int32_t)svtUseSkillIdList,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  useSkillIdList = v9->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_27;
  max_length = useSkillIdList->max_length;
  v13 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->fields.targetList, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    v22 = (unsigned int)max_length;
    while ( 1 )
    {
      v23 = v9->fields.useSkillIdList;
      if ( !v23 )
        break;
      if ( v21 >= LODWORD(v23->max_length) )
        goto LABEL_28;
      v24 = v23->m_Items[v21];
      if ( v24 >= 1 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillData);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                v24,
                                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          type = this->fields.type;
          p_m_CancellationTokenSource = &this->fields.m_CancellationTokenSource;
        }
        else
        {
          type = 10;
          p_m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o **)&StringLiteral_923/*"-"*/;
        }
        svtSkillLvList = skillData->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v21 >= LODWORD(svtSkillLvList->max_length) )
LABEL_28:
          sub_21FFED4(this);
        this = (AppendSkillCombineControl_o *)v9->fields.skillInfoList;
        if ( !this )
          break;
        v28 = (System_String_o *)*p_m_CancellationTokenSource;
        v29 = svtSkillLvList->m_Items[v21];
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v21,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v31 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_21FFEBC(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v31,
          (Il2CppObject *)v9,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_37921696(
          (ServantSkillInfoIconComponent_o *)Item,
          v21,
          v28,
          v24,
          v29,
          type,
          v31,
          1,
          0);
        this = (AppendSkillCombineControl_o *)v9->fields.targetList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v39 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v41 + 32) = Item;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 32), (int32_t)Item, v32, v33, v34, v35, v36, v37);
        }
      }
      if ( v22 == ++v21 )
        goto LABEL_26;
    }
LABEL_27:
    sub_21FFECC(this, skillData);
  }
LABEL_26:
  AppendSkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v20);
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
  SetLevelUpData_o *v17; // x27
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct SetLevelUpData_o *lvUpData; // x0
  MissionNaviTransitionBoardItem_o *p_targetName; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  MissionNaviTransitionBoardItem_o *p_combineItemIds; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  if ( (byte_593C63F & 1) == 0 )
  {
    sub_21FFC50(&SetLevelUpData_TypeInfo);
    byte_593C63F = 1;
  }
  v17 = (SetLevelUpData_o *)sub_21FFEBC(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v17, 0);
  this->fields.lvUpData = v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.lvUpData, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_7;
  lvUpData->fields.targetName = skillName;
  p_targetName = (MissionNaviTransitionBoardItem_o *)&lvUpData->fields.targetName;
  HIDWORD(p_targetName[-1].fields._NaviAction_k__BackingField) = idx;
  LODWORD(p_targetName[-1].fields._ClosedMessage_k__BackingField) = currentSkillId;
  HIDWORD(p_targetName[-1].fields._ClosedMessage_k__BackingField) = currentSkillId;
  sub_21FFBF4(p_targetName, (int32_t)skillName, v25, v26, v27, v28, v29, v30);
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData
    || (lvUpData->fields.combineItemIds = combineItemIds,
        p_combineItemIds = (MissionNaviTransitionBoardItem_o *)&lvUpData->fields.combineItemIds,
        p_combineItemIds[-1].fields._QuestId_k__BackingField = currentSkillLv,
        *(_DWORD *)&p_combineItemIds[-1].fields._IsNotDisplayQuestInfo_k__BackingField = currentSkillLv + 1,
        *(_DWORD *)&p_combineItemIds[-1].fields.isTermination = currentSkillNum,
        sub_21FFBF4(p_combineItemIds, (int32_t)combineItemIds, v33, v34, v35, v36, v37, v38),
        (lvUpData = this->fields.lvUpData) == 0) )
  {
LABEL_7:
    sub_21FFECC(lvUpData, v24);
  }
  lvUpData->fields.targetDetail = skillDetail;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&lvUpData->fields.targetDetail,
    (int32_t)skillDetail,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
}


// local variable allocation has failed, the output may be wrong!
void AppendSkillCombineControl__SetSkillNeedQpData(
        AppendSkillCombineControl_o *this,
        int32_t qp,
        const MethodInfo *method)
{
  struct SetLevelUpData_o *lvUpData; // x8
  int64_t userQp; // x9

  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    sub_21FFECC(this, *(_QWORD *)&qp);
  userQp = this->fields.userQp;
  lvUpData->fields.spendQp = qp;
  lvUpData->fields.haveQp = userQp;
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
  int v10; // w8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserSvtCoinMaster_o *v12; // x20
  __int64 v13; // x22
  __int64 v14; // x23
  int64_t userId; // x21
  struct SetLevelUpData_o *v16; // x9
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v6 = this;
  if ( (byte_593C640 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (AppendSkillCombineControl_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C640 = 1;
  }
  entity = 0;
  if ( !needItemIds )
    goto LABEL_27;
  if ( (int)needItemIds->max_length >= 1 )
  {
    v7 = 0;
    max_length = (unsigned int)needItemIds->max_length;
    while ( 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, needItemIds);
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v7 >= LODWORD(needItemIds->max_length) )
        break;
      if ( !this )
        goto LABEL_27;
      this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              needItemIds->m_Items[v7],
                                              (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    sub_21FFED4(this);
  }
LABEL_17:
  v10 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, needItemIds);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  baseUserServantEntity = v6->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v12 = (UserSvtCoinMaster_o *)this;
  v13 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  userId = v6->fields.userId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, needItemIds);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
  if ( !v12 )
    goto LABEL_27;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v12, &entity, userId, (int32_t)this, 0);
  if ( !entity )
    return;
  v16 = v6->fields.lvUpData;
  if ( !v16 )
LABEL_27:
    sub_21FFECC(this, needItemIds);
  v16->fields.haveSvtCoin = entity->fields.num;
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
  __int64 v9; // x1
  int32_t nowStatus; // w8
  UILabel_o *v11; // x19
  __int64 *v12; // x8
  __int64 v13; // x1
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593C645 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2098/*"APPEND_SKILL_LVMAX_MSG"*/);
    sub_21FFC50(&StringLiteral_2099/*"APPEND_SKILL_LVUP_MSG"*/);
    sub_21FFC50(&StringLiteral_2103/*"APPEND_SKILL_OPEN_MSG"*/);
    sub_21FFC50(&StringLiteral_2071/*"APPEND_SKILL_COMBINE_INFO"*/);
    byte_593C645 = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    this->fields.lastSelectSvtUniqueId = svtid;
    if ( detailInfoLb )
    {
      detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  detailInfoLb,
                                                  (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( detailInfoLb )
      {
        v14.fields.r = 0.0;
        v14.fields.a = 1.0;
        v14.fields.g = 0.87891;
        v14.fields.b = 0.98828;
        v8 = (UIWidget_o *)detailInfoLb;
        UIWidget__set_color((UIWidget_o *)detailInfoLb, v14, 0);
        nowStatus = this->fields.nowStatus;
        if ( nowStatus > 1 )
        {
          if ( nowStatus == 2 )
          {
            v11 = this->fields.detailInfoLb;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
            v12 = &StringLiteral_2099/*"APPEND_SKILL_LVUP_MSG"*/;
          }
          else
          {
            if ( nowStatus != 3 )
              return;
            v15.fields.r = 1.0;
            v15.fields.g = 1.0;
            v15.fields.b = 1.0;
            v15.fields.a = 1.0;
            UIWidget__set_color(v8, v15, 0);
            v11 = this->fields.detailInfoLb;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
            v12 = &StringLiteral_2098/*"APPEND_SKILL_LVMAX_MSG"*/;
          }
        }
        else if ( nowStatus )
        {
          if ( nowStatus != 1 )
            return;
          v11 = this->fields.detailInfoLb;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
          v12 = &StringLiteral_2103/*"APPEND_SKILL_OPEN_MSG"*/;
        }
        else
        {
          v11 = this->fields.detailInfoLb;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
          v12 = &StringLiteral_2071/*"APPEND_SKILL_COMBINE_INFO"*/;
        }
        detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v12, 0);
        if ( v11 )
        {
          UILabel__set_text(v11, (System_String_o *)detailInfoLb, 0);
          return;
        }
      }
    }
    sub_21FFECC(detailInfoLb, *(_QWORD *)&state);
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
  int32_t v14; // w22
  int32_t maxLv; // w27
  UIWidget_o *v16; // x22
  const MethodInfo *v17; // x3
  int v18; // w8
  int64_t lastSelectSvtUniqueId; // x2
  int32_t nowStatus; // w8
  System_String_o *v21; // x29
  __int64 v22; // x1
  struct UserServantEntity_o *v23; // x8
  CombineAppendPassiveSkillMaster_o *v24; // x27
  __int64 v25; // x28
  __int64 v26; // x29
  __int64 v27; // x1
  CombineAppendPassiveSkillEntity_o *EntityWithTryNum; // x27
  UILabel_o *spendQpLabel; // x28
  AppendSkillCombineControl_o *v30; // x29
  Il2CppObject *v31; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v33; // x25
  Il2CppObject *v34; // x0
  System_Int32_array *itemIds; // x1
  System_Int32_array *itemNums; // x2
  const MethodInfo *v37; // x3
  bool v38; // w0
  __int64 v39; // x1
  int64_t v40; // x8
  int64_t v41; // x9
  char v42; // w28
  bool v43; // w25
  struct SetLevelUpData_o *lvUpData; // x8
  int64_t v45; // x10
  UISprite_o *combineTxtImg; // x27
  __int64 v47; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v49; // x27
  __int64 v50; // x28
  __int64 v51; // x29
  const MethodInfo *v52; // x3
  AppendSkillCombineControl_o *v53; // x27
  bool appended; // w0
  System_String_o *name; // x28
  System_Int32_array *m_CancellationTokenSource; // x29
  bool v57; // w25
  System_String_o *EffectExplanation; // x0
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // [xsp+0h] [xbp-90h]
  System_String_o *v62; // [xsp+18h] [xbp-78h]
  System_String_o *v63; // [xsp+18h] [xbp-78h]
  int64_t userQp; // [xsp+20h] [xbp-70h] BYREF
  int32_t qp; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_593C63D & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_18321/*"btn_txt_open2"*/);
    sub_21FFC50(&StringLiteral_18410/*"buttontxt_synthesis"*/);
    sub_21FFC50(&StringLiteral_12679/*"SHORT_ITEM_INFO_MSG"*/);
    sub_21FFC50(&StringLiteral_12680/*"SHORT_QP_INFO_MSG"*/);
    sub_21FFC50(&StringLiteral_2072/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (AppendSkillCombineControl_o *)sub_21FFC50(&StringLiteral_18407/*"buttontxt_notsynthesis"*/);
    byte_593C63D = 1;
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
    sub_21FFED4(this);
  v9 = svtUseSkillIdList->m_Items[idx];
  v10 = svtSkillLvList->m_Items[idx];
  v11 = svtSkillNumsList->m_Items[idx];
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&idx);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v9,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v13 = (SkillEntity_o *)Entity;
  this = (AppendSkillCombineControl_o *)v4->fields.itemInfoList;
  if ( !this )
    goto LABEL_19;
  v14 = 0;
  maxLv = v13->fields.maxLv;
  while ( v14 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v14,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( this )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0);
      this = (AppendSkillCombineControl_o *)v4->fields.itemInfoList;
      ++v14;
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
                                          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_19;
  v68.fields.r = 0.0;
  v68.fields.a = 1.0;
  v68.fields.g = 0.87891;
  v68.fields.b = 0.98828;
  v16 = (UIWidget_o *)this;
  UIWidget__set_color((UIWidget_o *)this, v68, 0);
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
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&idx);
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_18321/*"btn_txt_open2"*/, 0);
    this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_19;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._5_OnClickHelp.method)(
      this,
      this->klass[1].vtable._6_GetTutorialOpenType.methodPtr);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
    v63 = v21;
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_19;
    v49 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v50 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v51 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&idx);
    *(_QWORD *)&v67.fields.currentCryptoKey = v50;
    *(_QWORD *)&v67.fields.fakeValue = v51;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v67, 0);
    if ( !v49 )
      goto LABEL_19;
    this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v49, (int32_t)this, v11, 0);
    v4->fields._IsExeCombine_k__BackingField = 1;
    if ( !this )
      goto LABEL_19;
    v53 = this;
    appended = AppendSkillCombineControl__SetNeedItemList(
                 v4,
                 (System_Int32_array *)this->fields.m_CancellationTokenSource,
                 (System_Int32_array *)this->fields.combineRootComponent,
                 v52);
    name = v13->fields.name;
    m_CancellationTokenSource = (System_Int32_array *)v53->fields.m_CancellationTokenSource;
    v57 = appended;
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
      v61);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v4,
      (System_Int32_array *)v53->fields.m_CancellationTokenSource,
      (System_Int32_array *)v53->fields.combineRootComponent,
      v59);
    if ( v57 )
    {
      v21 = v63;
      v43 = 1;
      v42 = 1;
      goto LABEL_76;
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&idx);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2072/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0);
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18407/*"buttontxt_notsynthesis"*/, 0);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._5_OnClickHelp.method)(
        this,
        this->klass[1].vtable._6_GetTutorialOpenType.methodPtr);
    }
LABEL_75:
    v42 = 0;
    v43 = 1;
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18410/*"buttontxt_synthesis"*/, 0);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._5_OnClickHelp.method)(
    this,
    this->klass[1].vtable._6_GetTutorialOpenType.methodPtr);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  v62 = v21;
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v23 = v4->fields.baseUserServantEntity;
  if ( !v23 )
    goto LABEL_19;
  v24 = (CombineAppendPassiveSkillMaster_o *)this;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&idx);
  *(_QWORD *)&v66.fields.currentCryptoKey = v25;
  *(_QWORD *)&v66.fields.fakeValue = v26;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v66, 0);
  if ( !v24 )
    goto LABEL_19;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v24, (int32_t)this, v11, v10, 0);
  spendQpLabel = v4->fields.spendQpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  if ( !EntityWithTryNum )
    goto LABEL_19;
  v30 = this;
  qp = EntityWithTryNum->fields.qp;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &qp);
  this = (AppendSkillCombineControl_o *)System_String__Format((System_String_o *)v30, v31, 0);
  if ( !spendQpLabel )
    goto LABEL_19;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0);
  haveQpLabel = v4->fields.haveQpLabel;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  userQp = v4->fields.userQp;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &userQp);
  this = (AppendSkillCombineControl_o *)System_String__Format(v33, v34, 0);
  v21 = v62;
  if ( !haveQpLabel )
    goto LABEL_19;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0);
  itemIds = EntityWithTryNum->fields.itemIds;
  itemNums = EntityWithTryNum->fields.itemNums;
  v4->fields._IsExeCombine_k__BackingField = 1;
  v38 = AppendSkillCombineControl__SetNeedItemList(v4, itemIds, itemNums, v37);
  v40 = v4->fields.userQp;
  v41 = EntityWithTryNum->fields.qp;
  v42 = v38;
  v43 = v40 >= v41;
  if ( v40 < v41 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12680/*"SHORT_QP_INFO_MSG"*/, 0);
  }
  if ( (v42 & 1) == 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12679/*"SHORT_ITEM_INFO_MSG"*/, 0);
  }
  AppendSkillCombineControl__SetSkillLevelUpData(
    v4,
    idx,
    v9,
    v10,
    v11,
    v13->fields.name,
    EntityWithTryNum->fields.itemIds,
    (System_String_o *)StringLiteral_1/*""*/,
    v61);
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_19;
  v45 = v4->fields.userQp;
  lvUpData->fields.spendQp = EntityWithTryNum->fields.qp;
  lvUpData->fields.haveQp = v45;
LABEL_76:
  this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
  if ( !this )
    goto LABEL_19;
  v69.fields.r = 1.0;
  v69.fields.g = 1.0;
  v69.fields.b = 1.0;
  v69.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v69, 0);
  if ( v4->fields.nowStatus != 3 && (v43 & (unsigned __int8)v42 & 1) == 0 )
  {
    if ( !v43 )
    {
      this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
      if ( !this )
        goto LABEL_19;
      v70.fields.g = 0.0;
      v70.fields.b = 0.0;
      v70.fields.r = 1.0;
      v70.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v70, 0);
    }
    v71.fields.r = 1.0;
    v71.fields.g = 1.0;
    v71.fields.b = 1.0;
    v71.fields.a = 1.0;
    UIWidget__set_color(v16, v71, 0);
    this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v21, 0);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_84;
    }
LABEL_19:
    sub_21FFECC(this, *(_QWORD *)&idx);
  }
LABEL_84:
  this = (AppendSkillCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_19;
  this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          idx,
                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_19;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
    (ServantSkillInfoIconComponent_o *)this,
    v10,
    v43 & v42,
    1,
    1,
    0);
  AppendSkillCombineControl__SetExeBtnState(v4, v60);
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
  __int64 v11; // x1
  int32_t nowStatus; // w8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
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
  struct CombineRootComponent_o *v27; // x8
  AppendSkillCombineControl_o *v28; // x20
  __int64 v29; // x21
  unsigned __int64 m_CancellationTokenSource_low; // x10
  unsigned __int64 v31; // x9
  __int64 v32; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v4 = this;
  if ( (byte_593C641 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C641 = 1;
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
    sub_21FFED4(this);
  v9 = svtSkillLvList->m_Items[idx];
  v10 = svtSkillNumsList->m_Items[idx];
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, 0);
  nowStatus = v4->fields.nowStatus;
  if ( nowStatus != 2 )
  {
    if ( nowStatus != 1 )
      goto LABEL_42;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v14 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
      v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&idx);
      *(_QWORD *)&v33.fields.currentCryptoKey = v15;
      *(_QWORD *)&v33.fields.fakeValue = v16;
      this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v33, 0);
      if ( v14 )
      {
        this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v14, (int32_t)this, v10, 0);
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
                  0);
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
    sub_21FFECC(this, *(_QWORD *)&idx);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v23 = v4->fields.baseUserServantEntity;
  if ( !v23 )
    goto LABEL_41;
  v24 = (CombineAppendPassiveSkillMaster_o *)this;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&idx);
  *(_QWORD *)&v34.fields.currentCryptoKey = v25;
  *(_QWORD *)&v34.fields.fakeValue = v26;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v34, 0);
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
  v27 = this->fields.combineRootComponent;
  v28 = this;
  if ( !v27 )
    goto LABEL_41;
  v29 = 8;
  while ( 1 )
  {
    m_CancellationTokenSource_low = LODWORD(v27->fields.m_CancellationTokenSource);
    v31 = v29 - 8;
    if ( v29 - 8 >= (int)m_CancellationTokenSource_low )
      break;
    if ( v31 >= m_CancellationTokenSource_low )
      goto LABEL_43;
    v32 = *(_QWORD *)&v28->fields.type;
    if ( v32 )
    {
      if ( v31 >= *(unsigned int *)(v32 + 24) )
        goto LABEL_43;
      CombineMenuControl__AddCombineItemInfo(
        (CombineMenuControl_o *)v4,
        *((_DWORD *)&v27->klass + v29),
        *(_DWORD *)(v32 + 4 * v29),
        0);
      v27 = v28->fields.combineRootComponent;
      ++v29;
      if ( v27 )
        continue;
    }
    goto LABEL_41;
  }
LABEL_42:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void AppendSkillCombineControl___OnClickExeCombine_b__49_0(
        AppendSkillCombineControl_o *this,
        bool decide,
        const MethodInfo *method)
{
  AppendSkillCombineControl_o *v4; // x19
  SetRarityDialogControl_o *exeCombineDlg; // x20
  SetLevelUpData_o *lvUpData; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8

  v4 = this;
  if ( (byte_593C648 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_21FFC50(&StringLiteral_2100/*"APPEND_SKILL_LVUP_TITLE"*/);
    byte_593C648 = 1;
  }
  if ( decide )
  {
    exeCombineDlg = v4->fields.exeCombineDlg;
    lvUpData = v4->fields.lvUpData;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, decide);
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2100/*"APPEND_SKILL_LVUP_TITLE"*/, 0);
    if ( !exeCombineDlg )
LABEL_10:
      sub_21FFECC(this, decide);
    SetRarityDialogControl__SetAppendSkillCombineInfo(exeCombineDlg, lvUpData, (System_String_o *)this, 0, 0);
  }
  combineRootComponent = v4->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_10;
  combineRootComponent->fields._IsExeButtonProcessing_k__BackingField = 0;
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