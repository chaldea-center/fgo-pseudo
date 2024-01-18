void __fastcall ServantCombineResultInfoComponent___ctor(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189EC8 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4189EC8 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4189EC6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ServantCombineResultInfoComponent_EndClose__, v3);
    byte_4189EC6 = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0LL);
  ServantCombineResultInfoComponent__Close_29226728(this, v5, v6);
}


void __fastcall ServantCombineResultInfoComponent__Close_29226728(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4189EC7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ServantCombineResultInfoComponent_EndClose__, v4);
    byte_4189EC7 = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
    sub_B2C434(0LL, v4);
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
    sub_B2C2F8(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall ServantCombineResultInfoComponent__Init(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4189EC1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4189EC1 = 1;
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
    sub_B2C434(gameObject, v4);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UILabel_o *levelUpTitleLb; // x22
  UILabel_o *befLevelLb; // x22
  System_String_o *v25; // x23
  Il2CppObject *v26; // x0
  UILabel_o *currentLevelLb; // x22
  UILabel_o *currentHpLb; // x21
  UILabel_o *increHpLb; // x21
  System_String_o *v30; // x22
  Il2CppObject *v31; // x0
  UILabel_o *currentAtkLb; // x21
  UILabel_o *increAtkLb; // x21
  System_String_o *v34; // x22
  Il2CppObject *v35; // x0
  System_Action_o *v36; // x20
  int32_t increAtkVal; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t increHpVal; // [xsp+8h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4189EC3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, infoData);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_ServantCombineResultInfoComponent_EndOpen__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_8377/*"LEVEL_INFO"*/, v11);
    sub_B2C35C(&StringLiteral_8374/*"LEVELUP_NOTICE_TITLE"*/, v12);
    sub_B2C35C(&StringLiteral_7270/*"INCREMENT_SVTLEVEL"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_4189EC3 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = this->fields.levleUpInfo;
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallBack = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    gameObject = (UnityEngine_GameObject_o *)this->fields.levelUpTitleLb;
    if ( !gameObject )
      goto LABEL_28;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !infoData )
      goto LABEL_28;
    if ( infoData->fields.oldLv < infoData->fields.currentLv )
    {
      levelUpTitleLb = this->fields.levelUpTitleLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8374/*"LEVELUP_NOTICE_TITLE"*/, 0LL);
      if ( !levelUpTitleLb )
        goto LABEL_28;
      UILabel__set_text(levelUpTitleLb, (System_String_o *)gameObject, 0LL);
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
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8377/*"LEVEL_INFO"*/, 0LL);
    oldLv = infoData->fields.oldLv;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &oldLv);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v25, v26, 0LL);
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
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_7270/*"INCREMENT_SVTLEVEL"*/, 0LL);
          increHpVal = infoData->fields.increHpVal;
          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increHpVal);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v30, v31, 0LL);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, (System_String_o *)gameObject, 0LL);
            currentAtkLb = this->fields.currentAtkLb;
            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 32, 0LL);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, (System_String_o *)gameObject, 0LL);
              increAtkLb = this->fields.increAtkLb;
              v34 = LocalizationManager__Get((System_String_o *)StringLiteral_7270/*"INCREMENT_SVTLEVEL"*/, 0LL);
              increAtkVal = infoData->fields.increAtkVal;
              v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAtkVal);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v34, v35, 0LL);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, (System_String_o *)gameObject, 0LL);
                v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(v36, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B2C434(gameObject, v16);
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
  void *gameObject; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  float v27; // s9
  unsigned int localPosition; // s0
  struct System_Collections_Generic_List_GameObject__o *v29; // x21
  int size; // w24
  float v31; // s8
  unsigned __int64 v32; // x22
  signed __int64 v33; // x23
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v36; // x20
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189EC2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, resInfo);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B2C35C(&Method_ServantCombineResultInfoComponent_EndOpen__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_4189EC2 = 1;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    this->fields.resInfoList = resInfo;
    p_resInfoList = &this->fields.resInfoList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.resInfoList,
      (System_Int32_array **)resInfo,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    this->fields.openCallBack = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    ServantCombineResultInfoComponent__setCenter(this, v26);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_23;
    v27 = *((float *)gameObject + 11);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    v29 = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_23;
    size = v29->fields._size;
    v31 = *(float *)&localPosition;
    if ( size >= 1 )
    {
      v32 = 0LL;
      v33 = size;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        gameObject = this->fields.resultInfoGrid;
        if ( !gameObject )
          break;
        v34 = v29->fields._items->m_Items[v32];
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v34, transform, 0LL, 0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v29 = *p_resInfoList;
        if ( !*p_resInfoList )
          break;
        size = v29->fields._size;
        if ( (__int64)++v32 >= v33 )
          goto LABEL_19;
      }
LABEL_23:
      sub_B2C434(gameObject, v12);
    }
LABEL_19:
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_23;
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    v37.fields.z = this->fields.center.fields.z;
    v37.fields.y = (float)((float)(v27 * 0.5) * (float)size) + -25.0;
    v37.fields.x = v31;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v37, 0LL);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_23;
    UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
    v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4189EC5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189EC5 = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid
    || (resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B2C434(resultInfoGrid, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resultInfoGrid, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
      if ( !resultInfoGrid )
        goto LABEL_15;
      resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0LL);
      if ( !resultInfoGrid )
        goto LABEL_15;
      resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)resultInfoGrid,
                                                    v5,
                                                    0LL);
      if ( !resultInfoGrid )
        goto LABEL_15;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(resultInfoGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      --v5;
    }
    while ( v5 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.resInfoList, 0LL, v7, v8, v9, v10, v11, v12);
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
  float *p_m_CachedPtr; // x22
  unsigned __int64 v11; // x23
  float v12; // s8
  float v13; // s9
  float v14; // s10
  int v15; // s0
  int v16; // s1
  int v17; // s2
  float32x2_t v18; // d8
  float v19; // s9
  float32x2_t v20; // d10
  float v21; // s11
  float v22; // s0
  __int64 v23; // x0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189EC4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189EC4 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
          goto LABEL_20;
        basePanel = (UnityEngine_Object_o *)basePanelList->m_Items[0];
      }
    }
  }
  if ( !basePanel
    || (transform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))basePanel->klass[1]._1.klass)(
                                                 basePanel,
                                                 basePanel->klass[1]._1.fields)) == 0LL )
  {
LABEL_21:
    sub_B2C434(transform, v5);
  }
  klass = (unsigned int)transform[1].klass;
  v9 = (float32x2_t *)transform;
  p_m_CachedPtr = (float *)&transform[1].fields.m_CachedPtr;
  v11 = -1LL;
  do
  {
    if ( v11 + 1 >= klass )
      goto LABEL_20;
    v12 = *(p_m_CachedPtr - 2);
    v13 = *(p_m_CachedPtr - 1);
    v14 = *p_m_CachedPtr;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0LL);
    if ( !transform )
      goto LABEL_21;
    v24.fields.x = v12;
    v24.fields.y = v13;
    v24.fields.z = v14;
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__InverseTransformPoint(transform, v24, 0LL);
    if ( v11 + 1 >= v9[3].n64_u32[0] )
      goto LABEL_20;
    *((_DWORD *)p_m_CachedPtr - 2) = v15;
    *((_DWORD *)p_m_CachedPtr - 1) = v16;
    *(_DWORD *)p_m_CachedPtr = v17;
    p_m_CachedPtr += 3;
    klass = v9[3].n64_u32[0];
    ++v11;
  }
  while ( v11 <= 2 );
  if ( klass < 3 )
  {
LABEL_20:
    v23 = sub_B2C460(transform);
    sub_B2C400(v23, 0LL);
  }
  v18.n64_u64[0] = v9[4].n64_u64[0];
  v19 = v9[5].n64_f32[0];
  v20.n64_u64[0] = v9[7].n64_u64[0];
  v21 = v9[8].n64_f32[0];
  v22 = UnityEngine_Mathf__Clamp01(0.5, 0LL);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(v18, vmul_n_f32(vsub_f32(v20, v18), v22));
  this->fields.center.fields.z = v19 + (float)((float)(v21 - v19) * v22);
}