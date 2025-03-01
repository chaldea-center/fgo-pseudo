void __fastcall AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C01047 & 1) == 0 )
  {
    sub_1C2E12C(&CombineMenuControl_TypeInfo, method);
    byte_4C01047 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, method);
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
  bool v8; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x23
  unsigned __int64 v10; // x21
  __int64 v11; // x27
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C01042 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_SkillMaster___, resData);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    this = (AppendSkillCombineControl_o *)sub_1C2E12C(
                                            &Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__,
                                            v5);
    byte_4C01042 = 1;
  }
  entity = 0LL;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0LL)) == 0LL
    || (v6 = *(_QWORD *)&this->fields.m_CachedPtr) == 0 )
  {
LABEL_22:
    sub_1C2E388(this, resData);
  }
  v7 = *(_QWORD *)(v6 + 24);
  v8 = (int)v7 > 0;
  if ( (int)v7 >= 1 )
  {
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v10 = 0LL;
    v11 = v6 + 32;
    do
    {
      if ( v10 >= (unsigned int)v7 )
LABEL_21:
        sub_1C2E390(this, resData);
      if ( *(int *)(v11 + 4 * v10) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( v10 >= *(unsigned int *)(v6 + 24) )
          goto LABEL_21;
        if ( !this )
          goto LABEL_22;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                &entity,
                                                *(_DWORD *)(v11 + 4 * v10),
                                                (const MethodInfo_327B1CC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity || !m_CancellationTokenSource )
            goto LABEL_22;
          if ( v10 >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
            goto LABEL_21;
          if ( *(&m_CancellationTokenSource->fields._state + v10) < SLODWORD(entity[2].monitor) )
            break;
        }
      }
      LODWORD(v7) = *(_DWORD *)(v6 + 24);
      v8 = (__int64)++v10 < (int)v7;
    }
    while ( (__int64)v10 < (int)v7 );
  }
  return !v8;
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
  __int64 v11; // x1
  int v12; // w21
  int32_t v13; // w20
  int v14; // w21
  int32_t v15; // w20

  if ( (byte_4C01038 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    sub_1C2E12C(&string_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_2086/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, v8);
    byte_4C01038 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_2086/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0LL);
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
  v12 = *((_DWORD *)gameObject + 6);
  if ( v12 >= 1 )
  {
    v13 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v13,
                     (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( v12 == ++v13 )
        goto LABEL_17;
      gameObject = this->fields.skillInfoList;
    }
    while ( gameObject );
LABEL_23:
    sub_1C2E388(gameObject, v11);
  }
LABEL_17:
  gameObject = this->fields.itemInfoList;
  if ( !gameObject )
    goto LABEL_23;
  v14 = *((_DWORD *)gameObject + 6);
  if ( v14 >= 1 )
  {
    v15 = 0;
    do
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v15,
                     (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( !gameObject )
        break;
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)gameObject, 0LL);
      if ( v14 == ++v15 )
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
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  void *helpBtn; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w8
  UISprite_o *titleImg; // x20
  UnityEngine_Object_o *charaGraph; // x20
  PartyOrganizationUtility_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4C01037 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_20911/*"img_txt_extraskill_item"*/, v4);
    sub_1C2E12C(&StringLiteral_17989/*"buttontxt_synthesis"*/, v5);
    sub_1C2E12C(&StringLiteral_20910/*"img_txt_extraskill"*/, v6);
    byte_4C01037 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0LL, 0, 0, 0, 0, 0LL);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, v7);
  AppendSkillCombineControl__InitDispCombineInfo(this, v8);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v11);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_21;
  v12 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.combineTxtImg;
  this->fields.userQp = v12;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_atlas((UISprite_o *)helpBtn, this->fields.baseAtlas, 0LL);
  helpBtn = this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17989/*"buttontxt_synthesis"*/, 0LL);
  titleImg = this->fields.titleImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_20910/*"img_txt_extraskill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20911/*"img_txt_extraskill_item"*/, 0LL);
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
    p_charaGraph = (PartyOrganizationUtility_o *)&this->fields.charaGraph;
    helpBtn = p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1C2E0D0(p_charaGraph, 0LL, v17, v18, v19, v20, v21, v22);
      return;
    }
LABEL_21:
    sub_1C2E388(helpBtn, v9);
  }
}


void __fastcall AppendSkillCombineControl__OnClickExeCombine(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  int32_t nowStatus; // w8
  struct SetRarityDialogControl_o *v17; // x20
  struct SetLevelUpData_o *v18; // x19
  int64_t Master_object; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  bool v22; // w3
  SetRarityDialogControl_o *v23; // x0
  SetLevelUpData_o *v24; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserServantMaster_o *v26; // x20
  __int64 v27; // x21
  __int64 v28; // x22
  System_Collections_Generic_List_object__o *v29; // x20
  int v30; // w27
  int32_t v31; // w21
  int64_t v32; // x22
  __int128 v33; // q0
  struct UserServantEntity_o *v34; // x8
  __int128 v35; // q0
  int64_t v36; // x23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  int64_t v46; // x1
  Il2CppClass **v47; // x0
  __int64 v48; // x8
  int v49; // w9
  unsigned int v50; // w10
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  int64_t v60; // x1
  Il2CppClass **v61; // x0
  int32_t v62; // w8
  ServantCheckWarningDialog_o *appendSkillWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v64; // x22
  struct SetRarityDialogControl_o *exeCombineDlg; // x20
  struct SetLevelUpData_o *lvUpData; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4C01044 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AppendSkillCombineControl__OnClickExeCombine_b__49_0__, method);
    sub_1C2E12C(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, v3);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v11);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C2E12C(&StringLiteral_2113/*"APPEND_SKILL_LVUP_TITLE"*/, v14);
    sub_1C2E12C(&StringLiteral_2118/*"APPEND_SKILL_OPEN_TITLE"*/, v15);
    byte_4C01044 = 1;
  }
  userServantList = 0LL;
  nowStatus = this->fields.nowStatus;
  if ( nowStatus == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantMaster___);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v26 = (UserServantMaster_o *)Master_object;
      v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v71.fields.currentCryptoKey = v28;
      *(_QWORD *)&v71.fields.fakeValue = v27;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v71, 0LL);
      if ( v26 )
      {
        UserServantMaster__TryGetEntityListBySvtId(v26, &userServantList, Master_object, 1, 0LL);
        v29 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_UserServantEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v29,
          (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
        Master_object = (int64_t)userServantList;
        if ( userServantList )
        {
          v30 = 0;
          v31 = 0;
          while ( v31 < *(_DWORD *)(Master_object + 24) )
          {
            Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)Master_object,
                                       v31,
                                       (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !Master_object )
              goto LABEL_60;
            Master_object = (int64_t)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Master_object, 0LL);
            if ( !userServantList )
              goto LABEL_60;
            v32 = Master_object;
            Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)userServantList,
                                       v31,
                                       (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !Master_object )
              goto LABEL_60;
            v33 = *(_OWORD *)(Master_object + 32);
            *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)(Master_object + 16);
            *(_OWORD *)&v69.fields.fakeValue = v33;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v68 = v69;
            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v68, 0LL);
            v34 = this->fields.baseUserServantEntity;
            if ( !v34 )
              goto LABEL_60;
            v35 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
            v36 = Master_object;
            *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v67.fields.fakeValue = v35;
            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v67, 0LL);
            if ( v36 == Master_object )
            {
              Master_object = (int64_t)userServantList;
              if ( !userServantList )
                goto LABEL_60;
              Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)userServantList,
                                         v31,
                                         (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
              if ( !v29 )
                goto LABEL_60;
              items = v29->fields._items;
              v44 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v29->fields._version;
              if ( !items )
                goto LABEL_60;
              size = v29->fields._size;
              v46 = Master_object;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v29,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              }
              else
              {
                v47 = &items->obj.klass + size;
                v29->fields._size = size + 1;
                v47[4] = (Il2CppClass *)v46;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v47 + 4), v46, v37, v38, v39, v40, v41, v42);
              }
            }
            else
            {
              if ( !v32 )
                goto LABEL_60;
              v48 = *(_QWORD *)(v32 + 24);
              if ( !v48 )
                goto LABEL_60;
              v49 = *(_DWORD *)(v48 + 24);
              if ( v49 >= 1 )
              {
                v50 = 0;
                while ( 1 )
                {
                  if ( v50 >= v49 )
                    sub_1C2E390(Master_object, v20);
                  if ( *(int *)(v48 + 4LL * (int)v50 + 32) >= 2 )
                    break;
                  if ( (int)++v50 >= v49 )
                    goto LABEL_46;
                }
                Master_object = (int64_t)userServantList;
                if ( !userServantList )
                  goto LABEL_60;
                Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)userServantList,
                                           v31,
                                           (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
                if ( !v29 )
                  goto LABEL_60;
                v57 = v29->fields._items;
                v58 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v29->fields._version;
                if ( !v57 )
                  goto LABEL_60;
                v59 = v29->fields._size;
                v60 = Master_object;
                if ( (unsigned int)v59 >= v57->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v29,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_366B8AC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                }
                else
                {
                  v61 = &v57->obj.klass + v59;
                  v29->fields._size = v59 + 1;
                  v61[4] = (Il2CppClass *)v60;
                  sub_1C2E0D0((PartyOrganizationUtility_o *)(v61 + 4), v60, v51, v52, v53, v54, v55, v56);
                }
                v30 = 1;
              }
            }
LABEL_46:
            Master_object = (int64_t)userServantList;
            ++v31;
            if ( !userServantList )
              goto LABEL_60;
          }
          if ( v29 )
          {
            v62 = v29->fields._size;
            if ( v62 )
              v62 = !this->fields._IsSkillCombined_k__BackingField;
            if ( (v30 & v62 & 1) != 0 )
            {
              appendSkillWarningDialog = this->fields.appendSkillWarningDialog;
              v64 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1C2E378(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
              ServantCheckWarningDialog_ClickDelegate___ctor(
                v64,
                (Il2CppObject *)this,
                Method_AppendSkillCombineControl__OnClickExeCombine_b__49_0__,
                0LL);
              if ( appendSkillWarningDialog )
              {
                ServantCheckWarningDialog__OpenAppendSkillWarning(
                  appendSkillWarningDialog,
                  (System_Collections_Generic_List_UserServantEntity__o *)v29,
                  v64,
                  0LL);
                return;
              }
            }
            else
            {
              exeCombineDlg = this->fields.exeCombineDlg;
              lvUpData = this->fields.lvUpData;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2113/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
              if ( exeCombineDlg )
              {
                v21 = (System_String_o *)Master_object;
                v23 = exeCombineDlg;
                v24 = lvUpData;
                v22 = 0;
                goto LABEL_58;
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1C2E388(Master_object, v20);
  }
  if ( nowStatus != 1 )
    return;
  v17 = this->fields.exeCombineDlg;
  v18 = this->fields.lvUpData;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2118/*"APPEND_SKILL_OPEN_TITLE"*/, 0LL);
  if ( !v17 )
    goto LABEL_60;
  v21 = (System_String_o *)Master_object;
  v22 = 1;
  v23 = v17;
  v24 = v18;
LABEL_58:
  SetRarityDialogControl__SetAppendSkillCombineInfo(v23, v24, v21, v22, 0LL);
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
  AppendSkillCombineControl_o *v16; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C01046 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    this = (AppendSkillCombineControl_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    byte_4C01046 = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_21;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_21;
  if ( svtSkillLvList->max_length <= idx )
    sub_1C2E390(this, *(_QWORD *)&idx);
  if ( svtSkillLvList->m_Items[idx + 1] == 1 )
  {
    effect = (Il2CppObject *)v6->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (AppendSkillCombineControl_o *)UnityEngine_Object__Instantiate_object_(
                                            effect,
                                            (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
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
                                                  (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
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
                v16 = this;
                if ( !byte_4BF7D91 )
                {
                  this = (AppendSkillCombineControl_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&idx);
                  byte_4BF7D91 = 1;
                }
                if ( v16 )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)v16,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  this = (AppendSkillCombineControl_o *)UnityEngine_Component__get_transform(v13, 0LL);
                  if ( this )
                  {
                    v17.fields.x = 0.5;
                    v17.fields.y = 0.5;
                    v17.fields.z = 0.5;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v17, 0LL);
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
    sub_1C2E388(this, *(_QWORD *)&idx);
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
  UICharaGraphTexture_o *TexturePrefab_39221460; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4C0103B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, userSvtEnt);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    this = (AppendSkillCombineControl_o *)sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4C0103B = 1;
  }
  if ( !userSvtEnt )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtEnt, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v24, 0LL);
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
    TexturePrefab_39221460 = CharaGraphManager__CreateTexturePrefab_39221460(
                               v4->fields.charaGraphBase,
                               userSvtEnt,
                               v15,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_39221460;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v4->fields.charaGraph,
      (int64_t)TexturePrefab_39221460,
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
LABEL_15:
    sub_1C2E388(this, userSvtEnt);
  UICharaGraphTexture__SetCharacter_42196436((UICharaGraphTexture_o *)this, userSvtEnt, v15, 0LL, 0, 0LL);
}


void __fastcall AppendSkillCombineControl__SetBaseSvtSkillInfo(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        int32_t idx,
        const MethodInfo *method)
{
  __int128 v7; // q1
  int64_t lastSelectSvtUniqueId; // x23
  __int128 v9; // q0
  int64_t v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int128 v17; // q0
  __int64 v18; // x1
  int64_t v19; // x8
  UnityEngine_Component_o *preSelectBaseLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+60h] [xbp-50h]

  if ( (byte_4C01039 & 1) == 0 )
  {
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtEnt);
    byte_4C01039 = 1;
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
    if ( lastSelectSvtUniqueId != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v31, 0LL) )
      this->fields._IsSkillCombined_k__BackingField = 0;
    v9 = *(_OWORD *)&userSvtEnt->fields.userId.fields.fakeValue;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v32.fields.fakeValue = v9;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v30 = v32;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v30, 0LL);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v10;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
      (int64_t)userSvtEnt,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v17 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v29.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v29, 0LL);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.lastSelectSvtUniqueId = v19;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
    {
      sub_1C2E388(preSelectBaseLb, v18);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.skillData,
      (int64_t)AppendSkillInfo,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    AppendSkillCombineControl__SetSkillIconInfo(this, this->fields.skillData, v28);
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

  if ( (byte_4C01043 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4C01043 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C2E388(combineBtnBg, method);
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
  struct System_Int32_array *useSkillIdList; // x8
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4C0103C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, *(_QWORD *)&idx);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    this = (AppendSkillCombineControl_o *)sub_1C2E12C(&StringLiteral_8950/*"MSG_SKILL_SELECT"*/, v7);
    byte_4C0103C = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList )
      goto LABEL_15;
    selectSkillHelpLb = v4->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8950/*"MSG_SKILL_SELECT"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0LL),
          (this = (AppendSkillCombineControl_o *)v4->fields.targetList) == 0LL) )
    {
LABEL_15:
      sub_1C2E388(this, *(_QWORD *)&idx);
    }
    v10 = 0;
    while ( v10 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v10,
                                              (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
          sub_1C2E390(this, *(_QWORD *)&idx);
        if ( this )
        {
          ServantSkillInfoIconComponent__SetDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.preSelectBaseLb),
            0LL);
          AppendSkillCombineControl__SetSvtSkillCombineData(v4, v10, v12);
          this = (AppendSkillCombineControl_o *)v4->fields.targetList;
          ++v10;
          if ( this )
            continue;
        }
      }
      goto LABEL_15;
    }
    AppendSkillCombineControl__SetSvtSkillCombineData(v4, idx, v9);
    AppendSkillCombineControl__UpdateCombineItemInfoList(v4, idx, v13);
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
  if ( (byte_4C0103E & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_1C2E12C(
                                            &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                            needItemIds);
    byte_4C0103E = 1;
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
                                              (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( v7 >= needItemIds->max_length )
        goto LABEL_16;
      if ( !needItemNums )
        break;
      if ( v7 >= needItemNums->max_length )
LABEL_16:
        sub_1C2E390(this, needItemIds);
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
    sub_1C2E388(this, needItemIds);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int64_t svtUseSkillIdList; // x1
  struct System_Int32_array **p_useSkillIdList; // x21
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v22; // x19
  System_Collections_Generic_List_object__o *v23; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x2
  unsigned __int64 v31; // x23
  struct System_Int32_array *v32; // x8
  int32_t v33; // w24
  int32_t type; // w25
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v37; // x27
  int32_t v38; // w28
  SvtUseSkillData_o *v39; // x22
  Il2CppObject *Item; // x26
  ServantSkillInfoIconComponent_ClickDelegate_o *v41; // x29
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v51; // x8
  AppendSkillCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v8 = skillData;
  v9 = this;
  if ( (byte_4C0103A & 1) == 0 )
  {
    sub_1C2E12C(&Method_AppendSkillCombineControl_OnClickInfo__, skillData);
    sub_1C2E12C(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, v10);
    sub_1C2E12C(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1C2E12C(&DataManager_TypeInfo, v12);
    sub_1C2E12C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v16);
    sub_1C2E12C(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v17);
    this = (AppendSkillCombineControl_o *)sub_1C2E12C(&StringLiteral_897/*"-"*/, v18);
    byte_4C0103A = 1;
  }
  if ( !v8 )
    goto LABEL_28;
  svtUseSkillIdList = (int64_t)v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_1C2E0D0(
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
  v22 = *(_QWORD *)&useSkillIdList->max_length;
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v23;
  p_targetList = (AppendSkillCombineControl_o **)&v9->fields.targetList;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v9->fields.targetList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  if ( (int)v22 >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      v32 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v31 >= v32->max_length )
        goto LABEL_29;
      v33 = v32->m_Items[v31 + 1];
      if ( v33 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                v33,
                                                (const MethodInfo_327B180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          type = this->fields.type;
          p_m_CancellationTokenSource = &this->fields.m_CancellationTokenSource;
        }
        else
        {
          p_m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o **)&StringLiteral_897/*"-"*/;
          type = 10;
        }
        svtSkillLvList = v8->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v31 >= svtSkillLvList->max_length )
LABEL_29:
          sub_1C2E390(this, skillData);
        this = (AppendSkillCombineControl_o *)v9->fields.skillInfoList;
        if ( !this )
          break;
        v37 = (System_String_o *)*p_m_CancellationTokenSource;
        v38 = svtSkillLvList->m_Items[v31 + 1];
        v39 = v8;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v31,
                 (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v41 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1C2E378(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v41,
          (Il2CppObject *)v9,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0LL);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_46945004(
          (ServantSkillInfoIconComponent_o *)Item,
          v31,
          v37,
          v33,
          v38,
          type,
          v41,
          1,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v48 = *(_QWORD *)&this->fields.m_CachedPtr;
        v49 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v48 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v48 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = v48 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v51 + 32) = Item;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v51 + 32), (int64_t)Item, v42, v43, v44, v45, v46, v47);
        }
        v8 = v39;
      }
      if ( (unsigned int)v22 == ++v31 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1C2E388(this, skillData);
  }
LABEL_27:
  AppendSkillCombineControl__SetNeedItemInfo(v9, v9->fields.currentIdx, v30);
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

  if ( (byte_4C0103F & 1) == 0 )
  {
    sub_1C2E12C(&SetLevelUpData_TypeInfo, *(_QWORD *)&idx);
    byte_4C0103F = 1;
  }
  v17 = (SetLevelUpData_o *)sub_1C2E378(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v17, 0LL);
  p_lvUpData = &this->fields.lvUpData;
  this->fields.lvUpData = v17;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.lvUpData, (int64_t)v17, v19, v20, v21, v22, v23, v24);
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_7;
  lvUpData->fields.targetName = skillName;
  p_targetName = (PartyOrganizationUtility_o *)&lvUpData->fields.targetName;
  LODWORD(p_targetName[-1].fields._TransitionDestinationFromDetail_k__BackingField) = idx;
  LODWORD(p_targetName[-1].fields.temporaryPartyInfo) = currentSkillId;
  sub_1C2E0D0(p_targetName, (int64_t)skillName, v26, v27, v28, v29, v30, v31);
  lvUpData = *p_lvUpData;
  if ( !*p_lvUpData
    || (lvUpData->fields.combineItemIds = combineItemIds,
        p_combineItemIds = (PartyOrganizationUtility_o *)&lvUpData->fields.combineItemIds,
        LODWORD(p_combineItemIds[-1].fields.questUseItemStateList) = currentSkillLv,
        HIDWORD(p_combineItemIds[-1].fields.questUseItemStateList) = currentSkillLv + 1,
        HIDWORD(p_combineItemIds[-1].fields._PartyItemSmc_k__BackingField) = currentSkillNum,
        sub_1C2E0D0(p_combineItemIds, (int64_t)combineItemIds, v34, v35, v36, v37, v38, v39),
        (lvUpData = *p_lvUpData) == 0LL) )
  {
LABEL_7:
    sub_1C2E388(lvUpData, v25);
  }
  lvUpData->fields.targetDetail = skillDetail;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&lvUpData->fields.targetDetail,
    (int64_t)skillDetail,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


void __fastcall AppendSkillCombineControl__SetSkillNeedQpData(
        AppendSkillCombineControl_o *this,
        int32_t qp,
        const MethodInfo *method)
{
  struct SetLevelUpData_o *lvUpData; // x8

  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    sub_1C2E388(this, qp);
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
  struct SetLevelUpData_o *lvUpData; // x8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserSvtCoinMaster_o *v15; // x20
  int64_t userId; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  struct SetLevelUpData_o *v19; // x9
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v6 = this;
  if ( (byte_4C01040 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_ItemMaster___, needItemIds);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_1C2E12C(&DataManager_TypeInfo, v8);
    sub_1C2E12C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    this = (AppendSkillCombineControl_o *)sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4C01040 = 1;
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
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v11 >= needItemIds->max_length )
        break;
      if ( !this )
        goto LABEL_27;
      this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              needItemIds->m_Items[v11 + 1],
                                              (const MethodInfo_327B180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    sub_1C2E390(this, needItemIds);
  }
LABEL_17:
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  baseUserServantEntity = v6->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v15 = (UserSvtCoinMaster_o *)this;
  userId = v6->fields.userId;
  v18 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v21, 0LL);
  if ( !v15 )
    goto LABEL_27;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v15, &entity, userId, (int32_t)this, 0LL);
  if ( !entity )
    return;
  v19 = v6->fields.lvUpData;
  if ( !v19 )
LABEL_27:
    sub_1C2E388(this, needItemIds);
  v19->fields.haveSvtCoin = entity->fields.num;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl__SetStateInfoMsg(
        AppendSkillCombineControl_o *this,
        int32_t state,
        int64_t svtid,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v13; // x20
  UILabel_o *v14; // x19
  __int64 *v15; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C01045 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_2111/*"APPEND_SKILL_LVMAX_MSG"*/, v8);
    sub_1C2E12C(&StringLiteral_2112/*"APPEND_SKILL_LVUP_MSG"*/, v9);
    sub_1C2E12C(&StringLiteral_2116/*"APPEND_SKILL_OPEN_MSG"*/, v10);
    sub_1C2E12C(&StringLiteral_2084/*"APPEND_SKILL_COMBINE_INFO"*/, v11);
    byte_4C01045 = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    this->fields.lastSelectSvtUniqueId = svtid;
    if ( !detailInfoLb
      || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      detailInfoLb,
                                                      (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
    {
LABEL_21:
      sub_1C2E388(detailInfoLb, *(_QWORD *)&state);
    }
    v16.fields.r = 0.0;
    v16.fields.a = 1.0;
    v16.fields.g = 0.87891;
    v16.fields.b = 0.98828;
    v13 = (UIWidget_o *)detailInfoLb;
    UIWidget__set_color((UIWidget_o *)detailInfoLb, v16, 0LL);
    switch ( this->fields.nowStatus )
    {
      case 0:
        v14 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_2084/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_19;
      case 1:
        v14 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_2116/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_19;
      case 2:
        v14 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_2112/*"APPEND_SKILL_LVUP_MSG"*/;
        goto LABEL_19;
      case 3:
        v17.fields.r = 1.0;
        v17.fields.g = 1.0;
        v17.fields.b = 1.0;
        v17.fields.a = 1.0;
        UIWidget__set_color(v13, v17, 0LL);
        v14 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_2111/*"APPEND_SKILL_LVMAX_MSG"*/;
LABEL_19:
        detailInfoLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v15, 0LL);
        if ( !v14 )
          goto LABEL_21;
        UILabel__set_text(v14, (System_String_o *)detailInfoLb, 0LL);
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
  const MethodInfo *v37; // x3
  int v38; // w8
  int64_t lastSelectSvtUniqueId; // x2
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
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  AppendSkillCombineControl_o *v67; // x29
  Il2CppObject *v68; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v70; // x25
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x0
  const MethodInfo *v75; // x3
  bool v76; // w0
  int32_t v77; // w8
  int32_t v78; // w9
  struct SetLevelUpData_o *lvUpData; // x8
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // [xsp+0h] [xbp-80h]
  System_String_o *v82; // [xsp+10h] [xbp-70h]
  System_String_o *v83; // [xsp+10h] [xbp-70h]
  int32_t userQp; // [xsp+18h] [xbp-68h] BYREF
  int32_t qp; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C0103D & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, v6);
    sub_1C2E12C(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_1C2E12C(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v8);
    sub_1C2E12C(&DataManager_TypeInfo, v9);
    sub_1C2E12C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1C2E12C(&int_TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v14);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v15);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C2E12C(&StringLiteral_9398/*"NEED_QP"*/, v17);
    sub_1C2E12C(&StringLiteral_17907/*"btn_txt_open2"*/, v18);
    sub_1C2E12C(&StringLiteral_17989/*"buttontxt_synthesis"*/, v19);
    sub_1C2E12C(&StringLiteral_12355/*"SHORT_ITEM_INFO_MSG"*/, v20);
    sub_1C2E12C(&StringLiteral_12356/*"SHORT_QP_INFO_MSG"*/, v21);
    sub_1C2E12C(&StringLiteral_2085/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, v22);
    sub_1C2E12C(&StringLiteral_1/*""*/, v23);
    this = (AppendSkillCombineControl_o *)sub_1C2E12C(&StringLiteral_17986/*"buttontxt_notsynthesis"*/, v24);
    byte_4C0103D = 1;
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
    sub_1C2E390(this, *(_QWORD *)&idx);
  v29 = svtUseSkillIdList->m_Items[idx + 1];
  v30 = svtSkillLvList->m_Items[idx + 1];
  v31 = svtSkillNumsList->m_Items[idx + 1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v29,
             (const MethodInfo_327B180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
                                            (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                          (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_19;
  v88.fields.r = 0.0;
  v88.fields.a = 1.0;
  v88.fields.g = 0.87891;
  v88.fields.b = 0.98828;
  v36 = (UIWidget_o *)this;
  UIWidget__set_color((UIWidget_o *)this, v88, 0LL);
  if ( v30 >= maxLv )
    v38 = 3;
  else
    v38 = v30 ? 2 : 1;
  lastSelectSvtUniqueId = v4->fields.lastSelectSvtUniqueId;
  v4->fields.nowStatus = v38;
  AppendSkillCombineControl__SetStateInfoMsg(v4, 0, lastSelectSvtUniqueId, v37);
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
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17907/*"btn_txt_open2"*/, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_19;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
      this,
      this->klass[2]._1.name);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v82 = v41;
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_19;
    v44 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v46 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v86.fields.currentCryptoKey = v46;
    *(_QWORD *)&v86.fields.fakeValue = v45;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v86, 0LL);
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
      v81);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v4,
      (System_Int32_array *)v48->fields.m_CancellationTokenSource,
      (System_Int32_array *)v48->fields.combineRootComponent,
      v54);
    if ( v52 )
    {
      v41 = v82;
      v55 = 1;
      v56 = 1;
      goto LABEL_76;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_2085/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17986/*"buttontxt_notsynthesis"*/, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17989/*"buttontxt_synthesis"*/, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v83 = v41;
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v57 = v4->fields.baseUserServantEntity;
  if ( !v57 )
    goto LABEL_19;
  v58 = (CombineAppendPassiveSkillMaster_o *)this;
  v60 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
  v59 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v87.fields.currentCryptoKey = v60;
  *(_QWORD *)&v87.fields.fakeValue = v59;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v87, 0LL);
  if ( !v58 )
    goto LABEL_19;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v58, (int32_t)this, v31, v30, 0LL);
  spendQpLabel = v4->fields.spendQpLabel;
  v63 = EntityWithTryNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9398/*"NEED_QP"*/, 0LL);
  if ( !v63 )
    goto LABEL_19;
  v67 = this;
  qp = v63->fields.qp;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v64, v65, v66);
  this = (AppendSkillCombineControl_o *)System_String__Format((System_String_o *)v67, v68, 0LL);
  if ( !spendQpLabel )
    goto LABEL_19;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0LL);
  haveQpLabel = v4->fields.haveQpLabel;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_9398/*"NEED_QP"*/, 0LL);
  userQp = v4->fields.userQp;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userQp, v71, v72, v73);
  this = (AppendSkillCombineControl_o *)System_String__Format(v70, v74, 0LL);
  v41 = v83;
  if ( !haveQpLabel )
    goto LABEL_19;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0LL);
  v4->fields._IsExeCombine_k__BackingField = 1;
  v76 = AppendSkillCombineControl__SetNeedItemList(v4, v63->fields.itemIds, v63->fields.itemNums, v75);
  v77 = v4->fields.userQp;
  v78 = v63->fields.qp;
  v56 = v76;
  v55 = v77 >= v78;
  if ( v77 < v78 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12356/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( (v56 & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12355/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
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
    v81);
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_19;
  lvUpData->fields.spendQp = v63->fields.qp;
  lvUpData->fields.haveQp = v4->fields.userQp;
LABEL_76:
  this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
  if ( !this )
    goto LABEL_19;
  v89.fields.r = 1.0;
  v89.fields.g = 1.0;
  v89.fields.b = 1.0;
  v89.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v89, 0LL);
  if ( (v55 & (unsigned __int8)v56 & 1) == 0 && v4->fields.nowStatus != 3 )
  {
    if ( !v55 )
    {
      this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
      if ( !this )
        goto LABEL_19;
      v90.fields.r = 1.0;
      v90.fields.g = 0.0;
      v90.fields.b = 0.0;
      v90.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v90, 0LL);
    }
    v91.fields.r = 1.0;
    v91.fields.g = 1.0;
    v91.fields.b = 1.0;
    v91.fields.a = 1.0;
    UIWidget__set_color(v36, v91, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v41, 0LL);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_84;
    }
LABEL_19:
    sub_1C2E388(this, *(_QWORD *)&idx);
  }
LABEL_84:
  this = (AppendSkillCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_19;
  this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          idx,
                                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_19;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
    (ServantSkillInfoIconComponent_o *)this,
    v30,
    v55 & v56,
    1,
    1,
    0LL);
  AppendSkillCombineControl__SetExeBtnState(v4, v80);
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
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  const MethodInfo *v19; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  AppendSkillCombineControl_o *v21; // x20
  __int64 v22; // x21
  unsigned __int64 registeredCallbacksLists_low; // x10
  unsigned __int64 v24; // x9
  struct CombineRootComponent_o *combineRootComponent; // x10
  struct UserServantEntity_o *v26; // x8
  CombineAppendPassiveSkillMaster_o *v27; // x22
  __int64 v28; // x23
  __int64 v29; // x24
  const MethodInfo *v30; // x3
  struct CombineRootComponent_o *v31; // x8
  AppendSkillCombineControl_o *v32; // x20
  __int64 v33; // x21
  unsigned __int64 m_CancellationTokenSource_low; // x10
  unsigned __int64 v35; // x9
  __int64 v36; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v4 = this;
  if ( (byte_4C01041 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, *(_QWORD *)&idx);
    sub_1C2E12C(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v5);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    this = (AppendSkillCombineControl_o *)sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4C01041 = 1;
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
    sub_1C2E390(this, *(_QWORD *)&idx);
  v12 = svtSkillLvList->m_Items[idx + 1];
  v13 = svtSkillNumsList->m_Items[idx + 1];
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, *(const MethodInfo **)&idx);
  nowStatus = v4->fields.nowStatus;
  if ( nowStatus != 2 )
  {
    if ( nowStatus != 1 )
      goto LABEL_42;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v16 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
      v18 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v18;
      *(_QWORD *)&v37.fields.fakeValue = v17;
      this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
                                              v37,
                                              0LL);
      if ( v16 )
      {
        this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v16, (int32_t)this, v13, 0LL);
        if ( this )
        {
          m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
          v21 = this;
          if ( m_CancellationTokenSource )
          {
            v22 = 8LL;
            while ( 1 )
            {
              registeredCallbacksLists_low = LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists);
              v24 = v22 - 8;
              if ( v22 - 8 >= (int)registeredCallbacksLists_low )
                goto LABEL_42;
              if ( v24 >= registeredCallbacksLists_low )
                goto LABEL_43;
              combineRootComponent = v21->fields.combineRootComponent;
              if ( combineRootComponent )
              {
                if ( v24 >= LODWORD(combineRootComponent->fields.m_CancellationTokenSource) )
                  goto LABEL_43;
                CombineMenuControl__AddCombineItemInfo(
                  (CombineMenuControl_o *)v4,
                  *((_DWORD *)&m_CancellationTokenSource->klass + v22),
                  *((_DWORD *)&combineRootComponent->klass + v22),
                  v19);
                m_CancellationTokenSource = v21->fields.m_CancellationTokenSource;
                ++v22;
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
    sub_1C2E388(this, *(_QWORD *)&idx);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v26 = v4->fields.baseUserServantEntity;
  if ( !v26 )
    goto LABEL_41;
  v27 = (CombineAppendPassiveSkillMaster_o *)this;
  v29 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v29;
  *(_QWORD *)&v38.fields.fakeValue = v28;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v38, 0LL);
  if ( !v27 )
    goto LABEL_41;
  this = (AppendSkillCombineControl_o *)CombineAppendPassiveSkillMaster__GetEntityWithTryNum(
                                          v27,
                                          (int32_t)this,
                                          v13,
                                          v12,
                                          0LL);
  if ( !this )
    goto LABEL_41;
  v31 = this->fields.combineRootComponent;
  v32 = this;
  if ( !v31 )
    goto LABEL_41;
  v33 = 8LL;
  while ( 1 )
  {
    m_CancellationTokenSource_low = LODWORD(v31->fields.m_CancellationTokenSource);
    v35 = v33 - 8;
    if ( v33 - 8 >= (int)m_CancellationTokenSource_low )
      break;
    if ( v35 >= m_CancellationTokenSource_low )
      goto LABEL_43;
    v36 = *(_QWORD *)&v32->fields.type;
    if ( v36 )
    {
      if ( v35 >= *(unsigned int *)(v36 + 24) )
        goto LABEL_43;
      CombineMenuControl__AddCombineItemInfo(
        (CombineMenuControl_o *)v4,
        *((_DWORD *)&v31->klass + v33),
        *(_DWORD *)(v36 + 4 * v33),
        v30);
      v31 = v32->fields.combineRootComponent;
      ++v33;
      if ( v31 )
        continue;
    }
    goto LABEL_41;
  }
LABEL_42:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, *(const MethodInfo **)&idx);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillCombineControl___OnClickExeCombine_b__49_0(
        AppendSkillCombineControl_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x19
  SetLevelUpData_o *lvUpData; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4C01048 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, decide);
    sub_1C2E12C(&StringLiteral_2113/*"APPEND_SKILL_LVUP_TITLE"*/, v5);
    byte_4C01048 = 1;
  }
  if ( decide )
  {
    exeCombineDlg = this->fields.exeCombineDlg;
    lvUpData = this->fields.lvUpData;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2113/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
    if ( !exeCombineDlg )
      sub_1C2E388(v8, v9);
    SetRarityDialogControl__SetAppendSkillCombineInfo(exeCombineDlg, lvUpData, v8, 0, 0LL);
  }
}


bool __fastcall AppendSkillCombineControl__get_IsSkillCombined(
        AppendSkillCombineControl_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSkillCombined_k__BackingField;
}


void __fastcall AppendSkillCombineControl__set_IsSkillCombined(
        AppendSkillCombineControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSkillCombined_k__BackingField = value;
}