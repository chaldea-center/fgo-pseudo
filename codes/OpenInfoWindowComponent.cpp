void OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8

  if ( (byte_4CCB594 & 1) == 0 )
  {
    sub_1C713B0(&OpenInfoWindowComponent_TypeInfo);
    byte_4CCB594 = 1;
  }
  static_fields = OpenInfoWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_GRID_POS_Y = 0x942F80000LL;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT = 0x4307000042700000LL;
}


void OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CCB593 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CCB593 = 1;
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

  if ( (byte_4CCB590 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_OpenInfoWindowComponent_EndClose__);
    byte_4CCB590 = 1;
  }
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0);
  OpenInfoWindowComponent__Close_49033864(this, v4, v5);
}


void OpenInfoWindowComponent__Close_49033864(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4CCB591 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_OpenInfoWindowComponent_EndClose__);
    byte_4CCB591 = 1;
  }
  v4 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
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
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void OpenInfoWindowComponent__EndOpen(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_openCallBack; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *openCallBack; // t1

  openCallBack = this->fields.openCallBack;
  p_openCallBack = (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack;
  v9 = openCallBack;
  if ( openCallBack )
  {
    p_openCallBack->klass = 0;
    sub_1C71354(p_openCallBack, 0, v2, v3, v4, v5, v6, v7);
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
  System_Collections_Generic_IEnumerable_TSource__o *layoutInfos; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CCB592 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
    sub_1C713B0(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
    sub_1C713B0(&Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__);
    sub_1C713B0(&OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
    byte_4CCB592 = 1;
  }
  v5 = sub_1C715FC(OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = infoNum;
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__,
    0);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v9,
                                                   (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t size; // w24
  const MethodInfo *v31; // x2
  int32_t LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO; // w1
  OpenInfoWindowComponent_c *v33; // x0
  struct OpenInfoWindowComponent_LayoutInfo_o *Layout; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v44; // x1
  UnityEngine_Transform_o *v45; // x22
  OpenInfoWindowComponent_c *v46; // x8
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  const MethodInfo *v49; // x1
  float v50; // s8
  OpenInfoWindowComponent_c *v51; // x0
  const MethodInfo *v52; // x1
  int32_t v53; // w21
  Il2CppObject *Component_object; // x22
  const MethodInfo *v55; // x2
  Il2CppObject *Item; // x22
  const MethodInfo *v57; // x1
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v59; // x20
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCB58D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_OpenInfoWindowComponent_EndOpen__);
    sub_1C713B0(&Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__);
    sub_1C713B0(&OpenInfoWindowComponent_TypeInfo);
    byte_4CCB58D = 1;
  }
  if ( isFristDisp )
  {
    v13 = Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C713C8(Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C71394(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.resInfoList, (int32_t)resInfo, v18, v19, v20, v21, v22, v23);
  if ( !this->fields.resInfoList )
    goto LABEL_52;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack,
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
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v33 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = v33->static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO;
  }
  Layout = OpenInfoWindowComponent__FindLayout(this, LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO, v31);
  this->fields.applyLayoutInfo = Layout;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.applyLayoutInfo,
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
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_52;
    LODWORD(v50) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    v51 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v51 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v51->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v49);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( !gameObject )
      goto LABEL_52;
    v45 = (UnityEngine_Transform_o *)gameObject;
    goto LABEL_32;
  }
  OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, (OpenInfoWindowComponent_o *)v41, v42);
  if ( applyTrasformation )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v44);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    v45 = (UnityEngine_Transform_o *)gameObject;
    v46 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v46 = OpenInfoWindowComponent_TypeInfo;
    }
    static_fields = v46->static_fields;
    if ( size >= 2 )
    {
      if ( !v45 )
        goto LABEL_52;
      LIMIT_UP_DIALOG_GRID_POS_Y = static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_HIGH;
    }
    else
    {
      if ( !v45 )
        goto LABEL_52;
      LIMIT_UP_DIALOG_GRID_POS_Y = static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT;
    }
    v50 = 0.0;
LABEL_32:
    v60.fields.z = 0.0;
    v60.fields.x = v50;
    v60.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition(v45, v60, 0);
  }
  OpenInfoWindowComponent__setCenter(this, v44);
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v52);
  if ( !gameObject )
    goto LABEL_52;
  *((float *)&gameObject[2].klass + 1) = (float)gridHeight;
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v16);
  if ( !gameObject )
    goto LABEL_52;
  if ( size >= 1 )
  {
    v53 = 0;
    while ( 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
      if ( !*p_resInfoList )
        break;
      gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)gameObject,
                                                 v53,
                                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !gameObject )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v55);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
        if ( !*p_resInfoList )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)gameObject,
                 v53,
                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v57);
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
      if ( size == ++v53 )
        goto LABEL_50;
    }
LABEL_52:
    sub_1C71608(gameObject, v16);
  }
LABEL_50:
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v16);
  if ( !gameObject )
    goto LABEL_52;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  v59 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0, 0);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  float v28; // s9
  unsigned int localPosition; // s0
  float v30; // s8
  int32_t v31; // w21
  float v32; // s9
  int v33; // w26
  Il2CppObject *Item; // x22
  const MethodInfo *v35; // x1
  UnityEngine_Transform_o *transform; // x0
  float v37; // s9
  const MethodInfo *v38; // x1
  double v39; // d0
  double v40; // d0
  float v41; // s1
  __int64 v42; // x8
  float v43; // s0
  float v44; // s1
  float v45; // s9
  const MethodInfo *v46; // x1
  System_Action_o *v47; // x20
  double iptr; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCB58C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C713B0(&Method_OpenInfoWindowComponent_EndOpen__);
    sub_1C713B0(&Method_OpenInfoWindowComponent_OpenResultInfo__);
    byte_4CCB58C = 1;
  }
  if ( isFristDisp )
  {
    v9 = Method_OpenInfoWindowComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C713C8(Method_OpenInfoWindowComponent_OpenResultInfo__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C71394(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.resInfoList, (int32_t)resInfo, v14, v15, v16, v17, v18, v19);
  this->fields.openCallBack = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack,
    (int32_t)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  OpenInfoWindowComponent__setCenter(this, v26);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v27);
  if ( !gameObject
    || (v28 = *((float *)gameObject + 13), (gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v12)) == 0)
    || (gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0),
        (gameObject = *p_resInfoList) == 0) )
  {
LABEL_32:
    sub_1C71608(gameObject, v12);
  }
  v30 = *(float *)&localPosition;
  v31 = 0;
  v32 = v28 * 0.5;
  v33 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
  while ( v33 != v31 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gameObject,
             v31,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v35);
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
        ++v31;
        if ( *p_resInfoList )
          continue;
      }
    }
    goto LABEL_32;
  }
  v37 = (float)(v32 * (float)*((int *)gameObject + 6)) + -5.0;
  v39 = modf(v37, &iptr);
  if ( v37 >= 0.0 )
  {
    if ( v39 != 0.5 )
    {
      v45 = floorf(v37 + 0.5);
      goto LABEL_28;
    }
    v40 = iptr;
    v41 = 1.0;
  }
  else
  {
    if ( v39 != -0.5 )
    {
      v45 = ceilf(v37 + -0.5);
      goto LABEL_28;
    }
    v40 = iptr;
    v41 = -1.0;
  }
  v42 = (__int64)v40;
  v43 = v40;
  v44 = v43 + v41;
  if ( (v42 & 1) != 0 )
    v45 = v44;
  else
    v45 = v43;
LABEL_28:
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v38);
  if ( !gameObject )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_32;
  v49.fields.z = 0.0;
  v49.fields.x = v30;
  v49.fields.y = v45;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v49, 0);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v46);
  if ( !gameObject )
    goto LABEL_32;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  v47 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0, 0);
}


void OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ResultInfoGrid; // x0
  __int64 v4; // x1
  int32_t childCount; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CCB58F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB58F = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid
    || (ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0)) == 0 )
  {
LABEL_14:
    sub_1C71608(ResultInfoGrid, v4);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ResultInfoGrid, 0);
  v7 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v6);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)ResultInfoGrid,
                                                    v7,
                                                    0);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(ResultInfoGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(gameObject, 0);
      --v7;
    }
    while ( v7 >= 0 );
    this->fields.resInfoList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.resInfoList, 0, v9, v10, v11, v12, v13, v14);
  }
}


UIGrid_o *OpenInfoWindowComponent__get_ResultInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  struct OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x8
  UnityEngine_Object_o *Grid; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct OpenInfoWindowComponent_LayoutInfo_o *v7; // x8
  UIGrid_o **p_Grid; // x8

  if ( (byte_4CCB58B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB58B = 1;
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
    v7 = this->fields.applyLayoutInfo;
    if ( !v7 )
      sub_1C71608(v5, v6);
    p_Grid = &v7->fields.Grid;
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
  __int64 v5; // x1
  struct UIPanel_array *basePanelList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int klass; // w8
  float32x2_t *v9; // x21
  unsigned __int64 v10; // x22
  float *p_fields; // x23
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s1
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCB58E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB58E = 1;
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
    sub_1C71608(transform, v5);
  }
  klass = (unsigned int)transform[1].klass;
  v9 = (float32x2_t *)transform;
  v10 = 0;
  p_fields = (float *)&transform[1].fields;
  do
  {
    if ( v10 >= klass )
      goto LABEL_19;
    v12 = *(p_fields - 2);
    v13 = *(p_fields - 1);
    v14 = *p_fields;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0);
    if ( !transform )
      goto LABEL_20;
    v16.fields.x = v12;
    v16.fields.y = v13;
    v16.fields.z = v14;
    v17 = UnityEngine_Transform__InverseTransformPoint(transform, v16, 0);
    if ( v10 >= v9[3].n64_u32[0] )
      goto LABEL_19;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v17;
    p_fields += 3;
    klass = v9[3].n64_u32[0];
    ++v10;
  }
  while ( v10 != 4 );
  if ( klass <= 2 )
LABEL_19:
    sub_1C71610(transform);
  v15 = v9[5].n64_f32[0] + (float)((float)(v9[8].n64_f32[0] - v9[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v9[4],
                                                    vmul_f32(vsub_f32(v9[7], v9[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v15;
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
    sub_1C71608(WindowSprite, component);
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
    sub_1C71608(this, 0);
  return x->fields.InfoNum == this->fields.infoNum;
}