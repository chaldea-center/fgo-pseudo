void __fastcall ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4101934 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewManager_TypeInfo, v1);
    byte_4101934 = 1;
  }
  ServantStatusFlavorTextListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
}


void __fastcall ServantStatusFlavorTextListViewManager___ctor(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4101933 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v6);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo, v8);
    byte_4101933 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  UnityEngine_GameObject_o *v11; // x22
  ServantStatusFlavorTextListViewObject_o *Component_srcLineSprite; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x7
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0

  if ( (byte_410192B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, basePositon);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_410192B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  Component_srcLineSprite = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
  {
    if ( !v11
      || (Component_srcLineSprite = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 v11,
                                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, Component_srcLineSprite, v13),
          !Component_srcLineSprite)
      || (ServantStatusFlavorTextListViewObject__SetItem(
            Component_srcLineSprite,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1,
            0,
            v14),
          (objectList = this->fields.objectList) == 0LL) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objectList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
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
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4101929 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_TypeInfo, *(_QWORD *)&targetIndex);
    byte_4101929 = 1;
  }
  v8 = sub_B170CC(
         ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_TypeInfo,
         *(_QWORD *)&targetIndex,
         onFinished,
         method,
         v4);
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41___ctor(
    (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 40) = targetIndex;
  *(_QWORD *)(v8 + 48) = onFinished;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)onFinished, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v8;
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Component_o *v30; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Component_o *v32; // x0
  float v33; // s8
  float v34; // s9
  UnityEngine_Transform_o *transform; // x0
  UIScrollView_o *v36; // x0
  ServantStatusListViewItem_o **p_mainInfo; // x27
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_objectList; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x23
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x4
  ServantStatusListViewItem_o *v62; // x0
  const MethodInfo *v63; // x3
  struct UnityEngine_GameObject_o *voice2Object; // x23
  UnityEngine_GameObject_o *v65; // x23
  ServantStatusFlavorTextListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v67; // x7
  ServantStatusFlavorTextListViewObject_o *v68; // x23
  const MethodInfo *v69; // x3
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  ServantStatusListViewItem_o *v71; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  struct UnityEngine_GameObject_o *profileObject; // x22
  UnityEngine_GameObject_o *v74; // x22
  srcLineSprite_o *v75; // x0
  ServantStatusListViewItem_o *v76; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v78; // x20
  System_String_o *Comment; // x0
  const MethodInfo *v80; // x7
  const MethodInfo *v81; // x3
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v82; // x0
  struct ServantCommentEntity_array *svtCommentEntityList; // x26
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  int max_length; // w8
  unsigned int v88; // w9
  ServantCommentEntity_o *v89; // x23
  struct UnityEngine_GameObject_o *v90; // x24
  UnityEngine_GameObject_o *v91; // x24
  ServantStatusFlavorTextListViewObject_o *v92; // x24
  _BOOL8 IsOpen; // x0
  const MethodInfo *v94; // x2
  ServantStatusListViewItem_o *v95; // x25
  int32_t id; // w26
  bool IsNew; // w27
  System_String_o *v98; // x0
  const MethodInfo *v99; // x7
  const MethodInfo *v100; // x3
  System_String_o *ConditionString; // x0
  const MethodInfo *v102; // x7
  System_String_o *CondTitle; // x25
  const MethodInfo *v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  __int64 v109; // x25
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w23
  const MethodInfo *v124; // x3
  int v125; // w8
  __int64 v126; // x22
  ServantCommentEntity_o **m_Items; // x20
  int32_t v128; // w23
  ServantCommentEntity_o *v129; // x24
  UnityEngine_Object_c *v130; // x0
  struct UnityEngine_GameObject_o *profile2Object; // x25
  UnityEngine_Object_o *v132; // x25
  ServantStatusFlavorTextListViewObject_o *v133; // x25
  _BOOL8 v134; // x0
  const MethodInfo *v135; // x2
  ServantStatusListViewItem_o *v136; // x26
  int32_t v137; // w27
  ServantStatusFlavorTextListViewManager_o *v138; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v139; // x19
  UnityEngine_Object_c **v140; // x21
  bool v141; // w28
  System_String_o *v142; // x0
  const MethodInfo *v143; // x7
  System_String_o *v144; // x0
  const MethodInfo *v145; // x7
  System_String_o *v146; // x0
  const MethodInfo *v147; // x2
  const MethodInfo *v148; // x3
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  __int64 v153; // x26
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  UnityEngine_Object_c *v166; // x0
  UnityEngine_Object_o *v167; // x20
  UIScrollView_o *v168; // x0
  UnityEngine_Component_o *v169; // x0
  WebViewObject_o *v170; // x0
  UIPanel_o *v171; // x20
  float width; // s8
  float height; // s0
  UnityEngine_Component_o *v174; // x0
  UnityEngine_Transform_o *v175; // x0
  const MethodInfo *v176; // x1
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  __int64 v180; // x4
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v183; // x22
  EventDelegate_Callback_o *v184; // x21
  __int64 v185; // x1
  __int64 v186; // x2
  __int64 v187; // x3
  __int64 v188; // x4
  struct UIScrollBar_o *v189; // x8
  System_Collections_Generic_List_EventDelegate__o *v190; // x20
  EventDelegate_Callback_o *v191; // x21
  const MethodInfo *v192; // x3
  int overwriteServantParameterTitleSvtId; // w1
  ServantCommentEntity_o **v194; // [xsp+8h] [xbp-A8h]
  struct ServantStatusListViewItem_o **v195; // [xsp+10h] [xbp-A0h]
  struct ServantCommentEntity_array *v196; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_servantProfileList; // [xsp+20h] [xbp-90h]
  bool isPlayVoice; // [xsp+2Ch] [xbp-84h] BYREF
  System_String_o *voice; // [xsp+30h] [xbp-80h] BYREF
  System_String_o *illust; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v202; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4101924 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, mainInfo);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&EventDelegate_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__,
      v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v13);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v18);
    sub_B16FFC(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__, v19);
    sub_B16FFC(&Method_UIScrollView_OnScrollBar__, v20);
    sub_B16FFC(&StringLiteral_1, v21);
    byte_4101924 = 1;
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
    v30 = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !v30 )
      goto LABEL_111;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v30,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( !Component_WebViewObject )
        goto LABEL_111;
      v32 = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !v32 )
        goto LABEL_111;
      v33 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v34 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = UnityEngine_Component__get_transform(v32, 0LL);
      if ( !transform )
        goto LABEL_111;
      v202.fields.x = -v33;
      v202.fields.y = -v34;
      v202.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v202, 0LL);
      v36 = this->fields.scrollView;
      if ( !v36 )
        goto LABEL_111;
      UIScrollView__ResetPosition(v36, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo,
                                                                                                  v38,
                                                                                                  v39,
                                                                                                  v40,
                                                                                                  v41);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  p_objectList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.objectList;
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v42;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v42,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
                                                                                                  v50,
                                                                                                  v51,
                                                                                                  v52,
                                                                                                  v53);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v54;
  p_servantProfileList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.servantProfileList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  *(_QWORD *)&basePositon.fields.x = 0LL;
  basePositon.fields.z = 0.0;
  v62 = this->fields.mainInfo;
  if ( !v62 )
    goto LABEL_111;
  ServantStatusListViewItem__GetVoiceInfo(v62, &illust, &voice, &isPlayVoice, v61);
  if ( System_String__IsNullOrEmpty(voice, 0LL) )
  {
    voice2Object = this->fields.voice2Object;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v65 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)voice2Object,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v65, 0LL, 0LL) )
    {
      if ( !v65 )
        goto LABEL_111;
      Component_srcLineSprite = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v65,
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_111;
      v68 = Component_srcLineSprite;
      ServantStatusFlavorTextListViewObject__SetItem(
        Component_srcLineSprite,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1,
        0,
        v67);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v68, v69);
      objectList = this->fields.objectList;
      if ( !objectList )
        goto LABEL_111;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    }
  }
  else
  {
    ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.voiceObject, v63);
  }
  v71 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_111;
  if ( v71->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v71->fields.commandCodeCommentEntity;
    if ( commandCodeCommentEntity )
    {
      profileObject = this->fields.profileObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v74 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)profileObject,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v74, 0LL, 0LL) )
      {
        if ( !v74 )
          goto LABEL_111;
        v75 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                v74,
                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        v76 = *p_mainInfo;
        commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
        v78 = (ServantStatusFlavorTextListViewObject_o *)v75;
        Comment = CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0LL);
        if ( !v78 )
          goto LABEL_111;
        ServantStatusFlavorTextListViewObject__SetItem(v78, v76, commandCodeId, 1, 0, Comment, 0, v80);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v78, v81);
        v82 = this->fields.objectList;
        if ( !v82 )
          goto LABEL_111;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v82,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
      }
    }
  }
  else
  {
    svtCommentEntityList = v71->fields.svtCommentEntityList;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
    if ( !svtCommentEntityList )
      goto LABEL_111;
    max_length = svtCommentEntityList->max_length;
    v195 = &this->fields.mainInfo;
    v196 = svtCommentEntityList;
    if ( max_length >= 1 )
    {
      v88 = 0;
      while ( 1 )
      {
        if ( v88 >= max_length )
          goto LABEL_112;
        v89 = svtCommentEntityList->m_Items[v88];
        if ( !v89 )
          goto LABEL_111;
        if ( v89->fields.id == 1 )
          break;
        if ( (int)++v88 >= max_length )
          goto LABEL_68;
      }
      v90 = this->fields.profileObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v91 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v90,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v91, 0LL, 0LL) )
      {
        if ( !v91 )
          goto LABEL_111;
        v92 = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v91,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        IsOpen = ServantCommentEntity__IsOpen(v89, -1, 1, 0LL);
        if ( IsOpen )
        {
          v95 = *p_mainInfo;
          id = v89->fields.id;
          IsNew = ServantCommentEntity__IsNew(v89, 0LL);
          v98 = ServantCommentEntity__GetComment(v89, 0LL);
          if ( !v92 )
            goto LABEL_111;
          ServantStatusFlavorTextListViewObject__SetItem(v92, v95, id, 1, IsNew, v98, 0, v99);
          p_mainInfo = &this->fields.mainInfo;
          svtCommentEntityList = v196;
        }
        else
        {
          ConditionString = ServantStatusFlavorTextListViewManager__GetConditionString(
                              (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                              v89,
                              v94);
          if ( !v92 )
            goto LABEL_111;
          ServantStatusFlavorTextListViewObject__SetItem(
            v92,
            *p_mainInfo,
            v89->fields.id,
            0,
            0,
            ConditionString,
            0,
            v102);
        }
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v92, v100);
        CondTitle = ServantCommentEntity__GetCondTitle(v89, 0LL);
        if ( !System_String__IsNullOrEmpty(CondTitle, 0LL) )
          ServantStatusFlavorTextListViewObject__SetCondTitle(v92, CondTitle, v104);
        if ( !ServantCommentEntity__IsConst(v89, 0LL) )
        {
          v109 = sub_B170CC(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v105, v106, v107, v108);
          ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
            (ServantStatusFlavorTextListViewManager_ServantProfile_o *)v109,
            0LL);
          if ( !v109 )
            goto LABEL_111;
          *(_QWORD *)(v109 + 16) = v89;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v109 + 16),
            (System_Int32_array **)v89,
            v110,
            v111,
            v112,
            v113,
            v114,
            v115);
          *(_QWORD *)(v109 + 24) = v92;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v109 + 24),
            (System_Int32_array **)v92,
            v116,
            v117,
            v118,
            v119,
            v120,
            v121);
          *(_DWORD *)(v109 + 32) = 0;
          if ( !*p_servantProfileList )
            goto LABEL_111;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_servantProfileList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v109,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
        }
        if ( !*p_objectList )
          goto LABEL_111;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_objectList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
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
      || (Master_WarQuestSelectionMaster = (void *)SvtType__IsEnemyCollectionDetail(type, 0LL),
          ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0) )
    {
      Master_WarQuestSelectionMaster = ServantStatusFlavorTextListViewManager__AddObjectList(
                                         this,
                                         &basePositon,
                                         this->fields.paramObject,
                                         v124);
    }
    v125 = svtCommentEntityList->max_length;
    if ( v125 >= 1 )
    {
      v126 = 0LL;
      m_Items = svtCommentEntityList->m_Items;
      v128 = 1;
      v194 = svtCommentEntityList->m_Items;
      while ( (unsigned int)v126 < v125 )
      {
        v129 = m_Items[v126];
        if ( !v129 )
          goto LABEL_111;
        if ( v129->fields.id != 1 )
        {
          v130 = *v22;
          profile2Object = this->fields.profile2Object;
          if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v130->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v130);
          v132 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)profile2Object,
                                           (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          Master_WarQuestSelectionMaster = (void *)UnityEngine_Object__op_Inequality(v132, 0LL, 0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            if ( !v132 )
              goto LABEL_111;
            v133 = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)v132,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
            v134 = ServantCommentEntity__IsOpen(v129, -1, 1, 0LL);
            if ( v134 )
            {
              v136 = *p_mainInfo;
              v137 = v129->fields.id;
              v138 = this;
              v139 = p_objectList;
              v140 = v22;
              v141 = ServantCommentEntity__IsNew(v129, 0LL);
              v142 = ServantCommentEntity__GetComment(v129, 0LL);
              if ( !v133 )
                goto LABEL_111;
              ServantStatusFlavorTextListViewObject__SetItem(v133, v136, v137, 1, v141, v142, v128, v143);
              v22 = v140;
              p_objectList = v139;
              this = v138;
              m_Items = v194;
              p_mainInfo = v195;
            }
            else
            {
              v144 = ServantStatusFlavorTextListViewManager__GetConditionString(
                       (ServantStatusFlavorTextListViewManager_o *)v134,
                       v129,
                       v135);
              if ( !v133 )
                goto LABEL_111;
              ServantStatusFlavorTextListViewObject__SetItem(v133, *p_mainInfo, v129->fields.id, 0, 0, v144, v128, v145);
            }
            v146 = ServantCommentEntity__GetCondTitle(v129, 0LL);
            ServantStatusFlavorTextListViewObject__SetCondTitle(v133, v146, v147);
            ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v133, v148);
            v153 = sub_B170CC(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v149, v150, v151, v152);
            ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
              (ServantStatusFlavorTextListViewManager_ServantProfile_o *)v153,
              0LL);
            if ( !v153 )
              goto LABEL_111;
            *(_QWORD *)(v153 + 16) = v129;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v153 + 16),
              (System_Int32_array **)v129,
              v154,
              v155,
              v156,
              v157,
              v158,
              v159);
            *(_QWORD *)(v153 + 24) = v133;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v153 + 24),
              (System_Int32_array **)v133,
              v160,
              v161,
              v162,
              v163,
              v164,
              v165);
            *(_DWORD *)(v153 + 32) = 0;
            if ( !*p_servantProfileList )
              goto LABEL_111;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              *p_servantProfileList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v153,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
            if ( !*p_objectList )
              goto LABEL_111;
            ++v128;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              *p_objectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v133,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
            svtCommentEntityList = v196;
          }
        }
        v125 = svtCommentEntityList->max_length;
        if ( (int)++v126 >= v125 )
          goto LABEL_93;
      }
LABEL_112:
      sub_B17100(Master_WarQuestSelectionMaster, v85, v86);
      sub_B170A0();
    }
  }
LABEL_93:
  v166 = *v22;
  v167 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v166->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v166);
  if ( UnityEngine_Object__op_Inequality(v167, 0LL, 0LL) )
  {
    v168 = this->fields.scrollView;
    if ( !v168 )
      goto LABEL_111;
    UIScrollView__ResetPosition(v168, 0LL);
  }
  v169 = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !v169 )
    goto LABEL_111;
  v170 = UnityEngine_Component__GetComponent_WebViewObject_(
           v169,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !v170 )
    goto LABEL_111;
  v171 = (UIPanel_o *)v170;
  width = UIPanel__get_width((UIPanel_o *)v170, 0LL);
  height = UIPanel__get_height(v171, 0LL);
  v174 = (UnityEngine_Component_o *)this->fields.scrollView;
  this->fields.scrollViewSize.fields.x = width;
  this->fields.scrollViewSize.fields.y = height;
  if ( !v174 )
    goto LABEL_111;
  v175 = UnityEngine_Component__get_transform(v174, 0LL);
  if ( !v175 )
    goto LABEL_111;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition(v175, 0LL);
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v176);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_111;
  onChange = scrollBar->fields.onChange;
  v183 = (Il2CppObject *)this->fields.scrollView;
  v184 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v177, v178, v179, v180);
  EventDelegate_Callback___ctor(v184, v183, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Add(onChange, v184, 0LL);
  v189 = this->fields.scrollBar;
  if ( !v189 )
LABEL_111:
    sub_B170D4();
  v190 = v189->fields.onChange;
  v191 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v185, v186, v187, v188);
  EventDelegate_Callback___ctor(
    v191,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0LL);
  EventDelegate__Add(v190, v191, 0LL);
  overwriteServantParameterTitleSvtId = this->fields.overwriteServantParameterTitleSvtId;
  if ( overwriteServantParameterTitleSvtId >= 1 )
    ServantStatusFlavorTextListViewManager__UpdateParameter(
      this,
      overwriteServantParameterTitleSvtId,
      this->fields.overwriteServantParameterTitleImageLimitCount,
      v192);
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
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_410192C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_410192C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v20.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  v10 = this->fields.objectList;
  if ( !v10 )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v11, v12, v13, v14, v15, v16);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v18 = this->fields.scrollView;
    if ( v18 )
    {
      UIScrollView__ResetPosition(v18, 0LL);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__DoAutoScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  ServantStatusFlavorTextListViewManager___c_c *v12; // x0
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__38_0; // x22
  Il2CppObject *v15; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t Index; // w0
  const MethodInfo *v24; // x3
  System_Collections_IEnumerator_o *v25; // x1

  if ( (byte_4101926 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__, onFinished);
    sub_B16FFC(&Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__, v7);
    sub_B16FFC(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo, v8);
    sub_B16FFC(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__38_0__, v9);
    sub_B16FFC(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v10);
    byte_4101926 = 1;
  }
  objectList = this->fields.objectList;
  v12 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    v12 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__38_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo,
                                                                          onFinished,
                                                                          method,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__38_0,
      v15,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__38_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__);
    v16 = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    v16->__9__38_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__38_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !objectList )
    sub_B170D4();
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)objectList,
            (System_Predicate_T__o *)_9__38_0,
            (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( (Index & 0x80000000) != 0 )
  {
    ActionExtensions__Call(onFinished, 0LL);
  }
  else
  {
    v25 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v24);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v25, 0LL);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantCommentAddMaster_o *v12; // x20
  System_String_o *v13; // x0
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

  if ( (byte_4101925 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCommentAddMaster___, svtCommentEntity);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11941, v6);
    sub_B16FFC(&StringLiteral_15909, v7);
    sub_B16FFC(&StringLiteral_15908, v8);
    sub_B16FFC(&StringLiteral_3283, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_4101925 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
    goto LABEL_40;
  v12 = (ServantCommentAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( ServantCommentEntity__IsOpen(svtCommentEntity, -1, 0, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11941, 0LL);
    if ( v12 )
    {
      v14 = v13;
      ConditionString = ServantCommentAddMaster__GetConditionString(
                          v12,
                          (System_String_o *)StringLiteral_15908,
                          (System_String_o *)StringLiteral_15909,
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
    sub_B170D4();
  }
  if ( !v12 )
    goto LABEL_40;
  IsOpen = ServantCommentAddMaster__IsOpen(
             v12,
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
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11941, 0LL);
    ConditionString = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_15908,
                        0LL);
    goto LABEL_33;
  }
  Conditiontext = (Il2CppObject *)ServantCommentEntity__GetConditiontext(
                                    svtCommentEntity,
                                    (System_String_o *)StringLiteral_15909,
                                    0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    byte_40F87E5 = 1;
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
    v21 = (System_String_o *)StringLiteral_11941;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3283, 0LL);
    v23 = System_String__Concat_43743732((System_String_o *)Conditiontext, v22, 0LL);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v27 = v23;
    v28 = ServantCommentAddMaster__GetConditionString(
            v12,
            (System_String_o *)StringLiteral_15908,
            (System_String_o *)StringLiteral_15909,
            svtId,
            id,
            priority,
            -1,
            0LL);
    Conditiontext = (Il2CppObject *)System_String__Concat_43743732(v27, v28, 0LL);
    v21 = (System_String_o *)StringLiteral_11941;
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
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Transform_o *transform; // x0
  float v11; // s1
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *servantProfileList; // x0
  float v13; // s8
  float v14; // s0
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4101927 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantCommentEntity__Invoke__, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_4101927 = 1;
  }
  memset(&v16, 0, sizeof(v16));
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
      || (transform = UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL
      || (*(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL),
          (servantProfileList = this->fields.servantProfileList) == 0LL) )
    {
      sub_B170D4();
    }
    v13 = v11 - this->fields.initialScrollPosition.fields.y;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)servantProfileList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__) )
    {
      if ( !v16.fields.current )
        sub_B170D4();
      v14 = *(float *)&v16.fields.current[2].klass;
      if ( v14 <= v13 && v13 <= (float)(v14 + this->fields.scrollViewSize.fields.y) )
      {
        OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
        if ( OnFinishedReadEvent )
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)OnFinishedReadEvent,
            (System_Uri_o *)v16.fields.current[1].klass,
            (const MethodInfo_24B7324 *)Method_System_Action_ServantCommentEntity__Invoke__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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
    sub_B170D4();
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v12 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0LL;
      sub_B16F98(p_callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4101930 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_4101930 = 1;
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
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_410192E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v12);
    sub_B16FFC(&StringLiteral_10004, v13);
    byte_410192E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      objectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusFlavorTextListViewObject__Init(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v21,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject_36635660(
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
  const MethodInfo *v14; // x1
  Il2CppObject *current; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_410192F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&StringLiteral_10004, v11);
    byte_410192F = 1;
  }
  memset(&v22, 0, sizeof(v22));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      objectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      if ( !v22.fields.current )
        sub_B170D4();
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v22.fields.current,
             v14) != 5 )
      {
        v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantStatusFlavorTextListViewObject__Init(
          (ServantStatusFlavorTextListViewObject_o *)current,
          mode,
          v20,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v21);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_36635448(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetMode_36635448(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  if ( (byte_410192D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
      *(_QWORD *)&mode);
    byte_410192D = 1;
  }
  objectList = this->fields.objectList;
  this->fields.initMode = mode;
  if ( !objectList )
    sub_B170D4();
  this->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(this, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_36635660(this, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode_36635608(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_36635448(this, mode, v10);
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
    sub_B170D4();
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
  int32_t Size; // w0
  int v8; // w8
  int v9; // w23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Transform_o *v14; // x22
  int v15; // s0
  UnityEngine_Transform_o *v19; // x22
  int v20; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x22
  int32_t layer; // w0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  float y; // s8
  ServantStatusFlavorTextListViewManager_c *v29; // x0

  if ( (byte_410192A & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewManager_TypeInfo, basePositon);
    byte_410192A = 1;
  }
  if ( !obj )
    goto LABEL_18;
  Size = ServantStatusFlavorTextListViewObject__GetSize(obj, (const MethodInfo *)basePositon);
  v8 = Size >= 0 ? Size : Size + 1;
  v9 = v8 >> 1;
  basePositon->fields.y = basePositon->fields.y - (float)(v8 >> 1);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL);
  if ( !this->fields.listParent )
    goto LABEL_18;
  v11 = transform;
  v12 = UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
  if ( !v11 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v11, v12, 0LL);
  v13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL);
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v13, *basePositon, 0LL);
  v14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v14
    || (UnityEngine_Transform__set_localRotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL),
        v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL),
        !v19)
    || (UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&v20, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0LL),
        !this->fields.listParent)
    || (v24 = gameObject, layer = UnityEngine_GameObject__get_layer(this->fields.listParent, 0LL), !v24) )
  {
LABEL_18:
    sub_B170D4();
  }
  UnityEngine_GameObject__set_layer(v24, layer, 0LL);
  ServantStatusFlavorTextListViewObject__SetBaseTransform(obj, v26);
  ServantStatusFlavorTextListViewObject__SetManager(obj, this, v27);
  y = basePositon->fields.y;
  v29 = ServantStatusFlavorTextListViewManager_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager_TypeInfo);
    v29 = ServantStatusFlavorTextListViewManager_TypeInfo;
  }
  basePositon->fields.y = y - (float)(v29->static_fields->LIST_BLANK + v9);
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
  WebViewObject_o *Component_WebViewObject; // x0
  float height; // s0
  UnityEngine_Component_o *v10; // x0
  float v11; // s8
  WebViewObject_o *v12; // x0
  WebViewObject_o *v13; // x8
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *servantProfileList; // x0
  float v15; // s9
  Il2CppObject *current; // x20
  ServantStatusFlavorTextListViewObject_o *monitor; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o ProfileLastLinePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4101928 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v6);
    byte_4101928 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    scrollView,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (height = UIPanel__get_height((UIPanel_o *)Component_WebViewObject, 0LL),
        (v10 = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v11 = height,
        (v12 = UnityEngine_Component__GetComponent_WebViewObject_(
                 v10,
                 (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL)
    || (v13 = v12, (servantProfileList = this->fields.servantProfileList) == 0LL) )
  {
    sub_B170D4();
  }
  v15 = *(float *)&v13[2].fields.mMarginRight;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)servantProfileList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__) )
  {
    current = v19.fields.current;
    if ( !v19.fields.current )
      sub_B170D4();
    monitor = (ServantStatusFlavorTextListViewObject_o *)v19.fields.current[1].monitor;
    if ( !monitor )
      sub_B170D4();
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(monitor, v18);
    *(float *)&current[2].klass = UnityEngine_Mathf__Max(
                                    0.0,
                                    vabds_f32(ProfileLastLinePosition.fields.y, v15) - v11,
                                    0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4101931 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      cvName);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v8);
    byte_4101931 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      objectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      if ( !v13.fields.current )
        sub_B170D4();
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v13.fields.current,
             v10) == 3 )
      {
        ServantStatusFlavorTextListViewObject__SetCvName(
          (ServantStatusFlavorTextListViewObject_o *)current,
          cvName,
          v12);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitAddEntity_o *Entity; // x0
  ServantLimitAddEntity_o *v18; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  const MethodInfo *v20; // x1
  ServantStatusFlavorTextListViewObject_o *current; // x22
  System_String_o *CondTitle; // x0
  const MethodInfo *v23; // x2
  System_Int32_array *OverwriteServantParameter; // x0
  int32_t v25; // w1
  int32_t ServantParameterLimitCount; // w21
  WebViewManager_o *v27; // x0
  ServantLimitMaster_o *v28; // x0
  ServantLimitEntity_o *v29; // x0
  struct ServantStatusFlavorTextListViewItemDraw_o *v30; // x8
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x8
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4101932 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    byte_4101932 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  Entity = ServantLimitAddMaster__GetEntity(MasterData_WarQuestSelectionMaster, svtId, imageLimitCount, 0LL);
  if ( !Entity )
    return;
  v18 = Entity;
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
LABEL_29:
    sub_B170D4();
  if ( objectList->fields._size <= 0 )
  {
    this->fields.overwriteServantParameterTitleSvtId = svtId;
    this->fields.overwriteServantParameterTitleImageLimitCount = imageLimitCount;
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      objectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    v33 = v32;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = (ServantStatusFlavorTextListViewObject_o *)v33.fields.current;
      if ( !v33.fields.current )
        sub_B170D4();
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v33.fields.current,
             v20) == 5 )
      {
        CondTitle = ServantLimitAddEntity__GetCondTitle(v18, (System_String_o *)StringLiteral_1, 0LL);
        ServantStatusFlavorTextListViewObject__SetCondTitle(current, CondTitle, v23);
        OverwriteServantParameter = ServantLimitAddEntity__GetOverwriteServantParameter(v18, 0LL);
        if ( OverwriteServantParameter && (int)OverwriteServantParameter->max_length >= 6 )
        {
          itemDraw = current->fields.itemDraw;
          if ( !itemDraw )
            sub_B170D4();
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
            v25 = 0;
          else
            v25 = imageLimitCount;
          ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(v18, v25, 0LL);
          v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v27 )
            sub_B170D4();
          v28 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v27,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
          if ( !v28 )
            sub_B170D4();
          v29 = ServantLimitMaster__GetEntity(v28, svtId, ServantParameterLimitCount, 0LL);
          if ( !v29 )
            sub_B170D4();
          v30 = current->fields.itemDraw;
          if ( !v30 )
            sub_B170D4();
          ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, void *))v30->klass->vtable._8_SetParameterGauge.method)(
            current->fields.itemDraw,
            (unsigned int)v29->fields.power,
            (unsigned int)v29->fields.defense,
            (unsigned int)v29->fields.agility,
            (unsigned int)v29->fields.magic,
            (unsigned int)v29->fields.luck,
            (unsigned int)v29->fields.treasureDevice,
            v30->klass[1]._1.image);
        }
        *(_QWORD *)&this->fields.overwriteServantParameterTitleSvtId = -1LL;
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v33,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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

  if ( (byte_4101920 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_4101920 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_4101922 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_4101922 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_4101921 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_4101921 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_4101923 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_4101923 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ServantStatusFlavorTextListViewManager__CreateList(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__set_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  UIProgressBar_o *v6; // x19
  float alpha; // s0

  if ( (byte_410191F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, value);
    byte_410191F = 1;
  }
  this->fields.isInput = value;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    v6 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v6 )
      sub_B170D4();
    alpha = UIProgressBar__get_alpha(v6, 0LL);
    UIProgressBar__set_alpha(v6, alpha, 0LL);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7670 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    byte_40F7670 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct ServantStatusFlavorTextListViewManager_o *_4__this; // x20
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  __int64 targetIndex; // x23
  UnityEngine_Component_o *v9; // x0
  ServantStatusFlavorTextListViewObject_o *v10; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v12; // x23
  int32_t size; // w8
  float v14; // s9
  ServantStatusFlavorTextListViewObject_o *v15; // x0
  float v16; // s1
  UnityEngine_Component_o *v17; // x0
  float v18; // s8
  WebViewObject_o *v19; // x0
  float v20; // s8
  float v21; // s0
  float duration_5__3; // s0
  float *p_duration_5__3; // x22
  float *p_timer_5__4; // x21
  float timer_5__4; // s8
  float deltaTime; // s0
  float v27; // s0
  float v28; // s0
  struct UIScrollView_o *scrollView; // x0
  float v30; // s8
  Il2CppObject **p__2__current; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  bool result; // w0
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F766F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__, v4);
    byte_40F766F = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_timer_5__4 = &this->fields._timer_5__4;
    timer_5__4 = this->fields._timer_5__4;
    this->fields.__1__state = -1;
    p_duration_5__3 = &this->fields._duration_5__3;
    duration_5__3 = this->fields._duration_5__3;
LABEL_22:
    if ( timer_5__4 < duration_5__3 )
    {
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      v27 = UnityEngine_Mathf__Clamp(timer_5__4 + deltaTime, 0.0, *p_duration_5__3, 0LL);
      *p_timer_5__4 = v27;
      if ( _4__this )
      {
        v28 = ServantStatusFlavorTextListViewManager__DoMoveEaseInOut(
                _4__this,
                v27,
                this->fields._duration_5__3,
                0.0,
                this->fields._moveValue_5__2,
                0LL);
        scrollView = _4__this->fields.scrollView;
        if ( scrollView )
        {
          v30 = v28;
          ((void (__fastcall *)(struct UIScrollView_o *, void *, float, float, float))scrollView->klass->vtable._10_MoveRelative.method)(
            scrollView,
            scrollView->klass[1]._1.image,
            0.0,
            v28 - this->fields._prevValue_5__5,
            0.0);
          this->fields._prevValue_5__5 = v30;
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v32, v33, v34, v35, v36, v37);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_29:
      sub_B170D4();
    }
    goto LABEL_27;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_29;
    objectList = _4__this->fields.objectList;
    if ( !objectList )
      goto LABEL_29;
    targetIndex = this->fields.targetIndex;
    if ( objectList->fields._size <= (unsigned int)targetIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v9 = (UnityEngine_Component_o *)_4__this->fields.scrollView;
    if ( !v9 )
      goto LABEL_29;
    v10 = objectList->fields._items->m_Items[targetIndex];
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v9,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !Component_WebViewObject )
      goto LABEL_29;
    v12 = _4__this->fields.objectList;
    if ( !v12 )
      goto LABEL_29;
    size = v12->fields._size;
    v14 = *(float *)&Component_WebViewObject[2].fields.mMarginRight;
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v15 = v12->fields._items->m_Items[size - 1];
    if ( !v15 )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)(&v16 - 1) = ServantStatusFlavorTextListViewObject__get_BottomPosition(v15, 0LL);
    v17 = (UnityEngine_Component_o *)_4__this->fields.scrollView;
    if ( !v17 )
      goto LABEL_29;
    v18 = v16;
    v19 = UnityEngine_Component__GetComponent_WebViewObject_(
            v17,
            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !v19 )
      goto LABEL_29;
    v20 = vabds_f32(v18, v14) - UIPanel__get_height((UIPanel_o *)v19, 0LL);
    if ( v20 <= 0.0 )
    {
      this->fields._moveValue_5__2 = 0.0;
    }
    else
    {
      if ( !v10 )
        goto LABEL_29;
      TopPosition = ServantStatusFlavorTextListViewObject__get_TopPosition(v10, 0LL);
      v21 = UnityEngine_Mathf__Min(fabsf(TopPosition.fields.y), v20, 0LL);
      this->fields._moveValue_5__2 = v21;
      if ( v21 > 0.0 )
      {
        duration_5__3 = ServantStatusFlavorTextListViewManager__GetAutoScrollMoveDuration(_4__this, v21, 0LL);
        this->fields._duration_5__3 = duration_5__3;
        p_duration_5__3 = &this->fields._duration_5__3;
        this->fields._prevValue_5__5 = 0.0;
        this->fields._timer_5__4 = 0.0;
        p_timer_5__4 = &this->fields._timer_5__4;
        timer_5__4 = 0.0;
        goto LABEL_22;
      }
    }
LABEL_27:
    ActionExtensions__Call(this->fields.onFinished, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F766E & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v1);
    byte_40F766E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantStatusFlavorTextListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.isNew;
}