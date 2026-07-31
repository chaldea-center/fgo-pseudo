void AppendSkillExchangeCombineControl___ctor(AppendSkillExchangeCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_593C760 & 1) == 0 )
  {
    sub_21FFC50(&CombineMenuControl_TypeInfo);
    byte_593C760 = 1;
  }
  if ( !*(&CombineMenuControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, method);
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
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  UISprite_o *charaSprite; // x20
  __int64 v10; // x1
  UILabel_o *detailInfoLb; // x20
  __int64 v12; // x1
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_593C750 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21572/*"img_txt_append"*/);
    sub_21FFC50(&StringLiteral_24111/*"rarity5_1"*/);
    sub_21FFC50(&StringLiteral_21573/*"img_txt_append_exchange"*/);
    sub_21FFC50(&StringLiteral_18402/*"buttontxt_exchange"*/);
    sub_21FFC50(&StringLiteral_2080/*"APPEND_SKILL_EXCHANGE_INFO"*/);
    byte_593C750 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 95, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, v3);
  AppendSkillExchangeCombineControl__InitDispCombineInfo(this, v4);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  this->fields._IsExeCombine_k__BackingField = 0;
  *(_QWORD *)&this->fields.currentBaseIdx = -1;
  AppendSkillExchangeCombineControl__SetExeBtnState(this, v7);
  charaSprite = this->fields.charaSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
  AtlasManager__SetCharaGraphaOption(charaSprite, (System_String_o *)StringLiteral_24111/*"rarity5_1"*/, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.combineTxtImg;
  if ( !helpBtn )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)helpBtn, (System_String_o *)StringLiteral_18402/*"buttontxt_exchange"*/, 0);
  AtlasManager__SetEventSprite(this->fields.titleImg, (System_String_o *)StringLiteral_21572/*"img_txt_append"*/, 0);
  AtlasManager__SetEventSprite(this->fields.itemTitleImg, (System_String_o *)StringLiteral_21573/*"img_txt_append_exchange"*/, 0);
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2080/*"APPEND_SKILL_EXCHANGE_INFO"*/, 0);
  if ( !detailInfoLb )
    goto LABEL_20;
  UILabel__set_text(detailInfoLb, (System_String_o *)helpBtn, 0);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    helpBtn = (UnityEngine_GameObject_o *)this->fields.charaGraph;
    if ( helpBtn )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
      this->fields.charaGraph = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, 0, v16, v17, v18, v19, v20, v21);
      return;
    }
LABEL_20:
    sub_21FFECC(helpBtn, v5);
  }
}


void AppendSkillExchangeCombineControl__InitDispCombineInfo(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  const MethodInfo *v4; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *skillInfoList; // x8
  int size; // w21
  int32_t v9; // w20

  if ( (byte_593C751 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2089/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/);
    byte_593C751 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2089/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, 0);
  AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v3, 1, v4);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0);
  baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.selectSkillHelpLb;
  if ( !baseSelectInfoLb )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)baseSelectInfoLb, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_14;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      baseSelectInfoLb = (UnityEngine_GameObject_o *)this->fields.skillInfoList;
      if ( !baseSelectInfoLb )
        break;
      baseSelectInfoLb = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)baseSelectInfoLb,
                                                       v9,
                                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
      if ( !baseSelectInfoLb )
        break;
      ServantSkillInfoIconComponent__ClearAppendSkillInfo((ServantSkillInfoIconComponent_o *)baseSelectInfoLb, 0);
      if ( size == ++v9 )
        return;
    }
LABEL_14:
    sub_21FFECC(baseSelectInfoLb, v5);
  }
}


void AppendSkillExchangeCombineControl__OnClickExeCombine(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  int v3; // w8
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v6; // x0
  struct UserServantEntity_o *baseUserServantEntity; // x9
  __int64 v8; // x22
  __int64 v9; // x23
  int64_t userIdNumber; // x21
  SetLevelUpData_o *baseLvUpData; // x21
  SetLevelUpData_o *targetLvUpData; // x22
  AppendSkillExchangeDialog_o *appendSkillExchangeDialog; // x20
  int32_t exchangeNum; // w23
  System_Action_o *requestAppendSkillExchange; // x24
  System_Action_o *v16; // x25
  const MethodInfo *v17; // x6
  struct CombineRootComponent_o *combineRootComponent; // x8
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_593C759 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AppendSkillExchangeCombineControl__OnClickExeCombine_b__43_0__);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C759 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    v6 = NetworkManager_TypeInfo;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_22;
  v8 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  userIdNumber = v6->static_fields->userIdNumber;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v20.fields.currentCryptoKey = v8;
  *(_QWORD *)&v20.fields.fakeValue = v9;
  v6 = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v20, 0);
  if ( !Master_object )
    goto LABEL_22;
  v6 = (NetworkManager_c *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                             (UserServantAppendPassiveSkillMaster_o *)Master_object,
                             &entity,
                             userIdNumber,
                             (int32_t)v6,
                             0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( entity )
    {
      baseLvUpData = this->fields.baseLvUpData;
      targetLvUpData = this->fields.targetLvUpData;
      appendSkillExchangeDialog = this->fields.appendSkillExchangeDialog;
      exchangeNum = entity->fields.exchangeNum;
      requestAppendSkillExchange = this->fields.requestAppendSkillExchange;
      v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_AppendSkillExchangeCombineControl__OnClickExeCombine_b__43_0__,
        0);
      if ( appendSkillExchangeDialog )
      {
        AppendSkillExchangeDialog__Open(
          appendSkillExchangeDialog,
          baseLvUpData,
          targetLvUpData,
          exchangeNum,
          requestAppendSkillExchange,
          v16,
          v17);
        return;
      }
    }
LABEL_22:
    sub_21FFECC(v6, v4);
  }
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_22;
  combineRootComponent->fields._IsExeButtonProcessing_k__BackingField = 0;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  int32_t currentBaseIdx; // w22
  int32_t currentTargetIdx; // w23
  __int64 v26; // x8
  Il2CppObject *v27; // x22
  UnityEngine_Object_o *v28; // x21
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  int32_t v31; // w8
  int32_t v32; // w9
  int32_t v33; // w1
  int32_t v34; // w10
  const MethodInfo *v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  TweenColor_o *v38; // x19
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *targetList; // x22
  System_Func_object__bool__o *v40; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  Il2CppObject *v43; // x0
  struct System_Collections_Generic_List_ServantSkillInfoIconComponent__o *v44; // x22
  Il2CppObject *v45; // x23
  System_Func_object__bool__o *v46; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0

  if ( (byte_593C754 & 1) == 0 )
  {
    sub_21FFC50(&Method_AppendSkillExchangeCombineControl_OnClickInfo__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
    sub_21FFC50(&System_Func_ServantSkillInfoIconComponent__bool__TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_AppendSkillExchangeCombineControl___c__DisplayClass36_0__OnClickInfo_b__1__);
    sub_21FFC50(&AppendSkillExchangeCombineControl___c__DisplayClass36_0_TypeInfo);
    sub_21FFC50(&Method_AppendSkillExchangeCombineControl___c__DisplayClass36_1__OnClickInfo_b__0__);
    sub_21FFC50(&AppendSkillExchangeCombineControl___c__DisplayClass36_1_TypeInfo);
    byte_593C754 = 1;
  }
  v7 = sub_21FFEBC(AppendSkillExchangeCombineControl___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = idx;
  if ( isDecide )
  {
    if ( ((this->fields.currentTargetIdx ^ this->fields.currentBaseIdx) & 0x80000000) == 0 )
      goto LABEL_11;
    v16 = sub_21FFEBC(AppendSkillExchangeCombineControl___c__DisplayClass36_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v16, 0);
    if ( !v16 )
      goto LABEL_36;
    *(_QWORD *)(v16 + 24) = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 24), v7, v17, v18, v19, v20, v21, v22);
    currentBaseIdx = this->fields.currentBaseIdx;
    currentTargetIdx = this->fields.currentTargetIdx;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v23);
    SelectMskImgTweenColor = (TweenColor_o *)System_Math__Max_76939956(currentBaseIdx, currentTargetIdx, 0);
    v26 = *(_QWORD *)(v16 + 24);
    *(_DWORD *)(v16 + 16) = (_DWORD)SelectMskImgTweenColor;
    if ( !v26 )
      goto LABEL_36;
    if ( (_DWORD)SelectMskImgTweenColor != *(_DWORD *)(v26 + 24) )
    {
      targetList = this->fields.targetList;
      v40 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ServantSkillInfoIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v40,
        (Il2CppObject *)v16,
        Method_AppendSkillExchangeCombineControl___c__DisplayClass36_1__OnClickInfo_b__0__,
        0);
      v41 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)targetList,
              (System_Func_TSource__bool__o *)v40,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
      v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v41,
                                                                   (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
      v43 = System_Linq_Enumerable__FirstOrDefault_object_(
              v42,
              (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
      v44 = this->fields.targetList;
      v45 = *(Il2CppObject **)(v16 + 24);
      v28 = (UnityEngine_Object_o *)v43;
      v46 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ServantSkillInfoIconComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        v45,
        Method_AppendSkillExchangeCombineControl___c__DisplayClass36_0__OnClickInfo_b__1__,
        0);
      v47 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v44,
              (System_Func_TSource__bool__o *)v46,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ServantSkillInfoIconComponent___);
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v47,
                                                                   (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ServantSkillInfoIconComponent___);
      v27 = System_Linq_Enumerable__FirstOrDefault_object_(
              v48,
              (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantSkillInfoIconComponent___);
    }
    else
    {
LABEL_11:
      v27 = 0;
      v28 = 0;
    }
    v29 = Method_AppendSkillExchangeCombineControl_OnClickInfo__;
    if ( (*((_BYTE *)Method_AppendSkillExchangeCombineControl_OnClickInfo__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_21FFC68(Method_AppendSkillExchangeCombineControl_OnClickInfo__);
    v30 = (System_Reflection_MethodBase_o *)sub_21FFC34(v29, v29[4]);
    v31 = *(_DWORD *)(v7 + 24);
    v32 = this->fields.currentBaseIdx;
    if ( v32 == v31 )
    {
      v31 = -1;
LABEL_16:
      v33 = 0;
      this->fields.currentBaseIdx = v31;
      goto LABEL_23;
    }
    v34 = this->fields.currentTargetIdx;
    if ( v34 == v31 )
    {
      v33 = 0;
      v31 = -1;
    }
    else
    {
      if ( v32 < 0 )
        goto LABEL_16;
      if ( (v34 & 0x80000000) == 0 )
      {
        v33 = 2;
LABEL_23:
        OverwriteAssetSoundName__PlaySystemSe(v30, v33, 0, 0);
        AppendSkillExchangeCombineControl__SetNeedItemInfo(this, v35);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0) )
        {
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
          SelectMskImgTweenColor = (TweenColor_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
          if ( ((unsigned __int8)SelectMskImgTweenColor & 1) != 0 )
          {
            if ( v27 )
            {
              SelectMskImgTweenColor = ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
                                         (ServantSkillInfoIconComponent_o *)v27,
                                         0);
              if ( v28 )
              {
                v38 = SelectMskImgTweenColor;
                SelectMskImgTweenColor = ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
                                           (ServantSkillInfoIconComponent_o *)v28,
                                           0);
                if ( v38 )
                {
                  ((void (__fastcall *)(TweenColor_o *, TweenColor_o *, const MethodInfo *))v38->klass->vtable._8_SynchronizeTween.methodPtr)(
                    v38,
                    SelectMskImgTweenColor,
                    v38->klass->vtable._8_SynchronizeTween.method);
                  return;
                }
              }
            }
LABEL_36:
            sub_21FFECC(SelectMskImgTweenColor, v9);
          }
        }
        return;
      }
      v33 = 0;
    }
    this->fields.currentTargetIdx = v31;
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
    sub_21FFECC(this, targetSkillIcon);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_593C75F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C75F = 1;
  }
  effectSkillLvChange = (Il2CppObject *)this->fields.effectSkillLvChange;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillLvChange,
                                                   (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object
    || (v10 = (UnityEngine_Component_o *)Component_object,
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0),
        Component_object = UnityEngine_Component__get_gameObject(v10, 0),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0)
    || (v12 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0)) == 0 )
  {
LABEL_11:
    sub_21FFECC(Component_object, v9);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_593C75E & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C75E = 1;
  }
  effectSkillLock = (Il2CppObject *)this->fields.effectSkillLock;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillLock,
                                                   (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
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
                                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0)) == 0 )
  {
LABEL_11:
    sub_21FFECC(Component_object, v11);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0);
  GameObjectExtensions__SetParent(v14, transform, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
  v18.fields.x = 0.0;
  v18.fields.z = 0.0;
  v18.fields.y = -6.6;
  GameObjectExtensions__SetLocalPosition(gameObject, v18, 0);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
  v19.fields.x = 0.555;
  v19.fields.y = 0.557;
  v19.fields.z = 0.555;
  GameObjectExtensions__SetLocalScale(v17, v19, 0);
  CommandCodeEffectComponent__PlayAnimation(v12, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_593C75D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C75D = 1;
  }
  effectSkillUnlock = (Il2CppObject *)this->fields.effectSkillUnlock;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   effectSkillUnlock,
                                                   (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_11;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeEffectComponent___);
  if ( !Component_object
    || (v10 = (UnityEngine_Component_o *)Component_object,
        CommandCodeEffectComponent__SetEndEffectCallbak((CommandCodeEffectComponent_o *)Component_object, callback, 0),
        Component_object = UnityEngine_Component__get_gameObject(v10, 0),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0)
    || (v12 = Component_object,
        (Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                          skillInfoList,
                                                          idx,
                                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__)) == 0)
    || (Component_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0)) == 0 )
  {
LABEL_11:
    sub_21FFECC(Component_object, v9);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(Component_object, 0);
  GameObjectExtensions__SetParent(v12, transform, 0);
  gameObject = UnityEngine_Component__get_gameObject(v10, 0);
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  v16.fields.y = -6.5;
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
  struct UICharaGraphTexture_o *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v4 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(AppendSkillExchangeCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         userSvtEnt,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void AppendSkillExchangeCombineControl__SetBaseSvtSkillInfo(
        AppendSkillExchangeCombineControl_o *this,
        UserServantEntity_o *userSvtEnt,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  struct SvtUseSkillData_o *AppendSkillInfo; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2

  if ( (byte_593C752 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2089/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/);
    byte_593C752 = 1;
  }
  if ( userSvtEnt )
  {
    this->fields.baseUserServantEntity = userSvtEnt;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
      (int32_t)userSvtEnt,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2089/*"APPEND_SKILL_EXCHANGE_PRESELECT_INFO"*/, 0);
    AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v11, 1, v12);
    baseSelectInfoLb = this->fields.baseSelectInfoLb;
    if ( !baseSelectInfoLb )
      sub_21FFECC(0, v13);
    UnityEngine_GameObject__SetActive(baseSelectInfoLb, 0, 0);
    AppendSkillInfo = UserServantEntity__getAppendSkillInfo(userSvtEnt, 0);
    this->fields.skillData = AppendSkillInfo;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.skillData,
      (int32_t)AppendSkillInfo,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    AppendSkillExchangeCombineControl__SetSkillIconInfo(this, this->fields.skillData, v22);
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
  System_String_o *v8; // x20
  __int64 currentBaseIdx; // x8
  __int64 currentTargetIdx; // x9
  struct System_Int32_array *svtSkillLvList; // x10
  unsigned int max_length; // w11
  int32_t *m_Items; // x10
  int32_t v14; // w20
  bool v15; // w21
  System_String_o **v16; // x8
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593C758 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2077/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/);
    sub_21FFC50(&StringLiteral_2076/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/);
    byte_593C758 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_35;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.confirmButtonEffect )
    goto LABEL_35;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              this->fields.confirmButtonEffect,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___);
  if ( !this->fields.confirmButtonEffect )
    goto LABEL_35;
  v5 = (UnityEngine_Behaviour_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              this->fields.confirmButtonEffect,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !this->fields.confirmButtonEffect )
    goto LABEL_35;
  v6 = (UnityEngine_Behaviour_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(this->fields.confirmButtonEffect, 0);
  if ( !combineBtnBg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)combineBtnBg,
    this->fields._IsExeCombine_k__BackingField,
    0);
  if ( this->fields._IsExeCombine_k__BackingField )
  {
    if ( !v4 )
      goto LABEL_35;
    v17.fields.r = 1.0;
    v17.fields.g = 1.0;
    v17.fields.b = 1.0;
    v17.fields.a = 1.0;
    UIWidget__set_color(v4, v17, 0);
    if ( !v5 )
      goto LABEL_35;
    UnityEngine_Behaviour__set_enabled(v5, 1, 0);
    UITweener__ResetToBeginning((UITweener_o *)v5, 0);
    if ( !v6 )
      goto LABEL_35;
    UnityEngine_Behaviour__set_enabled(v6, 1, 0);
    UITweener__ResetToBeginning((UITweener_o *)v6, 0);
  }
  else
  {
    if ( !v4 )
      goto LABEL_35;
    v18.fields.r = 0.5;
    v18.fields.g = 0.5;
    v18.fields.b = 0.5;
    v18.fields.a = 1.0;
    UIWidget__set_color(v4, v18, 0);
    if ( !v5 )
      goto LABEL_35;
    UnityEngine_Behaviour__set_enabled(v5, 0, 0);
    if ( !v6 )
      goto LABEL_35;
    UnityEngine_Behaviour__set_enabled(v6, 0, 0);
  }
  skillData = this->fields.skillData;
  v8 = **(System_String_o ***)(qword_594C0B8 + 184);
  if ( !skillData
    || (currentBaseIdx = (unsigned int)this->fields.currentBaseIdx, (currentBaseIdx & 0x80000000) != 0)
    || (currentTargetIdx = (unsigned int)this->fields.currentTargetIdx, (currentTargetIdx & 0x80000000) != 0) )
  {
    v15 = 0;
  }
  else
  {
    svtSkillLvList = skillData->fields.svtSkillLvList;
    if ( !svtSkillLvList )
      goto LABEL_35;
    max_length = svtSkillLvList->max_length;
    if ( (unsigned int)currentBaseIdx >= max_length || (unsigned int)currentTargetIdx >= max_length )
      sub_21FFED4(combineBtnBg);
    m_Items = svtSkillLvList->m_Items;
    v14 = m_Items[currentBaseIdx];
    v15 = v14 == m_Items[currentTargetIdx];
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v16 = (System_String_o **)&StringLiteral_2077/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/;
    if ( v14 )
      v16 = (System_String_o **)&StringLiteral_2076/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/;
    v8 = LocalizationManager__Get(*v16, 0);
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineTxt;
  if ( !combineBtnBg )
    goto LABEL_35;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(combineBtnBg, 0);
  if ( !combineBtnBg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineBtnBg, v15, 0);
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineTxt;
  if ( !v15 )
    v8 = **(System_String_o ***)(qword_594C0B8 + 184);
  if ( !combineBtnBg )
LABEL_35:
    sub_21FFECC(combineBtnBg, method);
  UILabel__set_text((UILabel_o *)combineBtnBg, v8, 0);
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
  __int64 currentTargetIdx; // x8
  struct System_Int32_array *v12; // x9
  _BOOL4 v13; // w28
  __int64 v14; // x1
  LocalizationManager_c *v15; // x0
  __int64 *v16; // x27
  System_String_o *v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  LocalizationManager_c *v20; // x0
  System_String_o **v21; // x20
  System_String_o *v22; // x1
  const MethodInfo *v23; // x3

  if ( (byte_593C755 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2078/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/);
    sub_21FFC50(&StringLiteral_9160/*"MSG_SKILL_INFO"*/);
    sub_21FFC50(&StringLiteral_2090/*"APPEND_SKILL_EXCHANGE_PRESELECT_TARGET_INFO"*/);
    sub_21FFC50(&StringLiteral_2088/*"APPEND_SKILL_EXCHANGE_PRESELECT_BASE_INFO"*/);
    sub_21FFC50(&StringLiteral_2079/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/);
    sub_21FFC50(&StringLiteral_2092/*"APPEND_SKILL_EXCHANGE_SELECTED_MSG"*/);
    byte_593C755 = 1;
  }
  if ( !this->fields.baseUserServantEntity )
    return;
  selectSkillHelpLb = this->fields.selectSkillHelpLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  targetList = LocalizationManager__Get((System_String_o *)StringLiteral_9160/*"MSG_SKILL_INFO"*/, 0);
  if ( !selectSkillHelpLb
    || (UILabel__set_text(selectSkillHelpLb, targetList, 0),
        (targetList = (System_String_o *)this->fields.targetList) == 0) )
  {
LABEL_35:
    sub_21FFECC(targetList, v5);
  }
  v6 = 0;
  while ( v6 < SLODWORD(targetList[1].klass) )
  {
    targetList = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)targetList,
                                      v6,
                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
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
        goto LABEL_35;
      if ( (unsigned int)currentBaseIdx >= LODWORD(useSkillIdList->max_length) )
        goto LABEL_46;
      if ( !targetList )
        goto LABEL_35;
      v10 = useSkillIdList->m_Items[currentBaseIdx] == LODWORD(targetList[7].monitor);
    }
    currentTargetIdx = (unsigned int)this->fields.currentTargetIdx;
    if ( (currentTargetIdx & 0x80000000) != 0 )
    {
      if ( !targetList )
        goto LABEL_35;
      v13 = 0;
    }
    else
    {
      v12 = this->fields.useSkillIdList;
      if ( !v12 )
        goto LABEL_35;
      if ( (unsigned int)currentTargetIdx >= LODWORD(v12->max_length) )
LABEL_46:
        sub_21FFED4(targetList);
      if ( !targetList )
        goto LABEL_35;
      v13 = v12->m_Items[currentTargetIdx] == LODWORD(targetList[7].monitor);
    }
    ServantSkillInfoIconComponent__SetDispSelectMskImg((ServantSkillInfoIconComponent_o *)targetList, v10 || v13, 0);
    if ( v10 )
    {
      v15 = LocalizationManager_TypeInfo;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        v16 = &StringLiteral_2078/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/;
LABEL_33:
        v17 = LocalizationManager__Get((System_String_o *)*v16, 0);
        goto LABEL_34;
      }
      v16 = &StringLiteral_2078/*"APPEND_SKILL_EXCHANGE_ICON_MSG_BASE"*/;
      goto LABEL_32;
    }
    if ( v13 )
    {
      v15 = LocalizationManager_TypeInfo;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        v16 = &StringLiteral_2079/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/;
        goto LABEL_33;
      }
      v16 = &StringLiteral_2079/*"APPEND_SKILL_EXCHANGE_ICON_MSG_TARGET"*/;
LABEL_32:
      j_il2cpp_runtime_class_init_0(v15, v14);
      goto LABEL_33;
    }
    v17 = **(System_String_o ***)(qword_594C0B8 + 184);
LABEL_34:
    ServantSkillInfoIconComponent__SetMsgLabel(v8, v17, 0);
    AppendSkillExchangeCombineControl__SetSvtSkillCombineData(this, v6, v18);
    targetList = (System_String_o *)this->fields.targetList;
    ++v6;
    if ( !targetList )
      goto LABEL_35;
  }
  AppendSkillExchangeCombineControl__SetExeBtnState(this, v5);
  if ( this->fields.currentBaseIdx < 0 )
  {
    v20 = LocalizationManager_TypeInfo;
    v21 = (System_String_o **)&StringLiteral_2088/*"APPEND_SKILL_EXCHANGE_PRESELECT_BASE_INFO"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_41;
  }
  else
  {
    v20 = LocalizationManager_TypeInfo;
    if ( this->fields.currentTargetIdx < 0 )
      v21 = (System_String_o **)&StringLiteral_2090/*"APPEND_SKILL_EXCHANGE_PRESELECT_TARGET_INFO"*/;
    else
      v21 = (System_String_o **)&StringLiteral_2092/*"APPEND_SKILL_EXCHANGE_SELECTED_MSG"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_41:
      j_il2cpp_runtime_class_init_0(v20, v19);
  }
  v22 = LocalizationManager__Get(*v21, 0);
  AppendSkillExchangeCombineControl__SetPreSelectLabel(this, v22, 0, v23);
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
    sub_21FFECC(preSelectBaseLb, msg);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, 1, 0);
}


void AppendSkillExchangeCombineControl__SetRequest(
        AppendSkillExchangeCombineControl_o *this,
        System_Action_o *request,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.requestAppendSkillExchange = request;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestAppendSkillExchange,
    (int32_t)request,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AppendSkillExchangeCombineControl_o *v9; // x20
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
  unsigned __int64 v20; // x21
  __int64 v21; // x29
  struct System_Int32_array *v22; // x8
  int32_t v23; // w22
  int32_t type; // w24
  struct System_Threading_CancellationTokenSource_o **p_m_CancellationTokenSource; // x8
  struct System_Int32_array *svtSkillLvList; // x9
  System_String_o *v27; // x26
  int32_t v28; // w25
  Il2CppObject *Item; // x23
  ServantSkillInfoIconComponent_ClickDelegate_o *v30; // x27
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v38; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v40; // x8

  v9 = this;
  if ( (byte_593C753 & 1) == 0 )
  {
    sub_21FFC50(&Method_AppendSkillExchangeCombineControl_OnClickInfo__);
    sub_21FFC50(&ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantSkillInfoIconComponent__TypeInfo);
    this = (AppendSkillExchangeCombineControl_o *)sub_21FFC50(&StringLiteral_923/*"-"*/);
    byte_593C753 = 1;
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
    v20 = 0;
    v21 = (unsigned int)max_length;
    while ( 1 )
    {
      v22 = v9->fields.useSkillIdList;
      if ( !v22 )
        break;
      if ( v20 >= LODWORD(v22->max_length) )
        goto LABEL_28;
      v23 = v22->m_Items[v20];
      if ( v23 >= 1 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillData);
        this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          break;
        this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                        v23,
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
        if ( v20 >= LODWORD(svtSkillLvList->max_length) )
LABEL_28:
          sub_21FFED4(this);
        this = (AppendSkillExchangeCombineControl_o *)v9->fields.skillInfoList;
        if ( !this )
          break;
        v27 = (System_String_o *)*p_m_CancellationTokenSource;
        v28 = svtSkillLvList->m_Items[v20];
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v20,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
        v30 = (ServantSkillInfoIconComponent_ClickDelegate_o *)sub_21FFEBC(ServantSkillInfoIconComponent_ClickDelegate_TypeInfo);
        ServantSkillInfoIconComponent_ClickDelegate___ctor(
          v30,
          (Il2CppObject *)v9,
          (intptr_t)Method_AppendSkillExchangeCombineControl_OnClickInfo__,
          0);
        if ( !Item )
          break;
        ServantSkillInfoIconComponent__SetSkillInfo_37921696(
          (ServantSkillInfoIconComponent_o *)Item,
          v20,
          v27,
          v23,
          v28,
          type,
          v30,
          0,
          0);
        this = (AppendSkillExchangeCombineControl_o *)v9->fields.targetList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v38 = Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v40 + 32) = Item;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 32), (int32_t)Item, v31, v32, v33, v34, v35, v36);
        }
      }
      if ( v21 == ++v20 )
        goto LABEL_26;
    }
LABEL_27:
    sub_21FFECC(this, skillData);
  }
LABEL_26:
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_593C757 & 1) == 0 )
  {
    sub_21FFC50(&SetLevelUpData_TypeInfo);
    byte_593C757 = 1;
  }
  v16 = sub_21FFEBC(SetLevelUpData_TypeInfo);
  SetLevelUpData___ctor((SetLevelUpData_o *)v16, 0);
  if ( !v16 )
    sub_21FFECC(v17, v18);
  *(_DWORD *)(v16 + 28) = idx;
  *(_DWORD *)(v16 + 16) = currentSkillId;
  *(_DWORD *)(v16 + 20) = currentSkillId;
  *(_QWORD *)(v16 + 40) = skillName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 40), (int32_t)skillName, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 64) = currentSkillLv;
  *(_DWORD *)(v16 + 24) = currentSkillNum;
  *(_QWORD *)(v16 + 48) = skillDetail;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 48), (int32_t)skillDetail, v25, v26, v27, v28, v29, v30);
  *lvUpData = (SetLevelUpData_o *)v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)lvUpData, v16, v31, v32, v33, v34, v35, v36);
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
  int32_t *m_Items; // x10
  int32_t v16; // w8
  int32_t v17; // w9
  struct SvtUseSkillData_o *v18; // x8
  struct System_Int32_array *v19; // x8
  __int64 v20; // x9
  struct SvtUseSkillData_o *v21; // x10
  struct System_Int32_array *v22; // x8
  __int64 v23; // x20
  struct System_Int32_array *v24; // x9
  unsigned int v25; // w11
  struct System_Int32_array *svtSkillNumsList; // x10
  __int64 v27; // x12
  System_String_o *m_CancellationTokenSource; // x24
  int v29; // w11
  int32_t v30; // w21
  int32_t v31; // w22
  int32_t v32; // w23
  int32_t v33; // w1
  AppendSkillExchangeCombineControl_o *EffectExplanation; // x0
  __int64 v35; // x1
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
  System_String_o *v46; // x24
  int v47; // w11
  int32_t v48; // w21
  int32_t v49; // w22
  int32_t v50; // w23
  int32_t v51; // w1
  AppendSkillExchangeCombineControl_o *v52; // x0
  const MethodInfo *v53; // [xsp+0h] [xbp-60h]
  const MethodInfo *v54; // [xsp+0h] [xbp-60h]

  v4 = this;
  if ( (byte_593C756 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (AppendSkillExchangeCombineControl_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    byte_593C756 = 1;
  }
  skillData = v4->fields.skillData;
  if ( !skillData )
    goto LABEL_60;
  svtUseSkillIdList = skillData->fields.svtUseSkillIdList;
  if ( !svtUseSkillIdList )
    goto LABEL_60;
  if ( LODWORD(svtUseSkillIdList->max_length) <= idx )
    goto LABEL_61;
  svtSkillLvList = skillData->fields.svtSkillLvList;
  if ( !svtSkillLvList )
    goto LABEL_60;
  if ( LODWORD(svtSkillLvList->max_length) <= idx )
    goto LABEL_61;
  v8 = svtUseSkillIdList->m_Items[idx];
  v9 = svtSkillLvList->m_Items[idx];
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&idx);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !this )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          v8,
          (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__) )
    return;
  this = (AppendSkillExchangeCombineControl_o *)v4->fields.targetList;
  if ( !this )
    goto LABEL_60;
  this = (AppendSkillExchangeCombineControl_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  idx,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  if ( !this )
    goto LABEL_60;
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp((ServantSkillInfoIconComponent_o *)this, v9, 0, 1, 1, 0);
  currentBaseIdx = (unsigned int)v4->fields.currentBaseIdx;
  if ( (currentBaseIdx & 0x80000000) != 0
    || (currentTargetIdx = (unsigned int)v4->fields.currentTargetIdx, (currentTargetIdx & 0x80000000) != 0) )
  {
    v4->fields._IsExeCombine_k__BackingField = 0;
    return;
  }
  v12 = v4->fields.skillData;
  if ( !v12 )
    goto LABEL_60;
  v13 = v12->fields.svtSkillLvList;
  if ( !v13 )
    goto LABEL_60;
  max_length = v13->max_length;
  if ( (unsigned int)currentBaseIdx >= max_length || (unsigned int)currentTargetIdx >= max_length )
LABEL_61:
    sub_21FFED4(this);
  m_Items = v13->m_Items;
  v16 = m_Items[currentBaseIdx];
  v17 = m_Items[currentTargetIdx];
  v4->fields._IsExeCombine_k__BackingField = v16 != v17;
  if ( v16 == v17 )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&idx);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  v18 = v4->fields.skillData;
  if ( !v18 )
    goto LABEL_60;
  v19 = v18->fields.svtUseSkillIdList;
  if ( !v19 )
    goto LABEL_60;
  v20 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v20 >= LODWORD(v19->max_length) )
    goto LABEL_61;
  if ( !this )
    goto LABEL_60;
  this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v19->m_Items[v20],
                                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v21 = v4->fields.skillData;
  if ( !v21 )
    goto LABEL_60;
  v22 = v21->fields.svtUseSkillIdList;
  if ( !v22 )
    goto LABEL_60;
  v23 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v23 >= LODWORD(v22->max_length) )
    goto LABEL_61;
  v24 = v21->fields.svtSkillLvList;
  if ( !v24 )
    goto LABEL_60;
  v25 = v24->max_length;
  if ( (unsigned int)v23 >= v25 )
    goto LABEL_61;
  svtSkillNumsList = v21->fields.svtSkillNumsList;
  if ( !svtSkillNumsList )
    goto LABEL_60;
  if ( (unsigned int)v23 >= LODWORD(svtSkillNumsList->max_length) )
    goto LABEL_61;
  if ( !this )
    goto LABEL_60;
  v27 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v27 >= v25 )
    goto LABEL_61;
  m_CancellationTokenSource = (System_String_o *)this->fields.m_CancellationTokenSource;
  v29 = v24->m_Items[v27];
  v30 = v22->m_Items[v23];
  v31 = v24->m_Items[v23];
  v32 = svtSkillNumsList->m_Items[v23];
  if ( v29 >= 1 )
    v33 = v24->m_Items[v27];
  else
    v33 = v29 + 1;
  EffectExplanation = (AppendSkillExchangeCombineControl_o *)SkillEntity__getEffectExplanation(
                                                               (SkillEntity_o *)this,
                                                               v33,
                                                               0);
  AppendSkillExchangeCombineControl__SetSkillLevelUpData(
    EffectExplanation,
    &v4->fields.baseLvUpData,
    v23,
    v30,
    v31,
    v32,
    m_CancellationTokenSource,
    (System_String_o *)EffectExplanation,
    v53);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
  this = (AppendSkillExchangeCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  v36 = v4->fields.skillData;
  if ( !v36 )
    goto LABEL_60;
  v37 = v36->fields.svtUseSkillIdList;
  if ( !v37 )
    goto LABEL_60;
  v38 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v38 >= LODWORD(v37->max_length) )
    goto LABEL_61;
  if ( !this )
    goto LABEL_60;
  this = (AppendSkillExchangeCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                  v37->m_Items[v38],
                                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v39 = v4->fields.skillData;
  if ( !v39 )
    goto LABEL_60;
  v40 = v39->fields.svtUseSkillIdList;
  if ( !v40 )
    goto LABEL_60;
  v41 = v4->fields.currentTargetIdx;
  if ( (unsigned int)v41 >= LODWORD(v40->max_length) )
    goto LABEL_61;
  v42 = v39->fields.svtSkillLvList;
  if ( !v42 )
    goto LABEL_60;
  v43 = v42->max_length;
  if ( (unsigned int)v41 >= v43 )
    goto LABEL_61;
  v44 = v39->fields.svtSkillNumsList;
  if ( !v44 )
    goto LABEL_60;
  if ( (unsigned int)v41 >= LODWORD(v44->max_length) )
    goto LABEL_61;
  if ( !this )
LABEL_60:
    sub_21FFECC(this, *(_QWORD *)&idx);
  v45 = v4->fields.currentBaseIdx;
  if ( (unsigned int)v45 >= v43 )
    goto LABEL_61;
  v46 = (System_String_o *)this->fields.m_CancellationTokenSource;
  v47 = v42->m_Items[v45];
  v48 = v40->m_Items[v41];
  v49 = v42->m_Items[v41];
  v50 = v44->m_Items[v41];
  if ( v47 >= 1 )
    v51 = v42->m_Items[v45];
  else
    v51 = v47 + 1;
  v52 = (AppendSkillExchangeCombineControl_o *)SkillEntity__getEffectExplanation((SkillEntity_o *)this, v51, 0);
  AppendSkillExchangeCombineControl__SetSkillLevelUpData(
    v52,
    &v4->fields.targetLvUpData,
    v41,
    v48,
    v49,
    v50,
    v46,
    (System_String_o *)v52,
    v54);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_object__o *v26; // x24
  Il2CppObject *Item; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x0
  System_Collections_Generic_List_object__o **v35; // x23
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_Object_array *items; // x8
  __int64 v43; // x9
  struct SvtUseSkillData_o *skillData; // x10
  struct System_Int32_array *svtSkillLvList; // x10
  int v46; // w27
  int v47; // w28
  int32_t v48; // w29
  __int64 v49; // x25
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct System_Object_array *v56; // x8
  __int64 v57; // x9
  struct SvtUseSkillData_o *v58; // x10
  struct System_Int32_array *v59; // x10
  int v60; // w24
  int v61; // w25
  int32_t v62; // w27
  __int64 v63; // x22
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_Action_c *v70; // x0
  System_Action_o *v71; // x21
  const MethodInfo *v72; // x4
  const MethodInfo *v73; // x4

  if ( (byte_593C75A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
    sub_21FFC50(&Method_AppendSkillExchangeCombineControl___c__DisplayClass44_0__StartPlayEffect_b__0__);
    sub_21FFC50(&AppendSkillExchangeCombineControl___c__DisplayClass44_0_TypeInfo);
    byte_593C75A = 1;
  }
  v11 = sub_21FFEBC(AppendSkillExchangeCombineControl___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_25;
  *(_QWORD *)(v11 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 64) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 64), (int32_t)callback, v20, v21, v22, v23, v24, v25);
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
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  *(_QWORD *)(v11 + 32) = Item;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)Item, v28, v29, v30, v31, v32, v33);
  AppendSkillInfo = (System_Collections_Generic_List_object__o *)this->fields.targetList;
  if ( !AppendSkillInfo )
    goto LABEL_25;
  v34 = System_Collections_Generic_List_object___get_Item(
          AppendSkillInfo,
          targetIndex,
          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantSkillInfoIconComponent__get_Item__);
  *(_QWORD *)(v11 + 40) = v34;
  v35 = (System_Collections_Generic_List_object__o **)(v11 + 40);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)v34, v36, v37, v38, v39, v40, v41);
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
    sub_21FFECC(AppendSkillInfo, v13);
  if ( LODWORD(svtSkillLvList->max_length) <= baseIndex )
    goto LABEL_26;
  v46 = *((_DWORD *)items->m_Items + baseIndex);
  v47 = *(_DWORD *)(v43 + 4LL * baseIndex + 32);
  v48 = svtSkillLvList->m_Items[baseIndex];
  v49 = sub_21FFEBC(AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v49, 0);
  *(_DWORD *)(v49 + 16) = baseIndex;
  *(_DWORD *)(v49 + 20) = v46;
  *(_DWORD *)(v49 + 24) = v47;
  *(_DWORD *)(v49 + 28) = v48;
  *(_QWORD *)(v11 + 48) = v49;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 48), v49, v50, v51, v52, v53, v54, v55);
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
    sub_21FFED4(AppendSkillInfo);
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
  v63 = sub_21FFEBC(AppendSkillExchangeCombineControl_ExchangeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v63, 0);
  *(_DWORD *)(v63 + 16) = targetIndex;
  *(_DWORD *)(v63 + 20) = v60;
  *(_QWORD *)(v11 + 56) = v63;
  *(_DWORD *)(v63 + 24) = v61;
  *(_DWORD *)(v63 + 28) = v62;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 56), v63, v64, v65, v66, v67, v68, v69);
  AppendSkillInfo = *(System_Collections_Generic_List_object__o **)(v11 + 32);
  if ( !AppendSkillInfo )
    goto LABEL_25;
  ServantSkillInfoIconComponent__SetMsgLabel(
    (ServantSkillInfoIconComponent_o *)AppendSkillInfo,
    **(System_String_o ***)(qword_594C0B8 + 184),
    0);
  AppendSkillInfo = *v35;
  if ( !*v35 )
    goto LABEL_25;
  ServantSkillInfoIconComponent__SetMsgLabel(
    (ServantSkillInfoIconComponent_o *)AppendSkillInfo,
    **(System_String_o ***)(qword_594C0B8 + 184),
    0);
  v70 = System_Action_TypeInfo;
  *(_BYTE *)(v11 + 16) = 0;
  v71 = (System_Action_o *)sub_21FFEBC(v70);
  System_Action___ctor(
    v71,
    (Il2CppObject *)v11,
    Method_AppendSkillExchangeCombineControl___c__DisplayClass44_0__StartPlayEffect_b__0__,
    0);
  AppendSkillExchangeCombineControl__PlayEffect(
    this,
    *(ServantSkillInfoIconComponent_o **)(v11 + 32),
    *(AppendSkillExchangeCombineControl_ExchangeSkillInfo_o **)(v11 + 48),
    v71,
    v72);
  AppendSkillExchangeCombineControl__PlayEffect(
    this,
    *(ServantSkillInfoIconComponent_o **)(v11 + 40),
    *(AppendSkillExchangeCombineControl_ExchangeSkillInfo_o **)(v11 + 56),
    v71,
    v73);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7

  if ( (byte_593C75C & 1) == 0 )
  {
    sub_21FFC50(&AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_TypeInfo);
    byte_593C75C = 1;
  }
  v13 = sub_21FFEBC(AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 64) = baseSkillIcon;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 64), (int32_t)baseSkillIcon, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v13 + 72) = targetSkillIcon;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 72), (int32_t)targetSkillIcon, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v13 + 40) = baseSkillInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)baseSkillInfo, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v13 + 48) = targetSkillInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 48), (int32_t)targetSkillInfo, v38, v39, v40, v41, v42, v43);
  *(_QWORD *)(v13 + 56) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 56), (int32_t)callback, v44, v45, v46, v47, v48, v49);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_c *v20; // x0
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x4

  if ( (byte_593C75B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AppendSkillExchangeCombineControl___c__DisplayClass46_0__StartPlayLockEffect_b__0__);
    sub_21FFC50(&AppendSkillExchangeCombineControl___c__DisplayClass46_0_TypeInfo);
    byte_593C75B = 1;
  }
  v11 = sub_21FFEBC(AppendSkillExchangeCombineControl___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_6;
  *(_QWORD *)(v11 + 16) = target;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)target, v14, v15, v16, v17, v18, v19);
  v20 = System_Action_TypeInfo;
  *(_DWORD *)(v11 + 24) = skillLv;
  v21 = (System_Action_o *)sub_21FFEBC(v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v11,
    Method_AppendSkillExchangeCombineControl___c__DisplayClass46_0__StartPlayLockEffect_b__0__,
    0);
  AppendSkillExchangeCombineControl__PlayLockEffect(this, idx, v21, startPlayLevelExchangeEffect, v22);
  v12 = *(ServantSkillInfoIconComponent_o **)(v11 + 16);
  if ( !v12 )
LABEL_6:
    sub_21FFECC(v12, v13);
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
    sub_21FFECC(v8, v9);
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(target, skillLv, 0, 0, 0, 0);
  ServantSkillInfoIconComponent__PlaySkillIconTweenColor(target, 0, 0);
}


void AppendSkillExchangeCombineControl___OnClickExeCombine_b__43_0(
        AppendSkillExchangeCombineControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(this, method);
  combineRootComponent->fields._IsExeButtonProcessing_k__BackingField = 0;
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
  int32_t _1__state; // w22
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *baseSkillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  int32_t v7; // w20
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v8; // x8
  AppendSkillExchangeCombineControl_o *_4__this; // x20
  const MethodInfo *v10; // x3
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v11; // x8
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *targetSkillInfo; // x8
  int32_t v20; // w21
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v21; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v22; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v23; // x8
  struct AppendSkillExchangeCombineControl_ExchangeSkillInfo_o *v24; // x8

  v3 = this;
  if ( (byte_593C761 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_593C761 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      v3->fields.__1__state = -1;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
      baseSkillInfo = v3->fields.baseSkillInfo;
      if ( baseSkillInfo )
      {
        v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        if ( this )
        {
          this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                              baseSkillInfo->fields.skillId,
                                                                                              (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          v7 = this ? LODWORD(this->fields.baseSkillInfo) : 10;
          targetSkillInfo = v3->fields.targetSkillInfo;
          if ( targetSkillInfo )
          {
            this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)DataMasterBase_object__object__int___GetEntity(
                                                                                                v6,
                                                                                                targetSkillInfo->fields.skillId,
                                                                                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            v20 = this ? LODWORD(this->fields.baseSkillInfo) : 10;
            v21 = v3->fields.baseSkillInfo;
            if ( v21 )
            {
              this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.baseSkillIcon;
              if ( this )
              {
                ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
                  (ServantSkillInfoIconComponent_o *)this,
                  v21->fields.currentSkillLv,
                  0,
                  1,
                  1,
                  0);
                v22 = v3->fields.targetSkillInfo;
                if ( v22 )
                {
                  this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.targetSkillIcon;
                  if ( this )
                  {
                    ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
                      (ServantSkillInfoIconComponent_o *)this,
                      v22->fields.currentSkillLv,
                      0,
                      1,
                      1,
                      0);
                    v23 = v3->fields.baseSkillInfo;
                    if ( v23 )
                    {
                      this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.baseSkillIcon;
                      if ( this )
                      {
                        ServantSkillInfoIconComponent__SetLevelLabel(
                          (ServantSkillInfoIconComponent_o *)this,
                          v23->fields.currentSkillLv,
                          v7,
                          0);
                        v24 = v3->fields.targetSkillInfo;
                        if ( v24 )
                        {
                          this = (AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_o *)v3->fields.targetSkillIcon;
                          if ( this )
                          {
                            ServantSkillInfoIconComponent__SetLevelLabel(
                              (ServantSkillInfoIconComponent_o *)this,
                              v24->fields.currentSkillLv,
                              v20,
                              0);
                            return _1__state == 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_30:
      sub_21FFECC(this, method);
    }
  }
  else
  {
    _4__this = v3->fields.__4__this;
    v8 = v3->fields.baseSkillInfo;
    v3->fields.__1__state = -1;
    if ( !v8 )
      goto LABEL_30;
    if ( !_4__this )
      goto LABEL_30;
    AppendSkillExchangeCombineControl__PlayLevelExchangeEffect(_4__this, v8->fields.index, 0, v2);
    v11 = v3->fields.targetSkillInfo;
    if ( !v11 )
      goto LABEL_30;
    AppendSkillExchangeCombineControl__PlayLevelExchangeEffect(_4__this, v11->fields.index, v3->fields.callback, v10);
    v3->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
    sub_21FFBF4(p__2__current, 0, v13, v14, v15, v16, v17, v18);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect_d__48_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
    sub_21FFED4(this);
  if ( !x )
LABEL_6:
    sub_21FFECC(this, x);
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
    sub_21FFED4(this);
  if ( !x )
LABEL_7:
    sub_21FFECC(this, x);
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
      sub_21FFECC(this, method);
    appended = AppendSkillExchangeCombineControl__StartPlayLevelExchangeEffect(
                 this->fields.__4__this,
                 this->fields.baseSkillIcon,
                 this->fields.targetSkillIcon,
                 this->fields.baseSkillInfo,
                 this->fields.targetSkillInfo,
                 this->fields.callback,
                 v2);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452(_4__this, appended, 0);
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
    sub_21FFECC(0, method);
  ServantSkillInfoIconComponent__SetSkillIconStatusDisp(target, this->fields.skillLv, 0, 0, 1, 0);
}