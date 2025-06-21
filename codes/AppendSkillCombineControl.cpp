void __fastcall AppendSkillCombineControl___ctor(AppendSkillCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B20167 & 1) == 0 )
  {
    sub_1BCAFF8(&CombineMenuControl_TypeInfo, method);
    byte_4B20167 = 1;
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
  __int64 v6; // x2
  __int64 v7; // x19
  __int64 v8; // x8
  bool v9; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x23
  unsigned __int64 v11; // x21
  __int64 v12; // x27
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B20162 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, resData);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    this = (AppendSkillCombineControl_o *)sub_1BCAFF8(
                                            &Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__,
                                            v5);
    byte_4B20162 = 1;
  }
  entity = 0LL;
  if ( !resData
    || (this = (AppendSkillCombineControl_o *)UserServantEntity__getAppendSkillInfo(resData, 0LL)) == 0LL
    || (v7 = *(_QWORD *)&this->fields.m_CachedPtr) == 0 )
  {
LABEL_22:
    sub_1BCB254(this, resData);
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
        sub_1BCB25C(this, resData, v6);
      if ( *(int *)(v12 + 4 * v11) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( v11 >= *(unsigned int *)(v7 + 24) )
          goto LABEL_21;
        if ( !this )
          goto LABEL_22;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                &entity,
                                                *(_DWORD *)(v12 + 4 * v11),
                                                (const MethodInfo_32C7E4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
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
  __int64 v11; // x1
  int v12; // w21
  int32_t v13; // w20
  int v14; // w21
  int32_t v15; // w20

  if ( (byte_4B20159 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&string_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_1968/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, v8);
    byte_4B20159 = 1;
  }
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_1968/*"APPEND_SKILL_COMBINE_PRESELECT_BASE_INFO"*/, 0LL);
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
                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !gameObject )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)gameObject, 0LL);
      if ( v12 == ++v13 )
        goto LABEL_17;
      gameObject = this->fields.skillInfoList;
    }
    while ( gameObject );
LABEL_23:
    sub_1BCB254(gameObject, v11);
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
                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
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
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v11; // x1
  int64_t klass; // x8
  UISprite_o *titleImg; // x20
  UnityEngine_Object_o *charaGraph; // x20
  CGThumbnailListItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B20158 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_20463/*"img_txt_extraskill_item"*/, v4);
    sub_1BCAFF8(&StringLiteral_17523/*"buttontxt_synthesis"*/, v5);
    sub_1BCAFF8(&StringLiteral_20462/*"img_txt_extraskill"*/, v6);
    byte_4B20158 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 70, 0LL, 0, 0, 0, 0, 0LL);
  this->fields.nowStatus = 0;
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, v7);
  AppendSkillCombineControl__InitDispCombineInfo(this, v8);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  AppendSkillCombineControl__SetExeBtnState(this, v11);
  helpBtn = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_21;
  klass = (int64_t)helpBtn[4].klass;
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  this->fields.userQp = klass;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_atlas((UISprite_o *)helpBtn, this->fields.baseAtlas, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17523/*"buttontxt_synthesis"*/, 0LL);
  titleImg = this->fields.titleImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_20462/*"img_txt_extraskill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20463/*"img_txt_extraskill_item"*/, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_21;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.typeMetadataHandle)(
    helpBtn,
    helpBtn->klass[2]._1.interopData);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.titleImg;
  if ( !helpBtn )
    goto LABEL_21;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.typeMetadataHandle)(
    helpBtn,
    helpBtn->klass[2]._1.interopData);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.itemTitleImg;
  if ( !helpBtn )
    goto LABEL_21;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.typeMetadataHandle)(
    helpBtn,
    helpBtn->klass[2]._1.interopData);
  helpBtn = this->fields.combineQpInfo;
  if ( !helpBtn )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (CGThumbnailListItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1BCAF9C(p_charaGraph, 0, v17, v18);
      return;
    }
LABEL_21:
    sub_1BCB254(helpBtn, v9);
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
  __int64 v37; // x2
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  int64_t v43; // x1
  Il2CppClass **v44; // x0
  __int64 v45; // x8
  int v46; // w9
  unsigned int v47; // w10
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  int64_t v53; // x1
  Il2CppClass **v54; // x0
  int32_t v55; // w8
  ServantCheckWarningDialog_o *appendSkillWarningDialog; // x21
  ServantCheckWarningDialog_ClickDelegate_o *v57; // x22
  struct SetRarityDialogControl_o *exeCombineDlg; // x20
  struct SetLevelUpData_o *lvUpData; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+40h] [xbp-80h]
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4B20164 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AppendSkillCombineControl__OnClickExeCombine_b__49_0__, method);
    sub_1BCAFF8(&ServantCheckWarningDialog_ClickDelegate_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_1995/*"APPEND_SKILL_LVUP_TITLE"*/, v14);
    sub_1BCAFF8(&StringLiteral_2000/*"APPEND_SKILL_OPEN_TITLE"*/, v15);
    byte_4B20164 = 1;
  }
  userServantList = 0LL;
  nowStatus = this->fields.nowStatus;
  if ( nowStatus == 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v26 = (UserServantMaster_o *)Master_object;
      v28 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v64.fields.currentCryptoKey = v28;
      *(_QWORD *)&v64.fields.fakeValue = v27;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v64, 0LL);
      if ( v26 )
      {
        UserServantMaster__TryGetEntityListBySvtId(v26, &userServantList, Master_object, 1, 0LL);
        v29 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserServantEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v29,
          (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                                       (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !Master_object )
              goto LABEL_60;
            Master_object = (int64_t)UserServantEntity__getAppendSkillInfo((UserServantEntity_o *)Master_object, 0LL);
            if ( !userServantList )
              goto LABEL_60;
            v32 = Master_object;
            Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)userServantList,
                                       v31,
                                       (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
            if ( !Master_object )
              goto LABEL_60;
            v33 = *(_OWORD *)(Master_object + 32);
            *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(Master_object + 16);
            *(_OWORD *)&v62.fields.fakeValue = v33;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v61 = v62;
            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v61, 0LL);
            v34 = this->fields.baseUserServantEntity;
            if ( !v34 )
              goto LABEL_60;
            v35 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
            v36 = Master_object;
            *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v60.fields.fakeValue = v35;
            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v60, 0LL);
            if ( v36 == Master_object )
            {
              Master_object = (int64_t)userServantList;
              if ( !userServantList )
                goto LABEL_60;
              Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)userServantList,
                                         v31,
                                         (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
              if ( !v29 )
                goto LABEL_60;
              items = v29->fields._items;
              v41 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v29->fields._version;
              if ( !items )
                goto LABEL_60;
              size = v29->fields._size;
              v43 = Master_object;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v29,
                  (Il2CppObject *)Master_object,
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
              }
              else
              {
                v44 = &items->obj.klass + size;
                v29->fields._size = size + 1;
                v44[4] = (Il2CppClass *)v43;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v44 + 4), v43, v38, v39);
              }
            }
            else
            {
              if ( !v32 )
                goto LABEL_60;
              v45 = *(_QWORD *)(v32 + 24);
              if ( !v45 )
                goto LABEL_60;
              v46 = *(_DWORD *)(v45 + 24);
              if ( v46 >= 1 )
              {
                v47 = 0;
                while ( 1 )
                {
                  if ( v47 >= v46 )
                    sub_1BCB25C(Master_object, v20, v37);
                  if ( *(int *)(v45 + 4LL * (int)v47 + 32) >= 2 )
                    break;
                  if ( (int)++v47 >= v46 )
                    goto LABEL_46;
                }
                Master_object = (int64_t)userServantList;
                if ( !userServantList )
                  goto LABEL_60;
                Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)userServantList,
                                           v31,
                                           (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
                if ( !v29 )
                  goto LABEL_60;
                v50 = v29->fields._items;
                v51 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v29->fields._version;
                if ( !v50 )
                  goto LABEL_60;
                v52 = v29->fields._size;
                v53 = Master_object;
                if ( (unsigned int)v52 >= v50->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v29,
                    (Il2CppObject *)Master_object,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                }
                else
                {
                  v54 = &v50->obj.klass + v52;
                  v29->fields._size = v52 + 1;
                  v54[4] = (Il2CppClass *)v53;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v54 + 4), v53, v48, v49);
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
            v55 = v29->fields._size;
            if ( v55 )
              v55 = !this->fields._IsSkillCombined_k__BackingField;
            if ( (v30 & v55 & 1) != 0 )
            {
              appendSkillWarningDialog = this->fields.appendSkillWarningDialog;
              v57 = (ServantCheckWarningDialog_ClickDelegate_o *)sub_1BCB244(ServantCheckWarningDialog_ClickDelegate_TypeInfo);
              ServantCheckWarningDialog_ClickDelegate___ctor(
                v57,
                (Il2CppObject *)this,
                Method_AppendSkillCombineControl__OnClickExeCombine_b__49_0__,
                0LL);
              if ( appendSkillWarningDialog )
              {
                ServantCheckWarningDialog__OpenAppendSkillWarning(
                  appendSkillWarningDialog,
                  (System_Collections_Generic_List_UserServantEntity__o *)v29,
                  v57,
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
              Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_1995/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
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
    sub_1BCB254(Master_object, v20);
  }
  if ( nowStatus != 1 )
    return;
  v17 = this->fields.exeCombineDlg;
  v18 = this->fields.lvUpData;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2000/*"APPEND_SKILL_OPEN_TITLE"*/, 0LL);
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
  if ( (byte_4B20166 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    this = (AppendSkillCombineControl_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    byte_4B20166 = 1;
  }
  skillData = v6->fields.skillData;
  if ( !skillData )
    goto LABEL_21;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_21;
  if ( svtSkillLvList->max_length <= idx )
    sub_1BCB25C(this, *(_QWORD *)&idx, callback);
  if ( svtSkillLvList->m_Items[idx + 1] == 1 )
  {
    effect = (Il2CppObject *)v6->fields.effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (AppendSkillCombineControl_o *)UnityEngine_Object__Instantiate_object_(
                                            effect,
                                            (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      this = (AppendSkillCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)this,
                                              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
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
                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
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
                if ( !byte_4B16191 )
                {
                  this = (AppendSkillCombineControl_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&idx);
                  byte_4B16191 = 1;
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
    sub_1BCB254(this, *(_QWORD *)&idx);
  }
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall AppendSkillCombineControl__SetBaseSvtCardImg(
        AppendSkillCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  struct UICharaGraphTexture_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(AppendSkillCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                         this,
                                         this->fields.charaGraph,
                                         userSvtEnt,
                                         this->klass[1]._1.image);
  this->fields.charaGraph = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_charaGraph, (int32_t)v5, v6, v7);
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

  if ( (byte_4B2015A & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtEnt);
    byte_4B2015A = 1;
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
    if ( lastSelectSvtUniqueId != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v23, 0LL) )
      this->fields._IsSkillCombined_k__BackingField = 0;
    v9 = *(_OWORD *)&userSvtEnt->fields.userId.fields.fakeValue;
    *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v24.fields.fakeValue = v9;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v22 = v24;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v22, 0LL);
    this->fields.baseUserServantEntity = userSvtEnt;
    this->fields.userId = v10;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)userSvtEnt, v11, v12);
    v13 = *(_OWORD *)&userSvtEnt->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userSvtEnt->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v21, 0LL);
    preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
    this->fields.lastSelectSvtUniqueId = v15;
    this->fields.currentIdx = idx;
    if ( !preSelectBaseLb
      || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL),
          (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
    {
      sub_1BCB254(preSelectBaseLb, v14);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillData, (int32_t)AppendSkillInfo, v18, v19);
    AppendSkillCombineControl__SetSkillIconInfo(this, this->fields.skillData, v20);
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

  if ( (byte_4B20163 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4B20163 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1BCB254(combineBtnBg, method);
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
  __int64 v11; // x2
  struct System_Int32_array *useSkillIdList; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_4B2015C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    this = (AppendSkillCombineControl_o *)sub_1BCAFF8(&StringLiteral_8738/*"MSG_SKILL_SELECT"*/, v7);
    byte_4B2015C = 1;
  }
  if ( v4->fields.baseUserServantEntity )
  {
    if ( !v4->fields.targetList )
      goto LABEL_15;
    selectSkillHelpLb = v4->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8738/*"MSG_SKILL_SELECT"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, (System_String_o *)this, 0LL),
          (this = (AppendSkillCombineControl_o *)v4->fields.targetList) == 0LL) )
    {
LABEL_15:
      sub_1BCB254(this, *(_QWORD *)&idx);
    }
    v10 = 0;
    while ( v10 < SLODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v10,
                                              (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      useSkillIdList = v4->fields.useSkillIdList;
      if ( useSkillIdList )
      {
        if ( useSkillIdList->max_length <= idx )
          sub_1BCB25C(this, *(_QWORD *)&idx, v11);
        if ( this )
        {
          ServantSkillInfoIconComponent__SetDispSelectMskImg(
            (ServantSkillInfoIconComponent_o *)this,
            useSkillIdList->m_Items[idx + 1] == LODWORD(this->fields.preSelectBaseLb),
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
  __int64 v10; // x2
  AppendSkillCombineControl_o *v11; // x24

  v6 = this;
  if ( (byte_4B2015E & 1) == 0 )
  {
    this = (AppendSkillCombineControl_o *)sub_1BCAFF8(
                                            &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                            needItemIds);
    byte_4B2015E = 1;
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
                                              (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
      if ( v7 >= needItemIds->max_length )
        goto LABEL_16;
      if ( !needItemNums )
        break;
      if ( v7 >= needItemNums->max_length )
LABEL_16:
        sub_1BCB25C(this, needItemIds, v10);
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
    sub_1BCB254(this, needItemIds);
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
  const MethodInfo *v3; // x3
  SvtUseSkillData_o *v4; // x26
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
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v18; // x19
  System_Collections_Generic_List_object__o *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  unsigned __int64 v23; // x23
  struct System_Int32_array *v24; // x8
  int32_t v25; // w24
  int32_t type; // w25
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v29; // x27
  int32_t v30; // w28
  SvtUseSkillData_o *v31; // x22
  Il2CppObject *Item; // x26
  ServantSkillInfoIconComponent_ClickDelegate_o *v33; // x29
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v39; // x8
  AppendSkillCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v4 = skillData;
  v5 = this;
  if ( (byte_4B2015B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AppendSkillCombineControl_OnClickInfo__, skillData);
    sub_1BCAFF8(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v13);
    this = (AppendSkillCombineControl_o *)sub_1BCAFF8(&StringLiteral_856/*"-"*/, v14);
    byte_4B2015B = 1;
  }
  if ( !v4 )
    goto LABEL_28;
  svtUseSkillIdList = v4->fields.svtUseSkillIdList;
  p_useSkillIdList = &v5->fields.useSkillIdList;
  v5->fields.useSkillIdList = svtUseSkillIdList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v5->fields.useSkillIdList, (int32_t)svtUseSkillIdList, (int32_t)method, v3);
  useSkillIdList = v5->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_28;
  v18 = *(_QWORD *)&useSkillIdList->max_length;
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v5->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v19;
  p_targetList = (AppendSkillCombineControl_o **)&v5->fields.targetList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v5->fields.targetList, (int32_t)v19, v20, v21);
  if ( (int)v18 >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      v24 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v23 >= v24->max_length )
        goto LABEL_29;
      v25 = v24->m_Items[v23 + 1];
      if ( v25 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                v25,
                                                (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          type = this->fields.type;
          p_m_CancellationTokenSource = &this->fields.m_CancellationTokenSource;
        }
        else
        {
          p_m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o **)&StringLiteral_856/*"-"*/;
          type = 10;
        }
        svtSkillLvList = v4->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v23 >= svtSkillLvList->max_length )
LABEL_29:
          sub_1BCB25C(this, skillData, v22);
        this = (AppendSkillCombineControl_o *)v5->fields.skillInfoList;
        if ( !this )
          break;
        v29 = (System_String_o *)*p_m_CancellationTokenSource;
        v30 = svtSkillLvList->m_Items[v23 + 1];
        v31 = v4;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v23,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v33 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1BCB244(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v33,
          (Il2CppObject *)v5,
          Method_AppendSkillCombineControl_OnClickInfo__,
          0LL);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_47940808(
          (ServantSkillInfoIconComponent_o *)Item,
          v23,
          v29,
          v25,
          v30,
          type,
          v33,
          1,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v36 = *(_QWORD *)&this->fields.m_CachedPtr;
        v37 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v36 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = v36 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v39 + 32) = Item;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 32), (int32_t)Item, v34, v35);
        }
        v4 = v31;
      }
      if ( (unsigned int)v18 == ++v23 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1BCB254(this, skillData);
  }
LABEL_27:
  AppendSkillCombineControl__SetNeedItemInfo(v5, v5->fields.currentIdx, v22);
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

  if ( (byte_4B2015F & 1) == 0 )
  {
    sub_1BCAFF8(&SetLevelUpData_TypeInfo, *(_QWORD *)&idx);
    byte_4B2015F = 1;
  }
  v17 = (SetLevelUpData_o *)sub_1BCB244(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor(v17, 0LL);
  p_lvUpData = &this->fields.lvUpData;
  this->fields.lvUpData = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.lvUpData, (int32_t)v17, v19, v20);
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_7;
  lvUpData->fields.targetName = skillName;
  p_targetName = (CGThumbnailListItem_o *)&lvUpData->fields.targetName;
  *(_DWORD *)&p_targetName[-1].fields._HaveDifferenceCG_k__BackingField = idx;
  p_targetName[-1].fields._Id_k__BackingField = currentSkillId;
  p_targetName[-1].fields._Priority_k__BackingField = currentSkillId;
  sub_1BCAF9C(p_targetName, (int32_t)skillName, v22, v23);
  lvUpData = *p_lvUpData;
  if ( !*p_lvUpData
    || (lvUpData->fields.combineItemIds = combineItemIds,
        p_combineItemIds = (CGThumbnailListItem_o *)&lvUpData->fields.combineItemIds,
        LODWORD(p_combineItemIds[-1].fields.viewObject) = currentSkillLv,
        HIDWORD(p_combineItemIds[-1].fields.viewObject) = currentSkillLv + 1,
        LODWORD(p_combineItemIds[-1].fields.sortValue1B) = currentSkillNum,
        sub_1BCAF9C(p_combineItemIds, (int32_t)combineItemIds, v26, v27),
        (lvUpData = *p_lvUpData) == 0LL) )
  {
LABEL_7:
    sub_1BCB254(lvUpData, v21);
  }
  lvUpData->fields.targetDetail = skillDetail;
  sub_1BCAF9C((CGThumbnailListItem_o *)&lvUpData->fields.targetDetail, (int32_t)skillDetail, v29, v30);
}


void __fastcall AppendSkillCombineControl__SetSkillNeedQpData(
        AppendSkillCombineControl_o *this,
        int32_t qp,
        const MethodInfo *method)
{
  struct SetLevelUpData_o *lvUpData; // x8

  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    sub_1BCB254(this, qp);
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
  __int64 v13; // x2
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
  if ( (byte_4B20160 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, needItemIds);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    this = (AppendSkillCombineControl_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4B20160 = 1;
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
      this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( v11 >= needItemIds->max_length )
        break;
      if ( !this )
        goto LABEL_27;
      this = (AppendSkillCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              needItemIds->m_Items[v11 + 1],
                                              (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
    sub_1BCB25C(this, needItemIds, v13);
  }
LABEL_17:
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v22, 0LL);
  if ( !v16 )
    goto LABEL_27;
  this = (AppendSkillCombineControl_o *)UserSvtCoinMaster__TryGetEntity(v16, &entity, userId, (int32_t)this, 0LL);
  if ( !entity )
    return;
  v20 = v6->fields.lvUpData;
  if ( !v20 )
LABEL_27:
    sub_1BCB254(this, needItemIds);
  v20->fields.haveSvtCoin = entity->fields.num;
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

  if ( (byte_4B20165 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_1993/*"APPEND_SKILL_LVMAX_MSG"*/, v8);
    sub_1BCAFF8(&StringLiteral_1994/*"APPEND_SKILL_LVUP_MSG"*/, v9);
    sub_1BCAFF8(&StringLiteral_1998/*"APPEND_SKILL_OPEN_MSG"*/, v10);
    sub_1BCAFF8(&StringLiteral_1966/*"APPEND_SKILL_COMBINE_INFO"*/, v11);
    byte_4B20165 = 1;
  }
  if ( !state )
  {
    detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
    this->fields.lastSelectSvtUniqueId = svtid;
    if ( !detailInfoLb
      || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      detailInfoLb,
                                                      (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
    {
LABEL_21:
      sub_1BCB254(detailInfoLb, *(_QWORD *)&state);
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
        v15 = &StringLiteral_1966/*"APPEND_SKILL_COMBINE_INFO"*/;
        goto LABEL_19;
      case 1:
        v14 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_1998/*"APPEND_SKILL_OPEN_MSG"*/;
        goto LABEL_19;
      case 2:
        v14 = this->fields.detailInfoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_1994/*"APPEND_SKILL_LVUP_MSG"*/;
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
        v15 = &StringLiteral_1993/*"APPEND_SKILL_LVMAX_MSG"*/;
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
  __int64 v25; // x1
  struct SvtUseSkillData_o *skillData; // x10
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  struct System_Int32_array *svtSkillNumsList; // x10
  int32_t v30; // w24
  int32_t v31; // w21
  int32_t v32; // w23
  Il2CppObject *Entity; // x0
  SkillEntity_o *v34; // x26
  int32_t maxLv; // w27
  int32_t v36; // w22
  UIWidget_o *v37; // x22
  const MethodInfo *v38; // x3
  int v39; // w8
  int64_t lastSelectSvtUniqueId; // x2
  int32_t nowStatus; // w8
  System_String_o *v42; // x29
  UISprite_o *combineTxtImg; // x27
  struct UserServantEntity_o *baseUserServantEntity; // x8
  SvtAppendPassiveSkillUnlockMaster_o *v45; // x27
  __int64 v46; // x28
  __int64 v47; // x29
  const MethodInfo *v48; // x3
  AppendSkillCombineControl_o *v49; // x27
  bool appended; // w0
  System_String_o *name; // x29
  System_Int32_array *m_CancellationTokenSource; // x25
  bool v53; // w28
  System_String_o *EffectExplanation; // x0
  const MethodInfo *v55; // x3
  bool v56; // w25
  char v57; // w28
  struct UserServantEntity_o *v58; // x8
  CombineAppendPassiveSkillMaster_o *v59; // x27
  __int64 v60; // x28
  __int64 v61; // x29
  CombineAppendPassiveSkillEntity_o *EntityWithTryNum; // x0
  UILabel_o *spendQpLabel; // x28
  CombineAppendPassiveSkillEntity_o *v64; // x27
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  AppendSkillCombineControl_o *v68; // x29
  Il2CppObject *v69; // x0
  UILabel_o *haveQpLabel; // x28
  System_String_o *v71; // x25
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x0
  const MethodInfo *v76; // x3
  bool v77; // w0
  int64_t v78; // x8
  int64_t v79; // x9
  struct SetLevelUpData_o *lvUpData; // x8
  const MethodInfo *v81; // x1
  const MethodInfo *v82; // [xsp+0h] [xbp-80h]
  System_String_o *v83; // [xsp+8h] [xbp-78h]
  System_String_o *v84; // [xsp+8h] [xbp-78h]
  int64_t userQp; // [xsp+10h] [xbp-70h] BYREF
  int32_t qp; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4B2015D & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v8);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&int_TypeInfo, v11);
    sub_1BCAFF8(&long_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v15);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v16);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_9166/*"NEED_QP"*/, v18);
    sub_1BCAFF8(&StringLiteral_17441/*"btn_txt_open2"*/, v19);
    sub_1BCAFF8(&StringLiteral_17523/*"buttontxt_synthesis"*/, v20);
    sub_1BCAFF8(&StringLiteral_12087/*"SHORT_ITEM_INFO_MSG"*/, v21);
    sub_1BCAFF8(&StringLiteral_12088/*"SHORT_QP_INFO_MSG"*/, v22);
    sub_1BCAFF8(&StringLiteral_1967/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, v23);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v24);
    this = (AppendSkillCombineControl_o *)sub_1BCAFF8(&StringLiteral_17520/*"buttontxt_notsynthesis"*/, v25);
    byte_4B2015D = 1;
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
    sub_1BCB25C(this, *(_QWORD *)&idx, method);
  v30 = svtUseSkillIdList->m_Items[idx + 1];
  v31 = svtSkillLvList->m_Items[idx + 1];
  v32 = svtSkillNumsList->m_Items[idx + 1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v30,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v34 = (SkillEntity_o *)Entity;
  this = (AppendSkillCombineControl_o *)v4->fields.itemInfoList;
  if ( !this )
    goto LABEL_19;
  maxLv = v34->fields.maxLv;
  v36 = 0;
  while ( v36 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v36,
                                            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    if ( this )
    {
      LimitCntUpItemComponent__enableDispItemInfo((LimitCntUpItemComponent_o *)this, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.itemInfoList;
      ++v36;
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
                                          (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_19;
  v89.fields.r = 0.0;
  v89.fields.a = 1.0;
  v89.fields.g = 0.87891;
  v89.fields.b = 0.98828;
  v37 = (UIWidget_o *)this;
  UIWidget__set_color((UIWidget_o *)this, v89, 0LL);
  if ( v31 >= maxLv )
    v39 = 3;
  else
    v39 = v31 ? 2 : 1;
  lastSelectSvtUniqueId = v4->fields.lastSelectSvtUniqueId;
  v4->fields.nowStatus = v39;
  AppendSkillCombineControl__SetStateInfoMsg(v4, 0, lastSelectSvtUniqueId, v38);
  this = (AppendSkillCombineControl_o *)v4->fields.combineQpInfo;
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  nowStatus = v4->fields.nowStatus;
  v42 = (System_String_o *)StringLiteral_1/*""*/;
  if ( nowStatus == 1 )
  {
    combineTxtImg = v4->fields.combineTxtImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(combineTxtImg, (System_String_o *)StringLiteral_17441/*"btn_txt_open2"*/, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
    if ( !this )
      goto LABEL_19;
    ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._6_GetTutorialOpenType.method)(
      this,
      this->klass[1].vtable._7_SetCharaGraph.methodPtr);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v83 = v42;
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
    baseUserServantEntity = v4->fields.baseUserServantEntity;
    if ( !baseUserServantEntity )
      goto LABEL_19;
    v45 = (SvtAppendPassiveSkillUnlockMaster_o *)this;
    v47 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
    v46 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v87.fields.currentCryptoKey = v47;
    *(_QWORD *)&v87.fields.fakeValue = v46;
    this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v87, 0LL);
    if ( !v45 )
      goto LABEL_19;
    this = (AppendSkillCombineControl_o *)SvtAppendPassiveSkillUnlockMaster__GetEntity(v45, (int32_t)this, v32, 0LL);
    v4->fields._IsExeCombine_k__BackingField = 1;
    if ( !this )
      goto LABEL_19;
    v49 = this;
    appended = AppendSkillCombineControl__SetNeedItemList(
                 v4,
                 (System_Int32_array *)this->fields.m_CancellationTokenSource,
                 (System_Int32_array *)this->fields.combineRootComponent,
                 v48);
    name = v34->fields.name;
    m_CancellationTokenSource = (System_Int32_array *)v49->fields.m_CancellationTokenSource;
    v53 = appended;
    EffectExplanation = SkillEntity__getEffectExplanation(v34, v31 + 1, 0LL);
    AppendSkillCombineControl__SetSkillLevelUpData(
      v4,
      idx,
      v30,
      v31,
      v32,
      name,
      m_CancellationTokenSource,
      EffectExplanation,
      v82);
    AppendSkillCombineControl__SetSkillOpenNeedData(
      v4,
      (System_Int32_array *)v49->fields.m_CancellationTokenSource,
      (System_Int32_array *)v49->fields.combineRootComponent,
      v55);
    if ( v53 )
    {
      v42 = v83;
      v56 = 1;
      v57 = 1;
      goto LABEL_76;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_1967/*"APPEND_SKILL_COMBINE_ITEM_NOT_ENOUGH"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17520/*"buttontxt_notsynthesis"*/, 0LL);
      this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
      if ( !this )
        goto LABEL_19;
      ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._6_GetTutorialOpenType.method)(
        this,
        this->klass[1].vtable._7_SetCharaGraph.methodPtr);
    }
LABEL_75:
    v57 = 0;
    v56 = 1;
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17523/*"buttontxt_synthesis"*/, 0LL);
  this = (AppendSkillCombineControl_o *)v4->fields.combineTxtImg;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(AppendSkillCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._6_GetTutorialOpenType.method)(
    this,
    this->klass[1].vtable._7_SetCharaGraph.methodPtr);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v84 = v42;
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
  v58 = v4->fields.baseUserServantEntity;
  if ( !v58 )
    goto LABEL_19;
  v59 = (CombineAppendPassiveSkillMaster_o *)this;
  v61 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v88.fields.currentCryptoKey = v61;
  *(_QWORD *)&v88.fields.fakeValue = v60;
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v88, 0LL);
  if ( !v59 )
    goto LABEL_19;
  EntityWithTryNum = CombineAppendPassiveSkillMaster__GetEntityWithTryNum(v59, (int32_t)this, v32, v31, 0LL);
  spendQpLabel = v4->fields.spendQpLabel;
  v64 = EntityWithTryNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9166/*"NEED_QP"*/, 0LL);
  if ( !v64 )
    goto LABEL_19;
  v68 = this;
  qp = v64->fields.qp;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &qp, v65, v66, v67);
  this = (AppendSkillCombineControl_o *)System_String__Format((System_String_o *)v68, v69, 0LL);
  if ( !spendQpLabel )
    goto LABEL_19;
  UILabel__set_text(spendQpLabel, (System_String_o *)this, 0LL);
  haveQpLabel = v4->fields.haveQpLabel;
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_9166/*"NEED_QP"*/, 0LL);
  userQp = v4->fields.userQp;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &userQp, v72, v73, v74);
  this = (AppendSkillCombineControl_o *)System_String__Format(v71, v75, 0LL);
  v42 = v84;
  if ( !haveQpLabel )
    goto LABEL_19;
  UILabel__set_text(haveQpLabel, (System_String_o *)this, 0LL);
  v4->fields._IsExeCombine_k__BackingField = 1;
  v77 = AppendSkillCombineControl__SetNeedItemList(v4, v64->fields.itemIds, v64->fields.itemNums, v76);
  v78 = v4->fields.userQp;
  v79 = v64->fields.qp;
  v57 = v77;
  v56 = v78 >= v79;
  if ( v78 < v79 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SHORT_QP_INFO_MSG"*/, 0LL);
  }
  if ( (v57 & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12087/*"SHORT_ITEM_INFO_MSG"*/, 0LL);
  }
  AppendSkillCombineControl__SetSkillLevelUpData(
    v4,
    idx,
    v30,
    v31,
    v32,
    v34->fields.name,
    v64->fields.itemIds,
    (System_String_o *)StringLiteral_1/*""*/,
    v82);
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_19;
  lvUpData->fields.spendQp = v64->fields.qp;
  lvUpData->fields.haveQp = v4->fields.userQp;
LABEL_76:
  this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
  if ( !this )
    goto LABEL_19;
  v90.fields.r = 1.0;
  v90.fields.g = 1.0;
  v90.fields.b = 1.0;
  v90.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v90, 0LL);
  if ( (v56 & (unsigned __int8)v57 & 1) == 0 && v4->fields.nowStatus != 3 )
  {
    if ( !v56 )
    {
      this = (AppendSkillCombineControl_o *)v4->fields.spendQpLabel;
      if ( !this )
        goto LABEL_19;
      v91.fields.r = 1.0;
      v91.fields.g = 0.0;
      v91.fields.b = 0.0;
      v91.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v91, 0LL);
    }
    v92.fields.r = 1.0;
    v92.fields.g = 1.0;
    v92.fields.b = 1.0;
    v92.fields.a = 1.0;
    UIWidget__set_color(v37, v92, 0LL);
    this = (AppendSkillCombineControl_o *)v4->fields.detailInfoLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v42, 0LL);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_84;
    }
LABEL_19:
    sub_1BCB254(this, *(_QWORD *)&idx);
  }
LABEL_84:
  this = (AppendSkillCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_19;
  this = (AppendSkillCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          idx,
                                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_19;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
    (ServantSkillInfoIconComponent_o *)this,
    v31,
    v56 & v57,
    1,
    1,
    0LL);
  AppendSkillCombineControl__SetExeBtnState(v4, v81);
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
  if ( (byte_4B20161 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___, *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    this = (AppendSkillCombineControl_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4B20161 = 1;
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
    sub_1BCB25C(this, *(_QWORD *)&idx, method);
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
    this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SvtAppendPassiveSkillUnlockMaster___);
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
      this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
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
    sub_1BCB254(this, *(_QWORD *)&idx);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CombineAppendPassiveSkillMaster___);
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
  this = (AppendSkillCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v38, 0LL);
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

  if ( (byte_4B20168 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, decide);
    sub_1BCAFF8(&StringLiteral_1995/*"APPEND_SKILL_LVUP_TITLE"*/, v5);
    byte_4B20168 = 1;
  }
  if ( decide )
  {
    exeCombineDlg = this->fields.exeCombineDlg;
    lvUpData = this->fields.lvUpData;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1995/*"APPEND_SKILL_LVUP_TITLE"*/, 0LL);
    if ( !exeCombineDlg )
      sub_1BCB254(v8, v9);
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