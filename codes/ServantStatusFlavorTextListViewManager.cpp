void __fastcall ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_42B585B & 1) == 0 )
  {
    sub_B52984(&ServantStatusFlavorTextListViewManager_TypeInfo);
    byte_42B585B = 1;
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

  if ( (byte_42B585A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
    byte_42B585A = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v10;
  sub_B52920(
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
  *(_QWORD *)&this->fields.overwriteServantParameterTitleSvtId = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


ServantStatusFlavorTextListViewObject_o *__fastcall ServantStatusFlavorTextListViewManager__AddObjectList(
        ServantStatusFlavorTextListViewManager_o *this,
        UnityEngine_Vector3_o *basePositon,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x22
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  __int64 v9; // x1
  ServantStatusFlavorTextListViewObject_o *Component_srcLineSprite; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x7

  if ( (byte_42B5852 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5852 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                 (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)UnityEngine_Object__op_Inequality(
                                                                                                    v7,
                                                                                                    0LL,
                                                                                                    0LL);
  Component_srcLineSprite = 0LL;
  if ( ((unsigned __int8)objectList & 1) != 0 )
  {
    if ( !v7
      || (Component_srcLineSprite = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 (UnityEngine_GameObject_o *)v7,
                                                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, Component_srcLineSprite, v11),
          !Component_srcLineSprite)
      || (ServantStatusFlavorTextListViewObject__SetItem(
            Component_srcLineSprite,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v12),
          (objectList = this->fields.objectList) == 0LL) )
    {
      sub_B52A5C(objectList, v9);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objectList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
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

  if ( (byte_42B5850 & 1) == 0 )
  {
    sub_B52984(&ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_TypeInfo);
    byte_42B5850 = 1;
  }
  v7 = sub_B52A54(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_TypeInfo);
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41___ctor(
    (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)onFinished, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ServantStatusFlavorTextListViewManager__CreateList(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  UnityEngine_Object_c **v5; // x28
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  float v16; // s8
  float v17; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x22
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x4
  const MethodInfo *v35; // x3
  struct UnityEngine_GameObject_o *voice2Object; // x23
  UnityEngine_Object_o *v37; // x23
  const MethodInfo *v38; // x7
  ServantStatusFlavorTextListViewObject_o *v39; // x23
  const MethodInfo *v40; // x3
  ServantStatusListViewItem_o *v41; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  struct UnityEngine_GameObject_o *profileObject; // x22
  UnityEngine_Object_o *v44; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  ServantStatusListViewItem_o *v46; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v48; // x20
  const MethodInfo *v49; // x7
  const MethodInfo *v50; // x3
  struct ServantCommentEntity_array *svtCommentEntityList; // x26
  int max_length; // w8
  unsigned int v53; // w9
  ServantCommentEntity_o *v54; // x23
  struct UnityEngine_GameObject_o *v55; // x24
  UnityEngine_Object_o *v56; // x24
  ServantStatusFlavorTextListViewObject_o *v57; // x24
  _BOOL8 IsOpen; // x0
  const MethodInfo *v59; // x2
  ServantStatusListViewItem_o *v60; // x25
  int32_t id; // w26
  bool IsNew; // w27
  const MethodInfo *v63; // x7
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x7
  System_String_o *CondTitle; // x25
  const MethodInfo *v67; // x2
  __int64 v68; // x25
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w23
  const MethodInfo *v83; // x3
  int v84; // w8
  __int64 v85; // x22
  ServantCommentEntity_o **m_Items; // x20
  int32_t v87; // w23
  ServantCommentEntity_o *v88; // x24
  UnityEngine_Object_c *v89; // x0
  struct UnityEngine_GameObject_o *profile2Object; // x25
  UnityEngine_Object_o *v91; // x25
  ServantStatusFlavorTextListViewObject_o *v92; // x25
  _BOOL8 v93; // x0
  const MethodInfo *v94; // x2
  ServantStatusListViewItem_o *v95; // x26
  int32_t v96; // w27
  ServantStatusFlavorTextListViewManager_o *v97; // x20
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **v98; // x19
  UnityEngine_Object_c **v99; // x21
  bool v100; // w28
  const MethodInfo *v101; // x7
  const MethodInfo *v102; // x7
  System_String_o *v103; // x0
  const MethodInfo *v104; // x2
  const MethodInfo *v105; // x3
  __int64 v106; // x26
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  UnityEngine_Object_c *v119; // x0
  UnityEngine_Object_o *v120; // x20
  UIPanel_o *v121; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v124; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v127; // x22
  EventDelegate_Callback_o *v128; // x21
  struct UIScrollBar_o *v129; // x8
  System_Collections_Generic_List_EventDelegate__o *v130; // x20
  EventDelegate_Callback_o *v131; // x21
  const MethodInfo *v132; // x3
  int overwriteServantParameterTitleSvtId; // w1
  __int64 v134; // x0
  ServantCommentEntity_o **v135; // [xsp+8h] [xbp-A8h]
  struct ServantStatusListViewItem_o **v136; // [xsp+10h] [xbp-A0h]
  struct ServantCommentEntity_array *v137; // [xsp+18h] [xbp-98h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+20h] [xbp-90h]
  bool isPlayVoice; // [xsp+2Ch] [xbp-84h] BYREF
  System_String_o *voice; // [xsp+30h] [xbp-80h] BYREF
  System_String_o *illust; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B584B & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B52984(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
    sub_B52984(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__);
    sub_B52984(&Method_UIScrollView_OnScrollBar__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B584B = 1;
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
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_111;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                transform,
                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v16 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v17 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_111;
      v143.fields.x = -v16;
      v143.fields.y = -v17;
      v143.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v143, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_111;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)mainInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  p_objectList = &this->fields.objectList;
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v19;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v27;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantProfileList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *(_QWORD *)&basePositon.fields.x = 0LL;
  basePositon.fields.z = 0.0;
  transform = (UnityEngine_Component_o *)this->fields.mainInfo;
  if ( !transform )
    goto LABEL_111;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v34);
  if ( System_String__IsNullOrEmpty(voice, 0LL) )
  {
    voice2Object = this->fields.voice2Object;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v37 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)voice2Object,
                                    (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v37 )
        goto LABEL_111;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)v37,
                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_111;
      v39 = (ServantStatusFlavorTextListViewObject_o *)transform;
      ServantStatusFlavorTextListViewObject__SetItem(
        (ServantStatusFlavorTextListViewObject_o *)transform,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v38);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v39, v40);
      transform = (UnityEngine_Component_o *)this->fields.objectList;
      if ( !transform )
        goto LABEL_111;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    }
  }
  else
  {
    transform = (UnityEngine_Component_o *)ServantStatusFlavorTextListViewManager__AddObjectList(
                                             this,
                                             &basePositon,
                                             this->fields.voiceObject,
                                             v35);
  }
  v41 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_111;
  if ( v41->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v41->fields.commandCodeCommentEntity;
    if ( commandCodeCommentEntity )
    {
      profileObject = this->fields.profileObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v44 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)profileObject,
                                      (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_111;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v44,
                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        v46 = *p_mainInfo;
        commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
        v48 = (ServantStatusFlavorTextListViewObject_o *)Component_srcLineSprite;
        transform = (UnityEngine_Component_o *)CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0LL);
        if ( !v48 )
          goto LABEL_111;
        ServantStatusFlavorTextListViewObject__SetItem(
          v48,
          v46,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v49);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v48, v50);
        transform = (UnityEngine_Component_o *)this->fields.objectList;
        if ( !transform )
          goto LABEL_111;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
      }
    }
  }
  else
  {
    svtCommentEntityList = v41->fields.svtCommentEntityList;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    transform = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
    if ( !svtCommentEntityList )
      goto LABEL_111;
    max_length = svtCommentEntityList->max_length;
    v136 = &this->fields.mainInfo;
    v137 = svtCommentEntityList;
    if ( max_length >= 1 )
    {
      v53 = 0;
      while ( 1 )
      {
        if ( v53 >= max_length )
          goto LABEL_112;
        v54 = svtCommentEntityList->m_Items[v53];
        if ( !v54 )
          goto LABEL_111;
        if ( v54->fields.id == 1 )
          break;
        if ( (int)++v53 >= max_length )
          goto LABEL_68;
      }
      v55 = this->fields.profileObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v56 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)v55,
                                      (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v56 )
          goto LABEL_111;
        v57 = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)v56,
                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        IsOpen = ServantCommentEntity__IsOpen(v54, -1, 1, 0LL);
        if ( IsOpen )
        {
          v60 = *p_mainInfo;
          id = v54->fields.id;
          IsNew = ServantCommentEntity__IsNew(v54, 0LL);
          transform = (UnityEngine_Component_o *)ServantCommentEntity__GetComment(v54, 0LL);
          if ( !v57 )
            goto LABEL_111;
          ServantStatusFlavorTextListViewObject__SetItem(v57, v60, id, 1, IsNew, (System_String_o *)transform, 0, v63);
          p_mainInfo = &this->fields.mainInfo;
          svtCommentEntityList = v137;
        }
        else
        {
          transform = (UnityEngine_Component_o *)ServantStatusFlavorTextListViewManager__GetConditionString(
                                                   (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                                                   v54,
                                                   v59);
          if ( !v57 )
            goto LABEL_111;
          ServantStatusFlavorTextListViewObject__SetItem(
            v57,
            *p_mainInfo,
            v54->fields.id,
            0,
            0,
            (System_String_o *)transform,
            0,
            v65);
        }
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v57, v64);
        CondTitle = ServantCommentEntity__GetCondTitle(v54, 0LL);
        if ( !System_String__IsNullOrEmpty(CondTitle, 0LL) )
          ServantStatusFlavorTextListViewObject__SetCondTitle(v57, CondTitle, v67);
        if ( !ServantCommentEntity__IsConst(v54, 0LL) )
        {
          v68 = sub_B52A54(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
          ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
            (ServantStatusFlavorTextListViewManager_ServantProfile_o *)v68,
            0LL);
          if ( !v68 )
            goto LABEL_111;
          *(_QWORD *)(v68 + 16) = v54;
          sub_B52920(
            (BattleServantConfConponent_o *)(v68 + 16),
            (System_Int32_array **)v54,
            v69,
            v70,
            v71,
            v72,
            v73,
            v74);
          *(_QWORD *)(v68 + 24) = v57;
          sub_B52920(
            (BattleServantConfConponent_o *)(v68 + 24),
            (System_Int32_array **)v57,
            v75,
            v76,
            v77,
            v78,
            v79,
            v80);
          *(_DWORD *)(v68 + 32) = 0;
          transform = (UnityEngine_Component_o *)*p_servantProfileList;
          if ( !*p_servantProfileList )
            goto LABEL_111;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
        }
        transform = (UnityEngine_Component_o *)*p_objectList;
        if ( !*p_objectList )
          goto LABEL_111;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
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
                                               v83);
    }
    v84 = svtCommentEntityList->max_length;
    if ( v84 >= 1 )
    {
      v85 = 0LL;
      m_Items = svtCommentEntityList->m_Items;
      v87 = 1;
      v135 = svtCommentEntityList->m_Items;
      while ( (unsigned int)v85 < v84 )
      {
        v88 = m_Items[v85];
        if ( !v88 )
          goto LABEL_111;
        if ( v88->fields.id != 1 )
        {
          v89 = *v5;
          profile2Object = this->fields.profile2Object;
          if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v89);
          v91 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)profile2Object,
                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v91, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v91 )
              goto LABEL_111;
            v92 = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               (UnityEngine_GameObject_o *)v91,
                                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
            v93 = ServantCommentEntity__IsOpen(v88, -1, 1, 0LL);
            if ( v93 )
            {
              v95 = *p_mainInfo;
              v96 = v88->fields.id;
              v97 = this;
              v98 = p_objectList;
              v99 = v5;
              v100 = ServantCommentEntity__IsNew(v88, 0LL);
              transform = (UnityEngine_Component_o *)ServantCommentEntity__GetComment(v88, 0LL);
              if ( !v92 )
                goto LABEL_111;
              ServantStatusFlavorTextListViewObject__SetItem(
                v92,
                v95,
                v96,
                1,
                v100,
                (System_String_o *)transform,
                v87,
                v101);
              v5 = v99;
              p_objectList = v98;
              this = v97;
              m_Items = v135;
              p_mainInfo = v136;
            }
            else
            {
              transform = (UnityEngine_Component_o *)ServantStatusFlavorTextListViewManager__GetConditionString(
                                                       (ServantStatusFlavorTextListViewManager_o *)v93,
                                                       v88,
                                                       v94);
              if ( !v92 )
                goto LABEL_111;
              ServantStatusFlavorTextListViewObject__SetItem(
                v92,
                *p_mainInfo,
                v88->fields.id,
                0,
                0,
                (System_String_o *)transform,
                v87,
                v102);
            }
            v103 = ServantCommentEntity__GetCondTitle(v88, 0LL);
            ServantStatusFlavorTextListViewObject__SetCondTitle(v92, v103, v104);
            ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v92, v105);
            v106 = sub_B52A54(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
            ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
              (ServantStatusFlavorTextListViewManager_ServantProfile_o *)v106,
              0LL);
            if ( !v106 )
              goto LABEL_111;
            *(_QWORD *)(v106 + 16) = v88;
            sub_B52920(
              (BattleServantConfConponent_o *)(v106 + 16),
              (System_Int32_array **)v88,
              v107,
              v108,
              v109,
              v110,
              v111,
              v112);
            *(_QWORD *)(v106 + 24) = v92;
            sub_B52920(
              (BattleServantConfConponent_o *)(v106 + 24),
              (System_Int32_array **)v92,
              v113,
              v114,
              v115,
              v116,
              v117,
              v118);
            *(_DWORD *)(v106 + 32) = 0;
            transform = (UnityEngine_Component_o *)*p_servantProfileList;
            if ( !*p_servantProfileList )
              goto LABEL_111;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v106,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
            transform = (UnityEngine_Component_o *)*p_objectList;
            if ( !*p_objectList )
              goto LABEL_111;
            ++v87;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
            svtCommentEntityList = v137;
          }
        }
        v84 = svtCommentEntityList->max_length;
        if ( (int)++v85 >= v84 )
          goto LABEL_93;
      }
LABEL_112:
      v134 = sub_B52A88(transform);
      sub_B52A28(v134, 0LL);
    }
  }
LABEL_93:
  v119 = *v5;
  v120 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v119->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v119);
  if ( UnityEngine_Object__op_Inequality(v120, 0LL, 0LL) )
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
                                           (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_111;
  v121 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0LL);
  height = UIPanel__get_height(v121, 0LL);
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
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v124);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_111;
  onChange = scrollBar->fields.onChange;
  v127 = (Il2CppObject *)this->fields.scrollView;
  v128 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v128, v127, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)EventDelegate__Add(onChange, v128, 0LL);
  v129 = this->fields.scrollBar;
  if ( !v129 )
LABEL_111:
    sub_B52A5C(transform, v7);
  v130 = v129->fields.onChange;
  v131 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v131,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0LL);
  EventDelegate__Add(v130, v131, 0LL);
  overwriteServantParameterTitleSvtId = this->fields.overwriteServantParameterTitleSvtId;
  if ( overwriteServantParameterTitleSvtId >= 1 )
    ServantStatusFlavorTextListViewManager__UpdateParameter(
      this,
      overwriteServantParameterTitleSvtId,
      this->fields.overwriteServantParameterTitleImageLimitCount,
      v132);
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

  if ( (byte_42B5853 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5853 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v14.fields.current )
      sub_B52A5C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v14.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
  this->fields.mainInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.mainInfo, 0LL, v6, v7, v8, v9, v10, v11);
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
    sub_B52A5C(objectList, method);
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
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__38_0; // x22
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

  if ( (byte_42B584D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
    sub_B52984(&Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__);
    sub_B52984(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_B52984(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__38_0__);
    sub_B52984(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    byte_42B584D = 1;
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
  _9__38_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__38_0,
      v9,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__38_0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_ServantStatusFlavorTextListViewObject___ctor__);
    v10 = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    v10->__9__38_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__38_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !objectList )
    sub_B52A5C(v6, onFinished);
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)objectList,
            (System_Predicate_T__o *)_9__38_0,
            (const MethodInfo_2FF20B0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( (Index & 0x80000000) != 0 )
  {
    ActionExtensions__Call(onFinished, 0LL);
  }
  else
  {
    v19 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v18);
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
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

  if ( (byte_42B584C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12084/*"SERVANT_STATUS_PROFILE_CONDITION"*/);
    sub_B52984(&StringLiteral_16079/*"_FLAVOR2"*/);
    sub_B52984(&StringLiteral_16078/*"_FLAVOR"*/);
    sub_B52984(&StringLiteral_3325/*"COND_TYPE_AND_FLAVOR2"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B584C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
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
                                                                    (System_String_o *)StringLiteral_12084/*"SERVANT_STATUS_PROFILE_CONDITION"*/,
                                                                    0LL);
    if ( v6 )
    {
      v7 = (System_String_o *)Master_WarQuestSelectionMaster;
      ConditionString = ServantCommentAddMaster__GetConditionString(
                          v6,
                          (System_String_o *)StringLiteral_16078/*"_FLAVOR"*/,
                          (System_String_o *)StringLiteral_16079/*"_FLAVOR2"*/,
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
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
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
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12084/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
    ConditionString = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_16078/*"_FLAVOR"*/,
                        0LL);
    goto LABEL_33;
  }
  Conditiontext = (Il2CppObject *)ServantCommentEntity__GetConditiontext(
                                    svtCommentEntity,
                                    (System_String_o *)StringLiteral_16079/*"_FLAVOR2"*/,
                                    0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ADEE6 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ADEE6 = 1;
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
    v13 = (System_String_o *)StringLiteral_12084/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3325/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
    v15 = System_String__Concat_44568316((System_String_o *)Conditiontext, v14, 0LL);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v19 = v15;
    v20 = ServantCommentAddMaster__GetConditionString(
            v6,
            (System_String_o *)StringLiteral_16078/*"_FLAVOR"*/,
            (System_String_o *)StringLiteral_16079/*"_FLAVOR2"*/,
            svtId,
            id,
            priority,
            -1,
            0LL);
    Conditiontext = (Il2CppObject *)System_String__Concat_44568316(v19, v20, 0LL);
    v13 = (System_String_o *)StringLiteral_12084/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
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

  if ( (byte_42B584E & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ServantCommentEntity__Invoke__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B584E = 1;
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
      sub_B52A5C(scrollView, v4);
    }
    v7 = v6 - this->fields.initialScrollPosition.fields.y;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v12,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
      if ( !v8 )
        break;
      if ( !v12.fields.current )
        sub_B52A5C(v8, v9);
      v10 = *(float *)&v12.fields.current[2].klass;
      if ( v10 <= v7 && v7 <= (float)(v10 + this->fields.scrollViewSize.fields.y) )
      {
        OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
        if ( OnFinishedReadEvent )
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)OnFinishedReadEvent,
            (System_Uri_o *)v12.fields.current[1].klass,
            (const MethodInfo_2627794 *)Method_System_Action_ServantCommentEntity__Invoke__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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
    sub_B52A5C(this, 0LL);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    v12 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0LL;
      sub_B52920(p_callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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

  if ( (byte_42B5857 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5857 = 1;
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
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_42B5855 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_B52984(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B5855 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      objectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v14.fields.current;
      v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v11, v12);
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
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject_34515108(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  int32_t size; // w8
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42B5856 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_B52984(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B5856 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      objectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v12,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v7 )
        break;
      current = v12.fields.current;
      if ( !v12.fields.current )
        sub_B52A5C(v7, v8);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v12.fields.current,
             v8) != 5 )
      {
        v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantStatusFlavorTextListViewObject__Init(
          (ServantStatusFlavorTextListViewObject_o *)current,
          mode,
          v10,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v11);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_34514896(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetMode_34514896(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_42B5854 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    byte_42B5854 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_B52A5C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v4, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_34515108(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode_34515056(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_34514896(this, mode, v10);
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
    sub_B52A5C(this, 0LL);
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
  if ( (byte_42B5851 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_B52984(&ServantStatusFlavorTextListViewManager_TypeInfo);
    byte_42B5851 = 1;
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
    sub_B52A5C(this, basePositon);
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

  if ( (byte_42B584F & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    byte_42B584F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  scrollView,
                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v5 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   scrollView,
                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL)
    || (v6 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
  {
    sub_B52A5C(scrollView, method);
  }
  v7 = *((float *)&v6[12].fields + 1);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)scrollView,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v10 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B52A5C(v10, v11);
    monitor = (ServantStatusFlavorTextListViewObject_o *)v12.fields.current[1].monitor;
    if ( !monitor )
      sub_B52A5C(0LL, v11);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(monitor, v11);
    *(float *)&current[2].klass = UnityEngine_Mathf__Max(0.0, vabds_f32(ProfileLastLinePosition.fields.y, v7) - v5, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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

  if ( (byte_42B5858 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    byte_42B5858 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, cvName);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      objectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v10,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v6 )
        break;
      current = v10.fields.current;
      if ( !v10.fields.current )
        sub_B52A5C(v6, v7);
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
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__UpdateParameter(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  ServantLimitAddEntity_o *Entity; // x0
  ServantLimitAddEntity_o *v10; // x23
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  ServantStatusFlavorTextListViewObject_o *current; // x22
  System_String_o *CondTitle; // x0
  const MethodInfo *v15; // x2
  System_Int32_array *OverwriteServantParameter; // x0
  __int64 v17; // x1
  int32_t v18; // w1
  int32_t ServantParameterLimitCount; // w21
  WebViewManager_o *v20; // x0
  __int64 v21; // x1
  ServantLimitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x1
  ServantLimitEntity_o *v24; // x0
  __int64 v25; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v26; // x8
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x8
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B5859 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5859 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  Entity = ServantLimitAddMaster__GetEntity((ServantLimitAddMaster_o *)Instance, svtId, imageLimitCount, 0LL);
  if ( !Entity )
    return;
  v10 = Entity;
  Instance = (DataManager_o *)this->fields.objectList;
  if ( !Instance )
LABEL_29:
    sub_B52A5C(Instance, v8);
  if ( SLODWORD(Instance->fields.datalist) <= 0 )
  {
    this->fields.overwriteServantParameterTitleSvtId = svtId;
    this->fields.overwriteServantParameterTitleImageLimitCount = imageLimitCount;
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v28,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    v29 = v28;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v29,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v11 )
        break;
      current = (ServantStatusFlavorTextListViewObject_o *)v29.fields.current;
      if ( !v29.fields.current )
        sub_B52A5C(v11, v12);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v29.fields.current,
             v12) == 5 )
      {
        CondTitle = ServantLimitAddEntity__GetCondTitle(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        ServantStatusFlavorTextListViewObject__SetCondTitle(current, CondTitle, v15);
        OverwriteServantParameter = ServantLimitAddEntity__GetOverwriteServantParameter(v10, 0LL);
        if ( OverwriteServantParameter && (int)OverwriteServantParameter->max_length >= 6 )
        {
          itemDraw = current->fields.itemDraw;
          if ( !itemDraw )
            sub_B52A5C(OverwriteServantParameter, v17);
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
            v18 = 0;
          else
            v18 = imageLimitCount;
          ServantParameterLimitCount = ServantLimitAddEntity__GetServantParameterLimitCount(v10, v18, 0LL);
          v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v20 )
            sub_B52A5C(0LL, v21);
          MasterData_WarQuestSelectionMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)v20,
                                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B52A5C(0LL, v23);
          v24 = ServantLimitMaster__GetEntity(
                  MasterData_WarQuestSelectionMaster,
                  svtId,
                  ServantParameterLimitCount,
                  0LL);
          if ( !v24 )
            sub_B52A5C(0LL, v25);
          v26 = current->fields.itemDraw;
          if ( !v26 )
            sub_B52A5C(v24, v25);
          ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, void *))v26->klass->vtable._8_SetParameterGauge.method)(
            current->fields.itemDraw,
            (unsigned int)v24->fields.power,
            (unsigned int)v24->fields.defense,
            (unsigned int)v24->fields.agility,
            (unsigned int)v24->fields.magic,
            (unsigned int)v24->fields.luck,
            (unsigned int)v24->fields.treasureDevice,
            v26->klass[1]._1.image);
        }
        *(_QWORD *)&this->fields.overwriteServantParameterTitleSvtId = -1LL;
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v29,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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

  if ( (byte_42B5847 & 1) == 0 )
  {
    sub_B52984(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    byte_42B5847 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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

  if ( (byte_42B5849 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B5849 = 1;
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
    v9 = sub_B4739C(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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

  if ( (byte_42B5848 & 1) == 0 )
  {
    sub_B52984(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    byte_42B5848 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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

  if ( (byte_42B584A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B584A = 1;
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
    v9 = sub_B4739C(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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

  if ( (byte_42B5846 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5846 = 1;
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
      sub_B52A5C(v6, v7);
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
  sub_B52920(p_method);
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
  if ( (byte_42AD38D & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    byte_42AD38D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v10, v12);
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
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_42AD38C & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)sub_B52984(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    byte_42AD38C = 1;
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
        this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)_4__this->fields.scrollView;
        if ( this )
        {
          v22 = v21;
          ((void (__fastcall *)(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *, void *, float, float, float))this->klass[1]._1.namespaze)(
            this,
            this->klass[1]._1.byval_arg.data,
            0.0,
            v21 - v2->fields._prevValue_5__5,
            0.0);
          v2->fields._prevValue_5__5 = v22;
          v2->fields.__2__current = 0LL;
          p__2__current = &v2->fields.__2__current;
          sub_B52920(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_29:
      sub_B52A5C(this, method);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)_4__this->fields.scrollView;
    if ( !this )
      goto LABEL_29;
    v7 = objectList->fields._items->m_Items[targetIndex];
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                              (UnityEngine_Component_o *)this,
                                                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_29;
    v8 = _4__this->fields.objectList;
    if ( !v8 )
      goto LABEL_29;
    size = v8->fields._size;
    v10 = *((float *)&this[4].fields.__1__state + 1);
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)v8->fields._items->m_Items[size - 1];
    if ( !this )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)(&v11 - 1) = ServantStatusFlavorTextListViewObject__get_BottomPosition(
                                             (ServantStatusFlavorTextListViewObject_o *)this,
                                             0LL);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)_4__this->fields.scrollView;
    if ( !this )
      goto LABEL_29;
    v12 = v11;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                              (UnityEngine_Component_o *)this,
                                                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__41_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42AD38B & 1) == 0 )
  {
    sub_B52984(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    byte_42AD38B = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantStatusFlavorTextListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantStatusFlavorTextListViewManager___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return x->fields.isNew;
}