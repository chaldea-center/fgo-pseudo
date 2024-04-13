void __fastcall ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED317 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusFlavorTextListViewManager_TypeInfo, v1, v2, v3);
    byte_42ED317 = 1;
  }
  ServantStatusFlavorTextListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
}


void __fastcall ServantStatusFlavorTextListViewManager___ctor(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42ED316 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
      v11,
      v12,
      v13);
    byte_42ED316 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *v19; // x22
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  __int64 v21; // x1
  ServantStatusFlavorTextListViewObject_o *Component_srcLineSprite; // x21
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x7

  if ( (byte_42ED30E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___,
      (_DWORD)basePositon,
      (_DWORD)prefab,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42ED30E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)UnityEngine_Object__op_Inequality(
                                                                                                    v19,
                                                                                                    0LL,
                                                                                                    0LL);
  Component_srcLineSprite = 0LL;
  if ( ((unsigned __int8)objectList & 1) != 0 )
  {
    if ( !v19
      || (Component_srcLineSprite = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 (UnityEngine_GameObject_o *)v19,
                                                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, Component_srcLineSprite, v23),
          !Component_srcLineSprite)
      || (ServantStatusFlavorTextListViewObject__SetItem(
            Component_srcLineSprite,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v24),
          (objectList = this->fields.objectList) == 0LL) )
    {
      sub_B5D69C(objectList, v21);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objectList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
  }
  return Component_srcLineSprite;
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

  if ( (byte_42ED30C & 1) == 0 )
  {
    sub_B5D5C4(
      &ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_TypeInfo,
      targetIndex,
      (_DWORD)onFinished,
      method);
    byte_42ED30C = 1;
  }
  v7 = sub_B5D694(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_TypeInfo);
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41___ctor(
    (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ServantStatusFlavorTextListViewManager__CreateList(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  UnityEngine_Object_c **v81; // x27
  UnityEngine_Object_o *scrollView; // x20
  __int64 v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  void *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  float v92; // s8
  float v93; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v95; // x22
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v102; // x22
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  const MethodInfo *v109; // x4
  const MethodInfo *v110; // x3
  struct UnityEngine_GameObject_o *voice2Object; // x23
  UnityEngine_Object_o *v112; // x23
  const MethodInfo *v113; // x7
  ServantStatusFlavorTextListViewObject_o *v114; // x23
  const MethodInfo *v115; // x3
  ServantStatusListViewItem_o *v116; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  struct UnityEngine_GameObject_o *profileObject; // x22
  UnityEngine_Object_o *v119; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  ServantStatusListViewItem_o *v121; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v123; // x20
  const MethodInfo *v124; // x7
  const MethodInfo *v125; // x3
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v126; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__36_0; // x24
  Il2CppObject *v129; // x22
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  int size; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v138; // x20
  __int64 v139; // x21
  int v140; // w26
  int v141; // w22
  ServantCommentEntity_o *v142; // x24
  struct ServantEntity_o *v143; // x8
  int32_t v144; // w25
  const MethodInfo *v145; // x3
  UnityEngine_Object_c *v146; // x0
  struct UnityEngine_GameObject_o *profile2Object; // x25
  UnityEngine_Object_o *v148; // x25
  UnityEngine_Object_c *v149; // x0
  ServantStatusFlavorTextListViewObject_o *v150; // x25
  int v151; // w8
  _BOOL8 IsOpen; // x0
  const MethodInfo *v153; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v154; // x26
  ServantStatusFlavorTextListViewManager_o *v155; // x20
  UnityEngine_Object_c **v156; // x19
  ServantStatusListViewItem_o **v157; // x23
  ServantStatusListViewItem_o *v158; // x27
  int32_t id; // w28
  bool IsNew; // w22
  const MethodInfo *v161; // x7
  const MethodInfo *v162; // x3
  const MethodInfo *v163; // x7
  System_String_o *CondTitle; // x26
  const MethodInfo *v165; // x2
  __int64 v166; // x26
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  const MethodInfo *v181; // x3
  UnityEngine_Object_c *v182; // x0
  UnityEngine_Object_o *v183; // x20
  UIPanel_o *v184; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v187; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v190; // x22
  EventDelegate_Callback_o *v191; // x21
  struct UIScrollBar_o *v192; // x8
  System_Collections_Generic_List_EventDelegate__o *v193; // x20
  EventDelegate_Callback_o *v194; // x21
  const MethodInfo *v195; // x3
  int overwriteServantParameterTitleSvtId; // w1
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // [xsp+0h] [xbp-A0h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+8h] [xbp-98h]
  int32_t profileNum; // [xsp+10h] [xbp-90h]
  int v200; // [xsp+14h] [xbp-8Ch]
  int v201; // [xsp+18h] [xbp-88h]
  bool isPlayVoice; // [xsp+1Ch] [xbp-84h] BYREF
  System_String_o *voice; // [xsp+20h] [xbp-80h] BYREF
  System_String_o *illust; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v206; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ED307 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)mainInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Comparison_ServantCommentEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_ServantCommentEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_ServantCommentEntity___, v21, v22, v23);
    sub_B5D5C4(&EventDelegate_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v30, v31, v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__,
      v33,
      v34,
      v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__Sort__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, v39, v40, v41);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v42,
      v43,
      v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v48, v49, v50);
    sub_B5D5C4(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v51, v52, v53);
    sub_B5D5C4(
      &System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
      v54,
      v55,
      v56);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v57, v58, v59);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__, v66, v67, v68);
    sub_B5D5C4(&Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__36_0__, v69, v70, v71);
    sub_B5D5C4(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&Method_UIScrollView_OnScrollBar__, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_1/*""*/, v78, v79, v80);
    byte_42ED307 = 1;
  }
  basePositon.fields.z = 0.0;
  illust = 0LL;
  *(_QWORD *)&basePositon.fields.x = 0LL;
  voice = 0LL;
  isPlayVoice = 0;
  ServantStatusFlavorTextListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  v81 = &UnityEngine_Object_TypeInfo;
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
      goto LABEL_131;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)transform,
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_131;
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_131;
      v92 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v93 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_131;
      v206.fields.x = -v92;
      v206.fields.y = -v93;
      v206.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v206, 0LL);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_131;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  v95 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v95,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v95;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v102 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v102,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v102;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v102,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  *(_QWORD *)&basePositon.fields.x = 0LL;
  basePositon.fields.z = 0.0;
  transform = this->fields.mainInfo;
  if ( !transform )
    goto LABEL_131;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v109);
  if ( System_String__IsNullOrEmpty(voice, 0LL) )
  {
    voice2Object = this->fields.voice2Object;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v112 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)voice2Object,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality(v112, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v112 )
        goto LABEL_131;
      transform = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                    (UnityEngine_GameObject_o *)v112,
                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_131;
      v114 = (ServantStatusFlavorTextListViewObject_o *)transform;
      ServantStatusFlavorTextListViewObject__SetItem(
        (ServantStatusFlavorTextListViewObject_o *)transform,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v113);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v114, v115);
      transform = this->fields.objectList;
      if ( !transform )
        goto LABEL_131;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v114,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    }
  }
  else
  {
    transform = ServantStatusFlavorTextListViewManager__AddObjectList(
                  this,
                  &basePositon,
                  this->fields.voiceObject,
                  v110);
  }
  v116 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_131;
  if ( v116->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v116->fields.commandCodeCommentEntity;
    if ( !commandCodeCommentEntity )
      goto LABEL_113;
    profileObject = this->fields.profileObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v119 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)profileObject,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality(v119, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_113;
    if ( v119 )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)v119,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      v121 = *p_mainInfo;
      commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
      v123 = (ServantStatusFlavorTextListViewObject_o *)Component_srcLineSprite;
      transform = CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0LL);
      if ( v123 )
      {
        ServantStatusFlavorTextListViewObject__SetItem(
          v123,
          v121,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v124);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v123, v125);
        transform = this->fields.objectList;
        if ( transform )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v123,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
          goto LABEL_113;
        }
      }
    }
    goto LABEL_131;
  }
  p_objectList = &this->fields.objectList;
  v126 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v116->fields.svtCommentEntityList,
                                                                                   (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  static_fields = (struct ServantStatusFlavorTextListViewManager___c_StaticFields *)*((_QWORD *)transform + 23);
  _9__36_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (*((_BYTE *)transform + 307) & 4) != 0 && !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    }
    v129 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantCommentEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__36_0,
      v129,
      Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__36_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantCommentEntity___ctor__);
    v130 = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    v130->__9__36_0 = (struct System_Comparison_ServantCommentEntity__o *)_9__36_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v130->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v131,
      v132,
      v133,
      v134,
      v135,
      v136);
  }
  if ( !v126 )
    goto LABEL_131;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v126,
    (System_Comparison_T__o *)_9__36_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
  size = v126->fields._size;
  v138 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.objectList;
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
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v181);
        goto LABEL_113;
      }
    }
    goto LABEL_131;
  }
  v139 = 0LL;
  v140 = 0;
  v141 = 1;
  do
  {
    if ( size <= (unsigned int)v139 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v142 = (ServantCommentEntity_o *)v126->fields._items->m_Items[v139];
    if ( ((_DWORD)v139 == 0) | v140 & 1 )
    {
      if ( !v142 )
        goto LABEL_131;
    }
    else
    {
      if ( !v142 )
        goto LABEL_131;
      if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)v126->fields._items->m_Items[v139], 0LL) )
      {
        if ( v126->fields._size <= (unsigned int)(v139 - 1) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        transform = (void *)*((_QWORD *)&v126->fields._items->max_length + v139);
        if ( !transform )
          goto LABEL_131;
        if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)transform, 0LL) )
          goto LABEL_74;
      }
      transform = (void *)ServantCommentEntity__IsDetailLabel(v142, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( v126->fields._size <= (unsigned int)(v139 - 1) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        transform = (void *)*((_QWORD *)&v126->fields._items->max_length + v139);
        if ( !transform )
          goto LABEL_131;
        transform = (void *)ServantCommentEntity__IsDetailLabel((ServantCommentEntity_o *)transform, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
          goto LABEL_74;
      }
      if ( !*p_mainInfo )
        goto LABEL_131;
      v143 = (*p_mainInfo)->fields.svtEntity;
      if ( !v143 )
        goto LABEL_131;
      v144 = v143->fields.type;
      if ( !SvtType__IsServant(v144, 0LL) && !SvtType__IsEnemyCollectionDetail(v144, 0LL) )
      {
LABEL_74:
        v140 = 0;
      }
      else
      {
        ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v145);
        v140 = 1;
      }
    }
    if ( ServantCommentEntity__IsDetailLabel(v142, 0LL) )
    {
      v146 = *v81;
      profile2Object = this->fields.profileObject;
    }
    else
    {
      v148 = 0LL;
      if ( !ServantCommentEntity__IsProfileLabel(v142, 0LL) )
        goto LABEL_83;
      v146 = *v81;
      profile2Object = this->fields.profile2Object;
    }
    if ( (BYTE3(v146->vtable._0_Equals.methodPtr) & 4) != 0 && !v146->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v146);
    v148 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)profile2Object,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_83:
    v149 = *v81;
    if ( (BYTE3((*v81)->vtable._0_Equals.methodPtr) & 4) != 0 && !v149->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v149);
    transform = (void *)UnityEngine_Object__op_Inequality(v148, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v148 )
        goto LABEL_131;
      v150 = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)v148,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( ServantCommentEntity__IsProfileLabel(v142, 0LL) )
        v151 = v141;
      else
        v151 = 0;
      profileNum = v151;
      IsOpen = ServantCommentEntity__IsOpen(v142, -1, 1, 0LL);
      v200 = v140;
      v201 = v141;
      if ( IsOpen )
      {
        v154 = v126;
        v155 = this;
        v156 = v81;
        v157 = p_mainInfo;
        v158 = *p_mainInfo;
        id = v142->fields.id;
        IsNew = ServantCommentEntity__IsNew(v142, 0LL);
        transform = ServantCommentEntity__GetComment(v142, 0LL);
        if ( !v150 )
          goto LABEL_131;
        ServantStatusFlavorTextListViewObject__SetItem(
          v150,
          v158,
          id,
          1,
          IsNew,
          (System_String_o *)transform,
          profileNum,
          v161);
        v81 = v156;
        this = v155;
        v138 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)p_objectList;
        p_mainInfo = v157;
        v126 = v154;
      }
      else
      {
        transform = ServantStatusFlavorTextListViewManager__GetConditionString(
                      (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                      v142,
                      v153);
        if ( !v150 )
          goto LABEL_131;
        ServantStatusFlavorTextListViewObject__SetItem(
          v150,
          *p_mainInfo,
          v142->fields.id,
          0,
          0,
          (System_String_o *)transform,
          profileNum,
          v163);
      }
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v150, v162);
      CondTitle = ServantCommentEntity__GetCondTitle(v142, 0LL);
      if ( ServantCommentEntity__IsProfileLabel(v142, 0LL) || !System_String__IsNullOrEmpty(CondTitle, 0LL) )
        ServantStatusFlavorTextListViewObject__SetCondTitle(v150, CondTitle, v165);
      if ( ServantCommentEntity__IsProfileLabel(v142, 0LL) || !ServantCommentEntity__IsConst(v142, 0LL) )
      {
        v166 = sub_B5D694(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
        ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
          (ServantStatusFlavorTextListViewManager_ServantProfile_o *)v166,
          0LL);
        if ( !v166 )
          goto LABEL_131;
        *(_QWORD *)(v166 + 16) = v142;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v166 + 16),
          (System_Int32_array **)v142,
          v167,
          v168,
          v169,
          v170,
          v171,
          v172);
        *(_QWORD *)(v166 + 24) = v150;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v166 + 24),
          (System_Int32_array **)v150,
          v173,
          v174,
          v175,
          v176,
          v177,
          v178);
        *(_DWORD *)(v166 + 32) = 0;
        transform = *p_servantProfileList;
        if ( !*p_servantProfileList )
          goto LABEL_131;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v166,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
      }
      transform = (void *)ServantCommentEntity__IsProfileLabel(v142, 0LL);
      if ( !*v138 )
        goto LABEL_131;
      v141 = v201 + ((unsigned __int8)transform & 1);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v138,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v150,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
      v140 = v200;
    }
    size = v126->fields._size;
    ++v139;
  }
  while ( (int)v139 < size );
  if ( (v140 & 1) == 0 )
    goto LABEL_108;
LABEL_113:
  v182 = *v81;
  v183 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v81)->vtable._0_Equals.methodPtr) & 4) != 0 && !v182->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v182);
  if ( UnityEngine_Object__op_Inequality(v183, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      goto LABEL_119;
    }
LABEL_131:
    sub_B5D69C(transform, v83);
  }
LABEL_119:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_131;
  transform = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_131;
  v184 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0LL);
  height = UIPanel__get_height(v184, 0LL);
  transform = this->fields.scrollView;
  this->fields.scrollViewSize.fields.x = width;
  this->fields.scrollViewSize.fields.y = height;
  if ( !transform )
    goto LABEL_131;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_131;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)transform,
                                         0LL);
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v187);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_131;
  onChange = scrollBar->fields.onChange;
  v190 = (Il2CppObject *)this->fields.scrollView;
  v191 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v191, v190, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  transform = EventDelegate__Add(onChange, v191, 0LL);
  v192 = this->fields.scrollBar;
  if ( !v192 )
    goto LABEL_131;
  v193 = v192->fields.onChange;
  v194 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v194,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0LL);
  EventDelegate__Add(v193, v194, 0LL);
  overwriteServantParameterTitleSvtId = this->fields.overwriteServantParameterTitleSvtId;
  if ( overwriteServantParameterTitleSvtId >= 1 )
    ServantStatusFlavorTextListViewManager__UpdateParameter(
      this,
      overwriteServantParameterTitleSvtId,
      this->fields.overwriteServantParameterTitleImageLimitCount,
      v195);
}


void __fastcall ServantStatusFlavorTextListViewManager__DestroyList(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42ED30F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42ED30F = 1;
  }
  memset(&v31, 0, sizeof(v31));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v31.fields.current )
      sub_B5D69C(0LL, v21);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v31.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v23, v24, v25, v26, v27, v28);
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
    sub_B5D69C(objectList, method);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__DoAutoScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *onFinished,
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
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  ServantStatusFlavorTextListViewManager___c_c *v19; // x0
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__38_0; // x22
  Il2CppObject *v22; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t Index; // w0
  const MethodInfo *v31; // x3
  System_Collections_IEnumerator_o *v32; // x1

  if ( (byte_42ED309 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__,
      (_DWORD)onFinished,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__38_0__, v12, v13, v14);
    sub_B5D5C4(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v15, v16, v17);
    byte_42ED309 = 1;
  }
  objectList = this->fields.objectList;
  v19 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    v19 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__38_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__38_0,
      v22,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__38_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__);
    v23 = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    v23->__9__38_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__38_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !objectList )
    sub_B5D69C(v19, onFinished);
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)objectList,
            (System_Predicate_T__o *)_9__38_0,
            (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( (Index & 0x80000000) != 0 )
  {
    ActionExtensions__Call(onFinished, 0LL);
  }
  else
  {
    v32 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v31);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v32, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  ServantCommentAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v27; // x1
  ServantCommentAddMaster_o *v28; // x20
  System_String_o *v29; // x22
  System_String_o *ConditionString; // x0
  bool IsOpen; // w21
  bool IsNullOrEmpty; // w0
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  Il2CppObject *Conditiontext; // x21
  LocalizationManager_c *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  int32_t svtId; // w3
  int32_t id; // w4
  int32_t priority; // w5
  System_String_o *v44; // x19
  System_String_o *v45; // x0

  if ( (byte_42ED308 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCommentAddMaster___, (_DWORD)svtCommentEntity, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12141/*"SERVANT_STATUS_PROFILE_CONDITION"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16164/*"_FLAVOR2"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16163/*"_FLAVOR"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_3358/*"COND_TYPE_AND_FLAVOR2"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42ED308 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
    goto LABEL_40;
  v28 = Master_WarQuestSelectionMaster;
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
                                                                    (System_String_o *)StringLiteral_12141/*"SERVANT_STATUS_PROFILE_CONDITION"*/,
                                                                    0LL);
    if ( v28 )
    {
      v29 = (System_String_o *)Master_WarQuestSelectionMaster;
      ConditionString = ServantCommentAddMaster__GetConditionString(
                          v28,
                          (System_String_o *)StringLiteral_16163/*"_FLAVOR"*/,
                          (System_String_o *)StringLiteral_16164/*"_FLAVOR2"*/,
                          svtCommentEntity->fields.svtId,
                          svtCommentEntity->fields.id,
                          svtCommentEntity->fields.priority,
                          -1,
                          0LL);
LABEL_33:
      Conditiontext = (Il2CppObject *)ConditionString;
      return System_String__Format(v29, Conditiontext, 0LL);
    }
LABEL_40:
    sub_B5D69C(Master_WarQuestSelectionMaster, v27);
  }
  if ( !v28 )
    goto LABEL_40;
  IsOpen = ServantCommentAddMaster__IsOpen(
             v28,
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
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12141/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
    ConditionString = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_16163/*"_FLAVOR"*/,
                        0LL);
    goto LABEL_33;
  }
  Conditiontext = (Il2CppObject *)ServantCommentEntity__GetConditiontext(
                                    svtCommentEntity,
                                    (System_String_o *)StringLiteral_16164/*"_FLAVOR2"*/,
                                    0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v33, v34, v35);
    byte_42E6772 = 1;
  }
  v37 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = LocalizationManager_TypeInfo;
  }
  if ( System_String__op_Equality((System_String_o *)Conditiontext, v37->static_fields->unknownNameText, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v38 = (System_String_o *)StringLiteral_12141/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
    v40 = System_String__Concat_44577788((System_String_o *)Conditiontext, v39, 0LL);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v44 = v40;
    v45 = ServantCommentAddMaster__GetConditionString(
            v28,
            (System_String_o *)StringLiteral_16163/*"_FLAVOR"*/,
            (System_String_o *)StringLiteral_16164/*"_FLAVOR2"*/,
            svtId,
            id,
            priority,
            -1,
            0LL);
    Conditiontext = (Il2CppObject *)System_String__Concat_44577788(v44, v45, 0LL);
    v38 = (System_String_o *)StringLiteral_12141/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
  }
  v29 = LocalizationManager__Get(v38, 0LL);
  return System_String__Format(v29, Conditiontext, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__OnChangeScrollBarValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v21; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v23; // s1
  float v24; // s8
  _BOOL8 v25; // x0
  __int64 v26; // x1
  float v27; // s0
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x0
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ED30A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ServantCommentEntity__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42ED30A = 1;
  }
  memset(&v29, 0, sizeof(v29));
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
      || (*(UnityEngine_Vector3_o *)(&v23 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)scrollView,
                                                   0LL),
          (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
    {
      sub_B5D69C(scrollView, v21);
    }
    v24 = v23 - this->fields.initialScrollPosition.fields.y;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v29,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
      if ( !v25 )
        break;
      if ( !v29.fields.current )
        sub_B5D69C(v25, v26);
      v27 = *(float *)&v29.fields.current[2].klass;
      if ( v27 <= v24 && v24 <= (float)(v27 + this->fields.scrollViewSize.fields.y) )
      {
        OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
        if ( OnFinishedReadEvent )
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)OnFinishedReadEvent,
            (System_Uri_o *)v29.fields.current[1].klass,
            (const MethodInfo_258B334 *)Method_System_Action_ServantCommentEntity__Invoke__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v29,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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
    sub_B5D69C(this, 0LL);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v12 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0LL;
      sub_B5D560(p_callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42ED313 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED313 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42ED311 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42ED311 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      objectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v36.fields.current;
      v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v32, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v33, v34);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusFlavorTextListViewObject__Init(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v32,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v35);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject_34319444(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x1
  Il2CppObject *current; // x21
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42ED312 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42ED312 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      objectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v29 )
        break;
      current = v34.fields.current;
      if ( !v34.fields.current )
        sub_B5D69C(v29, v30);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v34.fields.current,
             v30) != 5 )
      {
        v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v32, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantStatusFlavorTextListViewObject__Init(
          (ServantStatusFlavorTextListViewObject_o *)current,
          mode,
          v32,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v33);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_34319232(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetMode_34319232(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusFlavorTextListViewManager_o *v5; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v7; // x2
  int32_t v8; // w1

  v5 = this;
  if ( (byte_42ED310 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_B5D5C4(
                                                         &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
                                                         mode,
                                                         (_DWORD)method,
                                                         v3);
    byte_42ED310 = 1;
  }
  objectList = v5->fields.objectList;
  v5->fields.initMode = mode;
  if ( !objectList )
    sub_B5D69C(this, *(_QWORD *)&mode);
  v5->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v5, mode == 1, method);
  if ( mode == 1 )
  {
    v8 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_34319444(v5, v8, v7);
    return;
  }
  if ( mode == 2 )
  {
    v8 = 2;
    goto LABEL_8;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode_34319392(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_34319232(this, mode, v10);
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
    sub_B5D69C(this, 0LL);
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
  if ( (byte_42ED30D & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_B5D5C4(
                                                         &ServantStatusFlavorTextListViewManager_TypeInfo,
                                                         (_DWORD)basePositon,
                                                         (_DWORD)obj,
                                                         method);
    byte_42ED30D = 1;
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
    sub_B5D69C(this, basePositon);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Component_o *scrollView; // x0
  float height; // s0
  float v19; // s8
  UnityEngine_Component_o *v20; // x8
  float v21; // s9
  Il2CppObject *current; // x20
  ServantStatusFlavorTextListViewObject_o *monitor; // x0
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o ProfileLastLinePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ED30B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v14,
      v15,
      v16);
    byte_42ED30B = 1;
  }
  memset(&v26, 0, sizeof(v26));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v19 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   scrollView,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL)
    || (v20 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
  {
    sub_B5D69C(scrollView, method);
  }
  v21 = *((float *)&v20[12].fields + 1);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v24 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B5D69C(v24, v25);
    monitor = (ServantStatusFlavorTextListViewObject_o *)v26.fields.current[1].monitor;
    if ( !monitor )
      sub_B5D69C(0LL, v25);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(monitor, v25);
    *(float *)&current[2].klass = UnityEngine_Mathf__Max(
                                    0.0,
                                    vabds_f32(ProfileLastLinePosition.fields.y, v21) - v19,
                                    0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewManager__UpdateCvName(
        ServantStatusFlavorTextListViewManager_o *this,
        System_String_o *cvName,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ED314 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      (_DWORD)cvName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
      v15,
      v16,
      v17);
    byte_42ED314 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, cvName);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      objectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v19 )
        break;
      current = v23.fields.current;
      if ( !v23.fields.current )
        sub_B5D69C(v19, v20);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v23.fields.current,
             v20) == 3 )
      {
        ServantStatusFlavorTextListViewObject__SetCvName(
          (ServantStatusFlavorTextListViewObject_o *)current,
          cvName,
          v22);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__UpdateParameter(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  ServantLimitAddEntity_o *Entity; // x0
  ServantLimitAddEntity_o *v34; // x23
  _BOOL8 v35; // x0
  const MethodInfo *v36; // x1
  ServantStatusFlavorTextListViewObject_o *current; // x22
  System_String_o *CondTitle; // x0
  const MethodInfo *v39; // x2
  System_Int32_array *OverwriteServantParameter; // x0
  __int64 v41; // x1
  int32_t v42; // w1
  int32_t ServantParameterLimitCount; // w21
  WebViewManager_o *v44; // x0
  __int64 v45; // x1
  ServantLimitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v47; // x1
  ServantLimitEntity_o *v48; // x0
  __int64 v49; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v50; // x8
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x8
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42ED315 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, svtId, imageLimitCount, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v13,
      v14,
      v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v16,
      v17,
      v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42ED315 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  Entity = ServantLimitAddMaster__GetEntity((ServantLimitAddMaster_o *)Instance, svtId, imageLimitCount, 0LL);
  if ( !Entity )
    return;
  v34 = Entity;
  Instance = (DataManager_o *)this->fields.objectList;
  if ( !Instance )
LABEL_29:
    sub_B5D69C(Instance, v32);
  if ( SLODWORD(Instance->fields.datalist) <= 0 )
  {
    this->fields.overwriteServantParameterTitleSvtId = svtId;
    this->fields.overwriteServantParameterTitleImageLimitCount = imageLimitCount;
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v52,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    v53 = v52;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v53,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v35 )
        break;
      current = (ServantStatusFlavorTextListViewObject_o *)v53.fields.current;
      if ( !v53.fields.current )
        sub_B5D69C(v35, v36);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v53.fields.current,
             v36) == 5 )
      {
        CondTitle = ServantLimitAddEntity__GetCondTitle(v34, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        ServantStatusFlavorTextListViewObject__SetCondTitle(current, CondTitle, v39);
        OverwriteServantParameter = ServantLimitAddEntity__GetOverwriteServantParameter(v34, 0LL);
        if ( OverwriteServantParameter && (int)OverwriteServantParameter->max_length >= 6 )
        {
          itemDraw = current->fields.itemDraw;
          if ( !itemDraw )
            sub_B5D69C(OverwriteServantParameter, v41);
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
            v42 = 0;
          else
            v42 = imageLimitCount;
          ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(v34, v42, 0LL);
          v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v44 )
            sub_B5D69C(0LL, v45);
          MasterData_WarQuestSelectionMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)v44,
                                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B5D69C(0LL, v47);
          v48 = ServantLimitMaster__GetEntity(
                  MasterData_WarQuestSelectionMaster,
                  svtId,
                  ServantParameterLimitCount,
                  0LL);
          if ( !v48 )
            sub_B5D69C(0LL, v49);
          v50 = current->fields.itemDraw;
          if ( !v50 )
            sub_B5D69C(v48, v49);
          ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, void *))v50->klass->vtable._8_SetParameterGauge.method)(
            current->fields.itemDraw,
            (unsigned int)v48->fields.power,
            (unsigned int)v48->fields.defense,
            (unsigned int)v48->fields.agility,
            (unsigned int)v48->fields.magic,
            (unsigned int)v48->fields.luck,
            (unsigned int)v48->fields.treasureDevice,
            v50->klass[1]._1.image);
        }
        *(_QWORD *)&this->fields.overwriteServantParameterTitleSvtId = -1LL;
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v53,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__add_callbackFunc(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantStatusFlavorTextListViewManager_o *v12; // x0
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ED303 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ED303 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ServantStatusFlavorTextListViewManager_CallbackFunc_c *)v9->klass != ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc(v12, v13, v14);
}


void __fastcall ServantStatusFlavorTextListViewManager__add_callbackFunc2(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantStatusFlavorTextListViewManager_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ED305 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ED305 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v7 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc2, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc2(v12, v13, v14);
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
  __int64 v3; // x3
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantStatusFlavorTextListViewManager_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ED304 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ED304 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ServantStatusFlavorTextListViewManager_CallbackFunc_c *)v9->klass != ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantStatusFlavorTextListViewManager__add_callbackFunc2(v12, v13, v14);
}


void __fastcall ServantStatusFlavorTextListViewManager__remove_callbackFunc2(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantStatusFlavorTextListViewManager_o *v12; // x0
  ServantStatusListViewItem_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ED306 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ED306 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v7 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc2, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantStatusFlavorTextListViewManager__CreateList(v12, v13, v14);
}


void __fastcall ServantStatusFlavorTextListViewManager__set_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UIProgressBar_o *v9; // x19
  float alpha; // s0

  if ( (byte_42ED302 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, (_DWORD)method, v3);
    byte_42ED302 = 1;
  }
  this->fields.isInput = value;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v7 )
  {
    v9 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v9 )
      sub_B5D69C(v7, v8);
    alpha = UIProgressBar__get_alpha(v9, 0LL);
    UIProgressBar__set_alpha(v9, alpha, 0LL);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5DA5 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5DA5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)result, v21);
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
  int v2; // w2
  __int64 v3; // x3
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  struct ServantStatusFlavorTextListViewManager_o *_4__this; // x20
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  __int64 targetIndex; // x23
  ServantStatusFlavorTextListViewObject_o *v15; // x21
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v16; // x23
  int32_t size; // w8
  float v18; // s9
  float v19; // s1
  float v20; // s8
  float v21; // s8
  float v22; // s0
  float duration_5__3; // s0
  float *p_duration_5__3; // x22
  float *p_timer_5__4; // x21
  float timer_5__4; // s8
  float deltaTime; // s0
  float v28; // s0
  float v29; // s0
  float v30; // s8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E5DA4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v5, v6, v7);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)sub_B5D5C4(
                                                                              &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__,
                                                                              v8,
                                                                              v9,
                                                                              v10);
    byte_42E5DA4 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_timer_5__4 = &v4->fields._timer_5__4;
    timer_5__4 = v4->fields._timer_5__4;
    v4->fields.__1__state = -1;
    p_duration_5__3 = &v4->fields._duration_5__3;
    duration_5__3 = v4->fields._duration_5__3;
LABEL_22:
    if ( timer_5__4 < duration_5__3 )
    {
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      v28 = UnityEngine_Mathf__Clamp(timer_5__4 + deltaTime, 0.0, *p_duration_5__3, 0LL);
      *p_timer_5__4 = v28;
      if ( _4__this )
      {
        v29 = ServantStatusFlavorTextListViewManager__DoMoveEaseInOut(
                _4__this,
                v28,
                v4->fields._duration_5__3,
                0.0,
                v4->fields._moveValue_5__2,
                0LL);
        this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)_4__this->fields.scrollView;
        if ( this )
        {
          v30 = v29;
          ((void (__fastcall *)(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *, void *, float, float, float))this->klass[1]._1.namespaze)(
            this,
            this->klass[1]._1.byval_arg.data,
            0.0,
            v29 - v4->fields._prevValue_5__5,
            0.0);
          v4->fields._prevValue_5__5 = v30;
          v4->fields.__2__current = 0LL;
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_29:
      sub_B5D69C(this, method);
    }
    goto LABEL_27;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_29;
    objectList = _4__this->fields.objectList;
    if ( !objectList )
      goto LABEL_29;
    targetIndex = v4->fields.targetIndex;
    if ( objectList->fields._size <= (unsigned int)targetIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)_4__this->fields.scrollView;
    if ( !this )
      goto LABEL_29;
    v15 = objectList->fields._items->m_Items[targetIndex];
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                              (UnityEngine_Component_o *)this,
                                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_29;
    v16 = _4__this->fields.objectList;
    if ( !v16 )
      goto LABEL_29;
    size = v16->fields._size;
    v18 = *((float *)&this[4].fields.__1__state + 1);
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)v16->fields._items->m_Items[size - 1];
    if ( !this )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)(&v19 - 1) = ServantStatusFlavorTextListViewObject__get_BottomPosition(
                                             (ServantStatusFlavorTextListViewObject_o *)this,
                                             0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)_4__this->fields.scrollView;
    if ( !this )
      goto LABEL_29;
    v20 = v19;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                              (UnityEngine_Component_o *)this,
                                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_29;
    v21 = vabds_f32(v20, v18) - UIPanel__get_height((UIPanel_o *)this, 0LL);
    if ( v21 <= 0.0 )
    {
      v4->fields._moveValue_5__2 = 0.0;
    }
    else
    {
      if ( !v15 )
        goto LABEL_29;
      TopPosition = ServantStatusFlavorTextListViewObject__get_TopPosition(v15, 0LL);
      v22 = UnityEngine_Mathf__Min(fabsf(TopPosition.fields.y), v21, 0LL);
      v4->fields._moveValue_5__2 = v22;
      if ( v22 > 0.0 )
      {
        duration_5__3 = ServantStatusFlavorTextListViewManager__GetAutoScrollMoveDuration(_4__this, v22, 0LL);
        v4->fields._duration_5__3 = duration_5__3;
        p_duration_5__3 = &v4->fields._duration_5__3;
        v4->fields._prevValue_5__5 = 0.0;
        v4->fields._timer_5__4 = 0.0;
        p_timer_5__4 = &v4->fields._timer_5__4;
        timer_5__4 = 0.0;
        goto LABEL_22;
      }
    }
LABEL_27:
    ActionExtensions__Call(v4->fields.onFinished, 0LL);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DA3 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5DA3 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantStatusFlavorTextListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantStatusFlavorTextListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantStatusFlavorTextListViewManager___c___ctor(
        ServantStatusFlavorTextListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantStatusFlavorTextListViewManager___c___CreateList_b__36_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantCommentEntity_o *a,
        ServantCommentEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.id - b->fields.id;
}


bool __fastcall ServantStatusFlavorTextListViewManager___c___DoAutoScroll_b__38_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantStatusFlavorTextListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.isNew;
}