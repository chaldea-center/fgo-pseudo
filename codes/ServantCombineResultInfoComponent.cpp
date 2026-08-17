void ServantCombineResultInfoComponent___ctor(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A24C & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A24C = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantCombineResultInfoComponent__Close(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596A24A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantCombineResultInfoComponent_EndClose__);
    byte_596A24A = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0);
  ServantCombineResultInfoComponent__Close_37697532(this, v4, v5);
}


void ServantCombineResultInfoComponent__Close_37697532(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_596A24B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantCombineResultInfoComponent_EndClose__);
    byte_596A24B = 1;
  }
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void ServantCombineResultInfoComponent__EndOpen(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_openCallBack; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *openCallBack; // t1

  openCallBack = this->fields.openCallBack;
  p_openCallBack = (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack;
  v9 = openCallBack;
  if ( openCallBack )
  {
    p_openCallBack->klass = 0;
    sub_2213A04(p_openCallBack, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ServantCombineResultInfoComponent__Init(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_596A245 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A245 = 1;
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
    sub_2213CDC(gameObject, v4);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x2
  UILabel_o *levelUpTitleLb; // x22
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  UILabel_o *befLevelLb; // x22
  System_String_o *v20; // x23
  Il2CppObject *v21; // x0
  UILabel_o *currentLevelLb; // x22
  UILabel_o *currentHpLb; // x21
  UILabel_o *increHpLb; // x21
  System_String_o *v25; // x22
  Il2CppObject *v26; // x0
  UILabel_o *currentAtkLb; // x21
  UILabel_o *increAtkLb; // x21
  System_String_o *v29; // x22
  Il2CppObject *v30; // x0
  System_Action_o *v31; // x20
  int32_t increAtkVal; // [xsp+Ch] [xbp-44h] BYREF
  int32_t increHpVal; // [xsp+18h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_596A247 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantCombineResultInfoComponent_EndOpen__);
    sub_2213A60(&Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
    sub_2213A60(&StringLiteral_8611/*"LEVEL_INFO"*/);
    sub_2213A60(&StringLiteral_8608/*"LEVELUP_NOTICE_TITLE"*/);
    sub_2213A60(&StringLiteral_7758/*"INCREMENT_SVTLEVEL"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A247 = 1;
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack,
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v15);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8608/*"LEVELUP_NOTICE_TITLE"*/, 0);
      if ( !levelUpTitleLb )
        goto LABEL_25;
      UILabel__set_text(levelUpTitleLb, (System_String_o *)gameObject, 0);
      v17 = Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__;
      if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_2213A78(Method_ServantCombineResultInfoComponent_OpenLevelUpInfo__);
      v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 5, 0, 0);
    }
    befLevelLb = this->fields.befLevelLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v15);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8611/*"LEVEL_INFO"*/, 0);
    oldLv = infoData->fields.oldLv;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &oldLv);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v20, v21, 0);
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
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_7758/*"INCREMENT_SVTLEVEL"*/, 0);
          increHpVal = infoData->fields.increHpVal;
          v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &increHpVal);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v25, v26, 0);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, (System_String_o *)gameObject, 0);
            currentAtkLb = this->fields.currentAtkLb;
            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 32, 0);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, (System_String_o *)gameObject, 0);
              increAtkLb = this->fields.increAtkLb;
              v29 = LocalizationManager__Get((System_String_o *)StringLiteral_7758/*"INCREMENT_SVTLEVEL"*/, 0);
              increAtkVal = infoData->fields.increAtkVal;
              v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &increAtkVal);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v29, v30, 0);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, (System_String_o *)gameObject, 0);
                v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0);
                BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_2213CDC(gameObject, v8);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  float v25; // s9
  unsigned int localPosition; // s0
  struct System_Collections_Generic_List_GameObject__o *v27; // x8
  float v28; // s8
  int size; // w23
  int32_t i; // w21
  UnityEngine_GameObject_o *v31; // x22
  UnityEngine_Transform_o *transform; // x0
  int v33; // s10
  System_Action_o *v34; // x20
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A246 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&Method_ServantCombineResultInfoComponent_EndOpen__);
    sub_2213A60(&Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    byte_596A246 = 1;
  }
  if ( !this->fields.state )
  {
    v7 = Method_ServantCombineResultInfoComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_ServantCombineResultInfoComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_2213A78(Method_ServantCombineResultInfoComponent_OpenResultInfo__);
    v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    this->fields.resInfoList = resInfo;
    p_resInfoList = &this->fields.resInfoList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.resInfoList,
      (int32_t)resInfo,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.openCallBack = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack,
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
      goto LABEL_21;
    v25 = *((float *)gameObject + 13);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_21;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    v27 = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_21;
    v28 = *(float *)&localPosition;
    size = v27->fields._size;
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        gameObject = *p_resInfoList;
        if ( !*p_resInfoList )
          goto LABEL_21;
        gameObject = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)gameObject,
                       i,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this->fields.resultInfoGrid )
          goto LABEL_21;
        v31 = (UnityEngine_GameObject_o *)gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.resultInfoGrid, 0);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v31, transform, 0, 0);
        if ( !gameObject )
          goto LABEL_21;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
      v27 = *p_resInfoList;
      if ( !*p_resInfoList )
        goto LABEL_21;
    }
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject
      || (v33 = v27->fields._size,
          (gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0)) == 0)
      || (v35.fields.z = this->fields.center.fields.z,
          v35.fields.y = (float)((float)(v25 * 0.5) * (float)v33) + -25.0,
          v35.fields.x = v28,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v35, 0),
          (gameObject = this->fields.resultInfoGrid) == 0) )
    {
LABEL_21:
      sub_2213CDC(gameObject, v10);
    }
    UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
    v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0, 0);
  }
}


void ServantCombineResultInfoComponent__clearInfoGrid(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resultInfoGrid; // x0
  int32_t childCount; // w0
  unsigned int v5; // w22
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596A249 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A249 = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid
    || (resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0)) == 0 )
  {
LABEL_15:
    sub_2213CDC(resultInfoGrid, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resultInfoGrid, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    do
    {
      resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
      if ( !resultInfoGrid )
        goto LABEL_15;
      resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0);
      if ( !resultInfoGrid )
        goto LABEL_15;
      resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)resultInfoGrid,
                                                    v5 - 2,
                                                    0);
      if ( !resultInfoGrid )
        goto LABEL_15;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resultInfoGrid, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      --v5;
    }
    while ( v5 > 1 );
    this->fields.resInfoList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resInfoList, 0, v9, v10, v11, v12, v13, v14);
  }
}


void ServantCombineResultInfoComponent__setCenter(ServantCombineResultInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  struct UIPanel_array *basePanelList; // x8
  il2cpp_array_size_t max_length; // x9
  float32x2_t *v9; // x21
  unsigned __int64 v10; // x22
  float *p_fields; // x23
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s2
  float v16; // s3
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A248 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A248 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
    sub_2213CDC(transform, v6);
  }
  v9 = (float32x2_t *)transform;
  v10 = 0;
  p_fields = (float *)&transform[1].fields;
  do
  {
    if ( v10 >= v9[3].n64_u32[0] )
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
    v18 = UnityEngine_Transform__InverseTransformPoint(transform, v17, 0);
    if ( v10 >= v9[3].n64_u32[0] )
      goto LABEL_19;
    ++v10;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v18;
    p_fields += 3;
  }
  while ( v10 != 4 );
  if ( v9[3].n64_u32[0] <= 2 )
LABEL_19:
    sub_2213CE4(transform);
  v15 = v9[5].n64_f32[0];
  v16 = v9[8].n64_f32[0];
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v9[4],
                                                    vmul_f32(vsub_f32(v9[7], v9[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v15 + (float)((float)(v16 - v15) * 0.5);
}