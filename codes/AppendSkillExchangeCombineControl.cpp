void __fastcall AppendSkillExchangeCombineControl___ctor(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19862 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19862 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  UISprite_o *titleImg; // x20
  __int64 v22; // x1
  UILabel_o *detailInfoLb; // x20
  __int64 v24; // x1
  UnityEngine_Object_o *charaGraph; // x20
  PartyOrganizationUtility_o *p_charaGraph; // x19
  __int64 v27; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B19851 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_20720/*"img_txt_append"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20721/*"img_txt_append_exchange"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17847/*"buttontxt_exchange"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2103/*"APPEND_SKILL_EXCHANGE_INFO"*/, v14, v15);
    byte_4B19851 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 95, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  AppendSkillExchangeCombineControl__InitDispCombineInfo(this, v16);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  *(_QWORD *)&this->fields.currentBaseIdx = -1LL;
  AppendSkillExchangeCombineControl__SetExeBtnState(this, v19);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17847/*"buttontxt_exchange"*/, 0LL);
  titleImg = this->fields.titleImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
  AtlasManager__SetEventSprite(titleImg, (System_String_o *)StringLiteral_20720/*"img_txt_append"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20721/*"img_txt_append_exchange"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2103/*"APPEND_SKILL_EXCHANGE_INFO"*/, 0LL);
  if ( !detailInfoLb )
    goto LABEL_20;
  UILabel__set_text(detailInfoLb, (System_String_o *)helpBtn, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1BCA784(p_charaGraph, 0LL, v29, v30, v31, v32, v33, v34);
      return;
    }
LABEL_20:
    sub_1BCAA3C(helpBtn, v17);
  }
}


void __fastcall AppendSkillExchangeCombineControl__InitDispCombineInfo(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x0
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  void *baseSelectInfoLb; // x0
  int v16; // w21
  int32_t v17; // w20

  if ( (byte_4B19852 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&string_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_2112/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, v10, v11);
    byte_4B19852 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2112/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, 0LL);
  AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v12, 1, v13);
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
  v16 = *((_DWORD *)baseSelectInfoLb + 6);
  if ( v16 >= 1 )
  {
    v17 = 0;
    do
    {
      baseSelectInfoLb = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)baseSelectInfoLb,
                           v17,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !baseSelectInfoLb )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)baseSelectInfoLb, 0LL);
      if ( v16 == ++v17 )
        return;
      baseSelectInfoLb = this->fields.skillInfoList;
    }
    while ( baseSelectInfoLb );
LABEL_13:
    sub_1BCAA3C(baseSelectInfoLb, v14);
  }
}


void __fastcall AppendSkillExchangeCombineControl__OnClickExeCombine(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v13; // x1
  struct UserServantEntity_o *baseUserServantEntity; // x8
  int64_t v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B1985B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    byte_4B1985B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  UserId = NetworkManager__get_UserId(0LL);
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_16;
  v15 = UserId;
  v17 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v19.fields.currentCryptoKey = v17;
  *(_QWORD *)&v19.fields.fakeValue = v16;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  if ( !Master_object )
    goto LABEL_16;
  UserId = UserServantAppendPassiveSkillMaster__TryGetEntity(
             (UserServantAppendPassiveSkillMaster_o *)Master_object,
             &entity,
             v15,
             UserId,
             0LL);
  if ( (UserId & 1) == 0 )
    return;
  if ( !entity || (UserId = (int64_t)this->fields.appendSkillExchangeDialog) == 0 )
LABEL_16:
    sub_1BCAA3C(UserId, v13);
  AppendSkillExchangeDialog__Open(
    (AppendSkillExchangeDialog_o *)UserId,
    this->fields.baseLvUpData,
    this->fields.targetLvUpData,
    entity->fields.exchangeNum,
    this->fields.requestAppendSkillExchange,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillExchangeCombineControl__OnClickInfo(
        AppendSkillExchangeCombineControl_o *this,
        bool isDecide,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int64_t v27; // x20
  TweenColor_o *SelectMskImgTweenColor; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  int32_t currentBaseIdx; // w22
  int32_t currentTargetIdx; // w23
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x8
  Il2CppObject *v52; // x22
  UnityEngine_Object_o *v53; // x21
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  int32_t v56; // w8
  int32_t v57; // w9
  int32_t v58; // w1
  int32_t v59; // w10
  const MethodInfo *v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  TweenColor_o *v63; // x19
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x22
  System_Func_object__bool__o *v65; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  Il2CppObject *v68; // x0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *v69; // x22
  Il2CppObject *v70; // x23
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Func_object__bool__o *v74; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0

  if ( (byte_4B19856 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AppendSkillExchangeCombineControl_OnClickInfo__, isDecide, *(_QWORD *)&idx);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___, v11, v12);
    sub_1BCA7E0(&System_Func_ServantSkillInfoIconComponent__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Math_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_AppendSkillExchangeCombineControl___c__DisplayClass35_0__OnClickInfo_b__1__, v19, v20);
    sub_1BCA7E0(&AppendSkillExchangeCombineControl___c__DisplayClass35_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_AppendSkillExchangeCombineControl___c__DisplayClass35_1__OnClickInfo_b__0__, v23, v24);
    sub_1BCA7E0(&AppendSkillExchangeCombineControl___c__DisplayClass35_1_TypeInfo, v25, v26);
    byte_4B19856 = 1;
  }
  v27 = sub_1BCAA2C(AppendSkillExchangeCombineControl___c__DisplayClass35_0_TypeInfo, isDecide, *(_QWORD *)&idx, method);
  AppendSkillExchangeCombineControl___c__DisplayClass35_0___ctor(
    (AppendSkillExchangeCombineControl___c__DisplayClass35_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_36;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)this, v30, v31, v32, v33, v34, v35);
  *(_DWORD *)(v27 + 24) = idx;
  if ( isDecide )
  {
    if ( ((this->fields.currentTargetIdx ^ this->fields.currentBaseIdx) & 0x80000000) == 0 )
      goto LABEL_11;
    v39 = sub_1BCAA2C(AppendSkillExchangeCombineControl___c__DisplayClass35_1_TypeInfo, v36, v37, v38);
    AppendSkillExchangeCombineControl___c__DisplayClass35_1___ctor(
      (AppendSkillExchangeCombineControl___c__DisplayClass35_1_o *)v39,
      0LL);
    if ( !v39 )
      goto LABEL_36;
    *(_QWORD *)(v39 + 24) = v27;
    sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 24), v27, v40, v41, v42, v43, v44, v45);
    currentBaseIdx = this->fields.currentBaseIdx;
    currentTargetIdx = this->fields.currentTargetIdx;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v46);
    SelectMskImgTweenColor = (TweenColor_o *)System_Math__Max_63220196(currentBaseIdx, currentTargetIdx, 0LL);
    v51 = *(_QWORD *)(v39 + 24);
    *(_DWORD *)(v39 + 16) = (_DWORD)SelectMskImgTweenColor;
    if ( !v51 )
      goto LABEL_36;
    if ( (_DWORD)SelectMskImgTweenColor != *(_DWORD *)(v51 + 24) )
    {
      targetList = this->fields.targetList;
      v65 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_ServantSkillInfoIconComponent__bool__TypeInfo,
                                             v29,
                                             v49,
                                             v50);
      System_Func_object__bool____ctor(
        v65,
        (Il2CppObject *)v39,
        Method_AppendSkillExchangeCombineControl___c__DisplayClass35_1__OnClickInfo_b__0__,
        0LL);
      v66 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)targetList,
              (System_Func_TSource__bool__o *)v65,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
      v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v66,
                                                                   (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
      v68 = System_Linq_Enumerable__FirstOrDefault_object_(
              v67,
              (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
      v69 = this->fields.targetList;
      v70 = *(Il2CppObject **)(v39 + 24);
      v53 = (UnityEngine_Object_o *)v68;
      v74 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_ServantSkillInfoIconComponent__bool__TypeInfo,
                                             v71,
                                             v72,
                                             v73);
      System_Func_object__bool____ctor(
        v74,
        v70,
        Method_AppendSkillExchangeCombineControl___c__DisplayClass35_0__OnClickInfo_b__1__,
        0LL);
      v75 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v69,
              (System_Func_TSource__bool__o *)v74,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
      v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v75,
                                                                   (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
      v52 = System_Linq_Enumerable__FirstOrDefault_object_(
              v76,
              (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
    }
    else
    {
LABEL_11:
      v52 = 0LL;
      v53 = 0LL;
    }
    v54 = Method_AppendSkillExchangeCombineControl_OnClickInfo__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeCombineControl_OnClickInfo__ + 83) & 2) != 0 )
      v54 = (_QWORD *)sub_1BCA7F8(Method_AppendSkillExchangeCombineControl_OnClickInfo__);
    v55 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v54, v54[4]);
    v56 = *(_DWORD *)(v27 + 24);
    v57 = this->fields.currentBaseIdx;
    if ( v57 == v56 )
    {
      v56 = -1;
LABEL_16:
      v58 = 0;
      this->fields.currentBaseIdx = v56;
      goto LABEL_23;
    }
    v59 = this->fields.currentTargetIdx;
    if ( v59 == v56 )
    {
      v58 = 0;
      v56 = -1;
    }
    else
    {
      if ( (v57 & 0x80000000) != 0 )
        goto LABEL_16;
      if ( (v59 & 0x80000000) == 0 )
      {
        v58 = 2;
LABEL_23:
        OverwriteAssetSoundName__PlaySystemSe(v55, v58, 0LL);
        AppendSkillExchangeCombineControl__SetNeedItemInfo(this, v60);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v52, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
          SelectMskImgTweenColor = (TweenColor_o *)UnityEngine_Object__op_Inequality(v53, 0LL, 0LL);
          if ( ((unsigned __int8)SelectMskImgTweenColor & 1) != 0 )
          {
            if ( v52 )
            {
              SelectMskImgTweenColor = ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
                                         (ServantSkillInfoIconComponent_o *)v52,
                                         0LL);
              if ( v53 )
              {
                v63 = SelectMskImgTweenColor;
                SelectMskImgTweenColor = ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
                                           (ServantSkillInfoIconComponent_o *)v53,
                                           0LL);
                if ( v63 )
                {
                  ((void (__fastcall *)(TweenColor_o *, TweenColor_o *, void *))v63->klass->vtable._8_SynchronizeTween.method)(
                    v63,
                    SelectMskImgTweenColor,
                    v63->klass[1]._1.image);
                  return;
                }
              }
            }
LABEL_36:
            sub_1BCAA3C(SelectMskImgTweenColor, v29);
          }
        }
        return;
      }
      v58 = 0;
    }
    this->fields.currentTargetIdx = v56;
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
    sub_1BCAA3C(this, targetSkillIcon);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *effectSkillLvChange; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19861 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B19861 = 1;
  }
  effectSkillLvChange = (Il2CppObject *)this->fields.effectSkillLvChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillLvChange,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object
    || (v16 = (UnityEngine_Component_o *)Component_object,
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL),
        Component_object = UnityEngine_Component__get_gameObject(v16, 0LL),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0LL)
    || (v18 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0LL)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(Component_object, v15);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  GameObjectExtensions__SetParent(v18, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
  v22.fields.z = 0.0;
  v22.fields.x = 42.0;
  v22.fields.y = -42.0;
  GameObjectExtensions__SetLocalPosition(gameObject, v22, 0LL);
  v21 = UnityEngine_Component__get_gameObject(v16, 0LL);
  v23.fields.x = 1.0;
  v23.fields.y = 1.0;
  v23.fields.z = 1.0;
  GameObjectExtensions__SetLocalScale(v21, v23, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v16, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *effectSkillLock; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v17; // x1
  CommandCodeEffectComponent_o *v18; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  UnityEngine_GameObject_o *v20; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19860 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___,
      *(_QWORD *)&idx,
      setLockSpriteActive);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B19860 = 1;
  }
  effectSkillLock = (Il2CppObject *)this->fields.effectSkillLock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillLock,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_11;
  v18 = (CommandCodeEffectComponent_o *)Component_object;
  CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL);
  CommandCodeEffectComponent__SetDestroyEffectCallback(v18, setLockSpriteActive, 0LL);
  Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList
    || (v20 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0LL)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(Component_object, v17);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  GameObjectExtensions__SetParent(v20, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
  v24.fields.y = -6.6;
  v24.fields.x = 0.0;
  v24.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(gameObject, v24, 0LL);
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
  v25.fields.x = 0.555;
  v25.fields.y = 0.557;
  v25.fields.z = 0.555;
  GameObjectExtensions__SetLocalScale(v23, v25, 0LL);
  CommandCodeEffectComponent__PlayAnimation(v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillExchangeCombineControl__PlayUnlockEffect(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *effectSkillUnlock; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1985F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1985F = 1;
  }
  effectSkillUnlock = (Il2CppObject *)this->fields.effectSkillUnlock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillUnlock,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object
    || (v16 = (UnityEngine_Component_o *)Component_object,
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL),
        Component_object = UnityEngine_Component__get_gameObject(v16, 0LL),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0LL)
    || (v18 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0LL)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(Component_object, v15);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0LL);
  GameObjectExtensions__SetParent(v18, transform, 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
  v22.fields.x = 0.0;
  v22.fields.y = -6.5;
  v22.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(gameObject, v22, 0LL);
  v21 = UnityEngine_Component__get_gameObject(v16, 0LL);
  v23.fields.x = 0.55;
  v23.fields.y = 0.55;
  v23.fields.z = 0.55;
  GameObjectExtensions__SetLocalScale(v21, v23, 0LL);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v16, 0LL);
}


void __fastcall AppendSkillExchangeCombineControl__SetBaseSvtCardImg(
        AppendSkillExchangeCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  AppendSkillExchangeCombineControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x23
  __int64 v16; // x24
  ServantLimitImageMaster_o *v17; // x22
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v19; // x1
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v21; // w21
  AppendSkillExchangeCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v4 = this;
  if ( (byte_4B19855 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, userSvtEnt, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (AppendSkillExchangeCombineControl_o *)sub_1BCA7E0(
                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                    v9,
                                                    v10);
    byte_4B19855 = 1;
  }
  if ( !userSvtEnt )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(userSvtEnt, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userSvtEnt->fields.svtId.fields.fakeValue;
  v17 = (ServantLimitImageMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v30.fields.currentCryptoKey = v16;
  *(_QWORD *)&v30.fields.fakeValue = v15;
  this = (AppendSkillExchangeCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                  v30,
                                                  0LL);
  if ( !v17 )
    goto LABEL_15;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v17,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v21 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  p_charaGraph = (AppendSkillExchangeCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                               v4->fields.charaGraphBase,
                               userSvtEnt,
                               v21,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_38621628;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.charaGraph,
      (int64_t)TexturePrefab_38621628,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_15:
    sub_1BCAA3C(this, userSvtEnt);
  UICharaGraphTexture__SetCharacter_41557848((UICharaGraphTexture_o *)this, userSvtEnt, v21, 0LL, 0, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  System_String_o *v13; // x0
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2

  if ( (byte_4B19853 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, userSvtEnt, method);
    sub_1BCA7E0(&StringLiteral_2112/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, v10, v11);
    byte_4B19853 = 1;
  }
  if ( userSvtEnt )
  {
    this->fields.baseUserServantEntity = userSvtEnt;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
      (int64_t)userSvtEnt,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2112/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, 0LL);
    AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v13, 1, v14);
    baseSelectInfoLb = this->fields.baseSelectInfoLb;
    if ( !baseSelectInfoLb )
      sub_1BCAA3C(0LL, v15);
    UnityEngine_GameObject__SetActive(baseSelectInfoLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.skillData,
      (int64_t)AppendSkillInfo,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    AppendSkillExchangeCombineControl__SetSkillIconInfo(this, this->fields.skillData, v24);
  }
}


void __fastcall AppendSkillExchangeCombineControl__SetExeBtnState(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v17; // x22
  UnityEngine_Behaviour_o *v18; // x21
  UnityEngine_Behaviour_o *v19; // x20
  struct SvtUseSkillData_o *skillData; // x10
  System_String_o *Empty; // x20
  __int64 currentBaseIdx; // x9
  __int64 currentTargetIdx; // x8
  struct System_Int32_array *svtSkillLvList; // x10
  unsigned int max_length; // w11
  int32_t v26; // w20
  bool v27; // w21
  __int64 *v28; // x8
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1985A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&string_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_2100/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2099/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/, v14, v15);
    byte_4B1985A = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg
    || (combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    combineBtnBg,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        !this->fields.confirmButtonEffect)
    || (v17 = (UIWidget_o *)combineBtnBg,
        combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    this->fields.confirmButtonEffect,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
        !this->fields.confirmButtonEffect)
    || (v18 = (UnityEngine_Behaviour_o *)combineBtnBg,
        combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    this->fields.confirmButtonEffect,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
        !this->fields.confirmButtonEffect)
    || (v19 = (UnityEngine_Behaviour_o *)combineBtnBg,
        (combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                     this->fields.confirmButtonEffect,
                                                     0LL)) == 0LL) )
  {
LABEL_36:
    sub_1BCAA3C(combineBtnBg, method);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)combineBtnBg,
    this->fields._IsExeCombine_k__BackingField,
    0LL);
  if ( this->fields._IsExeCombine_k__BackingField )
  {
    if ( !v17 )
      goto LABEL_36;
    v29.fields.r = 1.0;
    v29.fields.g = 1.0;
    v29.fields.b = 1.0;
    v29.fields.a = 1.0;
    UIWidget__set_color(v17, v29, 0LL);
    if ( !v18 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v18, 1, 0LL);
    UITweener__ResetToBeginning((UITweener_o *)v18, 0LL);
    if ( !v19 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v19, 1, 0LL);
    UITweener__ResetToBeginning((UITweener_o *)v19, 0LL);
  }
  else
  {
    if ( !v17 )
      goto LABEL_36;
    v30.fields.r = 0.5;
    v30.fields.g = 0.5;
    v30.fields.b = 0.5;
    v30.fields.a = 1.0;
    UIWidget__set_color(v17, v30, 0LL);
    if ( !v18 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v18, 0, 0LL);
    if ( !v19 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v19, 0, 0LL);
  }
  skillData = this->fields.skillData;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !skillData
    || (currentBaseIdx = (unsigned int)this->fields.currentBaseIdx, (currentBaseIdx & 0x80000000) != 0)
    || (currentTargetIdx = (unsigned int)this->fields.currentTargetIdx, (currentTargetIdx & 0x80000000) != 0) )
  {
    v27 = 0;
    goto LABEL_30;
  }
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_36;
  max_length = svtSkillLvList->max_length;
  if ( (unsigned int)currentBaseIdx >= max_length || (unsigned int)currentTargetIdx >= max_length )
    sub_1BCAA44(combineBtnBg, method);
  v26 = svtSkillLvList->m_Items[currentBaseIdx + 1];
  v27 = v26 == svtSkillLvList->m_Items[currentTargetIdx + 1];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    if ( v26 )
      goto LABEL_25;
LABEL_28:
    v28 = &StringLiteral_2100/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/;
    goto LABEL_29;
  }
  if ( !v26 )
    goto LABEL_28;
LABEL_25:
  v28 = &StringLiteral_2099/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/;
LABEL_29:
  Empty = LocalizationManager__Get((System_String_o *)*v28, 0LL);
LABEL_30:
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineTxt;
  if ( !combineBtnBg )
    goto LABEL_36;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(combineBtnBg, 0LL);
  if ( !combineBtnBg )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineBtnBg, v27, 0LL);
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineTxt;
  if ( !v27 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *selectSkillHelpLb; // x20
  System_String_o *targetList; // x0
  const MethodInfo *v24; // x1
  int32_t v25; // w20
  __int64 currentBaseIdx; // x8
  ServantSkillInfoIconComponent_o *v27; // x21
  struct System_Int32_array *useSkillIdList; // x9
  _BOOL4 v29; // w27
  __int64 v30; // x8
  struct System_Int32_array *v31; // x9
  _BOOL4 v32; // w28
  __int64 v33; // x1
  __int64 *v34; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v36; // x2
  __int64 v37; // x1
  int32_t currentTargetIdx; // w20
  System_String_o **v39; // x8
  System_String_o *v40; // x1
  const MethodInfo *v41; // x3

  if ( (byte_4B19857 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&string_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_2101/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_8895/*"MSG_SKILL_INFO"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2113/*"APPEND_SKILL_EXCHANGE_PRESELECT_TARGET_INFO"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2111/*"APPEND_SKILL_EXCHANGE_PRESELECT_BASE_INFO"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2102/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_2115/*"APPEND_SKILL_EXCHANGE_SELECTED_MSG"*/, v20, v21);
    byte_4B19857 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    selectSkillHelpLb = this->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    targetList = LocalizationManager__Get((System_String_o *)StringLiteral_8895/*"MSG_SKILL_INFO"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, targetList, 0LL),
          (targetList = (System_String_o *)this->fields.targetList) == 0LL) )
    {
LABEL_32:
      sub_1BCAA3C(targetList, v24);
    }
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= SLODWORD(targetList[1].klass) )
      {
        AppendSkillExchangeCombineControl__SetExeBtnState(this, v24);
        if ( (this->fields.currentBaseIdx & 0x80000000) != 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
          v39 = (System_String_o **)&StringLiteral_2111/*"APPEND_SKILL_EXCHANGE_PRESELECT_BASE_INFO"*/;
        }
        else
        {
          currentTargetIdx = this->fields.currentTargetIdx;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
          v39 = (System_String_o **)&StringLiteral_2113/*"APPEND_SKILL_EXCHANGE_PRESELECT_TARGET_INFO"*/;
          if ( currentTargetIdx >= 0 )
            v39 = (System_String_o **)&StringLiteral_2115/*"APPEND_SKILL_EXCHANGE_SELECTED_MSG"*/;
        }
        v40 = LocalizationManager__Get(*v39, 0LL);
        AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v40, 0, v41);
        return;
      }
      targetList = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)targetList,
                                        v25,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      currentBaseIdx = (unsigned int)this->fields.currentBaseIdx;
      v27 = (ServantSkillInfoIconComponent_o *)targetList;
      if ( (currentBaseIdx & 0x80000000) != 0 )
      {
        v29 = 0;
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
        v29 = useSkillIdList->m_Items[currentBaseIdx + 1] == LODWORD(targetList[7].monitor);
      }
      v30 = (unsigned int)this->fields.currentTargetIdx;
      if ( (v30 & 0x80000000) != 0 )
      {
        if ( !targetList )
          goto LABEL_32;
        v32 = 0;
      }
      else
      {
        v31 = this->fields.useSkillIdList;
        if ( !v31 )
          goto LABEL_32;
        if ( (unsigned int)v30 >= v31->max_length )
LABEL_44:
          sub_1BCAA44(targetList, v24);
        if ( !targetList )
          goto LABEL_32;
        v32 = v31->m_Items[v30 + 1] == LODWORD(targetList[7].monitor);
      }
      ServantSkillInfoIconComponent__SetDispSelectMskImg((ServantSkillInfoIconComponent_o *)targetList, v29 || v32, 0LL);
      if ( v29 )
      {
        v34 = &StringLiteral_2101/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
          v34 = &StringLiteral_2101/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/;
        }
      }
      else
      {
        if ( !v32 )
        {
          Empty = string_TypeInfo->static_fields->Empty;
          goto LABEL_31;
        }
        v34 = &StringLiteral_2102/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
          v34 = &StringLiteral_2102/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/;
        }
      }
      Empty = LocalizationManager__Get((System_String_o *)*v34, 0LL);
LABEL_31:
      ServantSkillInfoIconComponent__SetMsgLabel(v27, Empty, 0LL);
      AppendSkillExchangeCombineControl__SetSvtSkillCombineData(this, v25, v36);
      targetList = (System_String_o *)this->fields.targetList;
      ++v25;
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
    sub_1BCAA3C(preSelectBaseLb, msg);
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
  sub_1BCA784(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t svtUseSkillIdList; // x1
  struct System_Int32_array **p_useSkillIdList; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  struct System_Int32_array *useSkillIdList; // x8
  __int64 v33; // x19
  System_Collections_Generic_List_object__o *v34; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  unsigned __int64 v41; // x23
  struct System_Int32_array *v42; // x8
  int32_t v43; // w24
  int32_t type; // w26
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v47; // x27
  int32_t v48; // w28
  SvtUseSkillData_o *v49; // x22
  Il2CppObject *Item; // x25
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  ServantSkillInfoIconComponent_ClickDelegate_o *v54; // x29
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v64; // x8
  AppendSkillExchangeCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v8 = skillData;
  v9 = this;
  if ( (byte_4B19854 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AppendSkillExchangeCombineControl_OnClickInfo__, skillData, method);
    sub_1BCA7E0(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v24, v25);
    this = (AppendSkillExchangeCombineControl_o *)sub_1BCA7E0(&StringLiteral_915/*"-"*/, v26, v27);
    byte_4B19854 = 1;
  }
  if ( !v8 )
    goto LABEL_28;
  svtUseSkillIdList = (int64_t)v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = (struct System_Int32_array *)svtUseSkillIdList;
  sub_1BCA784(
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
  v33 = *(_QWORD *)&useSkillIdList->max_length;
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo,
                                                       skillData,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v34;
  p_targetList = (AppendSkillExchangeCombineControl_o **)&v9->fields.targetList;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.targetList, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  if ( (int)v33 >= 1 )
  {
    v41 = 0LL;
    while ( 1 )
    {
      v42 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v41 >= v42->max_length )
        goto LABEL_29;
      v43 = v42->m_Items[v41 + 1];
      if ( v43 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillData);
        this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                        v43,
                                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( this )
        {
          type = this->fields.type;
          p_m_CancellationTokenSource = &this->fields.m_CancellationTokenSource;
        }
        else
        {
          p_m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o **)&StringLiteral_915/*"-"*/;
          type = 10;
        }
        svtSkillLvList = v8->fields.svtSkillLvList;
        if ( !svtSkillLvList )
          break;
        if ( v41 >= svtSkillLvList->max_length )
LABEL_29:
          sub_1BCAA44(this, skillData);
        this = (AppendSkillExchangeCombineControl_o *)v9->fields.skillInfoList;
        if ( !this )
          break;
        v47 = (System_String_o *)*p_m_CancellationTokenSource;
        v48 = svtSkillLvList->m_Items[v41 + 1];
        v49 = v8;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v41,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v54 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                                 ServantSkillInfoIconComponent_ClickDelegate_TypeInfo,
                                                                 v51,
                                                                 v52,
                                                                 v53);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v54,
          (Il2CppObject *)v9,
          (intptr_t)Method_AppendSkillExchangeCombineControl_OnClickInfo__,
          0LL);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_46205128(
          (ServantSkillInfoIconComponent_o *)Item,
          v41,
          v47,
          v43,
          v48,
          type,
          v54,
          0,
          0LL);
        this = *p_targetList;
        if ( !*p_targetList )
          break;
        v61 = *(_QWORD *)&this->fields.m_CachedPtr;
        v62 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v61 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v61 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = v61 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v64 + 32) = Item;
          sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 32), (int64_t)Item, v55, v56, v57, v58, v59, v60);
        }
        v8 = v49;
      }
      if ( (unsigned int)v33 == ++v41 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1BCAA3C(this, skillData);
  }
LABEL_27:
  AppendSkillExchangeCombineControl__SetNeedItemInfo(v9, (const MethodInfo *)skillData);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B19859 & 1) == 0 )
  {
    sub_1BCA7E0(&SetLevelUpData_TypeInfo, lvUpData, *(_QWORD *)&idx);
    byte_4B19859 = 1;
  }
  v16 = sub_1BCAA2C(SetLevelUpData_TypeInfo, lvUpData, *(_QWORD *)&idx, *(_QWORD *)&currentSkillId);
  SetLevelUpData___ctor((SetLevelUpData_o *)v16, 0LL);
  if ( !v16 )
    sub_1BCAA3C(v17, v18);
  *(_DWORD *)(v16 + 24) = idx;
  *(_DWORD *)(v16 + 16) = currentSkillId;
  *(_QWORD *)(v16 + 40) = skillName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 40), (int64_t)skillName, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 64) = currentSkillLv;
  *(_DWORD *)(v16 + 20) = currentSkillNum;
  *(_QWORD *)(v16 + 48) = skillDetail;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 48), (int64_t)skillDetail, v25, v26, v27, v28, v29, v30);
  *lvUpData = (SetLevelUpData_o *)v16;
  sub_1BCA784((PartyOrganizationUtility_o *)lvUpData, v16, v31, v32, v33, v34, v35, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillExchangeCombineControl__SetSvtSkillCombineData(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  AppendSkillExchangeCombineControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct SvtUseSkillData_o *skillData; // x9
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  int32_t v14; // w22
  int32_t v15; // w21
  __int64 currentBaseIdx; // x8
  __int64 currentTargetIdx; // x9
  struct SvtUseSkillData_o *v18; // x10
  struct System_Int32_array *v19; // x10
  unsigned int max_length; // w11
  _BOOL4 v21; // w8
  struct SvtUseSkillData_o *v22; // x8
  struct System_Int32_array *v23; // x8
  __int64 v24; // x9
  struct SvtUseSkillData_o *v25; // x10
  struct System_Int32_array *v26; // x8
  __int64 v27; // x20
  struct System_Int32_array *v28; // x9
  unsigned int v29; // w11
  struct System_Int32_array *svtSkillNumsList; // x10
  __int64 v31; // x12
  int32_t v32; // w21
  int v33; // w8
  int32_t v34; // w22
  int32_t v35; // w23
  System_String_o *m_CancellationTokenSource; // x24
  int32_t v37; // w1
  AppendSkillExchangeCombineControl_o *EffectExplanation; // x0
  __int64 v39; // x1
  struct SvtUseSkillData_o *v40; // x8
  struct System_Int32_array *v41; // x8
  __int64 v42; // x9
  struct SvtUseSkillData_o *v43; // x10
  struct System_Int32_array *v44; // x8
  __int64 v45; // x20
  struct System_Int32_array *v46; // x9
  unsigned int v47; // w11
  struct System_Int32_array *v48; // x10
  __int64 v49; // x12
  int32_t v50; // w21
  int v51; // w8
  int32_t v52; // w22
  int32_t v53; // w23
  System_String_o *v54; // x24
  int32_t v55; // w1
  AppendSkillExchangeCombineControl_o *v56; // x0
  const MethodInfo *v57; // [xsp+0h] [xbp-70h]
  const MethodInfo *v58; // [xsp+0h] [xbp-70h]

  v4 = this;
  if ( (byte_4B19858 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&idx, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7, v8);
    this = (AppendSkillExchangeCombineControl_o *)sub_1BCA7E0(
                                                    &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__,
                                                    v9,
                                                    v10);
    byte_4B19858 = 1;
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
  v14 = svtUseSkillIdList->m_Items[idx + 1];
  v15 = svtSkillLvList->m_Items[idx + 1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&idx);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_61;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          v14,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__) )
    return;
  this = (AppendSkillExchangeCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_61;
  this = (AppendSkillExchangeCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  idx,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_61;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp((ServantSkillInfoIconComponent_o *)this, v15, 0, 1, 1, 0LL);
  currentBaseIdx = (unsigned int)v4->fields.currentBaseIdx;
  if ( (currentBaseIdx & 0x80000000) != 0
    || (currentTargetIdx = (unsigned int)v4->fields.currentTargetIdx, (currentTargetIdx & 0x80000000) != 0) )
  {
    v21 = 0;
  }
  else
  {
    v18 = v4->fields.skillData;
    if ( !v18 )
      goto LABEL_61;
    v19 = v18->fields.svtSkillLvList;
    if ( !v19 )
      goto LABEL_61;
    max_length = v19->max_length;
    if ( (unsigned int)currentBaseIdx >= max_length || (unsigned int)currentTargetIdx >= max_length )
LABEL_62:
      sub_1BCAA44(this, *(_QWORD *)&idx);
    v21 = v19->m_Items[currentBaseIdx + 1] != v19->m_Items[currentTargetIdx + 1];
  }
  v4->fields._IsExeCombine_k__BackingField = v21;
  if ( !v21 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&idx);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  v22 = v4->fields.skillData;
  if ( !v22 )
    goto LABEL_61;
  v23 = v22->fields.svtUseSkillIdList;
  if ( !v23 )
    goto LABEL_61;
  v24 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v24 >= v23->max_length )
    goto LABEL_62;
  if ( !this )
    goto LABEL_61;
  this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v23->m_Items[v24 + 1],
                                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v25 = v4->fields.skillData;
  if ( !v25 )
    goto LABEL_61;
  v26 = v25->fields.svtUseSkillIdList;
  if ( !v26 )
    goto LABEL_61;
  v27 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v27 >= v26->max_length )
    goto LABEL_62;
  v28 = v25->fields.svtSkillLvList;
  if ( !v28 )
    goto LABEL_61;
  v29 = v28->max_length;
  if ( (unsigned int)v27 >= v29 )
    goto LABEL_62;
  svtSkillNumsList = v25->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_61;
  if ( (unsigned int)v27 >= svtSkillNumsList->max_length )
    goto LABEL_62;
  if ( !this )
    goto LABEL_61;
  v31 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v31 >= v29 )
    goto LABEL_62;
  v32 = v26->m_Items[v27 + 1];
  v33 = v28->m_Items[v31 + 1];
  v34 = v28->m_Items[v27 + 1];
  v35 = svtSkillNumsList->m_Items[v27 + 1];
  m_CancellationTokenSource = (System_String_o *)this->fields.m_CancellationTokenSource;
  if ( v33 >= 1 )
    v37 = v28->m_Items[v31 + 1];
  else
    v37 = v33 + 1;
  EffectExplanation = (AppendSkillExchangeCombineControl_o *)SkillEntity__getEffectExplanation(
                                                               (SkillEntity_o *)this,
                                                               v37,
                                                               0LL);
  AppendSkillExchangeCombineControl__SetSkillLevelUpData(
    EffectExplanation,
    &v4->fields.baseLvUpData,
    v27,
    v32,
    v34,
    v35,
    m_CancellationTokenSource,
    (System_String_o *)EffectExplanation,
    v57);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  v40 = v4->fields.skillData;
  if ( !v40 )
    goto LABEL_61;
  v41 = v40->fields.svtUseSkillIdList;
  if ( !v41 )
    goto LABEL_61;
  v42 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v42 >= v41->max_length )
    goto LABEL_62;
  if ( !this )
    goto LABEL_61;
  this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v41->m_Items[v42 + 1],
                                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v43 = v4->fields.skillData;
  if ( !v43 )
    goto LABEL_61;
  v44 = v43->fields.svtUseSkillIdList;
  if ( !v44 )
    goto LABEL_61;
  v45 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v45 >= v44->max_length )
    goto LABEL_62;
  v46 = v43->fields.svtSkillLvList;
  if ( !v46 )
    goto LABEL_61;
  v47 = v46->max_length;
  if ( (unsigned int)v45 >= v47 )
    goto LABEL_62;
  v48 = v43->fields.svtSkillNumsList;
  if ( !v48 )
    goto LABEL_61;
  if ( (unsigned int)v45 >= v48->max_length )
    goto LABEL_62;
  if ( !this )
LABEL_61:
    sub_1BCAA3C(this, *(_QWORD *)&idx);
  v49 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v49 >= v47 )
    goto LABEL_62;
  v50 = v44->m_Items[v45 + 1];
  v51 = v46->m_Items[v49 + 1];
  v52 = v46->m_Items[v45 + 1];
  v53 = v48->m_Items[v45 + 1];
  v54 = (System_String_o *)this->fields.m_CancellationTokenSource;
  if ( v51 >= 1 )
    v55 = v46->m_Items[v49 + 1];
  else
    v55 = v51 + 1;
  v56 = (AppendSkillExchangeCombineControl_o *)SkillEntity__getEffectExplanation((SkillEntity_o *)this, v55, 0LL);
  AppendSkillExchangeCombineControl__SetSkillLevelUpData(
    v56,
    &v4->fields.targetLvUpData,
    v45,
    v50,
    v52,
    v53,
    v54,
    (System_String_o *)v56,
    v58);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AppendSkillExchangeCombineControl__StartPlayEffect(
        AppendSkillExchangeCombineControl_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t baseIndex,
        int32_t targetIndex,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  System_Collections_Generic_List_object__o *AppendSkillInfo; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_List_object__o *v36; // x24
  Il2CppObject *Item; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *v44; // x0
  System_Collections_Generic_List_object__o **v45; // x23
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x2
  __int64 v53; // x3
  struct System_Object_array *items; // x8
  __int64 v55; // x9
  struct SvtUseSkillData_o *skillData; // x10
  struct System_Int32_array *svtSkillLvList; // x10
  int32_t v58; // w25
  int32_t v59; // w26
  int32_t v60; // w27
  AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v61; // x28
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x2
  __int64 v69; // x3
  struct System_Object_array *v70; // x8
  __int64 v71; // x9
  struct SvtUseSkillData_o *v72; // x10
  struct System_Int32_array *v73; // x10
  int32_t v74; // w22
  int32_t v75; // w24
  int32_t v76; // w25
  AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v77; // x26
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  System_Action_o *v87; // x21
  const MethodInfo *v88; // x4
  const MethodInfo *v89; // x4

  if ( (byte_4B1985C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userServantEntity, *(_QWORD *)&baseIndex);
    sub_1BCA7E0(&AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v13, v14);
    sub_1BCA7E0(&string_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_AppendSkillExchangeCombineControl___c__DisplayClass43_0__StartPlayEffect_b__0__, v17, v18);
    sub_1BCA7E0(&AppendSkillExchangeCombineControl___c__DisplayClass43_0_TypeInfo, v19, v20);
    byte_4B1985C = 1;
  }
  v21 = sub_1BCAA2C(
          AppendSkillExchangeCombineControl___c__DisplayClass43_0_TypeInfo,
          userServantEntity,
          *(_QWORD *)&baseIndex,
          *(_QWORD *)&targetIndex);
  AppendSkillExchangeCombineControl___c__DisplayClass43_0___ctor(
    (AppendSkillExchangeCombineControl___c__DisplayClass43_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_25;
  *(_QWORD *)(v21 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 64) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 64), (int64_t)callback, v30, v31, v32, v33, v34, v35);
  if ( !userServantEntity )
    goto LABEL_25;
  AppendSkillInfo = (System_Collections_Generic_List_object__o *)UserServantEntity__getAppendSkillInfo(
                                                                   userServantEntity,
                                                                   0LL);
  if ( !this->fields.targetList )
    goto LABEL_25;
  v36 = AppendSkillInfo;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.targetList,
           baseIndex,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  *(_QWORD *)(v21 + 32) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)Item, v38, v39, v40, v41, v42, v43);
  AppendSkillInfo = (System_Collections_Generic_List_object__o *)this->fields.targetList;
  if ( !AppendSkillInfo )
    goto LABEL_25;
  v44 = System_Collections_Generic_List_object___get_Item(
          AppendSkillInfo,
          targetIndex,
          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  *(_QWORD *)(v21 + 40) = v44;
  v45 = (System_Collections_Generic_List_object__o **)(v21 + 40);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), (int64_t)v44, v46, v47, v48, v49, v50, v51);
  if ( !v36 )
    goto LABEL_25;
  items = v36->fields._items;
  if ( !items )
    goto LABEL_25;
  if ( items->max_length <= baseIndex )
    goto LABEL_26;
  v55 = *(_QWORD *)&v36->fields._size;
  if ( !v55 )
    goto LABEL_25;
  if ( *(_DWORD *)(v55 + 24) <= (unsigned int)baseIndex )
    goto LABEL_26;
  skillData = this->fields.skillData;
  if ( !skillData || (svtSkillLvList = skillData->fields.svtSkillLvList) == 0LL )
LABEL_25:
    sub_1BCAA3C(AppendSkillInfo, v23);
  if ( svtSkillLvList->max_length <= baseIndex )
    goto LABEL_26;
  v58 = *((_DWORD *)items->m_Items + baseIndex);
  v59 = *(_DWORD *)(v55 + 4LL * baseIndex + 32);
  v60 = svtSkillLvList->m_Items[baseIndex + 1];
  v61 = (AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *)sub_1BCAA2C(
                                                                   AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo,
                                                                   v23,
                                                                   v52,
                                                                   v53);
  AppendSkillExchangeCombineControl_ExchangeSkillInfo___ctor(v61, baseIndex, v58, v59, v60, 0LL);
  *(_QWORD *)(v21 + 48) = v61;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 48), (int64_t)v61, v62, v63, v64, v65, v66, v67);
  v70 = v36->fields._items;
  if ( !v70 )
    goto LABEL_25;
  if ( v70->max_length <= targetIndex )
    goto LABEL_26;
  v71 = *(_QWORD *)&v36->fields._size;
  if ( !v71 )
    goto LABEL_25;
  if ( *(_DWORD *)(v71 + 24) <= (unsigned int)targetIndex )
LABEL_26:
    sub_1BCAA44(AppendSkillInfo, v23);
  v72 = this->fields.skillData;
  if ( !v72 )
    goto LABEL_25;
  v73 = v72->fields.svtSkillLvList;
  if ( !v73 )
    goto LABEL_25;
  if ( v73->max_length <= targetIndex )
    goto LABEL_26;
  v74 = *((_DWORD *)v70->m_Items + targetIndex);
  v75 = *(_DWORD *)(v71 + 4LL * targetIndex + 32);
  v76 = v73->m_Items[targetIndex + 1];
  v77 = (AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *)sub_1BCAA2C(
                                                                   AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo,
                                                                   v23,
                                                                   v68,
                                                                   v69);
  AppendSkillExchangeCombineControl_ExchangeSkillInfo___ctor(v77, targetIndex, v74, v75, v76, 0LL);
  *(_QWORD *)(v21 + 56) = v77;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 56), (int64_t)v77, v78, v79, v80, v81, v82, v83);
  AppendSkillInfo = *(System_Collections_Generic_List_object__o **)(v21 + 32);
  if ( !AppendSkillInfo )
    goto LABEL_25;
  ServantSkillInfoIconComponent__SetMsgLabel(
    (ServantSkillInfoIconComponent_o *)AppendSkillInfo,
    string_TypeInfo->static_fields->Empty,
    0LL);
  AppendSkillInfo = *v45;
  if ( !*v45 )
    goto LABEL_25;
  ServantSkillInfoIconComponent__SetMsgLabel(
    (ServantSkillInfoIconComponent_o *)AppendSkillInfo,
    string_TypeInfo->static_fields->Empty,
    0LL);
  *(_BYTE *)(v21 + 16) = 0;
  v87 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v84, v85, v86);
  System_Action___ctor(
    v87,
    (Il2CppObject *)v21,
    Method_AppendSkillExchangeCombineControl___c__DisplayClass43_0__StartPlayEffect_b__0__,
    0LL);
  AppendSkillExchangeCombineControl__PlayEffect(
    this,
    *(ServantSkillInfoIconComponent_o **)(v21 + 32),
    *(AppendSkillExchangeCombineControl_ExchangeSkillInfo_o **)(v21 + 48),
    v87,
    v88);
  AppendSkillExchangeCombineControl__PlayEffect(
    this,
    *(ServantSkillInfoIconComponent_o **)(v21 + 40),
    *(AppendSkillExchangeCombineControl_ExchangeSkillInfo_o **)(v21 + 56),
    v87,
    v89);
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
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B1985E & 1) == 0 )
  {
    sub_1BCA7E0(
      &AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_TypeInfo,
      baseSkillIcon,
      targetSkillIcon);
    byte_4B1985E = 1;
  }
  v13 = sub_1BCAA2C(
          AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_TypeInfo,
          baseSkillIcon,
          targetSkillIcon,
          baseSkillInfo);
  AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47___ctor(
    (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *)v13,
    0,
    0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_QWORD *)(v13 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 64) = baseSkillIcon;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 64), (int64_t)baseSkillIcon, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v13 + 72) = targetSkillIcon;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 72), (int64_t)targetSkillIcon, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v13 + 40) = baseSkillInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)baseSkillInfo, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v13 + 48) = targetSkillInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 48), (int64_t)targetSkillInfo, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v13 + 56) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 56), (int64_t)callback, v46, v47, v48, v49, v50, v51);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x24
  ServantSkillInfoIconComponent_o *v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x4

  if ( (byte_4B1985D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&idx, *(_QWORD *)&skillLv);
    sub_1BCA7E0(&Method_AppendSkillExchangeCombineControl___c__DisplayClass45_0__StartPlayLockEffect_b__0__, v11, v12);
    sub_1BCA7E0(&AppendSkillExchangeCombineControl___c__DisplayClass45_0_TypeInfo, v13, v14);
    byte_4B1985D = 1;
  }
  v15 = sub_1BCAA2C(
          AppendSkillExchangeCombineControl___c__DisplayClass45_0_TypeInfo,
          *(_QWORD *)&idx,
          *(_QWORD *)&skillLv,
          target);
  AppendSkillExchangeCombineControl___c__DisplayClass45_0___ctor(
    (AppendSkillExchangeCombineControl___c__DisplayClass45_0_o *)v15,
    0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = target,
        sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)target, v18, v19, v20, v21, v22, v23),
        *(_DWORD *)(v15 + 24) = skillLv,
        v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v15,
          Method_AppendSkillExchangeCombineControl___c__DisplayClass45_0__StartPlayLockEffect_b__0__,
          0LL),
        AppendSkillExchangeCombineControl__PlayLockEffect(this, idx, v27, startPlayLevelExchangeEffect, v28),
        (v16 = *(ServantSkillInfoIconComponent_o **)(v15 + 16)) == 0LL) )
  {
    sub_1BCAA3C(v16, v17);
  }
  ServantSkillInfoIconComponent__PlaySkillIconTweenColor(v16, 1, 0LL);
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
    sub_1BCAA3C(v8, v9);
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


void __fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47___ctor(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47__MoveNext(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t _1__state; // w8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v9; // x8
  AppendSkillExchangeCombineControl_o *_4__this; // x20
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v11; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  bool result; // w0
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *baseSkillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  int32_t v22; // w20
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *targetSkillInfo; // x8
  int32_t v24; // w21
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v25; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v26; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v27; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v28; // x8

  v3 = this;
  if ( (byte_4B19965 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *)sub_1BCA7E0(
                                                                                        &Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__,
                                                                                        v6,
                                                                                        v7);
    byte_4B19965 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
    baseSkillInfo = v3->fields.baseSkillInfo;
    if ( !baseSkillInfo )
      goto LABEL_30;
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    if ( !this )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                        baseSkillInfo->fields.skillId,
                                                                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    v22 = this ? LODWORD(this->fields.baseSkillInfo) : 10;
    targetSkillInfo = v3->fields.targetSkillInfo;
    if ( !targetSkillInfo )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                        v21,
                                                                                        targetSkillInfo->fields.skillId,
                                                                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    v24 = this ? LODWORD(this->fields.baseSkillInfo) : 10;
    v25 = v3->fields.baseSkillInfo;
    if ( !v25 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *)v3->fields.baseSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
      (ServantSkillInfoIconComponent_o *)this,
      v25->fields.currentSkillLv,
      0,
      1,
      1,
      0LL);
    v26 = v3->fields.targetSkillInfo;
    if ( !v26 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *)v3->fields.targetSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
      (ServantSkillInfoIconComponent_o *)this,
      v26->fields.currentSkillLv,
      0,
      1,
      1,
      0LL);
    v27 = v3->fields.baseSkillInfo;
    if ( !v27 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *)v3->fields.baseSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetLevelLabel(
      (ServantSkillInfoIconComponent_o *)this,
      v27->fields.currentSkillLv,
      v22,
      0LL);
    v28 = v3->fields.targetSkillInfo;
    if ( !v28 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *)v3->fields.targetSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetLevelLabel(
      (ServantSkillInfoIconComponent_o *)this,
      v28->fields.currentSkillLv,
      v24,
      0LL);
  }
  else if ( !_1__state )
  {
    _4__this = v3->fields.__4__this;
    v9 = v3->fields.baseSkillInfo;
    v3->fields.__1__state = -1;
    if ( v9 )
    {
      if ( _4__this )
      {
        AppendSkillExchangeCombineControl__PlayLevelExchangeEffect(_4__this, v9->fields.index, 0LL, 0LL);
        v11 = v3->fields.targetSkillInfo;
        if ( v11 )
        {
          AppendSkillExchangeCombineControl__PlayLevelExchangeEffect(
            _4__this,
            v11->fields.index,
            v3->fields.callback,
            0LL);
          v3->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1BCA784(p__2__current, 0LL, v13, v14, v15, v16, v17, v18);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47__System_Collections_IEnumerator_Reset(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47__System_Collections_IEnumerator_get_Current(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47__System_IDisposable_Dispose(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass35_0___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AppendSkillExchangeCombineControl___c__DisplayClass35_0___OnClickInfo_b__1(
        AppendSkillExchangeCombineControl___c__DisplayClass35_0_o *this,
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
    sub_1BCAA44(this, x);
  if ( !x )
LABEL_6:
    sub_1BCAA3C(this, x);
  return useSkillIdList->m_Items[idx + 1] == x->fields.currentSkillId;
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass35_1___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AppendSkillExchangeCombineControl___c__DisplayClass35_1___OnClickInfo_b__0(
        AppendSkillExchangeCombineControl___c__DisplayClass35_1_o *this,
        ServantSkillInfoIconComponent_o *x,
        const MethodInfo *method)
{
  struct AppendSkillExchangeCombineControl___c__DisplayClass35_0_o *CS___8__locals1; // x8
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
    sub_1BCAA44(this, x);
  if ( !x )
LABEL_7:
    sub_1BCAA3C(this, x);
  return useSkillIdList->m_Items[animBaseIndex + 1] == x->fields.currentSkillId;
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass43_0___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass43_0___StartPlayEffect_b__0(
        AppendSkillExchangeCombineControl___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *appended; // x1

  if ( this->fields.isLast )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( !_4__this )
      sub_1BCAA3C(this, method);
    appended = AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect(
                 this->fields.__4__this,
                 this->fields.baseSkillIcon,
                 this->fields.targetSkillIcon,
                 this->fields.baseSkillInfo,
                 this->fields.targetSkillInfo,
                 this->fields.callback,
                 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516(_4__this, appended, 0LL);
  }
  else
  {
    this->fields.isLast = 1;
  }
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass45_0___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AppendSkillExchangeCombineControl___c__DisplayClass45_0___StartPlayLockEffect_b__0(
        AppendSkillExchangeCombineControl___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  ServantSkillInfoIconComponent_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1BCAA3C(0LL, method);
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(target, this->fields.skillLv, 0, 0, 1, 0LL);
}