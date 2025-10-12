void OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8

  if ( (byte_4C3BA5B & 1) == 0 )
  {
    sub_1C32C20(&OpenInfoWindowComponent_TypeInfo);
    byte_4C3BA5B = 1;
  }
  static_fields = OpenInfoWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_GRID_POS_Y = 0x942F80000LL;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT = 0x4307000042700000LL;
}


void OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3BA5A & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C3BA5A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void OpenInfoWindowComponent__Close(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4C3BA57 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_OpenInfoWindowComponent_EndClose__);
    byte_4C3BA57 = 1;
  }
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0);
  OpenInfoWindowComponent__Close_48546036(this, v4, v5);
}


void OpenInfoWindowComponent__Close_48546036(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4C3BA58 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_OpenInfoWindowComponent_EndClose__);
    byte_4C3BA58 = 1;
  }
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void OpenInfoWindowComponent__EndClose(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  OpenInfoWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void OpenInfoWindowComponent__EndOpen(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_openCallBack; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *openCallBack; // t1

  openCallBack = this->fields.openCallBack;
  p_openCallBack = (CGThumbnailListItem_o *)&this->fields.openCallBack;
  v5 = openCallBack;
  if ( openCallBack )
  {
    p_openCallBack->klass = 0;
    sub_1C32BC4(p_openCallBack, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


OpenInfoWindowComponent_LayoutInfo_o *OpenInfoWindowComponent__FindLayout(
        OpenInfoWindowComponent_o *this,
        int32_t infoNum,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *layoutInfos; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C3BA59 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
    sub_1C32C20(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
    sub_1C32C20(&Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__);
    sub_1C32C20(&OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
    byte_4C3BA59 = 1;
  }
  v5 = sub_1C32E6C(OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = infoNum;
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__,
    0);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v8,
                                                   (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  OpenInfoWindowComponent__clearInfoGrid(this, v4);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void OpenInfoWindowComponent__OpenLimitUpResultInfo(
        OpenInfoWindowComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        bool isFristDisp,
        int32_t gridHeight,
        bool applyTrasformation,
        const MethodInfo *method)
{
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t size; // w24
  const MethodInfo *v22; // x2
  int32_t LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO; // w1
  OpenInfoWindowComponent_c *v24; // x0
  struct OpenInfoWindowComponent_LayoutInfo_o *Layout; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v31; // x1
  UnityEngine_Transform_o *v32; // x22
  OpenInfoWindowComponent_c *v33; // x8
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  const MethodInfo *v36; // x1
  float v37; // s8
  OpenInfoWindowComponent_c *v38; // x0
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  int32_t v42; // w21
  Il2CppObject *Component_object; // x22
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x2
  Il2CppObject *Item; // x22
  const MethodInfo *v47; // x1
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v49; // x20
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BA54 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_OpenInfoWindowComponent_EndOpen__);
    sub_1C32C20(&Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__);
    sub_1C32C20(&OpenInfoWindowComponent_TypeInfo);
    byte_4C3BA54 = 1;
  }
  if ( isFristDisp )
  {
    v13 = Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C32C38(Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C32C04(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resInfoList, (int32_t)resInfo, v17, v18);
  if ( !this->fields.resInfoList )
    goto LABEL_52;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v19, v20);
  LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = size;
  if ( size >= 2 && applyTrasformation )
  {
    v24 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v24 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = v24->static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO;
  }
  Layout = OpenInfoWindowComponent__FindLayout(this, LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO, v22);
  this->fields.applyLayoutInfo = Layout;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.applyLayoutInfo, (int32_t)Layout, v26, v27);
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( !applyLayoutInfo )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v28);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_52;
    LODWORD(v37) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    v38 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v38 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v38->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v36);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_52;
    v32 = (UnityEngine_Transform_o *)gameObject;
    goto LABEL_32;
  }
  OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, (OpenInfoWindowComponent_o *)v28, v29);
  if ( applyTrasformation )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v31);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    v32 = (UnityEngine_Transform_o *)gameObject;
    v33 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v33 = OpenInfoWindowComponent_TypeInfo;
    }
    static_fields = v33->static_fields;
    if ( size >= 2 )
    {
      if ( !v32 )
        goto LABEL_52;
      LIMIT_UP_DIALOG_GRID_POS_Y = static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_HIGH;
    }
    else
    {
      if ( !v32 )
        goto LABEL_52;
      LIMIT_UP_DIALOG_GRID_POS_Y = static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT;
    }
    v37 = 0.0;
LABEL_32:
    v50.fields.z = 0.0;
    v50.fields.x = v37;
    v50.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition(v32, v50, 0);
  }
  OpenInfoWindowComponent__setCenter(this, v31);
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v39);
  if ( !gameObject )
    goto LABEL_52;
  *((float *)&gameObject[2].klass + 1) = (float)gridHeight;
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v40);
  if ( !gameObject )
    goto LABEL_52;
  if ( size >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
      if ( !*p_resInfoList )
        break;
      gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)gameObject,
                                                 v42,
                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !gameObject )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v44);
        if ( !gameObject )
          break;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0);
        if ( !Component_object )
          break;
        LimitUpResultInfoComponent__Open(
          (LimitUpResultInfoComponent_o *)Component_object,
          (UnityEngine_Transform_o *)gameObject,
          v45);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
        if ( !*p_resInfoList )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)gameObject,
                 v42,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v47);
        if ( !gameObject )
          break;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        gameObject = BaseMonoBehaviour__createObject(
                       (BaseMonoBehaviour_o *)this,
                       (UnityEngine_GameObject_o *)Item,
                       transform,
                       0,
                       0);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      }
      if ( size == ++v42 )
        goto LABEL_50;
    }
LABEL_52:
    sub_1C32E7C(gameObject);
  }
LABEL_50:
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v41);
  if ( !gameObject )
    goto LABEL_52;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  v49 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0, 0);
}


void OpenInfoWindowComponent__OpenResultInfo(
        OpenInfoWindowComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        bool isFristDisp,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  void *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  float v20; // s9
  unsigned int localPosition; // s0
  float v22; // s8
  int32_t v23; // w21
  float v24; // s9
  int v25; // w26
  Il2CppObject *Item; // x22
  const MethodInfo *v27; // x1
  UnityEngine_Transform_o *transform; // x0
  float v29; // s9
  const MethodInfo *v30; // x1
  double v31; // d0
  double v32; // d0
  float v33; // s1
  __int64 v34; // x8
  float v35; // s0
  float v36; // s1
  float v37; // s9
  const MethodInfo *v38; // x1
  System_Action_o *v39; // x20
  double iptr; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BA53 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&Method_OpenInfoWindowComponent_EndOpen__);
    sub_1C32C20(&Method_OpenInfoWindowComponent_OpenResultInfo__);
    byte_4C3BA53 = 1;
  }
  if ( isFristDisp )
  {
    v9 = Method_OpenInfoWindowComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C32C38(Method_OpenInfoWindowComponent_OpenResultInfo__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C32C04(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resInfoList, (int32_t)resInfo, v13, v14);
  this->fields.openCallBack = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v15, v16);
  OpenInfoWindowComponent__setCenter(this, v17);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v18);
  if ( !gameObject
    || (v20 = *((float *)gameObject + 13), (gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v19)) == 0)
    || (gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0),
        (gameObject = *p_resInfoList) == 0) )
  {
LABEL_32:
    sub_1C32E7C(gameObject);
  }
  v22 = *(float *)&localPosition;
  v23 = 0;
  v24 = v20 * 0.5;
  v25 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
  while ( v25 != v23 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gameObject,
             v23,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v27);
    if ( gameObject )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)this,
                     (UnityEngine_GameObject_o *)Item,
                     transform,
                     0,
                     0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = *p_resInfoList;
        ++v23;
        if ( *p_resInfoList )
          continue;
      }
    }
    goto LABEL_32;
  }
  v29 = (float)(v24 * (float)*((int *)gameObject + 6)) + -5.0;
  v31 = modf(v29, &iptr);
  if ( v29 >= 0.0 )
  {
    if ( v31 != 0.5 )
    {
      v37 = floorf(v29 + 0.5);
      goto LABEL_28;
    }
    v32 = iptr;
    v33 = 1.0;
  }
  else
  {
    if ( v31 != -0.5 )
    {
      v37 = ceilf(v29 + -0.5);
      goto LABEL_28;
    }
    v32 = iptr;
    v33 = -1.0;
  }
  v34 = (__int64)v32;
  v35 = v32;
  v36 = v35 + v33;
  if ( (v34 & 1) != 0 )
    v37 = v36;
  else
    v37 = v35;
LABEL_28:
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v30);
  if ( !gameObject )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_32;
  v41.fields.z = 0.0;
  v41.fields.x = v22;
  v41.fields.y = v37;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v41, 0);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v38);
  if ( !gameObject )
    goto LABEL_32;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  v39 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0, 0);
}


void OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ResultInfoGrid; // x0
  int32_t childCount; // w0
  const MethodInfo *v5; // x1
  int32_t v6; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3BA56 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BA56 = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid
    || (ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0)) == 0 )
  {
LABEL_14:
    sub_1C32E7C(ResultInfoGrid);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ResultInfoGrid, 0);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v5);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)ResultInfoGrid,
                                                    v6,
                                                    0);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(ResultInfoGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
      --v6;
    }
    while ( v6 >= 0 );
    this->fields.resInfoList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resInfoList, 0, v8, v9);
  }
}


UIGrid_o *OpenInfoWindowComponent__get_ResultInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  struct OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x8
  UnityEngine_Object_o *Grid; // x20
  _BOOL8 v5; // x0
  struct OpenInfoWindowComponent_LayoutInfo_o *v6; // x8
  UIGrid_o **p_Grid; // x8

  if ( (byte_4C3BA52 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BA52 = 1;
  }
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( !applyLayoutInfo )
    goto LABEL_9;
  Grid = (UnityEngine_Object_o *)applyLayoutInfo->fields.Grid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(Grid, 0, 0);
  if ( v5 )
  {
    v6 = this->fields.applyLayoutInfo;
    if ( !v6 )
      sub_1C32E7C(v5);
    p_Grid = &v6->fields.Grid;
  }
  else
  {
LABEL_9:
    p_Grid = &this->fields.resultInfoGrid;
  }
  return *p_Grid;
}


void OpenInfoWindowComponent__setCenter(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UIPanel_array *basePanelList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int klass; // w8
  float32x2_t *v8; // x21
  unsigned __int64 v9; // x22
  float *p_fields; // x23
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s1
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BA55 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BA55 = 1;
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
    sub_1C32E7C(transform);
  }
  klass = (unsigned int)transform[1].klass;
  v8 = (float32x2_t *)transform;
  v9 = 0;
  p_fields = (float *)&transform[1].fields;
  do
  {
    if ( v9 >= klass )
      goto LABEL_19;
    v11 = *(p_fields - 2);
    v12 = *(p_fields - 1);
    v13 = *p_fields;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0);
    if ( !transform )
      goto LABEL_20;
    v15.fields.x = v11;
    v15.fields.y = v12;
    v15.fields.z = v13;
    v16 = UnityEngine_Transform__InverseTransformPoint(transform, v15, 0);
    if ( v9 >= v8[3].n64_u32[0] )
      goto LABEL_19;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v16;
    p_fields += 3;
    klass = v8[3].n64_u32[0];
    ++v9;
  }
  while ( v9 != 4 );
  if ( klass <= 2 )
LABEL_19:
    sub_1C32E84(transform);
  v14 = v8[5].n64_f32[0] + (float)((float)(v8[8].n64_f32[0] - v8[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v8[4],
                                                    vmul_f32(vsub_f32(v8[7], v8[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v14;
}


void OpenInfoWindowComponent_LayoutInfo___ctor(OpenInfoWindowComponent_LayoutInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void OpenInfoWindowComponent_LayoutInfo__Apply(
        OpenInfoWindowComponent_LayoutInfo_o *this,
        OpenInfoWindowComponent_o *component,
        const MethodInfo *method)
{
  UnityEngine_Component_o *WindowSprite; // x0
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  WindowSprite = (UnityEngine_Component_o *)this->fields.WindowSprite;
  if ( !WindowSprite )
    goto LABEL_6;
  WindowSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(WindowSprite, 0);
  if ( !WindowSprite
    || (v5.fields.x = this->fields.WindowPos.fields.x,
        v5.fields.y = this->fields.WindowPos.fields.y,
        v5.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)WindowSprite, v5, 0),
        (WindowSprite = (UnityEngine_Component_o *)this->fields.WindowSprite) == 0)
    || (UIWidget__set_width((UIWidget_o *)WindowSprite, this->fields.WindowWidth, 0),
        (WindowSprite = (UnityEngine_Component_o *)this->fields.WindowSprite) == 0) )
  {
LABEL_6:
    sub_1C32E7C(WindowSprite);
  }
  UIWidget__set_height((UIWidget_o *)WindowSprite, this->fields.WindowHeight, 0);
}


void OpenInfoWindowComponent_LayoutInfo__TryAssertion(
        OpenInfoWindowComponent_LayoutInfo_o *this,
        const MethodInfo *method)
{
  ;
}


void OpenInfoWindowComponent___c__DisplayClass22_0___ctor(
        OpenInfoWindowComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool OpenInfoWindowComponent___c__DisplayClass22_0___FindLayout_b__0(
        OpenInfoWindowComponent___c__DisplayClass22_0_o *this,
        OpenInfoWindowComponent_LayoutInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.InfoNum == this->fields.infoNum;
}