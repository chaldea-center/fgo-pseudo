void __fastcall ServantCombineResultInfoComponent___ctor(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C25C66 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C25C66 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCombineResultInfoComponent__Close(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x0
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4C25C64 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_ServantCombineResultInfoComponent_EndClose__, v3);
    byte_4C25C64 = 1;
  }
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0LL);
  ServantCombineResultInfoComponent__Close_46849276(this, v5, v6);
}


void __fastcall ServantCombineResultInfoComponent__Close_46849276(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4C25C65 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_ServantCombineResultInfoComponent_EndClose__, v4);
    byte_4C25C65 = 1;
  }
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall ServantCombineResultInfoComponent__EndClose(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  ServantCombineResultInfoComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantCombineResultInfoComponent__EndOpen(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_openCallBack; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *openCallBack; // t1

  openCallBack = this->fields.openCallBack;
  p_openCallBack = (PartyOrganizationUtility_o *)&this->fields.openCallBack;
  v9 = openCallBack;
  if ( openCallBack )
  {
    p_openCallBack->klass = 0LL;
    sub_1C3B708(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantCombineResultInfoComponent__Init(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C25C5F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C25C5F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ServantCombineResultInfoComponent__clearInfoGrid(this, v5);
  gameObject = this->fields.levleUpInfo;
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.befLevelLb;
  if ( !gameObject )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.currentLevelLb;
  if ( !gameObject )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.currentHpLb;
  if ( !gameObject
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.increHpLb) == 0LL)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.currentAtkLb) == 0LL)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.increAtkLb) == 0LL) )
  {
LABEL_12:
    sub_1C3B9C0(gameObject, v4);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCombineResultInfoComponent__OpenLevelUpInfo(
        ServantCombineResultInfoComponent_o *this,
        LevelUpInfoData_o *infoData,
        System_Action_o *callback,
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UILabel_o *levelUpTitleLb; // x22
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  UILabel_o *befLevelLb; // x22
  System_String_o *v27; // x23
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  UILabel_o *currentLevelLb; // x22
  UILabel_o *currentHpLb; // x21
  UILabel_o *increHpLb; // x21
  System_String_o *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  UILabel_o *currentAtkLb; // x21
  UILabel_o *increAtkLb; // x21
  System_String_o *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  System_Action_o *v47; // x20
  int32_t increAtkVal; // [xsp+Ch] [xbp-44h] BYREF
  int32_t increHpVal; // [xsp+18h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C25C61 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, infoData);
    sub_1C3B764(&int_TypeInfo, v7);
    sub_1C3B764(&LocalizationManager_TypeInfo, v8);
    sub_1C3B764(&Method_ServantCombineResultInfoComponent_EndOpen__, v9);
    sub_1C3B764(&Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__, v10);
    sub_1C3B764(&StringLiteral_8408/*"MAX_RECOMMEND_SUPPORT_DECK_NUM"*/, v11);
    sub_1C3B764(&StringLiteral_8405/*"MAX_QP"*/, v12);
    sub_1C3B764(&StringLiteral_7519/*"Interface/UI Root/30_ContinuePanel/base_win/usecheck_win/win/btn_cancel"*/, v13);
    sub_1C3B764(&StringLiteral_1/*""*/, v14);
    byte_4C25C61 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = this->fields.levleUpInfo;
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallBack = callback;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.openCallBack,
      (int64_t)callback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    gameObject = (UnityEngine_GameObject_o *)this->fields.levelUpTitleLb;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !infoData )
      goto LABEL_25;
    if ( infoData->fields.oldLv < infoData->fields.currentLv )
    {
      levelUpTitleLb = this->fields.levelUpTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8405/*"MAX_QP"*/, 0LL);
      if ( !levelUpTitleLb )
        goto LABEL_25;
      UILabel__set_text(levelUpTitleLb, (System_String_o *)gameObject, 0LL);
      v24 = Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__;
      if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_1C3B77C(Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
      v25 = (System_Reflection_MethodBase_o *)sub_1C3B748(v24, v24[4]);
      OverwriteAssetSoundName__PlaySystemSe(v25, 5, 0, 0LL);
    }
    befLevelLb = this->fields.befLevelLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8408/*"MAX_RECOMMEND_SUPPORT_DECK_NUM"*/, 0LL);
    oldLv = infoData->fields.oldLv;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &oldLv, v28, v29, v30);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v27, v31, 0LL);
    if ( befLevelLb )
    {
      UILabel__set_text(befLevelLb, (System_String_o *)gameObject, 0LL);
      currentLevelLb = this->fields.currentLevelLb;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 20, 0LL);
      if ( currentLevelLb )
      {
        UILabel__set_text(currentLevelLb, (System_String_o *)gameObject, 0LL);
        currentHpLb = this->fields.currentHpLb;
        gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 24, 0LL);
        if ( currentHpLb )
        {
          UILabel__set_text(currentHpLb, (System_String_o *)gameObject, 0LL);
          increHpLb = this->fields.increHpLb;
          v35 = LocalizationManager__Get((System_String_o *)StringLiteral_7519/*"Interface/UI Root/30_ContinuePanel/base_win/usecheck_win/win/btn_cancel"*/, 0LL);
          increHpVal = infoData->fields.increHpVal;
          v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increHpVal, v36, v37, v38);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v35, v39, 0LL);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, (System_String_o *)gameObject, 0LL);
            currentAtkLb = this->fields.currentAtkLb;
            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 32, 0LL);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, (System_String_o *)gameObject, 0LL);
              increAtkLb = this->fields.increAtkLb;
              v42 = LocalizationManager__Get((System_String_o *)StringLiteral_7519/*"Interface/UI Root/30_ContinuePanel/base_win/usecheck_win/win/btn_cancel"*/, 0LL);
              increAtkVal = infoData->fields.increAtkVal;
              v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAtkVal, v43, v44, v45);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v42, v46, 0LL);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, (System_String_o *)gameObject, 0LL);
                v47 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
                System_Action___ctor(v47, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C3B9C0(gameObject, v16);
  }
}


void __fastcall ServantCombineResultInfoComponent__OpenResultInfo(
        ServantCombineResultInfoComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  void *gameObject; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
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
  const MethodInfo *v28; // x1
  float v29; // s9
  unsigned int localPosition; // s0
  float v31; // s8
  int32_t v32; // w21
  float v33; // s9
  int v34; // w23
  UnityEngine_GameObject_o *v35; // x22
  UnityEngine_Transform_o *transform; // x0
  int v37; // s10
  System_Action_o *v38; // x20
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C25C60 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, resInfo);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1C3B764(&Method_ServantCombineResultInfoComponent_EndOpen__, v9);
    sub_1C3B764(&Method_ServantCombineResultInfoComponent_OpenResultInfo__, v10);
    byte_4C25C60 = 1;
  }
  if ( !this->fields.state )
  {
    v11 = Method_ServantCombineResultInfoComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C3B77C(Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C3B748(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 6, 0, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    this->fields.resInfoList = resInfo;
    p_resInfoList = &this->fields.resInfoList;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)resInfo, v16, v17, v18, v19, v20, v21);
    this->fields.openCallBack = callback;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.openCallBack,
      (int64_t)callback,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    ServantCombineResultInfoComponent__setCenter(this, v28);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_20;
    v29 = *((float *)gameObject + 13);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    gameObject = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_20;
    v31 = *(float *)&localPosition;
    v32 = 0;
    v33 = v29 * 0.5;
    v34 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
    while ( v34 != v32 )
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v32,
                     (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( this->fields.resultInfoGrid )
      {
        v35 = (UnityEngine_GameObject_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0LL);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v35, transform, 0LL, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = *p_resInfoList;
          ++v32;
          if ( *p_resInfoList )
            continue;
        }
      }
      goto LABEL_20;
    }
    if ( !this->fields.resultInfoGrid
      || (v37 = *((_DWORD *)gameObject + 6),
          (gameObject = UnityEngine_Component__get_transform(
                          (UnityEngine_Component_o *)this->fields.resultInfoGrid,
                          0LL)) == 0LL)
      || (v39.fields.z = this->fields.center.fields.z,
          v39.fields.y = (float)(v33 * (float)v37) + -25.0,
          v39.fields.x = v31,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v39, 0LL),
          (gameObject = this->fields.resultInfoGrid) == 0LL) )
    {
LABEL_20:
      sub_1C3B9C0(gameObject, v14);
    }
    UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
    v38 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v38, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
  }
}


void __fastcall ServantCombineResultInfoComponent__clearInfoGrid(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resultInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C25C63 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C25C63 = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid
    || (resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1C3B9C0(resultInfoGrid, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resultInfoGrid, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
      if ( !resultInfoGrid )
        goto LABEL_14;
      resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0LL);
      if ( !resultInfoGrid )
        goto LABEL_14;
      resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)resultInfoGrid,
                                                    v5,
                                                    0LL);
      if ( !resultInfoGrid )
        goto LABEL_14;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resultInfoGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
      --v5;
    }
    while ( v5 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.resInfoList, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineResultInfoComponent__setCenter(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  struct UIPanel_array *basePanelList; // x8
  __int64 v7; // x9
  unsigned int klass; // w8
  float32x2_t *v9; // x21
  unsigned __int64 v10; // x22
  float *p_m_CachedPtr; // x23
  float v12; // s8
  float v13; // s9
  float v14; // s10
  int v15; // s0
  int v16; // s1
  int v17; // s2
  float v18; // s1
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C25C62 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C25C62 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(basePanel, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    basePanelList = this->fields.basePanelList;
    if ( basePanelList )
    {
      v7 = *(_QWORD *)&basePanelList->max_length;
      if ( v7 )
      {
        if ( !(_DWORD)v7 )
          goto LABEL_19;
        basePanel = (UnityEngine_Object_o *)basePanelList->m_Items[0];
      }
    }
  }
  if ( !basePanel
    || (transform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))basePanel->klass[1]._1.klass)(
                                                 basePanel,
                                                 basePanel->klass[1]._1.fields)) == 0LL )
  {
LABEL_20:
    sub_1C3B9C0(transform, v5);
  }
  klass = (unsigned int)transform[1].klass;
  v9 = (float32x2_t *)transform;
  v10 = 0LL;
  p_m_CachedPtr = (float *)&transform[1].fields.m_CachedPtr;
  do
  {
    if ( v10 >= klass )
      goto LABEL_19;
    v12 = *(p_m_CachedPtr - 2);
    v13 = *(p_m_CachedPtr - 1);
    v14 = *p_m_CachedPtr;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0LL);
    if ( !transform )
      goto LABEL_20;
    v19.fields.x = v12;
    v19.fields.y = v13;
    v19.fields.z = v14;
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__InverseTransformPoint(transform, v19, 0LL);
    if ( v10 >= v9[3].n64_u32[0] )
      goto LABEL_19;
    *((_DWORD *)p_m_CachedPtr - 2) = v15;
    *((_DWORD *)p_m_CachedPtr - 1) = v16;
    *(_DWORD *)p_m_CachedPtr = v17;
    p_m_CachedPtr += 3;
    klass = v9[3].n64_u32[0];
    ++v10;
  }
  while ( v10 != 4 );
  if ( klass < 3 )
LABEL_19:
    sub_1C3B9C8(transform, v5);
  v18 = v9[5].n64_f32[0] + (float)((float)(v9[8].n64_f32[0] - v9[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v9[4],
                                                    vmul_f32(vsub_f32(v9[7], v9[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v18;
}