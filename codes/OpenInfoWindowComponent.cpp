void __fastcall OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F7F4F & 1) == 0 )
  {
    sub_B16FFC(&OpenInfoWindowComponent_TypeInfo, v1);
    byte_40F7F4F = 1;
  }
  LODWORD(OpenInfoWindowComponent_TypeInfo->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y) = (struct OpenInfoWindowComponent_StaticFields)1123549184;
}


void __fastcall OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40F7F4E & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F7F4E = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall OpenInfoWindowComponent__Close(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x0
  System_Action_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_40F7F4B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_OpenInfoWindowComponent_EndClose__, v6);
    byte_40F7F4B = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  OpenInfoWindowComponent__Close_21229136(this, v8, v9);
}


void __fastcall OpenInfoWindowComponent__Close_21229136(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40F7F4C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_OpenInfoWindowComponent_EndClose__, v6);
    byte_40F7F4C = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, callback, method, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall OpenInfoWindowComponent__EndClose(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  OpenInfoWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__EndOpen(OpenInfoWindowComponent_o *this, const MethodInfo *method)
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


// local variable allocation has failed, the output may be wrong!
OpenInfoWindowComponent_LayoutInfo_o *__fastcall OpenInfoWindowComponent__FindLayout(
        OpenInfoWindowComponent_o *this,
        int32_t infoNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  OpenInfoWindowComponent___c__DisplayClass19_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_IEnumerable_TSource__o *layoutInfos; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40F7F4D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___, *(_QWORD *)&infoNum);
    sub_B16FFC(&Method_System_Func_OpenInfoWindowComponent_LayoutInfo__bool___ctor__, v7);
    sub_B16FFC(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo, v8);
    sub_B16FFC(&Method_OpenInfoWindowComponent___c__DisplayClass19_0__FindLayout_b__0__, v9);
    sub_B16FFC(&OpenInfoWindowComponent___c__DisplayClass19_0_TypeInfo, v10);
    byte_40F7F4D = 1;
  }
  v11 = (OpenInfoWindowComponent___c__DisplayClass19_0_o *)sub_B170CC(
                                                             OpenInfoWindowComponent___c__DisplayClass19_0_TypeInfo,
                                                             *(_QWORD *)&infoNum,
                                                             method,
                                                             v3,
                                                             v4);
  OpenInfoWindowComponent___c__DisplayClass19_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.infoNum = infoNum;
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_OpenInfoWindowComponent___c__DisplayClass19_0__FindLayout_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_OpenInfoWindowComponent_LayoutInfo__bool___ctor__);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v17,
                                                   (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void __fastcall OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  OpenInfoWindowComponent__clearInfoGrid(this, v4);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall OpenInfoWindowComponent__OpenLimitUpResultInfo(
        OpenInfoWindowComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        bool isFristDisp,
        int32_t gridHeight,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int size; // w21
  const MethodInfo *v33; // x2
  struct OpenInfoWindowComponent_LayoutInfo_o *Layout; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v43; // x1
  UnityEngine_Component_o *ResultInfoGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v46; // x1
  float v47; // s8
  OpenInfoWindowComponent_c *v48; // x0
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  UnityEngine_Component_o *v50; // x0
  UnityEngine_Transform_o *v51; // x0
  const MethodInfo *v52; // x1
  UIGrid_o *v53; // x0
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  __int64 v56; // x23
  struct System_Collections_Generic_List_GameObject__o *v57; // x22
  UnityEngine_GameObject_o *v58; // x0
  LimitUpResultInfoComponent_o *Component_srcLineSprite; // x22
  const MethodInfo *v60; // x1
  UnityEngine_Component_o *v61; // x0
  UnityEngine_Transform_o *v62; // x0
  struct System_Collections_Generic_List_GameObject__o *v63; // x22
  UnityEngine_GameObject_o *v64; // x22
  UnityEngine_Component_o *v65; // x0
  UnityEngine_Transform_o *v66; // x0
  UnityEngine_GameObject_o *Object; // x0
  UIGrid_o *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_Action_o *v73; // x20
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7F48 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, resInfo);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_OpenInfoWindowComponent_EndOpen__, v15);
    sub_B16FFC(&OpenInfoWindowComponent_TypeInfo, v16);
    sub_B16FFC(&SoundManager_TypeInfo, v17);
    byte_40F7F48 = 1;
  }
  if ( isFristDisp )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resInfoList,
    (System_Int32_array **)resInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !this->fields.resInfoList )
    goto LABEL_44;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  Layout = OpenInfoWindowComponent__FindLayout(this, size, v33);
  this->fields.applyLayoutInfo = Layout;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.applyLayoutInfo,
    (System_Int32_array **)Layout,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( applyLayoutInfo )
  {
    OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, this, 0LL);
  }
  else
  {
    ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v41);
    if ( !ResultInfoGrid )
      goto LABEL_44;
    transform = UnityEngine_Component__get_transform(ResultInfoGrid, 0LL);
    if ( !transform )
      goto LABEL_44;
    LODWORD(v47) = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
    v48 = OpenInfoWindowComponent_TypeInfo;
    if ( (BYTE3(OpenInfoWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v48 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v48->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    v50 = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v46);
    if ( !v50 )
      goto LABEL_44;
    v51 = UnityEngine_Component__get_transform(v50, 0LL);
    if ( !v51 )
      goto LABEL_44;
    v74.fields.z = 0.0;
    v74.fields.x = v47;
    v74.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition(v51, v74, 0LL);
  }
  OpenInfoWindowComponent__setCenter(this, v43);
  v53 = OpenInfoWindowComponent__get_ResultInfoGrid(this, v52);
  if ( !v53 )
    goto LABEL_44;
  *(float *)&v53->fields.animateSmoothly = (float)gridHeight;
  if ( !OpenInfoWindowComponent__get_ResultInfoGrid(this, v54) )
    goto LABEL_44;
  if ( size >= 1 )
  {
    v56 = 4LL;
    while ( 1 )
    {
      v57 = *p_resInfoList;
      if ( !*p_resInfoList )
        break;
      if ( v57->fields._size <= (unsigned int)(v56 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v58 = (UnityEngine_GameObject_o *)*((_QWORD *)&v57->fields._items->obj.klass + v56);
      if ( !v58 )
        break;
      Component_srcLineSprite = (LimitUpResultInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v58,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        v61 = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v60);
        if ( !v61 )
          break;
        v62 = UnityEngine_Component__get_transform(v61, 0LL);
        if ( !Component_srcLineSprite )
          break;
        LimitUpResultInfoComponent__Open(Component_srcLineSprite, v62, 0LL);
      }
      else
      {
        v63 = *p_resInfoList;
        if ( !*p_resInfoList )
          break;
        if ( v63->fields._size <= (unsigned int)(v56 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v64 = (UnityEngine_GameObject_o *)*((_QWORD *)&v63->fields._items->obj.klass + v56);
        v65 = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v60);
        if ( !v65 )
          break;
        v66 = UnityEngine_Component__get_transform(v65, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v64, v66, 0LL, 0LL);
        if ( !Object )
          break;
        UnityEngine_GameObject__SetActive(Object, 1, 0LL);
      }
      if ( (int)++v56 - 4 >= size )
        goto LABEL_42;
    }
LABEL_44:
    sub_B170D4();
  }
LABEL_42:
  v68 = OpenInfoWindowComponent__get_ResultInfoGrid(this, v55);
  if ( !v68 )
    goto LABEL_44;
  UIGrid__set_repositionNow(v68, 1, 0LL);
  v73 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v69, v70, v71, v72);
  System_Action___ctor(v73, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__OpenResultInfo(
        OpenInfoWindowComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        bool isFristDisp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  UIGrid_o *ResultInfoGrid; // x0
  const MethodInfo *v30; // x1
  float v31; // s9
  UnityEngine_Component_o *v32; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v34; // x1
  unsigned int localPosition; // s0
  struct System_Collections_Generic_List_GameObject__o *v36; // x21
  int size; // w8
  float v38; // s8
  unsigned __int64 v39; // x22
  signed __int64 v40; // x23
  UnityEngine_GameObject_o *v41; // x21
  UnityEngine_Component_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_GameObject_o *Object; // x0
  float v45; // s9
  const MethodInfo *v46; // x1
  double v47; // d0
  double v48; // d0
  float v49; // s1
  __int64 v50; // x8
  float v51; // s0
  float v52; // s1
  float v53; // s9
  UnityEngine_Component_o *v54; // x0
  UnityEngine_Transform_o *v55; // x0
  const MethodInfo *v56; // x1
  UIGrid_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Action_o *v62; // x20
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7F47 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, resInfo);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10);
    sub_B16FFC(&Method_OpenInfoWindowComponent_EndOpen__, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    byte_40F7F47 = 1;
  }
  if ( isFristDisp )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resInfoList,
    (System_Int32_array **)resInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.openCallBack = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  OpenInfoWindowComponent__setCenter(this, v27);
  ResultInfoGrid = OpenInfoWindowComponent__get_ResultInfoGrid(this, v28);
  if ( !ResultInfoGrid )
    goto LABEL_35;
  v31 = *(float *)&ResultInfoGrid->fields.animateSmoothly;
  v32 = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v30);
  if ( !v32 )
    goto LABEL_35;
  transform = UnityEngine_Component__get_transform(v32, 0LL);
  if ( !transform )
    goto LABEL_35;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
  v36 = *p_resInfoList;
  if ( !*p_resInfoList )
    goto LABEL_35;
  size = v36->fields._size;
  v38 = *(float *)&localPosition;
  if ( size >= 1 )
  {
    v39 = 0LL;
    v40 = size;
    while ( 1 )
    {
      if ( v39 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v41 = v36->fields._items->m_Items[v39];
      v42 = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v34);
      if ( !v42 )
        break;
      v43 = UnityEngine_Component__get_transform(v42, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v41, v43, 0LL, 0LL);
      if ( !Object )
        break;
      UnityEngine_GameObject__SetActive(Object, 1, 0LL);
      v36 = *p_resInfoList;
      if ( !*p_resInfoList )
        break;
      size = v36->fields._size;
      if ( (__int64)++v39 >= v40 )
        goto LABEL_21;
    }
LABEL_35:
    sub_B170D4();
  }
LABEL_21:
  v45 = (float)((float)(v31 * 0.5) * (float)size) + -5.0;
  v47 = modf(v45, &iptr);
  if ( v45 >= 0.0 )
  {
    if ( v47 != 0.5 )
    {
      v53 = floorf(v45 + 0.5);
      goto LABEL_31;
    }
    v48 = iptr;
    v49 = 1.0;
  }
  else
  {
    if ( v47 != -0.5 )
    {
      v53 = ceilf(v45 + -0.5);
      goto LABEL_31;
    }
    v48 = iptr;
    v49 = -1.0;
  }
  v50 = (__int64)v48;
  v51 = v48;
  v52 = v51 + v49;
  if ( (v50 & 1) != 0 )
    v53 = v52;
  else
    v53 = v51;
LABEL_31:
  v54 = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v46);
  if ( !v54 )
    goto LABEL_35;
  v55 = UnityEngine_Component__get_transform(v54, 0LL);
  if ( !v55 )
    goto LABEL_35;
  v64.fields.z = 0.0;
  v64.fields.x = v38;
  v64.fields.y = v53;
  UnityEngine_Transform__set_localPosition(v55, v64, 0LL);
  v57 = OpenInfoWindowComponent__get_ResultInfoGrid(this, v56);
  if ( !v57 )
    goto LABEL_35;
  UIGrid__set_repositionNow(v57, 1, 0LL);
  v62 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v58, v59, v60, v61);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ResultInfoGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7F4A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7F4A = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid || (transform = UnityEngine_Component__get_transform(ResultInfoGrid, 0LL)) == 0LL )
LABEL_15:
    sub_B170D4();
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v7 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      v8 = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v6);
      if ( !v8 )
        goto LABEL_15;
      v9 = UnityEngine_Component__get_transform(v8, 0LL);
      if ( !v9 )
        goto LABEL_15;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v9, v7, 0LL);
      if ( !Child )
        goto LABEL_15;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.resInfoList, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


UIGrid_o *__fastcall OpenInfoWindowComponent__get_ResultInfoGrid(
        OpenInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  struct OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x8
  UnityEngine_Object_o *Grid; // x20
  struct OpenInfoWindowComponent_LayoutInfo_o *v5; // x8
  UIGrid_o **p_Grid; // x8

  if ( (byte_40F7F46 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7F46 = 1;
  }
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( !applyLayoutInfo )
    goto LABEL_10;
  Grid = (UnityEngine_Object_o *)applyLayoutInfo->fields.Grid;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Grid, 0LL, 0LL) )
  {
    v5 = this->fields.applyLayoutInfo;
    if ( !v5 )
      sub_B170D4();
    p_Grid = &v5->fields.Grid;
  }
  else
  {
LABEL_10:
    p_Grid = &this->fields.resultInfoGrid;
  }
  return *p_Grid;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OpenInfoWindowComponent__setCenter(OpenInfoWindowComponent_o *this, const MethodInfo *method)
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

  if ( (byte_40F7F49 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7F49 = 1;
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


void __fastcall OpenInfoWindowComponent_LayoutInfo___ctor(
        OpenInfoWindowComponent_LayoutInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OpenInfoWindowComponent_LayoutInfo__Apply(
        OpenInfoWindowComponent_LayoutInfo_o *this,
        OpenInfoWindowComponent_o *component,
        const MethodInfo *method)
{
  UnityEngine_Component_o *WindowSprite; // x0
  UnityEngine_Transform_o *transform; // x0
  UIWidget_o *v6; // x0
  UIWidget_o *v7; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  WindowSprite = (UnityEngine_Component_o *)this->fields.WindowSprite;
  if ( !WindowSprite )
    goto LABEL_6;
  transform = UnityEngine_Component__get_transform(WindowSprite, 0LL);
  if ( !transform
    || (v8.fields.x = this->fields.WindowPos.fields.x,
        v8.fields.y = this->fields.WindowPos.fields.y,
        v8.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(transform, v8, 0LL),
        (v6 = (UIWidget_o *)this->fields.WindowSprite) == 0LL)
    || (UIWidget__set_width(v6, this->fields.WindowWidth, 0LL), (v7 = (UIWidget_o *)this->fields.WindowSprite) == 0LL) )
  {
LABEL_6:
    sub_B170D4();
  }
  UIWidget__set_height(v7, this->fields.WindowHeight, 0LL);
}


void __fastcall OpenInfoWindowComponent_LayoutInfo__TryAssertion(
        OpenInfoWindowComponent_LayoutInfo_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall OpenInfoWindowComponent___c__DisplayClass19_0___ctor(
        OpenInfoWindowComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall OpenInfoWindowComponent___c__DisplayClass19_0___FindLayout_b__0(
        OpenInfoWindowComponent___c__DisplayClass19_0_o *this,
        OpenInfoWindowComponent_LayoutInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.InfoNum == this->fields.infoNum;
}