void __fastcall OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42ADB22 & 1) == 0 )
  {
    sub_B52984(&OpenInfoWindowComponent_TypeInfo);
    byte_42ADB22 = 1;
  }
  LODWORD(OpenInfoWindowComponent_TypeInfo->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y) = (struct OpenInfoWindowComponent_StaticFields)1123549184;
}


void __fastcall OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42ADB21 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42ADB21 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall OpenInfoWindowComponent__Close(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_42ADB1E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_OpenInfoWindowComponent_EndClose__);
    byte_42ADB1E = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  OpenInfoWindowComponent__Close_20754408(this, v4, v5);
}


void __fastcall OpenInfoWindowComponent__Close_20754408(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_42ADB1F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_OpenInfoWindowComponent_EndClose__);
    byte_42ADB1F = 1;
  }
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall OpenInfoWindowComponent__EndClose(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  OpenInfoWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
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
    sub_B52920(p_openCallBack);
    System_Action__Invoke(v3, 0LL);
  }
}


OpenInfoWindowComponent_LayoutInfo_o *__fastcall OpenInfoWindowComponent__FindLayout(
        OpenInfoWindowComponent_o *this,
        int32_t infoNum,
        const MethodInfo *method)
{
  OpenInfoWindowComponent___c__DisplayClass19_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *layoutInfos; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_42ADB20 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
    sub_B52984(&Method_System_Func_OpenInfoWindowComponent_LayoutInfo__bool___ctor__);
    sub_B52984(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
    sub_B52984(&Method_OpenInfoWindowComponent___c__DisplayClass19_0__FindLayout_b__0__);
    sub_B52984(&OpenInfoWindowComponent___c__DisplayClass19_0_TypeInfo);
    byte_42ADB20 = 1;
  }
  v5 = (OpenInfoWindowComponent___c__DisplayClass19_0_o *)sub_B52A54(OpenInfoWindowComponent___c__DisplayClass19_0_TypeInfo);
  OpenInfoWindowComponent___c__DisplayClass19_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.infoNum = infoNum;
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_OpenInfoWindowComponent___c__DisplayClass19_0__FindLayout_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_OpenInfoWindowComponent_LayoutInfo__bool___ctor__);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v9,
                                                   (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void __fastcall OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int size; // w21
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  float v20; // s8
  OpenInfoWindowComponent_c *v21; // x0
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  const MethodInfo *v23; // x1
  __int64 v24; // x23
  struct System_Collections_Generic_List_GameObject__o *v25; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  struct System_Collections_Generic_List_GameObject__o *v27; // x22
  UnityEngine_GameObject_o *v28; // x22
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v30; // x20
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADB1B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_OpenInfoWindowComponent_EndOpen__);
    sub_B52984(&OpenInfoWindowComponent_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADB1B = 1;
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
  sub_B52920(&this->fields.resInfoList);
  if ( !this->fields.resInfoList )
    goto LABEL_44;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_B52920(&this->fields.openCallBack);
  this->fields.applyLayoutInfo = OpenInfoWindowComponent__FindLayout(this, size, v15);
  sub_B52920(&this->fields.applyLayoutInfo);
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( applyLayoutInfo )
  {
    OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, this, 0LL);
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v16);
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_44;
    LODWORD(v20) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    v21 = OpenInfoWindowComponent_TypeInfo;
    if ( (BYTE3(OpenInfoWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v21 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v21->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v19);
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_44;
    v31.fields.z = 0.0;
    v31.fields.x = v20;
    v31.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v31, 0LL);
  }
  OpenInfoWindowComponent__setCenter(this, v18);
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v23);
  if ( !gameObject )
    goto LABEL_44;
  *((float *)&gameObject[1].fields + 1) = (float)gridHeight;
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v12);
  if ( !gameObject )
    goto LABEL_44;
  if ( size >= 1 )
  {
    v24 = 4LL;
    while ( 1 )
    {
      v25 = *p_resInfoList;
      if ( !*p_resInfoList )
        break;
      if ( v25->fields._size <= (unsigned int)(v24 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v25->fields._items->obj.klass + v24);
      if ( !gameObject )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v12);
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
        v27 = *p_resInfoList;
        if ( !*p_resInfoList )
          break;
        if ( v27->fields._size <= (unsigned int)(v24 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v28 = (UnityEngine_GameObject_o *)*((_QWORD *)&v27->fields._items->obj.klass + v24);
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v12);
        if ( !gameObject )
          break;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v28, transform, 0LL, 0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      }
      if ( (int)++v24 - 4 >= size )
        goto LABEL_42;
    }
LABEL_44:
    sub_B52A5C(gameObject, v12);
  }
LABEL_42:
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v12);
  if ( !gameObject )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v30 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__OpenResultInfo(
        OpenInfoWindowComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        bool isFristDisp,
        const MethodInfo *method)
{
  void *gameObject; // x0
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  float v14; // s9
  unsigned int localPosition; // s0
  struct System_Collections_Generic_List_GameObject__o *v16; // x21
  int size; // w8
  float v18; // s8
  unsigned __int64 v19; // x22
  signed __int64 v20; // x23
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_Transform_o *transform; // x0
  float v23; // s9
  const MethodInfo *v24; // x1
  double v25; // d0
  double v26; // d0
  float v27; // s1
  __int64 v28; // x8
  float v29; // s0
  float v30; // s1
  float v31; // s9
  const MethodInfo *v32; // x1
  System_Action_o *v33; // x20
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADB1A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&Method_OpenInfoWindowComponent_EndOpen__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADB1A = 1;
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
  sub_B52920(&this->fields.resInfoList);
  this->fields.openCallBack = callback;
  sub_B52920(&this->fields.openCallBack);
  OpenInfoWindowComponent__setCenter(this, v12);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v13);
  if ( !gameObject )
    goto LABEL_35;
  v14 = *((float *)gameObject + 11);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v10);
  if ( !gameObject )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  v16 = *p_resInfoList;
  if ( !*p_resInfoList )
    goto LABEL_35;
  size = v16->fields._size;
  v18 = *(float *)&localPosition;
  if ( size >= 1 )
  {
    v19 = 0LL;
    v20 = size;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v21 = v16->fields._items->m_Items[v19];
      gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v10);
      if ( !gameObject )
        break;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v21, transform, 0LL, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v16 = *p_resInfoList;
      if ( !*p_resInfoList )
        break;
      size = v16->fields._size;
      if ( (__int64)++v19 >= v20 )
        goto LABEL_21;
    }
LABEL_35:
    sub_B52A5C(gameObject, v10);
  }
LABEL_21:
  v23 = (float)((float)(v14 * 0.5) * (float)size) + -5.0;
  v25 = modf(v23, &iptr);
  if ( v23 >= 0.0 )
  {
    if ( v25 != 0.5 )
    {
      v31 = floorf(v23 + 0.5);
      goto LABEL_31;
    }
    v26 = iptr;
    v27 = 1.0;
  }
  else
  {
    if ( v25 != -0.5 )
    {
      v31 = ceilf(v23 + -0.5);
      goto LABEL_31;
    }
    v26 = iptr;
    v27 = -1.0;
  }
  v28 = (__int64)v26;
  v29 = v26;
  v30 = v29 + v27;
  if ( (v28 & 1) != 0 )
    v31 = v30;
  else
    v31 = v29;
LABEL_31:
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v24);
  if ( !gameObject )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  v35.fields.z = 0.0;
  v35.fields.x = v18;
  v35.fields.y = v31;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v35, 0LL);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v32);
  if ( !gameObject )
    goto LABEL_35;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v33 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ResultInfoGrid; // x0
  __int64 v4; // x1
  int32_t childCount; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42ADB1D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADB1D = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid
    || (ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B52A5C(ResultInfoGrid, v4);
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
    sub_B52920(&this->fields.resInfoList);
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

  if ( (byte_42ADB19 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADB19 = 1;
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
      sub_B52A5C(v5, v6);
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

  if ( (byte_42ADB1C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADB1C = 1;
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
    sub_B52A5C(transform, v5);
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
    v23 = sub_B52A88(transform);
    sub_B52A28(v23, 0LL);
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
    sub_B52A5C(WindowSprite, component);
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
    sub_B52A5C(this, 0LL);
  return x->fields.InfoNum == this->fields.infoNum;
}