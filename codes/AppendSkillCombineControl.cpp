void AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C2AF6F & 1) == 0 )
  {
    sub_1C2D490(&CombineMenuControl_TypeInfo);
    byte_4C2AF6F = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


bool AppendSkillCombineControl__CheckIsMaxLvSkills(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v4; // x2
  intptr_t m_CachedPtr; // x19
  __int64 v6; // x8
  bool v7; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x23
  unsigned __int64 v9; // x21
  intptr_t v10; // x27
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2AF6A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_4C2AF6A = 1;
  }
  entity = 0;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0)) == 0
    || (m_CachedPtr = this->fields.m_CachedPtr) == 0 )
  {
LABEL_22:
    sub_1C2D6EC(this, resData);
  }
  v6 = *(_QWORD *)(m_CachedPtr + 24);
  v7 = (int)v6 > 0;
  if ( (int)v6 >= 1 )
  {
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v9 = 0;
    v10 = m_CachedPtr + 32;
    do
    {
      if ( v9 >= (unsigned int)v6 )
LABEL_21:
        sub_1C2D6F4(this, resData, v4);
      if ( *(int *)(v10 + 4 * v9) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( v9 >= *(unsigned int *)(m_CachedPtr + 24) )
          goto LABEL_21;
        if ( !this )
          goto LABEL_22;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                &entity,
                                                *(_DWORD *)(v10 + 4 * v9),
                                                (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity || !m_CancellationTokenSource )
            goto LABEL_22;
          if ( v9 >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
            goto LABEL_21;
          if ( *(&m_CancellationTokenSource->fields._state + v9) < SLODWORD(entity[2].monitor) )
            break;
        }
      }
      LODWORD(v6) = *(_DWORD *)(m_CachedPtr + 24);
      v7 = (__int64)++v9 < (int)v6;
    }
    while ( (__int64)v9 < (int)v6 );
  }
  return !v7;
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

  if ( (byte_4C2AF61 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_1976/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/);
    byte_4C2AF61 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_1976/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0);
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
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0);
      if ( v6 == ++v7 )
        goto LABEL_17;
      gameObject = this->fields.skillInfoList;
    }
    while ( gameObject );
LABEL_23:
    sub_1C2D6EC(gameObject, v5);
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
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v6; // x1
  int64_t klass; // x8
  UISprite_o *titleImg; // x20
  UnityEngine_Object_o *charaGraph; // x20
  CGThumbnailListItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C2AF60 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20634/*"img_txt_extraskill_item"*/);
    sub_1C2D490(&StringLiteral_17664/*"buttontxt_synthesis"*/);
    sub_1C2D490(&StringLiteral_20633/*"img_txt_extraskill"*/);
    byte_4C2AF60 = 1;
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
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17664/*"buttontxt_synthesis"*/, 0);
  titleImg = this->fields.titleImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_20633/*"img_txt_extraskill"*/, 0);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20634/*"img_txt_extraskill_item"*/, 0);
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
    p_charaGraph = (CGThumbnailListItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(gameObject, 0);
      p_charaGraph->klass = 0;
      sub_1C2D434(p_charaGraph, 0, v12, v13);
      return;
    }
LABEL_21:
    sub_1C2D6EC(helpBtn, v4);
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
  __int64 v24; // x2
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  int64_t v30; // x1
  Il2CppClass **v31; // x0
  __int64 v32; // x8
  int v33; // w9
  unsigned int v34; // w10
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  int64_t v40; // x1
  Il2CppClass **v41; // x0
  int32_t v42; // w8
  ServantCheckWarningDialog_o *appendSkillWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v44; // x22
  struct SetRarityDialogControl_o *exeCombineDlg; // x20
  struct SetLevelUpData_o *lvUpData; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4C2AF6C & 1) == 0 )
  {
    sub_1C2D490(&Method_AppendSkillCombineControl__OnClickExeCombine_b__49_0__);
    sub_1C2D490(&ServantCheckWarningDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&StringLiteral_2003/*"APPEND_SKILL_LVUP_TITLE"*/);
    sub_1C2D490(&StringLiteral_2008/*"APPEND_SKILL_OPEN_TITLE"*/);
    byte_4C2AF6C = 1;
  }
  userServantList = 0;
  nowStatus = this->fields.nowStatus;
  if ( nowStatus == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v13 = (UserServantMaster_o *)Master_object;
      v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v15;
      *(_QWORD *)&v51.fields.fakeValue = v14;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v51, 0);
      if ( v13 )
      {
        UserServantMaster__TryGetEntityListBySvtId(v13, &userServantList, Master_object, 1, 0);
        v16 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v16,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !Master_object )
              goto LABEL_60;
            Master_object = (int64_t)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Master_object, 0);
            if ( !userServantList )
              goto LABEL_60;
            v19 = Master_object;
            Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)userServantList,
                                       v18,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !Master_object )
              goto LABEL_60;
            v20 = *(_OWORD *)(Master_object + 32);
            *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(Master_object + 16);
            *(_OWORD *)&v49.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v48 = v49;
            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v48, 0);
            v21 = this->fields.baseUserServantEntity;
            if ( !v21 )
              goto LABEL_60;
            v22 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
            v23 = Master_object;
            *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v47.fields.fakeValue = v22;
            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v47, 0);
            if ( v23 == Master_object )
            {
              Master_object = (int64_t)userServantList;
              if ( !userServantList )
                goto LABEL_60;
              Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)userServantList,
                                         v18,
                                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
              if ( !v16 )
                goto LABEL_60;
              items = v16->fields._items;
              v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v16->fields._version;
              if ( !items )
                goto LABEL_60;
              size = v16->fields._size;
              v30 = Master_object;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v16,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v31 = &items->obj.klass + size;
                v16->fields._size = size + 1;
                v31[4] = (Il2CppClass *)v30;
                sub_1C2D434((CGThumbnailListItem_o *)(v31 + 4), v30, v25, v26);
              }
            }
            else
            {
              if ( !v19 )
                goto LABEL_60;
              v32 = *(_QWORD *)(v19 + 24);
              if ( !v32 )
                goto LABEL_60;
              v33 = *(_DWORD *)(v32 + 24);
              if ( v33 >= 1 )
              {
                v34 = 0;
                while ( 1 )
                {
                  if ( v34 >= v33 )
                    sub_1C2D6F4(Master_object, v7, v24);
                  if ( *(int *)(v32 + 4LL * (int)v34 + 32) >= 2 )
                    break;
                  if ( (int)++v34 >= v33 )
                    goto LABEL_46;
                }
                Master_object = (int64_t)userServantList;
                if ( !userServantList )
                  goto LABEL_60;
                Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)userServantList,
                                           v18,
                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
                if ( !v16 )
                  goto LABEL_60;
                v37 = v16->fields._items;
                v38 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v16->fields._version;
                if ( !v37 )
                  goto LABEL_60;
                v39 = v16->fields._size;
                v40 = Master_object;
                if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v16,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                }
                else
                {
                  v41 = &v37->obj.klass + v39;
                  v16->fields._size = v39 + 1;
                  v41[4] = (Il2CppClass *)v40;
                  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 4), v40, v35, v36);
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
            v42 = v16->fields._size;
            if ( v42 )
              v42 = !this->fields._IsSkillCombined_k__BackingField;
            if ( (v17 & v42 & 1) != 0 )
            {
              appendSkillWarningDialog = this->fields.appendSkillWarningDialog;
              v44 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1C2D6DC(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
              ServantCheckWarningDialog_ClickDelegate___ctor(
                v44,
                (Il2CppObject *)this,
                Method_AppendSkillCombineControl__OnClickExeCombine_b__49_0__,
                0);
              if ( appendSkillWarningDialog )
              {
                ServantCheckWarningDialog__OpenAppendSkillWarning(
                  appendSkillWarningDialog,
                  (System_Collections_Generic_List_UserServantEntity__o *)v16,
                  v44,
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
              Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2003/*"APPEND_SKILL_LVUP_TITLE"*/, 0);
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
    sub_1C2D6EC(Master_object, v7);
  }
  if ( nowStatus != 1 )
    return;
  v4 = this->fields.exeCombineDlg;
  v5 = this->fields.lvUpData;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2008/*"APPEND_SKILL_OPEN_TITLE"*/, 0);
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
  if ( (byte_4C2AF6E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (AppendSkillCombineControl_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AF6E = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_21;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_21;
  if ( LODWORD(svtSkillLvList->max_length) <= idx )
    sub_1C2D6F4(this, *(_QWORD *)&idx, callback);
  if ( svtSkillLvList->m_Items[idx] == 1 )
  {
    effect = (Il2CppObject *)v6->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (AppendSkillCombineControl_o *)UnityEngine_Object__Instantiate_object_(
                                            effect,
                                            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
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
                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
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
                if ( !byte_4C20DA1 )
                {
                  this = (AppendSkillCombineControl_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                  byte_4C20DA1 = 1;
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
    sub_1C2D6EC(this, *(_QWORD *)&idx);
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
  const MethodInfo *v7; // x3

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(AppendSkillCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         userSvtEnt,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v5;
  sub_1C2D434((CGThumbnailListItem_o *)p_charaGraph, (int32_t)v5, v6, v7);
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
  const MethodInfo *v12; // x3
  __int128 v13; // q0
  __int64 v14; // x1
  int64_t v15; // x8
  UnityEngine_Component_o *preSelectBaseLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+60h] [xbp-50h]

  if ( (byte_4C2AF62 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2AF62 = 1;
  }
  if ( userSvtEnt )
  {
    v7 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
    lastSelectSvtUniqueId = this->fields.lastSelectSvtUniqueId;
    *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v24.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v23 = v24;
    if ( lastSelectSvtUniqueId != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v23, 0) )
      this->fields._IsSkillCombined_k__BackingField = 0;
    v9 = *(_OWORD *)&userSvtEnt->fields.userId.fields.fakeValue;
    *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v24.fields.fakeValue = v9;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v22 = v24;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v22, 0);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v10;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)userSvtEnt, v11, v12);
    v13 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v21, 0);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.lastSelectSvtUniqueId = v15;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0) )
    {
      sub_1C2D6EC(preSelectBaseLb, v14);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0);
    this->fields.skillData = AppendSkillInfo;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillData, (int32_t)AppendSkillInfo, v18, v19);
    AppendSkillCombineControl__SetSkillIconInfo(this, this->fields.skillData, v20);
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

  if ( (byte_4C2AF6B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C2AF6B = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C2D6EC(combineBtnBg, method);
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
  __int64 v8; // x2
  struct System_Int32_array *useSkillIdList; // x8
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4C2AF64 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1C2D490(&StringLiteral_8802/*"MSG_SKILL_SELECT"*/);
    byte_4C2AF64 = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList )
      goto LABEL_15;
    selectSkillHelpLb = v4->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8802/*"MSG_SKILL_SELECT"*/, 0);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0),
          (this = (AppendSkillCombineControl_o *)v4->fields.targetList) == 0) )
    {
LABEL_15:
      sub_1C2D6EC(this, *(_QWORD *)&idx);
    }
    v7 = 0;
    while ( v7 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v7,
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( LODWORD(useSkillIdList->max_length) <= idx )
          sub_1C2D6F4(this, *(_QWORD *)&idx, v8);
        if ( this )
        {
          ServantSkillInfoIconComponent__SetDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx] == LODWORD(this->fields.preSelectBaseLb),
            0);
          AppendSkillCombineControl__SetSvtSkillCombineData(v4, v7, v10);
          this = (AppendSkillCombineControl_o *)v4->fields.targetList;
          ++v7;
          if ( this )
            continue;
        }
      }
      goto LABEL_15;
    }
    AppendSkillCombineControl__SetSvtSkillCombineData(v4, idx, v6);
    AppendSkillCombineControl__UpdateCombineItemInfoList(v4, idx, v11);
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
  __int64 v10; // x2
  AppendSkillCombineControl_o *v11; // x24

  v6 = this;
  if ( (byte_4C2AF66 & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_1C2D490(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_4C2AF66 = 1;
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
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( v7 >= LODWORD(needItemIds->max_length) )
        goto LABEL_16;
      if ( !needItemNums )
        break;
      if ( v7 >= LODWORD(needItemNums->max_length) )
LABEL_16:
        sub_1C2D6F4(this, needItemIds, v10);
      v11 = this;
      if ( !this )
        break;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)this,
        v6->fields.userId,
        needItemIds->m_Items[v7],
        needItemNums->m_Items[v7],
        0);
      ++v7;
      v9 &= LOBYTE(v11->fields.infoBack) != 0;
      if ( max_length == v7 )
        return v9;
    }
LABEL_15:
    sub_1C2D6EC(this, needItemIds);
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
  const MethodInfo *v3; // x3
  SvtUseSkillData_o *v4; // x26
  AppendSkillCombineControl_o *v5; // x20
  struct System_Int32_array *svtUseSkillIdList; // x1
  struct System_Int32_array **p_useSkillIdList; // x21
  struct System_Int32_array *useSkillIdList; // x8
  il2cpp_array_size_t max_length; // x19
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  unsigned __int64 v14; // x23
  struct System_Int32_array *v15; // x8
  int32_t v16; // w24
  int32_t type; // w25
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v20; // x27
  int32_t v21; // w28
  SvtUseSkillData_o *v22; // x22
  Il2CppObject *Item; // x26
  ServantSkillInfoIconComponent_ClickDelegate_o *v24; // x29
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8
  AppendSkillCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v4 = skillData;
  v5 = this;
  if ( (byte_4C2AF63 & 1) == 0 )
  {
    sub_1C2D490(&Method_AppendSkillCombineControl_OnClickInfo__);
    sub_1C2D490(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1C2D490(&StringLiteral_861/*"-"*/);
    byte_4C2AF63 = 1;
  }
  if ( !v4 )
    goto LABEL_28;
  svtUseSkillIdList = v4->fields.svtUseSkillIdList;
  p_useSkillIdList = &v5->fields.useSkillIdList;
  v5->fields.useSkillIdList = svtUseSkillIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.useSkillIdList, (int32_t)svtUseSkillIdList, (int32_t)method, v3);
  useSkillIdList = v5->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_28;
  max_length = useSkillIdList->max_length;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v5->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v10;
  p_targetList = (AppendSkillCombineControl_o **)&v5->fields.targetList;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.targetList, (int32_t)v10, v11, v12);
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v14 >= LODWORD(v15->max_length) )
        goto LABEL_29;
      v16 = v15->m_Items[v14];
      if ( v16 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                v16,
                                                (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          type = this->fields.type;
          p_m_CancellationTokenSource = &this->fields.m_CancellationTokenSource;
        }
        else
        {
          p_m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o **)&StringLiteral_861/*"-"*/;
          type = 10;
        }
        svtSkillLvList = v4->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v14 >= LODWORD(svtSkillLvList->max_length) )
LABEL_29:
          sub_1C2D6F4(this, skillData, v13);
        this = (AppendSkillCombineControl_o *)v5->fields.skillInfoList;
        if ( !this )
          break;
        v20 = (System_String_o *)*p_m_CancellationTokenSource;
        v21 = svtSkillLvList->m_Items[v14];
        v22 = v4;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v14,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v24 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1C2D6DC(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v24,
          (Il2CppObject *)v5,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_48714624(
          (ServantSkillInfoIconComponent_o *)Item,
          v14,
          v20,
          v16,
          v21,
          type,
          v24,
          1,
          0);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v28 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v30 + 32) = Item;
          sub_1C2D434((CGThumbnailListItem_o *)(v30 + 32), (int32_t)Item, v25, v26);
        }
        v4 = v22;
      }
      if ( (unsigned int)max_length == ++v14 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1C2D6EC(this, skillData);
  }
LABEL_27:
  AppendSkillCombineControl__SetNeedItemInfo(v5, v5->fields.currentIdx, v13);
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
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct SetLevelUpData_o *lvUpData; // x0
  CGThumbnailListItem_o *p_targetName; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_o *p_combineItemIds; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4C2AF67 & 1) == 0 )
  {
    sub_1C2D490(&SetLevelUpData_TypeInfo);
    byte_4C2AF67 = 1;
  }
  v17 = (SetLevelUpData_o *)sub_1C2D6DC(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v17, 0);
  p_lvUpData = &this->fields.lvUpData;
  this->fields.lvUpData = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.lvUpData, (int32_t)v17, v19, v20);
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_7;
  lvUpData->fields.targetName = skillName;
  p_targetName = (CGThumbnailListItem_o *)&lvUpData->fields.targetName;
  *(_DWORD *)&p_targetName[-1].fields._HaveDifferenceCG_k__BackingField = idx;
  p_targetName[-1].fields._Id_k__BackingField = currentSkillId;
  p_targetName[-1].fields._Priority_k__BackingField = currentSkillId;
  sub_1C2D434(p_targetName, (int32_t)skillName, v22, v23);
  lvUpData = *p_lvUpData;
  if ( !*p_lvUpData
    || (lvUpData->fields.combineItemIds = combineItemIds,
        p_combineItemIds = (CGThumbnailListItem_o *)&lvUpData->fields.combineItemIds,
        LODWORD(p_combineItemIds[-1].fields.viewObject) = currentSkillLv,
        HIDWORD(p_combineItemIds[-1].fields.viewObject) = currentSkillLv + 1,
        LODWORD(p_combineItemIds[-1].fields.sortValue2) = currentSkillNum,
        sub_1C2D434(p_combineItemIds, (int32_t)combineItemIds, v26, v27),
        (lvUpData = *p_lvUpData) == 0) )
  {
LABEL_7:
    sub_1C2D6EC(lvUpData, v21);
  }
  lvUpData->fields.targetDetail = skillDetail;
  sub_1C2D434((CGThumbnailListItem_o *)&lvUpData->fields.targetDetail, (int32_t)skillDetail, v29, v30);
}


void AppendSkillCombineControl__SetSkillNeedQpData(
        AppendSkillCombineControl_o *this,
        int32_t qp,
        const MethodInfo *method)
{
  struct SetLevelUpData_o *lvUpData; // x8

  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    sub_1C2D6EC(this, qp);
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
  __int64 v9; // x2
  struct SetLevelUpData_o *lvUpData; // x8
  struct UserServantEntity_o *baseUserServantEntity; // x8
  UserSvtCoinMaster_o *v12; // x20
  int64_t userId; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  struct SetLevelUpData_o *v16; // x9
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v6 = this;
  if ( (byte_4C2AF68 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    this = (AppendSkillCombineControl_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2AF68 = 1;
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
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v7 >= LODWORD(needItemIds->max_length) )
        break;
      if ( !this )
        goto LABEL_27;
      this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              needItemIds->m_Items[v7],
                                              (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    sub_1C2D6F4(this, needItemIds, v9);
  }
LABEL_17:
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  baseUserServantEntity = v6->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_27;
  v12 = (UserSvtCoinMaster_o *)this;
  userId = v6->fields.userId;
  v15 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v18, 0);
  if ( !v12 )
    goto LABEL_27;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v12, &entity, userId, (int32_t)this, 0);
  if ( !entity )
    return;
  v16 = v6->fields.lvUpData;
  if ( !v16 )
LABEL_27:
    sub_1C2D6EC(this, needItemIds);
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
  UILabel_o *v9; // x19
  __int64 *v10; // x8
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2AF6D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2001/*"APPEND_SKILL_LVMAX_MSG"*/);
    sub_1C2D490(&StringLiteral_2002/*"APPEND_SKILL_LVUP_MSG"*/);
    sub_1C2D490(&StringLiteral_2006/*"APPEND_SKILL_OPEN_MSG"*/);
    sub_1C2D490(&StringLiteral_1974/*"APPEND_SKILL_COMBINE_INFO"*/);
    byte_4C2AF6D = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    this->fields.lastSelectSvtUniqueId = svtid;
    if ( !detailInfoLb
      || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      detailInfoLb,
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
    {
LABEL_21:
      sub_1C2D6EC(detailInfoLb, *(_QWORD *)&state);
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
        v10 = &StringLiteral_1974/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_19;
      case 1:
        v9 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_2006/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_19;
      case 2:
        v9 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_2002/*"APPEND_SKILL_LVUP_MSG"*/;
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
        v10 = &StringLiteral_2001/*"APPEND_SKILL_LVMAX_MSG"*/;
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
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  AppendSkillCombineControl_o *v47; // x29
  Il2CppObject *v48; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v50; // x25
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  const MethodInfo *v55; // x3
  bool v56; // w0
  int64_t v57; // x8
  int64_t v58; // x9
  struct SetLevelUpData_o *lvUpData; // x8
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // [xsp+0h] [xbp-80h]
  System_String_o *v62; // [xsp+8h] [xbp-78h]
  System_String_o *v63; // [xsp+8h] [xbp-78h]
  int64_t userQp; // [xsp+10h] [xbp-70h] BYREF
  int32_t qp; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C2AF65 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C2D490(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_9230/*"NEED_QP"*/);
    sub_1C2D490(&StringLiteral_17580/*"btn_txt_open2"*/);
    sub_1C2D490(&StringLiteral_17664/*"buttontxt_synthesis"*/);
    sub_1C2D490(&StringLiteral_12185/*"SHORT_ITEM_INFO_MSG"*/);
    sub_1C2D490(&StringLiteral_12186/*"SHORT_QP_INFO_MSG"*/);
    sub_1C2D490(&StringLiteral_1975/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    this = (AppendSkillCombineControl_o *)sub_1C2D490(&StringLiteral_17661/*"buttontxt_notsynthesis"*/);
    byte_4C2AF65 = 1;
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
    sub_1C2D6F4(this, *(_QWORD *)&idx, method);
  v9 = svtUseSkillIdList->m_Items[idx];
  v10 = svtSkillLvList->m_Items[idx];
  v11 = svtSkillNumsList->m_Items[idx];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v9,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
                                          (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17580/*"btn_txt_open2"*/, 0);
    this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_19;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._5_OnClickHelp.method)(
      this,
      this->klass[1].vtable._6_GetTutorialOpenType.methodPtr);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v62 = v21;
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_19;
    v24 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v26 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v66.fields.currentCryptoKey = v26;
    *(_QWORD *)&v66.fields.fakeValue = v25;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v66, 0);
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
      v61);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v4,
      (System_Int32_array *)v28->fields.m_CancellationTokenSource,
      (System_Int32_array *)v28->fields.combineRootComponent,
      v34);
    if ( v32 )
    {
      v21 = v62;
      v35 = 1;
      v36 = 1;
      goto LABEL_76;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_1975/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0);
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17661/*"buttontxt_notsynthesis"*/, 0);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17664/*"buttontxt_synthesis"*/, 0);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._5_OnClickHelp.method)(
    this,
    this->klass[1].vtable._6_GetTutorialOpenType.methodPtr);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v63 = v21;
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v37 = v4->fields.baseUserServantEntity;
  if ( !v37 )
    goto LABEL_19;
  v38 = (CombineAppendPassiveSkillMaster_o *)this;
  v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v40;
  *(_QWORD *)&v67.fields.fakeValue = v39;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v67, 0);
  if ( !v38 )
    goto LABEL_19;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v38, (int32_t)this, v11, v10, 0);
  spendQpLabel = v4->fields.spendQpLabel;
  v43 = EntityWithTryNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9230/*"NEED_QP"*/, 0);
  if ( !v43 )
    goto LABEL_19;
  v47 = this;
  qp = v43->fields.qp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v44, v45, v46);
  this = (AppendSkillCombineControl_o *)System_String__Format((System_String_o *)v47, v48, 0);
  if ( !spendQpLabel )
    goto LABEL_19;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0);
  haveQpLabel = v4->fields.haveQpLabel;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_9230/*"NEED_QP"*/, 0);
  userQp = v4->fields.userQp;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &userQp, v51, v52, v53);
  this = (AppendSkillCombineControl_o *)System_String__Format(v50, v54, 0);
  v21 = v63;
  if ( !haveQpLabel )
    goto LABEL_19;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0);
  v4->fields._IsExeCombine_k__BackingField = 1;
  v56 = AppendSkillCombineControl__SetNeedItemList(v4, v43->fields.itemIds, v43->fields.itemNums, v55);
  v57 = v4->fields.userQp;
  v58 = v43->fields.qp;
  v36 = v56;
  v35 = v57 >= v58;
  if ( v57 < v58 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12186/*"SHORT_QP_INFO_MSG"*/, 0);
  }
  if ( (v36 & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12185/*"SHORT_ITEM_INFO_MSG"*/, 0);
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
    v61);
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_19;
  lvUpData->fields.spendQp = v43->fields.qp;
  lvUpData->fields.haveQp = v4->fields.userQp;
LABEL_76:
  this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
  if ( !this )
    goto LABEL_19;
  v69.fields.r = 1.0;
  v69.fields.g = 1.0;
  v69.fields.b = 1.0;
  v69.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v69, 0);
  if ( (v35 & (unsigned __int8)v36 & 1) == 0 && v4->fields.nowStatus != 3 )
  {
    if ( !v35 )
    {
      this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
      if ( !this )
        goto LABEL_19;
      v70.fields.r = 1.0;
      v70.fields.g = 0.0;
      v70.fields.b = 0.0;
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
    sub_1C2D6EC(this, *(_QWORD *)&idx);
  }
LABEL_84:
  this = (AppendSkillCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_19;
  this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          idx,
                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_19;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
    (ServantSkillInfoIconComponent_o *)this,
    v10,
    v35 & v36,
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
  if ( (byte_4C2AF69 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2AF69 = 1;
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
    sub_1C2D6F4(this, *(_QWORD *)&idx, method);
  v9 = svtSkillLvList->m_Items[idx];
  v10 = svtSkillNumsList->m_Items[idx];
  CombineMenuControl__ClearCombineItemInfo((CombineMenuControl_o *)v4, 0);
  nowStatus = v4->fields.nowStatus;
  if ( nowStatus != 2 )
  {
    if ( nowStatus != 1 )
      goto LABEL_42;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
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
      this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v32, 0);
      if ( v13 )
      {
        this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v13, (int32_t)this, v10, 0);
        if ( this )
        {
          m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
          v17 = this;
          if ( m_CancellationTokenSource )
          {
            v18 = 8;
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
                  0);
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
    sub_1C2D6EC(this, *(_QWORD *)&idx);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
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
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v33, 0);
  if ( !v23 )
    goto LABEL_41;
  this = (AppendSkillCombineControl_o *)CombineAppendPassiveSkillMaster__GetEntityWithTryNum(
                                          v23,
                                          (int32_t)this,
                                          v10,
                                          v9,
                                          0);
  if ( !this )
    goto LABEL_41;
  v26 = this->fields.combineRootComponent;
  v27 = this;
  if ( !v26 )
    goto LABEL_41;
  v28 = 8;
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
        0);
      v26 = v27->fields.combineRootComponent;
      ++v28;
      if ( v26 )
        continue;
    }
    goto LABEL_41;
  }
LABEL_42:
  CombineMenuControl__UpdateItemLinkListWindowButton((CombineMenuControl_o *)v4, 0);
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

  if ( (byte_4C2AF70 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2003/*"APPEND_SKILL_LVUP_TITLE"*/);
    byte_4C2AF70 = 1;
  }
  if ( decide )
  {
    exeCombineDlg = this->fields.exeCombineDlg;
    lvUpData = this->fields.lvUpData;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2003/*"APPEND_SKILL_LVUP_TITLE"*/, 0);
    if ( !exeCombineDlg )
      sub_1C2D6EC(v7, v8);
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