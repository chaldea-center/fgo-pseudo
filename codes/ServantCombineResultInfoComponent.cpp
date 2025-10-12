void ServantCombineResultInfoComponent___ctor(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3BB22 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C3BB22 = 1;
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

  if ( (byte_4C3BB20 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ServantCombineResultInfoComponent_EndClose__);
    byte_4C3BB20 = 1;
  }
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0);
  ServantCombineResultInfoComponent__Close_48642604(this, v4, v5);
}


void ServantCombineResultInfoComponent__Close_48642604(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4C3BB21 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ServantCombineResultInfoComponent_EndClose__);
    byte_4C3BB21 = 1;
  }
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void ServantCombineResultInfoComponent__EndClose(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  ServantCombineResultInfoComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantCombineResultInfoComponent__EndOpen(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
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
    p_openCallBack->klass = 0;
    sub_1C32BC4(p_openCallBack, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void ServantCombineResultInfoComponent__Init(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C3BB1B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BB1B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ServantCombineResultInfoComponent__clearInfoGrid(this, v4);
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
    sub_1C32E7C(gameObject);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UILabel_o *levelUpTitleLb; // x22
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  UILabel_o *befLevelLb; // x22
  System_String_o *v14; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  UILabel_o *currentLevelLb; // x22
  UILabel_o *currentHpLb; // x21
  UILabel_o *increHpLb; // x21
  System_String_o *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  UILabel_o *currentAtkLb; // x21
  UILabel_o *increAtkLb; // x21
  System_String_o *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x0
  System_Action_o *v43; // x20
  int32_t increAtkVal; // [xsp+Ch] [xbp-44h] BYREF
  int32_t increHpVal; // [xsp+18h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C3BB1D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_ServantCombineResultInfoComponent_EndOpen__);
    sub_1C32C20(&Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
    sub_1C32C20(&StringLiteral_8262/*"LEVEL_INFO"*/);
    sub_1C32C20(&StringLiteral_8259/*"LEVELUP_NOTICE_TITLE"*/);
    sub_1C32C20(&StringLiteral_7437/*"INCREMENT_SVTLEVEL"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BB1D = 1;
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v8, v9);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8259/*"LEVELUP_NOTICE_TITLE"*/, 0);
      if ( !levelUpTitleLb )
        goto LABEL_25;
      UILabel__set_text(levelUpTitleLb, (System_String_o *)gameObject, 0);
      v11 = Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__;
      if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C32C38(Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C32C04(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 5, 0, 0);
    }
    befLevelLb = this->fields.befLevelLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8262/*"LEVEL_INFO"*/, 0);
    oldLv = infoData->fields.oldLv;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &oldLv, v15, v16, v17, v18, v19, v20);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v14, v21, 0);
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
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_7437/*"INCREMENT_SVTLEVEL"*/, 0);
          increHpVal = infoData->fields.increHpVal;
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increHpVal, v26, v27, v28, v29, v30, v31);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v25, v32, 0);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, (System_String_o *)gameObject, 0);
            currentAtkLb = this->fields.currentAtkLb;
            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 32, 0);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, (System_String_o *)gameObject, 0);
              increAtkLb = this->fields.increAtkLb;
              v35 = LocalizationManager__Get((System_String_o *)StringLiteral_7437/*"INCREMENT_SVTLEVEL"*/, 0);
              increAtkVal = infoData->fields.increAtkVal;
              v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAtkVal, v36, v37, v38, v39, v40, v41);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v35, v42, 0);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, (System_String_o *)gameObject, 0);
                v43 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                System_Action___ctor(v43, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0);
                BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C32E7C(gameObject);
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
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  float v16; // s9
  unsigned int localPosition; // s0
  float v18; // s8
  int32_t v19; // w21
  float v20; // s9
  int v21; // w23
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_Transform_o *transform; // x0
  int v24; // s10
  System_Action_o *v25; // x20
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BB1C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&Method_ServantCombineResultInfoComponent_EndOpen__);
    sub_1C32C20(&Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    byte_4C3BB1C = 1;
  }
  if ( !this->fields.state )
  {
    v7 = Method_ServantCombineResultInfoComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C32C38(Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    this->fields.resInfoList = resInfo;
    p_resInfoList = &this->fields.resInfoList;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resInfoList, (int32_t)resInfo, v11, v12);
    this->fields.openCallBack = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v13, v14);
    ServantCombineResultInfoComponent__setCenter(this, v15);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_20;
    v16 = *((float *)gameObject + 13);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    gameObject = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_20;
    v18 = *(float *)&localPosition;
    v19 = 0;
    v20 = v16 * 0.5;
    v21 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
    while ( v21 != v19 )
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v19,
                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( this->fields.resultInfoGrid )
      {
        v22 = (UnityEngine_GameObject_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v22, transform, 0, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = *p_resInfoList;
          ++v19;
          if ( *p_resInfoList )
            continue;
        }
      }
      goto LABEL_20;
    }
    if ( !this->fields.resultInfoGrid
      || (v24 = *((_DWORD *)gameObject + 6),
          (gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0)) == 0)
      || (v26.fields.z = this->fields.center.fields.z,
          v26.fields.y = (float)(v20 * (float)v24) + -25.0,
          v26.fields.x = v18,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v26, 0),
          (gameObject = this->fields.resultInfoGrid) == 0) )
    {
LABEL_20:
      sub_1C32E7C(gameObject);
    }
    UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
    v25 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0, 0);
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
  const MethodInfo *v8; // x3

  if ( (byte_4C3BB1F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BB1F = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid
    || (resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0)) == 0 )
  {
LABEL_14:
    sub_1C32E7C(resultInfoGrid);
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
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
      --v5;
    }
    while ( v5 >= 0 );
    this->fields.resInfoList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resInfoList, 0, v7, v8);
  }
}


void ServantCombineResultInfoComponent__setCenter(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UIPanel_array *basePanelList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int klass; // w8
  float32x2_t *v8; // x21
  unsigned __int64 v9; // x22
  float *p_fields; // x23
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s1
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BB1E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BB1E = 1;
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
    sub_1C32E7C(transform);
  }
  klass = (unsigned int)transform[1].klass;
  v8 = (float32x2_t *)transform;
  v9 = 0;
  p_fields = (float *)&transform[1].fields;
  do
  {
    if ( v9 >= klass )
      goto LABEL_19;
    v11 = *(p_fields - 2);
    v12 = *(p_fields - 1);
    v13 = *p_fields;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0);
    if ( !transform )
      goto LABEL_20;
    v15.fields.x = v11;
    v15.fields.y = v12;
    v15.fields.z = v13;
    v16 = UnityEngine_Transform__InverseTransformPoint(transform, v15, 0);
    if ( v9 >= v8[3].n64_u32[0] )
      goto LABEL_19;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v16;
    p_fields += 3;
    klass = v8[3].n64_u32[0];
    ++v9;
  }
  while ( v9 != 4 );
  if ( klass <= 2 )
LABEL_19:
    sub_1C32E84(transform);
  v14 = v8[5].n64_f32[0] + (float)((float)(v8[8].n64_f32[0] - v8[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v8[4],
                                                    vmul_f32(vsub_f32(v8[7], v8[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v14;
}