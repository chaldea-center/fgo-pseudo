void __fastcall ServantCombineResultInfoComponent___ctor(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FCE61 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FCE61 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCombineResultInfoComponent__Close(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x0
  System_Action_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_40FCE5F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ServantCombineResultInfoComponent_EndClose__, v6);
    byte_40FCE5F = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0LL);
  ServantCombineResultInfoComponent__Close_30470028(this, v8, v9);
}


void __fastcall ServantCombineResultInfoComponent__Close_30470028(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FCE60 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ServantCombineResultInfoComponent_EndClose__, v6);
    byte_40FCE60 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, callback, method, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall ServantCombineResultInfoComponent__EndClose(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  ServantCombineResultInfoComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ServantCombineResultInfoComponent__EndOpen(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_openCallBack; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *openCallBack; // t1

  openCallBack = this->fields.openCallBack;
  p_openCallBack = (BattleServantConfConponent_o *)&this->fields.openCallBack;
  v9 = openCallBack;
  if ( openCallBack )
  {
    p_openCallBack->klass = 0LL;
    sub_B16F98(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall ServantCombineResultInfoComponent__Init(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *levleUpInfo; // x0
  UILabel_o *befLevelLb; // x0
  UILabel_o *currentLevelLb; // x0
  UILabel_o *currentHpLb; // x0
  UILabel_o *increHpLb; // x0
  UILabel_o *currentAtkLb; // x0
  UILabel_o *increAtkLb; // x0

  if ( (byte_40FCE5A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FCE5A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ServantCombineResultInfoComponent__clearInfoGrid(this, v4);
  levleUpInfo = this->fields.levleUpInfo;
  if ( !levleUpInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(levleUpInfo, 0, 0LL);
  befLevelLb = this->fields.befLevelLb;
  if ( !befLevelLb )
    goto LABEL_12;
  UILabel__set_text(befLevelLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLevelLb = this->fields.currentLevelLb;
  if ( !currentLevelLb )
    goto LABEL_12;
  UILabel__set_text(currentLevelLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentHpLb = this->fields.currentHpLb;
  if ( !currentHpLb
    || (UILabel__set_text(currentHpLb, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (increHpLb = this->fields.increHpLb) == 0LL)
    || (UILabel__set_text(increHpLb, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (currentAtkLb = this->fields.currentAtkLb) == 0LL)
    || (UILabel__set_text(currentAtkLb, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (increAtkLb = this->fields.increAtkLb) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  UILabel__set_text(increAtkLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  UnityEngine_GameObject_o *levleUpInfo; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UILabel_o *levelUpTitleLb; // x0
  UILabel_o *v24; // x22
  System_String_o *v25; // x0
  UILabel_o *befLevelLb; // x22
  System_String_o *v27; // x23
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *currentLevelLb; // x22
  System_String_o *v31; // x0
  UILabel_o *currentHpLb; // x21
  System_String_o *v33; // x0
  UILabel_o *increHpLb; // x21
  System_String_o *v35; // x22
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  UILabel_o *currentAtkLb; // x21
  System_String_o *v39; // x0
  UILabel_o *increAtkLb; // x21
  System_String_o *v41; // x22
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Action_o *v48; // x20
  int32_t increAtkVal; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t increHpVal; // [xsp+8h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FCE5C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, infoData);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_ServantCombineResultInfoComponent_EndOpen__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_8348/*"LEVEL_INFO"*/, v11);
    sub_B16FFC(&StringLiteral_8345/*"LEVELUP_NOTICE_TITLE"*/, v12);
    sub_B16FFC(&StringLiteral_7242/*"INCREMENT_SVTLEVEL"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    byte_40FCE5C = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    levleUpInfo = this->fields.levleUpInfo;
    if ( !levleUpInfo )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(levleUpInfo, 1, 0LL);
    this->fields.openCallBack = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    levelUpTitleLb = this->fields.levelUpTitleLb;
    if ( !levelUpTitleLb )
      goto LABEL_28;
    UILabel__set_text(levelUpTitleLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !infoData )
      goto LABEL_28;
    if ( infoData->fields.oldLv < infoData->fields.currentLv )
    {
      v24 = this->fields.levelUpTitleLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8345/*"LEVELUP_NOTICE_TITLE"*/, 0LL);
      if ( !v24 )
        goto LABEL_28;
      UILabel__set_text(v24, v25, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(5, 0LL);
    }
    befLevelLb = this->fields.befLevelLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8348/*"LEVEL_INFO"*/, 0LL);
    oldLv = infoData->fields.oldLv;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &oldLv);
    v29 = System_String__Format(v27, v28, 0LL);
    if ( befLevelLb )
    {
      UILabel__set_text(befLevelLb, v29, 0LL);
      currentLevelLb = this->fields.currentLevelLb;
      v31 = System_Int32__ToString((int)infoData + 20, 0LL);
      if ( currentLevelLb )
      {
        UILabel__set_text(currentLevelLb, v31, 0LL);
        currentHpLb = this->fields.currentHpLb;
        v33 = System_Int32__ToString((int)infoData + 24, 0LL);
        if ( currentHpLb )
        {
          UILabel__set_text(currentHpLb, v33, 0LL);
          increHpLb = this->fields.increHpLb;
          v35 = LocalizationManager__Get((System_String_o *)StringLiteral_7242/*"INCREMENT_SVTLEVEL"*/, 0LL);
          increHpVal = infoData->fields.increHpVal;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increHpVal);
          v37 = System_String__Format(v35, v36, 0LL);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, v37, 0LL);
            currentAtkLb = this->fields.currentAtkLb;
            v39 = System_Int32__ToString((int)infoData + 32, 0LL);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, v39, 0LL);
              increAtkLb = this->fields.increAtkLb;
              v41 = LocalizationManager__Get((System_String_o *)StringLiteral_7242/*"INCREMENT_SVTLEVEL"*/, 0LL);
              increAtkVal = infoData->fields.increAtkVal;
              v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAtkVal);
              v43 = System_String__Format(v41, v42, 0LL);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, v43, 0LL);
                v48 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
                System_Action___ctor(v48, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  struct UIGrid_o *resultInfoGrid; // x0
  float v27; // s9
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  struct System_Collections_Generic_List_GameObject__o *v30; // x21
  int size; // w24
  float v32; // s8
  unsigned __int64 v33; // x22
  signed __int64 v34; // x23
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x21
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_Component_o *v39; // x0
  UnityEngine_Transform_o *v40; // x0
  UIGrid_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Action_o *v46; // x20
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCE5B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, resInfo);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B16FFC(&Method_ServantCombineResultInfoComponent_EndOpen__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    byte_40FCE5B = 1;
  }
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.resInfoList = resInfo;
    p_resInfoList = &this->fields.resInfoList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.resInfoList,
      (System_Int32_array **)resInfo,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this->fields.openCallBack = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    ServantCombineResultInfoComponent__setCenter(this, v25);
    resultInfoGrid = this->fields.resultInfoGrid;
    if ( !resultInfoGrid )
      goto LABEL_23;
    v27 = *(float *)&resultInfoGrid->fields.animateSmoothly;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resultInfoGrid, 0LL);
    if ( !transform )
      goto LABEL_23;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
    v30 = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_23;
    size = v30->fields._size;
    v32 = *(float *)&localPosition;
    if ( size >= 1 )
    {
      v33 = 0LL;
      v34 = size;
      while ( 1 )
      {
        if ( v33 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v35 = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
        if ( !v35 )
          break;
        v36 = v30->fields._items->m_Items[v33];
        v37 = UnityEngine_Component__get_transform(v35, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v36, v37, 0LL, 0LL);
        if ( !Object )
          break;
        UnityEngine_GameObject__SetActive(Object, 1, 0LL);
        v30 = *p_resInfoList;
        if ( !*p_resInfoList )
          break;
        size = v30->fields._size;
        if ( (__int64)++v33 >= v34 )
          goto LABEL_19;
      }
LABEL_23:
      sub_B170D4();
    }
LABEL_19:
    v39 = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
    if ( !v39 )
      goto LABEL_23;
    v40 = UnityEngine_Component__get_transform(v39, 0LL);
    if ( !v40 )
      goto LABEL_23;
    v47.fields.z = this->fields.center.fields.z;
    v47.fields.y = (float)((float)(v27 * 0.5) * (float)size) + -25.0;
    v47.fields.x = v32;
    UnityEngine_Transform__set_localPosition(v40, v47, 0LL);
    v41 = this->fields.resultInfoGrid;
    if ( !v41 )
      goto LABEL_23;
    UIGrid__set_repositionNow(v41, 1, 0LL);
    v46 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v42, v43, v44, v45);
    System_Action___ctor(v46, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
  }
}


void __fastcall ServantCombineResultInfoComponent__clearInfoGrid(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resultInfoGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FCE5E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCE5E = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid || (transform = UnityEngine_Component__get_transform(resultInfoGrid, 0LL)) == 0LL )
LABEL_15:
    sub_B170D4();
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      v7 = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
      if ( !v7 )
        goto LABEL_15;
      v8 = UnityEngine_Component__get_transform(v7, 0LL);
      if ( !v8 )
        goto LABEL_15;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v8, v6, 0LL);
      if ( !Child )
        goto LABEL_15;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      --v6;
    }
    while ( v6 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.resInfoList, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineResultInfoComponent__setCenter(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UIPanel_array *basePanelList; // x8
  __int64 v8; // x9
  unsigned int v9; // w8
  float32x2_t *v10; // x21
  float *v11; // x22
  unsigned __int64 v12; // x23
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Transform_o *transform; // x0
  int v17; // s0
  int v18; // s1
  int v19; // s2
  float32x2_t v20; // d8
  float v21; // s9
  float32x2_t v22; // d10
  float v23; // s11
  float v24; // s0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCE5D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCE5D = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(basePanel, 0LL, 0LL);
  if ( (v4 & 1) != 0 )
  {
    basePanelList = this->fields.basePanelList;
    if ( basePanelList )
    {
      v8 = *(_QWORD *)&basePanelList->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
          goto LABEL_20;
        basePanel = (UnityEngine_Object_o *)basePanelList->m_Items[0];
      }
    }
  }
  if ( !basePanel
    || (v4 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))basePanel->klass[1]._1.klass)(
               basePanel,
               basePanel->klass[1]._1.fields)) == 0 )
  {
LABEL_21:
    sub_B170D4();
  }
  v9 = *(_DWORD *)(v4 + 24);
  v10 = (float32x2_t *)v4;
  v11 = (float *)(v4 + 40);
  v12 = -1LL;
  do
  {
    if ( v12 + 1 >= v9 )
      goto LABEL_20;
    v13 = *(v11 - 2);
    v14 = *(v11 - 1);
    v15 = *v11;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0LL);
    if ( !transform )
      goto LABEL_21;
    v25.fields.x = v13;
    v25.fields.y = v14;
    v25.fields.z = v15;
    *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__InverseTransformPoint(transform, v25, 0LL);
    if ( v12 + 1 >= v10[3].n64_u32[0] )
      goto LABEL_20;
    *((_DWORD *)v11 - 2) = v17;
    *((_DWORD *)v11 - 1) = v18;
    *(_DWORD *)v11 = v19;
    v11 += 3;
    v9 = v10[3].n64_u32[0];
    ++v12;
  }
  while ( v12 <= 2 );
  if ( v9 < 3 )
  {
LABEL_20:
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  v20.n64_u64[0] = v10[4].n64_u64[0];
  v21 = v10[5].n64_f32[0];
  v22.n64_u64[0] = v10[7].n64_u64[0];
  v23 = v10[8].n64_f32[0];
  v24 = UnityEngine_Mathf__Clamp01(0.5, 0LL);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(v20, vmul_n_f32(vsub_f32(v22, v20), v24));
  this->fields.center.fields.z = v21 + (float)((float)(v23 - v21) * v24);
}