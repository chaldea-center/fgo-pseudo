void __fastcall ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418D14F & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusFlavorTextListViewManager_TypeInfo, v1);
    byte_418D14F = 1;
  }
  ServantStatusFlavorTextListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
}


void __fastcall ServantStatusFlavorTextListViewManager___ctor(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418D14E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v3);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo, v5);
    byte_418D14E = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.isInput = 1;
  this->fields.initialScrollPosition = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&this->fields.overwriteServantParameterTitleSvtId = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


ServantStatusFlavorTextListViewObject_o *__fastcall ServantStatusFlavorTextListViewManager__AddObjectList(
        ServantStatusFlavorTextListViewManager_o *this,
        UnityEngine_Vector3_o *basePositon,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x22
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  __int64 v13; // x1
  ServantStatusFlavorTextListViewObject_o *Component_srcLineSprite; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x7

  if ( (byte_418D146 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, basePositon);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418D146 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                  (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)UnityEngine_Object__op_Inequality(
                                                                                                    v11,
                                                                                                    0LL,
                                                                                                    0LL);
  Component_srcLineSprite = 0LL;
  if ( ((unsigned __int8)objectList & 1) != 0 )
  {
    if ( !v11
      || (Component_srcLineSprite = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 (UnityEngine_GameObject_o *)v11,
                                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, Component_srcLineSprite, v15),
          !Component_srcLineSprite)
      || (ServantStatusFlavorTextListViewObject__SetItem(
            Component_srcLineSprite,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v16),
          (objectList = this->fields.objectList) == 0LL) )
    {
      sub_B2C434(objectList, v13);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objectList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
  }
  return Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418D144 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_TypeInfo, *(_QWORD *)&targetIndex);
    byte_418D144 = 1;
  }
  v7 = sub_B2C42C(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_TypeInfo);
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41___ctor(
    (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ServantStatusFlavorTextListViewManager__CreateList(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_Object_c **v22; // x28
  UnityEngine_Object_o *scrollView; // x20
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  float v33; // s8
  float v34; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x22
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x4
  const MethodInfo *v52; // x3
  struct UnityEngine_GameObject_o *voice2Object; // x23
  UnityEngine_Object_o *v54; // x23
  const MethodInfo *v55; // x7
  ServantStatusFlavorTextListViewObject_o *v56; // x23
  const MethodInfo *v57; // x3
  ServantStatusListViewItem_o *v58; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  struct UnityEngine_GameObject_o *profileObject; // x22
  UnityEngine_Object_o *v61; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  ServantStatusListViewItem_o *v63; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v65; // x20
  const MethodInfo *v66; // x7
  const MethodInfo *v67; // x3
  struct ServantCommentEntity_array *svtCommentEntityList; // x26
  int max_length; // w8
  unsigned int v70; // w9
  ServantCommentEntity_o *v71; // x23
  struct UnityEngine_GameObject_o *v72; // x24
  UnityEngine_Object_o *v73; // x24
  ServantStatusFlavorTextListViewObject_o *v74; // x24
  _BOOL8 IsOpen; // x0
  const MethodInfo *v76; // x2
  ServantStatusListViewItem_o *v77; // x25
  int32_t id; // w26
  bool IsNew; // w27
  const MethodInfo *v80; // x7
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x7
  System_String_o *CondTitle; // x25
  const MethodInfo *v84; // x2
  __int64 v85; // x25
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w23
  const MethodInfo *v100; // x3
  int v101; // w8
  __int64 v102; // x22
  ServantCommentEntity_o **m_Items; // x20
  int32_t v104; // w23
  ServantCommentEntity_o *v105; // x24
  UnityEngine_Object_c *v106; // x0
  struct UnityEngine_GameObject_o *profile2Object; // x25
  UnityEngine_Object_o *v108; // x25
  ServantStatusFlavorTextListViewObject_o *v109; // x25
  _BOOL8 v110; // x0
  const MethodInfo *v111; // x2
  ServantStatusListViewItem_o *v112; // x26
  int32_t v113; // w27
  ServantStatusFlavorTextListViewManager_o *v114; // x20
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **v115; // x19
  UnityEngine_Object_c **v116; // x21
  bool v117; // w28
  const MethodInfo *v118; // x7
  const MethodInfo *v119; // x7
  System_String_o *v120; // x0
  const MethodInfo *v121; // x2
  const MethodInfo *v122; // x3
  __int64 v123; // x26
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  UnityEngine_Object_c *v136; // x0
  UnityEngine_Object_o *v137; // x20
  UIPanel_o *v138; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v141; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v144; // x22
  EventDelegate_Callback_o *v145; // x21
  struct UIScrollBar_o *v146; // x8
  System_Collections_Generic_List_EventDelegate__o *v147; // x20
  EventDelegate_Callback_o *v148; // x21
  const MethodInfo *v149; // x3
  int overwriteServantParameterTitleSvtId; // w1
  __int64 v151; // x0
  ServantCommentEntity_o **v152; // [xsp+8h] [xbp-A8h]
  struct ServantStatusListViewItem_o **v153; // [xsp+10h] [xbp-A0h]
  struct ServantCommentEntity_array *v154; // [xsp+18h] [xbp-98h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+20h] [xbp-90h]
  bool isPlayVoice; // [xsp+2Ch] [xbp-84h] BYREF
  System_String_o *voice; // [xsp+30h] [xbp-80h] BYREF
  System_String_o *illust; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418D13F & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, mainInfo);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&EventDelegate_TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__,
      v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v13);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v18);
    sub_B2C35C(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__, v19);
    sub_B2C35C(&Method_UIScrollView_OnScrollBar__, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    byte_418D13F = 1;
  }
  basePositon.fields.z = 0.0;
  illust = 0LL;
  *(_QWORD *)&basePositon.fields.x = 0LL;
  voice = 0LL;
  isPlayVoice = 0;
  ServantStatusFlavorTextListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  v22 = &UnityEngine_Object_TypeInfo;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_111;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                transform,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_WebViewObject,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_111;
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_111;
      v33 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v34 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_111;
      v160.fields.x = -v33;
      v160.fields.y = -v34;
      v160.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v160, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_111;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  p_objectList = &this->fields.objectList;
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v44;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  *(_QWORD *)&basePositon.fields.x = 0LL;
  basePositon.fields.z = 0.0;
  transform = (UnityEngine_Component_o *)this->fields.mainInfo;
  if ( !transform )
    goto LABEL_111;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v51);
  if ( System_String__IsNullOrEmpty(voice, 0LL) )
  {
    voice2Object = this->fields.voice2Object;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v54 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)voice2Object,
                                    (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v54 )
        goto LABEL_111;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)v54,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_111;
      v56 = (ServantStatusFlavorTextListViewObject_o *)transform;
      ServantStatusFlavorTextListViewObject__SetItem(
        (ServantStatusFlavorTextListViewObject_o *)transform,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v55);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v56, v57);
      transform = (UnityEngine_Component_o *)this->fields.objectList;
      if ( !transform )
        goto LABEL_111;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    }
  }
  else
  {
    transform = (UnityEngine_Component_o *)ServantStatusFlavorTextListViewManager__AddObjectList(
                                             this,
                                             &basePositon,
                                             this->fields.voiceObject,
                                             v52);
  }
  v58 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_111;
  if ( v58->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v58->fields.commandCodeCommentEntity;
    if ( commandCodeCommentEntity )
    {
      profileObject = this->fields.profileObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v61 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)profileObject,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v61, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v61 )
          goto LABEL_111;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v61,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        v63 = *p_mainInfo;
        commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
        v65 = (ServantStatusFlavorTextListViewObject_o *)Component_srcLineSprite;
        transform = (UnityEngine_Component_o *)CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0LL);
        if ( !v65 )
          goto LABEL_111;
        ServantStatusFlavorTextListViewObject__SetItem(
          v65,
          v63,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v66);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v65, v67);
        transform = (UnityEngine_Component_o *)this->fields.objectList;
        if ( !transform )
          goto LABEL_111;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
      }
    }
  }
  else
  {
    svtCommentEntityList = v58->fields.svtCommentEntityList;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    transform = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
    if ( !svtCommentEntityList )
      goto LABEL_111;
    max_length = svtCommentEntityList->max_length;
    v153 = &this->fields.mainInfo;
    v154 = svtCommentEntityList;
    if ( max_length >= 1 )
    {
      v70 = 0;
      while ( 1 )
      {
        if ( v70 >= max_length )
          goto LABEL_112;
        v71 = svtCommentEntityList->m_Items[v70];
        if ( !v71 )
          goto LABEL_111;
        if ( v71->fields.id == 1 )
          break;
        if ( (int)++v70 >= max_length )
          goto LABEL_68;
      }
      v72 = this->fields.profileObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v73 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)v72,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v73, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v73 )
          goto LABEL_111;
        v74 = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)v73,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        IsOpen = ServantCommentEntity__IsOpen(v71, -1, 1, 0LL);
        if ( IsOpen )
        {
          v77 = *p_mainInfo;
          id = v71->fields.id;
          IsNew = ServantCommentEntity__IsNew(v71, 0LL);
          transform = (UnityEngine_Component_o *)ServantCommentEntity__GetComment(v71, 0LL);
          if ( !v74 )
            goto LABEL_111;
          ServantStatusFlavorTextListViewObject__SetItem(v74, v77, id, 1, IsNew, (System_String_o *)transform, 0, v80);
          p_mainInfo = &this->fields.mainInfo;
          svtCommentEntityList = v154;
        }
        else
        {
          transform = (UnityEngine_Component_o *)ServantStatusFlavorTextListViewManager__GetConditionString(
                                                   (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                                                   v71,
                                                   v76);
          if ( !v74 )
            goto LABEL_111;
          ServantStatusFlavorTextListViewObject__SetItem(
            v74,
            *p_mainInfo,
            v71->fields.id,
            0,
            0,
            (System_String_o *)transform,
            0,
            v82);
        }
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v74, v81);
        CondTitle = ServantCommentEntity__GetCondTitle(v71, 0LL);
        if ( !System_String__IsNullOrEmpty(CondTitle, 0LL) )
          ServantStatusFlavorTextListViewObject__SetCondTitle(v74, CondTitle, v84);
        if ( !ServantCommentEntity__IsConst(v71, 0LL) )
        {
          v85 = sub_B2C42C(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
          ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
            (ServantStatusFlavorTextListViewManager_ServantProfile_o *)v85,
            0LL);
          if ( !v85 )
            goto LABEL_111;
          *(_QWORD *)(v85 + 16) = v71;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v85 + 16),
            (System_Int32_array **)v71,
            v86,
            v87,
            v88,
            v89,
            v90,
            v91);
          *(_QWORD *)(v85 + 24) = v74;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v85 + 24),
            (System_Int32_array **)v74,
            v92,
            v93,
            v94,
            v95,
            v96,
            v97);
          *(_DWORD *)(v85 + 32) = 0;
          transform = (UnityEngine_Component_o *)*p_servantProfileList;
          if ( !*p_servantProfileList )
            goto LABEL_111;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
        }
        transform = (UnityEngine_Component_o *)*p_objectList;
        if ( !*p_objectList )
          goto LABEL_111;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
      }
    }
LABEL_68:
    if ( !*p_mainInfo )
      goto LABEL_111;
    svtEntity = (*p_mainInfo)->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_111;
    type = svtEntity->fields.type;
    if ( SvtType__IsServant(type, 0LL)
      || (transform = (UnityEngine_Component_o *)SvtType__IsEnemyCollectionDetail(type, 0LL),
          ((unsigned __int8)transform & 1) != 0) )
    {
      transform = (UnityEngine_Component_o *)ServantStatusFlavorTextListViewManager__AddObjectList(
                                               this,
                                               &basePositon,
                                               this->fields.paramObject,
                                               v100);
    }
    v101 = svtCommentEntityList->max_length;
    if ( v101 >= 1 )
    {
      v102 = 0LL;
      m_Items = svtCommentEntityList->m_Items;
      v104 = 1;
      v152 = svtCommentEntityList->m_Items;
      while ( (unsigned int)v102 < v101 )
      {
        v105 = m_Items[v102];
        if ( !v105 )
          goto LABEL_111;
        if ( v105->fields.id != 1 )
        {
          v106 = *v22;
          profile2Object = this->fields.profile2Object;
          if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v106->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v106);
          v108 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)profile2Object,
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v108 )
              goto LABEL_111;
            v109 = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)v108,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
            v110 = ServantCommentEntity__IsOpen(v105, -1, 1, 0LL);
            if ( v110 )
            {
              v112 = *p_mainInfo;
              v113 = v105->fields.id;
              v114 = this;
              v115 = p_objectList;
              v116 = v22;
              v117 = ServantCommentEntity__IsNew(v105, 0LL);
              transform = (UnityEngine_Component_o *)ServantCommentEntity__GetComment(v105, 0LL);
              if ( !v109 )
                goto LABEL_111;
              ServantStatusFlavorTextListViewObject__SetItem(
                v109,
                v112,
                v113,
                1,
                v117,
                (System_String_o *)transform,
                v104,
                v118);
              v22 = v116;
              p_objectList = v115;
              this = v114;
              m_Items = v152;
              p_mainInfo = v153;
            }
            else
            {
              transform = (UnityEngine_Component_o *)ServantStatusFlavorTextListViewManager__GetConditionString(
                                                       (ServantStatusFlavorTextListViewManager_o *)v110,
                                                       v105,
                                                       v111);
              if ( !v109 )
                goto LABEL_111;
              ServantStatusFlavorTextListViewObject__SetItem(
                v109,
                *p_mainInfo,
                v105->fields.id,
                0,
                0,
                (System_String_o *)transform,
                v104,
                v119);
            }
            v120 = ServantCommentEntity__GetCondTitle(v105, 0LL);
            ServantStatusFlavorTextListViewObject__SetCondTitle(v109, v120, v121);
            ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v109, v122);
            v123 = sub_B2C42C(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
            ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
              (ServantStatusFlavorTextListViewManager_ServantProfile_o *)v123,
              0LL);
            if ( !v123 )
              goto LABEL_111;
            *(_QWORD *)(v123 + 16) = v105;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v123 + 16),
              (System_Int32_array **)v105,
              v124,
              v125,
              v126,
              v127,
              v128,
              v129);
            *(_QWORD *)(v123 + 24) = v109;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v123 + 24),
              (System_Int32_array **)v109,
              v130,
              v131,
              v132,
              v133,
              v134,
              v135);
            *(_DWORD *)(v123 + 32) = 0;
            transform = (UnityEngine_Component_o *)*p_servantProfileList;
            if ( !*p_servantProfileList )
              goto LABEL_111;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v123,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
            transform = (UnityEngine_Component_o *)*p_objectList;
            if ( !*p_objectList )
              goto LABEL_111;
            ++v104;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v109,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
            svtCommentEntityList = v154;
          }
        }
        v101 = svtCommentEntityList->max_length;
        if ( (int)++v102 >= v101 )
          goto LABEL_93;
      }
LABEL_112:
      v151 = sub_B2C460(transform);
      sub_B2C400(v151, 0LL);
    }
  }
LABEL_93:
  v136 = *v22;
  v137 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v136->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v136);
  if ( UnityEngine_Object__op_Inequality(v137, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_111;
    UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
  }
  transform = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !transform )
    goto LABEL_111;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           transform,
                                           (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_111;
  v138 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0LL);
  height = UIPanel__get_height(v138, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.scrollView;
  this->fields.scrollViewSize.fields.x = width;
  this->fields.scrollViewSize.fields.y = height;
  if ( !transform )
    goto LABEL_111;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_111;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)transform,
                                         0LL);
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v141);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_111;
  onChange = scrollBar->fields.onChange;
  v144 = (Il2CppObject *)this->fields.scrollView;
  v145 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v145, v144, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)EventDelegate__Add(onChange, v145, 0LL);
  v146 = this->fields.scrollBar;
  if ( !v146 )
LABEL_111:
    sub_B2C434(transform, v24);
  v147 = v146->fields.onChange;
  v148 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v148,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0LL);
  EventDelegate__Add(v147, v148, 0LL);
  overwriteServantParameterTitleSvtId = this->fields.overwriteServantParameterTitleSvtId;
  if ( overwriteServantParameterTitleSvtId >= 1 )
    ServantStatusFlavorTextListViewManager__UpdateParameter(
      this,
      overwriteServantParameterTitleSvtId,
      this->fields.overwriteServantParameterTitleImageLimitCount,
      v149);
}


void __fastcall ServantStatusFlavorTextListViewManager__DestroyList(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418D147 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418D147 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B2C434(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v19.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v11, v12, v13, v14, v15, v16);
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
    sub_B2C434(objectList, method);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__DoAutoScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  ServantStatusFlavorTextListViewManager___c_c *v10; // x0
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__38_0; // x22
  Il2CppObject *v13; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t Index; // w0
  const MethodInfo *v22; // x3
  System_Collections_IEnumerator_o *v23; // x1

  if ( (byte_418D141 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__, onFinished);
    sub_B2C35C(&Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__, v5);
    sub_B2C35C(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo, v6);
    sub_B2C35C(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__38_0__, v7);
    sub_B2C35C(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v8);
    byte_418D141 = 1;
  }
  objectList = this->fields.objectList;
  v10 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    v10 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__38_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__38_0,
      v13,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__38_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__);
    v14 = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    v14->__9__38_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__38_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v14->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !objectList )
    sub_B2C434(v10, onFinished);
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)objectList,
            (System_Predicate_T__o *)_9__38_0,
            (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( (Index & 0x80000000) != 0 )
  {
    ActionExtensions__Call(onFinished, 0LL);
  }
  else
  {
    v23 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v22);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ServantCommentAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  ServantCommentAddMaster_o *v13; // x20
  System_String_o *v14; // x22
  System_String_o *ConditionString; // x0
  bool IsOpen; // w21
  bool IsNullOrEmpty; // w0
  __int64 v18; // x1
  Il2CppObject *Conditiontext; // x21
  LocalizationManager_c *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  int32_t svtId; // w3
  int32_t id; // w4
  int32_t priority; // w5
  System_String_o *v27; // x19
  System_String_o *v28; // x0

  if ( (byte_418D140 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCommentAddMaster___, svtCommentEntity);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11991/*"SERVANT_STATUS_PROFILE_CONDITION"*/, v6);
    sub_B2C35C(&StringLiteral_15972/*"_FLAVOR2"*/, v7);
    sub_B2C35C(&StringLiteral_15971/*"_FLAVOR"*/, v8);
    sub_B2C35C(&StringLiteral_3292/*"COND_TYPE_AND_FLAVOR2"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418D140 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
    goto LABEL_40;
  v13 = Master_WarQuestSelectionMaster;
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
                                                                    (System_String_o *)StringLiteral_11991/*"SERVANT_STATUS_PROFILE_CONDITION"*/,
                                                                    0LL);
    if ( v13 )
    {
      v14 = (System_String_o *)Master_WarQuestSelectionMaster;
      ConditionString = ServantCommentAddMaster__GetConditionString(
                          v13,
                          (System_String_o *)StringLiteral_15971/*"_FLAVOR"*/,
                          (System_String_o *)StringLiteral_15972/*"_FLAVOR2"*/,
                          svtCommentEntity->fields.svtId,
                          svtCommentEntity->fields.id,
                          svtCommentEntity->fields.priority,
                          -1,
                          0LL);
LABEL_33:
      Conditiontext = (Il2CppObject *)ConditionString;
      return System_String__Format(v14, Conditiontext, 0LL);
    }
LABEL_40:
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  }
  if ( !v13 )
    goto LABEL_40;
  IsOpen = ServantCommentAddMaster__IsOpen(
             v13,
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
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11991/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
    ConditionString = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_15971/*"_FLAVOR"*/,
                        0LL);
    goto LABEL_33;
  }
  Conditiontext = (Il2CppObject *)ServantCommentEntity__GetConditiontext(
                                    svtCommentEntity,
                                    (System_String_o *)StringLiteral_15972/*"_FLAVOR2"*/,
                                    0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4185BC0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    byte_4185BC0 = 1;
  }
  v20 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager_TypeInfo;
  }
  if ( System_String__op_Equality((System_String_o *)Conditiontext, v20->static_fields->unknownNameText, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = (System_String_o *)StringLiteral_11991/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3292/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
    v23 = System_String__Concat_44305532((System_String_o *)Conditiontext, v22, 0LL);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v27 = v23;
    v28 = ServantCommentAddMaster__GetConditionString(
            v13,
            (System_String_o *)StringLiteral_15971/*"_FLAVOR"*/,
            (System_String_o *)StringLiteral_15972/*"_FLAVOR2"*/,
            svtId,
            id,
            priority,
            -1,
            0LL);
    Conditiontext = (Il2CppObject *)System_String__Concat_44305532(v27, v28, 0LL);
    v21 = (System_String_o *)StringLiteral_11991/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
  }
  v14 = LocalizationManager__Get(v21, 0LL);
  return System_String__Format(v14, Conditiontext, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__OnChangeScrollBarValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v11; // s1
  float v12; // s8
  _BOOL8 v13; // x0
  __int64 v14; // x1
  float v15; // s0
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418D142 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantCommentEntity__Invoke__, method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418D142 = 1;
  }
  memset(&v17, 0, sizeof(v17));
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
      || (*(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)scrollView,
                                                   0LL),
          (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
    {
      sub_B2C434(scrollView, v9);
    }
    v12 = v11 - this->fields.initialScrollPosition.fields.y;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
      if ( !v13 )
        break;
      if ( !v17.fields.current )
        sub_B2C434(v13, v14);
      v15 = *(float *)&v17.fields.current[2].klass;
      if ( v15 <= v12 && v12 <= (float)(v15 + this->fields.scrollViewSize.fields.y) )
      {
        OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
        if ( OnFinishedReadEvent )
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)OnFinishedReadEvent,
            (System_Uri_o *)v17.fields.current[1].klass,
            (const MethodInfo_24BBAEC *)Method_System_Action_ServantCommentEntity__Invoke__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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
    sub_B2C434(this, 0LL);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v12 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0LL;
      sub_B2C2F8(p_callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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

  if ( (byte_418D14B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418D14B = 1;
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
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418D149 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418D149 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      objectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v18, v19);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusFlavorTextListViewObject__Init(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v17,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject_34116880(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418D14A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418D14A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      objectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v14 )
        break;
      current = v19.fields.current;
      if ( !v19.fields.current )
        sub_B2C434(v14, v15);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v19.fields.current,
             v15) != 5 )
      {
        v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantStatusFlavorTextListViewObject__Init(
          (ServantStatusFlavorTextListViewObject_o *)current,
          mode,
          v17,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v18);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_34116668(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetMode_34116668(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_418D148 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_B2C35C(
                                                         &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
                                                         *(_QWORD *)&mode);
    byte_418D148 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B2C434(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v4, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_34116880(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode_34116828(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_34116668(this, mode, v10);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_418D145 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_B2C35C(
                                                         &ServantStatusFlavorTextListViewManager_TypeInfo,
                                                         basePositon);
    byte_418D145 = 1;
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
    sub_B2C434(this, basePositon);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *scrollView; // x0
  float height; // s0
  float v9; // s8
  UnityEngine_Component_o *v10; // x8
  float v11; // s9
  Il2CppObject *current; // x20
  ServantStatusFlavorTextListViewObject_o *monitor; // x0
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o ProfileLastLinePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418D143 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v6);
    byte_418D143 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v9 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   scrollView,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL)
    || (v10 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
  {
    sub_B2C434(scrollView, method);
  }
  v11 = *((float *)&v10[12].fields + 1);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v14 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B2C434(v14, v15);
    monitor = (ServantStatusFlavorTextListViewObject_o *)v16.fields.current[1].monitor;
    if ( !monitor )
      sub_B2C434(0LL, v15);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(monitor, v15);
    *(float *)&current[2].klass = UnityEngine_Mathf__Max(
                                    0.0,
                                    vabds_f32(ProfileLastLinePosition.fields.y, v11) - v9,
                                    0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewManager__UpdateCvName(
        ServantStatusFlavorTextListViewManager_o *this,
        System_String_o *cvName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418D14C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      cvName);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v8);
    byte_418D14C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, cvName);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      objectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v10 )
        break;
      current = v14.fields.current;
      if ( !v14.fields.current )
        sub_B2C434(v10, v11);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v14.fields.current,
             v11) == 3 )
      {
        ServantStatusFlavorTextListViewObject__SetCvName(
          (ServantStatusFlavorTextListViewObject_o *)current,
          cvName,
          v13);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__UpdateParameter(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  ServantLimitAddEntity_o *Entity; // x0
  ServantLimitAddEntity_o *v18; // x23
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  ServantStatusFlavorTextListViewObject_o *current; // x22
  System_String_o *CondTitle; // x0
  const MethodInfo *v23; // x2
  System_Int32_array *OverwriteServantParameter; // x0
  __int64 v25; // x1
  int32_t v26; // w1
  int32_t ServantParameterLimitCount; // w21
  WebViewManager_o *v28; // x0
  __int64 v29; // x1
  ServantLimitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v31; // x1
  ServantLimitEntity_o *v32; // x0
  __int64 v33; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v34; // x8
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x8
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418D14D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_418D14D = 1;
  }
  memset(&v37, 0, sizeof(v37));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  Entity = ServantLimitAddMaster__GetEntity((ServantLimitAddMaster_o *)Instance, svtId, imageLimitCount, 0LL);
  if ( !Entity )
    return;
  v18 = Entity;
  Instance = (DataManager_o *)this->fields.objectList;
  if ( !Instance )
LABEL_29:
    sub_B2C434(Instance, v16);
  if ( SLODWORD(Instance->fields.datalist) <= 0 )
  {
    this->fields.overwriteServantParameterTitleSvtId = svtId;
    this->fields.overwriteServantParameterTitleImageLimitCount = imageLimitCount;
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    v37 = v36;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v19 )
        break;
      current = (ServantStatusFlavorTextListViewObject_o *)v37.fields.current;
      if ( !v37.fields.current )
        sub_B2C434(v19, v20);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v37.fields.current,
             v20) == 5 )
      {
        CondTitle = ServantLimitAddEntity__GetCondTitle(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        ServantStatusFlavorTextListViewObject__SetCondTitle(current, CondTitle, v23);
        OverwriteServantParameter = ServantLimitAddEntity__GetOverwriteServantParameter(v18, 0LL);
        if ( OverwriteServantParameter && (int)OverwriteServantParameter->max_length >= 6 )
        {
          itemDraw = current->fields.itemDraw;
          if ( !itemDraw )
            sub_B2C434(OverwriteServantParameter, v25);
          ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, void *))itemDraw->klass->vtable._8_SetParameterGauge.method)(
            current->fields.itemDraw,
            (unsigned int)OverwriteServantParameter->m_Items[1],
            (unsigned int)OverwriteServantParameter->m_Items[2],
            (unsigned int)OverwriteServantParameter->m_Items[3],
            (unsigned int)OverwriteServantParameter->m_Items[4],
            (unsigned int)OverwriteServantParameter->m_Items[5],
            (unsigned int)OverwriteServantParameter->m_Items[6],
            itemDraw->klass[1]._1.image);
        }
        else
        {
          if ( imageLimitCount >= 11 )
            v26 = 0;
          else
            v26 = imageLimitCount;
          ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(v18, v26, 0LL);
          v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v28 )
            sub_B2C434(0LL, v29);
          MasterData_WarQuestSelectionMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)v28,
                                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B2C434(0LL, v31);
          v32 = ServantLimitMaster__GetEntity(
                  MasterData_WarQuestSelectionMaster,
                  svtId,
                  ServantParameterLimitCount,
                  0LL);
          if ( !v32 )
            sub_B2C434(0LL, v33);
          v34 = current->fields.itemDraw;
          if ( !v34 )
            sub_B2C434(v32, v33);
          ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, void *))v34->klass->vtable._8_SetParameterGauge.method)(
            current->fields.itemDraw,
            (unsigned int)v32->fields.power,
            (unsigned int)v32->fields.defense,
            (unsigned int)v32->fields.agility,
            (unsigned int)v32->fields.magic,
            (unsigned int)v32->fields.luck,
            (unsigned int)v32->fields.treasureDevice,
            v34->klass[1]._1.image);
        }
        *(_QWORD *)&this->fields.overwriteServantParameterTitleSvtId = -1LL;
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
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

  if ( (byte_418D13B & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_418D13B = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418D13D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418D13D = 1;
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
    v9 = sub_B20D74(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418D13C & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_418D13C = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418D13E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418D13E = 1;
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
    v9 = sub_B20D74(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  ServantStatusFlavorTextListViewManager__CreateList(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418D13A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, value);
    byte_418D13A = 1;
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
      sub_B2C434(v6, v7);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_418542C & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    byte_418542C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__Invoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantStatusFlavorTextListViewManager_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantStatusFlavorTextListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)result, v22);
    goto LABEL_37;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
        ServantStatusFlavorTextListViewManager_ServantProfile_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41___ctor(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41__MoveNext(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct ServantStatusFlavorTextListViewManager_o *_4__this; // x20
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  __int64 targetIndex; // x23
  ServantStatusFlavorTextListViewObject_o *v9; // x21
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v10; // x23
  int32_t size; // w8
  float v12; // s9
  float v13; // s1
  float v14; // s8
  float v15; // s8
  float v16; // s0
  float duration_5__3; // s0
  float *p_duration_5__3; // x22
  float *p_timer_5__4; // x21
  float timer_5__4; // s8
  float deltaTime; // s0
  float v22; // s0
  float v23; // s0
  float v24; // s8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_418542B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v3);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)sub_B2C35C(
                                                                              &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__,
                                                                              v4);
    byte_418542B = 1;
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
      v22 = UnityEngine_Mathf__Clamp(timer_5__4 + deltaTime, 0.0, *p_duration_5__3, 0LL);
      *p_timer_5__4 = v22;
      if ( _4__this )
      {
        v23 = ServantStatusFlavorTextListViewManager__DoMoveEaseInOut(
                _4__this,
                v22,
                v2->fields._duration_5__3,
                0.0,
                v2->fields._moveValue_5__2,
                0LL);
        this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)_4__this->fields.scrollView;
        if ( this )
        {
          v24 = v23;
          ((void (__fastcall *)(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *, void *, float, float, float))this->klass[1]._1.namespaze)(
            this,
            this->klass[1]._1.byval_arg.data,
            0.0,
            v23 - v2->fields._prevValue_5__5,
            0.0);
          v2->fields._prevValue_5__5 = v24;
          v2->fields.__2__current = 0LL;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, 0LL);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_29:
      sub_B2C434(this, method);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)_4__this->fields.scrollView;
    if ( !this )
      goto LABEL_29;
    v9 = objectList->fields._items->m_Items[targetIndex];
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                              (UnityEngine_Component_o *)this,
                                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_29;
    v10 = _4__this->fields.objectList;
    if ( !v10 )
      goto LABEL_29;
    size = v10->fields._size;
    v12 = *((float *)&this[4].fields.__1__state + 1);
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)v10->fields._items->m_Items[size - 1];
    if ( !this )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)(&v13 - 1) = ServantStatusFlavorTextListViewObject__get_BottomPosition(
                                             (ServantStatusFlavorTextListViewObject_o *)this,
                                             0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)_4__this->fields.scrollView;
    if ( !this )
      goto LABEL_29;
    v14 = v13;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                              (UnityEngine_Component_o *)this,
                                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_29;
    v15 = vabds_f32(v14, v12) - UIPanel__get_height((UIPanel_o *)this, 0LL);
    if ( v15 <= 0.0 )
    {
      v2->fields._moveValue_5__2 = 0.0;
    }
    else
    {
      if ( !v9 )
        goto LABEL_29;
      TopPosition = ServantStatusFlavorTextListViewObject__get_TopPosition(v9, 0LL);
      v16 = UnityEngine_Mathf__Min(fabsf(TopPosition.fields.y), v15, 0LL);
      v2->fields._moveValue_5__2 = v16;
      if ( v16 > 0.0 )
      {
        duration_5__3 = ServantStatusFlavorTextListViewManager__GetAutoScrollMoveDuration(_4__this, v16, 0LL);
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


Il2CppObject *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41__System_Collections_IEnumerator_Reset(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41__System_Collections_IEnumerator_get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41__System_IDisposable_Dispose(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_418542A & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v1);
    byte_418542A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantStatusFlavorTextListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantStatusFlavorTextListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ServantStatusFlavorTextListViewManager___c___ctor(
        ServantStatusFlavorTextListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantStatusFlavorTextListViewManager___c___DoAutoScroll_b__38_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantStatusFlavorTextListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.isNew;
}