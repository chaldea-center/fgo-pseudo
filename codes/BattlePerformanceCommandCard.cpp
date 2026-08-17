void BattlePerformanceCommandCard___cctor(const MethodInfo *method)
{
  if ( (byte_5972A2E & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceCommandCard_TypeInfo);
    byte_5972A2E = 1;
  }
  BattlePerformanceCommandCard_TypeInfo->static_fields->cardsize_w = 200;
}


void BattlePerformanceCommandCard___ctor(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct System_Single_array *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_GameObject__c *v12; // x0
  System_Collections_Generic_List_object__o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  unsigned int v28; // w8
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  unsigned int v41; // w8
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int v48; // w8
  Il2CppClass *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  unsigned int v56; // w8
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  int v63; // w8
  struct BattleLogic_TutorialStringData_array *v64; // x20
  BattleLogic_TutorialStringData_o *v65; // x0
  BattleLogic_TutorialStringData_o *v66; // x21
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  BattleLogic_TutorialStringData_o *v74; // x0
  BattleLogic_TutorialStringData_o *v75; // x21
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  BattleLogic_TutorialStringData_o *v82; // x0
  BattleLogic_TutorialStringData_o *v83; // x21
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  BattleLogic_TutorialStringData_o *v90; // x0
  BattleLogic_TutorialStringData_o *v91; // x21
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  BattleLogic_TutorialStringData_o *v98; // x0
  BattleLogic_TutorialStringData_o *v99; // x21
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  BattleLogic_TutorialStringData_o *v106; // x0
  BattleLogic_TutorialStringData_o *v107; // x21
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  BattleLogic_TutorialStringData_o *v114; // x0
  BattleLogic_TutorialStringData_o *v115; // x21
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  __int64 v128; // x0
  UnityEngine_Vector2_o v129; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v130; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v131; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v132; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v133; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v134; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v135; // 0:s1.4,4:s2.4

  if ( (byte_5972A2D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Rect___TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&BattleLogic_TutorialStringData___TypeInfo);
    sub_2213A60(&BattleLogic_TutorialStringData_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    byte_5972A2D = 1;
  }
  v3 = (System_Array_o *)sub_2213B20(float___TypeInfo, 5);
  v4.fields.value = Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096;
  v5 = (struct System_Single_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v3, v4, 0);
  this->fields.COMMAND_STAMP_POS_X = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.COMMAND_STAMP_POS_X,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = System_Collections_Generic_List_GameObject__TypeInfo;
  *(_OWORD *)&this->fields.npGaugeEffectMoveDelayTime = xmmword_E9D520;
  *(_QWORD *)&this->fields.CARD_ROOT_BASE_X = 0xC353000043CD0000LL;
  this->fields.COMMAND_STAMP_POS_Y = -121.0;
  this->fields.firstBonusAnimationMaxTime = 3;
  this->fields.npGaugeEaseType = 15;
  this->fields.miniScale.fields.z = 1.0;
  *(int32x2_t *)&this->fields.miniScale.fields.x = vdup_n_s32(0x3E99999Au);
  v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.aubelist = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.aubelist, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v20 )
    goto LABEL_47;
  v28 = *(_DWORD *)(v20 + 24);
  if ( !v28 )
    goto LABEL_46;
  *(_QWORD *)(v20 + 32) = 0;
  if ( v28 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v20 + 40) = 3276275712LL;
  if ( v28 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v20 + 48) = 3284664320LL;
  this->fields.TutorialArrow01 = (struct UnityEngine_Vector2_array *)v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.TutorialArrow01, v20, v22, v23, v24, v25, v26, v27);
  v20 = sub_2213B20(UnityEngine_Rect___TypeInfo, 1);
  if ( !v20 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_46;
  *(_OWORD *)(v20 + 32) = xmmword_E9D950;
  this->fields.TutorialSquare01 = (struct UnityEngine_Rect_array *)v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.TutorialSquare01, v20, v29, v30, v31, v32, v33, v34);
  v20 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v20 )
    goto LABEL_47;
  v41 = *(_DWORD *)(v20 + 24);
  if ( !v41 )
    goto LABEL_46;
  *(_QWORD *)(v20 + 32) = 0x43160000C3270000LL;
  if ( v41 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v20 + 40) = 0xC2A00000C3480000LL;
  if ( v41 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v20 + 48) = 0xC2A00000C3C80000LL;
  this->fields.TutorialArrow05 = (struct UnityEngine_Vector2_array *)v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.TutorialArrow05, v20, v35, v36, v37, v38, v39, v40);
  v20 = sub_2213B20(UnityEngine_Rect___TypeInfo, 2);
  if ( !v20 )
    goto LABEL_47;
  v48 = *(_DWORD *)(v20 + 24);
  if ( !v48 )
    goto LABEL_46;
  *(_OWORD *)(v20 + 32) = xmmword_E9CF40;
  if ( v48 == 1 )
    goto LABEL_46;
  *(_OWORD *)(v20 + 48) = xmmword_E9C520;
  this->fields.TutorialSquare05 = (struct UnityEngine_Rect_array *)v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.TutorialSquare05, v20, v42, v43, v44, v45, v46, v47);
  v49 = UnityEngine_Vector2___TypeInfo;
  this->fields.TutorialArrow22 = (struct UnityEngine_Vector2_o)0x4348000043C58000LL;
  this->fields.TutorialSquare22 = (struct UnityEngine_Rect_o)xmmword_E9D040;
  v20 = sub_2213B20(v49, 3);
  if ( !v20 )
    goto LABEL_47;
  v56 = *(_DWORD *)(v20 + 24);
  if ( !v56 )
    goto LABEL_46;
  *(_QWORD *)(v20 + 32) = 0xC248000000000000LL;
  if ( v56 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v20 + 40) = 0xC2480000C3480000LL;
  if ( v56 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v20 + 48) = 0xC2480000C3C80000LL;
  this->fields.TutorialArrow31 = (struct UnityEngine_Vector2_array *)v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.TutorialArrow31, v20, v50, v51, v52, v53, v54, v55);
  v20 = sub_2213B20(UnityEngine_Rect___TypeInfo, 2);
  if ( !v20 )
    goto LABEL_47;
  v63 = *(_DWORD *)(v20 + 24);
  if ( !v63 )
    goto LABEL_46;
  *(_OWORD *)(v20 + 32) = xmmword_E9D950;
  if ( v63 == 1 )
    goto LABEL_46;
  *(_OWORD *)(v20 + 48) = xmmword_E9CF50;
  this->fields.TutorialSquare32 = (struct UnityEngine_Rect_array *)v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.TutorialSquare32, v20, v57, v58, v59, v60, v61, v62);
  v64 = (struct BattleLogic_TutorialStringData_array *)sub_2213B20(BattleLogic_TutorialStringData___TypeInfo, 7);
  v65 = (BattleLogic_TutorialStringData_o *)sub_2213CCC(BattleLogic_TutorialStringData_TypeInfo);
  v129.fields.x = 0.0;
  v129.fields.y = 160.0;
  v66 = v65;
  BattleLogic_TutorialStringData___ctor(v65, 0.0, v129, 26, 0);
  if ( !v64 )
LABEL_47:
    sub_2213CDC(v20, v21);
  if ( v66 )
  {
    v20 = sub_2213BB4(v66, v64->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_48;
  }
  if ( !LODWORD(v64->max_length) )
    goto LABEL_46;
  v64->m_Items[0] = v66;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v64->m_Items, (int32_t)v66, v67, v68, v69, v70, v71, v72);
  v74 = (BattleLogic_TutorialStringData_o *)sub_2213CCC(BattleLogic_TutorialStringData_TypeInfo);
  v130.fields.x = 0.0;
  v130.fields.y = 160.0;
  v75 = v74;
  BattleLogic_TutorialStringData___ctor(v74, 0.0, v130, 26, 0);
  if ( v75 )
  {
    v20 = sub_2213BB4(v75, v64->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_48;
  }
  if ( (v64->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_46;
  v64->m_Items[1] = v75;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->m_Items[1], (int32_t)v75, v76, v77, v78, v79, v80, v81);
  v82 = (BattleLogic_TutorialStringData_o *)sub_2213CCC(BattleLogic_TutorialStringData_TypeInfo);
  v131.fields.x = 0.0;
  v131.fields.y = 160.0;
  v83 = v82;
  BattleLogic_TutorialStringData___ctor(v82, 0.0, v131, 26, 0);
  if ( v83 )
  {
    v20 = sub_2213BB4(v83, v64->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_48;
  }
  if ( LODWORD(v64->max_length) <= 2 )
    goto LABEL_46;
  v64->m_Items[2] = v83;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->m_Items[2], (int32_t)v83, v84, v85, v86, v87, v88, v89);
  v90 = (BattleLogic_TutorialStringData_o *)sub_2213CCC(BattleLogic_TutorialStringData_TypeInfo);
  v132.fields.x = 200.0;
  v132.fields.y = 60.0;
  v91 = v90;
  BattleLogic_TutorialStringData___ctor(v90, 0.0, v132, 28, 0);
  if ( v91 )
  {
    v20 = sub_2213BB4(v91, v64->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_48;
  }
  if ( (v64->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_46;
  v64->m_Items[3] = v91;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->m_Items[3], (int32_t)v91, v92, v93, v94, v95, v96, v97);
  v98 = (BattleLogic_TutorialStringData_o *)sub_2213CCC(BattleLogic_TutorialStringData_TypeInfo);
  v133.fields.y = -30.0;
  v133.fields.x = 310.0;
  v99 = v98;
  BattleLogic_TutorialStringData___ctor(v98, 180.0, v133, 26, 0);
  if ( v99 )
  {
    v20 = sub_2213BB4(v99, v64->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_48;
  }
  if ( LODWORD(v64->max_length) <= 4 )
    goto LABEL_46;
  v64->m_Items[4] = v99;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->m_Items[4], (int32_t)v99, v100, v101, v102, v103, v104, v105);
  v106 = (BattleLogic_TutorialStringData_o *)sub_2213CCC(BattleLogic_TutorialStringData_TypeInfo);
  v134.fields.x = 0.0;
  v134.fields.y = 140.0;
  v107 = v106;
  BattleLogic_TutorialStringData___ctor(v106, 0.0, v134, 22, 0);
  if ( v107 )
  {
    v20 = sub_2213BB4(v107, v64->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_48;
  }
  if ( LODWORD(v64->max_length) <= 5 )
    goto LABEL_46;
  v64->m_Items[5] = v107;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->m_Items[5], (int32_t)v107, v108, v109, v110, v111, v112, v113);
  v114 = (BattleLogic_TutorialStringData_o *)sub_2213CCC(BattleLogic_TutorialStringData_TypeInfo);
  v135.fields.x = 0.0;
  v135.fields.y = 130.0;
  v115 = v114;
  BattleLogic_TutorialStringData___ctor(v114, 0.0, v135, 26, 0);
  if ( v115 )
  {
    v20 = sub_2213BB4(v115, v64->obj.klass->_1.element_class);
    if ( !v20 )
    {
LABEL_48:
      v128 = sub_2213D00(v20, v73);
      sub_2213BA0(v128, 0);
    }
  }
  if ( LODWORD(v64->max_length) <= 6 )
LABEL_46:
    sub_2213CE4(v20);
  v64->m_Items[6] = v115;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->m_Items[6], (int32_t)v115, v116, v117, v118, v119, v120, v121);
  this->fields.TSD = v64;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.TSD, (int32_t)v64, v122, v123, v124, v125, v126, v127);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattlePerformanceCommandCard__ActivateFirstBonusObject(
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
  __int64 v10; // x1
  float x; // s8
  float y; // s10
  float z; // s9
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *v16; // x20
  System_Collections_IEnumerator_o *BonusAnimationPlay; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59729EA & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729EA = 1;
  }
  firstBonusSimpleAnimation = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(firstBonusSimpleAnimation, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v5 )
      goto LABEL_36;
    goto LABEL_12;
  }
  firstBonusAnimation = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(firstBonusAnimation, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v5 )
      goto LABEL_36;
LABEL_12:
    UnityEngine_Behaviour__set_enabled(v5, 0, 0);
  }
  firstBonusObject = this->fields.firstBonusObject;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetParent(firstBonusObject, transform, 0);
  v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v5 )
    goto LABEL_36;
  v5 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0);
  v9 = (UnityEngine_Transform_o *)v5;
  if ( !byte_5969AE5 )
  {
    v5 = (UnityEngine_Behaviour_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v9 )
    goto LABEL_36;
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v10);
  if ( !FSUtility__IsUnderVista(0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
    if ( v5 )
    {
      v5 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0);
      if ( v5 )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v5, 0);
        v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
        if ( v5 )
        {
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          z = localPosition.fields.z;
          v5 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0);
          if ( v5 )
          {
            v19.fields.z = z;
            v19.fields.y = y + 17.0;
            v19.fields.x = x;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v5, v19, 0);
            goto LABEL_25;
          }
        }
      }
    }
LABEL_36:
    sub_2213CDC(v5, v4);
  }
LABEL_25:
  v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v5 )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0);
  v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v5 )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 1, 0);
  v15 = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v5 )
      goto LABEL_36;
LABEL_31:
    UnityEngine_Behaviour__set_enabled(v5, 1, 0);
    goto LABEL_37;
  }
  v16 = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v5 )
      goto LABEL_36;
    goto LABEL_31;
  }
LABEL_37:
  BonusAnimationPlay = BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, BonusAnimationPlay, 0);
}


void BattlePerformanceCommandCard__AddExtraCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
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
  struct BattleCommandComponent_array *v12; // x8
  struct BattleCommandComponent_array *v13; // x8
  struct BattleCommandComponent_array *v14; // x8
  struct BattleCommandComponent_array *v15; // x8
  struct BattleCommandComponent_array *v16; // x8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_59729FA & 1) == 0 )
  {
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceCommandCard_AddExtraCard__);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&StringLiteral_19697/*"ef_excard02"*/);
    byte_59729FA = 1;
  }
  selectedcomponents = v2->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_44;
  if ( !LODWORD(selectedcomponents->max_length) )
    goto LABEL_45;
  v4 = selectedcomponents->m_Items[0];
  if ( !v4 )
    goto LABEL_44;
  data = v4->fields.data;
  v6 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_53637512(v6, data, 0);
  if ( !v6 )
    goto LABEL_44;
  BattleCommandData__ResetNotRelatedParamsOnExtraAttack(v6, 0);
  BattleCommandData__setTypeAddAttack(v6, 0);
  this = (BattlePerformanceCommandCard_o *)v2->fields.Bdata;
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData((BattleData_o *)this, v6->fields.uniqueId, 0);
  v7 = v2->fields.selectedcomponents;
  if ( !v7 )
    goto LABEL_44;
  if ( (v7->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_45;
  v8 = this;
  this = (BattlePerformanceCommandCard_o *)v7->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v9 = this;
  if ( !byte_5969AE5 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v9 )
    goto LABEL_44;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  v10 = v2->fields.selectedcomponents;
  if ( !v10 )
    goto LABEL_44;
  if ( (v10->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v10->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !v2->fields.extraPos )
    goto LABEL_44;
  v11 = this;
  position = UnityEngine_Transform__get_position(v2->fields.extraPos, 0);
  if ( !v11 )
    goto LABEL_44;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v11, position, 0);
  v12 = v2->fields.selectedcomponents;
  if ( !v12 )
    goto LABEL_44;
  if ( (v12->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v12->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v13 = v2->fields.selectedcomponents;
  if ( !v13 )
    goto LABEL_44;
  if ( (v13->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v13->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__setData((BattleCommandComponent_o *)this, v6, (BattleServantData_o *)v8, 0, 1, 0, 1, 0);
  v14 = v2->fields.selectedcomponents;
  if ( !v14 )
    goto LABEL_44;
  if ( (v14->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v14->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_44;
  v20.fields.r = 1.0;
  v20.fields.g = 1.0;
  v20.fields.b = 1.0;
  v20.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v20, 0);
  v15 = v2->fields.selectedcomponents;
  if ( !v15 )
    goto LABEL_44;
  if ( (v15->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v15->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_19697/*"ef_excard02"*/, 4, 0);
  this = (BattlePerformanceCommandCard_o *)v2->fields.Bdata;
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(
                                             (BattleData_o *)this,
                                             (int32_t)this->fields.highSpeedArrowOff,
                                             0);
  if ( !this )
    goto LABEL_41;
  v16 = v2->fields.selectedcomponents;
  if ( !v16 )
LABEL_44:
    sub_2213CDC(this, method);
  if ( (v16->max_length & 0xFFFFFFFC) == 0 )
LABEL_45:
    sub_2213CE4(this);
  method = (const MethodInfo *)this;
  this = (BattlePerformanceCommandCard_o *)v16->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)this, (BattleServantData_o *)method, 0);
LABEL_41:
  v17 = Method_BattlePerformanceCommandCard_AddExtraCard__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_AddExtraCard__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_AddExtraCard__);
  v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, v17[4]);
  OverwriteAssetSoundName__PlayCommonSe(v18, 13, 0, 0);
}


void BattlePerformanceCommandCard__ClosePlayerAttackPreselectTargetWindow(
        BattlePerformanceCommandCard_o *this,
        BattleWindowComponent_EndCall_o *closeCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *playerAttackPreselectTargetWindow; // x21
  __int64 v6; // x1
  struct BattlePlayerAttackPreselectTargetWindow_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59729DD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729DD = 1;
  }
  playerAttackPreselectTargetWindow = (UnityEngine_Object_o *)this->fields.playerAttackPreselectTargetWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, closeCallback);
  if ( UnityEngine_Object__op_Equality(playerAttackPreselectTargetWindow, 0, 0) )
  {
    if ( closeCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))closeCallback->fields.invoke_impl)(
        closeCallback->fields.method_code,
        closeCallback->fields.method);
  }
  else
  {
    v7 = this->fields.playerAttackPreselectTargetWindow;
    if ( !v7 )
      sub_2213CDC(0, v6);
    ((void (__fastcall *)(struct BattlePlayerAttackPreselectTargetWindow_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v7->klass->vtable._12_Close.methodPtr)(
      v7,
      closeCallback,
      v7->klass->vtable._12_Close.method);
    this->fields.playerAttackPreselectTargetWindow = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.playerAttackPreselectTargetWindow,
      0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59729EB & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_TypeInfo);
    byte_59729EB = 1;
  }
  v3 = sub_2213CCC(BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_TypeInfo);
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127___ctor(
    (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceCommandCard__DistributeCriticalPoint(
        BattlePerformanceCommandCard_o *this,
        int32_t criticalPercentageToAdd,
        bool applyOnlyToSelectedCards,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  BattlePerformanceCommandCard___c_c *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *commandCompArray; // x22
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__125_0; // x21
  Il2CppObject *v21; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  System_Func_object__bool__o *v30; // x19
  System_Action_object__o *v31; // x19

  if ( (byte_59729E9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleCommandComponent__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleCommandComponent___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
    sub_2213A60(&System_Func_BattleCommandComponent__bool__TypeInfo);
    sub_2213A60(&Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__125_0__);
    sub_2213A60(&Method_BattlePerformanceCommandCard___c__DisplayClass125_0__DistributeCriticalPoint_b__1__);
    sub_2213A60(&Method_BattlePerformanceCommandCard___c__DisplayClass125_0__DistributeCriticalPoint_b__2__);
    sub_2213A60(&BattlePerformanceCommandCard___c__DisplayClass125_0_TypeInfo);
    sub_2213A60(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_59729E9 = 1;
  }
  v7 = sub_2213CCC(BattlePerformanceCommandCard___c__DisplayClass125_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass125_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass125_0_o *)v7,
    0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v17 = BattlePerformanceCommandCard___c_TypeInfo;
  commandCompArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.commandCompArray;
  *(_DWORD *)(v7 + 24) = criticalPercentageToAdd;
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v16);
    v17 = BattlePerformanceCommandCard___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__125_0 = (System_Func_object__bool__o *)static_fields->__9__125_0;
  if ( !_9__125_0 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__125_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleCommandComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__125_0,
      v21,
      Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__125_0__,
      0);
    v22 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    v22->__9__125_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__125_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__125_0, (int32_t)_9__125_0, v23, v24, v25, v26, v27, v28);
  }
  v29 = System_Linq_Enumerable__Where_object_(
          commandCompArray,
          (System_Func_TSource__bool__o *)_9__125_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  if ( applyOnlyToSelectedCards )
  {
    v30 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleCommandComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v30,
      (Il2CppObject *)v7,
      Method_BattlePerformanceCommandCard___c__DisplayClass125_0__DistributeCriticalPoint_b__1__,
      0);
    v29 = System_Linq_Enumerable__Where_object_(
            v29,
            (System_Func_TSource__bool__o *)v30,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  }
  v31 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleCommandComponent__TypeInfo);
  System_Action_object____ctor(
    v31,
    (Il2CppObject *)v7,
    Method_BattlePerformanceCommandCard___c__DisplayClass125_0__DistributeCriticalPoint_b__2__,
    0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v29,
    (System_Action_T__o *)v31,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleCommandComponent___);
}


float BattlePerformanceCommandCard__FSCardRootOffsetY(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  bool IsUnderVista; // w0
  float result; // s0

  if ( (byte_5972A1A & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    byte_5972A1A = 1;
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  IsUnderVista = FSUtility__IsUnderVista(0);
  result = 0.0;
  if ( !IsUnderVista )
    return 17.0;
  return result;
}


UnityEngine_Vector2_array *BattlePerformanceCommandCard__FSTutorialArrowCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Vector2_array *arrow,
        const MethodInfo *method)
{
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattlePerformanceCommandCard_o *v5; // x20
  unsigned __int64 v6; // x21
  float *v7; // x22
  float *p_y; // x23
  float v9; // s8
  float v10; // s0

  if ( (byte_5972A1B & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    byte_5972A1B = 1;
  }
  if ( !arrow
    || (this = (BattlePerformanceCommandCard_o *)sub_2213B20(UnityEngine_Vector2___TypeInfo, LODWORD(arrow->max_length))) == 0 )
  {
    sub_2213CDC(this, arrow);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v5 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0;
    v7 = (float *)&this->fields.COMMAND_STAMP_POS_X + 1;
    p_y = &arrow->m_Items[0].fields.y;
    do
    {
      if ( v6 >= LODWORD(arrow->max_length)
        || v6 >= (unsigned int)m_CancellationTokenSource
        || (v9 = *p_y, *(v7 - 1) = *(p_y - 1), *v7 = v9, v6 >= LODWORD(v5->fields.m_CancellationTokenSource)) )
      {
        sub_2213CE4(this);
      }
      v10 = BattlePerformanceCommandCard__FSCardRootOffsetY(this, (const MethodInfo *)arrow);
      LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
      ++v6;
      p_y += 2;
      *v7 = v9 + v10;
      v7 += 2;
    }
    while ( (__int64)v6 < (int)m_CancellationTokenSource );
  }
  return (UnityEngine_Vector2_array *)v5;
}


UnityEngine_Rect_array *BattlePerformanceCommandCard__FSTutorialSquareCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Rect_array *square,
        const MethodInfo *method)
{
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattlePerformanceCommandCard_o *v5; // x20
  unsigned __int64 v6; // x21
  float *v7; // x22
  UnityEngine_Rect_o v8; // q0
  float v9; // s0
  float m_YMin; // [xsp+4h] [xbp-3Ch]

  if ( (byte_5972A1C & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Rect___TypeInfo);
    byte_5972A1C = 1;
  }
  if ( !square
    || (this = (BattlePerformanceCommandCard_o *)sub_2213B20(UnityEngine_Rect___TypeInfo, LODWORD(square->max_length))) == 0 )
  {
    sub_2213CDC(this, square);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v5 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0;
    v7 = (float *)&this->fields.COMMAND_STAMP_POS_X + 1;
    do
    {
      if ( v6 >= LODWORD(square->max_length)
        || v6 >= (unsigned int)m_CancellationTokenSource
        || (v8 = square->m_Items[v6],
            *(UnityEngine_Rect_o *)(v7 - 1) = v8,
            m_YMin = v8.fields.m_YMin,
            v6 >= LODWORD(v5->fields.m_CancellationTokenSource)) )
      {
        sub_2213CE4(this);
      }
      v9 = BattlePerformanceCommandCard__FSCardRootOffsetY(this, (const MethodInfo *)square);
      LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
      ++v6;
      *v7 = m_YMin + v9;
      v7 += 4;
    }
    while ( (__int64)v6 < (int)m_CancellationTokenSource );
  }
  return (UnityEngine_Rect_array *)v5;
}


BattleCommandData_array *BattlePerformanceCommandCard__GetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *baseCommandList; // x0
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *data; // x8
  System_Collections_Generic_IEnumerable_T__o *draw_commandlist; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59729DF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandData___ctor___91639608);
    sub_2213A60(&System_Collections_Generic_List_BattleCommandData__TypeInfo);
    byte_59729DF = 1;
  }
  baseCommandList = (System_Collections_Generic_List_object__o *)this->fields.baseCommandList;
  if ( !baseCommandList )
  {
    logic = this->fields.logic;
    if ( !logic
      || (data = logic->fields.data) == 0
      || (draw_commandlist = (System_Collections_Generic_IEnumerable_T__o *)data->fields.draw_commandlist,
          v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleCommandData__TypeInfo),
          System_Collections_Generic_List_object____ctor_71841080(
            v7,
            draw_commandlist,
            (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_BattleCommandData___ctor___91639608),
          this->fields.baseCommandList = (struct System_Collections_Generic_List_BattleCommandData__o *)v7,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.baseCommandList,
            (int32_t)v7,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13),
          (baseCommandList = (System_Collections_Generic_List_object__o *)this->fields.baseCommandList) == 0) )
    {
      sub_2213CDC(baseCommandList, method);
    }
  }
  return (BattleCommandData_array *)System_Collections_Generic_List_object___ToArray(
                                      baseCommandList,
                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
}


System_String_o *BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
        BattlePerformanceCommandCard_o *this,
        int32_t status,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_5972A0D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_2821/*"BATTLE_COMMANDDIALOG_DONTACT"*/);
    sub_2213A60(&StringLiteral_2822/*"BATTLE_COMMANDDIALOG_DONTACTTYPE"*/);
    sub_2213A60(&StringLiteral_2824/*"BATTLE_COMMANDDIALOG_DONTTD_COND"*/);
    sub_2213A60(&StringLiteral_2827/*"BATTLE_COMMANDDIALOG_NOFUNC"*/);
    sub_2213A60(&StringLiteral_2825/*"BATTLE_COMMANDDIALOG_DONTTD_SHORTAGE_CRITICAL_STAR"*/);
    sub_2213A60(&StringLiteral_2826/*"BATTLE_COMMANDDIALOG_DONTUSE"*/);
    sub_2213A60(&StringLiteral_2823/*"BATTLE_COMMANDDIALOG_DONTTD"*/);
    byte_5972A0D = 1;
  }
  if ( (unsigned int)(status - 4) > 6 )
    v4 = (System_String_o **)&StringLiteral_2821/*"BATTLE_COMMANDDIALOG_DONTACT"*/;
  else
    v4 = (System_String_o **)*(&off_52CA8B8 + (unsigned int)(status - 4));
  return *v4;
}


int32_t BattlePerformanceCommandCard__GetServantNumber(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *servantStatusObjArray; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleServantParamComponent_o *v6; // x12

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
      if ( max_length == v5 )
        sub_2213CE4(this);
      v6 = servantStatusObjArray->m_Items[v5];
      if ( !v6 || !commandData )
        break;
      if ( v6->fields.uniqueID == commandData->fields.uniqueId )
        this = (BattlePerformanceCommandCard_o *)v5;
      else
        this = (BattlePerformanceCommandCard_o *)(unsigned int)this;
      if ( (max_length & ~(max_length >> 31)) == ++v5 )
        return (int)this;
    }
LABEL_13:
    sub_2213CDC(this, commandData);
  }
  LODWORD(this) = -1;
  return (int)this;
}


BattleServantParamComponent_o *BattlePerformanceCommandCard__GetStatusUiObj(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleServantParamComponent_array *servantStatusObjArray; // x8
  int max_length; // w9
  int v7; // w10
  UnityEngine_Object_o *v8; // x20
  BattleServantParamComponent_o *v9; // x12
  struct BattleServantData_o *data; // x13

  v4 = this;
  if ( (byte_5972A0A & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972A0A = 1;
  }
  servantStatusObjArray = v4->fields.servantStatusObjArray;
  if ( !servantStatusObjArray )
    goto LABEL_18;
  max_length = servantStatusObjArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( max_length == v7 )
        sub_2213CE4(this);
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
      if ( (max_length & ~(max_length >> 31)) == ++v7 )
        goto LABEL_15;
    }
LABEL_18:
    sub_2213CDC(this, commandData);
  }
  v8 = 0;
LABEL_15:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, commandData);
  UnityEngine_Object__op_Equality(v8, 0, 0);
  return (BattleServantParamComponent_o *)v8;
}


void BattlePerformanceCommandCard__InitResult(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_array *npcardTr; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  npcardTr = this->fields.npcardTr;
  if ( !npcardTr )
LABEL_8:
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = npcardTr->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard_o *)npcardTr->m_Items[v4];
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        npcardTr = v3->fields.npcardTr;
        ++v4;
        if ( npcardTr )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void BattlePerformanceCommandCard__Initialize(
        BattlePerformanceCommandCard_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *data,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  BattleWindowComponent_o *sealedWindow; // x0
  BattleWindowOuterClickManagerComponent_o *v26; // x20
  BattleWindowOuterClickComponent_OuterClickCall_o *v27; // x21
  BattleWindowOuterClickManagerComponent_o *tdConfWindow; // x20
  BattleWindowOuterClickComponent_OuterClickCall_o *v29; // x21
  HutongGames_PlayMaker_FsmGameObject_o *v30; // x20
  Il2CppObject *Instance; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_59729D2 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__);
    sub_2213A60(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__);
    sub_2213A60(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    sub_2213A60(&StringLiteral_11044/*"Performance"*/);
    byte_59729D2 = 1;
  }
  this->fields.perf = inperf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (System_String_o *)data,
    (System_String_o *)inlogic,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.Bdata = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.Bdata, (int32_t)data, v12, v13, v14, v15, v16, v17);
  this->fields.logic = inlogic;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.logic, (int32_t)inlogic, v18, v19, v20, v21, v22, v23);
  sealedWindow = (BattleWindowComponent_o *)this->fields.sealedWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))sealedWindow->klass->vtable._9_setClose.methodPtr)(
    sealedWindow,
    sealedWindow->klass->vtable._9_setClose.method);
  v26 = (BattleWindowOuterClickManagerComponent_o *)this->fields.sealedWindow;
  v27 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_2213CCC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceCommandCard_OnCloseSealedWindow__,
    0);
  if ( !v26 )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v26, v27, 0);
  sealedWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  BattleWindowComponent__setInitData(sealedWindow, 2, 0.15, 0, 0);
  sealedWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))sealedWindow->klass->vtable._9_setClose.methodPtr)(
    sealedWindow,
    sealedWindow->klass->vtable._9_setClose.method);
  tdConfWindow = (BattleWindowOuterClickManagerComponent_o *)this->fields.tdConfWindow;
  v29 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_2213CCC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v29,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__,
    0);
  if ( !tdConfWindow )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(tdConfWindow, v29, 0);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  BattleWindowComponent__setInitData(sealedWindow, 2, 0.15, 0, 0);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, const MethodInfo *))sealedWindow->klass->vtable._9_setClose.methodPtr)(
    sealedWindow,
    sealedWindow->klass->vtable._9_setClose.method);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandfsm;
  if ( !sealedWindow )
    goto LABEL_16;
  sealedWindow = (BattleWindowComponent_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)sealedWindow, 0);
  if ( !sealedWindow )
    goto LABEL_16;
  sealedWindow = (BattleWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)sealedWindow,
                                              (System_String_o *)StringLiteral_11044/*"Performance"*/,
                                              0);
  if ( !this->fields.perf
    || (v30 = (HutongGames_PlayMaker_FsmGameObject_o *)sealedWindow,
        sealedWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this->fields.perf,
                                                    0),
        !v30)
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(v30, (UnityEngine_GameObject_o *)sealedWindow, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__),
        this->fields.spawner = (struct Spawner_o *)Instance,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.spawner,
          (int32_t)Instance,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37),
        (sealedWindow = (BattleWindowComponent_o *)this->fields.spawner) == 0) )
  {
LABEL_16:
    sub_2213CDC(sealedWindow, v24);
  }
  Spawner__Precache_47685880((Spawner_o *)sealedWindow, (UnityEngine_Object_o *)this->fields.selectCommandPrefab, 3, 0);
  this->fields.firstBonusAnimationWaitTime = 0;
  *(_WORD *)&this->fields.isTouchBegan = 0;
  this->fields.isTouchCanceled = 0;
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__LongPress(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  BattleData_o *Bdata; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v7; // x26
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v9; // x21
  __int64 *v10; // x8

  if ( (byte_59729E4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_8680/*"LONG_PRESS_COMMAND_ASSIST"*/);
    sub_2213A60(&StringLiteral_8679/*"LONG_PRESS"*/);
    sub_2213A60(&StringLiteral_22523/*"markindex"*/);
    byte_59729E4 = 1;
  }
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_28;
  Bdata = (BattleData_o *)BattleData__isTutorial(Bdata, 0);
  if ( ((unsigned __int8)Bdata & 1) == 0 )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v7 = 0;
      do
      {
        max_length_low = LODWORD(commandCompArray->max_length);
        if ( (__int64)v7 >= (int)max_length_low )
          return;
        if ( v7 >= max_length_low )
          sub_2213CE4(Bdata);
        v9 = (UnityEngine_Object_o *)commandCompArray->m_Items[v7];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&markindex);
        Bdata = (BattleData_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
        if ( ((unsigned __int8)Bdata & 1) == 0 )
        {
          if ( !v9 )
            break;
          Bdata = (BattleData_o *)BattleCommandComponent__checkMark((BattleCommandComponent_o *)v9, markindex, 0);
          if ( ((unsigned __int8)Bdata & 1) != 0 )
          {
            Bdata = (BattleData_o *)this->fields.commandfsm;
            if ( !Bdata )
              break;
            Bdata = (BattleData_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Bdata, 0);
            if ( !Bdata )
              break;
            Bdata = (BattleData_o *)Bdata->fields.quest_ent;
            if ( !Bdata )
              break;
            Bdata = (BattleData_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Bdata,
                                      (System_String_o *)StringLiteral_22523/*"markindex"*/,
                                      0);
            if ( !Bdata )
              break;
            LODWORD(Bdata->fields.logic) = markindex;
            if ( BattleCommandComponent__isTreasureDvc((BattleCommandComponent_o *)v9, 0) )
            {
              Bdata = (BattleData_o *)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v10 = &StringLiteral_8679/*"LONG_PRESS"*/;
            }
            else
            {
              Bdata = (BattleData_o *)v9[16].klass;
              if ( !Bdata )
                break;
              Bdata = (BattleData_o *)BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)Bdata, 0);
              if ( ((unsigned __int8)Bdata & 1) == 0 )
                goto LABEL_27;
              Bdata = (BattleData_o *)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v10 = &StringLiteral_8680/*"LONG_PRESS_COMMAND_ASSIST"*/;
            }
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Bdata, (System_String_o *)*v10, 0);
          }
        }
LABEL_27:
        commandCompArray = this->fields.commandCompArray;
        ++v7;
      }
      while ( commandCompArray );
    }
LABEL_28:
    sub_2213CDC(Bdata, *(_QWORD *)&markindex);
  }
}


void BattlePerformanceCommandCard__MoveExtraCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  BattlePerformanceCommandCard_o *v13; // x20
  __int64 v14; // x1
  int32_t v15; // w1
  struct BattleCommandComponent_array *v16; // x8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  BattlePerformanceCommandCard_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  BattlePerformanceCommandCard_o *v37; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  BattlePerformanceCommandCard_o *v51; // x21
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  int32_t v58; // w1
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  BattlePerformanceCommandCard_o *v65; // x21
  __int64 v66; // x1
  System_Collections_Hashtable_o *v67; // x0
  __int64 v68; // x0
  char v69[4]; // [xsp+8h] [xbp-48h] BYREF
  int v70; // [xsp+Ch] [xbp-44h] BYREF
  float v71; // [xsp+18h] [xbp-38h] BYREF
  float v72; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_59729FB & 1) == 0 )
  {
    sub_2213A60(&iTween_EaseType_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_26242/*"x"*/);
    sub_2213A60(&StringLiteral_19609/*"easetype"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_22006/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&iTween_TypeInfo);
    byte_59729FB = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_40;
  if ( (selectedcomponents->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_39;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (BattlePerformanceCommandCard_o *)sub_2213B20(object___TypeInfo, 8);
  if ( !this )
    goto LABEL_40;
  v13 = this;
  this = (BattlePerformanceCommandCard_o *)StringLiteral_26242/*"x"*/;
  if ( StringLiteral_26242/*"x"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_26242/*"x"*/, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_41;
  }
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    goto LABEL_39;
  v15 = (int)StringLiteral_26242/*"x"*/;
  v13->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)StringLiteral_26242/*"x"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields.COMMAND_STAMP_POS_X, v15, v7, v8, v9, v10, v11, v12);
  v16 = v4->fields.selectedcomponents;
  if ( !v16 )
    goto LABEL_40;
  if ( (v16->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_39;
  this = (BattlePerformanceCommandCard_o *)v16->m_Items[3];
  if ( !this
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0)) == 0
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0)) == 0 )
  {
LABEL_40:
    sub_2213CDC(this, method);
  }
  v72 = COERCE_FLOAT(UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0)) + 250.0;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984378, &v72);
  v23 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_41;
  }
  if ( ((__int64)v13->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_39;
  *(_QWORD *)&v13->fields.COMMAND_STAMP_POS_Y = v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.COMMAND_STAMP_POS_Y,
    (int32_t)v23,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_25366/*"time"*/, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_41;
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_39;
  v30 = StringLiteral_25366/*"time"*/;
  *(_QWORD *)&v13->fields.CARD_ROOT_BASE_X = StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields.CARD_ROOT_BASE_X, v30, v24, v25, v26, v27, v28, v29);
  v71 = moveTime;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984378, &v71);
  v37 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_41;
  }
  if ( ((__int64)v13->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
    goto LABEL_39;
  v13->fields.commandfsm = (struct PlayMakerFSM_o *)v37;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields.commandfsm, (int32_t)v37, v31, v32, v33, v34, v35, v36);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_19609/*"easetype"*/;
  if ( StringLiteral_19609/*"easetype"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_19609/*"easetype"*/, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_41;
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 4 )
    goto LABEL_39;
  v44 = StringLiteral_19609/*"easetype"*/;
  v13->fields.commandprefab = (struct UnityEngine_GameObject_o *)StringLiteral_19609/*"easetype"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields.commandprefab, v44, v38, v39, v40, v41, v42, v43);
  v70 = 16;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v70);
  v51 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_41;
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 5 )
    goto LABEL_39;
  v13->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v51;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.selectCommandPrefab,
    (int32_t)v51,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_22006/*"islocal"*/;
  if ( StringLiteral_22006/*"islocal"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_22006/*"islocal"*/, v13->klass->_1.element_class);
    if ( !this )
      goto LABEL_41;
  }
  if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 6 )
    goto LABEL_39;
  v58 = StringLiteral_22006/*"islocal"*/;
  v13->fields.commandrootTransform = (struct UnityEngine_Transform_o *)StringLiteral_22006/*"islocal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->fields.commandrootTransform, v58, v52, v53, v54, v55, v56, v57);
  v69[0] = 1;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984328, v69);
  v65 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v13->klass->_1.element_class);
    if ( !this )
    {
LABEL_41:
      v68 = sub_2213D00(this, v14);
      sub_2213BA0(v68, 0);
    }
  }
  if ( ((__int64)v13->fields.m_CancellationTokenSource & 0xFFFFFFF8) == 0 )
LABEL_39:
    sub_2213CE4(this);
  v13->fields.selectinfo_sprite = (struct UISprite_o *)v65;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.selectinfo_sprite,
    (int32_t)v65,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v66);
  v67 = iTween__Hash((System_Object_array *)v13, 0);
  iTween__MoveFrom_75294960(gameObject, v67, 0);
}


void BattlePerformanceCommandCard__MoveNotTween(
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
  float y; // s9
  float x; // s8
  float z; // s10
  float v15; // s11
  float v16; // s7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_5972A04 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
    byte_5972A04 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
  if ( !perf )
    goto LABEL_11;
  v8 = perf;
  perf = (BattlePerformance_o *)BattleMoveObject__GetTransform((BattleMoveObject_o *)perf, 0);
  criticalpointTr = (UnityEngine_Component_o *)this->fields.criticalpointTr;
  if ( !criticalpointTr )
    goto LABEL_11;
  v10 = (UnityEngine_Transform_o *)perf;
  perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(criticalpointTr, 0);
  if ( !perf
    || (layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)perf, 0),
        perf = (BattlePerformance_o *)TransformHelper__ChangeChildsLayer(v10, layer, 0),
        !v10)
    || (v23.fields.x = 0.0,
        v23.fields.y = 0.0,
        v23.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(v10, v23, 0),
        BattleMoveObject__SetRigidbodyGravity((BattleMoveObject_o *)v8, 0, 0),
        !target) )
  {
LABEL_11:
    sub_2213CDC(perf, target);
  }
  localPosition = UnityEngine_Transform__get_localPosition(target, 0);
  localPosition.fields.x = localPosition.fields.x + 0.0;
  localPosition.fields.z = localPosition.fields.z + 0.0;
  localPosition.fields.y = localPosition.fields.y + 70.0;
  v25 = UnityEngine_Transform__TransformPoint(target, localPosition, 0);
  v26 = UnityEngine_Transform__InverseTransformPoint(v10, v25, 0);
  y = v26.fields.y;
  x = v26.fields.x;
  z = v26.fields.z;
  v15 = UnityEngine_Random__Range(0.3, 0.5, 0);
  v16 = UnityEngine_Random__Range(0.0, 0.2, 0);
  v27.fields.x = 0.0;
  v27.fields.y = 0.0;
  v27.fields.z = 0.0;
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  BattleMoveObject__StartNotTweenMove((BattleMoveObject_o *)v8, v27, v28, v15, v16, callback, 0);
  v8->fields.perf = (struct BattlePerformance_o *)target;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.perf, (int32_t)target, v17, v18, v19, v20, v21, v22);
}


void BattlePerformanceCommandCard__MoveNotTween2back(
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
  float y; // s9
  float x; // s8
  float z; // s10
  float v15; // s11
  float v16; // s7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_5972A05 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
    byte_5972A05 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
  if ( !perf )
    goto LABEL_11;
  v8 = perf;
  perf = (BattlePerformance_o *)BattleMoveObject__GetTransform((BattleMoveObject_o *)perf, 0);
  criticalpointTr = (UnityEngine_Component_o *)this->fields.criticalpointTr;
  if ( !criticalpointTr
    || (v10 = (UnityEngine_Transform_o *)perf,
        (perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(criticalpointTr, 0)) == 0)
    || (layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)perf, 0),
        perf = (BattlePerformance_o *)TransformHelper__ChangeChildsLayer(v10, layer, 0),
        !from)
    || (position = UnityEngine_Transform__get_position(from, 0), !v10) )
  {
LABEL_11:
    sub_2213CDC(perf, from);
  }
  UnityEngine_Transform__set_position(v10, position, 0);
  BattleMoveObject__SetRigidbodyGravity((BattleMoveObject_o *)v8, 0, 0);
  localPosition = UnityEngine_Transform__get_localPosition(v10, 0);
  y = localPosition.fields.y;
  x = localPosition.fields.x;
  z = localPosition.fields.z;
  v15 = UnityEngine_Random__Range(0.3, 0.5, 0);
  v16 = UnityEngine_Random__Range(0.0, 0.2, 0);
  v26.fields.x = 0.0;
  v26.fields.y = 0.0;
  v26.fields.z = 0.0;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  BattleMoveObject__StartNotTweenMove((BattleMoveObject_o *)v8, v25, v26, v15, v16, callback, 0);
  v8->fields.perf = (struct BattlePerformance_o *)from;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.perf, (int32_t)from, v17, v18, v19, v20, v21, v22);
}


void BattlePerformanceCommandCard__MoveSelectedCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  int32_t width; // w0
  __int64 v6; // x1
  ManagerConfig_c *v7; // x8
  int32_t v8; // w20
  int32_t HEIGHT; // w22
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned __int64 v12; // x23
  float v13; // s0
  float v14; // s1
  float v15; // s1
  float v16; // s9
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Object_array *v25; // x21
  __int64 v26; // x1
  int32_t v27; // w1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  Il2CppObject *v48; // x22
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int32_t v55; // w1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  Il2CppObject *v62; // x22
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  int32_t v69; // w1
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  Il2CppObject *v76; // x22
  __int64 v77; // x1
  System_Collections_Hashtable_o *v78; // x0
  __int64 v79; // x0
  char v80[4]; // [xsp+0h] [xbp-80h] BYREF
  int v81; // [xsp+4h] [xbp-7Ch] BYREF
  float v82; // [xsp+8h] [xbp-78h] BYREF
  float v83; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_59729F9 & 1) == 0 )
  {
    sub_2213A60(&iTween_EaseType_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_26242/*"x"*/);
    sub_2213A60(&StringLiteral_19609/*"easetype"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_22006/*"islocal"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_59729F9 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  v7 = ManagerConfig_TypeInfo;
  v8 = width;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v6);
    v7 = ManagerConfig_TypeInfo;
  }
  HEIGHT = v7->static_fields->HEIGHT;
  v10 = UnityEngine_Screen__get_height(0);
  v12 = 0;
  v13 = (float)(HEIGHT * v8) / (float)(ManagerConfig_TypeInfo->static_fields->WIDTH * v10);
  v14 = 1.0;
  if ( v13 <= 1.0 )
    v14 = (float)(HEIGHT * v8) / (float)(ManagerConfig_TypeInfo->static_fields->WIDTH * v10);
  v15 = v14 * -1.1;
  if ( v13 >= 0.0 )
    v16 = v15;
  else
    v16 = -0.0;
  do
  {
    selectedcomponents = this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_44;
    if ( v12 >= LODWORD(selectedcomponents->max_length) )
      goto LABEL_42;
    v10 = (__int64)selectedcomponents->m_Items[v12];
    if ( !v10
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0),
          (v10 = sub_2213B20(object___TypeInfo, 8)) == 0) )
    {
LABEL_44:
      sub_2213CDC(v10, v11);
    }
    v25 = (System_Object_array *)v10;
    v10 = (__int64)StringLiteral_26242/*"x"*/;
    if ( StringLiteral_26242/*"x"*/ )
    {
      v10 = sub_2213BB4(StringLiteral_26242/*"x"*/, v25->obj.klass->_1.element_class);
      if ( !v10 )
        goto LABEL_43;
    }
    if ( !LODWORD(v25->max_length) )
      goto LABEL_42;
    v27 = (int)StringLiteral_26242/*"x"*/;
    v25->m_Items[0] = (Il2CppObject *)StringLiteral_26242/*"x"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
    v83 = v16;
    v10 = j_il2cpp_value_box_0(qword_5984378, &v83);
    v34 = (Il2CppObject *)v10;
    if ( v10 )
    {
      v10 = sub_2213BB4(v10, v25->obj.klass->_1.element_class);
      if ( !v10 )
        goto LABEL_43;
    }
    if ( (v25->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_42;
    v25->m_Items[1] = v34;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[1], (int32_t)v34, v28, v29, v30, v31, v32, v33);
    v10 = StringLiteral_25366/*"time"*/;
    if ( StringLiteral_25366/*"time"*/ )
    {
      v10 = sub_2213BB4(StringLiteral_25366/*"time"*/, v25->obj.klass->_1.element_class);
      if ( !v10 )
        goto LABEL_43;
    }
    if ( LODWORD(v25->max_length) <= 2 )
      goto LABEL_42;
    v41 = StringLiteral_25366/*"time"*/;
    v25->m_Items[2] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
    v82 = moveTime;
    v10 = j_il2cpp_value_box_0(qword_5984378, &v82);
    v48 = (Il2CppObject *)v10;
    if ( v10 )
    {
      v10 = sub_2213BB4(v10, v25->obj.klass->_1.element_class);
      if ( !v10 )
        goto LABEL_43;
    }
    if ( (v25->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_42;
    v25->m_Items[3] = v48;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[3], (int32_t)v48, v42, v43, v44, v45, v46, v47);
    v10 = StringLiteral_19609/*"easetype"*/;
    if ( StringLiteral_19609/*"easetype"*/ )
    {
      v10 = sub_2213BB4(StringLiteral_19609/*"easetype"*/, v25->obj.klass->_1.element_class);
      if ( !v10 )
        goto LABEL_43;
    }
    if ( LODWORD(v25->max_length) <= 4 )
      goto LABEL_42;
    v55 = StringLiteral_19609/*"easetype"*/;
    v25->m_Items[4] = (Il2CppObject *)StringLiteral_19609/*"easetype"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
    v81 = 1;
    v10 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v81);
    v62 = (Il2CppObject *)v10;
    if ( v10 )
    {
      v10 = sub_2213BB4(v10, v25->obj.klass->_1.element_class);
      if ( !v10 )
        goto LABEL_43;
    }
    if ( LODWORD(v25->max_length) <= 5 )
      goto LABEL_42;
    v25->m_Items[5] = v62;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[5], (int32_t)v62, v56, v57, v58, v59, v60, v61);
    v10 = StringLiteral_22006/*"islocal"*/;
    if ( StringLiteral_22006/*"islocal"*/ )
    {
      v10 = sub_2213BB4(StringLiteral_22006/*"islocal"*/, v25->obj.klass->_1.element_class);
      if ( !v10 )
        goto LABEL_43;
    }
    if ( LODWORD(v25->max_length) <= 6 )
      goto LABEL_42;
    v69 = StringLiteral_22006/*"islocal"*/;
    v25->m_Items[6] = (Il2CppObject *)StringLiteral_22006/*"islocal"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[6], v69, v63, v64, v65, v66, v67, v68);
    v80[0] = 1;
    v10 = j_il2cpp_value_box_0(qword_5984328, v80);
    v76 = (Il2CppObject *)v10;
    if ( v10 )
    {
      v10 = sub_2213BB4(v10, v25->obj.klass->_1.element_class);
      if ( !v10 )
      {
LABEL_43:
        v79 = sub_2213D00(v10, v26);
        sub_2213BA0(v79, 0);
      }
    }
    if ( (v25->max_length & 0xFFFFFFF8) == 0 )
LABEL_42:
      sub_2213CE4(v10);
    v25->m_Items[7] = v76;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[7], (int32_t)v76, v70, v71, v72, v73, v74, v75);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v77);
    v78 = iTween__Hash(v25, 0);
    iTween__MoveAdd_75297968(gameObject, v78, 0);
    ++v12;
  }
  while ( v12 != 3 );
}


void BattlePerformanceCommandCard__OnApplicationPause(
        BattlePerformanceCommandCard_o *this,
        bool pauseStatus,
        const MethodInfo *method)
{
  this->fields.firstBonusAnimationWaitTime = this->fields.firstBonusAnimationMaxTime;
  if ( pauseStatus && this->fields.isTouchBegan && !this->fields.isTouchEnded )
    this->fields.isTouchCanceled = 1;
}


void BattlePerformanceCommandCard__OnCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *commandAssistDetailWindow; // x0
  struct BattleCommandAssistDetailWindowComponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_5972A14 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__);
    sub_2213A60(&Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&StringLiteral_17705/*"ba21"*/);
    byte_5972A14 = 1;
  }
  commandAssistDetailWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !commandAssistDetailWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(commandAssistDetailWindow, 0) )
    return;
  v4 = this->fields.commandAssistDetailWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__,
    0);
  if ( !v4 )
LABEL_10:
    sub_2213CDC(commandAssistDetailWindow, method);
  ((void (__fastcall *)(struct BattleCommandAssistDetailWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v4->klass->vtable._12_Close.methodPtr)(
    v4,
    v5,
    v4->klass->vtable._12_Close.method);
  v6 = Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySe(v7, (System_String_o *)StringLiteral_17705/*"ba21"*/, 0, 0);
}


void BattlePerformanceCommandCard__OnCloseSealedWindow(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSealedCommandWindowComponent_o *sealedWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_5972A0E & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__);
    sub_2213A60(&Method_BattlePerformanceCommandCard_endCloseSealedWindow__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5972A0E = 1;
  }
  v3 = Method_BattlePerformanceCommandCard_OnCloseSealedWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseSealedWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_OnCloseSealedWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  sealedWindow = this->fields.sealedWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseSealedWindow__,
    0);
  if ( !sealedWindow )
    sub_2213CDC(v7, v8);
  ((void (__fastcall *)(struct BattleSealedCommandWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))sealedWindow->klass->vtable._12_Close.methodPtr)(
    sealedWindow,
    v6,
    sealedWindow->klass->vtable._12_Close.method);
}


void BattlePerformanceCommandCard__OnCloseTdConfWindow(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *tdConfWindow; // x0
  struct BattleTDConfWIndowComponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_5972A11 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__);
    sub_2213A60(&Method_BattlePerformanceCommandCard_endCloseTdConfWindow__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5972A11 = 1;
  }
  tdConfWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !tdConfWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(tdConfWindow, 0) )
    return;
  v4 = this->fields.tdConfWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseTdConfWindow__,
    0);
  if ( !v4 )
LABEL_10:
    sub_2213CDC(tdConfWindow, method);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v4->klass->vtable._12_Close.methodPtr)(
    v4,
    v5,
    v4->klass->vtable._12_Close.method);
  v6 = Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__OpenCommandAssistDetailWIndow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x22
  int max_length; // w8
  __int64 v7; // x23
  BattleCommandComponent_o *v8; // x21
  BattleCommandData_o *data; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  v4 = this;
  if ( (byte_5972A13 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&StringLiteral_17704/*"ba20"*/);
    byte_5972A13 = 1;
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
      if ( (unsigned int)v7 >= max_length )
        sub_2213CE4(this);
      v8 = commandCompArray->m_Items[v7];
      if ( !v8 )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                                 commandCompArray->m_Items[v7],
                                                 markIndex,
                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = commandCompArray->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
    data = v8->fields.data;
    if ( !data )
      goto LABEL_19;
    if ( BattleCommandData__IsEnableCommandAssist(v8->fields.data, 0) )
    {
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandAssistDetailWindow;
      if ( this )
      {
        BattleCommandAssistDetailWindowComponent__SetCommandAssistInfo(
          (BattleCommandAssistDetailWindowComponent_o *)this,
          data,
          0);
        v10 = Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__;
        if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__);
        v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
        OverwriteAssetSoundName__PlaySe(v11, (System_String_o *)StringLiteral_17704/*"ba20"*/, 0, 0);
        this = (BattlePerformanceCommandCard_o *)v4->fields.commandAssistDetailWindow;
        if ( this )
        {
          ((void (__fastcall *)(BattlePerformanceCommandCard_o *, _QWORD, void *))this->klass[1]._1.generic_class)(
            this,
            0,
            this->klass[1]._1.typeMetadataHandle);
          return;
        }
      }
LABEL_19:
      sub_2213CDC(this, *(_QWORD *)&markIndex);
    }
  }
}


void BattlePerformanceCommandCard__OpenInitiarize(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_7;
  if ( BattleLogic__getTutorialId(logic, 0) != 1 )
    goto LABEL_6;
  logic = this->fields.logic;
  if ( !logic )
LABEL_7:
    sub_2213CDC(logic, method);
  if ( BattleLogic__getTurn(logic, 0) == 4 )
    this->fields.isTouchNgInTutorial = 1;
LABEL_6:
  this->fields.isPlayingMoveCard = 1;
}


void BattlePerformanceCommandCard__OpenSealedWindow(
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
  __int64 v19; // x1
  System_Nullable_int__o v20; // x0
  const MethodInfo_45E9150 *v21; // x2
  BattleSealedCommandWindowComponent_o *sealedWindow; // x22
  __int128 v23; // [xsp+0h] [xbp-40h] BYREF
  __int64 v24; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_Vector3__o v25; // 0:x0.16
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972A0C & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_OpenSealedWindow__);
    sub_2213A60(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    byte_5972A0C = 1;
  }
  v5 = Method_BattlePerformanceCommandCard_OpenSealedWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenSealedWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_OpenSealedWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v10 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v10 >= max_length )
      goto LABEL_21;
    if ( (unsigned int)v10 >= max_length )
      sub_2213CE4(SealStatus);
    v12 = &commandCompArray->obj.klass + v10;
    v13 = (BattleCommandComponent_o *)v12[4];
    if ( !v13 )
      goto LABEL_12;
    SealStatus = (BattleCommandSealStatus_o *)BattleCommandComponent__checkMark(
                                                (BattleCommandComponent_o *)v12[4],
                                                markIndex,
                                                0);
    if ( ((unsigned __int8)SealStatus & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v10;
    if ( !commandCompArray )
      goto LABEL_12;
  }
  SealStatus = BattleCommandComponent__get_SealStatus(v13, 0);
  if ( !SealStatus )
    goto LABEL_12;
  PrioredStatus = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0);
  v15 = (int)PrioredStatus;
  SealedWindowMessageLocalizationKey = BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
                                         PrioredStatus,
                                         (int32_t)PrioredStatus,
                                         v16);
  v18 = sub_2213CCC(BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
  BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v18,
    0);
  if ( v15 == 7 )
  {
    v20 = (System_Nullable_int__o)&v24;
    v24 = 0;
    System_Nullable_int____ctor(v20, 26, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    if ( !v18 )
      goto LABEL_12;
    v26.fields.x = 0.0;
    v26.fields.z = 0.0;
    v26.fields.y = 15.0;
    *(_QWORD *)&v25.fields.hasValue = &v23;
    *(_QWORD *)(v18 + 16) = v24;
    *(_QWORD *)&v25.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    v23 = 0u;
    System_Nullable_Vector3____ctor(v25, v26, v21);
    *(_OWORD *)(v18 + 24) = v23;
  }
  sealedWindow = this->fields.sealedWindow;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  SealStatus = (BattleCommandSealStatus_o *)LocalizationManager__Get(SealedWindowMessageLocalizationKey, 0);
  if ( !sealedWindow )
    goto LABEL_12;
  BattleSealedCommandWindowComponent__setLabel(
    sealedWindow,
    (System_String_o *)SealStatus,
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v18,
    0);
LABEL_21:
  SealStatus = (BattleCommandSealStatus_o *)this->fields.sealedWindow;
  if ( !SealStatus )
LABEL_12:
    sub_2213CDC(SealStatus, v8);
  ((void (__fastcall *)(BattleCommandSealStatus_o *, _QWORD, void *))SealStatus->klass[1]._1.generic_class)(
    SealStatus,
    0,
    SealStatus->klass[1]._1.typeMetadataHandle);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__OpenTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned int v6; // w29
  unsigned int max_length; // w9
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
  if ( (byte_5972A10 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_OpenTdConfWindow__);
    sub_2213A60(&Method_BattlePerformanceCommandCard_endOpenTdConf__);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5972A10 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      sub_2213CE4(this);
    v8 = &commandCompArray->obj.klass + (int)v6;
    v9 = (BattleCommandComponent_o *)v8[4];
    if ( !v9 )
      goto LABEL_19;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v8[4],
                                               markIndex,
                                               0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      Bdata = v4->fields.Bdata;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getUniqueID(v9, 0);
      if ( !Bdata )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(Bdata, (int32_t)this, 0);
      if ( !this )
        goto LABEL_19;
      v11 = (BattleServantData_o *)this;
      this = (BattlePerformanceCommandCard_o *)this->fields.cutin_grand_b;
      if ( !this )
        goto LABEL_19;
      svtlimitaddent = v11->fields.svtlimitaddent;
      IsNameTrueFromBattleSvt = ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)this, 0);
      OverwriteTDRuby = 0;
      OverwriteTDName = 0;
      if ( svtlimitaddent && IsNameTrueFromBattleSvt )
      {
        OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(svtlimitaddent, 0);
        OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(svtlimitaddent, 0);
      }
      this = (BattlePerformanceCommandCard_o *)v4->fields.Bdata;
      if ( !this )
        goto LABEL_19;
      IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)this, v11, 1, 0);
      tdConfWindow = v4->fields.tdConfWindow;
      v18 = IsNpDetailActive;
      this = (BattlePerformanceCommandCard_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
      if ( !tdConfWindow )
        goto LABEL_19;
      BattleTDConfWIndowComponent__setData(
        tdConfWindow,
        (int32_t)this,
        v11->fields.treasuredvcLevel,
        OverwriteTDName,
        OverwriteTDRuby,
        v18,
        0);
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v6;
    if ( !commandCompArray )
      goto LABEL_19;
  }
  v19 = Method_BattlePerformanceCommandCard_OpenTdConfWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenTdConfWindow__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_OpenTdConfWindow__);
  v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v19, v19[4]);
  OverwriteAssetSoundName__PlayCommonSe(v20, 9, 0, 0);
  v21 = v4->fields.tdConfWindow;
  v22 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v22, (Il2CppObject *)v4, Method_BattlePerformanceCommandCard_endOpenTdConf__, 0);
  if ( !v21 )
LABEL_19:
    sub_2213CDC(this, *(_QWORD *)&markIndex);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v21->klass->vtable._10_Open.methodPtr)(
    v21,
    v22,
    v21->klass->vtable._10_Open.method);
}


void BattlePerformanceCommandCard__PlayBackStar(
        BattlePerformanceCommandCard_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v7; // x1
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
  __int64 v20; // x1
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v22; // x8
  int32_t size; // w2
  int v24; // w9
  unsigned __int64 i; // x29
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v27; // x8
  BattleCommandComponent_o *v28; // x21
  int32_t CriticalCount; // w22
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v31; // x23
  System_Action_object__o *v32; // x24
  const MethodInfo *v33; // x3
  System_Action_c *v34; // x0
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x2
  System_Collections_IEnumerator_o *v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5972A09 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleCommandComponent_addCriticalBuff__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_BattlePerformanceCommandCard___c__DisplayClass178_0__PlayBackStar_b__0__);
    sub_2213A60(&BattlePerformanceCommandCard___c__DisplayClass178_0_TypeInfo);
    byte_5972A09 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v5 = sub_2213CCC(BattlePerformanceCommandCard___c__DisplayClass178_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass178_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass178_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v39 = v38;
  v38.fields._list = 0;
  *(_QWORD *)&v38.fields._index = &v39;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_2213CDC(0, v20);
    BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)v39.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v22 = this->fields.aubelist;
  if ( !v22 )
    goto LABEL_22;
  size = v22->fields._size;
  v24 = v22->fields._version + 1;
  v22->fields._size = 0;
  v22->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0);
  for ( i = 0; i != 5; ++i )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_22;
    if ( i >= LODWORD(commandCompArray->max_length) )
LABEL_23:
      sub_2213CE4(aubelist);
    v27 = &commandCompArray->obj.klass + i;
    v28 = (BattleCommandComponent_o *)v27[4];
    if ( !v28 )
      goto LABEL_22;
    CriticalCount = BattleCommandComponent__getCriticalCount((BattleCommandComponent_o *)v27[4], 0);
    BattleCommandComponent__setCriticalObject(v28, 0, 0);
    if ( CriticalCount >= 1 )
    {
      while ( 1 )
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          break;
        if ( i >= LODWORD(commandTransformArray->max_length) )
          goto LABEL_23;
        v31 = commandTransformArray->m_Items[i];
        v32 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(v32, (Il2CppObject *)v28, Method_BattleCommandComponent_addCriticalBuff__, 0);
        BattlePerformanceCommandCard__MoveNotTween2back(this, v31, (System_Action_GameObject__o *)v32, v33);
        if ( !--CriticalCount )
          goto LABEL_20;
      }
LABEL_22:
      sub_2213CDC(aubelist, v7);
    }
LABEL_20:
    ;
  }
  v34 = System_Action_TypeInfo;
  this->fields._IsPlayingBackStar_k__BackingField = 1;
  v35 = (System_Action_o *)sub_2213CCC(v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v5,
    Method_BattlePerformanceCommandCard___c__DisplayClass178_0__PlayBackStar_b__0__,
    0);
  v37 = BattlePerformanceCommandCard__waitFunc(this, 0.5, v35, v36);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v37, 0);
}


void BattlePerformanceCommandCard__PlayFallStar(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  unsigned __int64 i; // x26
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v11; // x8
  BattleCommandComponent_o *v12; // x20
  int v13; // w21
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v15; // x22
  System_Action_object__o *v16; // x23
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5972A07 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&Method_BattleCommandComponent_addCriticalBuff__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_5972A07 = 1;
  }
  aubelist = this->fields.aubelist;
  memset(&v19, 0, sizeof(v19));
  if ( !aubelist )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  v18.fields._list = 0;
  *(_QWORD *)&v18.fields._index = &v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_2213CDC(0, v4);
    BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)v19.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v6 = this->fields.aubelist;
  if ( !v6 )
    goto LABEL_25;
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  for ( i = 0; i != 5; ++i )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( i >= LODWORD(commandCompArray->max_length) )
LABEL_26:
      sub_2213CE4(aubelist);
    v11 = &commandCompArray->obj.klass + i;
    v12 = (BattleCommandComponent_o *)v11[4];
    if ( !v12 )
      goto LABEL_25;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__IsMaxViewCritical(
                                                                         (BattleCommandComponent_o *)v11[4],
                                                                         0);
    if ( ((unsigned __int8)aubelist & 1) == 0 )
    {
      aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                           v12,
                                                                           0);
      if ( (int)aubelist >= 1 )
      {
        v13 = (int)aubelist;
        while ( 1 )
        {
          commandTransformArray = this->fields.commandTransformArray;
          if ( !commandTransformArray )
            break;
          if ( i >= LODWORD(commandTransformArray->max_length) )
            goto LABEL_26;
          v15 = commandTransformArray->m_Items[i];
          v16 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
          System_Action_object____ctor(v16, (Il2CppObject *)v12, Method_BattleCommandComponent_addCriticalBuff__, 0);
          BattlePerformanceCommandCard__MoveNotTween(this, v15, (System_Action_GameObject__o *)v16, v17);
          if ( !--v13 )
            goto LABEL_21;
        }
LABEL_25:
        sub_2213CDC(aubelist, method);
      }
LABEL_21:
      BattleCommandComponent__ResetPassStarCount(v12, 0);
      if ( v12->fields.selectflg )
        BattleCommandComponent__updateSelectedEffect(v12, 0);
    }
  }
  BattlePerformanceCommandCard__updateBuffIcon(this, method);
}


void BattlePerformanceCommandCard__PlayFlash(
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
  if ( !LODWORD(selectedcomponents->max_length) )
    goto LABEL_12;
  v4 = this;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[0];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 0, combo, 0);
  v6 = v4->fields.selectedcomponents;
  if ( !v6 )
    goto LABEL_11;
  if ( (v6->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  this = (BattlePerformanceCommandCard_o *)v6->m_Items[1];
  if ( !this
    || (BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 1, combo, 0),
        (v7 = v4->fields.selectedcomponents) == 0) )
  {
LABEL_11:
    sub_2213CDC(this, combo);
  }
  if ( LODWORD(v7->max_length) <= 2 )
LABEL_12:
    sub_2213CE4(this);
  this = (BattlePerformanceCommandCard_o *)v7->m_Items[2];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 2, combo, 0);
}


void BattlePerformanceCommandCard__PlayFlashComboSvt(
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
  if ( !LODWORD(selectedcomponents->max_length) )
    goto LABEL_12;
  v4 = this;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[0];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 0, combo, 0);
  v6 = v4->fields.selectedcomponents;
  if ( !v6 )
    goto LABEL_11;
  if ( (v6->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  this = (BattlePerformanceCommandCard_o *)v6->m_Items[1];
  if ( !this
    || (BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 1, combo, 0),
        (v7 = v4->fields.selectedcomponents) == 0) )
  {
LABEL_11:
    sub_2213CDC(this, combo);
  }
  if ( LODWORD(v7->max_length) <= 2 )
LABEL_12:
    sub_2213CE4(this);
  this = (BattlePerformanceCommandCard_o *)v7->m_Items[2];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 2, combo, 0);
}


void BattlePerformanceCommandCard__PlayFlashExtra(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *selectedcomponents; // x8

  v2 = this;
  if ( (byte_59729FC & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&StringLiteral_19696/*"ef_excard01"*/);
    byte_59729FC = 1;
  }
  selectedcomponents = v2->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_7;
  if ( (selectedcomponents->max_length & 0xFFFFFFFC) == 0 )
    sub_2213CE4(this);
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
LABEL_7:
    sub_2213CDC(this, method);
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_19696/*"ef_excard01"*/, 5, 0);
}


void BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
        BattlePerformanceCommandCard_o *this,
        BattleData_o *data,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v6; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x8
  unsigned __int64 v8; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v10; // x23
  BattlePerformanceCommandCard_o *v11; // x25
  float COMMAND_STAMP_POS_Y; // w1
  System_Nullable_int__o v13; // x0
  __int64 v14; // x8
  struct BattleCommandComponent_array *v15; // x8
  BattlePerformanceCommandCard_o *v16; // x23
  bool activeSelf; // w24
  struct BattleCommandComponent_array *v18; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  struct BattleCommandComponent_array *v22; // x8
  struct BattleCommandComponent_array *v23; // x8
  struct BattleCommandComponent_array *v24; // x8
  struct BattleCommandComponent_array *v25; // x8
  struct BattleCommandComponent_array *v26; // x8
  __int64 v27; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_5972A03 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_BattleCommandData___);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972A03 = 1;
  }
  selectedcomponents = v6->fields.selectedcomponents;
  if ( selectedcomponents )
  {
    v8 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(selectedcomponents->max_length);
      if ( (__int64)v8 >= (int)max_length_low )
        break;
      if ( v8 >= max_length_low )
        goto LABEL_46;
      v10 = (UnityEngine_Object_o *)selectedcomponents->m_Items[v8];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !data )
          goto LABEL_44;
        this = (BattlePerformanceCommandCard_o *)BasicHelper__IndexValue_object_(
                                                   (System_Object_array *)data->fields.selectcommandlist,
                                                   v8,
                                                   0,
                                                   (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_BattleCommandData___);
        v11 = this;
        if ( this )
        {
          COMMAND_STAMP_POS_Y = this->fields.COMMAND_STAMP_POS_Y;
          v13 = (System_Nullable_int__o)&v27;
          v27 = 0;
          System_Nullable_int____ctor(
            v13,
            SLODWORD(COMMAND_STAMP_POS_Y),
            (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
          v14 = v27;
          if ( !svtData )
            goto LABEL_44;
        }
        else
        {
          v14 = 0;
          if ( !svtData )
            goto LABEL_44;
        }
        if ( (_BYTE)v14 && svtData->fields.uniqueId == HIDWORD(v14) )
        {
          v15 = v6->fields.selectedcomponents;
          if ( !v15 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v15->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v15->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
          if ( !this )
            goto LABEL_44;
          v16 = this;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
          this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)v16,
                                                     0);
          if ( !this )
            goto LABEL_44;
          localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
          v18 = v6->fields.selectedcomponents;
          if ( !v18 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v18->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v18->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          x = localScale.fields.x;
          y = localScale.fields.y;
          z = localScale.fields.z;
          BattleCommandComponent__UpdateSealStatus((BattleCommandComponent_o *)this, 0);
          v22 = v6->fields.selectedcomponents;
          if ( !v22 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v22->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v22->m_Items[v8];
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
            0);
          v23 = v6->fields.selectedcomponents;
          if ( !v23 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v23->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v23->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)this, 0, 0);
          v24 = v6->fields.selectedcomponents;
          if ( !v24 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v24->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v24->m_Items[v8];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__UpdateCommandUpDetailLabel((BattleCommandComponent_o *)this, v8, 0);
          v25 = v6->fields.selectedcomponents;
          if ( !v25 )
            goto LABEL_44;
          if ( v8 >= LODWORD(v25->max_length) )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v25->m_Items[v8];
          if ( !this )
LABEL_44:
            sub_2213CDC(this, data);
          this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getCriticalCount(
                                                     (BattleCommandComponent_o *)this,
                                                     0);
          if ( (int)this >= 1 )
          {
            v26 = v6->fields.selectedcomponents;
            if ( !v26 )
              goto LABEL_44;
            if ( v8 >= LODWORD(v26->max_length) )
LABEL_46:
              sub_2213CE4(this);
            this = (BattlePerformanceCommandCard_o *)v26->m_Items[v8];
            if ( !this )
              goto LABEL_44;
            BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)this, 1, 0);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, activeSelf, 0);
          v29.fields.x = x;
          v29.fields.y = y;
          v29.fields.z = z;
          GameObjectExtensions__SetLocalScale((UnityEngine_GameObject_o *)v16, v29, 0);
        }
      }
      selectedcomponents = v6->fields.selectedcomponents;
      ++v8;
      if ( !selectedcomponents )
        goto LABEL_44;
    }
  }
}


void BattlePerformanceCommandCard__ResetAllCards(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *commandCompArray; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19

  v2 = this;
  if ( (byte_5972A2C & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972A2C = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( commandCompArray )
  {
    max_length = commandCompArray->max_length;
    if ( (int)max_length >= 1 )
    {
      v5 = 0;
      do
      {
        if ( v5 >= (unsigned int)max_length )
          sub_2213CE4(this);
        v6 = (UnityEngine_Object_o *)commandCompArray->m_Items[v5];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v6 )
            sub_2213CDC(this, method);
          BattleCommandComponent__setData((BattleCommandComponent_o *)v6, 0, 0, 0, 1, 0, 1, 0);
        }
        LODWORD(max_length) = commandCompArray->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)max_length );
    }
  }
}


void BattlePerformanceCommandCard__ResetCardCriticalLabel(
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
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__resetCriticalLabel((BattleCommandComponent_o *)this, 0);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceCommandCard__ResetCommandCardPassData(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  unsigned __int64 i; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8

  v2 = this;
  for ( i = 0; i != 5; ++i )
  {
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_7;
    if ( i >= LODWORD(commandCompArray->max_length) )
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[i];
    if ( !this )
LABEL_7:
      sub_2213CDC(this, method);
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)this, 0);
  }
}


void BattlePerformanceCommandCard__ResetNoblePhantasmCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 i; // x22
  struct BattleCommandComponent_array *commandCompArray; // x8
  UnityEngine_Object_o *v5; // x20

  v2 = this;
  if ( (byte_5972A2B & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972A2B = 1;
  }
  for ( i = 9; i != 12; ++i )
  {
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
LABEL_13:
      sub_2213CDC(this, method);
    if ( i - 4 >= (unsigned __int64)LODWORD(commandCompArray->max_length) )
      sub_2213CE4(this);
    v5 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + i);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v5 )
        goto LABEL_13;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v5, 0, 0, 0, 1, 0, 1, 0);
    }
  }
}


void BattlePerformanceCommandCard__SelectedPlayerAttackPreselectTarget(
        BattlePerformanceCommandCard_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *Bdata; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Action_o *playerAttackPreselectTargetEndCallback; // x1
  __int64 v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x2
  BattleWindowComponent_EndCall_o *v29; // x0
  intptr_t *v30; // x8
  BattleWindowComponent_EndCall_o *v31; // x21
  const MethodInfo *v32; // x2

  if ( (byte_59729DC & 1) == 0 )
  {
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceCommandCard___c__DisplayClass102_0__SelectedPlayerAttackPreselectTarget_b__0__);
    sub_2213A60(&Method_BattlePerformanceCommandCard___c__DisplayClass102_0__SelectedPlayerAttackPreselectTarget_b__1__);
    sub_2213A60(&BattlePerformanceCommandCard___c__DisplayClass102_0_TypeInfo);
    byte_59729DC = 1;
  }
  v5 = sub_2213CCC(BattlePerformanceCommandCard___c__DisplayClass102_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass102_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass102_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  playerAttackPreselectTargetEndCallback = this->fields.playerAttackPreselectTargetEndCallback;
  *(_QWORD *)(v5 + 24) = playerAttackPreselectTargetEndCallback;
  v15 = v5 + 24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v5 + 24),
    (int32_t)playerAttackPreselectTargetEndCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.playerAttackPreselectTargetEndCallback = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playerAttackPreselectTargetEndCallback,
    0,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Bdata = this->fields.Bdata;
  if ( uniqueId < 0 )
  {
    if ( Bdata )
    {
      BattleData__ResetPlayerAttackPreselectTargetSelection((BattleData_o *)Bdata, 0);
      v29 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
      v30 = &Method_BattlePerformanceCommandCard___c__DisplayClass102_0__SelectedPlayerAttackPreselectTarget_b__0__;
      goto LABEL_14;
    }
    goto LABEL_18;
  }
  if ( !Bdata )
    goto LABEL_18;
  Bdata = BattleData__GetFirstUnresolvedPlayerAttackPreselectTargetData((BattleData_o *)Bdata, 0);
  if ( Bdata )
  {
    if ( !this->fields.Bdata )
      goto LABEL_18;
    BattleData__SetPlayerAttackPreselectTarget(
      this->fields.Bdata,
      *((_DWORD *)Bdata + 4),
      *((_DWORD *)Bdata + 5),
      *((_DWORD *)Bdata + 6),
      *((_DWORD *)Bdata + 11),
      uniqueId,
      0);
  }
  Bdata = this->fields.Bdata;
  if ( !Bdata )
LABEL_18:
    sub_2213CDC(Bdata, v7);
  if ( BattleData__HasUnresolvedPlayerAttackPreselectTargetData((BattleData_o *)Bdata, 0) )
  {
    v29 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
    v30 = &Method_BattlePerformanceCommandCard___c__DisplayClass102_0__SelectedPlayerAttackPreselectTarget_b__1__;
LABEL_14:
    v31 = v29;
    BattleWindowComponent_EndCall___ctor(v29, (Il2CppObject *)v5, *v30, 0);
    BattlePerformanceCommandCard__ClosePlayerAttackPreselectTargetWindow(this, v31, v32);
    return;
  }
  BattlePerformanceCommandCard__ClosePlayerAttackPreselectTargetWindow(this, 0, v28);
  if ( *(_QWORD *)v15 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v15 + 64LL),
      *(_QWORD *)(*(_QWORD *)v15 + 40LL));
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__SetBackTacticalButton(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backTacticalButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  const MethodInfo *v7; // x1

  backTacticalButton = (UnityEngine_Component_o *)this->fields.backTacticalButton;
  if ( active )
  {
    if ( backTacticalButton )
    {
      gameObject = UnityEngine_Component__get_gameObject(backTacticalButton, 0);
      AndroidBackKeyManager__AddBackBtn(gameObject, v5);
      return;
    }
LABEL_6:
    sub_2213CDC(backTacticalButton, active);
  }
  if ( !backTacticalButton )
    goto LABEL_6;
  v6 = UnityEngine_Component__get_gameObject(backTacticalButton, 0);
  AndroidBackKeyManager__RemoveBackBtn(v6, v7);
}


void BattlePerformanceCommandCard__SetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        System_Collections_Generic_List_BattleCommandData__o *baselist,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.baseCommandList = baselist;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseCommandList,
    (int32_t)baselist,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePerformanceCommandCard__SetCommandCardEffect(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__UpdateCommandCardEffect((BattleCommandComponent_o *)this, 0);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__SetCommandCardEffectActive(
        BattlePerformanceCommandCard_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  unsigned int v6; // w21
  unsigned int max_length; // w9
  BattleCommandComponent_o *v8; // x8
  float v9; // s0
  struct BattleCommandComponent_array *v10; // x8
  bool v11; // w1

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_17:
    sub_2213CDC(this, value);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_19;
    v8 = commandCompArray->m_Items[v6];
    if ( !v8 )
      goto LABEL_17;
    this = (BattlePerformanceCommandCard_o *)v8->fields.nomalwidget;
    if ( !this )
      goto LABEL_17;
    v9 = ((float (__fastcall *)(BattlePerformanceCommandCard_o *, _QWORD, const MethodInfo *))this->klass[1]._1.this_arg.data)(
           this,
           *(_QWORD *)&this->klass[1]._1.this_arg.bits,
           method);
    v10 = v4->fields.commandCompArray;
    if ( v9 <= 0.0 )
    {
      if ( !v10 )
        goto LABEL_17;
      if ( v6 >= LODWORD(v10->max_length) )
LABEL_19:
        sub_2213CE4(this);
      this = (BattlePerformanceCommandCard_o *)v10->m_Items[v6];
      if ( !this )
        goto LABEL_17;
      v11 = 0;
    }
    else
    {
      if ( !v10 )
        goto LABEL_17;
      if ( v6 >= LODWORD(v10->max_length) )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)v10->m_Items[v6];
      if ( !this )
        goto LABEL_17;
      v11 = value;
    }
    BattleCommandComponent__CardEffectSetActive((BattleCommandComponent_o *)this, v11, 0);
    commandCompArray = v4->fields.commandCompArray;
    ++v6;
    if ( !commandCompArray )
      goto LABEL_17;
  }
}


void BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  unsigned int v4; // w22
  unsigned int max_length; // w9
  BattleCommandComponent_o *v6; // x8
  BattleCommandData_o *data; // x20
  int32_t firstaura_b_high; // w3
  int32_t v9; // w2
  BattlePerformanceCommandCard_o *v10; // x21
  int m_CachedPtr_high; // w8
  int v12; // w8
  struct BattleCommandComponent_array *v13; // x8
  BattleCommandComponent_o *v14; // x8

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_19:
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= (int)max_length )
      break;
    if ( v4 >= max_length )
      goto LABEL_21;
    v6 = commandCompArray->m_Items[v4];
    if ( v6 )
    {
      data = v6->fields.data;
      if ( data && !BattleCommandData__isTreasureDvc(v6->fields.data, 0) )
      {
        this = (BattlePerformanceCommandCard_o *)BattleCommandData__GetCommandCardTypeChangeBuff(data, 0);
        if ( this )
        {
          v10 = this;
          this = (BattlePerformanceCommandCard_o *)BattleCommandData__IsCommandCardTypeChanged(data, 0);
          m_CachedPtr_high = HIDWORD(v10->fields.m_CachedPtr);
          firstaura_b_high = HIDWORD(v10->fields.firstaura_b);
          v12 = m_CachedPtr_high + 1 >= 0 ? m_CachedPtr_high + 1 : m_CachedPtr_high + 2;
          v9 = v12 >> 1;
        }
        else
        {
          firstaura_b_high = 0;
          v9 = 0;
        }
      }
      else
      {
        firstaura_b_high = 0;
        v9 = 0;
        this = 0;
      }
      v13 = v3->fields.commandCompArray;
      if ( v13 )
      {
        if ( v4 >= LODWORD(v13->max_length) )
LABEL_21:
          sub_2213CE4(this);
        v14 = v13->m_Items[v4];
        if ( v14 )
        {
          ++v4;
          BattleCommandComponent__SetCommandCardTypeChange(v14, (unsigned __int8)this & 1, v9, firstaura_b_high, 0);
          commandCompArray = v3->fields.commandCompArray;
          if ( commandCompArray )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__SetCommandPhaseButtonActive(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *highSpeedButton; // x0
  const MethodInfo *v6; // x2

  highSpeedButton = this->fields.highSpeedButton;
  if ( !highSpeedButton
    || (UnityEngine_GameObject__SetActive(highSpeedButton, active, 0),
        (highSpeedButton = (UnityEngine_GameObject_o *)this->fields.backTacticalButton) == 0)
    || (highSpeedButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)highSpeedButton, 0)) == 0 )
  {
    sub_2213CDC(highSpeedButton, active);
  }
  UnityEngine_GameObject__SetActive(highSpeedButton, active, 0);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, active, v6);
}


void BattlePerformanceCommandCard__SetDownloadEventSprite(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v4; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v6; // x20

  v2 = this;
  if ( (byte_5972A29 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972A29 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_2213CDC(this, method);
  v4 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(commandCompArray->max_length);
    if ( (__int64)v4 >= (int)max_length_low )
      break;
    if ( v4 >= max_length_low )
      sub_2213CE4(this);
    v6 = (UnityEngine_Object_o *)commandCompArray->m_Items[v4];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_13;
      BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)v6, 0);
    }
    commandCompArray = v2->fields.commandCompArray;
    ++v4;
    if ( !commandCompArray )
      goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__SetLabelActive(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v6; // x23
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v8; // x21

  v4 = this;
  if ( (byte_5972A27 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972A27 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( commandCompArray )
  {
    v6 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(commandCompArray->max_length);
      if ( (__int64)v6 >= (int)max_length_low )
        break;
      if ( v6 >= max_length_low )
        sub_2213CE4(this);
      v8 = (UnityEngine_Object_o *)commandCompArray->m_Items[v6];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_13;
        BattleCommandComponent__SetLabelActive((BattleCommandComponent_o *)v8, active, 0);
        BattleCommandComponent__SetLabelAssistActive((BattleCommandComponent_o *)v8, active, 0);
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( !commandCompArray )
LABEL_13:
        sub_2213CDC(this, active);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__SetSelectStamp(
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
  float v14; // s11
  float v15; // s12
  float v16; // s13
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
  if ( (byte_59729E7 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___);
    byte_59729E7 = 1;
  }
  spawner = v10->fields.spawner;
  selectCommandPrefab = (UnityEngine_Object_o *)v10->fields.selectCommandPrefab;
  if ( !byte_5969AE0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v14 = static_fields->zeroVector.fields.x;
  v15 = static_fields->zeroVector.fields.y;
  v16 = static_fields->zeroVector.fields.z;
  if ( !byte_5969AE6 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !spawner )
    goto LABEL_16;
  v21.fields.x = v14;
  v21.fields.y = v15;
  v21.fields.z = v16;
  v17 = Spawner__Spawn_47687764(
          spawner,
          selectCommandPrefab,
          v21,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0);
  commandrootTransform = (UnityEngine_Component_o *)v10->fields.commandrootTransform;
  v19 = v17;
  GameObjectExtensions__SetParent(v17, commandrootTransform, 0);
  if ( !v19 )
    goto LABEL_16;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(v19, 0);
  v20 = this;
  if ( !byte_5969AE5 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v20,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v19,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___)) == 0)
    || (BattleSelectCommandComponent__setIndex((BattleSelectCommandComponent_o *)this, targetindex, 0), !bc)
    || (BattleCommandComponent__setSelectStamp(bc, v19, 0),
        (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(v19, 0)) == 0) )
  {
LABEL_16:
    sub_2213CDC(this, *(_QWORD *)&targetindex);
  }
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v22, 0);
  UnityEngine_GameObject__SetActive(v19, 0, 0);
  UnityEngine_GameObject__SetActive(v19, 1, 0);
}


void BattlePerformanceCommandCard__SetSpecialCommandCardBuff(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattlePerformanceCommandCard__updateCardFix(this, method);
  BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(this, v3);
}


void BattlePerformanceCommandCard__SetStatusObjArray(
        BattlePerformanceCommandCard_o *this,
        BattleServantParamComponent_array *statusObjArray,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.servantStatusObjArray = statusObjArray;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantStatusObjArray,
    (int32_t)statusObjArray,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePerformanceCommandCard__SetupCommandCardCommonPrefabs(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v6; // x1
  AssetData_o *v7; // x20
  Il2CppObject *Object_object__58532980; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Il2CppObject *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppObject *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_5972A2A & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&StringLiteral_17906/*"bit_1stbonus_q"*/);
    sub_2213A60(&StringLiteral_17905/*"bit_1stbonus_b"*/);
    sub_2213A60(&StringLiteral_17926/*"bit_com_grand_m"*/);
    sub_2213A60(&StringLiteral_17927/*"bit_com_trinity_m"*/);
    sub_2213A60(&StringLiteral_17904/*"bit_1stbonus_a"*/);
    byte_5972A2A = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
  if ( !AssetStorage )
    goto LABEL_12;
  v7 = AssetStorage;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              AssetStorage,
                              (System_String_o *)StringLiteral_17926/*"bit_com_grand_m"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  this->fields.cutin_grand_m = (struct UnityEngine_GameObject_o *)Object_object__58532980;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cutin_grand_m,
    (int32_t)Object_object__58532980,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_17927/*"bit_com_trinity_m"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  this->fields.cutin_trinity_m = (struct UnityEngine_GameObject_o *)v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cutin_trinity_m,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_17906/*"bit_1stbonus_q"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  this->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.firstbonus_q,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_17904/*"bit_1stbonus_a"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  this->fields.firstbonus_a = (struct UnityEngine_GameObject_o *)v29;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.firstbonus_a,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = AssetData__GetObject_object__58532980(
          v7,
          (System_String_o *)StringLiteral_17905/*"bit_1stbonus_b"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  this->fields.firstbonus_b = (struct UnityEngine_GameObject_o *)v36;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.firstbonus_b,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  AssetStorage = (AssetData_o *)this->fields.spawner;
  if ( !AssetStorage
    || (Spawner__Precache_47685880((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_q, 1, 0),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0)
    || (Spawner__Precache_47685880((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_a, 1, 0),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0) )
  {
LABEL_12:
    sub_2213CDC(AssetStorage, v6);
  }
  Spawner__Precache_47685880((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_b, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__StartCountupCommandStar(
        BattlePerformanceCommandCard_o *this,
        bool isZeroStart,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  unsigned int v6; // w22
  unsigned int max_length; // w9
  Il2CppClass **v8; // x8
  BattleCommandComponent_o *v9; // x21

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_12:
    sub_2213CDC(this, isZeroStart);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      sub_2213CE4(this);
    v8 = &commandCompArray->obj.klass + (int)v6;
    v9 = (BattleCommandComponent_o *)v8[4];
    if ( v9 )
    {
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__IsMaxViewCritical(
                                                 (BattleCommandComponent_o *)v8[4],
                                                 0);
      if ( ((unsigned __int8)this & 1) == 0 && v9->fields.data )
      {
        if ( isZeroStart )
          BattleCommandComponent__startCountUp(v9, 0);
        else
          BattleCommandComponent__updateCount(v9, 0, 0);
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_12;
  }
}


bool BattlePerformanceCommandCard__TryOpenPlayerAttackPreselectTargetWindow(
        BattlePerformanceCommandCard_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Bdata; // x20
  __int64 v6; // x1
  BattleData_o *perf; // x0
  BattleData_PlayerAttackPreselectTargetData_o *FirstUnresolvedPlayerAttackPreselectTargetData; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  BattleData_PlayerAttackPreselectTargetData_o *v15; // x20
  struct BattlePlayerAttackPreselectTargetWindow_o *PlayerAttackPreselectTargetWindow; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  BattlePlayerAttackPreselectTargetWindow_o *v31; // x21
  BattleServantData_array *FieldPlayerServantList; // x23
  int32_t sourceSkillLv; // w20
  int32_t sourceSkillId; // w22
  BattleSelectServantWindow_SelectServantCallBack_o *v35; // x24

  if ( (byte_59729DB & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_SelectedPlayerAttackPreselectTarget__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_59729DB = 1;
  }
  Bdata = (UnityEngine_Object_o *)this->fields.Bdata;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endCallback);
  if ( UnityEngine_Object__op_Equality(Bdata, 0, 0) )
    goto LABEL_18;
  perf = this->fields.Bdata;
  if ( !perf )
    goto LABEL_23;
  if ( !BattleData__HasUnresolvedPlayerAttackPreselectTargetData(perf, 0) )
  {
LABEL_18:
    LOBYTE(FirstUnresolvedPlayerAttackPreselectTargetData) = 0;
    return (char)FirstUnresolvedPlayerAttackPreselectTargetData;
  }
  perf = this->fields.Bdata;
  if ( !perf )
    goto LABEL_23;
  FirstUnresolvedPlayerAttackPreselectTargetData = BattleData__GetFirstUnresolvedPlayerAttackPreselectTargetData(
                                                     perf,
                                                     0);
  if ( !FirstUnresolvedPlayerAttackPreselectTargetData )
    return (char)FirstUnresolvedPlayerAttackPreselectTargetData;
  v15 = FirstUnresolvedPlayerAttackPreselectTargetData;
  this->fields.playerAttackPreselectTargetEndCallback = endCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playerAttackPreselectTargetEndCallback,
    (int32_t)endCallback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  perf = (BattleData_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_23;
  perf = (BattleData_o *)BattlePerformance__getSelectMainSubSvtWindow((BattlePerformance_o *)perf, 0);
  if ( !perf )
    goto LABEL_23;
  ((void (__fastcall *)(BattleData_o *, _QWORD))perf->klass[1]._1.this_arg.data)(
    perf,
    *(_QWORD *)&perf->klass[1]._1.this_arg.bits);
  perf = (BattleData_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_23;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)perf, 0);
  perf = (BattleData_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_23;
  PlayerAttackPreselectTargetWindow = BattlePerformance__getPlayerAttackPreselectTargetWindow(
                                        (BattlePerformance_o *)perf,
                                        0);
  this->fields.playerAttackPreselectTargetWindow = PlayerAttackPreselectTargetWindow;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playerAttackPreselectTargetWindow,
    (int32_t)PlayerAttackPreselectTargetWindow,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = (UnityEngine_Object_o *)this->fields.playerAttackPreselectTargetWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Equality(v24, 0, 0) )
  {
    this->fields.playerAttackPreselectTargetEndCallback = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.playerAttackPreselectTargetEndCallback,
      0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    goto LABEL_18;
  }
  perf = this->fields.Bdata;
  if ( !perf
    || (v31 = this->fields.playerAttackPreselectTargetWindow,
        FieldPlayerServantList = BattleData__getFieldPlayerServantList(perf, 0),
        sourceSkillId = v15->fields.sourceSkillId,
        sourceSkillLv = v15->fields.sourceSkillLv,
        v35 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_2213CCC(BattleSelectServantWindow_SelectServantCallBack_TypeInfo),
        BattleSelectServantWindow_SelectServantCallBack___ctor(
          v35,
          (Il2CppObject *)this,
          Method_BattlePerformanceCommandCard_SelectedPlayerAttackPreselectTarget__,
          0),
        !v31) )
  {
LABEL_23:
    sub_2213CDC(perf, v6);
  }
  BattlePlayerAttackPreselectTargetWindow__Open(v31, FieldPlayerServantList, sourceSkillId, sourceSkillLv, v35, 0);
  LOBYTE(FirstUnresolvedPlayerAttackPreselectTargetData) = 1;
  return (char)FirstUnresolvedPlayerAttackPreselectTargetData;
}


void BattlePerformanceCommandCard__Update(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
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

  firstBonusAnimationWaitTime = this->fields.firstBonusAnimationWaitTime;
  v4 = __OFSUB__(firstBonusAnimationWaitTime, 1);
  v5 = firstBonusAnimationWaitTime - 1;
  memset(&v17, 0, sizeof(v17));
  memset(&dest, 0, sizeof(dest));
  if ( v5 < 0 == v4 )
  {
    this->fields.firstBonusAnimationWaitTime = v5;
    v6 = !v5 && this->fields.drawcount == 1 && this->fields.isTouchCanceled;
    touches = (UnityEngine_Animation_o *)UnityEngine_Input__get_touches(0);
    if ( !touches )
      goto LABEL_29;
    klass = touches[1].klass;
    v10 = touches;
    if ( (int)klass >= 1 )
    {
      v11 = 0;
      p_monitor = &touches[1].monitor;
      while ( v11 < (unsigned int)klass )
      {
        memmove(&dest, p_monitor, 0x44u);
        touches = (UnityEngine_Animation_o *)UnityEngine_Touch__get_phase(&dest, 0);
        if ( !(_DWORD)touches && this->fields.isTouchCanceled )
          v6 |= this->fields.drawcount == 1;
        LODWORD(klass) = v10[1].klass;
        ++v11;
        p_monitor = (void **)((char *)p_monitor + 68);
        if ( (__int64)v11 >= (int)klass )
          goto LABEL_14;
      }
LABEL_28:
      sub_2213CE4(touches);
    }
LABEL_14:
    if ( (v6 & 1) != 0 )
    {
      touches = this->fields.firstBonusAnimation;
      if ( touches )
      {
        UnityEngine_Animation__Stop(touches, 0);
        touches = this->fields.firstBonusAnimation;
        if ( touches )
        {
          UnityEngine_Animation__Play(touches, 0);
          this->fields.isTouchCanceled = 0;
          goto LABEL_18;
        }
      }
LABEL_29:
      sub_2213CDC(touches, v8);
    }
  }
LABEL_18:
  touches = (UnityEngine_Animation_o *)UnityEngine_Input__get_touches(0);
  if ( !touches )
    goto LABEL_29;
  v13 = touches[1].klass;
  v14 = touches;
  if ( (int)v13 >= 1 )
  {
    v15 = 0;
    v16 = &touches[1].monitor;
    while ( v15 < (unsigned int)v13 )
    {
      memmove(&v17, v16, 0x44u);
      if ( !UnityEngine_Touch__get_phase(&v17, 0) )
      {
        *(_WORD *)&this->fields.isTouchBegan = 1;
        this->fields.isTouchCanceled = 0;
      }
      touches = (UnityEngine_Animation_o *)UnityEngine_Touch__get_phase(&v17, 0);
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


void BattlePerformanceCommandCard__UpdateCommandCriticalCount(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  unsigned int v4; // w20
  unsigned int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_9:
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= (int)max_length )
      break;
    if ( v4 >= max_length )
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      if ( this->fields.logic )
      {
        BattleCommandComponent__updateCount((BattleCommandComponent_o *)this, 0, 0);
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
void BattlePerformanceCommandCard__UpdateRemainingCardBuff(
        BattlePerformanceCommandCard_o *this,
        int32_t nowCardIndex,
        const MethodInfo *method)
{
  __int64 v3; // x20
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *selectedcomponents; // x8
  il2cpp_array_size_t max_length; // x8
  __int64 v7; // x23
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  struct BattleCommandComponent_array *v10; // x8

  LODWORD(v3) = nowCardIndex;
  v4 = this;
  if ( (byte_5972A28 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_BattleCommandComponent___);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972A28 = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_15:
    sub_2213CDC(this, *(_QWORD *)&nowCardIndex);
  max_length = selectedcomponents->max_length;
  if ( (int)max_length > (int)v3 )
  {
    v3 = (int)v3;
    v7 = (int)max_length;
    do
    {
      v9 = BasicHelper__IndexValue_object_(
             (System_Object_array *)v4->fields.selectedcomponents,
             v3,
             0,
             (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_BattleCommandComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v10 = v4->fields.selectedcomponents;
        if ( !v10 )
          goto LABEL_15;
        if ( (unsigned int)v3 >= LODWORD(v10->max_length) )
          sub_2213CE4(this);
        this = (BattlePerformanceCommandCard_o *)v10->m_Items[v3];
        if ( !this )
          goto LABEL_15;
        BattleCommandComponent__setBuffIconList((BattleCommandComponent_o *)this, 1, 0);
      }
      ++v3;
    }
    while ( v7 != v3 );
  }
}


void BattlePerformanceCommandCard__UpdateSpecialCommandCardBuffIcon(
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
  if ( commandCompArray && commandCompArray->max_length )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    v7 = this->fields.commandCompArray;
    if ( !v7 )
LABEL_9:
      sub_2213CDC(v4, v5);
    v8 = deltaTime;
    v9 = 0;
    while ( 1 )
    {
      max_length = v7->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
        sub_2213CE4(v4);
      v4 = v7->m_Items[v9];
      if ( v4 )
      {
        BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(v4, v8, 0);
        v7 = this->fields.commandCompArray;
        ++v9;
        if ( v7 )
          continue;
      }
      goto LABEL_9;
    }
  }
}


void BattlePerformanceCommandCard___selectOK_b__117_0(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_5972A2F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12024/*"SELECT"*/);
    byte_5972A2F = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_12024/*"SELECT"*/, 0);
}


void BattlePerformanceCommandCard__back2Tactical(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleCommandComponent_array *commandCompArray; // x21
  int max_length; // w8
  unsigned int v6; // w22
  Il2CppClass **v7; // x8
  BattleCommandComponent_o *v8; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  v2 = this;
  if ( (byte_5972A19 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3639/*"CLOSE"*/);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&StringLiteral_17494/*"anim_wait"*/);
    byte_5972A19 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_23;
  this = (BattlePerformanceCommandCard_o *)perf->fields.data;
  if ( !this )
    goto LABEL_23;
  BattleData__ResetPlayerAttackPreselectTargetSelection((BattleData_o *)this, 0);
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_23;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_2213CE4(this);
      v7 = &commandCompArray->obj.klass + (int)v6;
      v8 = (BattleCommandComponent_o *)v7[4];
      if ( !v8 )
        break;
      MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)v7[4], 0);
      if ( (MarkIndex & 0x80000000) == 0 && v8->fields.selectflg )
        BattlePerformanceCommandCard__unselectCommandCard(v2, v8, MarkIndex, v10);
      if ( BattleCommandComponent__isTreasureDvc(v8, 0) )
      {
        BattleCommandComponent__stopAnimation(v8, 0);
        BattleCommandComponent__ReleaseNobleGaugeEffect(v8, 0);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkCriticalPointValid(v8, 0);
      if ( ((unsigned __int8)this & 1) != 0 && !v2->fields.isPrevStar )
        v2->fields.isPrevStar = 1;
      max_length = commandCompArray->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_20;
    }
LABEL_23:
    sub_2213CDC(this, method);
  }
LABEL_20:
  UnityEngine_MonoBehaviour__StopCoroutine_83445360((UnityEngine_MonoBehaviour_o *)v2, v2->fields.openNpCoroutine, 0);
  BattlePerformanceCommandCard__cancelFirstBonus(v2, v11);
  this = (BattlePerformanceCommandCard_o *)v2->fields.perf;
  if ( !this )
    goto LABEL_23;
  BattlePerformance__backTacticalMode((BattlePerformance_o *)this, 0);
  BattlePerformanceCommandCard__playAnimation(v2, (System_String_o *)StringLiteral_17494/*"anim_wait"*/, v12);
  this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm;
  if ( !this )
    goto LABEL_23;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3639/*"CLOSE"*/, 0);
}


void BattlePerformanceCommandCard__callbackCommandTutorial01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector2_array *Instance; // x0
  __int64 v4; // x1
  unsigned int max_length; // w8
  UnityEngine_Vector2_array *v6; // x20
  UnityEngine_Rect_o v7; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_5972A21 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5972A21 = 1;
  }
  Instance = (UnityEngine_Vector2_array *)sub_2213B20(UnityEngine_Vector2___TypeInfo, 3);
  if ( !Instance )
    goto LABEL_11;
  max_length = Instance->max_length;
  v6 = Instance;
  if ( !max_length
    || (Instance->m_Items[0] = 0, max_length == 1)
    || (Instance->m_Items[1] = (UnityEngine_Vector2_o)3276275712LL, max_length <= 2) )
  {
    sub_2213CE4(Instance);
  }
  Instance->m_Items[2] = (UnityEngine_Vector2_o)3284664320LL;
  Instance = (UnityEngine_Vector2_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (v7.fields.m_XMin = -500.0,
        v7.fields.m_YMin = -230.0,
        v7.fields.m_Width = 600.0,
        v7.fields.m_Height = 250.0,
        CommonUI__OpenTutorialArrowMark_37397088((CommonUI_o *)Instance, v6, 0.0, v7, 0, 0),
        (Instance = (UnityEngine_Vector2_array *)this->fields.commandfsm) == 0) )
  {
LABEL_11:
    sub_2213CDC(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceCommandCard__callbackTutorial50(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_5972A22 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5972A22 = 1;
  }
  commandfsm = this->fields.commandfsm;
  this->fields.isTouchNgInTutorial = 0;
  if ( !commandfsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceCommandCard__callbackTutorialSpeedNext(
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

  if ( (byte_5972A24 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972A24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                           (BattlePerformanceCommandCard_o *)Instance,
                                           this->fields.TutorialArrow01,
                                           v4);
  TutorialSquare01 = this->fields.TutorialSquare01;
  v7 = (UnityEngine_Vector2_array *)v5;
  v9 = BattlePerformanceCommandCard__FSTutorialSquareCard(v5, TutorialSquare01, v8);
  if ( !Instance )
    sub_2213CDC(v9, v10);
  v11.fields.x = 0.0;
  v11.fields.y = 0.0;
  CommonUI__OpenTutorialNotificationDialogArrow_37396164(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v7,
    v9,
    0.0,
    v11,
    -1,
    0,
    0);
}


void BattlePerformanceCommandCard__cancelFirstBonus(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *firstBonusObject; // x20
  Spawner_o *spawner; // x0
  __int64 v6; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v8; // x21
  int max_length; // w9
  Il2CppClass **v10; // x8
  BattleCommandComponent_o *v11; // x20

  if ( (byte_59729ED & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729ED = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  this->fields.firstAuraType = -1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(firstBonusObject, 0, 0);
  if ( ((unsigned __int8)spawner & 1) != 0 )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      goto LABEL_14;
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0);
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_14:
    sub_2213CDC(spawner, v6);
  v8 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_2213CE4(spawner);
    v10 = &commandCompArray->obj.klass + v8;
    v11 = (BattleCommandComponent_o *)v10[4];
    if ( v11 )
    {
      BattleCommandComponent__stopFirstAura((BattleCommandComponent_o *)v10[4], 0);
      BattleCommandComponent__ResetBoostedCriticalRate(v11, 0);
      commandCompArray = this->fields.commandCompArray;
      ++v8;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__changeDirectCommandCardTouch(
        BattlePerformanceCommandCard_o *this,
        bool enable,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v6; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v8; // x25
  UnityEngine_Object_o *v9; // x21
  struct BattleCommandComponent_array *v10; // x8
  UnityEngine_Object_o *v11; // x21

  v4 = this;
  if ( (byte_5972A26 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972A26 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( commandCompArray )
  {
    v6 = 4;
    while ( 1 )
    {
      max_length_low = LODWORD(commandCompArray->max_length);
      v8 = v6 - 4;
      if ( v6 - 4 >= (int)max_length_low )
        break;
      if ( v8 >= max_length_low )
        goto LABEL_21;
      v9 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + v6);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v10 = v4->fields.commandCompArray;
        if ( !v10 )
          goto LABEL_18;
        if ( v8 >= LODWORD(v10->max_length) )
LABEL_21:
          sub_2213CE4(this);
        v11 = (UnityEngine_Object_o *)*((_QWORD *)&v10->obj.klass + v6);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_18;
          BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)v11, enable, 0);
        }
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( !commandCompArray )
LABEL_18:
        sub_2213CDC(this, enable);
    }
    v4->fields.directCommandCardTouchEnable = enable;
  }
}


void BattlePerformanceCommandCard__changeNoSelectCards(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *openNpCoroutine; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned int v5; // w21
  unsigned int max_length; // w9
  Il2CppClass **v7; // x8
  BattleCommandComponent_o *v8; // x20
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  openNpCoroutine = this->fields.openNpCoroutine;
  if ( openNpCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_83445360((UnityEngine_MonoBehaviour_o *)this, openNpCoroutine, 0);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_2213CDC(this, openNpCoroutine);
  v5 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= (int)(max_length - 1) )
      break;
    if ( v5 >= max_length )
      goto LABEL_15;
    v7 = &commandCompArray->obj.klass + (int)v5;
    v8 = (BattleCommandComponent_o *)v7[4];
    if ( v8 )
    {
      BattleCommandComponent__stopAnimation((BattleCommandComponent_o *)v7[4], 0);
      if ( !v8->fields.selectflg )
      {
        p_commandlist = this->fields.p_commandlist;
        if ( !p_commandlist )
          goto LABEL_13;
        if ( v5 >= LODWORD(p_commandlist->max_length) )
LABEL_15:
          sub_2213CE4(this);
        v10.fields.r = 0.0;
        v10.fields.g = 0.0;
        v10.fields.b = 0.0;
        v10.fields.a = 0.0;
        TweenColor__Begin(p_commandlist->m_Items[v5], 0.2, v10, 0);
        BattleCommandComponent__stopFirstAura(v8, 0);
        BattleCommandComponent__HideAndCancelCountUpFinishEffect(v8, 0);
        BattleCommandComponent__ClearCardEffect(v8, 0);
      }
      commandCompArray = this->fields.commandCompArray;
      ++v5;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
}


void BattlePerformanceCommandCard__checkAutoBattle(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_5972A16 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9652/*"NG"*/);
    byte_5972A16 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_9652/*"NG"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__checkChainBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v3; // x19
  char v4; // w21
  int v5; // w24
  __int64 i; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_Object_o *v8; // x20
  struct BattleCommandComponent_array *v9; // x8
  UnityEngine_Object_o *chainBonusObject; // x20
  int v11; // w8
  UnityEngine_GameObject_o *chainBonus; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  v3 = this;
  if ( (byte_59729EF & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729EF = 1;
  }
  v4 = 0;
  v5 = 0;
  for ( i = 4; i != 7; ++i )
  {
    selectedcomponents = v3->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_27;
    if ( i - 4 >= (unsigned __int64)LODWORD(selectedcomponents->max_length) )
      goto LABEL_28;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&selectedcomponents->obj.klass + i);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetIndex);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_14;
    v9 = v3->fields.selectedcomponents;
    if ( !v9 )
      goto LABEL_27;
    if ( i - 4 >= (unsigned __int64)LODWORD(v9->max_length) )
LABEL_28:
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v9->obj.klass + i);
    if ( !this )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc((BattleCommandComponent_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      v4 |= ++v5 > 1;
    else
LABEL_14:
      v5 = 0;
  }
  chainBonusObject = (UnityEngine_Object_o *)v3->fields.chainBonusObject;
  v11 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( (v4 & 1) == 0 )
  {
    if ( !v11 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetIndex);
    UnityEngine_Object__Destroy_83459800(chainBonusObject, 0);
    Object = 0;
LABEL_25:
    v3->fields.chainBonusObject = Object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v3->fields.chainBonusObject,
      (int32_t)Object,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    return;
  }
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetIndex);
  if ( UnityEngine_Object__op_Equality(chainBonusObject, 0, 0) )
  {
    chainBonus = v3->fields.chainBonus;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
    if ( !this )
LABEL_27:
      sub_2213CDC(this, *(_QWORD *)&targetIndex);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v3, chainBonus, transform, 0, 0);
    goto LABEL_25;
  }
}


void BattlePerformanceCommandCard__checkDrawCount(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_59729F1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12035/*"SELECT_EXE"*/);
    byte_59729F1 = 1;
  }
  if ( this->fields.maxdrawcount <= this->fields.drawcount )
  {
    commandfsm = this->fields.commandfsm;
    if ( !commandfsm )
      sub_2213CDC(0, method);
    PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_12035/*"SELECT_EXE"*/, 0);
  }
}


void BattlePerformanceCommandCard__checkMaskEnemy(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  unsigned __int64 v3; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *maskSprite; // x20
  int32_t v7; // w1
  UnityEngine_Object_o *v8; // x20

  v2 = this;
  if ( (byte_59729F0 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729F0 = 1;
  }
  v3 = 0;
  while ( 1 )
  {
    selectedcomponents = v2->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_22;
    if ( v3 >= LODWORD(selectedcomponents->max_length) )
      sub_2213CE4(this);
    v5 = (UnityEngine_Object_o *)selectedcomponents->m_Items[v3];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( ++v3 == 3 )
    {
      maskSprite = (UnityEngine_Object_o *)v2->fields.maskSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
      {
        this = (BattlePerformanceCommandCard_o *)v2->fields.maskSprite;
        if ( this )
        {
          v7 = -31;
          goto LABEL_20;
        }
LABEL_22:
        sub_2213CDC(this, method);
      }
      return;
    }
  }
  v8 = (UnityEngine_Object_o *)v2->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
  {
    this = (BattlePerformanceCommandCard_o *)v2->fields.maskSprite;
    if ( !this )
      goto LABEL_22;
    v7 = 0;
LABEL_20:
    UIWidget__set_depth((UIWidget_o *)this, v7, 0);
  }
}


bool BattlePerformanceCommandCard__checkPrevStars(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  return this->fields.isPrevStar;
}


bool BattlePerformanceCommandCard__checkSpeedButtonTutorial(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleData_o *Bdata; // x0
  struct BattleData_o *v4; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_5972A23 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5972A23 = 1;
  }
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_19;
  if ( !BattleData__isTutorial(Bdata, 0) )
    return 0;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  if ( BattleLogic__getTutorialId((BattleLogic_o *)Bdata, 0) != 2 )
    goto LABEL_13;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  Bdata = (BattleData_o *)BattleLogic__getTurn((BattleLogic_o *)Bdata, 0);
  if ( (_DWORD)Bdata != 2 )
    goto LABEL_13;
  v4 = this->fields.Bdata;
  if ( !v4 )
    goto LABEL_19;
  if ( v4->fields.tutorialState != 10 )
    return 1;
  v4->fields.tutorialState = 20;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__, 0);
  if ( !Instance )
LABEL_19:
    sub_2213CDC(Bdata, method);
  CommonUI__CloseTutorialNotificationDialogArrow_37396472((CommonUI_o *)Instance, v6, 0);
LABEL_13:
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  if ( BattleLogic__getTutorialId((BattleLogic_o *)Bdata, 0) != 2 )
    return 0;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  return BattleLogic__getTurn((BattleLogic_o *)Bdata, 0) > 2;
}


void BattlePerformanceCommandCard__checkTutorial(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  int v4; // w20
  int v5; // w21
  int32_t Turn; // w0
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  BattlePerformanceCommandCard_o *v10; // x21
  const MethodInfo *v11; // x2
  BattlePerformanceCommandCard_o *v12; // x22
  const MethodInfo *v13; // x2
  struct BattleLogic_TutorialStringData_array *v14; // x8
  BattleLogic_TutorialStringData_o *v15; // x8
  const MethodInfo *v16; // x2
  struct BattlePerformance_o *perf; // x8
  __int64 v18; // x1
  Il2CppObject *v19; // x20
  System_String_o *v20; // x21
  const MethodInfo *v21; // x1
  UnityEngine_Vector2_o FSTutorialArrow22; // kr00_8
  const MethodInfo *v23; // x1
  struct BattleLogic_TutorialStringData_array *v24; // x8
  BattleLogic_TutorialStringData_o *v25; // x8
  float m_Width; // s16
  float m_Height; // s7
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  struct BattleLogic_TutorialStringData_array *TSD; // x8
  const MethodInfo *v32; // x2
  struct BattlePerformance_o *v33; // x8
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  struct BattleLogic_TutorialStringData_array *v37; // x8
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  struct BattleLogic_TutorialStringData_array *v41; // x8
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  struct BattleLogic_TutorialStringData_array *v45; // x8
  __int64 v46; // x1
  Il2CppObject *v47; // x20
  System_String_o *v48; // x21
  System_Action_o *v49; // x22
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  struct BattleLogic_TutorialStringData_array *v53; // x8
  UnityEngine_Rect_o FSTutorialSquare22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v55; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_5972A20 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceCommandCard_callbackTutorial50__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_14127/*"TUTORIAL_MESSAGE_BATTLE_131"*/);
    sub_2213A60(&StringLiteral_14123/*"TUTORIAL_MESSAGE_BATTLE_111"*/);
    sub_2213A60(&StringLiteral_14131/*"TUTORIAL_MESSAGE_BATTLE_153"*/);
    sub_2213A60(&StringLiteral_14129/*"TUTORIAL_MESSAGE_BATTLE_141"*/);
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    sub_2213A60(&StringLiteral_14136/*"TUTORIAL_MESSAGE_BATTLE_230"*/);
    sub_2213A60(&StringLiteral_14125/*"TUTORIAL_MESSAGE_BATTLE_122"*/);
    sub_2213A60(&StringLiteral_14138/*"TUTORIAL_MESSAGE_BATTLE_321"*/);
    sub_2213A60(&StringLiteral_14135/*"TUTORIAL_MESSAGE_BATTLE_223"*/);
    byte_5972A20 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_77;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0);
  if ( !this->fields.logic )
    goto LABEL_77;
  v4 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getWave(this->fields.logic, 0);
  if ( !this->fields.logic )
    goto LABEL_77;
  v5 = (int)logic;
  Turn = BattleLogic__getTurn(this->fields.logic, 0);
  if ( v4 == 3 )
  {
    if ( !v5 && Turn == 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
      v10 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14136/*"TUTORIAL_MESSAGE_BATTLE_230"*/, 0);
      v12 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                v10,
                                                this->fields.TutorialArrow31,
                                                v29);
      logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                 v12,
                                 this->fields.TutorialSquare01,
                                 v30);
      TSD = this->fields.TSD;
      if ( !TSD )
        goto LABEL_77;
      if ( LODWORD(TSD->max_length) <= 5 )
        goto LABEL_78;
      v15 = TSD->m_Items[5];
      if ( !v15 )
        goto LABEL_77;
      goto LABEL_73;
    }
    if ( v5 == 1 && Turn == 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
      v10 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14138/*"TUTORIAL_MESSAGE_BATTLE_321"*/, 0);
      v12 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                v10,
                                                this->fields.TutorialArrow31,
                                                v35);
      logic = (BattleLogic_o *)BattlePerformanceCommandCard__get_FSTutorialSquare32(this, v36);
      v37 = this->fields.TSD;
      if ( !v37 )
        goto LABEL_77;
      if ( LODWORD(v37->max_length) <= 6 )
        goto LABEL_78;
      v15 = v37->m_Items[6];
      if ( !v15 )
        goto LABEL_77;
      goto LABEL_73;
    }
LABEL_49:
    BattlePerformanceCommandCard__callbackCommandTutorial01(this, method);
    goto LABEL_75;
  }
  if ( v4 == 2 )
  {
    if ( Turn == 2 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v7);
      perf = this->fields.perf;
      if ( perf && perf->fields.data )
      {
        BattlePerformanceCommandCard__updateHighSpeedObject(this, (int32_t)method, v16);
        v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_14135/*"TUTORIAL_MESSAGE_BATTLE_223"*/, 0);
        FSTutorialArrow22 = BattlePerformanceCommandCard__get_FSTutorialArrow22(this, v21);
        FSTutorialSquare22 = BattlePerformanceCommandCard__get_FSTutorialSquare22(this, v23);
        v24 = this->fields.TSD;
        if ( v24 )
        {
          if ( LODWORD(v24->max_length) <= 4 )
            goto LABEL_78;
          v25 = v24->m_Items[4];
          if ( v25 && v19 )
          {
            m_Width = FSTutorialSquare22.fields.m_Width;
            m_Height = FSTutorialSquare22.fields.m_Height;
            v55.fields.m_XMin = FSTutorialSquare22.fields.m_XMin;
            v55.fields.m_YMin = FSTutorialSquare22.fields.m_YMin;
            v55.fields.m_Width = m_Width;
            v55.fields.m_Height = m_Height;
            CommonUI__OpenTutorialNotificationDialogArrow(
              (CommonUI_o *)v19,
              v20,
              FSTutorialArrow22,
              v55,
              v25->fields.way,
              v25->fields.pos,
              v25->fields.size,
              0,
              0);
            goto LABEL_75;
          }
        }
      }
      goto LABEL_77;
    }
    if ( Turn >= 3 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v7);
      v33 = this->fields.perf;
      if ( !v33 || !v33->fields.data )
        goto LABEL_77;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, (int32_t)method, v32);
    }
    goto LABEL_49;
  }
  if ( v4 != 1 )
    goto LABEL_75;
  if ( Turn <= 2 )
  {
    if ( Turn == 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
      v10 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14123/*"TUTORIAL_MESSAGE_BATTLE_111"*/, 0);
      v12 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                v10,
                                                this->fields.TutorialArrow01,
                                                v51);
      logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                 v12,
                                 this->fields.TutorialSquare01,
                                 v52);
      v53 = this->fields.TSD;
      if ( !v53 )
        goto LABEL_77;
      if ( !LODWORD(v53->max_length) )
        goto LABEL_78;
      v15 = v53->m_Items[0];
      if ( !v15 )
        goto LABEL_77;
    }
    else
    {
      if ( Turn != 2 )
        goto LABEL_75;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
      v10 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14125/*"TUTORIAL_MESSAGE_BATTLE_122"*/, 0);
      v12 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                v10,
                                                this->fields.TutorialArrow01,
                                                v39);
      logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                 v12,
                                 this->fields.TutorialSquare01,
                                 v40);
      v41 = this->fields.TSD;
      if ( !v41 )
        goto LABEL_77;
      if ( (v41->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_78;
      v15 = v41->m_Items[1];
      if ( !v15 )
        goto LABEL_77;
    }
  }
  else
  {
    if ( Turn != 3 )
    {
      if ( Turn == 4 )
      {
        v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_14129/*"TUTORIAL_MESSAGE_BATTLE_141"*/, 0);
        v49 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v49, (Il2CppObject *)this, Method_BattlePerformanceCommandCard_callbackTutorial50__, 0);
        if ( v47 )
        {
          CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)v47, v48, -1, v49, 0);
          goto LABEL_75;
        }
      }
      else
      {
        if ( Turn != 5 )
          goto LABEL_75;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
        v10 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14131/*"TUTORIAL_MESSAGE_BATTLE_153"*/, 0);
        v12 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                  v10,
                                                  this->fields.TutorialArrow05,
                                                  v11);
        logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                   v12,
                                   this->fields.TutorialSquare05,
                                   v13);
        v14 = this->fields.TSD;
        if ( v14 )
        {
          if ( (v14->max_length & 0xFFFFFFFC) != 0 )
          {
            v15 = v14->m_Items[3];
            if ( !v15 )
              goto LABEL_77;
            goto LABEL_73;
          }
LABEL_78:
          sub_2213CE4(logic);
        }
      }
LABEL_77:
      sub_2213CDC(logic, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
    v10 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14127/*"TUTORIAL_MESSAGE_BATTLE_131"*/, 0);
    v12 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              v10,
                                              this->fields.TutorialArrow01,
                                              v43);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(v12, this->fields.TutorialSquare01, v44);
    v45 = this->fields.TSD;
    if ( !v45 )
      goto LABEL_77;
    if ( LODWORD(v45->max_length) <= 2 )
      goto LABEL_78;
    v15 = v45->m_Items[2];
    if ( !v15 )
      goto LABEL_77;
  }
LABEL_73:
  if ( !Instance )
    goto LABEL_77;
  CommonUI__OpenTutorialNotificationDialogArrow_37396164(
    (CommonUI_o *)Instance,
    (System_String_o *)v10,
    (UnityEngine_Vector2_array *)v12,
    (UnityEngine_Rect_array *)logic,
    v15->fields.way,
    v15->fields.pos,
    v15->fields.size,
    0,
    0);
LABEL_75:
  logic = (BattleLogic_o *)this->fields.commandfsm;
  if ( !logic )
    goto LABEL_77;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceCommandCard__clickBackButton(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattlePerformance_o *perf; // x8

  v2 = this;
  if ( (byte_5972A18 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&StringLiteral_3668/*"CLOSE_WINDOW"*/);
    byte_5972A18 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_8;
  this = (BattlePerformanceCommandCard_o *)perf->fields.data;
  if ( !this )
    goto LABEL_8;
  if ( BattleData__isTutorialCard((BattleData_o *)this, 0) )
    return;
  this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm;
  if ( !this )
LABEL_8:
    sub_2213CDC(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3668/*"CLOSE_WINDOW"*/, 0);
}


void BattlePerformanceCommandCard__closeWindow(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__coStartFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_59729E8 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceCommandCard__coStartFirstBonus_d__124_TypeInfo);
    byte_59729E8 = 1;
  }
  v5 = sub_2213CCC(BattlePerformanceCommandCard__coStartFirstBonus_d__124_TypeInfo);
  BattlePerformanceCommandCard__coStartFirstBonus_d__124___ctor(
    (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  result = (System_Collections_IEnumerator_o *)v5;
  *(_DWORD *)(v5 + 40) = type;
  return result;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__colOpenNpCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5972A0B & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceCommandCard__colOpenNpCard_d__185_TypeInfo);
    byte_5972A0B = 1;
  }
  v3 = sub_2213CCC(BattlePerformanceCommandCard__colOpenNpCard_d__185_TypeInfo);
  BattlePerformanceCommandCard__colOpenNpCard_d__185___ctor(
    (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceCommandCard__comboExecute(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v5; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v10; // x22
  struct System_Int32_array *selectcommand; // x9
  struct BattleCommandData_array *commandlist; // x8
  __int64 v13; // x9
  struct BattlePerformance_o *v14; // x10
  BattleCommandData_o *v15; // x20
  BattleServantData_o *ServantData; // x21
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Int32_array *v24; // x9
  struct BattleCommandData_array *v25; // x8
  __int64 v26; // x9
  Il2CppClass **v27; // x9
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Int32_array *v38; // x8
  struct BattleCommandData_array *v39; // x9
  __int64 v40; // x8
  Il2CppClass **v41; // x9
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_Int32_array *v52; // x8
  struct BattleCommandData_array *v53; // x9
  __int64 v54; // x8
  Il2CppClass **v55; // x9
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  BattleData_o *Bdata; // x21
  struct BattlePerformance_o *v61; // x8
  struct BattleData_o *v62; // x10
  struct BattleActionLogManagerInterface_o *actionLogManager; // x21
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned int globaltargetId; // w22
  __int64 v66; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 v68; // x0
  struct BattlePerformance_o *v69; // x8
  struct BattleData_o *v70; // x8
  struct System_Int32_array *v71; // x9
  struct BattleActionLogManagerInterface_o *v72; // x21
  BattleActionLogManagerInterface_c *v73; // x8
  unsigned int v74; // w24
  unsigned int v75; // w22
  unsigned int v76; // w23
  __int64 v77; // x10
  BattleActionLogManagerInterface_c **v78; // x9
  __int64 v79; // x0
  struct BattleData_o *v80; // x8
  struct System_Int32_array *v81; // x8
  struct BattleCommandData_array *v82; // x9
  __int64 v83; // x8
  BattleCommandData_o *v84; // x22
  BattleCommandData_o *v85; // x21
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  struct BattleData_o *v92; // x8
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass **v96; // x0
  BattleData_o *v97; // x22
  struct BattlePerformance_o *v98; // x8
  unsigned __int64 i; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x8
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  struct BattlePerformance_o *v107; // x8
  struct BattleData_o *v108; // x8
  struct BattlePerformance_o *v109; // x8
  struct BattlePerformance_o *v110; // x8
  _QWORD *v111; // x0
  System_Reflection_MethodBase_o *v112; // x0

  if ( (byte_59729F2 & 1) == 0 )
  {
    sub_2213A60(&BattleActionLogManagerInterface_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceCommandCard_comboExecute__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleCommandData__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59729F2 = 1;
  }
  if ( this->fields.maxdrawcount > this->fields.drawcount )
    return;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_114;
  BattleLogic__SetTimeAccelerationCheckDelayReset(logic, 0, 0);
  logic = (BattleLogic_o *)this->fields.perf;
  if ( !logic )
    goto LABEL_114;
  BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)logic, 0);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_114;
  logic = (BattleLogic_o *)perf->fields.statusPerf;
  if ( !logic )
    goto LABEL_114;
  BattlePerformanceStatus__SetActiveTotalCriticalStar((BattlePerformanceStatus_o *)logic, 0, 0);
  v5 = this->fields.perf;
  if ( !v5 )
    goto LABEL_114;
  data = v5->fields.data;
  if ( !data )
    goto LABEL_114;
  logic = (BattleLogic_o *)this->fields.backTacticalButton;
  data->fields.isCalcCritical = 1;
  if ( !logic )
    goto LABEL_114;
  logic = (BattleLogic_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)logic, 0);
  if ( !logic )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 0, 0);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 0, v7);
  logic = (BattleLogic_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !logic )
    goto LABEL_114;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)logic, 0);
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  logic = (BattleLogic_o *)UnityEngine_Object__op_Inequality(firstBonusObject, 0, 0);
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    logic = (BattleLogic_o *)this->fields.spawner;
    if ( !logic )
      goto LABEL_114;
    Spawner__Despawn((Spawner_o *)logic, this->fields.firstBonusObject, 1, 0);
  }
  if ( this->fields.maxdrawcount >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      selectcommand = this->fields.selectcommand;
      if ( !selectcommand )
        break;
      if ( (unsigned int)v10 >= LODWORD(selectcommand->max_length) )
        goto LABEL_115;
      commandlist = this->fields.commandlist;
      if ( !commandlist )
        break;
      v13 = selectcommand->m_Items[v10];
      if ( (unsigned int)v13 >= LODWORD(commandlist->max_length) )
        goto LABEL_115;
      v14 = this->fields.perf;
      if ( !v14 )
        break;
      v15 = commandlist->m_Items[v13];
      if ( !v15 )
        break;
      logic = (BattleLogic_o *)v14->fields.data;
      if ( !logic )
        break;
      ServantData = BattleData__getServantData((BattleData_o *)logic, v15->fields.uniqueId, 0);
      logic = (BattleLogic_o *)BattleCommandData__isTreasureDvc(v15, 0);
      if ( ((unsigned __int8)logic & 1) != 0 )
      {
        if ( ServantData )
          BattleServantData__SetSelectedTreasureDevice(ServantData, 0);
      }
      else
      {
        BattleCommandData__SetSelectedType(v15, 0);
        if ( ServantData )
          BattleServantData__SetOverwriteSvtCardType(ServantData, v15, 0);
      }
      if ( (int)++v10 >= this->fields.maxdrawcount )
        goto LABEL_33;
    }
LABEL_114:
    sub_2213CDC(logic, method);
  }
LABEL_33:
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleCommandData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleCommandData___ctor__);
  v24 = this->fields.selectcommand;
  if ( !v24 )
    goto LABEL_114;
  if ( !LODWORD(v24->max_length) )
    goto LABEL_115;
  v25 = this->fields.commandlist;
  if ( !v25 )
    goto LABEL_114;
  v26 = v24->m_Items[0];
  if ( (unsigned int)v26 >= LODWORD(v25->max_length) )
    goto LABEL_115;
  if ( !v17 )
    goto LABEL_114;
  v27 = &v25->obj.klass + v26;
  items = v17->fields._items;
  method = (const MethodInfo *)v27[4];
  v29 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_114;
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)method,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v31[4] = (Il2CppClass *)method;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)method, v18, v19, v20, v21, v22, v23);
  }
  v38 = this->fields.selectcommand;
  if ( !v38 )
    goto LABEL_114;
  if ( (v38->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_115;
  v39 = this->fields.commandlist;
  if ( !v39 )
    goto LABEL_114;
  v40 = v38->m_Items[1];
  if ( (unsigned int)v40 >= LODWORD(v39->max_length) )
    goto LABEL_115;
  v41 = &v39->obj.klass + v40;
  v42 = v17->fields._items;
  method = (const MethodInfo *)v41[4];
  v43 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v17->fields._version;
  if ( !v42 )
    goto LABEL_114;
  v44 = v17->fields._size;
  if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)method,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v42->obj.klass + v44;
    v17->fields._size = v44 + 1;
    v45[4] = (Il2CppClass *)method;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), (int32_t)method, v32, v33, v34, v35, v36, v37);
  }
  v52 = this->fields.selectcommand;
  if ( !v52 )
    goto LABEL_114;
  if ( LODWORD(v52->max_length) <= 2 )
    goto LABEL_115;
  v53 = this->fields.commandlist;
  if ( !v53 )
    goto LABEL_114;
  v54 = v52->m_Items[2];
  if ( (unsigned int)v54 >= LODWORD(v53->max_length) )
    goto LABEL_115;
  v55 = &v53->obj.klass + v54;
  v56 = v17->fields._items;
  method = (const MethodInfo *)v55[4];
  v57 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v17->fields._version;
  if ( !v56 )
    goto LABEL_114;
  v58 = v17->fields._size;
  if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)method,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = &v56->obj.klass + v58;
    v17->fields._size = v58 + 1;
    v59[4] = (Il2CppClass *)method;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v59 + 4), (int32_t)method, v46, v47, v48, v49, v50, v51);
  }
  Bdata = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_object___ToArray(
                             v17,
                             (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !Bdata )
    goto LABEL_114;
  BattleData__setCommandData(Bdata, (BattleCommandData_array *)logic, 0);
  v61 = this->fields.perf;
  if ( !v61 )
    goto LABEL_114;
  v62 = v61->fields.data;
  if ( !v62 )
    goto LABEL_114;
  actionLogManager = v62->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_114;
  klass = actionLogManager->klass;
  globaltargetId = v62->fields.globaltargetId;
  v66 = *(unsigned __int16 *)&actionLogManager->klass->_2.rank;
  if ( *(_WORD *)&actionLogManager->klass->_2.rank )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v66;
      p_offset += 2;
      if ( !v66 )
        goto LABEL_66;
    }
    v68 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 7];
  }
  else
  {
LABEL_66:
    v68 = sub_224BC3C(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 7);
  }
  logic = (BattleLogic_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD))v68)(
                             actionLogManager,
                             globaltargetId,
                             *(_QWORD *)(v68 + 8));
  v69 = this->fields.perf;
  if ( !v69 )
    goto LABEL_114;
  v70 = v69->fields.data;
  if ( !v70 )
    goto LABEL_114;
  v71 = this->fields.selectcommand;
  if ( !v71 )
    goto LABEL_114;
  if ( LODWORD(v71->max_length) <= 2 )
    goto LABEL_115;
  v72 = v70->fields.actionLogManager;
  if ( !v72 )
    goto LABEL_114;
  v73 = v72->klass;
  v74 = v71->m_Items[2];
  v75 = v71->m_Items[0];
  v76 = v71->m_Items[1];
  v77 = *(unsigned __int16 *)&v72->klass->_2.rank;
  if ( *(_WORD *)&v72->klass->_2.rank )
  {
    v78 = (BattleActionLogManagerInterface_c **)&v73->_1.interfaceOffsets->offset;
    while ( *(v78 - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v77;
      v78 += 2;
      if ( !v77 )
        goto LABEL_77;
    }
    v79 = (__int64)&v73->vtable[*(_DWORD *)v78 + 8];
  }
  else
  {
LABEL_77:
    v79 = sub_224BC3C(v72, BattleActionLogManagerInterface_TypeInfo, 8);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD))v79)(
    v72,
    v75,
    v76,
    v74,
    *(_QWORD *)(v79 + 8));
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_114;
  BattleLogic__endSelectCommand(logic, 0);
  v80 = this->fields.Bdata;
  if ( !v80 )
    goto LABEL_114;
  logic = (BattleLogic_o *)v80->fields.combodata;
  if ( !logic )
    goto LABEL_114;
  logic = (BattleLogic_o *)BattleComboData__isExtraAttack((BattleComboData_o *)logic, 0);
  if ( ((unsigned __int8)logic & 1) == 0 )
    goto LABEL_100;
  v81 = this->fields.selectcommand;
  if ( !v81 )
    goto LABEL_114;
  if ( LODWORD(v81->max_length) <= 2 )
    goto LABEL_115;
  v82 = this->fields.commandlist;
  if ( !v82 )
    goto LABEL_114;
  v83 = v81->m_Items[2];
  if ( (unsigned int)v83 >= LODWORD(v82->max_length) )
LABEL_115:
    sub_2213CE4(logic);
  v84 = v82->m_Items[v83];
  v85 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_53637512(v85, v84, 0);
  if ( !v85 )
    goto LABEL_114;
  BattleCommandData__ResetServantCardIdsIndex(v85, 0);
  BattleCommandData__setTypeAddAttack(v85, 0);
  v92 = this->fields.Bdata;
  if ( !v92 )
    goto LABEL_114;
  method = (const MethodInfo *)v92->fields.combodata;
  if ( method )
    BattleCommandData__setCombo(v85, (BattleComboData_o *)method, 2, 0);
  v93 = v17->fields._items;
  v94 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v17->fields._version;
  if ( !v93 )
    goto LABEL_114;
  v95 = v17->fields._size;
  if ( (unsigned int)v95 >= LODWORD(v93->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v85,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
  }
  else
  {
    v96 = &v93->obj.klass + v95;
    v17->fields._size = v95 + 1;
    v96[4] = (Il2CppClass *)v85;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v96 + 4), (int32_t)v85, v86, v87, v88, v89, v90, v91);
  }
  v97 = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_object___ToArray(
                             v17,
                             (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !v97 )
    goto LABEL_114;
  BattleData__setCommandData(v97, (BattleCommandData_array *)logic, 0);
  v98 = this->fields.perf;
  if ( !v98 )
    goto LABEL_114;
  logic = (BattleLogic_o *)v98->fields.data;
  if ( !logic )
    goto LABEL_114;
  logic = (BattleLogic_o *)BattleData__getServantData((BattleData_o *)logic, v85->fields.uniqueId, 0);
  if ( logic )
    BattleServantData__SetOverwriteSvtCardType((BattleServantData_o *)logic, v85, 0);
LABEL_100:
  for ( i = 0; i != 3; ++i )
  {
    selectedcomponents = this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_114;
    if ( i >= LODWORD(selectedcomponents->max_length) )
      goto LABEL_115;
    logic = (BattleLogic_o *)selectedcomponents->m_Items[i];
    if ( !logic )
      goto LABEL_114;
    BattleCommandComponent__startComboCard((BattleCommandComponent_o *)logic, 0);
  }
  v107 = this->fields.perf;
  if ( !v107 )
    goto LABEL_114;
  v108 = v107->fields.data;
  if ( !v108 )
    goto LABEL_114;
  v108->fields.commandCriticalArray = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v108->fields.commandCriticalArray,
    0,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v109 = this->fields.perf;
  if ( !v109 )
    goto LABEL_114;
  logic = (BattleLogic_o *)v109->fields.data;
  if ( !logic )
    goto LABEL_114;
  BattleData__ResetAllCriticalInfo((BattleData_o *)logic, 0);
  v110 = this->fields.perf;
  if ( !v110 )
    goto LABEL_114;
  logic = (BattleLogic_o *)v110->fields.statusPerf;
  if ( !logic )
    goto LABEL_114;
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)logic, -1, 0, 0);
  v111 = Method_BattlePerformanceCommandCard_comboExecute__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_comboExecute__ + 83) & 2) != 0 )
    v111 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_comboExecute__);
  v112 = (System_Reflection_MethodBase_o *)sub_2213A44(v111, v111[4]);
  OverwriteAssetSoundName__PlayCommonSe(v112, 6, 0, 0);
}


void BattlePerformanceCommandCard__countupStarPoint(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__createCommandCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array **p_p_commandlist; // x20
  unsigned __int64 v5; // x23
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v7; // x21
  __int64 v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct UnityEngine_GameObject_array *v29; // x24
  unsigned int v30; // w29
  int32_t v31; // w21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  BattlePerformanceCommandCard_o *v38; // x1
  Il2CppClass **v39; // x0
  struct UnityEngine_GameObject_array *v40; // x8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct BattleCommandComponent_array *commandCompArray; // x25
  BattlePerformanceCommandCard_o *v48; // x24
  __int64 v49; // x1
  Il2CppClass **v50; // x0
  struct UnityEngine_GameObject_array *v51; // x8
  struct UnityEngine_Transform_array *commandTransformArray; // x27
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  BattlePerformanceCommandCard_o *v59; // x25
  Il2CppClass **v60; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct BattlePerformance_o *perf; // x1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  struct UnityEngine_Transform_array *v75; // x8
  struct UnityEngine_Transform_array *npcardTr; // x9
  unsigned int max_length; // w11
  unsigned int v78; // w10
  struct UnityEngine_Transform_array *v79; // x8
  struct UnityEngine_Transform_array *cardTr; // x9
  struct UnityEngine_Transform_array *v81; // x8
  UnityEngine_Transform_o *v82; // x25
  struct UnityEngine_Transform_array *v83; // x8
  UnityEngine_Transform_o *v84; // x25
  struct UnityEngine_Transform_array *v85; // x8
  UnityEngine_Transform_o *v86; // x25
  struct UnityEngine_Transform_array *v87; // x8
  UnityEngine_Transform_o *v88; // x25
  struct UnityEngine_GameObject_array *v89; // x8
  __int64 v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  struct UnityEngine_GameObject_array *v97; // x8
  struct BattleCommandComponent_array *selectedcomponents; // x20
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  BattlePerformanceCommandCard_o *v105; // x21
  __int64 v106; // x0
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  __int64 v113; // x0
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_59729D3 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent___TypeInfo);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Transform___TypeInfo);
    sub_2213A60(&StringLiteral_19723/*"ef_resistarrow"*/);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&StringLiteral_19741/*"ef_weakarrow"*/);
    byte_59729D3 = 1;
  }
  p_p_commandlist = &v2->fields.p_commandlist;
  p_commandlist = v2->fields.p_commandlist;
  if ( p_commandlist )
  {
    v5 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(p_commandlist->max_length);
      if ( (__int64)v5 >= (int)max_length_low )
        break;
      if ( v5 >= max_length_low )
        goto LABEL_83;
      v7 = (UnityEngine_Object_o *)p_commandlist->m_Items[v5];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__Destroy_83459800(v7, 0);
      p_commandlist = *p_p_commandlist;
      ++v5;
      if ( !*p_p_commandlist )
        goto LABEL_74;
    }
  }
  v8 = sub_2213B20(UnityEngine_GameObject___TypeInfo, 9);
  v2->fields.p_commandlist = (struct UnityEngine_GameObject_array *)v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.p_commandlist, v8, v9, v10, v11, v12, v13, v14);
  v15 = sub_2213B20(BattleCommandComponent___TypeInfo, 9);
  v2->fields.commandCompArray = (struct BattleCommandComponent_array *)v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.commandCompArray, v15, v16, v17, v18, v19, v20, v21);
  v22 = sub_2213B20(UnityEngine_Transform___TypeInfo, 9);
  v2->fields.commandTransformArray = (struct UnityEngine_Transform_array *)v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.commandTransformArray, v22, v23, v24, v25, v26, v27, v28);
  v29 = v2->fields.p_commandlist;
  if ( !v29 )
    goto LABEL_74;
  v30 = 0;
  v31 = 30;
  while ( (signed int)v30 < SLODWORD(v29->max_length) )
  {
    this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v2,
                                               v2->fields.commandprefab,
                                               v2->fields.commandrootTransform,
                                               0,
                                               0);
    if ( v30 >= LODWORD(v29->max_length) )
      goto LABEL_83;
    v38 = this;
    v39 = &v29->obj.klass + (int)v30;
    v39[4] = (Il2CppClass *)v38;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v38, v32, v33, v34, v35, v36, v37);
    v40 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_74;
    if ( v30 >= LODWORD(v40->max_length) )
      goto LABEL_83;
    this = (BattlePerformanceCommandCard_o *)v40->m_Items[v30];
    if ( !this )
      goto LABEL_74;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_74;
    v48 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, commandCompArray->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_84;
    }
    if ( v30 >= LODWORD(commandCompArray->max_length) )
      goto LABEL_83;
    v50 = &commandCompArray->obj.klass + (int)v30;
    v50[4] = (Il2CppClass *)v48;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 4), (int32_t)v48, v41, v42, v43, v44, v45, v46);
    v51 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_74;
    if ( v30 >= LODWORD(v51->max_length) )
      goto LABEL_83;
    this = (BattlePerformanceCommandCard_o *)v51->m_Items[v30];
    if ( !this )
      goto LABEL_74;
    commandTransformArray = v2->fields.commandTransformArray;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !commandTransformArray )
      goto LABEL_74;
    v59 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, commandTransformArray->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_84;
    }
    if ( v30 >= LODWORD(commandTransformArray->max_length) )
      goto LABEL_83;
    v60 = &commandTransformArray->obj.klass + (int)v30;
    v60[4] = (Il2CppClass *)v59;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v59, v53, v54, v55, v56, v57, v58);
    if ( !v48 )
      goto LABEL_74;
    BattleCommandComponent__Initialize((BattleCommandComponent_o *)v48, 0);
    LOWORD(v48->fields.cutin_grand_a) = 256;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v48, 0, 0, 0, 1, 0, 1, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
    *(_QWORD *)&v48->fields.drawcount = gameObject;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v48->fields.drawcount,
      (int32_t)gameObject,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)v48, v31, 0);
    perf = v2->fields.perf;
    v48->fields.commandAssistDetailWindow = (struct BattleCommandAssistDetailWindowComponent_o *)perf;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v48->fields.commandAssistDetailWindow,
      (int32_t)perf,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    if ( v30 <= 4 )
    {
      v79 = v2->fields.commandTransformArray;
      if ( !v79 )
        goto LABEL_74;
      if ( v30 >= LODWORD(v79->max_length) )
        goto LABEL_83;
      cardTr = v2->fields.cardTr;
      if ( !cardTr )
        goto LABEL_74;
      if ( v30 >= LODWORD(cardTr->max_length) )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v79->m_Items[v30];
      if ( !this )
        goto LABEL_74;
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, cardTr->m_Items[v30], 0);
      v81 = v2->fields.commandTransformArray;
      if ( !v81 )
        goto LABEL_74;
      if ( v30 >= LODWORD(v81->max_length) )
        goto LABEL_83;
      v82 = v81->m_Items[v30];
      if ( !byte_5969AE0 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v82 )
        goto LABEL_74;
      UnityEngine_Transform__set_localPosition(v82, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      v83 = v2->fields.commandTransformArray;
      if ( !v83 )
        goto LABEL_74;
      if ( v30 >= LODWORD(v83->max_length) )
        goto LABEL_83;
      v84 = v83->m_Items[v30];
      if ( !byte_5969AE6 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
        byte_5969AE6 = 1;
      }
      if ( !v84 )
        goto LABEL_74;
      UnityEngine_Transform__set_localRotation(
        v84,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
    }
    else
    {
      v75 = v2->fields.commandTransformArray;
      if ( v30 <= 7 )
      {
        if ( !v75 )
          goto LABEL_74;
        if ( v30 >= LODWORD(v75->max_length) )
          goto LABEL_83;
        npcardTr = v2->fields.npcardTr;
        if ( !npcardTr )
          goto LABEL_74;
        max_length = npcardTr->max_length;
        v78 = v30 - 5;
      }
      else
      {
        if ( !v75 )
          goto LABEL_74;
        if ( v30 >= LODWORD(v75->max_length) )
          goto LABEL_83;
        npcardTr = v2->fields.excardTr;
        if ( !npcardTr )
          goto LABEL_74;
        max_length = npcardTr->max_length;
        v78 = v30 - 8;
      }
      if ( v78 >= max_length )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v75->m_Items[v30];
      if ( !this )
        goto LABEL_74;
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, npcardTr->m_Items[v78], 0);
      v85 = v2->fields.commandTransformArray;
      if ( !v85 )
        goto LABEL_74;
      if ( v30 >= LODWORD(v85->max_length) )
        goto LABEL_83;
      v86 = v85->m_Items[v30];
      if ( !byte_5969AE0 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v86 )
        goto LABEL_74;
      UnityEngine_Transform__set_localPosition(v86, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      v87 = v2->fields.commandTransformArray;
      if ( !v87 )
        goto LABEL_74;
      if ( v30 >= LODWORD(v87->max_length) )
        goto LABEL_83;
      v88 = v87->m_Items[v30];
      if ( !byte_5969AE6 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
        byte_5969AE6 = 1;
      }
      if ( !v88 )
        goto LABEL_74;
      UnityEngine_Transform__set_localRotation(
        v88,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      v89 = *p_p_commandlist;
      if ( !*p_p_commandlist )
        goto LABEL_74;
      if ( v30 >= LODWORD(v89->max_length) )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v89->m_Items[v30];
      if ( !this )
        goto LABEL_74;
      this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !this )
        goto LABEL_74;
      v114.fields.r = 0.0;
      v114.fields.g = 0.0;
      v114.fields.b = 0.0;
      v114.fields.a = 0.0;
      UIWidget__set_color((UIWidget_o *)this, v114, 0);
    }
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v48, (System_String_o *)StringLiteral_19723/*"ef_resistarrow"*/, 0, 0);
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v48, (System_String_o *)StringLiteral_19741/*"ef_weakarrow"*/, 1, 0);
    v29 = *p_p_commandlist;
    ++v30;
    v31 += 20;
    if ( !*p_p_commandlist )
      goto LABEL_74;
  }
  v90 = sub_2213B20(BattleCommandComponent___TypeInfo, 4);
  v2->fields.selectedcomponents = (struct BattleCommandComponent_array *)v90;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.selectedcomponents, v90, v91, v92, v93, v94, v95, v96);
  v97 = v2->fields.p_commandlist;
  if ( !v97 )
    goto LABEL_74;
  if ( LODWORD(v97->max_length) <= 8 )
    goto LABEL_83;
  this = (BattlePerformanceCommandCard_o *)v97->m_Items[8];
  if ( !this
    || (selectedcomponents = v2->fields.selectedcomponents,
        this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___),
        !selectedcomponents) )
  {
LABEL_74:
    sub_2213CDC(this, method);
  }
  v105 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_84:
      v113 = sub_2213D00(this, v49);
      sub_2213BA0(v113, 0);
    }
  }
  if ( (selectedcomponents->max_length & 0xFFFFFFFC) == 0 )
LABEL_83:
    sub_2213CE4(this);
  selectedcomponents->m_Items[3] = (BattleCommandComponent_o *)v105;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&selectedcomponents->m_Items[3],
    (int32_t)v105,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  v106 = sub_2213B20(int___TypeInfo, 9);
  v2->fields.selectcommand = (struct System_Int32_array *)v106;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.selectcommand, v106, v107, v108, v109, v110, v111, v112);
  v2->fields.drawcount = 0;
}


void BattlePerformanceCommandCard__endCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_5972A15 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3668/*"CLOSE_WINDOW"*/);
    byte_5972A15 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3668/*"CLOSE_WINDOW"*/, 0);
}


void BattlePerformanceCommandCard__endCloseSealedWindow(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_5972A0F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3668/*"CLOSE_WINDOW"*/);
    byte_5972A0F = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3668/*"CLOSE_WINDOW"*/, 0);
}


void BattlePerformanceCommandCard__endCloseTdConfWindow(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_5972A12 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3668/*"CLOSE_WINDOW"*/);
    byte_5972A12 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3668/*"CLOSE_WINDOW"*/, 0);
}


void BattlePerformanceCommandCard__endComboEffect(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_59729FD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_59729FD = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_2213CDC(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceCommandCard__endMoveCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  unsigned __int64 v4; // x20
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v6; // x8
  struct BattleCommandComponent_array *v7; // x8
  __int64 v8; // x20
  int max_length; // w9
  unsigned int v10; // w21
  struct BattleCommandComponent_array *v11; // x8
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  commandCompArray = this->fields.commandCompArray;
  this->fields.isPlayingMoveCard = 0;
  if ( !commandCompArray )
    goto LABEL_24;
  v3 = this;
  v4 = 0;
  while ( v4 <= 4 && (__int64)v4 < SLODWORD(commandCompArray->max_length) )
  {
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      if ( BYTE4(this->fields.commandlist) )
        BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)this, 0);
      else
        BattleCommandComponent__startMoveFloat((BattleCommandComponent_o *)this, 0);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_24;
  }
  perf = v3->fields.perf;
  if ( !perf
    || (this = (BattlePerformanceCommandCard_o *)perf->fields.statusPerf) == 0
    || (BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)this, -1, 0, 0),
        (v6 = v3->fields.perf) == 0)
    || (this = (BattlePerformanceCommandCard_o *)v6->fields.statusPerf) == 0
    || (BattlePerformanceStatus__SetActiveTotalCriticalStar((BattlePerformanceStatus_o *)this, 1, 0),
        (v7 = v3->fields.commandCompArray) == 0) )
  {
LABEL_24:
    sub_2213CDC(this, method);
  }
  v8 = 4;
  while ( 1 )
  {
    max_length = v7->max_length;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_26;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v7->obj.klass + v8);
    if ( this )
    {
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)this, 1, 0);
      v11 = v3->fields.commandCompArray;
      if ( v11 )
      {
        if ( v10 >= LODWORD(v11->max_length) )
LABEL_26:
          sub_2213CE4(this);
        this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v11->obj.klass + v8);
        if ( this )
        {
          BattleCommandComponent__ResetCardBuffIconAlphaAnim((BattleCommandComponent_o *)this, 0);
          v7 = v3->fields.commandCompArray;
          ++v8;
          if ( v7 )
            continue;
        }
      }
    }
    goto LABEL_24;
  }
  BattlePerformanceCommandCard__updateCardFix(v3, method);
  BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(v3, v12);
  BattlePerformanceCommandCard__updateTDTypeChange(v3, v13);
}


void BattlePerformanceCommandCard__endOpenCommandCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_59729DE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729DE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_12;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_12;
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)transform,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))Component_object->klass->vtable[12].methodPtr)(
        Component_object,
        1,
        Component_object->klass->vtable[12].method);
      return;
    }
LABEL_12:
    sub_2213CDC(transform, v4);
  }
}


void BattlePerformanceCommandCard__endOpenTdConf(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__fadeOutAllCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


bool BattlePerformanceCommandCard__fallStar(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  char v9; // w22
  unsigned __int64 i; // x26
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x20
  int v14; // w21
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v16; // x22
  System_Action_object__o *v17; // x23
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5972A06 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&Method_BattleCommandComponent_addCriticalBuff__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_5972A06 = 1;
  }
  aubelist = this->fields.aubelist;
  memset(&v21, 0, sizeof(v21));
  if ( !aubelist )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v21 = v20;
  v20.fields._list = 0;
  *(_QWORD *)&v20.fields._index = &v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_2213CDC(0, v4);
    BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)v21.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v6 = this->fields.aubelist;
  if ( !v6 )
LABEL_25:
    sub_2213CDC(aubelist, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
  v9 = 0;
  for ( i = 0; i != 5; ++i )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( i >= LODWORD(commandCompArray->max_length) )
LABEL_26:
      sub_2213CE4(aubelist);
    v12 = &commandCompArray->obj.klass + i;
    v13 = v12[4];
    if ( !v13 )
      goto LABEL_25;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                         (BattleCommandComponent_o *)v12[4],
                                                                         0);
    if ( (int)aubelist >= 1 )
    {
      v14 = (int)aubelist;
      do
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          goto LABEL_25;
        if ( i >= LODWORD(commandTransformArray->max_length) )
          goto LABEL_26;
        v16 = commandTransformArray->m_Items[i];
        v17 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(v17, (Il2CppObject *)v13, Method_BattleCommandComponent_addCriticalBuff__, 0);
        BattlePerformanceCommandCard__MoveNotTween(this, v16, (System_Action_GameObject__o *)v17, v18);
        --v14;
      }
      while ( v14 );
      v9 = 1;
    }
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)v13, 0);
    if ( BYTE4(v13->vtable[6].methodPtr) )
      BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)v13, 0);
  }
  BattlePerformanceCommandCard__updateBuffIcon(this, method);
  return v9 & 1;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattlePerformanceCommandCard__getBattleCommandCardObject(
        BattlePerformanceCommandCard_o *this,
        int32_t actionIndex,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_7;
  if ( (actionIndex & 0x80000000) == 0 && SLODWORD(selectedcomponents->max_length) > actionIndex )
  {
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[actionIndex];
    if ( this )
      return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
LABEL_7:
    sub_2213CDC(this, *(_QWORD *)&actionIndex);
  }
  return 0;
}


UnityEngine_Transform_o *BattlePerformanceCommandCard__getCollectCriticalTransform(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  return this->fields.criticalpointTr;
}


System_String_o *BattlePerformanceCommandCard__getComboCutIn(
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
  if ( (byte_59729FE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19749/*"effect/BitEffect/bit_cut_2a"*/);
    sub_2213A60(&StringLiteral_19752/*"effect/BitEffect/bit_cut_u3"*/);
    sub_2213A60(&StringLiteral_19751/*"effect/BitEffect/bit_cut_u2"*/);
    sub_2213A60(&StringLiteral_19753/*"effect/BitEffect/bit_cut_ua"*/);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&StringLiteral_19750/*"effect/BitEffect/bit_cut_3a"*/);
    byte_59729FE = 1;
  }
  perf = v2->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0 || (combodata = data->fields.combodata) == 0 )
    sub_2213CDC(this, method);
  flash = combodata->fields.flash;
  samecount = combodata->fields.samecount;
  if ( flash )
  {
    if ( samecount == 3 )
    {
      v8 = &StringLiteral_19752/*"effect/BitEffect/bit_cut_u3"*/;
    }
    else if ( samecount == 2 )
    {
      v8 = &StringLiteral_19751/*"effect/BitEffect/bit_cut_u2"*/;
    }
    else
    {
      v8 = &StringLiteral_19753/*"effect/BitEffect/bit_cut_ua"*/;
    }
    return (System_String_o *)*v8;
  }
  if ( samecount == 2 )
  {
    v8 = &StringLiteral_19749/*"effect/BitEffect/bit_cut_2a"*/;
    return (System_String_o *)*v8;
  }
  if ( samecount == 3 )
    return (System_String_o *)StringLiteral_19750/*"effect/BitEffect/bit_cut_3a"*/;
  else
    return 0;
}


UnityEngine_Vector2_array *BattlePerformanceCommandCard__get_FSTutorialArrow01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow01, v2);
}


UnityEngine_Vector2_array *BattlePerformanceCommandCard__get_FSTutorialArrow05(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow05, v2);
}


UnityEngine_Vector2_o BattlePerformanceCommandCard__get_FSTutorialArrow22(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  float x; // s9
  float y; // s8
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5972A1E & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    byte_5972A1E = 1;
  }
  x = this->fields.TutorialArrow22.fields.x;
  y = this->fields.TutorialArrow22.fields.y;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  v5 = x + FSUtility__GetOffsetX(40.0, 0, 0);
  v6 = y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector2_array *BattlePerformanceCommandCard__get_FSTutorialArrow31(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow31, v2);
}


UnityEngine_Rect_array *BattlePerformanceCommandCard__get_FSTutorialSquare01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialSquareCard(this, this->fields.TutorialSquare01, v2);
}


UnityEngine_Rect_array *BattlePerformanceCommandCard__get_FSTutorialSquare05(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialSquareCard(this, this->fields.TutorialSquare05, v2);
}


UnityEngine_Rect_o BattlePerformanceCommandCard__get_FSTutorialSquare22(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s11
  float m_YMin; // s8
  float m_Width; // s9
  float m_Height; // s10
  float OffsetX; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s0
  float v11; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5972A1F & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    byte_5972A1F = 1;
  }
  m_XMin = this->fields.TutorialSquare22.fields.m_XMin;
  m_YMin = this->fields.TutorialSquare22.fields.m_YMin;
  m_Width = this->fields.TutorialSquare22.fields.m_Width;
  m_Height = this->fields.TutorialSquare22.fields.m_Height;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  OffsetX = FSUtility__GetOffsetX(40.0, 0, 0);
  v8 = m_YMin;
  v9 = m_Width;
  v10 = m_XMin + OffsetX;
  v11 = m_Height;
  result.fields.m_Height = v11;
  result.fields.m_Width = v9;
  result.fields.m_YMin = v8;
  result.fields.m_XMin = v10;
  return result;
}


UnityEngine_Rect_array *BattlePerformanceCommandCard__get_FSTutorialSquare32(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  UnityEngine_Rect_array *v4; // x0
  __int64 v5; // x1
  UnityEngine_Rect_array *v6; // x19
  float m_XMin; // s8
  float OffsetX; // s0
  UnityEngine_Rect_array *result; // x0

  v3 = this;
  if ( (byte_5972A1D & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&FSUtility_TypeInfo);
    byte_5972A1D = 1;
  }
  v4 = BattlePerformanceCommandCard__FSTutorialSquareCard(this, v3->fields.TutorialSquare32, v2);
  if ( !v4 )
    sub_2213CDC(0, v5);
  v6 = v4;
  if ( (v4->max_length & 0xFFFFFFFE) == 0 )
    sub_2213CE4(v4);
  m_XMin = v4->m_Items[1].fields.m_XMin;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v5);
  OffsetX = FSUtility__GetOffsetX(88.0, 1, 0);
  result = v6;
  v6->m_Items[1].fields.m_XMin = m_XMin + OffsetX;
  return result;
}


bool BattlePerformanceCommandCard__get_IsPlayingBackStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlayingBackStar_k__BackingField;
}


void BattlePerformanceCommandCard__giveoutCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *transform; // x0
  __int64 v5; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v7; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8

  if ( (byte_59729E1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17493/*"anim_giveout"*/);
    byte_59729E1 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_17493/*"anim_giveout"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( p_commandlist )
  {
    v7 = 4;
    while ( 1 )
    {
      max_length_low = LODWORD(p_commandlist->max_length);
      v9 = v7 - 4;
      if ( v7 - 4 >= (int)max_length_low )
        break;
      if ( v9 >= max_length_low )
        goto LABEL_20;
      v10 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + v7);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v11 = this->fields.p_commandlist;
        if ( !v11 )
          goto LABEL_18;
        if ( v9 >= LODWORD(v11->max_length) )
LABEL_20:
          sub_2213CE4(transform);
        transform = (UnityEngine_GameObject_o *)*((_QWORD *)&v11->obj.klass + v7);
        if ( !transform
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                        (UnityEngine_Transform_o *)transform,
                                                        0)) == 0
          || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0 )
        {
LABEL_18:
          sub_2213CDC(transform, v5);
        }
        UnityEngine_GameObject__SetActive(transform, 1, 0);
      }
      p_commandlist = this->fields.p_commandlist;
      ++v7;
      if ( !p_commandlist )
        goto LABEL_18;
    }
  }
}


void BattlePerformanceCommandCard__giveoutNobleCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  int v4; // w24
  unsigned int max_length; // w9
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v9; // x8
  BattleCommandComponent_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_59729E2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729E2 = 1;
  }
  p_commandlist = v2->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_25:
    sub_2213CDC(this, method);
  v4 = 5;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    if ( v4 >= (int)(max_length - 1) )
      break;
    if ( v4 >= max_length )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)p_commandlist->m_Items[v4];
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__DestroyImmediate_83460132((UnityEngine_Object_o *)Component_object, 0);
    }
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( (unsigned int)v4 >= LODWORD(commandCompArray->max_length) )
      goto LABEL_27;
    v9 = &commandCompArray->obj.klass + v4;
    v10 = (BattleCommandComponent_o *)v9[4];
    if ( !v10 )
      goto LABEL_25;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkObject((BattleCommandComponent_o *)v9[4], 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v2->fields.p_commandlist;
      if ( !v11 )
        goto LABEL_25;
      if ( (unsigned int)v4 >= LODWORD(v11->max_length) )
LABEL_27:
        sub_2213CE4(this);
      this = (BattlePerformanceCommandCard_o *)v11->m_Items[v4];
      if ( !this )
        goto LABEL_25;
      this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !this )
        goto LABEL_25;
      v12.fields.r = 1.0;
      v12.fields.g = 1.0;
      v12.fields.b = 1.0;
      v12.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v12, 0);
      if ( !v10->fields.selectflg )
        BattleCommandComponent__startMoveFloat(v10, 0);
    }
    p_commandlist = v2->fields.p_commandlist;
    ++v4;
    if ( !p_commandlist )
      goto LABEL_25;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__hideCommandCard(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        BaseMotionSkip_o *motionSkip,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v5; // x20
  float v6; // s8
  __int64 v7; // x21
  float v8; // s9
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct BattleCommandComponent_array *commandCompArray; // x8
  UnityEngine_Color_o v11; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( !motionSkip )
LABEL_12:
    sub_2213CDC(this, flg);
  v5 = this;
  v6 = ((float (__fastcall *)(BaseMotionSkip_o *, const MethodInfo *, float))motionSkip->klass->vtable._11_ConvertSkipDuration.methodPtr)(
         motionSkip,
         motionSkip->klass->vtable._11_ConvertSkipDuration.method,
         0.3);
  v7 = 4;
  if ( flg )
    v8 = 1.0;
  else
    v8 = 0.0;
  do
  {
    p_commandlist = v5->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_12;
    if ( (unsigned int)(v7 - 4) >= LODWORD(p_commandlist->max_length) )
      goto LABEL_13;
    v11.fields.r = v8;
    v11.fields.g = v8;
    v11.fields.b = v8;
    v11.fields.a = v8;
    this = (BattlePerformanceCommandCard_o *)TweenColor__Begin(
                                               *((UnityEngine_GameObject_o **)&p_commandlist->obj.klass + v7),
                                               v6,
                                               v11,
                                               0);
    commandCompArray = v5->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_12;
    if ( (unsigned int)(v7 - 4) >= LODWORD(commandCompArray->max_length) )
LABEL_13:
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + v7);
    if ( !this )
      goto LABEL_12;
    BattleCommandComponent__CardEffectSetActive((BattleCommandComponent_o *)this, flg, 0);
    ++v7;
  }
  while ( (_DWORD)v7 != 9 );
}


void BattlePerformanceCommandCard__initHighSpeedMode(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  const MethodInfo *v4; // x2
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  perf = this->fields.perf;
  if ( !perf || (v3 = this, (this = (BattlePerformanceCommandCard_o *)perf->fields.data) == 0) )
    sub_2213CDC(this, method);
  if ( BattleData__isTutorial((BattleData_o *)this, 0) )
  {
    BattlePerformanceCommandCard__SetCommandPhaseButtonActive(v3, 0, v4);
  }
  else
  {
    BattlePerformanceCommandCard__SetCommandPhaseButtonActive(v3, 1, v4);
    BattlePerformanceCommandCard__updateHighSpeedObject(v3, v5, v6);
  }
}


void BattlePerformanceCommandCard__initOpen(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_59729D4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7786/*"INIT_OPEN"*/);
    byte_59729D4 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_7786/*"INIT_OPEN"*/, 0);
}


// attributes: thunk
void BattlePerformanceCommandCard__initQuest(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard__initHighSpeedMode(this, method);
}


void BattlePerformanceCommandCard__moveupStars(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x8
  int32_t size; // w2
  int v5; // w9
  struct BattleData_o *Bdata; // x8
  int criticalstars; // w8
  __int64 *v8; // x23
  unsigned int v9; // w20
  BattlePerformanceCommandCard_o *v10; // x21
  BattlePerformanceCommandCard_o *v11; // x22
  int32_t layer; // w0
  BattlePerformanceCommandCard_o *v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  BattlePerformanceCommandCard_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 *v24; // x28
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x23
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct PlayMakerFSM_o *v45; // x23
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct UnityEngine_GameObject_o *v59; // x23
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int32_t v66; // w1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct UISprite_o *v73; // x23
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  int32_t v80; // w1
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct UnityEngine_GameObject_o *v87; // x23
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  int32_t v94; // w1
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  struct UnityEngine_GameObject_o *v101; // x23
  __int64 v102; // x1
  System_Collections_Hashtable_o *v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v111; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v113; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v115; // x0
  char v116[4]; // [xsp+0h] [xbp-80h] BYREF
  int v117; // [xsp+4h] [xbp-7Ch] BYREF
  int v118; // [xsp+8h] [xbp-78h] BYREF
  float v119; // [xsp+Ch] [xbp-74h] BYREF
  int v120; // [xsp+18h] [xbp-68h] BYREF
  int32_t v121; // [xsp+1Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_5972A02 & 1) == 0 )
  {
    sub_2213A60(&iTween_EaseType_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_26242/*"x"*/);
    sub_2213A60(&StringLiteral_19609/*"easetype"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_19390/*"delay"*/);
    sub_2213A60(&StringLiteral_26344/*"y"*/);
    sub_2213A60(&StringLiteral_22006/*"islocal"*/);
    sub_2213A60(&StringLiteral_19770/*"effect/ef_critlaunch"*/);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&iTween_TypeInfo);
    byte_5972A02 = 1;
  }
  aubelist = v2->fields.aubelist;
  if ( !aubelist )
    goto LABEL_68;
  size = aubelist->fields._size;
  v5 = aubelist->fields._version + 1;
  aubelist->fields._size = 0;
  aubelist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)aubelist->fields._items, 0, size, 0);
  Bdata = v2->fields.Bdata;
  if ( !Bdata )
    goto LABEL_68;
  criticalstars = Bdata->fields.criticalstars;
  if ( criticalstars < 1 )
    return;
  v8 = (__int64 *)&StringLiteral_26242/*"x"*/;
  v9 = criticalstars / 5u + 1;
  do
  {
    this = (BattlePerformanceCommandCard_o *)v2->fields.perf;
    if ( !this )
      goto LABEL_68;
    this = (BattlePerformanceCommandCard_o *)BattlePerformance__getEffectInstantiate(
                                               (BattlePerformance_o *)this,
                                               4,
                                               v2->fields.criticalpointTr,
                                               0);
    if ( !this )
      goto LABEL_68;
    v10 = this;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !v2->fields.criticalpointTr )
      goto LABEL_68;
    v11 = this;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v2->fields.criticalpointTr,
                                               0);
    if ( !this )
      goto LABEL_68;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
    TransformHelper__ChangeChildsLayer((UnityEngine_Transform_o *)v11, layer, 0);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
    if ( !this )
      goto LABEL_68;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v2->fields.criticalpointTr, 0);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
    v13 = this;
    if ( !byte_5969AE0 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v13 )
      goto LABEL_68;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v13,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v10,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    if ( !this )
      goto LABEL_68;
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)this, 0, 0);
    this = (BattlePerformanceCommandCard_o *)sub_2213B20(object___TypeInfo, 12);
    if ( !this )
      goto LABEL_68;
    v20 = this;
    v21 = *v8;
    if ( *v8 )
    {
      v21 = sub_2213BB4(v21, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( !LODWORD(v20->fields.m_CancellationTokenSource) )
      goto LABEL_67;
    v23 = *v8;
    v24 = v8;
    v20->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)*v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields.COMMAND_STAMP_POS_X, v23, v14, v15, v16, v17, v18, v19);
    v121 = UnityEngine_Random__Range_83400680(-780, 110, 0);
    v21 = j_il2cpp_value_box_0(qword_5984348, &v121);
    v31 = v21;
    if ( v21 )
    {
      v21 = sub_2213BB4(v21, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( ((__int64)v20->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
      goto LABEL_67;
    *(_QWORD *)&v20->fields.COMMAND_STAMP_POS_Y = v31;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields.COMMAND_STAMP_POS_Y, v31, v25, v26, v27, v28, v29, v30);
    v21 = StringLiteral_26344/*"y"*/;
    if ( StringLiteral_26344/*"y"*/ )
    {
      v21 = sub_2213BB4(StringLiteral_26344/*"y"*/, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_67;
    v38 = StringLiteral_26344/*"y"*/;
    *(_QWORD *)&v20->fields.CARD_ROOT_BASE_X = StringLiteral_26344/*"y"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields.CARD_ROOT_BASE_X, v38, v32, v33, v34, v35, v36, v37);
    v120 = 500;
    v21 = j_il2cpp_value_box_0(qword_5984348, &v120);
    v45 = (struct PlayMakerFSM_o *)v21;
    if ( v21 )
    {
      v21 = sub_2213BB4(v21, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( ((__int64)v20->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
      goto LABEL_67;
    v20->fields.commandfsm = v45;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields.commandfsm, (int32_t)v45, v39, v40, v41, v42, v43, v44);
    v21 = StringLiteral_19390/*"delay"*/;
    if ( StringLiteral_19390/*"delay"*/ )
    {
      v21 = sub_2213BB4(StringLiteral_19390/*"delay"*/, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_67;
    v52 = StringLiteral_19390/*"delay"*/;
    v20->fields.commandprefab = (struct UnityEngine_GameObject_o *)StringLiteral_19390/*"delay"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields.commandprefab, v52, v46, v47, v48, v49, v50, v51);
    v119 = UnityEngine_Random__Range(0.0, 0.3, 0);
    v21 = j_il2cpp_value_box_0(qword_5984378, &v119);
    v59 = (struct UnityEngine_GameObject_o *)v21;
    if ( v21 )
    {
      v21 = sub_2213BB4(v21, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_67;
    v20->fields.selectCommandPrefab = v59;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v20->fields.selectCommandPrefab,
      (int32_t)v59,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    v21 = StringLiteral_25366/*"time"*/;
    if ( StringLiteral_25366/*"time"*/ )
    {
      v21 = sub_2213BB4(StringLiteral_25366/*"time"*/, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 6 )
      goto LABEL_67;
    v66 = StringLiteral_25366/*"time"*/;
    v20->fields.commandrootTransform = (struct UnityEngine_Transform_o *)StringLiteral_25366/*"time"*/;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v20->fields.commandrootTransform,
      v66,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    v118 = 1050253722;
    v21 = j_il2cpp_value_box_0(qword_5984378, &v118);
    v73 = (struct UISprite_o *)v21;
    if ( v21 )
    {
      v21 = sub_2213BB4(v21, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( ((__int64)v20->fields.m_CancellationTokenSource & 0xFFFFFFF8) == 0 )
      goto LABEL_67;
    v20->fields.selectinfo_sprite = v73;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v20->fields.selectinfo_sprite,
      (int32_t)v73,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    v21 = StringLiteral_19609/*"easetype"*/;
    if ( StringLiteral_19609/*"easetype"*/ )
    {
      v21 = sub_2213BB4(StringLiteral_19609/*"easetype"*/, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 8 )
      goto LABEL_67;
    v80 = StringLiteral_19609/*"easetype"*/;
    v20->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)StringLiteral_19609/*"easetype"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields.firstbonus_q, v80, v74, v75, v76, v77, v78, v79);
    v117 = 1;
    v21 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v117);
    v87 = (struct UnityEngine_GameObject_o *)v21;
    if ( v21 )
    {
      v21 = sub_2213BB4(v21, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 9 )
      goto LABEL_67;
    v20->fields.firstbonus_a = v87;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v20->fields.firstbonus_a,
      (int32_t)v87,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    v21 = StringLiteral_22006/*"islocal"*/;
    if ( StringLiteral_22006/*"islocal"*/ )
    {
      v21 = sub_2213BB4(StringLiteral_22006/*"islocal"*/, v20->klass->_1.element_class);
      if ( !v21 )
        goto LABEL_69;
    }
    if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 0xA )
      goto LABEL_67;
    v94 = StringLiteral_22006/*"islocal"*/;
    v20->fields.firstbonus_b = (struct UnityEngine_GameObject_o *)StringLiteral_22006/*"islocal"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->fields.firstbonus_b, v94, v88, v89, v90, v91, v92, v93);
    v116[0] = 1;
    v21 = j_il2cpp_value_box_0(qword_5984328, v116);
    v101 = (struct UnityEngine_GameObject_o *)v21;
    if ( v21 )
    {
      v21 = sub_2213BB4(v21, v20->klass->_1.element_class);
      if ( !v21 )
      {
LABEL_69:
        v115 = sub_2213D00(v21, v22);
        sub_2213BA0(v115, 0);
      }
    }
    if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 0xB )
LABEL_67:
      sub_2213CE4(v21);
    v20->fields.firstaura_q = v101;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v20->fields.firstaura_q,
      (int32_t)v101,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v102);
    v103 = iTween__Hash((System_Object_array *)v20, 0);
    iTween__MoveTo_75293528((UnityEngine_GameObject_o *)v10, v103, 0);
    this = (BattlePerformanceCommandCard_o *)v2->fields.aubelist;
    if ( !this )
      goto LABEL_68;
    m_CachedPtr = this->fields.m_CachedPtr;
    v111 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_68;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    v8 = v24;
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v10,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
    }
    else
    {
      v113 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v113 + 32) = v10;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v113 + 32), (int32_t)v10, v104, v105, v106, v107, v108, v109);
    }
    --v9;
  }
  while ( v9 );
  this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject_48153028(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_19770/*"effect/ef_critlaunch"*/,
                                             v2->fields.criticalpointTr,
                                             0,
                                             0);
  perf = v2->fields.perf;
  if ( !perf || (this = (BattlePerformanceCommandCard_o *)perf->fields.statusPerf) == 0 )
LABEL_68:
    sub_2213CDC(this, method);
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)this, -1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__openCommandCard(
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
  unsigned int v17; // w21
  struct BattleCommandComponent_array *v18; // x8
  struct BattleCommandComponent_array *v19; // x8

  if ( (byte_59729DA & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_openCommandCard__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17491/*"anim_draw"*/);
    byte_59729DA = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isStatTac);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    backTacticalButton = (UIWidget_o *)this->fields.maskSprite;
    if ( !backTacticalButton )
      goto LABEL_26;
    UIWidget__set_depth(backTacticalButton, -31, 0);
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_17491/*"anim_draw"*/, v7);
  backTacticalButton = (UIWidget_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    goto LABEL_26;
  backTacticalButton = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)backTacticalButton,
                                       0);
  if ( !backTacticalButton )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTacticalButton, 1, 0);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 1, v9);
  if ( isStatTac )
  {
    v11 = BattlePerformanceCommandCard__waitFallStar(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v11, 0);
  }
  v12 = Method_BattlePerformanceCommandCard_openCommandCard__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_openCommandCard__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_openCommandCard__);
  v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
  OverwriteAssetSoundName__PlayCommonSe(v13, 4, 0, 0);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_26:
    sub_2213CDC(backTacticalButton, v6);
  v15 = 4;
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
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)backTacticalButton, 0, 0);
      v18 = this->fields.commandCompArray;
      if ( v18 )
      {
        if ( v17 >= LODWORD(v18->max_length) )
          goto LABEL_28;
        backTacticalButton = (UIWidget_o *)*((_QWORD *)&v18->obj.klass + v15);
        if ( backTacticalButton )
        {
          BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)backTacticalButton, 0, 0);
          v19 = this->fields.commandCompArray;
          if ( v19 )
          {
            if ( v17 >= LODWORD(v19->max_length) )
LABEL_28:
              sub_2213CE4(backTacticalButton);
            backTacticalButton = (UIWidget_o *)*((_QWORD *)&v19->obj.klass + v15);
            if ( backTacticalButton )
            {
              BattleCommandComponent__SetTreasureDeviceTypeChange(
                (BattleCommandComponent_o *)backTacticalButton,
                0,
                0,
                0);
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


void BattlePerformanceCommandCard__playAnimation(
        BattlePerformanceCommandCard_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cardRoot; // x21
  __int64 v6; // x1
  float v7; // s8
  float OffsetX; // s9
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Transform_o *Item; // x0
  Il2CppObject *Component_object; // x21
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v16; // x20
  __int64 v17; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59729D5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_17493/*"anim_giveout"*/);
    byte_59729D5 = 1;
  }
  cardRoot = (UnityEngine_Object_o *)this->fields.cardRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  if ( UnityEngine_Object__op_Inequality(cardRoot, 0, 0) )
  {
    v7 = 0.0;
    OffsetX = 0.0;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_17493/*"anim_giveout"*/, 0) )
    {
      if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v6);
      OffsetX = FSUtility__GetOffsetX(68.0, 2, 0);
    }
    v9 = System_String__op_Equality(name, (System_String_o *)StringLiteral_17493/*"anim_giveout"*/, 0);
    if ( v9 )
      v7 = BattlePerformanceCommandCard__FSCardRootOffsetY((BattlePerformanceCommandCard_o *)v9, v10);
    Item = this->fields.cardRoot;
    if ( !Item )
      goto LABEL_33;
    v20.fields.y = v7 + this->fields.CARD_ROOT_BASE_Y;
    v20.fields.x = OffsetX + this->fields.CARD_ROOT_BASE_X;
    v20.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(Item, v20, 0);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v14 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  Item = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    Item = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v14 )
    {
      Item = (UnityEngine_Transform_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v14, name, 0);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0);
        UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v14, name, 0);
        return;
      }
    }
LABEL_33:
    sub_2213CDC(Item, v10);
  }
  if ( !Component_object )
    goto LABEL_33;
  Item = (UnityEngine_Transform_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, name, 0);
  if ( !Item )
    goto LABEL_33;
  klass = Item->klass;
  v16 = Item;
  v17 = *(unsigned __int16 *)&Item->klass->_2.rank;
  if ( *(_WORD *)&Item->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v17;
      p_offset += 2;
      if ( !v17 )
        goto LABEL_23;
    }
    v19 = (__int64)(&klass->vtable._4_GetEnumerator + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_23:
    v19 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, _QWORD, double))v19)(v16, *(_QWORD *)(v19 + 8), 0.0);
  SimpleAnimation__Play_78552168((SimpleAnimation_o *)Component_object, name, 0);
}


void BattlePerformanceCommandCard__playComboEffect(
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

  if ( (byte_59729F8 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_playComboEffect__);
    byte_59729F8 = 1;
  }
  if ( (seName & 0x80000000) == 0 )
  {
    v7 = Method_BattlePerformanceCommandCard_playComboEffect__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_playComboEffect__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_playComboEffect__);
    v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
    OverwriteAssetSoundName__PlayCommonSe(v8, seName, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v10);
  transform = UnityEngine_GameObject__get_transform(gameObject, 0);
  BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, prefab, transform, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__playCommandEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        bool flg,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_7;
  if ( (index & 0x80000000) == 0 && SLODWORD(selectedcomponents->max_length) > index )
  {
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[index];
    if ( this )
    {
      BattleCommandComponent__playAttackEffect((BattleCommandComponent_o *)this, flg, 0);
      return;
    }
LABEL_7:
    sub_2213CDC(this, *(_QWORD *)&index);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__playNobleCardEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct BattleCommandComponent_array *v8; // x8
  UnityEngine_Object_o *v9; // x21
  struct BattleCommandComponent_array *v10; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BattlePerformanceCommandCard_o *v18; // x22
  __int64 v19; // x1
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct UnityEngine_Transform_o *npTargetTr; // x23
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  BattlePerformanceCommandCard_o *v41; // x23
  __int64 v42; // x1
  System_Collections_Hashtable_o *v43; // x0
  struct BattleCommandComponent_array *v44; // x8
  __int64 v45; // x0
  int v46; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_59729FF & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_playNobleCardEffect__);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23916/*"position"*/);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&iTween_TypeInfo);
    byte_59729FF = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_36;
  if ( (index & 0x80000000) == 0 && SLODWORD(selectedcomponents->max_length) > index )
  {
    v6 = Method_BattlePerformanceCommandCard_playNobleCardEffect__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_playNobleCardEffect__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_playNobleCardEffect__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlayCommonSe(v7, 14, 0, 0);
    v8 = v4->fields.selectedcomponents;
    if ( !v8 )
      goto LABEL_36;
    if ( LODWORD(v8->max_length) <= index )
      goto LABEL_37;
    v9 = (UnityEngine_Object_o *)v8->m_Items[index];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = v4->fields.selectedcomponents;
      if ( !v10 )
        goto LABEL_36;
      if ( LODWORD(v10->max_length) > index )
      {
        this = (BattlePerformanceCommandCard_o *)v10->m_Items[index];
        if ( !this )
          goto LABEL_36;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this = (BattlePerformanceCommandCard_o *)sub_2213B20(object___TypeInfo, 4);
        if ( !this )
          goto LABEL_36;
        v18 = this;
        this = (BattlePerformanceCommandCard_o *)StringLiteral_23916/*"position"*/;
        if ( StringLiteral_23916/*"position"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_23916/*"position"*/, v18->klass->_1.element_class);
          if ( !this )
            goto LABEL_38;
        }
        if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
          goto LABEL_37;
        v20 = StringLiteral_23916/*"position"*/;
        v18->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)StringLiteral_23916/*"position"*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v18->fields.COMMAND_STAMP_POS_X,
          v20,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        npTargetTr = v4->fields.npTargetTr;
        if ( npTargetTr )
        {
          this = (BattlePerformanceCommandCard_o *)sub_2213BB4(v4->fields.npTargetTr, v18->klass->_1.element_class);
          if ( !this )
            goto LABEL_38;
        }
        if ( ((__int64)v18->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
          goto LABEL_37;
        *(_QWORD *)&v18->fields.COMMAND_STAMP_POS_Y = npTargetTr;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v18->fields.COMMAND_STAMP_POS_Y,
          (int32_t)npTargetTr,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_25366/*"time"*/;
        if ( StringLiteral_25366/*"time"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_25366/*"time"*/, v18->klass->_1.element_class);
          if ( !this )
            goto LABEL_38;
        }
        if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 2 )
          goto LABEL_37;
        v34 = StringLiteral_25366/*"time"*/;
        *(_QWORD *)&v18->fields.CARD_ROOT_BASE_X = StringLiteral_25366/*"time"*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v18->fields.CARD_ROOT_BASE_X,
          v34,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        v46 = 1056964608;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984378, &v46);
        v41 = this;
        if ( this )
        {
          this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v18->klass->_1.element_class);
          if ( !this )
          {
LABEL_38:
            v45 = sub_2213D00(this, v19);
            sub_2213BA0(v45, 0);
          }
        }
        if ( ((__int64)v18->fields.m_CancellationTokenSource & 0xFFFFFFFC) != 0 )
        {
          v18->fields.commandfsm = (struct PlayMakerFSM_o *)v41;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v18->fields.commandfsm,
            (int32_t)v41,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v42);
          v43 = iTween__Hash((System_Object_array *)v18, 0);
          iTween__MoveTo_75293528(gameObject, v43, 0);
          v44 = v4->fields.selectedcomponents;
          if ( !v44 )
            goto LABEL_36;
          if ( LODWORD(v44->max_length) > index )
          {
            this = (BattlePerformanceCommandCard_o *)v44->m_Items[index];
            if ( this )
            {
              BattleCommandComponent__playNpAttackEffect((BattleCommandComponent_o *)this, 0.5, 0);
              return;
            }
LABEL_36:
            sub_2213CDC(this, *(_QWORD *)&index);
          }
        }
      }
LABEL_37:
      sub_2213CE4(this);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__playTypeEffect(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v6; // x21
  int max_length; // w9

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_7:
    sub_2213CDC(this, flg);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = selectedcomponents->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[v6];
    if ( this )
    {
      BattleCommandComponent__flashType((BattleCommandComponent_o *)this, flg, 0);
      selectedcomponents = v4->fields.selectedcomponents;
      ++v6;
      if ( selectedcomponents )
        continue;
    }
    goto LABEL_7;
  }
}


void BattlePerformanceCommandCard__registCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_array *list,
        const MethodInfo *method)
{
  BattleCommandComponent_o *Bdata; // x0
  __int64 v6; // x1
  int max_length; // w8
  signed int v8; // w9
  __int64 v9; // x27
  Il2CppClass **v10; // x28
  Il2CppClass *v11; // x8
  BattleCommandData_o **v12; // x28
  Il2CppClass *v13; // t1
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  BattleServantData_o *v15; // x22
  UnityEngine_Transform_o *v16; // x23
  struct UnityEngine_Transform_array *v17; // x8
  UnityEngine_Transform_o *v18; // x23
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v20; // x8
  struct BattleCommandComponent_array *v21; // x8
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v23; // x8
  unsigned int v24; // w23
  unsigned int v25; // w9
  struct BattleCommandComponent_array *v26; // x8
  struct UnityEngine_GameObject_array *v27; // x8
  __int64 v28; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *v30; // x20
  struct BattleCommandComponent_array *v31; // x8
  UnityEngine_Object_o *v32; // x20
  struct BattleCommandComponent_array *v33; // x8
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59729D6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITweener___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17494/*"anim_wait"*/);
    byte_59729D6 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_17494/*"anim_wait"*/, method);
  if ( !list )
    goto LABEL_52;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( v8 < (unsigned int)max_length )
    {
      v9 = v8;
      v10 = &list->obj.klass + v8;
      v13 = v10[4];
      v12 = (BattleCommandData_o **)(v10 + 4);
      v11 = v13;
      if ( !v13 )
        goto LABEL_52;
      Bdata = (BattleCommandComponent_o *)this->fields.Bdata;
      if ( !Bdata )
        goto LABEL_52;
      Bdata = (BattleCommandComponent_o *)BattleData__getServantData((BattleData_o *)Bdata, v11->_1.byval_arg.bits, 0);
      commandTransformArray = this->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_52;
      if ( (unsigned int)v9 >= LODWORD(commandTransformArray->max_length) )
        break;
      v15 = (BattleServantData_o *)Bdata;
      v16 = commandTransformArray->m_Items[v9];
      if ( !byte_5969AE0 )
      {
        Bdata = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v16 )
        goto LABEL_52;
      UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      v17 = this->fields.commandTransformArray;
      if ( !v17 )
        goto LABEL_52;
      if ( (unsigned int)v9 >= LODWORD(v17->max_length) )
        break;
      v18 = v17->m_Items[v9];
      if ( !byte_5969AE0 )
      {
        Bdata = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v18 )
        goto LABEL_52;
      UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      commandCompArray = this->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_52;
      if ( (unsigned int)v9 >= LODWORD(commandCompArray->max_length) || (unsigned int)v9 >= LODWORD(list->max_length) )
        break;
      Bdata = commandCompArray->m_Items[v9];
      if ( !Bdata )
        goto LABEL_52;
      BattleCommandComponent__setData(Bdata, *v12, v15, 0, 1, 0, 1, 0);
      v20 = this->fields.commandCompArray;
      if ( !v20 )
        goto LABEL_52;
      if ( (unsigned int)v9 >= LODWORD(v20->max_length) )
        break;
      Bdata = v20->m_Items[v9];
      if ( !Bdata )
        goto LABEL_52;
      BattleCommandComponent__SetPowerUpCardValue(Bdata, 0, 0);
      v21 = this->fields.commandCompArray;
      if ( !v21 )
        goto LABEL_52;
      if ( (unsigned int)v9 >= LODWORD(v21->max_length) || (unsigned int)v9 >= LODWORD(list->max_length) )
        break;
      if ( !*v12 )
        goto LABEL_52;
      Bdata = v21->m_Items[v9];
      if ( !Bdata )
        goto LABEL_52;
      BattleCommandComponent__SetPowerUpCardIcon(Bdata, (*v12)->fields.commandCardParam, 2, 0, 0);
      p_commandlist = this->fields.p_commandlist;
      if ( !p_commandlist )
        goto LABEL_52;
      if ( (unsigned int)v9 >= LODWORD(p_commandlist->max_length) )
        break;
      Bdata = (BattleCommandComponent_o *)p_commandlist->m_Items[v9];
      if ( !Bdata )
        goto LABEL_52;
      Bdata = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)Bdata,
                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !Bdata )
        goto LABEL_52;
      v34.fields.r = 1.0;
      v34.fields.g = 1.0;
      v34.fields.b = 1.0;
      v34.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Bdata, v34, 0);
      max_length = list->max_length;
      v8 = v9 + 1;
      if ( (int)v9 + 1 >= max_length )
        goto LABEL_36;
    }
LABEL_67:
    sub_2213CE4(Bdata);
  }
LABEL_36:
  v23 = this->fields.p_commandlist;
  if ( !v23 )
    goto LABEL_52;
  v24 = 0;
  while ( 1 )
  {
    v25 = v23->max_length;
    if ( (int)v24 >= (int)v25 )
      break;
    v26 = this->fields.commandCompArray;
    if ( !v26 )
      goto LABEL_52;
    if ( v24 >= LODWORD(v26->max_length) )
      goto LABEL_67;
    Bdata = v26->m_Items[v24];
    if ( Bdata )
    {
      BattleCommandComponent__setTouchFlg(Bdata, 0, 0);
      v27 = this->fields.p_commandlist;
      if ( v27 )
      {
        if ( v24 >= LODWORD(v27->max_length) )
          goto LABEL_67;
        Bdata = (BattleCommandComponent_o *)v27->m_Items[v24];
        if ( Bdata )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Bdata,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITweener___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
          Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0,
                                                0);
          if ( ((unsigned __int8)Bdata & 1) != 0 )
          {
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
            UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Component_object, 0);
          }
          v23 = this->fields.p_commandlist;
          ++v24;
          if ( v23 )
            continue;
        }
      }
    }
    goto LABEL_52;
  }
  if ( v25 <= 8 )
    goto LABEL_67;
  v30 = (UnityEngine_Object_o *)v23->m_Items[8];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
  if ( ((unsigned __int8)Bdata & 1) != 0 )
  {
    v31 = this->fields.commandCompArray;
    if ( !v31 )
      goto LABEL_52;
    if ( LODWORD(v31->max_length) <= 8 )
      goto LABEL_67;
    v32 = (UnityEngine_Object_o *)v31->m_Items[8];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v32, 0, 0);
    if ( ((unsigned __int8)Bdata & 1) != 0 )
    {
      v33 = this->fields.commandCompArray;
      if ( v33 )
      {
        if ( LODWORD(v33->max_length) <= 8 )
          goto LABEL_67;
        Bdata = v33->m_Items[8];
        if ( Bdata )
        {
          BattleCommandComponent__setData(Bdata, 0, 0, 0, 1, 0, 1, 0);
          return;
        }
      }
LABEL_52:
      sub_2213CDC(Bdata, v6);
    }
  }
}


void BattlePerformanceCommandCard__resetCommandCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v7; // x21
  int max_length; // w9
  unsigned int v9; // w22
  struct UnityEngine_GameObject_array *v10; // x8

  if ( (byte_59729D8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_2213A60(&StringLiteral_17494/*"anim_wait"*/);
    byte_59729D8 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_17494/*"anim_wait"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_14:
    sub_2213CDC(Component_object, v5);
  v7 = 9;
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( Component_object )
      {
        BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)Component_object, 0, 0);
        v10 = this->fields.p_commandlist;
        if ( v10 )
        {
          if ( v9 >= LODWORD(v10->max_length) )
LABEL_16:
            sub_2213CE4(Component_object);
          Component_object = (Il2CppObject *)*((_QWORD *)&v10->obj.klass + v7);
          if ( Component_object )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            if ( Component_object )
            {
              BattleCommandComponent__initView((BattleCommandComponent_o *)Component_object, 0);
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


void BattlePerformanceCommandCard__selectAutoCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned int v4; // w21
  unsigned int max_length; // w9
  BattleCommandComponent_o *v6; // x20
  int v7; // w20
  BattlePerformanceCommandCard_o *v8; // x8

  v2 = this;
  if ( (byte_5972A17 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22523/*"markindex"*/);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&StringLiteral_12025/*"SELECTCARD"*/);
    byte_5972A17 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= (int)max_length )
      return;
    if ( v4 >= max_length )
      sub_2213CE4(this);
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
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v6, 0);
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    commandCompArray = v2->fields.commandCompArray;
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v6, 0);
  if ( !v2->fields.commandfsm
    || (v7 = (int)this, (this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm(v2->fields.commandfsm, 0)) == 0)
    || (this = (BattlePerformanceCommandCard_o *)this->fields.selectinfo_sprite) == 0
    || (this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                   (System_String_o *)StringLiteral_22523/*"markindex"*/,
                                                   0)) == 0
    || (v8 = this,
        this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm,
        LODWORD(v8->fields.commandfsm) = v7,
        !this) )
  {
LABEL_12:
    sub_2213CDC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12025/*"SELECTCARD"*/, 0);
}


void BattlePerformanceCommandCard__selectCommandCard(
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
    sub_2213CDC(v5, v6);
  perf->fields.istactical = atcount == 3;
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__selectOK(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned int v6; // w22
  unsigned int max_length; // w9
  Il2CppClass **v8; // x8
  BattleCommandComponent_o *v9; // x21
  const MethodInfo *v10; // x3
  struct System_Int32_array *selectcommand; // x9
  int v12; // w10
  int32_t v13; // w12
  __int64 *v14; // x8
  unsigned int v15; // w26
  BattlePerformanceCommandCard_o **v16; // x24
  unsigned int v17; // w9
  Il2CppClass **v18; // x8
  BattleCommandComponent_o *v19; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x22
  __int64 v21; // x23
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Il2CppClass **v29; // x0
  struct UISprite_o *selectinfo_sprite; // x22
  System_String_o *v31; // x0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v33; // x8
  UnityEngine_GameObject_o *v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  BattlePerformanceCommandCard_o *v41; // x23
  BattlePerformanceCommandCard_o *v42; // x1
  BattlePerformanceCommandCard_o **v43; // x25
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  BattlePerformanceCommandCard_o *v50; // x24
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int32_t v57; // w1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  BattlePerformanceCommandCard_o *v64; // x24
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  int32_t v71; // w1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  BattlePerformanceCommandCard_o *v78; // x24
  __int64 v79; // x1
  System_Collections_Hashtable_o *v80; // x0
  __int64 v81; // x1
  float v82; // s10
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  const MethodInfo *v84; // x3
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  int32_t v86; // w1
  const MethodInfo *v87; // x2
  int32_t CommandType; // w0
  const MethodInfo *v89; // x2
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v91; // x1
  int32_t drawcount; // w9
  int32_t maxdrawcount; // w8
  int32_t v94; // w9
  struct System_Int32_array *v95; // x8
  __int64 *v96; // x8
  System_Action_o *v97; // x20
  __int64 v98; // x0
  char v99[4]; // [xsp+8h] [xbp-88h] BYREF
  int v100; // [xsp+Ch] [xbp-84h] BYREF
  int v101; // [xsp+18h] [xbp-78h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_59729E6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceCommandCard__selectOK_b__117_0__);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_5208/*"DISSELECT"*/);
    sub_2213A60(&StringLiteral_12024/*"SELECT"*/);
    sub_2213A60(&StringLiteral_3410/*"CANCEL"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_10049/*"OPEN_SEALED"*/);
    sub_2213A60(&StringLiteral_26344/*"y"*/);
    sub_2213A60(&StringLiteral_22006/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&iTween_TypeInfo);
    byte_59729E6 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  targetIndex = 0;
  if ( !commandCompArray )
    goto LABEL_87;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_98;
    v8 = &commandCompArray->obj.klass + (int)v6;
    v9 = (BattleCommandComponent_o *)v8[4];
    if ( !v9 )
      goto LABEL_87;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v8[4],
                                               markindex,
                                               0);
    if ( ((unsigned __int8)this & 1) != 0 && v9->fields.selectflg )
    {
      BattlePerformanceCommandCard__unselectCommandCard(v4, v9, markindex, v10);
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
      if ( this )
      {
        v14 = &StringLiteral_3410/*"CANCEL"*/;
        goto LABEL_24;
      }
      goto LABEL_87;
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v6;
    if ( !commandCompArray )
      goto LABEL_87;
  }
  if ( v4->fields.maxdrawcount <= v4->fields.drawcount )
  {
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v14 = &StringLiteral_5208/*"DISSELECT"*/;
LABEL_24:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v14, 0);
      return;
    }
    goto LABEL_87;
  }
  selectcommand = v4->fields.selectcommand;
  targetIndex = -1;
  if ( !selectcommand )
    goto LABEL_87;
  v12 = selectcommand->max_length;
  if ( v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v12 == v13 )
        goto LABEL_98;
      if ( selectcommand->m_Items[v13] == -1 )
        break;
      if ( (v12 & ~(v12 >> 31)) == ++v13 )
        goto LABEL_26;
    }
    targetIndex = v13;
  }
LABEL_26:
  v15 = 0;
  v16 = (BattlePerformanceCommandCard_o **)&StringLiteral_26344/*"y"*/;
  while ( 1 )
  {
    v17 = commandCompArray->max_length;
    if ( (int)v15 >= (int)v17 )
    {
      drawcount = v4->fields.drawcount;
      maxdrawcount = v4->fields.maxdrawcount;
      if ( drawcount < maxdrawcount )
      {
        v94 = drawcount + 1;
        v4->fields.drawcount = v94;
        BattlePerformanceCommandCard__selectCommandCard(v4, maxdrawcount - v94, method);
        v95 = v4->fields.selectcommand;
        if ( !v95 )
          goto LABEL_87;
        if ( (unsigned int)targetIndex >= LODWORD(v95->max_length) )
LABEL_98:
          sub_2213CE4(this);
        v95->m_Items[targetIndex] = markindex;
      }
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
      if ( this )
      {
        v96 = &StringLiteral_12024/*"SELECT"*/;
        goto LABEL_96;
      }
LABEL_87:
      sub_2213CDC(this, *(_QWORD *)&markindex);
    }
    if ( v15 >= v17 )
      goto LABEL_98;
    v18 = &commandCompArray->obj.klass + (int)v15;
    v19 = (BattleCommandComponent_o *)v18[4];
    if ( !v19 )
      goto LABEL_87;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v18[4],
                                               markindex,
                                               0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_86;
    if ( BattleCommandComponent__get_isSealed(v19, 0)
      || BattleCommandComponent__isTreasureDvc(v19, 0) && BattleCommandComponent__get_isKindOfDontAction(v19, 0) )
    {
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
      if ( !this )
        goto LABEL_87;
      v96 = &StringLiteral_10049/*"OPEN_SEALED"*/;
LABEL_96:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v96, 0);
      return;
    }
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(v19, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__get_SealStatus(v19, 0);
      if ( !this )
        goto LABEL_87;
      this = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_IsTreasureDeviceError(
                                                 (BattleCommandSealStatus_o *)this,
                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
    }
    selectedcomponents = v4->fields.selectedcomponents;
    v19->fields.selectflg = 1;
    if ( !selectedcomponents )
      goto LABEL_87;
    v21 = targetIndex;
    this = (BattlePerformanceCommandCard_o *)sub_2213BB4(v19, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_99;
    if ( (unsigned int)v21 >= LODWORD(selectedcomponents->max_length) )
      goto LABEL_98;
    v29 = &selectedcomponents->obj.klass + v21;
    v29[4] = (Il2CppClass *)v19;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v19, v23, v24, v25, v26, v27, v28);
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( !this )
      goto LABEL_87;
    this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
    if ( !this )
      goto LABEL_87;
    selectinfo_sprite = this->fields.selectinfo_sprite;
    v31 = System_Int32__ToString((int32_t)&targetIndex, 0);
    this = (BattlePerformanceCommandCard_o *)System_String__Concat_75651716(
                                               (System_String_o *)StringLiteral_12024/*"SELECT"*/,
                                               v31,
                                               0);
    if ( !selectinfo_sprite )
      goto LABEL_87;
    this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)selectinfo_sprite,
                                               (System_String_o *)this,
                                               0);
    p_commandlist = v4->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_87;
    if ( v15 >= LODWORD(p_commandlist->max_length) )
      goto LABEL_98;
    if ( !this )
      goto LABEL_87;
    HutongGames_PlayMaker_FsmGameObject__set_Value(
      (HutongGames_PlayMaker_FsmGameObject_o *)this,
      p_commandlist->m_Items[v15],
      0);
    v33 = v4->fields.p_commandlist;
    if ( !v33 )
      goto LABEL_87;
    if ( v15 >= LODWORD(v33->max_length) )
      goto LABEL_98;
    v34 = v33->m_Items[v15];
    this = (BattlePerformanceCommandCard_o *)sub_2213B20(object___TypeInfo, 6);
    if ( !this )
      goto LABEL_87;
    v41 = this;
    this = *v16;
    if ( *v16 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v41->klass->_1.element_class);
      if ( !this )
        goto LABEL_99;
    }
    if ( !LODWORD(v41->fields.m_CancellationTokenSource) )
      goto LABEL_98;
    v42 = *v16;
    v43 = v16;
    v41->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)*v16;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v41->fields.COMMAND_STAMP_POS_X,
      (int32_t)v42,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    v101 = 20;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984348, &v101);
    v50 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v41->klass->_1.element_class);
      if ( !this )
        goto LABEL_99;
    }
    if ( ((__int64)v41->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
      goto LABEL_98;
    *(_QWORD *)&v41->fields.COMMAND_STAMP_POS_Y = v50;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v41->fields.COMMAND_STAMP_POS_Y,
      (int32_t)v50,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_25366/*"time"*/;
    if ( StringLiteral_25366/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_25366/*"time"*/, v41->klass->_1.element_class);
      if ( !this )
        goto LABEL_99;
    }
    if ( LODWORD(v41->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_98;
    v57 = StringLiteral_25366/*"time"*/;
    *(_QWORD *)&v41->fields.CARD_ROOT_BASE_X = StringLiteral_25366/*"time"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->fields.CARD_ROOT_BASE_X, v57, v51, v52, v53, v54, v55, v56);
    v100 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984378, &v100);
    v64 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v41->klass->_1.element_class);
      if ( !this )
        goto LABEL_99;
    }
    if ( ((__int64)v41->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
      goto LABEL_98;
    v41->fields.commandfsm = (struct PlayMakerFSM_o *)v64;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->fields.commandfsm, (int32_t)v64, v58, v59, v60, v61, v62, v63);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22006/*"islocal"*/;
    if ( StringLiteral_22006/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_22006/*"islocal"*/, v41->klass->_1.element_class);
      if ( !this )
        goto LABEL_99;
    }
    if ( LODWORD(v41->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_98;
    v71 = StringLiteral_22006/*"islocal"*/;
    v41->fields.commandprefab = (struct UnityEngine_GameObject_o *)StringLiteral_22006/*"islocal"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->fields.commandprefab, v71, v65, v66, v67, v68, v69, v70);
    v99[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984328, v99);
    v78 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v41->klass->_1.element_class);
      if ( !this )
      {
LABEL_99:
        v98 = sub_2213D00(this, v22);
        sub_2213BA0(v98, 0);
      }
    }
    if ( LODWORD(v41->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_98;
    v41->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v78;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v41->fields.selectCommandPrefab,
      (int32_t)v78,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v79);
    v80 = iTween__Hash((System_Object_array *)v41, 0);
    iTween__MoveTo_75293528(v34, v80, 0);
    BattleCommandComponent__stopAnimation(v19, 0);
    BattleCommandComponent__selectCard(v19, targetIndex, 0);
    v16 = v43;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v81);
    this = (BattlePerformanceCommandCard_o *)FSUtility__IsUnderVista(0);
    if ( ((unsigned __int8)this & 1) != 0 )
      v82 = 0.0;
    else
      v82 = 17.0;
    if ( v15 <= 4 )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
      COMMAND_STAMP_POS_X = v4->fields.COMMAND_STAMP_POS_X;
      if ( !COMMAND_STAMP_POS_X )
        goto LABEL_87;
      if ( v15 >= LODWORD(COMMAND_STAMP_POS_X->max_length) )
        goto LABEL_98;
      if ( !this )
        goto LABEL_87;
      position = UnityEngine_Transform__TransformPoint_83496448(
                   (UnityEngine_Transform_o *)this,
                   COMMAND_STAMP_POS_X->m_Items[v15],
                   v82 + v4->fields.COMMAND_STAMP_POS_Y,
                   v4->fields.COMMAND_STAMP_POS_Z,
                   0);
    }
    else
    {
      commandTransformArray = v4->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_87;
      if ( v15 >= LODWORD(commandTransformArray->max_length) )
        goto LABEL_98;
      this = (BattlePerformanceCommandCard_o *)commandTransformArray->m_Items[v15];
      if ( !this )
        goto LABEL_87;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
    }
    BattlePerformanceCommandCard__SetSelectStamp(v4, targetIndex, position, v19, v84);
    if ( !targetIndex )
    {
      CommandType = BattleCommandComponent__getCommandType(v19, 0);
      started = BattlePerformanceCommandCard__coStartFirstBonus(v4, CommandType, v89);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v4, started, 0);
    }
    BattlePerformanceCommandCard__checkChainBonus(v4, v86, v87);
    BattlePerformanceCommandCard__checkMaskEnemy(v4, v91);
LABEL_86:
    commandCompArray = v4->fields.commandCompArray;
    ++v15;
    if ( !commandCompArray )
      goto LABEL_87;
  }
  v97 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v97, (Il2CppObject *)v4, Method_BattlePerformanceCommandCard__selectOK_b__117_0__, 0);
  BattleCommandComponent__PlayTDErrorAnimation(v19, v97, 0);
}


void BattlePerformanceCommandCard__setAtkButtonFlg(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isPressAtkBtn = flg;
  BattlePerformanceCommandCard__SetBackTacticalButton(this, flg, method);
}


void BattlePerformanceCommandCard__setComboEffectPrefab(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        UnityEngine_GameObject_o **prefab,
        int32_t *seName,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_GameObject_o **p_cutin_ordererror; // x8
  UnityEngine_GameObject_o *v21; // x1
  int32_t flashtype; // w23
  __int64 v23; // x1
  int32_t samecount; // w8
  int32_t v25; // w23
  __int64 v26; // x1
  int32_t v27; // w8
  int32_t v28; // w23
  int32_t v29; // w8

  if ( (byte_59729F7 & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    byte_59729F7 = 1;
  }
  *seName = -1;
  *prefab = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)prefab,
    0,
    (System_String_o *)prefab,
    (System_String_o *)seName,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !combo )
    sub_2213CDC(v12, v13);
  if ( combo->fields.chainError )
  {
    *seName = 27;
    p_cutin_ordererror = &this->fields.cutin_ordererror;
LABEL_6:
    v21 = *p_cutin_ordererror;
    *prefab = *p_cutin_ordererror;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)prefab, (int32_t)v21, v14, v15, v16, v17, v18, v19);
    return;
  }
  if ( combo->fields.flash )
  {
    *seName = 25;
    flashtype = combo->fields.flashtype;
    if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v13);
    if ( BattleCommand__isARTS(flashtype, 0) )
    {
      samecount = combo->fields.samecount;
      if ( (unsigned int)(samecount - 1) < 2 )
      {
        p_cutin_ordererror = &this->fields.cutin_trinity_a;
        goto LABEL_6;
      }
      if ( samecount == 3 )
      {
        *seName = 26;
        p_cutin_ordererror = &this->fields.cutin_grand_a;
        goto LABEL_6;
      }
    }
    else
    {
      v25 = combo->fields.flashtype;
      if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v23);
      if ( BattleCommand__isBUSTER(v25, 0) )
      {
        v27 = combo->fields.samecount;
        if ( (unsigned int)(v27 - 1) < 2 )
        {
          p_cutin_ordererror = &this->fields.cutin_trinity_b;
          goto LABEL_6;
        }
        if ( v27 == 3 )
        {
          *seName = 26;
          p_cutin_ordererror = &this->fields.cutin_grand_b;
          goto LABEL_6;
        }
      }
      else
      {
        v28 = combo->fields.flashtype;
        if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v26);
        if ( BattleCommand__isQUICK(v28, 0) )
        {
          v29 = combo->fields.samecount;
          if ( (unsigned int)(v29 - 1) < 2 )
          {
            p_cutin_ordererror = &this->fields.cutin_trinity_q;
            goto LABEL_6;
          }
          if ( v29 == 3 )
          {
            *seName = 26;
            p_cutin_ordererror = &this->fields.cutin_grand_q;
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
      if ( BattleComboData__isExtraAttack(combo, 0) )
      {
        *seName = 26;
        p_cutin_ordererror = &this->fields.cutin_grand_m;
      }
      else
      {
        *seName = 25;
        p_cutin_ordererror = &this->fields.cutin_trinity_m;
      }
      goto LABEL_6;
    }
    if ( combo->fields.samecount == 3 )
    {
      *seName = 26;
      p_cutin_ordererror = &this->fields.cutin_single;
      goto LABEL_6;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__setCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_array *list,
        int32_t maxdrawcount,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 ServantNumber; // x0
  BattleCommandData_o *v11; // x1
  struct BattleCommandData_array *commandlist; // x11
  il2cpp_array_size_t max_length; // x10
  __int64 v14; // x9
  __int64 v15; // x8
  __int64 v16; // x10
  BattleCommandData_o **m_Items; // x11
  BattleCommandData_o *v18; // x12
  struct BattleCommandComponent_array *commandCompArray; // x8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct BattleCommandComponent_array *v26; // x8
  _DWORD *v27; // x21
  int v28; // w24
  int v29; // w9
  BattleCommandComponent_o *v30; // x23
  __int64 v31; // x1
  _DWORD *v32; // x26
  __int64 *v33; // x26
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v35; // x23
  struct UnityEngine_Transform_array *v36; // x8
  UnityEngine_Transform_o *v37; // x23
  __int64 v38; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  struct BattleCommandData_array *v40; // x8
  unsigned int v41; // w25
  struct UnityEngine_Transform_array *v42; // x8
  UnityEngine_Transform_o *v43; // x23
  struct UnityEngine_Transform_array *v44; // x8
  UnityEngine_Transform_o *v45; // x23
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  unsigned int v47; // w27
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x23
  _DWORD *v55; // x26
  BattleCommandComponent_o **v56; // x26
  struct BattleCommandData_array *v57; // x8
  BattleCommandData_o *v58; // x23
  BattleCommandComponent_o *v59; // x24
  struct UnityEngine_GameObject_array *v60; // x8
  struct System_Int32_array *selectcommand; // x10
  il2cpp_array_size_t v62; // x9
  __int64 v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  unsigned __int64 v66; // x19
  __int64 v67; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x8
  struct BattleCommandComponent_array *v69; // x8
  __int64 v70; // x0
  __int64 v72; // [xsp+18h] [xbp-68h]
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59729E0 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent___TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&iTween_TypeInfo);
    byte_59729E0 = 1;
  }
  this->fields.commandlist = list;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandlist,
    (int32_t)list,
    *(System_String_o **)&maxdrawcount,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  commandlist = this->fields.commandlist;
  if ( !commandlist )
    goto LABEL_73;
  max_length = commandlist->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = (unsigned int)max_length & ~((int)max_length >> 31);
    v15 = 0;
    v16 = (unsigned int)commandlist->max_length;
    m_Items = commandlist->m_Items;
    while ( v16 != v15 )
    {
      v18 = m_Items[v15];
      if ( v18 )
        v18->fields.markindex = v15;
      if ( v14 == ++v15 )
        goto LABEL_10;
    }
LABEL_88:
    sub_2213CE4(ServantNumber);
  }
LABEL_10:
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_73;
  ServantNumber = sub_2213B20(BattleCommandComponent___TypeInfo, LODWORD(commandCompArray->max_length));
  v26 = this->fields.commandCompArray;
  if ( !v26 )
    goto LABEL_73;
  v72 = ServantNumber + 32;
  v27 = (_DWORD *)ServantNumber;
  v28 = 5;
  while ( 1 )
  {
    v29 = v26->max_length;
    if ( v28 >= v29 )
      break;
    if ( v28 >= (unsigned int)v29 )
      goto LABEL_88;
    if ( v27 )
    {
      v30 = v26->m_Items[v28];
      if ( v30 )
      {
        ServantNumber = sub_2213BB4(v30, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
        if ( !ServantNumber )
        {
LABEL_89:
          v70 = sub_2213D00(ServantNumber, v31);
          sub_2213BA0(v70, 0);
        }
      }
      if ( (unsigned int)v28 >= v27[6] )
        goto LABEL_88;
      v32 = &v27[2 * v28];
      *((_QWORD *)v32 + 4) = v30;
      v33 = (__int64 *)(v32 + 8);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v72 + 8LL * v28), (int32_t)v30, v20, v21, v22, v23, v24, v25);
      if ( (unsigned int)v28 >= v27[6] )
        goto LABEL_88;
      ServantNumber = *v33;
      if ( *v33 )
      {
        BattleCommandComponent__setData((BattleCommandComponent_o *)ServantNumber, 0, 0, 0, 1, 0, 1, 0);
        commandTransformArray = this->fields.commandTransformArray;
        if ( commandTransformArray )
        {
          if ( (unsigned int)v28 >= LODWORD(commandTransformArray->max_length) )
            goto LABEL_88;
          v35 = commandTransformArray->m_Items[v28];
          if ( !byte_5969AE0 )
          {
            ServantNumber = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
          }
          if ( v35 )
          {
            UnityEngine_Transform__set_localPosition(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            v36 = this->fields.commandTransformArray;
            if ( v36 )
            {
              if ( (unsigned int)v28 >= LODWORD(v36->max_length) )
                goto LABEL_88;
              v37 = v36->m_Items[v28];
              if ( !byte_5969AE0 )
              {
                ServantNumber = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                byte_5969AE0 = 1;
              }
              if ( v37 )
              {
                UnityEngine_Transform__set_localScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
                if ( (unsigned int)v28 >= v27[6] )
                  goto LABEL_88;
                ServantNumber = *v33;
                if ( *v33 )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ServantNumber, 0);
                  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v38);
                  ++v28;
                  iTween__Stop_75402912(gameObject, 0);
                  v26 = this->fields.commandCompArray;
                  if ( v26 )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_73;
  }
  v40 = this->fields.commandlist;
  if ( !v40 )
    goto LABEL_73;
  v41 = 0;
  while ( (signed int)v41 < SLODWORD(v40->max_length) )
  {
    v42 = this->fields.commandTransformArray;
    if ( !v42 )
      goto LABEL_73;
    if ( v41 >= LODWORD(v42->max_length) )
      goto LABEL_88;
    v43 = v42->m_Items[v41];
    if ( !byte_5969AE0 )
    {
      ServantNumber = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v43 )
      goto LABEL_73;
    UnityEngine_Transform__set_localPosition(v43, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    v44 = this->fields.commandTransformArray;
    if ( !v44 )
      goto LABEL_73;
    if ( v41 >= LODWORD(v44->max_length) )
      goto LABEL_88;
    v45 = v44->m_Items[v41];
    if ( !byte_5969AE5 )
    {
      ServantNumber = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v45 )
      goto LABEL_73;
    UnityEngine_Transform__set_localScale(v45, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v40 = this->fields.commandlist;
    if ( !v40 )
      goto LABEL_73;
    if ( v41 >= LODWORD(v40->max_length) )
      goto LABEL_88;
    if ( v41 >= 5 )
    {
      v11 = v40->m_Items[v41];
      if ( v11 )
      {
        ServantNumber = BattlePerformanceCommandCard__GetServantNumber(this, v11, (const MethodInfo *)v20);
        p_commandlist = this->fields.p_commandlist;
        if ( !p_commandlist )
          goto LABEL_73;
        v47 = ServantNumber + 5;
        if ( (unsigned int)(ServantNumber + 5) >= LODWORD(p_commandlist->max_length) )
          goto LABEL_88;
        ServantNumber = (__int64)p_commandlist->m_Items[v47];
        if ( !ServantNumber )
          goto LABEL_73;
        ServantNumber = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)ServantNumber,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( !v27 )
          goto LABEL_73;
        v54 = ServantNumber;
        if ( ServantNumber )
        {
          ServantNumber = sub_2213BB4(ServantNumber, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
          if ( !ServantNumber )
            goto LABEL_89;
        }
        if ( v47 >= v27[6] )
          goto LABEL_88;
        v55 = &v27[2 * v47];
        *((_QWORD *)v55 + 4) = v54;
        v56 = (BattleCommandComponent_o **)(v55 + 8);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v72 + 8LL * (int)v47), v54, v48, v49, v50, v51, v52, v53);
        if ( v47 >= v27[6] )
          goto LABEL_88;
        v57 = this->fields.commandlist;
        if ( !v57 )
          goto LABEL_73;
        if ( v41 >= LODWORD(v57->max_length) )
          goto LABEL_88;
        v58 = v57->m_Items[v41];
        if ( !v58 )
          goto LABEL_73;
        ServantNumber = (__int64)this->fields.Bdata;
        if ( !ServantNumber )
          goto LABEL_73;
        v59 = *v56;
        ServantNumber = (__int64)BattleData__getServantData((BattleData_o *)ServantNumber, v58->fields.uniqueId, 0);
        if ( !v59 )
          goto LABEL_73;
        BattleCommandComponent__setData(v59, v58, (BattleServantData_o *)ServantNumber, 0, 1, 0, 1, 0);
        v60 = this->fields.p_commandlist;
        if ( !v60 )
          goto LABEL_73;
        if ( v47 >= LODWORD(v60->max_length) )
          goto LABEL_88;
        ServantNumber = (__int64)v60->m_Items[v47];
        if ( !ServantNumber )
          goto LABEL_73;
        ServantNumber = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)ServantNumber,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !ServantNumber )
          goto LABEL_73;
        v73.fields.r = 0.0;
        v73.fields.g = 0.0;
        v73.fields.b = 0.0;
        v73.fields.a = 0.01;
        UIWidget__set_color((UIWidget_o *)ServantNumber, v73, 0);
        v40 = this->fields.commandlist;
      }
    }
    ++v41;
    if ( !v40 )
      goto LABEL_73;
  }
  selectcommand = this->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_73;
  v62 = selectcommand->max_length;
  if ( (int)v62 >= 1 )
  {
    v63 = (unsigned int)v62 & ~((int)v62 >> 31);
    v64 = (unsigned int)selectcommand->max_length;
    v65 = selectcommand->m_Items;
    while ( v64 )
    {
      --v63;
      --v64;
      *v65++ = -1;
      if ( !v63 )
        goto LABEL_79;
    }
    goto LABEL_88;
  }
LABEL_79:
  v66 = 0;
  v67 = 32;
  do
  {
    selectedcomponents = this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_73;
    if ( v66 >= LODWORD(selectedcomponents->max_length) )
      goto LABEL_88;
    *(Il2CppClass **)((char *)&selectedcomponents->obj.klass + v67) = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)selectedcomponents + v67), 0, v20, v21, v22, v23, v24, v25);
    ++v66;
    v67 += 8;
  }
  while ( v66 != 3 );
  v69 = this->fields.selectedcomponents;
  if ( !v69 )
    goto LABEL_73;
  if ( (v69->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_88;
  ServantNumber = (__int64)v69->m_Items[3];
  if ( !ServantNumber
    || (ServantNumber = (__int64)UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)ServantNumber,
                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_73:
    sub_2213CDC(ServantNumber, v11);
  }
  v74.fields.r = 0.0;
  v74.fields.g = 0.0;
  v74.fields.b = 0.0;
  v74.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)ServantNumber, v74, 0);
  this->fields.drawcount = 0;
  this->fields.maxdrawcount = maxdrawcount;
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__setCountRemaining(
        BattlePerformanceCommandCard_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_Object_o *selectinfo_sprite; // x21
  UISprite_o *v6; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5972A00 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21287/*"img_battle_select{0:0}"*/);
    byte_5972A00 = 1;
  }
  selectinfo_sprite = (UnityEngine_Object_o *)this->fields.selectinfo_sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
  if ( UnityEngine_Object__op_Inequality(selectinfo_sprite, 0, 0) )
  {
    v6 = this->fields.selectinfo_sprite;
    v10 = count;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v10);
    v8 = System_String__Format((System_String_o *)StringLiteral_21287/*"img_battle_select{0:0}"*/, v7, 0);
    if ( !v6 )
      sub_2213CDC(v8, v9);
    UISprite__set_spriteName(v6, v8, 0);
  }
}


void BattlePerformanceCommandCard__setFirstAura(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *comp,
        int32_t type,
        const MethodInfo *method)
{
  _BOOL8 isQUICK; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o **p_firstaura_q; // x8

  if ( (byte_59729EE & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    byte_59729EE = 1;
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, comp);
  isQUICK = BattleCommand__isQUICK(type, 0);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_q;
LABEL_18:
      BattleCommandComponent__addFirstAura(comp, *p_firstaura_q, 0);
      return;
    }
    goto LABEL_20;
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v8);
  isQUICK = BattleCommand__isARTS(type, 0);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_a;
      goto LABEL_18;
    }
LABEL_20:
    sub_2213CDC(isQUICK, v8);
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v8);
  isQUICK = BattleCommand__isBUSTER(type, 0);
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


void BattlePerformanceCommandCard__setPrevStarsFlg(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isPrevStar = flg;
}


void BattlePerformanceCommandCard__set_IsPlayingBackStar(
        BattlePerformanceCommandCard_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlayingBackStar_k__BackingField = value;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__showComboEffect(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        System_String_o *endproc,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_59729F4 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceCommandCard__showComboEffect_d__138_TypeInfo);
    byte_59729F4 = 1;
  }
  v7 = sub_2213CCC(BattlePerformanceCommandCard__showComboEffect_d__138_TypeInfo);
  BattlePerformanceCommandCard__showComboEffect_d__138___ctor(
    (BattlePerformanceCommandCard__showComboEffect_d__138_o *)v7,
    0,
    0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = combo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)combo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endproc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)endproc, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__showComboEffectNormal(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_59729F6 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceCommandCard__showComboEffectNormal_d__140_TypeInfo);
    byte_59729F6 = 1;
  }
  v5 = sub_2213CCC(BattlePerformanceCommandCard__showComboEffectNormal_d__140_TypeInfo);
  BattlePerformanceCommandCard__showComboEffectNormal_d__140___ctor(
    (BattlePerformanceCommandCard__showComboEffectNormal_d__140_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = combo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)combo, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__showComboEffectShort(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_59729F5 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceCommandCard__showComboEffectShort_d__139_TypeInfo);
    byte_59729F5 = 1;
  }
  v5 = sub_2213CCC(BattlePerformanceCommandCard__showComboEffectShort_d__139_TypeInfo);
  BattlePerformanceCommandCard__showComboEffectShort_d__139___ctor(
    (BattlePerformanceCommandCard__showComboEffectShort_d__139_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = combo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)combo, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattlePerformanceCommandCard__startComboEffect(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_Collections_IEnumerator_o *v6; // x1

  v3 = this;
  if ( (byte_59729F3 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_59729F3 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0 )
    sub_2213CDC(this, method);
  v6 = BattlePerformanceCommandCard__showComboEffect(
         v3,
         data->fields.combodata,
         (System_String_o *)StringLiteral_5657/*"END_PROC"*/,
         v2);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v3, v6, 0);
}


void BattlePerformanceCommandCard__startFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = BattlePerformanceCommandCard__coStartFirstBonus(this, type, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


void BattlePerformanceCommandCard__startMiniCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  struct BattleCommandComponent_array *v5; // x8
  struct BattleCommandComponent_array *v6; // x8
  struct BattleCommandComponent_array *v7; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  BattlePerformanceCommandCard_o *v15; // x21
  __int64 v16; // x1
  int32_t v17; // w1
  struct UnityEngine_Transform_array *miniPos; // x8
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  BattlePerformanceCommandCard_o *v25; // x22
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  BattlePerformanceCommandCard_o *v39; // x22
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int32_t v46; // w1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  BattlePerformanceCommandCard_o *v53; // x22
  __int64 v54; // x1
  System_Collections_Hashtable_o *v55; // x0
  struct BattleCommandComponent_array *v56; // x8
  UnityEngine_GameObject_o *v57; // x20
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  BattlePerformanceCommandCard_o *v64; // x21
  int32_t v65; // w1
  float z; // w9
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  BattlePerformanceCommandCard_o *v73; // x22
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  int32_t v80; // w1
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  BattlePerformanceCommandCard_o *v87; // x22
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  int32_t v94; // w1
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  BattlePerformanceCommandCard_o *v101; // x22
  System_Collections_Hashtable_o *v102; // x0
  __int64 v103; // x0
  int v104; // [xsp+8h] [xbp-88h] BYREF
  int v105; // [xsp+Ch] [xbp-84h] BYREF
  __int64 v106; // [xsp+10h] [xbp-80h] BYREF
  float v107; // [xsp+18h] [xbp-78h]
  int v108; // [xsp+1Ch] [xbp-74h] BYREF
  int v109; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o position; // [xsp+24h] [xbp-6Ch] BYREF

  v2 = this;
  if ( (byte_5972A01 & 1) == 0 )
  {
    sub_2213A60(&iTween_EaseType_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    sub_2213A60(&StringLiteral_19609/*"easetype"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23916/*"position"*/);
    sub_2213A60(&StringLiteral_24403/*"scale"*/);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&iTween_TypeInfo);
    byte_5972A01 = 1;
  }
  v3 = 0;
  do
  {
    selectedcomponents = v2->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_65;
    if ( (unsigned int)v3 >= LODWORD(selectedcomponents->max_length) )
      goto LABEL_64;
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[v3];
    if ( !this )
      goto LABEL_65;
    BattleCommandComponent__setMoveMode((BattleCommandComponent_o *)this, 0);
    v5 = v2->fields.selectedcomponents;
    if ( !v5 )
      goto LABEL_65;
    if ( (unsigned int)v3 >= LODWORD(v5->max_length) )
      goto LABEL_64;
    this = (BattlePerformanceCommandCard_o *)v5->m_Items[v3];
    if ( !this )
      goto LABEL_65;
    BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)this, 0, 0);
    v6 = v2->fields.selectedcomponents;
    if ( !v6 )
      goto LABEL_65;
    if ( (unsigned int)v3 >= LODWORD(v6->max_length) )
      goto LABEL_64;
    this = (BattlePerformanceCommandCard_o *)v6->m_Items[v3];
    if ( !this )
      goto LABEL_65;
    BattleCommandComponent__SetTreasureDeviceTypeChange((BattleCommandComponent_o *)this, 0, 0, 0);
    v7 = v2->fields.selectedcomponents;
    if ( !v7 )
      goto LABEL_65;
    if ( (unsigned int)v3 >= LODWORD(v7->max_length) )
      goto LABEL_64;
    this = (BattlePerformanceCommandCard_o *)v7->m_Items[v3];
    if ( !this )
      goto LABEL_65;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this = (BattlePerformanceCommandCard_o *)sub_2213B20(object___TypeInfo, 6);
    if ( !this )
      goto LABEL_65;
    v15 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23916/*"position"*/;
    if ( StringLiteral_23916/*"position"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_23916/*"position"*/, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
      goto LABEL_64;
    v17 = StringLiteral_23916/*"position"*/;
    v15->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)StringLiteral_23916/*"position"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->fields.COMMAND_STAMP_POS_X, v17, v9, v10, v11, v12, v13, v14);
    miniPos = v2->fields.miniPos;
    if ( !miniPos )
      goto LABEL_65;
    if ( (unsigned int)v3 >= LODWORD(miniPos->max_length) )
      goto LABEL_64;
    this = (BattlePerformanceCommandCard_o *)miniPos->m_Items[v3];
    if ( !this )
      goto LABEL_65;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position);
    v25 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( ((__int64)v15->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
      goto LABEL_64;
    *(_QWORD *)&v15->fields.COMMAND_STAMP_POS_Y = v25;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v15->fields.COMMAND_STAMP_POS_Y,
      (int32_t)v25,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_25366/*"time"*/;
    if ( StringLiteral_25366/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_25366/*"time"*/, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_64;
    v32 = StringLiteral_25366/*"time"*/;
    *(_QWORD *)&v15->fields.CARD_ROOT_BASE_X = StringLiteral_25366/*"time"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->fields.CARD_ROOT_BASE_X, v32, v26, v27, v28, v29, v30, v31);
    v109 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984378, &v109);
    v39 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( ((__int64)v15->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
      goto LABEL_64;
    v15->fields.commandfsm = (struct PlayMakerFSM_o *)v39;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->fields.commandfsm, (int32_t)v39, v33, v34, v35, v36, v37, v38);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_19609/*"easetype"*/;
    if ( StringLiteral_19609/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_19609/*"easetype"*/, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_64;
    v46 = StringLiteral_19609/*"easetype"*/;
    v15->fields.commandprefab = (struct UnityEngine_GameObject_o *)StringLiteral_19609/*"easetype"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->fields.commandprefab, v46, v40, v41, v42, v43, v44, v45);
    v108 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v108);
    v53 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v15->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_64;
    v15->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v53;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v15->fields.selectCommandPrefab,
      (int32_t)v53,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v54);
    v55 = iTween__Hash((System_Object_array *)v15, 0);
    iTween__MoveTo_75293528(gameObject, v55, 0);
    v56 = v2->fields.selectedcomponents;
    if ( !v56 )
      goto LABEL_65;
    if ( (unsigned int)v3 >= LODWORD(v56->max_length) )
      goto LABEL_64;
    this = (BattlePerformanceCommandCard_o *)v56->m_Items[v3];
    if ( !this
      || (v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
          (this = (BattlePerformanceCommandCard_o *)sub_2213B20(object___TypeInfo, 6)) == 0) )
    {
LABEL_65:
      sub_2213CDC(this, method);
    }
    v64 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24403/*"scale"*/;
    if ( StringLiteral_24403/*"scale"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_24403/*"scale"*/, v64->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( !LODWORD(v64->fields.m_CancellationTokenSource) )
      goto LABEL_64;
    v65 = StringLiteral_24403/*"scale"*/;
    v64->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)StringLiteral_24403/*"scale"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->fields.COMMAND_STAMP_POS_X, v65, v58, v59, v60, v61, v62, v63);
    z = v2->fields.miniScale.fields.z;
    v106 = *(_QWORD *)&v2->fields.miniScale.fields.x;
    v107 = z;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v106);
    v73 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v64->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( ((__int64)v64->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
      goto LABEL_64;
    *(_QWORD *)&v64->fields.COMMAND_STAMP_POS_Y = v73;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v64->fields.COMMAND_STAMP_POS_Y,
      (int32_t)v73,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_25366/*"time"*/;
    if ( StringLiteral_25366/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_25366/*"time"*/, v64->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( LODWORD(v64->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_64;
    v80 = StringLiteral_25366/*"time"*/;
    *(_QWORD *)&v64->fields.CARD_ROOT_BASE_X = StringLiteral_25366/*"time"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->fields.CARD_ROOT_BASE_X, v80, v74, v75, v76, v77, v78, v79);
    v105 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984378, &v105);
    v87 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v64->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( ((__int64)v64->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
      goto LABEL_64;
    v64->fields.commandfsm = (struct PlayMakerFSM_o *)v87;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->fields.commandfsm, (int32_t)v87, v81, v82, v83, v84, v85, v86);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_19609/*"easetype"*/;
    if ( StringLiteral_19609/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_19609/*"easetype"*/, v64->klass->_1.element_class);
      if ( !this )
        goto LABEL_66;
    }
    if ( LODWORD(v64->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_64;
    v94 = StringLiteral_19609/*"easetype"*/;
    v64->fields.commandprefab = (struct UnityEngine_GameObject_o *)StringLiteral_19609/*"easetype"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->fields.commandprefab, v94, v88, v89, v90, v91, v92, v93);
    v104 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v104);
    v101 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v64->klass->_1.element_class);
      if ( !this )
      {
LABEL_66:
        v103 = sub_2213D00(this, v16);
        sub_2213BA0(v103, 0);
      }
    }
    if ( LODWORD(v64->fields.m_CancellationTokenSource) <= 5 )
LABEL_64:
      sub_2213CE4(this);
    v64->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v101;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v64->fields.selectCommandPrefab,
      (int32_t)v101,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
    v102 = iTween__Hash((System_Object_array *)v64, 0);
    iTween__ScaleTo_75298996(v57, v102, 0);
    ++v3;
  }
  while ( (_DWORD)v3 != 4 );
}


void BattlePerformanceCommandCard__startOpenNpCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v3 = BattlePerformanceCommandCard__colOpenNpCard(this, method);
  started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  this->fields.openNpCoroutine = started;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.openNpCoroutine,
    (int32_t)started,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void BattlePerformanceCommandCard__stopFirstBonus(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v4; // x1
  Spawner_o *spawner; // x0

  if ( (byte_59729EC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729EC = 1;
  }
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(firstBonusObject, 0, 0) )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      sub_2213CDC(0, v4);
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0);
  }
}


void BattlePerformanceCommandCard__toggleHighSpeedMode(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *perf; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t v8; // w1
  const MethodInfo *v9; // x2

  if ( (byte_5972A25 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceCommandCard_toggleHighSpeedMode__);
    byte_5972A25 = 1;
  }
  data = (BattleData_o *)BattlePerformanceCommandCard__checkSpeedButtonTutorial(this, method);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    perf = this->fields.perf;
    if ( !perf || (data = perf->fields.data) == 0 )
      sub_2213CDC(data, v4);
    BattleData__toggleHighSpeedMode(data, 0);
    v6 = Method_BattlePerformanceCommandCard_toggleHighSpeedMode__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_toggleHighSpeedMode__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_BattlePerformanceCommandCard_toggleHighSpeedMode__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlayCommonSe(v7, 9, 0, 0);
    BattlePerformanceCommandCard__updateHighSpeedObject(this, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__touchCommandCard(
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
  BattleLogic_o *v15; // x8

  if ( (byte_59729E3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22523/*"markindex"*/);
    sub_2213A60(&StringLiteral_12025/*"SELECTCARD"*/);
    byte_59729E3 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_30;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0);
  if ( !this->fields.logic )
    goto LABEL_30;
  v6 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getTurn(this->fields.logic, 0);
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
  v9 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v9 >= max_length )
      return;
    if ( (unsigned int)v9 >= max_length )
      sub_2213CE4(logic);
    v11 = &commandCompArray->obj.klass + v9;
    v12 = v11[4];
    if ( !v12 )
      goto LABEL_30;
    logic = (BattleLogic_o *)BattleCommandComponent__checkMark((BattleCommandComponent_o *)v11[4], markindex, 0);
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
      logic = (BattleLogic_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)logic, 0);
      if ( logic )
      {
        logic = (BattleLogic_o *)logic->fields.logiclist;
        if ( logic )
        {
          logic = (BattleLogic_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                     (HutongGames_PlayMaker_FsmVariables_o *)logic,
                                     (System_String_o *)StringLiteral_22523/*"markindex"*/,
                                     0);
          if ( logic )
          {
            v15 = logic;
            logic = (BattleLogic_o *)this->fields.commandfsm;
            LODWORD(v15->fields.perf) = markindex;
            if ( logic )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_12025/*"SELECTCARD"*/, 0);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_2213CDC(logic, *(_QWORD *)&markindex);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__unselectCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *bc,
        int32_t markindex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v6; // x20
  struct System_Int32_array *selectcommand; // x12
  il2cpp_array_size_t max_length; // x11
  __int64 v9; // x10
  __int64 v10; // x9
  __int64 v11; // x11
  int32_t *m_Items; // x12
  unsigned int v13; // w24
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t drawcount; // w8
  int32_t maxdrawcount; // w9
  UnityEngine_GameObject_o *gameObject; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  BattlePerformanceCommandCard_o *v24; // x22
  __int64 v25; // x1
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  BattlePerformanceCommandCard_o *v33; // x23
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  BattlePerformanceCommandCard_o *v47; // x23
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  BattlePerformanceCommandCard_o *v61; // x23
  __int64 v62; // x1
  System_Collections_Hashtable_o *v63; // x0
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x3
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct BattleCommandComponent_array *v72; // x8
  Il2CppClass **v73; // x0
  int32_t v74; // w1
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x1
  __int64 v77; // x0
  char v78[4]; // [xsp+4h] [xbp-4Ch] BYREF
  int v79; // [xsp+8h] [xbp-48h] BYREF
  int v80; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_59729E5 & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_26344/*"y"*/);
    sub_2213A60(&StringLiteral_22006/*"islocal"*/);
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&iTween_TypeInfo);
    byte_59729E5 = 1;
  }
  selectcommand = v6->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_45;
  max_length = selectcommand->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = (unsigned int)max_length & ~((int)max_length >> 31);
    v10 = 0;
    v11 = (unsigned int)selectcommand->max_length;
    m_Items = selectcommand->m_Items;
    v13 = -1;
    do
    {
      if ( v11 == v10 )
        goto LABEL_44;
      if ( m_Items[v10] == markindex )
      {
        v13 = v10;
        m_Items[v10] = -1;
      }
      ++v10;
    }
    while ( v9 != v10 );
    if ( (v13 & 0x80000000) == 0 )
    {
      selectedcomponents = v6->fields.selectedcomponents;
      if ( selectedcomponents )
      {
        if ( (signed int)v13 >= SLODWORD(selectedcomponents->max_length) )
          return;
        if ( bc )
        {
          drawcount = v6->fields.drawcount;
          maxdrawcount = v6->fields.maxdrawcount;
          bc->fields.selectflg = 0;
          v6->fields.drawcount = --drawcount;
          BattlePerformanceCommandCard__selectCommandCard(
            v6,
            maxdrawcount - drawcount,
            *(const MethodInfo **)&markindex);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bc, 0);
          this = (BattlePerformanceCommandCard_o *)sub_2213B20(object___TypeInfo, 6);
          if ( this )
          {
            v24 = this;
            this = (BattlePerformanceCommandCard_o *)StringLiteral_26344/*"y"*/;
            if ( StringLiteral_26344/*"y"*/ )
            {
              this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_26344/*"y"*/, v24->klass->_1.element_class);
              if ( !this )
                goto LABEL_46;
            }
            if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
              goto LABEL_44;
            v26 = StringLiteral_26344/*"y"*/;
            v24->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)StringLiteral_26344/*"y"*/;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v24->fields.COMMAND_STAMP_POS_X,
              v26,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23);
            v80 = 0;
            this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984348, &v80);
            v33 = this;
            if ( this )
            {
              this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v24->klass->_1.element_class);
              if ( !this )
                goto LABEL_46;
            }
            if ( ((__int64)v24->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
              goto LABEL_44;
            *(_QWORD *)&v24->fields.COMMAND_STAMP_POS_Y = v33;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v24->fields.COMMAND_STAMP_POS_Y,
              (int32_t)v33,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
            this = (BattlePerformanceCommandCard_o *)StringLiteral_25366/*"time"*/;
            if ( StringLiteral_25366/*"time"*/ )
            {
              this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_25366/*"time"*/, v24->klass->_1.element_class);
              if ( !this )
                goto LABEL_46;
            }
            if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_44;
            v40 = StringLiteral_25366/*"time"*/;
            *(_QWORD *)&v24->fields.CARD_ROOT_BASE_X = StringLiteral_25366/*"time"*/;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v24->fields.CARD_ROOT_BASE_X,
              v40,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
            v79 = 1045220557;
            this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984378, &v79);
            v47 = this;
            if ( this )
            {
              this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v24->klass->_1.element_class);
              if ( !this )
                goto LABEL_46;
            }
            if ( ((__int64)v24->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
              goto LABEL_44;
            v24->fields.commandfsm = (struct PlayMakerFSM_o *)v47;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v24->fields.commandfsm,
              (int32_t)v47,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            this = (BattlePerformanceCommandCard_o *)StringLiteral_22006/*"islocal"*/;
            if ( StringLiteral_22006/*"islocal"*/ )
            {
              this = (BattlePerformanceCommandCard_o *)sub_2213BB4(StringLiteral_22006/*"islocal"*/, v24->klass->_1.element_class);
              if ( !this )
                goto LABEL_46;
            }
            if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 4 )
              goto LABEL_44;
            v54 = StringLiteral_22006/*"islocal"*/;
            v24->fields.commandprefab = (struct UnityEngine_GameObject_o *)StringLiteral_22006/*"islocal"*/;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v24->fields.commandprefab,
              v54,
              v48,
              v49,
              v50,
              v51,
              v52,
              v53);
            v78[0] = 1;
            this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(qword_5984328, v78);
            v61 = this;
            if ( this )
            {
              this = (BattlePerformanceCommandCard_o *)sub_2213BB4(this, v24->klass->_1.element_class);
              if ( !this )
              {
LABEL_46:
                v77 = sub_2213D00(this, v25);
                sub_2213BA0(v77, 0);
              }
            }
            if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 5 )
LABEL_44:
              sub_2213CE4(this);
            v24->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v61;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v24->fields.selectCommandPrefab,
              (int32_t)v61,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
            if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v62);
            v63 = iTween__Hash((System_Object_array *)v24, 0);
            iTween__MoveTo_75293528(gameObject, v63, 0);
            BattleCommandComponent__startMoveFloat(bc, 0);
            if ( v13 )
              BattlePerformanceCommandCard__setFirstAura(v6, bc, v6->fields.firstAuraType, v65);
            else
              BattlePerformanceCommandCard__cancelFirstBonus(v6, v64);
            v72 = v6->fields.selectedcomponents;
            if ( v72 )
            {
              if ( v13 < LODWORD(v72->max_length) )
              {
                v73 = &v72->obj.klass + v13;
                v73[4] = 0;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 4), 0, v66, v67, v68, v69, v70, v71);
                BattlePerformanceCommandCard__checkChainBonus(v6, v74, v75);
                BattlePerformanceCommandCard__checkMaskEnemy(v6, v76);
                BattleCommandComponent__resetSelect(bc, 0);
                return;
              }
              goto LABEL_44;
            }
          }
        }
      }
LABEL_45:
      sub_2213CDC(this, bc);
    }
  }
}


void BattlePerformanceCommandCard__updateBuffIcon(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  unsigned int v4; // w21
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v6; // x8
  BattleCommandComponent_o *v7; // x20

  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_10:
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( (signed int)v4 < SLODWORD(p_commandlist->max_length) )
  {
    commandCompArray = v3->fields.commandCompArray;
    if ( commandCompArray )
    {
      if ( v4 >= LODWORD(commandCompArray->max_length) )
        sub_2213CE4(this);
      v6 = &commandCompArray->obj.klass + (int)v4;
      v7 = (BattleCommandComponent_o *)v6[4];
      if ( v7 )
      {
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                   (UnityEngine_Behaviour_o *)v6[4],
                                                   0);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleCommandComponent__setBuffIconList(v7, 1, 0);
        p_commandlist = v3->fields.p_commandlist;
        ++v4;
        if ( p_commandlist )
          continue;
      }
    }
    goto LABEL_10;
  }
}


void BattlePerformanceCommandCard__updateCard(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 i; // x22
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_Object_o *v5; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v7; // x8
  unsigned __int64 v8; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v10; // x20

  v2 = this;
  if ( (byte_59729D7 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729D7 = 1;
  }
  for ( i = 9; i != 12; ++i )
  {
    p_commandlist = v2->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_28;
    if ( i - 4 >= (unsigned __int64)LODWORD(p_commandlist->max_length) )
      goto LABEL_30;
    v5 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + i);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      commandCompArray = v2->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_28;
      if ( i - 4 >= (unsigned __int64)LODWORD(commandCompArray->max_length) )
LABEL_30:
        sub_2213CE4(this);
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + i);
      if ( !this )
        goto LABEL_28;
      BattleCommandComponent__setData((BattleCommandComponent_o *)this, 0, 0, 0, 1, 0, 1, 0);
    }
  }
  v7 = v2->fields.commandCompArray;
  if ( !v7 )
LABEL_28:
    sub_2213CDC(this, method);
  v8 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v7->max_length);
    if ( (__int64)v8 >= (int)max_length_low )
      break;
    if ( v8 >= max_length_low )
      goto LABEL_30;
    v10 = (UnityEngine_Object_o *)v7->m_Items[v8];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_28;
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v10, 0, 0, 1, 0, 0, 0, 0);
      if ( v10[16].klass
        && BattleCommandComponent__getCriticalCount((BattleCommandComponent_o *)v10, 0) >= 1
        && !v2->fields._IsPlayingBackStar_k__BackingField )
      {
        BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)v10, 1, 0);
      }
      BattleCommandComponent__UpdateCommandCardEffect((BattleCommandComponent_o *)v10, 0);
    }
    v7 = v2->fields.commandCompArray;
    ++v8;
    if ( !v7 )
      goto LABEL_28;
  }
}


void BattlePerformanceCommandCard__updateCardFix(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  BattlePerformanceCommandCard_o *v4; // x20
  int m_CachedPtr_high; // w8
  int32_t firstaura_b_high; // w22
  int v7; // w8
  int32_t v8; // w21
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
  this = (BattlePerformanceCommandCard_o *)BattleData__GetMaximumTurnFixedBuff((BattleData_o *)this, 0);
  v4 = this;
  if ( this )
  {
    m_CachedPtr_high = HIDWORD(this->fields.m_CachedPtr);
    firstaura_b_high = HIDWORD(this->fields.firstaura_b);
    v7 = m_CachedPtr_high + 1 >= 0 ? m_CachedPtr_high + 1 : m_CachedPtr_high + 2;
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
    sub_2213CDC(this, method);
  v10 = 4;
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
                                                 0);
      v13 = v3->fields.commandCompArray;
      if ( v13 )
      {
        if ( v12 >= LODWORD(v13->max_length) )
LABEL_20:
          sub_2213CE4(this);
        v14 = (BattleCommandComponent_o *)*((_QWORD *)&v13->obj.klass + v10);
        if ( v14 )
        {
          BattleCommandComponent__SetFixedCommandCardBuff(
            v14,
            (v4 != 0) & ((unsigned __int8)this ^ 1),
            v8,
            firstaura_b_high,
            0);
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


void BattlePerformanceCommandCard__updateCardMag(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattleData_o *Bdata; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleServantData_o *v5; // x20
  __int64 v6; // x21
  int max_length; // w9

  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_10;
  Bdata = (BattleData_o *)BattleData__getServantData(Bdata, Bdata->fields.globaltargetId, 0);
  if ( !Bdata || !this->fields.p_commandlist )
    return;
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_10:
    sub_2213CDC(Bdata, method);
  v5 = (BattleServantData_o *)Bdata;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_2213CE4(Bdata);
    Bdata = (BattleData_o *)commandCompArray->m_Items[v6];
    if ( Bdata )
    {
      BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)Bdata, v5, 0);
      commandCompArray = this->fields.commandCompArray;
      ++v6;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceCommandCard__updateHighSpeedObject(
        BattlePerformanceCommandCard_o *this,
        int32_t speedMode,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  struct BattleLogic_o *v5; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v8; // x8
  bool v9; // w1

  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_24;
  logic = (BattleLogic_o *)BattleLogic__isTutorial(logic, 0);
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_24;
    logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0);
    if ( (_DWORD)logic == 2 )
    {
      logic = this->fields.logic;
      if ( !logic )
        goto LABEL_24;
      logic = (BattleLogic_o *)BattleLogic__getTurn(logic, 0);
      if ( (int)logic >= 3 )
      {
        v5 = this->fields.logic;
        if ( !v5 )
          goto LABEL_24;
        data = v5->fields.data;
        if ( !data )
          goto LABEL_24;
        data->fields.systemflg_acceleration = 2;
      }
    }
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_24;
  v8 = perf->fields.data;
  if ( !v8 )
    goto LABEL_24;
  logic = (BattleLogic_o *)this->fields.highSpeedArrowOn;
  if ( v8->fields.systemflg_acceleration != 1 )
  {
    if ( logic )
    {
      logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0);
      if ( logic )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 1, 0);
        logic = (BattleLogic_o *)this->fields.highSpeedArrowOff;
        if ( logic )
        {
          logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0);
          if ( logic )
          {
            v9 = 0;
            goto LABEL_23;
          }
        }
      }
    }
LABEL_24:
    sub_2213CDC(logic, *(_QWORD *)&speedMode);
  }
  if ( !logic )
    goto LABEL_24;
  logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0);
  if ( !logic )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 0, 0);
  logic = (BattleLogic_o *)this->fields.highSpeedArrowOff;
  if ( !logic )
    goto LABEL_24;
  logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0);
  if ( !logic )
    goto LABEL_24;
  v9 = 1;
LABEL_23:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, v9, 0);
}


void BattlePerformanceCommandCard__updateTDTypeChange(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_2213CDC(this, method);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__UpdateTDTypeChange((BattleCommandComponent_o *)this, 0, 0);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__waitFallStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59729D9 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceCommandCard__waitFallStar_d__99_TypeInfo);
    byte_59729D9 = 1;
  }
  v3 = sub_2213CCC(BattlePerformanceCommandCard__waitFallStar_d__99_TypeInfo);
  BattlePerformanceCommandCard__waitFallStar_d__99___ctor(
    (BattlePerformanceCommandCard__waitFallStar_d__99_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *BattlePerformanceCommandCard__waitFunc(
        BattlePerformanceCommandCard_o *this,
        float waittime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5972A08 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceCommandCard__waitFunc_d__174_TypeInfo);
    byte_5972A08 = 1;
  }
  v7 = sub_2213CCC(BattlePerformanceCommandCard__waitFunc_d__174_TypeInfo);
  BattlePerformanceCommandCard__waitFunc_d__174___ctor((BattlePerformanceCommandCard__waitFunc_d__174_o *)v7, 0, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 40) = waittime;
  *(_QWORD *)(v7 + 48) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127___ctor(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127__MoveNext(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *v8; // x19
  int32_t _1__state; // w20
  struct BattlePerformanceCommandCard_o *_4__this; // x21
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x19
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  UnityEngine_Object_o *firstBonusAnimation; // x19

  v8 = this;
  if ( (byte_5972BE9 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972BE9 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( !_1__state )
  {
    v8->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    p__2__current[-1].fields._BoardType_k__BackingField = -1;
    sub_2213A04(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return _1__state == 0;
  }
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    firstBonusSimpleAnimation = (UnityEngine_Object_o *)_4__this->fields.firstBonusSimpleAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(firstBonusSimpleAnimation, 0, 0) )
    {
      this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *)_4__this->fields.firstBonusSimpleAnimation;
      if ( this )
      {
        SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
        this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *)_4__this->fields.firstBonusSimpleAnimation;
        if ( this )
        {
          SimpleAnimation__Play((SimpleAnimation_o *)this, 0);
          return _1__state == 0;
        }
      }
LABEL_20:
      sub_2213CDC(this, method);
    }
    firstBonusAnimation = (UnityEngine_Object_o *)_4__this->fields.firstBonusAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(firstBonusAnimation, 0, 0) )
    {
      this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *)_4__this->fields.firstBonusAnimation;
      if ( this )
      {
        UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0);
        this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *)_4__this->fields.firstBonusAnimation;
        if ( this )
        {
          UnityEngine_Animation__Play((UnityEngine_Animation_o *)this, 0);
          return _1__state == 0;
        }
      }
      goto LABEL_20;
    }
  }
  return _1__state == 0;
}


Il2CppObject *BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__127_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972BE6 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_5972BE6 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattlePerformanceCommandCard___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePerformanceCommandCard___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceCommandCard___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattlePerformanceCommandCard___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePerformanceCommandCard___c___ctor(BattlePerformanceCommandCard___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceCommandCard___c___DistributeCriticalPoint_b__125_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.data
      && !BattleCommandComponent__isTreasureDvc(x, 0)
      && BattleCommandComponent__getCommandType(x, 0) != 4;
}


bool BattlePerformanceCommandCard___c___coStartFirstBonus_b__124_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.selectflg;
}


bool BattlePerformanceCommandCard___c___showComboEffectShort_b__139_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleCommandComponent__getCommandType(x, 0) == 3;
}


void BattlePerformanceCommandCard___c__DisplayClass102_0___ctor(
        BattlePerformanceCommandCard___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceCommandCard___c__DisplayClass102_0___SelectedPlayerAttackPreselectTarget_b__0(
        BattlePerformanceCommandCard___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard___c__DisplayClass102_0_o *v2; // x19
  struct BattlePerformanceCommandCard_o *_4__this; // x8
  struct BattlePerformance_o *perf; // x8

  v2 = this;
  if ( (byte_5972BE7 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard___c__DisplayClass102_0_o *)sub_2213A60(&StringLiteral_2783/*"BACK2TACTICAL"*/);
    byte_5972BE7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (perf = _4__this->fields.perf) == 0
    || (this = (BattlePerformanceCommandCard___c__DisplayClass102_0_o *)perf->fields.fsm) == 0 )
  {
    sub_2213CDC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2783/*"BACK2TACTICAL"*/, 0);
}


void BattlePerformanceCommandCard___c__DisplayClass102_0___SelectedPlayerAttackPreselectTarget_b__1(
        BattlePerformanceCommandCard___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *_4__this; // x0
  struct System_Action_o *endCallback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  if ( !BattlePerformanceCommandCard__TryOpenPlayerAttackPreselectTargetWindow(_4__this, this->fields.endCallback, 0) )
  {
    endCallback = this->fields.endCallback;
    if ( endCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
        endCallback->fields.method_code,
        endCallback->fields.method);
  }
}


void BattlePerformanceCommandCard___c__DisplayClass125_0___ctor(
        BattlePerformanceCommandCard___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePerformanceCommandCard___c__DisplayClass125_0___DistributeCriticalPoint_b__1(
        BattlePerformanceCommandCard___c__DisplayClass125_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard___c__DisplayClass125_0_o *v4; // x20
  struct BattlePerformanceCommandCard_o *_4__this; // x8

  v4 = this;
  if ( (byte_5972BE8 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard___c__DisplayClass125_0_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_BattleCommandComponent___);
    byte_5972BE8 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, x);
  return System_Linq_Enumerable__Contains_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents,
           (Il2CppObject *)x,
           (const MethodInfo_3876940 *)Method_System_Linq_Enumerable_Contains_BattleCommandComponent___);
}


void BattlePerformanceCommandCard___c__DisplayClass125_0___DistributeCriticalPoint_b__2(
        BattlePerformanceCommandCard___c__DisplayClass125_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BattleCommandComponent__AddBoostedCriticalRate(x, this->fields.criticalPercentageToAdd, 0);
}


void BattlePerformanceCommandCard___c__DisplayClass178_0___ctor(
        BattlePerformanceCommandCard___c__DisplayClass178_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceCommandCard___c__DisplayClass178_0___PlayBackStar_b__0(
        BattlePerformanceCommandCard___c__DisplayClass178_0_o *this,
        const MethodInfo *method)
{
  struct BattlePerformanceCommandCard_o *_4__this; // x8
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  callback = this->fields.callback;
  _4__this->fields._IsPlayingBackStar_k__BackingField = 0;
  ActionExtensions__Call(callback, 0);
}


void BattlePerformanceCommandCard__coStartFirstBonus_d__124___ctor(
        BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__coStartFirstBonus_d__124__MoveNext(
        BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *v8; // x20
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x19
  UnityEngine_Object_o *firstBonusObject; // x22
  UnityEngine_GameObject_o **p_firstBonusObject; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t type; // w22
  Spawner_o *spawner; // x22
  UnityEngine_Object_o *firstbonus_q; // x23
  int32_t v22; // w22
  int32_t v23; // w22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  UnityEngine_GameObject_o *v35; // x22
  Il2CppObject *ComponentInChildren_object__59470360; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  Il2CppObject *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned int v53; // w21
  unsigned int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  __int64 v57; // x1
  int32_t v58; // w20
  System_Object_array *v59; // x21
  BattlePerformanceCommandCard___c_c *v60; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *v61; // x8
  System_Func_object__bool__o *_9__124_0; // x22
  Il2CppObject *v63; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x1
  Il2CppObject *object; // x21
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_5972BEA & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_BattleCommandComponent___);
    sub_2213A60(&BattleCommand_TypeInfo);
    sub_2213A60(&System_Func_BattleCommandComponent__bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation____91782960);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____91782992);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__124_0__);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)sub_2213A60(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_5972BEA = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_49;
    goto LABEL_38;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_49;
  firstBonusObject = (UnityEngine_Object_o *)_4__this->fields.firstBonusObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_firstBonusObject = &_4__this->fields.firstBonusObject;
  if ( UnityEngine_Object__op_Inequality(firstBonusObject, 0, 0) )
  {
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)_4__this->fields.spawner;
    if ( !this )
      goto LABEL_49;
    Spawner__Despawn((Spawner_o *)this, *p_firstBonusObject, 1, 0);
    *p_firstBonusObject = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.firstBonusObject, 0, v13, v14, v15, v16, v17, v18);
  }
  type = v8->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)BattleCommand__isQUICK(type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_q;
LABEL_25:
    if ( !byte_5969AE0 )
    {
      this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !byte_5969AE6 )
    {
      this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
      byte_5969AE6 = 1;
    }
    if ( !spawner )
      goto LABEL_49;
    v73.fields.x = x;
    v73.fields.y = y;
    v73.fields.z = z;
    v28 = Spawner__Spawn_47687764(
            spawner,
            firstbonus_q,
            v73,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0);
    *p_firstBonusObject = v28;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.firstBonusObject,
      (int32_t)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    goto LABEL_31;
  }
  v22 = v8->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)BattleCommand__isARTS(v22, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_a;
    goto LABEL_25;
  }
  v23 = v8->fields.type;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)BattleCommand__isBUSTER(v23, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_b;
    goto LABEL_25;
  }
LABEL_31:
  v35 = *p_firstBonusObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)UnityEngine_Object__op_Inequality(
                                                                       (UnityEngine_Object_o *)v35,
                                                                       0,
                                                                       0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)*p_firstBonusObject;
    if ( !*p_firstBonusObject )
      goto LABEL_49;
    ComponentInChildren_object__59470360 = UnityEngine_GameObject__GetComponentInChildren_object__59470360(
                                             (UnityEngine_GameObject_o *)this,
                                             1,
                                             (const MethodInfo_38B7218 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____91782992);
    _4__this->fields.firstBonusSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__59470360;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.firstBonusSimpleAnimation,
      (int32_t)ComponentInChildren_object__59470360,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)_4__this->fields.firstBonusObject;
    if ( !this )
      goto LABEL_49;
    v43 = UnityEngine_GameObject__GetComponentInChildren_object__59470360(
            (UnityEngine_GameObject_o *)this,
            1,
            (const MethodInfo_38B7218 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation____91782960);
    _4__this->fields.firstBonusAnimation = (struct UnityEngine_Animation_o *)v43;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.firstBonusAnimation,
      (int32_t)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    BattlePerformanceCommandCard__ActivateFirstBonusObject(_4__this, 0);
  }
  _4__this->fields.firstAuraType = v8->fields.type;
LABEL_38:
  if ( _4__this->fields.isPlayingMoveCard )
  {
    v8->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_2213A04(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return result;
  }
  if ( _4__this->fields.firstAuraType != -1 )
  {
    commandCompArray = _4__this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v53 = 0;
      while ( 1 )
      {
        max_length = commandCompArray->max_length;
        if ( (int)v53 >= (int)max_length )
          break;
        if ( v53 >= max_length )
          sub_2213CE4(this);
        method = (const MethodInfo *)commandCompArray->m_Items[v53];
        if ( method )
        {
          if ( !BYTE4(method[4].methodMetadataHandle) )
          {
            BattlePerformanceCommandCard__setFirstAura(
              _4__this,
              (BattleCommandComponent_o *)method,
              _4__this->fields.firstAuraType,
              0);
            commandCompArray = _4__this->fields.commandCompArray;
          }
          ++v53;
          if ( commandCompArray )
            continue;
        }
        goto LABEL_49;
      }
      perf = _4__this->fields.perf;
      if ( perf )
      {
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *)perf->fields.data;
        if ( this )
        {
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)this, v8->fields.type, 0);
          if ( FirstBonusCriticalRate >= 10 )
          {
            v58 = FirstBonusCriticalRate;
            v59 = (System_Object_array *)_4__this->fields.commandCompArray;
            v60 = BattlePerformanceCommandCard___c_TypeInfo;
            if ( !*(&BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo, v57);
              v60 = BattlePerformanceCommandCard___c_TypeInfo;
            }
            v61 = v60->static_fields;
            _9__124_0 = (System_Func_object__bool__o *)v61->__9__124_0;
            if ( !_9__124_0 )
            {
              if ( !*(&v60->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v60, v57);
                v61 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              }
              v63 = (Il2CppObject *)v61->__9;
              _9__124_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleCommandComponent__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__124_0,
                v63,
                Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__124_0__,
                0);
              v64 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              v64->__9__124_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__124_0;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v64->__9__124_0,
                (int32_t)_9__124_0,
                v65,
                v66,
                v67,
                v68,
                v69,
                v70);
            }
            object = BasicHelper__Find_object_(
                       v59,
                       (System_Func_T__bool__o *)_9__124_0,
                       (const MethodInfo_3810A1C *)Method_BasicHelper_Find_BattleCommandComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v71);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0) )
              BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, v58 / 10, 0, 0);
          }
          return 0;
        }
      }
    }
LABEL_49:
    sub_2213CDC(this, method);
  }
  return 0;
}


Il2CppObject *BattlePerformanceCommandCard__coStartFirstBonus_d__124__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__coStartFirstBonus_d__124__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePerformanceCommandCard__coStartFirstBonus_d__124_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__coStartFirstBonus_d__124__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__coStartFirstBonus_d__124__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__coStartFirstBonus_d__124_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__colOpenNpCard_d__185___ctor(
        BattlePerformanceCommandCard__colOpenNpCard_d__185_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__colOpenNpCard_d__185__MoveNext(
        BattlePerformanceCommandCard__colOpenNpCard_d__185_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  BattlePerformanceCommandCard__colOpenNpCard_d__185_o *v7; // x19
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  System_Collections_Generic_List_object__o *v10; // x22
  BattlePerformanceCommandCard__colOpenNpCard_d__185_o **v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Object_o *npGaugeLightTargetRoot; // x22
  float CARD_ROOT_BASE_X; // s8
  float CARD_ROOT_BASE_Y; // s9
  UnityEngine_Transform_o *v21; // x22
  float v22; // s0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v24; // x27
  int max_length; // w9
  __int64 v26; // x8
  struct BattleCommandData_array *commandlist; // x9
  unsigned __int64 max_length_low; // x10
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned int v30; // w25
  BattleCommandComponent_o **v31; // x8
  BattleCommandComponent_o *v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 _2__current_low; // x10
  __int64 v42; // x8
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_Transform_o *v45; // x0
  UnityEngine_GameObject_o *Object_48153028; // x23
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  BattlePerformanceCommandCard__colOpenNpCard_d__185_o *v53; // x24
  __int64 v54; // x1
  int32_t v55; // w1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct UnityEngine_Transform_array *npGaugeLightTarget; // x8
  struct System_Collections_Generic_List_BattleCommandComponent__o *v63; // x25
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  int32_t v70; // w1
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  BattlePerformanceCommandCard__colOpenNpCard_d__185_o *v77; // x25
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  int32_t v84; // w1
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  BattlePerformanceCommandCard__colOpenNpCard_d__185_o *v91; // x25
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  int32_t v98; // w1
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  BattlePerformanceCommandCard__colOpenNpCard_d__185_o *v105; // x25
  __int64 v106; // x1
  System_Collections_Hashtable_o *v107; // x0
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  __int64 v114; // x1
  struct System_Collections_Generic_List_BattleCommandComponent__o *v115; // x8
  MissionNaviTransitionBoardItem_o *p_flglist_5__2; // x19
  struct System_Collections_Generic_List_BattleCommandComponent__o *flglist_5__2; // t1
  System_String_o *size; // x2
  int v119; // w9
  bool result; // w0
  float npCardDispDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v122; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  float npCardEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v131; // x20
  MissionNaviTransitionBoardItem_o *v132; // x19
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  __int64 v139; // x0
  _QWORD v140[2]; // [xsp+0h] [xbp-A0h] BYREF
  float npGaugeEffectMoveTime; // [xsp+10h] [xbp-90h] BYREF
  float npGaugeEffectMoveDelayTime; // [xsp+14h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4

  v7 = this;
  if ( (byte_5972BEB & 1) == 0 )
  {
    sub_2213A60(&iTween_EaseType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleCommandComponent__TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_19609/*"easetype"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_19774/*"effect/ef_noblegauge01"*/);
    sub_2213A60(&StringLiteral_19390/*"delay"*/);
    sub_2213A60(&StringLiteral_19775/*"effect/ef_noblegauge02"*/);
    sub_2213A60(&StringLiteral_23916/*"position"*/);
    this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)sub_2213A60(&iTween_TypeInfo);
    byte_5972BEB = 1;
  }
  _1__state = v7->fields.__1__state;
  _4__this = v7->fields.__4__this;
  memset(&v143, 0, sizeof(v143));
  if ( _1__state == 2 )
  {
    flglist_5__2 = v7->fields._flglist_5__2;
    p_flglist_5__2 = (MissionNaviTransitionBoardItem_o *)&v7->fields._flglist_5__2;
    v115 = flglist_5__2;
    LODWORD(p_flglist_5__2[-1].fields._ClosedMessage_k__BackingField) = -1;
    if ( !flglist_5__2 )
      goto LABEL_63;
    size = (System_String_o *)(unsigned int)v115->fields._size;
    v119 = v115->fields._version + 1;
    v115->fields._size = 0;
    v115->fields._version = v119;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)v115->fields._items, 0, (int32_t)size, 0);
    p_flglist_5__2->klass = 0;
    sub_2213A04(p_flglist_5__2, 0, size, v2, v3, v4, v5, v6);
    if ( !_4__this )
      goto LABEL_63;
    BattlePerformanceCommandCard__giveoutNobleCard(_4__this, 0);
    return 0;
  }
  if ( _1__state == 1 )
  {
    this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)v7->fields._flglist_5__2;
    v7->fields.__1__state = -1;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v143,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__);
      v140[0] = 0;
      v140[1] = &v143;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v143,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__) )
      {
        if ( !v143.fields._current )
          sub_2213CDC(0, v114);
        if ( !*((_BYTE *)&v143.fields._current->klass + (unsigned __int64)&qword_198 + 4) )
          BattleCommandComponent__playOpenNobleCard((BattleCommandComponent_o *)v143.fields._current, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v143,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__);
      if ( _4__this )
      {
        npCardDispDelayTime = _4__this->fields.npCardDispDelayTime;
        v122 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v122, npCardDispDelayTime, 0);
        v7->fields.__2__current = (Il2CppObject *)v122;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v7->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v122, v124, v125, v126, v127, v128, v129);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 2;
        return result;
      }
    }
    goto LABEL_63;
  }
  if ( _1__state )
    return 0;
  v7->fields.__1__state = -1;
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleCommandComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleCommandComponent___ctor__);
  v7->fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v10;
  v11 = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o **)&v7->fields._flglist_5__2;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields._flglist_5__2, (int32_t)v10, v12, v13, v14, v15, v16, v17);
  if ( !_4__this )
    goto LABEL_63;
  npGaugeLightTargetRoot = (UnityEngine_Object_o *)_4__this->fields.npGaugeLightTargetRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)UnityEngine_Object__op_Inequality(
                                                                   npGaugeLightTargetRoot,
                                                                   0,
                                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    CARD_ROOT_BASE_X = _4__this->fields.CARD_ROOT_BASE_X;
    CARD_ROOT_BASE_Y = _4__this->fields.CARD_ROOT_BASE_Y;
    v21 = _4__this->fields.npGaugeLightTargetRoot;
    v22 = BattlePerformanceCommandCard__FSCardRootOffsetY(_4__this, 0);
    if ( !v21 )
      goto LABEL_63;
    v144.fields.y = CARD_ROOT_BASE_Y + v22;
    v144.fields.z = 0.0;
    v144.fields.x = CARD_ROOT_BASE_X;
    UnityEngine_Transform__set_localPosition(v21, v144, 0);
  }
  p_commandlist = _4__this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_63:
    sub_2213CDC(this, method);
  v24 = 9;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v26 = v24 - 4;
    if ( v24 - 4 >= max_length - 1 )
      break;
    commandlist = _4__this->fields.commandlist;
    if ( !commandlist )
      goto LABEL_63;
    max_length_low = LODWORD(commandlist->max_length);
    if ( v26 < (int)max_length_low )
    {
      if ( v26 >= max_length_low )
        goto LABEL_79;
      method = (const MethodInfo *)*((_QWORD *)&commandlist->obj.klass + v24);
      if ( method )
      {
        this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)BattlePerformanceCommandCard__GetServantNumber(
                                                                         _4__this,
                                                                         (BattleCommandData_o *)method,
                                                                         0);
        commandCompArray = _4__this->fields.commandCompArray;
        if ( !commandCompArray )
          goto LABEL_63;
        v30 = (unsigned int)this;
        if ( (unsigned int)((_DWORD)this + 5) >= LODWORD(commandCompArray->max_length) )
LABEL_79:
          sub_2213CE4(this);
        v31 = &commandCompArray->m_Items[(int)this + 1];
        v32 = v31[4];
        if ( !v32 )
          goto LABEL_63;
        this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)BattleCommandComponent__checkObject(v31[4], 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = *v11;
          if ( !*v11 )
            goto LABEL_63;
          v39 = *(_QWORD *)&this->fields.__1__state;
          v40 = Method_System_Collections_Generic_List_BattleCommandComponent__Add__;
          ++HIDWORD(this->fields.__2__current);
          if ( !v39 )
            goto LABEL_63;
          _2__current_low = SLODWORD(this->fields.__2__current);
          if ( (unsigned int)_2__current_low >= *(_DWORD *)(v39 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v32,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = v39 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v42 + 32) = v32;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 32), (int32_t)v32, v33, v34, v35, v36, v37, v38);
          }
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)BattlePerformanceCommandCard__GetStatusUiObj(
                                                                           _4__this,
                                                                           v32->fields.data,
                                                                           0);
          if ( !this )
            goto LABEL_63;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)this[3].fields.__4__this;
          if ( !this )
            goto LABEL_63;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)_4__this,
                                                                           0);
          if ( !this )
            goto LABEL_63;
          v44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          BaseMonoBehaviour__createObject_48153028(
            (BaseMonoBehaviour_o *)_4__this,
            (System_String_o *)StringLiteral_19774/*"effect/ef_noblegauge01"*/,
            v44,
            transform,
            0);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)_4__this,
                                                                           0);
          if ( !this )
            goto LABEL_63;
          v45 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          Object_48153028 = BaseMonoBehaviour__createObject_48153028(
                              (BaseMonoBehaviour_o *)_4__this,
                              (System_String_o *)StringLiteral_19775/*"effect/ef_noblegauge02"*/,
                              v45,
                              transform,
                              0);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)sub_2213B20(object___TypeInfo, 8);
          if ( !this )
            goto LABEL_63;
          v53 = this;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)StringLiteral_23916/*"position"*/;
          if ( StringLiteral_23916/*"position"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)sub_2213BB4(
                                                                             StringLiteral_23916/*"position"*/,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_81;
          }
          if ( !LODWORD(v53->fields.__2__current) )
            goto LABEL_79;
          v55 = StringLiteral_23916/*"position"*/;
          v53->fields.__4__this = (struct BattlePerformanceCommandCard_o *)StringLiteral_23916/*"position"*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->fields.__4__this, v55, v47, v48, v49, v50, v51, v52);
          npGaugeLightTarget = _4__this->fields.npGaugeLightTarget;
          if ( !npGaugeLightTarget )
            goto LABEL_63;
          if ( v30 >= LODWORD(npGaugeLightTarget->max_length) )
            goto LABEL_79;
          v63 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)npGaugeLightTarget->m_Items[v30];
          if ( v63 )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)sub_2213BB4(
                                                                             v63,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_81;
          }
          if ( ((__int64)v53->fields.__2__current & 0xFFFFFFFE) == 0 )
            goto LABEL_79;
          v53->fields._flglist_5__2 = v63;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v53->fields._flglist_5__2,
            (int32_t)v63,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)StringLiteral_19609/*"easetype"*/;
          if ( StringLiteral_19609/*"easetype"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)sub_2213BB4(
                                                                             StringLiteral_19609/*"easetype"*/,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_81;
          }
          if ( LODWORD(v53->fields.__2__current) <= 2 )
            goto LABEL_79;
          v70 = StringLiteral_19609/*"easetype"*/;
          v53[1].klass = (BattlePerformanceCommandCard__colOpenNpCard_d__185_c *)StringLiteral_19609/*"easetype"*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53[1], v70, v64, v65, v66, v67, v68, v69);
          LODWORD(v140[0]) = _4__this->fields.npGaugeEaseType;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)j_il2cpp_value_box_0(
                                                                           iTween_EaseType_TypeInfo,
                                                                           v140);
          v77 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)sub_2213BB4(
                                                                             this,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_81;
          }
          if ( ((__int64)v53->fields.__2__current & 0xFFFFFFFC) == 0 )
            goto LABEL_79;
          v53[1].monitor = v77;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53[1].monitor, (int32_t)v77, v71, v72, v73, v74, v75, v76);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)StringLiteral_19390/*"delay"*/;
          if ( StringLiteral_19390/*"delay"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)sub_2213BB4(
                                                                             StringLiteral_19390/*"delay"*/,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_81;
          }
          if ( LODWORD(v53->fields.__2__current) <= 4 )
            goto LABEL_79;
          v84 = StringLiteral_19390/*"delay"*/;
          *(_QWORD *)&v53[1].fields.__1__state = StringLiteral_19390/*"delay"*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53[1].fields, v84, v78, v79, v80, v81, v82, v83);
          npGaugeEffectMoveDelayTime = _4__this->fields.npGaugeEffectMoveDelayTime;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)j_il2cpp_value_box_0(
                                                                           qword_5984378,
                                                                           &npGaugeEffectMoveDelayTime);
          v91 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)sub_2213BB4(
                                                                             this,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_81;
          }
          if ( LODWORD(v53->fields.__2__current) <= 5 )
            goto LABEL_79;
          v53[1].fields.__2__current = (Il2CppObject *)v91;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v53[1].fields.__2__current,
            (int32_t)v91,
            v85,
            v86,
            v87,
            v88,
            v89,
            v90);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)StringLiteral_25366/*"time"*/;
          if ( StringLiteral_25366/*"time"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)sub_2213BB4(
                                                                             StringLiteral_25366/*"time"*/,
                                                                             v53->klass->_1.element_class);
            if ( !this )
              goto LABEL_81;
          }
          if ( LODWORD(v53->fields.__2__current) <= 6 )
            goto LABEL_79;
          v98 = StringLiteral_25366/*"time"*/;
          v53[1].fields.__4__this = (struct BattlePerformanceCommandCard_o *)StringLiteral_25366/*"time"*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53[1].fields.__4__this, v98, v92, v93, v94, v95, v96, v97);
          npGaugeEffectMoveTime = _4__this->fields.npGaugeEffectMoveTime;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)j_il2cpp_value_box_0(
                                                                           qword_5984378,
                                                                           &npGaugeEffectMoveTime);
          v105 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__185_o *)sub_2213BB4(
                                                                             this,
                                                                             v53->klass->_1.element_class);
            if ( !this )
            {
LABEL_81:
              v139 = sub_2213D00(this, v54);
              sub_2213BA0(v139, 0);
            }
          }
          if ( ((__int64)v53->fields.__2__current & 0xFFFFFFF8) == 0 )
            goto LABEL_79;
          v53[1].fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v105;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v53[1].fields._flglist_5__2,
            (int32_t)v105,
            v99,
            v100,
            v101,
            v102,
            v103,
            v104);
          if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v106);
          v107 = iTween__Hash((System_Object_array *)v53, 0);
          iTween__MoveTo_75293528(Object_48153028, v107, 0);
          v32->fields.nobleGaugeEffect = Object_48153028;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v32->fields.nobleGaugeEffect,
            (int32_t)Object_48153028,
            v108,
            v109,
            v110,
            v111,
            v112,
            v113);
        }
      }
    }
    p_commandlist = _4__this->fields.p_commandlist;
    ++v24;
    if ( !p_commandlist )
      goto LABEL_63;
  }
  npCardEffectDelayTime = _4__this->fields.npCardEffectDelayTime;
  v131 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v131, npCardEffectDelayTime, 0);
  v7->fields.__2__current = (Il2CppObject *)v131;
  v132 = (MissionNaviTransitionBoardItem_o *)&v7->fields.__2__current;
  sub_2213A04(v132, (int32_t)v131, v133, v134, v135, v136, v137, v138);
  result = 1;
  v132[-1].fields._BoardType_k__BackingField = 1;
  return result;
}


Il2CppObject *BattlePerformanceCommandCard__colOpenNpCard_d__185__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__colOpenNpCard_d__185_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__colOpenNpCard_d__185__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__colOpenNpCard_d__185_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePerformanceCommandCard__colOpenNpCard_d__185_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__colOpenNpCard_d__185__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__colOpenNpCard_d__185_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__colOpenNpCard_d__185__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__colOpenNpCard_d__185_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__showComboEffectNormal_d__140___ctor(
        BattlePerformanceCommandCard__showComboEffectNormal_d__140_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__showComboEffectNormal_d__140__MoveNext(
        BattlePerformanceCommandCard__showComboEffectNormal_d__140_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  BattlePerformance_o *perf; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  DefCoroutine_c *v13; // x0
  Il2CppObject *milliSecFour; // x1
  Il2CppObject **p__2__current; // x19
  int v16; // w8
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  DefCoroutine_c *v26; // x0
  Il2CppObject *milliSecNine; // x1
  Il2CppObject **v28; // x19
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct BattleComboData_o *combo; // x8
  int32_t samecount; // w9
  DefCoroutine_c *v37; // x0
  int v38; // w8
  Il2CppObject *milliSecThree; // x1
  __int64 v40; // x1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  DefCoroutine_c *v47; // x0
  Il2CppObject *milliSecTwo; // x1
  __int64 v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  DefCoroutine_c *v56; // x0
  Il2CppObject *milliSecEleven; // x1
  Il2CppObject *v58; // x1
  int32_t seName; // [xsp+4h] [xbp-2Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972BED & 1) == 0 )
  {
    sub_2213A60(&DefCoroutine_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972BED = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  perf = 0;
  prefab = 0;
  seName = 0;
  if ( _1__state > 3 )
  {
    switch ( _1__state )
    {
      case 4:
        this->fields.__1__state = -1;
        if ( _4__this )
        {
          perf = _4__this->fields.perf;
          if ( perf )
          {
            BattlePerformance__ChangeBattleSpeed(perf, 0);
            BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0);
            BattlePerformanceCommandCard__AddExtraCard(_4__this, 0);
            BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.4, 0);
            v13 = DefCoroutine_TypeInfo;
            if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, v6);
              v13 = DefCoroutine_TypeInfo;
            }
            milliSecFour = (Il2CppObject *)v13->static_fields->milliSecFour;
            this->fields.__2__current = milliSecFour;
            p__2__current = &this->fields.__2__current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p__2__current,
              (int32_t)milliSecFour,
              v7,
              v8,
              v9,
              v10,
              v11,
              v12);
            v16 = 5;
            goto LABEL_53;
          }
        }
        goto LABEL_55;
      case 5:
        this->fields.__1__state = -1;
        if ( _4__this )
        {
          perf = _4__this->fields.perf;
          if ( perf )
          {
            BattlePerformance__ChangeBattleSpeed(perf, 0);
            BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0);
            v56 = DefCoroutine_TypeInfo;
            if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, v49);
              v56 = DefCoroutine_TypeInfo;
            }
            milliSecEleven = (Il2CppObject *)v56->static_fields->milliSecEleven;
            this->fields.__2__current = milliSecEleven;
            p__2__current = &this->fields.__2__current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p__2__current,
              (int32_t)milliSecEleven,
              v50,
              v51,
              v52,
              v53,
              v54,
              v55);
            v16 = 6;
            goto LABEL_53;
          }
        }
        goto LABEL_55;
      case 6:
        this->fields.__1__state = -1;
        if ( !_4__this )
          goto LABEL_55;
        perf = _4__this->fields.perf;
        if ( !perf )
          goto LABEL_55;
        BattlePerformance__ChangeBattleSpeed(perf, 0);
        goto LABEL_44;
    }
  }
  else
  {
    if ( (unsigned int)(_1__state - 2) < 2 )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed(perf, 0);
      method = (const MethodInfo *)this->fields.combo;
      if ( !method )
        goto LABEL_55;
LABEL_40:
      if ( HIDWORD(method->invoker_method) == 3 )
      {
        BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, (BattleComboData_o *)method, 0);
        v47 = DefCoroutine_TypeInfo;
        if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, v40);
          v47 = DefCoroutine_TypeInfo;
        }
        milliSecTwo = (Il2CppObject *)v47->static_fields->milliSecTwo;
        this->fields.__2__current = milliSecTwo;
        p__2__current = &this->fields.__2__current;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)p__2__current,
          (int32_t)milliSecTwo,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        v16 = 4;
        goto LABEL_53;
      }
LABEL_44:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return (char)perf;
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed(perf, 0);
      goto LABEL_32;
    }
    prefab = 0;
    this->fields.__1__state = -1;
    seName = -1;
    if ( !_4__this )
      goto LABEL_55;
    BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, this->fields.combo, &prefab, &seName, 0);
    v18 = (UnityEngine_Object_o *)prefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( !UnityEngine_Object__op_Inequality(v18, 0, 0) )
    {
LABEL_32:
      perf = (BattlePerformance_o *)_4__this->fields.logic;
      if ( !perf )
        goto LABEL_55;
      BattleLogic__procComboAct((BattleLogic_o *)perf, 0);
      method = (const MethodInfo *)this->fields.combo;
      if ( !method )
        goto LABEL_55;
      if ( LOBYTE(method->invoker_method) )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, (BattleComboData_o *)method, 0);
        combo = this->fields.combo;
        if ( combo )
        {
          samecount = combo->fields.samecount;
          v37 = DefCoroutine_TypeInfo;
          v38 = *(&DefCoroutine_TypeInfo->_2.cctor_finished + 1);
          if ( samecount == 3 )
          {
            if ( !v38 )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
              v37 = DefCoroutine_TypeInfo;
            }
            milliSecThree = (Il2CppObject *)v37->static_fields->milliSecThree;
            this->fields.__2__current = milliSecThree;
            p__2__current = &this->fields.__2__current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p__2__current,
              (int32_t)milliSecThree,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            v16 = 2;
          }
          else
          {
            if ( !v38 )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
              v37 = DefCoroutine_TypeInfo;
            }
            v58 = (Il2CppObject *)v37->static_fields->milliSecEleven;
            this->fields.__2__current = v58;
            p__2__current = &this->fields.__2__current;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v58, v29, v30, v31, v32, v33, v34);
            v16 = 3;
          }
LABEL_53:
          *((_DWORD *)p__2__current - 2) = v16;
          LOBYTE(perf) = 1;
          return (char)perf;
        }
LABEL_55:
        sub_2213CDC(perf, method);
      }
      goto LABEL_40;
    }
    BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0);
    v26 = DefCoroutine_TypeInfo;
    if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, v19);
      v26 = DefCoroutine_TypeInfo;
    }
    milliSecNine = (Il2CppObject *)v26->static_fields->milliSecNine;
    this->fields.__2__current = milliSecNine;
    v28 = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v28, (int32_t)milliSecNine, v20, v21, v22, v23, v24, v25);
    LOBYTE(perf) = 1;
    *((_DWORD *)v28 - 2) = 1;
  }
  return (char)perf;
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffectNormal_d__140__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffectNormal_d__140_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__showComboEffectNormal_d__140__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffectNormal_d__140_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePerformanceCommandCard__showComboEffectNormal_d__140_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffectNormal_d__140__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffectNormal_d__140_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__showComboEffectNormal_d__140__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffectNormal_d__140_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__showComboEffectShort_d__139___ctor(
        BattlePerformanceCommandCard__showComboEffectShort_d__139_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__showComboEffectShort_d__139__MoveNext(
        BattlePerformanceCommandCard__showComboEffectShort_d__139_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  BattlePerformance_o *perf; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct BattleComboData_o *v12; // x8
  int32_t samecount; // w9
  DefCoroutine_c *v14; // x0
  int v15; // w8
  Il2CppObject *milliSecThreeSixSix; // x1
  Il2CppObject **p__2__current; // x19
  int v18; // w8
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct BattleComboData_o *combo; // x8
  _BOOL4 flash; // w9
  DefCoroutine_c *v27; // x0
  int v28; // w8
  Il2CppObject *milliSecFour; // x1
  System_Collections_Generic_IEnumerable_TSource__o *selectedcomponents; // x21
  BattlePerformanceCommandCard___c_c *v31; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__139_0; // x22
  Il2CppObject *v34; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x0
  struct BattlePerformance_o *v43; // x8
  int32_t FirstBonusCriticalRate; // w0
  __int64 v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  bool isExtraAttack; // w8
  DefCoroutine_c *v53; // x0
  int v54; // w9
  Il2CppObject **p_milliSecThreeSixSix; // x8
  Il2CppObject *milliSecEightSixSix; // x1
  __int64 v57; // x1
  UnityEngine_Object_o *v58; // x21
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int32_t m_CachedPtr_high; // w9
  DefCoroutine_c *v66; // x0
  int v67; // w8
  Il2CppObject *v68; // x1
  Il2CppObject **v69; // x19
  Il2CppObject *v70; // x1
  __int64 v71; // x1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  DefCoroutine_c *v78; // x0
  Il2CppObject *milliSecTwo; // x1
  __int64 v80; // x1
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  DefCoroutine_c *v87; // x0
  Il2CppObject *milliSecTwoSixSix; // x1
  Il2CppObject *milliSecThreeThreeThree; // x1
  DefCoroutine_c *v90; // x0
  Il2CppObject *milliSecNine; // x1
  DefCoroutine_c *v92; // x0
  Il2CppObject *v93; // x1
  Il2CppObject *v94; // x1
  DefCoroutine_c *v95; // x8
  int v96; // w9
  Il2CppObject *v97; // x1
  Il2CppObject *milliSecThree; // x1
  int32_t seName; // [xsp+4h] [xbp-4Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5972BEE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_BattleCommandComponent___);
    sub_2213A60(&DefCoroutine_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___);
    sub_2213A60(&System_Func_BattleCommandComponent__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__139_0__);
    sub_2213A60(&BattlePerformanceCommandCard___c_TypeInfo);
    byte_5972BEE = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  perf = 0;
  prefab = 0;
  seName = 0;
  if ( _1__state > 6 )
  {
    if ( _1__state <= 9 )
    {
      if ( (unsigned int)(_1__state - 7) >= 2 )
      {
        if ( _1__state != 9 )
          return (char)perf;
        this->fields.__1__state = -1;
        if ( !_4__this )
          goto LABEL_108;
        perf = _4__this->fields.perf;
        if ( !perf )
          goto LABEL_108;
        BattlePerformance__ChangeBattleSpeed(perf, 0);
        method = (const MethodInfo *)this->fields.combo;
        if ( !method )
          goto LABEL_108;
        goto LABEL_74;
      }
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_108;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_108;
      BattlePerformance__ChangeBattleSpeed(perf, 0);
      method = (const MethodInfo *)this->fields.combo;
      if ( !method )
        goto LABEL_108;
LABEL_31:
      if ( BYTE1(method->invoker_method) )
      {
        selectedcomponents = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents;
        v31 = BattlePerformanceCommandCard___c_TypeInfo;
        if ( !*(&BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo, method);
          v31 = BattlePerformanceCommandCard___c_TypeInfo;
        }
        static_fields = v31->static_fields;
        _9__139_0 = (System_Func_object__bool__o *)static_fields->__9__139_0;
        if ( !_9__139_0 )
        {
          if ( !*(&v31->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v31, method);
            static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          }
          v34 = (Il2CppObject *)static_fields->__9;
          _9__139_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleCommandComponent__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__139_0,
            v34,
            Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__139_0__,
            0);
          v35 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          v35->__9__139_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__139_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v35->__9__139_0,
            (int32_t)_9__139_0,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
        }
        v42 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                selectedcomponents,
                (System_Func_TSource__bool__o *)_9__139_0,
                (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___);
        perf = (BattlePerformance_o *)System_Array__IndexOf_object_(
                                        (System_Object_array *)_4__this->fields.selectedcomponents,
                                        v42,
                                        (const MethodInfo_3A2E6EC *)Method_System_Array_IndexOf_BattleCommandComponent___);
        if ( (int)perf >= 1 )
        {
          v43 = _4__this->fields.perf;
          if ( !v43 )
            goto LABEL_108;
          perf = (BattlePerformance_o *)v43->fields.data;
          if ( !perf )
            goto LABEL_108;
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)perf, 3, 0);
          BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, FirstBonusCriticalRate / 10, 1, 0);
        }
        perf = (BattlePerformance_o *)this->fields.combo;
        if ( perf )
        {
          isExtraAttack = BattleComboData__isExtraAttack((BattleComboData_o *)perf, 0);
          v53 = DefCoroutine_TypeInfo;
          v54 = *(&DefCoroutine_TypeInfo->_2.cctor_finished + 1);
          if ( isExtraAttack )
          {
            if ( !v54 )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, v45);
              v53 = DefCoroutine_TypeInfo;
            }
            p_milliSecThreeSixSix = (Il2CppObject **)&v53->static_fields->milliSecThreeSixSix;
          }
          else
          {
            if ( !v54 )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, v45);
              v53 = DefCoroutine_TypeInfo;
            }
            p_milliSecThreeSixSix = (Il2CppObject **)&v53->static_fields->milliSecEightSixSix;
          }
          v70 = *p_milliSecThreeSixSix;
          this->fields.__2__current = *p_milliSecThreeSixSix;
          p__2__current = &this->fields.__2__current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v70, v46, v47, v48, v49, v50, v51);
          v18 = 9;
          goto LABEL_106;
        }
LABEL_108:
        sub_2213CDC(perf, method);
      }
LABEL_74:
      if ( HIDWORD(method->invoker_method) == 3 )
      {
        BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, (BattleComboData_o *)method, 0);
        v78 = DefCoroutine_TypeInfo;
        if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, v71);
          v78 = DefCoroutine_TypeInfo;
        }
        milliSecTwo = (Il2CppObject *)v78->static_fields->milliSecTwo;
        this->fields.__2__current = milliSecTwo;
        p__2__current = &this->fields.__2__current;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)p__2__current,
          (int32_t)milliSecTwo,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
        v18 = 10;
        goto LABEL_106;
      }
LABEL_78:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
    if ( (unsigned int)(_1__state - 12) < 2 )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_108;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_108;
      BattlePerformance__ChangeBattleSpeed(perf, 0);
      goto LABEL_78;
    }
    if ( _1__state == 10 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        perf = _4__this->fields.perf;
        if ( perf )
        {
          BattlePerformance__ChangeBattleSpeed(perf, 0);
          BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0);
          BattlePerformanceCommandCard__AddExtraCard(_4__this, 0);
          BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.3, 0);
          v87 = DefCoroutine_TypeInfo;
          if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, v80);
            v87 = DefCoroutine_TypeInfo;
          }
          milliSecTwoSixSix = (Il2CppObject *)v87->static_fields->milliSecTwoSixSix;
          this->fields.__2__current = milliSecTwoSixSix;
          p__2__current = &this->fields.__2__current;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)p__2__current,
            (int32_t)milliSecTwoSixSix,
            v81,
            v82,
            v83,
            v84,
            v85,
            v86);
          v18 = 11;
          goto LABEL_106;
        }
      }
      goto LABEL_108;
    }
    if ( _1__state == 11 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        perf = _4__this->fields.perf;
        if ( perf )
        {
          BattlePerformance__ChangeBattleSpeed(perf, 0);
          BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0);
          combo = this->fields.combo;
          if ( combo )
          {
            flash = combo->fields.flash;
            v27 = DefCoroutine_TypeInfo;
            v28 = *(&DefCoroutine_TypeInfo->_2.cctor_finished + 1);
            if ( flash )
            {
              if ( !v28 )
              {
                j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
                v27 = DefCoroutine_TypeInfo;
              }
              milliSecFour = (Il2CppObject *)v27->static_fields->milliSecFour;
              this->fields.__2__current = milliSecFour;
              p__2__current = &this->fields.__2__current;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)p__2__current,
                (int32_t)milliSecFour,
                v19,
                v20,
                v21,
                v22,
                v23,
                v24);
              v18 = 13;
            }
            else
            {
              if ( !v28 )
              {
                j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
                v27 = DefCoroutine_TypeInfo;
              }
              milliSecThreeThreeThree = (Il2CppObject *)v27->static_fields->milliSecThreeThreeThree;
              this->fields.__2__current = milliSecThreeThreeThree;
              p__2__current = &this->fields.__2__current;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)p__2__current,
                (int32_t)milliSecThreeThreeThree,
                v19,
                v20,
                v21,
                v22,
                v23,
                v24);
              v18 = 12;
            }
            goto LABEL_106;
          }
        }
      }
      goto LABEL_108;
    }
  }
  else
  {
    if ( (unsigned int)(_1__state - 1) < 6 )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_108;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_108;
      BattlePerformance__ChangeBattleSpeed(perf, 0);
LABEL_8:
      perf = (BattlePerformance_o *)_4__this->fields.logic;
      if ( !perf )
        goto LABEL_108;
      BattleLogic__procComboAct((BattleLogic_o *)perf, 0);
      method = (const MethodInfo *)this->fields.combo;
      if ( !method )
        goto LABEL_108;
      if ( LOBYTE(method->invoker_method) )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, (BattleComboData_o *)method, 0);
        v12 = this->fields.combo;
        if ( v12 )
        {
          samecount = v12->fields.samecount;
          v14 = DefCoroutine_TypeInfo;
          v15 = *(&DefCoroutine_TypeInfo->_2.cctor_finished + 1);
          if ( samecount == 3 )
          {
            if ( !v15 )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
              v14 = DefCoroutine_TypeInfo;
            }
            milliSecThreeSixSix = (Il2CppObject *)v14->static_fields->milliSecThreeSixSix;
            this->fields.__2__current = milliSecThreeSixSix;
            p__2__current = &this->fields.__2__current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p__2__current,
              (int32_t)milliSecThreeSixSix,
              v6,
              v7,
              v8,
              v9,
              v10,
              v11);
            v18 = 7;
          }
          else
          {
            if ( !v15 )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
              v14 = DefCoroutine_TypeInfo;
            }
            milliSecEightSixSix = (Il2CppObject *)v14->static_fields->milliSecEightSixSix;
            this->fields.__2__current = milliSecEightSixSix;
            p__2__current = &this->fields.__2__current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p__2__current,
              (int32_t)milliSecEightSixSix,
              v6,
              v7,
              v8,
              v9,
              v10,
              v11);
            v18 = 8;
          }
LABEL_106:
          *((_DWORD *)p__2__current - 2) = v18;
          LOBYTE(perf) = 1;
          return (char)perf;
        }
        goto LABEL_108;
      }
      goto LABEL_31;
    }
    if ( _1__state )
      return (char)perf;
    prefab = 0;
    this->fields.__1__state = -1;
    seName = -1;
    if ( !_4__this )
      goto LABEL_108;
    BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, this->fields.combo, &prefab, &seName, 0);
    v58 = (UnityEngine_Object_o *)prefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
    if ( !UnityEngine_Object__op_Inequality(v58, 0, 0) )
      goto LABEL_8;
    BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0);
    perf = (BattlePerformance_o *)this->fields.combo;
    if ( !perf )
      goto LABEL_108;
    if ( !BattleComboData__AchieveAnyChain((BattleComboData_o *)perf, 0) )
    {
      v90 = DefCoroutine_TypeInfo;
      if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
        v90 = DefCoroutine_TypeInfo;
      }
      milliSecNine = (Il2CppObject *)v90->static_fields->milliSecNine;
      this->fields.__2__current = milliSecNine;
      p__2__current = &this->fields.__2__current;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)p__2__current,
        (int32_t)milliSecNine,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      v18 = 6;
      goto LABEL_106;
    }
    perf = (BattlePerformance_o *)this->fields.combo;
    if ( !perf )
      goto LABEL_108;
    if ( !LOBYTE(perf->fields.m_CachedPtr) )
    {
      if ( !BYTE1(perf->fields.m_CachedPtr) )
        goto LABEL_99;
      if ( BattleComboData__isExtraAttack((BattleComboData_o *)perf, 0) )
      {
        v92 = DefCoroutine_TypeInfo;
        if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
          v92 = DefCoroutine_TypeInfo;
        }
        v93 = (Il2CppObject *)v92->static_fields->milliSecThreeThreeThree;
        this->fields.__2__current = v93;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v93, v59, v60, v61, v62, v63, v64);
        v18 = 3;
        goto LABEL_106;
      }
      perf = (BattlePerformance_o *)this->fields.combo;
      if ( perf )
      {
LABEL_99:
        v95 = DefCoroutine_TypeInfo;
        v96 = *(&DefCoroutine_TypeInfo->_2.cctor_finished + 1);
        if ( BYTE1(perf->fields.m_CachedPtr) )
        {
          if ( !v96 )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
            v95 = DefCoroutine_TypeInfo;
          }
          v97 = (Il2CppObject *)v95->static_fields->milliSecTwoSixSix;
          this->fields.__2__current = v97;
          p__2__current = &this->fields.__2__current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v97, v59, v60, v61, v62, v63, v64);
          v18 = 4;
        }
        else
        {
          if ( !v96 )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
            v95 = DefCoroutine_TypeInfo;
          }
          milliSecThree = (Il2CppObject *)v95->static_fields->milliSecThree;
          this->fields.__2__current = milliSecThree;
          p__2__current = &this->fields.__2__current;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)p__2__current,
            (int32_t)milliSecThree,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          v18 = 5;
        }
        goto LABEL_106;
      }
      goto LABEL_108;
    }
    m_CachedPtr_high = HIDWORD(perf->fields.m_CachedPtr);
    v66 = DefCoroutine_TypeInfo;
    v67 = *(&DefCoroutine_TypeInfo->_2.cctor_finished + 1);
    if ( m_CachedPtr_high != 3 )
    {
      if ( !v67 )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
        v66 = DefCoroutine_TypeInfo;
      }
      v94 = (Il2CppObject *)v66->static_fields->milliSecTwoSixSix;
      this->fields.__2__current = v94;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v94, v59, v60, v61, v62, v63, v64);
      v18 = 2;
      goto LABEL_106;
    }
    if ( !v67 )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
      v66 = DefCoroutine_TypeInfo;
    }
    v68 = (Il2CppObject *)v66->static_fields->milliSecThreeThreeThree;
    this->fields.__2__current = v68;
    v69 = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v69, (int32_t)v68, v59, v60, v61, v62, v63, v64);
    LOBYTE(perf) = 1;
    *((_DWORD *)v69 - 2) = 1;
  }
  return (char)perf;
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffectShort_d__139__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffectShort_d__139_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__showComboEffectShort_d__139__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffectShort_d__139_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePerformanceCommandCard__showComboEffectShort_d__139_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffectShort_d__139__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffectShort_d__139_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__showComboEffectShort_d__139__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffectShort_d__139_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__showComboEffect_d__138___ctor(
        BattlePerformanceCommandCard__showComboEffect_d__138_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__showComboEffect_d__138__MoveNext(
        BattlePerformanceCommandCard__showComboEffect_d__138_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  BattlePerformance_o *perf; // x0
  DefCoroutine_c *v12; // x0
  Il2CppObject *milliSecOne; // x1
  Il2CppObject **p__2__current; // x19
  int v15; // w8
  System_Collections_IEnumerator_o *v16; // x0
  Il2CppObject *started; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_Object_o *chainBonusObject; // x21
  UnityEngine_Object_o *v25; // x21
  __int64 i; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  __int64 v28; // x1
  int32_t CommandType; // w21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct BattleCommandComponent_array *v36; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_IEnumerator_o *v38; // x0
  Il2CppObject *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  DefCoroutine_c *v46; // x0
  Il2CppObject *milliSecFour; // x1
  Il2CppObject **v48; // x19
  UnityEngine_Color_o v50; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_5972BEC & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    sub_2213A60(&DefCoroutine_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972BEC = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  perf = 0;
  if ( _1__state > 1 )
  {
    if ( (unsigned int)(_1__state - 2) < 2 )
    {
      this->fields.__1__state = -1;
      v12 = DefCoroutine_TypeInfo;
      if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
        v12 = DefCoroutine_TypeInfo;
      }
      milliSecOne = (Il2CppObject *)v12->static_fields->milliSecOne;
      this->fields.__2__current = milliSecOne;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)milliSecOne, v2, v3, v4, v5, v6, v7);
      v15 = 4;
      goto LABEL_12;
    }
    if ( _1__state != 4 )
      return (char)perf;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      perf = _4__this->fields.perf;
      if ( perf )
      {
        BattlePerformance__ChangeBattleSpeed(perf, 0);
        perf = (BattlePerformance_o *)_4__this->fields.commandfsm;
        if ( perf )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, this->fields.endproc, 0);
          LOBYTE(perf) = 0;
          return (char)perf;
        }
      }
    }
LABEL_45:
    sub_2213CDC(perf, method);
  }
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return (char)perf;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_45;
    v16 = BattlePerformanceCommandCard__showComboEffectNormal(_4__this, this->fields.combo, 0);
    started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                (UnityEngine_MonoBehaviour_o *)_4__this,
                                v16,
                                0);
    this->fields.__2__current = started;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)started, v18, v19, v20, v21, v22, v23);
    v15 = 2;
LABEL_12:
    LOBYTE(perf) = 1;
    *((_DWORD *)p__2__current - 2) = v15;
    return (char)perf;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_45;
  chainBonusObject = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(chainBonusObject, 0, 0);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    v25 = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__Destroy_83459800(v25, 0);
  }
  for ( i = 4; i != 7; ++i )
  {
    selectedcomponents = _4__this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_45;
    if ( i - 4 >= (unsigned __int64)LODWORD(selectedcomponents->max_length) )
      goto LABEL_46;
    perf = (BattlePerformance_o *)*((_QWORD *)&selectedcomponents->obj.klass + i);
    if ( !perf )
      goto LABEL_45;
    CommandType = BattleCommandComponent__getCommandType((BattleCommandComponent_o *)perf, 0);
    if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v28);
    perf = (BattlePerformance_o *)BattleCommand__isBLANK(CommandType, 0);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      v36 = _4__this->fields.selectedcomponents;
      if ( !v36 )
        goto LABEL_45;
      if ( i - 4 >= (unsigned __int64)LODWORD(v36->max_length) )
LABEL_46:
        sub_2213CE4(perf);
      perf = (BattlePerformance_o *)*((_QWORD *)&v36->obj.klass + i);
      if ( !perf )
        goto LABEL_45;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)perf, 0);
      v50.fields.r = 0.0;
      v50.fields.g = 0.0;
      v50.fields.b = 0.0;
      v50.fields.a = 0.0;
      perf = (BattlePerformance_o *)TweenColor__Begin(gameObject, 0.2, v50, 0);
    }
  }
  perf = (BattlePerformance_o *)this->fields.combo;
  if ( !perf )
    goto LABEL_45;
  if ( !BYTE2(perf->fields.m_CachedPtr) && BattleComboData__AchieveAnyChain((BattleComboData_o *)perf, 0) )
  {
    v38 = BattlePerformanceCommandCard__showComboEffectShort(_4__this, this->fields.combo, 0);
    v39 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                            (UnityEngine_MonoBehaviour_o *)_4__this,
                            v38,
                            0);
    this->fields.__2__current = v39;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v39, v40, v41, v42, v43, v44, v45);
    v15 = 3;
    goto LABEL_12;
  }
  v46 = DefCoroutine_TypeInfo;
  if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
    v46 = DefCoroutine_TypeInfo;
  }
  milliSecFour = (Il2CppObject *)v46->static_fields->milliSecFour;
  this->fields.__2__current = milliSecFour;
  v48 = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v48, (int32_t)milliSecFour, v30, v31, v32, v33, v34, v35);
  LOBYTE(perf) = 1;
  *((_DWORD *)v48 - 2) = 1;
  return (char)perf;
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffect_d__138__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffect_d__138_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__showComboEffect_d__138__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffect_d__138_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePerformanceCommandCard__showComboEffect_d__138_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__showComboEffect_d__138__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffect_d__138_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__showComboEffect_d__138__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffect_d__138_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__waitFallStar_d__99___ctor(
        BattlePerformanceCommandCard__waitFallStar_d__99_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__waitFallStar_d__99__MoveNext(
        BattlePerformanceCommandCard__waitFallStar_d__99_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattlePerformanceCommandCard__waitFallStar_d__99_o *v8; // x19
  int32_t _1__state; // w8
  BattlePerformanceCommandCard_o *_4__this; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v12; // x21
  int max_length; // w9
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  DefCoroutine_c *v21; // x0
  Il2CppObject *milliSecFive; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  DefCoroutine_c *v25; // x0
  Il2CppObject *milliSecThree; // x1
  MissionNaviTransitionBoardItem_o *v27; // x19

  v8 = this;
  if ( (byte_5972BEF & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__waitFallStar_d__99_o *)sub_2213A60(&DefCoroutine_TypeInfo);
    byte_5972BEF = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    BattlePerformanceCommandCard__StartCountupCommandStar(_4__this, 1, 0);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    if ( BattlePerformanceCommandCard__fallStar(_4__this, 0) )
    {
      v21 = DefCoroutine_TypeInfo;
      if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, v14);
        v21 = DefCoroutine_TypeInfo;
      }
      milliSecFive = (Il2CppObject *)v21->static_fields->milliSecFive;
      v8->fields.__2__current = milliSecFive;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)milliSecFive, v15, v16, v17, v18, v19, v20);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 2;
      return result;
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this || (commandCompArray = _4__this->fields.commandCompArray) == 0 )
LABEL_13:
    sub_2213CDC(this, method);
  v12 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
      sub_2213CE4(this);
    this = (BattlePerformanceCommandCard__waitFallStar_d__99_o *)commandCompArray->m_Items[v12];
    if ( this )
    {
      BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)this, 0, 0);
      commandCompArray = _4__this->fields.commandCompArray;
      ++v12;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
  v25 = DefCoroutine_TypeInfo;
  if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
    v25 = DefCoroutine_TypeInfo;
  }
  milliSecThree = (Il2CppObject *)v25->static_fields->milliSecThree;
  v8->fields.__2__current = milliSecThree;
  v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_2213A04(v27, (int32_t)milliSecThree, v2, v3, v4, v5, v6, v7);
  result = 1;
  v27[-1].fields._BoardType_k__BackingField = 1;
  return result;
}


Il2CppObject *BattlePerformanceCommandCard__waitFallStar_d__99__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__waitFallStar_d__99_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__waitFallStar_d__99__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__waitFallStar_d__99_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePerformanceCommandCard__waitFallStar_d__99_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__waitFallStar_d__99__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__waitFallStar_d__99_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__waitFallStar_d__99__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__waitFallStar_d__99_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceCommandCard__waitFunc_d__174___ctor(
        BattlePerformanceCommandCard__waitFunc_d__174_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceCommandCard__waitFunc_d__174__MoveNext(
        BattlePerformanceCommandCard__waitFunc_d__174_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
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
    v11 = timer_5__2 + UnityEngine_Time__get_deltaTime(0);
    this->fields._timer_5__2 = v11;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields._timer_5__2 = 0.0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_14:
      sub_2213CDC(this, method);
    BattlePerformanceCommandCard__setAtkButtonFlg(_4__this, 0, 0);
    v11 = this->fields._timer_5__2;
  }
  if ( v11 >= this->fields.waittime )
  {
LABEL_10:
    callback = this->fields.callback;
    if ( callback )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
      return 0;
    }
    goto LABEL_14;
  }
  if ( !_4__this )
    goto LABEL_14;
  if ( _4__this->fields.isPressAtkBtn )
  {
    BattlePerformanceCommandCard__setAtkButtonFlg(_4__this, 0, 0);
    goto LABEL_10;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v5, v6, v7, v8, v9, v10);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *BattlePerformanceCommandCard__waitFunc_d__174__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__waitFunc_d__174_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceCommandCard__waitFunc_d__174__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__waitFunc_d__174_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePerformanceCommandCard__waitFunc_d__174_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePerformanceCommandCard__waitFunc_d__174__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__waitFunc_d__174_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceCommandCard__waitFunc_d__174__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__waitFunc_d__174_o *this,
        const MethodInfo *method)
{
  ;
}