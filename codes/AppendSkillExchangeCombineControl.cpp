void AppendSkillExchangeCombineControl___ctor(AppendSkillExchangeCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4D306B0 & 1) == 0 )
  {
    sub_1C94098(&CombineMenuControl_TypeInfo);
    byte_4D306B0 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


SetLevelUpData_o *AppendSkillExchangeCombineControl__GetBaseLvUpData(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  return this->fields.baseLvUpData;
}


SetLevelUpData_o *AppendSkillExchangeCombineControl__GetTargetData(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  return this->fields.targetLvUpData;
}


int32_t AppendSkillExchangeCombineControl__GetTutorialOpenType(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  return 95;
}


void AppendSkillExchangeCombineControl__Init(AppendSkillExchangeCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v6; // x1
  UISprite_o *charaSprite; // x20
  UILabel_o *detailInfoLb; // x20
  UnityEngine_Object_o *charaGraph; // x20
  GrandQuestFolderBoardItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D306A0 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_20796/*"img_txt_append"*/);
    sub_1C94098(&StringLiteral_23188/*"rarity5_1"*/);
    sub_1C94098(&StringLiteral_20797/*"img_txt_append_exchange"*/);
    sub_1C94098(&StringLiteral_17751/*"buttontxt_exchange"*/);
    sub_1C94098(&StringLiteral_1982/*"APPEND_SKILL_EXCHANGE_INFO"*/);
    byte_4D306A0 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 95, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  AppendSkillExchangeCombineControl__InitDispCombineInfo(this, v3);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  this->fields._IsExeCombine_k__BackingField = 0;
  *(_QWORD *)&this->fields.currentBaseIdx = -1;
  AppendSkillExchangeCombineControl__SetExeBtnState(this, v6);
  charaSprite = this->fields.charaSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCharaGraphaOption(charaSprite, (System_String_o *)StringLiteral_23188/*"rarity5_1"*/, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_17751/*"buttontxt_exchange"*/, 0);
  AtlasManager__SetEventSprite(this->fields.titleImg, (System_String_o *)StringLiteral_20796/*"img_txt_append"*/, 0);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_20797/*"img_txt_append_exchange"*/, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_20;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.parent)(
    helpBtn,
    helpBtn->klass[2]._1.generic_class);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.titleImg;
  if ( !helpBtn )
    goto LABEL_20;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.parent)(
    helpBtn,
    helpBtn->klass[2]._1.generic_class);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.itemTitleImg;
  if ( !helpBtn )
    goto LABEL_20;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))helpBtn->klass[2]._1.parent)(
    helpBtn,
    helpBtn->klass[2]._1.generic_class);
  detailInfoLb = this->fields.detailInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1982/*"APPEND_SKILL_EXCHANGE_INFO"*/, 0);
  if ( !detailInfoLb )
    goto LABEL_20;
  UILabel__set_text(detailInfoLb, (System_String_o *)helpBtn, 0);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    p_charaGraph = (GrandQuestFolderBoardItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(gameObject, 0);
      p_charaGraph->klass = 0;
      sub_1C9403C(p_charaGraph, 0, v12, v13, v14, v15, v16, v17);
      return;
    }
LABEL_20:
    sub_1C942F0(helpBtn, v4);
  }
}


void AppendSkillExchangeCombineControl__InitDispCombineInfo(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  const MethodInfo *v4; // x3
  __int64 v5; // x1
  void *baseSelectInfoLb; // x0
  int v7; // w21
  int32_t v8; // w20

  if ( (byte_4D306A1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_1991/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/);
    byte_4D306A1 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_1991/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, 0);
  AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v3, 1, v4);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSelectInfoLb, 1, 0);
  baseSelectInfoLb = this->fields.selectSkillHelpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)baseSelectInfoLb, string_TypeInfo->static_fields->Empty, 0);
  baseSelectInfoLb = this->fields.skillInfoList;
  if ( !baseSelectInfoLb )
    goto LABEL_13;
  v7 = *((_DWORD *)baseSelectInfoLb + 6);
  if ( v7 >= 1 )
  {
    v8 = 0;
    do
    {
      baseSelectInfoLb = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)baseSelectInfoLb,
                           v8,
                           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !baseSelectInfoLb )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)baseSelectInfoLb, 0);
      if ( v7 == ++v8 )
        return;
      baseSelectInfoLb = this->fields.skillInfoList;
    }
    while ( baseSelectInfoLb );
LABEL_13:
    sub_1C942F0(baseSelectInfoLb, v5);
  }
}


void AppendSkillExchangeCombineControl__OnClickExeCombine(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  AppendSkillExchangeDialog_o *appendSkillExchangeDialog; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int64 v7; // x22
  __int64 v8; // x23
  int64_t strengthStatusSprite; // x21
  const MethodInfo *v10; // x5
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4D306A9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D306A9 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
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
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  strengthStatusSprite = (int64_t)appendSkillExchangeDialog->fields.appendSkillTargetIconComp->fields.strengthStatusSprite;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  appendSkillExchangeDialog = (AppendSkillExchangeDialog_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                               v12,
                                                               0);
  if ( !Master_object )
    goto LABEL_20;
  appendSkillExchangeDialog = (AppendSkillExchangeDialog_o *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                                                               (UserServantAppendPassiveSkillMaster_o *)Master_object,
                                                               &entity,
                                                               strengthStatusSprite,
                                                               (int32_t)appendSkillExchangeDialog,
                                                               0);
  if ( ((unsigned __int8)appendSkillExchangeDialog & 1) == 0 )
    return;
  if ( !entity || (appendSkillExchangeDialog = this->fields.appendSkillExchangeDialog) == 0 )
LABEL_20:
    sub_1C942F0(appendSkillExchangeDialog, v3);
  AppendSkillExchangeDialog__Open(
    appendSkillExchangeDialog,
    this->fields.baseLvUpData,
    this->fields.targetLvUpData,
    entity->fields.exchangeNum,
    this->fields.requestAppendSkillExchange,
    v10);
}


void AppendSkillExchangeCombineControl__OnClickInfo(
        AppendSkillExchangeCombineControl_o *this,
        bool isDecide,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x20
  TweenColor_o *SelectMskImgTweenColor; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t currentBaseIdx; // w22
  int32_t currentTargetIdx; // w23
  __int64 v25; // x8
  Il2CppObject *v26; // x22
  UnityEngine_Object_o *v27; // x21
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  int32_t v30; // w8
  int32_t v31; // w9
  int32_t v32; // w1
  int32_t v33; // w10
  const MethodInfo *v34; // x1
  TweenColor_o *v35; // x19
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x22
  System_Func_object__bool__o *v37; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  Il2CppObject *v40; // x0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *v41; // x22
  Il2CppObject *v42; // x23
  System_Func_object__bool__o *v43; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0

  if ( (byte_4D306A4 & 1) == 0 )
  {
    sub_1C94098(&Method_AppendSkillExchangeCombineControl_OnClickInfo__);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
    sub_1C94098(&System_Func_ServantSkillInfoIconComponent__bool__TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_AppendSkillExchangeCombineControl___c__DisplayClass36_0__OnClickInfo_b__1__);
    sub_1C94098(&AppendSkillExchangeCombineControl___c__DisplayClass36_0_TypeInfo);
    sub_1C94098(&Method_AppendSkillExchangeCombineControl___c__DisplayClass36_1__OnClickInfo_b__0__);
    sub_1C94098(&AppendSkillExchangeCombineControl___c__DisplayClass36_1_TypeInfo);
    byte_4D306A4 = 1;
  }
  v7 = sub_1C942E4(AppendSkillExchangeCombineControl___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = idx;
  if ( isDecide )
  {
    if ( ((this->fields.currentTargetIdx ^ this->fields.currentBaseIdx) & 0x80000000) == 0 )
      goto LABEL_11;
    v16 = sub_1C942E4(AppendSkillExchangeCombineControl___c__DisplayClass36_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v16, 0);
    if ( !v16 )
      goto LABEL_36;
    *(_QWORD *)(v16 + 24) = v7;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v16 + 24), v7, v17, v18, v19, v20, v21, v22);
    currentBaseIdx = this->fields.currentBaseIdx;
    currentTargetIdx = this->fields.currentTargetIdx;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    SelectMskImgTweenColor = (TweenColor_o *)System_Math__Max_65939564(currentBaseIdx, currentTargetIdx, 0);
    v25 = *(_QWORD *)(v16 + 24);
    *(_DWORD *)(v16 + 16) = (_DWORD)SelectMskImgTweenColor;
    if ( !v25 )
      goto LABEL_36;
    if ( (_DWORD)SelectMskImgTweenColor != *(_DWORD *)(v25 + 24) )
    {
      targetList = this->fields.targetList;
      v37 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_ServantSkillInfoIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v37,
        (Il2CppObject *)v16,
        Method_AppendSkillExchangeCombineControl___c__DisplayClass36_1__OnClickInfo_b__0__,
        0);
      v38 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)targetList,
              (System_Func_TSource__bool__o *)v37,
              (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
      v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v38,
                                                                   (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
      v40 = System_Linq_Enumerable__FirstOrDefault_object_(
              v39,
              (const MethodInfo_31C4BAC *)Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
      v41 = this->fields.targetList;
      v42 = *(Il2CppObject **)(v16 + 24);
      v27 = (UnityEngine_Object_o *)v40;
      v43 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_ServantSkillInfoIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v43,
        v42,
        Method_AppendSkillExchangeCombineControl___c__DisplayClass36_0__OnClickInfo_b__1__,
        0);
      v44 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v41,
              (System_Func_TSource__bool__o *)v43,
              (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
      v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v44,
                                                                   (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
      v26 = System_Linq_Enumerable__FirstOrDefault_object_(
              v45,
              (const MethodInfo_31C4BAC *)Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
    }
    else
    {
LABEL_11:
      v26 = 0;
      v27 = 0;
    }
    v28 = Method_AppendSkillExchangeCombineControl_OnClickInfo__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeCombineControl_OnClickInfo__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1C940B0(Method_AppendSkillExchangeCombineControl_OnClickInfo__);
    v29 = (System_Reflection_MethodBase_o *)sub_1C9407C(v28, v28[4]);
    v30 = *(_DWORD *)(v7 + 24);
    v31 = this->fields.currentBaseIdx;
    if ( v31 == v30 )
    {
      v30 = -1;
LABEL_16:
      v32 = 0;
      this->fields.currentBaseIdx = v30;
      goto LABEL_23;
    }
    v33 = this->fields.currentTargetIdx;
    if ( v33 == v30 )
    {
      v32 = 0;
      v30 = -1;
    }
    else
    {
      if ( v31 < 0 )
        goto LABEL_16;
      if ( (v33 & 0x80000000) == 0 )
      {
        v32 = 2;
LABEL_23:
        OverwriteAssetSoundName__PlaySystemSe(v29, v32, 0, 0);
        AppendSkillExchangeCombineControl__SetNeedItemInfo(this, v34);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          SelectMskImgTweenColor = (TweenColor_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
          if ( ((unsigned __int8)SelectMskImgTweenColor & 1) != 0 )
          {
            if ( v26 )
            {
              SelectMskImgTweenColor = ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
                                         (ServantSkillInfoIconComponent_o *)v26,
                                         0);
              if ( v27 )
              {
                v35 = SelectMskImgTweenColor;
                SelectMskImgTweenColor = ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
                                           (ServantSkillInfoIconComponent_o *)v27,
                                           0);
                if ( v35 )
                {
                  ((void (__fastcall *)(TweenColor_o *, TweenColor_o *, const MethodInfo *))v35->klass->vtable._8_SynchronizeTween.methodPtr)(
                    v35,
                    SelectMskImgTweenColor,
                    v35->klass->vtable._8_SynchronizeTween.method);
                  return;
                }
              }
            }
LABEL_36:
            sub_1C942F0(SelectMskImgTweenColor, v9);
          }
        }
        return;
      }
      v32 = 0;
    }
    this->fields.currentTargetIdx = v30;
    goto LABEL_23;
  }
}


void AppendSkillExchangeCombineControl__PlayEffect(
        AppendSkillExchangeCombineControl_o *this,
        ServantSkillInfoIconComponent_o *targetSkillIcon,
        AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *targetSkillInfo,
        System_Action_o *startPlayLevelExchangeEffect,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  int currentSkillLv; // w2

  if ( !targetSkillInfo )
    sub_1C942F0(this, targetSkillIcon);
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
    ActionExtensions__Call(startPlayLevelExchangeEffect, 0);
  }
}


void AppendSkillExchangeCombineControl__PlayLevelExchangeEffect(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *effectSkillLvChange; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D306AF & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D306AF = 1;
  }
  effectSkillLvChange = (Il2CppObject *)this->fields.effectSkillLvChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillLvChange,
                                                   (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object
    || (v10 = (UnityEngine_Component_o *)Component_object,
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0),
        Component_object = UnityEngine_Component__get_gameObject(v10, 0),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0)
    || (v12 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0)) == 0 )
  {
LABEL_11:
    sub_1C942F0(Component_object, v9);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0);
  GameObjectExtensions__SetParent(v12, transform, 0);
  gameObject = UnityEngine_Component__get_gameObject(v10, 0);
  v16.fields.z = 0.0;
  v16.fields.x = 42.0;
  v16.fields.y = -42.0;
  GameObjectExtensions__SetLocalPosition(gameObject, v16, 0);
  v15 = UnityEngine_Component__get_gameObject(v10, 0);
  v17.fields.x = 1.0;
  v17.fields.y = 1.0;
  v17.fields.z = 1.0;
  GameObjectExtensions__SetLocalScale(v15, v17, 0);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v10, 0);
}


void AppendSkillExchangeCombineControl__PlayLockEffect(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        System_Action_o *setLockSpriteActive,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *effectSkillLock; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v11; // x1
  CommandCodeEffectComponent_o *v12; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D306AE & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D306AE = 1;
  }
  effectSkillLock = (Il2CppObject *)this->fields.effectSkillLock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillLock,
                                                   (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object )
    goto LABEL_11;
  v12 = (CommandCodeEffectComponent_o *)Component_object;
  CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0);
  CommandCodeEffectComponent__SetDestroyEffectCallback(v12, setLockSpriteActive, 0);
  Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList
    || (v14 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0)) == 0 )
  {
LABEL_11:
    sub_1C942F0(Component_object, v11);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0);
  GameObjectExtensions__SetParent(v14, transform, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
  v18.fields.y = -6.6;
  v18.fields.x = 0.0;
  v18.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(gameObject, v18, 0);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
  v19.fields.x = 0.555;
  v19.fields.y = 0.557;
  v19.fields.z = 0.555;
  GameObjectExtensions__SetLocalScale(v17, v19, 0);
  CommandCodeEffectComponent__PlayAnimation(v12, 0);
}


void AppendSkillExchangeCombineControl__PlayUnlockEffect(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *effectSkillUnlock; // x19
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x19
  System_Collections_Generic_List_object__o *skillInfoList; // x8
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D306AD & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D306AD = 1;
  }
  effectSkillUnlock = (Il2CppObject *)this->fields.effectSkillUnlock;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillUnlock,
                                                   (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object
    || (v10 = (UnityEngine_Component_o *)Component_object,
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0),
        Component_object = UnityEngine_Component__get_gameObject(v10, 0),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0)
    || (v12 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0)) == 0 )
  {
LABEL_11:
    sub_1C942F0(Component_object, v9);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0);
  GameObjectExtensions__SetParent(v12, transform, 0);
  gameObject = UnityEngine_Component__get_gameObject(v10, 0);
  v16.fields.x = 0.0;
  v16.fields.y = -6.5;
  v16.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(gameObject, v16, 0);
  v15 = UnityEngine_Component__get_gameObject(v10, 0);
  v17.fields.x = 0.55;
  v17.fields.y = 0.55;
  v17.fields.z = 0.55;
  GameObjectExtensions__SetLocalScale(v15, v17, 0);
  CommandCodeEffectComponent__PlayAnimation((CommandCodeEffectComponent_o *)v10, 0);
}


void AppendSkillExchangeCombineControl__SetBaseSvtCardImg(
        AppendSkillExchangeCombineControl_o *this,
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
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(AppendSkillExchangeCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         userSvtEnt,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_charaGraph, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


void AppendSkillExchangeCombineControl__SetBaseSvtSkillInfo(
        AppendSkillExchangeCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_String_o *v10; // x0
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4D306A2 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_1991/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/);
    byte_4D306A2 = 1;
  }
  if ( userSvtEnt )
  {
    this->fields.baseUserServantEntity = userSvtEnt;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseUserServantEntity,
      (int32_t)userSvtEnt,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1991/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, 0);
    AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v10, 1, v11);
    baseSelectInfoLb = this->fields.baseSelectInfoLb;
    if ( !baseSelectInfoLb )
      sub_1C942F0(0, v12);
    UnityEngine_GameObject__SetActive(baseSelectInfoLb, 0, 0);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0);
    this->fields.skillData = AppendSkillInfo;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.skillData,
      (int32_t)AppendSkillInfo,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    AppendSkillExchangeCombineControl__SetSkillIconInfo(this, this->fields.skillData, v21);
  }
}


void AppendSkillExchangeCombineControl__SetExeBtnState(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x22
  UnityEngine_Behaviour_o *v5; // x21
  UnityEngine_Behaviour_o *v6; // x20
  struct SvtUseSkillData_o *skillData; // x10
  System_String_o *Empty; // x20
  __int64 currentBaseIdx; // x9
  __int64 currentTargetIdx; // x8
  struct System_Int32_array *svtSkillLvList; // x10
  unsigned int max_length; // w11
  int32_t v13; // w20
  bool v14; // w21
  __int64 *v15; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D306A8 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_1979/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/);
    sub_1C94098(&StringLiteral_1978/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/);
    byte_4D306A8 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg
    || (combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    combineBtnBg,
                                                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        !this->fields.confirmButtonEffect)
    || (v4 = (UIWidget_o *)combineBtnBg,
        combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    this->fields.confirmButtonEffect,
                                                    (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
        !this->fields.confirmButtonEffect)
    || (v5 = (UnityEngine_Behaviour_o *)combineBtnBg,
        combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    this->fields.confirmButtonEffect,
                                                    (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
        !this->fields.confirmButtonEffect)
    || (v6 = (UnityEngine_Behaviour_o *)combineBtnBg,
        (combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                     this->fields.confirmButtonEffect,
                                                     0)) == 0) )
  {
LABEL_36:
    sub_1C942F0(combineBtnBg, method);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)combineBtnBg,
    this->fields._IsExeCombine_k__BackingField,
    0);
  if ( this->fields._IsExeCombine_k__BackingField )
  {
    if ( !v4 )
      goto LABEL_36;
    v16.fields.r = 1.0;
    v16.fields.g = 1.0;
    v16.fields.b = 1.0;
    v16.fields.a = 1.0;
    UIWidget__set_color(v4, v16, 0);
    if ( !v5 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v5, 1, 0);
    UITweener__ResetToBeginning((UITweener_o *)v5, 0);
    if ( !v6 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v6, 1, 0);
    UITweener__ResetToBeginning((UITweener_o *)v6, 0);
  }
  else
  {
    if ( !v4 )
      goto LABEL_36;
    v17.fields.r = 0.5;
    v17.fields.g = 0.5;
    v17.fields.b = 0.5;
    v17.fields.a = 1.0;
    UIWidget__set_color(v4, v17, 0);
    if ( !v5 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v5, 0, 0);
    if ( !v6 )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled(v6, 0, 0);
  }
  skillData = this->fields.skillData;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !skillData
    || (currentBaseIdx = (unsigned int)this->fields.currentBaseIdx, (currentBaseIdx & 0x80000000) != 0)
    || (currentTargetIdx = (unsigned int)this->fields.currentTargetIdx, (currentTargetIdx & 0x80000000) != 0) )
  {
    v14 = 0;
    goto LABEL_30;
  }
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_36;
  max_length = svtSkillLvList->max_length;
  if ( (unsigned int)currentBaseIdx >= max_length || (unsigned int)currentTargetIdx >= max_length )
    sub_1C942F8(combineBtnBg);
  v13 = svtSkillLvList->m_Items[currentBaseIdx];
  v14 = v13 == svtSkillLvList->m_Items[currentTargetIdx];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v13 )
      goto LABEL_25;
LABEL_28:
    v15 = &StringLiteral_1979/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/;
    goto LABEL_29;
  }
  if ( !v13 )
    goto LABEL_28;
LABEL_25:
  v15 = &StringLiteral_1978/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/;
LABEL_29:
  Empty = LocalizationManager__Get((System_String_o *)*v15, 0);
LABEL_30:
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineTxt;
  if ( !combineBtnBg )
    goto LABEL_36;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(combineBtnBg, 0);
  if ( !combineBtnBg )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineBtnBg, v14, 0);
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineTxt;
  if ( !v14 )
    Empty = string_TypeInfo->static_fields->Empty;
  if ( !combineBtnBg )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)combineBtnBg, Empty, 0);
}


bool AppendSkillExchangeCombineControl__SetIndex(
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
    else if ( currentBaseIdx < 0 )
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


void AppendSkillExchangeCombineControl__SetNeedItemInfo(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  UILabel_o *selectSkillHelpLb; // x20
  System_String_o *targetList; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w20
  __int64 currentBaseIdx; // x8
  ServantSkillInfoIconComponent_o *v8; // x21
  struct System_Int32_array *useSkillIdList; // x9
  _BOOL4 v10; // w27
  __int64 v11; // x8
  struct System_Int32_array *v12; // x9
  _BOOL4 v13; // w28
  __int64 *v14; // x8
  System_String_o *Empty; // x1
  const MethodInfo *v16; // x2
  int32_t currentTargetIdx; // w20
  System_String_o **v18; // x8
  System_String_o *v19; // x1
  const MethodInfo *v20; // x3

  if ( (byte_4D306A5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_1980/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/);
    sub_1C94098(&StringLiteral_8828/*"MSG_SKILL_INFO"*/);
    sub_1C94098(&StringLiteral_1992/*"APPEND_SKILL_EXCHANGE_PRESELECT_TARGET_INFO"*/);
    sub_1C94098(&StringLiteral_1990/*"APPEND_SKILL_EXCHANGE_PRESELECT_BASE_INFO"*/);
    sub_1C94098(&StringLiteral_1981/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/);
    sub_1C94098(&StringLiteral_1994/*"APPEND_SKILL_EXCHANGE_SELECTED_MSG"*/);
    byte_4D306A5 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    selectSkillHelpLb = this->fields.selectSkillHelpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    targetList = LocalizationManager__Get((System_String_o *)StringLiteral_8828/*"MSG_SKILL_INFO"*/, 0);
    if ( !selectSkillHelpLb
      || (UILabel__set_text(selectSkillHelpLb, targetList, 0),
          (targetList = (System_String_o *)this->fields.targetList) == 0) )
    {
LABEL_32:
      sub_1C942F0(targetList, v5);
    }
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= SLODWORD(targetList[1].klass) )
      {
        AppendSkillExchangeCombineControl__SetExeBtnState(this, v5);
        if ( this->fields.currentBaseIdx < 0 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v18 = (System_String_o **)&StringLiteral_1990/*"APPEND_SKILL_EXCHANGE_PRESELECT_BASE_INFO"*/;
        }
        else
        {
          currentTargetIdx = this->fields.currentTargetIdx;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v18 = (System_String_o **)&StringLiteral_1992/*"APPEND_SKILL_EXCHANGE_PRESELECT_TARGET_INFO"*/;
          if ( currentTargetIdx >= 0 )
            v18 = (System_String_o **)&StringLiteral_1994/*"APPEND_SKILL_EXCHANGE_SELECTED_MSG"*/;
        }
        v19 = LocalizationManager__Get(*v18, 0);
        AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v19, 0, v20);
        return;
      }
      targetList = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)targetList,
                                        v6,
                                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      currentBaseIdx = (unsigned int)this->fields.currentBaseIdx;
      v8 = (ServantSkillInfoIconComponent_o *)targetList;
      if ( (currentBaseIdx & 0x80000000) != 0 )
      {
        v10 = 0;
      }
      else
      {
        useSkillIdList = this->fields.useSkillIdList;
        if ( !useSkillIdList )
          goto LABEL_32;
        if ( (unsigned int)currentBaseIdx >= LODWORD(useSkillIdList->max_length) )
          goto LABEL_44;
        if ( !targetList )
          goto LABEL_32;
        v10 = useSkillIdList->m_Items[currentBaseIdx] == LODWORD(targetList[7].monitor);
      }
      v11 = (unsigned int)this->fields.currentTargetIdx;
      if ( (v11 & 0x80000000) != 0 )
      {
        if ( !targetList )
          goto LABEL_32;
        v13 = 0;
      }
      else
      {
        v12 = this->fields.useSkillIdList;
        if ( !v12 )
          goto LABEL_32;
        if ( (unsigned int)v11 >= LODWORD(v12->max_length) )
LABEL_44:
          sub_1C942F8(targetList);
        if ( !targetList )
          goto LABEL_32;
        v13 = v12->m_Items[v11] == LODWORD(targetList[7].monitor);
      }
      ServantSkillInfoIconComponent__SetDispSelectMskImg((ServantSkillInfoIconComponent_o *)targetList, v10 || v13, 0);
      if ( v10 )
      {
        v14 = &StringLiteral_1980/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v14 = &StringLiteral_1980/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/;
        }
      }
      else
      {
        if ( !v13 )
        {
          Empty = string_TypeInfo->static_fields->Empty;
          goto LABEL_31;
        }
        v14 = &StringLiteral_1981/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v14 = &StringLiteral_1981/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/;
        }
      }
      Empty = LocalizationManager__Get((System_String_o *)*v14, 0);
LABEL_31:
      ServantSkillInfoIconComponent__SetMsgLabel(v8, Empty, 0);
      AppendSkillExchangeCombineControl__SetSvtSkillCombineData(this, v6, v16);
      targetList = (System_String_o *)this->fields.targetList;
      ++v6;
      if ( !targetList )
        goto LABEL_32;
    }
  }
}


void AppendSkillExchangeCombineControl__SetPreSelectLabel(
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
        (UILabel__set_fontSize(preSelectBaseLb, v7, 0), (preSelectBaseLb = this->fields.preSelectBaseLb) == 0)
     || (UILabel__set_text(preSelectBaseLb, msg, 0), (preSelectBaseLb = this->fields.preSelectBaseLb) == 0)
     || (preSelectBaseLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)preSelectBaseLb,
                                          0)) == 0) )
  {
    sub_1C942F0(preSelectBaseLb, msg);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 1, 0);
}


void AppendSkillExchangeCombineControl__SetRequest(
        AppendSkillExchangeCombineControl_o *this,
        System_Action_o *request,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.requestAppendSkillExchange = request;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.requestAppendSkillExchange,
    (int32_t)request,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AppendSkillExchangeCombineControl__SetSkillIconInfo(
        AppendSkillExchangeCombineControl_o *this,
        SvtUseSkillData_o *skillData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SvtUseSkillData_o *v8; // x25
  AppendSkillExchangeCombineControl_o *v9; // x20
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
  unsigned __int64 v21; // x23
  struct System_Int32_array *v22; // x8
  int32_t v23; // w24
  int32_t type; // w26
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v27; // x27
  int32_t v28; // w28
  SvtUseSkillData_o *v29; // x22
  Il2CppObject *Item; // x25
  ServantSkillInfoIconComponent_ClickDelegate_o *v31; // x29
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v41; // x8
  AppendSkillExchangeCombineControl_o **p_targetList; // [xsp+8h] [xbp-68h]

  v8 = skillData;
  v9 = this;
  if ( (byte_4D306A3 & 1) == 0 )
  {
    sub_1C94098(&Method_AppendSkillExchangeCombineControl_OnClickInfo__);
    sub_1C94098(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    this = (AppendSkillExchangeCombineControl_o *)sub_1C94098(&StringLiteral_858/*"-"*/);
    byte_4D306A3 = 1;
  }
  if ( !v8 )
    goto LABEL_28;
  svtUseSkillIdList = v8->fields.svtUseSkillIdList;
  p_useSkillIdList = &v9->fields.useSkillIdList;
  v9->fields.useSkillIdList = svtUseSkillIdList;
  sub_1C9403C(
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
  v14 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
  v9->fields.targetList = (struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *)v14;
  p_targetList = (AppendSkillExchangeCombineControl_o **)&v9->fields.targetList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields.targetList, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = *p_useSkillIdList;
      if ( !*p_useSkillIdList )
        break;
      if ( v21 >= LODWORD(v22->max_length) )
        goto LABEL_29;
      v23 = v22->m_Items[v21];
      if ( v23 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                        v23,
                                                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
        if ( v21 >= LODWORD(svtSkillLvList->max_length) )
LABEL_29:
          sub_1C942F8(this);
        this = (AppendSkillExchangeCombineControl_o *)v9->fields.skillInfoList;
        if ( !this )
          break;
        v27 = (System_String_o *)*p_m_CancellationTokenSource;
        v28 = svtSkillLvList->m_Items[v21];
        v29 = v8;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v21,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v31 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_1C942E4(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v31,
          (Il2CppObject *)v9,
          (intptr_t)Method_AppendSkillExchangeCombineControl_OnClickInfo__,
          0);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_32072896(
          (ServantSkillInfoIconComponent_o *)Item,
          v21,
          v27,
          v23,
          v28,
          type,
          v31,
          0,
          0);
        this = *p_targetList;
        if ( !*p_targetList )
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
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v41 + 32) = Item;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v41 + 32), (int32_t)Item, v32, v33, v34, v35, v36, v37);
        }
        v8 = v29;
      }
      if ( (unsigned int)max_length == ++v21 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1C942F0(this, skillData);
  }
LABEL_27:
  AppendSkillExchangeCombineControl__SetNeedItemInfo(v9, (const MethodInfo *)skillData);
}


void AppendSkillExchangeCombineControl__SetSkillLevelUpData(
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( (byte_4D306A7 & 1) == 0 )
  {
    sub_1C94098(&SetLevelUpData_TypeInfo);
    byte_4D306A7 = 1;
  }
  v16 = sub_1C942E4(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor((SetLevelUpData_o *)v16, 0);
  if ( !v16 )
    sub_1C942F0(v17, v18);
  *(_DWORD *)(v16 + 28) = idx;
  *(_DWORD *)(v16 + 16) = currentSkillId;
  *(_DWORD *)(v16 + 20) = currentSkillId;
  *(_QWORD *)(v16 + 40) = skillName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v16 + 40), (int32_t)skillName, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 64) = currentSkillLv;
  *(_DWORD *)(v16 + 24) = currentSkillNum;
  *(_QWORD *)(v16 + 48) = skillDetail;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v16 + 48), (int32_t)skillDetail, v25, v26, v27, v28, v29, v30);
  *lvUpData = (SetLevelUpData_o *)v16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)lvUpData, v16, v31, v32, v33, v34, v35, v36);
}


// local variable allocation has failed, the output may be wrong!
void AppendSkillExchangeCombineControl__SetSvtSkillCombineData(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  AppendSkillExchangeCombineControl_o *v4; // x19
  struct SvtUseSkillData_o *skillData; // x9
  struct System_Int32_array *svtUseSkillIdList; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  int32_t v8; // w22
  int32_t v9; // w21
  __int64 currentBaseIdx; // x8
  __int64 currentTargetIdx; // x9
  struct SvtUseSkillData_o *v12; // x10
  struct System_Int32_array *v13; // x10
  unsigned int max_length; // w11
  _BOOL4 v15; // w8
  struct SvtUseSkillData_o *v16; // x8
  struct System_Int32_array *v17; // x8
  __int64 v18; // x9
  struct SvtUseSkillData_o *v19; // x10
  struct System_Int32_array *v20; // x8
  __int64 v21; // x20
  struct System_Int32_array *v22; // x9
  unsigned int v23; // w11
  struct System_Int32_array *svtSkillNumsList; // x10
  __int64 v25; // x12
  int32_t v26; // w21
  int v27; // w8
  int32_t v28; // w22
  int32_t v29; // w23
  System_String_o *m_CancellationTokenSource; // x24
  int32_t v31; // w1
  AppendSkillExchangeCombineControl_o *EffectExplanation; // x0
  struct SvtUseSkillData_o *v33; // x8
  struct System_Int32_array *v34; // x8
  __int64 v35; // x9
  struct SvtUseSkillData_o *v36; // x10
  struct System_Int32_array *v37; // x8
  __int64 v38; // x20
  struct System_Int32_array *v39; // x9
  unsigned int v40; // w11
  struct System_Int32_array *v41; // x10
  __int64 v42; // x12
  int32_t v43; // w21
  int v44; // w8
  int32_t v45; // w22
  int32_t v46; // w23
  System_String_o *v47; // x24
  int32_t v48; // w1
  AppendSkillExchangeCombineControl_o *v49; // x0
  const MethodInfo *v50; // [xsp+0h] [xbp-70h]
  const MethodInfo *v51; // [xsp+0h] [xbp-70h]

  v4 = this;
  if ( (byte_4D306A6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (AppendSkillExchangeCombineControl_o *)sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    byte_4D306A6 = 1;
  }
  skillData = v4->fields.skillData;
  if ( !skillData )
    goto LABEL_61;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_61;
  if ( LODWORD(svtUseSkillIdList->max_length) <= idx )
    goto LABEL_62;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_61;
  if ( LODWORD(svtSkillLvList->max_length) <= idx )
    goto LABEL_62;
  v8 = svtUseSkillIdList->m_Items[idx];
  v9 = svtSkillLvList->m_Items[idx];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_61;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          v8,
          (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__) )
    return;
  this = (AppendSkillExchangeCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_61;
  this = (AppendSkillExchangeCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  idx,
                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_61;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp((ServantSkillInfoIconComponent_o *)this, v9, 0, 1, 1, 0);
  currentBaseIdx = (unsigned int)v4->fields.currentBaseIdx;
  if ( (currentBaseIdx & 0x80000000) != 0
    || (currentTargetIdx = (unsigned int)v4->fields.currentTargetIdx, (currentTargetIdx & 0x80000000) != 0) )
  {
    v15 = 0;
  }
  else
  {
    v12 = v4->fields.skillData;
    if ( !v12 )
      goto LABEL_61;
    v13 = v12->fields.svtSkillLvList;
    if ( !v13 )
      goto LABEL_61;
    max_length = v13->max_length;
    if ( (unsigned int)currentBaseIdx >= max_length || (unsigned int)currentTargetIdx >= max_length )
LABEL_62:
      sub_1C942F8(this);
    v15 = v13->m_Items[currentBaseIdx] != v13->m_Items[currentTargetIdx];
  }
  v4->fields._IsExeCombine_k__BackingField = v15;
  if ( !v15 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
  v16 = v4->fields.skillData;
  if ( !v16 )
    goto LABEL_61;
  v17 = v16->fields.svtUseSkillIdList;
  if ( !v17 )
    goto LABEL_61;
  v18 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v18 >= LODWORD(v17->max_length) )
    goto LABEL_62;
  if ( !this )
    goto LABEL_61;
  this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v17->m_Items[v18],
                                                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v19 = v4->fields.skillData;
  if ( !v19 )
    goto LABEL_61;
  v20 = v19->fields.svtUseSkillIdList;
  if ( !v20 )
    goto LABEL_61;
  v21 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v21 >= LODWORD(v20->max_length) )
    goto LABEL_62;
  v22 = v19->fields.svtSkillLvList;
  if ( !v22 )
    goto LABEL_61;
  v23 = v22->max_length;
  if ( (unsigned int)v21 >= v23 )
    goto LABEL_62;
  svtSkillNumsList = v19->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_61;
  if ( (unsigned int)v21 >= LODWORD(svtSkillNumsList->max_length) )
    goto LABEL_62;
  if ( !this )
    goto LABEL_61;
  v25 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v25 >= v23 )
    goto LABEL_62;
  v26 = v20->m_Items[v21];
  v27 = v22->m_Items[v25];
  v28 = v22->m_Items[v21];
  v29 = svtSkillNumsList->m_Items[v21];
  m_CancellationTokenSource = (System_String_o *)this->fields.m_CancellationTokenSource;
  if ( v27 >= 1 )
    v31 = v22->m_Items[v25];
  else
    v31 = v27 + 1;
  EffectExplanation = (AppendSkillExchangeCombineControl_o *)SkillEntity__getEffectExplanation(
                                                               (SkillEntity_o *)this,
                                                               v31,
                                                               0);
  AppendSkillExchangeCombineControl__SetSkillLevelUpData(
    EffectExplanation,
    &v4->fields.baseLvUpData,
    v21,
    v26,
    v28,
    v29,
    m_CancellationTokenSource,
    (System_String_o *)EffectExplanation,
    v50);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
  v33 = v4->fields.skillData;
  if ( !v33 )
    goto LABEL_61;
  v34 = v33->fields.svtUseSkillIdList;
  if ( !v34 )
    goto LABEL_61;
  v35 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v35 >= LODWORD(v34->max_length) )
    goto LABEL_62;
  if ( !this )
    goto LABEL_61;
  this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v34->m_Items[v35],
                                                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v36 = v4->fields.skillData;
  if ( !v36 )
    goto LABEL_61;
  v37 = v36->fields.svtUseSkillIdList;
  if ( !v37 )
    goto LABEL_61;
  v38 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v38 >= LODWORD(v37->max_length) )
    goto LABEL_62;
  v39 = v36->fields.svtSkillLvList;
  if ( !v39 )
    goto LABEL_61;
  v40 = v39->max_length;
  if ( (unsigned int)v38 >= v40 )
    goto LABEL_62;
  v41 = v36->fields.svtSkillNumsList;
  if ( !v41 )
    goto LABEL_61;
  if ( (unsigned int)v38 >= LODWORD(v41->max_length) )
    goto LABEL_62;
  if ( !this )
LABEL_61:
    sub_1C942F0(this, *(_QWORD *)&idx);
  v42 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v42 >= v40 )
    goto LABEL_62;
  v43 = v37->m_Items[v38];
  v44 = v39->m_Items[v42];
  v45 = v39->m_Items[v38];
  v46 = v41->m_Items[v38];
  v47 = (System_String_o *)this->fields.m_CancellationTokenSource;
  if ( v44 >= 1 )
    v48 = v39->m_Items[v42];
  else
    v48 = v44 + 1;
  v49 = (AppendSkillExchangeCombineControl_o *)SkillEntity__getEffectExplanation((SkillEntity_o *)this, v48, 0);
  AppendSkillExchangeCombineControl__SetSkillLevelUpData(
    v49,
    &v4->fields.targetLvUpData,
    v38,
    v43,
    v45,
    v46,
    v47,
    (System_String_o *)v49,
    v51);
}


void AppendSkillExchangeCombineControl__StartPlayEffect(
        AppendSkillExchangeCombineControl_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t baseIndex,
        int32_t targetIndex,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x20
  System_Collections_Generic_List_object__o *AppendSkillInfo; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x24
  Il2CppObject *Item; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x0
  System_Collections_Generic_List_object__o **v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *items; // x8
  __int64 v43; // x9
  struct SvtUseSkillData_o *skillData; // x10
  struct System_Int32_array *svtSkillLvList; // x10
  int v46; // w27
  int v47; // w28
  int32_t v48; // w29
  __int64 v49; // x25
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct System_Object_array *v56; // x8
  __int64 v57; // x9
  struct SvtUseSkillData_o *v58; // x10
  struct System_Int32_array *v59; // x10
  int v60; // w24
  int v61; // w25
  int32_t v62; // w27
  __int64 v63; // x22
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  System_Action_o *v70; // x21
  const MethodInfo *v71; // x4
  const MethodInfo *v72; // x4

  if ( (byte_4D306AA & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&Method_AppendSkillExchangeCombineControl___c__DisplayClass44_0__StartPlayEffect_b__0__);
    sub_1C94098(&AppendSkillExchangeCombineControl___c__DisplayClass44_0_TypeInfo);
    byte_4D306AA = 1;
  }
  v11 = sub_1C942E4(AppendSkillExchangeCombineControl___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_25;
  *(_QWORD *)(v11 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 64) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 64), (int32_t)callback, v20, v21, v22, v23, v24, v25);
  if ( !userServantEntity )
    goto LABEL_25;
  AppendSkillInfo = (System_Collections_Generic_List_object__o *)UserServantEntity__getAppendSkillInfo(
                                                                   userServantEntity,
                                                                   0);
  if ( !this->fields.targetList )
    goto LABEL_25;
  v26 = AppendSkillInfo;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.targetList,
           baseIndex,
           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  *(_QWORD *)(v11 + 32) = Item;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)Item, v28, v29, v30, v31, v32, v33);
  AppendSkillInfo = (System_Collections_Generic_List_object__o *)this->fields.targetList;
  if ( !AppendSkillInfo )
    goto LABEL_25;
  v34 = System_Collections_Generic_List_object___get_Item(
          AppendSkillInfo,
          targetIndex,
          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  *(_QWORD *)(v11 + 40) = v34;
  v35 = (System_Collections_Generic_List_object__o **)(v11 + 40);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 40), (int32_t)v34, v36, v37, v38, v39, v40, v41);
  if ( !v26 )
    goto LABEL_25;
  items = v26->fields._items;
  if ( !items )
    goto LABEL_25;
  if ( LODWORD(items->max_length) <= baseIndex )
    goto LABEL_26;
  v43 = *(_QWORD *)&v26->fields._size;
  if ( !v43 )
    goto LABEL_25;
  if ( *(_DWORD *)(v43 + 24) <= (unsigned int)baseIndex )
    goto LABEL_26;
  skillData = this->fields.skillData;
  if ( !skillData || (svtSkillLvList = skillData->fields.svtSkillLvList) == 0 )
LABEL_25:
    sub_1C942F0(AppendSkillInfo, v13);
  if ( LODWORD(svtSkillLvList->max_length) <= baseIndex )
    goto LABEL_26;
  v46 = *((_DWORD *)items->m_Items + baseIndex);
  v47 = *(_DWORD *)(v43 + 4LL * baseIndex + 32);
  v48 = svtSkillLvList->m_Items[baseIndex];
  v49 = sub_1C942E4(AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v49, 0);
  *(_DWORD *)(v49 + 16) = baseIndex;
  *(_DWORD *)(v49 + 20) = v46;
  *(_DWORD *)(v49 + 24) = v47;
  *(_DWORD *)(v49 + 28) = v48;
  *(_QWORD *)(v11 + 48) = v49;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 48), v49, v50, v51, v52, v53, v54, v55);
  v56 = v26->fields._items;
  if ( !v56 )
    goto LABEL_25;
  if ( LODWORD(v56->max_length) <= targetIndex )
    goto LABEL_26;
  v57 = *(_QWORD *)&v26->fields._size;
  if ( !v57 )
    goto LABEL_25;
  if ( *(_DWORD *)(v57 + 24) <= (unsigned int)targetIndex )
LABEL_26:
    sub_1C942F8(AppendSkillInfo);
  v58 = this->fields.skillData;
  if ( !v58 )
    goto LABEL_25;
  v59 = v58->fields.svtSkillLvList;
  if ( !v59 )
    goto LABEL_25;
  if ( LODWORD(v59->max_length) <= targetIndex )
    goto LABEL_26;
  v60 = *((_DWORD *)v56->m_Items + targetIndex);
  v61 = *(_DWORD *)(v57 + 4LL * targetIndex + 32);
  v62 = v59->m_Items[targetIndex];
  v63 = sub_1C942E4(AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v63, 0);
  *(_DWORD *)(v63 + 16) = targetIndex;
  *(_DWORD *)(v63 + 20) = v60;
  *(_DWORD *)(v63 + 24) = v61;
  *(_DWORD *)(v63 + 28) = v62;
  *(_QWORD *)(v11 + 56) = v63;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 56), v63, v64, v65, v66, v67, v68, v69);
  AppendSkillInfo = *(System_Collections_Generic_List_object__o **)(v11 + 32);
  if ( !AppendSkillInfo )
    goto LABEL_25;
  ServantSkillInfoIconComponent__SetMsgLabel(
    (ServantSkillInfoIconComponent_o *)AppendSkillInfo,
    string_TypeInfo->static_fields->Empty,
    0);
  AppendSkillInfo = *v35;
  if ( !*v35 )
    goto LABEL_25;
  ServantSkillInfoIconComponent__SetMsgLabel(
    (ServantSkillInfoIconComponent_o *)AppendSkillInfo,
    string_TypeInfo->static_fields->Empty,
    0);
  *(_BYTE *)(v11 + 16) = 0;
  v70 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v11,
    Method_AppendSkillExchangeCombineControl___c__DisplayClass44_0__StartPlayEffect_b__0__,
    0);
  AppendSkillExchangeCombineControl__PlayEffect(
    this,
    *(ServantSkillInfoIconComponent_o **)(v11 + 32),
    *(AppendSkillExchangeCombineControl_ExchangeSkillInfo_o **)(v11 + 48),
    v70,
    v71);
  AppendSkillExchangeCombineControl__PlayEffect(
    this,
    *(ServantSkillInfoIconComponent_o **)(v11 + 40),
    *(AppendSkillExchangeCombineControl_ExchangeSkillInfo_o **)(v11 + 56),
    v70,
    v72);
}


System_Collections_IEnumerator_o *AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect(
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7

  if ( (byte_4D306AC & 1) == 0 )
  {
    sub_1C94098(&AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_TypeInfo);
    byte_4D306AC = 1;
  }
  v13 = sub_1C942E4(AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 64) = baseSkillIcon;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 64), (int32_t)baseSkillIcon, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v13 + 72) = targetSkillIcon;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 72), (int32_t)targetSkillIcon, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v13 + 40) = baseSkillInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 40), (int32_t)baseSkillInfo, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v13 + 48) = targetSkillInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 48), (int32_t)targetSkillInfo, v38, v39, v40, v41, v42, v43);
  *(_QWORD *)(v13 + 56) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 56), (int32_t)callback, v44, v45, v46, v47, v48, v49);
  return (System_Collections_IEnumerator_o *)v13;
}


void AppendSkillExchangeCombineControl__StartPlayLockEffect(
        AppendSkillExchangeCombineControl_o *this,
        int32_t idx,
        int32_t skillLv,
        ServantSkillInfoIconComponent_o *target,
        System_Action_o *startPlayLevelExchangeEffect,
        const MethodInfo *method)
{
  __int64 v11; // x24
  ServantSkillInfoIconComponent_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x4

  if ( (byte_4D306AB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_AppendSkillExchangeCombineControl___c__DisplayClass46_0__StartPlayLockEffect_b__0__);
    sub_1C94098(&AppendSkillExchangeCombineControl___c__DisplayClass46_0_TypeInfo);
    byte_4D306AB = 1;
  }
  v11 = sub_1C942E4(AppendSkillExchangeCombineControl___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = target,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)target, v14, v15, v16, v17, v18, v19),
        *(_DWORD *)(v11 + 24) = skillLv,
        v20 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(
          v20,
          (Il2CppObject *)v11,
          Method_AppendSkillExchangeCombineControl___c__DisplayClass46_0__StartPlayLockEffect_b__0__,
          0),
        AppendSkillExchangeCombineControl__PlayLockEffect(this, idx, v20, startPlayLevelExchangeEffect, v21),
        (v12 = *(ServantSkillInfoIconComponent_o **)(v11 + 16)) == 0) )
  {
    sub_1C942F0(v12, v13);
  }
  ServantSkillInfoIconComponent__PlaySkillIconTweenColor(v12, 1, 0);
}


void AppendSkillExchangeCombineControl__StartPlayUnlockEffect(
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
    sub_1C942F0(v8, v9);
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(target, skillLv, 0, 0, 0, 0);
  ServantSkillInfoIconComponent__PlaySkillIconTweenColor(target, 0, 0);
}


void AppendSkillExchangeCombineControl_ExchangeSkillInfo___ctor(
        AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *this,
        int32_t index,
        int32_t skillId,
        int32_t currentSkillLv,
        int32_t oldSkill,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.index = index;
  this->fields.skillId = skillId;
  this->fields.currentSkillLv = currentSkillLv;
  this->fields.oldSkillLv = oldSkill;
}


void AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48___ctor(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48__MoveNext(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *v3; // x19
  int32_t _1__state; // w8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v5; // x8
  AppendSkillExchangeCombineControl_o *_4__this; // x20
  const MethodInfo *v7; // x3
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v8; // x8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  bool result; // w0
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *baseSkillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  int32_t v19; // w20
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *targetSkillInfo; // x8
  int32_t v21; // w21
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v22; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v23; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v24; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v25; // x8

  v3 = this;
  if ( (byte_4D306B1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4D306B1 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
    baseSkillInfo = v3->fields.baseSkillInfo;
    if ( !baseSkillInfo )
      goto LABEL_30;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    if ( !this )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                        baseSkillInfo->fields.skillId,
                                                                                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    v19 = this ? LODWORD(this->fields.baseSkillInfo) : 10;
    targetSkillInfo = v3->fields.targetSkillInfo;
    if ( !targetSkillInfo )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                        v18,
                                                                                        targetSkillInfo->fields.skillId,
                                                                                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    v21 = this ? LODWORD(this->fields.baseSkillInfo) : 10;
    v22 = v3->fields.baseSkillInfo;
    if ( !v22 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.baseSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
      (ServantSkillInfoIconComponent_o *)this,
      v22->fields.currentSkillLv,
      0,
      1,
      1,
      0);
    v23 = v3->fields.targetSkillInfo;
    if ( !v23 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.targetSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
      (ServantSkillInfoIconComponent_o *)this,
      v23->fields.currentSkillLv,
      0,
      1,
      1,
      0);
    v24 = v3->fields.baseSkillInfo;
    if ( !v24 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.baseSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetLevelLabel(
      (ServantSkillInfoIconComponent_o *)this,
      v24->fields.currentSkillLv,
      v19,
      0);
    v25 = v3->fields.targetSkillInfo;
    if ( !v25 )
      goto LABEL_30;
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.targetSkillIcon;
    if ( !this )
      goto LABEL_30;
    ServantSkillInfoIconComponent__SetLevelLabel(
      (ServantSkillInfoIconComponent_o *)this,
      v25->fields.currentSkillLv,
      v21,
      0);
  }
  else if ( !_1__state )
  {
    _4__this = v3->fields.__4__this;
    v5 = v3->fields.baseSkillInfo;
    v3->fields.__1__state = -1;
    if ( v5 )
    {
      if ( _4__this )
      {
        AppendSkillExchangeCombineControl__PlayLevelExchangeEffect(_4__this, v5->fields.index, 0, v2);
        v8 = v3->fields.targetSkillInfo;
        if ( v8 )
        {
          AppendSkillExchangeCombineControl__PlayLevelExchangeEffect(
            _4__this,
            v8->fields.index,
            v3->fields.callback,
            v7);
          v3->fields.__2__current = 0;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v3->fields.__2__current;
          sub_1C9403C(p__2__current, 0, v10, v11, v12, v13, v14, v15);
          result = 1;
          LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_30:
    sub_1C942F0(this, method);
  }
  return 0;
}


Il2CppObject *AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48__System_Collections_IEnumerator_Reset(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48__System_Collections_IEnumerator_get_Current(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48__System_IDisposable_Dispose(
        AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *this,
        const MethodInfo *method)
{
  ;
}


void AppendSkillExchangeCombineControl___c__DisplayClass36_0___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AppendSkillExchangeCombineControl___c__DisplayClass36_0___OnClickInfo_b__1(
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
  if ( (unsigned int)idx >= LODWORD(useSkillIdList->max_length) )
    sub_1C942F8(this);
  if ( !x )
LABEL_6:
    sub_1C942F0(this, x);
  return useSkillIdList->m_Items[idx] == x->fields.currentSkillId;
}


void AppendSkillExchangeCombineControl___c__DisplayClass36_1___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass36_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AppendSkillExchangeCombineControl___c__DisplayClass36_1___OnClickInfo_b__0(
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
  if ( (unsigned int)animBaseIndex >= LODWORD(useSkillIdList->max_length) )
    sub_1C942F8(this);
  if ( !x )
LABEL_7:
    sub_1C942F0(this, x);
  return useSkillIdList->m_Items[animBaseIndex] == x->fields.currentSkillId;
}


void AppendSkillExchangeCombineControl___c__DisplayClass44_0___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AppendSkillExchangeCombineControl___c__DisplayClass44_0___StartPlayEffect_b__0(
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
      sub_1C942F0(this, method);
    appended = AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect(
                 this->fields.__4__this,
                 this->fields.baseSkillIcon,
                 this->fields.targetSkillIcon,
                 this->fields.baseSkillInfo,
                 this->fields.targetSkillInfo,
                 this->fields.callback,
                 v2);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164(_4__this, appended, 0);
  }
  else
  {
    this->fields.isLast = 1;
  }
}


void AppendSkillExchangeCombineControl___c__DisplayClass46_0___ctor(
        AppendSkillExchangeCombineControl___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AppendSkillExchangeCombineControl___c__DisplayClass46_0___StartPlayLockEffect_b__0(
        AppendSkillExchangeCombineControl___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  ServantSkillInfoIconComponent_o *target; // x0

  target = this->fields.target;
  if ( !target )
    sub_1C942F0(0, method);
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(target, this->fields.skillLv, 0, 0, 1, 0);
}