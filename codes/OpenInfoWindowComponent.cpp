void __fastcall OpenInfoWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8

  if ( (byte_4B19BD8 & 1) == 0 )
  {
    sub_1BCA7E0(&OpenInfoWindowComponent_TypeInfo, v1, v2);
    byte_4B19BD8 = 1;
  }
  static_fields = OpenInfoWindowComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_GRID_POS_Y = 0x942F80000LL;
  *(_QWORD *)&static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT = 0x4307000042700000LL;
}


void __fastcall OpenInfoWindowComponent___ctor(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19BD7 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19BD7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall OpenInfoWindowComponent__Close(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x0
  System_Action_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B19BD4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_OpenInfoWindowComponent_EndClose__, v5, v6);
    byte_4B19BD4 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  OpenInfoWindowComponent__Close_45816264(this, v8, v9);
}


void __fastcall OpenInfoWindowComponent__Close_45816264(
        OpenInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B19BD5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_OpenInfoWindowComponent_EndClose__, v5, v6);
    byte_4B19BD5 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, callback, method, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall OpenInfoWindowComponent__EndClose(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  OpenInfoWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCA784(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *layoutInfos; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B19BD6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___,
      *(_QWORD *)&infoNum,
      method);
    sub_1BCA7E0(&System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__, v8, v9);
    sub_1BCA7E0(&OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo, v10, v11);
    byte_4B19BD6 = 1;
  }
  v12 = sub_1BCAA2C(OpenInfoWindowComponent___c__DisplayClass22_0_TypeInfo, *(_QWORD *)&infoNum, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = infoNum;
  layoutInfos = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.layoutInfos;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_OpenInfoWindowComponent_LayoutInfo__bool__TypeInfo,
                                         v14,
                                         v15,
                                         v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_OpenInfoWindowComponent___c__DisplayClass22_0__FindLayout_b__0__,
    0LL);
  return (OpenInfoWindowComponent_LayoutInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                                   layoutInfos,
                                                   (System_Func_TSource__bool__o *)v18,
                                                   (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_OpenInfoWindowComponent_LayoutInfo___);
}


void __fastcall OpenInfoWindowComponent__Init(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v30; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int32_t size; // w24
  const MethodInfo *v45; // x2
  int32_t LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO; // w1
  OpenInfoWindowComponent_c *v47; // x0
  struct OpenInfoWindowComponent_LayoutInfo_o *Layout; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  MethodInfo *v55; // x1
  const MethodInfo *v56; // x2
  OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x0
  const MethodInfo *v58; // x1
  UnityEngine_Transform_o *v59; // x22
  OpenInfoWindowComponent_c *v60; // x8
  struct OpenInfoWindowComponent_StaticFields *static_fields; // x8
  float LIMIT_UP_DIALOG_GRID_POS_Y; // s9
  const MethodInfo *v63; // x1
  float v64; // s8
  OpenInfoWindowComponent_c *v65; // x0
  const MethodInfo *v66; // x1
  int32_t v67; // w21
  __int64 v68; // x1
  Il2CppObject *Component_object; // x22
  const MethodInfo *v70; // x2
  Il2CppObject *Item; // x22
  const MethodInfo *v72; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Action_o *v77; // x20
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19BD1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, resInfo, callback);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_OpenInfoWindowComponent_EndOpen__, v21, v22);
    sub_1BCA7E0(&Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__, v23, v24);
    sub_1BCA7E0(&OpenInfoWindowComponent_TypeInfo, v25, v26);
    byte_4B19BD1 = 1;
  }
  if ( isFristDisp )
  {
    v27 = Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1BCA7F8(Method_OpenInfoWindowComponent_OpenLimitUpResultInfo__);
    v28 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 6, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)resInfo, v32, v33, v34, v35, v36, v37);
  if ( !this->fields.resInfoList )
    goto LABEL_52;
  size = this->fields.resInfoList->fields._size;
  this->fields.openCallBack = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.openCallBack, (int64_t)callback, v38, v39, v40, v41, v42, v43);
  LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = size;
  if ( size >= 2 && applyTrasformation )
  {
    v47 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo, (unsigned int)size);
      v47 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO = v47->static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO;
  }
  Layout = OpenInfoWindowComponent__FindLayout(this, LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_NO, v45);
  this->fields.applyLayoutInfo = Layout;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.applyLayoutInfo,
    (int64_t)Layout,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( !applyLayoutInfo )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v55);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_52;
    LODWORD(v64) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
    v65 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo, v63);
      v65 = OpenInfoWindowComponent_TypeInfo;
    }
    LIMIT_UP_DIALOG_GRID_POS_Y = v65->static_fields->LIMIT_UP_DIALOG_GRID_POS_Y;
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v63);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_52;
    v59 = (UnityEngine_Transform_o *)gameObject;
    goto LABEL_32;
  }
  OpenInfoWindowComponent_LayoutInfo__Apply(applyLayoutInfo, (OpenInfoWindowComponent_o *)v55, v56);
  if ( applyTrasformation )
  {
    gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v58);
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    v59 = (UnityEngine_Transform_o *)gameObject;
    v60 = OpenInfoWindowComponent_TypeInfo;
    if ( !OpenInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpenInfoWindowComponent_TypeInfo, v30);
      v60 = OpenInfoWindowComponent_TypeInfo;
    }
    static_fields = v60->static_fields;
    if ( size >= 2 )
    {
      if ( !v59 )
        goto LABEL_52;
      LIMIT_UP_DIALOG_GRID_POS_Y = static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_HIGH;
    }
    else
    {
      if ( !v59 )
        goto LABEL_52;
      LIMIT_UP_DIALOG_GRID_POS_Y = static_fields->LIMIT_UP_DIALOG_TRANSFORM_LAYOUT_GRIDPOS_Y_DEFAULT;
    }
    v64 = 0.0;
LABEL_32:
    v78.fields.z = 0.0;
    v78.fields.x = v64;
    v78.fields.y = LIMIT_UP_DIALOG_GRID_POS_Y;
    UnityEngine_Transform__set_localPosition(v59, v78, 0LL);
  }
  OpenInfoWindowComponent__setCenter(this, v58);
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v66);
  if ( !gameObject )
    goto LABEL_52;
  *((float *)&gameObject[2].klass + 1) = (float)gridHeight;
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v30);
  if ( !gameObject )
    goto LABEL_52;
  if ( size >= 1 )
  {
    v67 = 0;
    while ( 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
      if ( !*p_resInfoList )
        break;
      gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)gameObject,
                                                 v67,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !gameObject )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_LimitUpResultInfoComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v30);
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
          v70);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)*p_resInfoList;
        if ( !*p_resInfoList )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)gameObject,
                 v67,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v72);
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
      if ( size == ++v67 )
        goto LABEL_50;
    }
LABEL_52:
    sub_1BCAA3C(gameObject, v30);
  }
LABEL_50:
  gameObject = (UnityEngine_GameObject_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v30);
  if ( !gameObject )
    goto LABEL_52;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v77 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v74, v75, v76);
  System_Action___ctor(v77, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__OpenResultInfo(
        OpenInfoWindowComponent_o *this,
        System_Collections_Generic_List_GameObject__o *resInfo,
        System_Action_o *callback,
        bool isFristDisp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  void *gameObject; // x0
  const MethodInfo *v20; // x1
  struct System_Collections_Generic_List_GameObject__o **p_resInfoList; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  float v36; // s9
  unsigned int localPosition; // s0
  float v38; // s8
  int32_t v39; // w21
  float v40; // s9
  int v41; // w26
  Il2CppObject *Item; // x22
  const MethodInfo *v43; // x1
  UnityEngine_Transform_o *transform; // x0
  float v45; // s9
  const MethodInfo *v46; // x1
  double v47; // d0
  double v48; // d0
  float v49; // s1
  __int64 v50; // x8
  float v51; // s0
  float v52; // s1
  float v53; // s9
  const MethodInfo *v54; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Action_o *v58; // x20
  double iptr; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19BD0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, resInfo, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_OpenInfoWindowComponent_EndOpen__, v13, v14);
    sub_1BCA7E0(&Method_OpenInfoWindowComponent_OpenResultInfo__, v15, v16);
    byte_4B19BD0 = 1;
  }
  if ( isFristDisp )
  {
    v17 = Method_OpenInfoWindowComponent_OpenResultInfo__;
    if ( (*((_BYTE *)Method_OpenInfoWindowComponent_OpenResultInfo__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1BCA7F8(Method_OpenInfoWindowComponent_OpenResultInfo__);
    v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 6, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.resInfoList = resInfo;
  p_resInfoList = &this->fields.resInfoList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resInfoList, (int64_t)resInfo, v22, v23, v24, v25, v26, v27);
  this->fields.openCallBack = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.openCallBack, (int64_t)callback, v28, v29, v30, v31, v32, v33);
  OpenInfoWindowComponent__setCenter(this, v34);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v35);
  if ( !gameObject
    || (v36 = *((float *)gameObject + 13), (gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v20)) == 0LL)
    || (gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)gameObject,
                                        0LL),
        (gameObject = *p_resInfoList) == 0LL) )
  {
LABEL_32:
    sub_1BCAA3C(gameObject, v20);
  }
  v38 = *(float *)&localPosition;
  v39 = 0;
  v40 = v36 * 0.5;
  v41 = *((_DWORD *)gameObject + 6) & ~(*((int *)gameObject + 6) >> 31);
  while ( v41 != v39 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)gameObject,
             v39,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v43);
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
        ++v39;
        if ( *p_resInfoList )
          continue;
      }
    }
    goto LABEL_32;
  }
  v45 = (float)(v40 * (float)*((int *)gameObject + 6)) + -5.0;
  v47 = modf(v45, &iptr);
  if ( v45 >= 0.0 )
  {
    if ( v47 != 0.5 )
    {
      v53 = floorf(v45 + 0.5);
      goto LABEL_28;
    }
    v48 = iptr;
    v49 = 1.0;
  }
  else
  {
    if ( v47 != -0.5 )
    {
      v53 = ceilf(v45 + -0.5);
      goto LABEL_28;
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
LABEL_28:
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v46);
  if ( !gameObject )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  v60.fields.z = 0.0;
  v60.fields.x = v38;
  v60.fields.y = v53;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v60, 0LL);
  gameObject = OpenInfoWindowComponent__get_ResultInfoGrid(this, v54);
  if ( !gameObject )
    goto LABEL_32;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  v58 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v55, v56, v57);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_OpenInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0LL);
}


void __fastcall OpenInfoWindowComponent__clearInfoGrid(OpenInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *ResultInfoGrid; // x0
  __int64 v5; // x1
  int32_t childCount; // w0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B19BD3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19BD3 = 1;
  }
  ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, method);
  if ( !ResultInfoGrid
    || (ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(ResultInfoGrid, v5);
  }
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)ResultInfoGrid, 0LL);
  v8 = childCount - 1;
  if ( childCount >= 1 )
  {
    do
    {
      ResultInfoGrid = (UnityEngine_Component_o *)OpenInfoWindowComponent__get_ResultInfoGrid(this, v7);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(ResultInfoGrid, 0LL);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      ResultInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)ResultInfoGrid,
                                                    v8,
                                                    0LL);
      if ( !ResultInfoGrid )
        goto LABEL_14;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(ResultInfoGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      --v8;
    }
    while ( v8 >= 0 );
    this->fields.resInfoList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resInfoList, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


UIGrid_o *__fastcall OpenInfoWindowComponent__get_ResultInfoGrid(
        OpenInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct OpenInfoWindowComponent_LayoutInfo_o *applyLayoutInfo; // x8
  UnityEngine_Object_o *Grid; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct OpenInfoWindowComponent_LayoutInfo_o *v8; // x8
  UIGrid_o **p_Grid; // x8

  if ( (byte_4B19BCF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19BCF = 1;
  }
  applyLayoutInfo = this->fields.applyLayoutInfo;
  if ( !applyLayoutInfo )
    goto LABEL_9;
  Grid = (UnityEngine_Object_o *)applyLayoutInfo->fields.Grid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v6 = UnityEngine_Object__op_Inequality(Grid, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.applyLayoutInfo;
    if ( !v8 )
      sub_1BCAA3C(v6, v7);
    p_Grid = &v8->fields.Grid;
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
  __int64 v2; // x2
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  struct UIPanel_array *basePanelList; // x8
  __int64 v8; // x9
  unsigned int klass; // w8
  float32x2_t *v10; // x21
  unsigned __int64 v11; // x22
  float *p_m_CachedPtr; // x23
  float v13; // s8
  float v14; // s9
  float v15; // s10
  int v16; // s0
  int v17; // s1
  int v18; // s2
  float v19; // s1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19BD2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19BD2 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(basePanel, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    basePanelList = this->fields.basePanelList;
    if ( basePanelList )
    {
      v8 = *(_QWORD *)&basePanelList->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
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
    sub_1BCAA3C(transform, v6);
  }
  klass = (unsigned int)transform[1].klass;
  v10 = (float32x2_t *)transform;
  v11 = 0LL;
  p_m_CachedPtr = (float *)&transform[1].fields.m_CachedPtr;
  do
  {
    if ( v11 >= klass )
      goto LABEL_19;
    v13 = *(p_m_CachedPtr - 2);
    v14 = *(p_m_CachedPtr - 1);
    v15 = *p_m_CachedPtr;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)basePanel, 0LL);
    if ( !transform )
      goto LABEL_20;
    v20.fields.x = v13;
    v20.fields.y = v14;
    v20.fields.z = v15;
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__InverseTransformPoint(transform, v20, 0LL);
    if ( v11 >= v10[3].n64_u32[0] )
      goto LABEL_19;
    *((_DWORD *)p_m_CachedPtr - 2) = v16;
    *((_DWORD *)p_m_CachedPtr - 1) = v17;
    *(_DWORD *)p_m_CachedPtr = v18;
    p_m_CachedPtr += 3;
    klass = v10[3].n64_u32[0];
    ++v11;
  }
  while ( v11 != 4 );
  if ( klass < 3 )
LABEL_19:
    sub_1BCAA44(transform, v6);
  v19 = v10[5].n64_f32[0] + (float)((float)(v10[8].n64_f32[0] - v10[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v10[4],
                                                    vmul_f32(
                                                      vsub_f32(v10[7], v10[4]),
                                                      (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v19;
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
    sub_1BCAA3C(WindowSprite, component);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.InfoNum == this->fields.infoNum;
}