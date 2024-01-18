void __fastcall OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4185132 & 1) == 0 )
  {
    sub_B2C35C(&OpenInfoWindowComponent_TypeInfo, v1);
    byte_4185132 = 1;
  }
  LODWORD(OpenInfoWindowComponent_TypeInfo->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y) = (struct OpenInfoWindowComponent_StaticFields)1123549184;
}


void __fastcall OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4185131 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4185131 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall OpenInfoWindowComponent__Close(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x0
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_418512E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_OpenInfoWindowComponent_EndClose__, v3);
    byte_418512E = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  OpenInfoWindowComponent__Close_20124456(this, v5, v6);
}


void __fastcall OpenInfoWindowComponent__Close_20124456(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_418512F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_OpenInfoWindowComponent_EndClose__, v4);
    byte_418512F = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall OpenInfoWindowComponent__EndClose(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  OpenInfoWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
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
    sub_B2C2F8(p_openCallBack, 0LL);
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
  System_Collections_Generic_IEnumerable_TSource__o *layoutInfos; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_4185130 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___, *(_QWORD *)&infoNum);
    sub_B2C35C(&Method_System_Func_OpenInfoWindowComponent_LayoutInfo__bool___ctor__, v5);
    sub_B2C35C(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo, v6);
    sub_B2C35C(&Method_OpenInfoWindowComponent___c__DisplayClass19_0__FindLayout_b__0__, v7);
    sub_B2C35C(&OpenInfoWindowComponent___c__DisplayClass19_0_TypeInfo, v8);
    byte_4185130 = 1;
  }
  v9 = (OpenInfoWindowComponent___c__DisplayClass19_0_o *)sub_B2C42C(OpenInfoWindowComponent___c__DisplayClass19_0_TypeInfo);
  OpenInfoWindowComponent___c__DisplayClass19_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.infoNum = infoNum;
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_OpenInfoWindowComponent___c__DisplayClass19_0__FindLayout_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_OpenInfoWindowComponent_LayoutInfo__bool___ctor__);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v13,
                                                   (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void __fastcall OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  OpenInfoWindowComponent__clearInfoGrid(this, v5);
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
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int size; // w21
  const MethodInfo *v22; // x2
  struct OpenInfoWindowComponent_LayoutInfo_o *Layout; // x0
  const MethodInfo *v24; // x1
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  float v28; // s8
  OpenInfoWindowComponent_c *v29; // x0
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  const MethodInfo *v31; // x1
  __int64 v32; // x23
  struct System_Collections_Generic_List_GameObject__o *v33; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  struct System_Collections_Generic_List_GameObject__o *v35; // x22
  UnityEngine_GameObject_o *v36; // x22
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v38; // x20
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418512B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, resInfo);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_OpenInfoWindowComponent_EndOpen__, v15);
    sub_B2C35C(&OpenInfoWindowComponent_TypeInfo, v16);
    sub_B2C35C(&SoundManager_TypeInfo, v17);
    byte_418512B = 1;
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
  sub_B2C2F8(&this->fields.resInfoList, resInfo);
  if ( !this->fields.resInfoList )
    goto LABEL_44;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_B2C2F8(&this->fields.openCallBack, callback);
  Layout = OpenInfoWindowComponent__FindLayout(this, size, v22);
  this->fields.applyLayoutInfo = Layout;
  sub_B2C2F8(&this->fields.applyLayoutInfo, Layout);
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( applyLayoutInfo )
  {
    OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, this, 0LL);
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v24);
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_44;
    LODWORD(v28) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    v29 = OpenInfoWindowComponent_TypeInfo;
    if ( (BYTE3(OpenInfoWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v29 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v29->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v27);
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_44;
    v39.fields.z = 0.0;
    v39.fields.x = v28;
    v39.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v39, 0LL);
  }
  OpenInfoWindowComponent__setCenter(this, v26);
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v31);
  if ( !gameObject )
    goto LABEL_44;
  *((float *)&gameObject[1].fields + 1) = (float)gridHeight;
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v19);
  if ( !gameObject )
    goto LABEL_44;
  if ( size >= 1 )
  {
    v32 = 4LL;
    while ( 1 )
    {
      v33 = *p_resInfoList;
      if ( !*p_resInfoList )
        break;
      if ( v33->fields._size <= (unsigned int)(v32 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v33->fields._items->obj.klass + v32);
      if ( !gameObject )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v19);
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
        v35 = *p_resInfoList;
        if ( !*p_resInfoList )
          break;
        if ( v35->fields._size <= (unsigned int)(v32 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v36 = (UnityEngine_GameObject_o *)*((_QWORD *)&v35->fields._items->obj.klass + v32);
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v19);
        if ( !gameObject )
          break;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v36, transform, 0LL, 0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      }
      if ( (int)++v32 - 4 >= size )
        goto LABEL_42;
    }
LABEL_44:
    sub_B2C434(gameObject, v19);
  }
LABEL_42:
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v19);
  if ( !gameObject )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
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
  const MethodInfo *v14; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  float v18; // s9
  unsigned int localPosition; // s0
  struct System_Collections_Generic_List_GameObject__o *v20; // x21
  int size; // w8
  float v22; // s8
  unsigned __int64 v23; // x22
  signed __int64 v24; // x23
  UnityEngine_GameObject_o *v25; // x21
  UnityEngine_Transform_o *transform; // x0
  float v27; // s9
  const MethodInfo *v28; // x1
  double v29; // d0
  double v30; // d0
  float v31; // s1
  __int64 v32; // x8
  float v33; // s0
  float v34; // s1
  float v35; // s9
  const MethodInfo *v36; // x1
  System_Action_o *v37; // x20
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418512A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, resInfo);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10);
    sub_B2C35C(&Method_OpenInfoWindowComponent_EndOpen__, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    byte_418512A = 1;
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
  sub_B2C2F8(&this->fields.resInfoList, resInfo);
  this->fields.openCallBack = callback;
  sub_B2C2F8(&this->fields.openCallBack, callback);
  OpenInfoWindowComponent__setCenter(this, v16);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v17);
  if ( !gameObject )
    goto LABEL_35;
  v18 = *((float *)gameObject + 11);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v14);
  if ( !gameObject )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  v20 = *p_resInfoList;
  if ( !*p_resInfoList )
    goto LABEL_35;
  size = v20->fields._size;
  v22 = *(float *)&localPosition;
  if ( size >= 1 )
  {
    v23 = 0LL;
    v24 = size;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v25 = v20->fields._items->m_Items[v23];
      gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v14);
      if ( !gameObject )
        break;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v25, transform, 0LL, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v20 = *p_resInfoList;
      if ( !*p_resInfoList )
        break;
      size = v20->fields._size;
      if ( (__int64)++v23 >= v24 )
        goto LABEL_21;
    }
LABEL_35:
    sub_B2C434(gameObject, v14);
  }
LABEL_21:
  v27 = (float)((float)(v18 * 0.5) * (float)size) + -5.0;
  v29 = modf(v27, &iptr);
  if ( v27 >= 0.0 )
  {
    if ( v29 != 0.5 )
    {
      v35 = floorf(v27 + 0.5);
      goto LABEL_31;
    }
    v30 = iptr;
    v31 = 1.0;
  }
  else
  {
    if ( v29 != -0.5 )
    {
      v35 = ceilf(v27 + -0.5);
      goto LABEL_31;
    }
    v30 = iptr;
    v31 = -1.0;
  }
  v32 = (__int64)v30;
  v33 = v30;
  v34 = v33 + v31;
  if ( (v32 & 1) != 0 )
    v35 = v34;
  else
    v35 = v33;
LABEL_31:
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v28);
  if ( !gameObject )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  v39.fields.z = 0.0;
  v39.fields.x = v22;
  v39.fields.y = v35;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v39, 0LL);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v36);
  if ( !gameObject )
    goto LABEL_35;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v37 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ResultInfoGrid; // x0
  __int64 v4; // x1
  int32_t childCount; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_418512D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418512D = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid
    || (ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B2C434(ResultInfoGrid, v4);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ResultInfoGrid, 0LL);
  v7 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v6);
      if ( !ResultInfoGrid )
        goto LABEL_15;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL);
      if ( !ResultInfoGrid )
        goto LABEL_15;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)ResultInfoGrid,
                                                    v7,
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
      --v7;
    }
    while ( v7 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_B2C2F8(&this->fields.resInfoList, 0LL);
  }
}


UIGrid_o *__fastcall OpenInfoWindowComponent__get_ResultInfoGrid(
        OpenInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  struct OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x8
  UnityEngine_Object_o *Grid; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct OpenInfoWindowComponent_LayoutInfo_o *v7; // x8
  UIGrid_o **p_Grid; // x8

  if ( (byte_4185129 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185129 = 1;
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
    v7 = this->fields.applyLayoutInfo;
    if ( !v7 )
      sub_B2C434(v5, v6);
    p_Grid = &v7->fields.Grid;
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

  if ( (byte_418512C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418512C = 1;
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
    sub_B2C434(WindowSprite, component);
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
    sub_B2C434(this, 0LL);
  return x->fields.InfoNum == this->fields.infoNum;
}