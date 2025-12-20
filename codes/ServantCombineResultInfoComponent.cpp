void ServantCombineResultInfoComponent___ctor(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D26627 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D26627 = 1;
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

  if ( (byte_4D26625 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ServantCombineResultInfoComponent_EndClose__);
    byte_4D26625 = 1;
  }
  v3 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0);
  ServantCombineResultInfoComponent__Close_31852188(this, v4, v5);
}


void ServantCombineResultInfoComponent__Close_31852188(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4D26626 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ServantCombineResultInfoComponent_EndClose__);
    byte_4D26626 = 1;
  }
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
    sub_1C942F0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantCombineResultInfoComponent__EndOpen(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_openCallBack; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *openCallBack; // t1

  openCallBack = this->fields.openCallBack;
  p_openCallBack = &this->fields.openCallBack;
  v3 = openCallBack;
  if ( openCallBack )
  {
    *p_openCallBack = 0;
    sub_1C9403C(p_openCallBack, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


void ServantCombineResultInfoComponent__Init(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4D26620 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D26620 = 1;
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
    sub_1C942F0(gameObject, v4);
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
  UILabel_o *levelUpTitleLb; // x22
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  UILabel_o *befLevelLb; // x22
  System_String_o *v13; // x23
  Il2CppObject *v14; // x0
  UILabel_o *currentLevelLb; // x22
  UILabel_o *currentHpLb; // x21
  UILabel_o *increHpLb; // x21
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  UILabel_o *currentAtkLb; // x21
  UILabel_o *increAtkLb; // x21
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  System_Action_o *v24; // x20
  int32_t increAtkVal; // [xsp+Ch] [xbp-44h] BYREF
  int32_t increHpVal; // [xsp+18h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4D26622 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_ServantCombineResultInfoComponent_EndOpen__);
    sub_1C94098(&Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
    sub_1C94098(&StringLiteral_8282/*"LEVEL_INFO"*/);
    sub_1C94098(&StringLiteral_8279/*"LEVELUP_NOTICE_TITLE"*/);
    sub_1C94098(&StringLiteral_7451/*"INCREMENT_SVTLEVEL"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D26622 = 1;
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
    sub_1C9403C(&this->fields.openCallBack, callback);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8279/*"LEVELUP_NOTICE_TITLE"*/, 0);
      if ( !levelUpTitleLb )
        goto LABEL_25;
      UILabel__set_text(levelUpTitleLb, (System_String_o *)gameObject, 0);
      v10 = Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__;
      if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C940B0(Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C9407C(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 5, 0, 0);
    }
    befLevelLb = this->fields.befLevelLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8282/*"LEVEL_INFO"*/, 0);
    oldLv = infoData->fields.oldLv;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &oldLv);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v13, v14, 0);
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
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_7451/*"INCREMENT_SVTLEVEL"*/, 0);
          increHpVal = infoData->fields.increHpVal;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increHpVal);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v18, v19, 0);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, (System_String_o *)gameObject, 0);
            currentAtkLb = this->fields.currentAtkLb;
            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 32, 0);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, (System_String_o *)gameObject, 0);
              increAtkLb = this->fields.increAtkLb;
              v22 = LocalizationManager__Get((System_String_o *)StringLiteral_7451/*"INCREMENT_SVTLEVEL"*/, 0);
              increAtkVal = infoData->fields.increAtkVal;
              v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAtkVal);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v22, v23, 0);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, (System_String_o *)gameObject, 0);
                v24 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
                System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0);
                BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C942F0(gameObject, v8);
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
  const MethodInfo *v12; // x1
  float v13; // s9
  unsigned int localPosition; // s0
  float v15; // s8
  int32_t v16; // w21
  float v17; // s9
  int v18; // w23
  UnityEngine_GameObject_o *v19; // x22
  UnityEngine_Transform_o *transform; // x0
  int v21; // s10
  System_Action_o *v22; // x20
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D26621 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C94098(&Method_ServantCombineResultInfoComponent_EndOpen__);
    sub_1C94098(&Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    byte_4D26621 = 1;
  }
  if ( !this->fields.state )
  {
    v7 = Method_ServantCombineResultInfoComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C940B0(Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C9407C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    this->fields.resInfoList = resInfo;
    p_resInfoList = &this->fields.resInfoList;
    sub_1C9403C(&this->fields.resInfoList, resInfo);
    this->fields.openCallBack = callback;
    sub_1C9403C(&this->fields.openCallBack, callback);
    ServantCombineResultInfoComponent__setCenter(this, v12);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_20;
    v13 = *((float *)gameObject + 13);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    gameObject = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_20;
    v15 = *(float *)&localPosition;
    v16 = 0;
    v17 = v13 * 0.5;
    v18 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
    while ( v18 != v16 )
    {
      gameObject = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)gameObject,
                     v16,
                     (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( this->fields.resultInfoGrid )
      {
        v19 = (UnityEngine_GameObject_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v19, transform, 0, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = *p_resInfoList;
          ++v16;
          if ( *p_resInfoList )
            continue;
        }
      }
      goto LABEL_20;
    }
    if ( !this->fields.resultInfoGrid
      || (v21 = *((_DWORD *)gameObject + 6),
          (gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0)) == 0)
      || (v23.fields.z = this->fields.center.fields.z,
          v23.fields.y = (float)(v17 * (float)v21) + -25.0,
          v23.fields.x = v15,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0),
          (gameObject = this->fields.resultInfoGrid) == 0) )
    {
LABEL_20:
      sub_1C942F0(gameObject, v10);
    }
    UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
    v22 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
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

  if ( (byte_4D26624 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26624 = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid
    || (resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0)) == 0 )
  {
LABEL_14:
    sub_1C942F0(resultInfoGrid, method);
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
      UnityEngine_Object__Destroy_72110972(gameObject, 0);
      --v5;
    }
    while ( v5 >= 0 );
    this->fields.resInfoList = 0;
    sub_1C9403C(&this->fields.resInfoList, 0);
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
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D26623 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26623 = 1;
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
    sub_1C942F0(transform, v5);
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
    v16.fields.x = v12;
    v16.fields.y = v13;
    v16.fields.z = v14;
    v17 = UnityEngine_Transform__InverseTransformPoint(transform, v16, 0);
    if ( v10 >= v9[3].n64_u32[0] )
      goto LABEL_19;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v17;
    p_fields += 3;
    klass = v9[3].n64_u32[0];
    ++v10;
  }
  while ( v10 != 4 );
  if ( klass <= 2 )
LABEL_19:
    sub_1C942F8(transform);
  v15 = v9[5].n64_f32[0] + (float)((float)(v9[8].n64_f32[0] - v9[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v9[4],
                                                    vmul_f32(vsub_f32(v9[7], v9[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v15;
}