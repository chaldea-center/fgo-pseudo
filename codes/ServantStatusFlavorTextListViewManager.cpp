void ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_4CEB072 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusFlavorTextListViewManager_TypeInfo);
    byte_4CEB072 = 1;
  }
  ServantStatusFlavorTextListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
}


void ServantStatusFlavorTextListViewManager___ctor(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4CEB071 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
    byte_4CEB071 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantProfileList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.isInput = 1;
  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v22; // x8

  if ( (byte_4CEB068 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEB068 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         (Il2CppObject *)prefab,
         (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
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
      sub_1C7BD40(Component_object, v9);
    }
    m_CancellationTokenSource_low = SLODWORD(Component_object->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Component_object,
        (Il2CppObject *)v10,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(Component_object->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v22 + 32) = v10;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 32), (int32_t)v10, v13, v14, v15, v16, v17, v18);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CEB066 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_TypeInfo);
    byte_4CEB066 = 1;
  }
  v7 = sub_1C7BD34(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)onFinished, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void ServantStatusFlavorTextListViewManager__CreateList(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  UnityEngine_Object_c **v3; // x28
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  void *transform; // x0
  Il2CppObject *Component_object; // x20
  float v16; // s8
  float v17; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x29
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x3
  Il2CppObject *voice2Object; // x22
  Il2CppObject *v36; // x23
  const MethodInfo *v37; // x7
  ServantStatusFlavorTextListViewObject_o *v38; // x23
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  ServantStatusListViewItem_o *v50; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  Il2CppObject *profileObject; // x22
  Il2CppObject *v53; // x22
  Il2CppObject *v54; // x0
  ServantStatusListViewItem_o *v55; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v57; // x20
  const MethodInfo *v58; // x7
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x8
  System_Collections_Generic_List_object__o *v70; // x23
  System_Comparison_T__o *v71; // x24
  Il2CppObject *v72; // x22
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  int v80; // w21
  int32_t v81; // w24
  int v82; // w20
  ServantCommentEntity_o *v83; // x25
  struct ServantEntity_o *v84; // x8
  int32_t v85; // w26
  const MethodInfo *v86; // x3
  UnityEngine_Object_c *v87; // x0
  Il2CppObject *profile2Object; // x26
  Il2CppObject *v89; // x26
  Il2CppObject *v90; // x26
  int32_t v91; // w27
  _BOOL8 IsOpen; // x0
  const MethodInfo *v93; // x2
  UnityEngine_Object_c **v94; // x21
  ServantStatusListViewItem_o **v95; // x20
  ServantStatusListViewItem_o *v96; // x28
  int32_t id; // w29
  bool IsNew; // w22
  const MethodInfo *v99; // x7
  const MethodInfo *v100; // x3
  const MethodInfo *v101; // x7
  System_String_o *CondTitle; // x27
  const MethodInfo *v103; // x2
  __int64 v104; // x27
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  __int64 v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  __int64 v126; // x8
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  System_Collections_Generic_List_object__o *v133; // x8
  struct System_Object_array *items; // x9
  _QWORD *v135; // x10
  __int64 size; // x11
  Il2CppClass **v137; // x0
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  const MethodInfo *v140; // x3
  UnityEngine_Object_o *v141; // x20
  UIPanel_o *v142; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v145; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v148; // x22
  EventDelegate_Callback_o *v149; // x21
  struct UIScrollBar_o *v150; // x8
  System_Collections_Generic_List_EventDelegate__o *v151; // x20
  EventDelegate_Callback_o *v152; // x21
  System_Collections_Generic_List_object__o *v153; // [xsp+8h] [xbp-B8h]
  int v154; // [xsp+14h] [xbp-ACh]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+18h] [xbp-A8h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // [xsp+20h] [xbp-A0h]
  int v157; // [xsp+28h] [xbp-98h]
  bool isPlayVoice; // [xsp+2Ch] [xbp-94h] BYREF
  System_String_o *voice; // [xsp+30h] [xbp-90h] BYREF
  System_String_o *illust; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4

  v3 = &UnityEngine_Object_TypeInfo;
  if ( (byte_4CEB061 & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_Callback_TypeInfo);
    sub_1C7BAE8(&System_Comparison_ServantCommentEntity__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
    sub_1C7BAE8(&EventDelegate_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
    sub_1C7BAE8(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__);
    sub_1C7BAE8(&Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__38_0__);
    sub_1C7BAE8(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    sub_1C7BAE8(&Method_UIScrollView_OnScrollBar__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEB061 = 1;
  }
  basePositon.fields.z = 0.0;
  illust = 0;
  *(_QWORD *)&basePositon.fields.x = 0;
  voice = 0;
  isPlayVoice = 0;
  ServantStatusFlavorTextListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    transform = this->fields.scrollView;
    if ( !transform )
      goto LABEL_124;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_124;
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_124;
      v16 = *((float *)&Component_object[20].monitor + 1);
      v17 = *(float *)&Component_object[21].klass;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_124;
      v162.fields.x = -v16;
      v162.fields.y = -v17;
      v162.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v162, 0);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_124;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, (int32_t)mainInfo, v8, v9, v10, v11, v12, v13);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v19;
  p_objectList = &this->fields.objectList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v26;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantProfileList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_QWORD *)&basePositon.fields.x = 0;
  basePositon.fields.z = 0.0;
  transform = this->fields.mainInfo;
  if ( !transform )
    goto LABEL_124;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v33);
  if ( System_String__IsNullOrEmpty(voice, 0) )
  {
    voice2Object = (Il2CppObject *)this->fields.voice2Object;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v36 = UnityEngine_Object__Instantiate_object_(
            voice2Object,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v36 )
        goto LABEL_124;
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v36,
                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_124;
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
        goto LABEL_124;
      v46 = *((_QWORD *)transform + 2);
      v47 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
      ++*((_DWORD *)transform + 7);
      if ( !v46 )
        goto LABEL_124;
      v48 = *((int *)transform + 6);
      if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v38,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = v46 + 8 * v48;
        *((_DWORD *)transform + 6) = v48 + 1;
        *(_QWORD *)(v49 + 32) = v38;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v49 + 32), (int32_t)v38, v40, v41, v42, v43, v44, v45);
      }
    }
  }
  else
  {
    transform = ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.voiceObject, v34);
  }
  v50 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_124;
  if ( v50->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v50->fields.commandCodeCommentEntity;
    if ( !commandCodeCommentEntity )
      goto LABEL_110;
    profileObject = (Il2CppObject *)this->fields.profileObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v53 = UnityEngine_Object__Instantiate_object_(
            profileObject,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_110;
    if ( v53 )
    {
      v54 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v53,
              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      v55 = *p_mainInfo;
      commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
      v57 = (ServantStatusFlavorTextListViewObject_o *)v54;
      transform = CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0);
      if ( v57 )
      {
        ServantStatusFlavorTextListViewObject__SetItem(
          v57,
          v55,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v58);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v57, v59);
        transform = this->fields.objectList;
        if ( transform )
        {
          v66 = *((_QWORD *)transform + 2);
          v67 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
          ++*((_DWORD *)transform + 7);
          if ( v66 )
          {
            v68 = *((int *)transform + 6);
            if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                (Il2CppObject *)v57,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
            }
            else
            {
              v69 = v66 + 8 * v68;
              *((_DWORD *)transform + 6) = v68 + 1;
              *(_QWORD *)(v69 + 32) = v57;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v69 + 32), (int32_t)v57, v60, v61, v62, v63, v64, v65);
            }
            goto LABEL_110;
          }
        }
      }
    }
    goto LABEL_124;
  }
  v70 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v50->fields.svtCommentEntityList,
                                                       (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  v71 = *(System_Comparison_T__o **)(*((_QWORD *)transform + 23) + 8LL);
  if ( !v71 )
  {
    if ( !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
    }
    v72 = (Il2CppObject *)**((_QWORD **)transform + 23);
    v71 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_ServantCommentEntity__TypeInfo);
    System_Comparison_object____ctor(
      v71,
      v72,
      Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__38_0__,
      0);
    static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Comparison_ServantCommentEntity__o *)v71;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__38_0, (int32_t)v71, v74, v75, v76, v77, v78, v79);
  }
  if ( !v70 )
    goto LABEL_124;
  System_Collections_Generic_List_object___Sort_58984640(
    v70,
    v71,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
  if ( v70->fields._size < 1 )
  {
LABEL_103:
    if ( *p_mainInfo )
    {
      svtEntity = (*p_mainInfo)->fields.svtEntity;
      if ( svtEntity )
      {
        type = svtEntity->fields.type;
        if ( SvtType__IsServant(type, 0) || SvtType__IsEnemyCollectionDetail(type, 0) )
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v140);
        goto LABEL_110;
      }
    }
    goto LABEL_124;
  }
  v80 = 0;
  v81 = 0;
  v82 = 1;
  v153 = v70;
  do
  {
    transform = System_Collections_Generic_List_object___get_Item(
                  v70,
                  v81,
                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    if ( !transform )
      goto LABEL_124;
    v83 = (ServantCommentEntity_o *)transform;
    if ( !ServantCommentEntity__IsHideUntilCond((ServantCommentEntity_o *)transform, 0)
      || (transform = (void *)ServantCommentEntity__IsOpen(v83, -1, 1, 0), ((unsigned __int8)transform & 1) != 0) )
    {
      if ( !((v81 == 0) | v80 & 1) )
      {
        if ( ServantCommentEntity__IsProfileLabel(v83, 0) )
        {
          transform = System_Collections_Generic_List_object___get_Item(
                        v70,
                        v81 - 1,
                        (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
          if ( !transform )
            goto LABEL_124;
          if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)transform, 0) )
            goto LABEL_65;
        }
        transform = (void *)ServantCommentEntity__IsDetailLabel(v83, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = System_Collections_Generic_List_object___get_Item(
                        v70,
                        v81 - 1,
                        (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
          if ( !transform )
            goto LABEL_124;
          transform = (void *)ServantCommentEntity__IsDetailLabel((ServantCommentEntity_o *)transform, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
            goto LABEL_65;
        }
        if ( !*p_mainInfo )
          goto LABEL_124;
        v84 = (*p_mainInfo)->fields.svtEntity;
        if ( !v84 )
          goto LABEL_124;
        v85 = v84->fields.type;
        if ( !SvtType__IsServant(v85, 0) && !SvtType__IsEnemyCollectionDetail(v85, 0) )
        {
LABEL_65:
          v80 = 0;
        }
        else
        {
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v86);
          v80 = 1;
        }
      }
      if ( ServantCommentEntity__IsDetailLabel(v83, 0) )
      {
        v87 = *v3;
        profile2Object = (Il2CppObject *)this->fields.profileObject;
      }
      else
      {
        v89 = 0;
        if ( !ServantCommentEntity__IsProfileLabel(v83, 0) )
          goto LABEL_73;
        v87 = *v3;
        profile2Object = (Il2CppObject *)this->fields.profile2Object;
      }
      if ( !v87->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v87);
      v89 = UnityEngine_Object__Instantiate_object_(
              profile2Object,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_73:
      if ( !(*v3)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v3);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v89, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v89 )
          goto LABEL_124;
        v90 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v89,
                (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
        if ( ServantCommentEntity__IsProfileLabel(v83, 0) )
          v91 = v82;
        else
          v91 = 0;
        IsOpen = ServantCommentEntity__IsOpen(v83, -1, 1, 0);
        v157 = v80;
        if ( IsOpen )
        {
          v154 = v82;
          v94 = v3;
          v95 = p_mainInfo;
          v96 = *p_mainInfo;
          id = v83->fields.id;
          IsNew = ServantCommentEntity__IsNew(v83, 0);
          transform = ServantCommentEntity__GetComment(v83, 0);
          if ( !v90 )
            goto LABEL_124;
          ServantStatusFlavorTextListViewObject__SetItem(
            (ServantStatusFlavorTextListViewObject_o *)v90,
            v96,
            id,
            1,
            IsNew,
            (System_String_o *)transform,
            v91,
            v99);
          p_mainInfo = v95;
          v70 = v153;
          v82 = v154;
          v3 = v94;
        }
        else
        {
          transform = ServantStatusFlavorTextListViewManager__GetConditionString(
                        (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                        v83,
                        v93);
          if ( !v90 )
            goto LABEL_124;
          ServantStatusFlavorTextListViewObject__SetItem(
            (ServantStatusFlavorTextListViewObject_o *)v90,
            *p_mainInfo,
            v83->fields.id,
            0,
            0,
            (System_String_o *)transform,
            v91,
            v101);
        }
        ServantStatusFlavorTextListViewManager__SetObjectPosition(
          this,
          &basePositon,
          (ServantStatusFlavorTextListViewObject_o *)v90,
          v100);
        CondTitle = ServantCommentEntity__GetCondTitle(v83, 0);
        if ( ServantCommentEntity__IsProfileLabel(v83, 0) || !System_String__IsNullOrEmpty(CondTitle, 0) )
          ServantStatusFlavorTextListViewObject__SetCondTitle(
            (ServantStatusFlavorTextListViewObject_o *)v90,
            CondTitle,
            v103);
        if ( ServantCommentEntity__IsProfileLabel(v83, 0) || !ServantCommentEntity__IsConst(v83, 0) )
        {
          v104 = sub_1C7BD34(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
          System_Object___ctor((Il2CppObject *)v104, 0);
          if ( !v104 )
            goto LABEL_124;
          *(_QWORD *)(v104 + 16) = v83;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v104 + 16), (int32_t)v83, v105, v106, v107, v108, v109, v110);
          *(_QWORD *)(v104 + 24) = v90;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v104 + 24), (int32_t)v90, v111, v112, v113, v114, v115, v116);
          *(_DWORD *)(v104 + 32) = 0;
          transform = *p_servantProfileList;
          if ( !*p_servantProfileList )
            goto LABEL_124;
          v123 = *((_QWORD *)transform + 2);
          v124 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__;
          ++*((_DWORD *)transform + 7);
          if ( !v123 )
            goto LABEL_124;
          v125 = *((int *)transform + 6);
          if ( (unsigned int)v125 >= *(_DWORD *)(v123 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)transform,
              (Il2CppObject *)v104,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
          }
          else
          {
            v126 = v123 + 8 * v125;
            *((_DWORD *)transform + 6) = v125 + 1;
            *(_QWORD *)(v126 + 32) = v104;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v126 + 32), v104, v117, v118, v119, v120, v121, v122);
          }
        }
        transform = (void *)ServantCommentEntity__IsProfileLabel(v83, 0);
        v133 = (System_Collections_Generic_List_object__o *)*p_objectList;
        if ( !*p_objectList )
          goto LABEL_124;
        items = v133->fields._items;
        v135 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
        ++v133->fields._version;
        v80 = v157;
        if ( !items )
          goto LABEL_124;
        size = v133->fields._size;
        v82 += (unsigned __int8)transform & 1;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v133,
            v90,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
        }
        else
        {
          v137 = &items->obj.klass + size;
          v133->fields._size = size + 1;
          v137[4] = (Il2CppClass *)v90;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v137 + 4), (int32_t)v90, v127, v128, v129, v130, v131, v132);
        }
      }
    }
    ++v81;
  }
  while ( v81 < v70->fields._size );
  if ( (v80 & 1) == 0 )
    goto LABEL_103;
LABEL_110:
  v141 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !(*v3)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v3);
  if ( UnityEngine_Object__op_Inequality(v141, 0, 0) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
      goto LABEL_115;
    }
LABEL_124:
    sub_1C7BD40(transform, v7);
  }
LABEL_115:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_124;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_124;
  v142 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0);
  height = UIPanel__get_height(v142, 0);
  transform = this->fields.scrollView;
  this->fields.scrollViewSize.fields.x = width;
  this->fields.scrollViewSize.fields.y = height;
  if ( !transform )
    goto LABEL_124;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_124;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v145);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_124;
  onChange = scrollBar->fields.onChange;
  v148 = (Il2CppObject *)this->fields.scrollView;
  v149 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v149, v148, Method_UIScrollView_OnScrollBar__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  transform = EventDelegate__Add(onChange, v149, 0);
  v150 = this->fields.scrollBar;
  if ( !v150 )
    goto LABEL_124;
  v151 = v150->fields.onChange;
  v152 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v152,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0);
  EventDelegate__Add(v151, v152, 0);
}


void ServantStatusFlavorTextListViewManager__DestroyList(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CEB069 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB069 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v16.fields._current )
      sub_1C7BD40(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v16.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  v11 = this->fields.objectList;
  if ( !v11 )
    goto LABEL_20;
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0);
  this->fields.mainInfo = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mainInfo, 0, size, v6, v7, v8, v9, v10);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0);
      return;
    }
LABEL_20:
    sub_1C7BD40(objectList, method);
  }
}


void ServantStatusFlavorTextListViewManager__DoAutoScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager___c_c *v5; // x0
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  System_Predicate_object__o *_9__40_0; // x22
  Il2CppObject *v8; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t Index; // w0
  const MethodInfo *v17; // x3
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_4CEB063 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
    sub_1C7BAE8(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    sub_1C7BAE8(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__40_0__);
    sub_1C7BAE8(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    byte_4CEB063 = 1;
  }
  v5 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    v5 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  _9__40_0 = (System_Predicate_object__o *)v5->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__40_0 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    System_Predicate_object____ctor(
      _9__40_0,
      v8,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__40_0__,
      0);
    static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__40_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__40_0,
      (int32_t)_9__40_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !objectList )
    sub_1C7BD40(v5, onFinished);
  Index = System_Collections_Generic_List_object___FindIndex(
            (System_Collections_Generic_List_object__o *)objectList,
            (System_Predicate_T__o *)_9__40_0,
            (const MethodInfo_383F654 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( Index < 0 )
  {
    ActionExtensions__Call(onFinished, 0);
  }
  else
  {
    v18 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v18, 0);
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


float ServantStatusFlavorTextListViewManager__GetAutoScrollMoveDuration(
        ServantStatusFlavorTextListViewManager_o *this,
        float moveValue,
        const MethodInfo *method)
{
  return fminf(fmaxf((float)(moveValue + -2000.0) / 2000.0, 0.0) + 1.0, 2.0);
}


System_String_o *ServantStatusFlavorTextListViewManager__GetConditionString(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantCommentEntity_o *svtCommentEntity,
        const MethodInfo *method)
{
  ServantCommentAddMaster_o *Master_object; // x0
  __int64 v5; // x1
  ServantCommentAddMaster_o *v6; // x20
  System_String_o *v7; // x22
  System_String_o *Conditiontext; // x0
  bool IsOpen; // w21
  bool IsNullOrEmpty; // w0
  System_String_o *v11; // x21
  LocalizationManager_c *v12; // x0
  bool v13; // w0
  bool v14; // w22
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  int32_t svtId; // w3
  int32_t id; // w4
  int32_t priority; // w5
  System_String_o *v21; // x19
  System_String_o *ConditionString; // x0

  if ( (byte_4CEB062 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11995/*"SERVANT_STATUS_PROFILE_CONDITION"*/);
    sub_1C7BAE8(&StringLiteral_16255/*"_FLAVOR2"*/);
    sub_1C7BAE8(&StringLiteral_16254/*"_FLAVOR"*/);
    sub_1C7BAE8(&StringLiteral_3728/*"COND_TYPE_AND_FLAVOR2"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEB062 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
LABEL_31:
    sub_1C7BD40(Master_object, v5);
  v6 = Master_object;
  Master_object = (ServantCommentAddMaster_o *)ServantCommentEntity__IsOpen(svtCommentEntity, -1, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0);
      Conditiontext = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_16254/*"_FLAVOR"*/,
                        0);
      goto LABEL_26;
    }
    v11 = ServantCommentEntity__GetConditiontext(svtCommentEntity, (System_String_o *)StringLiteral_16255/*"_FLAVOR2"*/, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4CE9782 )
    {
      sub_1C7BAE8(&LocalizationManager_TypeInfo);
      byte_4CE9782 = 1;
    }
    v12 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager_TypeInfo;
    }
    v13 = System_String__op_Equality(v11, v12->static_fields->unknownNameText, 0);
    v14 = v13;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v13 )
      {
LABEL_22:
        v15 = (System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
LABEL_29:
        v7 = LocalizationManager__Get(v15, 0);
        return System_String__Format(v7, (Il2CppObject *)v11, 0);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v14 )
        goto LABEL_22;
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3728/*"COND_TYPE_AND_FLAVOR2"*/, 0);
    v17 = System_String__Concat_64176912(v11, v16, 0);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v21 = v17;
    ConditionString = ServantCommentAddMaster__GetConditionString(
                        v6,
                        (System_String_o *)StringLiteral_16254/*"_FLAVOR"*/,
                        (System_String_o *)StringLiteral_16255/*"_FLAVOR2"*/,
                        svtId,
                        id,
                        priority,
                        -1,
                        0);
    v11 = System_String__Concat_64176912(v21, ConditionString, 0);
    v15 = (System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
    goto LABEL_29;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantCommentAddMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0);
  if ( !v6 )
    goto LABEL_31;
  v7 = (System_String_o *)Master_object;
  Conditiontext = ServantCommentAddMaster__GetConditionString(
                    v6,
                    (System_String_o *)StringLiteral_16254/*"_FLAVOR"*/,
                    (System_String_o *)StringLiteral_16255/*"_FLAVOR2"*/,
                    svtCommentEntity->fields.svtId,
                    svtCommentEntity->fields.id,
                    svtCommentEntity->fields.priority,
                    -1,
                    0);
LABEL_26:
  v11 = Conditiontext;
  return System_String__Format(v7, (Il2CppObject *)v11, 0);
}


void ServantStatusFlavorTextListViewManager__OnChangeScrollBarValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v6; // s8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  float v10; // s0
  _QWORD *monitor; // x8
  __int64 v12; // x0
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEB064 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB064 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields._IsIgnoreScroll_k__BackingField )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !scrollView
        || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0)) == 0
        || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0),
            (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0) )
      {
        sub_1C7BD40(scrollView, v4);
      }
      v6 = localPosition.fields.y - this->fields.initialScrollPosition.fields.y;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)scrollView,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
      v15 = v14;
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v15,
               (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
        if ( !v7 )
          break;
        current = v15.fields._current;
        if ( !v15.fields._current )
          sub_1C7BD40(v7, v8);
        v10 = *(float *)&v15.fields._current[2].klass;
        if ( v10 <= v6 && v6 <= (float)(v10 + this->fields.scrollViewSize.fields.y) )
        {
          monitor = v15.fields._current[1].monitor;
          if ( !monitor )
            sub_1C7BD40(v7, v8);
          v12 = monitor[17];
          if ( !v12 )
            sub_1C7BD40(0, v8);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 456LL))(v12, *(_QWORD *)(*(_QWORD *)v12 + 464LL));
          OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
          if ( OnFinishedReadEvent )
            ((void (__fastcall *)(intptr_t, Il2CppClass *, intptr_t))OnFinishedReadEvent->fields.invoke_impl)(
              OnFinishedReadEvent->fields.method_code,
              current[1].klass,
              OnFinishedReadEvent->fields.method);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    }
  }
}


void ServantStatusFlavorTextListViewManager__OnClickListView(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x20
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *v12; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( !obj )
    sub_1C7BD40(this, 0);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v12 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0;
      sub_1C7BA8C(p_callbackFunc, 0, v5, v6, v7, v8, v9, v10);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4CEB06D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB06D = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C7BD40(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEB06B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_1C7BAE8(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEB06B = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      objectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v11, v12);
      ServantStatusFlavorTextListViewObject__Init_36600932(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v10,
        delay,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__RequestListObject_36599912(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEB06C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    sub_1C7BAE8(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CEB06C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      objectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v12.fields._current;
      v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C7BD40(v9, v10);
      ServantStatusFlavorTextListViewObject__Init_36601016(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v8,
        v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


void ServantStatusFlavorTextListViewManager__SetMode(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_36599720(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__SetMode_36599720(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4CEB06A & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    byte_4CEB06A = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1C7BD40(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v4, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_36599912(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void ServantStatusFlavorTextListViewManager__SetMode_36599864(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_36599720(this, mode, v10);
}


void ServantStatusFlavorTextListViewManager__SetObjectItem(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( !obj )
    sub_1C7BD40(this, 0);
  if ( this->fields.initMode == 1 )
    v3 = 3;
  else
    v3 = 2;
  ServantStatusFlavorTextListViewObject__Init_36599600(obj, v3, method);
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
  ServantStatusFlavorTextListViewManager_c *v16; // x0
  float y; // s8

  v6 = this;
  if ( (byte_4CEB067 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1C7BAE8(&ServantStatusFlavorTextListViewManager_TypeInfo);
    byte_4CEB067 = 1;
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
  if ( !byte_4CE7E5F )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1C7BAE8(&UnityEngine_Quaternion_TypeInfo);
    byte_4CE7E5F = 1;
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
  if ( !byte_4CE7E5E )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
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
    sub_1C7BD40(this, basePositon);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v13, (int32_t)this, 0);
  ServantStatusFlavorTextListViewObject__SetBaseTransform(obj, v14);
  ServantStatusFlavorTextListViewObject__SetManager(obj, v6, v15);
  v16 = ServantStatusFlavorTextListViewManager_TypeInfo;
  y = basePositon->fields.y;
  if ( !ServantStatusFlavorTextListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager_TypeInfo);
    v16 = ServantStatusFlavorTextListViewManager_TypeInfo;
  }
  basePositon->fields.y = y - (float)(v16->static_fields->LIST_BLANK + v9);
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o ProfileLastLinePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEB065 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
    byte_4CEB065 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0)
    || (v5 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   scrollView,
                                                   (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0)
    || (v6 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0) )
  {
    sub_1C7BD40(scrollView, method);
  }
  v7 = *((float *)&v6[13].klass + 1);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)scrollView,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C7BD40(v8, v9);
    v11 = *(ServantStatusFlavorTextListViewObject_o **)((char *)&v12.fields._current->klass + (unsigned __int64)&off_18);
    if ( !v11 )
      sub_1C7BD40(0, v9);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(v11, v9);
    *(float *)((char *)&qword_20 + (_QWORD)current) = fmaxf(vabds_f32(ProfileLastLinePosition.fields.y, v7) - v5, 0.0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEB06E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    byte_4CEB06E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, cvName);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      objectList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v6 )
        break;
      current = v10.fields._current;
      if ( !v10.fields._current )
        sub_1C7BD40(v6, v7);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v10.fields._current,
             v7) == 3 )
      {
        ServantStatusFlavorTextListViewObject__SetCvName((ServantStatusFlavorTextListViewObject_o *)current, cvName, v9);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewManager__UpdateParameter(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x19
  __int64 v8; // x1
  __int64 v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEB06F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    byte_4CEB06F = 1;
  }
  memset(&v10, 0, sizeof(v10));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, *(_QWORD *)&imageLimitCount);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    if ( !v5 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_1C7BD40(v5, v6);
    if ( ServantStatusFlavorTextListViewObject__GetKind(
           (ServantStatusFlavorTextListViewObject_o *)v10.fields._current,
           v6) == 5 )
    {
      v9 = *(__int64 *)((char *)off_88 + (_QWORD)current);
      if ( !v9 )
        sub_1C7BD40(0, v8);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 440LL))(
        v9,
        *(__int64 *)((char *)&qword_28 + (_QWORD)current),
        *(_QWORD *)(*(_QWORD *)v9 + 448LL));
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
}


void ServantStatusFlavorTextListViewManager__UpdateParameter_36602460(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *current; // x19
  __int64 v7; // x1
  __int64 v8; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEB070 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    byte_4CEB070 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C7BD40(v4, v5);
    if ( ServantStatusFlavorTextListViewObject__GetKind(
           (ServantStatusFlavorTextListViewObject_o *)v9.fields._current,
           v5) == 5 )
    {
      v8 = *(__int64 *)((char *)off_88 + (_QWORD)current);
      if ( !v8 )
        sub_1C7BD40(0, v7);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 440LL))(
        v8,
        *(__int64 *)((char *)&qword_28 + (_QWORD)current),
        *(_QWORD *)(*(_QWORD *)v8 + 448LL));
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  ServantStatusFlavorTextListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CEB05D & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    byte_4CEB05D = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CEB05F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEB05F = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc2(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CEB05E & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo);
    byte_4CEB05E = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  ServantStatusFlavorTextListViewManager__add_callbackFunc2(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewManager_o *v11; // x0
  ServantStatusListViewItem_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CEB060 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEB060 = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  ServantStatusFlavorTextListViewManager__CreateList(v11, v12, v13);
}


void ServantStatusFlavorTextListViewManager__set_IsIgnoreScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsIgnoreScroll_k__BackingField = value;
}


void ServantStatusFlavorTextListViewManager__set_IsInput(
        ServantStatusFlavorTextListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *v8; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_4CEB05C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB05C = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1C7BD40(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0);
    UIProgressBar__set_alpha(v8, alpha, 0);
  }
}


void ServantStatusFlavorTextListViewManager_CallbackFunc___ctor(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAE2BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAE274;
}


System_IAsyncResult_o *ServantStatusFlavorTextListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CEB073 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CEB073 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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
  float duration_5__3; // s0
  float deltaTime; // s0
  float v15; // s1
  float v16; // s0
  float v17; // s2
  bool v18; // nf
  float v19; // s0
  float moveValue_5__2; // s8
  float v21; // s0
  float v22; // s0
  float v23; // s1
  bool result; // w0
  float v25; // s0
  float v26; // s0
  float v27; // s8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4CEB075 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    byte_4CEB075 = 1;
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
      goto LABEL_35;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_35;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              v2->fields.targetIndex,
                                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !_4__this->fields.scrollView )
      goto LABEL_35;
    v5 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_35;
    v6 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_35;
    v7 = *((float *)&v6[4].fields.__2__current + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              LODWORD(this->fields.__2__current) - 1,
                                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    v8 = *((float *)&this[1].fields.__1__state + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)ServantStatusFlavorTextListViewObject__GetSize(
                                                                              (ServantStatusFlavorTextListViewObject_o *)this,
                                                                              method);
    if ( !_4__this->fields.scrollView )
      goto LABEL_35;
    v9 = (int)this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_35;
    v10 = vabds_f32(v8 + (float)((float)v9 * -0.5), v7) - UIPanel__get_height((UIPanel_o *)this, 0);
    if ( v10 <= 0.0 )
    {
      v2->fields._moveValue_5__2 = 0.0;
      goto LABEL_30;
    }
    if ( !v5 )
      goto LABEL_35;
    TopPosition = ServantStatusFlavorTextListViewObject__get_TopPosition(
                    (ServantStatusFlavorTextListViewObject_o *)v5,
                    method);
    v11 = fabsf(TopPosition.fields.y);
    if ( v11 >= v10 )
      v11 = v10;
    v2->fields._moveValue_5__2 = v11;
    if ( v11 <= 0.0 )
      goto LABEL_30;
    timer_5__4 = 0.0;
    duration_5__3 = fminf(fmaxf((float)(v11 + -2000.0) / 2000.0, 0.0) + 1.0, 2.0);
    v2->fields._duration_5__3 = duration_5__3;
    *(_QWORD *)&v2->fields._timer_5__4 = 0;
  }
  if ( timer_5__4 >= duration_5__3 )
  {
LABEL_30:
    ActionExtensions__Call(v2->fields.onFinished, 0);
    return 0;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  v15 = v2->fields._duration_5__3;
  v16 = timer_5__4 + deltaTime;
  if ( v16 <= v15 )
    v17 = v16;
  else
    v17 = v2->fields._duration_5__3;
  v18 = v16 < 0.0;
  v19 = 0.0;
  if ( !v18 )
    v19 = v17;
  v2->fields._timer_5__4 = v19;
  if ( !_4__this )
    goto LABEL_35;
  moveValue_5__2 = v2->fields._moveValue_5__2;
  v21 = v19 / (float)(v15 * 0.5);
  if ( v21 >= 1.0 )
  {
    v25 = exp2f((float)(v21 + -1.0) * -10.0);
    v23 = moveValue_5__2 * 0.5;
    v22 = 2.0 - v25;
  }
  else
  {
    v22 = powf(v21, 5.0);
    v23 = moveValue_5__2 * 0.5;
  }
  this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.scrollView;
  v26 = v23 * v22;
  if ( !this )
LABEL_35:
    sub_1C7BD40(this, method);
  v27 = v26 + 0.0;
  ((void (__fastcall *)(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *, const char *, float, float, float))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze,
    0.0,
    (float)(v26 + 0.0) - v2->fields._prevValue_5__5,
    0.0);
  v2->fields._prevValue_5__5 = v27;
  v2->fields.__2__current = 0;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C7BA8C(p__2__current, 0, v29, v30, v31, v32, v33, v34);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEB074 & 1) == 0 )
  {
    sub_1C7BAE8(&ServantStatusFlavorTextListViewManager___c_TypeInfo);
    byte_4CEB074 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(ServantStatusFlavorTextListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, a);
  return a->fields.id - b->fields.id;
}


bool ServantStatusFlavorTextListViewManager___c___DoAutoScroll_b__40_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantStatusFlavorTextListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.isNew;
}