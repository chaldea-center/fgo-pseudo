void __fastcall OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8

  if ( (byte_4A5222E & 1) == 0 )
  {
    sub_1B863B8(&OpenInfoWindowComponent_TypeInfo, v1);
    byte_4A5222E = 1;
  }
  static_fields = OpenInfoWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_GRID_POS_Y = 0x942F80000LL;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT = 0x4307000042700000LL;
}


void __fastcall OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5222D & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A5222D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall OpenInfoWindowComponent__Close(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x0
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4A5222A & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_OpenInfoWindowComponent_EndClose__, v3);
    byte_4A5222A = 1;
  }
  v4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  OpenInfoWindowComponent__Close_46416788(this, v5, v6);
}


void __fastcall OpenInfoWindowComponent__Close_46416788(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4A5222B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_OpenInfoWindowComponent_EndClose__, v4);
    byte_4A5222B = 1;
  }
  v5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
    sub_1B86614(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__EndOpen(OpenInfoWindowComponent_o *this, const MethodInfo *method)
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
    p_openCallBack->klass = 0LL;
    sub_1B8635C(p_openCallBack, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *layoutInfos; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4A5222C & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___,
      *(_QWORD *)&infoNum);
    sub_1B863B8(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo, v5);
    sub_1B863B8(&Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__, v6);
    sub_1B863B8(&OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo, v7);
    byte_4A5222C = 1;
  }
  v8 = sub_1B86604(OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B86614(v9, v10);
  *(_DWORD *)(v8 + 16) = infoNum;
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  v12 = (System_Func_object__bool__o *)sub_1B86604(System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__,
    0LL);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__49893388(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v12,
                                                   (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void __fastcall OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B86614(0LL, v4);
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
        bool applyTrasformation,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t size; // w24
  const MethodInfo *v30; // x2
  int32_t LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO; // w1
  OpenInfoWindowComponent_c *v32; // x0
  struct OpenInfoWindowComponent_LayoutInfo_o *Layout; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v39; // x1
  UnityEngine_Transform_o *v40; // x22
  OpenInfoWindowComponent_c *v41; // x8
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  const MethodInfo *v44; // x1
  float v45; // s8
  OpenInfoWindowComponent_c *v46; // x0
  const MethodInfo *v47; // x1
  int32_t v48; // w21
  Il2CppObject *Component_object; // x22
  const MethodInfo *v50; // x2
  Il2CppObject *Item; // x22
  const MethodInfo *v52; // x1
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v54; // x20
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A52227 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, resInfo);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B863B8(&Method_OpenInfoWindowComponent_EndOpen__, v17);
    sub_1B863B8(&Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__, v18);
    sub_1B863B8(&OpenInfoWindowComponent_TypeInfo, v19);
    byte_4A52227 = 1;
  }
  if ( isFristDisp )
  {
    v20 = Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1B863D0(Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__);
    v21 = (System_Reflection_MethodBase_o *)sub_1B8639C(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 6, 0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resInfoList, (int32_t)resInfo, v25, v26);
  if ( !this->fields.resInfoList )
    goto LABEL_52;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v27, v28);
  LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = size;
  if ( size >= 2 && applyTrasformation )
  {
    v32 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v32 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = v32->static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO;
  }
  Layout = OpenInfoWindowComponent__FindLayout(this, LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO, v30);
  this->fields.applyLayoutInfo = Layout;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.applyLayoutInfo, (int32_t)Layout, v34, v35);
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( !applyLayoutInfo )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v36);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_52;
    LODWORD(v45) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    v46 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v46 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v46->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v44);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_52;
    v40 = (UnityEngine_Transform_o *)gameObject;
    goto LABEL_32;
  }
  OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, (OpenInfoWindowComponent_o *)v36, v37);
  if ( applyTrasformation )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v39);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    v40 = (UnityEngine_Transform_o *)gameObject;
    v41 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v41 = OpenInfoWindowComponent_TypeInfo;
    }
    static_fields = v41->static_fields;
    if ( size >= 2 )
    {
      if ( !v40 )
        goto LABEL_52;
      LIMIT_UP_DIALOG_GRID_POS_Y = static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_HIGH;
    }
    else
    {
      if ( !v40 )
        goto LABEL_52;
      LIMIT_UP_DIALOG_GRID_POS_Y = static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT;
    }
    v45 = 0.0;
LABEL_32:
    v55.fields.z = 0.0;
    v55.fields.x = v45;
    v55.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition(v40, v55, 0LL);
  }
  OpenInfoWindowComponent__setCenter(this, v39);
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v47);
  if ( !gameObject )
    goto LABEL_52;
  *((float *)&gameObject[2].klass + 1) = (float)gridHeight;
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v23);
  if ( !gameObject )
    goto LABEL_52;
  if ( size >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
      if ( !*p_resInfoList )
        break;
      gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)gameObject,
                                                 v48,
                                                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !gameObject )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v23);
        if ( !gameObject )
          break;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0LL);
        if ( !Component_object )
          break;
        LimitUpResultInfoComponent__Open(
          (LimitUpResultInfoComponent_o *)Component_object,
          (UnityEngine_Transform_o *)gameObject,
          v50);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
        if ( !*p_resInfoList )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)gameObject,
                 v48,
                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v52);
        if ( !gameObject )
          break;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject(
                       (BaseMonoBehaviour_o *)this,
                       (UnityEngine_GameObject_o *)Item,
                       transform,
                       0LL,
                       0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      }
      if ( size == ++v48 )
        goto LABEL_50;
    }
LABEL_52:
    sub_1B86614(gameObject, v23);
  }
LABEL_50:
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v23);
  if ( !gameObject )
    goto LABEL_52;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v54 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  void *gameObject; // x0
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  float v24; // s9
  unsigned int localPosition; // s0
  float v26; // s8
  int32_t v27; // w21
  float v28; // s9
  int v29; // w26
  Il2CppObject *Item; // x22
  const MethodInfo *v31; // x1
  UnityEngine_Transform_o *transform; // x0
  float v33; // s9
  const MethodInfo *v34; // x1
  double v35; // d0
  double v36; // d0
  float v37; // s1
  __int64 v38; // x8
  float v39; // s0
  float v40; // s1
  float v41; // s9
  const MethodInfo *v42; // x1
  System_Action_o *v43; // x20
  double iptr; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A52226 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, resInfo);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10);
    sub_1B863B8(&Method_OpenInfoWindowComponent_EndOpen__, v11);
    sub_1B863B8(&Method_OpenInfoWindowComponent_OpenResultInfo__, v12);
    byte_4A52226 = 1;
  }
  if ( isFristDisp )
  {
    v13 = Method_OpenInfoWindowComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1B863D0(Method_OpenInfoWindowComponent_OpenResultInfo__);
    v14 = (System_Reflection_MethodBase_o *)sub_1B8639C(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resInfoList, (int32_t)resInfo, v18, v19);
  this->fields.openCallBack = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.openCallBack, (int32_t)callback, v20, v21);
  OpenInfoWindowComponent__setCenter(this, v22);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v23);
  if ( !gameObject
    || (v24 = *((float *)gameObject + 13), (gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v16)) == 0LL)
    || (gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)gameObject,
                                        0LL),
        (gameObject = *p_resInfoList) == 0LL) )
  {
LABEL_32:
    sub_1B86614(gameObject, v16);
  }
  v26 = *(float *)&localPosition;
  v27 = 0;
  v28 = v24 * 0.5;
  v29 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
  while ( v29 != v27 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gameObject,
             v27,
             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v31);
    if ( gameObject )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)this,
                     (UnityEngine_GameObject_o *)Item,
                     transform,
                     0LL,
                     0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = *p_resInfoList;
        ++v27;
        if ( *p_resInfoList )
          continue;
      }
    }
    goto LABEL_32;
  }
  v33 = (float)(v28 * (float)*((int *)gameObject + 6)) + -5.0;
  v35 = modf(v33, &iptr);
  if ( v33 >= 0.0 )
  {
    if ( v35 != 0.5 )
    {
      v41 = floorf(v33 + 0.5);
      goto LABEL_28;
    }
    v36 = iptr;
    v37 = 1.0;
  }
  else
  {
    if ( v35 != -0.5 )
    {
      v41 = ceilf(v33 + -0.5);
      goto LABEL_28;
    }
    v36 = iptr;
    v37 = -1.0;
  }
  v38 = (__int64)v36;
  v39 = v36;
  v40 = v39 + v37;
  if ( (v38 & 1) != 0 )
    v41 = v40;
  else
    v41 = v39;
LABEL_28:
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v34);
  if ( !gameObject )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  v45.fields.z = 0.0;
  v45.fields.x = v26;
  v45.fields.y = v41;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v45, 0LL);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v42);
  if ( !gameObject )
    goto LABEL_32;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v43 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ResultInfoGrid; // x0
  __int64 v4; // x1
  int32_t childCount; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A52229 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A52229 = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid
    || (ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1B86614(ResultInfoGrid, v4);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ResultInfoGrid, 0LL);
  v7 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v6);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)ResultInfoGrid,
                                                    v7,
                                                    0LL);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(ResultInfoGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
      --v7;
    }
    while ( v7 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.resInfoList, 0, v9, v10);
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

  if ( (byte_4A52225 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A52225 = 1;
  }
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( !applyLayoutInfo )
    goto LABEL_9;
  Grid = (UnityEngine_Object_o *)applyLayoutInfo->fields.Grid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(Grid, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.applyLayoutInfo;
    if ( !v7 )
      sub_1B86614(v5, v6);
    p_Grid = &v7->fields.Grid;
  }
  else
  {
LABEL_9:
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
  unsigned __int64 v10; // x22
  float *p_m_CachedPtr; // x23
  float v12; // s8
  float v13; // s9
  float v14; // s10
  int v15; // s0
  int v16; // s1
  int v17; // s2
  float v18; // s1
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A52228 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A52228 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          goto LABEL_19;
        basePanel = (UnityEngine_Object_o *)basePanelList->m_Items[0];
      }
    }
  }
  if ( !basePanel
    || (transform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))basePanel->klass[1]._1.klass)(
                                                 basePanel,
                                                 basePanel->klass[1]._1.fields)) == 0LL )
  {
LABEL_20:
    sub_1B86614(transform, v5);
  }
  klass = (unsigned int)transform[1].klass;
  v9 = (float32x2_t *)transform;
  v10 = 0LL;
  p_m_CachedPtr = (float *)&transform[1].fields.m_CachedPtr;
  do
  {
    if ( v10 >= klass )
      goto LABEL_19;
    v12 = *(p_m_CachedPtr - 2);
    v13 = *(p_m_CachedPtr - 1);
    v14 = *p_m_CachedPtr;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0LL);
    if ( !transform )
      goto LABEL_20;
    v19.fields.x = v12;
    v19.fields.y = v13;
    v19.fields.z = v14;
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__InverseTransformPoint(transform, v19, 0LL);
    if ( v10 >= v9[3].n64_u32[0] )
      goto LABEL_19;
    *((_DWORD *)p_m_CachedPtr - 2) = v15;
    *((_DWORD *)p_m_CachedPtr - 1) = v16;
    *(_DWORD *)p_m_CachedPtr = v17;
    p_m_CachedPtr += 3;
    klass = v9[3].n64_u32[0];
    ++v10;
  }
  while ( v10 != 4 );
  if ( klass < 3 )
LABEL_19:
    sub_1B8661C(transform, v5);
  v18 = v9[5].n64_f32[0] + (float)((float)(v9[8].n64_f32[0] - v9[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v9[4],
                                                    vmul_f32(vsub_f32(v9[7], v9[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v18;
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
    sub_1B86614(WindowSprite, component);
  }
  UIWidget__set_height((UIWidget_o *)WindowSprite, this->fields.WindowHeight, 0LL);
}


void __fastcall OpenInfoWindowComponent_LayoutInfo__TryAssertion(
        OpenInfoWindowComponent_LayoutInfo_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall OpenInfoWindowComponent___c__DisplayClass22_0___ctor(
        OpenInfoWindowComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall OpenInfoWindowComponent___c__DisplayClass22_0___FindLayout_b__0(
        OpenInfoWindowComponent___c__DisplayClass22_0_o *this,
        OpenInfoWindowComponent_LayoutInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.InfoNum == this->fields.infoNum;
}