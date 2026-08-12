void OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8

  if ( (byte_596A183 & 1) == 0 )
  {
    sub_2213A60(&OpenInfoWindowComponent_TypeInfo);
    byte_596A183 = 1;
  }
  static_fields = OpenInfoWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_GRID_POS_Y = 0x942F80000LL;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT = 0x4307000042700000LL;
}


void OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A182 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A182 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void OpenInfoWindowComponent__Close(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596A17F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_OpenInfoWindowComponent_EndClose__);
    byte_596A17F = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0);
  OpenInfoWindowComponent__Close_37600196(this, v4, v5);
}


void OpenInfoWindowComponent__Close_37600196(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_596A180 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_OpenInfoWindowComponent_EndClose__);
    byte_596A180 = 1;
  }
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void OpenInfoWindowComponent__EndClose(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  OpenInfoWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void OpenInfoWindowComponent__EndOpen(OpenInfoWindowComponent_o *this, const MethodInfo *method)
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


OpenInfoWindowComponent_LayoutInfo_o *OpenInfoWindowComponent__FindLayout(
        OpenInfoWindowComponent_o *this,
        int32_t infoNum,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *layoutInfos; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_596A181 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
    sub_2213A60(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
    sub_2213A60(&Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__);
    sub_2213A60(&OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
    byte_596A181 = 1;
  }
  v5 = sub_2213CCC(OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  *(_DWORD *)(v5 + 16) = infoNum;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__,
    0);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v9,
                                                   (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  OpenInfoWindowComponent__clearInfoGrid(this, v5);
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
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t size; // w24
  const MethodInfo *v31; // x2
  int32_t LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO; // w1
  OpenInfoWindowComponent_c *v33; // x0
  struct OpenInfoWindowComponent_LayoutInfo_o *Layout; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v44; // x1
  __int64 v45; // x2
  UnityEngine_Transform_o *v46; // x22
  float v47; // s8
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  const MethodInfo *v49; // x1
  __int64 v50; // x2
  OpenInfoWindowComponent_c *v51; // x0
  __int64 v52; // x2
  const MethodInfo *v53; // x1
  int32_t v54; // w21
  __int64 v55; // x1
  __int64 v56; // x2
  Il2CppObject *Component_object; // x22
  const MethodInfo *v58; // x2
  Il2CppObject *Item; // x22
  const MethodInfo *v60; // x1
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v62; // x20
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A17C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_OpenInfoWindowComponent_EndOpen__);
    sub_2213A60(&Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__);
    sub_2213A60(&OpenInfoWindowComponent_TypeInfo);
    byte_596A17C = 1;
  }
  if ( isFristDisp )
  {
    v13 = Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_2213A78(Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__);
    v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resInfoList,
    (int32_t)resInfo,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !this->fields.resInfoList )
    goto LABEL_54;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack,
    (int32_t)callback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = size;
  if ( size >= 2 && applyTrasformation )
  {
    v33 = OpenInfoWindowComponent_TypeInfo;
    if ( !*(&OpenInfoWindowComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo, (unsigned int)size, v31);
      v33 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = v33->static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO;
  }
  Layout = OpenInfoWindowComponent__FindLayout(this, LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO, v31);
  this->fields.applyLayoutInfo = Layout;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.applyLayoutInfo,
    (int32_t)Layout,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( !applyLayoutInfo )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v41);
    if ( !gameObject )
      goto LABEL_54;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_54;
    LODWORD(v47) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    v51 = OpenInfoWindowComponent_TypeInfo;
    if ( !*(&OpenInfoWindowComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo, v49, v50);
      v51 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v51->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v49);
    if ( !gameObject )
      goto LABEL_54;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_54;
    v46 = (UnityEngine_Transform_o *)gameObject;
    goto LABEL_34;
  }
  OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, (OpenInfoWindowComponent_o *)v41, v42);
  if ( applyTrasformation )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v44);
    if ( size < 2 )
    {
      if ( !gameObject )
        goto LABEL_54;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
      v46 = (UnityEngine_Transform_o *)gameObject;
      if ( !*(&OpenInfoWindowComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo, v16, v52);
      if ( !v46 )
        goto LABEL_54;
      v47 = 0.0;
      LIMIT_UP_DIALOG_GRID_POS_Y = OpenInfoWindowComponent_TypeInfo->static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_54;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
      v46 = (UnityEngine_Transform_o *)gameObject;
      if ( !*(&OpenInfoWindowComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo, v16, v45);
      if ( !v46 )
        goto LABEL_54;
      v47 = 0.0;
      LIMIT_UP_DIALOG_GRID_POS_Y = OpenInfoWindowComponent_TypeInfo->static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_HIGH;
    }
LABEL_34:
    v63.fields.z = 0.0;
    v63.fields.x = v47;
    v63.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition(v46, v63, 0);
  }
  OpenInfoWindowComponent__setCenter(this, v44);
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v53);
  if ( !gameObject )
    goto LABEL_54;
  *((float *)&gameObject[2].klass + 1) = (float)gridHeight;
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v16);
  if ( !gameObject )
    goto LABEL_54;
  if ( size >= 1 )
  {
    v54 = 0;
    while ( 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
      if ( !*p_resInfoList )
        break;
      gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)gameObject,
                                                 v54,
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !gameObject )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v16);
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
          v58);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
        if ( !*p_resInfoList )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)gameObject,
                 v54,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v60);
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
      if ( size == ++v54 )
        goto LABEL_52;
    }
LABEL_54:
    sub_2213CDC(gameObject, v16);
  }
LABEL_52:
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v16);
  if ( !gameObject )
    goto LABEL_54;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  v62 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0, 0);
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
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  float v28; // s9
  struct System_Collections_Generic_List_GameObject__o *v29; // x8
  float v30; // s8
  int size; // w23
  int32_t i; // w21
  Il2CppObject *Item; // x22
  const MethodInfo *v34; // x1
  UnityEngine_Transform_o *transform; // x0
  float v36; // s9
  const MethodInfo *v37; // x1
  double v38; // d0
  double v39; // d0
  float v40; // s2
  float v41; // s1
  float v42; // s9
  const MethodInfo *v43; // x1
  System_Action_o *v44; // x20
  unsigned int localPosition; // s0
  double iptr; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A17B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&Method_OpenInfoWindowComponent_EndOpen__);
    sub_2213A60(&Method_OpenInfoWindowComponent_OpenResultInfo__);
    byte_596A17B = 1;
  }
  if ( isFristDisp )
  {
    v9 = Method_OpenInfoWindowComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_2213A78(Method_OpenInfoWindowComponent_OpenResultInfo__);
    v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resInfoList,
    (int32_t)resInfo,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.openCallBack = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack,
    (int32_t)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  OpenInfoWindowComponent__setCenter(this, v26);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v27);
  if ( !gameObject )
    goto LABEL_33;
  v28 = *((float *)gameObject + 13);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v12);
  if ( !gameObject )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_33;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  v29 = *p_resInfoList;
  if ( !*p_resInfoList )
    goto LABEL_33;
  v30 = *(float *)&localPosition;
  size = v29->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      gameObject = *p_resInfoList;
      if ( !*p_resInfoList )
        goto LABEL_33;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)gameObject,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v34);
      if ( !gameObject )
        goto LABEL_33;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)this,
                     (UnityEngine_GameObject_o *)Item,
                     transform,
                     0,
                     0);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    }
    v29 = *p_resInfoList;
    if ( !*p_resInfoList )
LABEL_33:
      sub_2213CDC(gameObject, v12);
  }
  v36 = (float)((float)(v28 * 0.5) * (float)v29->fields._size) + -5.0;
  v38 = modf(v36, &iptr);
  if ( v36 >= 0.0 )
  {
    if ( v38 != 0.5 )
    {
      v42 = floorf(v36 + 0.5);
      goto LABEL_29;
    }
    v39 = iptr;
    v40 = 1.0;
  }
  else
  {
    if ( v38 != -0.5 )
    {
      v42 = ceilf(v36 + -0.5);
      goto LABEL_29;
    }
    v39 = iptr;
    v40 = -1.0;
  }
  if ( ((__int64)v39 & 1) != 0 )
  {
    v41 = v39;
    v42 = v41 + v40;
  }
  else
  {
    v42 = v39;
  }
LABEL_29:
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v37);
  if ( !gameObject )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_33;
  v47.fields.z = 0.0;
  v47.fields.x = v30;
  v47.fields.y = v42;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v47, 0);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v43);
  if ( !gameObject )
    goto LABEL_33;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  v44 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0, 0);
}


void OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ResultInfoGrid; // x0
  __int64 v4; // x1
  int32_t childCount; // w0
  const MethodInfo *v6; // x1
  unsigned int v7; // w22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A17E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A17E = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid
    || (ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0)) == 0 )
  {
LABEL_15:
    sub_2213CDC(ResultInfoGrid, v4);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ResultInfoGrid, 0);
  if ( childCount >= 1 )
  {
    v7 = childCount + 1;
    do
    {
      ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v6);
      if ( !ResultInfoGrid )
        goto LABEL_15;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0);
      if ( !ResultInfoGrid )
        goto LABEL_15;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)ResultInfoGrid,
                                                    v7 - 2,
                                                    0);
      if ( !ResultInfoGrid )
        goto LABEL_15;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(ResultInfoGrid, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      --v7;
    }
    while ( v7 > 1 );
    this->fields.resInfoList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resInfoList, 0, v11, v12, v13, v14, v15, v16);
  }
}


UIGrid_o *OpenInfoWindowComponent__get_ResultInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x8
  UnityEngine_Object_o *Grid; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct OpenInfoWindowComponent_LayoutInfo_o *v8; // x8
  UIGrid_o **p_Grid; // x8

  if ( (byte_596A17A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A17A = 1;
  }
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( !applyLayoutInfo )
    goto LABEL_9;
  Grid = (UnityEngine_Object_o *)applyLayoutInfo->fields.Grid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = UnityEngine_Object__op_Inequality(Grid, 0, 0);
  if ( v6 )
  {
    v8 = this->fields.applyLayoutInfo;
    if ( !v8 )
      sub_2213CDC(v6, v7);
    p_Grid = &v8->fields.Grid;
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
  UnityEngine_Vector3_o v17; // 0:kr00_12.12
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A17D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A17D = 1;
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
    v18.fields.x = v12;
    v18.fields.y = v13;
    v18.fields.z = v14;
    v17 = UnityEngine_Transform__InverseTransformPoint(transform, v18, 0);
    if ( v10 >= v9[3].n64_u32[0] )
      goto LABEL_19;
    ++v10;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v17;
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
    || (v5.fields.z = 0.0,
        v5.fields.x = this->fields.WindowPos.fields.x,
        v5.fields.y = this->fields.WindowPos.fields.y,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)WindowSprite, v5, 0),
        (WindowSprite = (UnityEngine_Component_o *)this->fields.WindowSprite) == 0)
    || (UIWidget__set_width((UIWidget_o *)WindowSprite, this->fields.WindowWidth, 0),
        (WindowSprite = (UnityEngine_Component_o *)this->fields.WindowSprite) == 0) )
  {
LABEL_6:
    sub_2213CDC(WindowSprite, component);
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
    sub_2213CDC(this, 0);
  return x->fields.InfoNum == this->fields.infoNum;
}