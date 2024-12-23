void __fastcall ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B633E7 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager_TypeInfo, v1);
    byte_4B633E7 = 1;
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
  System_Collections_Generic_List_object__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4B633E6 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo, v5);
    byte_4B633E6 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v6;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v13;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.servantProfileList,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.isInput = 1;
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v20);
    byte_4B612E1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.initialScrollPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.initialScrollPosition.fields.z = z;
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
  Il2CppObject *v11; // x22
  ServantStatusFlavorTextListViewObject_o *Component_object; // x0
  __int64 v13; // x1
  ServantStatusFlavorTextListViewObject_o *v14; // x21
  const MethodInfo *v15; // x7
  const MethodInfo *v16; // x3
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8

  if ( (byte_4B633DE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, basePositon);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v7);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v10);
    byte_4B633DE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)prefab,
          (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  Component_object = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)v11,
                                                                  0LL,
                                                                  0LL);
  v14 = 0LL;
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_14;
    Component_object = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v11,
                                                                    (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    if ( !Component_object
      || (v14 = Component_object,
          ServantStatusFlavorTextListViewObject__SetItem(
            Component_object,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v15),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, v14, v16),
          (Component_object = (ServantStatusFlavorTextListViewObject_o *)this->fields.objectList) == 0LL)
      || (v23 = *(_QWORD *)&Component_object->fields.m_CachedPtr,
          v24 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__,
          ++HIDWORD(Component_object->fields.m_CancellationTokenSource),
          !v23) )
    {
LABEL_14:
      sub_1BE4D28(Component_object, v13);
    }
    m_CancellationTokenSource_low = SLODWORD(Component_object->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Component_object,
        (Il2CppObject *)v14,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = v23 + 8 * m_CancellationTokenSource_low;
      LODWORD(Component_object->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v26 + 32) = v14;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v14, v17, v18, v19, v20, v21, v22);
    }
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t targetIndex,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B633DC & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_TypeInfo, *(_QWORD *)&targetIndex);
    byte_4B633DC = 1;
  }
  v7 = sub_1BE4D18(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)onFinished, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ServantStatusFlavorTextListViewManager__CreateList(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  UnityEngine_Object_c **v3; // x28
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  void *transform; // x0
  Il2CppObject *Component_object; // x20
  float v40; // s8
  float v41; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x29
  System_Collections_Generic_List_object__o *v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_List_object__o *v50; // x22
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  const MethodInfo *v57; // x4
  const MethodInfo *v58; // x3
  Il2CppObject *voice2Object; // x22
  Il2CppObject *v60; // x23
  const MethodInfo *v61; // x7
  ServantStatusFlavorTextListViewObject_o *v62; // x23
  const MethodInfo *v63; // x3
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x8
  ServantStatusListViewItem_o *v74; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  Il2CppObject *profileObject; // x22
  Il2CppObject *v77; // x22
  Il2CppObject *v78; // x0
  ServantStatusListViewItem_o *v79; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v81; // x20
  const MethodInfo *v82; // x7
  const MethodInfo *v83; // x3
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  System_Collections_Generic_List_object__o *v94; // x23
  System_Comparison_T__o *v95; // x24
  Il2CppObject *v96; // x22
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int v104; // w21
  int32_t v105; // w24
  int v106; // w20
  ServantCommentEntity_o *v107; // x25
  struct ServantEntity_o *v108; // x8
  int32_t v109; // w26
  const MethodInfo *v110; // x3
  UnityEngine_Object_c *v111; // x0
  Il2CppObject *profile2Object; // x26
  Il2CppObject *v113; // x26
  Il2CppObject *v114; // x26
  int32_t v115; // w27
  _BOOL8 IsOpen; // x0
  const MethodInfo *v117; // x2
  int v118; // w24
  UnityEngine_Object_c **v119; // x21
  ServantStatusListViewItem_o **v120; // x20
  ServantStatusListViewItem_o *v121; // x28
  int32_t id; // w29
  bool IsNew; // w22
  const MethodInfo *v124; // x7
  const MethodInfo *v125; // x3
  const MethodInfo *v126; // x7
  System_String_o *CondTitle; // x27
  const MethodInfo *v128; // x2
  int64_t v129; // x27
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  __int64 v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  __int64 v151; // x8
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  System_Collections_Generic_List_object__o *v158; // x8
  struct System_Object_array *items; // x9
  _QWORD *v160; // x10
  __int64 size; // x11
  Il2CppClass **v162; // x0
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  const MethodInfo *v165; // x3
  UnityEngine_Object_o *v166; // x20
  UIPanel_o *v167; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v170; // x1
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v173; // x22
  EventDelegate_Callback_o *v174; // x21
  struct UIScrollBar_o *v175; // x8
  System_Collections_Generic_List_EventDelegate__o *v176; // x20
  EventDelegate_Callback_o *v177; // x21
  System_Collections_Generic_List_object__o *v178; // [xsp+8h] [xbp-B8h]
  int32_t v179; // [xsp+14h] [xbp-ACh]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+18h] [xbp-A8h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // [xsp+20h] [xbp-A0h]
  int v182; // [xsp+28h] [xbp-98h]
  bool isPlayVoice; // [xsp+2Ch] [xbp-94h] BYREF
  System_String_o *voice; // [xsp+30h] [xbp-90h] BYREF
  System_String_o *illust; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v187; // 0:s0.4,4:s1.4,8:s2.4

  v3 = &UnityEngine_Object_TypeInfo;
  if ( (byte_4B633D7 & 1) == 0 )
  {
    sub_1BE4ACC(&EventDelegate_Callback_TypeInfo, mainInfo);
    sub_1BE4ACC(&System_Comparison_ServantCommentEntity__TypeInfo, v6);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIPanel___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v8);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_ServantCommentEntity___, v10);
    sub_1BE4ACC(&EventDelegate_TypeInfo, v11);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v13);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__,
      v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__Sort__, v15);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v19);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v20);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo, v21);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v23);
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v24);
    sub_1BE4ACC(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__, v25);
    sub_1BE4ACC(&Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__38_0__, v26);
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v27);
    sub_1BE4ACC(&Method_UIScrollView_OnScrollBar__, v28);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v29);
    byte_4B633D7 = 1;
  }
  basePositon.fields.z = 0.0;
  illust = 0LL;
  *(_QWORD *)&basePositon.fields.x = 0LL;
  voice = 0LL;
  isPlayVoice = 0;
  ServantStatusFlavorTextListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( !transform )
      goto LABEL_125;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_125;
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      v40 = *((float *)&Component_object[20].monitor + 1);
      v41 = *(float *)&Component_object[21].klass;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_125;
      v187.fields.x = -v40;
      v187.fields.y = -v41;
      v187.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v187, 0LL);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)mainInfo, v32, v33, v34, v35, v36, v37);
  v43 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v43;
  p_objectList = &this->fields.objectList;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v43, v44, v45, v46, v47, v48, v49);
  v50 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v50;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.servantProfileList,
    (int64_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  *(_QWORD *)&basePositon.fields.x = 0LL;
  basePositon.fields.z = 0.0;
  transform = this->fields.mainInfo;
  if ( !transform )
    goto LABEL_125;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v57);
  if ( System_String__IsNullOrEmpty(voice, 0LL) )
  {
    voice2Object = (Il2CppObject *)this->fields.voice2Object;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v60 = UnityEngine_Object__Instantiate_object_(
            voice2Object,
            (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v60, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v60 )
        goto LABEL_125;
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v60,
                    (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_125;
      v62 = (ServantStatusFlavorTextListViewObject_o *)transform;
      ServantStatusFlavorTextListViewObject__SetItem(
        (ServantStatusFlavorTextListViewObject_o *)transform,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v61);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v62, v63);
      transform = this->fields.objectList;
      if ( !transform )
        goto LABEL_125;
      v70 = *((_QWORD *)transform + 2);
      v71 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
      ++*((_DWORD *)transform + 7);
      if ( !v70 )
        goto LABEL_125;
      v72 = *((int *)transform + 6);
      if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v62,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = v70 + 8 * v72;
        *((_DWORD *)transform + 6) = v72 + 1;
        *(_QWORD *)(v73 + 32) = v62;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v73 + 32), (int64_t)v62, v64, v65, v66, v67, v68, v69);
      }
    }
  }
  else
  {
    transform = ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.voiceObject, v58);
  }
  v74 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_125;
  if ( v74->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v74->fields.commandCodeCommentEntity;
    if ( !commandCodeCommentEntity )
      goto LABEL_111;
    profileObject = (Il2CppObject *)this->fields.profileObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v77 = UnityEngine_Object__Instantiate_object_(
            profileObject,
            (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v77, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_111;
    if ( v77 )
    {
      v78 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)v77,
              (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      v79 = *p_mainInfo;
      commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
      v81 = (ServantStatusFlavorTextListViewObject_o *)v78;
      transform = CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0LL);
      if ( v81 )
      {
        ServantStatusFlavorTextListViewObject__SetItem(
          v81,
          v79,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v82);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v81, v83);
        transform = this->fields.objectList;
        if ( transform )
        {
          v90 = *((_QWORD *)transform + 2);
          v91 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
          ++*((_DWORD *)transform + 7);
          if ( v90 )
          {
            v92 = *((int *)transform + 6);
            if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                (Il2CppObject *)v81,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
            }
            else
            {
              v93 = v90 + 8 * v92;
              *((_DWORD *)transform + 6) = v92 + 1;
              *(_QWORD *)(v93 + 32) = v81;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v93 + 32), (int64_t)v81, v84, v85, v86, v87, v88, v89);
            }
            goto LABEL_111;
          }
        }
      }
    }
    goto LABEL_125;
  }
  v94 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v74->fields.svtCommentEntityList,
                                                       (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  v95 = *(System_Comparison_T__o **)(*((_QWORD *)transform + 23) + 8LL);
  if ( !v95 )
  {
    if ( !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
    }
    v96 = (Il2CppObject *)**((_QWORD **)transform + 23);
    v95 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_ServantCommentEntity__TypeInfo);
    System_Comparison_object____ctor(
      v95,
      v96,
      Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__38_0__,
      0LL);
    static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Comparison_ServantCommentEntity__o *)v95;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__38_0, (int64_t)v95, v98, v99, v100, v101, v102, v103);
  }
  if ( !v94 )
    goto LABEL_125;
  System_Collections_Generic_List_object___Sort_56548584(
    v94,
    v95,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
  if ( v94->fields._size < 1 )
  {
LABEL_104:
    if ( *p_mainInfo )
    {
      svtEntity = (*p_mainInfo)->fields.svtEntity;
      if ( svtEntity )
      {
        type = svtEntity->fields.type;
        if ( SvtType__IsServant(type, 0LL) || SvtType__IsEnemyCollectionDetail(type, 0LL) )
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v165);
        goto LABEL_111;
      }
    }
    goto LABEL_125;
  }
  v104 = 0;
  v105 = 0;
  v106 = 1;
  v178 = v94;
  do
  {
    transform = System_Collections_Generic_List_object___get_Item(
                  v94,
                  v105,
                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    v107 = (ServantCommentEntity_o *)transform;
    if ( !v105 || (v104 & 1) != 0 )
    {
      if ( !transform )
        goto LABEL_125;
    }
    else
    {
      if ( !transform )
        goto LABEL_125;
      if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)transform, 0LL) )
      {
        transform = System_Collections_Generic_List_object___get_Item(
                      v94,
                      v105 - 1,
                      (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !transform )
          goto LABEL_125;
        if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)transform, 0LL) )
          goto LABEL_66;
      }
      transform = (void *)ServantCommentEntity__IsDetailLabel(v107, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = System_Collections_Generic_List_object___get_Item(
                      v94,
                      v105 - 1,
                      (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !transform )
          goto LABEL_125;
        transform = (void *)ServantCommentEntity__IsDetailLabel((ServantCommentEntity_o *)transform, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
          goto LABEL_66;
      }
      if ( !*p_mainInfo )
        goto LABEL_125;
      v108 = (*p_mainInfo)->fields.svtEntity;
      if ( !v108 )
        goto LABEL_125;
      v109 = v108->fields.type;
      if ( !SvtType__IsServant(v109, 0LL) && !SvtType__IsEnemyCollectionDetail(v109, 0LL) )
      {
LABEL_66:
        v104 = 0;
      }
      else
      {
        ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v110);
        v104 = 1;
      }
    }
    if ( ServantCommentEntity__IsDetailLabel(v107, 0LL) )
    {
      v111 = *v3;
      profile2Object = (Il2CppObject *)this->fields.profileObject;
    }
    else
    {
      v113 = 0LL;
      if ( !ServantCommentEntity__IsProfileLabel(v107, 0LL) )
        goto LABEL_74;
      v111 = *v3;
      profile2Object = (Il2CppObject *)this->fields.profile2Object;
    }
    if ( !v111->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v111);
    v113 = UnityEngine_Object__Instantiate_object_(
             profile2Object,
             (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_74:
    if ( !(*v3)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v3);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v113, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v113 )
        goto LABEL_125;
      v114 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v113,
               (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( ServantCommentEntity__IsProfileLabel(v107, 0LL) )
        v115 = v106;
      else
        v115 = 0;
      IsOpen = ServantCommentEntity__IsOpen(v107, -1, 1, 0LL);
      v182 = v104;
      if ( IsOpen )
      {
        v179 = v105;
        v118 = v106;
        v119 = v3;
        v120 = p_mainInfo;
        v121 = *p_mainInfo;
        id = v107->fields.id;
        IsNew = ServantCommentEntity__IsNew(v107, 0LL);
        transform = ServantCommentEntity__GetComment(v107, 0LL);
        if ( !v114 )
          goto LABEL_125;
        ServantStatusFlavorTextListViewObject__SetItem(
          (ServantStatusFlavorTextListViewObject_o *)v114,
          v121,
          id,
          1,
          IsNew,
          (System_String_o *)transform,
          v115,
          v124);
        p_mainInfo = v120;
        v94 = v178;
        v106 = v118;
        v105 = v179;
        v3 = v119;
      }
      else
      {
        transform = ServantStatusFlavorTextListViewManager__GetConditionString(
                      (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                      v107,
                      v117);
        if ( !v114 )
          goto LABEL_125;
        ServantStatusFlavorTextListViewObject__SetItem(
          (ServantStatusFlavorTextListViewObject_o *)v114,
          *p_mainInfo,
          v107->fields.id,
          0,
          0,
          (System_String_o *)transform,
          v115,
          v126);
      }
      ServantStatusFlavorTextListViewManager__SetObjectPosition(
        this,
        &basePositon,
        (ServantStatusFlavorTextListViewObject_o *)v114,
        v125);
      CondTitle = ServantCommentEntity__GetCondTitle(v107, 0LL);
      if ( ServantCommentEntity__IsProfileLabel(v107, 0LL) || !System_String__IsNullOrEmpty(CondTitle, 0LL) )
        ServantStatusFlavorTextListViewObject__SetCondTitle(
          (ServantStatusFlavorTextListViewObject_o *)v114,
          CondTitle,
          v128);
      if ( ServantCommentEntity__IsProfileLabel(v107, 0LL) || !ServantCommentEntity__IsConst(v107, 0LL) )
      {
        v129 = sub_1BE4D18(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo);
        System_Object___ctor((Il2CppObject *)v129, 0LL);
        if ( !v129 )
          goto LABEL_125;
        *(_QWORD *)(v129 + 16) = v107;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v129 + 16), (int64_t)v107, v130, v131, v132, v133, v134, v135);
        *(_QWORD *)(v129 + 24) = v114;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v129 + 24), (int64_t)v114, v136, v137, v138, v139, v140, v141);
        *(_DWORD *)(v129 + 32) = 0;
        transform = *p_servantProfileList;
        if ( !*p_servantProfileList )
          goto LABEL_125;
        v148 = *((_QWORD *)transform + 2);
        v149 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__;
        ++*((_DWORD *)transform + 7);
        if ( !v148 )
          goto LABEL_125;
        v150 = *((int *)transform + 6);
        if ( (unsigned int)v150 >= *(_DWORD *)(v148 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)transform,
            (Il2CppObject *)v129,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
        }
        else
        {
          v151 = v148 + 8 * v150;
          *((_DWORD *)transform + 6) = v150 + 1;
          *(_QWORD *)(v151 + 32) = v129;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v151 + 32), v129, v142, v143, v144, v145, v146, v147);
        }
      }
      transform = (void *)ServantCommentEntity__IsProfileLabel(v107, 0LL);
      v158 = (System_Collections_Generic_List_object__o *)*p_objectList;
      if ( !*p_objectList )
        goto LABEL_125;
      items = v158->fields._items;
      v160 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
      ++v158->fields._version;
      v104 = v182;
      if ( !items )
        goto LABEL_125;
      size = v158->fields._size;
      v106 += (unsigned __int8)transform & 1;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v158,
          v114,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
      }
      else
      {
        v162 = &items->obj.klass + size;
        v158->fields._size = size + 1;
        v162[4] = (Il2CppClass *)v114;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v162 + 4), (int64_t)v114, v152, v153, v154, v155, v156, v157);
      }
    }
    ++v105;
  }
  while ( v105 < v94->fields._size );
  if ( (v104 & 1) == 0 )
    goto LABEL_104;
LABEL_111:
  v166 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !(*v3)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v3);
  if ( UnityEngine_Object__op_Inequality(v166, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      goto LABEL_116;
    }
LABEL_125:
    sub_1BE4D28(transform, v31);
  }
LABEL_116:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_125;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_125;
  v167 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0LL);
  height = UIPanel__get_height(v167, 0LL);
  transform = this->fields.scrollView;
  this->fields.scrollViewSize.fields.x = width;
  this->fields.scrollViewSize.fields.y = height;
  if ( !transform )
    goto LABEL_125;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_125;
  this->fields.initialScrollPosition = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)transform,
                                         0LL);
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v170);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_125;
  onChange = scrollBar->fields.onChange;
  v173 = (Il2CppObject *)this->fields.scrollView;
  v174 = (EventDelegate_Callback_o *)sub_1BE4D18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v174, v173, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  transform = EventDelegate__Add(onChange, v174, 0LL);
  v175 = this->fields.scrollBar;
  if ( !v175 )
    goto LABEL_125;
  v176 = v175->fields.onChange;
  v177 = (EventDelegate_Callback_o *)sub_1BE4D18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v177,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0LL);
  EventDelegate__Add(v176, v177, 0LL);
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
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v16; // x8
  int64_t size; // x2
  int v18; // w9
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B633DF & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      method);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v3);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    byte_4B633DF = 1;
  }
  memset(&v21, 0, sizeof(v21));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1BE4D28(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v21.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  v16 = this->fields.objectList;
  if ( !v16 )
    goto LABEL_20;
  size = (unsigned int)v16->fields._size;
  v18 = v16->fields._version + 1;
  v16->fields._size = 0;
  v16->fields._version = v18;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
  this->fields.mainInfo = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mainInfo, 0LL, size, v11, v12, v13, v14, v15);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_1BE4D28(objectList, method);
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
  ServantStatusFlavorTextListViewManager___c_c *v8; // x0
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  System_Predicate_object__o *_9__40_0; // x22
  Il2CppObject *v11; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t Index; // w0
  const MethodInfo *v20; // x3
  System_Collections_IEnumerator_o *v21; // x1

  if ( (byte_4B633D9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__, onFinished);
    sub_1BE4ACC(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo, v5);
    sub_1BE4ACC(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__40_0__, v6);
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v7);
    byte_4B633D9 = 1;
  }
  v8 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo);
    v8 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  _9__40_0 = (System_Predicate_object__o *)v8->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__40_0 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo);
    System_Predicate_object____ctor(
      _9__40_0,
      v11,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__40_0__,
      0LL);
    static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__40_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__40_0,
      (int64_t)_9__40_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !objectList )
    sub_1BE4D28(v8, onFinished);
  Index = System_Collections_Generic_List_object___FindIndex(
            (System_Collections_Generic_List_object__o *)objectList,
            (System_Predicate_T__o *)_9__40_0,
            (const MethodInfo_35ECA7C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( (Index & 0x80000000) != 0 )
  {
    ActionExtensions__Call(onFinished, 0LL);
  }
  else
  {
    v21 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v20);
    UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v21, 0LL);
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
  return fminf(fmaxf((float)(moveValue + -2000.0) / 2000.0, 0.0) + 1.0, 2.0);
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
  ServantCommentAddMaster_o *Master_object; // x0
  __int64 v12; // x1
  ServantCommentAddMaster_o *v13; // x20
  System_String_o *v14; // x22
  System_String_o *Conditiontext; // x0
  bool IsOpen; // w21
  bool IsNullOrEmpty; // w0
  __int64 v18; // x1
  System_String_o *v19; // x21
  LocalizationManager_c *v20; // x0
  bool v21; // w0
  bool v22; // w22
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t svtId; // w3
  int32_t id; // w4
  int32_t priority; // w5
  System_String_o *v29; // x19
  System_String_o *ConditionString; // x0

  if ( (byte_4B633D8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantCommentAddMaster___, svtCommentEntity);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_12059/*"SERVANT_STATUS_PROFILE_CONDITION"*/, v6);
    sub_1BE4ACC(&StringLiteral_16409/*"_FLAVOR2"*/, v7);
    sub_1BE4ACC(&StringLiteral_16408/*"_FLAVOR"*/, v8);
    sub_1BE4ACC(&StringLiteral_3830/*"COND_TYPE_AND_FLAVOR2"*/, v9);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v10);
    byte_4B633D8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantCommentAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
LABEL_31:
    sub_1BE4D28(Master_object, v12);
  v13 = Master_object;
  Master_object = (ServantCommentAddMaster_o *)ServantCommentEntity__IsOpen(svtCommentEntity, -1, 0, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !v13 )
      goto LABEL_31;
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12059/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
      Conditiontext = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_16408/*"_FLAVOR"*/,
                        0LL);
      goto LABEL_26;
    }
    v19 = ServantCommentEntity__GetConditiontext(svtCommentEntity, (System_String_o *)StringLiteral_16409/*"_FLAVOR2"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4B622AA )
    {
      sub_1BE4ACC(&LocalizationManager_TypeInfo, v18);
      byte_4B622AA = 1;
    }
    v20 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager_TypeInfo;
    }
    v21 = System_String__op_Equality(v19, v20->static_fields->unknownNameText, 0LL);
    v22 = v21;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v21 )
      {
LABEL_22:
        v23 = (System_String_o *)StringLiteral_12059/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
LABEL_29:
        v14 = LocalizationManager__Get(v23, 0LL);
        return System_String__Format(v14, (Il2CppObject *)v19, 0LL);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v22 )
        goto LABEL_22;
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3830/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
    v25 = System_String__Concat_62698808(v19, v24, 0LL);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v29 = v25;
    ConditionString = ServantCommentAddMaster__GetConditionString(
                        v13,
                        (System_String_o *)StringLiteral_16408/*"_FLAVOR"*/,
                        (System_String_o *)StringLiteral_16409/*"_FLAVOR2"*/,
                        svtId,
                        id,
                        priority,
                        -1,
                        0LL);
    v19 = System_String__Concat_62698808(v29, ConditionString, 0LL);
    v23 = (System_String_o *)StringLiteral_12059/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
    goto LABEL_29;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ServantCommentAddMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12059/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
  if ( !v13 )
    goto LABEL_31;
  v14 = (System_String_o *)Master_object;
  Conditiontext = ServantCommentAddMaster__GetConditionString(
                    v13,
                    (System_String_o *)StringLiteral_16408/*"_FLAVOR"*/,
                    (System_String_o *)StringLiteral_16409/*"_FLAVOR2"*/,
                    svtCommentEntity->fields.svtId,
                    svtCommentEntity->fields.id,
                    svtCommentEntity->fields.priority,
                    -1,
                    0LL);
LABEL_26:
  v19 = Conditiontext;
  return System_String__Format(v14, (Il2CppObject *)v19, 0LL);
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
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v10; // s1
  float v11; // s8
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  float v15; // s0
  _QWORD *monitor; // x8
  __int64 v17; // x0
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x8
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B633DA & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      method);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v3);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v4);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    byte_4B633DA = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !this->fields._IsIgnoreScroll_k__BackingField )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1BE4D28(scrollView, v8);
      }
      v11 = v10 - this->fields.initialScrollPosition.fields.y;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        (System_Collections_Generic_List_object__o *)scrollView,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
      v20 = v19;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
        if ( !v12 )
          break;
        current = v20.fields._current;
        if ( !v20.fields._current )
          sub_1BE4D28(v12, v13);
        v15 = *(float *)&v20.fields._current[2].klass;
        if ( v15 <= v11 && v11 <= (float)(v15 + this->fields.scrollViewSize.fields.y) )
        {
          monitor = v20.fields._current[1].monitor;
          if ( !monitor )
            sub_1BE4D28(v12, v13);
          v17 = monitor[17];
          if ( !v17 )
            sub_1BE4D28(0LL, v13);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 456LL))(v17, *(_QWORD *)(*(_QWORD *)v17 + 464LL));
          OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
          if ( OnFinishedReadEvent )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppClass *, _QWORD))OnFinishedReadEvent->fields.m_target)(
              OnFinishedReadEvent->fields.original_method_info,
              current[1].klass,
              *(_QWORD *)&OnFinishedReadEvent->fields.extra_arg);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__OnClickListView(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x20
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *v12; // x21
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  if ( !obj )
    sub_1BE4D28(this, 0LL);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v12 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0LL;
      sub_1BE4A70(p_callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        (unsigned int)obj->fields.id,
        *(_QWORD *)&v12->fields.extra_arg);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__OnClickListViewVoice(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *v9; // x19
  struct ServantStatusFlavorTextListViewManager_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      0LL,
      *(_QWORD *)&v9->fields.extra_arg);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B633E3 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B633E3 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1BE4D28(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B633E1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v7);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v8);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v11);
    sub_1BE4ACC(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v12);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v13);
    byte_4B633E1 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      objectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v17 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v18, v19);
      ServantStatusFlavorTextListViewObject__Init_34014992(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v17,
        delay,
        v20);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject_34013972(
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
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B633E2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__, v5);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v6);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v9);
    sub_1BE4ACC(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v10);
    sub_1BE4ACC(&StringLiteral_10092/*"OnMoveEnd"*/, v11);
    byte_4B633E2 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      objectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BE4D28(v16, v17);
      ServantStatusFlavorTextListViewObject__Init_34015076(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v15,
        v18);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_34013780(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetMode_34013780(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4B633E0 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1BE4ACC(
                                                         &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
                                                         *(_QWORD *)&mode);
    byte_4B633E0 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1BE4D28(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v4, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_34013972(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode_34013924(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_34013780(this, mode, v10);
}


void __fastcall ServantStatusFlavorTextListViewManager__SetObjectItem(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( !obj )
    sub_1BE4D28(this, 0LL);
  if ( this->fields.initMode == 1 )
    v3 = 3;
  else
    v3 = 2;
  ServantStatusFlavorTextListViewObject__Init_34013660(obj, v3, method);
}


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
  ServantStatusFlavorTextListViewManager_o *v10; // x22
  ServantStatusFlavorTextListViewManager_o *v11; // x22
  ServantStatusFlavorTextListViewManager_o *v12; // x22
  ServantStatusFlavorTextListViewManager_o *v13; // x22
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  ServantStatusFlavorTextListViewManager_c *v16; // x0
  float y; // s8

  v6 = this;
  if ( (byte_4B633DD & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1BE4ACC(
                                                         &ServantStatusFlavorTextListViewManager_TypeInfo,
                                                         basePositon);
    byte_4B633DD = 1;
  }
  if ( !obj )
    goto LABEL_21;
  Size = ServantStatusFlavorTextListViewObject__GetSize(obj, (const MethodInfo *)basePositon);
  v8 = Size >= 0 ? Size : Size + 1;
  v9 = v8 >> 1;
  basePositon->fields.y = basePositon->fields.y - (float)(v8 >> 1);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  if ( !v6->fields.listParent )
    goto LABEL_21;
  v10 = this;
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_transform(v6->fields.listParent, 0LL);
  if ( !v10 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  if ( !this )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *basePositon, 0LL);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  v11 = this;
  if ( !byte_4B612E7 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1BE4ACC(&UnityEngine_Quaternion_TypeInfo, basePositon);
    byte_4B612E7 = 1;
  }
  if ( !v11 )
    goto LABEL_21;
  UnityEngine_Transform__set_localRotation(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  v12 = this;
  if ( !byte_4B612E6 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, basePositon);
    byte_4B612E6 = 1;
  }
  if ( !v12
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v12,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)obj,
                                                             0LL),
        !v6->fields.listParent)
    || (v13 = this,
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_layer(v6->fields.listParent, 0LL),
        !v13) )
  {
LABEL_21:
    sub_1BE4D28(this, basePositon);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v13, (int32_t)this, 0LL);
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
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x21
  ServantStatusFlavorTextListViewObject_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o ProfileLastLinePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B633DB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v3);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v4);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v5);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v6);
    byte_4B633DB = 1;
  }
  memset(&v16, 0, sizeof(v16));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v9 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   scrollView,
                                                   (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL)
    || (v10 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
  {
    sub_1BE4D28(scrollView, method);
  }
  v11 = *((float *)&v10[13].klass + 1);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)scrollView,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v12 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1BE4D28(v12, v13);
    monitor = (ServantStatusFlavorTextListViewObject_o *)v16.fields._current[1].monitor;
    if ( !monitor )
      sub_1BE4D28(0LL, v13);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(monitor, v13);
    *(float *)&current[2].klass = fmaxf(vabds_f32(ProfileLastLinePosition.fields.y, v11) - v9, 0.0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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
  System_Collections_Generic_List_object__o *objectList; // x0
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B633E4 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      cvName);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v5);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v8);
    byte_4B633E4 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, cvName);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      objectList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v10 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current )
        sub_1BE4D28(v10, v11);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v14.fields._current,
             v11) == 3 )
      {
        ServantStatusFlavorTextListViewObject__SetCvName(
          (ServantStatusFlavorTextListViewObject_o *)current,
          cvName,
          v13);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__UpdateParameter(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *current; // x19
  __int64 v11; // x1
  void *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B633E5 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      *(_QWORD *)&imageLimitCount);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v4);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v6);
    byte_4B633E5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BE4D28(0LL, *(_QWORD *)&imageLimitCount);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1BE4D28(v8, v9);
    if ( ServantStatusFlavorTextListViewObject__GetKind(
           (ServantStatusFlavorTextListViewObject_o *)v13.fields._current,
           v9) == 5 )
    {
      monitor = current[8].monitor;
      if ( !monitor )
        sub_1BE4D28(0LL, v11);
      (*(void (__fastcall **)(void *, void *, _QWORD))(*(_QWORD *)monitor + 440LL))(
        monitor,
        current[2].monitor,
        *(_QWORD *)(*(_QWORD *)monitor + 448LL));
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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

  if ( (byte_4B633D3 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B633D3 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
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

  if ( (byte_4B633D5 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B633D5 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  ServantStatusFlavorTextListViewManager__remove_callbackFunc2(v11, v12, v13);
}


bool __fastcall ServantStatusFlavorTextListViewManager__get_IsIgnoreScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsIgnoreScroll_k__BackingField;
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

  if ( (byte_4B633D4 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B633D4 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
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

  if ( (byte_4B633D6 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B633D6 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  ServantStatusFlavorTextListViewManager__CreateList(v11, v12, v13);
}


void __fastcall ServantStatusFlavorTextListViewManager__set_IsIgnoreScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsIgnoreScroll_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__set_IsInput(
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
  if ( (byte_4B633D2 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, value);
    byte_4B633D2 = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1BE4D28(v6, v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A2323C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A231F4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B633E8 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&result);
    byte_4B633E8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__Invoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ServantStatusFlavorTextListViewManager_ServantProfile___ctor(
        ServantStatusFlavorTextListViewManager_ServantProfile_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43___ctor(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__MoveNext(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct ServantStatusFlavorTextListViewManager_o *_4__this; // x22
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v7; // x20
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v8; // x8
  float v9; // s8
  float v10; // s9
  int v11; // w21
  float v12; // s8
  float v13; // s0
  float timer_5__4; // s8
  float duration_5__3; // s0
  float deltaTime; // s0
  float v17; // s1
  float v18; // s0
  float v19; // s2
  bool v20; // nf
  float v21; // s0
  float moveValue_5__2; // s8
  float v23; // s0
  float v24; // s0
  float v25; // s1
  bool result; // w0
  float v27; // s0
  float v28; // s0
  float v29; // s8
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B633EA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v3);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)sub_1BE4ACC(
                                                                              &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__,
                                                                              v4);
    byte_4B633EA = 1;
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
                                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !_4__this->fields.scrollView )
      goto LABEL_35;
    v7 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_35;
    v8 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_35;
    v9 = *((float *)&v8[4].fields.__2__current + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              LODWORD(this->fields.__2__current) - 1,
                                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    v10 = *((float *)&this[1].fields.__1__state + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)ServantStatusFlavorTextListViewObject__GetSize(
                                                                              (ServantStatusFlavorTextListViewObject_o *)this,
                                                                              method);
    if ( !_4__this->fields.scrollView )
      goto LABEL_35;
    v11 = (int)this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_35;
    v12 = vabds_f32(v10 + (float)((float)v11 * -0.5), v9) - UIPanel__get_height((UIPanel_o *)this, 0LL);
    if ( v12 <= 0.0 )
    {
      v2->fields._moveValue_5__2 = 0.0;
      goto LABEL_30;
    }
    if ( !v7 )
      goto LABEL_35;
    TopPosition = ServantStatusFlavorTextListViewObject__get_TopPosition(
                    (ServantStatusFlavorTextListViewObject_o *)v7,
                    method);
    v13 = fabsf(TopPosition.fields.y);
    if ( v13 >= v12 )
      v13 = v12;
    v2->fields._moveValue_5__2 = v13;
    if ( v13 <= 0.0 )
      goto LABEL_30;
    timer_5__4 = 0.0;
    duration_5__3 = fminf(fmaxf((float)(v13 + -2000.0) / 2000.0, 0.0) + 1.0, 2.0);
    v2->fields._duration_5__3 = duration_5__3;
    *(_QWORD *)&v2->fields._timer_5__4 = 0LL;
  }
  if ( timer_5__4 >= duration_5__3 )
  {
LABEL_30:
    ActionExtensions__Call(v2->fields.onFinished, 0LL);
    return 0;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v17 = v2->fields._duration_5__3;
  v18 = timer_5__4 + deltaTime;
  if ( v18 <= v17 )
    v19 = v18;
  else
    v19 = v2->fields._duration_5__3;
  v20 = v18 < 0.0;
  v21 = 0.0;
  if ( !v20 )
    v21 = v19;
  v2->fields._timer_5__4 = v21;
  if ( !_4__this )
    goto LABEL_35;
  moveValue_5__2 = v2->fields._moveValue_5__2;
  v23 = v21 / (float)(v17 * 0.5);
  if ( v23 >= 1.0 )
  {
    v27 = exp2f((float)(v23 + -1.0) * -10.0);
    v25 = moveValue_5__2 * 0.5;
    v24 = 2.0 - v27;
  }
  else
  {
    v24 = powf(v23, 5.0);
    v25 = moveValue_5__2 * 0.5;
  }
  this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.scrollView;
  v28 = v25 * v24;
  if ( !this )
LABEL_35:
    sub_1BE4D28(this, method);
  v29 = v28 + 0.0;
  ((void (__fastcall *)(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *, void *, float, float, float))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data,
    0.0,
    (float)(v28 + 0.0) - v2->fields._prevValue_5__5,
    0.0);
  v2->fields._prevValue_5__5 = v29;
  v2->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1BE4A70(p__2__current, 0LL, v31, v32, v33, v34, v35, v36);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_Collections_IEnumerator_Reset(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_Collections_IEnumerator_get_Current(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43__System_IDisposable_Dispose(
        ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B633E9 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v1);
    byte_4B633E9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ServantStatusFlavorTextListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewManager___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall ServantStatusFlavorTextListViewManager___c___ctor(
        ServantStatusFlavorTextListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantStatusFlavorTextListViewManager___c___CreateList_b__38_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantCommentEntity_o *a,
        ServantCommentEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BE4D28(this, a);
  return a->fields.id - b->fields.id;
}


bool __fastcall ServantStatusFlavorTextListViewManager___c___DoAutoScroll_b__40_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantStatusFlavorTextListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return x->fields.isNew;
}