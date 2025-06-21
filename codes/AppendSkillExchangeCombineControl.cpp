void __fastcall AppendSkillExchangeCombineControl___ctor(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B20179 & 1) == 0 )
  {
    sub_1BCAFF8(&CombineMenuControl_TypeInfo, method);
    byte_4B20179 = 1;
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
  CGThumbnailListItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B20169 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_20433/*"img_txt_append"*/, v5);
    sub_1BCAFF8(&StringLiteral_22756/*"rarity5_1"*/, v6);
    sub_1BCAFF8(&StringLiteral_20434/*"img_txt_append_exchange"*/, v7);
    sub_1BCAFF8(&StringLiteral_17515/*"buttontxt_exchange"*/, v8);
    sub_1BCAFF8(&StringLiteral_1975/*"APPEND_SKILL_EXCHANGE_INFO"*/, v9);
    byte_4B20169 = 1;
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
  AtlasManager__SetCharaGraphaOption(charaSprite, (System_String_o *)StringLiteral_22756/*"rarity5_1"*/, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17515/*"buttontxt_exchange"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.titleImg, (System_String_o *)StringLiteral_20433/*"img_txt_append"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20434/*"img_txt_append_exchange"*/, 0LL);
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1975/*"APPEND_SKILL_EXCHANGE_INFO"*/, 0LL);
  if ( !detailInfoLb )
    goto LABEL_20;
  UILabel__set_text(detailInfoLb, (System_String_o *)helpBtn, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
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
      sub_1BCAF9C(p_charaGraph, 0, v20, v21);
      return;
    }
LABEL_20:
    sub_1BCB254(helpBtn, v12);
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

  if ( (byte_4B2016A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&string_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_1984/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, v6);
    byte_4B2016A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1984/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, 0LL);
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
                           (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !baseSelectInfoLb )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)baseSelectInfoLb, 0LL);
      if ( v11 == ++v12 )
        return;
      baseSelectInfoLb = this->fields.skillInfoList;
    }
    while ( baseSelectInfoLb );
LABEL_13:
    sub_1BCB254(baseSelectInfoLb, v9);
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
  int64_t strengthStatusSprite; // x21
  const MethodInfo *v13; // x5
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B20172 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4B20172 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B165D1 = 1;
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
  strengthStatusSprite = (int64_t)appendSkillExchangeDialog->fields.appendSkillTargetIconComp->fields.strengthStatusSprite;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  appendSkillExchangeDialog = (AppendSkillExchangeDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                               v15,
                                                               0LL);
  if ( !Master_object )
    goto LABEL_20;
  appendSkillExchangeDialog = (AppendSkillExchangeDialog_o *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                                                               (UserServantAppendPassiveSkillMaster_o *)Master_object,
                                                               &entity,
                                                               strengthStatusSprite,
                                                               (int32_t)appendSkillExchangeDialog,
                                                               0LL);
  if ( ((unsigned __int8)appendSkillExchangeDialog & 1) == 0 )
    return;
  if ( !entity || (appendSkillExchangeDialog = this->fields.appendSkillExchangeDialog) == 0LL )
LABEL_20:
    sub_1BCB254(appendSkillExchangeDialog, v6);
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
  __int64 v17; // x20
  TweenColor_o *SelectMskImgTweenColor; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t currentBaseIdx; // w22
  int32_t currentTargetIdx; // w23
  __int64 v27; // x8
  Il2CppObject *v28; // x22
  UnityEngine_Object_o *v29; // x21
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  int32_t v32; // w8
  int32_t v33; // w9
  int32_t v34; // w1
  int32_t v35; // w10
  const MethodInfo *v36; // x1
  TweenColor_o *v37; // x19
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x22
  System_Func_object__bool__o *v39; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  Il2CppObject *v42; // x0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *v43; // x22
  Il2CppObject *v44; // x23
  System_Func_object__bool__o *v45; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_4B2016D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AppendSkillExchangeCombineControl_OnClickInfo__, isDecide);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___, v9);
    sub_1BCAFF8(&System_Func_ServantSkillInfoIconComponent__bool__TypeInfo, v10);
    sub_1BCAFF8(&System_Math_TypeInfo, v11);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v12);
    sub_1BCAFF8(&Method_AppendSkillExchangeCombineControl___c__DisplayClass36_0__OnClickInfo_b__1__, v13);
    sub_1BCAFF8(&AppendSkillExchangeCombineControl___c__DisplayClass36_0_TypeInfo, v14);
    sub_1BCAFF8(&Method_AppendSkillExchangeCombineControl___c__DisplayClass36_1__OnClickInfo_b__0__, v15);
    sub_1BCAFF8(&AppendSkillExchangeCombineControl___c__DisplayClass36_1_TypeInfo, v16);
    byte_4B2016D = 1;
  }
  v17 = sub_1BCB244(AppendSkillExchangeCombineControl___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_36;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_DWORD *)(v17 + 24) = idx;
  if ( isDecide )
  {
    if ( ((this->fields.currentTargetIdx ^ this->fields.currentBaseIdx) & 0x80000000) == 0 )
      goto LABEL_11;
    v22 = sub_1BCB244(AppendSkillExchangeCombineControl___c__DisplayClass36_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v22, 0LL);
    if ( !v22 )
      goto LABEL_36;
    *(_QWORD *)(v22 + 24) = v17;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 24), v17, v23, v24);
    currentBaseIdx = this->fields.currentBaseIdx;
    currentTargetIdx = this->fields.currentTargetIdx;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    SelectMskImgTweenColor = (TweenColor_o *)System_Math__Max_63972460(currentBaseIdx, currentTargetIdx, 0LL);
    v27 = *(_QWORD *)(v22 + 24);
    *(_DWORD *)(v22 + 16) = (_DWORD)SelectMskImgTweenColor;
    if ( !v27 )
      goto LABEL_36;
    if ( (_DWORD)SelectMskImgTweenColor != *(_DWORD *)(v27 + 24) )
    {
      targetList = this->fields.targetList;
      v39 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ServantSkillInfoIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v39,
        (Il2CppObject *)v22,
        Method_AppendSkillExchangeCombineControl___c__DisplayClass36_1__OnClickInfo_b__0__,
        0LL);
      v40 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)targetList,
              (System_Func_TSource__bool__o *)v39,
              (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
      v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v40,
                                                                   (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
      v42 = System_Linq_Enumerable__FirstOrDefault_object_(
              v41,
              (const MethodInfo_303F1D0 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
      v43 = this->fields.targetList;
      v44 = *(Il2CppObject **)(v22 + 24);
      v29 = (UnityEngine_Object_o *)v42;
      v45 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ServantSkillInfoIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v45,
        v44,
        Method_AppendSkillExchangeCombineControl___c__DisplayClass36_0__OnClickInfo_b__1__,
        0LL);
      v46 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v43,
              (System_Func_TSource__bool__o *)v45,
              (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v46,
                                                                   (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
      v28 = System_Linq_Enumerable__FirstOrDefault_object_(
              v47,
              (const MethodInfo_303F1D0 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
    }
    else
    {
LABEL_11:
      v28 = 0LL;
      v29 = 0LL;
    }
    v30 = Method_AppendSkillExchangeCombineControl_OnClickInfo__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeCombineControl_OnClickInfo__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1BCB010(Method_AppendSkillExchangeCombineControl_OnClickInfo__);
    v31 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v30, v30[4]);
    v32 = *(_DWORD *)(v17 + 24);
    v33 = this->fields.currentBaseIdx;
    if ( v33 == v32 )
    {
      v32 = -1;
LABEL_16:
      v34 = 0;
      this->fields.currentBaseIdx = v32;
      goto LABEL_23;
    }
    v35 = this->fields.currentTargetIdx;
    if ( v35 == v32 )
    {
      v34 = 0;
      v32 = -1;
    }
    else
    {
      if ( (v33 & 0x80000000) != 0 )
        goto LABEL_16;
      if ( (v35 & 0x80000000) == 0 )
      {
        v34 = 2;
LABEL_23:
        OverwriteAssetSoundName__PlaySystemSe(v31, v34, 0, 0LL);
        AppendSkillExchangeCombineControl__SetNeedItemInfo(this, v36);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          SelectMskImgTweenColor = (TweenColor_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
          if ( ((unsigned __int8)SelectMskImgTweenColor & 1) != 0 )
          {
            if ( v28 )
            {
              SelectMskImgTweenColor = ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
                                         (ServantSkillInfoIconComponent_o *)v28,
                                         0LL);
              if ( v29 )
              {
                v37 = SelectMskImgTweenColor;
                SelectMskImgTweenColor = ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
                                           (ServantSkillInfoIconComponent_o *)v29,
                                           0LL);
                if ( v37 )
                {
                  ((void (__fastcall *)(TweenColor_o *, TweenColor_o *, void *))v37->klass->vtable._8_SynchronizeTween.method)(
                    v37,
                    SelectMskImgTweenColor,
                    v37->klass[1]._1.image);
                  return;
                }
              }
            }
LABEL_36:
            sub_1BCB254(SelectMskImgTweenColor, v19);
          }
        }
        return;
      }
      v34 = 0;
    }
    this->fields.currentTargetIdx = v32;
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
    sub_1BCB254(this, targetSkillIcon);
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

  if ( (byte_4B20178 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    byte_4B20178 = 1;
  }
  effectSkillLvChange = (Il2CppObject *)this->fields.effectSkillLvChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillLvChange,
                                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object
    || (v13 = (UnityEngine_Component_o *)Component_object,
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL),
        Component_object = UnityEngine_Component__get_gameObject(v13, 0LL),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0LL)
    || (v15 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0LL)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCB254(Component_object, v12);
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

  if ( (byte_4B20177 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v9);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    byte_4B20177 = 1;
  }
  effectSkillLock = (Il2CppObject *)this->fields.effectSkillLock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillLock,
                                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
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
                                                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0LL)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCB254(Component_object, v14);
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

  if ( (byte_4B20176 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___, *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v7);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    byte_4B20176 = 1;
  }
  effectSkillUnlock = (Il2CppObject *)this->fields.effectSkillUnlock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillUnlock,
                                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object
    || (v13 = (UnityEngine_Component_o *)Component_object,
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0LL),
        Component_object = UnityEngine_Component__get_gameObject(v13, 0LL),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0LL)
    || (v15 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0LL)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCB254(Component_object, v12);
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
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  struct UICharaGraphTexture_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(AppendSkillExchangeCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                         this,
                                         this->fields.charaGraph,
                                         userSvtEnt,
                                         this->klass[1]._1.image);
  this->fields.charaGraph = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_charaGraph, (int32_t)v5, v6, v7);
}


void __fastcall AppendSkillExchangeCombineControl__SetBaseSvtSkillInfo(
        AppendSkillExchangeCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4B2016B & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, userSvtEnt);
    sub_1BCAFF8(&StringLiteral_1984/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, v6);
    byte_4B2016B = 1;
  }
  if ( userSvtEnt )
  {
    this->fields.baseUserServantEntity = userSvtEnt;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)userSvtEnt, (int32_t)method, v3);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1984/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, 0LL);
    AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v7, 1, v8);
    baseSelectInfoLb = this->fields.baseSelectInfoLb;
    if ( !baseSelectInfoLb )
      sub_1BCB254(0LL, v9);
    UnityEngine_GameObject__SetActive(baseSelectInfoLb, 0, 0LL);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0LL);
    this->fields.skillData = AppendSkillInfo;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillData, (int32_t)AppendSkillInfo, v12, v13);
    AppendSkillExchangeCombineControl__SetSkillIconInfo(this, this->fields.skillData, v14);
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
  __int64 v13; // x2
  struct SvtUseSkillData_o *skillData; // x10
  System_String_o *Empty; // x20
  __int64 currentBaseIdx; // x9
  __int64 currentTargetIdx; // x8
  struct System_Int32_array *svtSkillLvList; // x10
  unsigned int max_length; // w11
  int32_t v20; // w20
  bool v21; // w21
  __int64 *v22; // x8
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B20171 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v3);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v4);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&string_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_1972/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/, v7);
    sub_1BCAFF8(&StringLiteral_1971/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/, v8);
    byte_4B20171 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg
    || (combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    combineBtnBg,
                                                    (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        !this->fields.confirmButtonEffect)
    || (v10 = (UIWidget_o *)combineBtnBg,
        combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    this->fields.confirmButtonEffect,
                                                    (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
        !this->fields.confirmButtonEffect)
    || (v11 = (UnityEngine_Behaviour_o *)combineBtnBg,
        combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    this->fields.confirmButtonEffect,
                                                    (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
        !this->fields.confirmButtonEffect)
    || (v12 = (UnityEngine_Behaviour_o *)combineBtnBg,
        (combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                     this->fields.confirmButtonEffect,
                                                     0LL)) == 0LL) )
  {
LABEL_36:
    sub_1BCB254(combineBtnBg, method);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)combineBtnBg,
    this->fields._IsExeCombine_k__BackingField,
    0LL);
  if ( this->fields._IsExeCombine_k__BackingField )
  {
    if ( !v10 )
      goto LABEL_36;
    v23.fields.r = 1.0;
    v23.fields.g = 1.0;
    v23.fields.b = 1.0;
    v23.fields.a = 1.0;
    UIWidget__set_color(v10, v23, 0LL);
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
    v24.fields.r = 0.5;
    v24.fields.g = 0.5;
    v24.fields.b = 0.5;
    v24.fields.a = 1.0;
    UIWidget__set_color(v10, v24, 0LL);
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
    v21 = 0;
    goto LABEL_30;
  }
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_36;
  max_length = svtSkillLvList->max_length;
  if ( (unsigned int)currentBaseIdx >= max_length || (unsigned int)currentTargetIdx >= max_length )
    sub_1BCB25C(combineBtnBg, method, v13);
  v20 = svtSkillLvList->m_Items[currentBaseIdx + 1];
  v21 = v20 == svtSkillLvList->m_Items[currentTargetIdx + 1];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v20 )
      goto LABEL_25;
LABEL_28:
    v22 = &StringLiteral_1972/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/;
    goto LABEL_29;
  }
  if ( !v20 )
    goto LABEL_28;
LABEL_25:
  v22 = &StringLiteral_1971/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/;
LABEL_29:
  Empty = LocalizationManager__Get((System_String_o *)*v22, 0LL);
LABEL_30:
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineTxt;
  if ( !combineBtnBg )
    goto LABEL_36;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(combineBtnBg, 0LL);
  if ( !combineBtnBg )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineBtnBg, v21, 0LL);
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineTxt;
  if ( !v21 )
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
  __int64 v16; // x2
  __int64 currentBaseIdx; // x8
  ServantSkillInfoIconComponent_o *v18; // x21
  struct System_Int32_array *useSkillIdList; // x9
  _BOOL4 v20; // w27
  __int64 v21; // x8
  struct System_Int32_array *v22; // x9
  _BOOL4 v23; // w28
  __int64 *v24; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v26; // x2
  int32_t currentTargetIdx; // w20
  System_String_o **v28; // x8
  System_String_o *v29; // x1
  const MethodInfo *v30; // x3

  if ( (byte_4B2016E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&string_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_1973/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/, v6);
    sub_1BCAFF8(&StringLiteral_8737/*"MSG_SKILL_INFO"*/, v7);
    sub_1BCAFF8(&StringLiteral_1985/*"APPEND_SKILL_EXCHANGE_PRESELECT_TARGET_INFO"*/, v8);
    sub_1BCAFF8(&StringLiteral_1983/*"APPEND_SKILL_EXCHANGE_PRESELECT_BASE_INFO"*/, v9);
    sub_1BCAFF8(&StringLiteral_1974/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/, v10);
    sub_1BCAFF8(&StringLiteral_1987/*"APPEND_SKILL_EXCHANGE_SELECTED_MSG"*/, v11);
    byte_4B2016E = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    selectSkillHelpLb = this->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    targetList = LocalizationManager__Get((System_String_o *)StringLiteral_8737/*"MSG_SKILL_INFO"*/, 0LL);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, targetList, 0LL),
          (targetList = (System_String_o *)this->fields.targetList) == 0LL) )
    {
LABEL_32:
      sub_1BCB254(targetList, v14);
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
          v28 = (System_String_o **)&StringLiteral_1983/*"APPEND_SKILL_EXCHANGE_PRESELECT_BASE_INFO"*/;
        }
        else
        {
          currentTargetIdx = this->fields.currentTargetIdx;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v28 = (System_String_o **)&StringLiteral_1985/*"APPEND_SKILL_EXCHANGE_PRESELECT_TARGET_INFO"*/;
          if ( currentTargetIdx >= 0 )
            v28 = (System_String_o **)&StringLiteral_1987/*"APPEND_SKILL_EXCHANGE_SELECTED_MSG"*/;
        }
        v29 = LocalizationManager__Get(*v28, 0LL);
        AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v29, 0, v30);
        return;
      }
      targetList = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)targetList,
                                        v15,
                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      currentBaseIdx = (unsigned int)this->fields.currentBaseIdx;
      v18 = (ServantSkillInfoIconComponent_o *)targetList;
      if ( (currentBaseIdx & 0x80000000) != 0 )
      {
        v20 = 0;
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
        v20 = useSkillIdList->m_Items[currentBaseIdx + 1] == LODWORD(targetList[7].monitor);
      }
      v21 = (unsigned int)this->fields.currentTargetIdx;
      if ( (v21 & 0x80000000) != 0 )
      {
        if ( !targetList )
          goto LABEL_32;
        v23 = 0;
      }
      else
      {
        v22 = this->fields.useSkillIdList;
        if ( !v22 )
          goto LABEL_32;
        if ( (unsigned int)v21 >= v22->max_length )
LABEL_44:
          sub_1BCB25C(targetList, v14, v16);
        if ( !targetList )
          goto LABEL_32;
        v23 = v22->m_Items[v21 + 1] == LODWORD(targetList[7].monitor);
      }
      ServantSkillInfoIconComponent__SetDispSelectMskImg((ServantSkillInfoIconComponent_o *)targetList, v20 || v23, 0LL);
      if ( v20 )
      {
        v24 = &StringLiteral_1973/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v24 = &StringLiteral_1973/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/;
        }
      }
      else
      {
        if ( !v23 )
        {
          Empty = string_TypeInfo->static_fields->Empty;
          goto LABEL_31;
        }
        v24 = &StringLiteral_1974/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v24 = &StringLiteral_1974/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/;
        }
      }
      Empty = LocalizationManager__Get((System_String_o *)*v24, 0LL);
LABEL_31:
      ServantSkillInfoIconComponent__SetMsgLabel(v18, Empty, 0LL);
      AppendSkillExchangeCombineControl__SetSvtSkillCombineData(this, v15, v26);
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
    sub_1BCB254(preSelectBaseLb, msg);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 1, 0LL);
}


void __fastcall AppendSkillExchangeCombineControl__SetRequest(
        AppendSkillExchangeCombineControl_o *this,
        System_Action_o *request,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.requestAppendSkillExchange = request;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.requestAppendSkillExchange, (int32_t)request, (int32_t)method, v3);
}


void __fastcall AppendSkillExchangeCombineControl__SetSkillIconInfo(
        AppendSkillExchangeCombineControl_o *this,
        SvtUseSkillData_o *skillData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SvtUseSkillData_o *v4; // x25
  AppendSkillExchangeCombineControl_o *v5; // x20
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
  __int64 v22; // x2
  unsigned __int64 v23; // x23
  struct System_Int32_array *v24; // x8
  int32_t v25; // w24
  int32_t type; // w26
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v29; // x27
  int32_t v30; // w28
  SvtUseSkillData_o *v31; // x22
  Il2CppObject *Item; // x25
  ServantSkillInfoIconComponent_ClickDelegate_o *v33; // x29
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v39; // x8
  AppendSkillExchangeCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v4 = skillData;
  v5 = this;
  if ( (byte_4B2016C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AppendSkillExchangeCombineControl_OnClickInfo__, skillData);
    sub_1BCAFF8(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo, v13);
    this = (AppendSkillExchangeCombineControl_o *)sub_1BCAFF8(&StringLiteral_856/*"-"*/, v14);
    byte_4B2016C = 1;
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
  p_targetList = (AppendSkillExchangeCombineControl_o **)&v5->fields.targetList;
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
        this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
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
        this = (AppendSkillExchangeCombineControl_o *)v5->fields.skillInfoList;
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
          (intptr_t)Method_AppendSkillExchangeCombineControl_OnClickInfo__,
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
          0,
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
  AppendSkillExchangeCombineControl__SetNeedItemInfo(v5, (const MethodInfo *)skillData);
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
  __int64 v16; // x26
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4B20170 & 1) == 0 )
  {
    sub_1BCAFF8(&SetLevelUpData_TypeInfo, lvUpData);
    byte_4B20170 = 1;
  }
  v16 = sub_1BCB244(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor((SetLevelUpData_o *)v16, 0LL);
  if ( !v16 )
    sub_1BCB254(v17, v18);
  *(_DWORD *)(v16 + 28) = idx;
  *(_DWORD *)(v16 + 16) = currentSkillId;
  *(_DWORD *)(v16 + 20) = currentSkillId;
  *(_QWORD *)(v16 + 40) = skillName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 40), (int32_t)skillName, v19, v20);
  *(_DWORD *)(v16 + 64) = currentSkillLv;
  *(_DWORD *)(v16 + 24) = currentSkillNum;
  *(_QWORD *)(v16 + 48) = skillDetail;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 48), (int32_t)skillDetail, v21, v22);
  *lvUpData = (SetLevelUpData_o *)v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)lvUpData, v16, v23, v24);
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
  if ( (byte_4B2016F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&idx);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    this = (AppendSkillExchangeCombineControl_o *)sub_1BCAFF8(
                                                    &Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__,
                                                    v7);
    byte_4B2016F = 1;
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
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_61;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          v11,
          (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__) )
    return;
  this = (AppendSkillExchangeCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_61;
  this = (AppendSkillExchangeCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  idx,
                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
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
      sub_1BCB25C(this, *(_QWORD *)&idx, method);
    v18 = v16->m_Items[currentBaseIdx + 1] != v16->m_Items[currentTargetIdx + 1];
  }
  v4->fields._IsExeCombine_k__BackingField = v18;
  if ( !v18 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
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
                                                  (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
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
                                                  (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
    sub_1BCB254(this, *(_QWORD *)&idx);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x24
  Il2CppObject *Item; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x0
  System_Collections_Generic_List_object__o **v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x2
  struct System_Object_array *items; // x8
  __int64 v33; // x9
  struct SvtUseSkillData_o *skillData; // x10
  struct System_Int32_array *svtSkillLvList; // x10
  int v36; // w27
  int v37; // w28
  int32_t v38; // w29
  __int64 v39; // x25
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  __int64 v43; // x9
  struct SvtUseSkillData_o *v44; // x10
  struct System_Int32_array *v45; // x10
  int v46; // w24
  int v47; // w25
  int32_t v48; // w27
  __int64 v49; // x22
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Action_o *v52; // x21
  const MethodInfo *v53; // x4
  const MethodInfo *v54; // x4

  if ( (byte_4B20173 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, userServantEntity);
    sub_1BCAFF8(&AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__, v12);
    sub_1BCAFF8(&string_TypeInfo, v13);
    sub_1BCAFF8(&Method_AppendSkillExchangeCombineControl___c__DisplayClass44_0__StartPlayEffect_b__0__, v14);
    sub_1BCAFF8(&AppendSkillExchangeCombineControl___c__DisplayClass44_0_TypeInfo, v15);
    byte_4B20173 = 1;
  }
  v16 = sub_1BCB244(AppendSkillExchangeCombineControl___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_25;
  *(_QWORD *)(v16 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 24), (int32_t)this, v19, v20);
  *(_QWORD *)(v16 + 64) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 64), (int32_t)callback, v21, v22);
  if ( !userServantEntity )
    goto LABEL_25;
  AppendSkillInfo = (System_Collections_Generic_List_object__o *)UserServantEntity__getAppendSkillInfo(
                                                                   userServantEntity,
                                                                   0LL);
  if ( !this->fields.targetList )
    goto LABEL_25;
  v23 = AppendSkillInfo;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.targetList,
           baseIndex,
           (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  *(_QWORD *)(v16 + 32) = Item;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 32), (int32_t)Item, v25, v26);
  AppendSkillInfo = (System_Collections_Generic_List_object__o *)this->fields.targetList;
  if ( !AppendSkillInfo )
    goto LABEL_25;
  v27 = System_Collections_Generic_List_object___get_Item(
          AppendSkillInfo,
          targetIndex,
          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  *(_QWORD *)(v16 + 40) = v27;
  v28 = (System_Collections_Generic_List_object__o **)(v16 + 40);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 40), (int32_t)v27, v29, v30);
  if ( !v23 )
    goto LABEL_25;
  items = v23->fields._items;
  if ( !items )
    goto LABEL_25;
  if ( items->max_length <= baseIndex )
    goto LABEL_26;
  v33 = *(_QWORD *)&v23->fields._size;
  if ( !v33 )
    goto LABEL_25;
  if ( *(_DWORD *)(v33 + 24) <= (unsigned int)baseIndex )
    goto LABEL_26;
  skillData = this->fields.skillData;
  if ( !skillData || (svtSkillLvList = skillData->fields.svtSkillLvList) == 0LL )
LABEL_25:
    sub_1BCB254(AppendSkillInfo, v18);
  if ( svtSkillLvList->max_length <= baseIndex )
    goto LABEL_26;
  v36 = *((_DWORD *)items->m_Items + baseIndex);
  v37 = *(_DWORD *)(v33 + 4LL * baseIndex + 32);
  v38 = svtSkillLvList->m_Items[baseIndex + 1];
  v39 = sub_1BCB244(AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  *(_DWORD *)(v39 + 16) = baseIndex;
  *(_DWORD *)(v39 + 20) = v36;
  *(_DWORD *)(v39 + 24) = v37;
  *(_DWORD *)(v39 + 28) = v38;
  *(_QWORD *)(v16 + 48) = v39;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 48), v39, v40, v41);
  v42 = v23->fields._items;
  if ( !v42 )
    goto LABEL_25;
  if ( v42->max_length <= targetIndex )
    goto LABEL_26;
  v43 = *(_QWORD *)&v23->fields._size;
  if ( !v43 )
    goto LABEL_25;
  if ( *(_DWORD *)(v43 + 24) <= (unsigned int)targetIndex )
LABEL_26:
    sub_1BCB25C(AppendSkillInfo, v18, v31);
  v44 = this->fields.skillData;
  if ( !v44 )
    goto LABEL_25;
  v45 = v44->fields.svtSkillLvList;
  if ( !v45 )
    goto LABEL_25;
  if ( v45->max_length <= targetIndex )
    goto LABEL_26;
  v46 = *((_DWORD *)v42->m_Items + targetIndex);
  v47 = *(_DWORD *)(v43 + 4LL * targetIndex + 32);
  v48 = v45->m_Items[targetIndex + 1];
  v49 = sub_1BCB244(AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  *(_DWORD *)(v49 + 16) = targetIndex;
  *(_DWORD *)(v49 + 20) = v46;
  *(_DWORD *)(v49 + 24) = v47;
  *(_DWORD *)(v49 + 28) = v48;
  *(_QWORD *)(v16 + 56) = v49;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 56), v49, v50, v51);
  AppendSkillInfo = *(System_Collections_Generic_List_object__o **)(v16 + 32);
  if ( !AppendSkillInfo )
    goto LABEL_25;
  ServantSkillInfoIconComponent__SetMsgLabel(
    (ServantSkillInfoIconComponent_o *)AppendSkillInfo,
    string_TypeInfo->static_fields->Empty,
    0LL);
  AppendSkillInfo = *v28;
  if ( !*v28 )
    goto LABEL_25;
  ServantSkillInfoIconComponent__SetMsgLabel(
    (ServantSkillInfoIconComponent_o *)AppendSkillInfo,
    string_TypeInfo->static_fields->Empty,
    0LL);
  *(_BYTE *)(v16 + 16) = 0;
  v52 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v16,
    Method_AppendSkillExchangeCombineControl___c__DisplayClass44_0__StartPlayEffect_b__0__,
    0LL);
  AppendSkillExchangeCombineControl__PlayEffect(
    this,
    *(ServantSkillInfoIconComponent_o **)(v16 + 32),
    *(AppendSkillExchangeCombineControl_ExchangeSkillInfo_o **)(v16 + 48),
    v52,
    v53);
  AppendSkillExchangeCombineControl__PlayEffect(
    this,
    *(ServantSkillInfoIconComponent_o **)(v16 + 40),
    *(AppendSkillExchangeCombineControl_ExchangeSkillInfo_o **)(v16 + 56),
    v52,
    v54);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4B20175 & 1) == 0 )
  {
    sub_1BCAFF8(&AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_TypeInfo, baseSkillIcon);
    byte_4B20175 = 1;
  }
  v13 = sub_1BCB244(AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v14, v15);
  *(_QWORD *)(v13 + 64) = baseSkillIcon;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 64), (int32_t)baseSkillIcon, v16, v17);
  *(_QWORD *)(v13 + 72) = targetSkillIcon;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 72), (int32_t)targetSkillIcon, v18, v19);
  *(_QWORD *)(v13 + 40) = baseSkillInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 40), (int32_t)baseSkillInfo, v20, v21);
  *(_QWORD *)(v13 + 48) = targetSkillInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 48), (int32_t)targetSkillInfo, v22, v23);
  *(_QWORD *)(v13 + 56) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 56), (int32_t)callback, v24, v25);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x4

  if ( (byte_4B20174 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_AppendSkillExchangeCombineControl___c__DisplayClass46_0__StartPlayLockEffect_b__0__, v11);
    sub_1BCAFF8(&AppendSkillExchangeCombineControl___c__DisplayClass46_0_TypeInfo, v12);
    byte_4B20174 = 1;
  }
  v13 = sub_1BCB244(AppendSkillExchangeCombineControl___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = target,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)target, v16, v17),
        *(_DWORD *)(v13 + 24) = skillLv,
        v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v13,
          Method_AppendSkillExchangeCombineControl___c__DisplayClass46_0__StartPlayLockEffect_b__0__,
          0LL),
        AppendSkillExchangeCombineControl__PlayLockEffect(this, idx, v18, startPlayLevelExchangeEffect, v19),
        (v14 = *(ServantSkillInfoIconComponent_o **)(v13 + 16)) == 0LL) )
  {
    sub_1BCB254(v14, v15);
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
    sub_1BCB254(v8, v9);
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
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool result; // w0
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *baseSkillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  int32_t v17; // w20
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *targetSkillInfo; // x8
  int32_t v19; // w21
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v20; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v21; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v22; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v23; // x8

  v3 = this;
  if ( (byte_4B2017A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)sub_1BCAFF8(
                                                                                        &Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__,
                                                                                        v5);
    byte_4B2017A = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
    baseSkillInfo = v3->fields.baseSkillInfo;
    if ( !baseSkillInfo )
      goto LABEL_30;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    if ( !this )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                        baseSkillInfo->fields.skillId,
                                                                                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    v17 = this ? LODWORD(this->fields.baseSkillInfo) : 10;
    targetSkillInfo = v3->fields.targetSkillInfo;
    if ( !targetSkillInfo )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                        v16,
                                                                                        targetSkillInfo->fields.skillId,
                                                                                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    v19 = this ? LODWORD(this->fields.baseSkillInfo) : 10;
    v20 = v3->fields.baseSkillInfo;
    if ( !v20 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.baseSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
      (ServantSkillInfoIconComponent_o *)this,
      v20->fields.currentSkillLv,
      0,
      1,
      1,
      0LL);
    v21 = v3->fields.targetSkillInfo;
    if ( !v21 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.targetSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
      (ServantSkillInfoIconComponent_o *)this,
      v21->fields.currentSkillLv,
      0,
      1,
      1,
      0LL);
    v22 = v3->fields.baseSkillInfo;
    if ( !v22 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.baseSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetLevelLabel(
      (ServantSkillInfoIconComponent_o *)this,
      v22->fields.currentSkillLv,
      v17,
      0LL);
    v23 = v3->fields.targetSkillInfo;
    if ( !v23 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.targetSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetLevelLabel(
      (ServantSkillInfoIconComponent_o *)this,
      v23->fields.currentSkillLv,
      v19,
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
          p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
          sub_1BCAF9C(p__2__current, 0, v12, v13);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_30:
    sub_1BCB254(this, method);
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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
    sub_1BCB25C(this, x, method);
  if ( !x )
LABEL_6:
    sub_1BCB254(this, x);
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
    sub_1BCB25C(this, x, method);
  if ( !x )
LABEL_7:
    sub_1BCB254(this, x);
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
      sub_1BCB254(this, method);
    appended = AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect(
                 this->fields.__4__this,
                 this->fields.baseSkillIcon,
                 this->fields.targetSkillIcon,
                 this->fields.baseSkillInfo,
                 this->fields.targetSkillInfo,
                 this->fields.callback,
                 v2);
    UnityEngine_MonoBehaviour__StartCoroutine_70121648(_4__this, appended, 0LL);
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
    sub_1BCB254(0LL, method);
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(target, this->fields.skillLv, 0, 0, 1, 0LL);
}