void __fastcall ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_43592F0 & 1) == 0 )
  {
    sub_B70694(&ServantStatusFlavorTextListViewManager_TypeInfo);
    byte_43592F0 = 1;
  }
  ServantStatusFlavorTextListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
}


void __fastcall ServantStatusFlavorTextListViewManager___ctor(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43592EF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
    byte_43592EF = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.isInput = 1;
  this->fields.initialScrollPosition = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


ServantStatusFlavorTextListViewObject_o *__fastcall ServantStatusFlavorTextListViewManager__AddObjectList(
        ServantStatusFlavorTextListViewManager_o *this,
        UnityEngine_Vector3_o *basePositon,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x22
  ServantStatusFlavorTextListViewObject_o *Component_srcLineSprite; // x0
  __int64 v9; // x1
  ServantStatusFlavorTextListViewObject_o *v10; // x21
  const MethodInfo *v11; // x7
  const MethodInfo *v12; // x3

  if ( (byte_43592E7 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43592E7 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                 (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  Component_srcLineSprite = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  v10 = 0LL;
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !v7
      || (Component_srcLineSprite = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 (UnityEngine_GameObject_o *)v7,
                                                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___)) == 0LL
      || (v10 = Component_srcLineSprite,
          ServantStatusFlavorTextListViewObject__SetItem(
            Component_srcLineSprite,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v11),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, v10, v12),
          (Component_srcLineSprite = (ServantStatusFlavorTextListViewObject_o *)this->fields.objectList) == 0LL) )
    {
      sub_B7076C(Component_srcLineSprite, v9);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
  }
  return v10;
}


System_Collections_IEnumerator_o *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t targetIndex,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_43592E5 & 1) == 0 )
  {
    sub_B70694(&ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_TypeInfo);
    byte_43592E5 = 1;
  }
  v7 = sub_B70764(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_TypeInfo);
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39___ctor(
    (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ServantStatusFlavorTextListViewManager__CreateList(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  UnityEngine_Object_c **v5; // x27
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  void *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  float v16; // s8
  float v17; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x3
  struct UnityEngine_GameObject_o *voice2Object; // x23
  UnityEngine_Object_o *v36; // x23
  const MethodInfo *v37; // x7
  ServantStatusFlavorTextListViewObject_o *v38; // x23
  const MethodInfo *v39; // x3
  ServantStatusListViewItem_o *v40; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  struct UnityEngine_GameObject_o *profileObject; // x22
  UnityEngine_Object_o *v43; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  ServantStatusListViewItem_o *v45; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v47; // x20
  const MethodInfo *v48; // x7
  const MethodInfo *v49; // x3
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v50; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__34_0; // x24
  Il2CppObject *v53; // x22
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int size; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v62; // x20
  __int64 v63; // x21
  int v64; // w26
  int v65; // w22
  ServantCommentEntity_o *v66; // x24
  struct ServantEntity_o *v67; // x8
  int32_t v68; // w25
  const MethodInfo *v69; // x3
  UnityEngine_Object_c *v70; // x0
  struct UnityEngine_GameObject_o *profile2Object; // x25
  UnityEngine_Object_o *v72; // x25
  UnityEngine_Object_c *v73; // x0
  ServantStatusFlavorTextListViewObject_o *v74; // x25
  int v75; // w8
  _BOOL8 IsOpen; // x0
  const MethodInfo *v77; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v78; // x26
  ServantStatusFlavorTextListViewManager_o *v79; // x20
  UnityEngine_Object_c **v80; // x19
  ServantStatusListViewItem_o **v81; // x23
  ServantStatusListViewItem_o *v82; // x27
  int32_t id; // w28
  bool IsNew; // w22
  const MethodInfo *v85; // x7
  const MethodInfo *v86; // x3
  const MethodInfo *v87; // x7
  System_String_o *CondTitle; // x26
  const MethodInfo *v89; // x2
  __int64 v90; // x26
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  const MethodInfo *v105; // x3
  UnityEngine_Object_c *v106; // x0
  UnityEngine_Object_o *v107; // x20
  UIPanel_o *v108; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v111; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v114; // x22
  EventDelegate_Callback_o *v115; // x21
  struct UIScrollBar_o *v116; // x8
  System_Collections_Generic_List_EventDelegate__o *v117; // x20
  EventDelegate_Callback_o *v118; // x21
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // [xsp+0h] [xbp-A0h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+8h] [xbp-98h]
  int32_t profileNum; // [xsp+10h] [xbp-90h]
  int v122; // [xsp+14h] [xbp-8Ch]
  int v123; // [xsp+18h] [xbp-88h]
  bool isPlayVoice; // [xsp+1Ch] [xbp-84h] BYREF
  System_String_o *voice; // [xsp+20h] [xbp-80h] BYREF
  System_String_o *illust; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43592E0 & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_System_Comparison_ServantCommentEntity___ctor__);
    sub_B70694(&System_Comparison_ServantCommentEntity__TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B70694(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
    sub_B70694(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__);
    sub_B70694(&Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__34_0__);
    sub_B70694(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    sub_B70694(&Method_UIScrollView_OnScrollBar__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43592E0 = 1;
  }
  basePositon.fields.z = 0.0;
  illust = 0LL;
  *(_QWORD *)&basePositon.fields.x = 0LL;
  voice = 0LL;
  isPlayVoice = 0;
  ServantStatusFlavorTextListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  v5 = &UnityEngine_Object_TypeInfo;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( !transform )
      goto LABEL_129;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)transform,
                                (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_129;
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_129;
      v16 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v17 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_129;
      v128.fields.x = -v16;
      v128.fields.y = -v17;
      v128.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v128, 0LL);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_129;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v26;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_QWORD *)&basePositon.fields.x = 0LL;
  basePositon.fields.z = 0.0;
  transform = this->fields.mainInfo;
  if ( !transform )
    goto LABEL_129;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v33);
  if ( System_String__IsNullOrEmpty(voice, 0LL) )
  {
    voice2Object = this->fields.voice2Object;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v36 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)voice2Object,
                                    (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v36 )
        goto LABEL_129;
      transform = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                    (UnityEngine_GameObject_o *)v36,
                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_129;
      v38 = (ServantStatusFlavorTextListViewObject_o *)transform;
      ServantStatusFlavorTextListViewObject__SetItem(
        (ServantStatusFlavorTextListViewObject_o *)transform,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v37);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v38, v39);
      transform = this->fields.objectList;
      if ( !transform )
        goto LABEL_129;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    }
  }
  else
  {
    transform = ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.voiceObject, v34);
  }
  v40 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_129;
  if ( v40->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v40->fields.commandCodeCommentEntity;
    if ( !commandCodeCommentEntity )
      goto LABEL_113;
    profileObject = this->fields.profileObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v43 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)profileObject,
                                    (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_113;
    if ( v43 )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)v43,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      v45 = *p_mainInfo;
      commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
      v47 = (ServantStatusFlavorTextListViewObject_o *)Component_srcLineSprite;
      transform = CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0LL);
      if ( v47 )
      {
        ServantStatusFlavorTextListViewObject__SetItem(
          v47,
          v45,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v48);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v47, v49);
        transform = this->fields.objectList;
        if ( transform )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
          goto LABEL_113;
        }
      }
    }
    goto LABEL_129;
  }
  p_objectList = &this->fields.objectList;
  v50 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v40->fields.svtCommentEntityList,
                                                                                  (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  static_fields = (struct ServantStatusFlavorTextListViewManager___c_StaticFields *)*((_QWORD *)transform + 23);
  _9__34_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( (*((_BYTE *)transform + 307) & 4) != 0 && !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_ServantCommentEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__34_0,
      v53,
      Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__34_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_ServantCommentEntity___ctor__);
    v54 = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    v54->__9__34_0 = (struct System_Comparison_ServantCommentEntity__o *)_9__34_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v54->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  if ( !v50 )
    goto LABEL_129;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v50,
    (System_Comparison_T__o *)_9__34_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
  size = v50->fields._size;
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.objectList;
  if ( size < 1 )
  {
LABEL_108:
    if ( *p_mainInfo )
    {
      svtEntity = (*p_mainInfo)->fields.svtEntity;
      if ( svtEntity )
      {
        type = svtEntity->fields.type;
        if ( SvtType__IsServant(type, 0LL) || SvtType__IsEnemyCollectionDetail(type, 0LL) )
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v105);
        goto LABEL_113;
      }
    }
    goto LABEL_129;
  }
  v63 = 0LL;
  v64 = 0;
  v65 = 1;
  do
  {
    if ( size <= (unsigned int)v63 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v66 = (ServantCommentEntity_o *)v50->fields._items->m_Items[v63];
    if ( ((_DWORD)v63 == 0) | v64 & 1 )
    {
      if ( !v66 )
        goto LABEL_129;
    }
    else
    {
      if ( !v66 )
        goto LABEL_129;
      if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)v50->fields._items->m_Items[v63], 0LL) )
      {
        if ( v50->fields._size <= (unsigned int)(v63 - 1) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        transform = (void *)*((_QWORD *)&v50->fields._items->max_length + v63);
        if ( !transform )
          goto LABEL_129;
        if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)transform, 0LL) )
          goto LABEL_74;
      }
      transform = (void *)ServantCommentEntity__IsDetailLabel(v66, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( v50->fields._size <= (unsigned int)(v63 - 1) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        transform = (void *)*((_QWORD *)&v50->fields._items->max_length + v63);
        if ( !transform )
          goto LABEL_129;
        transform = (void *)ServantCommentEntity__IsDetailLabel((ServantCommentEntity_o *)transform, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
          goto LABEL_74;
      }
      if ( !*p_mainInfo )
        goto LABEL_129;
      v67 = (*p_mainInfo)->fields.svtEntity;
      if ( !v67 )
        goto LABEL_129;
      v68 = v67->fields.type;
      if ( !SvtType__IsServant(v68, 0LL) && !SvtType__IsEnemyCollectionDetail(v68, 0LL) )
      {
LABEL_74:
        v64 = 0;
      }
      else
      {
        ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v69);
        v64 = 1;
      }
    }
    if ( ServantCommentEntity__IsDetailLabel(v66, 0LL) )
    {
      v70 = *v5;
      profile2Object = this->fields.profileObject;
    }
    else
    {
      v72 = 0LL;
      if ( !ServantCommentEntity__IsProfileLabel(v66, 0LL) )
        goto LABEL_83;
      v70 = *v5;
      profile2Object = this->fields.profile2Object;
    }
    if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v70);
    v72 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)profile2Object,
                                    (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_83:
    v73 = *v5;
    if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v73);
    transform = (void *)UnityEngine_Object__op_Inequality(v72, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v72 )
        goto LABEL_129;
      v74 = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)v72,
                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( ServantCommentEntity__IsProfileLabel(v66, 0LL) )
        v75 = v65;
      else
        v75 = 0;
      profileNum = v75;
      IsOpen = ServantCommentEntity__IsOpen(v66, -1, 1, 0LL);
      v122 = v64;
      v123 = v65;
      if ( IsOpen )
      {
        v78 = v50;
        v79 = this;
        v80 = v5;
        v81 = p_mainInfo;
        v82 = *p_mainInfo;
        id = v66->fields.id;
        IsNew = ServantCommentEntity__IsNew(v66, 0LL);
        transform = ServantCommentEntity__GetComment(v66, 0LL);
        if ( !v74 )
          goto LABEL_129;
        ServantStatusFlavorTextListViewObject__SetItem(
          v74,
          v82,
          id,
          1,
          IsNew,
          (System_String_o *)transform,
          profileNum,
          v85);
        v5 = v80;
        this = v79;
        v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)p_objectList;
        p_mainInfo = v81;
        v50 = v78;
      }
      else
      {
        transform = ServantStatusFlavorTextListViewManager__GetConditionString(
                      (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                      v66,
                      v77);
        if ( !v74 )
          goto LABEL_129;
        ServantStatusFlavorTextListViewObject__SetItem(
          v74,
          *p_mainInfo,
          v66->fields.id,
          0,
          0,
          (System_String_o *)transform,
          profileNum,
          v87);
      }
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v74, v86);
      CondTitle = ServantCommentEntity__GetCondTitle(v66, 0LL);
      if ( ServantCommentEntity__IsProfileLabel(v66, 0LL) || !System_String__IsNullOrEmpty(CondTitle, 0LL) )
        ServantStatusFlavorTextListViewObject__SetCondTitle(v74, CondTitle, v89);
      if ( ServantCommentEntity__IsProfileLabel(v66, 0LL) || !ServantCommentEntity__IsConst(v66, 0LL) )
      {
        v90 = sub_B70764(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
        ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
          (ServantStatusFlavorTextListViewManager_ServantProfile_o *)v90,
          0LL);
        if ( !v90 )
          goto LABEL_129;
        *(_QWORD *)(v90 + 16) = v66;
        sub_B70630((BattleServantConfConponent_o *)(v90 + 16), (System_Int32_array **)v66, v91, v92, v93, v94, v95, v96);
        *(_QWORD *)(v90 + 24) = v74;
        sub_B70630(
          (BattleServantConfConponent_o *)(v90 + 24),
          (System_Int32_array **)v74,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
        *(_DWORD *)(v90 + 32) = 0;
        transform = *p_servantProfileList;
        if ( !*p_servantProfileList )
          goto LABEL_129;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
      }
      transform = (void *)ServantCommentEntity__IsProfileLabel(v66, 0LL);
      if ( !*v62 )
        goto LABEL_129;
      v65 = v123 + ((unsigned __int8)transform & 1);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v62,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
      v64 = v122;
    }
    size = v50->fields._size;
    ++v63;
  }
  while ( (int)v63 < size );
  if ( (v64 & 1) == 0 )
    goto LABEL_108;
LABEL_113:
  v106 = *v5;
  v107 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v106->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v106);
  if ( UnityEngine_Object__op_Inequality(v107, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      goto LABEL_119;
    }
LABEL_129:
    sub_B7076C(transform, v7);
  }
LABEL_119:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_129;
  transform = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_129;
  v108 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0LL);
  height = UIPanel__get_height(v108, 0LL);
  transform = this->fields.scrollView;
  this->fields.scrollViewSize.fields.x = width;
  this->fields.scrollViewSize.fields.y = height;
  if ( !transform )
    goto LABEL_129;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_129;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)transform,
                                         0LL);
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v111);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_129;
  onChange = scrollBar->fields.onChange;
  v114 = (Il2CppObject *)this->fields.scrollView;
  v115 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v115, v114, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  transform = EventDelegate__Add(onChange, v115, 0LL);
  v116 = this->fields.scrollBar;
  if ( !v116 )
    goto LABEL_129;
  v117 = v116->fields.onChange;
  v118 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v118,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0LL);
  EventDelegate__Add(v117, v118, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewManager__DestroyList(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_43592E8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43592E8 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v14.fields.current )
      sub_B7076C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v14.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v6, v7, v8, v9, v10, v11);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_B7076C(objectList, method);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__DoAutoScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  ServantStatusFlavorTextListViewManager___c_c *v6; // x0
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__36_0; // x22
  Il2CppObject *v9; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t Index; // w0
  const MethodInfo *v18; // x3
  System_Collections_IEnumerator_o *v19; // x1

  if ( (byte_43592E2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
    sub_B70694(&Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__);
    sub_B70694(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_B70694(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__36_0__);
    sub_B70694(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    byte_43592E2 = 1;
  }
  objectList = this->fields.objectList;
  v6 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    v6 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__36_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__36_0,
      v9,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__36_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__);
    v10 = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    v10->__9__36_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__36_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v10->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !objectList )
    sub_B7076C(v6, onFinished);
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)objectList,
            (System_Predicate_T__o *)_9__36_0,
            (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( (Index & 0x80000000) != 0 )
  {
    ActionExtensions__Call(onFinished, 0LL);
  }
  else
  {
    v19 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v18);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
  }
}


float __fastcall ServantStatusFlavorTextListViewManager__DoMoveEaseInOut(
        ServantStatusFlavorTextListViewManager_o *this,
        float currentTime,
        float duration,
        float startValue,
        float changeValue,
        const MethodInfo *method)
{
  float v6; // s0
  float v9; // s0
  float v10; // s1
  float v11; // s0

  v6 = currentTime / (float)(duration * 0.5);
  if ( v6 >= 1.0 )
  {
    v11 = exp2f((float)(v6 + -1.0) * -10.0);
    v10 = changeValue * 0.5;
    v9 = 2.0 - v11;
  }
  else
  {
    v9 = powf(v6, 5.0);
    v10 = changeValue * 0.5;
  }
  return (float)(v10 * v9) + startValue;
}


float __fastcall ServantStatusFlavorTextListViewManager__GetAutoScrollMoveDuration(
        ServantStatusFlavorTextListViewManager_o *this,
        float moveValue,
        const MethodInfo *method)
{
  float v3; // s0

  v3 = UnityEngine_Mathf__Max(0.0, (float)(moveValue + -2000.0) / 2000.0, 0LL);
  return UnityEngine_Mathf__Min(v3 + 1.0, 2.0, 0LL);
}


System_String_o *__fastcall ServantStatusFlavorTextListViewManager__GetConditionString(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantCommentEntity_o *svtCommentEntity,
        const MethodInfo *method)
{
  ServantCommentAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  ServantCommentAddMaster_o *v6; // x20
  System_String_o *v7; // x22
  System_String_o *ConditionString; // x0
  bool IsOpen; // w21
  bool IsNullOrEmpty; // w0
  Il2CppObject *Conditiontext; // x21
  LocalizationManager_c *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  int32_t svtId; // w3
  int32_t id; // w4
  int32_t priority; // w5
  System_String_o *v19; // x19
  System_String_o *v20; // x0

  if ( (byte_43592E1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_12162/*"SERVANT_STATUS_PROFILE_CONDITION"*/);
    sub_B70694(&StringLiteral_16197/*"_FLAVOR2"*/);
    sub_B70694(&StringLiteral_16196/*"_FLAVOR"*/);
    sub_B70694(&StringLiteral_3367/*"COND_TYPE_AND_FLAVOR2"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43592E1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
    goto LABEL_40;
  v6 = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)ServantCommentEntity__IsOpen(
                                                                  svtCommentEntity,
                                                                  -1,
                                                                  0,
                                                                  0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_12162/*"SERVANT_STATUS_PROFILE_CONDITION"*/,
                                                                    0LL);
    if ( v6 )
    {
      v7 = (System_String_o *)Master_WarQuestSelectionMaster;
      ConditionString = ServantCommentAddMaster__GetConditionString(
                          v6,
                          (System_String_o *)StringLiteral_16196/*"_FLAVOR"*/,
                          (System_String_o *)StringLiteral_16197/*"_FLAVOR2"*/,
                          svtCommentEntity->fields.svtId,
                          svtCommentEntity->fields.id,
                          svtCommentEntity->fields.priority,
                          -1,
                          0LL);
LABEL_33:
      Conditiontext = (Il2CppObject *)ConditionString;
      return System_String__Format(v7, Conditiontext, 0LL);
    }
LABEL_40:
    sub_B7076C(Master_WarQuestSelectionMaster, v5);
  }
  if ( !v6 )
    goto LABEL_40;
  IsOpen = ServantCommentAddMaster__IsOpen(
             v6,
             svtCommentEntity->fields.svtId,
             svtCommentEntity->fields.id,
             svtCommentEntity->fields.priority,
             -1,
             0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(svtCommentEntity->fields.condMessage, 0LL);
  if ( IsOpen || !IsNullOrEmpty )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12162/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
    ConditionString = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_16196/*"_FLAVOR"*/,
                        0LL);
    goto LABEL_33;
  }
  Conditiontext = (Il2CppObject *)ServantCommentEntity__GetConditiontext(
                                    svtCommentEntity,
                                    (System_String_o *)StringLiteral_16197/*"_FLAVOR2"*/,
                                    0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434F6FF )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434F6FF = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  if ( System_String__op_Equality((System_String_o *)Conditiontext, v12->static_fields->unknownNameText, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = (System_String_o *)StringLiteral_12162/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3367/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
    v15 = System_String__Concat_44758168((System_String_o *)Conditiontext, v14, 0LL);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v19 = v15;
    v20 = ServantCommentAddMaster__GetConditionString(
            v6,
            (System_String_o *)StringLiteral_16196/*"_FLAVOR"*/,
            (System_String_o *)StringLiteral_16197/*"_FLAVOR2"*/,
            svtId,
            id,
            priority,
            -1,
            0LL);
    Conditiontext = (Il2CppObject *)System_String__Concat_44758168(v19, v20, 0LL);
    v13 = (System_String_o *)StringLiteral_12162/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
  }
  v7 = LocalizationManager__Get(v13, 0LL);
  return System_String__Format(v7, Conditiontext, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__OnChangeScrollBarValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v6; // s1
  float v7; // s8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  float v10; // s0
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43592E3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_ServantCommentEntity__Invoke__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43592E3 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !scrollView
      || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition(
                                                  (UnityEngine_Transform_o *)scrollView,
                                                  0LL),
          (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
    {
      sub_B7076C(scrollView, v4);
    }
    v7 = v6 - this->fields.initialScrollPosition.fields.y;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v12,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
      if ( !v8 )
        break;
      if ( !v12.fields.current )
        sub_B7076C(v8, v9);
      v10 = *(float *)&v12.fields.current[2].klass;
      if ( v10 <= v7 && v7 <= (float)(v10 + this->fields.scrollViewSize.fields.y) )
      {
        OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
        if ( OnFinishedReadEvent )
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)OnFinishedReadEvent,
            (System_Uri_o *)v12.fields.current[1].klass,
            (const MethodInfo_264C15C *)Method_System_Action_ServantCommentEntity__Invoke__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__OnClickListView(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x20
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v12; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( !obj )
    sub_B7076C(this, 0LL);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v12 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0LL;
      sub_B70630(p_callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
      ServantStatusFlavorTextListViewManager_CallbackFunc__Invoke(v12, obj->fields.id, 0LL);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__OnClickListViewVoice(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B70630(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantStatusFlavorTextListViewManager_CallbackFunc__Invoke(v9, 0, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__OnEnable(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.isScrollRefresh = 1;
}


void __fastcall ServantStatusFlavorTextListViewManager__OnMoveEnd(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_43592EC & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43592EC = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B7076C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_43592EA & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_B70694(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_43592EA = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      objectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v14.fields.current;
      v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v11, v12);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusFlavorTextListViewObject__Init(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v10,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v13);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject_36324640(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_43592EB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_B70694(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_43592EB = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      objectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v12.fields.current;
      v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v9, v10);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusFlavorTextListViewObject__Init(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v8,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v11);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_36324428(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetMode_36324428(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_43592E9 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    byte_43592E9 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B7076C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v4, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_36324640(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode_36324588(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_36324428(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetObjectItem(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t initMode; // w20
  const MethodInfo *v5; // x3
  float v6; // s0
  int v7; // s1
  int32_t v10; // w1

  if ( !obj )
    sub_B7076C(this, 0LL);
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 1 )
    v10 = 3;
  else
    v10 = 2;
  ServantStatusFlavorTextListViewObject__Init(obj, v10, 0LL, v6, *(UnityEngine_Vector3_o *)&v7, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetObjectPosition(
        ServantStatusFlavorTextListViewManager_o *this,
        UnityEngine_Vector3_o *basePositon,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v6; // x21
  int32_t Size; // w0
  int v8; // w8
  int v9; // w23
  UnityEngine_Transform_o *v10; // x22
  UnityEngine_Transform_o *transform; // x22
  int v12; // s0
  UnityEngine_Transform_o *v16; // x22
  int v17; // s0
  UnityEngine_GameObject_o *v20; // x22
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  float y; // s8
  ServantStatusFlavorTextListViewManager_c *v24; // x0

  v6 = this;
  if ( (byte_43592E6 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_B70694(&ServantStatusFlavorTextListViewManager_TypeInfo);
    byte_43592E6 = 1;
  }
  if ( !obj )
    goto LABEL_18;
  Size = ServantStatusFlavorTextListViewObject__GetSize(obj, (const MethodInfo *)basePositon);
  v8 = Size >= 0 ? Size : Size + 1;
  v9 = v8 >> 1;
  basePositon->fields.y = basePositon->fields.y - (float)(v8 >> 1);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  if ( !v6->fields.listParent )
    goto LABEL_18;
  v10 = (UnityEngine_Transform_o *)this;
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_transform(v6->fields.listParent, 0LL);
  if ( !v10 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  if ( !this )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *basePositon, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL);
  *(UnityEngine_Quaternion_o *)&v12 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v12, 0LL),
        v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL),
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL),
        !v16)
    || (UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL),
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)obj,
                                                             0LL),
        !v6->fields.listParent)
    || (v20 = (UnityEngine_GameObject_o *)this,
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_layer(v6->fields.listParent, 0LL),
        !v20) )
  {
LABEL_18:
    sub_B7076C(this, basePositon);
  }
  UnityEngine_GameObject__set_layer(v20, (int32_t)this, 0LL);
  ServantStatusFlavorTextListViewObject__SetBaseTransform(obj, v21);
  ServantStatusFlavorTextListViewObject__SetManager(obj, v6, v22);
  y = basePositon->fields.y;
  v24 = ServantStatusFlavorTextListViewManager_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager_TypeInfo);
    v24 = ServantStatusFlavorTextListViewManager_TypeInfo;
  }
  basePositon->fields.y = y - (float)(v24->static_fields->LIST_BLANK + v9);
}


void __fastcall ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float height; // s0
  float v5; // s8
  UnityEngine_Component_o *v6; // x8
  float v7; // s9
  Il2CppObject *current; // x20
  ServantStatusFlavorTextListViewObject_o *monitor; // x0
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o ProfileLastLinePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43592E4 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    byte_43592E4 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v5 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   scrollView,
                                                   (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL)
    || (v6 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
  {
    sub_B7076C(scrollView, method);
  }
  v7 = *((float *)&v6[12].fields + 1);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v10 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B7076C(v10, v11);
    monitor = (ServantStatusFlavorTextListViewObject_o *)v12.fields.current[1].monitor;
    if ( !monitor )
      sub_B7076C(0LL, v11);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(monitor, v11);
    *(float *)&current[2].klass = UnityEngine_Mathf__Max(0.0, vabds_f32(ProfileLastLinePosition.fields.y, v7) - v5, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewManager__UpdateCvName(
        ServantStatusFlavorTextListViewManager_o *this,
        System_String_o *cvName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43592ED & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    byte_43592ED = 1;
  }
  memset(&v10, 0, sizeof(v10));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, cvName);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      objectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v10,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v6 )
        break;
      current = v10.fields.current;
      if ( !v10.fields.current )
        sub_B7076C(v6, v7);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v10.fields.current,
             v7) == 3 )
      {
        ServantStatusFlavorTextListViewObject__SetCvName((ServantStatusFlavorTextListViewObject_o *)current, cvName, v9);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__UpdateParameter(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x19
  __int64 v8; // x1
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43592EE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    byte_43592EE = 1;
  }
  memset(&v10, 0, sizeof(v10));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, *(_QWORD *)&imageLimitCount);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    if ( !v5 )
      break;
    current = v10.fields.current;
    if ( !v10.fields.current )
      sub_B7076C(v5, v6);
    if ( ServantStatusFlavorTextListViewObject__GetKind(
           (ServantStatusFlavorTextListViewObject_o *)v10.fields.current,
           v6) == 5 )
    {
      klass = current[8].klass;
      if ( !klass )
        sub_B7076C(0LL, v8);
      (*((void (__fastcall **)(Il2CppClass *, Il2CppClass *, _QWORD))klass->_1.image + 55))(
        klass,
        current[2].klass,
        *((_QWORD *)klass->_1.image + 56));
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewManager__add_callbackFunc(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_43592DC & 1) == 0 )
  {
    sub_B70694(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    byte_43592DC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusFlavorTextListViewManager_CallbackFunc_c *)v8->klass != ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantStatusFlavorTextListViewManager__add_callbackFunc2(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_43592DE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_43592DE = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc2(v11, v12, v13);
}


bool __fastcall ServantStatusFlavorTextListViewManager__get_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


void __fastcall ServantStatusFlavorTextListViewManager__remove_callbackFunc(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_43592DD & 1) == 0 )
  {
    sub_B70694(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    byte_43592DD = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantStatusFlavorTextListViewManager_CallbackFunc_c *)v8->klass != ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ServantStatusFlavorTextListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall ServantStatusFlavorTextListViewManager__remove_callbackFunc2(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  ServantStatusListViewItem_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_43592DF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_43592DF = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ServantStatusFlavorTextListViewManager__CreateList(v11, v12, v13);
}


void __fastcall ServantStatusFlavorTextListViewManager__set_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *v8; // x19
  float alpha; // s0

  if ( (byte_43592DB & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43592DB = 1;
  }
  this->fields.isInput = value;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_B7076C(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0LL);
    UIProgressBar__set_alpha(v8, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_434F85E & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    byte_434F85E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__Invoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantStatusFlavorTextListViewManager_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, (unsigned int)result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)result, v20);
    goto LABEL_37;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
        ServantStatusFlavorTextListViewManager_ServantProfile_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39___ctor(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39__MoveNext(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *v2; // x19
  int32_t _1__state; // w8
  struct ServantStatusFlavorTextListViewManager_o *_4__this; // x20
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  __int64 targetIndex; // x23
  ServantStatusFlavorTextListViewObject_o *v7; // x21
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v8; // x23
  int32_t size; // w8
  float v10; // s9
  float v11; // s1
  float v12; // s8
  float v13; // s8
  float v14; // s0
  float duration_5__3; // s0
  float *p_duration_5__3; // x22
  float *p_timer_5__4; // x21
  float timer_5__4; // s8
  float deltaTime; // s0
  float v20; // s0
  float v21; // s0
  float v22; // s8
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  bool result; // w0
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_434F85D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)sub_B70694(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    byte_434F85D = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_timer_5__4 = &v2->fields._timer_5__4;
    timer_5__4 = v2->fields._timer_5__4;
    v2->fields.__1__state = -1;
    p_duration_5__3 = &v2->fields._duration_5__3;
    duration_5__3 = v2->fields._duration_5__3;
LABEL_22:
    if ( timer_5__4 < duration_5__3 )
    {
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      v20 = UnityEngine_Mathf__Clamp(timer_5__4 + deltaTime, 0.0, *p_duration_5__3, 0LL);
      *p_timer_5__4 = v20;
      if ( _4__this )
      {
        v21 = ServantStatusFlavorTextListViewManager__DoMoveEaseInOut(
                _4__this,
                v20,
                v2->fields._duration_5__3,
                0.0,
                v2->fields._moveValue_5__2,
                0LL);
        this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)_4__this->fields.scrollView;
        if ( this )
        {
          v22 = v21;
          ((void (__fastcall *)(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *, void *, float, float, float))this->klass[1]._1.namespaze)(
            this,
            this->klass[1]._1.byval_arg.data,
            0.0,
            v21 - v2->fields._prevValue_5__5,
            0.0);
          v2->fields._prevValue_5__5 = v22;
          v2->fields.__2__current = 0LL;
          p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B70630(p__2__current, 0LL, v24, v25, v26, v27, v28, v29);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
      }
LABEL_29:
      sub_B7076C(this, method);
    }
    goto LABEL_27;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_29;
    objectList = _4__this->fields.objectList;
    if ( !objectList )
      goto LABEL_29;
    targetIndex = v2->fields.targetIndex;
    if ( objectList->fields._size <= (unsigned int)targetIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)_4__this->fields.scrollView;
    if ( !this )
      goto LABEL_29;
    v7 = objectList->fields._items->m_Items[targetIndex];
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                              (UnityEngine_Component_o *)this,
                                                                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_29;
    v8 = _4__this->fields.objectList;
    if ( !v8 )
      goto LABEL_29;
    size = v8->fields._size;
    v10 = *((float *)&this[4].fields.__1__state + 1);
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)v8->fields._items->m_Items[size - 1];
    if ( !this )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)(&v11 - 1) = ServantStatusFlavorTextListViewObject__get_BottomPosition(
                                             (ServantStatusFlavorTextListViewObject_o *)this,
                                             0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)_4__this->fields.scrollView;
    if ( !this )
      goto LABEL_29;
    v12 = v11;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                              (UnityEngine_Component_o *)this,
                                                                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_29;
    v13 = vabds_f32(v12, v10) - UIPanel__get_height((UIPanel_o *)this, 0LL);
    if ( v13 <= 0.0 )
    {
      v2->fields._moveValue_5__2 = 0.0;
    }
    else
    {
      if ( !v7 )
        goto LABEL_29;
      TopPosition = ServantStatusFlavorTextListViewObject__get_TopPosition(v7, 0LL);
      v14 = UnityEngine_Mathf__Min(fabsf(TopPosition.fields.y), v13, 0LL);
      v2->fields._moveValue_5__2 = v14;
      if ( v14 > 0.0 )
      {
        duration_5__3 = ServantStatusFlavorTextListViewManager__GetAutoScrollMoveDuration(_4__this, v14, 0LL);
        v2->fields._duration_5__3 = duration_5__3;
        p_duration_5__3 = &v2->fields._duration_5__3;
        v2->fields._prevValue_5__5 = 0.0;
        v2->fields._timer_5__4 = 0.0;
        p_timer_5__4 = &v2->fields._timer_5__4;
        timer_5__4 = 0.0;
        goto LABEL_22;
      }
    }
LABEL_27:
    ActionExtensions__Call(v2->fields.onFinished, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39__System_Collections_IEnumerator_Reset(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39__System_Collections_IEnumerator_get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39__System_IDisposable_Dispose(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F85C & 1) == 0 )
  {
    sub_B70694(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    byte_434F85C = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantStatusFlavorTextListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall ServantStatusFlavorTextListViewManager___c___ctor(
        ServantStatusFlavorTextListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantStatusFlavorTextListViewManager___c___CreateList_b__34_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantCommentEntity_o *a,
        ServantCommentEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.id - b->fields.id;
}


bool __fastcall ServantStatusFlavorTextListViewManager___c___DoAutoScroll_b__36_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantStatusFlavorTextListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.isNew;
}