void __fastcall ServantCombineResultInfoComponent___ctor(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B489C6 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B489C6 = 1;
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

  if ( (byte_4B489C4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ServantCombineResultInfoComponent_EndClose__, v3);
    byte_4B489C4 = 1;
  }
  v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0LL);
  ServantCombineResultInfoComponent__Close_47478784(this, v5, v6);
}


void __fastcall ServantCombineResultInfoComponent__Close_47478784(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4B489C5 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_ServantCombineResultInfoComponent_EndClose__, v4);
    byte_4B489C5 = 1;
  }
  v5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
    sub_1BDBAD4(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantCombineResultInfoComponent__EndOpen(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_openCallBack; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *openCallBack; // t1

  openCallBack = this->fields.openCallBack;
  p_openCallBack = (CGThumbnailListItem_o *)&this->fields.openCallBack;
  v5 = openCallBack;
  if ( openCallBack )
  {
    p_openCallBack->klass = 0LL;
    sub_1BDB81C(p_openCallBack, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantCombineResultInfoComponent__Init(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4B489BF & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B489BF = 1;
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
    sub_1BDBAD4(gameObject, v4);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UILabel_o *levelUpTitleLb; // x22
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  UILabel_o *befLevelLb; // x22
  System_String_o *v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  UILabel_o *currentLevelLb; // x22
  UILabel_o *currentHpLb; // x21
  UILabel_o *increHpLb; // x21
  System_String_o *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  UILabel_o *currentAtkLb; // x21
  UILabel_o *increAtkLb; // x21
  System_String_o *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  System_Action_o *v43; // x20
  int32_t increAtkVal; // [xsp+Ch] [xbp-44h] BYREF
  int32_t increHpVal; // [xsp+18h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B489C1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, infoData);
    sub_1BDB878(&int_TypeInfo, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&Method_ServantCombineResultInfoComponent_EndOpen__, v9);
    sub_1BDB878(&Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__, v10);
    sub_1BDB878(&StringLiteral_8252/*"LEVEL_INFO"*/, v11);
    sub_1BDB878(&StringLiteral_8249/*"LEVELUP_NOTICE_TITLE"*/, v12);
    sub_1BDB878(&StringLiteral_7433/*"INCREMENT_SVTLEVEL"*/, v13);
    sub_1BDB878(&StringLiteral_1/*""*/, v14);
    byte_4B489C1 = 1;
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
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v17, v18);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8249/*"LEVELUP_NOTICE_TITLE"*/, 0LL);
      if ( !levelUpTitleLb )
        goto LABEL_25;
      UILabel__set_text(levelUpTitleLb, (System_String_o *)gameObject, 0LL);
      v20 = Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__;
      if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1BDB890(Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
      v21 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 5, 0, 0LL);
    }
    befLevelLb = this->fields.befLevelLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8252/*"LEVEL_INFO"*/, 0LL);
    oldLv = infoData->fields.oldLv;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &oldLv, v24, v25, v26);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v23, v27, 0LL);
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
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_7433/*"INCREMENT_SVTLEVEL"*/, 0LL);
          increHpVal = infoData->fields.increHpVal;
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increHpVal, v32, v33, v34);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v31, v35, 0LL);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, (System_String_o *)gameObject, 0LL);
            currentAtkLb = this->fields.currentAtkLb;
            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 32, 0LL);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, (System_String_o *)gameObject, 0LL);
              increAtkLb = this->fields.increAtkLb;
              v38 = LocalizationManager__Get((System_String_o *)StringLiteral_7433/*"INCREMENT_SVTLEVEL"*/, 0LL);
              increAtkVal = infoData->fields.increAtkVal;
              v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAtkVal, v39, v40, v41);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v38, v42, 0LL);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, (System_String_o *)gameObject, 0LL);
                v43 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                System_Action___ctor(v43, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BDBAD4(gameObject, v16);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  float v21; // s9
  unsigned int localPosition; // s0
  float v23; // s8
  int32_t v24; // w21
  float v25; // s9
  int v26; // w23
  UnityEngine_GameObject_o *v27; // x22
  UnityEngine_Transform_o *transform; // x0
  int v29; // s10
  System_Action_o *v30; // x20
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B489C0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, resInfo);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1BDB878(&Method_ServantCombineResultInfoComponent_EndOpen__, v9);
    sub_1BDB878(&Method_ServantCombineResultInfoComponent_OpenResultInfo__, v10);
    byte_4B489C0 = 1;
  }
  if ( !this->fields.state )
  {
    v11 = Method_ServantCombineResultInfoComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BDB890(Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 6, 0, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    this->fields.resInfoList = resInfo;
    p_resInfoList = &this->fields.resInfoList;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.resInfoList, (int32_t)resInfo, v16, v17);
    this->fields.openCallBack = callback;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v18, v19);
    ServantCombineResultInfoComponent__setCenter(this, v20);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_20;
    v21 = *((float *)gameObject + 13);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    gameObject = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_20;
    v23 = *(float *)&localPosition;
    v24 = 0;
    v25 = v21 * 0.5;
    v26 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
    while ( v26 != v24 )
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v24,
                     (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( this->fields.resultInfoGrid )
      {
        v27 = (UnityEngine_GameObject_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0LL);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v27, transform, 0LL, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = *p_resInfoList;
          ++v24;
          if ( *p_resInfoList )
            continue;
        }
      }
      goto LABEL_20;
    }
    if ( !this->fields.resultInfoGrid
      || (v29 = *((_DWORD *)gameObject + 6),
          (gameObject = UnityEngine_Component__get_transform(
                          (UnityEngine_Component_o *)this->fields.resultInfoGrid,
                          0LL)) == 0LL)
      || (v31.fields.z = this->fields.center.fields.z,
          v31.fields.y = (float)(v25 * (float)v29) + -25.0,
          v31.fields.x = v23,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v31, 0LL),
          (gameObject = this->fields.resultInfoGrid) == 0LL) )
    {
LABEL_20:
      sub_1BDBAD4(gameObject, v14);
    }
    UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
    v30 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0LL);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B489C3 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B489C3 = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid
    || (resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BDBAD4(resultInfoGrid, method);
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
      UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
      --v5;
    }
    while ( v5 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.resInfoList, 0, v7, v8);
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
  __int64 v6; // x2
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

  if ( (byte_4B489C2 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B489C2 = 1;
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
    sub_1BDBAD4(transform, v5);
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
    sub_1BDBADC(transform, v5, v6);
  v19 = v10[5].n64_f32[0] + (float)((float)(v10[8].n64_f32[0] - v10[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v10[4],
                                                    vmul_f32(
                                                      vsub_f32(v10[7], v10[4]),
                                                      (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v19;
}