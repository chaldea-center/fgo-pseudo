void __fastcall ServantCombineResultInfoComponent___ctor(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19D4D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19D4D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCombineResultInfoComponent__Close(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x0
  System_Action_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B19D4B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantCombineResultInfoComponent_EndClose__, v5, v6);
    byte_4B19D4B = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0LL);
  ServantCombineResultInfoComponent__Close_45986664(this, v8, v9);
}


void __fastcall ServantCombineResultInfoComponent__Close_45986664(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B19D4C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ServantCombineResultInfoComponent_EndClose__, v5, v6);
    byte_4B19D4C = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, callback, method, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCA784(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantCombineResultInfoComponent__Init(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B19D46 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B19D46 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ServantCombineResultInfoComponent__clearInfoGrid(this, v6);
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
    sub_1BCAA3C(gameObject, v5);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UILabel_o *levelUpTitleLb; // x22
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  UILabel_o *befLevelLb; // x22
  System_String_o *v35; // x23
  Il2CppObject *v36; // x0
  UILabel_o *currentLevelLb; // x22
  UILabel_o *currentHpLb; // x21
  UILabel_o *increHpLb; // x21
  System_String_o *v40; // x22
  Il2CppObject *v41; // x0
  UILabel_o *currentAtkLb; // x21
  UILabel_o *increAtkLb; // x21
  System_String_o *v44; // x22
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x20
  int32_t increAtkVal; // [xsp+Ch] [xbp-44h] BYREF
  int32_t increHpVal; // [xsp+18h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B19D48 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, infoData, callback);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ServantCombineResultInfoComponent_EndOpen__, v11, v12);
    sub_1BCA7E0(&Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__, v13, v14);
    sub_1BCA7E0(&StringLiteral_8362/*"LEVEL_INFO"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_8359/*"LEVELUP_NOTICE_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_7474/*"INCREMENT_SVTLEVEL"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B19D48 = 1;
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.openCallBack,
      (int64_t)callback,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8359/*"LEVELUP_NOTICE_TITLE"*/, 0LL);
      if ( !levelUpTitleLb )
        goto LABEL_25;
      UILabel__set_text(levelUpTitleLb, (System_String_o *)gameObject, 0LL);
      v32 = Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__;
      if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1BCA7F8(Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
      v33 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 5, 0LL);
    }
    befLevelLb = this->fields.befLevelLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
    oldLv = infoData->fields.oldLv;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &oldLv);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v35, v36, 0LL);
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
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_7474/*"INCREMENT_SVTLEVEL"*/, 0LL);
          increHpVal = infoData->fields.increHpVal;
          v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increHpVal);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v40, v41, 0LL);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, (System_String_o *)gameObject, 0LL);
            currentAtkLb = this->fields.currentAtkLb;
            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 32, 0LL);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, (System_String_o *)gameObject, 0LL);
              increAtkLb = this->fields.increAtkLb;
              v44 = LocalizationManager__Get((System_String_o *)StringLiteral_7474/*"INCREMENT_SVTLEVEL"*/, 0LL);
              increAtkVal = infoData->fields.increAtkVal;
              v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAtkVal);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v44, v45, 0LL);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, (System_String_o *)gameObject, 0LL);
                v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
                System_Action___ctor(v49, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(gameObject, v24);
  }
}


void __fastcall ServantCombineResultInfoComponent__OpenResultInfo(
        ServantCombineResultInfoComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
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
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  void *gameObject; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
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
  const MethodInfo *v32; // x1
  float v33; // s9
  unsigned int localPosition; // s0
  float v35; // s8
  int32_t v36; // w21
  float v37; // s9
  int v38; // w23
  UnityEngine_GameObject_o *v39; // x22
  UnityEngine_Transform_o *transform; // x0
  int v41; // s10
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x20
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19D47 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, resInfo, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_ServantCombineResultInfoComponent_EndOpen__, v11, v12);
    sub_1BCA7E0(&Method_ServantCombineResultInfoComponent_OpenResultInfo__, v13, v14);
    byte_4B19D47 = 1;
  }
  if ( !this->fields.state )
  {
    v15 = Method_ServantCombineResultInfoComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BCA7F8(Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    this->fields.resInfoList = resInfo;
    p_resInfoList = &this->fields.resInfoList;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)resInfo, v20, v21, v22, v23, v24, v25);
    this->fields.openCallBack = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.openCallBack,
      (int64_t)callback,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    ServantCombineResultInfoComponent__setCenter(this, v32);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_20;
    v33 = *((float *)gameObject + 13);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    gameObject = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_20;
    v35 = *(float *)&localPosition;
    v36 = 0;
    v37 = v33 * 0.5;
    v38 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
    while ( v38 != v36 )
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v36,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( this->fields.resultInfoGrid )
      {
        v39 = (UnityEngine_GameObject_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0LL);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v39, transform, 0LL, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = *p_resInfoList;
          ++v36;
          if ( *p_resInfoList )
            continue;
        }
      }
      goto LABEL_20;
    }
    if ( !this->fields.resultInfoGrid
      || (v41 = *((_DWORD *)gameObject + 6),
          (gameObject = UnityEngine_Component__get_transform(
                          (UnityEngine_Component_o *)this->fields.resultInfoGrid,
                          0LL)) == 0LL)
      || (v46.fields.z = this->fields.center.fields.z,
          v46.fields.y = (float)(v37 * (float)v41) + -25.0,
          v46.fields.x = v35,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v46, 0LL),
          (gameObject = this->fields.resultInfoGrid) == 0LL) )
    {
LABEL_20:
      sub_1BCAA3C(gameObject, v18);
    }
    UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
    v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0LL);
  }
}


void __fastcall ServantCombineResultInfoComponent__clearInfoGrid(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *resultInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B19D4A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19D4A = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid
    || (resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(resultInfoGrid, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resultInfoGrid, 0LL);
  v6 = childCount - 1;
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
                                                    v6,
                                                    0LL);
      if ( !resultInfoGrid )
        goto LABEL_14;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resultInfoGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      --v6;
    }
    while ( v6 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resInfoList, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineResultInfoComponent__setCenter(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  struct UIPanel_array *basePanelList; // x8
  __int64 v8; // x9
  unsigned int klass; // w8
  float32x2_t *v10; // x21
  unsigned __int64 v11; // x22
  float *p_m_CachedPtr; // x23
  float v13; // s8
  float v14; // s9
  float v15; // s10
  int v16; // s0
  int v17; // s1
  int v18; // s2
  float v19; // s1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19D49 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19D49 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(basePanel, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    basePanelList = this->fields.basePanelList;
    if ( basePanelList )
    {
      v8 = *(_QWORD *)&basePanelList->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
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
    sub_1BCAA3C(transform, v6);
  }
  klass = (unsigned int)transform[1].klass;
  v10 = (float32x2_t *)transform;
  v11 = 0LL;
  p_m_CachedPtr = (float *)&transform[1].fields.m_CachedPtr;
  do
  {
    if ( v11 >= klass )
      goto LABEL_19;
    v13 = *(p_m_CachedPtr - 2);
    v14 = *(p_m_CachedPtr - 1);
    v15 = *p_m_CachedPtr;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0LL);
    if ( !transform )
      goto LABEL_20;
    v20.fields.x = v13;
    v20.fields.y = v14;
    v20.fields.z = v15;
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__InverseTransformPoint(transform, v20, 0LL);
    if ( v11 >= v10[3].n64_u32[0] )
      goto LABEL_19;
    *((_DWORD *)p_m_CachedPtr - 2) = v16;
    *((_DWORD *)p_m_CachedPtr - 1) = v17;
    *(_DWORD *)p_m_CachedPtr = v18;
    p_m_CachedPtr += 3;
    klass = v10[3].n64_u32[0];
    ++v11;
  }
  while ( v11 != 4 );
  if ( klass < 3 )
LABEL_19:
    sub_1BCAA44(transform, v6);
  v19 = v10[5].n64_f32[0] + (float)((float)(v10[8].n64_f32[0] - v10[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v10[4],
                                                    vmul_f32(
                                                      vsub_f32(v10[7], v10[4]),
                                                      (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v19;
}