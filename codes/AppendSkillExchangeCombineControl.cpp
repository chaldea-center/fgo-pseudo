void __fastcall AppendSkillExchangeCombineControl___ctor(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C0105A & 1) == 0 )
  {
    sub_1C2E12C(&CombineMenuControl_TypeInfo, method);
    byte_4C0105A = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, method);
}


SetLevelUpData_o *__fastcall AppendSkillExchangeCombineControl__GetBaseLvUpData(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  return this->fields.baseLvUpData;
}


SetLevelUpData_o *__fastcall AppendSkillExchangeCombineControl__GetTargetData(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  return this->fields.targetLvUpData;
}


int32_t __fastcall AppendSkillExchangeCombineControl__GetTutorialOpenType(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  return 95;
}


void __fastcall AppendSkillExchangeCombineControl__Init(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v14; // x1
  UISprite_o *charaSprite; // x20
  UILabel_o *detailInfoLb; // x20
  UnityEngine_Object_o *charaGraph; // x20
  PartyOrganizationUtility_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4C01049 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_20881/*"img_txt_append"*/, v5);
    sub_1C2E12C(&StringLiteral_23217/*"rarity5_1"*/, v6);
    sub_1C2E12C(&StringLiteral_20882/*"img_txt_append_exchange"*/, v7);
    sub_1C2E12C(&StringLiteral_17981/*"buttontxt_exchange"*/, v8);
    sub_1C2E12C(&StringLiteral_2093/*"APPEND_SKILL_EXCHANGE_INFO"*/, v9);
    byte_4C01049 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 95, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, v10);
  AppendSkillExchangeCombineControl__InitDispCombineInfo(this, v11);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  *(_QWORD *)&this->fields.currentBaseIdx = -1LL;
  AppendSkillExchangeCombineControl__SetExeBtnState(this, v14);
  charaSprite = this->fields.charaSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCharaGraphaOption(charaSprite, (System_String_o *)StringLiteral_23217/*"rarity5_1"*/, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17981/*"buttontxt_exchange"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.titleImg, (System_String_o *)StringLiteral_20881/*"img_txt_append"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20882/*"img_txt_append_exchange"*/, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_20;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.typeMetadataHandle)(
    helpBtn,
    helpBtn->klass[2]._1.interopData);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.titleImg;
  if ( !helpBtn )
    goto LABEL_20;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.typeMetadataHandle)(
    helpBtn,
    helpBtn->klass[2]._1.interopData);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.itemTitleImg;
  if ( !helpBtn )
    goto LABEL_20;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.typeMetadataHandle)(
    helpBtn,
    helpBtn->klass[2]._1.interopData);
  detailInfoLb = this->fields.detailInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2093/*"APPEND_SKILL_EXCHANGE_INFO"*/, 0LL);
  if ( !detailInfoLb )
    goto LABEL_20;
  UILabel__set_text(detailInfoLb, (System_String_o *)helpBtn, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (PartyOrganizationUtility_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1C2E0D0(p_charaGraph, 0LL, v20, v21, v22, v23, v24, v25);
      return;
    }
LABEL_20:
    sub_1C2E388(helpBtn, v12);
  }
}


void __fastcall AppendSkillExchangeCombineControl__InitDispCombineInfo(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  void *baseSelectInfoLb; // x0
  int v11; // w21
  int32_t v12; // w20

  if ( (byte_4C0104A & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v3);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v4);
    sub_1C2E12C(&string_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_2102/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, v6);
    byte_4C0104A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2102/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, 0LL);
  AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v7, 1, v8);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSelectInfoLb, 1, 0LL);
  baseSelectInfoLb = this->fields.selectSkillHelpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)baseSelectInfoLb, string_TypeInfo->static_fields->Empty, 0LL);
  baseSelectInfoLb = this->fields.skillInfoList;
  if ( !baseSelectInfoLb )
    goto LABEL_13;
  v11 = *((_DWORD *)baseSelectInfoLb + 6);
  if ( v11 >= 1 )
  {
    v12 = 0;
    do
    {
      baseSelectInfoLb = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)baseSelectInfoLb,
                           v12,
                           (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !baseSelectInfoLb )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)baseSelectInfoLb, 0LL);
      if ( v11 == ++v12 )
        return;
      baseSelectInfoLb = this->fields.skillInfoList;
    }
    while ( baseSelectInfoLb );
LABEL_13:
    sub_1C2E388(baseSelectInfoLb, v9);
  }
}


void __fastcall AppendSkillExchangeCombineControl__OnClickExeCombine(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  AppendSkillExchangeDialog_o *appendSkillExchangeDialog; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v10; // x22
  __int64 v11; // x23
  int64_t v12; // x21
  const MethodInfo *v13; // x5
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C01053 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4C01053 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v6);
    byte_4BF81D5 = 1;
  }
  appendSkillExchangeDialog = (AppendSkillExchangeDialog_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    appendSkillExchangeDialog = (AppendSkillExchangeDialog_o *)NetworkManager_TypeInfo;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_20;
  v11 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  v12 = *(_QWORD *)&appendSkillExchangeDialog->fields.appendSkillIconTargetTitleLabel->fields.updateAnchors;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  appendSkillExchangeDialog = (AppendSkillExchangeDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
                                                               v15,
                                                               0LL);
  if ( !Master_object )
    goto LABEL_20;
  appendSkillExchangeDialog = (AppendSkillExchangeDialog_o *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                                                               (UserServantAppendPassiveSkillMaster_o *)Master_object,
                                                               &entity,
                                                               v12,
                                                               (int32_t)appendSkillExchangeDialog,
                                                               0LL);
  if ( ((unsigned __int8)appendSkillExchangeDialog & 1) == 0 )
    return;
  if ( !entity || (appendSkillExchangeDialog = this->fields.appendSkillExchangeDialog) == 0LL )
LABEL_20:
    sub_1C2E388(appendSkillExchangeDialog, v6);
  AppendSkillExchangeDialog__Open(
    appendSkillExchangeDialog,
    this->fields.baseLvUpData,
    this->fields.targetLvUpData,
    entity->fields.exchangeNum,
    this->fields.requestAppendSkillExchange,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillExchangeCombineControl__OnClickInfo(
        AppendSkillExchangeCombineControl_o *this,
        bool isDecide,
        int32_t idx,
        const MethodInfo *method)
{
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
  int64_t v17; // x20
  TweenColor_o *SelectMskImgTweenColor; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int32_t currentBaseIdx; // w22
  int32_t currentTargetIdx; // w23
  __int64 v35; // x8
  Il2CppObject *v36; // x22
  UnityEngine_Object_o *v37; // x21
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  int32_t v40; // w8
  int32_t v41; // w9
  int32_t v42; // w1
  int32_t v43; // w10
  const MethodInfo *v44; // x1
  TweenColor_o *v45; // x19
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x22
  System_Func_object__bool__o *v47; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  Il2CppObject *v50; // x0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *v51; // x22
  Il2CppObject *v52; // x23
  System_Func_object__bool__o *v53; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0

  if ( (byte_4C0104E & 1) == 0 )
  {
    sub_1C2E12C(&Method_AppendSkillExchangeCombineControl_OnClickInfo__, isDecide);
    sub_1C2E12C(&Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___, v9);
    sub_1C2E12C(&System_Func_ServantSkillInfoIconComponent__bool__TypeInfo, v10);
    sub_1C2E12C(&System_Math_TypeInfo, v11);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    sub_1C2E12C(&Method_AppendSkillExchangeCombineControl___c__DisplayClass36_0__OnClickInfo_b__1__, v13);
    sub_1C2E12C(&AppendSkillExchangeCombineControl___c__DisplayClass36_0_TypeInfo, v14);
    sub_1C2E12C(&Method_AppendSkillExchangeCombineControl___c__DisplayClass36_1__OnClickInfo_b__0__, v15);
    sub_1C2E12C(&AppendSkillExchangeCombineControl___c__DisplayClass36_1_TypeInfo, v16);
    byte_4C0104E = 1;
  }
  v17 = sub_1C2E378(AppendSkillExchangeCombineControl___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_36;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v17 + 24) = idx;
  if ( isDecide )
  {
    if ( ((this->fields.currentTargetIdx ^ this->fields.currentBaseIdx) & 0x80000000) == 0 )
      goto LABEL_11;
    v26 = sub_1C2E378(AppendSkillExchangeCombineControl___c__DisplayClass36_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v26, 0LL);
    if ( !v26 )
      goto LABEL_36;
    *(_QWORD *)(v26 + 24) = v17;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v26 + 24), v17, v27, v28, v29, v30, v31, v32);
    currentBaseIdx = this->fields.currentBaseIdx;
    currentTargetIdx = this->fields.currentTargetIdx;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    SelectMskImgTweenColor = (TweenColor_o *)System_Math__Max_64054728(currentBaseIdx, currentTargetIdx, 0LL);
    v35 = *(_QWORD *)(v26 + 24);
    *(_DWORD *)(v26 + 16) = (_DWORD)SelectMskImgTweenColor;
    if ( !v35 )
      goto LABEL_36;
    if ( (_DWORD)SelectMskImgTweenColor != *(_DWORD *)(v35 + 24) )
    {
      targetList = this->fields.targetList;
      v47 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_ServantSkillInfoIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v47,
        (Il2CppObject *)v26,
        Method_AppendSkillExchangeCombineControl___c__DisplayClass36_1__OnClickInfo_b__0__,
        0LL);
      v48 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)targetList,
              (System_Func_TSource__bool__o *)v47,
              (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
      v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v48,
                                                                   (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
      v50 = System_Linq_Enumerable__FirstOrDefault_object_(
              v49,
              (const MethodInfo_2FF4638 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
      v51 = this->fields.targetList;
      v52 = *(Il2CppObject **)(v26 + 24);
      v37 = (UnityEngine_Object_o *)v50;
      v53 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_ServantSkillInfoIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v53,
        v52,
        Method_AppendSkillExchangeCombineControl___c__DisplayClass36_0__OnClickInfo_b__1__,
        0LL);
      v54 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v51,
              (System_Func_TSource__bool__o *)v53,
              (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
      v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v54,
                                                                   (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
      v36 = System_Linq_Enumerable__FirstOrDefault_object_(
              v55,
              (const MethodInfo_2FF4638 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
    }
    else
    {
LABEL_11:
      v36 = 0LL;
      v37 = 0LL;
    }
    v38 = Method_AppendSkillExchangeCombineControl_OnClickInfo__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeCombineControl_OnClickInfo__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1C2E144(Method_AppendSkillExchangeCombineControl_OnClickInfo__);
    v39 = (System_Reflection_MethodBase_o *)sub_1C2E110(v38, v38[4]);
    v40 = *(_DWORD *)(v17 + 24);
    v41 = this->fields.currentBaseIdx;
    if ( v41 == v40 )
    {
      v40 = -1;
LABEL_16:
      v42 = 0;
      this->fields.currentBaseIdx = v40;
      goto LABEL_23;
    }
    v43 = this->fields.currentTargetIdx;
    if ( v43 == v40 )
    {
      v42 = 0;
      v40 = -1;
    }
    else
    {
      if ( (v41 & 0x80000000) != 0 )
        goto LABEL_16;
      if ( (v43 & 0x80000000) == 0 )
      {
        v42 = 2;
LABEL_23:
        OverwriteAssetSoundName__PlaySystemSe(v39, v42, 0, 0LL);
        AppendSkillExchangeCombineControl__SetNeedItemInfo(this, v44);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          SelectMskImgTweenColor = (TweenColor_o *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
          if ( ((unsigned __int8)SelectMskImgTweenColor & 1) != 0 )
          {
            if ( v36 )
            {
              SelectMskImgTweenColor = ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
                                         (ServantSkillInfoIconComponent_o *)v36,
                                         0LL);
              if ( v37 )
              {
                v45 = SelectMskImgTweenColor;
                SelectMskImgTweenColor = ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
                                           (ServantSkillInfoIconComponent_o *)v37,
                                           0LL);
                if ( v45 )
                {
                  ((void (__fastcall *)(TweenColor_o *, TweenColor_o *, void *))v45->klass->vtable._8_SynchronizeTween.method)(
                    v45,
                    SelectMskImgTweenColor,
                    v45->klass[1]._1.image);
                  return;
                }
              }
            }
LABEL_36:
            sub_1C2E388(SelectMskImgTweenColor, v19);
          }
        }
        return;
      }
      v42 = 0;
    }
    this->fields.currentTargetIdx = v40;
    goto LABEL_23;
  }
}


void __fastcall AppendSkillExchangeCombineControl__PlayEffect(
        AppendSkillExchangeCombineControl_o *this,
        ServantSkillInfoIconComponent_o *targetSkillIcon,
        AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *targetSkillInfo,
        System_Action_o *startPlayLevelExchangeEffect,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  int currentSkillLv; // w2

  if ( !targetSkillInfo )
    sub_1C2E388(this, targetSkillIcon);
  currentSkillLv = targetSkillInfo->fields.currentSkillLv;
  if ( currentSkillLv <= 0 )
  {
    AppendSkillExchangeCombineControl__StartPlayLockEffect(
      this,
      targetSkillInfo->fields.index,
      currentSkillLv,
      targetSkillIcon,
      startPlayLevelExchangeEffect,
      v5);
  }
  else if ( targetSkillInfo->fields.oldSkillLv <= 0 )
  {
    AppendSkillExchangeCombineControl__StartPlayUnlockEffect(
      this,
      targetSkillInfo->fields.index,
      currentSkillLv,
      targetSkillIcon,
      startPlayLevelExchangeEffect,
      v5);
  }
  else
  {
    ActionExtensions__Call(startPlayLevelExchangeEffect, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillExchangeCombineControl__PlayLevelExchangeEffect(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *effectSkillLvChange; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v12; // x1
  UnityEngine_Component_o *v13; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C01059 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    byte_4C01059 = 1;
  }
  effectSkillLvChange = (Il2CppObject *)this->fields.effectSkillLvChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillLvChange,
                                                   (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object
    || (v13 = (UnityEngine_Component_o *)Component_object,
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL),
        Component_object = UnityEngine_Component__get_gameObject(v13, 0LL),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0LL)
    || (v15 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0LL)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1C2E388(Component_object, v12);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  GameObjectExtensions__SetParent(v15, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  v19.fields.z = 0.0;
  v19.fields.x = 42.0;
  v19.fields.y = -42.0;
  GameObjectExtensions__SetLocalPosition(gameObject, v19, 0LL);
  v18 = UnityEngine_Component__get_gameObject(v13, 0LL);
  v20.fields.x = 1.0;
  v20.fields.y = 1.0;
  v20.fields.z = 1.0;
  GameObjectExtensions__SetLocalScale(v18, v20, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillExchangeCombineControl__PlayLockEffect(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        System_Action_o *setLockSpriteActive,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *effectSkillLock; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v14; // x1
  CommandCodeEffectComponent_o *v15; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C01058 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v9);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    byte_4C01058 = 1;
  }
  effectSkillLock = (Il2CppObject *)this->fields.effectSkillLock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillLock,
                                                   (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_11;
  v15 = (CommandCodeEffectComponent_o *)Component_object;
  CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL);
  CommandCodeEffectComponent__SetDestroyEffectCallback(v15, setLockSpriteActive, 0LL);
  Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList
    || (v17 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0LL)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1C2E388(Component_object, v14);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  GameObjectExtensions__SetParent(v17, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
  v21.fields.y = -6.6;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(gameObject, v21, 0LL);
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
  v22.fields.x = 0.555;
  v22.fields.y = 0.557;
  v22.fields.z = 0.555;
  GameObjectExtensions__SetLocalScale(v20, v22, 0LL);
  CommandCodeEffectComponent__PlayAnimation(v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillExchangeCombineControl__PlayUnlockEffect(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *effectSkillUnlock; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v12; // x1
  UnityEngine_Component_o *v13; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C01057 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    byte_4C01057 = 1;
  }
  effectSkillUnlock = (Il2CppObject *)this->fields.effectSkillUnlock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillUnlock,
                                                   (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object
    || (v13 = (UnityEngine_Component_o *)Component_object,
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL),
        Component_object = UnityEngine_Component__get_gameObject(v13, 0LL),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0LL)
    || (v15 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0LL)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1C2E388(Component_object, v12);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  GameObjectExtensions__SetParent(v15, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  v19.fields.x = 0.0;
  v19.fields.y = -6.5;
  v19.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(gameObject, v19, 0LL);
  v18 = UnityEngine_Component__get_gameObject(v13, 0LL);
  v20.fields.x = 0.55;
  v20.fields.y = 0.55;
  v20.fields.z = 0.55;
  GameObjectExtensions__SetLocalScale(v18, v20, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v13, 0LL);
}


void __fastcall AppendSkillExchangeCombineControl__SetBaseSvtCardImg(
        AppendSkillExchangeCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  AppendSkillExchangeCombineControl_o *v4; // x20
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
  AppendSkillExchangeCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_39221460; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4C0104D & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, userSvtEnt);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    this = (AppendSkillExchangeCombineControl_o *)sub_1C2E12C(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                    v7);
    byte_4C0104D = 1;
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
  this = (AppendSkillExchangeCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
                                                  v24,
                                                  0LL);
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
  p_charaGraph = (AppendSkillExchangeCombineControl_o **)&v4->fields.charaGraph;
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


void __fastcall AppendSkillExchangeCombineControl__SetBaseSvtSkillInfo(
        AppendSkillExchangeCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x2

  if ( (byte_4C0104B & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, userSvtEnt);
    sub_1C2E12C(&StringLiteral_2102/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, v10);
    byte_4C0104B = 1;
  }
  if ( userSvtEnt )
  {
    this->fields.baseUserServantEntity = userSvtEnt;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
      (int64_t)userSvtEnt,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2102/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, 0LL);
    AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v11, 1, v12);
    baseSelectInfoLb = this->fields.baseSelectInfoLb;
    if ( !baseSelectInfoLb )
      sub_1C2E388(0LL, v13);
    UnityEngine_GameObject__SetActive(baseSelectInfoLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.skillData,
      (int64_t)AppendSkillInfo,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    AppendSkillExchangeCombineControl__SetSkillIconInfo(this, this->fields.skillData, v22);
  }
}


void __fastcall AppendSkillExchangeCombineControl__SetExeBtnState(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v10; // x22
  UnityEngine_Behaviour_o *v11; // x21
  UnityEngine_Behaviour_o *v12; // x20
  struct SvtUseSkillData_o *skillData; // x10
  System_String_o *Empty; // x20
  __int64 currentBaseIdx; // x9
  __int64 currentTargetIdx; // x8
  struct System_Int32_array *svtSkillLvList; // x10
  unsigned int max_length; // w11
  int32_t v19; // w20
  bool v20; // w21
  __int64 *v21; // x8
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C01052 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v3);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v4);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&string_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_2090/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/, v7);
    sub_1C2E12C(&StringLiteral_2089/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/, v8);
    byte_4C01052 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg
    || (combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    combineBtnBg,
                                                    (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        !this->fields.confirmButtonEffect)
    || (v10 = (UIWidget_o *)combineBtnBg,
        combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    this->fields.confirmButtonEffect,
                                                    (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
        !this->fields.confirmButtonEffect)
    || (v11 = (UnityEngine_Behaviour_o *)combineBtnBg,
        combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    this->fields.confirmButtonEffect,
                                                    (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
        !this->fields.confirmButtonEffect)
    || (v12 = (UnityEngine_Behaviour_o *)combineBtnBg,
        (combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                     this->fields.confirmButtonEffect,
                                                     0LL)) == 0LL) )
  {
LABEL_36:
    sub_1C2E388(combineBtnBg, method);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)combineBtnBg,
    this->fields._IsExeCombine_k__BackingField,
    0LL);
  if ( this->fields._IsExeCombine_k__BackingField )
  {
    if ( !v10 )
      goto LABEL_36;
    v22.fields.r = 1.0;
    v22.fields.g = 1.0;
    v22.fields.b = 1.0;
    v22.fields.a = 1.0;
    UIWidget__set_color(v10, v22, 0LL);
    if ( !v11 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v11, 1, 0LL);
    UITweener__ResetToBeginning((UITweener_o *)v11, 0LL);
    if ( !v12 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v12, 1, 0LL);
    UITweener__ResetToBeginning((UITweener_o *)v12, 0LL);
  }
  else
  {
    if ( !v10 )
      goto LABEL_36;
    v23.fields.r = 0.5;
    v23.fields.g = 0.5;
    v23.fields.b = 0.5;
    v23.fields.a = 1.0;
    UIWidget__set_color(v10, v23, 0LL);
    if ( !v11 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v11, 0, 0LL);
    if ( !v12 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v12, 0, 0LL);
  }
  skillData = this->fields.skillData;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !skillData
    || (currentBaseIdx = (unsigned int)this->fields.currentBaseIdx, (currentBaseIdx & 0x80000000) != 0)
    || (currentTargetIdx = (unsigned int)this->fields.currentTargetIdx, (currentTargetIdx & 0x80000000) != 0) )
  {
    v20 = 0;
    goto LABEL_30;
  }
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_36;
  max_length = svtSkillLvList->max_length;
  if ( (unsigned int)currentBaseIdx >= max_length || (unsigned int)currentTargetIdx >= max_length )
    sub_1C2E390(combineBtnBg, method);
  v19 = svtSkillLvList->m_Items[currentBaseIdx + 1];
  v20 = v19 == svtSkillLvList->m_Items[currentTargetIdx + 1];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v19 )
      goto LABEL_25;
LABEL_28:
    v21 = &StringLiteral_2090/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/;
    goto LABEL_29;
  }
  if ( !v19 )
    goto LABEL_28;
LABEL_25:
  v21 = &StringLiteral_2089/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/;
LABEL_29:
  Empty = LocalizationManager__Get((System_String_o *)*v21, 0LL);
LABEL_30:
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineTxt;
  if ( !combineBtnBg )
    goto LABEL_36;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(combineBtnBg, 0LL);
  if ( !combineBtnBg )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineBtnBg, v20, 0LL);
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineTxt;
  if ( !v20 )
    Empty = string_TypeInfo->static_fields->Empty;
  if ( !combineBtnBg )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)combineBtnBg, Empty, 0LL);
}


bool __fastcall AppendSkillExchangeCombineControl__SetIndex(
        AppendSkillExchangeCombineControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t currentBaseIdx; // w8
  int32_t currentTargetIdx; // w9

  currentBaseIdx = this->fields.currentBaseIdx;
  if ( currentBaseIdx == index )
  {
    this->fields.currentBaseIdx = -1;
  }
  else
  {
    currentTargetIdx = this->fields.currentTargetIdx;
    if ( currentTargetIdx == index )
    {
      this->fields.currentTargetIdx = -1;
    }
    else if ( (currentBaseIdx & 0x80000000) != 0 )
    {
      this->fields.currentBaseIdx = index;
    }
    else
    {
      if ( (currentTargetIdx & 0x80000000) == 0 )
        return 0;
      this->fields.currentTargetIdx = index;
    }
  }
  return 1;
}


void __fastcall AppendSkillExchangeCombineControl__SetNeedItemInfo(
        AppendSkillExchangeCombineControl_o *this,
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
  UILabel_o *selectSkillHelpLb; // x20
  System_String_o *targetList; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w20
  __int64 currentBaseIdx; // x8
  ServantSkillInfoIconComponent_o *v17; // x21
  struct System_Int32_array *useSkillIdList; // x9
  _BOOL4 v19; // w27
  __int64 v20; // x8
  struct System_Int32_array *v21; // x9
  _BOOL4 v22; // w28
  __int64 *v23; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v25; // x2
  int32_t currentTargetIdx; // w20
  System_String_o **v27; // x8
  System_String_o *v28; // x1
  const MethodInfo *v29; // x3

  if ( (byte_4C0104F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v3);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v4);
    sub_1C2E12C(&string_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_2091/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/, v6);
    sub_1C2E12C(&StringLiteral_8949/*"MSG_SKILL_INFO"*/, v7);
    sub_1C2E12C(&StringLiteral_2103/*"APPEND_SKILL_EXCHANGE_PRESELECT_TARGET_INFO"*/, v8);
    sub_1C2E12C(&StringLiteral_2101/*"APPEND_SKILL_EXCHANGE_PRESELECT_BASE_INFO"*/, v9);
    sub_1C2E12C(&StringLiteral_2092/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/, v10);
    sub_1C2E12C(&StringLiteral_2105/*"APPEND_SKILL_EXCHANGE_SELECTED_MSG"*/, v11);
    byte_4C0104F = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    selectSkillHelpLb = this->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    targetList = LocalizationManager__Get((System_String_o *)StringLiteral_8949/*"MSG_SKILL_INFO"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, targetList, 0LL),
          (targetList = (System_String_o *)this->fields.targetList) == 0LL) )
    {
LABEL_32:
      sub_1C2E388(targetList, v14);
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= SLODWORD(targetList[1].klass) )
      {
        AppendSkillExchangeCombineControl__SetExeBtnState(this, v14);
        if ( (this->fields.currentBaseIdx & 0x80000000) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = (System_String_o **)&StringLiteral_2101/*"APPEND_SKILL_EXCHANGE_PRESELECT_BASE_INFO"*/;
        }
        else
        {
          currentTargetIdx = this->fields.currentTargetIdx;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = (System_String_o **)&StringLiteral_2103/*"APPEND_SKILL_EXCHANGE_PRESELECT_TARGET_INFO"*/;
          if ( currentTargetIdx >= 0 )
            v27 = (System_String_o **)&StringLiteral_2105/*"APPEND_SKILL_EXCHANGE_SELECTED_MSG"*/;
        }
        v28 = LocalizationManager__Get(*v27, 0LL);
        AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v28, 0, v29);
        return;
      }
      targetList = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)targetList,
                                        v15,
                                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      currentBaseIdx = (unsigned int)this->fields.currentBaseIdx;
      v17 = (ServantSkillInfoIconComponent_o *)targetList;
      if ( (currentBaseIdx & 0x80000000) != 0 )
      {
        v19 = 0;
      }
      else
      {
        useSkillIdList = this->fields.useSkillIdList;
        if ( !useSkillIdList )
          goto LABEL_32;
        if ( (unsigned int)currentBaseIdx >= useSkillIdList->max_length )
          goto LABEL_44;
        if ( !targetList )
          goto LABEL_32;
        v19 = useSkillIdList->m_Items[currentBaseIdx + 1] == LODWORD(targetList[7].monitor);
      }
      v20 = (unsigned int)this->fields.currentTargetIdx;
      if ( (v20 & 0x80000000) != 0 )
      {
        if ( !targetList )
          goto LABEL_32;
        v22 = 0;
      }
      else
      {
        v21 = this->fields.useSkillIdList;
        if ( !v21 )
          goto LABEL_32;
        if ( (unsigned int)v20 >= v21->max_length )
LABEL_44:
          sub_1C2E390(targetList, v14);
        if ( !targetList )
          goto LABEL_32;
        v22 = v21->m_Items[v20 + 1] == LODWORD(targetList[7].monitor);
      }
      ServantSkillInfoIconComponent__SetDispSelectMskImg((ServantSkillInfoIconComponent_o *)targetList, v19 || v22, 0LL);
      if ( v19 )
      {
        v23 = &StringLiteral_2091/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v23 = &StringLiteral_2091/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/;
        }
      }
      else
      {
        if ( !v22 )
        {
          Empty = string_TypeInfo->static_fields->Empty;
          goto LABEL_31;
        }
        v23 = &StringLiteral_2092/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v23 = &StringLiteral_2092/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/;
        }
      }
      Empty = LocalizationManager__Get((System_String_o *)*v23, 0LL);
LABEL_31:
      ServantSkillInfoIconComponent__SetMsgLabel(v17, Empty, 0LL);
      AppendSkillExchangeCombineControl__SetSvtSkillCombineData(this, v15, v25);
      targetList = (System_String_o *)this->fields.targetList;
      ++v15;
      if ( !targetList )
        goto LABEL_32;
    }
  }
}


void __fastcall AppendSkillExchangeCombineControl__SetPreSelectLabel(
        AppendSkillExchangeCombineControl_o *this,
        System_String_o *msg,
        bool isDefaultFontSize,
        const MethodInfo *method)
{
  UILabel_o *preSelectBaseLb; // x0
  int32_t v7; // w1

  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (!isDefaultFontSize ? (v7 = 22) : (v7 = 20),
        (UILabel__set_fontSize(preSelectBaseLb, v7, 0LL), (preSelectBaseLb = this->fields.preSelectBaseLb) == 0LL)
     || (UILabel__set_text(preSelectBaseLb, msg, 0LL), (preSelectBaseLb = this->fields.preSelectBaseLb) == 0LL)
     || (preSelectBaseLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)preSelectBaseLb,
                                          0LL)) == 0LL) )
  {
    sub_1C2E388(preSelectBaseLb, msg);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 1, 0LL);
}


void __fastcall AppendSkillExchangeCombineControl__SetRequest(
        AppendSkillExchangeCombineControl_o *this,
        System_Action_o *request,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.requestAppendSkillExchange = request;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.requestAppendSkillExchange,
    (int64_t)request,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall AppendSkillExchangeCombineControl__SetSkillIconInfo(
        AppendSkillExchangeCombineControl_o *this,
        SvtUseSkillData_o *skillData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SvtUseSkillData_o *v8; // x25
  AppendSkillExchangeCombineControl_o *v9; // x20
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
  unsigned __int64 v30; // x23
  struct System_Int32_array *v31; // x8
  int32_t v32; // w24
  int32_t type; // w26
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v36; // x27
  int32_t v37; // w28
  SvtUseSkillData_o *v38; // x22
  Il2CppObject *Item; // x25
  ServantSkillInfoIconComponent_ClickDelegate_o *v40; // x29
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v50; // x8
  AppendSkillExchangeCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v8 = skillData;
  v9 = this;
  if ( (byte_4C0104C & 1) == 0 )
  {
    sub_1C2E12C(&Method_AppendSkillExchangeCombineControl_OnClickInfo__, skillData);
    sub_1C2E12C(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, v10);
    sub_1C2E12C(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1C2E12C(&DataManager_TypeInfo, v12);
    sub_1C2E12C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v16);
    sub_1C2E12C(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v17);
    this = (AppendSkillExchangeCombineControl_o *)sub_1C2E12C(&StringLiteral_897/*"-"*/, v18);
    byte_4C0104C = 1;
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
  p_targetList = (AppendSkillExchangeCombineControl_o **)&v9->fields.targetList;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v9->fields.targetList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  if ( (int)v22 >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      v31 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v30 >= v31->max_length )
        goto LABEL_29;
      v32 = v31->m_Items[v30 + 1];
      if ( v32 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                        v32,
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
        if ( v30 >= svtSkillLvList->max_length )
LABEL_29:
          sub_1C2E390(this, skillData);
        this = (AppendSkillExchangeCombineControl_o *)v9->fields.skillInfoList;
        if ( !this )
          break;
        v36 = (System_String_o *)*p_m_CancellationTokenSource;
        v37 = svtSkillLvList->m_Items[v30 + 1];
        v38 = v8;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v30,
                 (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v40 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1C2E378(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v40,
          (Il2CppObject *)v9,
          (intptr_t)Method_AppendSkillExchangeCombineControl_OnClickInfo__,
          0LL);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_46945004(
          (ServantSkillInfoIconComponent_o *)Item,
          v30,
          v36,
          v32,
          v37,
          type,
          v40,
          0,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v47 = *(_QWORD *)&this->fields.m_CachedPtr;
        v48 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v47 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v47 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = v47 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v50 + 32) = Item;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v50 + 32), (int64_t)Item, v41, v42, v43, v44, v45, v46);
        }
        v8 = v38;
      }
      if ( (unsigned int)v22 == ++v30 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1C2E388(this, skillData);
  }
LABEL_27:
  AppendSkillExchangeCombineControl__SetNeedItemInfo(v9, (const MethodInfo *)skillData);
}


void __fastcall AppendSkillExchangeCombineControl__SetSkillLevelUpData(
        AppendSkillExchangeCombineControl_o *this,
        SetLevelUpData_o **lvUpData,
        int32_t idx,
        int32_t currentSkillId,
        int32_t currentSkillLv,
        int32_t currentSkillNum,
        System_String_o *skillName,
        System_String_o *skillDetail,
        const MethodInfo *method)
{
  int64_t v16; // x26
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4C01051 & 1) == 0 )
  {
    sub_1C2E12C(&SetLevelUpData_TypeInfo, lvUpData);
    byte_4C01051 = 1;
  }
  v16 = sub_1C2E378(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor((SetLevelUpData_o *)v16, 0LL);
  if ( !v16 )
    sub_1C2E388(v17, v18);
  *(_DWORD *)(v16 + 24) = idx;
  *(_DWORD *)(v16 + 16) = currentSkillId;
  *(_QWORD *)(v16 + 40) = skillName;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 40), (int64_t)skillName, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 64) = currentSkillLv;
  *(_DWORD *)(v16 + 20) = currentSkillNum;
  *(_QWORD *)(v16 + 48) = skillDetail;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 48), (int64_t)skillDetail, v25, v26, v27, v28, v29, v30);
  *lvUpData = (SetLevelUpData_o *)v16;
  sub_1C2E0D0((PartyOrganizationUtility_o *)lvUpData, v16, v31, v32, v33, v34, v35, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillExchangeCombineControl__SetSvtSkillCombineData(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  AppendSkillExchangeCombineControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct SvtUseSkillData_o *skillData; // x9
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  int32_t v11; // w22
  int32_t v12; // w21
  __int64 currentBaseIdx; // x8
  __int64 currentTargetIdx; // x9
  struct SvtUseSkillData_o *v15; // x10
  struct System_Int32_array *v16; // x10
  unsigned int max_length; // w11
  _BOOL4 v18; // w8
  struct SvtUseSkillData_o *v19; // x8
  struct System_Int32_array *v20; // x8
  __int64 v21; // x9
  struct SvtUseSkillData_o *v22; // x10
  struct System_Int32_array *v23; // x8
  __int64 v24; // x20
  struct System_Int32_array *v25; // x9
  unsigned int v26; // w11
  struct System_Int32_array *svtSkillNumsList; // x10
  __int64 v28; // x12
  int32_t v29; // w21
  int v30; // w8
  int32_t v31; // w22
  int32_t v32; // w23
  System_String_o *m_CancellationTokenSource; // x24
  int32_t v34; // w1
  AppendSkillExchangeCombineControl_o *EffectExplanation; // x0
  struct SvtUseSkillData_o *v36; // x8
  struct System_Int32_array *v37; // x8
  __int64 v38; // x9
  struct SvtUseSkillData_o *v39; // x10
  struct System_Int32_array *v40; // x8
  __int64 v41; // x20
  struct System_Int32_array *v42; // x9
  unsigned int v43; // w11
  struct System_Int32_array *v44; // x10
  __int64 v45; // x12
  int32_t v46; // w21
  int v47; // w8
  int32_t v48; // w22
  int32_t v49; // w23
  System_String_o *v50; // x24
  int32_t v51; // w1
  AppendSkillExchangeCombineControl_o *v52; // x0
  const MethodInfo *v53; // [xsp+0h] [xbp-70h]
  const MethodInfo *v54; // [xsp+0h] [xbp-70h]

  v4 = this;
  if ( (byte_4C01050 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&idx);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    this = (AppendSkillExchangeCombineControl_o *)sub_1C2E12C(
                                                    &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__,
                                                    v7);
    byte_4C01050 = 1;
  }
  skillData = v4->fields.skillData;
  if ( !skillData )
    goto LABEL_61;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_61;
  if ( svtUseSkillIdList->max_length <= idx )
    goto LABEL_62;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_61;
  if ( svtSkillLvList->max_length <= idx )
    goto LABEL_62;
  v11 = svtUseSkillIdList->m_Items[idx + 1];
  v12 = svtSkillLvList->m_Items[idx + 1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_61;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          v11,
          (const MethodInfo_327B180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__) )
    return;
  this = (AppendSkillExchangeCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_61;
  this = (AppendSkillExchangeCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  idx,
                                                  (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_61;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp((ServantSkillInfoIconComponent_o *)this, v12, 0, 1, 1, 0LL);
  currentBaseIdx = (unsigned int)v4->fields.currentBaseIdx;
  if ( (currentBaseIdx & 0x80000000) != 0
    || (currentTargetIdx = (unsigned int)v4->fields.currentTargetIdx, (currentTargetIdx & 0x80000000) != 0) )
  {
    v18 = 0;
  }
  else
  {
    v15 = v4->fields.skillData;
    if ( !v15 )
      goto LABEL_61;
    v16 = v15->fields.svtSkillLvList;
    if ( !v16 )
      goto LABEL_61;
    max_length = v16->max_length;
    if ( (unsigned int)currentBaseIdx >= max_length || (unsigned int)currentTargetIdx >= max_length )
LABEL_62:
      sub_1C2E390(this, *(_QWORD *)&idx);
    v18 = v16->m_Items[currentBaseIdx + 1] != v16->m_Items[currentTargetIdx + 1];
  }
  v4->fields._IsExeCombine_k__BackingField = v18;
  if ( !v18 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillMaster___);
  v19 = v4->fields.skillData;
  if ( !v19 )
    goto LABEL_61;
  v20 = v19->fields.svtUseSkillIdList;
  if ( !v20 )
    goto LABEL_61;
  v21 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v21 >= v20->max_length )
    goto LABEL_62;
  if ( !this )
    goto LABEL_61;
  this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v20->m_Items[v21 + 1],
                                                  (const MethodInfo_327B180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v22 = v4->fields.skillData;
  if ( !v22 )
    goto LABEL_61;
  v23 = v22->fields.svtUseSkillIdList;
  if ( !v23 )
    goto LABEL_61;
  v24 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v24 >= v23->max_length )
    goto LABEL_62;
  v25 = v22->fields.svtSkillLvList;
  if ( !v25 )
    goto LABEL_61;
  v26 = v25->max_length;
  if ( (unsigned int)v24 >= v26 )
    goto LABEL_62;
  svtSkillNumsList = v22->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_61;
  if ( (unsigned int)v24 >= svtSkillNumsList->max_length )
    goto LABEL_62;
  if ( !this )
    goto LABEL_61;
  v28 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v28 >= v26 )
    goto LABEL_62;
  v29 = v23->m_Items[v24 + 1];
  v30 = v25->m_Items[v28 + 1];
  v31 = v25->m_Items[v24 + 1];
  v32 = svtSkillNumsList->m_Items[v24 + 1];
  m_CancellationTokenSource = (System_String_o *)this->fields.m_CancellationTokenSource;
  if ( v30 >= 1 )
    v34 = v25->m_Items[v28 + 1];
  else
    v34 = v30 + 1;
  EffectExplanation = (AppendSkillExchangeCombineControl_o *)SkillEntity__getEffectExplanation(
                                                               (SkillEntity_o *)this,
                                                               v34,
                                                               0LL);
  AppendSkillExchangeCombineControl__SetSkillLevelUpData(
    EffectExplanation,
    &v4->fields.baseLvUpData,
    v24,
    v29,
    v31,
    v32,
    m_CancellationTokenSource,
    (System_String_o *)EffectExplanation,
    v53);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillMaster___);
  v36 = v4->fields.skillData;
  if ( !v36 )
    goto LABEL_61;
  v37 = v36->fields.svtUseSkillIdList;
  if ( !v37 )
    goto LABEL_61;
  v38 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v38 >= v37->max_length )
    goto LABEL_62;
  if ( !this )
    goto LABEL_61;
  this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v37->m_Items[v38 + 1],
                                                  (const MethodInfo_327B180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v39 = v4->fields.skillData;
  if ( !v39 )
    goto LABEL_61;
  v40 = v39->fields.svtUseSkillIdList;
  if ( !v40 )
    goto LABEL_61;
  v41 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v41 >= v40->max_length )
    goto LABEL_62;
  v42 = v39->fields.svtSkillLvList;
  if ( !v42 )
    goto LABEL_61;
  v43 = v42->max_length;
  if ( (unsigned int)v41 >= v43 )
    goto LABEL_62;
  v44 = v39->fields.svtSkillNumsList;
  if ( !v44 )
    goto LABEL_61;
  if ( (unsigned int)v41 >= v44->max_length )
    goto LABEL_62;
  if ( !this )
LABEL_61:
    sub_1C2E388(this, *(_QWORD *)&idx);
  v45 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v45 >= v43 )
    goto LABEL_62;
  v46 = v40->m_Items[v41 + 1];
  v47 = v42->m_Items[v45 + 1];
  v48 = v42->m_Items[v41 + 1];
  v49 = v44->m_Items[v41 + 1];
  v50 = (System_String_o *)this->fields.m_CancellationTokenSource;
  if ( v47 >= 1 )
    v51 = v42->m_Items[v45 + 1];
  else
    v51 = v47 + 1;
  v52 = (AppendSkillExchangeCombineControl_o *)SkillEntity__getEffectExplanation((SkillEntity_o *)this, v51, 0LL);
  AppendSkillExchangeCombineControl__SetSkillLevelUpData(
    v52,
    &v4->fields.targetLvUpData,
    v41,
    v46,
    v48,
    v49,
    v50,
    (System_String_o *)v52,
    v54);
}


void __fastcall AppendSkillExchangeCombineControl__StartPlayEffect(
        AppendSkillExchangeCombineControl_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t baseIndex,
        int32_t targetIndex,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  System_Collections_Generic_List_object__o *AppendSkillInfo; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x24
  Il2CppObject *Item; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x0
  System_Collections_Generic_List_object__o **v40; // x23
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  __int64 v48; // x9
  struct SvtUseSkillData_o *skillData; // x10
  struct System_Int32_array *svtSkillLvList; // x10
  int v51; // w27
  int v52; // w28
  int32_t v53; // w29
  int64_t v54; // x25
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *v61; // x8
  __int64 v62; // x9
  struct SvtUseSkillData_o *v63; // x10
  struct System_Int32_array *v64; // x10
  int v65; // w24
  int v66; // w25
  int32_t v67; // w27
  int64_t v68; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Action_o *v75; // x21
  const MethodInfo *v76; // x4
  const MethodInfo *v77; // x4

  if ( (byte_4C01054 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, userServantEntity);
    sub_1C2E12C(&AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v12);
    sub_1C2E12C(&string_TypeInfo, v13);
    sub_1C2E12C(&Method_AppendSkillExchangeCombineControl___c__DisplayClass44_0__StartPlayEffect_b__0__, v14);
    sub_1C2E12C(&AppendSkillExchangeCombineControl___c__DisplayClass44_0_TypeInfo, v15);
    byte_4C01054 = 1;
  }
  v16 = sub_1C2E378(AppendSkillExchangeCombineControl___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_25;
  *(_QWORD *)(v16 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 64) = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 64), (int64_t)callback, v25, v26, v27, v28, v29, v30);
  if ( !userServantEntity )
    goto LABEL_25;
  AppendSkillInfo = (System_Collections_Generic_List_object__o *)UserServantEntity__getAppendSkillInfo(
                                                                   userServantEntity,
                                                                   0LL);
  if ( !this->fields.targetList )
    goto LABEL_25;
  v31 = AppendSkillInfo;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.targetList,
           baseIndex,
           (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  *(_QWORD *)(v16 + 32) = Item;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)Item, v33, v34, v35, v36, v37, v38);
  AppendSkillInfo = (System_Collections_Generic_List_object__o *)this->fields.targetList;
  if ( !AppendSkillInfo )
    goto LABEL_25;
  v39 = System_Collections_Generic_List_object___get_Item(
          AppendSkillInfo,
          targetIndex,
          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  *(_QWORD *)(v16 + 40) = v39;
  v40 = (System_Collections_Generic_List_object__o **)(v16 + 40);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 40), (int64_t)v39, v41, v42, v43, v44, v45, v46);
  if ( !v31 )
    goto LABEL_25;
  items = v31->fields._items;
  if ( !items )
    goto LABEL_25;
  if ( items->max_length <= baseIndex )
    goto LABEL_26;
  v48 = *(_QWORD *)&v31->fields._size;
  if ( !v48 )
    goto LABEL_25;
  if ( *(_DWORD *)(v48 + 24) <= (unsigned int)baseIndex )
    goto LABEL_26;
  skillData = this->fields.skillData;
  if ( !skillData || (svtSkillLvList = skillData->fields.svtSkillLvList) == 0LL )
LABEL_25:
    sub_1C2E388(AppendSkillInfo, v18);
  if ( svtSkillLvList->max_length <= baseIndex )
    goto LABEL_26;
  v51 = *((_DWORD *)items->m_Items + baseIndex);
  v52 = *(_DWORD *)(v48 + 4LL * baseIndex + 32);
  v53 = svtSkillLvList->m_Items[baseIndex + 1];
  v54 = sub_1C2E378(AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v54, 0LL);
  *(_DWORD *)(v54 + 16) = baseIndex;
  *(_DWORD *)(v54 + 20) = v51;
  *(_DWORD *)(v54 + 24) = v52;
  *(_DWORD *)(v54 + 28) = v53;
  *(_QWORD *)(v16 + 48) = v54;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 48), v54, v55, v56, v57, v58, v59, v60);
  v61 = v31->fields._items;
  if ( !v61 )
    goto LABEL_25;
  if ( v61->max_length <= targetIndex )
    goto LABEL_26;
  v62 = *(_QWORD *)&v31->fields._size;
  if ( !v62 )
    goto LABEL_25;
  if ( *(_DWORD *)(v62 + 24) <= (unsigned int)targetIndex )
LABEL_26:
    sub_1C2E390(AppendSkillInfo, v18);
  v63 = this->fields.skillData;
  if ( !v63 )
    goto LABEL_25;
  v64 = v63->fields.svtSkillLvList;
  if ( !v64 )
    goto LABEL_25;
  if ( v64->max_length <= targetIndex )
    goto LABEL_26;
  v65 = *((_DWORD *)v61->m_Items + targetIndex);
  v66 = *(_DWORD *)(v62 + 4LL * targetIndex + 32);
  v67 = v64->m_Items[targetIndex + 1];
  v68 = sub_1C2E378(AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v68, 0LL);
  *(_DWORD *)(v68 + 16) = targetIndex;
  *(_DWORD *)(v68 + 20) = v65;
  *(_DWORD *)(v68 + 24) = v66;
  *(_DWORD *)(v68 + 28) = v67;
  *(_QWORD *)(v16 + 56) = v68;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 56), v68, v69, v70, v71, v72, v73, v74);
  AppendSkillInfo = *(System_Collections_Generic_List_object__o **)(v16 + 32);
  if ( !AppendSkillInfo )
    goto LABEL_25;
  ServantSkillInfoIconComponent__SetMsgLabel(
    (ServantSkillInfoIconComponent_o *)AppendSkillInfo,
    string_TypeInfo->static_fields->Empty,
    0LL);
  AppendSkillInfo = *v40;
  if ( !*v40 )
    goto LABEL_25;
  ServantSkillInfoIconComponent__SetMsgLabel(
    (ServantSkillInfoIconComponent_o *)AppendSkillInfo,
    string_TypeInfo->static_fields->Empty,
    0LL);
  *(_BYTE *)(v16 + 16) = 0;
  v75 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v75,
    (Il2CppObject *)v16,
    Method_AppendSkillExchangeCombineControl___c__DisplayClass44_0__StartPlayEffect_b__0__,
    0LL);
  AppendSkillExchangeCombineControl__PlayEffect(
    this,
    *(ServantSkillInfoIconComponent_o **)(v16 + 32),
    *(AppendSkillExchangeCombineControl_ExchangeSkillInfo_o **)(v16 + 48),
    v75,
    v76);
  AppendSkillExchangeCombineControl__PlayEffect(
    this,
    *(ServantSkillInfoIconComponent_o **)(v16 + 40),
    *(AppendSkillExchangeCombineControl_ExchangeSkillInfo_o **)(v16 + 56),
    v75,
    v77);
}


System_Collections_IEnumerator_o *__fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect(
        AppendSkillExchangeCombineControl_o *this,
        ServantSkillInfoIconComponent_o *baseSkillIcon,
        ServantSkillInfoIconComponent_o *targetSkillIcon,
        AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *baseSkillInfo,
        AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *targetSkillInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x25
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4C01056 & 1) == 0 )
  {
    sub_1C2E12C(&AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_TypeInfo, baseSkillIcon);
    byte_4C01056 = 1;
  }
  v13 = sub_1C2E378(AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 64) = baseSkillIcon;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 64), (int64_t)baseSkillIcon, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v13 + 72) = targetSkillIcon;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 72), (int64_t)targetSkillIcon, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v13 + 40) = baseSkillInfo;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)baseSkillInfo, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v13 + 48) = targetSkillInfo;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 48), (int64_t)targetSkillInfo, v38, v39, v40, v41, v42, v43);
  *(_QWORD *)(v13 + 56) = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 56), (int64_t)callback, v44, v45, v46, v47, v48, v49);
  return (System_Collections_IEnumerator_o *)v13;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillExchangeCombineControl__StartPlayLockEffect(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        int32_t skillLv,
        ServantSkillInfoIconComponent_o *target,
        System_Action_o *startPlayLevelExchangeEffect,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  ServantSkillInfoIconComponent_o *v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4

  if ( (byte_4C01055 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&idx);
    sub_1C2E12C(&Method_AppendSkillExchangeCombineControl___c__DisplayClass46_0__StartPlayLockEffect_b__0__, v11);
    sub_1C2E12C(&AppendSkillExchangeCombineControl___c__DisplayClass46_0_TypeInfo, v12);
    byte_4C01055 = 1;
  }
  v13 = sub_1C2E378(AppendSkillExchangeCombineControl___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = target,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)target, v16, v17, v18, v19, v20, v21),
        *(_DWORD *)(v13 + 24) = skillLv,
        v22 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v13,
          Method_AppendSkillExchangeCombineControl___c__DisplayClass46_0__StartPlayLockEffect_b__0__,
          0LL),
        AppendSkillExchangeCombineControl__PlayLockEffect(this, idx, v22, startPlayLevelExchangeEffect, v23),
        (v14 = *(ServantSkillInfoIconComponent_o **)(v13 + 16)) == 0LL) )
  {
    sub_1C2E388(v14, v15);
  }
  ServantSkillInfoIconComponent__PlaySkillIconTweenColor(v14, 1, 0LL);
}


void __fastcall AppendSkillExchangeCombineControl__StartPlayUnlockEffect(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        int32_t skillLv,
        ServantSkillInfoIconComponent_o *target,
        System_Action_o *startPlayLevelExchangeEffect,
        const MethodInfo *method)
{
  __int64 v8; // x0
  __int64 v9; // x1

  AppendSkillExchangeCombineControl__PlayUnlockEffect(
    this,
    idx,
    startPlayLevelExchangeEffect,
    (const MethodInfo *)target);
  if ( !target )
    sub_1C2E388(v8, v9);
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(target, skillLv, 0, 0, 0, 0LL);
  ServantSkillInfoIconComponent__PlaySkillIconTweenColor(target, 0, 0LL);
}


void __fastcall AppendSkillExchangeCombineControl_ExchangeSkillInfo___ctor(
        AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *this,
        int32_t index,
        int32_t skillId,
        int32_t currentSkillLv,
        int32_t oldSkill,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.index = index;
  this->fields.skillId = skillId;
  this->fields.currentSkillLv = currentSkillLv;
  this->fields.oldSkillLv = oldSkill;
}


void __fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48___ctor(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48__MoveNext(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v7; // x8
  AppendSkillExchangeCombineControl_o *_4__this; // x20
  const MethodInfo *v9; // x3
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v10; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  bool result; // w0
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *baseSkillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  int32_t v21; // w20
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *targetSkillInfo; // x8
  int32_t v23; // w21
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v24; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v25; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v26; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v27; // x8

  v3 = this;
  if ( (byte_4C0105B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)sub_1C2E12C(
                                                                                        &Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__,
                                                                                        v5);
    byte_4C0105B = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillMaster___);
    baseSkillInfo = v3->fields.baseSkillInfo;
    if ( !baseSkillInfo )
      goto LABEL_30;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    if ( !this )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                        baseSkillInfo->fields.skillId,
                                                                                        (const MethodInfo_327B180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    v21 = this ? LODWORD(this->fields.baseSkillInfo) : 10;
    targetSkillInfo = v3->fields.targetSkillInfo;
    if ( !targetSkillInfo )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                        v20,
                                                                                        targetSkillInfo->fields.skillId,
                                                                                        (const MethodInfo_327B180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    v23 = this ? LODWORD(this->fields.baseSkillInfo) : 10;
    v24 = v3->fields.baseSkillInfo;
    if ( !v24 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.baseSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
      (ServantSkillInfoIconComponent_o *)this,
      v24->fields.currentSkillLv,
      0,
      1,
      1,
      0LL);
    v25 = v3->fields.targetSkillInfo;
    if ( !v25 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.targetSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
      (ServantSkillInfoIconComponent_o *)this,
      v25->fields.currentSkillLv,
      0,
      1,
      1,
      0LL);
    v26 = v3->fields.baseSkillInfo;
    if ( !v26 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.baseSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetLevelLabel(
      (ServantSkillInfoIconComponent_o *)this,
      v26->fields.currentSkillLv,
      v21,
      0LL);
    v27 = v3->fields.targetSkillInfo;
    if ( !v27 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.targetSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetLevelLabel(
      (ServantSkillInfoIconComponent_o *)this,
      v27->fields.currentSkillLv,
      v23,
      0LL);
  }
  else if ( !_1__state )
  {
    _4__this = v3->fields.__4__this;
    v7 = v3->fields.baseSkillInfo;
    v3->fields.__1__state = -1;
    if ( v7 )
    {
      if ( _4__this )
      {
        AppendSkillExchangeCombineControl__PlayLevelExchangeEffect(_4__this, v7->fields.index, 0LL, v2);
        v10 = v3->fields.targetSkillInfo;
        if ( v10 )
        {
          AppendSkillExchangeCombineControl__PlayLevelExchangeEffect(
            _4__this,
            v10->fields.index,
            v3->fields.callback,
            v9);
          v3->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1C2E0D0(p__2__current, 0LL, v12, v13, v14, v15, v16, v17);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
    }
LABEL_30:
    sub_1C2E388(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48__System_Collections_IEnumerator_Reset(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
}


Il2CppObject *__fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48__System_Collections_IEnumerator_get_Current(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48__System_IDisposable_Dispose(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass36_0___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AppendSkillExchangeCombineControl___c__DisplayClass36_0___OnClickInfo_b__1(
        AppendSkillExchangeCombineControl___c__DisplayClass36_0_o *this,
        ServantSkillInfoIconComponent_o *x,
        const MethodInfo *method)
{
  struct AppendSkillExchangeCombineControl_o *_4__this; // x8
  struct System_Int32_array *useSkillIdList; // x8
  __int64 idx; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  useSkillIdList = _4__this->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_6;
  idx = this->fields.idx;
  if ( (unsigned int)idx >= useSkillIdList->max_length )
    sub_1C2E390(this, x);
  if ( !x )
LABEL_6:
    sub_1C2E388(this, x);
  return useSkillIdList->m_Items[idx + 1] == x->fields.currentSkillId;
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass36_1___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass36_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AppendSkillExchangeCombineControl___c__DisplayClass36_1___OnClickInfo_b__0(
        AppendSkillExchangeCombineControl___c__DisplayClass36_1_o *this,
        ServantSkillInfoIconComponent_o *x,
        const MethodInfo *method)
{
  struct AppendSkillExchangeCombineControl___c__DisplayClass36_0_o *CS___8__locals1; // x8
  struct AppendSkillExchangeCombineControl_o *_4__this; // x8
  struct System_Int32_array *useSkillIdList; // x8
  __int64 animBaseIndex; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_7;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_7;
  useSkillIdList = _4__this->fields.useSkillIdList;
  if ( !useSkillIdList )
    goto LABEL_7;
  animBaseIndex = this->fields.animBaseIndex;
  if ( (unsigned int)animBaseIndex >= useSkillIdList->max_length )
    sub_1C2E390(this, x);
  if ( !x )
LABEL_7:
    sub_1C2E388(this, x);
  return useSkillIdList->m_Items[animBaseIndex + 1] == x->fields.currentSkillId;
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass44_0___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass44_0___StartPlayEffect_b__0(
        AppendSkillExchangeCombineControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *appended; // x1

  if ( this->fields.isLast )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( !_4__this )
      sub_1C2E388(this, method);
    appended = AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect(
                 this->fields.__4__this,
                 this->fields.baseSkillIcon,
                 this->fields.targetSkillIcon,
                 this->fields.baseSkillInfo,
                 this->fields.targetSkillInfo,
                 this->fields.callback,
                 v2);
    UnityEngine_MonoBehaviour__StartCoroutine_70974992(_4__this, appended, 0LL);
  }
  else
  {
    this->fields.isLast = 1;
  }
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass46_0___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass46_0___StartPlayLockEffect_b__0(
        AppendSkillExchangeCombineControl___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  ServantSkillInfoIconComponent_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C2E388(0LL, method);
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(target, this->fields.skillLv, 0, 0, 1, 0LL);
}