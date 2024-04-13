void __fastcall ServantCombineResultInfoComponent___ctor(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9CDC & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CDC = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCombineResultInfoComponent__Close(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x0
  System_Action_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42E9CDA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantCombineResultInfoComponent_EndClose__, v5, v6, v7);
    byte_42E9CDA = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0LL);
  ServantCombineResultInfoComponent__Close_27526372(this, v9, v10);
}


void __fastcall ServantCombineResultInfoComponent__Close_27526372(
        ServantCombineResultInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E9CDB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantCombineResultInfoComponent_EndClose__, v5, v6, v7);
    byte_42E9CDB = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
    sub_B5D69C(0LL, v4);
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
    sub_B5D560(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall ServantCombineResultInfoComponent__Init(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42E9CD5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E9CD5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ServantCombineResultInfoComponent__clearInfoGrid(this, v7);
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
    sub_B5D69C(gameObject, v6);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UILabel_o *levelUpTitleLb; // x22
  UILabel_o *befLevelLb; // x22
  System_String_o *v41; // x23
  Il2CppObject *v42; // x0
  UILabel_o *currentLevelLb; // x22
  UILabel_o *currentHpLb; // x21
  UILabel_o *increHpLb; // x21
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  UILabel_o *currentAtkLb; // x21
  UILabel_o *increAtkLb; // x21
  System_String_o *v50; // x22
  Il2CppObject *v51; // x0
  System_Action_o *v52; // x20
  int32_t increAtkVal; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t increHpVal; // [xsp+8h] [xbp-38h] BYREF
  int32_t oldLv; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9CD7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)infoData, (_DWORD)callback, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_ServantCombineResultInfoComponent_EndOpen__, v13, v14, v15);
    sub_B5D5C4(&SoundManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_8461/*"LEVEL_INFO"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_8458/*"LEVELUP_NOTICE_TITLE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_7352/*"INCREMENT_SVTLEVEL"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42E9CD7 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8458/*"LEVELUP_NOTICE_TITLE"*/, 0LL);
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
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
    oldLv = infoData->fields.oldLv;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &oldLv);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v41, v42, 0LL);
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
          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_7352/*"INCREMENT_SVTLEVEL"*/, 0LL);
          increHpVal = infoData->fields.increHpVal;
          v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increHpVal);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v46, v47, 0LL);
          if ( increHpLb )
          {
            UILabel__set_text(increHpLb, (System_String_o *)gameObject, 0LL);
            currentAtkLb = this->fields.currentAtkLb;
            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)infoData + 32, 0LL);
            if ( currentAtkLb )
            {
              UILabel__set_text(currentAtkLb, (System_String_o *)gameObject, 0LL);
              increAtkLb = this->fields.increAtkLb;
              v50 = LocalizationManager__Get((System_String_o *)StringLiteral_7352/*"INCREMENT_SVTLEVEL"*/, 0LL);
              increAtkVal = infoData->fields.increAtkVal;
              v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAtkVal);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v50, v51, 0LL);
              if ( increAtkLb )
              {
                UILabel__set_text(increAtkLb, (System_String_o *)gameObject, 0LL);
                v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(v52, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
                BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B5D69C(gameObject, v32);
  }
}


void __fastcall ServantCombineResultInfoComponent__OpenResultInfo(
        ServantCombineResultInfoComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  void *gameObject; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1
  float v35; // s9
  unsigned int localPosition; // s0
  struct System_Collections_Generic_List_GameObject__o *v37; // x21
  int size; // w24
  float v39; // s8
  unsigned __int64 v40; // x22
  signed __int64 v41; // x23
  UnityEngine_GameObject_o *v42; // x21
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v44; // x20
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9CD6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)resInfo, (_DWORD)callback, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_ServantCombineResultInfoComponent_EndOpen__, v13, v14, v15);
    sub_B5D5C4(&SoundManager_TypeInfo, v16, v17, v18);
    byte_42E9CD6 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.resInfoList,
      (System_Int32_array **)resInfo,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    this->fields.openCallBack = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    ServantCombineResultInfoComponent__setCenter(this, v34);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_23;
    v35 = *((float *)gameObject + 11);
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    v37 = *p_resInfoList;
    if ( !*p_resInfoList )
      goto LABEL_23;
    size = v37->fields._size;
    v39 = *(float *)&localPosition;
    if ( size >= 1 )
    {
      v40 = 0LL;
      v41 = size;
      while ( 1 )
      {
        if ( v40 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        gameObject = this->fields.resultInfoGrid;
        if ( !gameObject )
          break;
        v42 = v37->fields._items->m_Items[v40];
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v42, transform, 0LL, 0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v37 = *p_resInfoList;
        if ( !*p_resInfoList )
          break;
        size = v37->fields._size;
        if ( (__int64)++v40 >= v41 )
          goto LABEL_19;
      }
LABEL_23:
      sub_B5D69C(gameObject, v20);
    }
LABEL_19:
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_23;
    gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    v45.fields.z = this->fields.center.fields.z;
    v45.fields.y = (float)((float)(v35 * 0.5) * (float)size) + -25.0;
    v45.fields.x = v39;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v45, 0LL);
    gameObject = this->fields.resultInfoGrid;
    if ( !gameObject )
      goto LABEL_23;
    UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
    v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_ServantCombineResultInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0LL);
  }
}


void __fastcall ServantCombineResultInfoComponent__clearInfoGrid(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *resultInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9CD9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CD9 = 1;
  }
  resultInfoGrid = (UnityEngine_Component_o *)this->fields.resultInfoGrid;
  if ( !resultInfoGrid
    || (resultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(resultInfoGrid, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(resultInfoGrid, method);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)resultInfoGrid, 0LL);
  v7 = childCount - 1;
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
                                                    v7,
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
      --v7;
    }
    while ( v7 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.resInfoList, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineResultInfoComponent__setCenter(
        ServantCombineResultInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  struct UIPanel_array *basePanelList; // x8
  __int64 v9; // x9
  unsigned int klass; // w8
  float32x2_t *v11; // x21
  float *p_m_CachedPtr; // x22
  unsigned __int64 v13; // x23
  float v14; // s8
  float v15; // s9
  float v16; // s10
  int v17; // s0
  int v18; // s1
  int v19; // s2
  float32x2_t v20; // d8
  float v21; // s9
  float32x2_t v22; // d10
  float v23; // s11
  float v24; // s0
  __int64 v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9CD8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CD8 = 1;
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
      v9 = *(_QWORD *)&basePanelList->max_length;
      if ( v9 )
      {
        if ( !(_DWORD)v9 )
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
    sub_B5D69C(transform, v7);
  }
  klass = (unsigned int)transform[1].klass;
  v11 = (float32x2_t *)transform;
  p_m_CachedPtr = (float *)&transform[1].fields.m_CachedPtr;
  v13 = -1LL;
  do
  {
    if ( v13 + 1 >= klass )
      goto LABEL_20;
    v14 = *(p_m_CachedPtr - 2);
    v15 = *(p_m_CachedPtr - 1);
    v16 = *p_m_CachedPtr;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0LL);
    if ( !transform )
      goto LABEL_21;
    v26.fields.x = v14;
    v26.fields.y = v15;
    v26.fields.z = v16;
    *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__InverseTransformPoint(transform, v26, 0LL);
    if ( v13 + 1 >= v11[3].n64_u32[0] )
      goto LABEL_20;
    *((_DWORD *)p_m_CachedPtr - 2) = v17;
    *((_DWORD *)p_m_CachedPtr - 1) = v18;
    *(_DWORD *)p_m_CachedPtr = v19;
    p_m_CachedPtr += 3;
    klass = v11[3].n64_u32[0];
    ++v13;
  }
  while ( v13 <= 2 );
  if ( klass < 3 )
  {
LABEL_20:
    v25 = sub_B5D6C8(transform);
    sub_B5D668(v25, 0LL);
  }
  v20.n64_u64[0] = v11[4].n64_u64[0];
  v21 = v11[5].n64_f32[0];
  v22.n64_u64[0] = v11[7].n64_u64[0];
  v23 = v11[8].n64_f32[0];
  v24 = UnityEngine_Mathf__Clamp01(0.5, 0LL);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(v20, vmul_n_f32(vsub_f32(v22, v20), v24));
  this->fields.center.fields.z = v21 + (float)((float)(v23 - v21) * v24);
}