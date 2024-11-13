void __fastcall ServantStatusFlavorTextListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12A90 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusFlavorTextListViewManager_TypeInfo, v1, v2);
    byte_4B12A90 = 1;
  }
  ServantStatusFlavorTextListViewManager_TypeInfo->static_fields->LIST_BLANK = 10;
}


void __fastcall ServantStatusFlavorTextListViewManager___ctor(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4B12A8F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v7, v8);
    sub_1BCA7E0(
      &System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
      v9,
      v10);
    byte_4B12A8F = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantProfileList,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.isInput = 1;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v28, v29);
    byte_4B109C1 = 1;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x22
  ServantStatusFlavorTextListViewObject_o *Component_object; // x0
  __int64 v17; // x1
  ServantStatusFlavorTextListViewObject_o *v18; // x21
  const MethodInfo *v19; // x7
  const MethodInfo *v20; // x3
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v30; // x8

  if ( (byte_4B12A87 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___,
      basePositon,
      prefab);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B12A87 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, basePositon);
  v15 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)prefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  Component_object = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)v15,
                                                                  0LL,
                                                                  0LL);
  v18 = 0LL;
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_14;
    Component_object = (ServantStatusFlavorTextListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v15,
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
    if ( !Component_object
      || (v18 = Component_object,
          ServantStatusFlavorTextListViewObject__SetItem(
            Component_object,
            this->fields.mainInfo,
            0,
            1,
            0,
            (System_String_o *)StringLiteral_1/*""*/,
            0,
            v19),
          ServantStatusFlavorTextListViewManager__SetObjectPosition(this, basePositon, v18, v20),
          (Component_object = (ServantStatusFlavorTextListViewObject_o *)this->fields.objectList) == 0LL)
      || (v27 = *(_QWORD *)&Component_object->fields.m_CachedPtr,
          v28 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__,
          ++HIDWORD(Component_object->fields.m_CancellationTokenSource),
          !v27) )
    {
LABEL_14:
      sub_1BCAA3C(Component_object, v17);
    }
    m_CancellationTokenSource_low = SLODWORD(Component_object->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v27 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Component_object,
        (Il2CppObject *)v18,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = v27 + 8 * m_CancellationTokenSource_low;
      LODWORD(Component_object->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v30 + 32) = v18;
      sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)v18, v21, v22, v23, v24, v25, v26);
    }
  }
  return v18;
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

  if ( (byte_4B12A85 & 1) == 0 )
  {
    sub_1BCA7E0(
      &ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_TypeInfo,
      *(_QWORD *)&targetIndex,
      onFinished);
    byte_4B12A85 = 1;
  }
  v7 = sub_1BCAA2C(
         ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_TypeInfo,
         *(_QWORD *)&targetIndex,
         onFinished,
         method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = targetIndex;
  *(_QWORD *)(v7 + 48) = onFinished;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)onFinished, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall ServantStatusFlavorTextListViewManager__CreateList(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  UnityEngine_Object_c **v3; // x28
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  void *transform; // x0
  __int64 v64; // x1
  Il2CppObject *Component_object; // x20
  float v66; // s8
  float v67; // s9
  ServantStatusListViewItem_o **p_mainInfo; // x29
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Collections_Generic_List_object__o *v72; // x22
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_Collections_Generic_List_object__o *v82; // x22
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  const MethodInfo *v89; // x4
  __int64 v90; // x1
  const MethodInfo *v91; // x3
  Il2CppObject *voice2Object; // x22
  Il2CppObject *v93; // x23
  const MethodInfo *v94; // x7
  ServantStatusFlavorTextListViewObject_o *v95; // x23
  const MethodInfo *v96; // x3
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  __int64 v106; // x8
  ServantStatusListViewItem_o *v107; // x8
  CommandCodeCommentEntity_o *commandCodeCommentEntity; // x21
  Il2CppObject *profileObject; // x22
  Il2CppObject *v110; // x22
  Il2CppObject *v111; // x0
  ServantStatusListViewItem_o *v112; // x22
  int32_t commandCodeId; // w23
  ServantStatusFlavorTextListViewObject_o *v114; // x20
  const MethodInfo *v115; // x7
  const MethodInfo *v116; // x3
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  __int64 v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  __int64 v126; // x8
  __int64 v127; // x1
  System_Collections_Generic_List_object__o *v128; // x23
  __int64 v129; // x2
  __int64 v130; // x3
  System_Comparison_T__o *v131; // x24
  Il2CppObject *v132; // x22
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  int v140; // w21
  int32_t v141; // w24
  int v142; // w20
  ServantCommentEntity_o *v143; // x25
  struct ServantEntity_o *v144; // x8
  int32_t v145; // w26
  const MethodInfo *v146; // x3
  __int64 v147; // x1
  UnityEngine_Object_c *v148; // x0
  Il2CppObject *profile2Object; // x26
  Il2CppObject *v150; // x26
  Il2CppObject *v151; // x26
  int32_t v152; // w27
  _BOOL8 IsOpen; // x0
  const MethodInfo *v154; // x2
  int v155; // w24
  UnityEngine_Object_c **v156; // x21
  ServantStatusListViewItem_o **v157; // x20
  ServantStatusListViewItem_o *v158; // x28
  int32_t id; // w29
  bool IsNew; // w22
  const MethodInfo *v161; // x7
  const MethodInfo *v162; // x3
  const MethodInfo *v163; // x7
  System_String_o *CondTitle; // x27
  const MethodInfo *v165; // x2
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x3
  int64_t v169; // x27
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  __int64 v188; // x8
  _QWORD *v189; // x9
  __int64 v190; // x10
  __int64 v191; // x8
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  System_Collections_Generic_List_object__o *v198; // x8
  struct System_Object_array *items; // x9
  _QWORD *v200; // x10
  __int64 size; // x11
  Il2CppClass **v202; // x0
  struct ServantEntity_o *svtEntity; // x8
  int32_t type; // w20
  const MethodInfo *v205; // x3
  UnityEngine_Object_o *v206; // x20
  UIPanel_o *v207; // x20
  float width; // s8
  float height; // s0
  const MethodInfo *v210; // x1
  __int64 v211; // x2
  __int64 v212; // x3
  struct UIScrollBar_o *scrollBar; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  Il2CppObject *v215; // x22
  EventDelegate_Callback_o *v216; // x21
  __int64 v217; // x1
  __int64 v218; // x2
  __int64 v219; // x3
  struct UIScrollBar_o *v220; // x8
  System_Collections_Generic_List_EventDelegate__o *v221; // x20
  EventDelegate_Callback_o *v222; // x21
  System_Collections_Generic_List_object__o *v223; // [xsp+8h] [xbp-B8h]
  int32_t v224; // [xsp+14h] [xbp-ACh]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o **p_servantProfileList; // [xsp+18h] [xbp-A8h]
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o **p_objectList; // [xsp+20h] [xbp-A0h]
  int v227; // [xsp+28h] [xbp-98h]
  bool isPlayVoice; // [xsp+2Ch] [xbp-94h] BYREF
  System_String_o *voice; // [xsp+30h] [xbp-90h] BYREF
  System_String_o *illust; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o basePositon; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v232; // 0:s0.4,4:s1.4,8:s2.4

  v3 = &UnityEngine_Object_TypeInfo;
  if ( (byte_4B12A80 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, mainInfo, method);
    sub_1BCA7E0(&System_Comparison_ServantCommentEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_ServantCommentEntity___, v14, v15);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__, v20, v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__,
      v22,
      v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__Sort__, v24, v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__,
      v26,
      v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Count__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo, v34, v35);
    sub_1BCA7E0(
      &System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
      v36,
      v37);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v38, v39);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v40, v41);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__, v44, v45);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__38_0__, v46, v47);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v48, v49);
    sub_1BCA7E0(&Method_UIScrollView_OnScrollBar__, v50, v51);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v52, v53);
    byte_4B12A80 = 1;
  }
  basePositon.fields.z = 0.0;
  illust = 0LL;
  *(_QWORD *)&basePositon.fields.x = 0LL;
  voice = 0LL;
  isPlayVoice = 0;
  ServantStatusFlavorTextListViewManager__DestroyList(this, (const MethodInfo *)mainInfo);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( !transform )
      goto LABEL_125;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_125;
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      v66 = *((float *)&Component_object[20].monitor + 1);
      v67 = *(float *)&Component_object[21].klass;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_125;
      v232.fields.x = -v66;
      v232.fields.y = -v67;
      v232.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v232, 0LL);
      transform = this->fields.scrollView;
      if ( !transform )
        goto LABEL_125;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  this->fields.mainInfo = mainInfo;
  p_mainInfo = &this->fields.mainInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)mainInfo, v57, v58, v59, v60, v61, v62);
  v72 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__TypeInfo,
                                                       v69,
                                                       v70,
                                                       v71);
  System_Collections_Generic_List_object____ctor(
    v72,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *)v72;
  p_objectList = &this->fields.objectList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v72, v73, v74, v75, v76, v77, v78);
  v82 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__TypeInfo,
                                                       v79,
                                                       v80,
                                                       v81);
  System_Collections_Generic_List_object____ctor(
    v82,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile___ctor__);
  this->fields.servantProfileList = (struct System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__o *)v82;
  p_servantProfileList = &this->fields.servantProfileList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantProfileList,
    (int64_t)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  *(_QWORD *)&basePositon.fields.x = 0LL;
  basePositon.fields.z = 0.0;
  transform = this->fields.mainInfo;
  if ( !transform )
    goto LABEL_125;
  ServantStatusListViewItem__GetVoiceInfo((ServantStatusListViewItem_o *)transform, &illust, &voice, &isPlayVoice, v89);
  if ( System_String__IsNullOrEmpty(voice, 0LL) )
  {
    voice2Object = (Il2CppObject *)this->fields.voice2Object;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90);
    v93 = UnityEngine_Object__Instantiate_object_(
            voice2Object,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v93, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v93 )
        goto LABEL_125;
      transform = UnityEngine_GameObject__GetComponent_object_(
                    (UnityEngine_GameObject_o *)v93,
                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( !transform )
        goto LABEL_125;
      v95 = (ServantStatusFlavorTextListViewObject_o *)transform;
      ServantStatusFlavorTextListViewObject__SetItem(
        (ServantStatusFlavorTextListViewObject_o *)transform,
        this->fields.mainInfo,
        0,
        1,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v94);
      ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v95, v96);
      transform = this->fields.objectList;
      if ( !transform )
        goto LABEL_125;
      v103 = *((_QWORD *)transform + 2);
      v104 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
      ++*((_DWORD *)transform + 7);
      if ( !v103 )
        goto LABEL_125;
      v105 = *((int *)transform + 6);
      if ( (unsigned int)v105 >= *(_DWORD *)(v103 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          (Il2CppObject *)v95,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
      }
      else
      {
        v106 = v103 + 8 * v105;
        *((_DWORD *)transform + 6) = v105 + 1;
        *(_QWORD *)(v106 + 32) = v95;
        sub_1BCA784((PartyOrganizationUtility_o *)(v106 + 32), (int64_t)v95, v97, v98, v99, v100, v101, v102);
      }
    }
  }
  else
  {
    transform = ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.voiceObject, v91);
  }
  v107 = *p_mainInfo;
  if ( !*p_mainInfo )
    goto LABEL_125;
  if ( v107->fields.commandCodeEntity )
  {
    commandCodeCommentEntity = v107->fields.commandCodeCommentEntity;
    if ( !commandCodeCommentEntity )
      goto LABEL_111;
    profileObject = (Il2CppObject *)this->fields.profileObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
    v110 = UnityEngine_Object__Instantiate_object_(
             profileObject,
             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v110, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_111;
    if ( v110 )
    {
      v111 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v110,
               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      v112 = *p_mainInfo;
      commandCodeId = commandCodeCommentEntity->fields.commandCodeId;
      v114 = (ServantStatusFlavorTextListViewObject_o *)v111;
      transform = CommandCodeCommentEntity__GetComment(commandCodeCommentEntity, 0LL);
      if ( v114 )
      {
        ServantStatusFlavorTextListViewObject__SetItem(
          v114,
          v112,
          commandCodeId,
          1,
          0,
          (System_String_o *)transform,
          0,
          v115);
        ServantStatusFlavorTextListViewManager__SetObjectPosition(this, &basePositon, v114, v116);
        transform = this->fields.objectList;
        if ( transform )
        {
          v123 = *((_QWORD *)transform + 2);
          v124 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
          ++*((_DWORD *)transform + 7);
          if ( v123 )
          {
            v125 = *((int *)transform + 6);
            if ( (unsigned int)v125 >= *(_DWORD *)(v123 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)transform,
                (Il2CppObject *)v114,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
            }
            else
            {
              v126 = v123 + 8 * v125;
              *((_DWORD *)transform + 6) = v125 + 1;
              *(_QWORD *)(v126 + 32) = v114;
              sub_1BCA784((PartyOrganizationUtility_o *)(v126 + 32), (int64_t)v114, v117, v118, v119, v120, v121, v122);
            }
            goto LABEL_111;
          }
        }
      }
    }
    goto LABEL_125;
  }
  v128 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v107->fields.svtCommentEntityList,
                                                        (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ServantCommentEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v127);
  DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  if ( !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo, v56);
    transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  v131 = *(System_Comparison_T__o **)(*((_QWORD *)transform + 23) + 8LL);
  if ( !v131 )
  {
    if ( !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform, v56);
      transform = ServantStatusFlavorTextListViewManager___c_TypeInfo;
    }
    v132 = (Il2CppObject *)**((_QWORD **)transform + 23);
    v131 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantCommentEntity__TypeInfo, v56, v129, v130);
    System_Comparison_object____ctor(
      v131,
      v132,
      Method_ServantStatusFlavorTextListViewManager___c__CreateList_b__38_0__,
      0LL);
    static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Comparison_ServantCommentEntity__o *)v131;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__38_0,
      (int64_t)v131,
      v134,
      v135,
      v136,
      v137,
      v138,
      v139);
  }
  if ( !v128 )
    goto LABEL_125;
  System_Collections_Generic_List_object___Sort_56244000(
    v128,
    v131,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantCommentEntity__Sort__);
  if ( v128->fields._size < 1 )
  {
LABEL_104:
    if ( *p_mainInfo )
    {
      svtEntity = (*p_mainInfo)->fields.svtEntity;
      if ( svtEntity )
      {
        type = svtEntity->fields.type;
        if ( SvtType__IsServant(type, 0LL) || SvtType__IsEnemyCollectionDetail(type, 0LL) )
          ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v205);
        goto LABEL_111;
      }
    }
    goto LABEL_125;
  }
  v140 = 0;
  v141 = 0;
  v142 = 1;
  v223 = v128;
  do
  {
    transform = System_Collections_Generic_List_object___get_Item(
                  v128,
                  v141,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
    v143 = (ServantCommentEntity_o *)transform;
    if ( !v141 || (v140 & 1) != 0 )
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
                      v128,
                      v141 - 1,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !transform )
          goto LABEL_125;
        if ( ServantCommentEntity__IsProfileLabel((ServantCommentEntity_o *)transform, 0LL) )
          goto LABEL_66;
      }
      transform = (void *)ServantCommentEntity__IsDetailLabel(v143, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = System_Collections_Generic_List_object___get_Item(
                      v128,
                      v141 - 1,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantCommentEntity__get_Item__);
        if ( !transform )
          goto LABEL_125;
        transform = (void *)ServantCommentEntity__IsDetailLabel((ServantCommentEntity_o *)transform, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
          goto LABEL_66;
      }
      if ( !*p_mainInfo )
        goto LABEL_125;
      v144 = (*p_mainInfo)->fields.svtEntity;
      if ( !v144 )
        goto LABEL_125;
      v145 = v144->fields.type;
      if ( !SvtType__IsServant(v145, 0LL) && !SvtType__IsEnemyCollectionDetail(v145, 0LL) )
      {
LABEL_66:
        v140 = 0;
      }
      else
      {
        ServantStatusFlavorTextListViewManager__AddObjectList(this, &basePositon, this->fields.paramObject, v146);
        v140 = 1;
      }
    }
    if ( ServantCommentEntity__IsDetailLabel(v143, 0LL) )
    {
      v148 = *v3;
      profile2Object = (Il2CppObject *)this->fields.profileObject;
    }
    else
    {
      v150 = 0LL;
      if ( !ServantCommentEntity__IsProfileLabel(v143, 0LL) )
        goto LABEL_74;
      v148 = *v3;
      profile2Object = (Il2CppObject *)this->fields.profile2Object;
    }
    if ( !v148->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v148, v147);
    v150 = UnityEngine_Object__Instantiate_object_(
             profile2Object,
             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_74:
    if ( !(*v3)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v3, v147);
    transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v150, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v150 )
        goto LABEL_125;
      v151 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v150,
               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewObject___);
      if ( ServantCommentEntity__IsProfileLabel(v143, 0LL) )
        v152 = v142;
      else
        v152 = 0;
      IsOpen = ServantCommentEntity__IsOpen(v143, -1, 1, 0LL);
      v227 = v140;
      if ( IsOpen )
      {
        v224 = v141;
        v155 = v142;
        v156 = v3;
        v157 = p_mainInfo;
        v158 = *p_mainInfo;
        id = v143->fields.id;
        IsNew = ServantCommentEntity__IsNew(v143, 0LL);
        transform = ServantCommentEntity__GetComment(v143, 0LL);
        if ( !v151 )
          goto LABEL_125;
        ServantStatusFlavorTextListViewObject__SetItem(
          (ServantStatusFlavorTextListViewObject_o *)v151,
          v158,
          id,
          1,
          IsNew,
          (System_String_o *)transform,
          v152,
          v161);
        p_mainInfo = v157;
        v128 = v223;
        v142 = v155;
        v141 = v224;
        v3 = v156;
      }
      else
      {
        transform = ServantStatusFlavorTextListViewManager__GetConditionString(
                      (ServantStatusFlavorTextListViewManager_o *)IsOpen,
                      v143,
                      v154);
        if ( !v151 )
          goto LABEL_125;
        ServantStatusFlavorTextListViewObject__SetItem(
          (ServantStatusFlavorTextListViewObject_o *)v151,
          *p_mainInfo,
          v143->fields.id,
          0,
          0,
          (System_String_o *)transform,
          v152,
          v163);
      }
      ServantStatusFlavorTextListViewManager__SetObjectPosition(
        this,
        &basePositon,
        (ServantStatusFlavorTextListViewObject_o *)v151,
        v162);
      CondTitle = ServantCommentEntity__GetCondTitle(v143, 0LL);
      if ( ServantCommentEntity__IsProfileLabel(v143, 0LL) || !System_String__IsNullOrEmpty(CondTitle, 0LL) )
        ServantStatusFlavorTextListViewObject__SetCondTitle(
          (ServantStatusFlavorTextListViewObject_o *)v151,
          CondTitle,
          v165);
      if ( ServantCommentEntity__IsProfileLabel(v143, 0LL) || !ServantCommentEntity__IsConst(v143, 0LL) )
      {
        v169 = sub_1BCAA2C(ServantStatusFlavorTextListViewManager_ServantProfile_TypeInfo, v166, v167, v168);
        System_Object___ctor((Il2CppObject *)v169, 0LL);
        if ( !v169 )
          goto LABEL_125;
        *(_QWORD *)(v169 + 16) = v143;
        sub_1BCA784((PartyOrganizationUtility_o *)(v169 + 16), (int64_t)v143, v170, v171, v172, v173, v174, v175);
        *(_QWORD *)(v169 + 24) = v151;
        sub_1BCA784((PartyOrganizationUtility_o *)(v169 + 24), (int64_t)v151, v176, v177, v178, v179, v180, v181);
        *(_DWORD *)(v169 + 32) = 0;
        transform = *p_servantProfileList;
        if ( !*p_servantProfileList )
          goto LABEL_125;
        v188 = *((_QWORD *)transform + 2);
        v189 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__Add__;
        ++*((_DWORD *)transform + 7);
        if ( !v188 )
          goto LABEL_125;
        v190 = *((int *)transform + 6);
        if ( (unsigned int)v190 >= *(_DWORD *)(v188 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)transform,
            (Il2CppObject *)v169,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
        }
        else
        {
          v191 = v188 + 8 * v190;
          *((_DWORD *)transform + 6) = v190 + 1;
          *(_QWORD *)(v191 + 32) = v169;
          sub_1BCA784((PartyOrganizationUtility_o *)(v191 + 32), v169, v182, v183, v184, v185, v186, v187);
        }
      }
      transform = (void *)ServantCommentEntity__IsProfileLabel(v143, 0LL);
      v198 = (System_Collections_Generic_List_object__o *)*p_objectList;
      if ( !*p_objectList )
        goto LABEL_125;
      items = v198->fields._items;
      v200 = Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Add__;
      ++v198->fields._version;
      v140 = v227;
      if ( !items )
        goto LABEL_125;
      size = v198->fields._size;
      v142 += (unsigned __int8)transform & 1;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v198,
          v151,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
      }
      else
      {
        v202 = &items->obj.klass + size;
        v198->fields._size = size + 1;
        v202[4] = (Il2CppClass *)v151;
        sub_1BCA784((PartyOrganizationUtility_o *)(v202 + 4), (int64_t)v151, v192, v193, v194, v195, v196, v197);
      }
    }
    ++v141;
  }
  while ( v141 < v128->fields._size );
  if ( (v140 & 1) == 0 )
    goto LABEL_104;
LABEL_111:
  v206 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !(*v3)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v3, v56);
  if ( UnityEngine_Object__op_Inequality(v206, 0LL, 0LL) )
  {
    transform = this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      goto LABEL_116;
    }
LABEL_125:
    sub_1BCAA3C(transform, v56);
  }
LABEL_116:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_125;
  transform = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !transform )
    goto LABEL_125;
  v207 = (UIPanel_o *)transform;
  width = UIPanel__get_width((UIPanel_o *)transform, 0LL);
  height = UIPanel__get_height(v207, 0LL);
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
  ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(this, v210);
  scrollBar = this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_125;
  onChange = scrollBar->fields.onChange;
  v215 = (Il2CppObject *)this->fields.scrollView;
  v216 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v56, v211, v212);
  EventDelegate_Callback___ctor(v216, v215, Method_UIScrollView_OnScrollBar__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v217);
  transform = EventDelegate__Add(onChange, v216, 0LL);
  v220 = this->fields.scrollBar;
  if ( !v220 )
    goto LABEL_125;
  v221 = v220->fields.onChange;
  v222 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v56, v218, v219);
  EventDelegate_Callback___ctor(
    v222,
    (Il2CppObject *)this,
    Method_ServantStatusFlavorTextListViewManager_OnChangeScrollBarValue__,
    0LL);
  EventDelegate__Add(v221, v222, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewManager__DestroyList(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *v23; // x8
  int64_t size; // x2
  int v25; // w9
  __int64 v26; // x1
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B12A88 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__Clear__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__,
      v10,
      v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B12A88 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
  {
    if ( !v29.fields._current )
      sub_1BCAA3C(0LL, v15);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v29.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  v23 = this->fields.objectList;
  if ( !v23 )
    goto LABEL_20;
  size = (unsigned int)v23->fields._size;
  v25 = v23->fields._version + 1;
  v23->fields._size = 0;
  v23->fields._version = v25;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v23->fields._items, 0, size, 0LL);
  this->fields.mainInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, 0LL, size, v18, v19, v20, v21, v22);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_1BCAA3C(objectList, method);
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__DoAutoScroll(
        ServantStatusFlavorTextListViewManager_o *this,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusFlavorTextListViewManager___c_c *v12; // x0
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x21
  System_Predicate_object__o *_9__40_0; // x22
  Il2CppObject *v15; // x23
  struct ServantStatusFlavorTextListViewManager___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int32_t Index; // w0
  const MethodInfo *v24; // x3
  System_Collections_IEnumerator_o *v25; // x1

  if ( (byte_4B12A82 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__,
      onFinished,
      method);
    sub_1BCA7E0(&System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__40_0__, v8, v9);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v10, v11);
    byte_4B12A82 = 1;
  }
  v12 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !ServantStatusFlavorTextListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager___c_TypeInfo, onFinished);
    v12 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
  }
  _9__40_0 = (System_Predicate_object__o *)v12->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, onFinished);
      v12 = ServantStatusFlavorTextListViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__40_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                               System_Predicate_ServantStatusFlavorTextListViewObject__TypeInfo,
                                               onFinished,
                                               method,
                                               v3);
    System_Predicate_object____ctor(
      _9__40_0,
      v15,
      Method_ServantStatusFlavorTextListViewManager___c__DoAutoScroll_b__40_0__,
      0LL);
    static_fields = ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Predicate_ServantStatusFlavorTextListViewObject__o *)_9__40_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__40_0,
      (int64_t)_9__40_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !objectList )
    sub_1BCAA3C(v12, onFinished);
  Index = System_Collections_Generic_List_object___FindIndex(
            (System_Collections_Generic_List_object__o *)objectList,
            (System_Predicate_T__o *)_9__40_0,
            (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__FindIndex__);
  if ( (Index & 0x80000000) != 0 )
  {
    ActionExtensions__Call(onFinished, 0LL);
  }
  else
  {
    v25 = ServantStatusFlavorTextListViewManager__AutoScroll_IE(this, Index, onFinished, v24);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v25, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  ServantCommentAddMaster_o *Master_object; // x0
  __int64 v19; // x1
  ServantCommentAddMaster_o *v20; // x20
  System_String_o *v21; // x22
  System_String_o *Conditiontext; // x0
  bool IsOpen; // w21
  bool IsNullOrEmpty; // w0
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *v28; // x21
  LocalizationManager_c *v29; // x0
  bool v30; // w0
  __int64 v31; // x1
  bool v32; // w22
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  int32_t svtId; // w3
  int32_t id; // w4
  int32_t priority; // w5
  System_String_o *v39; // x19
  System_String_o *ConditionString; // x0

  if ( (byte_4B12A81 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCommentAddMaster___, svtCommentEntity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_12027/*"SERVANT_STATUS_PROFILE_CONDITION"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_16369/*"_FLAVOR2"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16368/*"_FLAVOR"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3821/*"COND_TYPE_AND_FLAVOR2"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B12A81 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtCommentEntity);
  Master_object = (ServantCommentAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  if ( !svtCommentEntity )
LABEL_31:
    sub_1BCAA3C(Master_object, v19);
  v20 = Master_object;
  Master_object = (ServantCommentAddMaster_o *)ServantCommentEntity__IsOpen(svtCommentEntity, -1, 0, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !v20 )
      goto LABEL_31;
    IsOpen = ServantCommentAddMaster__IsOpen(
               v20,
               svtCommentEntity->fields.svtId,
               svtCommentEntity->fields.id,
               svtCommentEntity->fields.priority,
               -1,
               0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(svtCommentEntity->fields.condMessage, 0LL);
    if ( IsOpen || !IsNullOrEmpty )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12027/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
      Conditiontext = ServantCommentEntity__GetConditiontext(
                        svtCommentEntity,
                        (System_String_o *)StringLiteral_16368/*"_FLAVOR"*/,
                        0LL);
      goto LABEL_26;
    }
    v28 = ServantCommentEntity__GetConditiontext(svtCommentEntity, (System_String_o *)StringLiteral_16369/*"_FLAVOR2"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
    if ( !byte_4B1194D )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, v26, v27);
      byte_4B1194D = 1;
    }
    v29 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
      v29 = LocalizationManager_TypeInfo;
    }
    v30 = System_String__op_Equality(v28, v29->static_fields->unknownNameText, 0LL);
    v32 = v30;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v30 )
      {
LABEL_22:
        v33 = (System_String_o *)StringLiteral_12027/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
LABEL_29:
        v21 = LocalizationManager__Get(v33, 0LL);
        return System_String__Format(v21, (Il2CppObject *)v28, 0LL);
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
      if ( v32 )
        goto LABEL_22;
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3821/*"COND_TYPE_AND_FLAVOR2"*/, 0LL);
    v35 = System_String__Concat_62401220(v28, v34, 0LL);
    svtId = svtCommentEntity->fields.svtId;
    id = svtCommentEntity->fields.id;
    priority = svtCommentEntity->fields.priority;
    v39 = v35;
    ConditionString = ServantCommentAddMaster__GetConditionString(
                        v20,
                        (System_String_o *)StringLiteral_16368/*"_FLAVOR"*/,
                        (System_String_o *)StringLiteral_16369/*"_FLAVOR2"*/,
                        svtId,
                        id,
                        priority,
                        -1,
                        0LL);
    v28 = System_String__Concat_62401220(v39, ConditionString, 0LL);
    v33 = (System_String_o *)StringLiteral_12027/*"SERVANT_STATUS_PROFILE_CONDITION"*/;
    goto LABEL_29;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  Master_object = (ServantCommentAddMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12027/*"SERVANT_STATUS_PROFILE_CONDITION"*/, 0LL);
  if ( !v20 )
    goto LABEL_31;
  v21 = (System_String_o *)Master_object;
  Conditiontext = ServantCommentAddMaster__GetConditionString(
                    v20,
                    (System_String_o *)StringLiteral_16368/*"_FLAVOR"*/,
                    (System_String_o *)StringLiteral_16369/*"_FLAVOR2"*/,
                    svtCommentEntity->fields.svtId,
                    svtCommentEntity->fields.id,
                    svtCommentEntity->fields.priority,
                    -1,
                    0LL);
LABEL_26:
  v28 = Conditiontext;
  return System_String__Format(v21, (Il2CppObject *)v28, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__OnChangeScrollBarValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v13; // x1
  UnityEngine_Component_o *scrollView; // x0
  float v15; // s1
  float v16; // s8
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  float v20; // s0
  _QWORD *monitor; // x8
  __int64 v22; // x0
  struct System_Action_ServantCommentEntity__o *OnFinishedReadEvent; // x8
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B12A83 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v8,
      v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B12A83 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !this->fields._IsIgnoreScroll_k__BackingField )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !scrollView
        || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0LL)) == 0LL
        || (*(UnityEngine_Vector3_o *)(&v15 - 1) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)scrollView,
                                                     0LL),
            (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
      {
        sub_1BCAA3C(scrollView, v13);
      }
      v16 = v15 - this->fields.initialScrollPosition.fields.y;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        (System_Collections_Generic_List_object__o *)scrollView,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
      v25 = v24;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
        if ( !v17 )
          break;
        current = v25.fields._current;
        if ( !v25.fields._current )
          sub_1BCAA3C(v17, v18);
        v20 = *(float *)&v25.fields._current[2].klass;
        if ( v20 <= v16 && v16 <= (float)(v20 + this->fields.scrollViewSize.fields.y) )
        {
          monitor = v25.fields._current[1].monitor;
          if ( !monitor )
            sub_1BCAA3C(v17, v18);
          v22 = monitor[17];
          if ( !v22 )
            sub_1BCAA3C(0LL, v18);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 456LL))(v22, *(_QWORD *)(*(_QWORD *)v22 + 464LL));
          OnFinishedReadEvent = this->fields.OnFinishedReadEvent;
          if ( OnFinishedReadEvent )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppClass *, _QWORD))OnFinishedReadEvent->fields.m_target)(
              OnFinishedReadEvent->fields.original_method_info,
              current[1].klass,
              *(_QWORD *)&OnFinishedReadEvent->fields.extra_arg);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
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
    sub_1BCAA3C(this, 0LL);
  if ( ServantStatusFlavorTextListViewObject__GetKind(obj, (const MethodInfo *)obj) == 1 )
  {
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    v12 = callbackFunc;
    if ( callbackFunc )
    {
      p_callbackFunc->klass = 0LL;
      sub_1BCA784(p_callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B12A8C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12A8C = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
          v15,
          1LL,
          v15->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  Il2CppObject *current; // x21
  System_Action_o *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B12A8A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B12A8A = 1;
  }
  memset(&v31, 0, sizeof(v31));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      objectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v31.fields._current;
      v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v28, v29);
      ServantStatusFlavorTextListViewObject__Init_33867108(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v27,
        delay,
        v30);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__RequestListObject_33866088(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t size; // w8
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *current; // x21
  System_Action_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B12A8B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B12A8B = 1;
  }
  memset(&v29, 0, sizeof(v29));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, *(_QWORD *)&mode);
  size = objectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      objectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__) )
    {
      current = v29.fields._current;
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_ServantStatusFlavorTextListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v26, v27);
      ServantStatusFlavorTextListViewObject__Init_33867192(
        (ServantStatusFlavorTextListViewObject_o *)current,
        mode,
        v25,
        v28);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_33865896(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__SetMode_33865896(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1

  v4 = this;
  if ( (byte_4B12A89 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1BCA7E0(
                                                         &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__,
                                                         *(_QWORD *)&mode,
                                                         method);
    byte_4B12A89 = 1;
  }
  objectList = v4->fields.objectList;
  v4->fields.initMode = mode;
  if ( !objectList )
    sub_1BCAA3C(this, *(_QWORD *)&mode);
  v4->fields.callbackCount = objectList->fields._size;
  ServantStatusFlavorTextListViewManager__set_IsInput(v4, mode == 1, method);
  if ( mode == 1 )
  {
    v7 = 3;
LABEL_8:
    ServantStatusFlavorTextListViewManager__RequestListObject_33866088(v4, v7, v6);
    return;
  }
  if ( mode == 2 )
  {
    v7 = 2;
    goto LABEL_8;
  }
}


void __fastcall ServantStatusFlavorTextListViewManager__SetMode_33866040(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusFlavorTextListViewManager__SetMode_33865896(this, mode, v10);
}


void __fastcall ServantStatusFlavorTextListViewManager__SetObjectItem(
        ServantStatusFlavorTextListViewManager_o *this,
        ServantStatusFlavorTextListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( !obj )
    sub_1BCAA3C(this, 0LL);
  if ( this->fields.initMode == 1 )
    v3 = 3;
  else
    v3 = 2;
  ServantStatusFlavorTextListViewObject__Init_33865776(obj, v3, method);
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
  __int64 v11; // x2
  ServantStatusFlavorTextListViewManager_o *v12; // x22
  __int64 v13; // x2
  ServantStatusFlavorTextListViewManager_o *v14; // x22
  ServantStatusFlavorTextListViewManager_o *v15; // x22
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  ServantStatusFlavorTextListViewManager_c *v19; // x0
  float y; // s8

  v6 = this;
  if ( (byte_4B12A86 & 1) == 0 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1BCA7E0(
                                                         &ServantStatusFlavorTextListViewManager_TypeInfo,
                                                         basePositon,
                                                         obj);
    byte_4B12A86 = 1;
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
  v12 = this;
  if ( !byte_4B109C7 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, basePositon, v11);
    byte_4B109C7 = 1;
  }
  if ( !v12 )
    goto LABEL_21;
  UnityEngine_Transform__set_localRotation(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)obj,
                                                       0LL);
  v14 = this;
  if ( !byte_4B109C6 )
  {
    this = (ServantStatusFlavorTextListViewManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, basePositon, v13);
    byte_4B109C6 = 1;
  }
  if ( !v14
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v14,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)obj,
                                                             0LL),
        !v6->fields.listParent)
    || (v15 = this,
        this = (ServantStatusFlavorTextListViewManager_o *)UnityEngine_GameObject__get_layer(v6->fields.listParent, 0LL),
        !v15) )
  {
LABEL_21:
    sub_1BCAA3C(this, basePositon);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v15, (int32_t)this, 0LL);
  ServantStatusFlavorTextListViewObject__SetBaseTransform(obj, v16);
  ServantStatusFlavorTextListViewObject__SetManager(obj, v6, v17);
  v19 = ServantStatusFlavorTextListViewManager_TypeInfo;
  y = basePositon->fields.y;
  if ( !ServantStatusFlavorTextListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewManager_TypeInfo, v18);
    v19 = ServantStatusFlavorTextListViewManager_TypeInfo;
  }
  basePositon->fields.y = y - (float)(v19->static_fields->LIST_BLANK + v9);
}


void __fastcall ServantStatusFlavorTextListViewManager__SetServantProfileReadEndValue(
        ServantStatusFlavorTextListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Component_o *scrollView; // x0
  float height; // s0
  float v14; // s8
  UnityEngine_Component_o *v15; // x8
  float v16; // s9
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *current; // x21
  ServantStatusFlavorTextListViewObject_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o ProfileLastLinePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12A84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__,
      v10,
      v11);
    byte_4B12A84 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL
    || (height = UIPanel__get_height((UIPanel_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0LL)
    || (v14 = height,
        (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   scrollView,
                                                   (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL)
    || (v15 = scrollView, (scrollView = (UnityEngine_Component_o *)this->fields.servantProfileList) == 0LL) )
  {
    sub_1BCAA3C(scrollView, method);
  }
  v16 = *((float *)&v15[13].klass + 1);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)scrollView,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewManager_ServantProfile__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__MoveNext__);
    if ( !v17 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1BCAA3C(v17, v18);
    monitor = (ServantStatusFlavorTextListViewObject_o *)v21.fields._current[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v18);
    ProfileLastLinePosition = ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(monitor, v18);
    *(float *)&current[2].klass = fmaxf(vabds_f32(ProfileLastLinePosition.fields.y, v16) - v14, 0.0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewManager_ServantProfile__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewManager__UpdateCvName(
        ServantStatusFlavorTextListViewManager_o *this,
        System_String_o *cvName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *objectList; // x0
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B12A8D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      cvName,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v11, v12);
    byte_4B12A8D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, cvName);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      objectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
      if ( !v14 )
        break;
      current = v18.fields._current;
      if ( !v18.fields._current )
        sub_1BCAA3C(v14, v15);
      if ( ServantStatusFlavorTextListViewObject__GetKind(
             (ServantStatusFlavorTextListViewObject_o *)v18.fields._current,
             v15) == 3 )
      {
        ServantStatusFlavorTextListViewObject__SetCvName(
          (ServantStatusFlavorTextListViewObject_o *)current,
          cvName,
          v17);
        break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewManager__UpdateParameter(
        ServantStatusFlavorTextListViewManager_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__o *objectList; // x0
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *current; // x19
  __int64 v14; // x1
  void *monitor; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12A8E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__,
      *(_QWORD *)&imageLimitCount,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__, v8, v9);
    byte_4B12A8E = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, *(_QWORD *)&imageLimitCount);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__MoveNext__);
    if ( !v11 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1BCAA3C(v11, v12);
    if ( ServantStatusFlavorTextListViewObject__GetKind(
           (ServantStatusFlavorTextListViewObject_o *)v16.fields._current,
           v12) == 5 )
    {
      monitor = current[8].monitor;
      if ( !monitor )
        sub_1BCAA3C(0LL, v14);
      (*(void (__fastcall **)(void *, void *, _QWORD))(*(_QWORD *)monitor + 440LL))(
        monitor,
        current[2].monitor,
        *(_QWORD *)(*(_QWORD *)monitor + 448LL));
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusFlavorTextListViewObject__Dispose__);
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

  if ( (byte_4B12A7C & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B12A7C = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B12A7E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B12A7E = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B12A7D & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusFlavorTextListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B12A7D = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B12A7F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B12A7F = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
  if ( (byte_4B12A7B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, value, method);
    byte_4B12A7B = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1BCAA3C(v6, v7);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A095B8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09570;
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
  if ( (byte_4B12A91 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B12A91 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ServantStatusFlavorTextListViewManager_CallbackFunc__EndInvoke(
        ServantStatusFlavorTextListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t _1__state; // w8
  struct ServantStatusFlavorTextListViewManager_o *_4__this; // x22
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v10; // x20
  ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *v11; // x8
  float v12; // s8
  float v13; // s9
  int v14; // w21
  float v15; // s8
  float v16; // s0
  float timer_5__4; // s8
  float duration_5__3; // s0
  float deltaTime; // s0
  float v20; // s1
  float v21; // s0
  float v22; // s2
  bool v23; // nf
  float v24; // s0
  float moveValue_5__2; // s8
  float v26; // s0
  float v27; // s0
  float v28; // s1
  bool result; // w0
  float v30; // s0
  float v31; // s0
  float v32; // s8
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UnityEngine_Vector3_o TopPosition; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B12A93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Count__, v4, v5);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)sub_1BCA7E0(
                                                                              &Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__,
                                                                              v6,
                                                                              v7);
    byte_4B12A93 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    duration_5__3 = v3->fields._duration_5__3;
    timer_5__4 = v3->fields._timer_5__4;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_35;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_35;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              v3->fields.targetIndex,
                                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !_4__this->fields.scrollView )
      goto LABEL_35;
    v10 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_35;
    v11 = this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.objectList;
    if ( !this )
      goto LABEL_35;
    v12 = *((float *)&v11[4].fields.__2__current + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)System_Collections_Generic_List_object___get_Item(
                                                                              (System_Collections_Generic_List_object__o *)this,
                                                                              LODWORD(this->fields.__2__current) - 1,
                                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantStatusFlavorTextListViewObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    v13 = *((float *)&this[1].fields.__1__state + 1);
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)ServantStatusFlavorTextListViewObject__GetSize(
                                                                              (ServantStatusFlavorTextListViewObject_o *)this,
                                                                              method);
    if ( !_4__this->fields.scrollView )
      goto LABEL_35;
    v14 = (int)this;
    this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)_4__this->fields.scrollView,
                                                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !this )
      goto LABEL_35;
    v15 = vabds_f32(v13 + (float)((float)v14 * -0.5), v12) - UIPanel__get_height((UIPanel_o *)this, 0LL);
    if ( v15 <= 0.0 )
    {
      v3->fields._moveValue_5__2 = 0.0;
      goto LABEL_30;
    }
    if ( !v10 )
      goto LABEL_35;
    TopPosition = ServantStatusFlavorTextListViewObject__get_TopPosition(
                    (ServantStatusFlavorTextListViewObject_o *)v10,
                    method);
    v16 = fabsf(TopPosition.fields.y);
    if ( v16 >= v15 )
      v16 = v15;
    v3->fields._moveValue_5__2 = v16;
    if ( v16 <= 0.0 )
      goto LABEL_30;
    timer_5__4 = 0.0;
    duration_5__3 = fminf(fmaxf((float)(v16 + -2000.0) / 2000.0, 0.0) + 1.0, 2.0);
    v3->fields._duration_5__3 = duration_5__3;
    *(_QWORD *)&v3->fields._timer_5__4 = 0LL;
  }
  if ( timer_5__4 >= duration_5__3 )
  {
LABEL_30:
    ActionExtensions__Call(v3->fields.onFinished, 0LL);
    return 0;
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v20 = v3->fields._duration_5__3;
  v21 = timer_5__4 + deltaTime;
  if ( v21 <= v20 )
    v22 = v21;
  else
    v22 = v3->fields._duration_5__3;
  v23 = v21 < 0.0;
  v24 = 0.0;
  if ( !v23 )
    v24 = v22;
  v3->fields._timer_5__4 = v24;
  if ( !_4__this )
    goto LABEL_35;
  moveValue_5__2 = v3->fields._moveValue_5__2;
  v26 = v24 / (float)(v20 * 0.5);
  if ( v26 >= 1.0 )
  {
    v30 = exp2f((float)(v26 + -1.0) * -10.0);
    v28 = moveValue_5__2 * 0.5;
    v27 = 2.0 - v30;
  }
  else
  {
    v27 = powf(v26, 5.0);
    v28 = moveValue_5__2 * 0.5;
  }
  this = (ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *)_4__this->fields.scrollView;
  v31 = v28 * v27;
  if ( !this )
LABEL_35:
    sub_1BCAA3C(this, method);
  v32 = v31 + 0.0;
  ((void (__fastcall *)(ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_o *, void *, float, float, float))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data,
    0.0,
    (float)(v31 + 0.0) - v3->fields._prevValue_5__5,
    0.0);
  v3->fields._prevValue_5__5 = v32;
  v3->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v34, v35, v36, v37, v38, v39);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_ServantStatusFlavorTextListViewManager__AutoScroll_IE_d__43_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12A92 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusFlavorTextListViewManager___c_TypeInfo, v1, v2);
    byte_4B12A92 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantStatusFlavorTextListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantStatusFlavorTextListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}


bool __fastcall ServantStatusFlavorTextListViewManager___c___DoAutoScroll_b__40_0(
        ServantStatusFlavorTextListViewManager___c_o *this,
        ServantStatusFlavorTextListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.isNew;
}