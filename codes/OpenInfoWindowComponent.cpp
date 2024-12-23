void __fastcall OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8

  if ( (byte_4B6A660 & 1) == 0 )
  {
    sub_1BE4ACC(&OpenInfoWindowComponent_TypeInfo, v1);
    byte_4B6A660 = 1;
  }
  static_fields = OpenInfoWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_GRID_POS_Y = 0x942F80000LL;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT = 0x4307000042700000LL;
}


void __fastcall OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B6A65F & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6A65F = 1;
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

  if ( (byte_4B6A65C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_OpenInfoWindowComponent_EndClose__, v3);
    byte_4B6A65C = 1;
  }
  v4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  OpenInfoWindowComponent__Close_46094704(this, v5, v6);
}


void __fastcall OpenInfoWindowComponent__Close_46094704(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4B6A65D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_OpenInfoWindowComponent_EndClose__, v4);
    byte_4B6A65D = 1;
  }
  v5 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
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
    sub_1BE4D28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__EndOpen(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_openCallBack; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *openCallBack; // t1

  openCallBack = this->fields.openCallBack;
  p_openCallBack = (PartyOrganizationUtility_o *)&this->fields.openCallBack;
  v9 = openCallBack;
  if ( openCallBack )
  {
    p_openCallBack->klass = 0LL;
    sub_1BE4A70(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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

  if ( (byte_4B6A65E & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___,
      *(_QWORD *)&infoNum);
    sub_1BE4ACC(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo, v5);
    sub_1BE4ACC(&Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__, v6);
    sub_1BE4ACC(&OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo, v7);
    byte_4B6A65E = 1;
  }
  v8 = sub_1BE4D18(OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BE4D28(v9, v10);
  *(_DWORD *)(v8 + 16) = infoNum;
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  v12 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__,
    0LL);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__49793520(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v12,
                                                   (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void __fastcall OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int32_t size; // w24
  const MethodInfo *v38; // x2
  int32_t LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO; // w1
  OpenInfoWindowComponent_c *v40; // x0
  struct OpenInfoWindowComponent_LayoutInfo_o *Layout; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v51; // x1
  UnityEngine_Transform_o *v52; // x22
  OpenInfoWindowComponent_c *v53; // x8
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  const MethodInfo *v56; // x1
  float v57; // s8
  OpenInfoWindowComponent_c *v58; // x0
  const MethodInfo *v59; // x1
  int32_t v60; // w21
  Il2CppObject *Component_object; // x22
  const MethodInfo *v62; // x2
  Il2CppObject *Item; // x22
  const MethodInfo *v64; // x1
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v66; // x20
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6A659 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, resInfo);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v16);
    sub_1BE4ACC(&Method_OpenInfoWindowComponent_EndOpen__, v17);
    sub_1BE4ACC(&Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__, v18);
    sub_1BE4ACC(&OpenInfoWindowComponent_TypeInfo, v19);
    byte_4B6A659 = 1;
  }
  if ( isFristDisp )
  {
    v20 = Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1BE4AE4(Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__);
    v21 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 6, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)resInfo, v25, v26, v27, v28, v29, v30);
  if ( !this->fields.resInfoList )
    goto LABEL_52;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.openCallBack, (int64_t)callback, v31, v32, v33, v34, v35, v36);
  LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = size;
  if ( size >= 2 && applyTrasformation )
  {
    v40 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v40 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = v40->static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO;
  }
  Layout = OpenInfoWindowComponent__FindLayout(this, LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO, v38);
  this->fields.applyLayoutInfo = Layout;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.applyLayoutInfo,
    (int64_t)Layout,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( !applyLayoutInfo )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v48);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_52;
    LODWORD(v57) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    v58 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v58 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v58->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v56);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_52;
    v52 = (UnityEngine_Transform_o *)gameObject;
    goto LABEL_32;
  }
  OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, (OpenInfoWindowComponent_o *)v48, v49);
  if ( applyTrasformation )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v51);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    v52 = (UnityEngine_Transform_o *)gameObject;
    v53 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo);
      v53 = OpenInfoWindowComponent_TypeInfo;
    }
    static_fields = v53->static_fields;
    if ( size >= 2 )
    {
      if ( !v52 )
        goto LABEL_52;
      LIMIT_UP_DIALOG_GRID_POS_Y = static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_HIGH;
    }
    else
    {
      if ( !v52 )
        goto LABEL_52;
      LIMIT_UP_DIALOG_GRID_POS_Y = static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT;
    }
    v57 = 0.0;
LABEL_32:
    v67.fields.z = 0.0;
    v67.fields.x = v57;
    v67.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition(v52, v67, 0LL);
  }
  OpenInfoWindowComponent__setCenter(this, v51);
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v59);
  if ( !gameObject )
    goto LABEL_52;
  *((float *)&gameObject[2].klass + 1) = (float)gridHeight;
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v23);
  if ( !gameObject )
    goto LABEL_52;
  if ( size >= 1 )
  {
    v60 = 0;
    while ( 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
      if ( !*p_resInfoList )
        break;
      gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)gameObject,
                                                 v60,
                                                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !gameObject )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
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
          v62);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
        if ( !*p_resInfoList )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)gameObject,
                 v60,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v64);
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
      if ( size == ++v60 )
        goto LABEL_50;
    }
LABEL_52:
    sub_1BE4D28(gameObject, v23);
  }
LABEL_50:
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v23);
  if ( !gameObject )
    goto LABEL_52;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v66 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0LL);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  float v32; // s9
  unsigned int localPosition; // s0
  float v34; // s8
  int32_t v35; // w21
  float v36; // s9
  int v37; // w26
  Il2CppObject *Item; // x22
  const MethodInfo *v39; // x1
  UnityEngine_Transform_o *transform; // x0
  float v41; // s9
  const MethodInfo *v42; // x1
  double v43; // d0
  double v44; // d0
  float v45; // s1
  __int64 v46; // x8
  float v47; // s0
  float v48; // s1
  float v49; // s9
  const MethodInfo *v50; // x1
  System_Action_o *v51; // x20
  double iptr; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6A658 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, resInfo);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10);
    sub_1BE4ACC(&Method_OpenInfoWindowComponent_EndOpen__, v11);
    sub_1BE4ACC(&Method_OpenInfoWindowComponent_OpenResultInfo__, v12);
    byte_4B6A658 = 1;
  }
  if ( isFristDisp )
  {
    v13 = Method_OpenInfoWindowComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BE4AE4(Method_OpenInfoWindowComponent_OpenResultInfo__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)resInfo, v18, v19, v20, v21, v22, v23);
  this->fields.openCallBack = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.openCallBack, (int64_t)callback, v24, v25, v26, v27, v28, v29);
  OpenInfoWindowComponent__setCenter(this, v30);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v31);
  if ( !gameObject
    || (v32 = *((float *)gameObject + 13), (gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v16)) == 0LL)
    || (gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)gameObject,
                                        0LL),
        (gameObject = *p_resInfoList) == 0LL) )
  {
LABEL_32:
    sub_1BE4D28(gameObject, v16);
  }
  v34 = *(float *)&localPosition;
  v35 = 0;
  v36 = v32 * 0.5;
  v37 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
  while ( v37 != v35 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gameObject,
             v35,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v39);
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
        ++v35;
        if ( *p_resInfoList )
          continue;
      }
    }
    goto LABEL_32;
  }
  v41 = (float)(v36 * (float)*((int *)gameObject + 6)) + -5.0;
  v43 = modf(v41, &iptr);
  if ( v41 >= 0.0 )
  {
    if ( v43 != 0.5 )
    {
      v49 = floorf(v41 + 0.5);
      goto LABEL_28;
    }
    v44 = iptr;
    v45 = 1.0;
  }
  else
  {
    if ( v43 != -0.5 )
    {
      v49 = ceilf(v41 + -0.5);
      goto LABEL_28;
    }
    v44 = iptr;
    v45 = -1.0;
  }
  v46 = (__int64)v44;
  v47 = v44;
  v48 = v47 + v45;
  if ( (v46 & 1) != 0 )
    v49 = v48;
  else
    v49 = v47;
LABEL_28:
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v42);
  if ( !gameObject )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  v53.fields.z = 0.0;
  v53.fields.x = v34;
  v53.fields.y = v49;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v53, 0LL);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v50);
  if ( !gameObject )
    goto LABEL_32;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v51 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ResultInfoGrid; // x0
  __int64 v4; // x1
  int32_t childCount; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B6A65B & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A65B = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid
    || (ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BE4D28(ResultInfoGrid, v4);
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
      UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
      --v7;
    }
    while ( v7 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.resInfoList, 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4B6A657 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A657 = 1;
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
      sub_1BE4D28(v5, v6);
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

  if ( (byte_4B6A65A & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A65A = 1;
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
    sub_1BE4D28(transform, v5);
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
    sub_1BE4D30(transform, v5);
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
    sub_1BE4D28(WindowSprite, component);
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
    sub_1BE4D28(this, 0LL);
  return x->fields.InfoNum == this->fields.infoNum;
}