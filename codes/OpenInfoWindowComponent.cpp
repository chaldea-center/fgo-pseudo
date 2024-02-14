void __fastcall OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421201C & 1) == 0 )
  {
    sub_B0D8A4(&OpenInfoWindowComponent_TypeInfo, v1);
    byte_421201C = 1;
  }
  LODWORD(OpenInfoWindowComponent_TypeInfo->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y) = (struct OpenInfoWindowComponent_StaticFields)1123549184;
}


void __fastcall OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_421201B & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421201B = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall OpenInfoWindowComponent__Close(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x0
  System_Action_o *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4212018 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_OpenInfoWindowComponent_EndClose__, v4);
    byte_4212018 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  OpenInfoWindowComponent__Close_19806132(this, v6, v7);
}


void __fastcall OpenInfoWindowComponent__Close_19806132(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4212019 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_OpenInfoWindowComponent_EndClose__, v4);
    byte_4212019 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, callback, method);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall OpenInfoWindowComponent__EndClose(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  OpenInfoWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__EndOpen(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_openCallBack; // x0
  System_Action_o *v3; // x19
  struct System_Action_o *openCallBack; // t1

  openCallBack = this->fields.openCallBack;
  p_openCallBack = &this->fields.openCallBack;
  v3 = openCallBack;
  if ( openCallBack )
  {
    *p_openCallBack = 0LL;
    sub_B0D840(p_openCallBack, 0LL);
    System_Action__Invoke(v3, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
OpenInfoWindowComponent_LayoutInfo_o *__fastcall OpenInfoWindowComponent__FindLayout(
        OpenInfoWindowComponent_o *this,
        int32_t infoNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  OpenInfoWindowComponent___c__DisplayClass19_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *layoutInfos; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_421201A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___, *(_QWORD *)&infoNum);
    sub_B0D8A4(&Method_System_Func_OpenInfoWindowComponent_LayoutInfo__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_OpenInfoWindowComponent___c__DisplayClass19_0__FindLayout_b__0__, v7);
    sub_B0D8A4(&OpenInfoWindowComponent___c__DisplayClass19_0_TypeInfo, v8);
    byte_421201A = 1;
  }
  v9 = (OpenInfoWindowComponent___c__DisplayClass19_0_o *)sub_B0D974(
                                                            OpenInfoWindowComponent___c__DisplayClass19_0_TypeInfo,
                                                            *(_QWORD *)&infoNum,
                                                            method);
  OpenInfoWindowComponent___c__DisplayClass19_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.infoNum = infoNum;
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_OpenInfoWindowComponent___c__DisplayClass19_0__FindLayout_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_OpenInfoWindowComponent_LayoutInfo__bool___ctor__);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v14,
                                                   (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void __fastcall OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
  int size; // w21
  const MethodInfo *v21; // x2
  struct OpenInfoWindowComponent_LayoutInfo_o *Layout; // x0
  const MethodInfo *v23; // x1
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  float v27; // s8
  OpenInfoWindowComponent_c *v28; // x0
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  __int64 v33; // x23
  struct System_Collections_Generic_List_GameObject__o *v34; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v36; // x1
  struct System_Collections_Generic_List_GameObject__o *v37; // x22
  UnityEngine_GameObject_o *v38; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *v42; // x20
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212015 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, resInfo);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_OpenInfoWindowComponent_EndOpen__, v15);
    sub_B0D8A4(&OpenInfoWindowComponent_TypeInfo, v16);
    sub_B0D8A4(&SoundManager_TypeInfo, v17);
    byte_4212015 = 1;
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
  sub_B0D840(&this->fields.resInfoList, resInfo);
  if ( !this->fields.resInfoList )
    goto LABEL_44;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_B0D840(&this->fields.openCallBack, callback);
  Layout = OpenInfoWindowComponent__FindLayout(this, size, v21);
  this->fields.applyLayoutInfo = Layout;
  sub_B0D840(&this->fields.applyLayoutInfo, Layout);
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( applyLayoutInfo )
  {
    OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, this, 0LL);
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v23);
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_44;
    LODWORD(v27) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    v28 = OpenInfoWindowComponent_TypeInfo;
    if ( (BYTE3(OpenInfoWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v28 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v28->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v26);
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_44;
    v43.fields.z = 0.0;
    v43.fields.x = v27;
    v43.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v43, 0LL);
  }
  OpenInfoWindowComponent__setCenter(this, v25);
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v30);
  if ( !gameObject )
    goto LABEL_44;
  *((float *)&gameObject[1].fields + 1) = (float)gridHeight;
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v31);
  if ( !gameObject )
    goto LABEL_44;
  if ( size >= 1 )
  {
    v33 = 4LL;
    while ( 1 )
    {
      v34 = *p_resInfoList;
      if ( !*p_resInfoList )
        break;
      if ( v34->fields._size <= (unsigned int)(v33 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v34->fields._items->obj.klass + v33);
      if ( !gameObject )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v36);
        if ( !gameObject )
          break;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0LL);
        if ( !Component_srcLineSprite )
          break;
        LimitUpResultInfoComponent__Open(
          (LimitUpResultInfoComponent_o *)Component_srcLineSprite,
          (UnityEngine_Transform_o *)gameObject,
          0LL);
      }
      else
      {
        v37 = *p_resInfoList;
        if ( !*p_resInfoList )
          break;
        if ( v37->fields._size <= (unsigned int)(v33 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v38 = (UnityEngine_GameObject_o *)*((_QWORD *)&v37->fields._items->obj.klass + v33);
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v36);
        if ( !gameObject )
          break;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v38, transform, 0LL, 0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      }
      if ( (int)++v33 - 4 >= size )
        goto LABEL_42;
    }
LABEL_44:
    sub_B0D97C(gameObject);
  }
LABEL_42:
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v32);
  if ( !gameObject )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v40, v41);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0LL);
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
  void *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  float v18; // s9
  const MethodInfo *v19; // x1
  unsigned int localPosition; // s0
  struct System_Collections_Generic_List_GameObject__o *v21; // x21
  int size; // w8
  float v23; // s8
  unsigned __int64 v24; // x22
  signed __int64 v25; // x23
  UnityEngine_GameObject_o *v26; // x21
  UnityEngine_Transform_o *transform; // x0
  float v28; // s9
  const MethodInfo *v29; // x1
  double v30; // d0
  double v31; // d0
  float v32; // s1
  __int64 v33; // x8
  float v34; // s0
  float v35; // s1
  float v36; // s9
  const MethodInfo *v37; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x20
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212014 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, resInfo);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10);
    sub_B0D8A4(&Method_OpenInfoWindowComponent_EndOpen__, v11);
    sub_B0D8A4(&SoundManager_TypeInfo, v12);
    byte_4212014 = 1;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_B0D840(&this->fields.resInfoList, resInfo);
  this->fields.openCallBack = callback;
  sub_B0D840(&this->fields.openCallBack, callback);
  OpenInfoWindowComponent__setCenter(this, v15);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v16);
  if ( !gameObject )
    goto LABEL_35;
  v18 = *((float *)gameObject + 11);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v17);
  if ( !gameObject )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  v21 = *p_resInfoList;
  if ( !*p_resInfoList )
    goto LABEL_35;
  size = v21->fields._size;
  v23 = *(float *)&localPosition;
  if ( size >= 1 )
  {
    v24 = 0LL;
    v25 = size;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v26 = v21->fields._items->m_Items[v24];
      gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v19);
      if ( !gameObject )
        break;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v26, transform, 0LL, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v21 = *p_resInfoList;
      if ( !*p_resInfoList )
        break;
      size = v21->fields._size;
      if ( (__int64)++v24 >= v25 )
        goto LABEL_21;
    }
LABEL_35:
    sub_B0D97C(gameObject);
  }
LABEL_21:
  v28 = (float)((float)(v18 * 0.5) * (float)size) + -5.0;
  v30 = modf(v28, &iptr);
  if ( v28 >= 0.0 )
  {
    if ( v30 != 0.5 )
    {
      v36 = floorf(v28 + 0.5);
      goto LABEL_31;
    }
    v31 = iptr;
    v32 = 1.0;
  }
  else
  {
    if ( v30 != -0.5 )
    {
      v36 = ceilf(v28 + -0.5);
      goto LABEL_31;
    }
    v31 = iptr;
    v32 = -1.0;
  }
  v33 = (__int64)v31;
  v34 = v31;
  v35 = v34 + v32;
  if ( (v33 & 1) != 0 )
    v36 = v35;
  else
    v36 = v34;
LABEL_31:
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v29);
  if ( !gameObject )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  v42.fields.z = 0.0;
  v42.fields.x = v23;
  v42.fields.y = v36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v42, 0LL);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v37);
  if ( !gameObject )
    goto LABEL_35;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ResultInfoGrid; // x0
  int32_t childCount; // w0
  const MethodInfo *v5; // x1
  int32_t v6; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4212017 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212017 = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid
    || (ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(ResultInfoGrid);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ResultInfoGrid, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v5);
      if ( !ResultInfoGrid )
        goto LABEL_15;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL);
      if ( !ResultInfoGrid )
        goto LABEL_15;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)ResultInfoGrid,
                                                    v6,
                                                    0LL);
      if ( !ResultInfoGrid )
        goto LABEL_15;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(ResultInfoGrid, 0LL);
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
    sub_B0D840(&this->fields.resInfoList, 0LL);
  }
}


UIGrid_o *__fastcall OpenInfoWindowComponent__get_ResultInfoGrid(
        OpenInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  struct OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x8
  UnityEngine_Object_o *Grid; // x20
  _BOOL8 v5; // x0
  struct OpenInfoWindowComponent_LayoutInfo_o *v6; // x8
  UIGrid_o **p_Grid; // x8

  if ( (byte_4212013 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212013 = 1;
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
  v5 = UnityEngine_Object__op_Inequality(Grid, 0LL, 0LL);
  if ( v5 )
  {
    v6 = this->fields.applyLayoutInfo;
    if ( !v6 )
      sub_B0D97C(v5);
    p_Grid = &v6->fields.Grid;
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
  UnityEngine_Transform_o *transform; // x0
  struct UIPanel_array *basePanelList; // x8
  __int64 v6; // x9
  unsigned int klass; // w8
  float32x2_t *v8; // x21
  float *p_m_CachedPtr; // x22
  unsigned __int64 v10; // x23
  float v11; // s8
  float v12; // s9
  float v13; // s10
  int v14; // s0
  int v15; // s1
  int v16; // s2
  float32x2_t v17; // d8
  float v18; // s9
  float32x2_t v19; // d10
  float v20; // s11
  float v21; // s0
  __int64 v22; // x0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212016 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212016 = 1;
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
      v6 = *(_QWORD *)&basePanelList->max_length;
      if ( v6 )
      {
        if ( !(_DWORD)v6 )
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
    sub_B0D97C(transform);
  }
  klass = (unsigned int)transform[1].klass;
  v8 = (float32x2_t *)transform;
  p_m_CachedPtr = (float *)&transform[1].fields.m_CachedPtr;
  v10 = -1LL;
  do
  {
    if ( v10 + 1 >= klass )
      goto LABEL_20;
    v11 = *(p_m_CachedPtr - 2);
    v12 = *(p_m_CachedPtr - 1);
    v13 = *p_m_CachedPtr;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0LL);
    if ( !transform )
      goto LABEL_21;
    v23.fields.x = v11;
    v23.fields.y = v12;
    v23.fields.z = v13;
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__InverseTransformPoint(transform, v23, 0LL);
    if ( v10 + 1 >= v8[3].n64_u32[0] )
      goto LABEL_20;
    *((_DWORD *)p_m_CachedPtr - 2) = v14;
    *((_DWORD *)p_m_CachedPtr - 1) = v15;
    *(_DWORD *)p_m_CachedPtr = v16;
    p_m_CachedPtr += 3;
    klass = v8[3].n64_u32[0];
    ++v10;
  }
  while ( v10 <= 2 );
  if ( klass < 3 )
  {
LABEL_20:
    v22 = sub_B0D9A8(transform);
    sub_B0D948(v22, 0LL);
  }
  v17.n64_u64[0] = v8[4].n64_u64[0];
  v18 = v8[5].n64_f32[0];
  v19.n64_u64[0] = v8[7].n64_u64[0];
  v20 = v8[8].n64_f32[0];
  v21 = UnityEngine_Mathf__Clamp01(0.5, 0LL);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(v17, vmul_n_f32(vsub_f32(v19, v17), v21));
  this->fields.center.fields.z = v18 + (float)((float)(v20 - v18) * v21);
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
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  WindowSprite = (UnityEngine_Component_o *)this->fields.WindowSprite;
  if ( !WindowSprite )
    goto LABEL_6;
  WindowSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(WindowSprite, 0LL);
  if ( !WindowSprite
    || (v5.fields.x = this->fields.WindowPos.fields.x,
        v5.fields.y = this->fields.WindowPos.fields.y,
        v5.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)WindowSprite, v5, 0LL),
        (WindowSprite = (UnityEngine_Component_o *)this->fields.WindowSprite) == 0LL)
    || (UIWidget__set_width((UIWidget_o *)WindowSprite, this->fields.WindowWidth, 0LL),
        (WindowSprite = (UnityEngine_Component_o *)this->fields.WindowSprite) == 0LL) )
  {
LABEL_6:
    sub_B0D97C(WindowSprite);
  }
  UIWidget__set_height((UIWidget_o *)WindowSprite, this->fields.WindowHeight, 0LL);
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
    sub_B0D97C(this);
  return x->fields.InfoNum == this->fields.infoNum;
}