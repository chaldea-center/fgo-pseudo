void ServantCombineResultInfoComponent___ctor(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C2B403 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2B403 = 1;
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

  if ( (byte_4C2B401 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ServantCombineResultInfoComponent_EndClose__);
    byte_4C2B401 = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0);
  ServantCombineResultInfoComponent__Close_48494200(this, v4, v5);
}


void ServantCombineResultInfoComponent__Close_48494200(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4C2B402 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ServantCombineResultInfoComponent_EndClose__);
    byte_4C2B402 = 1;
  }
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
    sub_1C2D6EC(0, v4);
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
    sub_1C2D434(p_openCallBack, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void ServantCombineResultInfoComponent__Init(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C2B3FC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B3FC = 1;
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
    sub_1C2D6EC(gameObject, v4);
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
  const MethodInfo *v10; // x3
  UILabel_o *levelUpTitleLb; // x22
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  UILabel_o *befLevelLb; // x22
  System_String_o *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  UILabel_o *currentLevelLb; // x22
  UILabel_o *currentHpLb; // x21
  UILabel_o *increHpLb; // x21
  System_String_o *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  UILabel_o *currentAtkLb; // x21
  UILabel_o *increAtkLb; // x21
  System_String_o *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_Action_o *v35; // x20
  int32_t increAtkVal; // [xsp+Ch] [xbp-44h] BYREF
  int32_t increHpVal; // [xsp+18h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C2B3FE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_ServantCombineResultInfoComponent_EndOpen__);
    sub_1C2D490(&Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
    sub_1C2D490(&StringLiteral_8256/*"LEVEL_INFO"*/);
    sub_1C2D490(&StringLiteral_8253/*"LEVELUP_NOTICE_TITLE"*/);
    sub_1C2D490(&StringLiteral_7432/*"INCREMENT_SVTLEVEL"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B3FE = 1;
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v9, v10);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8253/*"LEVELUP_NOTICE_TITLE"*/, 0);
      if ( !levelUpTitleLb )
        goto LABEL_25;
      UILabel__set_text(levelUpTitleLb, (System_String_o *)gameObject, 0);
      v12 = Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__;
      if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C2D4A8(Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C2D474(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 5, 0, 0);
    }
    befLevelLb = this->fields.befLevelLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8256/*"LEVEL_INFO"*/, 0);
    oldLv = infoData->fields.oldLv;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &oldLv, v16, v17, v18);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v15, v19, 0);
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
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_7432/*"INCREMENT_SVTLEVEL"*/, 0);
          increHpVal = infoData->fields.increHpVal;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increHpVal, v24, v25, v26);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v23, v27, 0);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, (System_String_o *)gameObject, 0);
            currentAtkLb = this->fields.currentAtkLb;
            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 32, 0);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, (System_String_o *)gameObject, 0);
              increAtkLb = this->fields.increAtkLb;
              v30 = LocalizationManager__Get((System_String_o *)StringLiteral_7432/*"INCREMENT_SVTLEVEL"*/, 0);
              increAtkVal = infoData->fields.increAtkVal;
              v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAtkVal, v31, v32, v33);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v30, v34, 0);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, (System_String_o *)gameObject, 0);
                v35 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(v35, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0);
                BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C2D6EC(gameObject, v8);
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  float v17; // s9
  unsigned int localPosition; // s0
  float v19; // s8
  int32_t v20; // w21
  float v21; // s9
  int v22; // w23
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_Transform_o *transform; // x0
  int v25; // s10
  System_Action_o *v26; // x20
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B3FD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&Method_ServantCombineResultInfoComponent_EndOpen__);
    sub_1C2D490(&Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    byte_4C2B3FD = 1;
  }
  if ( !this->fields.state )
  {
    v7 = Method_ServantCombineResultInfoComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2D4A8(Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    this->fields.resInfoList = resInfo;
    p_resInfoList = &this->fields.resInfoList;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resInfoList, (int32_t)resInfo, v12, v13);
    this->fields.openCallBack = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v14, v15);
    ServantCombineResultInfoComponent__setCenter(this, v16);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_20;
    v17 = *((float *)gameObject + 13);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    gameObject = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_20;
    v19 = *(float *)&localPosition;
    v20 = 0;
    v21 = v17 * 0.5;
    v22 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
    while ( v22 != v20 )
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v20,
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( this->fields.resultInfoGrid )
      {
        v23 = (UnityEngine_GameObject_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v23, transform, 0, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = *p_resInfoList;
          ++v20;
          if ( *p_resInfoList )
            continue;
        }
      }
      goto LABEL_20;
    }
    if ( !this->fields.resultInfoGrid
      || (v25 = *((_DWORD *)gameObject + 6),
          (gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0)) == 0)
      || (v27.fields.z = this->fields.center.fields.z,
          v27.fields.y = (float)(v21 * (float)v25) + -25.0,
          v27.fields.x = v19,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v27, 0),
          (gameObject = this->fields.resultInfoGrid) == 0) )
    {
LABEL_20:
      sub_1C2D6EC(gameObject, v10);
    }
    UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
    v26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0);
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

  if ( (byte_4C2B400 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B400 = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid
    || (resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0)) == 0 )
  {
LABEL_14:
    sub_1C2D6EC(resultInfoGrid, method);
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
      UnityEngine_Object__Destroy_71163704(gameObject, 0);
      --v5;
    }
    while ( v5 >= 0 );
    this->fields.resInfoList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resInfoList, 0, v7, v8);
  }
}


void ServantCombineResultInfoComponent__setCenter(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UIPanel_array *basePanelList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int klass; // w8
  float32x2_t *v10; // x21
  unsigned __int64 v11; // x22
  float *p_fields; // x23
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s1
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B3FF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B3FF = 1;
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
    sub_1C2D6EC(transform, v5);
  }
  klass = (unsigned int)transform[1].klass;
  v10 = (float32x2_t *)transform;
  v11 = 0;
  p_fields = (float *)&transform[1].fields;
  do
  {
    if ( v11 >= klass )
      goto LABEL_19;
    v13 = *(p_fields - 2);
    v14 = *(p_fields - 1);
    v15 = *p_fields;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0);
    if ( !transform )
      goto LABEL_20;
    v17.fields.x = v13;
    v17.fields.y = v14;
    v17.fields.z = v15;
    v18 = UnityEngine_Transform__InverseTransformPoint(transform, v17, 0);
    if ( v11 >= v10[3].n64_u32[0] )
      goto LABEL_19;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v18;
    p_fields += 3;
    klass = v10[3].n64_u32[0];
    ++v11;
  }
  while ( v11 != 4 );
  if ( klass <= 2 )
LABEL_19:
    sub_1C2D6F4(transform, v5, v6);
  v16 = v10[5].n64_f32[0] + (float)((float)(v10[8].n64_f32[0] - v10[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v10[4],
                                                    vmul_f32(
                                                      vsub_f32(v10[7], v10[4]),
                                                      (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v16;
}