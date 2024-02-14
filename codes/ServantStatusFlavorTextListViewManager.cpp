void __fastcall ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4219D21 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFlavorTextListViewManager_TypeInfo, v1);
    byte_4219D21 = 1;
  }
  ServantStatusFlavorTextListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
}


void __fastcall ServantStatusFlavorTextListViewManager___ctor(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4219D20 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v4);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo, v6);
    byte_4219D20 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  ServantStatusFlavorTextListViewObject_o *Component_srcLineSprite; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x7

  if ( (byte_4219D18 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, basePositon);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4219D18 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                  (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, Component_srcLineSprite, v14),
          !Component_srcLineSprite)
      || (ServantStatusFlavorTextListViewObject__SetItem(
            Component_srcLineSprite,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v15),
          (objectList = this->fields.objectList) == 0LL) )
    {
      sub_B0D97C(objectList);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objectList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
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

  if ( (byte_4219D16 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_TypeInfo, *(_QWORD *)&targetIndex);
    byte_4219D16 = 1;
  }
  v7 = sub_B0D974(
         ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_TypeInfo,
         *(_QWORD *)&targetIndex,
         onFinished);
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41___ctor(
    (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v15, v16, v17, v18, v19, v20);
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  float v32; // s8
  float v33; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x27
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x22
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x4
  const MethodInfo *v55; // x3
  struct UnityEngine_GameObject_o *voice2Object; // x23
  UnityEngine_Object_o *v57; // x23
  const MethodInfo *v58; // x7
  ServantStatusFlavorTextListViewObject_o *v59; // x23
  const MethodInfo *v60; // x3
  ServantStatusListViewItem_o *v61; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  struct UnityEngine_GameObject_o *profileObject; // x22
  UnityEngine_Object_o *v64; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  ServantStatusListViewItem_o *v66; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v68; // x20
  const MethodInfo *v69; // x7
  const MethodInfo *v70; // x3
  struct ServantCommentEntity_array *svtCommentEntityList; // x26
  int max_length; // w8
  unsigned int v73; // w9
  ServantCommentEntity_o *v74; // x23
  struct UnityEngine_GameObject_o *v75; // x24
  UnityEngine_Object_o *v76; // x24
  ServantStatusFlavorTextListViewObject_o *v77; // x24
  _BOOL8 IsOpen; // x0
  const MethodInfo *v79; // x2
  ServantStatusListViewItem_o *v80; // x25
  int32_t id; // w26
  bool IsNew; // w27
  const MethodInfo *v83; // x7
  const MethodInfo *v84; // x3
  const MethodInfo *v85; // x7
  System_String_o *CondTitle; // x25
  const MethodInfo *v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x25
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
  int32_t type; // w23
  const MethodInfo *v105; // x3
  int v106; // w8
  __int64 v107; // x22
  ServantCommentEntity_o **m_Items; // x20
  int32_t v109; // w23
  ServantCommentEntity_o *v110; // x24
  UnityEngine_Object_c *v111; // x0
  struct UnityEngine_GameObject_o *profile2Object; // x25
  UnityEngine_Object_o *v113; // x25
  ServantStatusFlavorTextListViewObject_o *v114; // x25
  _BOOL8 v115; // x0
  const MethodInfo *v116; // x2
  ServantStatusListViewItem_o *v117; // x26
  int32_t v118; // w27
  ServantStatusFlavorTextListViewManager_o *v119; // x20
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **v120; // x19
  UnityEngine_Object_c **v121; // x21
  bool v122; // w28
  const MethodInfo *v123; // x7
  const MethodInfo *v124; // x7
  System_String_o *v125; // x0
  const MethodInfo *v126; // x2
  const MethodInfo *v127; // x3
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x26
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  UnityEngine_Object_c *v143; // x0
  UnityEngine_Object_o *v144; // x20
  UIPanel_o *v145; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v148; // x1
  __int64 v149; // x1
  __int64 v150; // x2
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v153; // x22
  EventDelegate_Callback_o *v154; // x21
  __int64 v155; // x1
  __int64 v156; // x2
  struct UIScrollBar_o *v157; // x8
  System_Collections_Generic_List_EventDelegate__o *v158; // x20
  EventDelegate_Callback_o *v159; // x21
  const MethodInfo *v160; // x3
  int overwriteServantParameterTitleSvtId; // w1
  __int64 v162; // x0
  ServantCommentEntity_o **v163; // [xsp+8h] [xbp-A8h]
  struct ServantStatusListViewItem_o **v164; // [xsp+10h] [xbp-A0h]
  struct ServantCommentEntity_array *v165; // [xsp+18h] [xbp-98h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+20h] [xbp-90h]
  bool isPlayVoice; // [xsp+2Ch] [xbp-84h] BYREF
  System_String_o *voice; // [xsp+30h] [xbp-80h] BYREF
  System_String_o *illust; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v171; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219D11 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, mainInfo);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&EventDelegate_TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__,
      v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v13);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo, v15);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v18);
    sub_B0D8A4(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__, v19);
    sub_B0D8A4(&Method_UIScrollView_OnScrollBar__, v20);
    sub_B0D8A4(&StringLiteral_1/*""*/, v21);
    byte_4219D11 = 1;
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
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v32 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v33 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_111;
      v171.fields.x = -v32;
      v171.fields.y = -v33;
      v171.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v171, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_111;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo,
                                                                                                  v35,
                                                                                                  v36);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  p_objectList = &this->fields.objectList;
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v37;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
                                                                                                  v45,
                                                                                                  v46);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v47;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  *(_QWORD *)&basePositon.fields.x = 0LL;
  basePositon.fields.z = 0.0;
  transform = (UnityEngine_Component_o *)this->fields.mainInfo;
  if ( !transform )
    goto LABEL_111;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v54);
  if ( System_String__IsNullOrEmpty(voice, 0LL) )
  {
    voice2Object = this->fields.voice2Object;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v57 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)voice2Object,
                                    (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v57, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v57 )
        goto LABEL_111;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)v57,
                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_111;
      v59 = (ServantStatusFlavorTextListViewObject_o *)transform;
      ServantStatusFlavorTextListViewObject__SetItem(
        (ServantStatusFlavorTextListViewObject_o *)transform,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v58);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v59, v60);
      transform = (UnityEngine_Component_o *)this->fields.objectList;
      if ( !transform )
        goto LABEL_111;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    }
  }
  else
  {
    transform = (UnityEngine_Component_o *)ServantStatusFlavorTextListViewManager__AddObjectList(
                                             this,
                                             &basePositon,
                                             this->fields.voiceObject,
                                             v55);
  }
  v61 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_111;
  if ( v61->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v61->fields.commandCodeCommentEntity;
    if ( commandCodeCommentEntity )
    {
      profileObject = this->fields.profileObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v64 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)profileObject,
                                      (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v64 )
          goto LABEL_111;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v64,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        v66 = *p_mainInfo;
        commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
        v68 = (ServantStatusFlavorTextListViewObject_o *)Component_srcLineSprite;
        transform = (UnityEngine_Component_o *)CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0LL);
        if ( !v68 )
          goto LABEL_111;
        ServantStatusFlavorTextListViewObject__SetItem(
          v68,
          v66,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v69);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v68, v70);
        transform = (UnityEngine_Component_o *)this->fields.objectList;
        if ( !transform )
          goto LABEL_111;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
      }
    }
  }
  else
  {
    svtCommentEntityList = v61->fields.svtCommentEntityList;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    transform = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
    if ( !svtCommentEntityList )
      goto LABEL_111;
    max_length = svtCommentEntityList->max_length;
    v164 = &this->fields.mainInfo;
    v165 = svtCommentEntityList;
    if ( max_length >= 1 )
    {
      v73 = 0;
      while ( 1 )
      {
        if ( v73 >= max_length )
          goto LABEL_112;
        v74 = svtCommentEntityList->m_Items[v73];
        if ( !v74 )
          goto LABEL_111;
        if ( v74->fields.id == 1 )
          break;
        if ( (int)++v73 >= max_length )
          goto LABEL_68;
      }
      v75 = this->fields.profileObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v76 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)v75,
                                      (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v76, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v76 )
          goto LABEL_111;
        v77 = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)v76,
                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        IsOpen = ServantCommentEntity__IsOpen(v74, -1, 1, 0LL);
        if ( IsOpen )
        {
          v80 = *p_mainInfo;
          id = v74->fields.id;
          IsNew = ServantCommentEntity__IsNew(v74, 0LL);
          transform = (UnityEngine_Component_o *)ServantCommentEntity__GetComment(v74, 0LL);
          if ( !v77 )
            goto LABEL_111;
          ServantStatusFlavorTextListViewObject__SetItem(v77, v80, id, 1, IsNew, (System_String_o *)transform, 0, v83);
          p_mainInfo = &this->fields.mainInfo;
          svtCommentEntityList = v165;
        }
        else
        {
          transform = (UnityEngine_Component_o *)ServantStatusFlavorTextListViewManager__GetConditionString(
                                                   (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                                                   v74,
                                                   v79);
          if ( !v77 )
            goto LABEL_111;
          ServantStatusFlavorTextListViewObject__SetItem(
            v77,
            *p_mainInfo,
            v74->fields.id,
            0,
            0,
            (System_String_o *)transform,
            0,
            v85);
        }
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v77, v84);
        CondTitle = ServantCommentEntity__GetCondTitle(v74, 0LL);
        if ( !System_String__IsNullOrEmpty(CondTitle, 0LL) )
          ServantStatusFlavorTextListViewObject__SetCondTitle(v77, CondTitle, v87);
        if ( !ServantCommentEntity__IsConst(v74, 0LL) )
        {
          v90 = sub_B0D974(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v88, v89);
          ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
            (ServantStatusFlavorTextListViewManager_ServantProfile_o *)v90,
            0LL);
          if ( !v90 )
            goto LABEL_111;
          *(_QWORD *)(v90 + 16) = v74;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v90 + 16),
            (System_Int32_array **)v74,
            v91,
            v92,
            v93,
            v94,
            v95,
            v96);
          *(_QWORD *)(v90 + 24) = v77;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v90 + 24),
            (System_Int32_array **)v77,
            v97,
            v98,
            v99,
            v100,
            v101,
            v102);
          *(_DWORD *)(v90 + 32) = 0;
          transform = (UnityEngine_Component_o *)*p_servantProfileList;
          if ( !*p_servantProfileList )
            goto LABEL_111;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
        }
        transform = (UnityEngine_Component_o *)*p_objectList;
        if ( !*p_objectList )
          goto LABEL_111;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
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
                                               v105);
    }
    v106 = svtCommentEntityList->max_length;
    if ( v106 >= 1 )
    {
      v107 = 0LL;
      m_Items = svtCommentEntityList->m_Items;
      v109 = 1;
      v163 = svtCommentEntityList->m_Items;
      while ( (unsigned int)v107 < v106 )
      {
        v110 = m_Items[v107];
        if ( !v110 )
          goto LABEL_111;
        if ( v110->fields.id != 1 )
        {
          v111 = *v22;
          profile2Object = this->fields.profile2Object;
          if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v111);
          v113 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)profile2Object,
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v113, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v113 )
              goto LABEL_111;
            v114 = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                (UnityEngine_GameObject_o *)v113,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
            v115 = ServantCommentEntity__IsOpen(v110, -1, 1, 0LL);
            if ( v115 )
            {
              v117 = *p_mainInfo;
              v118 = v110->fields.id;
              v119 = this;
              v120 = p_objectList;
              v121 = v22;
              v122 = ServantCommentEntity__IsNew(v110, 0LL);
              transform = (UnityEngine_Component_o *)ServantCommentEntity__GetComment(v110, 0LL);
              if ( !v114 )
                goto LABEL_111;
              ServantStatusFlavorTextListViewObject__SetItem(
                v114,
                v117,
                v118,
                1,
                v122,
                (System_String_o *)transform,
                v109,
                v123);
              v22 = v121;
              p_objectList = v120;
              this = v119;
              m_Items = v163;
              p_mainInfo = v164;
            }
            else
            {
              transform = (UnityEngine_Component_o *)ServantStatusFlavorTextListViewManager__GetConditionString(
                                                       (ServantStatusFlavorTextListViewManager_o *)v115,
                                                       v110,
                                                       v116);
              if ( !v114 )
                goto LABEL_111;
              ServantStatusFlavorTextListViewObject__SetItem(
                v114,
                *p_mainInfo,
                v110->fields.id,
                0,
                0,
                (System_String_o *)transform,
                v109,
                v124);
            }
            v125 = ServantCommentEntity__GetCondTitle(v110, 0LL);
            ServantStatusFlavorTextListViewObject__SetCondTitle(v114, v125, v126);
            ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v114, v127);
            v130 = sub_B0D974(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v128, v129);
            ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
              (ServantStatusFlavorTextListViewManager_ServantProfile_o *)v130,
              0LL);
            if ( !v130 )
              goto LABEL_111;
            *(_QWORD *)(v130 + 16) = v110;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v130 + 16),
              (System_Int32_array **)v110,
              v131,
              v132,
              v133,
              v134,
              v135,
              v136);
            *(_QWORD *)(v130 + 24) = v114;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v130 + 24),
              (System_Int32_array **)v114,
              v137,
              v138,
              v139,
              v140,
              v141,
              v142);
            *(_DWORD *)(v130 + 32) = 0;
            transform = (UnityEngine_Component_o *)*p_servantProfileList;
            if ( !*p_servantProfileList )
              goto LABEL_111;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v130,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
            transform = (UnityEngine_Component_o *)*p_objectList;
            if ( !*p_objectList )
              goto LABEL_111;
            ++v109;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v114,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
            svtCommentEntityList = v165;
          }
        }
        v106 = svtCommentEntityList->max_length;
        if ( (int)++v107 >= v106 )
          goto LABEL_93;
      }
LABEL_112:
      v162 = sub_B0D9A8(transform);
      sub_B0D948(v162, 0LL);
    }
  }
LABEL_93:
  v143 = *v22;
  v144 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v143->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v143);
  if ( UnityEngine_Object__op_Inequality(v144, 0LL, 0LL) )
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
                                           (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_111;
  v145 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0LL);
  height = UIPanel__get_height(v145, 0LL);
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
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v148);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_111;
  onChange = scrollBar->fields.onChange;
  v153 = (Il2CppObject *)this->fields.scrollView;
  v154 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v149, v150);
  EventDelegate_Callback___ctor(v154, v153, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)EventDelegate__Add(onChange, v154, 0LL);
  v157 = this->fields.scrollBar;
  if ( !v157 )
LABEL_111:
    sub_B0D97C(transform);
  v158 = v157->fields.onChange;
  v159 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v155, v156);
  EventDelegate_Callback___ctor(
    v159,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0LL);
  EventDelegate__Add(v158, v159, 0LL);
  overwriteServantParameterTitleSvtId = this->fields.overwriteServantParameterTitleSvtId;
  if ( overwriteServantParameterTitleSvtId >= 1 )
    ServantStatusFlavorTextListViewManager__UpdateParameter(
      this,
      overwriteServantParameterTitleSvtId,
      this->fields.overwriteServantParameterTitleImageLimitCount,
      v160);
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
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4219D19 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4219D19 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v18.fields.current )
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v18.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_B0D97C(objectList);
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

  if ( (byte_4219D13 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__, onFinished);
    sub_B0D8A4(&Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__, v5);
    sub_B0D8A4(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo, v6);
    sub_B0D8A4(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__38_0__, v7);
    sub_B0D8A4(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v8);
    byte_4219D13 = 1;
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
    _9__38_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo,
                                                                          onFinished,
                                                                          method);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__38_0,
      v13,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__38_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__);
    v14 = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    v14->__9__38_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__38_0;
    sub_B0D840(
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
    sub_B0D97C(v10);
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)objectList,
            (System_Predicate_T__o *)_9__38_0,
            (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( (Index & 0x80000000) != 0 )
  {
    ActionExtensions__Call(onFinished, 0LL);
  }
  else
  {
    v23 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v22);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
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
  ServantCommentAddMaster_o *v12; // x20
  System_String_o *v13; // x22
  System_String_o *ConditionString; // x0
  bool IsOpen; // w21
  bool IsNullOrEmpty; // w0
  __int64 v17; // x1
  Il2CppObject *Conditiontext; // x21
  LocalizationManager_c *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  int32_t svtId; // w3
  int32_t id; // w4
  int32_t priority; // w5
  System_String_o *v26; // x19
  System_String_o *v27; // x0

  if ( (byte_4219D12 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCommentAddMaster___, svtCommentEntity);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_12029/*"SERVANT_STATUS_PROFILE_CONDITION"*/, v6);
    sub_B0D8A4(&StringLiteral_16020/*"_FLAVOR2"*/, v7);
    sub_B0D8A4(&StringLiteral_16019/*"_FLAVOR"*/, v8);
    sub_B0D8A4(&StringLiteral_3305/*"COND_TYPE_AND_FLAVOR2"*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4219D12 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
    goto LABEL_40;
  v12 = Master_WarQuestSelectionMaster;
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
                                                                    (System_String_o *)StringLiteral_12029/*"SERVANT_STATUS_PROFILE_CONDITION"*/,
                                                                    0LL);
    if ( v12 )
    {
      v13 = (System_String_o *)Master_WarQuestSelectionMaster;
      ConditionString = ServantCommentAddMaster__GetConditionString(
                          v12,
                          (System_String_o *)StringLiteral_16019/*"_FLAVOR"*/,
                          (System_String_o *)StringLiteral_16020/*"_FLAVOR2"*/,
                          svtCommentEntity->fields.svtId,
                          svtCommentEntity->fields.id,
                          svtCommentEntity->fields.priority,
                          -1,
                          0LL);
LABEL_33:
      Conditiontext = (Il2CppObject *)ConditionString;
      return System_String__Format(v13, Conditiontext, 0LL);
    }
LABEL_40:
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12029/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
    ConditionString = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_16019/*"_FLAVOR"*/,
                        0LL);
    goto LABEL_33;
  }
  Conditiontext = (Il2CppObject *)ServantCommentEntity__GetConditiontext(
                                    svtCommentEntity,
                                    (System_String_o *)StringLiteral_16020/*"_FLAVOR2"*/,
                                    0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4212885 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    byte_4212885 = 1;
  }
  v19 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager_TypeInfo;
  }
  if ( System_String__op_Equality((System_String_o *)Conditiontext, v19->static_fields->unknownNameText, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = (System_String_o *)StringLiteral_12029/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3305/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
    v22 = System_String__Concat_43849904((System_String_o *)Conditiontext, v21, 0LL);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v26 = v22;
    v27 = ServantCommentAddMaster__GetConditionString(
            v12,
            (System_String_o *)StringLiteral_16019/*"_FLAVOR"*/,
            (System_String_o *)StringLiteral_16020/*"_FLAVOR2"*/,
            svtId,
            id,
            priority,
            -1,
            0LL);
    Conditiontext = (Il2CppObject *)System_String__Concat_43849904(v26, v27, 0LL);
    v20 = (System_String_o *)StringLiteral_12029/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
  }
  v13 = LocalizationManager__Get(v20, 0LL);
  return System_String__Format(v13, Conditiontext, 0LL);
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
  float v10; // s1
  float v11; // s8
  _BOOL8 v12; // x0
  float v13; // s0
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4219D14 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ServantCommentEntity__Invoke__, method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4219D14 = 1;
  }
  memset(&v15, 0, sizeof(v15));
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
      || (*(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)scrollView,
                                                   0LL),
          (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
    {
      sub_B0D97C(scrollView);
    }
    v11 = v10 - this->fields.initialScrollPosition.fields.y;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
      if ( !v12 )
        break;
      if ( !v15.fields.current )
        sub_B0D97C(v12);
      v13 = *(float *)&v15.fields.current[2].klass;
      if ( v13 <= v11 && v11 <= (float)(v13 + this->fields.scrollViewSize.fields.y) )
      {
        OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
        if ( OnFinishedReadEvent )
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)OnFinishedReadEvent,
            (System_Uri_o *)v15.fields.current[1].klass,
            (const MethodInfo_246EA50 *)Method_System_Action_ServantCommentEntity__Invoke__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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
    sub_B0D97C(this);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v12 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0LL;
      sub_B0D840(p_callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4219D1D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4219D1D = 1;
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
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4219D1B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v11);
    sub_B0D8A4(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_4219D1B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      objectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusFlavorTextListViewObject__Init(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v19,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject_33470352(
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4219D1C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_4219D1C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      objectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v14 )
        break;
      current = v21.fields.current;
      if ( !v21.fields.current )
        sub_B0D97C(v14);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v21.fields.current,
             v15) != 5 )
      {
        v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantStatusFlavorTextListViewObject__Init(
          (ServantStatusFlavorTextListViewObject_o *)current,
          mode,
          v19,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v20);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_33470140(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetMode_33470140(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4219D1A & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_B0D8A4(
                                                         &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
                                                         *(_QWORD *)&mode);
    byte_4219D1A = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B0D97C(this);
  v4->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v4, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_33470352(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode_33470300(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_33470140(this, mode, v10);
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
    sub_B0D97C(this);
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
  if ( (byte_4219D17 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_B0D8A4(
                                                         &ServantStatusFlavorTextListViewManager_TypeInfo,
                                                         basePositon);
    byte_4219D17 = 1;
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
    sub_B0D97C(this);
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

  if ( (byte_4219D15 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v6);
    byte_4219D15 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v9 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   scrollView,
                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL)
    || (v10 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
  {
    sub_B0D97C(scrollView);
  }
  v11 = *((float *)&v10[12].fields + 1);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v14 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B0D97C(v14);
    monitor = (ServantStatusFlavorTextListViewObject_o *)v16.fields.current[1].monitor;
    if ( !monitor )
      sub_B0D97C(0LL);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(monitor, v15);
    *(float *)&current[2].klass = UnityEngine_Mathf__Max(
                                    0.0,
                                    vabds_f32(ProfileLastLinePosition.fields.y, v11) - v9,
                                    0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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

  if ( (byte_4219D1E & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      cvName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v8);
    byte_4219D1E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      objectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v10 )
        break;
      current = v14.fields.current;
      if ( !v14.fields.current )
        sub_B0D97C(v10);
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
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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
  ServantLimitAddEntity_o *Entity; // x0
  ServantLimitAddEntity_o *v17; // x23
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x1
  ServantStatusFlavorTextListViewObject_o *current; // x22
  System_String_o *CondTitle; // x0
  const MethodInfo *v22; // x2
  System_Int32_array *OverwriteServantParameter; // x0
  int32_t v24; // w1
  int32_t ServantParameterLimitCount; // w21
  WebViewManager_o *v26; // x0
  ServantLimitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitEntity_o *v28; // x0
  struct ServantStatusFlavorTextListViewItemDraw_o *v29; // x8
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x8
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4219D1F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__, v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4219D1F = 1;
  }
  memset(&v32, 0, sizeof(v32));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  Entity = ServantLimitAddMaster__GetEntity((ServantLimitAddMaster_o *)Instance, svtId, imageLimitCount, 0LL);
  if ( !Entity )
    return;
  v17 = Entity;
  Instance = (DataManager_o *)this->fields.objectList;
  if ( !Instance )
LABEL_29:
    sub_B0D97C(Instance);
  if ( SLODWORD(Instance->fields.datalist) <= 0 )
  {
    this->fields.overwriteServantParameterTitleSvtId = svtId;
    this->fields.overwriteServantParameterTitleImageLimitCount = imageLimitCount;
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v31,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    v32 = v31;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v32,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v18 )
        break;
      current = (ServantStatusFlavorTextListViewObject_o *)v32.fields.current;
      if ( !v32.fields.current )
        sub_B0D97C(v18);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v32.fields.current,
             v19) == 5 )
      {
        CondTitle = ServantLimitAddEntity__GetCondTitle(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        ServantStatusFlavorTextListViewObject__SetCondTitle(current, CondTitle, v22);
        OverwriteServantParameter = ServantLimitAddEntity__GetOverwriteServantParameter(v17, 0LL);
        if ( OverwriteServantParameter && (int)OverwriteServantParameter->max_length >= 6 )
        {
          itemDraw = current->fields.itemDraw;
          if ( !itemDraw )
            sub_B0D97C(OverwriteServantParameter);
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
            v24 = 0;
          else
            v24 = imageLimitCount;
          ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(v17, v24, 0LL);
          v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v26 )
            sub_B0D97C(0LL);
          MasterData_WarQuestSelectionMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)v26,
                                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B0D97C(0LL);
          v28 = ServantLimitMaster__GetEntity(
                  MasterData_WarQuestSelectionMaster,
                  svtId,
                  ServantParameterLimitCount,
                  0LL);
          if ( !v28 )
            sub_B0D97C(0LL);
          v29 = current->fields.itemDraw;
          if ( !v29 )
            sub_B0D97C(v28);
          ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, void *))v29->klass->vtable._8_SetParameterGauge.method)(
            current->fields.itemDraw,
            (unsigned int)v28->fields.power,
            (unsigned int)v28->fields.defense,
            (unsigned int)v28->fields.agility,
            (unsigned int)v28->fields.magic,
            (unsigned int)v28->fields.luck,
            (unsigned int)v28->fields.treasureDevice,
            v29->klass[1]._1.image);
        }
        *(_QWORD *)&this->fields.overwriteServantParameterTitleSvtId = -1LL;
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v32,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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

  if ( (byte_4219D0D & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_4219D0D = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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

  if ( (byte_4219D0F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4219D0F = 1;
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
    v9 = sub_B022BC(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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

  if ( (byte_4219D0E & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_4219D0E = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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

  if ( (byte_4219D10 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4219D10 = 1;
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
    v9 = sub_B022BC(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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
  UIProgressBar_o *v7; // x19
  float alpha; // s0

  if ( (byte_4219D0C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, value);
    byte_4219D0C = 1;
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
    v7 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v7 )
      sub_B0D97C(v6);
    alpha = UIProgressBar__get_alpha(v7, 0LL);
    UIProgressBar__set_alpha(v7, alpha, 0LL);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4212273 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&result);
    byte_4212273 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
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
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, (unsigned int)result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
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
  if ( (byte_4212272 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v3);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)sub_B0D8A4(
                                                                              &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__,
                                                                              v4);
    byte_4212272 = 1;
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
          sub_B0D840(p__2__current, 0LL);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_29:
      sub_B0D97C(this);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)_4__this->fields.scrollView;
    if ( !this )
      goto LABEL_29;
    v9 = objectList->fields._items->m_Items[targetIndex];
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                              (UnityEngine_Component_o *)this,
                                                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_29;
    v10 = _4__this->fields.objectList;
    if ( !v10 )
      goto LABEL_29;
    size = v10->fields._size;
    v12 = *((float *)&this[4].fields.__1__state + 1);
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
                                                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4212271 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v1);
    byte_4212271 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantStatusFlavorTextListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantStatusFlavorTextListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.isNew;
}