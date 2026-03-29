void ServantCombineResultInfoComponent___ctor(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D34CB2 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D34CB2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantCombineResultInfoComponent__Close(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D34CB0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ServantCombineResultInfoComponent_EndClose__);
    byte_4D34CB0 = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0);
  ServantCombineResultInfoComponent__Close_49599976(this, v4, v5);
}


void ServantCombineResultInfoComponent__Close_49599976(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4D34CB1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ServantCombineResultInfoComponent_EndClose__);
    byte_4D34CB1 = 1;
  }
  v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void ServantCombineResultInfoComponent__EndClose(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  ServantCombineResultInfoComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantCombineResultInfoComponent__EndOpen(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_openCallBack; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *openCallBack; // t1

  openCallBack = this->fields.openCallBack;
  p_openCallBack = (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack;
  v9 = openCallBack;
  if ( openCallBack )
  {
    p_openCallBack->klass = 0;
    sub_1C93A78(p_openCallBack, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ServantCombineResultInfoComponent__Init(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4D34CAB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34CAB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ServantCombineResultInfoComponent__clearInfoGrid(this, v5);
  gameObject = this->fields.levleUpInfo;
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.befLevelLb;
  if ( !gameObject )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.currentLevelLb;
  if ( !gameObject )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.currentHpLb;
  if ( !gameObject
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.increHpLb) == 0)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.currentAtkLb) == 0)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.increAtkLb) == 0) )
  {
LABEL_12:
    sub_1C93D2C(gameObject, v4);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantCombineResultInfoComponent__OpenLevelUpInfo(
        ServantCombineResultInfoComponent_o *this,
        LevelUpInfoData_o *infoData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UILabel_o *levelUpTitleLb; // x22
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  UILabel_o *befLevelLb; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  UILabel_o *currentLevelLb; // x22
  UILabel_o *currentHpLb; // x21
  UILabel_o *increHpLb; // x21
  System_String_o *v24; // x22
  Il2CppObject *v25; // x0
  UILabel_o *currentAtkLb; // x21
  UILabel_o *increAtkLb; // x21
  System_String_o *v28; // x22
  Il2CppObject *v29; // x0
  System_Action_o *v30; // x20
  int32_t increAtkVal; // [xsp+Ch] [xbp-44h] BYREF
  int32_t increHpVal; // [xsp+18h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4D34CAD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_ServantCombineResultInfoComponent_EndOpen__);
    sub_1C93AD4(&Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
    sub_1C93AD4(&StringLiteral_8311/*"LEVEL_INFO"*/);
    sub_1C93AD4(&StringLiteral_8308/*"LEVELUP_NOTICE_TITLE"*/);
    sub_1C93AD4(&StringLiteral_7478/*"INCREMENT_SVTLEVEL"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34CAD = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = this->fields.levleUpInfo;
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.openCallBack = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack,
      (int32_t)callback,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    gameObject = (UnityEngine_GameObject_o *)this->fields.levelUpTitleLb;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !infoData )
      goto LABEL_25;
    if ( infoData->fields.oldLv < infoData->fields.currentLv )
    {
      levelUpTitleLb = this->fields.levelUpTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8308/*"LEVELUP_NOTICE_TITLE"*/, 0);
      if ( !levelUpTitleLb )
        goto LABEL_25;
      UILabel__set_text(levelUpTitleLb, (System_String_o *)gameObject, 0);
      v16 = Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__;
      if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1C93AEC(Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 5, 0, 0);
    }
    befLevelLb = this->fields.befLevelLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8311/*"LEVEL_INFO"*/, 0);
    oldLv = infoData->fields.oldLv;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &oldLv);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v19, v20, 0);
    if ( befLevelLb )
    {
      UILabel__set_text(befLevelLb, (System_String_o *)gameObject, 0);
      currentLevelLb = this->fields.currentLevelLb;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 20, 0);
      if ( currentLevelLb )
      {
        UILabel__set_text(currentLevelLb, (System_String_o *)gameObject, 0);
        currentHpLb = this->fields.currentHpLb;
        gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 24, 0);
        if ( currentHpLb )
        {
          UILabel__set_text(currentHpLb, (System_String_o *)gameObject, 0);
          increHpLb = this->fields.increHpLb;
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_7478/*"INCREMENT_SVTLEVEL"*/, 0);
          increHpVal = infoData->fields.increHpVal;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increHpVal);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v24, v25, 0);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, (System_String_o *)gameObject, 0);
            currentAtkLb = this->fields.currentAtkLb;
            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 32, 0);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, (System_String_o *)gameObject, 0);
              increAtkLb = this->fields.increAtkLb;
              v28 = LocalizationManager__Get((System_String_o *)StringLiteral_7478/*"INCREMENT_SVTLEVEL"*/, 0);
              increAtkVal = infoData->fields.increAtkVal;
              v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAtkVal);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v28, v29, 0);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, (System_String_o *)gameObject, 0);
                v30 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0);
                BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C93D2C(gameObject, v8);
  }
}


void ServantCombineResultInfoComponent__OpenResultInfo(
        ServantCombineResultInfoComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  void *gameObject; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1
  float v25; // s9
  float v26; // s8
  int32_t v27; // w21
  float v28; // s9
  int v29; // w23
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_Transform_o *transform; // x0
  int v32; // s10
  System_Action_o *v33; // x20
  unsigned int localPosition; // s0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D34CAC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&Method_ServantCombineResultInfoComponent_EndOpen__);
    sub_1C93AD4(&Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    byte_4D34CAC = 1;
  }
  if ( !this->fields.state )
  {
    v7 = Method_ServantCombineResultInfoComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C93AEC(Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    this->fields.resInfoList = resInfo;
    p_resInfoList = &this->fields.resInfoList;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.resInfoList,
      (int32_t)resInfo,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.openCallBack = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack,
      (int32_t)callback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    ServantCombineResultInfoComponent__setCenter(this, v24);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_20;
    v25 = *((float *)gameObject + 13);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    gameObject = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_20;
    v26 = *(float *)&localPosition;
    v27 = 0;
    v28 = v25 * 0.5;
    v29 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
    while ( v29 != v27 )
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v27,
                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( this->fields.resultInfoGrid )
      {
        v30 = (UnityEngine_GameObject_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v30, transform, 0, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = *p_resInfoList;
          ++v27;
          if ( *p_resInfoList )
            continue;
        }
      }
      goto LABEL_20;
    }
    if ( !this->fields.resultInfoGrid
      || (v32 = *((_DWORD *)gameObject + 6),
          (gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0)) == 0)
      || (v35.fields.z = this->fields.center.fields.z,
          v35.fields.y = (float)(v28 * (float)v32) + -25.0,
          v35.fields.x = v26,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v35, 0),
          (gameObject = this->fields.resultInfoGrid) == 0) )
    {
LABEL_20:
      sub_1C93D2C(gameObject, v10);
    }
    UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
    v33 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
  }
}


void ServantCombineResultInfoComponent__clearInfoGrid(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resultInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D34CAF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34CAF = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid
    || (resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0)) == 0 )
  {
LABEL_14:
    sub_1C93D2C(resultInfoGrid, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resultInfoGrid, 0);
  v5 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
      if ( !resultInfoGrid )
        goto LABEL_14;
      resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0);
      if ( !resultInfoGrid )
        goto LABEL_14;
      resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)resultInfoGrid,
                                                    v5,
                                                    0);
      if ( !resultInfoGrid )
        goto LABEL_14;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resultInfoGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(gameObject, 0);
      --v5;
    }
    while ( v5 >= 0 );
    this->fields.resInfoList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.resInfoList, 0, v7, v8, v9, v10, v11, v12);
  }
}


void ServantCombineResultInfoComponent__setCenter(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  struct UIPanel_array *basePanelList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int klass; // w8
  float32x2_t *v9; // x21
  unsigned __int64 v10; // x22
  float *p_fields; // x23
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s1
  UnityEngine_Vector3_o v16; // 0:kr00_12.12
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D34CAE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34CAE = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(basePanel, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    basePanelList = this->fields.basePanelList;
    if ( basePanelList )
    {
      max_length = basePanelList->max_length;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
          goto LABEL_19;
        basePanel = (UnityEngine_Object_o *)basePanelList->m_Items[0];
      }
    }
  }
  if ( !basePanel
    || (transform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))basePanel->klass[1]._1.interopData)(
                                                 basePanel,
                                                 basePanel->klass[1]._1.klass)) == 0 )
  {
LABEL_20:
    sub_1C93D2C(transform, v5);
  }
  klass = (unsigned int)transform[1].klass;
  v9 = (float32x2_t *)transform;
  v10 = 0;
  p_fields = (float *)&transform[1].fields;
  do
  {
    if ( v10 >= klass )
      goto LABEL_19;
    v12 = *(p_fields - 2);
    v13 = *(p_fields - 1);
    v14 = *p_fields;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0);
    if ( !transform )
      goto LABEL_20;
    v17.fields.x = v12;
    v17.fields.y = v13;
    v17.fields.z = v14;
    v16 = UnityEngine_Transform__InverseTransformPoint(transform, v17, 0);
    if ( v10 >= v9[3].n64_u32[0] )
      goto LABEL_19;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v16;
    p_fields += 3;
    klass = v9[3].n64_u32[0];
    ++v10;
  }
  while ( v10 != 4 );
  if ( klass <= 2 )
LABEL_19:
    sub_1C93D34(transform);
  v15 = v9[5].n64_f32[0] + (float)((float)(v9[8].n64_f32[0] - v9[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v9[4],
                                                    vmul_f32(vsub_f32(v9[7], v9[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v15;
}