void __fastcall BattlePerformanceCommandCard___cctor(const MethodInfo *method)
{
  if ( (byte_4BDE3AA & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceCommandCard_TypeInfo);
    byte_4BDE3AA = 1;
  }
  BattlePerformanceCommandCard_TypeInfo->static_fields->cardsize_w = 200;
}


void __fastcall BattlePerformanceCommandCard___ctor(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  struct System_Single_array *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x0
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  unsigned int v26; // w8
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  unsigned int v39; // w8
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int v46; // w8
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  unsigned int v53; // w8
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int v60; // w8
  struct BattleLogic_TutorialStringData_array *v61; // x20
  BattleLogic_TutorialStringData_o *v62; // x0
  int64_t v63; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  BattleLogic_TutorialStringData_o *v70; // x0
  int64_t v71; // x21
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  BattleLogic_TutorialStringData_o *v78; // x0
  int64_t v79; // x21
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  BattleLogic_TutorialStringData_o *v86; // x0
  int64_t v87; // x21
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  BattleLogic_TutorialStringData_o *v94; // x0
  int64_t v95; // x21
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  BattleLogic_TutorialStringData_o *v102; // x0
  int64_t v103; // x21
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  BattleLogic_TutorialStringData_o *v110; // x0
  int64_t v111; // x21
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  __int64 v124; // x0
  System_RuntimeFieldHandle_o v125; // 0:w1.4
  UnityEngine_Vector2_o v126; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v127; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v128; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v129; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v130; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v131; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v132; // 0:s1.4,4:s2.4

  if ( (byte_4BDE3A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Rect___TypeInfo);
    sub_1C21E38(&float___TypeInfo);
    sub_1C21E38(&BattleLogic_TutorialStringData___TypeInfo);
    sub_1C21E38(&BattleLogic_TutorialStringData_TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096);
    sub_1C21E38(&UnityEngine_Vector2___TypeInfo);
    byte_4BDE3A9 = 1;
  }
  v3 = (System_Array_o *)sub_1C21EE0(float___TypeInfo, 5LL);
  v125.fields.value = Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096;
  v4 = (struct System_Single_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v3, v125, 0LL);
  this->fields.COMMAND_STAMP_POS_X = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.COMMAND_STAMP_POS_X, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  this->fields.COMMAND_STAMP_POS_Y = -121.0;
  this->fields.firstBonusAnimationMaxTime = 3;
  *(_QWORD *)&this->fields.CARD_ROOT_BASE_X = 0xC353000043CD0000LL;
  this->fields.npGaugeEaseType = 15;
  *(_OWORD *)&this->fields.npGaugeEffectMoveDelayTime = xmmword_BFEAA0;
  *(int32x2_t *)&this->fields.miniScale.fields.x = vdup_n_s32(0x3E99999Au);
  this->fields.miniScale.fields.z = 1.0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.aubelist = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.aubelist, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = sub_1C21EE0(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v18 )
    goto LABEL_47;
  v26 = *(_DWORD *)(v18 + 24);
  v19 = v18;
  if ( !v26 )
    goto LABEL_46;
  *(_QWORD *)(v18 + 32) = 0LL;
  if ( v26 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v18 + 40) = 3276275712LL;
  if ( v26 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v18 + 48) = 3284664320LL;
  this->fields.TutorialArrow01 = (struct UnityEngine_Vector2_array *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.TutorialArrow01, v18, v20, v21, v22, v23, v24, v25);
  v18 = sub_1C21EE0(UnityEngine_Rect___TypeInfo, 1LL);
  if ( !v18 )
    goto LABEL_47;
  v19 = v18;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_46;
  *(_OWORD *)(v18 + 32) = xmmword_BFE2D0;
  this->fields.TutorialSquare01 = (struct UnityEngine_Rect_array *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.TutorialSquare01, v18, v27, v28, v29, v30, v31, v32);
  v18 = sub_1C21EE0(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v18 )
    goto LABEL_47;
  v39 = *(_DWORD *)(v18 + 24);
  v19 = v18;
  if ( !v39 )
    goto LABEL_46;
  *(_QWORD *)(v18 + 32) = 0x43160000C3270000LL;
  if ( v39 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v18 + 40) = 0xC2A00000C3480000LL;
  if ( v39 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v18 + 48) = 0xC2A00000C3C80000LL;
  this->fields.TutorialArrow05 = (struct UnityEngine_Vector2_array *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.TutorialArrow05, v18, v33, v34, v35, v36, v37, v38);
  v18 = sub_1C21EE0(UnityEngine_Rect___TypeInfo, 2LL);
  if ( !v18 )
    goto LABEL_47;
  v46 = *(_DWORD *)(v18 + 24);
  v19 = v18;
  if ( !v46 )
    goto LABEL_46;
  *(_OWORD *)(v18 + 32) = xmmword_BFE020;
  if ( v46 == 1 )
    goto LABEL_46;
  *(_OWORD *)(v18 + 48) = xmmword_BFEC50;
  this->fields.TutorialSquare05 = (struct UnityEngine_Rect_array *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.TutorialSquare05, v18, v40, v41, v42, v43, v44, v45);
  this->fields.TutorialArrow22 = (struct UnityEngine_Vector2_o)0x4348000043C58000LL;
  this->fields.TutorialSquare22 = (struct UnityEngine_Rect_o)xmmword_BFE1A0;
  v18 = sub_1C21EE0(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v18 )
    goto LABEL_47;
  v53 = *(_DWORD *)(v18 + 24);
  v19 = v18;
  if ( !v53 )
    goto LABEL_46;
  *(_QWORD *)(v18 + 32) = 0xC248000000000000LL;
  if ( v53 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v18 + 40) = 0xC2480000C3480000LL;
  if ( v53 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v18 + 48) = 0xC2480000C3C80000LL;
  this->fields.TutorialArrow31 = (struct UnityEngine_Vector2_array *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.TutorialArrow31, v18, v47, v48, v49, v50, v51, v52);
  v18 = sub_1C21EE0(UnityEngine_Rect___TypeInfo, 2LL);
  if ( !v18 )
    goto LABEL_47;
  v60 = *(_DWORD *)(v18 + 24);
  v19 = v18;
  if ( !v60 )
    goto LABEL_46;
  *(_OWORD *)(v18 + 32) = xmmword_BFE2D0;
  if ( v60 == 1 )
    goto LABEL_46;
  *(_OWORD *)(v18 + 48) = xmmword_BFDF50;
  this->fields.TutorialSquare32 = (struct UnityEngine_Rect_array *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.TutorialSquare32, v18, v54, v55, v56, v57, v58, v59);
  v61 = (struct BattleLogic_TutorialStringData_array *)sub_1C21EE0(BattleLogic_TutorialStringData___TypeInfo, 7LL);
  v62 = (BattleLogic_TutorialStringData_o *)sub_1C22084(BattleLogic_TutorialStringData_TypeInfo);
  v126.fields.x = 0.0;
  v126.fields.y = 160.0;
  v63 = (int64_t)v62;
  BattleLogic_TutorialStringData___ctor(v62, 0.0, v126, 26, 0LL);
  if ( !v61 )
LABEL_47:
    sub_1C22094(v18, v19);
  if ( v63 )
  {
    v18 = sub_1C21F74(v63, v61->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_48;
  }
  if ( !v61->max_length )
    goto LABEL_46;
  v61->m_Items[0] = (BattleLogic_TutorialStringData_o *)v63;
  sub_1C21DDC((PartyOrganizationUtility_o *)v61->m_Items, v63, v64, v65, v66, v67, v68, v69);
  v70 = (BattleLogic_TutorialStringData_o *)sub_1C22084(BattleLogic_TutorialStringData_TypeInfo);
  v127.fields.x = 0.0;
  v127.fields.y = 160.0;
  v71 = (int64_t)v70;
  BattleLogic_TutorialStringData___ctor(v70, 0.0, v127, 26, 0LL);
  if ( v71 )
  {
    v18 = sub_1C21F74(v71, v61->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_48;
  }
  if ( v61->max_length <= 1 )
    goto LABEL_46;
  v61->m_Items[1] = (BattleLogic_TutorialStringData_o *)v71;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v61->m_Items[1], v71, v72, v73, v74, v75, v76, v77);
  v78 = (BattleLogic_TutorialStringData_o *)sub_1C22084(BattleLogic_TutorialStringData_TypeInfo);
  v128.fields.x = 0.0;
  v128.fields.y = 160.0;
  v79 = (int64_t)v78;
  BattleLogic_TutorialStringData___ctor(v78, 0.0, v128, 26, 0LL);
  if ( v79 )
  {
    v18 = sub_1C21F74(v79, v61->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_48;
  }
  if ( v61->max_length <= 2 )
    goto LABEL_46;
  v61->m_Items[2] = (BattleLogic_TutorialStringData_o *)v79;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v61->m_Items[2], v79, v80, v81, v82, v83, v84, v85);
  v86 = (BattleLogic_TutorialStringData_o *)sub_1C22084(BattleLogic_TutorialStringData_TypeInfo);
  v129.fields.x = 200.0;
  v129.fields.y = 60.0;
  v87 = (int64_t)v86;
  BattleLogic_TutorialStringData___ctor(v86, 0.0, v129, 28, 0LL);
  if ( v87 )
  {
    v18 = sub_1C21F74(v87, v61->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_48;
  }
  if ( v61->max_length <= 3 )
    goto LABEL_46;
  v61->m_Items[3] = (BattleLogic_TutorialStringData_o *)v87;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v61->m_Items[3], v87, v88, v89, v90, v91, v92, v93);
  v94 = (BattleLogic_TutorialStringData_o *)sub_1C22084(BattleLogic_TutorialStringData_TypeInfo);
  v130.fields.y = -30.0;
  v130.fields.x = 310.0;
  v95 = (int64_t)v94;
  BattleLogic_TutorialStringData___ctor(v94, 180.0, v130, 26, 0LL);
  if ( v95 )
  {
    v18 = sub_1C21F74(v95, v61->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_48;
  }
  if ( v61->max_length <= 4 )
    goto LABEL_46;
  v61->m_Items[4] = (BattleLogic_TutorialStringData_o *)v95;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v61->m_Items[4], v95, v96, v97, v98, v99, v100, v101);
  v102 = (BattleLogic_TutorialStringData_o *)sub_1C22084(BattleLogic_TutorialStringData_TypeInfo);
  v131.fields.x = 0.0;
  v131.fields.y = 140.0;
  v103 = (int64_t)v102;
  BattleLogic_TutorialStringData___ctor(v102, 0.0, v131, 22, 0LL);
  if ( v103 )
  {
    v18 = sub_1C21F74(v103, v61->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_48;
  }
  if ( v61->max_length <= 5 )
    goto LABEL_46;
  v61->m_Items[5] = (BattleLogic_TutorialStringData_o *)v103;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v61->m_Items[5], v103, v104, v105, v106, v107, v108, v109);
  v110 = (BattleLogic_TutorialStringData_o *)sub_1C22084(BattleLogic_TutorialStringData_TypeInfo);
  v132.fields.x = 0.0;
  v132.fields.y = 130.0;
  v111 = (int64_t)v110;
  BattleLogic_TutorialStringData___ctor(v110, 0.0, v132, 26, 0LL);
  if ( v111 )
  {
    v18 = sub_1C21F74(v111, v61->obj.klass->_1.element_class);
    if ( !v18 )
    {
LABEL_48:
      v124 = sub_1C220B8(v18);
      sub_1C21F60(v124, 0LL);
    }
  }
  if ( v61->max_length <= 6 )
LABEL_46:
    sub_1C2209C(v18, v19);
  v61->m_Items[6] = (BattleLogic_TutorialStringData_o *)v111;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v61->m_Items[6], v111, v112, v113, v114, v115, v116, v117);
  this->fields.TSD = v61;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.TSD, (int64_t)v61, v118, v119, v120, v121, v122, v123);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__ActivateFirstBonusObject(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Behaviour_o *v5; // x0
  UnityEngine_Object_o *firstBonusAnimation; // x20
  UnityEngine_GameObject_o *firstBonusObject; // x20
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Transform_o *v9; // x20
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s10
  float v15; // s9
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  System_Collections_IEnumerator_o *BonusAnimationPlay; // x1
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDE367 & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE367 = 1;
  }
  firstBonusSimpleAnimation = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(firstBonusSimpleAnimation, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v5 )
      goto LABEL_36;
    goto LABEL_12;
  }
  firstBonusAnimation = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(firstBonusAnimation, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v5 )
      goto LABEL_36;
LABEL_12:
    UnityEngine_Behaviour__set_enabled(v5, 0, 0LL);
  }
  firstBonusObject = this->fields.firstBonusObject;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetParent(firstBonusObject, transform, 0LL);
  v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v5 )
    goto LABEL_36;
  v5 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL);
  v9 = (UnityEngine_Transform_o *)v5;
  if ( !byte_4BD6BB6 )
  {
    v5 = (UnityEngine_Behaviour_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v9 )
    goto LABEL_36;
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
    if ( v5 )
    {
      v5 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL);
      if ( v5 )
      {
        *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v5, 0LL);
        v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
        if ( v5 )
        {
          v13 = v10;
          v14 = v11;
          v15 = v12;
          v5 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL);
          if ( v5 )
          {
            v19.fields.y = v14 + 17.0;
            v19.fields.x = v13;
            v19.fields.z = v15;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v5, v19, 0LL);
            goto LABEL_25;
          }
        }
      }
    }
LABEL_36:
    sub_1C22094(v5, v4);
  }
LABEL_25:
  v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v5 )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0LL);
  v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v5 )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 1, 0LL);
  v16 = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v5 )
      goto LABEL_36;
LABEL_31:
    UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
    goto LABEL_37;
  }
  v17 = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v5 )
      goto LABEL_36;
    goto LABEL_31;
  }
LABEL_37:
  BonusAnimationPlay = BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, BonusAnimationPlay, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__AddExtraCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v4; // x8
  BattleCommandData_o *data; // x21
  BattleCommandData_o *v6; // x20
  struct BattleCommandComponent_array *v7; // x8
  BattlePerformanceCommandCard_o *v8; // x21
  BattlePerformanceCommandCard_o *v9; // x22
  struct BattleCommandComponent_array *v10; // x8
  BattlePerformanceCommandCard_o *v11; // x22
  int v12; // s0
  struct BattleCommandComponent_array *v15; // x8
  struct BattleCommandComponent_array *v16; // x8
  struct BattleCommandComponent_array *v17; // x8
  struct BattleCommandComponent_array *v18; // x8
  struct BattleCommandComponent_array *v19; // x8
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4BDE377 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceCommandCard_AddExtraCard__);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&StringLiteral_19154/*"ef_excard02"*/);
    byte_4BDE377 = 1;
  }
  selectedcomponents = v2->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_44;
  if ( !selectedcomponents->max_length )
    goto LABEL_45;
  v4 = selectedcomponents->m_Items[0];
  if ( !v4 )
    goto LABEL_44;
  data = v4->fields.data;
  v6 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_44643252(v6, data, 0LL);
  if ( !v6 )
    goto LABEL_44;
  BattleCommandData__ResetNotRelatedParamsOnExtraAttack(v6, 0LL);
  BattleCommandData__setTypeAddAttack(v6, 0LL);
  this = (BattlePerformanceCommandCard_o *)v2->fields.Bdata;
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData((BattleData_o *)this, v6->fields.uniqueId, 0LL);
  v7 = v2->fields.selectedcomponents;
  if ( !v7 )
    goto LABEL_44;
  if ( v7->max_length <= 3 )
    goto LABEL_45;
  v8 = this;
  this = (BattlePerformanceCommandCard_o *)v7->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v9 = this;
  if ( !byte_4BD6BB6 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v9 )
    goto LABEL_44;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  v10 = v2->fields.selectedcomponents;
  if ( !v10 )
    goto LABEL_44;
  if ( v10->max_length <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v10->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !v2->fields.extraPos )
    goto LABEL_44;
  v11 = this;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(v2->fields.extraPos, 0LL);
  if ( !v11 )
    goto LABEL_44;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
  v15 = v2->fields.selectedcomponents;
  if ( !v15 )
    goto LABEL_44;
  if ( v15->max_length <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v15->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v16 = v2->fields.selectedcomponents;
  if ( !v16 )
    goto LABEL_44;
  if ( v16->max_length <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v16->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__setData((BattleCommandComponent_o *)this, v6, (BattleServantData_o *)v8, 0, 1, 0, 1, 0LL);
  v17 = v2->fields.selectedcomponents;
  if ( !v17 )
    goto LABEL_44;
  if ( v17->max_length <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v17->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_44;
  v22.fields.r = 1.0;
  v22.fields.g = 1.0;
  v22.fields.b = 1.0;
  v22.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v22, 0LL);
  v18 = v2->fields.selectedcomponents;
  if ( !v18 )
    goto LABEL_44;
  if ( v18->max_length <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v18->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_19154/*"ef_excard02"*/, 4, 0LL);
  this = (BattlePerformanceCommandCard_o *)v2->fields.Bdata;
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(
                                             (BattleData_o *)this,
                                             (int32_t)this->fields.highSpeedButton,
                                             0LL);
  if ( !this )
    goto LABEL_41;
  v19 = v2->fields.selectedcomponents;
  if ( !v19 )
LABEL_44:
    sub_1C22094(this, method);
  if ( v19->max_length <= 3 )
LABEL_45:
    sub_1C2209C(this, method);
  method = (const MethodInfo *)this;
  this = (BattlePerformanceCommandCard_o *)v19->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)this, (BattleServantData_o *)method, 0LL);
LABEL_41:
  v20 = Method_BattlePerformanceCommandCard_AddExtraCard__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_AddExtraCard__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_AddExtraCard__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v20, v20[4]);
  OverwriteAssetSoundName__PlayCommonSe(v21, 13, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDE368 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo);
    byte_4BDE368 = 1;
  }
  v3 = sub_1C22084(BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo);
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122___ctor(
    (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceCommandCard__DistributeCriticalPoint(
        BattlePerformanceCommandCard_o *this,
        int32_t criticalPercentageToAdd,
        bool applyOnlyToSelectedCards,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  BattlePerformanceCommandCard___c_c *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *commandCompArray; // x21
  System_Func_object__bool__o *_9__120_0; // x22
  Il2CppObject *v19; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  System_Func_object__bool__o *v28; // x19
  System_Action_object__o *v29; // x19

  if ( (byte_4BDE366 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattleCommandComponent__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_BattleCommandComponent___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
    sub_1C21E38(&System_Func_BattleCommandComponent__bool__TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__);
    sub_1C21E38(&Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__);
    sub_1C21E38(&Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__);
    sub_1C21E38(&BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo);
    sub_1C21E38(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_4BDE366 = 1;
  }
  v7 = sub_1C22084(BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass120_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass120_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = criticalPercentageToAdd;
  v16 = BattlePerformanceCommandCard___c_TypeInfo;
  commandCompArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.commandCompArray;
  if ( !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
    v16 = BattlePerformanceCommandCard___c_TypeInfo;
  }
  _9__120_0 = (System_Func_object__bool__o *)v16->static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattlePerformanceCommandCard___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__120_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleCommandComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__120_0,
      v19,
      Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__,
      0LL);
    static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    static_fields->__9__120_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__120_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__120_0,
      (int64_t)_9__120_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          commandCompArray,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  if ( applyOnlyToSelectedCards )
  {
    v28 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleCommandComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v28,
      (Il2CppObject *)v7,
      Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__,
      0LL);
    v27 = System_Linq_Enumerable__Where_object_(
            v27,
            (System_Func_TSource__bool__o *)v28,
            (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  }
  v29 = (System_Action_object__o *)sub_1C22084(System_Action_BattleCommandComponent__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v7,
    Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v27,
    (System_Action_T__o *)v29,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_BattleCommandComponent___);
}


float __fastcall BattlePerformanceCommandCard__FSCardRootOffsetY(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  bool IsUnderVista; // w0
  float result; // s0

  if ( (byte_4BDE397 & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BDE397 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  result = 17.0;
  if ( IsUnderVista )
    return 0.0;
  return result;
}


UnityEngine_Vector2_array *__fastcall BattlePerformanceCommandCard__FSTutorialArrowCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Vector2_array *arrow,
        const MethodInfo *method)
{
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UnityEngine_Vector2_array *v5; // x20
  unsigned __int64 v6; // x21
  float *v7; // x22
  UnityEngine_Vector2_o *v8; // x23
  float x; // s8

  if ( (byte_4BDE398 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Vector2___TypeInfo);
    byte_4BDE398 = 1;
  }
  if ( !arrow
    || (this = (BattlePerformanceCommandCard_o *)sub_1C21EE0(UnityEngine_Vector2___TypeInfo, arrow->max_length)) == 0LL )
  {
    sub_1C22094(this, arrow);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v5 = (UnityEngine_Vector2_array *)this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0LL;
    v7 = (float *)&this->fields.COMMAND_STAMP_POS_X + 1;
    v8 = &arrow->m_Items[1];
    do
    {
      if ( v6 >= arrow->max_length || v6 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2209C(this, arrow);
      x = v8->fields.x;
      *(v7 - 1) = v8[-1].fields.y;
      *v7 = x;
      *v7 = x + BattlePerformanceCommandCard__FSCardRootOffsetY(this, (const MethodInfo *)arrow);
      v7 += 2;
      LODWORD(m_CancellationTokenSource) = v5->max_length;
      ++v6;
      ++v8;
    }
    while ( (__int64)v6 < (int)m_CancellationTokenSource );
  }
  return v5;
}


UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__FSTutorialSquareCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Rect_array *square,
        const MethodInfo *method)
{
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UnityEngine_Rect_array *v5; // x20
  unsigned __int64 v6; // x21
  float *v7; // x22
  __int128 v9; // [xsp+0h] [xbp-40h]

  if ( (byte_4BDE399 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Rect___TypeInfo);
    byte_4BDE399 = 1;
  }
  if ( !square
    || (this = (BattlePerformanceCommandCard_o *)sub_1C21EE0(UnityEngine_Rect___TypeInfo, square->max_length)) == 0LL )
  {
    sub_1C22094(this, square);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v5 = (UnityEngine_Rect_array *)this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0LL;
    v7 = (float *)&this->fields.COMMAND_STAMP_POS_X + 1;
    do
    {
      if ( v6 >= square->max_length || v6 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2209C(this, square);
      v9 = *(_OWORD *)&square->m_Items[v6].fields.m_YMin;
      *(_OWORD *)(v7 - 1) = v9;
      ++v6;
      *v7 = *((float *)&v9 + 1) + BattlePerformanceCommandCard__FSCardRootOffsetY(this, (const MethodInfo *)square);
      v7 += 4;
      LODWORD(m_CancellationTokenSource) = v5->max_length;
    }
    while ( (__int64)v6 < (int)m_CancellationTokenSource );
  }
  return v5;
}


BattleCommandData_array *__fastcall BattlePerformanceCommandCard__GetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *baseCommandList; // x0
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *data; // x8
  System_Collections_Generic_IEnumerable_T__o *draw_commandlist; // x20
  PartyOrganizationUtility_o *p_baseCommandList; // x19
  System_Collections_Generic_List_object__o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDE35C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleCommandData___ctor___77564024);
    sub_1C21E38(&System_Collections_Generic_List_BattleCommandData__TypeInfo);
    byte_4BDE35C = 1;
  }
  baseCommandList = (System_Collections_Generic_List_object__o *)this->fields.baseCommandList;
  if ( !baseCommandList )
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_8;
    data = logic->fields.data;
    if ( !data
      || (draw_commandlist = (System_Collections_Generic_IEnumerable_T__o *)data->fields.draw_commandlist,
          p_baseCommandList = (PartyOrganizationUtility_o *)&this->fields.baseCommandList,
          v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleCommandData__TypeInfo),
          System_Collections_Generic_List_object____ctor_56945064(
            v8,
            draw_commandlist,
            (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_BattleCommandData___ctor___77564024),
          p_baseCommandList->klass = (PartyOrganizationUtility_c *)v8,
          sub_1C21DDC(p_baseCommandList, (int64_t)v8, v9, v10, v11, v12, v13, v14),
          (baseCommandList = (System_Collections_Generic_List_object__o *)p_baseCommandList->klass) == 0LL) )
    {
LABEL_8:
      sub_1C22094(baseCommandList, method);
    }
  }
  return (BattleCommandData_array *)System_Collections_Generic_List_object___ToArray(
                                      baseCommandList,
                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
}


System_String_o *__fastcall BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
        BattlePerformanceCommandCard_o *this,
        int32_t status,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_4BDE38A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_2865/*"BATTLE_COMMANDDIALOG_DONTACT"*/);
    sub_1C21E38(&StringLiteral_2866/*"BATTLE_COMMANDDIALOG_DONTACTTYPE"*/);
    sub_1C21E38(&StringLiteral_2868/*"BATTLE_COMMANDDIALOG_DONTTD_COND"*/);
    sub_1C21E38(&StringLiteral_2871/*"BATTLE_COMMANDDIALOG_NOFUNC"*/);
    sub_1C21E38(&StringLiteral_2869/*"BATTLE_COMMANDDIALOG_DONTTD_SHORTAGE_CRITICAL_STAR"*/);
    sub_1C21E38(&StringLiteral_2870/*"BATTLE_COMMANDDIALOG_DONTUSE"*/);
    sub_1C21E38(&StringLiteral_2867/*"BATTLE_COMMANDDIALOG_DONTTD"*/);
    byte_4BDE38A = 1;
  }
  if ( (unsigned int)(status - 3) > 6 )
    v4 = (System_String_o **)&StringLiteral_2865/*"BATTLE_COMMANDDIALOG_DONTACT"*/;
  else
    v4 = (System_String_o **)*(&off_460A040 + status - 3);
  return *v4;
}


int32_t __fastcall BattlePerformanceCommandCard__GetServantNumber(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *servantStatusObjArray; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleServantParamComponent_o *v6; // x11

  servantStatusObjArray = this->fields.servantStatusObjArray;
  if ( !servantStatusObjArray )
    goto LABEL_13;
  max_length = servantStatusObjArray->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    this = (BattlePerformanceCommandCard_o *)0xFFFFFFFFLL;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C2209C(this, commandData);
      v6 = servantStatusObjArray->m_Items[v5];
      if ( !v6 || !commandData )
        break;
      if ( v6->fields.uniqueID == commandData->fields.uniqueId )
        this = (BattlePerformanceCommandCard_o *)v5;
      else
        this = (BattlePerformanceCommandCard_o *)(unsigned int)this;
      if ( (int)++v5 >= max_length )
        return (int)this;
    }
LABEL_13:
    sub_1C22094(this, commandData);
  }
  LODWORD(this) = -1;
  return (int)this;
}


BattleServantParamComponent_o *__fastcall BattlePerformanceCommandCard__GetStatusUiObj(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleServantParamComponent_array *servantStatusObjArray; // x8
  int max_length; // w9
  signed int v7; // w10
  UnityEngine_Object_o *v8; // x20
  BattleServantParamComponent_o *v9; // x11
  struct BattleServantData_o *data; // x12

  v4 = this;
  if ( (byte_4BDE387 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE387 = 1;
  }
  servantStatusObjArray = v4->fields.servantStatusObjArray;
  if ( !servantStatusObjArray )
    goto LABEL_18;
  max_length = servantStatusObjArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C2209C(this, commandData);
      v9 = servantStatusObjArray->m_Items[v7];
      if ( !v9 )
        break;
      data = v9->fields.data;
      if ( data )
      {
        if ( !commandData )
          break;
        if ( data->fields.uniqueId == commandData->fields.uniqueId )
          v8 = (UnityEngine_Object_o *)servantStatusObjArray->m_Items[v7];
      }
      if ( ++v7 >= max_length )
        goto LABEL_15;
    }
LABEL_18:
    sub_1C22094(this, commandData);
  }
  v8 = 0LL;
LABEL_15:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  return (BattleServantParamComponent_o *)v8;
}


void __fastcall BattlePerformanceCommandCard__InitResult(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *npcardTr; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  npcardTr = this->fields.npcardTr;
  if ( !npcardTr )
LABEL_8:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = npcardTr->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceCommandCard_o *)npcardTr->m_Items[v4];
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        npcardTr = v3->fields.npcardTr;
        ++v4;
        if ( npcardTr )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void __fastcall BattlePerformanceCommandCard__Initialize(
        BattlePerformanceCommandCard_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *data,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattlePerformance_o **p_perf; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  BattleWindowComponent_o *sealedWindow; // x0
  BattleWindowOuterClickManagerComponent_o *v27; // x21
  BattleWindowOuterClickComponent_OuterClickCall_o *v28; // x22
  BattleWindowOuterClickManagerComponent_o *tdConfWindow; // x21
  BattleWindowOuterClickComponent_OuterClickCall_o *v30; // x22
  UnityEngine_Component_o *v31; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v32; // x20
  Il2CppObject *Instance; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4BDE352 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__);
    sub_1C21E38(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__);
    sub_1C21E38(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    sub_1C21E38(&StringLiteral_10806/*"Performance"*/);
    byte_4BDE352 = 1;
  }
  p_perf = &this->fields.perf;
  this->fields.perf = inperf;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.perf,
    (int64_t)inperf,
    (int64_t)data,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.Bdata = data;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.Bdata, (int64_t)data, v13, v14, v15, v16, v17, v18);
  this->fields.logic = inlogic;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)inlogic, v19, v20, v21, v22, v23, v24);
  sealedWindow = (BattleWindowComponent_o *)this->fields.sealedWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._9_setClose.method)(
    sealedWindow,
    sealedWindow->klass->vtable._10_Open.methodPtr);
  v27 = (BattleWindowOuterClickManagerComponent_o *)this->fields.sealedWindow;
  v28 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C22084(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceCommandCard_OnCloseSealedWindow__,
    0LL);
  if ( !v27 )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v27, v28, 0LL);
  sealedWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  BattleWindowComponent__setInitData(sealedWindow, 2, 0.15, 0, 0LL);
  sealedWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._9_setClose.method)(
    sealedWindow,
    sealedWindow->klass->vtable._10_Open.methodPtr);
  tdConfWindow = (BattleWindowOuterClickManagerComponent_o *)this->fields.tdConfWindow;
  v30 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C22084(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v30,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__,
    0LL);
  if ( !tdConfWindow )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(tdConfWindow, v30, 0LL);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  BattleWindowComponent__setInitData(sealedWindow, 2, 0.15, 0, 0LL);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._9_setClose.method)(
    sealedWindow,
    sealedWindow->klass->vtable._10_Open.methodPtr);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandfsm;
  if ( !sealedWindow )
    goto LABEL_16;
  sealedWindow = (BattleWindowComponent_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)sealedWindow, 0LL);
  if ( !sealedWindow )
    goto LABEL_16;
  sealedWindow = (BattleWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)sealedWindow,
                                              (System_String_o *)StringLiteral_10806/*"Performance"*/,
                                              0LL);
  v31 = (UnityEngine_Component_o *)*p_perf;
  if ( !*p_perf
    || (v32 = (HutongGames_PlayMaker_FsmGameObject_o *)sealedWindow,
        sealedWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(v31, 0LL),
        !v32)
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(v32, (UnityEngine_GameObject_o *)sealedWindow, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__),
        this->fields.spawner = (struct Spawner_o *)Instance,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.spawner,
          (int64_t)Instance,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        (sealedWindow = (BattleWindowComponent_o *)this->fields.spawner) == 0LL) )
  {
LABEL_16:
    sub_1C22094(sealedWindow, v25);
  }
  Spawner__Precache_39210120(
    (Spawner_o *)sealedWindow,
    (UnityEngine_Object_o *)this->fields.selectCommandPrefab,
    3,
    0LL);
  this->fields.firstBonusAnimationWaitTime = 0;
  *(_WORD *)&this->fields.isTouchBegan = 0;
  this->fields.isTouchCanceled = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__LongPress(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  BattleData_o *Bdata; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v7; // x22
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v9; // x21
  System_String_o *v10; // x1

  if ( (byte_4BDE361 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_8484/*"LONG_PRESS_COMMAND_ASSIST"*/);
    sub_1C21E38(&StringLiteral_8483/*"LONG_PRESS"*/);
    sub_1C21E38(&StringLiteral_21667/*"markindex"*/);
    byte_4BDE361 = 1;
  }
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_28;
  Bdata = (BattleData_o *)BattleData__isTutorial(Bdata, 0LL);
  if ( ((unsigned __int8)Bdata & 1) == 0 )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v7 = 0LL;
      do
      {
        max_length = commandCompArray->max_length;
        if ( (__int64)v7 >= (int)max_length )
          return;
        if ( v7 >= max_length )
          sub_1C2209C(Bdata, *(_QWORD *)&markindex);
        v9 = commandCompArray->m_Items[v7];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Bdata = (BattleData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
        if ( ((unsigned __int8)Bdata & 1) == 0 )
        {
          if ( !v9 )
            break;
          Bdata = (BattleData_o *)BattleCommandComponent__checkMark(v9, markindex, 0LL);
          if ( ((unsigned __int8)Bdata & 1) != 0 )
          {
            Bdata = (BattleData_o *)this->fields.commandfsm;
            if ( !Bdata )
              break;
            Bdata = (BattleData_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Bdata, 0LL);
            if ( !Bdata )
              break;
            Bdata = (BattleData_o *)Bdata->fields.quest_ent;
            if ( !Bdata )
              break;
            Bdata = (BattleData_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Bdata,
                                      (System_String_o *)StringLiteral_21667/*"markindex"*/,
                                      0LL);
            if ( !Bdata )
              break;
            LODWORD(Bdata->fields.logic) = markindex;
            if ( BattleCommandComponent__isTreasureDvc(v9, 0LL) )
            {
              Bdata = (BattleData_o *)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v10 = (System_String_o *)StringLiteral_8483/*"LONG_PRESS"*/;
            }
            else
            {
              Bdata = (BattleData_o *)v9->fields.data;
              if ( !Bdata )
                break;
              Bdata = (BattleData_o *)BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)Bdata, 0LL);
              if ( ((unsigned __int8)Bdata & 1) == 0 )
                goto LABEL_27;
              Bdata = (BattleData_o *)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v10 = (System_String_o *)StringLiteral_8484/*"LONG_PRESS_COMMAND_ASSIST"*/;
            }
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Bdata, v10, 0LL);
          }
        }
LABEL_27:
        commandCompArray = this->fields.commandCompArray;
        ++v7;
      }
      while ( commandCompArray );
    }
LABEL_28:
    sub_1C22094(Bdata, *(_QWORD *)&markindex);
  }
}


void __fastcall BattlePerformanceCommandCard__MoveExtraCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  BattlePerformanceCommandCard_o *v13; // x20
  struct BattleCommandComponent_array *v14; // x8
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  BattlePerformanceCommandCard_o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  BattlePerformanceCommandCard_o *v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  BattlePerformanceCommandCard_o *v56; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  BattlePerformanceCommandCard_o *v72; // x21
  System_Collections_Hashtable_o *v73; // x0
  __int64 v74; // x0
  char v75[4]; // [xsp+8h] [xbp-48h] BYREF
  int v76; // [xsp+Ch] [xbp-44h] BYREF
  float v77; // [xsp+18h] [xbp-38h] BYREF
  float v78; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4BDE378 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&iTween_EaseType_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_21211/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE378 = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_48;
  if ( selectedcomponents->max_length <= 3 )
    goto LABEL_47;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
    goto LABEL_48;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (BattlePerformanceCommandCard_o *)sub_1C21EE0(object___TypeInfo, 8LL);
  if ( !this )
    goto LABEL_48;
  v13 = this;
  this = (BattlePerformanceCommandCard_o *)StringLiteral_25185/*"x"*/;
  if ( StringLiteral_25185/*"x"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_25185/*"x"*/, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_25185/*"x"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    goto LABEL_47;
  v13->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v13->fields.COMMAND_STAMP_POS_X,
    (int64_t)method,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v14 = v4->fields.selectedcomponents;
  if ( !v14 )
    goto LABEL_48;
  if ( v14->max_length <= 3 )
    goto LABEL_47;
  this = (BattlePerformanceCommandCard_o *)v14->m_Items[3];
  if ( !this
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL)) == 0LL )
  {
LABEL_48:
    sub_1C22094(this, method);
  }
  v78 = COERCE_FLOAT(UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL)) + 250.0;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v78, v15, v16, v17);
  v24 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_47;
  *(_QWORD *)&v13->fields.COMMAND_STAMP_POS_Y = v24;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v13->fields.COMMAND_STAMP_POS_Y,
    (int64_t)v24,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_24360/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_47;
  *(_QWORD *)&v13->fields.CARD_ROOT_BASE_X = method;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v13->fields.CARD_ROOT_BASE_X,
    (int64_t)method,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v77 = moveTime;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v77, v31, v32, v33);
  v40 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 3 )
    goto LABEL_47;
  v13->fields.commandfsm = (struct PlayMakerFSM_o *)v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.commandfsm, (int64_t)v40, v34, v35, v36, v37, v38, v39);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_19078/*"easetype"*/;
  if ( StringLiteral_19078/*"easetype"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_19078/*"easetype"*/, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_19078/*"easetype"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 4 )
    goto LABEL_47;
  v13->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.commandprefab, (int64_t)method, v41, v42, v43, v44, v45, v46);
  v76 = 16;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v76, v47, v48, v49);
  v56 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 5 )
    goto LABEL_47;
  v13->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v56;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v13->fields.selectCommandPrefab,
    (int64_t)v56,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_21211/*"islocal"*/;
  if ( StringLiteral_21211/*"islocal"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_21211/*"islocal"*/, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_21211/*"islocal"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 6 )
    goto LABEL_47;
  v13->fields.commandrootTransform = (struct UnityEngine_Transform_o *)method;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v13->fields.commandrootTransform,
    (int64_t)method,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v75[0] = 1;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v75, v63, v64, v65);
  v72 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v13->klass->_1.element_class);
    if ( !this )
    {
LABEL_49:
      v74 = sub_1C220B8(this);
      sub_1C21F60(v74, 0LL);
    }
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 7 )
LABEL_47:
    sub_1C2209C(this, method);
  v13->fields.selectinfo_sprite = (struct UISprite_o *)v72;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->fields.selectinfo_sprite, (int64_t)v72, v66, v67, v68, v69, v70, v71);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v73 = iTween__Hash((System_Object_array *)v13, 0LL);
  iTween__MoveFrom_61654536(gameObject, v73, 0LL);
}


void __fastcall BattlePerformanceCommandCard__MoveNotTween(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Transform_o *target,
        System_Action_GameObject__o *callback,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattlePerformance_o *v8; // x21
  UnityEngine_Component_o *criticalpointTr; // x8
  UnityEngine_Transform_o *v10; // x22
  int32_t layer; // w0
  float x; // s8
  float y; // s9
  float z; // s10
  float v15; // s11
  float v16; // s7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BDE381 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
    byte_4BDE381 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0LL);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
  if ( !perf )
    goto LABEL_11;
  v8 = perf;
  perf = (BattlePerformance_o *)BattleMoveObject__GetTransform((BattleMoveObject_o *)perf, 0LL);
  criticalpointTr = (UnityEngine_Component_o *)this->fields.criticalpointTr;
  if ( !criticalpointTr )
    goto LABEL_11;
  v10 = (UnityEngine_Transform_o *)perf;
  perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(criticalpointTr, 0LL);
  if ( !perf
    || (layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)perf, 0LL),
        perf = (BattlePerformance_o *)TransformHelper__ChangeChildsLayer(v10, layer, 0LL),
        !v10)
    || (v23.fields.x = 0.0,
        v23.fields.y = 0.0,
        v23.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(v10, v23, 0LL),
        BattleMoveObject__SetRigidbodyGravity((BattleMoveObject_o *)v8, 0, 0LL),
        !target) )
  {
LABEL_11:
    sub_1C22094(perf, target);
  }
  localPosition = UnityEngine_Transform__get_localPosition(target, 0LL);
  localPosition.fields.x = localPosition.fields.x + 0.0;
  localPosition.fields.y = localPosition.fields.y + 70.0;
  localPosition.fields.z = localPosition.fields.z + 0.0;
  v25 = UnityEngine_Transform__TransformPoint(target, localPosition, 0LL);
  v26 = UnityEngine_Transform__InverseTransformPoint(v10, v25, 0LL);
  x = v26.fields.x;
  y = v26.fields.y;
  z = v26.fields.z;
  v15 = UnityEngine_Random__Range(0.3, 0.5, 0LL);
  v16 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  v27.fields.x = 0.0;
  v27.fields.y = 0.0;
  v27.fields.z = 0.0;
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  BattleMoveObject__StartNotTweenMove((BattleMoveObject_o *)v8, v27, v28, v15, v16, callback, 0LL);
  v8->fields.perf = (struct BattlePerformance_o *)target;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.perf, (int64_t)target, v17, v18, v19, v20, v21, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__MoveNotTween2back(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Transform_o *from,
        System_Action_GameObject__o *callback,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattlePerformance_o *v8; // x21
  UnityEngine_Component_o *criticalpointTr; // x8
  UnityEngine_Transform_o *v10; // x22
  int32_t layer; // w0
  int v12; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v18; // s11
  float v19; // s7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BDE382 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
    byte_4BDE382 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0LL);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
  if ( !perf )
    goto LABEL_11;
  v8 = perf;
  perf = (BattlePerformance_o *)BattleMoveObject__GetTransform((BattleMoveObject_o *)perf, 0LL);
  criticalpointTr = (UnityEngine_Component_o *)this->fields.criticalpointTr;
  if ( !criticalpointTr
    || (v10 = (UnityEngine_Transform_o *)perf,
        (perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(criticalpointTr, 0LL)) == 0LL)
    || (layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)perf, 0LL),
        perf = (BattlePerformance_o *)TransformHelper__ChangeChildsLayer(v10, layer, 0LL),
        !from)
    || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(from, 0LL), !v10) )
  {
LABEL_11:
    sub_1C22094(perf, from);
  }
  UnityEngine_Transform__set_position(v10, *(UnityEngine_Vector3_o *)&v12, 0LL);
  BattleMoveObject__SetRigidbodyGravity((BattleMoveObject_o *)v8, 0, 0LL);
  localPosition = UnityEngine_Transform__get_localPosition(v10, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v18 = UnityEngine_Random__Range(0.3, 0.5, 0LL);
  v19 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  v28.fields.x = 0.0;
  v28.fields.y = 0.0;
  v28.fields.z = 0.0;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  BattleMoveObject__StartNotTweenMove((BattleMoveObject_o *)v8, v27, v28, v18, v19, callback, 0LL);
  v8->fields.perf = (struct BattlePerformance_o *)from;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.perf, (int64_t)from, v20, v21, v22, v23, v24, v25);
}


void __fastcall BattlePerformanceCommandCard__MoveSelectedCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  unsigned __int64 i; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  BattlePerformanceCommandCard_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  BattlePerformanceCommandCard_o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  BattlePerformanceCommandCard_o *v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  BattlePerformanceCommandCard_o *v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  BattlePerformanceCommandCard_o *v72; // x22
  System_Collections_Hashtable_o *v73; // x0
  __int64 v74; // x0
  char v75[4]; // [xsp+8h] [xbp-78h] BYREF
  int v76; // [xsp+Ch] [xbp-74h] BYREF
  float v77; // [xsp+18h] [xbp-68h] BYREF
  int v78; // [xsp+1Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4BDE376 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&iTween_EaseType_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_21211/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE376 = 1;
  }
  for ( i = 0LL; i != 3; ++i )
  {
    selectedcomponents = v4->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_46;
    if ( i >= selectedcomponents->max_length )
      goto LABEL_44;
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[i];
    if ( !this
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
          (this = (BattlePerformanceCommandCard_o *)sub_1C21EE0(object___TypeInfo, 8LL)) == 0LL) )
    {
LABEL_46:
      sub_1C22094(this, method);
    }
    v14 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_25185/*"x"*/;
    if ( StringLiteral_25185/*"x"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_25185/*"x"*/, v14->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_25185/*"x"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
      goto LABEL_44;
    v14->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v14->fields.COMMAND_STAMP_POS_X,
      (int64_t)method,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v78 = -1081291571;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v78, v15, v16, v17);
    v24 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v14->klass->_1.element_class);
      if ( !this )
      {
LABEL_45:
        v74 = sub_1C220B8(this);
        sub_1C21F60(v74, 0LL);
      }
    }
    if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_44;
    *(_QWORD *)&v14->fields.COMMAND_STAMP_POS_Y = v24;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v14->fields.COMMAND_STAMP_POS_Y,
      (int64_t)v24,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24360/*"time"*/;
    if ( StringLiteral_24360/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v14->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_24360/*"time"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_44;
    *(_QWORD *)&v14->fields.CARD_ROOT_BASE_X = method;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v14->fields.CARD_ROOT_BASE_X,
      (int64_t)method,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v77 = moveTime;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v77, v31, v32, v33);
    v40 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v14->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
    }
    if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_44;
    v14->fields.commandfsm = (struct PlayMakerFSM_o *)v40;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v14->fields.commandfsm, (int64_t)v40, v34, v35, v36, v37, v38, v39);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_19078/*"easetype"*/;
    if ( StringLiteral_19078/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_19078/*"easetype"*/, v14->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_19078/*"easetype"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_44;
    v14->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v14->fields.commandprefab, (int64_t)method, v41, v42, v43, v44, v45, v46);
    v76 = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v76, v47, v48, v49);
    v56 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v14->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
    }
    if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_44;
    v14->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v56;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v14->fields.selectCommandPrefab,
      (int64_t)v56,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_21211/*"islocal"*/;
    if ( StringLiteral_21211/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_21211/*"islocal"*/, v14->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_21211/*"islocal"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 6 )
LABEL_44:
      sub_1C2209C(this, method);
    v14->fields.commandrootTransform = (struct UnityEngine_Transform_o *)method;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v14->fields.commandrootTransform,
      (int64_t)method,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    v75[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v75, v63, v64, v65);
    v72 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v14->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
    }
    if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 7 )
      goto LABEL_44;
    v14->fields.selectinfo_sprite = (struct UISprite_o *)v72;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v14->fields.selectinfo_sprite,
      (int64_t)v72,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v73 = iTween__Hash((System_Object_array *)v14, 0LL);
    iTween__MoveAdd_61657536(gameObject, v73, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__OnApplicationPause(
        BattlePerformanceCommandCard_o *this,
        bool pauseStatus,
        const MethodInfo *method)
{
  this->fields.firstBonusAnimationWaitTime = this->fields.firstBonusAnimationMaxTime;
  if ( pauseStatus && this->fields.isTouchBegan && !this->fields.isTouchEnded )
    this->fields.isTouchCanceled = 1;
}


void __fastcall BattlePerformanceCommandCard__OnCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *commandAssistDetailWindow; // x0
  struct BattleCommandAssistDetailWindowComponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4BDE391 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__);
    sub_1C21E38(&Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&StringLiteral_17302/*"ba21"*/);
    byte_4BDE391 = 1;
  }
  commandAssistDetailWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !commandAssistDetailWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(commandAssistDetailWindow, 0LL) )
    return;
  v4 = this->fields.commandAssistDetailWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__,
    0LL);
  if ( !v4 )
LABEL_10:
    sub_1C22094(commandAssistDetailWindow, method);
  ((void (__fastcall *)(struct BattleCommandAssistDetailWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v4->klass->vtable._12_Close.method)(
    v4,
    v5,
    v4->klass->vtable._13_CompClose.methodPtr);
  v6 = Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySe(v7, (System_String_o *)StringLiteral_17302/*"ba21"*/, 0, 0LL);
}


void __fastcall BattlePerformanceCommandCard__OnCloseSealedWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSealedCommandWindowComponent_o *sealedWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BDE38B & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__);
    sub_1C21E38(&Method_BattlePerformanceCommandCard_endCloseSealedWindow__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDE38B = 1;
  }
  v3 = Method_BattlePerformanceCommandCard_OnCloseSealedWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseSealedWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_OnCloseSealedWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  sealedWindow = this->fields.sealedWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseSealedWindow__,
    0LL);
  if ( !sealedWindow )
    sub_1C22094(v7, v8);
  ((void (__fastcall *)(struct BattleSealedCommandWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._12_Close.method)(
    sealedWindow,
    v6,
    sealedWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceCommandCard__OnCloseTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *tdConfWindow; // x0
  struct BattleTDConfWIndowComponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4BDE38E & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__);
    sub_1C21E38(&Method_BattlePerformanceCommandCard_endCloseTdConfWindow__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDE38E = 1;
  }
  tdConfWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !tdConfWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(tdConfWindow, 0LL) )
    return;
  v4 = this->fields.tdConfWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseTdConfWindow__,
    0LL);
  if ( !v4 )
LABEL_10:
    sub_1C22094(tdConfWindow, method);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v4->klass->vtable._12_Close.method)(
    v4,
    v5,
    v4->klass->vtable._13_CompClose.methodPtr);
  v6 = Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__OpenCommandAssistDetailWIndow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x22
  int max_length; // w8
  unsigned int v7; // w23
  Il2CppClass **v8; // x8
  Il2CppClass *v9; // x21
  BattleCommandData_o *v10; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  v4 = this;
  if ( (byte_4BDE390 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&StringLiteral_17301/*"ba20"*/);
    byte_4BDE390 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2209C(this, *(_QWORD *)&markIndex);
      v8 = &commandCompArray->obj.klass + (int)v7;
      v9 = v8[4];
      if ( !v9 )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                                 (BattleCommandComponent_o *)v8[4],
                                                 markIndex,
                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = commandCompArray->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
    v10 = (BattleCommandData_o *)v9->vtable[4].method;
    if ( !v10 )
      goto LABEL_19;
    if ( BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)v9->vtable[4].method, 0LL) )
    {
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandAssistDetailWindow;
      if ( this )
      {
        BattleCommandAssistDetailWindowComponent__SetCommandAssistInfo(
          (BattleCommandAssistDetailWindowComponent_o *)this,
          v10,
          0LL);
        v11 = Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__;
        if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__);
        v12 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v11, v11[4]);
        OverwriteAssetSoundName__PlaySe(v12, (System_String_o *)StringLiteral_17301/*"ba20"*/, 0, 0LL);
        this = (BattlePerformanceCommandCard_o *)v4->fields.commandAssistDetailWindow;
        if ( this )
        {
          ((void (__fastcall *)(BattlePerformanceCommandCard_o *, _QWORD, void *))this->klass[1]._1.typeMetadataHandle)(
            this,
            0LL,
            this->klass[1]._1.interopData);
          return;
        }
      }
LABEL_19:
      sub_1C22094(this, *(_QWORD *)&markIndex);
    }
  }
}


void __fastcall BattlePerformanceCommandCard__OpenInitiarize(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_7;
  if ( BattleLogic__getTutorialId(logic, 0LL) != 1 )
    goto LABEL_6;
  logic = this->fields.logic;
  if ( !logic )
LABEL_7:
    sub_1C22094(logic, method);
  if ( BattleLogic__getTurn(logic, 0LL) == 4 )
    this->fields.isTouchNgInTutorial = 1;
LABEL_6:
  this->fields.isPlayingMoveCard = 1;
}


void __fastcall BattlePerformanceCommandCard__OpenSealedWindow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v8; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v10; // x22
  int max_length; // w9
  Il2CppClass **v12; // x8
  BattleCommandComponent_o *v13; // x21
  BattlePerformanceCommandCard_o *PrioredStatus; // x0
  int v15; // w22
  const MethodInfo *v16; // x2
  System_String_o *SealedWindowMessageLocalizationKey; // x21
  __int64 v18; // x20
  const MethodInfo_376FA28 *v19; // x2
  BattleSealedCommandWindowComponent_o *sealedWindow; // x22
  __int128 v21; // [xsp+0h] [xbp-40h] BYREF
  __int64 v22; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_int__o v23; // 0:x0.8
  System_Nullable_Vector3__o v24; // 0:x0.16
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDE389 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_OpenSealedWindow__);
    sub_1C21E38(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&Method_System_Nullable_Vector3___ctor__);
    byte_4BDE389 = 1;
  }
  v5 = Method_BattlePerformanceCommandCard_OpenSealedWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenSealedWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_OpenSealedWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v10 >= max_length )
      goto LABEL_21;
    if ( (unsigned int)v10 >= max_length )
      sub_1C2209C(SealStatus, v8);
    v12 = &commandCompArray->obj.klass + v10;
    v13 = (BattleCommandComponent_o *)v12[4];
    if ( !v13 )
      goto LABEL_12;
    SealStatus = (BattleCommandSealStatus_o *)BattleCommandComponent__checkMark(
                                                (BattleCommandComponent_o *)v12[4],
                                                markIndex,
                                                0LL);
    if ( ((unsigned __int8)SealStatus & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v10;
    if ( !commandCompArray )
      goto LABEL_12;
  }
  SealStatus = BattleCommandComponent__get_SealStatus(v13, 0LL);
  if ( !SealStatus )
    goto LABEL_12;
  PrioredStatus = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL);
  v15 = (int)PrioredStatus;
  SealedWindowMessageLocalizationKey = BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
                                         PrioredStatus,
                                         (int32_t)PrioredStatus,
                                         v16);
  v18 = sub_1C22084(BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
  BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v18,
    0LL);
  if ( v15 == 6 )
  {
    v23 = (System_Nullable_int__o)&v22;
    v22 = 0LL;
    System_Nullable_int____ctor(v23, 26, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
    if ( !v18 )
      goto LABEL_12;
    *(_QWORD *)&v24.fields.hasValue = &v21;
    v25.fields.x = 0.0;
    v25.fields.y = 15.0;
    *(_QWORD *)(v18 + 16) = v22;
    v25.fields.z = 0.0;
    v21 = 0uLL;
    *(_QWORD *)&v24.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v24, v25, v19);
    *(_OWORD *)(v18 + 24) = v21;
  }
  sealedWindow = this->fields.sealedWindow;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SealStatus = (BattleCommandSealStatus_o *)LocalizationManager__Get(SealedWindowMessageLocalizationKey, 0LL);
  if ( !sealedWindow )
    goto LABEL_12;
  BattleSealedCommandWindowComponent__setLabel(
    sealedWindow,
    (System_String_o *)SealStatus,
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v18,
    0LL);
LABEL_21:
  SealStatus = (BattleCommandSealStatus_o *)this->fields.sealedWindow;
  if ( !SealStatus )
LABEL_12:
    sub_1C22094(SealStatus, v8);
  ((void (__fastcall *)(BattleCommandSealStatus_o *, _QWORD, void *))SealStatus->klass[1]._1.typeMetadataHandle)(
    SealStatus,
    0LL,
    SealStatus->klass[1]._1.interopData);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__OpenTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v6; // x29
  int max_length; // w9
  Il2CppClass **v8; // x8
  BattleCommandComponent_o *v9; // x21
  BattleData_o *Bdata; // x22
  BattleServantData_o *v11; // x21
  ServantLimitAddEntity_o *svtlimitaddent; // x24
  bool IsNameTrueFromBattleSvt; // w0
  System_String_o *OverwriteTDRuby; // x22
  System_String_o *OverwriteTDName; // x23
  bool IsNpDetailActive; // w0
  BattleTDConfWIndowComponent_o *tdConfWindow; // x24
  bool v18; // w25
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  struct BattleTDConfWIndowComponent_o *v21; // x20
  BattleWindowComponent_EndCall_o *v22; // x21

  v4 = this;
  if ( (byte_4BDE38D & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_OpenTdConfWindow__);
    sub_1C21E38(&Method_BattlePerformanceCommandCard_endOpenTdConf__);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDE38D = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2209C(this, *(_QWORD *)&markIndex);
    v8 = &commandCompArray->obj.klass + v6;
    v9 = (BattleCommandComponent_o *)v8[4];
    if ( !v9 )
      goto LABEL_19;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v8[4],
                                               markIndex,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      Bdata = v4->fields.Bdata;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getUniqueID(v9, 0LL);
      if ( !Bdata )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(Bdata, (int32_t)this, 0LL);
      if ( !this )
        goto LABEL_19;
      v11 = (BattleServantData_o *)this;
      this = (BattlePerformanceCommandCard_o *)this->fields.cutin_trinity_m;
      if ( !this )
        goto LABEL_19;
      svtlimitaddent = v11->fields.svtlimitaddent;
      IsNameTrueFromBattleSvt = ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)this, 0LL);
      OverwriteTDRuby = 0LL;
      OverwriteTDName = 0LL;
      if ( svtlimitaddent && IsNameTrueFromBattleSvt )
      {
        OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(svtlimitaddent, 0LL);
        OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(svtlimitaddent, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)v4->fields.Bdata;
      if ( !this )
        goto LABEL_19;
      IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)this, v11, 1, 0LL);
      tdConfWindow = v4->fields.tdConfWindow;
      v18 = IsNpDetailActive;
      this = (BattlePerformanceCommandCard_o *)BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
      if ( !tdConfWindow )
        goto LABEL_19;
      BattleTDConfWIndowComponent__setData(
        tdConfWindow,
        (int32_t)this,
        v11->fields.treasuredvcLevel,
        OverwriteTDName,
        OverwriteTDRuby,
        v18,
        0LL);
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v6;
    if ( !commandCompArray )
      goto LABEL_19;
  }
  v19 = Method_BattlePerformanceCommandCard_OpenTdConfWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenTdConfWindow__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_OpenTdConfWindow__);
  v20 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v19, v19[4]);
  OverwriteAssetSoundName__PlayCommonSe(v20, 9, 0, 0LL);
  v21 = v4->fields.tdConfWindow;
  v22 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v22,
    (Il2CppObject *)v4,
    Method_BattlePerformanceCommandCard_endOpenTdConf__,
    0LL);
  if ( !v21 )
LABEL_19:
    sub_1C22094(this, *(_QWORD *)&markIndex);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v21->klass->vtable._10_Open.method)(
    v21,
    v22,
    v21->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceCommandCard__PlayBackStar(
        BattlePerformanceCommandCard_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v7; // x1
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
  __int64 v20; // x1
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v22; // x8
  int32_t size; // w2
  int v24; // w9
  il2cpp_array_size_t j; // w29
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v27; // x8
  BattleCommandComponent_o *v28; // x21
  int32_t CriticalCount; // w22
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v31; // x23
  System_Action_object__o *v32; // x24
  const MethodInfo *v33; // x3
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x2
  System_Collections_IEnumerator_o *v36; // x0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDE386 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_GameObject__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleCommandComponent_addCriticalBuff__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_BattlePerformanceCommandCard___c__DisplayClass173_0__PlayBackStar_b__0__);
    sub_1C21E38(&BattlePerformanceCommandCard___c__DisplayClass173_0_TypeInfo);
    byte_4BDE386 = 1;
  }
  memset(&i, 0, sizeof(i));
  v5 = sub_1C22084(BattlePerformanceCommandCard___c__DisplayClass173_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass173_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass173_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callback, v14, v15, v16, v17, v18, v19);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v37;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields._current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_1C22094(0LL, v20);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v22 = this->fields.aubelist;
  if ( !v22 )
    goto LABEL_22;
  size = v22->fields._size;
  v24 = v22->fields._version + 1;
  v22->fields._size = 0;
  v22->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0LL);
  for ( j = 0; j != 5; ++j )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_22;
    if ( j >= commandCompArray->max_length )
LABEL_23:
      sub_1C2209C(aubelist, v7);
    v27 = &commandCompArray->obj.klass + (int)j;
    v28 = (BattleCommandComponent_o *)v27[4];
    if ( !v28 )
      goto LABEL_22;
    CriticalCount = BattleCommandComponent__getCriticalCount((BattleCommandComponent_o *)v27[4], 0LL);
    BattleCommandComponent__setCriticalObject(v28, 0, 0LL);
    if ( CriticalCount >= 1 )
    {
      while ( 1 )
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          break;
        if ( j >= commandTransformArray->max_length )
          goto LABEL_23;
        v31 = commandTransformArray->m_Items[j];
        v32 = (System_Action_object__o *)sub_1C22084(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(v32, (Il2CppObject *)v28, Method_BattleCommandComponent_addCriticalBuff__, 0LL);
        BattlePerformanceCommandCard__MoveNotTween2back(this, v31, (System_Action_GameObject__o *)v32, v33);
        if ( !--CriticalCount )
          goto LABEL_20;
      }
LABEL_22:
      sub_1C22094(aubelist, v7);
    }
LABEL_20:
    ;
  }
  this->fields._IsPlayingBackStar_k__BackingField = 1;
  v34 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v5,
    Method_BattlePerformanceCommandCard___c__DisplayClass173_0__PlayBackStar_b__0__,
    0LL);
  v36 = BattlePerformanceCommandCard__waitFunc(this, 0.5, v34, v35);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v36, 0LL);
}


void __fastcall BattlePerformanceCommandCard__PlayFallStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  il2cpp_array_size_t j; // w26
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v11; // x8
  BattleCommandComponent_o *v12; // x20
  int v13; // w21
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v15; // x22
  System_Action_object__o *v16; // x23
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BDE384 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_GameObject__TypeInfo);
    sub_1C21E38(&Method_BattleCommandComponent_addCriticalBuff__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4BDE384 = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v18;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields._current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_1C22094(0LL, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v6 = this->fields.aubelist;
  if ( !v6 )
    goto LABEL_25;
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
  for ( j = 0; j != 5; ++j )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( j >= commandCompArray->max_length )
LABEL_26:
      sub_1C2209C(aubelist, method);
    v11 = &commandCompArray->obj.klass + (int)j;
    v12 = (BattleCommandComponent_o *)v11[4];
    if ( !v12 )
      goto LABEL_25;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__IsMaxViewCritical(
                                                                         (BattleCommandComponent_o *)v11[4],
                                                                         0LL);
    if ( ((unsigned __int8)aubelist & 1) == 0 )
    {
      aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                           v12,
                                                                           0LL);
      if ( (int)aubelist >= 1 )
      {
        v13 = (int)aubelist;
        while ( 1 )
        {
          commandTransformArray = this->fields.commandTransformArray;
          if ( !commandTransformArray )
            break;
          if ( j >= commandTransformArray->max_length )
            goto LABEL_26;
          v15 = commandTransformArray->m_Items[j];
          v16 = (System_Action_object__o *)sub_1C22084(System_Action_GameObject__TypeInfo);
          System_Action_object____ctor(v16, (Il2CppObject *)v12, Method_BattleCommandComponent_addCriticalBuff__, 0LL);
          BattlePerformanceCommandCard__MoveNotTween(this, v15, (System_Action_GameObject__o *)v16, v17);
          if ( !--v13 )
            goto LABEL_21;
        }
LABEL_25:
        sub_1C22094(aubelist, method);
      }
LABEL_21:
      BattleCommandComponent__ResetPassStarCount(v12, 0LL);
      if ( v12->fields.selectflg )
        BattleCommandComponent__updateSelectedEffect(v12, 0LL);
    }
  }
  BattlePerformanceCommandCard__updateBuffIcon(this, method);
}


void __fastcall BattlePerformanceCommandCard__PlayFlash(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *v6; // x8
  struct BattleCommandComponent_array *v7; // x8

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_11;
  if ( !selectedcomponents->max_length )
    goto LABEL_12;
  v4 = this;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[0];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 0, combo, 0LL);
  v6 = v4->fields.selectedcomponents;
  if ( !v6 )
    goto LABEL_11;
  if ( v6->max_length <= 1 )
    goto LABEL_12;
  this = (BattlePerformanceCommandCard_o *)v6->m_Items[1];
  if ( !this
    || (BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 1, combo, 0LL),
        (v7 = v4->fields.selectedcomponents) == 0LL) )
  {
LABEL_11:
    sub_1C22094(this, combo);
  }
  if ( v7->max_length <= 2 )
LABEL_12:
    sub_1C2209C(this, combo);
  this = (BattlePerformanceCommandCard_o *)v7->m_Items[2];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 2, combo, 0LL);
}


void __fastcall BattlePerformanceCommandCard__PlayFlashComboSvt(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *v6; // x8
  struct BattleCommandComponent_array *v7; // x8

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_11;
  if ( !selectedcomponents->max_length )
    goto LABEL_12;
  v4 = this;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[0];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 0, combo, 0LL);
  v6 = v4->fields.selectedcomponents;
  if ( !v6 )
    goto LABEL_11;
  if ( v6->max_length <= 1 )
    goto LABEL_12;
  this = (BattlePerformanceCommandCard_o *)v6->m_Items[1];
  if ( !this
    || (BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 1, combo, 0LL),
        (v7 = v4->fields.selectedcomponents) == 0LL) )
  {
LABEL_11:
    sub_1C22094(this, combo);
  }
  if ( v7->max_length <= 2 )
LABEL_12:
    sub_1C2209C(this, combo);
  this = (BattlePerformanceCommandCard_o *)v7->m_Items[2];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 2, combo, 0LL);
}


void __fastcall BattlePerformanceCommandCard__PlayFlashExtra(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *selectedcomponents; // x8

  v2 = this;
  if ( (byte_4BDE379 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&StringLiteral_19153/*"ef_excard01"*/);
    byte_4BDE379 = 1;
  }
  selectedcomponents = v2->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_7;
  if ( selectedcomponents->max_length <= 3 )
    sub_1C2209C(this, method);
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
LABEL_7:
    sub_1C22094(this, method);
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_19153/*"ef_excard01"*/, 5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
        BattlePerformanceCommandCard_o *this,
        BattleData_o *data,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v6; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x8
  unsigned __int64 v8; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v10; // x23
  BattlePerformanceCommandCard_o *v11; // x25
  float COMMAND_STAMP_POS_Y; // w1
  __int64 v13; // x8
  struct BattleCommandComponent_array *v14; // x8
  BattlePerformanceCommandCard_o *v15; // x23
  bool activeSelf; // w24
  float v17; // s0
  float v18; // s1
  float v19; // s2
  struct BattleCommandComponent_array *v20; // x8
  float v21; // s8
  float v22; // s9
  float v23; // s10
  struct BattleCommandComponent_array *v24; // x8
  struct BattleCommandComponent_array *v25; // x8
  struct BattleCommandComponent_array *v26; // x8
  struct BattleCommandComponent_array *v27; // x8
  struct BattleCommandComponent_array *v28; // x8
  __int64 v29; // [xsp+8h] [xbp-78h] BYREF
  System_Nullable_int__o v30; // 0:x0.8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4BDE380 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_BattleCommandData___);
    sub_1C21E38(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&Method_System_Nullable_int__get_HasValue__);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE380 = 1;
  }
  selectedcomponents = v6->fields.selectedcomponents;
  if ( selectedcomponents )
  {
    v8 = 0LL;
    while ( 1 )
    {
      max_length = selectedcomponents->max_length;
      if ( (__int64)v8 >= (int)max_length )
        break;
      if ( v8 >= max_length )
        goto LABEL_46;
      v10 = (UnityEngine_Object_o *)selectedcomponents->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !data )
          goto LABEL_44;
        this = (BattlePerformanceCommandCard_o *)BasicHelper__IndexValue_object_(
                                                   (System_Object_array *)data->fields.selectcommandlist,
                                                   v8,
                                                   0LL,
                                                   (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_BattleCommandData___);
        v11 = this;
        if ( this )
        {
          COMMAND_STAMP_POS_Y = this->fields.COMMAND_STAMP_POS_Y;
          v30 = (System_Nullable_int__o)&v29;
          v29 = 0LL;
          System_Nullable_int____ctor(
            v30,
            SLODWORD(COMMAND_STAMP_POS_Y),
            (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
          v13 = v29;
          if ( !svtData )
            goto LABEL_44;
        }
        else
        {
          v13 = 0LL;
          if ( !svtData )
            goto LABEL_44;
        }
        if ( (_BYTE)v13 && svtData->fields.uniqueId == HIDWORD(v13) )
        {
          v14 = v6->fields.selectedcomponents;
          if ( !v14 )
            goto LABEL_44;
          if ( v8 >= v14->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v14->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
          if ( !this )
            goto LABEL_44;
          v15 = this;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)v15,
                                                     0LL);
          if ( !this )
            goto LABEL_44;
          *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
          v20 = v6->fields.selectedcomponents;
          if ( !v20 )
            goto LABEL_44;
          if ( v8 >= v20->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v20->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          v21 = v17;
          v22 = v18;
          v23 = v19;
          BattleCommandComponent__UpdateSealStatus((BattleCommandComponent_o *)this, 0LL);
          v24 = v6->fields.selectedcomponents;
          if ( !v24 )
            goto LABEL_44;
          if ( v8 >= v24->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v24->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__setData(
            (BattleCommandComponent_o *)this,
            (BattleCommandData_o *)v11,
            svtData,
            0,
            1,
            0,
            0,
            0LL);
          v25 = v6->fields.selectedcomponents;
          if ( !v25 )
            goto LABEL_44;
          if ( v8 >= v25->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v25->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)this, 0, 0LL);
          v26 = v6->fields.selectedcomponents;
          if ( !v26 )
            goto LABEL_44;
          if ( v8 >= v26->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v26->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__UpdateCommandUpDetailLabel((BattleCommandComponent_o *)this, v8, 0LL);
          v27 = v6->fields.selectedcomponents;
          if ( !v27 )
            goto LABEL_44;
          if ( v8 >= v27->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v27->m_Items[v8];
          if ( !this )
LABEL_44:
            sub_1C22094(this, data);
          this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getCriticalCount(
                                                     (BattleCommandComponent_o *)this,
                                                     0LL);
          if ( (int)this >= 1 )
          {
            v28 = v6->fields.selectedcomponents;
            if ( !v28 )
              goto LABEL_44;
            if ( v8 >= v28->max_length )
LABEL_46:
              sub_1C2209C(this, data);
            this = (BattlePerformanceCommandCard_o *)v28->m_Items[v8];
            if ( !this )
              goto LABEL_44;
            BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)this, 1, 0LL);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v15, activeSelf, 0LL);
          v31.fields.x = v21;
          v31.fields.y = v22;
          v31.fields.z = v23;
          GameObjectExtensions__SetLocalScale((UnityEngine_GameObject_o *)v15, v31, 0LL);
        }
      }
      selectedcomponents = v6->fields.selectedcomponents;
      ++v8;
      if ( !selectedcomponents )
        goto LABEL_44;
    }
  }
}


void __fastcall BattlePerformanceCommandCard__ResetCardCriticalLabel(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__resetCriticalLabel((BattleCommandComponent_o *)this, 0LL);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceCommandCard__ResetCommandCardPassData(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  unsigned __int64 i; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8

  v2 = this;
  for ( i = 0LL; i != 5; ++i )
  {
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_7;
    if ( i >= commandCompArray->max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[i];
    if ( !this )
LABEL_7:
      sub_1C22094(this, method);
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)this, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__ResetNoblePhantasmCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 i; // x22
  struct BattleCommandComponent_array *commandCompArray; // x8
  UnityEngine_Object_o *v5; // x20

  v2 = this;
  if ( (byte_4BDE3A8 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE3A8 = 1;
  }
  for ( i = 9LL; i != 12; ++i )
  {
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
LABEL_13:
      sub_1C22094(this, method);
    if ( i - 4 >= (unsigned __int64)commandCompArray->max_length )
      sub_1C2209C(this, method);
    v5 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + i);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v5 )
        goto LABEL_13;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v5, 0LL, 0LL, 0, 1, 0, 1, 0LL);
    }
  }
}


void __fastcall BattlePerformanceCommandCard__SetBackTacticalButton(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backTacticalButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1

  backTacticalButton = (UnityEngine_Component_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    sub_1C22094(0LL, active);
  gameObject = UnityEngine_Component__get_gameObject(backTacticalButton, 0LL);
  if ( active )
    AndroidBackKeyManager__AddBackBtn(gameObject, v6);
  else
    AndroidBackKeyManager__RemoveBackBtn(gameObject, v6);
}


void __fastcall BattlePerformanceCommandCard__SetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        System_Collections_Generic_List_BattleCommandData__o *baselist,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.baseCommandList = baselist;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.baseCommandList,
    (int64_t)baselist,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePerformanceCommandCard__SetCommandCardEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__UpdateCommandCardEffect((BattleCommandComponent_o *)this, 0LL);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetCommandCardEffectActive(
        BattlePerformanceCommandCard_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v6; // x21
  int max_length; // w9
  unsigned int v8; // w22
  __int64 v9; // x8
  float v10; // s0
  struct BattleCommandComponent_array *v11; // x8

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_11:
    sub_1C22094(this, value);
  v4 = this;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_13;
    v9 = *((_QWORD *)&commandCompArray->obj.klass + v6);
    if ( v9 )
    {
      this = *(BattlePerformanceCommandCard_o **)(v9 + 360);
      if ( this )
      {
        this = (BattlePerformanceCommandCard_o *)(*(__int64 (__fastcall **)(BattlePerformanceCommandCard_o *, Il2CppClass *, const MethodInfo *))&this->klass[1]._1.this_arg.bits)(
                                                   this,
                                                   this->klass[1]._1.element_class,
                                                   method);
        v11 = v4->fields.commandCompArray;
        if ( v11 )
        {
          if ( v8 >= v11->max_length )
LABEL_13:
            sub_1C2209C(this, value);
          this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v11->obj.klass + v6);
          if ( this )
          {
            BattleCommandComponent__CardEffectSetActive((BattleCommandComponent_o *)this, v10 > 0.0 && value, 0LL);
            commandCompArray = v4->fields.commandCompArray;
            ++v6;
            if ( commandCompArray )
              continue;
          }
        }
      }
    }
    goto LABEL_11;
  }
}


void __fastcall BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x22
  int max_length; // w9
  unsigned int v6; // w23
  __int64 v7; // x8
  BattleCommandData_o *v8; // x20
  int32_t firstaura_b_high; // w3
  int v10; // w2
  BattlePerformanceCommandCard_o *v11; // x21
  int v12; // w8
  int v13; // w8
  struct BattleCommandComponent_array *v14; // x8
  BattleCommandComponent_o *v15; // x8

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_19:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v6 = v4 - 4;
    if ( (int)v4 - 4 >= max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_21;
    v7 = *((_QWORD *)&commandCompArray->obj.klass + v4);
    if ( v7 )
    {
      v8 = *(BattleCommandData_o **)(v7 + 376);
      if ( v8 && !BattleCommandData__isTreasureDvc(*(BattleCommandData_o **)(v7 + 376), 0LL) )
      {
        this = (BattlePerformanceCommandCard_o *)BattleCommandData__GetCommandCardTypeChangeBuff(v8, 0LL);
        if ( this )
        {
          v11 = this;
          this = (BattlePerformanceCommandCard_o *)BattleCommandData__IsCommandCardTypeChanged(v8, 0LL);
          v12 = *((_DWORD *)&v11->fields.UnityEngine_Behaviour_Fields + 1);
          firstaura_b_high = HIDWORD(v11->fields.firstaura_b);
          v13 = v12 + 1 >= 0 ? v12 + 1 : v12 + 2;
          v10 = v13 >> 1;
        }
        else
        {
          firstaura_b_high = 0;
          v10 = 0;
        }
      }
      else
      {
        firstaura_b_high = 0;
        v10 = 0;
        this = 0LL;
      }
      v14 = v3->fields.commandCompArray;
      if ( v14 )
      {
        if ( v6 >= v14->max_length )
LABEL_21:
          sub_1C2209C(this, method);
        v15 = (BattleCommandComponent_o *)*((_QWORD *)&v14->obj.klass + v4);
        if ( v15 )
        {
          BattleCommandComponent__SetCommandCardTypeChange(v15, (unsigned __int8)this & 1, v10, firstaura_b_high, 0LL);
          commandCompArray = v3->fields.commandCompArray;
          ++v4;
          if ( commandCompArray )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetCommandPhaseButtonActive(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *highSpeedButton; // x0
  bool v6; // w20
  const MethodInfo *v7; // x2

  highSpeedButton = this->fields.highSpeedButton;
  if ( !highSpeedButton
    || (UnityEngine_GameObject__SetActive(highSpeedButton, active, 0LL),
        (highSpeedButton = (UnityEngine_GameObject_o *)this->fields.backTacticalButton) == 0LL)
    || (highSpeedButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)highSpeedButton, 0LL)) == 0LL )
  {
    sub_1C22094(highSpeedButton, active);
  }
  v6 = active;
  UnityEngine_GameObject__SetActive(highSpeedButton, v6, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, v6, v7);
}


void __fastcall BattlePerformanceCommandCard__SetDownloadEventSprite(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v4; // x21
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v6; // x20

  v2 = this;
  if ( (byte_4BDE3A6 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE3A6 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_1C22094(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (__int64)v4 >= (int)max_length )
      break;
    if ( v4 >= max_length )
      sub_1C2209C(this, method);
    v6 = (UnityEngine_Object_o *)commandCompArray->m_Items[v4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_13;
      BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)v6, 0LL);
    }
    commandCompArray = v2->fields.commandCompArray;
    ++v4;
    if ( !commandCompArray )
      goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetLabelActive(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v6; // x22
  bool v7; // w20
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v9; // x21

  v4 = this;
  if ( (byte_4BDE3A4 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE3A4 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( commandCompArray )
  {
    v6 = 0LL;
    v7 = active;
    while ( 1 )
    {
      max_length = commandCompArray->max_length;
      if ( (__int64)v6 >= (int)max_length )
        break;
      if ( v6 >= max_length )
        sub_1C2209C(this, active);
      v9 = (UnityEngine_Object_o *)commandCompArray->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_13;
        BattleCommandComponent__SetLabelActive((BattleCommandComponent_o *)v9, v7, 0LL);
        BattleCommandComponent__SetLabelAssistActive((BattleCommandComponent_o *)v9, v7, 0LL);
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( !commandCompArray )
LABEL_13:
        sub_1C22094(this, active);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetSelectStamp(
        BattlePerformanceCommandCard_o *this,
        int32_t targetindex,
        UnityEngine_Vector3_o pos,
        BattleCommandComponent_o *bc,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  BattlePerformanceCommandCard_o *v10; // x21
  Spawner_o *spawner; // x22
  UnityEngine_Object_o *selectCommandPrefab; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v14; // s12
  float v15; // s13
  float v16; // s11
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *commandrootTransform; // x1
  UnityEngine_GameObject_o *v19; // x21
  BattlePerformanceCommandCard_o *v20; // x22
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v10 = this;
  if ( (byte_4BDE364 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___);
    byte_4BDE364 = 1;
  }
  spawner = v10->fields.spawner;
  selectCommandPrefab = (UnityEngine_Object_o *)v10->fields.selectCommandPrefab;
  if ( !byte_4BD6BB1 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v15 = static_fields->zeroVector.fields.x;
  v14 = static_fields->zeroVector.fields.y;
  v16 = static_fields->zeroVector.fields.z;
  if ( !byte_4BD6BB7 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
    byte_4BD6BB7 = 1;
  }
  if ( !spawner )
    goto LABEL_16;
  v21.fields.x = v15;
  v21.fields.y = v14;
  v21.fields.z = v16;
  v17 = Spawner__Spawn_39212088(
          spawner,
          selectCommandPrefab,
          v21,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL);
  commandrootTransform = (UnityEngine_Component_o *)v10->fields.commandrootTransform;
  v19 = v17;
  GameObjectExtensions__SetParent(v17, commandrootTransform, 0LL);
  if ( !v19 )
    goto LABEL_16;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
  v20 = this;
  if ( !byte_4BD6BB6 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v20,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v19,
                                                    (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___)) == 0LL)
    || (BattleSelectCommandComponent__setIndex((BattleSelectCommandComponent_o *)this, targetindex, 0LL), !bc)
    || (BattleCommandComponent__setSelectStamp(bc, v19, 0LL),
        (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(v19, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_1C22094(this, *(_QWORD *)&targetindex);
  }
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v22, 0LL);
  UnityEngine_GameObject__SetActive(v19, 0, 0LL);
  UnityEngine_GameObject__SetActive(v19, 1, 0LL);
}


void __fastcall BattlePerformanceCommandCard__SetSpecialCommandCardBuff(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattlePerformanceCommandCard__updateCardFix(this, method);
  BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(this, v3);
}


void __fastcall BattlePerformanceCommandCard__SetStatusObjArray(
        BattlePerformanceCommandCard_o *this,
        BattleServantParamComponent_array *statusObjArray,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.servantStatusObjArray = statusObjArray;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.servantStatusObjArray,
    (int64_t)statusObjArray,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePerformanceCommandCard__SetupCommandCardCommonPrefabs(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v6; // x1
  AssetData_o *v7; // x20
  Il2CppObject *Object_object__49880776; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4BDE3A7 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&StringLiteral_17485/*"bit_1stbonus_q"*/);
    sub_1C21E38(&StringLiteral_17484/*"bit_1stbonus_b"*/);
    sub_1C21E38(&StringLiteral_17505/*"bit_com_grand_m"*/);
    sub_1C21E38(&StringLiteral_17506/*"bit_com_trinity_m"*/);
    sub_1C21E38(&StringLiteral_17483/*"bit_1stbonus_a"*/);
    byte_4BDE3A7 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  v7 = AssetStorage;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              AssetStorage,
                              (System_String_o *)StringLiteral_17505/*"bit_com_grand_m"*/,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  this->fields.cutin_grand_m = (struct UnityEngine_GameObject_o *)Object_object__49880776;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.cutin_grand_m,
    (int64_t)Object_object__49880776,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = AssetData__GetObject_object__49880776(
          v7,
          (System_String_o *)StringLiteral_17506/*"bit_com_trinity_m"*/,
          (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  this->fields.cutin_trinity_m = (struct UnityEngine_GameObject_o *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.cutin_trinity_m, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = AssetData__GetObject_object__49880776(
          v7,
          (System_String_o *)StringLiteral_17485/*"bit_1stbonus_q"*/,
          (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  this->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.firstbonus_q, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = AssetData__GetObject_object__49880776(
          v7,
          (System_String_o *)StringLiteral_17483/*"bit_1stbonus_a"*/,
          (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  this->fields.firstbonus_a = (struct UnityEngine_GameObject_o *)v29;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.firstbonus_a, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = AssetData__GetObject_object__49880776(
          v7,
          (System_String_o *)StringLiteral_17484/*"bit_1stbonus_b"*/,
          (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  this->fields.firstbonus_b = (struct UnityEngine_GameObject_o *)v36;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.firstbonus_b, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  AssetStorage = (AssetData_o *)this->fields.spawner;
  if ( !AssetStorage
    || (Spawner__Precache_39210120((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_q, 1, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0LL)
    || (Spawner__Precache_39210120((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_a, 1, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0LL) )
  {
LABEL_12:
    sub_1C22094(AssetStorage, v6);
  }
  Spawner__Precache_39210120((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_b, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__StartCountupCommandStar(
        BattlePerformanceCommandCard_o *this,
        bool isZeroStart,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v6; // x22
  int max_length; // w9
  Il2CppClass **v8; // x8
  BattleCommandComponent_o *v9; // x21

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_12:
    sub_1C22094(this, isZeroStart);
  v4 = this;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2209C(this, isZeroStart);
    v8 = &commandCompArray->obj.klass + v6;
    v9 = (BattleCommandComponent_o *)v8[4];
    if ( v9 )
    {
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__IsMaxViewCritical(
                                                 (BattleCommandComponent_o *)v8[4],
                                                 0LL);
      if ( ((unsigned __int8)this & 1) == 0 && v9->fields.data )
      {
        if ( isZeroStart )
          BattleCommandComponent__startCountUp(v9, 0LL);
        else
          BattleCommandComponent__updateCount(v9, 0, 0LL);
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_12;
  }
}


void __fastcall BattlePerformanceCommandCard__Update(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  int32_t firstBonusAnimationWaitTime; // w8
  bool v4; // vf
  int32_t v5; // w8
  char v6; // w22
  UnityEngine_Animation_o *touches; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v10; // x20
  unsigned __int64 v11; // x23
  void **p_monitor; // x21
  UnityEngine_Animation_c *v13; // x8
  UnityEngine_Animation_o *v14; // x20
  unsigned __int64 v15; // x22
  void **v16; // x21
  UnityEngine_Touch_o v17; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-90h] BYREF

  memset(&dest, 0, sizeof(dest));
  memset(&v17, 0, sizeof(v17));
  firstBonusAnimationWaitTime = this->fields.firstBonusAnimationWaitTime;
  v4 = __OFSUB__(firstBonusAnimationWaitTime, 1);
  v5 = firstBonusAnimationWaitTime - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.firstBonusAnimationWaitTime = v5;
    v6 = !v5 && this->fields.drawcount == 1 && this->fields.isTouchCanceled;
    touches = (UnityEngine_Animation_o *)UnityEngine_Input__get_touches(0LL);
    if ( !touches )
      goto LABEL_29;
    klass = touches[1].klass;
    v10 = touches;
    if ( (int)klass >= 1 )
    {
      v11 = 0LL;
      p_monitor = &touches[1].monitor;
      while ( v11 < (unsigned int)klass )
      {
        memmove(&dest, p_monitor, 0x44u);
        touches = (UnityEngine_Animation_o *)UnityEngine_Touch__get_phase(&dest, 0LL);
        if ( !(_DWORD)touches && this->fields.isTouchCanceled )
          v6 |= this->fields.drawcount == 1;
        LODWORD(klass) = v10[1].klass;
        ++v11;
        p_monitor = (void **)((char *)p_monitor + 68);
        if ( (__int64)v11 >= (int)klass )
          goto LABEL_14;
      }
LABEL_28:
      sub_1C2209C(touches, v8);
    }
LABEL_14:
    if ( (v6 & 1) != 0 )
    {
      touches = this->fields.firstBonusAnimation;
      if ( touches )
      {
        UnityEngine_Animation__Stop(touches, 0LL);
        touches = this->fields.firstBonusAnimation;
        if ( touches )
        {
          UnityEngine_Animation__Play(touches, 0LL);
          this->fields.isTouchCanceled = 0;
          goto LABEL_18;
        }
      }
LABEL_29:
      sub_1C22094(touches, v8);
    }
  }
LABEL_18:
  touches = (UnityEngine_Animation_o *)UnityEngine_Input__get_touches(0LL);
  if ( !touches )
    goto LABEL_29;
  v13 = touches[1].klass;
  v14 = touches;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    v16 = &touches[1].monitor;
    while ( v15 < (unsigned int)v13 )
    {
      memmove(&v17, v16, 0x44u);
      if ( !UnityEngine_Touch__get_phase(&v17, 0LL) )
      {
        *(_WORD *)&this->fields.isTouchBegan = 1;
        this->fields.isTouchCanceled = 0;
      }
      touches = (UnityEngine_Animation_o *)UnityEngine_Touch__get_phase(&v17, 0LL);
      if ( (_DWORD)touches == 3 )
        *(_WORD *)&this->fields.isTouchBegan = 256;
      LODWORD(v13) = v14[1].klass;
      ++v15;
      v16 = (void **)((char *)v16 + 68);
      if ( (__int64)v15 >= (int)v13 )
        goto LABEL_27;
    }
    goto LABEL_28;
  }
LABEL_27:
  BattlePerformanceCommandCard__UpdateSpecialCommandCardBuffIcon(this, v8);
}


void __fastcall BattlePerformanceCommandCard__UpdateCommandCriticalCount(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_9:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      if ( this->fields.commandAssistDetailWindow )
      {
        BattleCommandComponent__updateCount((BattleCommandComponent_o *)this, 0, 0LL);
        commandCompArray = v3->fields.commandCompArray;
      }
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__UpdateRemainingCardBuff(
        BattlePerformanceCommandCard_o *this,
        int32_t nowCardIndex,
        const MethodInfo *method)
{
  int32_t v3; // w19
  void *selectedcomponents; // x0
  int32_t v6; // w8
  __int64 v7; // x23
  __int64 v8; // x24
  Il2CppObject *v9; // x21
  struct BattleCommandComponent_array *v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  struct BattleCommandComponent_array *v13; // x8
  BattleCommandComponent_o *v14; // x8

  v3 = nowCardIndex;
  if ( (byte_4BDE3A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_BattleCommandComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE3A5 = 1;
  }
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_22:
    sub_1C22094(selectedcomponents, *(_QWORD *)&nowCardIndex);
  v6 = *((_DWORD *)selectedcomponents + 6);
  if ( v6 > v3 )
  {
    v7 = v3 + 4LL;
    v8 = 1LL - v6;
    while ( 1 )
    {
      v9 = BasicHelper__IndexValue_object_(
             (System_Object_array *)selectedcomponents,
             v3,
             0LL,
             (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_BattleCommandComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      selectedcomponents = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
      if ( ((unsigned __int8)selectedcomponents & 1) == 0 )
      {
        v10 = this->fields.selectedcomponents;
        if ( !v10 )
          goto LABEL_22;
        if ( v3 >= v10->max_length )
          goto LABEL_23;
        v11 = *((_QWORD *)&v10->obj.klass + v7);
        if ( !v11 )
          goto LABEL_22;
        v12 = *(_QWORD *)(v11 + 376);
        if ( v12 )
        {
          selectedcomponents = this->fields.Bdata;
          if ( !selectedcomponents )
            goto LABEL_22;
          selectedcomponents = BattleData__getServantData(
                                 (BattleData_o *)selectedcomponents,
                                 *(_DWORD *)(v12 + 40),
                                 0LL);
          if ( selectedcomponents )
          {
            v13 = this->fields.selectedcomponents;
            if ( !v13 )
              goto LABEL_22;
            if ( v3 >= v13->max_length )
LABEL_23:
              sub_1C2209C(selectedcomponents, *(_QWORD *)&nowCardIndex);
            v14 = (BattleCommandComponent_o *)*((_QWORD *)&v13->obj.klass + v7);
            if ( !v14 )
              goto LABEL_22;
            BattleCommandComponent__setBuffIconList(v14, *((BattleBuffData_o **)selectedcomponents + 98), 0LL);
          }
        }
      }
      if ( v8 + v7 == 4 )
        return;
      selectedcomponents = this->fields.selectedcomponents;
      ++v7;
      ++v3;
    }
  }
}


void __fastcall BattlePerformanceCommandCard__UpdateSpecialCommandCardBuffIcon(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v4; // x0
  __int64 v5; // x1
  float deltaTime; // s0
  struct BattleCommandComponent_array *v7; // x8
  float v8; // s8
  __int64 v9; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( commandCompArray && *(_QWORD *)&commandCompArray->max_length )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v7 = this->fields.commandCompArray;
    if ( !v7 )
LABEL_9:
      sub_1C22094(v4, v5);
    v8 = deltaTime;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = v7->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
        sub_1C2209C(v4, v5);
      v4 = v7->m_Items[v9];
      if ( v4 )
      {
        BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(v4, v8, 0LL);
        v7 = this->fields.commandCompArray;
        ++v9;
        if ( v7 )
          continue;
      }
      goto LABEL_9;
    }
  }
}


void __fastcall BattlePerformanceCommandCard___selectOK_b__112_0(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4BDE3AB & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11709/*"SELECT"*/);
    byte_4BDE3AB = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11709/*"SELECT"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__back2Tactical(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *commandCompArray; // x21
  int max_length; // w8
  unsigned int v5; // w22
  Il2CppClass **v6; // x8
  BattleCommandComponent_o *v7; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4BDE396 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3632/*"CLOSE"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&StringLiteral_17062/*"anim_wait"*/);
    byte_4BDE396 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_21;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C2209C(this, method);
      v6 = &commandCompArray->obj.klass + (int)v5;
      v7 = (BattleCommandComponent_o *)v6[4];
      if ( !v7 )
        break;
      MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)v6[4], 0LL);
      if ( (MarkIndex & 0x80000000) == 0 && v7->fields.selectflg )
        BattlePerformanceCommandCard__unselectCommandCard(v2, v7, MarkIndex, v9);
      if ( BattleCommandComponent__isTreasureDvc(v7, 0LL) )
      {
        BattleCommandComponent__stopAnimation(v7, 0LL);
        BattleCommandComponent__ReleaseNobleGaugeEffect(v7, 0LL);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v7,
                                                   0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkCriticalPointValid(v7, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 && !v2->fields.isPrevStar )
        v2->fields.isPrevStar = 1;
      max_length = commandCompArray->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_18;
    }
LABEL_21:
    sub_1C22094(this, method);
  }
LABEL_18:
  UnityEngine_MonoBehaviour__StopCoroutine_70855504((UnityEngine_MonoBehaviour_o *)v2, v2->fields.openNpCoroutine, 0LL);
  BattlePerformanceCommandCard__cancelFirstBonus(v2, v10);
  this = (BattlePerformanceCommandCard_o *)v2->fields.perf;
  if ( !this )
    goto LABEL_21;
  BattlePerformance__backTacticalMode((BattlePerformance_o *)this, 0LL);
  BattlePerformanceCommandCard__playAnimation(v2, (System_String_o *)StringLiteral_17062/*"anim_wait"*/, v11);
  this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm;
  if ( !this )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3632/*"CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackCommandTutorial01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector2_array *Instance; // x0
  __int64 v4; // x1
  unsigned int max_length; // w8
  UnityEngine_Vector2_array *v6; // x20
  UnityEngine_Rect_o v7; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4BDE39E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&UnityEngine_Vector2___TypeInfo);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDE39E = 1;
  }
  Instance = (UnityEngine_Vector2_array *)sub_1C21EE0(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !Instance )
    goto LABEL_11;
  max_length = Instance->max_length;
  v6 = Instance;
  if ( !max_length
    || (*(_QWORD *)&Instance->m_Items[0].fields.y = 0LL, max_length == 1)
    || (*(_QWORD *)&Instance->m_Items[1].fields.y = 3276275712LL, max_length <= 2) )
  {
    sub_1C2209C(Instance, v4);
  }
  *(_QWORD *)&Instance->m_Items[2].fields.y = 3284664320LL;
  Instance = (UnityEngine_Vector2_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (v7.fields.m_XMin = -500.0,
        v7.fields.m_YMin = -230.0,
        v7.fields.m_Width = 600.0,
        v7.fields.m_Height = 250.0,
        CommonUI__OpenTutorialArrowMark_31154852((CommonUI_o *)Instance, v6, 0.0, v7, 0LL, 0LL),
        (Instance = (UnityEngine_Vector2_array *)this->fields.commandfsm) == 0LL) )
  {
LABEL_11:
    sub_1C22094(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackTutorial50(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4BDE39F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDE39F = 1;
  }
  commandfsm = this->fields.commandfsm;
  this->fields.isTouchNgInTutorial = 0;
  if ( !commandfsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackTutorialSpeedNext(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v4; // x2
  BattlePerformanceCommandCard_o *v5; // x0
  UnityEngine_Rect_array *TutorialSquare01; // x1
  UnityEngine_Vector2_array *v7; // x19
  const MethodInfo *v8; // x2
  UnityEngine_Rect_array *v9; // x0
  __int64 v10; // x1
  UnityEngine_Vector2_o v11; // 0:s1.4,4:s2.4

  if ( (byte_4BDE3A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDE3A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                           (BattlePerformanceCommandCard_o *)Instance,
                                           this->fields.TutorialArrow01,
                                           v4);
  TutorialSquare01 = this->fields.TutorialSquare01;
  v7 = (UnityEngine_Vector2_array *)v5;
  v9 = BattlePerformanceCommandCard__FSTutorialSquareCard(v5, TutorialSquare01, v8);
  if ( !Instance )
    sub_1C22094(v9, v10);
  v11.fields.x = 0.0;
  v11.fields.y = 0.0;
  CommonUI__OpenTutorialNotificationDialogArrow_31153196(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v7,
    v9,
    0.0,
    v11,
    -1,
    0LL,
    0LL);
}


void __fastcall BattlePerformanceCommandCard__cancelFirstBonus(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusObject; // x20
  Spawner_o *spawner; // x0
  __int64 v5; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v7; // x21
  int max_length; // w9
  Il2CppClass **v9; // x8
  BattleCommandComponent_o *v10; // x20

  if ( (byte_4BDE36A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE36A = 1;
  }
  this->fields.firstAuraType = -1;
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL);
  if ( ((unsigned __int8)spawner & 1) != 0 )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      goto LABEL_14;
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0LL);
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_14:
    sub_1C22094(spawner, v5);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C2209C(spawner, v5);
    v9 = &commandCompArray->obj.klass + v7;
    v10 = (BattleCommandComponent_o *)v9[4];
    if ( v10 )
    {
      BattleCommandComponent__stopFirstAura((BattleCommandComponent_o *)v9[4], 0LL);
      BattleCommandComponent__ResetBoostedCriticalRate(v10, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v7;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__changeDirectCommandCardTouch(
        BattlePerformanceCommandCard_o *this,
        bool enable,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  bool v6; // w22
  __int64 v7; // x24
  bool v8; // w20
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x25
  UnityEngine_Object_o *v11; // x21
  struct BattleCommandComponent_array *v12; // x8
  UnityEngine_Object_o *v13; // x21

  v4 = this;
  if ( (byte_4BDE3A3 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE3A3 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( commandCompArray )
  {
    v6 = enable;
    v7 = 4LL;
    v8 = enable;
    while ( 1 )
    {
      max_length = commandCompArray->max_length;
      v10 = v7 - 4;
      if ( v7 - 4 >= (int)max_length )
        break;
      if ( v10 >= max_length )
        goto LABEL_21;
      v11 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + v7);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v4->fields.commandCompArray;
        if ( !v12 )
          goto LABEL_18;
        if ( v10 >= v12->max_length )
LABEL_21:
          sub_1C2209C(this, enable);
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v12->obj.klass + v7);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_18;
          BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)v13, v8, 0LL);
        }
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v7;
      if ( !commandCompArray )
LABEL_18:
        sub_1C22094(this, enable);
    }
    v4->fields.directCommandCardTouchEnable = v6;
  }
}


void __fastcall BattlePerformanceCommandCard__changeNoSelectCards(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Coroutine_o *openNpCoroutine; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x21
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v7; // w22
  BattleCommandComponent_o *v8; // x20
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  openNpCoroutine = this->fields.openNpCoroutine;
  if ( openNpCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_70855504((UnityEngine_MonoBehaviour_o *)this, openNpCoroutine, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_1C22094(this, openNpCoroutine);
  v5 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= (int)(max_length - 1) )
      break;
    if ( v7 >= max_length )
      goto LABEL_15;
    v8 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v5);
    if ( v8 )
    {
      BattleCommandComponent__stopAnimation(*((BattleCommandComponent_o **)&commandCompArray->obj.klass + v5), 0LL);
      if ( !v8->fields.selectflg )
      {
        p_commandlist = this->fields.p_commandlist;
        if ( !p_commandlist )
          goto LABEL_13;
        if ( v7 >= p_commandlist->max_length )
LABEL_15:
          sub_1C2209C(this, openNpCoroutine);
        v10.fields.r = 0.0;
        v10.fields.g = 0.0;
        v10.fields.b = 0.0;
        v10.fields.a = 0.0;
        TweenColor__Begin(*((UnityEngine_GameObject_o **)&p_commandlist->obj.klass + v5), 0.2, v10, 0LL);
        BattleCommandComponent__stopFirstAura(v8, 0LL);
        BattleCommandComponent__HideAndCancelCountUpFinishEffect(v8, 0LL);
        BattleCommandComponent__ClearCardEffect(v8, 0LL);
      }
      commandCompArray = this->fields.commandCompArray;
      ++v5;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
}


void __fastcall BattlePerformanceCommandCard__checkAutoBattle(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4BDE393 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9435/*"NG"*/);
    byte_4BDE393 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_9435/*"NG"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__checkChainBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v3; // x19
  char v4; // w22
  int v5; // w24
  __int64 i; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_Object_o *v8; // x20
  struct BattleCommandComponent_array *v9; // x8
  UnityEngine_Object_o *chainBonusObject; // x21
  UnityEngine_GameObject_o *chainBonus; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  PartyOrganizationUtility_o *p_chainBonusObject; // x0

  v3 = this;
  if ( (byte_4BDE36C & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE36C = 1;
  }
  v4 = 0;
  v5 = 0;
  for ( i = 4LL; i != 7; ++i )
  {
    selectedcomponents = v3->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_26;
    if ( i - 4 >= (unsigned __int64)selectedcomponents->max_length )
      goto LABEL_27;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&selectedcomponents->obj.klass + i);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_15;
    v9 = v3->fields.selectedcomponents;
    if ( !v9 )
      goto LABEL_26;
    if ( i - 4 >= (unsigned __int64)v9->max_length )
LABEL_27:
      sub_1C2209C(this, *(_QWORD *)&targetIndex);
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v9->obj.klass + i);
    if ( !this )
      goto LABEL_26;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(
                                               (BattleCommandComponent_o *)this,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( ++v5 > 1 )
        v4 = 1;
    }
    else
    {
LABEL_15:
      v5 = 0;
    }
  }
  chainBonusObject = (UnityEngine_Object_o *)v3->fields.chainBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( (v4 & 1) == 0 )
  {
    UnityEngine_Object__Destroy_70869612(chainBonusObject, 0LL);
    p_chainBonusObject = (PartyOrganizationUtility_o *)&v3->fields.chainBonusObject;
    Object = 0LL;
    v3->fields.chainBonusObject = 0LL;
LABEL_24:
    sub_1C21DDC(p_chainBonusObject, (int64_t)Object, v14, v15, v16, v17, v18, v19);
    return;
  }
  if ( UnityEngine_Object__op_Equality(chainBonusObject, 0LL, 0LL) )
  {
    chainBonus = v3->fields.chainBonus;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
    if ( !this )
LABEL_26:
      sub_1C22094(this, *(_QWORD *)&targetIndex);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v3, chainBonus, transform, 0LL, 0LL);
    v3->fields.chainBonusObject = Object;
    p_chainBonusObject = (PartyOrganizationUtility_o *)&v3->fields.chainBonusObject;
    goto LABEL_24;
  }
}


void __fastcall BattlePerformanceCommandCard__checkDrawCount(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4BDE36E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11719/*"SELECT_EXE"*/);
    byte_4BDE36E = 1;
  }
  if ( this->fields.maxdrawcount <= this->fields.drawcount )
  {
    commandfsm = this->fields.commandfsm;
    if ( !commandfsm )
      sub_1C22094(0LL, method);
    PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11719/*"SELECT_EXE"*/, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__checkMaskEnemy(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  unsigned __int64 v3; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *maskSprite; // x20
  int32_t v7; // w1
  UnityEngine_Object_o *v8; // x20

  v2 = this;
  if ( (byte_4BDE36D & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE36D = 1;
  }
  v3 = 0LL;
  while ( 1 )
  {
    selectedcomponents = v2->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_23;
    if ( v3 >= selectedcomponents->max_length )
      sub_1C2209C(this, method);
    v5 = (UnityEngine_Object_o *)selectedcomponents->m_Items[v3];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( ++v3 == 3 )
    {
      maskSprite = (UnityEngine_Object_o *)v2->fields.maskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
      {
        this = (BattlePerformanceCommandCard_o *)v2->fields.maskSprite;
        if ( this )
        {
          v7 = -31;
          goto LABEL_20;
        }
LABEL_23:
        sub_1C22094(this, method);
      }
      return;
    }
  }
  v8 = (UnityEngine_Object_o *)v2->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
  {
    this = (BattlePerformanceCommandCard_o *)v2->fields.maskSprite;
    if ( !this )
      goto LABEL_23;
    v7 = 0;
LABEL_20:
    UIWidget__set_depth((UIWidget_o *)this, v7, 0LL);
  }
}


bool __fastcall BattlePerformanceCommandCard__checkPrevStars(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  return this->fields.isPrevStar;
}


bool __fastcall BattlePerformanceCommandCard__checkSpeedButtonTutorial(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleData_o *Bdata; // x0
  struct BattleData_o *v4; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_4BDE3A0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE3A0 = 1;
  }
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_19;
  if ( !BattleData__isTutorial(Bdata, 0LL) )
    return 0;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  if ( BattleLogic__getTutorialId((BattleLogic_o *)Bdata, 0LL) != 2 )
    goto LABEL_13;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  Bdata = (BattleData_o *)BattleLogic__getTurn((BattleLogic_o *)Bdata, 0LL);
  if ( (_DWORD)Bdata != 2 )
    goto LABEL_13;
  v4 = this->fields.Bdata;
  if ( !v4 )
    goto LABEL_19;
  if ( v4->fields.tutorialState != 10 )
    return 1;
  v4->fields.tutorialState = 20;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__, 0LL);
  if ( !Instance )
LABEL_19:
    sub_1C22094(Bdata, method);
  CommonUI__CloseTutorialNotificationDialogArrow_31153776((CommonUI_o *)Instance, v6, 0LL);
LABEL_13:
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  if ( BattleLogic__getTutorialId((BattleLogic_o *)Bdata, 0LL) != 2 )
    return 0;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  return BattleLogic__getTurn((BattleLogic_o *)Bdata, 0LL) > 2;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__checkTutorial(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  int v4; // w20
  int v5; // w21
  int32_t Turn; // w0
  const MethodInfo *v7; // x2
  Il2CppObject *Instance; // x20
  BattlePerformanceCommandCard_o *v9; // x21
  const MethodInfo *v10; // x2
  BattlePerformanceCommandCard_o *v11; // x22
  const MethodInfo *v12; // x2
  struct BattleLogic_TutorialStringData_array *TSD; // x8
  BattleLogic_TutorialStringData_o *v14; // x8
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  struct BattleLogic_TutorialStringData_array *v17; // x8
  const MethodInfo *v18; // x2
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *v20; // x20
  System_String_o *v21; // x21
  const MethodInfo *v22; // x1
  UnityEngine_Vector2_o FSTutorialArrow22; // kr00_8
  const MethodInfo *v24; // x1
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s3
  struct BattleLogic_TutorialStringData_array *v29; // x8
  BattleLogic_TutorialStringData_o *v30; // x8
  float v31; // s16
  float v32; // s7
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  struct BattleLogic_TutorialStringData_array *v35; // x8
  const MethodInfo *v36; // x2
  struct BattlePerformance_o *v37; // x8
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  struct BattleLogic_TutorialStringData_array *v40; // x8
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  struct BattleLogic_TutorialStringData_array *v43; // x8
  Il2CppObject *v44; // x20
  System_String_o *v45; // x21
  System_Action_o *v46; // x22
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  struct BattleLogic_TutorialStringData_array *v49; // x8
  UnityEngine_Rect_o v50; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BDE39D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceCommandCard_callbackTutorial50__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_13732/*"TUTORIAL_MESSAGE_BATTLE_131"*/);
    sub_1C21E38(&StringLiteral_13728/*"TUTORIAL_MESSAGE_BATTLE_111"*/);
    sub_1C21E38(&StringLiteral_13736/*"TUTORIAL_MESSAGE_BATTLE_153"*/);
    sub_1C21E38(&StringLiteral_13734/*"TUTORIAL_MESSAGE_BATTLE_141"*/);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    sub_1C21E38(&StringLiteral_13741/*"TUTORIAL_MESSAGE_BATTLE_230"*/);
    sub_1C21E38(&StringLiteral_13730/*"TUTORIAL_MESSAGE_BATTLE_122"*/);
    sub_1C21E38(&StringLiteral_13743/*"TUTORIAL_MESSAGE_BATTLE_321"*/);
    sub_1C21E38(&StringLiteral_13740/*"TUTORIAL_MESSAGE_BATTLE_223"*/);
    byte_4BDE39D = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_72;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_72;
  v4 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getWave(this->fields.logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_72;
  v5 = (int)logic;
  Turn = BattleLogic__getTurn(this->fields.logic, 0LL);
  if ( v4 != 3 )
  {
    if ( v4 != 2 )
    {
      if ( v4 == 1 )
      {
        switch ( Turn )
        {
          case 1:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13728/*"TUTORIAL_MESSAGE_BATTLE_111"*/, 0LL);
            v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v9,
                                                      this->fields.TutorialArrow01,
                                                      v10);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v11,
                                       this->fields.TutorialSquare01,
                                       v12);
            TSD = this->fields.TSD;
            if ( !TSD )
              goto LABEL_72;
            if ( !TSD->max_length )
              goto LABEL_73;
            v14 = TSD->m_Items[0];
            if ( !v14 )
              goto LABEL_72;
            goto LABEL_68;
          case 2:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13730/*"TUTORIAL_MESSAGE_BATTLE_122"*/, 0LL);
            v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v9,
                                                      this->fields.TutorialArrow01,
                                                      v38);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v11,
                                       this->fields.TutorialSquare01,
                                       v39);
            v40 = this->fields.TSD;
            if ( !v40 )
              goto LABEL_72;
            if ( v40->max_length <= 1 )
              goto LABEL_73;
            v14 = v40->m_Items[1];
            if ( !v14 )
              goto LABEL_72;
            goto LABEL_68;
          case 3:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13732/*"TUTORIAL_MESSAGE_BATTLE_131"*/, 0LL);
            v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v9,
                                                      this->fields.TutorialArrow01,
                                                      v41);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v11,
                                       this->fields.TutorialSquare01,
                                       v42);
            v43 = this->fields.TSD;
            if ( !v43 )
              goto LABEL_72;
            if ( v43->max_length <= 2 )
              goto LABEL_73;
            v14 = v43->m_Items[2];
            if ( !v14 )
              goto LABEL_72;
            goto LABEL_68;
          case 4:
            v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13734/*"TUTORIAL_MESSAGE_BATTLE_141"*/, 0LL);
            v46 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              v46,
              (Il2CppObject *)this,
              Method_BattlePerformanceCommandCard_callbackTutorial50__,
              0LL);
            if ( !v44 )
              goto LABEL_72;
            CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)v44, v45, -1, v46, 0LL);
            goto LABEL_70;
          case 5:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13736/*"TUTORIAL_MESSAGE_BATTLE_153"*/, 0LL);
            v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v9,
                                                      this->fields.TutorialArrow05,
                                                      v47);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v11,
                                       this->fields.TutorialSquare05,
                                       v48);
            v49 = this->fields.TSD;
            if ( !v49 )
              goto LABEL_72;
            if ( v49->max_length <= 3 )
              goto LABEL_73;
            v14 = v49->m_Items[3];
            if ( v14 )
              goto LABEL_68;
            goto LABEL_72;
          default:
            goto LABEL_70;
        }
      }
      goto LABEL_70;
    }
    if ( Turn == 2 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v7);
      perf = this->fields.perf;
      if ( !perf || !perf->fields.data )
        goto LABEL_72;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, (int32_t)method, v18);
      v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13740/*"TUTORIAL_MESSAGE_BATTLE_223"*/, 0LL);
      FSTutorialArrow22 = BattlePerformanceCommandCard__get_FSTutorialArrow22(this, v22);
      *(UnityEngine_Rect_o *)&v25 = BattlePerformanceCommandCard__get_FSTutorialSquare22(this, v24);
      v29 = this->fields.TSD;
      if ( !v29 )
        goto LABEL_72;
      if ( v29->max_length > 4 )
      {
        v30 = v29->m_Items[4];
        if ( v30 && v20 )
        {
          v31 = v27;
          v32 = v28;
          v50.fields.m_XMin = v25;
          v50.fields.m_YMin = v26;
          v50.fields.m_Width = v31;
          v50.fields.m_Height = v32;
          CommonUI__OpenTutorialNotificationDialogArrow(
            (CommonUI_o *)v20,
            v21,
            FSTutorialArrow22,
            v50,
            v30->fields.way,
            v30->fields.pos,
            v30->fields.size,
            0LL,
            0LL);
          goto LABEL_70;
        }
LABEL_72:
        sub_1C22094(logic, method);
      }
LABEL_73:
      sub_1C2209C(logic, method);
    }
    if ( Turn >= 3 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v7);
      v37 = this->fields.perf;
      if ( !v37 || !v37->fields.data )
        goto LABEL_72;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, (int32_t)method, v36);
    }
LABEL_46:
    BattlePerformanceCommandCard__callbackCommandTutorial01(this, method);
    goto LABEL_70;
  }
  if ( v5 || Turn != 1 )
  {
    if ( v5 != 1 || Turn != 1 )
      goto LABEL_46;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13743/*"TUTORIAL_MESSAGE_BATTLE_321"*/, 0LL);
    v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              v9,
                                              this->fields.TutorialArrow31,
                                              v33);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__get_FSTutorialSquare32(this, v34);
    v35 = this->fields.TSD;
    if ( !v35 )
      goto LABEL_72;
    if ( v35->max_length <= 6 )
      goto LABEL_73;
    v14 = v35->m_Items[6];
    if ( !v14 )
      goto LABEL_72;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13741/*"TUTORIAL_MESSAGE_BATTLE_230"*/, 0LL);
    v11 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              v9,
                                              this->fields.TutorialArrow31,
                                              v15);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(v11, this->fields.TutorialSquare01, v16);
    v17 = this->fields.TSD;
    if ( !v17 )
      goto LABEL_72;
    if ( v17->max_length <= 5 )
      goto LABEL_73;
    v14 = v17->m_Items[5];
    if ( !v14 )
      goto LABEL_72;
  }
LABEL_68:
  if ( !Instance )
    goto LABEL_72;
  CommonUI__OpenTutorialNotificationDialogArrow_31153196(
    (CommonUI_o *)Instance,
    (System_String_o *)v9,
    (UnityEngine_Vector2_array *)v11,
    (UnityEngine_Rect_array *)logic,
    v14->fields.way,
    v14->fields.pos,
    v14->fields.size,
    0LL,
    0LL);
LABEL_70:
  logic = (BattleLogic_o *)this->fields.commandfsm;
  if ( !logic )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__clickBackButton(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattlePerformance_o *perf; // x8

  v2 = this;
  if ( (byte_4BDE395 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&StringLiteral_3660/*"CLOSE_WINDOW"*/);
    byte_4BDE395 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_8;
  this = (BattlePerformanceCommandCard_o *)perf->fields.data;
  if ( !this )
    goto LABEL_8;
  if ( BattleData__isTutorialCard((BattleData_o *)this, 0LL) )
    return;
  this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm;
  if ( !this )
LABEL_8:
    sub_1C22094(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3660/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__closeWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__coStartFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDE365 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo);
    byte_4BDE365 = 1;
  }
  v5 = sub_1C22084(BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo);
  BattlePerformanceCommandCard__coStartFirstBonus_d__119___ctor(
    (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 40) = type;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__colOpenNpCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDE388 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceCommandCard__colOpenNpCard_d__180_TypeInfo);
    byte_4BDE388 = 1;
  }
  v3 = sub_1C22084(BattlePerformanceCommandCard__colOpenNpCard_d__180_TypeInfo);
  BattlePerformanceCommandCard__colOpenNpCard_d__180___ctor(
    (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceCommandCard__comboExecute(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v5; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v9; // x22
  struct System_Int32_array *selectcommand; // x9
  struct BattleCommandData_array *commandlist; // x8
  __int64 v12; // x9
  struct BattlePerformance_o *v13; // x10
  BattleCommandData_o *v14; // x20
  BattleServantData_o *ServantData; // x21
  System_Collections_Generic_List_object__o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Int32_array *v23; // x9
  struct BattleCommandData_array *v24; // x8
  __int64 v25; // x9
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Int32_array *v36; // x8
  struct BattleCommandData_array *v37; // x9
  __int64 v38; // x8
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Int32_array *v49; // x8
  struct BattleCommandData_array *v50; // x9
  __int64 v51; // x8
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  BattleData_o *Bdata; // x21
  struct BattlePerformance_o *v57; // x8
  struct BattleData_o *v58; // x9
  struct BattleActionLogManagerInterface_o *actionLogManager; // x21
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned int globaltargetId; // w22
  __int64 v62; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  struct BattlePerformance_o *v65; // x8
  struct BattleData_o *v66; // x8
  struct System_Int32_array *v67; // x9
  struct BattleActionLogManagerInterface_o *v68; // x21
  BattleActionLogManagerInterface_c *v69; // x8
  unsigned int v70; // w23
  unsigned int v71; // w24
  unsigned int v72; // w22
  __int64 v73; // x9
  BattleActionLogManagerInterface_c **v74; // x10
  __int64 v75; // x0
  struct BattleData_o *v76; // x8
  struct System_Int32_array *v77; // x8
  struct BattleCommandData_array *v78; // x9
  __int64 v79; // x8
  BattleCommandData_o *v80; // x22
  BattleCommandData_o *v81; // x21
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  BattleData_o *v92; // x22
  struct BattlePerformance_o *v93; // x8
  unsigned __int64 i; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct BattlePerformance_o *v102; // x8
  struct BattleData_o *v103; // x8
  struct BattlePerformance_o *v104; // x8
  struct BattlePerformance_o *v105; // x8
  _QWORD *v106; // x0
  System_Reflection_MethodBase_o *v107; // x0

  if ( (byte_4BDE36F & 1) == 0 )
  {
    sub_1C21E38(&BattleActionLogManagerInterface_TypeInfo);
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceCommandCard_comboExecute__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleCommandData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleCommandData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleCommandData__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE36F = 1;
  }
  if ( this->fields.maxdrawcount > this->fields.drawcount )
    return;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_111;
  BattleLogic__SetTimeAccelerationCheckDelayReset(logic, 0, 0LL);
  logic = (BattleLogic_o *)this->fields.perf;
  if ( !logic )
    goto LABEL_111;
  BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)logic, 0LL);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_111;
  logic = (BattleLogic_o *)perf->fields.statusPerf;
  if ( !logic )
    goto LABEL_111;
  BattlePerformanceStatus__SetActiveTotalCriticalStar((BattlePerformanceStatus_o *)logic, 0, 0LL);
  v5 = this->fields.perf;
  if ( !v5 )
    goto LABEL_111;
  data = v5->fields.data;
  if ( !data )
    goto LABEL_111;
  data->fields.isCalcCritical = 1;
  logic = (BattleLogic_o *)this->fields.backTacticalButton;
  if ( !logic )
    goto LABEL_111;
  logic = (BattleLogic_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)logic, 0LL);
  if ( !logic )
    goto LABEL_111;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 0, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 0, v7);
  logic = (BattleLogic_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !logic )
    goto LABEL_111;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)logic, 0LL);
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  logic = (BattleLogic_o *)UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL);
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    logic = (BattleLogic_o *)this->fields.spawner;
    if ( !logic )
      goto LABEL_111;
    Spawner__Despawn((Spawner_o *)logic, this->fields.firstBonusObject, 1, 0LL);
  }
  if ( this->fields.maxdrawcount >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      selectcommand = this->fields.selectcommand;
      if ( !selectcommand )
        break;
      if ( (unsigned int)v9 >= selectcommand->max_length )
        goto LABEL_112;
      commandlist = this->fields.commandlist;
      if ( !commandlist )
        break;
      v12 = selectcommand->m_Items[v9 + 1];
      if ( (unsigned int)v12 >= commandlist->max_length )
        goto LABEL_112;
      v13 = this->fields.perf;
      if ( !v13 )
        break;
      v14 = commandlist->m_Items[v12];
      if ( !v14 )
        break;
      logic = (BattleLogic_o *)v13->fields.data;
      if ( !logic )
        break;
      ServantData = BattleData__getServantData((BattleData_o *)logic, v14->fields.uniqueId, 0LL);
      logic = (BattleLogic_o *)BattleCommandData__isTreasureDvc(v14, 0LL);
      if ( ((unsigned __int8)logic & 1) != 0 )
      {
        if ( ServantData )
          BattleServantData__SetSelectedTreasureDevice(ServantData, 0LL);
      }
      else
      {
        BattleCommandData__SetSelectedType(v14, 0LL);
        if ( ServantData )
          BattleServantData__SetOverwriteSvtCardType(ServantData, v14, 0LL);
      }
      if ( (int)++v9 >= this->fields.maxdrawcount )
        goto LABEL_33;
    }
LABEL_111:
    sub_1C22094(logic, method);
  }
LABEL_33:
  v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleCommandData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleCommandData___ctor__);
  v23 = this->fields.selectcommand;
  if ( !v23 )
    goto LABEL_111;
  if ( !v23->max_length )
    goto LABEL_112;
  v24 = this->fields.commandlist;
  if ( !v24 )
    goto LABEL_111;
  v25 = v23->m_Items[1];
  if ( (unsigned int)v25 >= v24->max_length )
    goto LABEL_112;
  if ( !v16 )
    goto LABEL_111;
  method = (const MethodInfo *)v24->m_Items[v25];
  items = v16->fields._items;
  v27 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v16->fields._version;
  if ( !items )
    goto LABEL_111;
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)method,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v29[4] = (Il2CppClass *)method;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)method, v17, v18, v19, v20, v21, v22);
  }
  v36 = this->fields.selectcommand;
  if ( !v36 )
    goto LABEL_111;
  if ( v36->max_length <= 1 )
    goto LABEL_112;
  v37 = this->fields.commandlist;
  if ( !v37 )
    goto LABEL_111;
  v38 = v36->m_Items[2];
  if ( (unsigned int)v38 >= v37->max_length )
    goto LABEL_112;
  method = (const MethodInfo *)v37->m_Items[v38];
  v39 = v16->fields._items;
  v40 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v16->fields._version;
  if ( !v39 )
    goto LABEL_111;
  v41 = v16->fields._size;
  if ( (unsigned int)v41 >= v39->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)method,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &v39->obj.klass + v41;
    v16->fields._size = v41 + 1;
    v42[4] = (Il2CppClass *)method;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)method, v30, v31, v32, v33, v34, v35);
  }
  v49 = this->fields.selectcommand;
  if ( !v49 )
    goto LABEL_111;
  if ( v49->max_length <= 2 )
    goto LABEL_112;
  v50 = this->fields.commandlist;
  if ( !v50 )
    goto LABEL_111;
  v51 = v49->m_Items[3];
  if ( (unsigned int)v51 >= v50->max_length )
    goto LABEL_112;
  method = (const MethodInfo *)v50->m_Items[v51];
  v52 = v16->fields._items;
  v53 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v16->fields._version;
  if ( !v52 )
    goto LABEL_111;
  v54 = v16->fields._size;
  if ( (unsigned int)v54 >= v52->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)method,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &v52->obj.klass + v54;
    v16->fields._size = v54 + 1;
    v55[4] = (Il2CppClass *)method;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)method, v43, v44, v45, v46, v47, v48);
  }
  Bdata = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_object___ToArray(
                             v16,
                             (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !Bdata )
    goto LABEL_111;
  BattleData__setCommandData(Bdata, (BattleCommandData_array *)logic, 0LL);
  v57 = this->fields.perf;
  if ( !v57 )
    goto LABEL_111;
  v58 = v57->fields.data;
  if ( !v58 )
    goto LABEL_111;
  actionLogManager = v58->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_111;
  klass = actionLogManager->klass;
  globaltargetId = v58->fields.globaltargetId;
  v62 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v62;
      p_offset += 2;
      if ( !v62 )
        goto LABEL_66;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 7].method;
  }
  else
  {
LABEL_66:
    p_method = sub_1C73E18(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 7LL);
  }
  logic = (BattleLogic_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD))p_method)(
                             actionLogManager,
                             globaltargetId,
                             *(_QWORD *)(p_method + 8));
  v65 = this->fields.perf;
  if ( !v65 )
    goto LABEL_111;
  v66 = v65->fields.data;
  if ( !v66 )
    goto LABEL_111;
  v67 = this->fields.selectcommand;
  if ( !v67 )
    goto LABEL_111;
  if ( v67->max_length < 3 )
    goto LABEL_112;
  v68 = v66->fields.actionLogManager;
  if ( !v68 )
    goto LABEL_111;
  v69 = v68->klass;
  v71 = v67->m_Items[1];
  v70 = v67->m_Items[2];
  v72 = v67->m_Items[3];
  v73 = *(unsigned __int16 *)(&v68->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v68->klass->_2.bitflags2 + 3) )
  {
    v74 = (BattleActionLogManagerInterface_c **)&v69->_1.interfaceOffsets->offset;
    while ( *(v74 - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v73;
      v74 += 2;
      if ( !v73 )
        goto LABEL_77;
    }
    v75 = (__int64)&v69->vtable[*(_DWORD *)v74 + 8].method;
  }
  else
  {
LABEL_77:
    v75 = sub_1C73E18(v68, BattleActionLogManagerInterface_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD))v75)(
    v68,
    v71,
    v70,
    v72,
    *(_QWORD *)(v75 + 8));
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_111;
  BattleLogic__endSelectCommand(logic, 0LL);
  v76 = this->fields.Bdata;
  if ( !v76 )
    goto LABEL_111;
  logic = (BattleLogic_o *)v76->fields.combodata;
  if ( !logic )
    goto LABEL_111;
  logic = (BattleLogic_o *)BattleComboData__isExtraAttack((BattleComboData_o *)logic, 0LL);
  if ( ((unsigned __int8)logic & 1) == 0 )
    goto LABEL_97;
  v77 = this->fields.selectcommand;
  if ( !v77 )
    goto LABEL_111;
  if ( v77->max_length <= 2 )
    goto LABEL_112;
  v78 = this->fields.commandlist;
  if ( !v78 )
    goto LABEL_111;
  v79 = v77->m_Items[3];
  if ( (unsigned int)v79 >= v78->max_length )
LABEL_112:
    sub_1C2209C(logic, method);
  v80 = v78->m_Items[v79];
  v81 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_44643252(v81, v80, 0LL);
  if ( !v81 )
    goto LABEL_111;
  BattleCommandData__ResetServantCardIdsIndex(v81, 0LL);
  BattleCommandData__setTypeAddAttack(v81, 0LL);
  v88 = v16->fields._items;
  v89 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v16->fields._version;
  if ( !v88 )
    goto LABEL_111;
  v90 = v16->fields._size;
  if ( (unsigned int)v90 >= v88->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v81,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = &v88->obj.klass + v90;
    v16->fields._size = v90 + 1;
    v91[4] = (Il2CppClass *)v81;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v81, v82, v83, v84, v85, v86, v87);
  }
  v92 = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_object___ToArray(
                             v16,
                             (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !v92 )
    goto LABEL_111;
  BattleData__setCommandData(v92, (BattleCommandData_array *)logic, 0LL);
  v93 = this->fields.perf;
  if ( !v93 )
    goto LABEL_111;
  logic = (BattleLogic_o *)v93->fields.data;
  if ( !logic )
    goto LABEL_111;
  logic = (BattleLogic_o *)BattleData__getServantData((BattleData_o *)logic, v81->fields.uniqueId, 0LL);
  if ( logic )
    BattleServantData__SetOverwriteSvtCardType((BattleServantData_o *)logic, v81, 0LL);
LABEL_97:
  for ( i = 0LL; i != 3; ++i )
  {
    selectedcomponents = this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_111;
    if ( i >= selectedcomponents->max_length )
      goto LABEL_112;
    logic = (BattleLogic_o *)selectedcomponents->m_Items[i];
    if ( !logic )
      goto LABEL_111;
    BattleCommandComponent__startComboCard((BattleCommandComponent_o *)logic, 0LL);
  }
  v102 = this->fields.perf;
  if ( !v102 )
    goto LABEL_111;
  v103 = v102->fields.data;
  if ( !v103 )
    goto LABEL_111;
  v103->fields.commandCriticalArray = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v103->fields.commandCriticalArray, 0LL, v96, v97, v98, v99, v100, v101);
  v104 = this->fields.perf;
  if ( !v104 )
    goto LABEL_111;
  logic = (BattleLogic_o *)v104->fields.data;
  if ( !logic )
    goto LABEL_111;
  BattleData__ResetAllCriticalInfo((BattleData_o *)logic, 0LL);
  v105 = this->fields.perf;
  if ( !v105 )
    goto LABEL_111;
  logic = (BattleLogic_o *)v105->fields.statusPerf;
  if ( !logic )
    goto LABEL_111;
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)logic, -1, 0, 0LL);
  v106 = Method_BattlePerformanceCommandCard_comboExecute__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_comboExecute__ + 83) & 2) != 0 )
    v106 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_comboExecute__);
  v107 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v106, v106[4]);
  OverwriteAssetSoundName__PlayCommonSe(v107, 6, 0, 0LL);
}


void __fastcall BattlePerformanceCommandCard__countupStarPoint(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__createCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array **p_p_commandlist; // x20
  unsigned __int64 v5; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v7; // x21
  int64_t v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x0
  struct BattleCommandComponent_array **p_commandCompArray; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x0
  struct UnityEngine_Transform_array **p_commandTransformArray; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct UnityEngine_GameObject_array *v31; // x26
  unsigned int v32; // w29
  int32_t v33; // w23
  __int64 v34; // x28
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  BattlePerformanceCommandCard_o *v41; // x1
  Il2CppClass **v42; // x0
  struct UnityEngine_GameObject_array *v43; // x8
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct BattleCommandComponent_array *v50; // x25
  BattlePerformanceCommandCard_o *v51; // x26
  Il2CppClass **v52; // x0
  struct UnityEngine_GameObject_array *v53; // x8
  struct UnityEngine_Transform_array *v54; // x25
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  BattlePerformanceCommandCard_o *v61; // x27
  Il2CppClass **v62; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t perf; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct UnityEngine_Transform_array *v77; // x8
  struct UnityEngine_Transform_array *excardTr; // x8
  UnityEngine_Transform_o *v79; // x1
  struct UnityEngine_Transform_array *v80; // x8
  struct UnityEngine_Transform_array *cardTr; // x9
  struct UnityEngine_Transform_array *v82; // x8
  UnityEngine_Transform_o *v83; // x27
  struct UnityEngine_Transform_array *v84; // x8
  UnityEngine_Transform_o *v85; // x27
  struct UnityEngine_Transform_array *npcardTr; // x8
  struct UnityEngine_Transform_array *v87; // x8
  UnityEngine_Transform_o *v88; // x27
  struct UnityEngine_Transform_array *v89; // x8
  UnityEngine_Transform_o *v90; // x27
  struct UnityEngine_GameObject_array *v91; // x8
  int64_t v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct UnityEngine_GameObject_array *v99; // x8
  struct BattleCommandComponent_array *selectedcomponents; // x20
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  BattlePerformanceCommandCard_o *v107; // x21
  int64_t v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  __int64 v115; // x0
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4BDE353 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommandComponent___TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform___TypeInfo);
    sub_1C21E38(&StringLiteral_19175/*"ef_resistarrow"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&StringLiteral_19190/*"ef_weakarrow"*/);
    byte_4BDE353 = 1;
  }
  p_p_commandlist = &v2->fields.p_commandlist;
  p_commandlist = v2->fields.p_commandlist;
  if ( p_commandlist )
  {
    v5 = 0LL;
    while ( 1 )
    {
      max_length = p_commandlist->max_length;
      if ( (__int64)v5 >= (int)max_length )
        break;
      if ( v5 >= max_length )
        goto LABEL_83;
      v7 = (UnityEngine_Object_o *)p_commandlist->m_Items[v5];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v7, 0LL);
      p_commandlist = *p_p_commandlist;
      ++v5;
      if ( !*p_p_commandlist )
        goto LABEL_74;
    }
  }
  v8 = sub_1C21EE0(UnityEngine_GameObject___TypeInfo, 9LL);
  v2->fields.p_commandlist = (struct UnityEngine_GameObject_array *)v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.p_commandlist, v8, v9, v10, v11, v12, v13, v14);
  v15 = sub_1C21EE0(BattleCommandComponent___TypeInfo, 9LL);
  p_commandCompArray = &v2->fields.commandCompArray;
  v2->fields.commandCompArray = (struct BattleCommandComponent_array *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.commandCompArray, v15, v17, v18, v19, v20, v21, v22);
  v23 = sub_1C21EE0(UnityEngine_Transform___TypeInfo, 9LL);
  p_commandTransformArray = &v2->fields.commandTransformArray;
  v2->fields.commandTransformArray = (struct UnityEngine_Transform_array *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.commandTransformArray, v23, v25, v26, v27, v28, v29, v30);
  v31 = v2->fields.p_commandlist;
  if ( !v31 )
    goto LABEL_74;
  v32 = 0;
  v33 = 30;
  v34 = -32LL;
  while ( (signed int)v32 < (signed int)v31->max_length )
  {
    this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v2,
                                               v2->fields.commandprefab,
                                               v2->fields.commandrootTransform,
                                               0LL,
                                               0LL);
    if ( v32 >= v31->max_length )
      goto LABEL_83;
    v41 = this;
    v42 = &v31->obj.klass + (int)v32;
    v42[4] = (Il2CppClass *)v41;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v41, v35, v36, v37, v38, v39, v40);
    v43 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_74;
    if ( v32 >= v43->max_length )
      goto LABEL_83;
    this = (BattlePerformanceCommandCard_o *)v43->m_Items[v32];
    if ( !this )
      goto LABEL_74;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    v50 = *p_commandCompArray;
    if ( !*p_commandCompArray )
      goto LABEL_74;
    v51 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v50->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_84;
    }
    if ( v32 >= v50->max_length )
      goto LABEL_83;
    v52 = &v50->obj.klass + (int)v32;
    v52[4] = (Il2CppClass *)v51;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v51, v44, v45, v46, v47, v48, v49);
    v53 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_74;
    if ( v32 >= v53->max_length )
      goto LABEL_83;
    this = (BattlePerformanceCommandCard_o *)v53->m_Items[v32];
    if ( !this )
      goto LABEL_74;
    v54 = *p_commandTransformArray;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
    if ( !v54 )
      goto LABEL_74;
    v61 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v54->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_84;
    }
    if ( v32 >= v54->max_length )
      goto LABEL_83;
    v62 = &v54->obj.klass + (int)v32;
    v62[4] = (Il2CppClass *)v61;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v61, v55, v56, v57, v58, v59, v60);
    if ( !v51 )
      goto LABEL_74;
    BattleCommandComponent__Initialize((BattleCommandComponent_o *)v51, 0LL);
    LOWORD(v51->fields.cutin_trinity_m) = 256;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v51, 0LL, 0LL, 0, 1, 0, 1, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
    v51->fields.selectcommand = (struct System_Int32_array *)gameObject;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v51->fields.selectcommand,
      (int64_t)gameObject,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)v51, v33, 0LL);
    perf = (int64_t)v2->fields.perf;
    v51->fields.tdConfWindow = (struct BattleTDConfWIndowComponent_o *)perf;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v51->fields.tdConfWindow, perf, v71, v72, v73, v74, v75, v76);
    if ( v32 <= 4 )
    {
      v80 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v32 >= v80->max_length )
        goto LABEL_83;
      cardTr = v2->fields.cardTr;
      if ( !cardTr )
        goto LABEL_74;
      if ( v32 >= cardTr->max_length )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v80->m_Items[v32];
      if ( !this )
        goto LABEL_74;
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, cardTr->m_Items[v32], 0LL);
      v82 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v32 >= v82->max_length )
        goto LABEL_83;
      v83 = v82->m_Items[v32];
      if ( !byte_4BD6BB1 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      if ( !v83 )
        goto LABEL_74;
      UnityEngine_Transform__set_localPosition(v83, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v84 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v32 >= v84->max_length )
        goto LABEL_83;
      v85 = v84->m_Items[v32];
      if ( !byte_4BD6BB7 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
        byte_4BD6BB7 = 1;
      }
      if ( !v85 )
        goto LABEL_74;
      UnityEngine_Transform__set_localRotation(
        v85,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
    }
    else
    {
      v77 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v32 >= v77->max_length )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v77->m_Items[v32];
      if ( v32 <= 7 )
      {
        npcardTr = v2->fields.npcardTr;
        if ( !npcardTr )
          goto LABEL_74;
        if ( v32 - 5 >= npcardTr->max_length )
          goto LABEL_83;
        if ( !this )
          goto LABEL_74;
        v79 = npcardTr->m_Items[v32 - 5];
      }
      else
      {
        excardTr = v2->fields.excardTr;
        if ( !excardTr )
          goto LABEL_74;
        if ( v32 - 8 >= excardTr->max_length )
          goto LABEL_83;
        if ( !this )
          goto LABEL_74;
        v79 = *(UnityEngine_Transform_o **)((char *)&excardTr->obj.klass + v34);
      }
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v79, 0LL);
      v87 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v32 >= v87->max_length )
        goto LABEL_83;
      v88 = v87->m_Items[v32];
      if ( !byte_4BD6BB1 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      if ( !v88 )
        goto LABEL_74;
      UnityEngine_Transform__set_localPosition(v88, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v89 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v32 >= v89->max_length )
        goto LABEL_83;
      v90 = v89->m_Items[v32];
      if ( !byte_4BD6BB7 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
        byte_4BD6BB7 = 1;
      }
      if ( !v90 )
        goto LABEL_74;
      UnityEngine_Transform__set_localRotation(
        v90,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      v91 = *p_p_commandlist;
      if ( !*p_p_commandlist )
        goto LABEL_74;
      if ( v32 >= v91->max_length )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v91->m_Items[v32];
      if ( !this )
        goto LABEL_74;
      this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !this )
        goto LABEL_74;
      v116.fields.r = 0.0;
      v116.fields.g = 0.0;
      v116.fields.b = 0.0;
      v116.fields.a = 0.0;
      UIWidget__set_color((UIWidget_o *)this, v116, 0LL);
    }
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v51, (System_String_o *)StringLiteral_19175/*"ef_resistarrow"*/, 0, 0LL);
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v51, (System_String_o *)StringLiteral_19190/*"ef_weakarrow"*/, 1, 0LL);
    v31 = *p_p_commandlist;
    ++v32;
    v33 += 20;
    v34 += 8LL;
    if ( !*p_p_commandlist )
      goto LABEL_74;
  }
  v92 = sub_1C21EE0(BattleCommandComponent___TypeInfo, 4LL);
  v2->fields.selectedcomponents = (struct BattleCommandComponent_array *)v92;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.selectedcomponents, v92, v93, v94, v95, v96, v97, v98);
  v99 = v2->fields.p_commandlist;
  if ( !v99 )
    goto LABEL_74;
  if ( v99->max_length <= 8 )
    goto LABEL_83;
  this = (BattlePerformanceCommandCard_o *)v99->m_Items[8];
  if ( !this
    || (selectedcomponents = v2->fields.selectedcomponents,
        this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___),
        !selectedcomponents) )
  {
LABEL_74:
    sub_1C22094(this, method);
  }
  v107 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_84:
      v115 = sub_1C220B8(this);
      sub_1C21F60(v115, 0LL);
    }
  }
  if ( selectedcomponents->max_length <= 3 )
LABEL_83:
    sub_1C2209C(this, method);
  selectedcomponents->m_Items[3] = (BattleCommandComponent_o *)v107;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&selectedcomponents->m_Items[3],
    (int64_t)v107,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v108 = sub_1C21EE0(int___TypeInfo, 9LL);
  v2->fields.selectcommand = (struct System_Int32_array *)v108;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.selectcommand, v108, v109, v110, v111, v112, v113, v114);
  v2->fields.drawcount = 0;
}


void __fastcall BattlePerformanceCommandCard__endCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4BDE392 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3660/*"CLOSE_WINDOW"*/);
    byte_4BDE392 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3660/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endCloseSealedWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4BDE38C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3660/*"CLOSE_WINDOW"*/);
    byte_4BDE38C = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3660/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endCloseTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4BDE38F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3660/*"CLOSE_WINDOW"*/);
    byte_4BDE38F = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3660/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endComboEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4BDE37A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDE37A = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1C22094(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endMoveCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  unsigned __int64 v4; // x20
  unsigned __int64 max_length; // x9
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v7; // x8
  struct BattleCommandComponent_array *v8; // x8
  __int64 v9; // x20
  int v10; // w9
  unsigned int v11; // w21
  struct BattleCommandComponent_array *v12; // x8
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  commandCompArray = this->fields.commandCompArray;
  this->fields.isPlayingMoveCard = 0;
  if ( !commandCompArray )
    goto LABEL_25;
  v3 = this;
  v4 = 0LL;
  while ( v4 <= 4 )
  {
    max_length = commandCompArray->max_length;
    if ( (__int64)v4 >= (int)max_length )
      break;
    if ( v4 >= max_length )
LABEL_27:
      sub_1C2209C(this, method);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      if ( LOBYTE(this->fields.maxdrawcount) )
        BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)this, 0LL);
      else
        BattleCommandComponent__startMoveFloat((BattleCommandComponent_o *)this, 0LL);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_25;
  }
  perf = v3->fields.perf;
  if ( !perf
    || (this = (BattlePerformanceCommandCard_o *)perf->fields.statusPerf) == 0LL
    || (BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)this, -1, 0, 0LL),
        (v7 = v3->fields.perf) == 0LL)
    || (this = (BattlePerformanceCommandCard_o *)v7->fields.statusPerf) == 0LL
    || (BattlePerformanceStatus__SetActiveTotalCriticalStar((BattlePerformanceStatus_o *)this, 1, 0LL),
        (v8 = v3->fields.commandCompArray) == 0LL) )
  {
LABEL_25:
    sub_1C22094(this, method);
  }
  v9 = 4LL;
  while ( 1 )
  {
    v10 = v8->max_length;
    v11 = v9 - 4;
    if ( (int)v9 - 4 >= v10 )
      break;
    if ( v11 >= v10 )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v8->obj.klass + v9);
    if ( this )
    {
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)this, 1, 0LL);
      v12 = v3->fields.commandCompArray;
      if ( v12 )
      {
        if ( v11 >= v12->max_length )
          goto LABEL_27;
        this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v12->obj.klass + v9);
        if ( this )
        {
          BattleCommandComponent__ResetCardBuffIconAlphaAnim((BattleCommandComponent_o *)this, 0LL);
          v8 = v3->fields.commandCompArray;
          ++v9;
          if ( v8 )
            continue;
        }
      }
    }
    goto LABEL_25;
  }
  BattlePerformanceCommandCard__updateCardFix(v3, method);
  BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(v3, v13);
  BattlePerformanceCommandCard__updateTDTypeChange(v3, v14);
}


void __fastcall BattlePerformanceCommandCard__endOpenCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4BDE35B & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE35B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_12;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, __int64, Il2CppMethodPointer))Component_object->klass->vtable[12].method)(
        Component_object,
        1LL,
        Component_object->klass->vtable[13].methodPtr);
      return;
    }
LABEL_12:
    sub_1C22094(transform, v4);
  }
}


void __fastcall BattlePerformanceCommandCard__endOpenTdConf(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__fadeOutAllCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0LL);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


bool __fastcall BattlePerformanceCommandCard__fallStar(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  char v9; // w22
  il2cpp_array_size_t j; // w26
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x20
  int v14; // w21
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v16; // x22
  System_Action_object__o *v17; // x23
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BDE383 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_GameObject__TypeInfo);
    sub_1C21E38(&Method_BattleCommandComponent_addCriticalBuff__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4BDE383 = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v20;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields._current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_1C22094(0LL, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v6 = this->fields.aubelist;
  if ( !v6 )
LABEL_25:
    sub_1C22094(aubelist, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
  v9 = 0;
  for ( j = 0; j != 5; ++j )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( j >= commandCompArray->max_length )
LABEL_26:
      sub_1C2209C(aubelist, method);
    v12 = &commandCompArray->obj.klass + (int)j;
    v13 = v12[4];
    if ( !v13 )
      goto LABEL_25;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                         (BattleCommandComponent_o *)v12[4],
                                                                         0LL);
    if ( (int)aubelist >= 1 )
    {
      v14 = (int)aubelist;
      do
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          goto LABEL_25;
        if ( j >= commandTransformArray->max_length )
          goto LABEL_26;
        v16 = commandTransformArray->m_Items[j];
        v17 = (System_Action_object__o *)sub_1C22084(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(v17, (Il2CppObject *)v13, Method_BattleCommandComponent_addCriticalBuff__, 0LL);
        BattlePerformanceCommandCard__MoveNotTween(this, v16, (System_Action_GameObject__o *)v17, v18);
        --v14;
      }
      while ( v14 );
      v9 = 1;
    }
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)v13, 0LL);
    if ( BYTE4(v13->vtable[6].methodPtr) )
      BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)v13, 0LL);
  }
  BattlePerformanceCommandCard__updateBuffIcon(this, method);
  return v9 & 1;
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceCommandCard__getBattleCommandCardObject(
        BattlePerformanceCommandCard_o *this,
        int32_t actionIndex,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t max_length; // w9

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_9;
  if ( (actionIndex & 0x80000000) == 0 )
  {
    max_length = selectedcomponents->max_length;
    if ( max_length > actionIndex )
    {
      if ( max_length <= (unsigned int)actionIndex )
        sub_1C2209C(this, actionIndex);
      this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[actionIndex];
      if ( this )
        return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
LABEL_9:
      sub_1C22094(this, actionIndex);
    }
  }
  return 0LL;
}


UnityEngine_Transform_o *__fastcall BattlePerformanceCommandCard__getCollectCriticalTransform(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  return this->fields.criticalpointTr;
}


System_String_o *__fastcall BattlePerformanceCommandCard__getComboCutIn(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleComboData_o *combodata; // x8
  _BOOL4 flash; // w9
  int32_t samecount; // w8
  __int64 *v8; // x8

  v2 = this;
  if ( (byte_4BDE37B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19198/*"effect/BitEffect/bit_cut_2a"*/);
    sub_1C21E38(&StringLiteral_19201/*"effect/BitEffect/bit_cut_u3"*/);
    sub_1C21E38(&StringLiteral_19200/*"effect/BitEffect/bit_cut_u2"*/);
    sub_1C21E38(&StringLiteral_19202/*"effect/BitEffect/bit_cut_ua"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&StringLiteral_19199/*"effect/BitEffect/bit_cut_3a"*/);
    byte_4BDE37B = 1;
  }
  perf = v2->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL || (combodata = data->fields.combodata) == 0LL )
    sub_1C22094(this, method);
  flash = combodata->fields.flash;
  samecount = combodata->fields.samecount;
  if ( flash )
  {
    if ( samecount == 2 )
    {
      v8 = &StringLiteral_19200/*"effect/BitEffect/bit_cut_u2"*/;
    }
    else if ( samecount == 3 )
    {
      v8 = (__int64 *)&StringLiteral_19201/*"effect/BitEffect/bit_cut_u3"*/;
    }
    else
    {
      v8 = (__int64 *)&StringLiteral_19202/*"effect/BitEffect/bit_cut_ua"*/;
    }
    return (System_String_o *)*v8;
  }
  if ( samecount == 2 )
  {
    v8 = &StringLiteral_19198/*"effect/BitEffect/bit_cut_2a"*/;
    return (System_String_o *)*v8;
  }
  if ( samecount == 3 )
    return (System_String_o *)StringLiteral_19199/*"effect/BitEffect/bit_cut_3a"*/;
  else
    return 0LL;
}


UnityEngine_Vector2_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialArrow01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow01, v2);
}


UnityEngine_Vector2_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialArrow05(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow05, v2);
}


UnityEngine_Vector2_o __fastcall BattlePerformanceCommandCard__get_FSTutorialArrow22(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  float x; // s9
  float y; // s8
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BDE39B & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BDE39B = 1;
  }
  x = this->fields.TutorialArrow22.fields.x;
  y = this->fields.TutorialArrow22.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + FSUtility__GetOffsetX(40.0, 0, 0LL);
  v6 = y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector2_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialArrow31(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow31, v2);
}


UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialSquare01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialSquareCard(this, this->fields.TutorialSquare01, v2);
}


UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialSquare05(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialSquareCard(this, this->fields.TutorialSquare05, v2);
}


UnityEngine_Rect_o __fastcall BattlePerformanceCommandCard__get_FSTutorialSquare22(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s11
  float m_YMin; // s10
  float m_Width; // s8
  float m_Height; // s9
  float OffsetX; // s0
  float v8; // s2
  float v9; // s3
  float v10; // s0
  float v11; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDE39C & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BDE39C = 1;
  }
  m_XMin = this->fields.TutorialSquare22.fields.m_XMin;
  m_YMin = this->fields.TutorialSquare22.fields.m_YMin;
  m_Width = this->fields.TutorialSquare22.fields.m_Width;
  m_Height = this->fields.TutorialSquare22.fields.m_Height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(40.0, 0, 0LL);
  v8 = m_Width;
  v9 = m_Height;
  v10 = m_XMin + OffsetX;
  v11 = m_YMin;
  result.fields.m_Height = v9;
  result.fields.m_Width = v8;
  result.fields.m_YMin = v11;
  result.fields.m_XMin = v10;
  return result;
}


UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialSquare32(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  UnityEngine_Rect_array *v4; // x0
  __int64 v5; // x1
  UnityEngine_Rect_array *v6; // x19
  float m_YMin; // s8

  v3 = this;
  if ( (byte_4BDE39A & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BDE39A = 1;
  }
  v4 = BattlePerformanceCommandCard__FSTutorialSquareCard(this, v3->fields.TutorialSquare32, v2);
  if ( !v4 )
    sub_1C22094(0LL, v5);
  v6 = v4;
  if ( v4->max_length <= 1 )
    sub_1C2209C(v4, v5);
  m_YMin = v4->m_Items[1].fields.m_YMin;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v6->m_Items[1].fields.m_YMin = m_YMin + FSUtility__GetOffsetX(88.0, 1, 0LL);
  return v6;
}


bool __fastcall BattlePerformanceCommandCard__get_IsPlayingBackStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlayingBackStar_k__BackingField;
}


void __fastcall BattlePerformanceCommandCard__giveoutCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *transform; // x0
  __int64 v5; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v7; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8

  if ( (byte_4BDE35E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17061/*"anim_giveout"*/);
    byte_4BDE35E = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_17061/*"anim_giveout"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( p_commandlist )
  {
    v7 = 4LL;
    while ( 1 )
    {
      max_length = p_commandlist->max_length;
      v9 = v7 - 4;
      if ( v7 - 4 >= (int)max_length )
        break;
      if ( v9 >= max_length )
        goto LABEL_20;
      v10 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + v7);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v11 = this->fields.p_commandlist;
        if ( !v11 )
          goto LABEL_18;
        if ( v9 >= v11->max_length )
LABEL_20:
          sub_1C2209C(transform, v5);
        transform = (UnityEngine_GameObject_o *)*((_QWORD *)&v11->obj.klass + v7);
        if ( !transform
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                        (UnityEngine_Transform_o *)transform,
                                                        0LL)) == 0LL
          || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
        {
LABEL_18:
          sub_1C22094(transform, v5);
        }
        UnityEngine_GameObject__SetActive(transform, 1, 0LL);
      }
      p_commandlist = this->fields.p_commandlist;
      ++v7;
      if ( !p_commandlist )
        goto LABEL_18;
    }
  }
}


void __fastcall BattlePerformanceCommandCard__giveoutNobleCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v4; // x24
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v6; // w25
  Il2CppObject *Component_object; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v9; // x20
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4BDE35F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE35F = 1;
  }
  p_commandlist = v2->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_25:
    sub_1C22094(this, method);
  v4 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v6 = v4 - 4;
    if ( (int)v4 - 4 >= (int)(max_length - 1) )
      break;
    if ( v6 >= max_length )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&p_commandlist->obj.klass + v4);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70869800((UnityEngine_Object_o *)Component_object, 0LL);
    }
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( v6 >= commandCompArray->max_length )
      goto LABEL_27;
    v9 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v4);
    if ( !v9 )
      goto LABEL_25;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkObject(
                                               *((BattleCommandComponent_o **)&commandCompArray->obj.klass + v4),
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = v2->fields.p_commandlist;
      if ( !v10 )
        goto LABEL_25;
      if ( v6 >= v10->max_length )
LABEL_27:
        sub_1C2209C(this, method);
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v10->obj.klass + v4);
      if ( !this )
        goto LABEL_25;
      this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !this )
        goto LABEL_25;
      v11.fields.r = 1.0;
      v11.fields.g = 1.0;
      v11.fields.b = 1.0;
      v11.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v11, 0LL);
      if ( !v9->fields.selectflg )
        BattleCommandComponent__startMoveFloat(v9, 0LL);
    }
    p_commandlist = v2->fields.p_commandlist;
    ++v4;
    if ( !p_commandlist )
      goto LABEL_25;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__hideCommandCard(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        BaseMotionSkip_o *motionSkip,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v5; // x20
  float v6; // s8
  float v7; // s9
  __int64 v8; // x21
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct BattleCommandComponent_array *commandCompArray; // x8
  UnityEngine_Color_o v11; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( !motionSkip )
LABEL_13:
    sub_1C22094(this, flg);
  v5 = this;
  LODWORD(v6) = COERCE_UNSIGNED_INT128(
                  ((long double (__fastcall *)(BaseMotionSkip_o *, void *, float))motionSkip->klass->vtable._11_ConvertSkipDuration.method)(
                    motionSkip,
                    motionSkip->klass[1]._1.image,
                    0.3));
  if ( flg )
    v7 = 1.0;
  else
    v7 = 0.0;
  v8 = 4LL;
  do
  {
    p_commandlist = v5->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_13;
    if ( (unsigned int)(v8 - 4) >= p_commandlist->max_length )
      goto LABEL_14;
    v11.fields.r = v7;
    v11.fields.g = v7;
    v11.fields.b = v7;
    v11.fields.a = v7;
    this = (BattlePerformanceCommandCard_o *)TweenColor__Begin(
                                               *((UnityEngine_GameObject_o **)&p_commandlist->obj.klass + v8),
                                               v6,
                                               v11,
                                               0LL);
    commandCompArray = v5->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_13;
    if ( (unsigned int)(v8 - 4) >= commandCompArray->max_length )
LABEL_14:
      sub_1C2209C(this, flg);
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + v8);
    if ( !this )
      goto LABEL_13;
    BattleCommandComponent__CardEffectSetActive((BattleCommandComponent_o *)this, flg, 0LL);
    ++v8;
  }
  while ( (_DWORD)v8 != 9 );
}


void __fastcall BattlePerformanceCommandCard__initHighSpeedMode(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  const MethodInfo *v4; // x2
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  perf = this->fields.perf;
  if ( !perf || (v3 = this, (this = (BattlePerformanceCommandCard_o *)perf->fields.data) == 0LL) )
    sub_1C22094(this, method);
  if ( BattleData__isTutorial((BattleData_o *)this, 0LL) )
  {
    BattlePerformanceCommandCard__SetCommandPhaseButtonActive(v3, 0, v4);
  }
  else
  {
    BattlePerformanceCommandCard__SetCommandPhaseButtonActive(v3, 1, v4);
    BattlePerformanceCommandCard__updateHighSpeedObject(v3, v5, v6);
  }
}


void __fastcall BattlePerformanceCommandCard__initOpen(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4BDE354 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7553/*"INIT_OPEN"*/);
    byte_4BDE354 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_7553/*"INIT_OPEN"*/, 0LL);
}


// attributes: thunk
void __fastcall BattlePerformanceCommandCard__initQuest(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard__initHighSpeedMode(this, method);
}


void __fastcall BattlePerformanceCommandCard__moveupStars(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x8
  int32_t size; // w2
  int v5; // w9
  struct BattleData_o *Bdata; // x8
  int criticalstars; // w8
  unsigned int v8; // w29
  BattlePerformanceCommandCard_o *v9; // x21
  BattlePerformanceCommandCard_o *v10; // x22
  int32_t layer; // w0
  BattlePerformanceCommandCard_o *v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  BattlePerformanceCommandCard_o *v19; // x22
  void *v20; // x0
  struct System_Single_array *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x23
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x23
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x23
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x23
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x23
  System_Collections_Hashtable_o *v112; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  __int64 v119; // x8
  _QWORD *v120; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v122; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v124; // x0
  char v125[4]; // [xsp+0h] [xbp-80h] BYREF
  int v126; // [xsp+4h] [xbp-7Ch] BYREF
  int v127; // [xsp+8h] [xbp-78h] BYREF
  float v128; // [xsp+Ch] [xbp-74h] BYREF
  int v129; // [xsp+18h] [xbp-68h] BYREF
  int32_t v130; // [xsp+1Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_4BDE37F & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&iTween_EaseType_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_18865/*"delay"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_21211/*"islocal"*/);
    sub_1C21E38(&StringLiteral_19219/*"effect/ef_critlaunch"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE37F = 1;
  }
  aubelist = v2->fields.aubelist;
  if ( !aubelist )
    goto LABEL_80;
  size = aubelist->fields._size;
  v5 = aubelist->fields._version + 1;
  aubelist->fields._size = 0;
  aubelist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)aubelist->fields._items, 0, size, 0LL);
  Bdata = v2->fields.Bdata;
  if ( !Bdata )
    goto LABEL_80;
  criticalstars = Bdata->fields.criticalstars;
  if ( criticalstars < 1 )
    return;
  v8 = criticalstars / 5u + 1;
  do
  {
    this = (BattlePerformanceCommandCard_o *)v2->fields.perf;
    if ( !this )
      goto LABEL_80;
    this = (BattlePerformanceCommandCard_o *)BattlePerformance__getEffectInstantiate(
                                               (BattlePerformance_o *)this,
                                               4,
                                               v2->fields.criticalpointTr,
                                               0LL);
    if ( !this )
      goto LABEL_80;
    v9 = this;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
    if ( !v2->fields.criticalpointTr )
      goto LABEL_80;
    v10 = this;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v2->fields.criticalpointTr,
                                               0LL);
    if ( !this )
      goto LABEL_80;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
    TransformHelper__ChangeChildsLayer((UnityEngine_Transform_o *)v10, layer, 0LL);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
    if ( !this )
      goto LABEL_80;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v2->fields.criticalpointTr, 0LL);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
    v12 = this;
    if ( !byte_4BD6BB1 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    if ( !v12 )
      goto LABEL_80;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v12,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v9,
                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    if ( !this )
      goto LABEL_80;
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)this, 0, 0LL);
    this = (BattlePerformanceCommandCard_o *)sub_1C21EE0(object___TypeInfo, 12LL);
    if ( !this )
      goto LABEL_80;
    v19 = this;
    v20 = StringLiteral_25185/*"x"*/;
    if ( StringLiteral_25185/*"x"*/ )
    {
      v20 = (void *)sub_1C21F74(StringLiteral_25185/*"x"*/, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
      v21 = (struct System_Single_array *)StringLiteral_25185/*"x"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
      goto LABEL_79;
    v19->fields.COMMAND_STAMP_POS_X = v21;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v19->fields.COMMAND_STAMP_POS_X,
      (int64_t)v21,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v130 = UnityEngine_Random__Range_70829352(-780, 110, 0LL);
    v20 = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v130, v22, v23, v24);
    v31 = (int64_t)v20;
    if ( v20 )
    {
      v20 = (void *)sub_1C21F74(v20, v19->klass->_1.element_class);
      if ( !v20 )
      {
LABEL_81:
        v124 = sub_1C220B8(v20);
        sub_1C21F60(v124, 0LL);
      }
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_79;
    *(_QWORD *)&v19->fields.COMMAND_STAMP_POS_Y = v31;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.COMMAND_STAMP_POS_Y, v31, v25, v26, v27, v28, v29, v30);
    v20 = (void *)StringLiteral_25289/*"y"*/;
    if ( StringLiteral_25289/*"y"*/ )
    {
      v20 = (void *)sub_1C21F74(StringLiteral_25289/*"y"*/, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
      v21 = (struct System_Single_array *)StringLiteral_25289/*"y"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_79;
    *(_QWORD *)&v19->fields.CARD_ROOT_BASE_X = v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.CARD_ROOT_BASE_X, (int64_t)v21, v32, v33, v34, v35, v36, v37);
    v129 = 500;
    v20 = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v129, v38, v39, v40);
    v47 = (int64_t)v20;
    if ( v20 )
    {
      v20 = (void *)sub_1C21F74(v20, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_79;
    v19->fields.commandfsm = (struct PlayMakerFSM_o *)v47;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.commandfsm, v47, v41, v42, v43, v44, v45, v46);
    v20 = (void *)StringLiteral_18865/*"delay"*/;
    if ( StringLiteral_18865/*"delay"*/ )
    {
      v20 = (void *)sub_1C21F74(StringLiteral_18865/*"delay"*/, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
      v21 = (struct System_Single_array *)StringLiteral_18865/*"delay"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_79;
    v19->fields.commandprefab = (struct UnityEngine_GameObject_o *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.commandprefab, (int64_t)v21, v48, v49, v50, v51, v52, v53);
    v128 = UnityEngine_Random__Range(0.0, 0.3, 0LL);
    v20 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v128, v54, v55, v56);
    v63 = (int64_t)v20;
    if ( v20 )
    {
      v20 = (void *)sub_1C21F74(v20, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_79;
    v19->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v63;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.selectCommandPrefab, v63, v57, v58, v59, v60, v61, v62);
    v20 = (void *)StringLiteral_24360/*"time"*/;
    if ( StringLiteral_24360/*"time"*/ )
    {
      v20 = (void *)sub_1C21F74(StringLiteral_24360/*"time"*/, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
      v21 = (struct System_Single_array *)StringLiteral_24360/*"time"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 6 )
      goto LABEL_79;
    v19->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v21;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v19->fields.commandrootTransform,
      (int64_t)v21,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    v127 = 1050253722;
    v20 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v127, v70, v71, v72);
    v79 = (int64_t)v20;
    if ( v20 )
    {
      v20 = (void *)sub_1C21F74(v20, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 7 )
      goto LABEL_79;
    v19->fields.selectinfo_sprite = (struct UISprite_o *)v79;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.selectinfo_sprite, v79, v73, v74, v75, v76, v77, v78);
    v20 = (void *)StringLiteral_19078/*"easetype"*/;
    if ( StringLiteral_19078/*"easetype"*/ )
    {
      v20 = (void *)sub_1C21F74(StringLiteral_19078/*"easetype"*/, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
      v21 = (struct System_Single_array *)StringLiteral_19078/*"easetype"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 8 )
      goto LABEL_79;
    v19->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.firstbonus_q, (int64_t)v21, v80, v81, v82, v83, v84, v85);
    v126 = 1;
    v20 = (void *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v126, v86, v87, v88);
    v95 = (int64_t)v20;
    if ( v20 )
    {
      v20 = (void *)sub_1C21F74(v20, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 9 )
      goto LABEL_79;
    v19->fields.firstbonus_a = (struct UnityEngine_GameObject_o *)v95;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.firstbonus_a, v95, v89, v90, v91, v92, v93, v94);
    v20 = (void *)StringLiteral_21211/*"islocal"*/;
    if ( StringLiteral_21211/*"islocal"*/ )
    {
      v20 = (void *)sub_1C21F74(StringLiteral_21211/*"islocal"*/, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
      v21 = (struct System_Single_array *)StringLiteral_21211/*"islocal"*/;
    }
    else
    {
      v21 = 0LL;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 0xA )
LABEL_79:
      sub_1C2209C(v20, v21);
    v19->fields.firstbonus_b = (struct UnityEngine_GameObject_o *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.firstbonus_b, (int64_t)v21, v96, v97, v98, v99, v100, v101);
    v125[0] = 1;
    v20 = (void *)j_il2cpp_value_box_0(bool_TypeInfo, v125, v102, v103, v104);
    v111 = (int64_t)v20;
    if ( v20 )
    {
      v20 = (void *)sub_1C21F74(v20, v19->klass->_1.element_class);
      if ( !v20 )
        goto LABEL_81;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 0xB )
      goto LABEL_79;
    v19->fields.firstaura_q = (struct UnityEngine_GameObject_o *)v111;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.firstaura_q, v111, v105, v106, v107, v108, v109, v110);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v112 = iTween__Hash((System_Object_array *)v19, 0LL);
    iTween__MoveTo_61653064((UnityEngine_GameObject_o *)v9, v112, 0LL);
    this = (BattlePerformanceCommandCard_o *)v2->fields.aubelist;
    if ( !this )
      goto LABEL_80;
    v119 = *(_QWORD *)&this->fields.m_CachedPtr;
    v120 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v119 )
      goto LABEL_80;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v119 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v9,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    }
    else
    {
      v122 = v119 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v122 + 32) = v9;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v122 + 32), (int64_t)v9, v113, v114, v115, v116, v117, v118);
    }
    --v8;
  }
  while ( v8 );
  this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject_39485728(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_19219/*"effect/ef_critlaunch"*/,
                                             v2->fields.criticalpointTr,
                                             0LL,
                                             0LL);
  perf = v2->fields.perf;
  if ( !perf || (this = (BattlePerformanceCommandCard_o *)perf->fields.statusPerf) == 0LL )
LABEL_80:
    sub_1C22094(this, method);
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)this, -1, 0, 0LL);
}


void __fastcall BattlePerformanceCommandCard__openCommandCard(
        BattlePerformanceCommandCard_o *this,
        bool isStatTac,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  UIWidget_o *backTacticalButton; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *v11; // x0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v15; // x20
  int max_length; // w9
  il2cpp_array_size_t v17; // w21
  struct BattleCommandComponent_array *v18; // x8
  struct BattleCommandComponent_array *v19; // x8

  if ( (byte_4BDE35A & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_openCommandCard__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17059/*"anim_draw"*/);
    byte_4BDE35A = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    backTacticalButton = (UIWidget_o *)this->fields.maskSprite;
    if ( !backTacticalButton )
      goto LABEL_26;
    UIWidget__set_depth(backTacticalButton, -31, 0LL);
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_17059/*"anim_draw"*/, v7);
  backTacticalButton = (UIWidget_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    goto LABEL_26;
  backTacticalButton = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)backTacticalButton,
                                       0LL);
  if ( !backTacticalButton )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTacticalButton, 1, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 1, v9);
  if ( isStatTac )
  {
    v11 = BattlePerformanceCommandCard__waitFallStar(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
  }
  v12 = Method_BattlePerformanceCommandCard_openCommandCard__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_openCommandCard__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_openCommandCard__);
  v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v12, v12[4]);
  OverwriteAssetSoundName__PlayCommonSe(v13, 4, 0, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_26:
    sub_1C22094(backTacticalButton, v6);
  v15 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v17 = v15 - 4;
    if ( (int)v15 - 4 >= max_length )
      break;
    if ( v17 >= max_length )
      goto LABEL_28;
    backTacticalButton = (UIWidget_o *)*((_QWORD *)&commandCompArray->obj.klass + v15);
    if ( backTacticalButton )
    {
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)backTacticalButton, 0, 0LL);
      v18 = this->fields.commandCompArray;
      if ( v18 )
      {
        if ( v17 >= v18->max_length )
          goto LABEL_28;
        backTacticalButton = (UIWidget_o *)*((_QWORD *)&v18->obj.klass + v15);
        if ( backTacticalButton )
        {
          BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)backTacticalButton, 0, 0LL);
          v19 = this->fields.commandCompArray;
          if ( v19 )
          {
            if ( v17 >= v19->max_length )
LABEL_28:
              sub_1C2209C(backTacticalButton, v6);
            backTacticalButton = (UIWidget_o *)*((_QWORD *)&v19->obj.klass + v15);
            if ( backTacticalButton )
            {
              BattleCommandComponent__SetTreasureDeviceTypeChange(
                (BattleCommandComponent_o *)backTacticalButton,
                0,
                0,
                0LL);
              commandCompArray = this->fields.commandCompArray;
              ++v15;
              if ( commandCompArray )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
  BattlePerformanceCommandCard__updateCardMag(this, v6);
}


void __fastcall BattlePerformanceCommandCard__playAnimation(
        BattlePerformanceCommandCard_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cardRoot; // x21
  float v6; // s8
  float OffsetX; // s9
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Transform_o *Item; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v12; // x20
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDE355 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    sub_1C21E38(&StringLiteral_17061/*"anim_giveout"*/);
    byte_4BDE355 = 1;
  }
  cardRoot = (UnityEngine_Object_o *)this->fields.cardRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cardRoot, 0LL, 0LL) )
  {
    v6 = 0.0;
    OffsetX = 0.0;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_17061/*"anim_giveout"*/, 0LL) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    }
    v8 = System_String__op_Equality(name, (System_String_o *)StringLiteral_17061/*"anim_giveout"*/, 0LL);
    if ( v8 )
      v6 = BattlePerformanceCommandCard__FSCardRootOffsetY((BattlePerformanceCommandCard_o *)v8, v9);
    Item = this->fields.cardRoot;
    if ( !Item )
      goto LABEL_33;
    v18.fields.y = v6 + this->fields.CARD_ROOT_BASE_Y;
    v18.fields.x = OffsetX + this->fields.CARD_ROOT_BASE_X;
    v18.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(Item, v18, 0LL);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v12 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v12 )
    {
      Item = (UnityEngine_Transform_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v12, name, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
        UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)v12, name, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1C22094(Item, v9);
  }
  if ( !Component_object )
    goto LABEL_33;
  Item = (UnityEngine_Transform_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, name, 0LL);
  if ( !Item )
    goto LABEL_33;
  klass = Item->klass;
  v14 = Item;
  v15 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_23;
    }
    v17 = (__int64)(&klass->vtable._4_GetEnumerator.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_23:
    v17 = sub_1C73E18(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, _QWORD, float))v17)(v14, *(_QWORD *)(v17 + 8), 0.0);
  SimpleAnimation__Play_65253852((SimpleAnimation_o *)Component_object, name, 0LL);
}


void __fastcall BattlePerformanceCommandCard__playComboEffect(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_GameObject_o *prefab,
        int32_t seName,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x2

  if ( (byte_4BDE375 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_playComboEffect__);
    byte_4BDE375 = 1;
  }
  if ( (seName & 0x80000000) == 0 )
  {
    v7 = Method_BattlePerformanceCommandCard_playComboEffect__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_playComboEffect__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_playComboEffect__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
    OverwriteAssetSoundName__PlayCommonSe(v8, seName, 0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v10);
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, prefab, transform, 0LL, 0LL);
}


void __fastcall BattlePerformanceCommandCard__playCommandEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        bool flg,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t max_length; // w9

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_9;
  if ( (index & 0x80000000) == 0 )
  {
    max_length = selectedcomponents->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1C2209C(this, index);
      this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[index];
      if ( this )
      {
        BattleCommandComponent__playAttackEffect((BattleCommandComponent_o *)this, flg, 0LL);
        return;
      }
LABEL_9:
      sub_1C22094(this, index);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__playNobleCardEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        const MethodInfo *method)
{
  unsigned int v3; // w19
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct BattleCommandComponent_array *v8; // x8
  UnityEngine_Object_o *v9; // x21
  struct BattleCommandComponent_array *v10; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Object_array *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t npTargetTr; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  BattlePerformanceCommandCard_o *v41; // x23
  System_Collections_Hashtable_o *v42; // x0
  struct BattleCommandComponent_array *v43; // x8
  __int64 v44; // x0
  int v45; // [xsp+Ch] [xbp-34h] BYREF

  v3 = index;
  v4 = this;
  if ( (byte_4BDE37C & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_playNobleCardEffect__);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE37C = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_40;
  if ( (v3 & 0x80000000) == 0 && (signed int)selectedcomponents->max_length > (signed int)v3 )
  {
    v6 = Method_BattlePerformanceCommandCard_playNobleCardEffect__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_playNobleCardEffect__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_playNobleCardEffect__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
    OverwriteAssetSoundName__PlayCommonSe(v7, 14, 0, 0LL);
    v8 = v4->fields.selectedcomponents;
    if ( !v8 )
      goto LABEL_40;
    if ( v8->max_length <= v3 )
      goto LABEL_41;
    v9 = (UnityEngine_Object_o *)v8->m_Items[v3];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = v4->fields.selectedcomponents;
      if ( !v10 )
        goto LABEL_40;
      if ( v10->max_length <= v3 )
        goto LABEL_41;
      this = (BattlePerformanceCommandCard_o *)v10->m_Items[v3];
      if ( !this )
        goto LABEL_40;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      this = (BattlePerformanceCommandCard_o *)sub_1C21EE0(object___TypeInfo, 4LL);
      if ( !this )
        goto LABEL_40;
      v18 = (System_Object_array *)this;
      this = (BattlePerformanceCommandCard_o *)StringLiteral_22984/*"position"*/;
      if ( StringLiteral_22984/*"position"*/ )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_22984/*"position"*/, v18->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_42;
        *(_QWORD *)&index = StringLiteral_22984/*"position"*/;
      }
      else
      {
        *(_QWORD *)&index = 0LL;
      }
      if ( !v18->max_length )
        goto LABEL_41;
      v18->m_Items[0] = *(Il2CppObject **)&index;
      sub_1C21DDC((PartyOrganizationUtility_o *)v18->m_Items, *(int64_t *)&index, v12, v13, v14, v15, v16, v17);
      npTargetTr = (int64_t)v4->fields.npTargetTr;
      if ( !npTargetTr
        || (this = (BattlePerformanceCommandCard_o *)sub_1C21F74(
                                                       v4->fields.npTargetTr,
                                                       v18->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v18->max_length <= 1 )
          goto LABEL_41;
        v18->m_Items[1] = (Il2CppObject *)npTargetTr;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v18->m_Items[1], npTargetTr, v19, v20, v21, v22, v23, v24);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_24360/*"time"*/;
        if ( StringLiteral_24360/*"time"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v18->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_42;
          *(_QWORD *)&index = StringLiteral_24360/*"time"*/;
        }
        else
        {
          *(_QWORD *)&index = 0LL;
        }
        if ( v18->max_length <= 2 )
          goto LABEL_41;
        v18->m_Items[2] = *(Il2CppObject **)&index;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v18->m_Items[2], *(int64_t *)&index, v26, v27, v28, v29, v30, v31);
        v45 = 1056964608;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v45, v32, v33, v34);
        v41 = this;
        if ( !this
          || (this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v18->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v18->max_length > 3 )
          {
            v18->m_Items[3] = (Il2CppObject *)v41;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v18->m_Items[3], (int64_t)v41, v35, v36, v37, v38, v39, v40);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v42 = iTween__Hash(v18, 0LL);
            iTween__MoveTo_61653064(gameObject, v42, 0LL);
            v43 = v4->fields.selectedcomponents;
            if ( !v43 )
              goto LABEL_40;
            if ( v43->max_length > v3 )
            {
              this = (BattlePerformanceCommandCard_o *)v43->m_Items[v3];
              if ( this )
              {
                BattleCommandComponent__playNpAttackEffect((BattleCommandComponent_o *)this, 0.5, 0LL);
                return;
              }
LABEL_40:
              sub_1C22094(this, *(_QWORD *)&index);
            }
          }
LABEL_41:
          sub_1C2209C(this, *(_QWORD *)&index);
        }
      }
LABEL_42:
      v44 = sub_1C220B8(this);
      sub_1C21F60(v44, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__playTypeEffect(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_7:
    sub_1C22094(this, flg);
  v4 = this;
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = selectedcomponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C2209C(this, flg);
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[v5];
    if ( this )
    {
      BattleCommandComponent__flashType((BattleCommandComponent_o *)this, v6, 0LL);
      selectedcomponents = v4->fields.selectedcomponents;
      ++v5;
      if ( selectedcomponents )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceCommandCard__registCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_array *list,
        const MethodInfo *method)
{
  BattleCommandComponent_o *Bdata; // x0
  __int64 v6; // x1
  signed int max_length; // w9
  signed int v8; // w8
  __int64 v9; // x27
  Il2CppClass **v10; // x28
  Il2CppClass *v11; // x8
  BattleCommandData_o **v12; // x28
  Il2CppClass *v13; // t1
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v15; // x23
  BattleServantData_o *v16; // x22
  struct UnityEngine_Transform_array *v17; // x8
  UnityEngine_Transform_o *v18; // x23
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v20; // x8
  struct BattleCommandComponent_array *v21; // x8
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v23; // x8
  __int64 v24; // x23
  __int64 v25; // x9
  il2cpp_array_size_t v26; // w20
  struct BattleCommandComponent_array *v27; // x8
  struct UnityEngine_GameObject_array *v28; // x8
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *v30; // x20
  struct BattleCommandComponent_array *v31; // x8
  UnityEngine_Object_o *v32; // x20
  struct BattleCommandComponent_array *v33; // x8
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDE356 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UITweener___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_17062/*"anim_wait"*/);
    byte_4BDE356 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_17062/*"anim_wait"*/, method);
  if ( !list )
    goto LABEL_67;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( v8 < (unsigned int)max_length )
    {
      v9 = v8;
      v10 = &list->obj.klass + v8;
      Bdata = (BattleCommandComponent_o *)this->fields.Bdata;
      v13 = v10[4];
      v12 = (BattleCommandData_o **)(v10 + 4);
      v11 = v13;
      if ( !v13 )
        goto LABEL_67;
      if ( !Bdata )
        goto LABEL_67;
      Bdata = (BattleCommandComponent_o *)BattleData__getServantData((BattleData_o *)Bdata, v11->_1.byval_arg.bits, 0LL);
      commandTransformArray = this->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_67;
      if ( (unsigned int)v9 >= commandTransformArray->max_length )
        break;
      v15 = commandTransformArray->m_Items[v9];
      v16 = (BattleServantData_o *)Bdata;
      if ( !byte_4BD6BB1 )
      {
        Bdata = (BattleCommandComponent_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      if ( !v15 )
        goto LABEL_67;
      UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v17 = this->fields.commandTransformArray;
      if ( !v17 )
        goto LABEL_67;
      if ( (unsigned int)v9 >= v17->max_length )
        break;
      v18 = v17->m_Items[v9];
      if ( !byte_4BD6BB1 )
      {
        Bdata = (BattleCommandComponent_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      if ( !v18 )
        goto LABEL_67;
      UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      commandCompArray = this->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_67;
      if ( (unsigned int)v9 >= commandCompArray->max_length || (unsigned int)v9 >= list->max_length )
        break;
      Bdata = commandCompArray->m_Items[v9];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__setData(Bdata, *v12, v16, 0, 1, 0, 1, 0LL);
      v20 = this->fields.commandCompArray;
      if ( !v20 )
        goto LABEL_67;
      if ( (unsigned int)v9 >= v20->max_length )
        break;
      Bdata = v20->m_Items[v9];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardValue(Bdata, 0, 0LL);
      v21 = this->fields.commandCompArray;
      if ( !v21 )
        goto LABEL_67;
      if ( (unsigned int)v9 >= v21->max_length || (unsigned int)v9 >= list->max_length )
        break;
      if ( !*v12 )
        goto LABEL_67;
      Bdata = v21->m_Items[v9];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardIcon(Bdata, (*v12)->fields.commandCardParam, 2, 0, 0LL);
      p_commandlist = this->fields.p_commandlist;
      if ( !p_commandlist )
        goto LABEL_67;
      if ( (unsigned int)v9 >= p_commandlist->max_length )
        break;
      Bdata = (BattleCommandComponent_o *)p_commandlist->m_Items[v9];
      if ( !Bdata )
        goto LABEL_67;
      Bdata = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)Bdata,
                                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !Bdata )
        goto LABEL_67;
      v34.fields.r = 1.0;
      v34.fields.g = 1.0;
      v34.fields.b = 1.0;
      v34.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Bdata, v34, 0LL);
      max_length = list->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        goto LABEL_36;
    }
LABEL_68:
    sub_1C2209C(Bdata, v6);
  }
LABEL_36:
  v23 = this->fields.p_commandlist;
  if ( !v23 )
    goto LABEL_67;
  v24 = 4LL;
  while ( 1 )
  {
    v25 = *(_QWORD *)&v23->max_length;
    v26 = v24 - 4;
    if ( (int)v24 - 4 >= (int)v25 )
      break;
    v27 = this->fields.commandCompArray;
    if ( !v27 )
      goto LABEL_67;
    if ( v26 >= v27->max_length )
      goto LABEL_68;
    Bdata = (BattleCommandComponent_o *)*((_QWORD *)&v27->obj.klass + v24);
    if ( Bdata )
    {
      BattleCommandComponent__setTouchFlg(Bdata, 0, 0LL);
      v28 = this->fields.p_commandlist;
      if ( v28 )
      {
        if ( v26 >= v28->max_length )
          goto LABEL_68;
        Bdata = (BattleCommandComponent_o *)*((_QWORD *)&v28->obj.klass + v24);
        if ( Bdata )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Bdata,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UITweener___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0LL,
                                                0LL);
          if ( ((unsigned __int8)Bdata & 1) != 0 )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)Component_object, 0LL);
          }
          v23 = this->fields.p_commandlist;
          ++v24;
          if ( v23 )
            continue;
        }
      }
    }
    goto LABEL_67;
  }
  if ( (unsigned int)v25 <= 8 )
    goto LABEL_68;
  v30 = (UnityEngine_Object_o *)v23->m_Items[8];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  if ( ((unsigned __int8)Bdata & 1) != 0 )
  {
    v31 = this->fields.commandCompArray;
    if ( !v31 )
      goto LABEL_67;
    if ( v31->max_length <= 8 )
      goto LABEL_68;
    v32 = (UnityEngine_Object_o *)v31->m_Items[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
    if ( ((unsigned __int8)Bdata & 1) != 0 )
    {
      v33 = this->fields.commandCompArray;
      if ( v33 )
      {
        if ( v33->max_length <= 8 )
          goto LABEL_68;
        Bdata = v33->m_Items[8];
        if ( Bdata )
        {
          BattleCommandComponent__setData(Bdata, 0LL, 0LL, 0, 1, 0, 1, 0LL);
          return;
        }
      }
LABEL_67:
      sub_1C22094(Bdata, v6);
    }
  }
}


void __fastcall BattlePerformanceCommandCard__resetCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v7; // x21
  int max_length; // w9
  il2cpp_array_size_t v9; // w22
  struct UnityEngine_GameObject_array *v10; // x8

  if ( (byte_4BDE358 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C21E38(&StringLiteral_17062/*"anim_wait"*/);
    byte_4BDE358 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_17062/*"anim_wait"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_14:
    sub_1C22094(Component_object, v5);
  v7 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_16;
    Component_object = (Il2CppObject *)*((_QWORD *)&p_commandlist->obj.klass + v7);
    if ( Component_object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Component_object,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( Component_object )
      {
        BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)Component_object, 0, 0LL);
        v10 = this->fields.p_commandlist;
        if ( v10 )
        {
          if ( v9 >= v10->max_length )
LABEL_16:
            sub_1C2209C(Component_object, v5);
          Component_object = (Il2CppObject *)*((_QWORD *)&v10->obj.klass + v7);
          if ( Component_object )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            if ( Component_object )
            {
              BattleCommandComponent__initView((BattleCommandComponent_o *)Component_object, 0LL);
              p_commandlist = this->fields.p_commandlist;
              ++v7;
              if ( p_commandlist )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall BattlePerformanceCommandCard__selectAutoCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v4; // x21
  int max_length; // w9
  BattleCommandComponent_o *v6; // x20
  int v7; // w20

  v2 = this;
  if ( (byte_4BDE394 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21667/*"markindex"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&StringLiteral_11710/*"SELECTCARD"*/);
    byte_4BDE394 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      return;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    v6 = commandCompArray->m_Items[v4];
    if ( !v6 )
      goto LABEL_12;
    if ( !v6->fields.selectflg )
      break;
LABEL_11:
    ++v4;
    if ( !commandCompArray )
      goto LABEL_12;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v6, 0LL);
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    commandCompArray = v2->fields.commandCompArray;
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v6, 0LL);
  if ( !v2->fields.commandfsm
    || (v7 = (int)this,
        (this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm(v2->fields.commandfsm, 0LL)) == 0LL)
    || (this = (BattlePerformanceCommandCard_o *)this->fields.selectinfo_sprite) == 0LL
    || (this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                   (System_String_o *)StringLiteral_21667/*"markindex"*/,
                                                   0LL)) == 0LL
    || (LODWORD(this->fields.commandfsm) = v7, (this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm) == 0LL) )
  {
LABEL_12:
    sub_1C22094(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11710/*"SELECTCARD"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__selectCommandCard(
        BattlePerformanceCommandCard_o *this,
        int32_t atcount,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *perf; // x8

  BattlePerformanceCommandCard__setCountRemaining(this, atcount, method);
  perf = this->fields.perf;
  if ( !perf )
    sub_1C22094(v5, v6);
  perf->fields.istactical = atcount == 3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__selectOK(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  int32_t v3; // w20
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  int v6; // w22
  __int64 v7; // x9
  Il2CppClass **v8; // x8
  BattleCommandComponent_o *v9; // x21
  const MethodInfo *v10; // x3
  struct System_Int32_array *selectcommand; // x10
  int max_length; // w11
  int32_t v13; // w12
  __int64 *v14; // x8
  signed int v15; // w10
  __int64 v16; // x26
  Il2CppClass **v17; // x8
  BattleCommandComponent_o *v18; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x22
  __int64 v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppClass **v27; // x0
  struct UISprite_o *selectinfo_sprite; // x22
  System_String_o *v29; // x0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v31; // x8
  UnityEngine_GameObject_o *v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  BattlePerformanceCommandCard_o *v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  BattlePerformanceCommandCard_o *v49; // x24
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  BattlePerformanceCommandCard_o *v65; // x24
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  BattlePerformanceCommandCard_o *v81; // x24
  System_Collections_Hashtable_o *v82; // x0
  float v83; // s10
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  const MethodInfo *v85; // x3
  int v86; // s0
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  int32_t v90; // w1
  const MethodInfo *v91; // x2
  int32_t CommandType; // w0
  const MethodInfo *v93; // x2
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v95; // x1
  int32_t drawcount; // w9
  int32_t maxdrawcount; // w8
  int32_t v98; // w9
  struct System_Int32_array *v99; // x8
  System_Action_o *v100; // x20
  __int64 v101; // x0
  char v102[4]; // [xsp+8h] [xbp-88h] BYREF
  int v103; // [xsp+Ch] [xbp-84h] BYREF
  int v104; // [xsp+18h] [xbp-78h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-74h] BYREF

  v3 = markindex;
  v4 = this;
  if ( (byte_4BDE363 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceCommandCard__selectOK_b__112_0__);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_5161/*"DISSELECT"*/);
    sub_1C21E38(&StringLiteral_11709/*"SELECT"*/);
    sub_1C21E38(&StringLiteral_3446/*"CANCEL"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_9842/*"OPEN_SEALED"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_21211/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE363 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_11;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)&commandCompArray->max_length;
    if ( v6 >= (int)v7 )
      break;
    if ( v6 >= (unsigned int)v7 )
      goto LABEL_103;
    v8 = &commandCompArray->obj.klass + v6;
    v9 = (BattleCommandComponent_o *)v8[4];
    if ( !v9 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v8[4],
                                               v3,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 && v9->fields.selectflg )
    {
      BattlePerformanceCommandCard__unselectCommandCard(v4, v9, v3, v10);
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
      if ( this )
      {
        v14 = &StringLiteral_3446/*"CANCEL"*/;
        goto LABEL_101;
      }
      goto LABEL_11;
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v6;
    if ( !commandCompArray )
      goto LABEL_11;
  }
  if ( v4->fields.maxdrawcount <= v4->fields.drawcount )
  {
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v14 = &StringLiteral_5161/*"DISSELECT"*/;
LABEL_101:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v14, 0LL);
      return;
    }
    goto LABEL_11;
  }
  targetIndex = -1;
  selectcommand = v4->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_11;
  max_length = selectcommand->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        goto LABEL_103;
      if ( selectcommand->m_Items[v13 + 1] == -1 )
        break;
      if ( ++v13 >= max_length )
        goto LABEL_25;
    }
    targetIndex = v13;
  }
LABEL_25:
  if ( (int)v7 < 1 )
  {
LABEL_93:
    drawcount = v4->fields.drawcount;
    maxdrawcount = v4->fields.maxdrawcount;
    if ( drawcount < maxdrawcount )
    {
      v98 = drawcount + 1;
      v4->fields.drawcount = v98;
      BattlePerformanceCommandCard__selectCommandCard(v4, maxdrawcount - v98, method);
      v99 = v4->fields.selectcommand;
      if ( !v99 )
        goto LABEL_11;
      if ( targetIndex >= v99->max_length )
LABEL_103:
        sub_1C2209C(this, *(_QWORD *)&markindex);
      v99->m_Items[targetIndex + 1] = v3;
    }
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v14 = &StringLiteral_11709/*"SELECT"*/;
      goto LABEL_101;
    }
LABEL_11:
    sub_1C22094(this, *(_QWORD *)&markindex);
  }
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)v7 )
      goto LABEL_103;
    v16 = v15;
    v17 = &commandCompArray->obj.klass + v15;
    v18 = (BattleCommandComponent_o *)v17[4];
    if ( !v18 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v17[4],
                                               v3,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_91:
    commandCompArray = v4->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_11;
    LODWORD(v7) = commandCompArray->max_length;
    v15 = v16 + 1;
    if ( (int)v16 + 1 >= (int)v7 )
      goto LABEL_93;
  }
  if ( BattleCommandComponent__get_isSealed(v18, 0LL)
    || BattleCommandComponent__isTreasureDvc(v18, 0LL) && BattleCommandComponent__get_isKindOfDontAction(v18, 0LL) )
  {
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v14 = &StringLiteral_9842/*"OPEN_SEALED"*/;
      goto LABEL_101;
    }
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(v18, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__get_SealStatus(v18, 0LL);
  if ( !this )
    goto LABEL_11;
  this = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_IsTreasureDeviceError(
                                             (BattleCommandSealStatus_o *)this,
                                             0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_36:
    v18->fields.selectflg = 1;
    selectedcomponents = v4->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_11;
    v20 = targetIndex;
    this = (BattlePerformanceCommandCard_o *)sub_1C21F74(v18, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_104:
      v101 = sub_1C220B8(this);
      sub_1C21F60(v101, 0LL);
    }
    if ( (unsigned int)v20 >= selectedcomponents->max_length )
      goto LABEL_103;
    v27 = &selectedcomponents->obj.klass + v20;
    v27[4] = (Il2CppClass *)v18;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v18, v21, v22, v23, v24, v25, v26);
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( !this )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_11;
    selectinfo_sprite = this->fields.selectinfo_sprite;
    v29 = System_Int32__ToString((int32_t)&targetIndex, 0LL);
    this = (BattlePerformanceCommandCard_o *)System_String__Concat_63115476(
                                               (System_String_o *)StringLiteral_11709/*"SELECT"*/,
                                               v29,
                                               0LL);
    if ( !selectinfo_sprite )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)selectinfo_sprite,
                                               (System_String_o *)this,
                                               0LL);
    p_commandlist = v4->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_11;
    if ( (unsigned int)v16 >= p_commandlist->max_length )
      goto LABEL_103;
    if ( !this )
      goto LABEL_11;
    HutongGames_PlayMaker_FsmGameObject__set_Value(
      (HutongGames_PlayMaker_FsmGameObject_o *)this,
      p_commandlist->m_Items[v16],
      0LL);
    v31 = v4->fields.p_commandlist;
    if ( !v31 )
      goto LABEL_11;
    if ( (unsigned int)v16 >= v31->max_length )
      goto LABEL_103;
    v32 = v31->m_Items[v16];
    this = (BattlePerformanceCommandCard_o *)sub_1C21EE0(object___TypeInfo, 6LL);
    if ( !this )
      goto LABEL_11;
    v39 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_25289/*"y"*/;
    if ( StringLiteral_25289/*"y"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_25289/*"y"*/, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
      *(_QWORD *)&markindex = StringLiteral_25289/*"y"*/;
    }
    else
    {
      *(_QWORD *)&markindex = 0LL;
    }
    if ( !LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_103;
    v39->fields.COMMAND_STAMP_POS_X = *(struct System_Single_array **)&markindex;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v39->fields.COMMAND_STAMP_POS_X,
      *(int64_t *)&markindex,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v104 = 20;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v40, v41, v42);
    v49 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
    }
    if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_103;
    *(_QWORD *)&v39->fields.COMMAND_STAMP_POS_Y = v49;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v39->fields.COMMAND_STAMP_POS_Y,
      (int64_t)v49,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24360/*"time"*/;
    if ( StringLiteral_24360/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
      *(_QWORD *)&markindex = StringLiteral_24360/*"time"*/;
    }
    else
    {
      *(_QWORD *)&markindex = 0LL;
    }
    if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_103;
    *(_QWORD *)&v39->fields.CARD_ROOT_BASE_X = *(_QWORD *)&markindex;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v39->fields.CARD_ROOT_BASE_X,
      *(int64_t *)&markindex,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v103 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v103, v56, v57, v58);
    v65 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
    }
    if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_103;
    v39->fields.commandfsm = (struct PlayMakerFSM_o *)v65;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v39->fields.commandfsm, (int64_t)v65, v59, v60, v61, v62, v63, v64);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_21211/*"islocal"*/;
    if ( StringLiteral_21211/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_21211/*"islocal"*/, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
      *(_QWORD *)&markindex = StringLiteral_21211/*"islocal"*/;
    }
    else
    {
      *(_QWORD *)&markindex = 0LL;
    }
    if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_103;
    v39->fields.commandprefab = *(struct UnityEngine_GameObject_o **)&markindex;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v39->fields.commandprefab,
      *(int64_t *)&markindex,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    v102[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v102, v72, v73, v74);
    v81 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
    }
    if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_103;
    v39->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v81;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v39->fields.selectCommandPrefab,
      (int64_t)v81,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v82 = iTween__Hash((System_Object_array *)v39, 0LL);
    iTween__MoveTo_61653064(v32, v82, 0LL);
    BattleCommandComponent__stopAnimation(v18, 0LL);
    BattleCommandComponent__selectCard(v18, targetIndex, 0LL);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)FSUtility__IsUnderVista(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      v83 = 0.0;
    else
      v83 = 17.0;
    if ( (unsigned int)v16 <= 4 )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
      COMMAND_STAMP_POS_X = v4->fields.COMMAND_STAMP_POS_X;
      if ( !COMMAND_STAMP_POS_X )
        goto LABEL_11;
      if ( (unsigned int)v16 >= COMMAND_STAMP_POS_X->max_length )
        goto LABEL_103;
      if ( !this )
        goto LABEL_11;
      *(UnityEngine_Vector3_o *)&v86 = UnityEngine_Transform__TransformPoint_70894360(
                                         (UnityEngine_Transform_o *)this,
                                         COMMAND_STAMP_POS_X->m_Items[v16 + 1],
                                         v83 + v4->fields.COMMAND_STAMP_POS_Y,
                                         v4->fields.COMMAND_STAMP_POS_Z,
                                         0LL);
    }
    else
    {
      commandTransformArray = v4->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_11;
      if ( (unsigned int)v16 >= commandTransformArray->max_length )
        goto LABEL_103;
      this = (BattlePerformanceCommandCard_o *)commandTransformArray->m_Items[v16];
      if ( !this )
        goto LABEL_11;
      *(UnityEngine_Vector3_o *)&v86 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    }
    BattlePerformanceCommandCard__SetSelectStamp(v4, targetIndex, *(UnityEngine_Vector3_o *)&v86, v18, v85);
    if ( !targetIndex )
    {
      CommandType = BattleCommandComponent__getCommandType(v18, 0LL);
      started = BattlePerformanceCommandCard__coStartFirstBonus(v4, CommandType, v93);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v4, started, 0LL);
    }
    BattlePerformanceCommandCard__checkChainBonus(v4, v90, v91);
    BattlePerformanceCommandCard__checkMaskEnemy(v4, v95);
    goto LABEL_91;
  }
  v100 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v100, (Il2CppObject *)v4, Method_BattlePerformanceCommandCard__selectOK_b__112_0__, 0LL);
  BattleCommandComponent__PlayTDErrorAnimation(v18, v100, 0LL);
}


void __fastcall BattlePerformanceCommandCard__setAtkButtonFlg(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  bool v3; // w1

  v3 = flg;
  this->fields.isPressAtkBtn = v3;
  BattlePerformanceCommandCard__SetBackTacticalButton(this, v3, method);
}


void __fastcall BattlePerformanceCommandCard__setComboEffectPrefab(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        UnityEngine_GameObject_o **prefab,
        int32_t *seName,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_GameObject_o *cutin_ordererror; // x1
  int32_t flashtype; // w23
  int32_t samecount; // w8
  int32_t v23; // w23
  int32_t v24; // w8
  int32_t v25; // w23
  int32_t v26; // w8

  if ( (byte_4BDE374 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDE374 = 1;
  }
  *seName = -1;
  *prefab = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)prefab,
    0LL,
    (int64_t)prefab,
    (int32_t)seName,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !combo )
    sub_1C22094(v12, v13);
  if ( combo->fields.chainError )
  {
    *seName = 27;
    cutin_ordererror = this->fields.cutin_ordererror;
LABEL_6:
    *prefab = cutin_ordererror;
    sub_1C21DDC((PartyOrganizationUtility_o *)prefab, (int64_t)cutin_ordererror, v14, v15, v16, v17, v18, v19);
    return;
  }
  if ( combo->fields.flash )
  {
    *seName = 25;
    flashtype = combo->fields.flashtype;
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isARTS(flashtype, 0LL) )
    {
      samecount = combo->fields.samecount;
      if ( (unsigned int)(samecount - 1) < 2 )
      {
        cutin_ordererror = this->fields.cutin_trinity_a;
        goto LABEL_6;
      }
      if ( samecount == 3 )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_a;
        goto LABEL_6;
      }
    }
    else
    {
      v23 = combo->fields.flashtype;
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isBUSTER(v23, 0LL) )
      {
        v24 = combo->fields.samecount;
        if ( (unsigned int)(v24 - 1) < 2 )
        {
          cutin_ordererror = this->fields.cutin_trinity_b;
          goto LABEL_6;
        }
        if ( v24 == 3 )
        {
          *seName = 26;
          cutin_ordererror = this->fields.cutin_grand_b;
          goto LABEL_6;
        }
      }
      else
      {
        v25 = combo->fields.flashtype;
        if ( !BattleCommand_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
        if ( BattleCommand__isQUICK(v25, 0LL) )
        {
          v26 = combo->fields.samecount;
          if ( (unsigned int)(v26 - 1) < 2 )
          {
            cutin_ordererror = this->fields.cutin_trinity_q;
            goto LABEL_6;
          }
          if ( v26 == 3 )
          {
            *seName = 26;
            cutin_ordererror = this->fields.cutin_grand_q;
            goto LABEL_6;
          }
        }
      }
    }
  }
  else
  {
    if ( combo->fields.isMighty )
    {
      if ( BattleComboData__isExtraAttack(combo, 0LL) )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_m;
      }
      else
      {
        *seName = 25;
        cutin_ordererror = this->fields.cutin_trinity_m;
      }
      goto LABEL_6;
    }
    if ( combo->fields.samecount == 3 )
    {
      *seName = 26;
      cutin_ordererror = this->fields.cutin_single;
      goto LABEL_6;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__setCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_array *list,
        int32_t maxdrawcount,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleCommandData_array **p_commandlist; // x21
  __int64 klass; // x0
  BattleCommandData_o *v12; // x1
  struct BattleCommandData_array *commandlist; // x11
  unsigned __int64 max_length; // x8
  unsigned __int64 v15; // x9
  BattleCommandData_o **m_Items; // x11
  BattleCommandData_o *v17; // x12
  struct BattleCommandComponent_array *commandCompArray; // x8
  const MethodInfo *v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct BattleCommandComponent_array *v25; // x8
  _DWORD *v26; // x22
  unsigned int v27; // w26
  unsigned int v28; // w9
  int64_t v29; // x25
  _DWORD *v30; // x24
  PartyOrganizationUtility_o *v31; // x24
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v33; // x25
  struct UnityEngine_Transform_array *v34; // x8
  UnityEngine_Transform_o *v35; // x25
  UnityEngine_GameObject_o *gameObject; // x24
  struct BattleCommandData_array *v37; // x8
  unsigned int v38; // w26
  __int64 *v39; // x25
  struct UnityEngine_Transform_array *v40; // x8
  UnityEngine_Transform_o *v41; // x24
  struct UnityEngine_Transform_array *v42; // x8
  UnityEngine_Transform_o *v43; // x24
  struct UnityEngine_GameObject_array *v44; // x8
  il2cpp_array_size_t v45; // w19
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x24
  __int64 *v53; // x21
  _DWORD *v54; // x25
  PartyOrganizationUtility_o *v55; // x25
  struct BattleCommandData_array *v56; // x8
  BattleCommandData_o *v57; // x24
  BattleCommandComponent_o *v58; // x25
  struct UnityEngine_GameObject_array *v59; // x8
  struct System_Int32_array *selectcommand; // x11
  unsigned __int64 v61; // x8
  unsigned __int64 v62; // x9
  int32_t *v63; // x11
  struct BattleCommandComponent_array *selectedcomponents; // x8
  unsigned __int64 v65; // x19
  __int64 v66; // x21
  unsigned __int64 v67; // x9
  __int64 v68; // x0
  struct BattleCommandData_array **v70; // [xsp+18h] [xbp-68h]
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDE35D & 1) == 0 )
  {
    sub_1C21E38(&BattleCommandComponent___TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE35D = 1;
  }
  p_commandlist = &this->fields.commandlist;
  this->fields.commandlist = list;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.commandlist,
    (int64_t)list,
    *(int64_t *)&maxdrawcount,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  commandlist = this->fields.commandlist;
  if ( !commandlist )
    goto LABEL_84;
  max_length = commandlist->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v15 = 0LL;
    m_Items = commandlist->m_Items;
    while ( v15 < max_length )
    {
      v17 = m_Items[v15];
      if ( v17 )
        v17->fields.markindex = v15;
      if ( (__int64)++v15 >= (int)max_length )
        goto LABEL_10;
    }
LABEL_89:
    sub_1C2209C(klass, v12);
  }
LABEL_10:
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_84;
  klass = sub_1C21EE0(BattleCommandComponent___TypeInfo, commandCompArray->max_length);
  v25 = this->fields.commandCompArray;
  if ( !v25 )
    goto LABEL_84;
  v26 = (_DWORD *)klass;
  v27 = 5;
  while ( 1 )
  {
    v28 = v25->max_length;
    if ( (int)v27 >= (int)v28 )
      break;
    if ( v27 >= v28 )
      goto LABEL_89;
    if ( v26 )
    {
      v29 = (int64_t)v25->m_Items[v27];
      if ( v29 )
      {
        klass = sub_1C21F74(v29, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
        if ( !klass )
        {
LABEL_90:
          v68 = sub_1C220B8(klass);
          sub_1C21F60(v68, 0LL);
        }
      }
      if ( v27 >= v26[6] )
        goto LABEL_89;
      v30 = &v26[2 * v27];
      *((_QWORD *)v30 + 4) = v29;
      v31 = (PartyOrganizationUtility_o *)(v30 + 8);
      sub_1C21DDC(v31, v29, (int64_t)v19, v20, v21, v22, v23, v24);
      if ( v27 >= v26[6] )
        goto LABEL_89;
      klass = (__int64)v31->klass;
      if ( v31->klass )
      {
        BattleCommandComponent__setData((BattleCommandComponent_o *)klass, 0LL, 0LL, 0, 1, 0, 1, 0LL);
        commandTransformArray = this->fields.commandTransformArray;
        if ( commandTransformArray )
        {
          if ( v27 >= commandTransformArray->max_length )
            goto LABEL_89;
          v33 = commandTransformArray->m_Items[v27];
          if ( !byte_4BD6BB1 )
          {
            klass = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
            byte_4BD6BB1 = 1;
          }
          if ( v33 )
          {
            UnityEngine_Transform__set_localPosition(v33, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            v34 = this->fields.commandTransformArray;
            if ( v34 )
            {
              if ( v27 >= v34->max_length )
                goto LABEL_89;
              v35 = v34->m_Items[v27];
              if ( !byte_4BD6BB1 )
              {
                klass = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                byte_4BD6BB1 = 1;
              }
              if ( v35 )
              {
                UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
                if ( v27 >= v26[6] )
                  goto LABEL_89;
                klass = (__int64)v31->klass;
                if ( v31->klass )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
                  if ( !iTween_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                  ++v27;
                  iTween__Stop_61763404(gameObject, 0LL);
                  v25 = this->fields.commandCompArray;
                  if ( v25 )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_84;
  }
  v37 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_84;
  v38 = 0;
  v39 = &qword_4BD6000;
  v70 = &this->fields.commandlist;
  while ( (signed int)v38 < (signed int)v37->max_length )
  {
    v40 = this->fields.commandTransformArray;
    if ( !v40 )
      goto LABEL_84;
    if ( v38 >= v40->max_length )
      goto LABEL_89;
    v41 = v40->m_Items[v38];
    if ( !byte_4BD6BB1 )
    {
      klass = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    if ( !v41 )
      goto LABEL_84;
    UnityEngine_Transform__set_localPosition(v41, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    v42 = this->fields.commandTransformArray;
    if ( !v42 )
      goto LABEL_84;
    if ( v38 >= v42->max_length )
      goto LABEL_89;
    v43 = v42->m_Items[v38];
    if ( !*((_BYTE *)v39 + 2998) )
    {
      klass = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      *((_BYTE *)v39 + 2998) = 1;
    }
    if ( !v43 )
      goto LABEL_84;
    UnityEngine_Transform__set_localScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v37 = *p_commandlist;
    if ( !*p_commandlist )
      goto LABEL_84;
    if ( v38 >= v37->max_length )
      goto LABEL_89;
    if ( v38 >= 5 )
    {
      v12 = v37->m_Items[v38];
      if ( v12 )
      {
        klass = BattlePerformanceCommandCard__GetServantNumber(this, v12, v19);
        v44 = this->fields.p_commandlist;
        if ( !v44 )
          goto LABEL_84;
        v45 = klass + 5;
        if ( (unsigned int)(klass + 5) >= v44->max_length )
          goto LABEL_89;
        klass = (__int64)v44->m_Items[v45];
        if ( !klass )
          goto LABEL_84;
        klass = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)klass,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( !v26 )
          goto LABEL_84;
        v52 = klass;
        if ( klass )
        {
          klass = sub_1C21F74(klass, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
          if ( !klass )
            goto LABEL_90;
        }
        if ( v45 >= v26[6] )
          goto LABEL_89;
        v53 = v39;
        v54 = &v26[2 * v45];
        *((_QWORD *)v54 + 4) = v52;
        v55 = (PartyOrganizationUtility_o *)(v54 + 8);
        sub_1C21DDC(v55, v52, v46, v47, v48, v49, v50, v51);
        if ( v45 >= v26[6] )
          goto LABEL_89;
        v56 = *v70;
        if ( !*v70 )
          goto LABEL_84;
        if ( v38 >= v56->max_length )
          goto LABEL_89;
        v57 = v56->m_Items[v38];
        if ( !v57 )
          goto LABEL_84;
        klass = (__int64)this->fields.Bdata;
        if ( !klass )
          goto LABEL_84;
        v58 = (BattleCommandComponent_o *)v55->klass;
        klass = (__int64)BattleData__getServantData((BattleData_o *)klass, v57->fields.uniqueId, 0LL);
        if ( !v58 )
          goto LABEL_84;
        BattleCommandComponent__setData(v58, v57, (BattleServantData_o *)klass, 0, 1, 0, 1, 0LL);
        v59 = this->fields.p_commandlist;
        if ( !v59 )
          goto LABEL_84;
        if ( v45 >= v59->max_length )
          goto LABEL_89;
        v39 = v53;
        klass = (__int64)v59->m_Items[v45];
        p_commandlist = &this->fields.commandlist;
        if ( !klass )
          goto LABEL_84;
        klass = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)klass,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !klass )
          goto LABEL_84;
        v71.fields.r = 0.0;
        v71.fields.g = 0.0;
        v71.fields.b = 0.0;
        v71.fields.a = 0.01;
        UIWidget__set_color((UIWidget_o *)klass, v71, 0LL);
        v37 = *v70;
      }
    }
    ++v38;
    if ( !v37 )
      goto LABEL_84;
  }
  selectcommand = this->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_84;
  v61 = selectcommand->max_length;
  if ( (__int64)(v61 << 32) >= 1 )
  {
    v62 = 0LL;
    v63 = &selectcommand->m_Items[1];
    while ( v62 < v61 )
    {
      v63[v62++] = -1;
      if ( (__int64)v62 >= (int)v61 )
        goto LABEL_79;
    }
    goto LABEL_89;
  }
LABEL_79:
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_84;
  v65 = 0LL;
  v66 = 32LL;
  while ( 1 )
  {
    v67 = selectedcomponents->max_length;
    if ( v66 == 56 )
      break;
    if ( v65 >= v67 )
      goto LABEL_89;
    *(Il2CppClass **)((char *)&selectedcomponents->obj.klass + v66) = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)((char *)selectedcomponents + v66),
      0LL,
      (int64_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    selectedcomponents = this->fields.selectedcomponents;
    ++v65;
    v66 += 8LL;
    if ( !selectedcomponents )
      goto LABEL_84;
  }
  if ( (unsigned int)v67 <= 3 )
    goto LABEL_89;
  klass = (__int64)selectedcomponents->m_Items[3];
  if ( !klass
    || (klass = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)klass,
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_84:
    sub_1C22094(klass, v12);
  }
  v72.fields.r = 0.0;
  v72.fields.g = 0.0;
  v72.fields.b = 0.0;
  v72.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)klass, v72, 0LL);
  this->fields.drawcount = 0;
  this->fields.maxdrawcount = maxdrawcount;
}


void __fastcall BattlePerformanceCommandCard__setCountRemaining(
        BattlePerformanceCommandCard_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectinfo_sprite; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  UISprite_o *v9; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDE37D & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20605/*"img_battle_select{0:0}"*/);
    byte_4BDE37D = 1;
  }
  selectinfo_sprite = (UnityEngine_Object_o *)this->fields.selectinfo_sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectinfo_sprite, 0LL, 0LL) )
  {
    v9 = this->fields.selectinfo_sprite;
    v13 = count;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v6, v7, v8);
    v11 = System_String__Format((System_String_o *)StringLiteral_20605/*"img_battle_select{0:0}"*/, v10, 0LL);
    if ( !v9 )
      sub_1C22094(v11, v12);
    UISprite__set_spriteName(v9, v11, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__setFirstAura(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *comp,
        int32_t type,
        const MethodInfo *method)
{
  _BOOL8 isQUICK; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o **p_firstaura_q; // x8

  if ( (byte_4BDE36B & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDE36B = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  isQUICK = BattleCommand__isQUICK(type, 0LL);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_q;
LABEL_18:
      BattleCommandComponent__addFirstAura(comp, *p_firstaura_q, 0LL);
      return;
    }
    goto LABEL_20;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  isQUICK = BattleCommand__isARTS(type, 0LL);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_a;
      goto LABEL_18;
    }
LABEL_20:
    sub_1C22094(isQUICK, v8);
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  isQUICK = BattleCommand__isBUSTER(type, 0LL);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_b;
      goto LABEL_18;
    }
    goto LABEL_20;
  }
}


void __fastcall BattlePerformanceCommandCard__setPrevStarsFlg(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isPrevStar = flg;
}


void __fastcall BattlePerformanceCommandCard__set_IsPlayingBackStar(
        BattlePerformanceCommandCard_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlayingBackStar_k__BackingField = value;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffect(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        System_String_o *endproc,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BDE371 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo);
    byte_4BDE371 = 1;
  }
  v7 = sub_1C22084(BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo);
  BattlePerformanceCommandCard__showComboEffect_d__133___ctor(
    (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = combo;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)combo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endproc;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)endproc, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffectNormal(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_4BDE373 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo);
    byte_4BDE373 = 1;
  }
  v5 = sub_1C22084(BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo);
  BattlePerformanceCommandCard__showComboEffectNormal_d__135___ctor(
    (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = combo;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)combo, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffectShort(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_4BDE372 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo);
    byte_4BDE372 = 1;
  }
  v5 = sub_1C22084(BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo);
  BattlePerformanceCommandCard__showComboEffectShort_d__134___ctor(
    (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = combo;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)combo, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceCommandCard__startComboEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_Collections_IEnumerator_o *v6; // x1

  v3 = this;
  if ( (byte_4BDE370 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDE370 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL )
    sub_1C22094(this, method);
  v6 = BattlePerformanceCommandCard__showComboEffect(
         v3,
         data->fields.combodata,
         (System_String_o *)StringLiteral_5604/*"END_PROC"*/,
         v2);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v3, v6, 0LL);
}


void __fastcall BattlePerformanceCommandCard__startFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = BattlePerformanceCommandCard__coStartFirstBonus(this, type, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall BattlePerformanceCommandCard__startMiniCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  struct BattleCommandComponent_array *v5; // x8
  struct BattleCommandComponent_array *v6; // x8
  struct BattleCommandComponent_array *v7; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  BattlePerformanceCommandCard_o *v15; // x21
  struct UnityEngine_Transform_array *miniPos; // x8
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  BattlePerformanceCommandCard_o *v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  BattlePerformanceCommandCard_o *v42; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  BattlePerformanceCommandCard_o *v58; // x22
  System_Collections_Hashtable_o *v59; // x0
  struct BattleCommandComponent_array *v60; // x8
  UnityEngine_GameObject_o *v61; // x20
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  BattlePerformanceCommandCard_o *v68; // x21
  __int64 v69; // x9
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  BattlePerformanceCommandCard_o *v79; // x22
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  BattlePerformanceCommandCard_o *v95; // x22
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  BattlePerformanceCommandCard_o *v111; // x22
  System_Collections_Hashtable_o *v112; // x0
  __int64 v113; // x0
  int v114; // [xsp+0h] [xbp-90h] BYREF
  int v115; // [xsp+4h] [xbp-8Ch] BYREF
  __int64 v116; // [xsp+8h] [xbp-88h] BYREF
  float z; // [xsp+10h] [xbp-80h]
  int v118; // [xsp+18h] [xbp-78h] BYREF
  int v119; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o position; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4BDE37E & 1) == 0 )
  {
    sub_1C21E38(&iTween_EaseType_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    sub_1C21E38(&StringLiteral_23435/*"scale"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE37E = 1;
  }
  v3 = 0LL;
  do
  {
    selectedcomponents = v2->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_77;
    if ( (unsigned int)v3 >= selectedcomponents->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[v3];
    if ( !this )
      goto LABEL_77;
    BattleCommandComponent__setMoveMode((BattleCommandComponent_o *)this, 0LL);
    v5 = v2->fields.selectedcomponents;
    if ( !v5 )
      goto LABEL_77;
    if ( (unsigned int)v3 >= v5->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v5->m_Items[v3];
    if ( !this )
      goto LABEL_77;
    BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)this, 0, 0LL);
    v6 = v2->fields.selectedcomponents;
    if ( !v6 )
      goto LABEL_77;
    if ( (unsigned int)v3 >= v6->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v6->m_Items[v3];
    if ( !this )
      goto LABEL_77;
    BattleCommandComponent__SetTreasureDeviceTypeChange((BattleCommandComponent_o *)this, 0, 0, 0LL);
    v7 = v2->fields.selectedcomponents;
    if ( !v7 )
      goto LABEL_77;
    if ( (unsigned int)v3 >= v7->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v7->m_Items[v3];
    if ( !this )
      goto LABEL_77;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (BattlePerformanceCommandCard_o *)sub_1C21EE0(object___TypeInfo, 6LL);
    if ( !this )
      goto LABEL_77;
    v15 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22984/*"position"*/;
    if ( StringLiteral_22984/*"position"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_22984/*"position"*/, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_22984/*"position"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
      goto LABEL_76;
    v15->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v15->fields.COMMAND_STAMP_POS_X,
      (int64_t)method,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    miniPos = v2->fields.miniPos;
    if ( !miniPos )
      goto LABEL_77;
    if ( (unsigned int)v3 >= miniPos->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)miniPos->m_Items[v3];
    if ( !this )
      goto LABEL_77;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(
                                               UnityEngine_Vector3_TypeInfo,
                                               &position,
                                               v17,
                                               v18,
                                               v19);
    v26 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v15->klass->_1.element_class);
      if ( !this )
      {
LABEL_78:
        v113 = sub_1C220B8(this);
        sub_1C21F60(v113, 0LL);
      }
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_76;
    *(_QWORD *)&v15->fields.COMMAND_STAMP_POS_Y = v26;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v15->fields.COMMAND_STAMP_POS_Y,
      (int64_t)v26,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24360/*"time"*/;
    if ( StringLiteral_24360/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_24360/*"time"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_76;
    *(_QWORD *)&v15->fields.CARD_ROOT_BASE_X = method;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v15->fields.CARD_ROOT_BASE_X,
      (int64_t)method,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v119 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v119, v33, v34, v35);
    v42 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_76;
    v15->fields.commandfsm = (struct PlayMakerFSM_o *)v42;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v15->fields.commandfsm, (int64_t)v42, v36, v37, v38, v39, v40, v41);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_19078/*"easetype"*/;
    if ( StringLiteral_19078/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_19078/*"easetype"*/, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_19078/*"easetype"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 4 )
LABEL_76:
      sub_1C2209C(this, method);
    v15->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v15->fields.commandprefab, (int64_t)method, v43, v44, v45, v46, v47, v48);
    v118 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v118, v49, v50, v51);
    v58 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_76;
    v15->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v58;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v15->fields.selectCommandPrefab,
      (int64_t)v58,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v59 = iTween__Hash((System_Object_array *)v15, 0LL);
    iTween__MoveTo_61653064(gameObject, v59, 0LL);
    v60 = v2->fields.selectedcomponents;
    if ( !v60 )
      goto LABEL_77;
    if ( (unsigned int)v3 >= v60->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v60->m_Items[v3];
    if ( !this
      || (v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
          (this = (BattlePerformanceCommandCard_o *)sub_1C21EE0(object___TypeInfo, 6LL)) == 0LL) )
    {
LABEL_77:
      sub_1C22094(this, method);
    }
    v68 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23435/*"scale"*/;
    if ( StringLiteral_23435/*"scale"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_23435/*"scale"*/, v68->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_23435/*"scale"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( !LODWORD(v68->fields.m_CancellationTokenSource) )
      goto LABEL_76;
    v68->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v68->fields.COMMAND_STAMP_POS_X,
      (int64_t)method,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v69 = *(_QWORD *)&v2->fields.miniScale.fields.x;
    z = v2->fields.miniScale.fields.z;
    v116 = v69;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v116, v70, v71, v72);
    v79 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v68->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v68->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_76;
    *(_QWORD *)&v68->fields.COMMAND_STAMP_POS_Y = v79;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v68->fields.COMMAND_STAMP_POS_Y,
      (int64_t)v79,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24360/*"time"*/;
    if ( StringLiteral_24360/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v68->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_24360/*"time"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v68->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_76;
    *(_QWORD *)&v68->fields.CARD_ROOT_BASE_X = method;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v68->fields.CARD_ROOT_BASE_X,
      (int64_t)method,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    v115 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v115, v86, v87, v88);
    v95 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v68->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v68->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_76;
    v68->fields.commandfsm = (struct PlayMakerFSM_o *)v95;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v68->fields.commandfsm, (int64_t)v95, v89, v90, v91, v92, v93, v94);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_19078/*"easetype"*/;
    if ( StringLiteral_19078/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_19078/*"easetype"*/, v68->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_19078/*"easetype"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v68->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_76;
    v68->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v68->fields.commandprefab,
      (int64_t)method,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
    v114 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v114, v102, v103, v104);
    v111 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v68->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v68->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_76;
    v68->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v111;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v68->fields.selectCommandPrefab,
      (int64_t)v111,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    v112 = iTween__Hash((System_Object_array *)v68, 0LL);
    iTween__ScaleTo_61658592(v61, v112, 0LL);
    ++v3;
  }
  while ( (_DWORD)v3 != 4 );
}


void __fastcall BattlePerformanceCommandCard__startOpenNpCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  v3 = BattlePerformanceCommandCard__colOpenNpCard(this, method);
  started = UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  this->fields.openNpCoroutine = started;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.openNpCoroutine, (int64_t)started, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattlePerformanceCommandCard__stopFirstBonus(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v4; // x1
  Spawner_o *spawner; // x0

  if ( (byte_4BDE369 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE369 = 1;
  }
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL) )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      sub_1C22094(0LL, v4);
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__toggleHighSpeedMode(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *perf; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t v8; // w1
  const MethodInfo *v9; // x2

  if ( (byte_4BDE3A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceCommandCard_toggleHighSpeedMode__);
    byte_4BDE3A2 = 1;
  }
  data = (BattleData_o *)BattlePerformanceCommandCard__checkSpeedButtonTutorial(this, method);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    perf = this->fields.perf;
    if ( !perf || (data = perf->fields.data) == 0LL )
      sub_1C22094(data, v4);
    BattleData__toggleHighSpeedMode(data, 0LL);
    v6 = Method_BattlePerformanceCommandCard_toggleHighSpeedMode__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_toggleHighSpeedMode__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceCommandCard_toggleHighSpeedMode__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
    OverwriteAssetSoundName__PlayCommonSe(v7, 9, 0, 0LL);
    BattlePerformanceCommandCard__updateHighSpeedObject(this, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__touchCommandCard(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  int v6; // w21
  struct BattleData_o *Bdata; // x8
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v9; // x22
  int max_length; // w9
  Il2CppClass **v11; // x8
  Il2CppClass *v12; // x21
  const MethodInfo *v13; // x2
  struct BattleData_o *v14; // x8

  if ( (byte_4BDE360 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21667/*"markindex"*/);
    sub_1C21E38(&StringLiteral_11710/*"SELECTCARD"*/);
    byte_4BDE360 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_30;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_30;
  v6 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getTurn(this->fields.logic, 0LL);
  if ( this->fields.isTouchNgInTutorial )
    return;
  if ( v6 == 1 )
  {
    if ( (unsigned int)((_DWORD)logic - 1) >= 3 )
    {
      if ( (_DWORD)logic == 5 && ((unsigned int)markindex > 5 || ((1 << markindex) & 0x23) == 0) )
        return;
    }
    else if ( (unsigned int)markindex >= 3 )
    {
      return;
    }
  }
  else if ( (v6 & 0xFFFFFFFE) == 2 )
  {
    if ( v6 == 2 && (_DWORD)logic == 2 )
    {
      Bdata = this->fields.Bdata;
      if ( !Bdata )
        goto LABEL_30;
      if ( (unsigned int)markindex > 2 || Bdata->fields.tutorialState == 10 )
        return;
    }
    else if ( (unsigned int)markindex > 2 )
    {
      return;
    }
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_30;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v9 >= max_length )
      return;
    if ( (unsigned int)v9 >= max_length )
      sub_1C2209C(logic, *(_QWORD *)&markindex);
    v11 = &commandCompArray->obj.klass + v9;
    v12 = v11[4];
    if ( !v12 )
      goto LABEL_30;
    logic = (BattleLogic_o *)BattleCommandComponent__checkMark((BattleCommandComponent_o *)v11[4], markindex, 0LL);
    if ( ((unsigned __int8)logic & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v9;
    if ( !commandCompArray )
      goto LABEL_30;
  }
  v14 = this->fields.Bdata;
  if ( !v14 )
    goto LABEL_30;
  if ( v14->fields.systemflg_selectcancel || !BYTE4(v12->vtable[6].methodPtr) )
  {
    if ( this->fields.directCommandCardTouchEnable )
    {
      BattlePerformanceCommandCard__selectOK(this, markindex, v13);
      return;
    }
    logic = (BattleLogic_o *)this->fields.commandfsm;
    if ( logic )
    {
      logic = (BattleLogic_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)logic, 0LL);
      if ( logic )
      {
        logic = (BattleLogic_o *)logic->fields.logiclist;
        if ( logic )
        {
          logic = (BattleLogic_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                     (HutongGames_PlayMaker_FsmVariables_o *)logic,
                                     (System_String_o *)StringLiteral_21667/*"markindex"*/,
                                     0LL);
          if ( logic )
          {
            LODWORD(logic->fields.perf) = markindex;
            logic = (BattleLogic_o *)this->fields.commandfsm;
            if ( logic )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_11710/*"SELECTCARD"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C22094(logic, *(_QWORD *)&markindex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__unselectCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *bc,
        int32_t markindex,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v5; // x19
  BattlePerformanceCommandCard_o *v6; // x20
  struct System_Int32_array *selectcommand; // x12
  unsigned __int64 max_length; // x8
  unsigned __int64 v9; // x10
  int32_t *v10; // x12
  unsigned int v11; // w24
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int v13; // w8
  int32_t v14; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattlePerformanceCommandCard_o *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  BattlePerformanceCommandCard_o *v32; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  BattlePerformanceCommandCard_o *v48; // x23
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  BattlePerformanceCommandCard_o *v64; // x23
  System_Collections_Hashtable_o *v65; // x0
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x3
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct BattleCommandComponent_array *v74; // x8
  Il2CppClass **v75; // x0
  int32_t v76; // w1
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x1
  __int64 v79; // x0
  char v80[4]; // [xsp+Ch] [xbp-44h] BYREF
  int v81; // [xsp+18h] [xbp-38h] BYREF
  int v82; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = bc;
  v6 = this;
  if ( (byte_4BDE362 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_21211/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE362 = 1;
  }
  selectcommand = v6->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_51;
  max_length = selectcommand->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v9 = 0LL;
    v10 = &selectcommand->m_Items[1];
    v11 = -1;
    do
    {
      if ( v9 >= max_length )
        goto LABEL_50;
      if ( v10[v9] == markindex )
      {
        v11 = v9;
        v10[v9] = -1;
      }
      ++v9;
    }
    while ( (__int64)v9 < (int)max_length );
    if ( (v11 & 0x80000000) == 0 )
    {
      selectedcomponents = v6->fields.selectedcomponents;
      if ( !selectedcomponents )
        goto LABEL_51;
      if ( (signed int)v11 >= (signed int)selectedcomponents->max_length )
        return;
      if ( !v5 )
        goto LABEL_51;
      v5->fields.selectflg = 0;
      v13 = v6->fields.drawcount - 1;
      v14 = v6->fields.maxdrawcount - v13;
      v6->fields.drawcount = v13;
      BattlePerformanceCommandCard__selectCommandCard(v6, v14, *(const MethodInfo **)&markindex);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      this = (BattlePerformanceCommandCard_o *)sub_1C21EE0(object___TypeInfo, 6LL);
      if ( !this )
        goto LABEL_51;
      v22 = this;
      this = (BattlePerformanceCommandCard_o *)StringLiteral_25289/*"y"*/;
      if ( StringLiteral_25289/*"y"*/ )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_25289/*"y"*/, v22->klass->_1.element_class);
        if ( !this )
          goto LABEL_52;
        bc = (BattleCommandComponent_o *)StringLiteral_25289/*"y"*/;
      }
      else
      {
        bc = 0LL;
      }
      if ( !LODWORD(v22->fields.m_CancellationTokenSource) )
        goto LABEL_50;
      v22->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)bc;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v22->fields.COMMAND_STAMP_POS_X,
        (int64_t)bc,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      v82 = 0;
      this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v23, v24, v25);
      v32 = this;
      if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v22->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_50;
        *(_QWORD *)&v22->fields.COMMAND_STAMP_POS_Y = v32;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v22->fields.COMMAND_STAMP_POS_Y,
          (int64_t)v32,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_24360/*"time"*/;
        if ( StringLiteral_24360/*"time"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v22->klass->_1.element_class);
          if ( !this )
            goto LABEL_52;
          bc = (BattleCommandComponent_o *)StringLiteral_24360/*"time"*/;
        }
        else
        {
          bc = 0LL;
        }
        if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 2 )
          goto LABEL_50;
        *(_QWORD *)&v22->fields.CARD_ROOT_BASE_X = bc;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v22->fields.CARD_ROOT_BASE_X,
          (int64_t)bc,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        v81 = 1045220557;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v81, v39, v40, v41);
        v48 = this;
        if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v22->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 3 )
            goto LABEL_50;
          v22->fields.commandfsm = (struct PlayMakerFSM_o *)v48;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v22->fields.commandfsm, (int64_t)v48, v42, v43, v44, v45, v46, v47);
          this = (BattlePerformanceCommandCard_o *)StringLiteral_21211/*"islocal"*/;
          if ( StringLiteral_21211/*"islocal"*/ )
          {
            this = (BattlePerformanceCommandCard_o *)sub_1C21F74(StringLiteral_21211/*"islocal"*/, v22->klass->_1.element_class);
            if ( !this )
              goto LABEL_52;
            bc = (BattleCommandComponent_o *)StringLiteral_21211/*"islocal"*/;
          }
          else
          {
            bc = 0LL;
          }
          if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 4 )
            goto LABEL_50;
          v22->fields.commandprefab = (struct UnityEngine_GameObject_o *)bc;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v22->fields.commandprefab,
            (int64_t)bc,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
          v80[0] = 1;
          this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v80, v55, v56, v57);
          v64 = this;
          if ( !this
            || (this = (BattlePerformanceCommandCard_o *)sub_1C21F74(this, v22->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 5 )
              goto LABEL_50;
            v22->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v64;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v22->fields.selectCommandPrefab,
              (int64_t)v64,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v65 = iTween__Hash((System_Object_array *)v22, 0LL);
            iTween__MoveTo_61653064(gameObject, v65, 0LL);
            BattleCommandComponent__startMoveFloat(v5, 0LL);
            if ( v11 )
              BattlePerformanceCommandCard__setFirstAura(v6, v5, v6->fields.firstAuraType, v67);
            else
              BattlePerformanceCommandCard__cancelFirstBonus(v6, v66);
            v74 = v6->fields.selectedcomponents;
            if ( v74 )
            {
              if ( v11 < v74->max_length )
              {
                v75 = &v74->obj.klass + v11;
                v75[4] = 0LL;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v75 + 4), 0LL, v68, v69, v70, v71, v72, v73);
                BattlePerformanceCommandCard__checkChainBonus(v6, v76, v77);
                BattlePerformanceCommandCard__checkMaskEnemy(v6, v78);
                BattleCommandComponent__resetSelect(v5, 0LL);
                return;
              }
LABEL_50:
              sub_1C2209C(this, bc);
            }
LABEL_51:
            sub_1C22094(this, bc);
          }
        }
      }
LABEL_52:
      v79 = sub_1C220B8(this);
      sub_1C21F60(v79, 0LL);
    }
  }
}


void __fastcall BattlePerformanceCommandCard__updateBuffIcon(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x22
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v6; // x8
  BattleCommandComponent_o *v7; // x20
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x21

  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_13:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( (int)v4 < (signed int)p_commandlist->max_length )
  {
    commandCompArray = v3->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_13;
    if ( (unsigned int)v4 >= commandCompArray->max_length )
      sub_1C2209C(this, method);
    v6 = &commandCompArray->obj.klass + v4;
    v7 = (BattleCommandComponent_o *)v6[4];
    if ( !v7 )
      goto LABEL_13;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)v6[4],
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      perf = v3->fields.perf;
      if ( !perf )
        goto LABEL_13;
      data = perf->fields.data;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getUniqueID(v7, 0LL);
      if ( !data )
        goto LABEL_13;
      this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
      if ( this )
        BattleCommandComponent__setBuffIconList(v7, (BattleBuffData_o *)this[1].fields.commandprefab, 0LL);
    }
    p_commandlist = v3->fields.p_commandlist;
    ++v4;
    if ( !p_commandlist )
      goto LABEL_13;
  }
}


void __fastcall BattlePerformanceCommandCard__updateCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 i; // x22
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_Object_o *v5; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v7; // x8
  unsigned __int64 v8; // x22
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v10; // x20

  v2 = this;
  if ( (byte_4BDE357 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE357 = 1;
  }
  for ( i = 9LL; i != 12; ++i )
  {
    p_commandlist = v2->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_28;
    if ( i - 4 >= (unsigned __int64)p_commandlist->max_length )
      goto LABEL_30;
    v5 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + i);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      commandCompArray = v2->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_28;
      if ( i - 4 >= (unsigned __int64)commandCompArray->max_length )
LABEL_30:
        sub_1C2209C(this, method);
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + i);
      if ( !this )
        goto LABEL_28;
      BattleCommandComponent__setData((BattleCommandComponent_o *)this, 0LL, 0LL, 0, 1, 0, 1, 0LL);
    }
  }
  v7 = v2->fields.commandCompArray;
  if ( !v7 )
LABEL_28:
    sub_1C22094(this, method);
  v8 = 0LL;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (__int64)v8 >= (int)max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_30;
    v10 = v7->m_Items[v8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_28;
      BattleCommandComponent__updateView(v10, 0, 0, 1, 0, 0, 0LL);
      if ( v10->fields.data
        && BattleCommandComponent__getCriticalCount(v10, 0LL) >= 1
        && !v2->fields._IsPlayingBackStar_k__BackingField )
      {
        BattleCommandComponent__setCriticalObject(v10, 1, 0LL);
      }
      BattleCommandComponent__UpdateCommandCardEffect(v10, 0LL);
    }
    v7 = v2->fields.commandCompArray;
    ++v8;
    if ( !v7 )
      goto LABEL_28;
  }
}


void __fastcall BattlePerformanceCommandCard__updateCardFix(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  BattlePerformanceCommandCard_o *v4; // x20
  int v5; // w8
  int32_t firstaura_b_high; // w21
  int v7; // w8
  int v8; // w22
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v10; // x23
  int max_length; // w9
  unsigned int v12; // w24
  struct BattleCommandComponent_array *v13; // x8
  BattleCommandComponent_o *v14; // x8

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_18;
  v3 = this;
  this = (BattlePerformanceCommandCard_o *)perf->fields.data;
  if ( !this )
    goto LABEL_18;
  this = (BattlePerformanceCommandCard_o *)BattleData__GetMaximumTurnFixedBuff((BattleData_o *)this, 0LL);
  v4 = this;
  if ( this )
  {
    v5 = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
    firstaura_b_high = HIDWORD(this->fields.firstaura_b);
    v7 = v5 + 1 >= 0 ? v5 + 1 : v5 + 2;
    v8 = v7 >> 1;
  }
  else
  {
    firstaura_b_high = 0;
    v8 = 0;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_18:
    sub_1C22094(this, method);
  v10 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= max_length )
      break;
    if ( v12 >= max_length )
      goto LABEL_20;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + v10);
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(
                                                 (BattleCommandComponent_o *)this,
                                                 0LL);
      v13 = v3->fields.commandCompArray;
      if ( v13 )
      {
        if ( v12 >= v13->max_length )
LABEL_20:
          sub_1C2209C(this, method);
        v14 = (BattleCommandComponent_o *)*((_QWORD *)&v13->obj.klass + v10);
        if ( v14 )
        {
          BattleCommandComponent__SetFixedCommandCardBuff(
            v14,
            (v4 != 0LL) & ((unsigned __int8)this ^ 1),
            v8,
            firstaura_b_high,
            0LL);
          commandCompArray = v3->fields.commandCompArray;
          ++v10;
          if ( commandCompArray )
            continue;
        }
      }
    }
    goto LABEL_18;
  }
}


void __fastcall BattlePerformanceCommandCard__updateCardMag(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleData_o *Bdata; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleServantData_o *v5; // x20
  __int64 v6; // x21
  int max_length; // w9

  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_10;
  Bdata = (BattleData_o *)BattleData__getServantData(Bdata, Bdata->fields.globaltargetId, 0LL);
  if ( !Bdata || !this->fields.p_commandlist )
    return;
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_10:
    sub_1C22094(Bdata, method);
  v5 = (BattleServantData_o *)Bdata;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C2209C(Bdata, method);
    Bdata = (BattleData_o *)commandCompArray->m_Items[v6];
    if ( Bdata )
    {
      BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)Bdata, v5, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v6;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__updateHighSpeedObject(
        BattlePerformanceCommandCard_o *this,
        int32_t speedMode,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  struct BattleLogic_o *v5; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v8; // x8
  int32_t systemflg_acceleration; // w20
  bool v10; // w1

  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_22;
  logic = (BattleLogic_o *)BattleLogic__isTutorial(logic, 0LL);
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_22;
    logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0LL);
    if ( (_DWORD)logic == 2 )
    {
      logic = this->fields.logic;
      if ( !logic )
        goto LABEL_22;
      logic = (BattleLogic_o *)BattleLogic__getTurn(logic, 0LL);
      if ( (int)logic >= 3 )
      {
        v5 = this->fields.logic;
        if ( !v5 )
          goto LABEL_22;
        data = v5->fields.data;
        if ( !data )
          goto LABEL_22;
        data->fields.systemflg_acceleration = 2;
      }
    }
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_22;
  v8 = perf->fields.data;
  if ( !v8 )
    goto LABEL_22;
  logic = (BattleLogic_o *)this->fields.highSpeedArrowOn;
  if ( !logic )
    goto LABEL_22;
  systemflg_acceleration = v8->fields.systemflg_acceleration;
  logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0LL);
  if ( !logic )
    goto LABEL_22;
  if ( systemflg_acceleration != 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 1, 0LL);
    logic = (BattleLogic_o *)this->fields.highSpeedArrowOff;
    if ( logic )
    {
      logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0LL);
      if ( logic )
      {
        v10 = 0;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_1C22094(logic, *(_QWORD *)&speedMode);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 0, 0LL);
  logic = (BattleLogic_o *)this->fields.highSpeedArrowOff;
  if ( !logic )
    goto LABEL_22;
  logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0LL);
  if ( !logic )
    goto LABEL_22;
  v10 = 1;
LABEL_21:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, v10, 0LL);
}


void __fastcall BattlePerformanceCommandCard__updateTDTypeChange(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_1C22094(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__UpdateTDTypeChange((BattleCommandComponent_o *)this, 0, 0LL);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__waitFallStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDE359 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo);
    byte_4BDE359 = 1;
  }
  v3 = sub_1C22084(BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo);
  BattlePerformanceCommandCard__waitFallStar_d__97___ctor(
    (BattlePerformanceCommandCard__waitFallStar_d__97_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__waitFunc(
        BattlePerformanceCommandCard_o *this,
        float waittime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BDE385 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceCommandCard__waitFunc_d__169_TypeInfo);
    byte_4BDE385 = 1;
  }
  v7 = sub_1C22084(BattlePerformanceCommandCard__waitFunc_d__169_TypeInfo);
  BattlePerformanceCommandCard__waitFunc_d__169___ctor((BattlePerformanceCommandCard__waitFunc_d__169_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 40) = waittime;
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)callback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122___ctor(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__MoveNext(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *v8; // x19
  int32_t _1__state; // w8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x19
  UnityEngine_Object_o *firstBonusAnimation; // x19

  v8 = this;
  if ( (byte_4BDE606 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE606 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      firstBonusSimpleAnimation = (UnityEngine_Object_o *)_4__this->fields.firstBonusSimpleAnimation;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(firstBonusSimpleAnimation, 0LL, 0LL) )
      {
        this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusSimpleAnimation;
        if ( this )
        {
          SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
          this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusSimpleAnimation;
          if ( this )
          {
            SimpleAnimation__Play((SimpleAnimation_o *)this, 0LL);
            return 0;
          }
        }
      }
      else
      {
        firstBonusAnimation = (UnityEngine_Object_o *)_4__this->fields.firstBonusAnimation;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(firstBonusAnimation, 0LL, 0LL) )
          return 0;
        this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusAnimation;
        if ( this )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0LL);
          this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusAnimation;
          if ( this )
          {
            UnityEngine_Animation__Play((UnityEngine_Animation_o *)this, 0LL);
            return 0;
          }
        }
      }
    }
    sub_1C22094(this, method);
  }
  if ( !_1__state )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
    sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDE604 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_4BDE604 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattlePerformanceCommandCard___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattlePerformanceCommandCard___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceCommandCard___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattlePerformanceCommandCard___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePerformanceCommandCard___c___ctor(
        BattlePerformanceCommandCard___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceCommandCard___c___DistributeCriticalPoint_b__120_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.data
      && !BattleCommandComponent__isTreasureDvc(x, 0LL)
      && BattleCommandComponent__getCommandType(x, 0LL) != 4;
}


bool __fastcall BattlePerformanceCommandCard___c___coStartFirstBonus_b__119_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.selectflg;
}


bool __fastcall BattlePerformanceCommandCard___c___showComboEffectShort_b__134_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return BattleCommandComponent__getCommandType(x, 0LL) == 3;
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass120_0___ctor(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceCommandCard___c__DisplayClass120_0___DistributeCriticalPoint_b__1(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard___c__DisplayClass120_0_o *v4; // x20
  struct BattlePerformanceCommandCard_o *_4__this; // x8

  v4 = this;
  if ( (byte_4BDE605 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard___c__DisplayClass120_0_o *)sub_1C21E38(&Method_System_Linq_Enumerable_Contains_BattleCommandComponent___);
    byte_4BDE605 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, x);
  return System_Linq_Enumerable__Contains_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents,
           (Il2CppObject *)x,
           (const MethodInfo_2FC80F4 *)Method_System_Linq_Enumerable_Contains_BattleCommandComponent___);
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass120_0___DistributeCriticalPoint_b__2(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  BattleCommandComponent__AddBoostedCriticalRate(x, this->fields.criticalPercentageToAdd, 0LL);
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass173_0___ctor(
        BattlePerformanceCommandCard___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass173_0___PlayBackStar_b__0(
        BattlePerformanceCommandCard___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  struct BattlePerformanceCommandCard_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, method);
  _4__this->fields._IsPlayingBackStar_k__BackingField = 0;
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall BattlePerformanceCommandCard__coStartFirstBonus_d__119___ctor(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__coStartFirstBonus_d__119__MoveNext(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *v8; // x20
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x19
  UnityEngine_Object_o *firstBonusObject; // x22
  UnityEngine_GameObject_o **p_firstBonusObject; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t type; // w22
  Spawner_o *spawner; // x22
  UnityEngine_Object_o *firstbonus_q; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_GameObject_o *v33; // x22
  Il2CppObject *ComponentInChildren_object__50333916; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  PartyOrganizationUtility_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v51; // x21
  int max_length; // w9
  int32_t v53; // w22
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  int32_t v56; // w20
  System_Object_array *v57; // x21
  BattlePerformanceCommandCard___c_c *v58; // x0
  System_Func_object__bool__o *_9__119_0; // x22
  Il2CppObject *v60; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  Il2CppObject *object; // x21
  int32_t v69; // w22
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4BDE607 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Find_BattleCommandComponent___);
    sub_1C21E38(&BattleCommand_TypeInfo);
    sub_1C21E38(&System_Func_BattleCommandComponent__bool__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation____77696504);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____77696536);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_1C21E38(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_4BDE607 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    goto LABEL_28;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_39;
  firstBonusObject = (UnityEngine_Object_o *)_4__this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_firstBonusObject = &_4__this->fields.firstBonusObject;
  if ( UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL) )
  {
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)_4__this->fields.spawner;
    if ( !this )
      goto LABEL_39;
    Spawner__Despawn((Spawner_o *)this, *p_firstBonusObject, 1, 0LL);
    *p_firstBonusObject = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.firstBonusObject, 0LL, v13, v14, v15, v16, v17, v18);
  }
  type = v8->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)BattleCommand__isQUICK(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_q;
    if ( byte_4BD6BB1 )
    {
LABEL_16:
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      if ( !byte_4BD6BB7 )
      {
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
        byte_4BD6BB7 = 1;
      }
      if ( !spawner )
        goto LABEL_39;
      v70.fields.x = x;
      v70.fields.y = y;
      v70.fields.z = z;
      v26 = Spawner__Spawn_39212088(
              spawner,
              firstbonus_q,
              v70,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
      *p_firstBonusObject = v26;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&_4__this->fields.firstBonusObject,
        (int64_t)v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      goto LABEL_20;
    }
LABEL_15:
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
    goto LABEL_16;
  }
  v53 = v8->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)BattleCommand__isARTS(v53, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_a;
    if ( byte_4BD6BB1 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v69 = v8->fields.type;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)BattleCommand__isBUSTER(v69, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_b;
    if ( byte_4BD6BB1 )
      goto LABEL_16;
    goto LABEL_15;
  }
LABEL_20:
  v33 = *p_firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)UnityEngine_Object__op_Inequality(
                                                                       (UnityEngine_Object_o *)v33,
                                                                       0LL,
                                                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)*p_firstBonusObject;
    if ( !*p_firstBonusObject )
      goto LABEL_39;
    ComponentInChildren_object__50333916 = UnityEngine_GameObject__GetComponentInChildren_object__50333916(
                                             (UnityEngine_GameObject_o *)this,
                                             1,
                                             (const MethodInfo_30008DC *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____77696536);
    _4__this->fields.firstBonusSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__50333916;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&_4__this->fields.firstBonusSimpleAnimation,
      (int64_t)ComponentInChildren_object__50333916,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)_4__this->fields.firstBonusObject;
    if ( !this )
      goto LABEL_39;
    v41 = UnityEngine_GameObject__GetComponentInChildren_object__50333916(
            (UnityEngine_GameObject_o *)this,
            1,
            (const MethodInfo_30008DC *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation____77696504);
    _4__this->fields.firstBonusAnimation = (struct UnityEngine_Animation_o *)v41;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&_4__this->fields.firstBonusAnimation,
      (int64_t)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    BattlePerformanceCommandCard__ActivateFirstBonusObject(_4__this, 0LL);
  }
  _4__this->fields.firstAuraType = v8->fields.type;
LABEL_28:
  if ( _4__this->fields.isPlayingMoveCard )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  if ( _4__this->fields.firstAuraType != -1 )
  {
    commandCompArray = _4__this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v51 = 0LL;
      while ( 1 )
      {
        max_length = commandCompArray->max_length;
        if ( (int)v51 >= max_length )
          break;
        if ( (unsigned int)v51 >= max_length )
          sub_1C2209C(this, method);
        method = (const MethodInfo *)commandCompArray->m_Items[v51];
        if ( method )
        {
          if ( !BYTE4(method[4].parameters) )
          {
            BattlePerformanceCommandCard__setFirstAura(
              _4__this,
              (BattleCommandComponent_o *)method,
              _4__this->fields.firstAuraType,
              0LL);
            commandCompArray = _4__this->fields.commandCompArray;
          }
          ++v51;
          if ( commandCompArray )
            continue;
        }
        goto LABEL_39;
      }
      perf = _4__this->fields.perf;
      if ( perf )
      {
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)perf->fields.data;
        if ( this )
        {
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)this, v8->fields.type, 0LL);
          if ( FirstBonusCriticalRate >= 10 )
          {
            v56 = FirstBonusCriticalRate;
            v57 = (System_Object_array *)_4__this->fields.commandCompArray;
            v58 = BattlePerformanceCommandCard___c_TypeInfo;
            if ( !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
              v58 = BattlePerformanceCommandCard___c_TypeInfo;
            }
            _9__119_0 = (System_Func_object__bool__o *)v58->static_fields->__9__119_0;
            if ( !_9__119_0 )
            {
              if ( !v58->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v58);
                v58 = BattlePerformanceCommandCard___c_TypeInfo;
              }
              v60 = (Il2CppObject *)v58->static_fields->__9;
              _9__119_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleCommandComponent__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__119_0,
                v60,
                Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__,
                0LL);
              v61 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              v61->__9__119_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__119_0;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v61->__9__119_0,
                (int64_t)_9__119_0,
                v62,
                v63,
                v64,
                v65,
                v66,
                v67);
            }
            object = BasicHelper__Find_object_(
                       v57,
                       (System_Func_T__bool__o *)_9__119_0,
                       (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_BattleCommandComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0LL, 0LL) )
              BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, v56 / 10, 0, 0LL);
          }
          return 0;
        }
      }
    }
LABEL_39:
    sub_1C22094(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceCommandCard__coStartFirstBonus_d__119_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__colOpenNpCard_d__180___ctor(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__colOpenNpCard_d__180__MoveNext(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v7; // x19
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  System_Collections_Generic_List_object__o *v10; // x22
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o **v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o *npGaugeLightTargetRoot; // x22
  UnityEngine_Transform_o *v19; // x22
  float CARD_ROOT_BASE_X; // s8
  float CARD_ROOT_BASE_Y; // s9
  float v22; // s0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v24; // x26
  il2cpp_array_size_t max_length; // w9
  __int64 v26; // x8
  struct BattleCommandData_array *commandlist; // x9
  unsigned __int64 v28; // x10
  struct BattleCommandComponent_array *commandCompArray; // x8
  il2cpp_array_size_t v30; // w25
  BattleCommandComponent_o **v31; // x8
  int64_t v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 _2__current_low; // x10
  __int64 v42; // x8
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_Transform_o *v45; // x0
  UnityEngine_GameObject_o *Object_39485728; // x23
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v53; // x24
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct UnityEngine_Transform_array *npGaugeLightTarget; // x8
  int64_t v61; // x25
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v77; // x25
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v93; // x25
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v109; // x25
  System_Collections_Hashtable_o *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  _BOOL8 v117; // x0
  __int64 v118; // x1
  struct System_Collections_Generic_List_BattleCommandComponent__o *v119; // x8
  PartyOrganizationUtility_o *p_flglist_5__2; // x19
  struct System_Collections_Generic_List_BattleCommandComponent__o *flglist_5__2; // t1
  int64_t size; // x2
  int v123; // w9
  bool result; // w0
  float npCardDispDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v126; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  float npCardEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v135; // x20
  PartyOrganizationUtility_o *v136; // x19
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  __int64 v143; // x0
  float npGaugeEffectMoveTime; // [xsp+Ch] [xbp-94h] BYREF
  float npGaugeEffectMoveDelayTime; // [xsp+10h] [xbp-90h] BYREF
  int32_t npGaugeEaseType; // [xsp+14h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v147; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4

  v7 = this;
  if ( (byte_4BDE608 & 1) == 0 )
  {
    sub_1C21E38(&iTween_EaseType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleCommandComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleCommandComponent__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleCommandComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleCommandComponent__TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_19223/*"effect/ef_noblegauge01"*/);
    sub_1C21E38(&StringLiteral_18865/*"delay"*/);
    sub_1C21E38(&StringLiteral_19224/*"effect/ef_noblegauge02"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE608 = 1;
  }
  memset(&v147, 0, sizeof(v147));
  _1__state = v7->fields.__1__state;
  _4__this = v7->fields.__4__this;
  if ( _1__state == 2 )
  {
    flglist_5__2 = v7->fields._flglist_5__2;
    p_flglist_5__2 = (PartyOrganizationUtility_o *)&v7->fields._flglist_5__2;
    v119 = flglist_5__2;
    LODWORD(p_flglist_5__2[-1].fields.temporaryPartyInfo) = -1;
    if ( !flglist_5__2 )
      goto LABEL_71;
    size = (unsigned int)v119->fields._size;
    v123 = v119->fields._version + 1;
    v119->fields._size = 0;
    v119->fields._version = v123;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)v119->fields._items, 0, size, 0LL);
    p_flglist_5__2->klass = 0LL;
    sub_1C21DDC(p_flglist_5__2, 0LL, size, v2, v3, v4, v5, v6);
    if ( !_4__this )
      goto LABEL_71;
    BattlePerformanceCommandCard__giveoutNobleCard(_4__this, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)v7->fields._flglist_5__2;
    v7->fields.__1__state = -1;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v147,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__);
      while ( 1 )
      {
        v117 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v147,
                 (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__);
        if ( !v117 )
          break;
        if ( !v147.fields._current )
          sub_1C22094(v117, v118);
        if ( !BYTE4(v147.fields._current[25].klass) )
          BattleCommandComponent__playOpenNobleCard((BattleCommandComponent_o *)v147.fields._current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v147,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__);
      if ( _4__this )
      {
        npCardDispDelayTime = _4__this->fields.npCardDispDelayTime;
        v126 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v126, npCardDispDelayTime, 0LL);
        v7->fields.__2__current = (Il2CppObject *)v126;
        p__2__current = (PartyOrganizationUtility_o *)&v7->fields.__2__current;
        sub_1C21DDC(p__2__current, (int64_t)v126, v128, v129, v130, v131, v132, v133);
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
        return 1;
      }
    }
    goto LABEL_71;
  }
  if ( _1__state )
    return 0;
  v7->fields.__1__state = -1;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleCommandComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleCommandComponent___ctor__);
  v7->fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v10;
  v11 = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o **)&v7->fields._flglist_5__2;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v7->fields._flglist_5__2, (int64_t)v10, v12, v13, v14, v15, v16, v17);
  if ( !_4__this )
    goto LABEL_71;
  npGaugeLightTargetRoot = (UnityEngine_Object_o *)_4__this->fields.npGaugeLightTargetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)UnityEngine_Object__op_Inequality(
                                                                   npGaugeLightTargetRoot,
                                                                   0LL,
                                                                   0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = _4__this->fields.npGaugeLightTargetRoot;
    CARD_ROOT_BASE_X = _4__this->fields.CARD_ROOT_BASE_X;
    CARD_ROOT_BASE_Y = _4__this->fields.CARD_ROOT_BASE_Y;
    v22 = BattlePerformanceCommandCard__FSCardRootOffsetY(_4__this, 0LL);
    if ( !v19 )
      goto LABEL_71;
    v148.fields.y = CARD_ROOT_BASE_Y + v22;
    v148.fields.z = 0.0;
    v148.fields.x = CARD_ROOT_BASE_X;
    UnityEngine_Transform__set_localPosition(v19, v148, 0LL);
  }
  p_commandlist = _4__this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_71:
    sub_1C22094(this, method);
  v24 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v26 = v24 - 4;
    if ( v24 - 4 >= (int)(max_length - 1) )
      break;
    commandlist = _4__this->fields.commandlist;
    if ( !commandlist )
      goto LABEL_71;
    v28 = commandlist->max_length;
    if ( v26 < (int)v28 )
    {
      if ( v26 >= v28 )
        goto LABEL_87;
      method = (const MethodInfo *)*((_QWORD *)&commandlist->obj.klass + v24);
      if ( method )
      {
        this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)BattlePerformanceCommandCard__GetServantNumber(
                                                                         _4__this,
                                                                         (BattleCommandData_o *)method,
                                                                         0LL);
        commandCompArray = _4__this->fields.commandCompArray;
        if ( !commandCompArray )
          goto LABEL_71;
        v30 = (unsigned int)this;
        if ( (int)this + 5 >= commandCompArray->max_length )
          goto LABEL_87;
        v31 = &commandCompArray->m_Items[(int)this + 1];
        v32 = (int64_t)v31[4];
        if ( !v32 )
          goto LABEL_71;
        this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)BattleCommandComponent__checkObject(v31[4], 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = *v11;
          if ( !*v11 )
            goto LABEL_71;
          v39 = *(_QWORD *)&this->fields.__1__state;
          v40 = Method_System_Collections_Generic_List_BattleCommandComponent__Add__;
          ++HIDWORD(this->fields.__2__current);
          if ( !v39 )
            goto LABEL_71;
          _2__current_low = SLODWORD(this->fields.__2__current);
          if ( (unsigned int)_2__current_low >= *(_DWORD *)(v39 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v32,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = v39 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v42 + 32) = v32;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 32), v32, v33, v34, v35, v36, v37, v38);
          }
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)BattlePerformanceCommandCard__GetStatusUiObj(
                                                                           _4__this,
                                                                           *(BattleCommandData_o **)(v32 + 376),
                                                                           0LL);
          if ( !this )
            goto LABEL_71;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)this[3].fields.__2__current;
          if ( !this )
            goto LABEL_71;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)_4__this,
                                                                           0LL);
          if ( !this )
            goto LABEL_71;
          v44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          BaseMonoBehaviour__createObject_39485728(
            (BaseMonoBehaviour_o *)_4__this,
            (System_String_o *)StringLiteral_19223/*"effect/ef_noblegauge01"*/,
            v44,
            transform,
            0LL);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)_4__this,
                                                                           0LL);
          if ( !this )
            goto LABEL_71;
          v45 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          Object_39485728 = BaseMonoBehaviour__createObject_39485728(
                              (BaseMonoBehaviour_o *)_4__this,
                              (System_String_o *)StringLiteral_19224/*"effect/ef_noblegauge02"*/,
                              v45,
                              transform,
                              0LL);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C21EE0(object___TypeInfo, 8LL);
          if ( !this )
            goto LABEL_71;
          v53 = this;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_22984/*"position"*/;
          if ( StringLiteral_22984/*"position"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C21F74(
                                                                             StringLiteral_22984/*"position"*/,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            method = (const MethodInfo *)StringLiteral_22984/*"position"*/;
          }
          else
          {
            method = 0LL;
          }
          if ( !LODWORD(v53->fields.__2__current) )
            goto LABEL_87;
          v53->fields.__4__this = (struct BattlePerformanceCommandCard_o *)method;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v53->fields.__4__this,
            (int64_t)method,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
          npGaugeLightTarget = _4__this->fields.npGaugeLightTarget;
          if ( !npGaugeLightTarget )
            goto LABEL_71;
          if ( v30 >= npGaugeLightTarget->max_length )
            goto LABEL_87;
          v61 = (int64_t)npGaugeLightTarget->m_Items[v30];
          if ( v61 )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C21F74(
                                                                             v61,
                                                                             v53->klass->_1.element_class);
            if ( !this )
            {
LABEL_89:
              v143 = sub_1C220B8(this);
              sub_1C21F60(v143, 0LL);
            }
          }
          if ( LODWORD(v53->fields.__2__current) <= 1 )
            goto LABEL_87;
          v53->fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v61;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v53->fields._flglist_5__2, v61, v54, v55, v56, v57, v58, v59);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_19078/*"easetype"*/;
          if ( StringLiteral_19078/*"easetype"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C21F74(
                                                                             StringLiteral_19078/*"easetype"*/,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            method = (const MethodInfo *)StringLiteral_19078/*"easetype"*/;
          }
          else
          {
            method = 0LL;
          }
          if ( LODWORD(v53->fields.__2__current) <= 2 )
            goto LABEL_87;
          v53[1].klass = (BattlePerformanceCommandCard__colOpenNpCard_d__180_c *)method;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v53[1], (int64_t)method, v62, v63, v64, v65, v66, v67);
          npGaugeEaseType = _4__this->fields.npGaugeEaseType;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)j_il2cpp_value_box_0(
                                                                           iTween_EaseType_TypeInfo,
                                                                           &npGaugeEaseType,
                                                                           v68,
                                                                           v69,
                                                                           v70);
          v77 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C21F74(
                                                                             this,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
          }
          if ( LODWORD(v53->fields.__2__current) <= 3 )
            goto LABEL_87;
          v53[1].monitor = v77;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v53[1].monitor, (int64_t)v77, v71, v72, v73, v74, v75, v76);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_18865/*"delay"*/;
          if ( StringLiteral_18865/*"delay"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C21F74(
                                                                             StringLiteral_18865/*"delay"*/,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            method = (const MethodInfo *)StringLiteral_18865/*"delay"*/;
          }
          else
          {
            method = 0LL;
          }
          if ( LODWORD(v53->fields.__2__current) <= 4 )
            goto LABEL_87;
          *(_QWORD *)&v53[1].fields.__1__state = method;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v53[1].fields, (int64_t)method, v78, v79, v80, v81, v82, v83);
          npGaugeEffectMoveDelayTime = _4__this->fields.npGaugeEffectMoveDelayTime;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)j_il2cpp_value_box_0(
                                                                           float_TypeInfo,
                                                                           &npGaugeEffectMoveDelayTime,
                                                                           v84,
                                                                           v85,
                                                                           v86);
          v93 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C21F74(
                                                                             this,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
          }
          if ( LODWORD(v53->fields.__2__current) <= 5 )
            goto LABEL_87;
          v53[1].fields.__2__current = (Il2CppObject *)v93;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v53[1].fields.__2__current,
            (int64_t)v93,
            v87,
            v88,
            v89,
            v90,
            v91,
            v92);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_24360/*"time"*/;
          if ( StringLiteral_24360/*"time"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C21F74(
                                                                             StringLiteral_24360/*"time"*/,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            method = (const MethodInfo *)StringLiteral_24360/*"time"*/;
          }
          else
          {
            method = 0LL;
          }
          if ( LODWORD(v53->fields.__2__current) <= 6 )
LABEL_87:
            sub_1C2209C(this, method);
          v53[1].fields.__4__this = (struct BattlePerformanceCommandCard_o *)method;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v53[1].fields.__4__this,
            (int64_t)method,
            v94,
            v95,
            v96,
            v97,
            v98,
            v99);
          npGaugeEffectMoveTime = _4__this->fields.npGaugeEffectMoveTime;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)j_il2cpp_value_box_0(
                                                                           float_TypeInfo,
                                                                           &npGaugeEffectMoveTime,
                                                                           v100,
                                                                           v101,
                                                                           v102);
          v109 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1C21F74(
                                                                             this,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
          }
          if ( LODWORD(v53->fields.__2__current) <= 7 )
            goto LABEL_87;
          v53[1].fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v109;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v53[1].fields._flglist_5__2,
            (int64_t)v109,
            v103,
            v104,
            v105,
            v106,
            v107,
            v108);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          v110 = iTween__Hash((System_Object_array *)v53, 0LL);
          iTween__MoveTo_61653064(Object_39485728, v110, 0LL);
          *(_QWORD *)(v32 + 488) = Object_39485728;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)(v32 + 488),
            (int64_t)Object_39485728,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
        }
      }
    }
    p_commandlist = _4__this->fields.p_commandlist;
    ++v24;
    if ( !p_commandlist )
      goto LABEL_71;
  }
  npCardEffectDelayTime = _4__this->fields.npCardEffectDelayTime;
  v135 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v135, npCardEffectDelayTime, 0LL);
  v7->fields.__2__current = (Il2CppObject *)v135;
  v136 = (PartyOrganizationUtility_o *)&v7->fields.__2__current;
  sub_1C21DDC(v136, (int64_t)v135, v137, v138, v139, v140, v141, v142);
  result = 1;
  *(_DWORD *)&v136[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__colOpenNpCard_d__180__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__colOpenNpCard_d__180__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceCommandCard__colOpenNpCard_d__180_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__colOpenNpCard_d__180__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__colOpenNpCard_d__180__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__colOpenNpCard_d__180_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__showComboEffectNormal_d__135___ctor(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__showComboEffectNormal_d__135__MoveNext(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *v2; // x19
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  UnityEngine_Object_o *v4; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  DefCoroutine_c *v11; // x0
  int64_t milliSecNine; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct BattleComboData_o *combo; // x8
  int32_t samecount; // w20
  DefCoroutine_c *v23; // x0
  struct DefCoroutine_StaticFields *static_fields; // x8
  int64_t milliSecThree; // x1
  PartyOrganizationUtility_o *v26; // x19
  int v27; // w8
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  DefCoroutine_c *v34; // x0
  int64_t milliSecTwo; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  DefCoroutine_c *v42; // x0
  int64_t milliSecFour; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  DefCoroutine_c *v50; // x0
  int64_t v51; // x1
  int64_t milliSecEleven; // x1
  int32_t seName; // [xsp+4h] [xbp-2Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4BDE60A & 1) == 0 )
  {
    sub_1C21E38(&DefCoroutine_TypeInfo);
    this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE60A = 1;
  }
  prefab = 0LL;
  seName = 0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      prefab = 0LL;
      seName = -1;
      if ( !_4__this )
        goto LABEL_46;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, v2->fields.combo, &prefab, &seName, 0LL);
      v4 = (UnityEngine_Object_o *)prefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
        goto LABEL_18;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0LL);
      v11 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v11 = DefCoroutine_TypeInfo;
      }
      milliSecNine = (int64_t)v11->static_fields->milliSecNine;
      v2->fields.__2__current = (Il2CppObject *)milliSecNine;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, milliSecNine, v5, v6, v7, v8, v9, v10);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
LABEL_18:
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.logic;
      if ( !this )
        goto LABEL_46;
      BattleLogic__procComboAct((BattleLogic_o *)this, 0LL);
      method = (const MethodInfo *)v2->fields.combo;
      if ( !method )
        goto LABEL_46;
      if ( LOBYTE(method->invoker_method) )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, (BattleComboData_o *)method, 0LL);
        combo = v2->fields.combo;
        if ( !combo )
LABEL_46:
          sub_1C22094(this, method);
        samecount = combo->fields.samecount;
        v23 = DefCoroutine_TypeInfo;
        if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v23 = DefCoroutine_TypeInfo;
        }
        static_fields = v23->static_fields;
        if ( samecount == 3 )
        {
          milliSecThree = (int64_t)static_fields->milliSecThree;
          v2->fields.__2__current = (Il2CppObject *)milliSecThree;
          v26 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C21DDC(v26, milliSecThree, v15, v16, v17, v18, v19, v20);
          v27 = 2;
        }
        else
        {
          milliSecEleven = (int64_t)static_fields->milliSecEleven;
          v2->fields.__2__current = (Il2CppObject *)milliSecEleven;
          v26 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C21DDC(v26, milliSecEleven, v15, v16, v17, v18, v19, v20);
          v27 = 3;
        }
      }
      else
      {
LABEL_26:
        if ( HIDWORD(method->invoker_method) != 3 )
          return 0;
        BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, (BattleComboData_o *)method, 0LL);
        v34 = DefCoroutine_TypeInfo;
        if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v34 = DefCoroutine_TypeInfo;
        }
        milliSecTwo = (int64_t)v34->static_fields->milliSecTwo;
        v2->fields.__2__current = (Il2CppObject *)milliSecTwo;
        v26 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(v26, milliSecTwo, v28, v29, v30, v31, v32, v33);
        v27 = 4;
      }
LABEL_45:
      *(_DWORD *)&v26[-1].fields._IsQuestStartMenuMode_k__BackingField = v27;
      return 1;
    case 2:
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      method = (const MethodInfo *)v2->fields.combo;
      if ( !method )
        goto LABEL_46;
      goto LABEL_26;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0LL);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, 0LL);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.4, 0LL);
      v42 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v42 = DefCoroutine_TypeInfo;
      }
      milliSecFour = (int64_t)v42->static_fields->milliSecFour;
      v2->fields.__2__current = (Il2CppObject *)milliSecFour;
      v26 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v26, milliSecFour, v36, v37, v38, v39, v40, v41);
      v27 = 5;
      goto LABEL_45;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0LL);
      v50 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v50 = DefCoroutine_TypeInfo;
      }
      v51 = (int64_t)v50->static_fields->milliSecEleven;
      v2->fields.__2__current = (Il2CppObject *)v51;
      v26 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v26, v51, v44, v45, v46, v47, v48, v49);
      v27 = 6;
      goto LABEL_45;
    case 6:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceCommandCard__showComboEffectNormal_d__135_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__showComboEffectShort_d__134___ctor(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__showComboEffectShort_d__134__MoveNext(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard__showComboEffectShort_d__134_o *v2; // x19
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct BattleComboData_o *combo; // x8
  int32_t samecount; // w20
  DefCoroutine_c *v12; // x0
  struct DefCoroutine_StaticFields *v13; // x8
  int64_t milliSecThreeSixSix; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int v16; // w8
  int64_t milliSecEightSixSix; // x1
  System_Collections_Generic_IEnumerable_TSource__o *selectedcomponents; // x21
  BattlePerformanceCommandCard___c_c *v19; // x0
  System_Func_object__bool__o *_9__134_0; // x22
  Il2CppObject *v21; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x0
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  bool isExtraAttack; // w20
  DefCoroutine_c *v39; // x8
  struct DefCoroutine_StaticFields *v40; // x8
  __int64 v41; // x9
  int64_t v42; // x1
  UnityEngine_Object_o *v43; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  DefCoroutine_c *v50; // x8
  uint32_t cctor_finished; // w9
  int64_t v52; // x1
  PartyOrganizationUtility_o *v53; // x19
  bool result; // w0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  DefCoroutine_c *v61; // x0
  int64_t milliSecTwo; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  DefCoroutine_c *v69; // x0
  int64_t v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct BattleComboData_o *v77; // x8
  _BOOL4 flash; // w20
  DefCoroutine_c *v79; // x0
  struct DefCoroutine_StaticFields *v80; // x8
  int64_t milliSecFour; // x1
  int64_t v82; // x1
  DefCoroutine_c *v83; // x0
  int64_t milliSecNine; // x1
  DefCoroutine_c *v85; // x0
  int64_t milliSecThreeThreeThree; // x1
  int64_t v87; // x1
  int v88; // w20
  DefCoroutine_c *v89; // x8
  struct DefCoroutine_StaticFields *static_fields; // x8
  int64_t milliSecTwoSixSix; // x1
  int64_t milliSecThree; // x1
  int32_t seName; // [xsp+4h] [xbp-4Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4BDE60B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_BattleCommandComponent___);
    sub_1C21E38(&DefCoroutine_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___);
    sub_1C21E38(&System_Func_BattleCommandComponent__bool__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__);
    this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)sub_1C21E38(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_4BDE60B = 1;
  }
  prefab = 0LL;
  seName = 0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      prefab = 0LL;
      seName = -1;
      if ( !_4__this )
        goto LABEL_90;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, v2->fields.combo, &prefab, &seName, 0LL);
      v43 = (UnityEngine_Object_o *)prefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
        goto LABEL_7;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0LL);
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v2->fields.combo;
      if ( !this )
        goto LABEL_90;
      if ( !BattleComboData__AchieveAnyChain((BattleComboData_o *)this, 0LL) )
      {
        v83 = DefCoroutine_TypeInfo;
        if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v83 = DefCoroutine_TypeInfo;
        }
        milliSecNine = (int64_t)v83->static_fields->milliSecNine;
        v2->fields.__2__current = (Il2CppObject *)milliSecNine;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(p__2__current, milliSecNine, v44, v45, v46, v47, v48, v49);
        v16 = 6;
        goto LABEL_89;
      }
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v2->fields.combo;
      if ( !this )
        goto LABEL_90;
      if ( !LOBYTE(this->fields.__1__state) )
      {
        if ( !BYTE1(this->fields.__1__state) )
          goto LABEL_84;
        if ( BattleComboData__isExtraAttack((BattleComboData_o *)this, 0LL) )
        {
          v85 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v85 = DefCoroutine_TypeInfo;
          }
          milliSecThreeThreeThree = (int64_t)v85->static_fields->milliSecThreeThreeThree;
          v2->fields.__2__current = (Il2CppObject *)milliSecThreeThreeThree;
          p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C21DDC(p__2__current, milliSecThreeThreeThree, v44, v45, v46, v47, v48, v49);
          v16 = 3;
          goto LABEL_89;
        }
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v2->fields.combo;
        if ( this )
        {
LABEL_84:
          v88 = BYTE1(this->fields.__1__state);
          v89 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v89 = DefCoroutine_TypeInfo;
          }
          static_fields = v89->static_fields;
          if ( v88 )
          {
            milliSecTwoSixSix = (int64_t)static_fields->milliSecTwoSixSix;
            v2->fields.__2__current = (Il2CppObject *)milliSecTwoSixSix;
            p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
            sub_1C21DDC(p__2__current, milliSecTwoSixSix, v44, v45, v46, v47, v48, v49);
            v16 = 4;
          }
          else
          {
            milliSecThree = (int64_t)static_fields->milliSecThree;
            v2->fields.__2__current = (Il2CppObject *)milliSecThree;
            p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
            sub_1C21DDC(p__2__current, milliSecThree, v44, v45, v46, v47, v48, v49);
            v16 = 5;
          }
          goto LABEL_89;
        }
LABEL_90:
        sub_1C22094(this, method);
      }
      v50 = DefCoroutine_TypeInfo;
      cctor_finished = DefCoroutine_TypeInfo->_2.cctor_finished;
      if ( *(&this->fields.__1__state + 1) != 3 )
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v50 = DefCoroutine_TypeInfo;
        }
        v87 = (int64_t)v50->static_fields->milliSecTwoSixSix;
        v2->fields.__2__current = (Il2CppObject *)v87;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(p__2__current, v87, v44, v45, v46, v47, v48, v49);
        v16 = 2;
LABEL_89:
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v16;
        return 1;
      }
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v50 = DefCoroutine_TypeInfo;
      }
      v52 = (int64_t)v50->static_fields->milliSecThreeThreeThree;
      v2->fields.__2__current = (Il2CppObject *)v52;
      v53 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v53, v52, v44, v45, v46, v47, v48, v49);
      result = 1;
      *(_DWORD *)&v53[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_90;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
LABEL_7:
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.logic;
      if ( !this )
        goto LABEL_90;
      BattleLogic__procComboAct((BattleLogic_o *)this, 0LL);
      method = (const MethodInfo *)v2->fields.combo;
      if ( !method )
        goto LABEL_90;
      if ( LOBYTE(method->invoker_method) )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, (BattleComboData_o *)method, 0LL);
        combo = v2->fields.combo;
        if ( combo )
        {
          samecount = combo->fields.samecount;
          v12 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v12 = DefCoroutine_TypeInfo;
          }
          v13 = v12->static_fields;
          if ( samecount == 3 )
          {
            milliSecThreeSixSix = (int64_t)v13->milliSecThreeSixSix;
            v2->fields.__2__current = (Il2CppObject *)milliSecThreeSixSix;
            p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
            sub_1C21DDC(p__2__current, milliSecThreeSixSix, v4, v5, v6, v7, v8, v9);
            v16 = 7;
          }
          else
          {
            milliSecEightSixSix = (int64_t)v13->milliSecEightSixSix;
            v2->fields.__2__current = (Il2CppObject *)milliSecEightSixSix;
            p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
            sub_1C21DDC(p__2__current, milliSecEightSixSix, v4, v5, v6, v7, v8, v9);
            v16 = 8;
          }
          goto LABEL_89;
        }
      }
      else
      {
LABEL_19:
        if ( !BYTE1(method->invoker_method) )
        {
LABEL_54:
          if ( HIDWORD(method->invoker_method) != 3 )
            return 0;
          BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, (BattleComboData_o *)method, 0LL);
          v61 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v61 = DefCoroutine_TypeInfo;
          }
          milliSecTwo = (int64_t)v61->static_fields->milliSecTwo;
          v2->fields.__2__current = (Il2CppObject *)milliSecTwo;
          p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C21DDC(p__2__current, milliSecTwo, v55, v56, v57, v58, v59, v60);
          v16 = 10;
          goto LABEL_89;
        }
        selectedcomponents = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents;
        v19 = BattlePerformanceCommandCard___c_TypeInfo;
        if ( !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
          v19 = BattlePerformanceCommandCard___c_TypeInfo;
        }
        _9__134_0 = (System_Func_object__bool__o *)v19->static_fields->__9__134_0;
        if ( !_9__134_0 )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            v19 = BattlePerformanceCommandCard___c_TypeInfo;
          }
          v21 = (Il2CppObject *)v19->static_fields->__9;
          _9__134_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleCommandComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__134_0,
            v21,
            Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__,
            0LL);
          v22 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          v22->__9__134_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__134_0;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v22->__9__134_0, (int64_t)_9__134_0, v23, v24, v25, v26, v27, v28);
        }
        v29 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
                selectedcomponents,
                (System_Func_TSource__bool__o *)_9__134_0,
                (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___);
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)System_Array__IndexOf_object_(
                                                                                (System_Object_array *)_4__this->fields.selectedcomponents,
                                                                                v29,
                                                                                (const MethodInfo_30ACE64 *)Method_System_Array_IndexOf_BattleCommandComponent___);
        if ( (int)this >= 1 )
        {
          perf = _4__this->fields.perf;
          if ( !perf )
            goto LABEL_90;
          this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)perf->fields.data;
          if ( !this )
            goto LABEL_90;
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)this, 3, 0LL);
          BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, FirstBonusCriticalRate / 10, 1, 0LL);
        }
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v2->fields.combo;
        if ( this )
        {
          isExtraAttack = BattleComboData__isExtraAttack((BattleComboData_o *)this, 0LL);
          v39 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v39 = DefCoroutine_TypeInfo;
          }
          v40 = v39->static_fields;
          v41 = 12LL;
          if ( isExtraAttack )
            v41 = 6LL;
          v42 = (int64_t)(&v40->milliSecPointOne)[v41];
          v2->fields.__2__current = (Il2CppObject *)v42;
          p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C21DDC(p__2__current, v42, v32, v33, v34, v35, v36, v37);
          v16 = 9;
          goto LABEL_89;
        }
      }
      goto LABEL_90;
    case 7:
    case 8:
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
        if ( this )
        {
          BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
          method = (const MethodInfo *)v2->fields.combo;
          if ( method )
            goto LABEL_19;
        }
      }
      goto LABEL_90;
    case 9:
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
        if ( this )
        {
          BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
          method = (const MethodInfo *)v2->fields.combo;
          if ( method )
            goto LABEL_54;
        }
      }
      goto LABEL_90;
    case 0xA:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_90;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0LL);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, 0LL);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.3, 0LL);
      v69 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v69 = DefCoroutine_TypeInfo;
      }
      v70 = (int64_t)v69->static_fields->milliSecTwoSixSix;
      v2->fields.__2__current = (Il2CppObject *)v70;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, v70, v63, v64, v65, v66, v67, v68);
      v16 = 11;
      goto LABEL_89;
    case 0xB:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_90;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0LL);
      v77 = v2->fields.combo;
      if ( !v77 )
        goto LABEL_90;
      flash = v77->fields.flash;
      v79 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v79 = DefCoroutine_TypeInfo;
      }
      v80 = v79->static_fields;
      if ( flash )
      {
        milliSecFour = (int64_t)v80->milliSecFour;
        v2->fields.__2__current = (Il2CppObject *)milliSecFour;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(p__2__current, milliSecFour, v71, v72, v73, v74, v75, v76);
        v16 = 13;
      }
      else
      {
        v82 = (int64_t)v80->milliSecThreeThreeThree;
        v2->fields.__2__current = (Il2CppObject *)v82;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(p__2__current, v82, v71, v72, v73, v74, v75, v76);
        v16 = 12;
      }
      goto LABEL_89;
    case 0xC:
    case 0xD:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_90;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffectShort_d__134__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__showComboEffectShort_d__134__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceCommandCard__showComboEffectShort_d__134_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffectShort_d__134__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__showComboEffectShort_d__134__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__showComboEffect_d__133___ctor(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__showComboEffect_d__133__MoveNext(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattlePerformanceCommandCard__showComboEffect_d__133_o *v8; // x19
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  DefCoroutine_c *v10; // x0
  int64_t milliSecOne; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int v13; // w8
  UnityEngine_Object_o *chainBonusObject; // x21
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t CommandType; // w21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct BattleCommandComponent_array *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_IEnumerator_o *v27; // x0
  UnityEngine_Coroutine_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_IEnumerator_o *v35; // x0
  UnityEngine_Coroutine_o *started; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  bool result; // w0
  DefCoroutine_c *v44; // x0
  int64_t milliSecFour; // x1
  PartyOrganizationUtility_o *v46; // x19
  UnityEngine_Color_o v47; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v8 = this;
  if ( (byte_4BDE609 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    sub_1C21E38(&DefCoroutine_TypeInfo);
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE609 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      chainBonusObject = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)UnityEngine_Object__op_Inequality(
                                                                         chainBonusObject,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v15 = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612(v15, 0LL);
      }
      v16 = 4LL;
      break;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      v35 = BattlePerformanceCommandCard__showComboEffectNormal(_4__this, v8->fields.combo, 0LL);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v35, 0LL);
      v8->fields.__2__current = (Il2CppObject *)started;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)started, v37, v38, v39, v40, v41, v42);
      v13 = 2;
      goto LABEL_32;
    case 2:
    case 3:
      v8->fields.__1__state = -1;
      v10 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v10 = DefCoroutine_TypeInfo;
      }
      milliSecOne = (int64_t)v10->static_fields->milliSecOne;
      v8->fields.__2__current = (Il2CppObject *)milliSecOne;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, milliSecOne, v2, v3, v4, v5, v6, v7);
      v13 = 4;
      goto LABEL_32;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_41;
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_41;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)_4__this->fields.commandfsm;
      if ( !this )
        goto LABEL_41;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v8->fields.endproc, 0LL);
      return 0;
    default:
      return 0;
  }
  do
  {
    selectedcomponents = _4__this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_41;
    if ( v16 - 4 >= (unsigned __int64)selectedcomponents->max_length )
      goto LABEL_42;
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)*((_QWORD *)&selectedcomponents->obj.klass + v16);
    if ( !this )
      goto LABEL_41;
    CommandType = BattleCommandComponent__getCommandType((BattleCommandComponent_o *)this, 0LL);
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)BattleCommand__isBLANK(CommandType, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v25 = _4__this->fields.selectedcomponents;
      if ( !v25 )
        goto LABEL_41;
      if ( v16 - 4 >= (unsigned __int64)v25->max_length )
LABEL_42:
        sub_1C2209C(this, method);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)*((_QWORD *)&v25->obj.klass + v16);
      if ( !this )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v47.fields.r = 0.0;
      v47.fields.g = 0.0;
      v47.fields.b = 0.0;
      v47.fields.a = 0.0;
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)TweenColor__Begin(gameObject, 0.2, v47, 0LL);
    }
    ++v16;
  }
  while ( v16 != 7 );
  this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v8->fields.combo;
  if ( !this )
LABEL_41:
    sub_1C22094(this, method);
  if ( BYTE2(this->fields.__1__state) || !BattleComboData__AchieveAnyChain((BattleComboData_o *)this, 0LL) )
  {
    v44 = DefCoroutine_TypeInfo;
    if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v44 = DefCoroutine_TypeInfo;
    }
    milliSecFour = (int64_t)v44->static_fields->milliSecFour;
    v8->fields.__2__current = (Il2CppObject *)milliSecFour;
    v46 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(v46, milliSecFour, v19, v20, v21, v22, v23, v24);
    result = 1;
    *(_DWORD *)&v46[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  }
  else
  {
    v27 = BattlePerformanceCommandCard__showComboEffectShort(_4__this, v8->fields.combo, 0LL);
    v28 = UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v27, 0LL);
    v8->fields.__2__current = (Il2CppObject *)v28;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(p__2__current, (int64_t)v28, v29, v30, v31, v32, v33, v34);
    v13 = 3;
LABEL_32:
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v13;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffect_d__133__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__showComboEffect_d__133__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceCommandCard__showComboEffect_d__133_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffect_d__133__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__showComboEffect_d__133__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__waitFallStar_d__97___ctor(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__waitFallStar_d__97__MoveNext(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattlePerformanceCommandCard__waitFallStar_d__97_o *v8; // x19
  int32_t _1__state; // w8
  BattlePerformanceCommandCard_o *_4__this; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  il2cpp_array_size_t v12; // w21
  il2cpp_array_size_t max_length; // w9
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  DefCoroutine_c *v20; // x0
  int64_t milliSecFive; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  DefCoroutine_c *v24; // x0
  int64_t milliSecThree; // x1
  PartyOrganizationUtility_o *v26; // x19

  v8 = this;
  if ( (byte_4BDE60C & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)sub_1C21E38(&DefCoroutine_TypeInfo);
    byte_4BDE60C = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    BattlePerformanceCommandCard__StartCountupCommandStar(_4__this, 1, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    if ( BattlePerformanceCommandCard__fallStar(_4__this, 0LL) )
    {
      v20 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v20 = DefCoroutine_TypeInfo;
      }
      milliSecFive = (int64_t)v20->static_fields->milliSecFive;
      v8->fields.__2__current = (Il2CppObject *)milliSecFive;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, milliSecFive, v14, v15, v16, v17, v18, v19);
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return 1;
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this || (commandCompArray = _4__this->fields.commandCompArray) == 0LL )
LABEL_13:
    sub_1C22094(this, method);
  v12 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v12 >= (int)max_length )
      break;
    if ( v12 >= max_length )
      sub_1C2209C(this, method);
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)commandCompArray->m_Items[v12];
    if ( this )
    {
      BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)this, 0, 0LL);
      commandCompArray = _4__this->fields.commandCompArray;
      ++v12;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
  v24 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v24 = DefCoroutine_TypeInfo;
  }
  milliSecThree = (int64_t)v24->static_fields->milliSecThree;
  v8->fields.__2__current = (Il2CppObject *)milliSecThree;
  v26 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C21DDC(v26, milliSecThree, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&v26[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__waitFallStar_d__97__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__waitFallStar_d__97__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceCommandCard__waitFallStar_d__97_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__waitFallStar_d__97__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__waitFallStar_d__97__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__waitFunc_d__169___ctor(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__waitFunc_d__169__MoveNext(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  float v11; // s0
  float timer_5__2; // s8
  struct System_Action_o *callback; // x8
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = this->fields._timer_5__2;
    this->fields.__1__state = -1;
    v11 = timer_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields._timer_5__2 = v11;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    this->fields._timer_5__2 = 0.0;
    if ( !_4__this )
LABEL_14:
      sub_1C22094(this, method);
    BattlePerformanceCommandCard__setAtkButtonFlg(_4__this, 0, 0LL);
    v11 = this->fields._timer_5__2;
  }
  if ( v11 >= this->fields.waittime )
  {
LABEL_10:
    callback = this->fields.callback;
    if ( callback )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    }
    goto LABEL_14;
  }
  if ( !_4__this )
    goto LABEL_14;
  if ( _4__this->fields.isPressAtkBtn )
  {
    BattlePerformanceCommandCard__setAtkButtonFlg(_4__this, 0, 0LL);
    goto LABEL_10;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v5, v6, v7, v8, v9, v10);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__waitFunc_d__169__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__waitFunc_d__169__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceCommandCard__waitFunc_d__169_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__waitFunc_d__169__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__waitFunc_d__169__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__waitFunc_d__169_o *this,
        const MethodInfo *method)
{
  ;
}