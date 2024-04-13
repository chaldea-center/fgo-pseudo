void __fastcall OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E62B9 & 1) == 0 )
  {
    sub_B5D5C4(&OpenInfoWindowComponent_TypeInfo, v1, v2, v3);
    byte_42E62B9 = 1;
  }
  LODWORD(OpenInfoWindowComponent_TypeInfo->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y) = (struct OpenInfoWindowComponent_StaticFields)1123549184;
}


void __fastcall OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E62B8 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62B8 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall OpenInfoWindowComponent__Close(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x0
  System_Action_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42E62B5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_OpenInfoWindowComponent_EndClose__, v5, v6, v7);
    byte_42E62B5 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  OpenInfoWindowComponent__Close_20700672(this, v9, v10);
}


void __fastcall OpenInfoWindowComponent__Close_20700672(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E62B6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_OpenInfoWindowComponent_EndClose__, v5, v6, v7);
    byte_42E62B6 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall OpenInfoWindowComponent__EndClose(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  OpenInfoWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
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
    sub_B5D560(p_openCallBack);
    System_Action__Invoke(v3, 0LL);
  }
}


OpenInfoWindowComponent_LayoutInfo_o *__fastcall OpenInfoWindowComponent__FindLayout(
        OpenInfoWindowComponent_o *this,
        int32_t infoNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  OpenInfoWindowComponent___c__DisplayClass19_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *layoutInfos; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42E62B7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___,
      infoNum,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_OpenInfoWindowComponent_LayoutInfo__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_OpenInfoWindowComponent___c__DisplayClass19_0__FindLayout_b__0__, v12, v13, v14);
    sub_B5D5C4(&OpenInfoWindowComponent___c__DisplayClass19_0_TypeInfo, v15, v16, v17);
    byte_42E62B7 = 1;
  }
  v18 = (OpenInfoWindowComponent___c__DisplayClass19_0_o *)sub_B5D694(OpenInfoWindowComponent___c__DisplayClass19_0_TypeInfo);
  OpenInfoWindowComponent___c__DisplayClass19_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.infoNum = infoNum;
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_OpenInfoWindowComponent___c__DisplayClass19_0__FindLayout_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_OpenInfoWindowComponent_LayoutInfo__bool___ctor__);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v22,
                                                   (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void __fastcall OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  OpenInfoWindowComponent__clearInfoGrid(this, v5);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OpenInfoWindowComponent__OpenLimitUpResultInfo(
        OpenInfoWindowComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        bool isFristDisp,
        int32_t gridHeight,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v33; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int size; // w21
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  float v41; // s8
  OpenInfoWindowComponent_c *v42; // x0
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  const MethodInfo *v44; // x1
  __int64 v45; // x23
  struct System_Collections_Generic_List_GameObject__o *v46; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  struct System_Collections_Generic_List_GameObject__o *v48; // x22
  UnityEngine_GameObject_o *v49; // x22
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v51; // x20
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E62B2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)resInfo, (_DWORD)callback, isFristDisp);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_OpenInfoWindowComponent_EndOpen__, v23, v24, v25);
    sub_B5D5C4(&OpenInfoWindowComponent_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SoundManager_TypeInfo, v29, v30, v31);
    byte_42E62B2 = 1;
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
  sub_B5D560(&this->fields.resInfoList);
  if ( !this->fields.resInfoList )
    goto LABEL_44;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_B5D560(&this->fields.openCallBack);
  this->fields.applyLayoutInfo = OpenInfoWindowComponent__FindLayout(this, size, v36);
  sub_B5D560(&this->fields.applyLayoutInfo);
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( applyLayoutInfo )
  {
    OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, this, 0LL);
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v37);
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_44;
    LODWORD(v41) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    v42 = OpenInfoWindowComponent_TypeInfo;
    if ( (BYTE3(OpenInfoWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v42 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v42->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v40);
    if ( !gameObject )
      goto LABEL_44;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_44;
    v52.fields.z = 0.0;
    v52.fields.x = v41;
    v52.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v52, 0LL);
  }
  OpenInfoWindowComponent__setCenter(this, v39);
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v44);
  if ( !gameObject )
    goto LABEL_44;
  *((float *)&gameObject[1].fields + 1) = (float)gridHeight;
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v33);
  if ( !gameObject )
    goto LABEL_44;
  if ( size >= 1 )
  {
    v45 = 4LL;
    while ( 1 )
    {
      v46 = *p_resInfoList;
      if ( !*p_resInfoList )
        break;
      if ( v46->fields._size <= (unsigned int)(v45 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v46->fields._items->obj.klass + v45);
      if ( !gameObject )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v33);
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
        v48 = *p_resInfoList;
        if ( !*p_resInfoList )
          break;
        if ( v48->fields._size <= (unsigned int)(v45 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v49 = (UnityEngine_GameObject_o *)*((_QWORD *)&v48->fields._items->obj.klass + v45);
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v33);
        if ( !gameObject )
          break;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v49, transform, 0LL, 0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      }
      if ( (int)++v45 - 4 >= size )
        goto LABEL_42;
    }
LABEL_44:
    sub_B5D69C(gameObject, v33);
  }
LABEL_42:
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v33);
  if ( !gameObject )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v51 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OpenInfoWindowComponent__OpenResultInfo(
        OpenInfoWindowComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        bool isFristDisp,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  void *gameObject; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  float v26; // s9
  unsigned int localPosition; // s0
  struct System_Collections_Generic_List_GameObject__o *v28; // x21
  int size; // w8
  float v30; // s8
  unsigned __int64 v31; // x22
  signed __int64 v32; // x23
  UnityEngine_GameObject_o *v33; // x21
  UnityEngine_Transform_o *transform; // x0
  float v35; // s9
  const MethodInfo *v36; // x1
  double v37; // d0
  double v38; // d0
  float v39; // s1
  __int64 v40; // x8
  float v41; // s0
  float v42; // s1
  float v43; // s9
  const MethodInfo *v44; // x1
  System_Action_o *v45; // x20
  double iptr; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E62B1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)resInfo, (_DWORD)callback, isFristDisp);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_OpenInfoWindowComponent_EndOpen__, v15, v16, v17);
    sub_B5D5C4(&SoundManager_TypeInfo, v18, v19, v20);
    byte_42E62B1 = 1;
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
  sub_B5D560(&this->fields.resInfoList);
  this->fields.openCallBack = callback;
  sub_B5D560(&this->fields.openCallBack);
  OpenInfoWindowComponent__setCenter(this, v24);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v25);
  if ( !gameObject )
    goto LABEL_35;
  v26 = *((float *)gameObject + 11);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v22);
  if ( !gameObject )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  v28 = *p_resInfoList;
  if ( !*p_resInfoList )
    goto LABEL_35;
  size = v28->fields._size;
  v30 = *(float *)&localPosition;
  if ( size >= 1 )
  {
    v31 = 0LL;
    v32 = size;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v33 = v28->fields._items->m_Items[v31];
      gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v22);
      if ( !gameObject )
        break;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v33, transform, 0LL, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v28 = *p_resInfoList;
      if ( !*p_resInfoList )
        break;
      size = v28->fields._size;
      if ( (__int64)++v31 >= v32 )
        goto LABEL_21;
    }
LABEL_35:
    sub_B5D69C(gameObject, v22);
  }
LABEL_21:
  v35 = (float)((float)(v26 * 0.5) * (float)size) + -5.0;
  v37 = modf(v35, &iptr);
  if ( v35 >= 0.0 )
  {
    if ( v37 != 0.5 )
    {
      v43 = floorf(v35 + 0.5);
      goto LABEL_31;
    }
    v38 = iptr;
    v39 = 1.0;
  }
  else
  {
    if ( v37 != -0.5 )
    {
      v43 = ceilf(v35 + -0.5);
      goto LABEL_31;
    }
    v38 = iptr;
    v39 = -1.0;
  }
  v40 = (__int64)v38;
  v41 = v38;
  v42 = v41 + v39;
  if ( (v40 & 1) != 0 )
    v43 = v42;
  else
    v43 = v41;
LABEL_31:
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v36);
  if ( !gameObject )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  v47.fields.z = 0.0;
  v47.fields.x = v30;
  v47.fields.y = v43;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v47, 0LL);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v44);
  if ( !gameObject )
    goto LABEL_35;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *ResultInfoGrid; // x0
  __int64 v6; // x1
  int32_t childCount; // w0
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42E62B4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62B4 = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid
    || (ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(ResultInfoGrid, v6);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ResultInfoGrid, 0LL);
  v9 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v8);
      if ( !ResultInfoGrid )
        goto LABEL_15;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL);
      if ( !ResultInfoGrid )
        goto LABEL_15;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)ResultInfoGrid,
                                                    v9,
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
      --v9;
    }
    while ( v9 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_B5D560(&this->fields.resInfoList);
  }
}


UIGrid_o *__fastcall OpenInfoWindowComponent__get_ResultInfoGrid(
        OpenInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x8
  UnityEngine_Object_o *Grid; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct OpenInfoWindowComponent_LayoutInfo_o *v9; // x8
  UIGrid_o **p_Grid; // x8

  if ( (byte_42E62B0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62B0 = 1;
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
  v7 = UnityEngine_Object__op_Inequality(Grid, 0LL, 0LL);
  if ( v7 )
  {
    v9 = this->fields.applyLayoutInfo;
    if ( !v9 )
      sub_B5D69C(v7, v8);
    p_Grid = &v9->fields.Grid;
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

  if ( (byte_42E62B3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62B3 = 1;
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
    sub_B5D69C(WindowSprite, component);
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
    sub_B5D69C(this, 0LL);
  return x->fields.InfoNum == this->fields.infoNum;
}