void ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_59349C1 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusFlavorTextListViewManager_TypeInfo);
    byte_59349C1 = 1;
  }
  ServantStatusFlavorTextListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
}


void ServantStatusFlavorTextListViewManager___ctor(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int v17; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_59349C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
    byte_59349C0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantProfileList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (unsigned __int8)byte_5931940;
  this->fields.isInput = 1;
  if ( !v17 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.initialScrollPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.initialScrollPosition.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


ServantStatusFlavorTextListViewObject_o *ServantStatusFlavorTextListViewManager__AddObjectList(
        ServantStatusFlavorTextListViewManager_o *this,
        UnityEngine_Vector3_o *basePositon,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  ServantStatusFlavorTextListViewObject_o *Component_object; // x0
  __int64 v9; // x1
  ServantStatusFlavorTextListViewObject_o *v10; // x21
  const MethodInfo *v11; // x7
  const MethodInfo *v12; // x3
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v22; // x8

  if ( (byte_59349B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59349B8 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, basePositon, prefab);
  v7 = UnityEngine_Object__Instantiate_object_(
         (Il2CppObject *)prefab,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  Component_object = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)v7,
                                                                  0,
                                                                  0);
  v10 = 0;
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_14;
    Component_object = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v7,
                                                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    if ( !Component_object
      || (v10 = Component_object,
          ServantStatusFlavorTextListViewObject__SetItem(
            Component_object,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v11),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, v10, v12),
          (Component_object = (ServantStatusFlavorTextListViewObject_o *)this->fields.objectList) == 0)
      || (m_CachedPtr = Component_object->fields.m_CachedPtr,
          v20 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__,
          ++HIDWORD(Component_object->fields.m_CancellationTokenSource),
          !m_CachedPtr) )
    {
LABEL_14:
      sub_21FFECC(Component_object, v9);
    }
    m_CancellationTokenSource_low = SLODWORD(Component_object->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Component_object,
        (Il2CppObject *)v10,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(Component_object->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v22 + 32) = v10;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 32), (int32_t)v10, v13, v14, v15, v16, v17, v18);
    }
  }
  return v10;
}


System_Collections_IEnumerator_o *ServantStatusFlavorTextListViewManager__AutoScroll_IE(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t targetIndex,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_59349B6 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_TypeInfo);
    byte_59349B6 = 1;
  }
  v7 = sub_21FFEBC(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)onFinished, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void ServantStatusFlavorTextListViewManager__CreateList(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  void *transform; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Component_object; // x20
  float v19; // s8
  float v20; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x28
  System_Collections_Generic_List_object__o *v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_List_object__o *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  const MethodInfo *v36; // x4
  __int64 v37; // x1
  __int64 v38; // x2
  const MethodInfo *v39; // x3
  Il2CppObject *voice2Object; // x22
  Il2CppObject *v41; // x23
  __int64 v42; // x2
  const MethodInfo *v43; // x7
  ServantStatusFlavorTextListViewObject_o *v44; // x23
  const MethodInfo *v45; // x3
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  ServantStatusListViewItem_o *v56; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  Il2CppObject *profileObject; // x22
  Il2CppObject *v59; // x22
  Il2CppObject *v60; // x0
  ServantStatusListViewItem_o *v61; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v63; // x20
  const MethodInfo *v64; // x7
  const MethodInfo *v65; // x3
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  __int64 v76; // x1
  __int64 v77; // x2
  System_Collections_Generic_List_object__o *v78; // x23
  __int64 v79; // x2
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__38_0; // x24
  Il2CppObject *v82; // x22
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *v83; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  int v90; // w22
  int32_t v91; // w24
  int v92; // w27
  ServantCommentEntity_o *v93; // x25
  struct ServantEntity_o *v94; // x8
  int32_t v95; // w22
  const MethodInfo *v96; // x3
  __int64 v97; // x1
  __int64 v98; // x2
  Il2CppObject *profile2Object; // x26
  Il2CppObject *v100; // x26
  Il2CppObject *v101; // x21
  int32_t v102; // w19
  _BOOL8 IsOpen; // x0
  const MethodInfo *v104; // x2
  System_Collections_Generic_List_object__o *v105; // x27
  ServantStatusFlavorTextListViewManager_o *v106; // x23
  ServantStatusListViewItem_o **v107; // x20
  ServantStatusListViewItem_o *v108; // x28
  int32_t id; // w29
  bool IsNew; // w22
  const MethodInfo *v111; // x7
  const MethodInfo *v112; // x3
  const MethodInfo *v113; // x7
  System_String_o *CondTitle; // x27
  const MethodInfo *v115; // x2
  __int64 v116; // x27
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  System_Collections_Generic_List_object__o *v145; // x8
  struct System_Object_array *items; // x9
  _QWORD *v147; // x10
  __int64 size; // x11
  Il2CppClass **v149; // x0
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  const MethodInfo *v152; // x3
  UnityEngine_Object_o *v153; // x20
  UIPanel_o *v154; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v157; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v160; // x22
  EventDelegate_Callback_o *v161; // x21
  __int64 v162; // x1
  __int64 v163; // x2
  struct UIScrollBar_o *v164; // x8
  System_Collections_Generic_List_EventDelegate__o *v165; // x20
  EventDelegate_Callback_o *v166; // x21
  int v167; // [xsp+4h] [xbp-ACh]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // [xsp+10h] [xbp-A0h]
  int v170; // [xsp+18h] [xbp-98h]
  bool isPlayVoice; // [xsp+1Ch] [xbp-94h] BYREF
  System_String_o *voice; // [xsp+20h] [xbp-90h] BYREF
  System_String_o *illust; // [xsp+28h] [xbp-88h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v175; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59349B1 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&System_Comparison_ServantCommentEntity__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
    sub_21FFC50(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__);
    sub_21FFC50(&Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__38_0__);
    sub_21FFC50(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    sub_21FFC50(&Method_UIScrollView_OnScrollBar__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59349B1 = 1;
  }
  basePositon.fields.z = 0.0;
  illust = 0;
  *(_QWORD *)&basePositon.fields.x = 0;
  voice = 0;
  isPlayVoice = 0;
  ServantStatusFlavorTextListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = this->fields.scrollView;
    if ( !transform )
      goto LABEL_124;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_124;
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_124;
      v19 = *((float *)&Component_object[20].monitor + 1);
      v20 = *(float *)&Component_object[21].klass;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_124;
      v175.fields.x = -v19;
      v175.fields.y = -v20;
      v175.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v175, 0);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_124;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo,
    (int32_t)mainInfo,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v22 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v22;
  p_objectList = &this->fields.objectList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v29;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantProfileList,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  transform = this->fields.mainInfo;
  *(_QWORD *)&basePositon.fields.x = 0;
  basePositon.fields.z = 0.0;
  if ( !transform )
    goto LABEL_124;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v36);
  if ( System_String__IsNullOrEmpty(voice, 0) )
  {
    voice2Object = (Il2CppObject *)this->fields.voice2Object;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
    v41 = UnityEngine_Object__Instantiate_object_(
            voice2Object,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v41 )
        goto LABEL_124;
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v41,
                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_124;
      v44 = (ServantStatusFlavorTextListViewObject_o *)transform;
      ServantStatusFlavorTextListViewObject__SetItem(
        (ServantStatusFlavorTextListViewObject_o *)transform,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v43);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v44, v45);
      transform = this->fields.objectList;
      if ( !transform )
        goto LABEL_124;
      v52 = *((_QWORD *)transform + 2);
      v53 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
      ++*((_DWORD *)transform + 7);
      if ( !v52 )
        goto LABEL_124;
      v54 = *((int *)transform + 6);
      if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v44,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = v52 + 8 * v54;
        *((_DWORD *)transform + 6) = v54 + 1;
        *(_QWORD *)(v55 + 32) = v44;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v55 + 32), (int32_t)v44, v46, v47, v48, v49, v50, v51);
      }
    }
  }
  else
  {
    transform = ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.voiceObject, v39);
  }
  v56 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_124;
  if ( v56->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v56->fields.commandCodeCommentEntity;
    if ( !commandCodeCommentEntity )
      goto LABEL_110;
    profileObject = (Il2CppObject *)this->fields.profileObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v42);
    v59 = UnityEngine_Object__Instantiate_object_(
            profileObject,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v59, 0, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_110;
    if ( v59 )
    {
      v60 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v59,
              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      v61 = *p_mainInfo;
      commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
      v63 = (ServantStatusFlavorTextListViewObject_o *)v60;
      transform = CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0);
      if ( v63 )
      {
        ServantStatusFlavorTextListViewObject__SetItem(
          v63,
          v61,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v64);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v63, v65);
        transform = this->fields.objectList;
        if ( transform )
        {
          v72 = *((_QWORD *)transform + 2);
          v73 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
          ++*((_DWORD *)transform + 7);
          if ( v72 )
          {
            v74 = *((int *)transform + 6);
            if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                (Il2CppObject *)v63,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
            }
            else
            {
              v75 = v72 + 8 * v74;
              *((_DWORD *)transform + 6) = v74 + 1;
              *(_QWORD *)(v75 + 32) = v63;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v75 + 32), (int32_t)v63, v66, v67, v68, v69, v70, v71);
            }
            goto LABEL_110;
          }
        }
      }
    }
    goto LABEL_124;
  }
  v78 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v56->fields.svtCommentEntityList,
                                                       (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v76, v77);
  DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( !*(&ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo, v8, v79);
    transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  static_fields = (struct ServantStatusFlavorTextListViewManager___c_StaticFields *)*((_QWORD *)transform + 23);
  _9__38_0 = (System_Comparison_T__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( !*((_DWORD *)transform + 57) )
    {
      j_il2cpp_runtime_class_init_0(transform, v8, v79);
      static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    }
    v82 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantCommentEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__38_0,
      v82,
      Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__38_0__,
      0);
    v83 = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    v83->__9__38_0 = (struct System_Comparison_ServantCommentEntity__o *)_9__38_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v83->__9__38_0, (int32_t)_9__38_0, v84, v85, v86, v87, v88, v89);
  }
  if ( !v78 )
    goto LABEL_124;
  System_Collections_Generic_List_object___Sort_71636404(
    v78,
    _9__38_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
  if ( v78->fields._size < 1 )
  {
LABEL_103:
    if ( *p_mainInfo )
    {
      svtEntity = (*p_mainInfo)->fields.svtEntity;
      if ( svtEntity )
      {
        type = svtEntity->fields.type;
        if ( SvtType__IsServant(type, 0) || SvtType__IsEnemyCollectionDetail(type, 0) )
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v152);
        goto LABEL_110;
      }
    }
    goto LABEL_124;
  }
  v90 = 0;
  v91 = 0;
  v92 = 1;
  do
  {
    transform = System_Collections_Generic_List_object___get_Item(
                  v78,
                  v91,
                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    if ( !transform )
      goto LABEL_124;
    v93 = (ServantCommentEntity_o *)transform;
    if ( !ServantCommentEntity__IsHideUntilCond((ServantCommentEntity_o *)transform, 0)
      || (transform = (void *)ServantCommentEntity__IsOpen(v93, -1, 1, 0), ((unsigned __int8)transform & 1) != 0) )
    {
      if ( !((v91 == 0) | v90 & 1) )
      {
        if ( ServantCommentEntity__IsProfileLabel(v93, 0) )
        {
          transform = System_Collections_Generic_List_object___get_Item(
                        v78,
                        v91 - 1,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
          if ( !transform )
            goto LABEL_124;
          if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)transform, 0) )
            goto LABEL_65;
        }
        transform = (void *)ServantCommentEntity__IsDetailLabel(v93, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = System_Collections_Generic_List_object___get_Item(
                        v78,
                        v91 - 1,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
          if ( !transform )
            goto LABEL_124;
          transform = (void *)ServantCommentEntity__IsDetailLabel((ServantCommentEntity_o *)transform, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
            goto LABEL_65;
        }
        if ( !*p_mainInfo )
          goto LABEL_124;
        v94 = (*p_mainInfo)->fields.svtEntity;
        if ( !v94 )
          goto LABEL_124;
        v95 = v94->fields.type;
        if ( !SvtType__IsServant(v95, 0) && !SvtType__IsEnemyCollectionDetail(v95, 0) )
        {
LABEL_65:
          v90 = 0;
        }
        else
        {
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v96);
          v90 = 1;
        }
      }
      if ( ServantCommentEntity__IsDetailLabel(v93, 0) )
      {
        profile2Object = (Il2CppObject *)this->fields.profileObject;
      }
      else
      {
        v100 = 0;
        if ( !ServantCommentEntity__IsProfileLabel(v93, 0) )
          goto LABEL_73;
        profile2Object = (Il2CppObject *)this->fields.profile2Object;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v97, v98);
      v100 = UnityEngine_Object__Instantiate_object_(
               profile2Object,
               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_73:
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v97, v98);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v100, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v100 )
          goto LABEL_124;
        v101 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)v100,
                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        if ( ServantCommentEntity__IsProfileLabel(v93, 0) )
          v102 = v92;
        else
          v102 = 0;
        IsOpen = ServantCommentEntity__IsOpen(v93, -1, 1, 0);
        v170 = v92;
        if ( IsOpen )
        {
          v105 = v78;
          v106 = this;
          v107 = p_mainInfo;
          v108 = *p_mainInfo;
          id = v93->fields.id;
          v167 = v90;
          IsNew = ServantCommentEntity__IsNew(v93, 0);
          transform = ServantCommentEntity__GetComment(v93, 0);
          if ( !v101 )
            goto LABEL_124;
          ServantStatusFlavorTextListViewObject__SetItem(
            (ServantStatusFlavorTextListViewObject_o *)v101,
            v108,
            id,
            1,
            IsNew,
            (System_String_o *)transform,
            v102,
            v111);
          p_mainInfo = v107;
          this = v106;
          v90 = v167;
          v78 = v105;
        }
        else
        {
          transform = ServantStatusFlavorTextListViewManager__GetConditionString(
                        (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                        v93,
                        v104);
          if ( !v101 )
            goto LABEL_124;
          ServantStatusFlavorTextListViewObject__SetItem(
            (ServantStatusFlavorTextListViewObject_o *)v101,
            *p_mainInfo,
            v93->fields.id,
            0,
            0,
            (System_String_o *)transform,
            v102,
            v113);
        }
        ServantStatusFlavorTextListViewManager__SetObjectPosition(
          this,
          &basePositon,
          (ServantStatusFlavorTextListViewObject_o *)v101,
          v112);
        CondTitle = ServantCommentEntity__GetCondTitle(v93, 0);
        if ( ServantCommentEntity__IsProfileLabel(v93, 0) || !System_String__IsNullOrEmpty(CondTitle, 0) )
          ServantStatusFlavorTextListViewObject__SetCondTitle(
            (ServantStatusFlavorTextListViewObject_o *)v101,
            CondTitle,
            v115);
        if ( ServantCommentEntity__IsProfileLabel(v93, 0) || !ServantCommentEntity__IsConst(v93, 0) )
        {
          v116 = sub_21FFEBC(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
          System_Object___ctor((Il2CppObject *)v116, 0);
          if ( !v116 )
            goto LABEL_124;
          *(_QWORD *)(v116 + 16) = v93;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v116 + 16), (int32_t)v93, v117, v118, v119, v120, v121, v122);
          *(_QWORD *)(v116 + 24) = v101;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v116 + 24),
            (int32_t)v101,
            v123,
            v124,
            v125,
            v126,
            v127,
            v128);
          *(_DWORD *)(v116 + 32) = 0;
          transform = *p_servantProfileList;
          if ( !*p_servantProfileList )
            goto LABEL_124;
          v135 = *((_QWORD *)transform + 2);
          v136 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__;
          ++*((_DWORD *)transform + 7);
          if ( !v135 )
            goto LABEL_124;
          v137 = *((int *)transform + 6);
          if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)transform,
              (Il2CppObject *)v116,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
          }
          else
          {
            v138 = v135 + 8 * v137;
            *((_DWORD *)transform + 6) = v137 + 1;
            *(_QWORD *)(v138 + 32) = v116;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v138 + 32), v116, v129, v130, v131, v132, v133, v134);
          }
        }
        transform = (void *)ServantCommentEntity__IsProfileLabel(v93, 0);
        v145 = (System_Collections_Generic_List_object__o *)*p_objectList;
        if ( !*p_objectList )
          goto LABEL_124;
        items = v145->fields._items;
        v147 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
        ++v145->fields._version;
        if ( !items )
          goto LABEL_124;
        size = v145->fields._size;
        v92 = v170 + ((unsigned __int8)transform & 1);
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v145,
            v101,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
        }
        else
        {
          v149 = &items->obj.klass + size;
          v145->fields._size = size + 1;
          v149[4] = (Il2CppClass *)v101;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v149 + 4), (int32_t)v101, v139, v140, v141, v142, v143, v144);
        }
      }
    }
    ++v91;
  }
  while ( v91 < v78->fields._size );
  if ( (v90 & 1) == 0 )
    goto LABEL_103;
LABEL_110:
  v153 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v42);
  if ( UnityEngine_Object__op_Inequality(v153, 0, 0) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
      goto LABEL_115;
    }
LABEL_124:
    sub_21FFECC(transform, v8);
  }
LABEL_115:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_124;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_124;
  v154 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0);
  height = UIPanel__get_height(v154, 0);
  transform = this->fields.scrollView;
  this->fields.scrollViewSize.fields.x = width;
  this->fields.scrollViewSize.fields.y = height;
  if ( !transform )
    goto LABEL_124;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_124;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v157);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_124;
  onChange = scrollBar->fields.onChange;
  v160 = (Il2CppObject *)this->fields.scrollView;
  v161 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v161, v160, Method_UIScrollView_OnScrollBar__, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v162, v163);
  transform = EventDelegate__Add(onChange, v161, 0);
  v164 = this->fields.scrollBar;
  if ( !v164 )
    goto LABEL_124;
  v165 = v164->fields.onChange;
  v166 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v166,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0);
  EventDelegate__Add(v165, v166, 0);
}


void ServantStatusFlavorTextListViewManager__DestroyList(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v13; // x8
  System_String_o *size; // x2
  int v15; // w9
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_59349B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59349B9 = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v20, 0, sizeof(v20));
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v20 = v19;
  v19.fields._list = 0;
  *(_QWORD *)&v19.fields._index = &v20;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v20.fields._current )
      sub_21FFECC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v20.fields._current,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  v13 = this->fields.objectList;
  if ( !v13 )
    goto LABEL_20;
  size = (System_String_o *)(unsigned int)v13->fields._size;
  v15 = v13->fields._version + 1;
  v13->fields._size = 0;
  v13->fields._version = v15;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v13->fields._items, 0, (int32_t)size, 0);
  this->fields.mainInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, 0, size, v8, v9, v10, v11, v12);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0);
      return;
    }
LABEL_20:
    sub_21FFECC(objectList, method);
  }
}


void ServantStatusFlavorTextListViewManager__DoAutoScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager___c_c *v5; // x0
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__40_0; // x22
  Il2CppObject *v9; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t Index; // w0
  const MethodInfo *v18; // x3
  System_Collections_IEnumerator_o *v19; // x1

  if ( (byte_59349B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
    sub_21FFC50(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_21FFC50(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__40_0__);
    sub_21FFC50(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    byte_59349B3 = 1;
  }
  v5 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo, onFinished, method);
    v5 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__40_0 = (System_Predicate_object__o *)static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, onFinished, method);
      static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__40_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    System_Predicate_object____ctor(
      _9__40_0,
      v9,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__40_0__,
      0);
    v10 = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    v10->__9__40_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__40_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__40_0, (int32_t)_9__40_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !objectList )
    sub_21FFECC(v5, onFinished);
  Index = System_Collections_Generic_List_object___FindIndex(
            (System_Collections_Generic_List_object__o *)objectList,
            (System_Predicate_T__o *)_9__40_0,
            (const MethodInfo_4450380 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( Index < 0 )
  {
    ActionExtensions__Call(onFinished, 0);
  }
  else
  {
    v19 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v18);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v19, 0);
  }
}


float ServantStatusFlavorTextListViewManager__DoMoveEaseInOut(
        ServantStatusFlavorTextListViewManager_o *this,
        float currentTime,
        float duration,
        float startValue,
        float changeValue,
        const MethodInfo *method)
{
  float v7; // s0
  float v8; // s0

  v7 = currentTime / (float)(duration * 0.5);
  if ( v7 >= 1.0 )
    v8 = (float)(changeValue * 0.5) * (float)(2.0 - exp2f((float)(v7 + -1.0) * -10.0));
  else
    v8 = (float)(changeValue * 0.5) * powf(v7, 5.0);
  return v8 + startValue;
}


float ServantStatusFlavorTextListViewManager__GetAutoScrollMoveDuration(
        ServantStatusFlavorTextListViewManager_o *this,
        float moveValue,
        const MethodInfo *method)
{
  float v3; // s0

  v3 = (float)(moveValue + -2000.0) / 2000.0;
  if ( v3 < 0.0 )
    v3 = 0.0;
  return fminf(v3 + 1.0, 2.0);
}


System_String_o *ServantStatusFlavorTextListViewManager__GetConditionString(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantCommentEntity_o *svtCommentEntity,
        const MethodInfo *method)
{
  ServantCommentAddMaster_o *Master_object; // x0
  __int64 v5; // x1
  ServantCommentAddMaster_o *v6; // x20
  __int64 v7; // x2
  System_String_o *v8; // x21
  Il2CppObject *ConditionString; // x1
  System_String_o *v10; // x0
  bool IsOpen; // w21
  bool IsNullOrEmpty; // w0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *Conditiontext; // x21
  LocalizationManager_c *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  bool v21; // w8
  int v22; // w9
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t priority; // w5
  int32_t svtId; // w3
  int32_t id; // w4
  System_String_o *v29; // x19
  System_String_o *v30; // x0
  System_String_o *v31; // x19

  if ( (byte_59349B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12434/*"SERVANT_STATUS_PROFILE_CONDITION"*/);
    sub_21FFC50(&StringLiteral_16811/*"_FLAVOR2"*/);
    sub_21FFC50(&StringLiteral_16810/*"_FLAVOR"*/);
    sub_21FFC50(&StringLiteral_3860/*"COND_TYPE_AND_FLAVOR2"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59349B2 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtCommentEntity, method);
  Master_object = (ServantCommentAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
    goto LABEL_31;
  v6 = Master_object;
  Master_object = (ServantCommentAddMaster_o *)ServantCommentEntity__IsOpen(svtCommentEntity, -1, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v7);
    Master_object = (ServantCommentAddMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12434/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0);
    if ( v6 )
    {
      v8 = (System_String_o *)Master_object;
      ConditionString = (Il2CppObject *)ServantCommentAddMaster__GetConditionString(
                                          v6,
                                          (System_String_o *)StringLiteral_16810/*"_FLAVOR"*/,
                                          (System_String_o *)StringLiteral_16811/*"_FLAVOR2"*/,
                                          svtCommentEntity->fields.svtId,
                                          svtCommentEntity->fields.id,
                                          svtCommentEntity->fields.priority,
                                          -1,
                                          0);
      v10 = v8;
      return System_String__Format(v10, ConditionString, 0);
    }
LABEL_31:
    sub_21FFECC(Master_object, v5);
  }
  if ( !v6 )
    goto LABEL_31;
  IsOpen = ServantCommentAddMaster__IsOpen(
             v6,
             svtCommentEntity->fields.svtId,
             svtCommentEntity->fields.id,
             svtCommentEntity->fields.priority,
             -1,
             0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(svtCommentEntity->fields.condMessage, 0);
  if ( IsOpen || !IsNullOrEmpty )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12434/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0);
    ConditionString = (Il2CppObject *)ServantCommentEntity__GetConditiontext(
                                        svtCommentEntity,
                                        (System_String_o *)StringLiteral_16810/*"_FLAVOR"*/,
                                        0);
    v10 = v23;
  }
  else
  {
    Conditiontext = ServantCommentEntity__GetConditiontext(svtCommentEntity, (System_String_o *)StringLiteral_16811/*"_FLAVOR2"*/, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    if ( !byte_593385D )
    {
      sub_21FFC50(&LocalizationManager_TypeInfo);
      byte_593385D = 1;
    }
    v18 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
      v18 = LocalizationManager_TypeInfo;
    }
    v21 = System_String__op_Equality(Conditiontext, v18->static_fields->unknownNameText, 0);
    v22 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v21 )
    {
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12434/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0);
      ConditionString = (Il2CppObject *)Conditiontext;
    }
    else
    {
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3860/*"COND_TYPE_AND_FLAVOR2"*/, 0);
      v25 = System_String__Concat_75438412(Conditiontext, v24, 0);
      priority = svtCommentEntity->fields.priority;
      svtId = svtCommentEntity->fields.svtId;
      id = svtCommentEntity->fields.id;
      v29 = v25;
      v30 = ServantCommentAddMaster__GetConditionString(
              v6,
              (System_String_o *)StringLiteral_16810/*"_FLAVOR"*/,
              (System_String_o *)StringLiteral_16811/*"_FLAVOR2"*/,
              svtId,
              id,
              priority,
              -1,
              0);
      v31 = System_String__Concat_75438412(v29, v30, 0);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12434/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0);
      ConditionString = (Il2CppObject *)v31;
    }
  }
  return System_String__Format(v10, ConditionString, 0);
}


void ServantStatusFlavorTextListViewManager__OnChangeScrollBarValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 IsIgnoreScroll_k__BackingField; // w8
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v8; // s8
  __int64 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  float v12; // s0
  _QWORD *monitor; // x8
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59349B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59349B4 = 1;
  }
  IsIgnoreScroll_k__BackingField = this->fields._IsIgnoreScroll_k__BackingField;
  memset(&v16, 0, sizeof(v16));
  if ( !IsIgnoreScroll_k__BackingField )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !scrollView
        || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0)) == 0
        || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0),
            (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0) )
      {
        sub_21FFECC(scrollView, v6);
      }
      v8 = localPosition.fields.y - this->fields.initialScrollPosition.fields.y;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)scrollView,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
      v16 = v15;
      v15.fields._list = 0;
      *(_QWORD *)&v15.fields._index = &v16;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
        if ( (v9 & 1) == 0 )
          break;
        current = v16.fields._current;
        if ( !v16.fields._current )
          sub_21FFECC(v9, v10);
        v12 = *(float *)&v16.fields._current[2].klass;
        if ( v12 <= v8 && v8 <= (float)(v12 + this->fields.scrollViewSize.fields.y) )
        {
          monitor = v16.fields._current[1].monitor;
          if ( !monitor || (v9 = monitor[17]) == 0 )
            sub_21FFECC(v9, v10);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 456LL))(v9, *(_QWORD *)(*(_QWORD *)v9 + 464LL));
          OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
          if ( OnFinishedReadEvent )
            ((void (__fastcall *)(intptr_t, Il2CppClass *, intptr_t))OnFinishedReadEvent->fields.invoke_impl)(
              OnFinishedReadEvent->fields.method_code,
              current[1].klass,
              OnFinishedReadEvent->fields.method);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    }
  }
}


void ServantStatusFlavorTextListViewManager__OnClickListView(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x20
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *v12; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( !obj )
    sub_21FFECC(this, 0);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v12 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0;
      sub_21FFBF4(p_callbackFunc, 0, v5, v6, v7, v8, v9, v10);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v12->fields.invoke_impl)(
        v12->fields.method_code,
        (unsigned int)obj->fields.id,
        v12->fields.method);
    }
  }
}


void ServantStatusFlavorTextListViewManager__OnClickListViewVoice(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      0,
      v9->fields.method);
  }
}


void ServantStatusFlavorTextListViewManager__OnEnable(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.isScrollRefresh = 1;
}


void ServantStatusFlavorTextListViewManager__OnMoveEnd(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_59349BD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59349BD = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__RequestListObject(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  const MethodInfo_4450604 *v9; // x1
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59349BB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_21FFC50(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59349BB = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v15, 0, sizeof(v15));
  if ( !objectList )
    sub_21FFECC(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v9 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      objectList,
      v9);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v12, v13);
      ServantStatusFlavorTextListViewObject__Init_42274924(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__RequestListObject_42273928(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  const MethodInfo_4450604 *v7; // x1
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  __int64 v13; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59349BC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_21FFC50(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59349BC = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v15, 0, sizeof(v15));
  if ( !objectList )
    sub_21FFECC(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v7 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      objectList,
      v7);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v10, v11);
      ServantStatusFlavorTextListViewObject__Init_42275008(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v9,
        v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


void ServantStatusFlavorTextListViewManager__SetMode(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_42273736(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__SetMode_42273736(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_59349BA & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    byte_59349BA = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_21FFECC(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v4, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_42273928(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void ServantStatusFlavorTextListViewManager__SetMode_42273880(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_42273736(this, mode, v10);
}


void ServantStatusFlavorTextListViewManager__SetObjectItem(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( this->fields.initMode != 1 )
  {
    if ( obj )
    {
      v3 = 2;
      goto LABEL_6;
    }
LABEL_7:
    sub_21FFECC(this, obj);
  }
  if ( !obj )
    goto LABEL_7;
  v3 = 3;
LABEL_6:
  ServantStatusFlavorTextListViewObject__Init_42273616(obj, v3, method);
}


void ServantStatusFlavorTextListViewManager__SetObjectPosition(
        ServantStatusFlavorTextListViewManager_o *this,
        UnityEngine_Vector3_o *basePositon,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v6; // x21
  int32_t Size; // w0
  int v8; // w8
  int v9; // w23
  ServantStatusFlavorTextListViewManager_o *v10; // x22
  ServantStatusFlavorTextListViewManager_o *v11; // x22
  ServantStatusFlavorTextListViewManager_o *v12; // x22
  ServantStatusFlavorTextListViewManager_o *v13; // x22
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  ServantStatusFlavorTextListViewManager_c *v18; // x0
  float y; // s8

  v6 = this;
  if ( (byte_59349B7 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_21FFC50(&ServantStatusFlavorTextListViewManager_TypeInfo);
    byte_59349B7 = 1;
  }
  if ( !obj )
    goto LABEL_21;
  Size = ServantStatusFlavorTextListViewObject__GetSize(obj, (const MethodInfo *)basePositon);
  v8 = Size >= 0 ? Size : Size + 1;
  v9 = v8 >> 1;
  basePositon->fields.y = basePositon->fields.y - (float)(v8 >> 1);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0);
  if ( !v6->fields.listParent )
    goto LABEL_21;
  v10 = this;
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_transform(v6->fields.listParent, 0);
  if ( !v10 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0);
  if ( !this )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *basePositon, 0);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0);
  v11 = this;
  if ( !byte_5931946 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
    byte_5931946 = 1;
  }
  if ( !v11 )
    goto LABEL_21;
  UnityEngine_Transform__set_localRotation(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0);
  v12 = this;
  if ( !byte_5931945 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v12
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v12,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)obj,
                                                             0),
        !v6->fields.listParent)
    || (v13 = this,
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_layer(v6->fields.listParent, 0),
        !v13) )
  {
LABEL_21:
    sub_21FFECC(this, basePositon);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v13, (int32_t)this, 0);
  ServantStatusFlavorTextListViewObject__SetBaseTransform(obj, v14);
  ServantStatusFlavorTextListViewObject__SetManager(obj, v6, v15);
  v18 = ServantStatusFlavorTextListViewManager_TypeInfo;
  y = basePositon->fields.y;
  if ( !*(&ServantStatusFlavorTextListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager_TypeInfo, v16, v17);
    v18 = ServantStatusFlavorTextListViewManager_TypeInfo;
  }
  basePositon->fields.y = y - (float)(v18->static_fields->LIST_BLANK + v9);
}


void ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float height; // s0
  float v5; // s8
  UnityEngine_Component_o *v6; // x8
  float v7; // s9
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *current; // x21
  ServantStatusFlavorTextListViewObject_o *v11; // x0
  float v12; // s0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Vector3_o ProfileLastLinePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59349B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    byte_59349B5 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  memset(&v13, 0, sizeof(v13));
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0)
    || (v5 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   scrollView,
                                                   (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0)
    || (v6 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0) )
  {
    sub_21FFECC(scrollView, method);
  }
  v7 = *((float *)&v6[13].klass + 1);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)scrollView,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_21FFECC(v8, v9);
    v11 = *(ServantStatusFlavorTextListViewObject_o **)((char *)&v13.fields._current->klass + (unsigned __int64)off_18);
    if ( !v11 )
      sub_21FFECC(0, v9);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(v11, v9);
    v12 = vabds_f32(ProfileLastLinePosition.fields.y, v7) - v5;
    if ( v12 < 0.0 )
      v12 = 0.0;
    *(float *)((char *)&qword_20 + (_QWORD)current) = v12;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
}


void ServantStatusFlavorTextListViewManager__UpdateCvName(
        ServantStatusFlavorTextListViewManager_o *this,
        System_String_o *cvName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v9; // x2
  __int64 v10; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v11; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59349BE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    byte_59349BE = 1;
  }
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  memset(&v12, 0, sizeof(v12));
  if ( !objectList )
    sub_21FFECC(0, cvName);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      objectList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    v10 = 0;
    v11 = &v12;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v6 )
        break;
      current = v12.fields._current;
      if ( !v12.fields._current )
        sub_21FFECC(v6, v7);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v12.fields._current,
             v7) == 3 )
      {
        ServantStatusFlavorTextListViewObject__SetCvName((ServantStatusFlavorTextListViewObject_o *)current, cvName, v9);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


void ServantStatusFlavorTextListViewManager__UpdateParameter(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *current; // x19
  __int64 v7; // x1
  __int64 v8; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59349BF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    byte_59349BF = 1;
  }
  objectList = this->fields.objectList;
  memset(&v9, 0, sizeof(v9));
  if ( !objectList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_21FFECC(v4, v5);
    if ( ServantStatusFlavorTextListViewObject__GetKind(
           (ServantStatusFlavorTextListViewObject_o *)v9.fields._current,
           v5) == 5 )
    {
      v8 = *(__int64 *)((char *)off_88 + (_QWORD)current);
      if ( !v8 )
        sub_21FFECC(0, v7);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 440LL))(
        v8,
        *(__int64 *)((char *)&qword_28 + (_QWORD)current),
        *(_QWORD *)(*(_QWORD *)v8 + 448LL));
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
}


void ServantStatusFlavorTextListViewManager__add_callbackFunc(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantStatusFlavorTextListViewManager_o *v13; // x0
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59349AD & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    byte_59349AD = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantStatusFlavorTextListViewManager_CallbackFunc_c *)v8->klass != ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v9, v10);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc(v13, v14, v15);
}


void ServantStatusFlavorTextListViewManager__add_callbackFunc2(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantStatusFlavorTextListViewManager_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59349AF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59349AF = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc2, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc2(v13, v14, v15);
}


bool ServantStatusFlavorTextListViewManager__get_IsIgnoreScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsIgnoreScroll_k__BackingField;
}


bool ServantStatusFlavorTextListViewManager__get_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


void ServantStatusFlavorTextListViewManager__remove_callbackFunc(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantStatusFlavorTextListViewManager_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59349AE & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    byte_59349AE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantStatusFlavorTextListViewManager_CallbackFunc_c *)v8->klass != ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, v9, v10);
  ServantStatusFlavorTextListViewManager__add_callbackFunc2(v13, v14, v15);
}


void ServantStatusFlavorTextListViewManager__remove_callbackFunc2(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantStatusFlavorTextListViewManager_o *v13; // x0
  ServantStatusListViewItem_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59349B0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59349B0 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc2, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  ServantStatusFlavorTextListViewManager__CreateList(v13, v14, v15);
}


void ServantStatusFlavorTextListViewManager__set_IsIgnoreScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsIgnoreScroll_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__set_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UIProgressBar_o *v9; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_59349AC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59349AC = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  this->fields.isInput = v4;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, value, method);
  v7 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v7 )
  {
    v9 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v9 )
      sub_21FFECC(v7, v8);
    alpha = UIProgressBar__get_alpha(v9, 0);
    UIProgressBar__set_alpha(v9, alpha, 0);
  }
}


void ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF38EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF38A4;
}


System_IAsyncResult_o *ServantStatusFlavorTextListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C070, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ServantStatusFlavorTextListViewManager_CallbackFunc__Invoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
        ServantStatusFlavorTextListViewManager_ServantProfile_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43___ctor(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__MoveNext(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v2; // x19
  int32_t _1__state; // w8
  struct ServantStatusFlavorTextListViewManager_o *_4__this; // x22
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v5; // x20
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v6; // x8
  float v7; // s8
  float v8; // s9
  int v9; // w21
  float v10; // s8
  float v11; // s0
  float timer_5__4; // s8
  float v13; // s0
  float duration_5__3; // s0
  float v15; // s1
  float v16; // s0
  float v17; // s2
  float v18; // s1
  float moveValue_5__2; // s9
  float v20; // s0
  float v21; // s0
  bool result; // w0
  float v23; // s8
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_59349C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    byte_59349C3 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    duration_5__3 = v2->fields._duration_5__3;
    timer_5__4 = v2->fields._timer_5__4;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_38;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_38;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              v2->fields.targetIndex,
                                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !_4__this->fields.scrollView )
      goto LABEL_38;
    v5 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_38;
    v6 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_38;
    v7 = *((float *)&v6[4].fields.__2__current + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              LODWORD(this->fields.__2__current) - 1,
                                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !this )
      goto LABEL_38;
    v8 = *((float *)&this[1].fields.__1__state + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)ServantStatusFlavorTextListViewObject__GetSize(
                                                                              (ServantStatusFlavorTextListViewObject_o *)this,
                                                                              method);
    if ( !_4__this->fields.scrollView )
      goto LABEL_38;
    v9 = (int)this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_38;
    v10 = vabds_f32(v8 + (float)((float)v9 * -0.5), v7) - UIPanel__get_height((UIPanel_o *)this, 0);
    if ( v10 <= 0.0 )
    {
      v2->fields._moveValue_5__2 = 0.0;
      goto LABEL_33;
    }
    if ( !v5 )
      goto LABEL_38;
    TopPosition = ServantStatusFlavorTextListViewObject__get_TopPosition(
                    (ServantStatusFlavorTextListViewObject_o *)v5,
                    method);
    v11 = fabsf(TopPosition.fields.y);
    if ( v11 >= v10 )
      v11 = v10;
    v2->fields._moveValue_5__2 = v11;
    if ( v11 <= 0.0 )
      goto LABEL_33;
    timer_5__4 = 0.0;
    *(_QWORD *)&v2->fields._timer_5__4 = 0;
    v13 = (float)(v11 + -2000.0) / 2000.0;
    if ( v13 < 0.0 )
      v13 = 0.0;
    duration_5__3 = fminf(v13 + 1.0, 2.0);
    v2->fields._duration_5__3 = duration_5__3;
  }
  if ( timer_5__4 >= duration_5__3 )
  {
LABEL_33:
    ActionExtensions__Call(v2->fields.onFinished, 0);
    return 0;
  }
  v15 = timer_5__4 + UnityEngine_Time__get_deltaTime(0);
  v16 = v2->fields._duration_5__3;
  if ( v15 <= v16 )
    v17 = v15;
  else
    v17 = v2->fields._duration_5__3;
  if ( v15 >= 0.0 )
    v18 = v17;
  else
    v18 = 0.0;
  v2->fields._timer_5__4 = v18;
  if ( !_4__this
    || ((moveValue_5__2 = v2->fields._moveValue_5__2, v20 = v18 / (float)(v16 * 0.5), v20 >= 1.0)
      ? (v21 = (float)(moveValue_5__2 * 0.5) * (float)(2.0 - exp2f((float)(v20 + -1.0) * -10.0)))
      : (v21 = (float)(moveValue_5__2 * 0.5) * powf(v20, 5.0)),
        (this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.scrollView) == 0) )
  {
LABEL_38:
    sub_21FFECC(this, method);
  }
  v23 = v21 + 0.0;
  ((void (__fastcall *)(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *, const char *, double, float, double))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze,
    0.0,
    (float)(v21 + 0.0) - v2->fields._prevValue_5__5,
    0.0);
  v2->fields._prevValue_5__5 = v23;
  v2->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_21FFBF4(p__2__current, 0, v25, v26, v27, v28, v29, v30);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return result;
}


Il2CppObject *ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_Collections_IEnumerator_Reset(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_Collections_IEnumerator_get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_IDisposable_Dispose(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusFlavorTextListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59349C2 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    byte_59349C2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantStatusFlavorTextListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantStatusFlavorTextListViewManager___c___ctor(
        ServantStatusFlavorTextListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantStatusFlavorTextListViewManager___c___CreateList_b__38_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantCommentEntity_o *a,
        ServantCommentEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(this, a);
  return a->fields.id - b->fields.id;
}


bool ServantStatusFlavorTextListViewManager___c___DoAutoScroll_b__40_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantStatusFlavorTextListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.isNew;
}