void __fastcall BattlePerformanceCommandCard___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FE156 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceCommandCard_TypeInfo, v1);
    byte_49FE156 = 1;
  }
  BattlePerformanceCommandCard_TypeInfo->static_fields->cardsize_w = 200;
}


void __fastcall BattlePerformanceCommandCard___ctor(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Array_o *v10; // x0
  struct System_Single_array *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  unsigned int v22; // w8
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  unsigned int v28; // w8
  int32_t v29; // w2
  int32_t v30; // w3
  int v31; // w8
  int32_t v32; // w2
  int32_t v33; // w3
  unsigned int v34; // w8
  int32_t v35; // w2
  int32_t v36; // w3
  int v37; // w8
  struct BattleLogic_TutorialStringData_array *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  BattleLogic_TutorialStringData_o *v41; // x0
  BattleLogic_TutorialStringData_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  __int64 v46; // x2
  BattleLogic_TutorialStringData_o *v47; // x0
  BattleLogic_TutorialStringData_o *v48; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x1
  __int64 v52; // x2
  BattleLogic_TutorialStringData_o *v53; // x0
  BattleLogic_TutorialStringData_o *v54; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x1
  __int64 v58; // x2
  BattleLogic_TutorialStringData_o *v59; // x0
  BattleLogic_TutorialStringData_o *v60; // x21
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x1
  __int64 v64; // x2
  BattleLogic_TutorialStringData_o *v65; // x0
  BattleLogic_TutorialStringData_o *v66; // x21
  int32_t v67; // w2
  int32_t v68; // w3
  __int64 v69; // x1
  __int64 v70; // x2
  BattleLogic_TutorialStringData_o *v71; // x0
  BattleLogic_TutorialStringData_o *v72; // x21
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x1
  __int64 v76; // x2
  BattleLogic_TutorialStringData_o *v77; // x0
  BattleLogic_TutorialStringData_o *v78; // x21
  int32_t v79; // w2
  int32_t v80; // w3
  int32_t v81; // w2
  int32_t v82; // w3
  __int64 v83; // x0
  System_RuntimeFieldHandle_o v84; // 0:w1.4
  UnityEngine_Vector2_o v85; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v86; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v87; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v88; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v89; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v90; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v91; // 0:s1.4,4:s2.4

  if ( (byte_49FE155 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Rect___TypeInfo, v4);
    sub_1B640C8(&float___TypeInfo, v5);
    sub_1B640C8(&BattleLogic_TutorialStringData___TypeInfo, v6);
    sub_1B640C8(&BattleLogic_TutorialStringData_TypeInfo, v7);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096,
      v8);
    sub_1B640C8(&UnityEngine_Vector2___TypeInfo, v9);
    byte_49FE155 = 1;
  }
  v10 = (System_Array_o *)sub_1B64170(float___TypeInfo, 5LL);
  v84.fields.value = Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096;
  v11 = (struct System_Single_array *)v10;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v10, v84, 0LL);
  this->fields.COMMAND_STAMP_POS_X = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.COMMAND_STAMP_POS_X, (int32_t)v11, v12, v13);
  this->fields.COMMAND_STAMP_POS_Y = -121.0;
  this->fields.firstBonusAnimationMaxTime = 3;
  *(_QWORD *)&this->fields.CARD_ROOT_BASE_X = 0xC353000043CD0000LL;
  this->fields.npGaugeEaseType = 15;
  *(_OWORD *)&this->fields.npGaugeEffectMoveDelayTime = xmmword_BA3780;
  *(int32x2_t *)&this->fields.miniScale.fields.x = vdup_n_s32(0x3E99999Au);
  this->fields.miniScale.fields.z = 1.0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.aubelist = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aubelist, (int32_t)v16, v17, v18);
  v19 = sub_1B64170(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v19 )
    goto LABEL_47;
  v22 = *(_DWORD *)(v19 + 24);
  v23 = v19;
  if ( !v22 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 32) = 0LL;
  if ( v22 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 40) = 3276275712LL;
  if ( v22 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 48) = 3284664320LL;
  this->fields.TutorialArrow01 = (struct UnityEngine_Vector2_array *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TutorialArrow01, v19, v20, v21);
  v19 = sub_1B64170(UnityEngine_Rect___TypeInfo, 1LL);
  if ( !v19 )
    goto LABEL_47;
  v23 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_46;
  *(_OWORD *)(v19 + 32) = xmmword_BA2F90;
  this->fields.TutorialSquare01 = (struct UnityEngine_Rect_array *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TutorialSquare01, v19, v24, v25);
  v19 = sub_1B64170(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v19 )
    goto LABEL_47;
  v28 = *(_DWORD *)(v19 + 24);
  v23 = v19;
  if ( !v28 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 32) = 0x43160000C3270000LL;
  if ( v28 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 40) = 0xC2A00000C3480000LL;
  if ( v28 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 48) = 0xC2A00000C3C80000LL;
  this->fields.TutorialArrow05 = (struct UnityEngine_Vector2_array *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TutorialArrow05, v19, v26, v27);
  v19 = sub_1B64170(UnityEngine_Rect___TypeInfo, 2LL);
  if ( !v19 )
    goto LABEL_47;
  v31 = *(_DWORD *)(v19 + 24);
  v23 = v19;
  if ( !v31 )
    goto LABEL_46;
  *(_OWORD *)(v19 + 32) = xmmword_BA2CD0;
  if ( v31 == 1 )
    goto LABEL_46;
  *(_OWORD *)(v19 + 48) = xmmword_BA3940;
  this->fields.TutorialSquare05 = (struct UnityEngine_Rect_array *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TutorialSquare05, v19, v29, v30);
  this->fields.TutorialArrow22 = (struct UnityEngine_Vector2_o)0x4348000043C58000LL;
  this->fields.TutorialSquare22 = (struct UnityEngine_Rect_o)xmmword_BA2E30;
  v19 = sub_1B64170(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v19 )
    goto LABEL_47;
  v34 = *(_DWORD *)(v19 + 24);
  v23 = v19;
  if ( !v34 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 32) = 0xC248000000000000LL;
  if ( v34 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 40) = 0xC2480000C3480000LL;
  if ( v34 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v19 + 48) = 0xC2480000C3C80000LL;
  this->fields.TutorialArrow31 = (struct UnityEngine_Vector2_array *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TutorialArrow31, v19, v32, v33);
  v19 = sub_1B64170(UnityEngine_Rect___TypeInfo, 2LL);
  if ( !v19 )
    goto LABEL_47;
  v37 = *(_DWORD *)(v19 + 24);
  v23 = v19;
  if ( !v37 )
    goto LABEL_46;
  *(_OWORD *)(v19 + 32) = xmmword_BA2F90;
  if ( v37 == 1 )
    goto LABEL_46;
  *(_OWORD *)(v19 + 48) = xmmword_BA2BE0;
  this->fields.TutorialSquare32 = (struct UnityEngine_Rect_array *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TutorialSquare32, v19, v35, v36);
  v38 = (struct BattleLogic_TutorialStringData_array *)sub_1B64170(BattleLogic_TutorialStringData___TypeInfo, 7LL);
  v41 = (BattleLogic_TutorialStringData_o *)sub_1B64314(BattleLogic_TutorialStringData_TypeInfo, v39, v40);
  v85.fields.x = 0.0;
  v85.fields.y = 160.0;
  v42 = v41;
  BattleLogic_TutorialStringData___ctor(v41, 0.0, v85, 26, 0LL);
  if ( !v38 )
LABEL_47:
    sub_1B64324(v19);
  if ( v42 )
  {
    v19 = sub_1B64204(v42, v38->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_48;
  }
  if ( !v38->max_length )
    goto LABEL_46;
  v38->m_Items[0] = v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v38->m_Items, (int32_t)v42, v43, v44);
  v47 = (BattleLogic_TutorialStringData_o *)sub_1B64314(BattleLogic_TutorialStringData_TypeInfo, v45, v46);
  v86.fields.x = 0.0;
  v86.fields.y = 160.0;
  v48 = v47;
  BattleLogic_TutorialStringData___ctor(v47, 0.0, v86, 26, 0LL);
  if ( v48 )
  {
    v19 = sub_1B64204(v48, v38->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_48;
  }
  if ( v38->max_length <= 1 )
    goto LABEL_46;
  v38->m_Items[1] = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->m_Items[1], (int32_t)v48, v49, v50);
  v53 = (BattleLogic_TutorialStringData_o *)sub_1B64314(BattleLogic_TutorialStringData_TypeInfo, v51, v52);
  v87.fields.x = 0.0;
  v87.fields.y = 160.0;
  v54 = v53;
  BattleLogic_TutorialStringData___ctor(v53, 0.0, v87, 26, 0LL);
  if ( v54 )
  {
    v19 = sub_1B64204(v54, v38->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_48;
  }
  if ( v38->max_length <= 2 )
    goto LABEL_46;
  v38->m_Items[2] = v54;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->m_Items[2], (int32_t)v54, v55, v56);
  v59 = (BattleLogic_TutorialStringData_o *)sub_1B64314(BattleLogic_TutorialStringData_TypeInfo, v57, v58);
  v88.fields.x = 200.0;
  v88.fields.y = 60.0;
  v60 = v59;
  BattleLogic_TutorialStringData___ctor(v59, 0.0, v88, 28, 0LL);
  if ( v60 )
  {
    v19 = sub_1B64204(v60, v38->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_48;
  }
  if ( v38->max_length <= 3 )
    goto LABEL_46;
  v38->m_Items[3] = v60;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->m_Items[3], (int32_t)v60, v61, v62);
  v65 = (BattleLogic_TutorialStringData_o *)sub_1B64314(BattleLogic_TutorialStringData_TypeInfo, v63, v64);
  v89.fields.y = -30.0;
  v89.fields.x = 310.0;
  v66 = v65;
  BattleLogic_TutorialStringData___ctor(v65, 180.0, v89, 26, 0LL);
  if ( v66 )
  {
    v19 = sub_1B64204(v66, v38->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_48;
  }
  if ( v38->max_length <= 4 )
    goto LABEL_46;
  v38->m_Items[4] = v66;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->m_Items[4], (int32_t)v66, v67, v68);
  v71 = (BattleLogic_TutorialStringData_o *)sub_1B64314(BattleLogic_TutorialStringData_TypeInfo, v69, v70);
  v90.fields.x = 0.0;
  v90.fields.y = 140.0;
  v72 = v71;
  BattleLogic_TutorialStringData___ctor(v71, 0.0, v90, 22, 0LL);
  if ( v72 )
  {
    v19 = sub_1B64204(v72, v38->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_48;
  }
  if ( v38->max_length <= 5 )
    goto LABEL_46;
  v38->m_Items[5] = v72;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->m_Items[5], (int32_t)v72, v73, v74);
  v77 = (BattleLogic_TutorialStringData_o *)sub_1B64314(BattleLogic_TutorialStringData_TypeInfo, v75, v76);
  v91.fields.x = 0.0;
  v91.fields.y = 130.0;
  v78 = v77;
  BattleLogic_TutorialStringData___ctor(v77, 0.0, v91, 26, 0LL);
  if ( v78 )
  {
    v19 = sub_1B64204(v78, v38->obj.klass->_1.element_class);
    if ( !v19 )
    {
LABEL_48:
      v83 = sub_1B64348(v19);
      sub_1B641F0(v83, 0LL);
    }
  }
  if ( v38->max_length <= 6 )
LABEL_46:
    sub_1B6432C(v19, v23);
  v38->m_Items[6] = v78;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->m_Items[6], (int32_t)v78, v79, v80);
  this->fields.TSD = v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TSD, (int32_t)v38, v81, v82);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__ActivateFirstBonusObject(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x20
  UnityEngine_Behaviour_o *v5; // x0
  UnityEngine_Object_o *firstBonusAnimation; // x20
  UnityEngine_GameObject_o *firstBonusObject; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x20
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s10
  float v16; // s9
  UnityEngine_Object_o *v17; // x20
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *v19; // x20
  System_Collections_IEnumerator_o *BonusAnimationPlay; // x1
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE115 & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FE115 = 1;
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
  v10 = (UnityEngine_Transform_o *)v5;
  if ( !byte_49F7116 )
  {
    v5 = (UnityEngine_Behaviour_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v9);
    byte_49F7116 = 1;
  }
  if ( !v10 )
    goto LABEL_36;
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
        *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v5, 0LL);
        v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
        if ( v5 )
        {
          v14 = v11;
          v15 = v12;
          v16 = v13;
          v5 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL);
          if ( v5 )
          {
            v21.fields.y = v15 + 17.0;
            v21.fields.x = v14;
            v21.fields.z = v16;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v5, v21, 0LL);
            goto LABEL_25;
          }
        }
      }
    }
LABEL_36:
    sub_1B64324(v5);
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
  v17 = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v5 )
      goto LABEL_36;
LABEL_31:
    UnityEngine_Behaviour__set_enabled(v5, 1, 0LL);
    goto LABEL_37;
  }
  v19 = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v5 )
      goto LABEL_36;
    goto LABEL_31;
  }
LABEL_37:
  BonusAnimationPlay = BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(this, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, BonusAnimationPlay, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__AddExtraCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v8; // x8
  BattleCommandData_o *data; // x21
  BattleCommandData_o *v10; // x20
  struct BattleCommandComponent_array *v11; // x8
  BattlePerformanceCommandCard_o *v12; // x21
  __int64 v13; // x1
  BattlePerformanceCommandCard_o *v14; // x22
  struct BattleCommandComponent_array *v15; // x8
  BattlePerformanceCommandCard_o *v16; // x22
  int v17; // s0
  struct BattleCommandComponent_array *v20; // x8
  struct BattleCommandComponent_array *v21; // x8
  struct BattleCommandComponent_array *v22; // x8
  struct BattleCommandComponent_array *v23; // x8
  struct BattleCommandComponent_array *v24; // x8
  BattlePerformanceCommandCard_o *v25; // x1
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_49FE123 & 1) == 0 )
  {
    sub_1B640C8(&BattleCommandData_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceCommandCard_AddExtraCard__, v4);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&StringLiteral_18757/*"ef_excard02"*/, v6);
    byte_49FE123 = 1;
  }
  selectedcomponents = v3->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_44;
  if ( !selectedcomponents->max_length )
    goto LABEL_45;
  v8 = selectedcomponents->m_Items[0];
  if ( !v8 )
    goto LABEL_44;
  data = v8->fields.data;
  v10 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, method, v2);
  BattleCommandData___ctor_42850392(v10, data, 0LL);
  if ( !v10 )
    goto LABEL_44;
  BattleCommandData__ResetNotRelatedParamsOnExtraAttack(v10, 0LL);
  BattleCommandData__setTypeAddAttack(v10, 0LL);
  this = (BattlePerformanceCommandCard_o *)v3->fields.Bdata;
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData((BattleData_o *)this, v10->fields.uniqueId, 0LL);
  v11 = v3->fields.selectedcomponents;
  if ( !v11 )
    goto LABEL_44;
  if ( v11->max_length <= 3 )
    goto LABEL_45;
  v12 = this;
  this = (BattlePerformanceCommandCard_o *)v11->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v14 = this;
  if ( !byte_49F7116 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
    byte_49F7116 = 1;
  }
  if ( !v14 )
    goto LABEL_44;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v14,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  v15 = v3->fields.selectedcomponents;
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
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !v3->fields.extraPos )
    goto LABEL_44;
  v16 = this;
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position(v3->fields.extraPos, 0LL);
  if ( !v16 )
    goto LABEL_44;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
  v20 = v3->fields.selectedcomponents;
  if ( !v20 )
    goto LABEL_44;
  if ( v20->max_length <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v20->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v21 = v3->fields.selectedcomponents;
  if ( !v21 )
    goto LABEL_44;
  if ( v21->max_length <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v21->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__setData((BattleCommandComponent_o *)this, v10, (BattleServantData_o *)v12, 0, 1, 0, 1, 0LL);
  v22 = v3->fields.selectedcomponents;
  if ( !v22 )
    goto LABEL_44;
  if ( v22->max_length <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v22->m_Items[3];
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_44;
  v28.fields.r = 1.0;
  v28.fields.g = 1.0;
  v28.fields.b = 1.0;
  v28.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)this, v28, 0LL);
  v23 = v3->fields.selectedcomponents;
  if ( !v23 )
    goto LABEL_44;
  if ( v23->max_length <= 3 )
    goto LABEL_45;
  this = (BattlePerformanceCommandCard_o *)v23->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_18757/*"ef_excard02"*/, 4, 0LL);
  this = (BattlePerformanceCommandCard_o *)v3->fields.Bdata;
  if ( !this )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(
                                             (BattleData_o *)this,
                                             (int32_t)this->fields.highSpeedButton,
                                             0LL);
  if ( !this )
    goto LABEL_41;
  v24 = v3->fields.selectedcomponents;
  if ( !v24 )
LABEL_44:
    sub_1B64324(this);
  if ( v24->max_length <= 3 )
LABEL_45:
    sub_1B6432C(this, method);
  v25 = this;
  this = (BattlePerformanceCommandCard_o *)v24->m_Items[3];
  if ( !this )
    goto LABEL_44;
  BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)this, (BattleServantData_o *)v25, 0LL);
LABEL_41:
  v26 = Method_BattlePerformanceCommandCard_AddExtraCard__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_AddExtraCard__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_AddExtraCard__);
  v27 = (System_Reflection_MethodBase_o *)sub_1B640AC(v26, v26[4]);
  OverwriteAssetSoundName__PlayCommonSe(v27, 13, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FE116 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo, method);
    byte_49FE116 = 1;
  }
  v4 = sub_1B64314(BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__DistributeCriticalPoint(
        BattlePerformanceCommandCard_o *this,
        int32_t criticalPercentageToAdd,
        bool applyOnlyToSelectedCards,
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
  __int64 v15; // x20
  __int64 v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  BattlePerformanceCommandCard___c_c *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *commandCompArray; // x21
  System_Func_object__bool__o *_9__120_0; // x22
  Il2CppObject *v24; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  System_Func_object__bool__o *v31; // x19
  System_Action_object__o *v32; // x19

  if ( (byte_49FE114 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleCommandComponent__TypeInfo, *(_QWORD *)&criticalPercentageToAdd);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleCommandComponent___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleCommandComponent___, v8);
    sub_1B640C8(&System_Func_BattleCommandComponent__bool__TypeInfo, v9);
    sub_1B640C8(&Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__, v10);
    sub_1B640C8(&Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__, v11);
    sub_1B640C8(&Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__, v12);
    sub_1B640C8(&BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo, v13);
    sub_1B640C8(&BattlePerformanceCommandCard___c_TypeInfo, v14);
    byte_49FE114 = 1;
  }
  v15 = sub_1B64314(
          BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo,
          *(_QWORD *)&criticalPercentageToAdd,
          applyOnlyToSelectedCards);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1B64324(v16);
  *(_QWORD *)(v15 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v17, v18);
  *(_DWORD *)(v15 + 24) = criticalPercentageToAdd;
  v21 = BattlePerformanceCommandCard___c_TypeInfo;
  commandCompArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.commandCompArray;
  if ( !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
    v21 = BattlePerformanceCommandCard___c_TypeInfo;
  }
  _9__120_0 = (System_Func_object__bool__o *)v21->static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BattlePerformanceCommandCard___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__120_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleCommandComponent__bool__TypeInfo, v19, v20);
    System_Func_object__bool____ctor(
      _9__120_0,
      v24,
      Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__,
      0LL);
    static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    static_fields->__9__120_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__120_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__120_0, (int32_t)_9__120_0, v26, v27);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          commandCompArray,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  if ( applyOnlyToSelectedCards )
  {
    v31 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleCommandComponent__bool__TypeInfo, v28, v29);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)v15,
      Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__,
      0LL);
    v30 = System_Linq_Enumerable__Where_object_(
            v30,
            (System_Func_TSource__bool__o *)v31,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  }
  v32 = (System_Action_object__o *)sub_1B64314(System_Action_BattleCommandComponent__TypeInfo, v28, v29);
  System_Action_object____ctor(
    v32,
    (Il2CppObject *)v15,
    Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v30,
    (System_Action_T__o *)v32,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleCommandComponent___);
}


float __fastcall BattlePerformanceCommandCard__FSCardRootOffsetY(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  bool IsUnderVista; // w0
  float result; // s0

  if ( (byte_49FE143 & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49FE143 = 1;
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
  const MethodInfo *v4; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UnityEngine_Vector2_array *v6; // x20
  unsigned __int64 v7; // x21
  float *v8; // x22
  UnityEngine_Vector2_o *v9; // x23
  float x; // s8

  if ( (byte_49FE144 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Vector2___TypeInfo, arrow);
    byte_49FE144 = 1;
  }
  if ( !arrow
    || (this = (BattlePerformanceCommandCard_o *)sub_1B64170(UnityEngine_Vector2___TypeInfo, arrow->max_length)) == 0LL )
  {
    sub_1B64324(this);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v6 = (UnityEngine_Vector2_array *)this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0LL;
    v8 = (float *)&this->fields.COMMAND_STAMP_POS_X + 1;
    v9 = &arrow->m_Items[1];
    do
    {
      if ( v7 >= arrow->max_length || v7 >= (unsigned int)m_CancellationTokenSource )
        sub_1B6432C(this, v4);
      x = v9->fields.x;
      *(v8 - 1) = v9[-1].fields.y;
      *v8 = x;
      *v8 = x + BattlePerformanceCommandCard__FSCardRootOffsetY(this, v4);
      v8 += 2;
      LODWORD(m_CancellationTokenSource) = v6->max_length;
      ++v7;
      ++v9;
    }
    while ( (__int64)v7 < (int)m_CancellationTokenSource );
  }
  return v6;
}


UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__FSTutorialSquareCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Rect_array *square,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UnityEngine_Rect_array *v6; // x20
  unsigned __int64 v7; // x21
  float *v8; // x22
  __int128 v10; // [xsp+0h] [xbp-40h]

  if ( (byte_49FE145 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Rect___TypeInfo, square);
    byte_49FE145 = 1;
  }
  if ( !square
    || (this = (BattlePerformanceCommandCard_o *)sub_1B64170(UnityEngine_Rect___TypeInfo, square->max_length)) == 0LL )
  {
    sub_1B64324(this);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v6 = (UnityEngine_Rect_array *)this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0LL;
    v8 = (float *)&this->fields.COMMAND_STAMP_POS_X + 1;
    do
    {
      if ( v7 >= square->max_length || v7 >= (unsigned int)m_CancellationTokenSource )
        sub_1B6432C(this, v4);
      v10 = *(_OWORD *)&square->m_Items[v7].fields.m_YMin;
      *(_OWORD *)(v8 - 1) = v10;
      ++v7;
      *v8 = *((float *)&v10 + 1) + BattlePerformanceCommandCard__FSCardRootOffsetY(this, v4);
      v8 += 4;
      LODWORD(m_CancellationTokenSource) = v6->max_length;
    }
    while ( (__int64)v7 < (int)m_CancellationTokenSource );
  }
  return v6;
}


BattleCommandData_array *__fastcall BattlePerformanceCommandCard__GetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *baseCommandList; // x0
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *data; // x8
  System_Collections_Generic_IEnumerable_T__o *draw_commandlist; // x20
  ServantStatusBattleListViewItem_o *p_baseCommandList; // x19
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FE10A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandData___ctor___75644936, v4);
    sub_1B640C8(&System_Collections_Generic_List_BattleCommandData__TypeInfo, v5);
    byte_49FE10A = 1;
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
          p_baseCommandList = (ServantStatusBattleListViewItem_o *)&this->fields.baseCommandList,
          v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_BattleCommandData__TypeInfo,
                                                               method,
                                                               v2),
          System_Collections_Generic_List_object____ctor_55234504(
            v11,
            draw_commandlist,
            (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_BattleCommandData___ctor___75644936),
          p_baseCommandList->klass = (ServantStatusBattleListViewItem_c *)v11,
          sub_1B6406C(p_baseCommandList, (int32_t)v11, v12, v13),
          (baseCommandList = (System_Collections_Generic_List_object__o *)p_baseCommandList->klass) == 0LL) )
    {
LABEL_8:
      sub_1B64324(baseCommandList);
    }
  }
  return (BattleCommandData_array *)System_Collections_Generic_List_object___ToArray(
                                      baseCommandList,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
        BattlePerformanceCommandCard_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o **v10; // x8

  if ( (byte_49FE136 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_2808/*"BATTLE_COMMANDDIALOG_DONTACT"*/, *(_QWORD *)&status);
    sub_1B640C8(&StringLiteral_2809/*"BATTLE_COMMANDDIALOG_DONTACTTYPE"*/, v4);
    sub_1B640C8(&StringLiteral_2811/*"BATTLE_COMMANDDIALOG_DONTTD_COND"*/, v5);
    sub_1B640C8(&StringLiteral_2814/*"BATTLE_COMMANDDIALOG_NOFUNC"*/, v6);
    sub_1B640C8(&StringLiteral_2812/*"BATTLE_COMMANDDIALOG_DONTTD_SHORTAGE_CRITICAL_STAR"*/, v7);
    sub_1B640C8(&StringLiteral_2813/*"BATTLE_COMMANDDIALOG_DONTUSE"*/, v8);
    sub_1B640C8(&StringLiteral_2810/*"BATTLE_COMMANDDIALOG_DONTTD"*/, v9);
    byte_49FE136 = 1;
  }
  if ( (unsigned int)(status - 3) > 5 )
    v10 = (System_String_o **)&StringLiteral_2808/*"BATTLE_COMMANDDIALOG_DONTACT"*/;
  else
    v10 = (System_String_o **)*(&off_4458878 + status - 3);
  return *v10;
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
        sub_1B6432C(this, commandData);
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
    sub_1B64324(this);
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
  if ( (byte_49FE133 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, commandData);
    byte_49FE133 = 1;
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
        sub_1B6432C(this, commandData);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = npcardTr->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B6432C(this, method);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattlePerformance_o **p_perf; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  BattleWindowComponent_o *sealedWindow; // x0
  BattleWindowOuterClickManagerComponent_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  BattleWindowOuterClickComponent_OuterClickCall_o *v22; // x22
  BattleWindowOuterClickManagerComponent_o *tdConfWindow; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  BattleWindowOuterClickComponent_OuterClickCall_o *v26; // x22
  UnityEngine_Component_o *v27; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v28; // x20
  Il2CppObject *Instance; // x0
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_49FE100 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__, inperf);
    sub_1B640C8(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__, v9);
    sub_1B640C8(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_10551/*"Performance"*/, v12);
    byte_49FE100 = 1;
  }
  p_perf = &this->fields.perf;
  this->fields.perf = inperf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)inperf, (int32_t)data, (int32_t)inlogic);
  this->fields.Bdata = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.Bdata, (int32_t)data, v14, v15);
  this->fields.logic = inlogic;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.logic, (int32_t)inlogic, v16, v17);
  sealedWindow = (BattleWindowComponent_o *)this->fields.sealedWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._9_setClose.method)(
    sealedWindow,
    sealedWindow->klass->vtable._10_Open.methodPtr);
  v19 = (BattleWindowOuterClickManagerComponent_o *)this->fields.sealedWindow;
  v22 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1B64314(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v20,
                                                              v21);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceCommandCard_OnCloseSealedWindow__,
    0LL);
  if ( !v19 )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v19, v22, 0LL);
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
  v26 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1B64314(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v24,
                                                              v25);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v26,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__,
    0LL);
  if ( !tdConfWindow )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(tdConfWindow, v26, 0LL);
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
                                              (System_String_o *)StringLiteral_10551/*"Performance"*/,
                                              0LL);
  v27 = (UnityEngine_Component_o *)*p_perf;
  if ( !*p_perf
    || (v28 = (HutongGames_PlayMaker_FsmGameObject_o *)sealedWindow,
        sealedWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(v27, 0LL),
        !v28)
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(v28, (UnityEngine_GameObject_o *)sealedWindow, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_Spawner__get_Instance__),
        this->fields.spawner = (struct Spawner_o *)Instance,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.spawner, (int32_t)Instance, v30, v31),
        (sealedWindow = (BattleWindowComponent_o *)this->fields.spawner) == 0LL) )
  {
LABEL_16:
    sub_1B64324(sealedWindow);
  }
  Spawner__Precache_37649240(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleData_o *Bdata; // x0
  __int64 v9; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v11; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v13; // x21
  System_String_o *v14; // x1

  if ( (byte_49FE10F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&markindex);
    sub_1B640C8(&StringLiteral_8267/*"LONG_PRESS_COMMAND_ASSIST"*/, v5);
    sub_1B640C8(&StringLiteral_8266/*"LONG_PRESS"*/, v6);
    sub_1B640C8(&StringLiteral_21198/*"markindex"*/, v7);
    byte_49FE10F = 1;
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
      v11 = 0LL;
      do
      {
        max_length = commandCompArray->max_length;
        if ( (__int64)v11 >= (int)max_length )
          return;
        if ( v11 >= max_length )
          sub_1B6432C(Bdata, v9);
        v13 = (UnityEngine_Object_o *)commandCompArray->m_Items[v11];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Bdata = (BattleData_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
        if ( ((unsigned __int8)Bdata & 1) == 0 )
        {
          if ( !v13 )
            break;
          Bdata = (BattleData_o *)BattleCommandComponent__checkMark((BattleCommandComponent_o *)v13, markindex, 0LL);
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
                                      (System_String_o *)StringLiteral_21198/*"markindex"*/,
                                      0LL);
            if ( !Bdata )
              break;
            LODWORD(Bdata->fields.logic) = markindex;
            if ( BattleCommandComponent__isTreasureDvc((BattleCommandComponent_o *)v13, 0LL) )
            {
              Bdata = (BattleData_o *)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v14 = (System_String_o *)StringLiteral_8266/*"LONG_PRESS"*/;
            }
            else
            {
              Bdata = (BattleData_o *)v13[15].monitor;
              if ( !Bdata )
                break;
              Bdata = (BattleData_o *)BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)Bdata, 0LL);
              if ( ((unsigned __int8)Bdata & 1) == 0 )
                goto LABEL_27;
              Bdata = (BattleData_o *)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v14 = (System_String_o *)StringLiteral_8267/*"LONG_PRESS_COMMAND_ASSIST"*/;
            }
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Bdata, v14, 0LL);
          }
        }
LABEL_27:
        commandCompArray = this->fields.commandCompArray;
        ++v11;
      }
      while ( commandCompArray );
    }
LABEL_28:
    sub_1B64324(Bdata);
  }
}


void __fastcall BattlePerformanceCommandCard__MoveExtraCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  BattlePerformanceCommandCard_o *v17; // x20
  struct BattleCommandComponent_array *v18; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  BattlePerformanceCommandCard_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  BattlePerformanceCommandCard_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  BattlePerformanceCommandCard_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  BattlePerformanceCommandCard_o *v36; // x21
  System_Collections_Hashtable_o *v37; // x0
  __int64 v38; // x0
  char v39[4]; // [xsp+8h] [xbp-48h] BYREF
  int v40; // [xsp+Ch] [xbp-44h] BYREF
  float v41; // [xsp+18h] [xbp-38h] BYREF
  float v42; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_49FE124 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&iTween_EaseType_TypeInfo, v5);
    sub_1B640C8(&object___TypeInfo, v6);
    sub_1B640C8(&float_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_24644/*"x"*/, v8);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v9);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v10);
    sub_1B640C8(&StringLiteral_20750/*"islocal"*/, v11);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&iTween_TypeInfo, v12);
    byte_49FE124 = 1;
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
  this = (BattlePerformanceCommandCard_o *)sub_1B64170(object___TypeInfo, 8LL);
  if ( !this )
    goto LABEL_48;
  v17 = this;
  this = (BattlePerformanceCommandCard_o *)StringLiteral_24644/*"x"*/;
  if ( StringLiteral_24644/*"x"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_24644/*"x"*/, v17->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_24644/*"x"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v17->fields.m_CancellationTokenSource) )
    goto LABEL_47;
  v17->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.COMMAND_STAMP_POS_X, (int32_t)method, v15, v16);
  v18 = v4->fields.selectedcomponents;
  if ( !v18 )
    goto LABEL_48;
  if ( v18->max_length <= 3 )
    goto LABEL_47;
  this = (BattlePerformanceCommandCard_o *)v18->m_Items[3];
  if ( !this
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL)) == 0LL )
  {
LABEL_48:
    sub_1B64324(this);
  }
  v42 = COERCE_FLOAT(UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL)) + 250.0;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v42);
  v21 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v17->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
  }
  if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_47;
  *(_QWORD *)&v17->fields.COMMAND_STAMP_POS_Y = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.COMMAND_STAMP_POS_Y, (int32_t)v21, v19, v20);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v17->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_23830/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_47;
  *(_QWORD *)&v17->fields.CARD_ROOT_BASE_X = method;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.CARD_ROOT_BASE_X, (int32_t)method, v22, v23);
  v41 = moveTime;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v41);
  v26 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v17->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
  }
  if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 3 )
    goto LABEL_47;
  v17->fields.commandfsm = (struct PlayMakerFSM_o *)v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.commandfsm, (int32_t)v26, v24, v25);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_18682/*"easetype"*/;
  if ( StringLiteral_18682/*"easetype"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_18682/*"easetype"*/, v17->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_18682/*"easetype"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 4 )
    goto LABEL_47;
  v17->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.commandprefab, (int32_t)method, v27, v28);
  v40 = 16;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v40);
  v31 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v17->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
  }
  if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 5 )
    goto LABEL_47;
  v17->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.selectCommandPrefab, (int32_t)v31, v29, v30);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_20750/*"islocal"*/;
  if ( StringLiteral_20750/*"islocal"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_20750/*"islocal"*/, v17->klass->_1.element_class);
    if ( !this )
      goto LABEL_49;
    method = (const MethodInfo *)StringLiteral_20750/*"islocal"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 6 )
    goto LABEL_47;
  v17->fields.commandrootTransform = (struct UnityEngine_Transform_o *)method;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.commandrootTransform, (int32_t)method, v32, v33);
  v39[0] = 1;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v39);
  v36 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v17->klass->_1.element_class);
    if ( !this )
    {
LABEL_49:
      v38 = sub_1B64348(this);
      sub_1B641F0(v38, 0LL);
    }
  }
  if ( LODWORD(v17->fields.m_CancellationTokenSource) <= 7 )
LABEL_47:
    sub_1B6432C(this, method);
  v17->fields.selectinfo_sprite = (struct UISprite_o *)v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.selectinfo_sprite, (int32_t)v36, v34, v35);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v37 = iTween__Hash((System_Object_array *)v17, 0LL);
  iTween__MoveFrom_59914456(gameObject, v37, 0LL);
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
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49FE12D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___, target);
    byte_49FE12D = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0LL);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
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
    || (v19.fields.x = 0.0,
        v19.fields.y = 0.0,
        v19.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(v10, v19, 0LL),
        BattleMoveObject__SetRigidbodyGravity((BattleMoveObject_o *)v8, 0, 0LL),
        !target) )
  {
LABEL_11:
    sub_1B64324(perf);
  }
  localPosition = UnityEngine_Transform__get_localPosition(target, 0LL);
  localPosition.fields.x = localPosition.fields.x + 0.0;
  localPosition.fields.y = localPosition.fields.y + 70.0;
  localPosition.fields.z = localPosition.fields.z + 0.0;
  v21 = UnityEngine_Transform__TransformPoint(target, localPosition, 0LL);
  v22 = UnityEngine_Transform__InverseTransformPoint(v10, v21, 0LL);
  x = v22.fields.x;
  y = v22.fields.y;
  z = v22.fields.z;
  v15 = UnityEngine_Random__Range(0.3, 0.5, 0LL);
  v16 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  v23.fields.x = 0.0;
  v23.fields.y = 0.0;
  v23.fields.z = 0.0;
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  BattleMoveObject__StartNotTweenMove((BattleMoveObject_o *)v8, v23, v24, v15, v16, callback, 0LL);
  v8->fields.perf = (struct BattlePerformance_o *)target;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.perf, (int32_t)target, v17, v18);
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
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49FE12E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___, from);
    byte_49FE12E = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0LL);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
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
    sub_1B64324(perf);
  }
  UnityEngine_Transform__set_position(v10, *(UnityEngine_Vector3_o *)&v12, 0LL);
  BattleMoveObject__SetRigidbodyGravity((BattleMoveObject_o *)v8, 0, 0LL);
  localPosition = UnityEngine_Transform__get_localPosition(v10, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v18 = UnityEngine_Random__Range(0.3, 0.5, 0LL);
  v19 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  v24.fields.x = 0.0;
  v24.fields.y = 0.0;
  v24.fields.z = 0.0;
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  BattleMoveObject__StartNotTweenMove((BattleMoveObject_o *)v8, v23, v24, v18, v19, callback, 0LL);
  v8->fields.perf = (struct BattlePerformance_o *)from;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.perf, (int32_t)from, v20, v21);
}


void __fastcall BattlePerformanceCommandCard__MoveSelectedCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  unsigned __int64 i; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  BattlePerformanceCommandCard_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  BattlePerformanceCommandCard_o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  BattlePerformanceCommandCard_o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  BattlePerformanceCommandCard_o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  BattlePerformanceCommandCard_o *v36; // x22
  System_Collections_Hashtable_o *v37; // x0
  __int64 v38; // x0
  char v39[4]; // [xsp+8h] [xbp-78h] BYREF
  int v40; // [xsp+Ch] [xbp-74h] BYREF
  float v41; // [xsp+18h] [xbp-68h] BYREF
  int v42; // [xsp+1Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_49FE122 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&iTween_EaseType_TypeInfo, v5);
    sub_1B640C8(&object___TypeInfo, v6);
    sub_1B640C8(&float_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_24644/*"x"*/, v8);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v9);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v10);
    sub_1B640C8(&StringLiteral_20750/*"islocal"*/, v11);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&iTween_TypeInfo, v12);
    byte_49FE122 = 1;
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
          (this = (BattlePerformanceCommandCard_o *)sub_1B64170(object___TypeInfo, 8LL)) == 0LL) )
    {
LABEL_46:
      sub_1B64324(this);
    }
    v18 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24644/*"x"*/;
    if ( StringLiteral_24644/*"x"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_24644/*"x"*/, v18->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_24644/*"x"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
      goto LABEL_44;
    v18->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.COMMAND_STAMP_POS_X, (int32_t)method, v16, v17);
    v42 = -1081291571;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v42);
    v21 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v18->klass->_1.element_class);
      if ( !this )
      {
LABEL_45:
        v38 = sub_1B64348(this);
        sub_1B641F0(v38, 0LL);
      }
    }
    if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_44;
    *(_QWORD *)&v18->fields.COMMAND_STAMP_POS_Y = v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.COMMAND_STAMP_POS_Y, (int32_t)v21, v19, v20);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23830/*"time"*/;
    if ( StringLiteral_23830/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v18->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_23830/*"time"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_44;
    *(_QWORD *)&v18->fields.CARD_ROOT_BASE_X = method;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.CARD_ROOT_BASE_X, (int32_t)method, v22, v23);
    v41 = moveTime;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v41);
    v26 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v18->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
    }
    if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_44;
    v18->fields.commandfsm = (struct PlayMakerFSM_o *)v26;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.commandfsm, (int32_t)v26, v24, v25);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18682/*"easetype"*/;
    if ( StringLiteral_18682/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_18682/*"easetype"*/, v18->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_18682/*"easetype"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_44;
    v18->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.commandprefab, (int32_t)method, v27, v28);
    v40 = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v40);
    v31 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v18->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
    }
    if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_44;
    v18->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.selectCommandPrefab, (int32_t)v31, v29, v30);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_20750/*"islocal"*/;
    if ( StringLiteral_20750/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_20750/*"islocal"*/, v18->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
      method = (const MethodInfo *)StringLiteral_20750/*"islocal"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 6 )
LABEL_44:
      sub_1B6432C(this, method);
    v18->fields.commandrootTransform = (struct UnityEngine_Transform_o *)method;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.commandrootTransform, (int32_t)method, v32, v33);
    v39[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v39);
    v36 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v18->klass->_1.element_class);
      if ( !this )
        goto LABEL_45;
    }
    if ( LODWORD(v18->fields.m_CancellationTokenSource) <= 7 )
      goto LABEL_44;
    v18->fields.selectinfo_sprite = (struct UISprite_o *)v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.selectinfo_sprite, (int32_t)v36, v34, v35);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v37 = iTween__Hash((System_Object_array *)v18, 0LL);
    iTween__MoveAdd_59917456(gameObject, v37, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleWindowComponent_o *commandAssistDetailWindow; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleCommandAssistDetailWindowComponent_o *v9; // x20
  BattleWindowComponent_EndCall_o *v10; // x21
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_49FE13D & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__, method);
    sub_1B640C8(&Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__, v3);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_16948/*"ba21"*/, v5);
    byte_49FE13D = 1;
  }
  commandAssistDetailWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !commandAssistDetailWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(commandAssistDetailWindow, 0LL) )
    return;
  v9 = this->fields.commandAssistDetailWindow;
  v10 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v7, v8);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__,
    0LL);
  if ( !v9 )
LABEL_10:
    sub_1B64324(commandAssistDetailWindow);
  ((void (__fastcall *)(struct BattleCommandAssistDetailWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v9->klass->vtable._12_Close.method)(
    v9,
    v10,
    v9->klass->vtable._13_CompClose.methodPtr);
  v11 = Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
  OverwriteAssetSoundName__PlaySe(v12, (System_String_o *)StringLiteral_16948/*"ba21"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__OnCloseSealedWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct BattleSealedCommandWindowComponent_o *sealedWindow; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  BattleWindowComponent_EndCall_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_49FE137 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__, method);
    sub_1B640C8(&Method_BattlePerformanceCommandCard_endCloseSealedWindow__, v3);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_49FE137 = 1;
  }
  v5 = Method_BattlePerformanceCommandCard_OnCloseSealedWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseSealedWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_OnCloseSealedWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  sealedWindow = this->fields.sealedWindow;
  v10 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v8, v9);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseSealedWindow__,
    0LL);
  if ( !sealedWindow )
    sub_1B64324(v11);
  ((void (__fastcall *)(struct BattleSealedCommandWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._12_Close.method)(
    sealedWindow,
    v10,
    sealedWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceCommandCard__OnCloseTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleWindowComponent_o *tdConfWindow; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleTDConfWIndowComponent_o *v8; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_49FE13A & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__, method);
    sub_1B640C8(&Method_BattlePerformanceCommandCard_endCloseTdConfWindow__, v3);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_49FE13A = 1;
  }
  tdConfWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !tdConfWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(tdConfWindow, 0LL) )
    return;
  v8 = this->fields.tdConfWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v6, v7);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseTdConfWindow__,
    0LL);
  if ( !v8 )
LABEL_10:
    sub_1B64324(tdConfWindow);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v8->klass->vtable._12_Close.method)(
    v8,
    v9,
    v8->klass->vtable._13_CompClose.methodPtr);
  v10 = Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__OpenCommandAssistDetailWIndow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x1
  struct BattleCommandComponent_array *commandCompArray; // x22
  int max_length; // w8
  unsigned int v8; // w23
  Il2CppClass **v9; // x8
  Il2CppClass *v10; // x21
  BattleCommandData_o *methodPtr; // x20
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  v4 = this;
  if ( (byte_49FE13C & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__, *(_QWORD *)&markIndex);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&StringLiteral_16947/*"ba20"*/, v5);
    byte_49FE13C = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1B6432C(this, *(_QWORD *)&markIndex);
      v9 = &commandCompArray->obj.klass + (int)v8;
      v10 = v9[4];
      if ( !v10 )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                                 (BattleCommandComponent_o *)v9[4],
                                                 markIndex,
                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = commandCompArray->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
    methodPtr = (BattleCommandData_o *)v10->vtable[4].methodPtr;
    if ( !methodPtr )
      goto LABEL_19;
    if ( BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)v10->vtable[4].methodPtr, 0LL) )
    {
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandAssistDetailWindow;
      if ( this )
      {
        BattleCommandAssistDetailWindowComponent__SetCommandAssistInfo(
          (BattleCommandAssistDetailWindowComponent_o *)this,
          methodPtr,
          0LL);
        v12 = Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__;
        if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__);
        v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
        OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)StringLiteral_16947/*"ba20"*/, 0LL);
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
      sub_1B64324(this);
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
    sub_1B64324(logic);
  if ( BattleLogic__getTurn(logic, 0LL) == 4 )
    this->fields.isTouchNgInTutorial = 1;
LABEL_6:
  this->fields.isPlayingMoveCard = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__OpenSealedWindow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v12; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v14; // x22
  int max_length; // w9
  Il2CppClass **v16; // x8
  BattleCommandComponent_o *v17; // x21
  BattlePerformanceCommandCard_o *PrioredStatus; // x0
  int v19; // w22
  const MethodInfo *v20; // x2
  System_String_o *SealedWindowMessageLocalizationKey; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x20
  const MethodInfo_35D2010 *v25; // x2
  BattleSealedCommandWindowComponent_o *sealedWindow; // x22
  __int128 v27; // [xsp+0h] [xbp-40h] BYREF
  __int64 v28; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_int__o v29; // 0:x0.8
  System_Nullable_Vector3__o v30; // 0:x0.16
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE135 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_OpenSealedWindow__, *(_QWORD *)&markIndex);
    sub_1B640C8(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v7);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v8);
    byte_49FE135 = 1;
  }
  v9 = Method_BattlePerformanceCommandCard_OpenSealedWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenSealedWindow__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_OpenSealedWindow__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v14 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v14 >= max_length )
      goto LABEL_21;
    if ( (unsigned int)v14 >= max_length )
      sub_1B6432C(SealStatus, v12);
    v16 = &commandCompArray->obj.klass + v14;
    v17 = (BattleCommandComponent_o *)v16[4];
    if ( !v17 )
      goto LABEL_12;
    SealStatus = (BattleCommandSealStatus_o *)BattleCommandComponent__checkMark(
                                                (BattleCommandComponent_o *)v16[4],
                                                markIndex,
                                                0LL);
    if ( ((unsigned __int8)SealStatus & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v14;
    if ( !commandCompArray )
      goto LABEL_12;
  }
  SealStatus = BattleCommandComponent__get_SealStatus(v17, 0LL);
  if ( !SealStatus )
    goto LABEL_12;
  PrioredStatus = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL);
  v19 = (int)PrioredStatus;
  SealedWindowMessageLocalizationKey = BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
                                         PrioredStatus,
                                         (int32_t)PrioredStatus,
                                         v20);
  v24 = sub_1B64314(BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo, v22, v23);
  BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v24,
    0LL);
  if ( v19 == 6 )
  {
    v29 = (System_Nullable_int__o)&v28;
    v28 = 0LL;
    System_Nullable_int____ctor(v29, 26, (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
    if ( !v24 )
      goto LABEL_12;
    *(_QWORD *)&v30.fields.hasValue = &v27;
    v31.fields.x = 0.0;
    v31.fields.y = 15.0;
    *(_QWORD *)(v24 + 16) = v28;
    v31.fields.z = 0.0;
    v27 = 0uLL;
    *(_QWORD *)&v30.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v30, v31, v25);
    *(_OWORD *)(v24 + 24) = v27;
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
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v24,
    0LL);
LABEL_21:
  SealStatus = (BattleCommandSealStatus_o *)this->fields.sealedWindow;
  if ( !SealStatus )
LABEL_12:
    sub_1B64324(SealStatus);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v8; // x29
  int max_length; // w9
  Il2CppClass **v10; // x8
  BattleCommandComponent_o *v11; // x21
  BattleData_o *Bdata; // x22
  BattleServantData_o *v13; // x21
  ServantLimitAddEntity_o *svtlimitaddent; // x24
  bool IsNameTrueFromBattleSvt; // w0
  System_String_o *OverwriteTDRuby; // x22
  System_String_o *OverwriteTDName; // x23
  bool IsNpDetailActive; // w0
  BattleTDConfWIndowComponent_o *tdConfWindow; // x24
  bool v20; // w25
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  struct BattleTDConfWIndowComponent_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  BattleWindowComponent_EndCall_o *v26; // x21

  v4 = this;
  if ( (byte_49FE139 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_OpenTdConfWindow__, *(_QWORD *)&markIndex);
    sub_1B640C8(&Method_BattlePerformanceCommandCard_endOpenTdConf__, v5);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v6);
    byte_49FE139 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1B6432C(this, *(_QWORD *)&markIndex);
    v10 = &commandCompArray->obj.klass + v8;
    v11 = (BattleCommandComponent_o *)v10[4];
    if ( !v11 )
      goto LABEL_19;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v10[4],
                                               markIndex,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      Bdata = v4->fields.Bdata;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getUniqueID(v11, 0LL);
      if ( !Bdata )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(Bdata, (int32_t)this, 0LL);
      if ( !this )
        goto LABEL_19;
      v13 = (BattleServantData_o *)this;
      this = (BattlePerformanceCommandCard_o *)this->fields.cutin_trinity_q;
      if ( !this )
        goto LABEL_19;
      svtlimitaddent = v13->fields.svtlimitaddent;
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
      IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)this, v13, 1, 0LL);
      tdConfWindow = v4->fields.tdConfWindow;
      v20 = IsNpDetailActive;
      this = (BattlePerformanceCommandCard_o *)BattleServantData__getTreasureDvcId(v13, 1, 0LL);
      if ( !tdConfWindow )
        goto LABEL_19;
      BattleTDConfWIndowComponent__setData(
        tdConfWindow,
        (int32_t)this,
        v13->fields.treasuredvcLevel,
        OverwriteTDName,
        OverwriteTDRuby,
        v20,
        0LL);
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v8;
    if ( !commandCompArray )
      goto LABEL_19;
  }
  v21 = Method_BattlePerformanceCommandCard_OpenTdConfWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenTdConfWindow__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_OpenTdConfWindow__);
  v22 = (System_Reflection_MethodBase_o *)sub_1B640AC(v21, v21[4]);
  OverwriteAssetSoundName__PlayCommonSe(v22, 9, 0LL);
  v23 = v4->fields.tdConfWindow;
  v26 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v24, v25);
  BattleWindowComponent_EndCall___ctor(
    v26,
    (Il2CppObject *)v4,
    Method_BattlePerformanceCommandCard_endOpenTdConf__,
    0LL);
  if ( !v23 )
LABEL_19:
    sub_1B64324(this);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v23->klass->vtable._10_Open.method)(
    v23,
    v26,
    v23->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceCommandCard__PlayBackStar(
        BattlePerformanceCommandCard_o *this,
        System_Action_o *callback,
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
  __int64 v14; // x20
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  BattlePerformance_o *perf; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_GameObject__o *v22; // x8
  int32_t size; // w2
  int v24; // w9
  il2cpp_array_size_t j; // w29
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v27; // x8
  BattleCommandComponent_o *v28; // x21
  int32_t CriticalCount; // w22
  __int64 v30; // x2
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v32; // x23
  System_Action_object__o *v33; // x24
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x2
  System_Collections_IEnumerator_o *v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FE132 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__TypeInfo, callback);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_BattleCommandComponent_addCriticalBuff__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_1B640C8(&Method_BattlePerformanceCommandCard___c__DisplayClass173_0__PlayBackStar_b__0__, v12);
    sub_1B640C8(&BattlePerformanceCommandCard___c__DisplayClass173_0_TypeInfo, v13);
    byte_49FE132 = 1;
  }
  memset(&i, 0, sizeof(i));
  v14 = sub_1B64314(BattlePerformanceCommandCard___c__DisplayClass173_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_22;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)callback, v18, v19);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v38;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields._current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
      sub_1B6432C(aubelist, v21);
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
        v32 = commandTransformArray->m_Items[j];
        v33 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, v21, v30);
        System_Action_object____ctor(v33, (Il2CppObject *)v28, Method_BattleCommandComponent_addCriticalBuff__, 0LL);
        BattlePerformanceCommandCard__MoveNotTween2back(this, v32, (System_Action_GameObject__o *)v33, v34);
        if ( !--CriticalCount )
          goto LABEL_20;
      }
LABEL_22:
      sub_1B64324(aubelist);
    }
LABEL_20:
    ;
  }
  this->fields._IsPlayingBackStar_k__BackingField = 1;
  v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v30);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v14,
    Method_BattlePerformanceCommandCard___c__DisplayClass173_0__PlayBackStar_b__0__,
    0LL);
  v37 = BattlePerformanceCommandCard__waitFunc(this, 0.5, v35, v36);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v37, 0LL);
}


void __fastcall BattlePerformanceCommandCard__PlayFallStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  BattlePerformance_o *perf; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_GameObject__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  il2cpp_array_size_t j; // w26
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v17; // x8
  BattleCommandComponent_o *v18; // x20
  __int64 v19; // x2
  int v20; // w21
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v22; // x22
  System_Action_object__o *v23; // x23
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FE130 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__TypeInfo, method);
    sub_1B640C8(&Method_BattleCommandComponent_addCriticalBuff__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    byte_49FE130 = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v25;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields._current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v12 = this->fields.aubelist;
  if ( !v12 )
    goto LABEL_25;
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
  for ( j = 0; j != 5; ++j )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( j >= commandCompArray->max_length )
LABEL_26:
      sub_1B6432C(aubelist, v11);
    v17 = &commandCompArray->obj.klass + (int)j;
    v18 = (BattleCommandComponent_o *)v17[4];
    if ( !v18 )
      goto LABEL_25;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__IsMaxViewCritical(
                                                                         (BattleCommandComponent_o *)v17[4],
                                                                         0LL);
    if ( ((unsigned __int8)aubelist & 1) == 0 )
    {
      aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                           v18,
                                                                           0LL);
      if ( (int)aubelist >= 1 )
      {
        v20 = (int)aubelist;
        while ( 1 )
        {
          commandTransformArray = this->fields.commandTransformArray;
          if ( !commandTransformArray )
            break;
          if ( j >= commandTransformArray->max_length )
            goto LABEL_26;
          v22 = commandTransformArray->m_Items[j];
          v23 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, v11, v19);
          System_Action_object____ctor(v23, (Il2CppObject *)v18, Method_BattleCommandComponent_addCriticalBuff__, 0LL);
          BattlePerformanceCommandCard__MoveNotTween(this, v22, (System_Action_GameObject__o *)v23, v24);
          if ( !--v20 )
            goto LABEL_21;
        }
LABEL_25:
        sub_1B64324(aubelist);
      }
LABEL_21:
      BattleCommandComponent__ResetPassStarCount(v18, 0LL);
      if ( v18->fields.selectflg )
        BattleCommandComponent__updateSelectedEffect(v18, 0LL);
    }
  }
  BattlePerformanceCommandCard__updateBuffIcon(this, v11);
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
    sub_1B64324(this);
  }
  if ( v7->max_length <= 2 )
LABEL_12:
    sub_1B6432C(this, combo);
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
    sub_1B64324(this);
  }
  if ( v7->max_length <= 2 )
LABEL_12:
    sub_1B6432C(this, combo);
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
  if ( (byte_49FE125 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&StringLiteral_18756/*"ef_excard01"*/, method);
    byte_49FE125 = 1;
  }
  selectedcomponents = v2->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_7;
  if ( selectedcomponents->max_length <= 3 )
    sub_1B6432C(this, method);
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
LABEL_7:
    sub_1B64324(this);
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_18756/*"ef_excard01"*/, 5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
        BattlePerformanceCommandCard_o *this,
        BattleData_o *data,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleCommandComponent_array *selectedcomponents; // x8
  unsigned __int64 v12; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v14; // x23
  BattlePerformanceCommandCard_o *v15; // x25
  float COMMAND_STAMP_POS_Y; // w1
  __int64 v17; // x8
  struct BattleCommandComponent_array *v18; // x8
  BattlePerformanceCommandCard_o *v19; // x23
  bool activeSelf; // w24
  float v21; // s0
  float v22; // s1
  float v23; // s2
  struct BattleCommandComponent_array *v24; // x8
  float v25; // s8
  float v26; // s9
  float v27; // s10
  struct BattleCommandComponent_array *v28; // x8
  struct BattleCommandComponent_array *v29; // x8
  struct BattleCommandComponent_array *v30; // x8
  struct BattleCommandComponent_array *v31; // x8
  struct BattleCommandComponent_array *v32; // x8
  __int64 v33; // [xsp+8h] [xbp-78h] BYREF
  System_Nullable_int__o v34; // 0:x0.8
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_49FE12C & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_BattleCommandData___, data);
    sub_1B640C8(&Method_System_Nullable_int__GetValueOrDefault__, v7);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v8);
    sub_1B640C8(&Method_System_Nullable_int__get_HasValue__, v9);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FE12C = 1;
  }
  selectedcomponents = v6->fields.selectedcomponents;
  if ( selectedcomponents )
  {
    v12 = 0LL;
    while ( 1 )
    {
      max_length = selectedcomponents->max_length;
      if ( (__int64)v12 >= (int)max_length )
        break;
      if ( v12 >= max_length )
        goto LABEL_46;
      v14 = (UnityEngine_Object_o *)selectedcomponents->m_Items[v12];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !data )
          goto LABEL_44;
        this = (BattlePerformanceCommandCard_o *)BasicHelper__IndexValue_object_(
                                                   (System_Object_array *)data->fields.selectcommandlist,
                                                   v12,
                                                   0LL,
                                                   (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_BattleCommandData___);
        v15 = this;
        if ( this )
        {
          COMMAND_STAMP_POS_Y = this->fields.COMMAND_STAMP_POS_Y;
          v34 = (System_Nullable_int__o)&v33;
          v33 = 0LL;
          System_Nullable_int____ctor(
            v34,
            SLODWORD(COMMAND_STAMP_POS_Y),
            (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
          v17 = v33;
          if ( !svtData )
            goto LABEL_44;
        }
        else
        {
          v17 = 0LL;
          if ( !svtData )
            goto LABEL_44;
        }
        if ( (_BYTE)v17 && svtData->fields.uniqueId == HIDWORD(v17) )
        {
          v18 = v6->fields.selectedcomponents;
          if ( !v18 )
            goto LABEL_44;
          if ( v12 >= v18->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v18->m_Items[v12];
          if ( !this )
            goto LABEL_44;
          this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
          if ( !this )
            goto LABEL_44;
          v19 = this;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)v19,
                                                     0LL);
          if ( !this )
            goto LABEL_44;
          *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
          v24 = v6->fields.selectedcomponents;
          if ( !v24 )
            goto LABEL_44;
          if ( v12 >= v24->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v24->m_Items[v12];
          if ( !this )
            goto LABEL_44;
          v25 = v21;
          v26 = v22;
          v27 = v23;
          BattleCommandComponent__UpdateSealStatus((BattleCommandComponent_o *)this, 0LL);
          v28 = v6->fields.selectedcomponents;
          if ( !v28 )
            goto LABEL_44;
          if ( v12 >= v28->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v28->m_Items[v12];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__setData(
            (BattleCommandComponent_o *)this,
            (BattleCommandData_o *)v15,
            svtData,
            0,
            1,
            0,
            0,
            0LL);
          v29 = v6->fields.selectedcomponents;
          if ( !v29 )
            goto LABEL_44;
          if ( v12 >= v29->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v29->m_Items[v12];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)this, 0, 0LL);
          v30 = v6->fields.selectedcomponents;
          if ( !v30 )
            goto LABEL_44;
          if ( v12 >= v30->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v30->m_Items[v12];
          if ( !this )
            goto LABEL_44;
          BattleCommandComponent__UpdateCommandUpDetailLabel((BattleCommandComponent_o *)this, v12, 0LL);
          v31 = v6->fields.selectedcomponents;
          if ( !v31 )
            goto LABEL_44;
          if ( v12 >= v31->max_length )
            goto LABEL_46;
          this = (BattlePerformanceCommandCard_o *)v31->m_Items[v12];
          if ( !this )
LABEL_44:
            sub_1B64324(this);
          this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getCriticalCount(
                                                     (BattleCommandComponent_o *)this,
                                                     0LL);
          if ( (int)this >= 1 )
          {
            v32 = v6->fields.selectedcomponents;
            if ( !v32 )
              goto LABEL_44;
            if ( v12 >= v32->max_length )
LABEL_46:
              sub_1B6432C(this, data);
            this = (BattlePerformanceCommandCard_o *)v32->m_Items[v12];
            if ( !this )
              goto LABEL_44;
            BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)this, 1, 0LL);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19, activeSelf, 0LL);
          v35.fields.x = v25;
          v35.fields.y = v26;
          v35.fields.z = v27;
          GameObjectExtensions__SetLocalScale((UnityEngine_GameObject_o *)v19, v35, 0LL);
        }
      }
      selectedcomponents = v6->fields.selectedcomponents;
      ++v12;
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
    sub_1B64324(this);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B6432C(this, method);
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
      sub_1B6432C(this, method);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[i];
    if ( !this )
LABEL_7:
      sub_1B64324(this);
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
  if ( (byte_49FE154 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE154 = 1;
  }
  for ( i = 9LL; i != 12; ++i )
  {
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
LABEL_13:
      sub_1B64324(this);
    if ( i - 4 >= (unsigned __int64)commandCompArray->max_length )
      sub_1B6432C(this, method);
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
    sub_1B64324(0LL);
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

  this->fields.baseCommandList = baselist;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseCommandList,
    (int32_t)baselist,
    (int32_t)method,
    v3);
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
    sub_1B64324(this);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
      this = *(BattlePerformanceCommandCard_o **)(v9 + 352);
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
            sub_1B6432C(this, value);
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
    sub_1B64324(this);
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
      v8 = *(BattleCommandData_o **)(v7 + 368);
      if ( v8 && !BattleCommandData__isTreasureDvc(*(BattleCommandData_o **)(v7 + 368), 0LL) )
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
          sub_1B6432C(this, method);
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
    sub_1B64324(highSpeedButton);
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
  if ( (byte_49FE152 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE152 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_1B64324(this);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (__int64)v4 >= (int)max_length )
      break;
    if ( v4 >= max_length )
      sub_1B6432C(this, method);
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
  if ( (byte_49FE150 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, active);
    byte_49FE150 = 1;
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
        sub_1B6432C(this, active);
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
        sub_1B64324(this);
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
  __int64 v20; // x1
  BattlePerformanceCommandCard_o *v21; // x22
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  v10 = this;
  if ( (byte_49FE112 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(
                                               &Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___,
                                               *(_QWORD *)&targetindex);
    byte_49FE112 = 1;
  }
  spawner = v10->fields.spawner;
  selectCommandPrefab = (UnityEngine_Object_o *)v10->fields.selectCommandPrefab;
  if ( !byte_49F7111 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&targetindex);
    byte_49F7111 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v15 = static_fields->zeroVector.fields.x;
  v14 = static_fields->zeroVector.fields.y;
  v16 = static_fields->zeroVector.fields.z;
  if ( !byte_49F7117 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, *(_QWORD *)&targetindex);
    byte_49F7117 = 1;
  }
  if ( !spawner )
    goto LABEL_16;
  v22.fields.x = v15;
  v22.fields.y = v14;
  v22.fields.z = v16;
  v17 = Spawner__Spawn_37651208(
          spawner,
          selectCommandPrefab,
          v22,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL);
  commandrootTransform = (UnityEngine_Component_o *)v10->fields.commandrootTransform;
  v19 = v17;
  GameObjectExtensions__SetParent(v17, commandrootTransform, 0LL);
  if ( !v19 )
    goto LABEL_16;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
  v21 = this;
  if ( !byte_49F7116 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v20);
    byte_49F7116 = 1;
  }
  if ( !v21
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v21,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v19,
                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___)) == 0LL)
    || (BattleSelectCommandComponent__setIndex((BattleSelectCommandComponent_o *)this, targetindex, 0LL), !bc)
    || (BattleCommandComponent__setSelectStamp(bc, v19, 0LL),
        (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(v19, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_1B64324(this);
  }
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v23, 0LL);
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

  this->fields.servantStatusObjArray = statusObjArray;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.servantStatusObjArray,
    (int32_t)statusObjArray,
    (int32_t)method,
    v3);
}


void __fastcall BattlePerformanceCommandCard__SetupCommandCardCommonPrefabs(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleDataDefine_c *v10; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  AssetData_o *v13; // x20
  Il2CppObject *Object_object__48347676; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FE153 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_17127/*"bit_1stbonus_q"*/, v5);
    sub_1B640C8(&StringLiteral_17126/*"bit_1stbonus_b"*/, v6);
    sub_1B640C8(&StringLiteral_17147/*"bit_com_grand_m"*/, v7);
    sub_1B640C8(&StringLiteral_17148/*"bit_com_trinity_m"*/, v8);
    sub_1B640C8(&StringLiteral_17125/*"bit_1stbonus_a"*/, v9);
    byte_49FE153 = 1;
  }
  v10 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v10 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  v13 = AssetStorage;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              AssetStorage,
                              (System_String_o *)StringLiteral_17147/*"bit_com_grand_m"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  this->fields.cutin_grand_m = (struct UnityEngine_GameObject_o *)Object_object__48347676;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.cutin_grand_m,
    (int32_t)Object_object__48347676,
    v15,
    v16);
  v17 = AssetData__GetObject_object__48347676(
          v13,
          (System_String_o *)StringLiteral_17148/*"bit_com_trinity_m"*/,
          (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  this->fields.cutin_trinity_m = (struct UnityEngine_GameObject_o *)v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cutin_trinity_m, (int32_t)v17, v18, v19);
  v20 = AssetData__GetObject_object__48347676(
          v13,
          (System_String_o *)StringLiteral_17127/*"bit_1stbonus_q"*/,
          (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  this->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.firstbonus_q, (int32_t)v20, v21, v22);
  v23 = AssetData__GetObject_object__48347676(
          v13,
          (System_String_o *)StringLiteral_17125/*"bit_1stbonus_a"*/,
          (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  this->fields.firstbonus_a = (struct UnityEngine_GameObject_o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.firstbonus_a, (int32_t)v23, v24, v25);
  v26 = AssetData__GetObject_object__48347676(
          v13,
          (System_String_o *)StringLiteral_17126/*"bit_1stbonus_b"*/,
          (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  this->fields.firstbonus_b = (struct UnityEngine_GameObject_o *)v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.firstbonus_b, (int32_t)v26, v27, v28);
  AssetStorage = (AssetData_o *)this->fields.spawner;
  if ( !AssetStorage
    || (Spawner__Precache_37649240((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_q, 1, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0LL)
    || (Spawner__Precache_37649240((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_a, 1, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0LL) )
  {
LABEL_12:
    sub_1B64324(AssetStorage);
  }
  Spawner__Precache_37649240((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_b, 1, 0LL);
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
    sub_1B64324(this);
  v4 = this;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1B6432C(this, isZeroStart);
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
      sub_1B6432C(touches, v8);
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
      sub_1B64324(touches);
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
    sub_1B64324(this);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B6432C(this, method);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      if ( this->fields.tdConfWindow )
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
  __int64 v5; // x1
  void *selectedcomponents; // x0
  int32_t v7; // w8
  __int64 v8; // x23
  __int64 v9; // x24
  Il2CppObject *v10; // x21
  __int64 v11; // x1
  struct BattleCommandComponent_array *v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  struct BattleCommandComponent_array *v15; // x8
  BattleCommandComponent_o *v16; // x8

  v3 = nowCardIndex;
  if ( (byte_49FE151 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_BattleCommandComponent___, *(_QWORD *)&nowCardIndex);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FE151 = 1;
  }
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_22:
    sub_1B64324(selectedcomponents);
  v7 = *((_DWORD *)selectedcomponents + 6);
  if ( v7 > v3 )
  {
    v8 = v3 + 4LL;
    v9 = 1LL - v7;
    while ( 1 )
    {
      v10 = BasicHelper__IndexValue_object_(
              (System_Object_array *)selectedcomponents,
              v3,
              0LL,
              (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_BattleCommandComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      selectedcomponents = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL);
      if ( ((unsigned __int8)selectedcomponents & 1) == 0 )
      {
        v12 = this->fields.selectedcomponents;
        if ( !v12 )
          goto LABEL_22;
        if ( v3 >= v12->max_length )
          goto LABEL_23;
        v13 = *((_QWORD *)&v12->obj.klass + v8);
        if ( !v13 )
          goto LABEL_22;
        v14 = *(_QWORD *)(v13 + 368);
        if ( v14 )
        {
          selectedcomponents = this->fields.Bdata;
          if ( !selectedcomponents )
            goto LABEL_22;
          selectedcomponents = BattleData__getServantData(
                                 (BattleData_o *)selectedcomponents,
                                 *(_DWORD *)(v14 + 40),
                                 0LL);
          if ( selectedcomponents )
          {
            v15 = this->fields.selectedcomponents;
            if ( !v15 )
              goto LABEL_22;
            if ( v3 >= v15->max_length )
LABEL_23:
              sub_1B6432C(selectedcomponents, v11);
            v16 = (BattleCommandComponent_o *)*((_QWORD *)&v15->obj.klass + v8);
            if ( !v16 )
              goto LABEL_22;
            BattleCommandComponent__setBuffIconList(v16, *((BattleBuffData_o **)selectedcomponents + 98), 0LL);
          }
        }
      }
      if ( v9 + v8 == 4 )
        return;
      selectedcomponents = this->fields.selectedcomponents;
      ++v8;
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
      sub_1B64324(v4);
    v8 = deltaTime;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = v7->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
        sub_1B6432C(v4, v5);
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

  if ( (byte_49FE157 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11436/*"SELECT"*/, method);
    byte_49FE157 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11436/*"SELECT"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__back2Tactical(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x1
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
  if ( (byte_49FE142 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&StringLiteral_16712/*"anim_wait"*/, v3);
    byte_49FE142 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_21;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1B6432C(this, method);
      v7 = &commandCompArray->obj.klass + (int)v6;
      v8 = (BattleCommandComponent_o *)v7[4];
      if ( !v8 )
        break;
      MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)v7[4], 0LL);
      if ( (MarkIndex & 0x80000000) == 0 && v8->fields.selectflg )
        BattlePerformanceCommandCard__unselectCommandCard(v2, v8, MarkIndex, v10);
      if ( BattleCommandComponent__isTreasureDvc(v8, 0LL) )
      {
        BattleCommandComponent__stopAnimation(v8, 0LL);
        BattleCommandComponent__ReleaseNobleGaugeEffect(v8, 0LL);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v8,
                                                   0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkCriticalPointValid(v8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 && !v2->fields.isPrevStar )
        v2->fields.isPrevStar = 1;
      max_length = commandCompArray->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_18;
    }
LABEL_21:
    sub_1B64324(this);
  }
LABEL_18:
  UnityEngine_MonoBehaviour__StopCoroutine_69113628((UnityEngine_MonoBehaviour_o *)v2, v2->fields.openNpCoroutine, 0LL);
  BattlePerformanceCommandCard__cancelFirstBonus(v2, v11);
  this = (BattlePerformanceCommandCard_o *)v2->fields.perf;
  if ( !this )
    goto LABEL_21;
  BattlePerformance__backTacticalMode((BattlePerformance_o *)this, 0LL);
  BattlePerformanceCommandCard__playAnimation(v2, (System_String_o *)StringLiteral_16712/*"anim_wait"*/, v12);
  this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm;
  if ( !this )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackCommandTutorial01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Vector2_array *Instance; // x0
  __int64 v6; // x1
  unsigned int max_length; // w8
  UnityEngine_Vector2_array *v8; // x20
  UnityEngine_Rect_o v9; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_49FE14A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&UnityEngine_Vector2___TypeInfo, v3);
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v4);
    byte_49FE14A = 1;
  }
  Instance = (UnityEngine_Vector2_array *)sub_1B64170(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !Instance )
    goto LABEL_11;
  max_length = Instance->max_length;
  v8 = Instance;
  if ( !max_length
    || (*(_QWORD *)&Instance->m_Items[0].fields.y = 0LL, max_length == 1)
    || (*(_QWORD *)&Instance->m_Items[1].fields.y = 3276275712LL, max_length <= 2) )
  {
    sub_1B6432C(Instance, v6);
  }
  *(_QWORD *)&Instance->m_Items[2].fields.y = 3284664320LL;
  Instance = (UnityEngine_Vector2_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (v9.fields.m_XMin = -500.0,
        v9.fields.m_YMin = -230.0,
        v9.fields.m_Width = 600.0,
        v9.fields.m_Height = 250.0,
        CommonUI__OpenTutorialArrowMark_30371704((CommonUI_o *)Instance, v8, 0.0, v9, 0LL, 0LL),
        (Instance = (UnityEngine_Vector2_array *)this->fields.commandfsm) == 0LL) )
  {
LABEL_11:
    sub_1B64324(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackTutorial50(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_49FE14B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FE14B = 1;
  }
  commandfsm = this->fields.commandfsm;
  this->fields.isTouchNgInTutorial = 0;
  if ( !commandfsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackTutorialSpeedNext(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x2
  BattlePerformanceCommandCard_o *v6; // x0
  UnityEngine_Rect_array *TutorialSquare01; // x1
  UnityEngine_Vector2_array *v8; // x19
  const MethodInfo *v9; // x2
  UnityEngine_Rect_array *v10; // x0
  UnityEngine_Vector2_o v11; // 0:s1.4,4:s2.4

  if ( (byte_49FE14D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FE14D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                           (BattlePerformanceCommandCard_o *)Instance,
                                           this->fields.TutorialArrow01,
                                           v5);
  TutorialSquare01 = this->fields.TutorialSquare01;
  v8 = (UnityEngine_Vector2_array *)v6;
  v10 = BattlePerformanceCommandCard__FSTutorialSquareCard(v6, TutorialSquare01, v9);
  if ( !Instance )
    sub_1B64324(v10);
  v11.fields.x = 0.0;
  v11.fields.y = 0.0;
  CommonUI__OpenTutorialNotificationDialogArrow_30370048(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v8,
    v10,
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

  if ( (byte_49FE118 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE118 = 1;
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
    sub_1B64324(spawner);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1B6432C(spawner, v5);
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
  if ( (byte_49FE14F & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49FE14F = 1;
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
          sub_1B6432C(this, enable);
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
        sub_1B64324(this);
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
    UnityEngine_MonoBehaviour__StopCoroutine_69113628((UnityEngine_MonoBehaviour_o *)this, openNpCoroutine, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_1B64324(this);
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
          sub_1B6432C(this, openNpCoroutine);
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

  if ( (byte_49FE13F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9200/*"NG"*/, method);
    byte_49FE13F = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_9200/*"NG"*/, 0LL);
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
  UnityEngine_GameObject_o *Object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  ServantStatusBattleListViewItem_o *p_chainBonusObject; // x0

  v3 = this;
  if ( (byte_49FE119 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&targetIndex);
    byte_49FE119 = 1;
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
      sub_1B6432C(this, *(_QWORD *)&targetIndex);
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
    UnityEngine_Object__Destroy_69127736(chainBonusObject, 0LL);
    p_chainBonusObject = (ServantStatusBattleListViewItem_o *)&v3->fields.chainBonusObject;
    v16 = 0;
    v3->fields.chainBonusObject = 0LL;
LABEL_24:
    sub_1B6406C(p_chainBonusObject, v16, v14, v15);
    return;
  }
  if ( UnityEngine_Object__op_Equality(chainBonusObject, 0LL, 0LL) )
  {
    chainBonus = v3->fields.chainBonus;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
    if ( !this )
LABEL_26:
      sub_1B64324(this);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v3, chainBonus, transform, 0LL, 0LL);
    v16 = (int)Object;
    v3->fields.chainBonusObject = Object;
    p_chainBonusObject = (ServantStatusBattleListViewItem_o *)&v3->fields.chainBonusObject;
    goto LABEL_24;
  }
}


void __fastcall BattlePerformanceCommandCard__checkDrawCount(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_49FE11B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11446/*"SELECT_EXE"*/, method);
    byte_49FE11B = 1;
  }
  if ( this->fields.maxdrawcount <= this->fields.drawcount )
  {
    commandfsm = this->fields.commandfsm;
    if ( !commandfsm )
      sub_1B64324(0LL);
    PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11446/*"SELECT_EXE"*/, 0LL);
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
  if ( (byte_49FE11A & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE11A = 1;
  }
  v3 = 0LL;
  while ( 1 )
  {
    selectedcomponents = v2->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_23;
    if ( v3 >= selectedcomponents->max_length )
      sub_1B6432C(this, method);
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
        sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  BattleData_o *Bdata; // x0
  struct BattleData_o *v6; // x8
  Il2CppObject *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21

  if ( (byte_49FE14C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FE14C = 1;
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
  v6 = this->fields.Bdata;
  if ( !v6 )
    goto LABEL_19;
  if ( v6->fields.tutorialState != 10 )
    return 1;
  v6->fields.tutorialState = 20;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__, 0LL);
  if ( !Instance )
LABEL_19:
    sub_1B64324(Bdata);
  CommonUI__CloseTutorialNotificationDialogArrow_30370628((CommonUI_o *)Instance, v10, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
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
  BattleLogic_o *logic; // x0
  int v16; // w20
  int v17; // w21
  int32_t Turn; // w0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  Il2CppObject *Instance; // x20
  BattlePerformanceCommandCard_o *v22; // x21
  const MethodInfo *v23; // x2
  BattlePerformanceCommandCard_o *v24; // x22
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  struct BattleLogic_TutorialStringData_array *TSD; // x8
  BattleLogic_TutorialStringData_o *v28; // x8
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  struct BattleLogic_TutorialStringData_array *v31; // x8
  int32_t v32; // w1
  const MethodInfo *v33; // x2
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *v35; // x20
  System_String_o *v36; // x21
  const MethodInfo *v37; // x1
  UnityEngine_Vector2_o FSTutorialArrow22; // kr00_8
  const MethodInfo *v39; // x1
  float v40; // s0
  float v41; // s1
  float v42; // s2
  float v43; // s3
  struct BattleLogic_TutorialStringData_array *v44; // x8
  BattleLogic_TutorialStringData_o *v45; // x8
  float v46; // s16
  float v47; // s7
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  struct BattleLogic_TutorialStringData_array *v50; // x8
  int32_t v51; // w1
  const MethodInfo *v52; // x2
  struct BattlePerformance_o *v53; // x8
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  struct BattleLogic_TutorialStringData_array *v56; // x8
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x2
  struct BattleLogic_TutorialStringData_array *v59; // x8
  Il2CppObject *v60; // x20
  System_String_o *v61; // x21
  __int64 v62; // x1
  __int64 v63; // x2
  System_Action_o *v64; // x22
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x2
  struct BattleLogic_TutorialStringData_array *v67; // x8
  UnityEngine_Rect_o v68; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_49FE149 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceCommandCard_callbackTutorial50__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_13407/*"TUTORIAL_MESSAGE_BATTLE_131"*/, v6);
    sub_1B640C8(&StringLiteral_13403/*"TUTORIAL_MESSAGE_BATTLE_111"*/, v7);
    sub_1B640C8(&StringLiteral_13411/*"TUTORIAL_MESSAGE_BATTLE_153"*/, v8);
    sub_1B640C8(&StringLiteral_13409/*"TUTORIAL_MESSAGE_BATTLE_141"*/, v9);
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v10);
    sub_1B640C8(&StringLiteral_13416/*"TUTORIAL_MESSAGE_BATTLE_230"*/, v11);
    sub_1B640C8(&StringLiteral_13405/*"TUTORIAL_MESSAGE_BATTLE_122"*/, v12);
    sub_1B640C8(&StringLiteral_13418/*"TUTORIAL_MESSAGE_BATTLE_321"*/, v13);
    sub_1B640C8(&StringLiteral_13415/*"TUTORIAL_MESSAGE_BATTLE_223"*/, v14);
    byte_49FE149 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_72;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_72;
  v16 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getWave(this->fields.logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_72;
  v17 = (int)logic;
  Turn = BattleLogic__getTurn(this->fields.logic, 0LL);
  if ( v16 != 3 )
  {
    if ( v16 != 2 )
    {
      if ( v16 == 1 )
      {
        switch ( Turn )
        {
          case 1:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v22 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_13403/*"TUTORIAL_MESSAGE_BATTLE_111"*/,
                                                      0LL);
            v24 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v22,
                                                      this->fields.TutorialArrow01,
                                                      v23);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v24,
                                       this->fields.TutorialSquare01,
                                       v25);
            TSD = this->fields.TSD;
            if ( !TSD )
              goto LABEL_72;
            if ( !TSD->max_length )
              goto LABEL_73;
            v28 = TSD->m_Items[0];
            if ( !v28 )
              goto LABEL_72;
            goto LABEL_68;
          case 2:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v22 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_13405/*"TUTORIAL_MESSAGE_BATTLE_122"*/,
                                                      0LL);
            v24 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v22,
                                                      this->fields.TutorialArrow01,
                                                      v54);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v24,
                                       this->fields.TutorialSquare01,
                                       v55);
            v56 = this->fields.TSD;
            if ( !v56 )
              goto LABEL_72;
            if ( v56->max_length <= 1 )
              goto LABEL_73;
            v28 = v56->m_Items[1];
            if ( !v28 )
              goto LABEL_72;
            goto LABEL_68;
          case 3:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v22 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_13407/*"TUTORIAL_MESSAGE_BATTLE_131"*/,
                                                      0LL);
            v24 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v22,
                                                      this->fields.TutorialArrow01,
                                                      v57);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v24,
                                       this->fields.TutorialSquare01,
                                       v58);
            v59 = this->fields.TSD;
            if ( !v59 )
              goto LABEL_72;
            if ( v59->max_length <= 2 )
              goto LABEL_73;
            v28 = v59->m_Items[2];
            if ( !v28 )
              goto LABEL_72;
            goto LABEL_68;
          case 4:
            v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v61 = LocalizationManager__Get((System_String_o *)StringLiteral_13409/*"TUTORIAL_MESSAGE_BATTLE_141"*/, 0LL);
            v64 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v62, v63);
            System_Action___ctor(
              v64,
              (Il2CppObject *)this,
              Method_BattlePerformanceCommandCard_callbackTutorial50__,
              0LL);
            if ( !v60 )
              goto LABEL_72;
            CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)v60, v61, -1, v64, 0LL);
            goto LABEL_70;
          case 5:
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v22 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_13411/*"TUTORIAL_MESSAGE_BATTLE_153"*/,
                                                      0LL);
            v24 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      v22,
                                                      this->fields.TutorialArrow05,
                                                      v65);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v24,
                                       this->fields.TutorialSquare05,
                                       v66);
            v67 = this->fields.TSD;
            if ( !v67 )
              goto LABEL_72;
            if ( v67->max_length <= 3 )
              goto LABEL_73;
            v28 = v67->m_Items[3];
            if ( v28 )
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
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v20);
      perf = this->fields.perf;
      if ( !perf || !perf->fields.data )
        goto LABEL_72;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, v32, v33);
      v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TUTORIAL_MESSAGE_BATTLE_223"*/, 0LL);
      FSTutorialArrow22 = BattlePerformanceCommandCard__get_FSTutorialArrow22(this, v37);
      *(UnityEngine_Rect_o *)&v40 = BattlePerformanceCommandCard__get_FSTutorialSquare22(this, v39);
      v44 = this->fields.TSD;
      if ( !v44 )
        goto LABEL_72;
      if ( v44->max_length > 4 )
      {
        v45 = v44->m_Items[4];
        if ( v45 && v35 )
        {
          v46 = v42;
          v47 = v43;
          v68.fields.m_XMin = v40;
          v68.fields.m_YMin = v41;
          v68.fields.m_Width = v46;
          v68.fields.m_Height = v47;
          CommonUI__OpenTutorialNotificationDialogArrow(
            (CommonUI_o *)v35,
            v36,
            FSTutorialArrow22,
            v68,
            v45->fields.way,
            v45->fields.pos,
            v45->fields.size,
            0LL,
            0LL);
          goto LABEL_70;
        }
LABEL_72:
        sub_1B64324(logic);
      }
LABEL_73:
      sub_1B6432C(logic, v26);
    }
    if ( Turn >= 3 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v20);
      v53 = this->fields.perf;
      if ( !v53 || !v53->fields.data )
        goto LABEL_72;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, v51, v52);
    }
LABEL_46:
    BattlePerformanceCommandCard__callbackCommandTutorial01(this, v19);
    goto LABEL_70;
  }
  if ( v17 || Turn != 1 )
  {
    if ( v17 != 1 || Turn != 1 )
      goto LABEL_46;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13418/*"TUTORIAL_MESSAGE_BATTLE_321"*/, 0LL);
    v24 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              v22,
                                              this->fields.TutorialArrow31,
                                              v48);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__get_FSTutorialSquare32(this, v49);
    v50 = this->fields.TSD;
    if ( !v50 )
      goto LABEL_72;
    if ( v50->max_length <= 6 )
      goto LABEL_73;
    v28 = v50->m_Items[6];
    if ( !v28 )
      goto LABEL_72;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = (BattlePerformanceCommandCard_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13416/*"TUTORIAL_MESSAGE_BATTLE_230"*/, 0LL);
    v24 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              v22,
                                              this->fields.TutorialArrow31,
                                              v29);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(v24, this->fields.TutorialSquare01, v30);
    v31 = this->fields.TSD;
    if ( !v31 )
      goto LABEL_72;
    if ( v31->max_length <= 5 )
      goto LABEL_73;
    v28 = v31->m_Items[5];
    if ( !v28 )
      goto LABEL_72;
  }
LABEL_68:
  if ( !Instance )
    goto LABEL_72;
  CommonUI__OpenTutorialNotificationDialogArrow_30370048(
    (CommonUI_o *)Instance,
    (System_String_o *)v22,
    (UnityEngine_Vector2_array *)v24,
    (UnityEngine_Rect_array *)logic,
    v28->fields.way,
    v28->fields.pos,
    v28->fields.size,
    0LL,
    0LL);
LABEL_70:
  logic = (BattleLogic_o *)this->fields.commandfsm;
  if ( !logic )
    goto LABEL_72;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__clickBackButton(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattlePerformance_o *perf; // x8

  v2 = this;
  if ( (byte_49FE141 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&StringLiteral_3584/*"CLOSE_WINDOW"*/, method);
    byte_49FE141 = 1;
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
    sub_1B64324(this);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3584/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__closeWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__coStartFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FE113 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo, *(_QWORD *)&type);
    byte_49FE113 = 1;
  }
  v5 = sub_1B64314(BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo, *(_QWORD *)&type, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 40) = type;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__colOpenNpCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FE134 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceCommandCard__colOpenNpCard_d__180_TypeInfo, method);
    byte_49FE134 = 1;
  }
  v4 = sub_1B64314(BattlePerformanceCommandCard__colOpenNpCard_d__180_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattlePerformanceCommandCard__comboExecute(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleLogic_o *logic; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v13; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  struct System_Int32_array *selectcommand; // x8
  struct BattleCommandData_array *commandlist; // x9
  __int64 v22; // x8
  Il2CppClass **v23; // x8
  BattleCommandData_o *v24; // x20
  struct BattlePerformance_o *v25; // x8
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Int32_array *v29; // x9
  struct BattleCommandData_array *v30; // x8
  __int64 v31; // x9
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Int32_array *v39; // x8
  struct BattleCommandData_array *v40; // x9
  __int64 v41; // x8
  Il2CppObject *v42; // x1
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Int32_array *v49; // x8
  struct BattleCommandData_array *v50; // x9
  __int64 v51; // x8
  Il2CppObject *v52; // x1
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  BattleData_o *Bdata; // x21
  struct BattlePerformance_o *v58; // x8
  struct BattleData_o *v59; // x9
  struct BattleActionLogManagerInterface_o *actionLogManager; // x21
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned int globaltargetId; // w22
  __int64 v63; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  struct BattlePerformance_o *v66; // x8
  struct BattleData_o *v67; // x8
  struct System_Int32_array *v68; // x9
  struct BattleActionLogManagerInterface_o *v69; // x21
  BattleActionLogManagerInterface_c *v70; // x8
  unsigned int v71; // w23
  unsigned int v72; // w24
  unsigned int v73; // w22
  __int64 v74; // x9
  BattleActionLogManagerInterface_c **v75; // x10
  __int64 v76; // x0
  struct BattleData_o *v77; // x8
  __int64 v78; // x2
  struct System_Int32_array *v79; // x8
  struct BattleCommandData_array *v80; // x9
  __int64 v81; // x8
  BattleCommandData_o *v82; // x22
  BattleCommandData_o *v83; // x21
  int32_t v84; // w2
  int32_t v85; // w3
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  BattleData_o *v90; // x21
  unsigned __int64 i; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t v93; // w2
  int32_t v94; // w3
  struct BattlePerformance_o *v95; // x8
  struct BattleData_o *v96; // x8
  struct BattlePerformance_o *v97; // x8
  struct BattlePerformance_o *v98; // x8
  _QWORD *v99; // x0
  System_Reflection_MethodBase_o *v100; // x0

  if ( (byte_49FE11C & 1) == 0 )
  {
    sub_1B640C8(&BattleActionLogManagerInterface_TypeInfo, method);
    sub_1B640C8(&BattleCommandData_TypeInfo, v3);
    sub_1B640C8(&Method_BattlePerformanceCommandCard_comboExecute__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandData__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandData___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleCommandData__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49FE11C = 1;
  }
  if ( this->fields.maxdrawcount > this->fields.drawcount )
    return;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_107;
  BattleLogic__SetTimeAccelerationCheckDelayReset(logic, 0, 0LL);
  logic = (BattleLogic_o *)this->fields.perf;
  if ( !logic )
    goto LABEL_107;
  BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)logic, 0LL);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_107;
  logic = (BattleLogic_o *)perf->fields.statusPerf;
  if ( !logic )
    goto LABEL_107;
  BattlePerformanceStatus__SetActiveTotalCriticalStar((BattlePerformanceStatus_o *)logic, 0, 0LL);
  v13 = this->fields.perf;
  if ( !v13 )
    goto LABEL_107;
  data = v13->fields.data;
  if ( !data )
    goto LABEL_107;
  data->fields.isCalcCritical = 1;
  logic = (BattleLogic_o *)this->fields.backTacticalButton;
  if ( !logic )
    goto LABEL_107;
  logic = (BattleLogic_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)logic, 0LL);
  if ( !logic )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 0, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 0, v15);
  logic = (BattleLogic_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !logic )
    goto LABEL_107;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)logic, 0LL);
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  logic = (BattleLogic_o *)UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL);
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    logic = (BattleLogic_o *)this->fields.spawner;
    if ( !logic )
      goto LABEL_107;
    Spawner__Despawn((Spawner_o *)logic, this->fields.firstBonusObject, 1, 0LL);
  }
  if ( this->fields.maxdrawcount >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      selectcommand = this->fields.selectcommand;
      if ( !selectcommand )
        break;
      if ( (unsigned int)v19 >= selectcommand->max_length )
        goto LABEL_108;
      commandlist = this->fields.commandlist;
      if ( !commandlist )
        break;
      v22 = selectcommand->m_Items[v19 + 1];
      if ( (unsigned int)v22 >= commandlist->max_length )
        goto LABEL_108;
      v23 = &commandlist->obj.klass + v22;
      v24 = (BattleCommandData_o *)v23[4];
      if ( !v24 )
        break;
      logic = (BattleLogic_o *)BattleCommandData__isTreasureDvc((BattleCommandData_o *)v23[4], 0LL);
      if ( ((unsigned __int8)logic & 1) != 0 )
      {
        v25 = this->fields.perf;
        if ( !v25 )
          break;
        logic = (BattleLogic_o *)v25->fields.data;
        if ( !logic )
          break;
        logic = (BattleLogic_o *)BattleData__getServantData((BattleData_o *)logic, v24->fields.uniqueId, 0LL);
        if ( logic )
          BattleServantData__SetSelectedTreasureDevice((BattleServantData_o *)logic, 0LL);
      }
      else
      {
        BattleCommandData__SetSelectedType(v24, 0LL);
      }
      if ( (int)++v19 >= this->fields.maxdrawcount )
        goto LABEL_32;
    }
LABEL_107:
    sub_1B64324(logic);
  }
LABEL_32:
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleCommandData__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleCommandData___ctor__);
  v29 = this->fields.selectcommand;
  if ( !v29 )
    goto LABEL_107;
  if ( !v29->max_length )
    goto LABEL_108;
  v30 = this->fields.commandlist;
  if ( !v30 )
    goto LABEL_107;
  v31 = v29->m_Items[1];
  if ( (unsigned int)v31 >= v30->max_length )
    goto LABEL_108;
  if ( !v26 )
    goto LABEL_107;
  v32 = (Il2CppObject *)v30->m_Items[v31];
  items = v26->fields._items;
  v34 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_107;
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v32,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v26->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v32;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v32, v27, v28);
  }
  v39 = this->fields.selectcommand;
  if ( !v39 )
    goto LABEL_107;
  if ( v39->max_length <= 1 )
    goto LABEL_108;
  v40 = this->fields.commandlist;
  if ( !v40 )
    goto LABEL_107;
  v41 = v39->m_Items[2];
  if ( (unsigned int)v41 >= v40->max_length )
    goto LABEL_108;
  v42 = (Il2CppObject *)v40->m_Items[v41];
  v43 = v26->fields._items;
  v44 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v26->fields._version;
  if ( !v43 )
    goto LABEL_107;
  v45 = v26->fields._size;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v42,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v26->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v42, v37, v38);
  }
  v49 = this->fields.selectcommand;
  if ( !v49 )
    goto LABEL_107;
  if ( v49->max_length <= 2 )
    goto LABEL_108;
  v50 = this->fields.commandlist;
  if ( !v50 )
    goto LABEL_107;
  v51 = v49->m_Items[3];
  if ( (unsigned int)v51 >= v50->max_length )
    goto LABEL_108;
  v52 = (Il2CppObject *)v50->m_Items[v51];
  v53 = v26->fields._items;
  v54 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v26->fields._version;
  if ( !v53 )
    goto LABEL_107;
  v55 = v26->fields._size;
  if ( (unsigned int)v55 >= v53->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v52,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &v53->obj.klass + v55;
    v26->fields._size = v55 + 1;
    v56[4] = (Il2CppClass *)v52;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v52, v47, v48);
  }
  Bdata = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_object___ToArray(
                             v26,
                             (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !Bdata )
    goto LABEL_107;
  BattleData__setCommandData(Bdata, (BattleCommandData_array *)logic, 0LL);
  v58 = this->fields.perf;
  if ( !v58 )
    goto LABEL_107;
  v59 = v58->fields.data;
  if ( !v59 )
    goto LABEL_107;
  actionLogManager = v59->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_107;
  klass = actionLogManager->klass;
  globaltargetId = v59->fields.globaltargetId;
  v63 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v63;
      p_offset += 2;
      if ( !v63 )
        goto LABEL_65;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 7].method;
  }
  else
  {
LABEL_65:
    p_method = sub_1BB60A8(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 7LL);
  }
  logic = (BattleLogic_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD))p_method)(
                             actionLogManager,
                             globaltargetId,
                             *(_QWORD *)(p_method + 8));
  v66 = this->fields.perf;
  if ( !v66 )
    goto LABEL_107;
  v67 = v66->fields.data;
  if ( !v67 )
    goto LABEL_107;
  v68 = this->fields.selectcommand;
  if ( !v68 )
    goto LABEL_107;
  if ( v68->max_length < 3 )
    goto LABEL_108;
  v69 = v67->fields.actionLogManager;
  if ( !v69 )
    goto LABEL_107;
  v70 = v69->klass;
  v72 = v68->m_Items[1];
  v71 = v68->m_Items[2];
  v73 = v68->m_Items[3];
  v74 = *(unsigned __int16 *)(&v69->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v69->klass->_2.bitflags2 + 3) )
  {
    v75 = (BattleActionLogManagerInterface_c **)&v70->_1.interfaceOffsets->offset;
    while ( *(v75 - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v74;
      v75 += 2;
      if ( !v74 )
        goto LABEL_76;
    }
    v76 = (__int64)&v70->vtable[*(_DWORD *)v75 + 8].method;
  }
  else
  {
LABEL_76:
    v76 = sub_1BB60A8(v69, BattleActionLogManagerInterface_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD))v76)(
    v69,
    v72,
    v71,
    v73,
    *(_QWORD *)(v76 + 8));
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_107;
  BattleLogic__endSelectCommand(logic, 0LL);
  v77 = this->fields.Bdata;
  if ( !v77 )
    goto LABEL_107;
  logic = (BattleLogic_o *)v77->fields.combodata;
  if ( !logic )
    goto LABEL_107;
  logic = (BattleLogic_o *)BattleComboData__isExtraAttack((BattleComboData_o *)logic, 0LL);
  if ( ((unsigned __int8)logic & 1) == 0 )
    goto LABEL_93;
  v79 = this->fields.selectcommand;
  if ( !v79 )
    goto LABEL_107;
  if ( v79->max_length <= 2 )
    goto LABEL_108;
  v80 = this->fields.commandlist;
  if ( !v80 )
    goto LABEL_107;
  v81 = v79->m_Items[3];
  if ( (unsigned int)v81 >= v80->max_length )
LABEL_108:
    sub_1B6432C(logic, v17);
  v82 = v80->m_Items[v81];
  v83 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v17, v78);
  BattleCommandData___ctor_42850392(v83, v82, 0LL);
  if ( !v83 )
    goto LABEL_107;
  BattleCommandData__ResetServantCardIdsIndex(v83, 0LL);
  BattleCommandData__setTypeAddAttack(v83, 0LL);
  v86 = v26->fields._items;
  v87 = Method_System_Collections_Generic_List_BattleCommandData__Add__;
  ++v26->fields._version;
  if ( !v86 )
    goto LABEL_107;
  v88 = v26->fields._size;
  if ( (unsigned int)v88 >= v86->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)v83,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = &v86->obj.klass + v88;
    v26->fields._size = v88 + 1;
    v89[4] = (Il2CppClass *)v83;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v89 + 4), (int32_t)v83, v84, v85);
  }
  v90 = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_object___ToArray(
                             v26,
                             (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !v90 )
    goto LABEL_107;
  BattleData__setCommandData(v90, (BattleCommandData_array *)logic, 0LL);
LABEL_93:
  for ( i = 0LL; i != 3; ++i )
  {
    selectedcomponents = this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_107;
    if ( i >= selectedcomponents->max_length )
      goto LABEL_108;
    logic = (BattleLogic_o *)selectedcomponents->m_Items[i];
    if ( !logic )
      goto LABEL_107;
    BattleCommandComponent__startComboCard((BattleCommandComponent_o *)logic, 0LL);
  }
  v95 = this->fields.perf;
  if ( !v95 )
    goto LABEL_107;
  v96 = v95->fields.data;
  if ( !v96 )
    goto LABEL_107;
  v96->fields.commandCriticalArray = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v96->fields.commandCriticalArray, 0, v93, v94);
  v97 = this->fields.perf;
  if ( !v97 )
    goto LABEL_107;
  logic = (BattleLogic_o *)v97->fields.data;
  if ( !logic )
    goto LABEL_107;
  BattleData__ResetAllCriticalInfo((BattleData_o *)logic, 0LL);
  v98 = this->fields.perf;
  if ( !v98 )
    goto LABEL_107;
  logic = (BattleLogic_o *)v98->fields.statusPerf;
  if ( !logic )
    goto LABEL_107;
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)logic, -1, 0, 0LL);
  v99 = Method_BattlePerformanceCommandCard_comboExecute__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_comboExecute__ + 83) & 2) != 0 )
    v99 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_comboExecute__);
  v100 = (System_Reflection_MethodBase_o *)sub_1B640AC(v99, v99[4]);
  OverwriteAssetSoundName__PlayCommonSe(v100, 6, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array **p_p_commandlist; // x20
  unsigned __int64 v13; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x0
  struct BattleCommandComponent_array **p_commandCompArray; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x0
  struct UnityEngine_Transform_array **p_commandTransformArray; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  struct UnityEngine_GameObject_array *v27; // x26
  unsigned int v28; // w29
  int32_t v29; // w23
  __int64 v30; // x28
  int32_t v31; // w2
  int32_t v32; // w3
  BattlePerformanceCommandCard_o *v33; // x1
  Il2CppClass **v34; // x0
  struct UnityEngine_GameObject_array *v35; // x8
  int32_t v36; // w2
  int32_t v37; // w3
  struct BattleCommandComponent_array *v38; // x25
  BattlePerformanceCommandCard_o *v39; // x26
  Il2CppClass **v40; // x0
  struct UnityEngine_GameObject_array *v41; // x8
  struct UnityEngine_Transform_array *v42; // x25
  int32_t v43; // w2
  int32_t v44; // w3
  BattlePerformanceCommandCard_o *v45; // x27
  Il2CppClass **v46; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  struct BattlePerformance_o *perf; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  struct UnityEngine_Transform_array *v53; // x8
  struct UnityEngine_Transform_array *excardTr; // x8
  UnityEngine_Transform_o *v55; // x1
  struct UnityEngine_Transform_array *v56; // x8
  struct UnityEngine_Transform_array *cardTr; // x9
  struct UnityEngine_Transform_array *v58; // x8
  UnityEngine_Transform_o *v59; // x27
  struct UnityEngine_Transform_array *v60; // x8
  UnityEngine_Transform_o *v61; // x27
  struct UnityEngine_Transform_array *npcardTr; // x8
  struct UnityEngine_Transform_array *v63; // x8
  UnityEngine_Transform_o *v64; // x27
  struct UnityEngine_Transform_array *v65; // x8
  UnityEngine_Transform_o *v66; // x27
  struct UnityEngine_GameObject_array *v67; // x8
  __int64 v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  struct UnityEngine_GameObject_array *v71; // x8
  struct BattleCommandComponent_array *selectedcomponents; // x20
  int32_t v73; // w2
  int32_t v74; // w3
  BattlePerformanceCommandCard_o *v75; // x21
  __int64 v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  __int64 v79; // x0
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_49FE101 & 1) == 0 )
  {
    sub_1B640C8(&BattleCommandComponent___TypeInfo, method);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Transform___TypeInfo, v8);
    sub_1B640C8(&StringLiteral_18778/*"ef_resistarrow"*/, v9);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&StringLiteral_18793/*"ef_weakarrow"*/, v10);
    byte_49FE101 = 1;
  }
  p_p_commandlist = &v2->fields.p_commandlist;
  p_commandlist = v2->fields.p_commandlist;
  if ( p_commandlist )
  {
    v13 = 0LL;
    while ( 1 )
    {
      max_length = p_commandlist->max_length;
      if ( (__int64)v13 >= (int)max_length )
        break;
      if ( v13 >= max_length )
        goto LABEL_83;
      v15 = (UnityEngine_Object_o *)p_commandlist->m_Items[v13];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v15, 0LL);
      p_commandlist = *p_p_commandlist;
      ++v13;
      if ( !*p_p_commandlist )
        goto LABEL_74;
    }
  }
  v16 = sub_1B64170(UnityEngine_GameObject___TypeInfo, 9LL);
  v2->fields.p_commandlist = (struct UnityEngine_GameObject_array *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.p_commandlist, v16, v17, v18);
  v19 = sub_1B64170(BattleCommandComponent___TypeInfo, 9LL);
  p_commandCompArray = &v2->fields.commandCompArray;
  v2->fields.commandCompArray = (struct BattleCommandComponent_array *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.commandCompArray, v19, v21, v22);
  v23 = sub_1B64170(UnityEngine_Transform___TypeInfo, 9LL);
  p_commandTransformArray = &v2->fields.commandTransformArray;
  v2->fields.commandTransformArray = (struct UnityEngine_Transform_array *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.commandTransformArray, v23, v25, v26);
  v27 = v2->fields.p_commandlist;
  if ( !v27 )
    goto LABEL_74;
  v28 = 0;
  v29 = 30;
  v30 = -32LL;
  while ( (signed int)v28 < (signed int)v27->max_length )
  {
    this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v2,
                                               v2->fields.commandprefab,
                                               v2->fields.commandrootTransform,
                                               0LL,
                                               0LL);
    if ( v28 >= v27->max_length )
      goto LABEL_83;
    v33 = this;
    v34 = &v27->obj.klass + (int)v28;
    v34[4] = (Il2CppClass *)v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v33, v31, v32);
    v35 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_74;
    if ( v28 >= v35->max_length )
      goto LABEL_83;
    this = (BattlePerformanceCommandCard_o *)v35->m_Items[v28];
    if ( !this )
      goto LABEL_74;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    v38 = *p_commandCompArray;
    if ( !*p_commandCompArray )
      goto LABEL_74;
    v39 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v38->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_84;
    }
    if ( v28 >= v38->max_length )
      goto LABEL_83;
    v40 = &v38->obj.klass + (int)v28;
    v40[4] = (Il2CppClass *)v39;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v39, v36, v37);
    v41 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_74;
    if ( v28 >= v41->max_length )
      goto LABEL_83;
    this = (BattlePerformanceCommandCard_o *)v41->m_Items[v28];
    if ( !this )
      goto LABEL_74;
    v42 = *p_commandTransformArray;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
    if ( !v42 )
      goto LABEL_74;
    v45 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v42->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_84;
    }
    if ( v28 >= v42->max_length )
      goto LABEL_83;
    v46 = &v42->obj.klass + (int)v28;
    v46[4] = (Il2CppClass *)v45;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v45, v43, v44);
    if ( !v39 )
      goto LABEL_74;
    BattleCommandComponent__Initialize((BattleCommandComponent_o *)v39, 0LL);
    LOWORD(v39->fields.cutin_trinity_q) = 256;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v39, 0LL, 0LL, 0, 1, 0, 1, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
    v39->fields.logic = (struct BattleLogic_o *)gameObject;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.logic, (int32_t)gameObject, v48, v49);
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)v39, v29, 0LL);
    perf = v2->fields.perf;
    v39->fields.sealedWindow = (struct BattleSealedCommandWindowComponent_o *)perf;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.sealedWindow, (int32_t)perf, v51, v52);
    if ( v28 <= 4 )
    {
      v56 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v28 >= v56->max_length )
        goto LABEL_83;
      cardTr = v2->fields.cardTr;
      if ( !cardTr )
        goto LABEL_74;
      if ( v28 >= cardTr->max_length )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v56->m_Items[v28];
      if ( !this )
        goto LABEL_74;
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, cardTr->m_Items[v28], 0LL);
      v58 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v28 >= v58->max_length )
        goto LABEL_83;
      v59 = v58->m_Items[v28];
      if ( !byte_49F7111 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
        byte_49F7111 = 1;
      }
      if ( !v59 )
        goto LABEL_74;
      UnityEngine_Transform__set_localPosition(v59, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v60 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v28 >= v60->max_length )
        goto LABEL_83;
      v61 = v60->m_Items[v28];
      if ( !byte_49F7117 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, method);
        byte_49F7117 = 1;
      }
      if ( !v61 )
        goto LABEL_74;
      UnityEngine_Transform__set_localRotation(
        v61,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
    }
    else
    {
      v53 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v28 >= v53->max_length )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v53->m_Items[v28];
      if ( v28 <= 7 )
      {
        npcardTr = v2->fields.npcardTr;
        if ( !npcardTr )
          goto LABEL_74;
        if ( v28 - 5 >= npcardTr->max_length )
          goto LABEL_83;
        if ( !this )
          goto LABEL_74;
        v55 = npcardTr->m_Items[v28 - 5];
      }
      else
      {
        excardTr = v2->fields.excardTr;
        if ( !excardTr )
          goto LABEL_74;
        if ( v28 - 8 >= excardTr->max_length )
          goto LABEL_83;
        if ( !this )
          goto LABEL_74;
        v55 = *(UnityEngine_Transform_o **)((char *)&excardTr->obj.klass + v30);
      }
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v55, 0LL);
      v63 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v28 >= v63->max_length )
        goto LABEL_83;
      v64 = v63->m_Items[v28];
      if ( !byte_49F7111 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
        byte_49F7111 = 1;
      }
      if ( !v64 )
        goto LABEL_74;
      UnityEngine_Transform__set_localPosition(v64, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v65 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_74;
      if ( v28 >= v65->max_length )
        goto LABEL_83;
      v66 = v65->m_Items[v28];
      if ( !byte_49F7117 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, method);
        byte_49F7117 = 1;
      }
      if ( !v66 )
        goto LABEL_74;
      UnityEngine_Transform__set_localRotation(
        v66,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      v67 = *p_p_commandlist;
      if ( !*p_p_commandlist )
        goto LABEL_74;
      if ( v28 >= v67->max_length )
        goto LABEL_83;
      this = (BattlePerformanceCommandCard_o *)v67->m_Items[v28];
      if ( !this )
        goto LABEL_74;
      this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !this )
        goto LABEL_74;
      v80.fields.r = 0.0;
      v80.fields.g = 0.0;
      v80.fields.b = 0.0;
      v80.fields.a = 0.0;
      UIWidget__set_color((UIWidget_o *)this, v80, 0LL);
    }
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v39, (System_String_o *)StringLiteral_18778/*"ef_resistarrow"*/, 0, 0LL);
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v39, (System_String_o *)StringLiteral_18793/*"ef_weakarrow"*/, 1, 0LL);
    v27 = *p_p_commandlist;
    ++v28;
    v29 += 20;
    v30 += 8LL;
    if ( !*p_p_commandlist )
      goto LABEL_74;
  }
  v68 = sub_1B64170(BattleCommandComponent___TypeInfo, 4LL);
  v2->fields.selectedcomponents = (struct BattleCommandComponent_array *)v68;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.selectedcomponents, v68, v69, v70);
  v71 = v2->fields.p_commandlist;
  if ( !v71 )
    goto LABEL_74;
  if ( v71->max_length <= 8 )
    goto LABEL_83;
  this = (BattlePerformanceCommandCard_o *)v71->m_Items[8];
  if ( !this
    || (selectedcomponents = v2->fields.selectedcomponents,
        this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___),
        !selectedcomponents) )
  {
LABEL_74:
    sub_1B64324(this);
  }
  v75 = this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_84:
      v79 = sub_1B64348(this);
      sub_1B641F0(v79, 0LL);
    }
  }
  if ( selectedcomponents->max_length <= 3 )
LABEL_83:
    sub_1B6432C(this, method);
  selectedcomponents->m_Items[3] = (BattleCommandComponent_o *)v75;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&selectedcomponents->m_Items[3], (int32_t)v75, v73, v74);
  v76 = sub_1B64170(int___TypeInfo, 9LL);
  v2->fields.selectcommand = (struct System_Int32_array *)v76;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.selectcommand, v76, v77, v78);
  v2->fields.drawcount = 0;
}


void __fastcall BattlePerformanceCommandCard__endCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_49FE13E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3584/*"CLOSE_WINDOW"*/, method);
    byte_49FE13E = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3584/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endCloseSealedWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_49FE138 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3584/*"CLOSE_WINDOW"*/, method);
    byte_49FE138 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3584/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endCloseTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_49FE13B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3584/*"CLOSE_WINDOW"*/, method);
    byte_49FE13B = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3584/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endComboEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_49FE126 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FE126 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1B64324(0LL);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
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
      sub_1B6432C(this, method);
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      if ( BYTE4(this->fields.selectcommand) )
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
    sub_1B64324(this);
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
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_49FE109 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FE109 = 1;
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
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    sub_1B64324(transform);
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
    sub_1B64324(this);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B6432C(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  BattlePerformance_o *perf; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_GameObject__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  char v15; // w22
  il2cpp_array_size_t j; // w26
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x20
  __int64 v20; // x2
  int v21; // w21
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v23; // x22
  System_Action_object__o *v24; // x23
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FE12F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__TypeInfo, method);
    sub_1B640C8(&Method_BattleCommandComponent_addCriticalBuff__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    byte_49FE12F = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)aubelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v27;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields._current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v12 = this->fields.aubelist;
  if ( !v12 )
LABEL_25:
    sub_1B64324(aubelist);
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
  v15 = 0;
  for ( j = 0; j != 5; ++j )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( j >= commandCompArray->max_length )
LABEL_26:
      sub_1B6432C(aubelist, v11);
    v18 = &commandCompArray->obj.klass + (int)j;
    v19 = v18[4];
    if ( !v19 )
      goto LABEL_25;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                         (BattleCommandComponent_o *)v18[4],
                                                                         0LL);
    if ( (int)aubelist >= 1 )
    {
      v21 = (int)aubelist;
      do
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          goto LABEL_25;
        if ( j >= commandTransformArray->max_length )
          goto LABEL_26;
        v23 = commandTransformArray->m_Items[j];
        v24 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, v11, v20);
        System_Action_object____ctor(v24, (Il2CppObject *)v19, Method_BattleCommandComponent_addCriticalBuff__, 0LL);
        BattlePerformanceCommandCard__MoveNotTween(this, v23, (System_Action_GameObject__o *)v24, v25);
        --v21;
      }
      while ( v21 );
      v15 = 1;
    }
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)v19, 0LL);
    if ( BYTE4(v19->vtable[5].method) )
      BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)v19, 0LL);
  }
  BattlePerformanceCommandCard__updateBuffIcon(this, v11);
  return v15 & 1;
}


// local variable allocation has failed, the output may be wrong!
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
        sub_1B6432C(this, *(_QWORD *)&actionIndex);
      this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[actionIndex];
      if ( this )
        return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
LABEL_9:
      sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleComboData_o *combodata; // x8
  _BOOL4 flash; // w9
  int32_t samecount; // w8
  __int64 *v12; // x8

  v2 = this;
  if ( (byte_49FE127 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18801/*"effect/BitEffect/bit_cut_2a"*/, method);
    sub_1B640C8(&StringLiteral_18804/*"effect/BitEffect/bit_cut_u3"*/, v3);
    sub_1B640C8(&StringLiteral_18803/*"effect/BitEffect/bit_cut_u2"*/, v4);
    sub_1B640C8(&StringLiteral_18805/*"effect/BitEffect/bit_cut_ua"*/, v5);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&StringLiteral_18802/*"effect/BitEffect/bit_cut_3a"*/, v6);
    byte_49FE127 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL || (combodata = data->fields.combodata) == 0LL )
    sub_1B64324(this);
  flash = combodata->fields.flash;
  samecount = combodata->fields.samecount;
  if ( flash )
  {
    if ( samecount == 2 )
    {
      v12 = &StringLiteral_18803/*"effect/BitEffect/bit_cut_u2"*/;
    }
    else if ( samecount == 3 )
    {
      v12 = (__int64 *)&StringLiteral_18804/*"effect/BitEffect/bit_cut_u3"*/;
    }
    else
    {
      v12 = (__int64 *)&StringLiteral_18805/*"effect/BitEffect/bit_cut_ua"*/;
    }
    return (System_String_o *)*v12;
  }
  if ( samecount == 2 )
  {
    v12 = &StringLiteral_18801/*"effect/BitEffect/bit_cut_2a"*/;
    return (System_String_o *)*v12;
  }
  if ( samecount == 3 )
    return (System_String_o *)StringLiteral_18802/*"effect/BitEffect/bit_cut_3a"*/;
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

  if ( (byte_49FE147 & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49FE147 = 1;
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

  if ( (byte_49FE148 & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49FE148 = 1;
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
  if ( (byte_49FE146 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49FE146 = 1;
  }
  v4 = BattlePerformanceCommandCard__FSTutorialSquareCard(this, v3->fields.TutorialSquare32, v2);
  if ( !v4 )
    sub_1B64324(0LL);
  v6 = v4;
  if ( v4->max_length <= 1 )
    sub_1B6432C(v4, v5);
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  __int64 v6; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v8; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x23
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_GameObject_array *v12; // x8

  if ( (byte_49FE10C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_16711/*"anim_giveout"*/, v4);
    byte_49FE10C = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16711/*"anim_giveout"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( p_commandlist )
  {
    v8 = 4LL;
    while ( 1 )
    {
      max_length = p_commandlist->max_length;
      v10 = v8 - 4;
      if ( v8 - 4 >= (int)max_length )
        break;
      if ( v10 >= max_length )
        goto LABEL_20;
      v11 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + v8);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v12 = this->fields.p_commandlist;
        if ( !v12 )
          goto LABEL_18;
        if ( v10 >= v12->max_length )
LABEL_20:
          sub_1B6432C(transform, v6);
        transform = (UnityEngine_GameObject_o *)*((_QWORD *)&v12->obj.klass + v8);
        if ( !transform
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                        (UnityEngine_Transform_o *)transform,
                                                        0LL)) == 0LL
          || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
        {
LABEL_18:
          sub_1B64324(transform);
        }
        UnityEngine_GameObject__SetActive(transform, 1, 0LL);
      }
      p_commandlist = this->fields.p_commandlist;
      ++v8;
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v6; // x24
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v8; // w25
  Il2CppObject *Component_object; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v11; // x20
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_49FE10D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FE10D = 1;
  }
  p_commandlist = v2->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_25:
    sub_1B64324(this);
  v6 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= (int)(max_length - 1) )
      break;
    if ( v8 >= max_length )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&p_commandlist->obj.klass + v6);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      UnityEngine_Object__DestroyImmediate_69127924((UnityEngine_Object_o *)Component_object, 0LL);
    }
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_25;
    if ( v8 >= commandCompArray->max_length )
      goto LABEL_27;
    v11 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v6);
    if ( !v11 )
      goto LABEL_25;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkObject(
                                               *((BattleCommandComponent_o **)&commandCompArray->obj.klass + v6),
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = v2->fields.p_commandlist;
      if ( !v12 )
        goto LABEL_25;
      if ( v8 >= v12->max_length )
LABEL_27:
        sub_1B6432C(this, method);
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v12->obj.klass + v6);
      if ( !this )
        goto LABEL_25;
      this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !this )
        goto LABEL_25;
      v13.fields.r = 1.0;
      v13.fields.g = 1.0;
      v13.fields.b = 1.0;
      v13.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)this, v13, 0LL);
      if ( !v11->fields.selectflg )
        BattleCommandComponent__startMoveFloat(v11, 0LL);
    }
    p_commandlist = v2->fields.p_commandlist;
    ++v6;
    if ( !p_commandlist )
      goto LABEL_25;
  }
}


void __fastcall BattlePerformanceCommandCard__hideCommandCard(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        BaseMotionSkip_o *motionSkip,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v5; // x20
  __int64 v6; // x1
  float v7; // s8
  float v8; // s9
  __int64 v9; // x21
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct BattleCommandComponent_array *commandCompArray; // x8
  UnityEngine_Color_o v12; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( !motionSkip )
LABEL_13:
    sub_1B64324(this);
  v5 = this;
  LODWORD(v7) = COERCE_UNSIGNED_INT128(
                  ((long double (__fastcall *)(BaseMotionSkip_o *, void *, float))motionSkip->klass->vtable._11_ConvertSkipDuration.method)(
                    motionSkip,
                    motionSkip->klass[1]._1.image,
                    0.3));
  if ( flg )
    v8 = 1.0;
  else
    v8 = 0.0;
  v9 = 4LL;
  do
  {
    p_commandlist = v5->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_13;
    if ( (unsigned int)(v9 - 4) >= p_commandlist->max_length )
      goto LABEL_14;
    v12.fields.r = v8;
    v12.fields.g = v8;
    v12.fields.b = v8;
    v12.fields.a = v8;
    this = (BattlePerformanceCommandCard_o *)TweenColor__Begin(
                                               *((UnityEngine_GameObject_o **)&p_commandlist->obj.klass + v9),
                                               v7,
                                               v12,
                                               0LL);
    commandCompArray = v5->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_13;
    if ( (unsigned int)(v9 - 4) >= commandCompArray->max_length )
LABEL_14:
      sub_1B6432C(this, v6);
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + v9);
    if ( !this )
      goto LABEL_13;
    BattleCommandComponent__CardEffectSetActive((BattleCommandComponent_o *)this, flg, 0LL);
    ++v9;
  }
  while ( (_DWORD)v9 != 9 );
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
    sub_1B64324(this);
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

  if ( (byte_49FE102 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7346/*"INIT_OPEN"*/, method);
    byte_49FE102 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_7346/*"INIT_OPEN"*/, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
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
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x8
  int32_t size; // w2
  int v20; // w9
  struct BattleData_o *Bdata; // x8
  int criticalstars; // w8
  unsigned int v23; // w29
  BattlePerformanceCommandCard_o *v24; // x21
  BattlePerformanceCommandCard_o *v25; // x22
  int32_t layer; // w0
  __int64 v27; // x1
  BattlePerformanceCommandCard_o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  BattlePerformanceCommandCard_o *v31; // x22
  struct PlayMakerFSM_o *v32; // x0
  struct System_Single_array *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  struct PlayMakerFSM_o *v36; // x23
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  struct PlayMakerFSM_o *v41; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  struct UnityEngine_GameObject_o *v46; // x23
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  struct UISprite_o *v51; // x23
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  struct UnityEngine_GameObject_o *v56; // x23
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  struct UnityEngine_GameObject_o *v61; // x23
  System_Collections_Hashtable_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v68; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v70; // x0
  char v71[4]; // [xsp+0h] [xbp-80h] BYREF
  int v72; // [xsp+4h] [xbp-7Ch] BYREF
  int v73; // [xsp+8h] [xbp-78h] BYREF
  float v74; // [xsp+Ch] [xbp-74h] BYREF
  int v75; // [xsp+18h] [xbp-68h] BYREF
  int32_t v76; // [xsp+1Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_49FE12B & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&iTween_EaseType_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Rigidbody___, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1B640C8(&object___TypeInfo, v8);
    sub_1B640C8(&float_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_24644/*"x"*/, v10);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v11);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v12);
    sub_1B640C8(&StringLiteral_18479/*"delay"*/, v13);
    sub_1B640C8(&StringLiteral_24748/*"y"*/, v14);
    sub_1B640C8(&StringLiteral_20750/*"islocal"*/, v15);
    sub_1B640C8(&StringLiteral_18822/*"effect/ef_critlaunch"*/, v16);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&iTween_TypeInfo, v17);
    byte_49FE12B = 1;
  }
  aubelist = v2->fields.aubelist;
  if ( !aubelist )
    goto LABEL_80;
  size = aubelist->fields._size;
  v20 = aubelist->fields._version + 1;
  aubelist->fields._size = 0;
  aubelist->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)aubelist->fields._items, 0, size, 0LL);
  Bdata = v2->fields.Bdata;
  if ( !Bdata )
    goto LABEL_80;
  criticalstars = Bdata->fields.criticalstars;
  if ( criticalstars < 1 )
    return;
  v23 = criticalstars / 5u + 1;
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
    v24 = this;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
    if ( !v2->fields.criticalpointTr )
      goto LABEL_80;
    v25 = this;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v2->fields.criticalpointTr,
                                               0LL);
    if ( !this )
      goto LABEL_80;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
    TransformHelper__ChangeChildsLayer((UnityEngine_Transform_o *)v25, layer, 0LL);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v24, 0LL);
    if ( !this )
      goto LABEL_80;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v2->fields.criticalpointTr, 0LL);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v24, 0LL);
    v28 = this;
    if ( !byte_49F7111 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v27);
      byte_49F7111 = 1;
    }
    if ( !v28 )
      goto LABEL_80;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v28,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v24,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    if ( !this )
      goto LABEL_80;
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)this, 0, 0LL);
    this = (BattlePerformanceCommandCard_o *)sub_1B64170(object___TypeInfo, 12LL);
    if ( !this )
      goto LABEL_80;
    v31 = this;
    v32 = (struct PlayMakerFSM_o *)StringLiteral_24644/*"x"*/;
    if ( StringLiteral_24644/*"x"*/ )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(StringLiteral_24644/*"x"*/, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
      v33 = (struct System_Single_array *)StringLiteral_24644/*"x"*/;
    }
    else
    {
      v33 = 0LL;
    }
    if ( !LODWORD(v31->fields.m_CancellationTokenSource) )
      goto LABEL_79;
    v31->fields.COMMAND_STAMP_POS_X = v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.COMMAND_STAMP_POS_X, (int32_t)v33, v29, v30);
    v76 = UnityEngine_Random__Range_69087476(-780, 110, 0LL);
    v32 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
    v36 = v32;
    if ( v32 )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(v32, v31->klass->_1.element_class);
      if ( !v32 )
      {
LABEL_81:
        v70 = sub_1B64348(v32);
        sub_1B641F0(v70, 0LL);
      }
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_79;
    *(_QWORD *)&v31->fields.COMMAND_STAMP_POS_Y = v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.COMMAND_STAMP_POS_Y, (int32_t)v36, v34, v35);
    v32 = (struct PlayMakerFSM_o *)StringLiteral_24748/*"y"*/;
    if ( StringLiteral_24748/*"y"*/ )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(StringLiteral_24748/*"y"*/, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
      v33 = (struct System_Single_array *)StringLiteral_24748/*"y"*/;
    }
    else
    {
      v33 = 0LL;
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_79;
    *(_QWORD *)&v31->fields.CARD_ROOT_BASE_X = v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.CARD_ROOT_BASE_X, (int32_t)v33, v37, v38);
    v75 = 500;
    v32 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
    v41 = v32;
    if ( v32 )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(v32, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_79;
    v31->fields.commandfsm = v41;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.commandfsm, (int32_t)v41, v39, v40);
    v32 = (struct PlayMakerFSM_o *)StringLiteral_18479/*"delay"*/;
    if ( StringLiteral_18479/*"delay"*/ )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(StringLiteral_18479/*"delay"*/, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
      v33 = (struct System_Single_array *)StringLiteral_18479/*"delay"*/;
    }
    else
    {
      v33 = 0LL;
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_79;
    v31->fields.commandprefab = (struct UnityEngine_GameObject_o *)v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.commandprefab, (int32_t)v33, v42, v43);
    v74 = UnityEngine_Random__Range(0.0, 0.3, 0LL);
    v32 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(float_TypeInfo, &v74);
    v46 = (struct UnityEngine_GameObject_o *)v32;
    if ( v32 )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(v32, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_79;
    v31->fields.selectCommandPrefab = v46;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.selectCommandPrefab, (int32_t)v46, v44, v45);
    v32 = (struct PlayMakerFSM_o *)StringLiteral_23830/*"time"*/;
    if ( StringLiteral_23830/*"time"*/ )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
      v33 = (struct System_Single_array *)StringLiteral_23830/*"time"*/;
    }
    else
    {
      v33 = 0LL;
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 6 )
      goto LABEL_79;
    v31->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.commandrootTransform, (int32_t)v33, v47, v48);
    v73 = 1050253722;
    v32 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(float_TypeInfo, &v73);
    v51 = (struct UISprite_o *)v32;
    if ( v32 )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(v32, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 7 )
      goto LABEL_79;
    v31->fields.selectinfo_sprite = v51;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.selectinfo_sprite, (int32_t)v51, v49, v50);
    v32 = (struct PlayMakerFSM_o *)StringLiteral_18682/*"easetype"*/;
    if ( StringLiteral_18682/*"easetype"*/ )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(StringLiteral_18682/*"easetype"*/, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
      v33 = (struct System_Single_array *)StringLiteral_18682/*"easetype"*/;
    }
    else
    {
      v33 = 0LL;
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 8 )
      goto LABEL_79;
    v31->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.firstbonus_q, (int32_t)v33, v52, v53);
    v72 = 1;
    v32 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v72);
    v56 = (struct UnityEngine_GameObject_o *)v32;
    if ( v32 )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(v32, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 9 )
      goto LABEL_79;
    v31->fields.firstbonus_a = v56;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.firstbonus_a, (int32_t)v56, v54, v55);
    v32 = (struct PlayMakerFSM_o *)StringLiteral_20750/*"islocal"*/;
    if ( StringLiteral_20750/*"islocal"*/ )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(StringLiteral_20750/*"islocal"*/, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
      v33 = (struct System_Single_array *)StringLiteral_20750/*"islocal"*/;
    }
    else
    {
      v33 = 0LL;
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 0xA )
LABEL_79:
      sub_1B6432C(v32, v33);
    v31->fields.firstbonus_b = (struct UnityEngine_GameObject_o *)v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.firstbonus_b, (int32_t)v33, v57, v58);
    v71[0] = 1;
    v32 = (struct PlayMakerFSM_o *)j_il2cpp_value_box_0(bool_TypeInfo, v71);
    v61 = (struct UnityEngine_GameObject_o *)v32;
    if ( v32 )
    {
      v32 = (struct PlayMakerFSM_o *)sub_1B64204(v32, v31->klass->_1.element_class);
      if ( !v32 )
        goto LABEL_81;
    }
    if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 0xB )
      goto LABEL_79;
    v31->fields.firstaura_q = v61;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->fields.firstaura_q, (int32_t)v61, v59, v60);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v62 = iTween__Hash((System_Object_array *)v31, 0LL);
    iTween__MoveTo_59912984((UnityEngine_GameObject_o *)v24, v62, 0LL);
    this = (BattlePerformanceCommandCard_o *)v2->fields.aubelist;
    if ( !this )
      goto LABEL_80;
    v65 = *(_QWORD *)&this->fields.m_CachedPtr;
    v66 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v65 )
      goto LABEL_80;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v65 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v24,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = v65 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v68 + 32) = v24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v68 + 32), (int32_t)v24, v63, v64);
    }
    --v23;
  }
  while ( v23 );
  this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject_37994916(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_18822/*"effect/ef_critlaunch"*/,
                                             v2->fields.criticalpointTr,
                                             0LL,
                                             0LL);
  perf = v2->fields.perf;
  if ( !perf || (this = (BattlePerformanceCommandCard_o *)perf->fields.statusPerf) == 0LL )
LABEL_80:
    sub_1B64324(this);
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)this, -1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__openCommandCard(
        BattlePerformanceCommandCard_o *this,
        bool isStatTac,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v8; // x2
  UIWidget_o *backTacticalButton; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  System_Collections_IEnumerator_o *v12; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v17; // x20
  int max_length; // w9
  il2cpp_array_size_t v19; // w21
  struct BattleCommandComponent_array *v20; // x8
  struct BattleCommandComponent_array *v21; // x8

  if ( (byte_49FE108 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_openCommandCard__, isStatTac);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16709/*"anim_draw"*/, v6);
    byte_49FE108 = 1;
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
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16709/*"anim_draw"*/, v8);
  backTacticalButton = (UIWidget_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    goto LABEL_26;
  backTacticalButton = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)backTacticalButton,
                                       0LL);
  if ( !backTacticalButton )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTacticalButton, 1, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 1, v10);
  if ( isStatTac )
  {
    v12 = BattlePerformanceCommandCard__waitFallStar(this, v11);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
  }
  v13 = Method_BattlePerformanceCommandCard_openCommandCard__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_openCommandCard__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_openCommandCard__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
  OverwriteAssetSoundName__PlayCommonSe(v14, 4, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_26:
    sub_1B64324(backTacticalButton);
  v17 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v19 = v17 - 4;
    if ( (int)v17 - 4 >= max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_28;
    backTacticalButton = (UIWidget_o *)*((_QWORD *)&commandCompArray->obj.klass + v17);
    if ( backTacticalButton )
    {
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)backTacticalButton, 0, 0LL);
      v20 = this->fields.commandCompArray;
      if ( v20 )
      {
        if ( v19 >= v20->max_length )
          goto LABEL_28;
        backTacticalButton = (UIWidget_o *)*((_QWORD *)&v20->obj.klass + v17);
        if ( backTacticalButton )
        {
          BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)backTacticalButton, 0, 0LL);
          v21 = this->fields.commandCompArray;
          if ( v21 )
          {
            if ( v19 >= v21->max_length )
LABEL_28:
              sub_1B6432C(backTacticalButton, v15);
            backTacticalButton = (UIWidget_o *)*((_QWORD *)&v21->obj.klass + v17);
            if ( backTacticalButton )
            {
              BattleCommandComponent__SetTreasureDeviceTypeChange(
                (BattleCommandComponent_o *)backTacticalButton,
                0,
                0,
                0LL);
              commandCompArray = this->fields.commandCompArray;
              ++v17;
              if ( commandCompArray )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
  BattlePerformanceCommandCard__updateCardMag(this, v15);
}


void __fastcall BattlePerformanceCommandCard__playAnimation(
        BattlePerformanceCommandCard_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *cardRoot; // x21
  float v11; // s8
  float OffsetX; // s9
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  UnityEngine_Transform_o *Item; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v17; // x20
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v19; // x20
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE103 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animation___, name);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_1B640C8(&FSUtility_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_16711/*"anim_giveout"*/, v9);
    byte_49FE103 = 1;
  }
  cardRoot = (UnityEngine_Object_o *)this->fields.cardRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cardRoot, 0LL, 0LL) )
  {
    v11 = 0.0;
    OffsetX = 0.0;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_16711/*"anim_giveout"*/, 0LL) )
    {
      if ( !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    }
    v13 = System_String__op_Equality(name, (System_String_o *)StringLiteral_16711/*"anim_giveout"*/, 0LL);
    if ( v13 )
      v11 = BattlePerformanceCommandCard__FSCardRootOffsetY((BattlePerformanceCommandCard_o *)v13, v14);
    Item = this->fields.cardRoot;
    if ( !Item )
      goto LABEL_33;
    v23.fields.y = v11 + this->fields.CARD_ROOT_BASE_Y;
    v23.fields.x = OffsetX + this->fields.CARD_ROOT_BASE_X;
    v23.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(Item, v23, 0LL);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
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
    Item = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v17 )
    {
      Item = (UnityEngine_Transform_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v17, name, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
        UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v17, name, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1B64324(Item);
  }
  if ( !Component_object )
    goto LABEL_33;
  Item = (UnityEngine_Transform_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, name, 0LL);
  if ( !Item )
    goto LABEL_33;
  klass = Item->klass;
  v19 = Item;
  v20 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v20;
      p_offset += 2;
      if ( !v20 )
        goto LABEL_23;
    }
    v22 = (__int64)(&klass->vtable._4_GetEnumerator.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_23:
    v22 = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, _QWORD, float))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
  SimpleAnimation__Play_63513060((SimpleAnimation_o *)Component_object, name, 0LL);
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
  UnityEngine_Transform_o *transform; // x2

  if ( (byte_49FE121 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_playComboEffect__, prefab);
    byte_49FE121 = 1;
  }
  if ( (seName & 0x80000000) == 0 )
  {
    v7 = Method_BattlePerformanceCommandCard_playComboEffect__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_playComboEffect__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_playComboEffect__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
    OverwriteAssetSoundName__PlayCommonSe(v8, seName, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, prefab, transform, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
        sub_1B6432C(this, *(_QWORD *)&index);
      this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[index];
      if ( this )
      {
        BattleCommandComponent__playAttackEffect((BattleCommandComponent_o *)this, flg, 0LL);
        return;
      }
LABEL_9:
      sub_1B64324(this);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__playNobleCardEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleCommandComponent_array *selectedcomponents; // x8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  struct BattleCommandComponent_array *v15; // x8
  UnityEngine_Object_o *v16; // x21
  struct BattleCommandComponent_array *v17; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_Object_array *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *npTargetTr; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  BattlePerformanceCommandCard_o *v29; // x23
  System_Collections_Hashtable_o *v30; // x0
  struct BattleCommandComponent_array *v31; // x8
  __int64 v32; // x0
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_49FE128 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_playNobleCardEffect__, *(_QWORD *)&index);
    sub_1B640C8(&object___TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&float_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v8);
    sub_1B640C8(&StringLiteral_22482/*"position"*/, v9);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&iTween_TypeInfo, v10);
    byte_49FE128 = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_40;
  if ( (index & 0x80000000) == 0 && (signed int)selectedcomponents->max_length > index )
  {
    v12 = Method_BattlePerformanceCommandCard_playNobleCardEffect__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_playNobleCardEffect__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_playNobleCardEffect__);
    v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
    OverwriteAssetSoundName__PlayCommonSe(v13, 14, 0LL);
    v15 = v4->fields.selectedcomponents;
    if ( !v15 )
      goto LABEL_40;
    if ( v15->max_length <= index )
      goto LABEL_41;
    v16 = (UnityEngine_Object_o *)v15->m_Items[index];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v17 = v4->fields.selectedcomponents;
      if ( !v17 )
        goto LABEL_40;
      if ( v17->max_length <= index )
        goto LABEL_41;
      this = (BattlePerformanceCommandCard_o *)v17->m_Items[index];
      if ( !this )
        goto LABEL_40;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      this = (BattlePerformanceCommandCard_o *)sub_1B64170(object___TypeInfo, 4LL);
      if ( !this )
        goto LABEL_40;
      v21 = (System_Object_array *)this;
      this = (BattlePerformanceCommandCard_o *)StringLiteral_22482/*"position"*/;
      if ( StringLiteral_22482/*"position"*/ )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_22482/*"position"*/, v21->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_42;
        v14 = StringLiteral_22482/*"position"*/;
      }
      else
      {
        v14 = 0LL;
      }
      if ( !v21->max_length )
        goto LABEL_41;
      v21->m_Items[0] = (Il2CppObject *)v14;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v21->m_Items, v14, v19, v20);
      npTargetTr = (Il2CppObject *)v4->fields.npTargetTr;
      if ( !npTargetTr
        || (this = (BattlePerformanceCommandCard_o *)sub_1B64204(
                                                       v4->fields.npTargetTr,
                                                       v21->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v21->max_length <= 1 )
          goto LABEL_41;
        v21->m_Items[1] = npTargetTr;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)npTargetTr, v22, v23);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_23830/*"time"*/;
        if ( StringLiteral_23830/*"time"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v21->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_42;
          v14 = StringLiteral_23830/*"time"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v21->max_length <= 2 )
          goto LABEL_41;
        v21->m_Items[2] = (Il2CppObject *)v14;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], v14, v25, v26);
        v33 = 1056964608;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v33);
        v29 = this;
        if ( !this
          || (this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v21->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v21->max_length > 3 )
          {
            v21->m_Items[3] = (Il2CppObject *)v29;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v29, v27, v28);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v30 = iTween__Hash(v21, 0LL);
            iTween__MoveTo_59912984(gameObject, v30, 0LL);
            v31 = v4->fields.selectedcomponents;
            if ( !v31 )
              goto LABEL_40;
            if ( v31->max_length > index )
            {
              this = (BattlePerformanceCommandCard_o *)v31->m_Items[index];
              if ( this )
              {
                BattleCommandComponent__playNpAttackEffect((BattleCommandComponent_o *)this, 0.5, 0LL);
                return;
              }
LABEL_40:
              sub_1B64324(this);
            }
          }
LABEL_41:
          sub_1B6432C(this, v14);
        }
      }
LABEL_42:
      v32 = sub_1B64348(this);
      sub_1B641F0(v32, 0LL);
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
    sub_1B64324(this);
  v4 = this;
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = selectedcomponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B6432C(this, flg);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 Bdata; // x0
  __int64 v9; // x1
  signed int max_length; // w9
  signed int v11; // w8
  __int64 v12; // x27
  Il2CppClass **v13; // x28
  Il2CppClass *v14; // x8
  BattleCommandData_o **v15; // x28
  Il2CppClass *v16; // t1
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v18; // x23
  BattleServantData_o *v19; // x22
  struct UnityEngine_Transform_array *v20; // x8
  UnityEngine_Transform_o *v21; // x23
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v23; // x8
  struct BattleCommandComponent_array *v24; // x8
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v26; // x8
  __int64 v27; // x23
  __int64 v28; // x9
  il2cpp_array_size_t v29; // w20
  struct BattleCommandComponent_array *v30; // x8
  struct UnityEngine_GameObject_array *v31; // x8
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *v33; // x20
  struct BattleCommandComponent_array *v34; // x8
  UnityEngine_Object_o *v35; // x20
  struct BattleCommandComponent_array *v36; // x8
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FE104 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UITweener___, list);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_16712/*"anim_wait"*/, v7);
    byte_49FE104 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16712/*"anim_wait"*/, method);
  if ( !list )
    goto LABEL_67;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( v11 < (unsigned int)max_length )
    {
      v12 = v11;
      v13 = &list->obj.klass + v11;
      Bdata = (__int64)this->fields.Bdata;
      v16 = v13[4];
      v15 = (BattleCommandData_o **)(v13 + 4);
      v14 = v16;
      if ( !v16 )
        goto LABEL_67;
      if ( !Bdata )
        goto LABEL_67;
      Bdata = (__int64)BattleData__getServantData((BattleData_o *)Bdata, v14->_1.byval_arg.bits, 0LL);
      commandTransformArray = this->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_67;
      if ( (unsigned int)v12 >= commandTransformArray->max_length )
        break;
      v18 = commandTransformArray->m_Items[v12];
      v19 = (BattleServantData_o *)Bdata;
      if ( !byte_49F7111 )
      {
        Bdata = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v9);
        byte_49F7111 = 1;
      }
      if ( !v18 )
        goto LABEL_67;
      UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v20 = this->fields.commandTransformArray;
      if ( !v20 )
        goto LABEL_67;
      if ( (unsigned int)v12 >= v20->max_length )
        break;
      v21 = v20->m_Items[v12];
      if ( !byte_49F7111 )
      {
        Bdata = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v9);
        byte_49F7111 = 1;
      }
      if ( !v21 )
        goto LABEL_67;
      UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      commandCompArray = this->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_67;
      if ( (unsigned int)v12 >= commandCompArray->max_length || (unsigned int)v12 >= list->max_length )
        break;
      Bdata = (__int64)commandCompArray->m_Items[v12];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__setData((BattleCommandComponent_o *)Bdata, *v15, v19, 0, 1, 0, 1, 0LL);
      v23 = this->fields.commandCompArray;
      if ( !v23 )
        goto LABEL_67;
      if ( (unsigned int)v12 >= v23->max_length )
        break;
      Bdata = (__int64)v23->m_Items[v12];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardValue((BattleCommandComponent_o *)Bdata, 0, 0LL);
      v24 = this->fields.commandCompArray;
      if ( !v24 )
        goto LABEL_67;
      if ( (unsigned int)v12 >= v24->max_length || (unsigned int)v12 >= list->max_length )
        break;
      if ( !*v15 )
        goto LABEL_67;
      Bdata = (__int64)v24->m_Items[v12];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardIcon(
        (BattleCommandComponent_o *)Bdata,
        (*v15)->fields.commandCardParam,
        2,
        0,
        0LL);
      p_commandlist = this->fields.p_commandlist;
      if ( !p_commandlist )
        goto LABEL_67;
      if ( (unsigned int)v12 >= p_commandlist->max_length )
        break;
      Bdata = (__int64)p_commandlist->m_Items[v12];
      if ( !Bdata )
        goto LABEL_67;
      Bdata = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Bdata,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !Bdata )
        goto LABEL_67;
      v37.fields.r = 1.0;
      v37.fields.g = 1.0;
      v37.fields.b = 1.0;
      v37.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Bdata, v37, 0LL);
      max_length = list->max_length;
      v11 = v12 + 1;
      if ( (int)v12 + 1 >= max_length )
        goto LABEL_36;
    }
LABEL_68:
    sub_1B6432C(Bdata, v9);
  }
LABEL_36:
  v26 = this->fields.p_commandlist;
  if ( !v26 )
    goto LABEL_67;
  v27 = 4LL;
  while ( 1 )
  {
    v28 = *(_QWORD *)&v26->max_length;
    v29 = v27 - 4;
    if ( (int)v27 - 4 >= (int)v28 )
      break;
    v30 = this->fields.commandCompArray;
    if ( !v30 )
      goto LABEL_67;
    if ( v29 >= v30->max_length )
      goto LABEL_68;
    Bdata = *((_QWORD *)&v30->obj.klass + v27);
    if ( Bdata )
    {
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)Bdata, 0, 0LL);
      v31 = this->fields.p_commandlist;
      if ( v31 )
      {
        if ( v29 >= v31->max_length )
          goto LABEL_68;
        Bdata = *((_QWORD *)&v31->obj.klass + v27);
        if ( Bdata )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Bdata,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UITweener___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Bdata = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
          if ( (Bdata & 1) != 0 )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)Component_object, 0LL);
          }
          v26 = this->fields.p_commandlist;
          ++v27;
          if ( v26 )
            continue;
        }
      }
    }
    goto LABEL_67;
  }
  if ( (unsigned int)v28 <= 8 )
    goto LABEL_68;
  v33 = (UnityEngine_Object_o *)v26->m_Items[8];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Bdata = UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
  if ( (Bdata & 1) != 0 )
  {
    v34 = this->fields.commandCompArray;
    if ( !v34 )
      goto LABEL_67;
    if ( v34->max_length <= 8 )
      goto LABEL_68;
    v35 = (UnityEngine_Object_o *)v34->m_Items[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Bdata = UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
    if ( (Bdata & 1) != 0 )
    {
      v36 = this->fields.commandCompArray;
      if ( v36 )
      {
        if ( v36->max_length <= 8 )
          goto LABEL_68;
        Bdata = (__int64)v36->m_Items[8];
        if ( Bdata )
        {
          BattleCommandComponent__setData((BattleCommandComponent_o *)Bdata, 0LL, 0LL, 0, 1, 0, 1, 0LL);
          return;
        }
      }
LABEL_67:
      sub_1B64324(Bdata);
    }
  }
}


void __fastcall BattlePerformanceCommandCard__resetCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v8; // x21
  int max_length; // w9
  il2cpp_array_size_t v10; // w22
  struct UnityEngine_GameObject_array *v11; // x8

  if ( (byte_49FE106 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, method);
    sub_1B640C8(&StringLiteral_16712/*"anim_wait"*/, v4);
    byte_49FE106 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16712/*"anim_wait"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_14:
    sub_1B64324(Component_object);
  v8 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_16;
    Component_object = (Il2CppObject *)*((_QWORD *)&p_commandlist->obj.klass + v8);
    if ( Component_object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Component_object,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( Component_object )
      {
        BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)Component_object, 0, 0LL);
        v11 = this->fields.p_commandlist;
        if ( v11 )
        {
          if ( v10 >= v11->max_length )
LABEL_16:
            sub_1B6432C(Component_object, v6);
          Component_object = (Il2CppObject *)*((_QWORD *)&v11->obj.klass + v8);
          if ( Component_object )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            if ( Component_object )
            {
              BattleCommandComponent__initView((BattleCommandComponent_o *)Component_object, 0LL);
              p_commandlist = this->fields.p_commandlist;
              ++v8;
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
  __int64 v3; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x21
  int max_length; // w9
  BattleCommandComponent_o *v7; // x20
  int v8; // w20

  v2 = this;
  if ( (byte_49FE140 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21198/*"markindex"*/, method);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&StringLiteral_11437/*"SELECTCARD"*/, v3);
    byte_49FE140 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      return;
    if ( (unsigned int)v5 >= max_length )
      sub_1B6432C(this, method);
    v7 = commandCompArray->m_Items[v5];
    if ( !v7 )
      goto LABEL_12;
    if ( !v7->fields.selectflg )
      break;
LABEL_11:
    ++v5;
    if ( !commandCompArray )
      goto LABEL_12;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v7, 0LL);
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    commandCompArray = v2->fields.commandCompArray;
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v7, 0LL);
  if ( !v2->fields.commandfsm
    || (v8 = (int)this,
        (this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm(v2->fields.commandfsm, 0LL)) == 0LL)
    || (this = (BattlePerformanceCommandCard_o *)this->fields.selectinfo_sprite) == 0LL
    || (this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                   (System_String_o *)StringLiteral_21198/*"markindex"*/,
                                                   0LL)) == 0LL
    || (LODWORD(this->fields.commandfsm) = v8, (this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm) == 0LL) )
  {
LABEL_12:
    sub_1B64324(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11437/*"SELECTCARD"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__selectCommandCard(
        BattlePerformanceCommandCard_o *this,
        int32_t atcount,
        const MethodInfo *method)
{
  __int64 v5; // x0
  struct BattlePerformance_o *perf; // x8

  BattlePerformanceCommandCard__setCountRemaining(this, atcount, method);
  perf = this->fields.perf;
  if ( !perf )
    sub_1B64324(v5);
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
  struct BattleCommandComponent_array *commandCompArray; // x8
  int v20; // w22
  __int64 v21; // x9
  Il2CppClass **v22; // x8
  BattleCommandComponent_o *v23; // x21
  const MethodInfo *v24; // x3
  struct System_Int32_array *selectcommand; // x10
  int max_length; // w11
  int32_t v27; // w12
  __int64 *v28; // x8
  signed int v29; // w10
  __int64 v30; // x26
  Il2CppClass **v31; // x8
  BattleCommandComponent_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  struct BattleCommandComponent_array *selectedcomponents; // x22
  __int64 v36; // x23
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppClass **v39; // x0
  struct UISprite_o *selectinfo_sprite; // x22
  System_String_o *v41; // x0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v43; // x8
  UnityEngine_GameObject_o *v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  BattlePerformanceCommandCard_o *v47; // x23
  int32_t v48; // w2
  int32_t v49; // w3
  BattlePerformanceCommandCard_o *v50; // x24
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  BattlePerformanceCommandCard_o *v55; // x24
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  BattlePerformanceCommandCard_o *v60; // x24
  System_Collections_Hashtable_o *v61; // x0
  float v62; // s10
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  const MethodInfo *v64; // x3
  int v65; // s0
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  int32_t v69; // w1
  const MethodInfo *v70; // x2
  int32_t CommandType; // w0
  const MethodInfo *v72; // x2
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v74; // x1
  int32_t drawcount; // w9
  int32_t maxdrawcount; // w8
  int32_t v77; // w9
  struct System_Int32_array *v78; // x8
  System_Action_o *v79; // x20
  __int64 v80; // x0
  char v81[4]; // [xsp+8h] [xbp-88h] BYREF
  int v82; // [xsp+Ch] [xbp-84h] BYREF
  int v83; // [xsp+18h] [xbp-78h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-74h] BYREF

  v3 = markindex;
  v4 = this;
  if ( (byte_49FE111 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&markindex);
    sub_1B640C8(&Method_BattlePerformanceCommandCard__selectOK_b__112_0__, v5);
    sub_1B640C8(&bool_TypeInfo, v6);
    sub_1B640C8(&FSUtility_TypeInfo, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&object___TypeInfo, v9);
    sub_1B640C8(&float_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_5029/*"DISSELECT"*/, v11);
    sub_1B640C8(&StringLiteral_11436/*"SELECT"*/, v12);
    sub_1B640C8(&StringLiteral_3375/*"CANCEL"*/, v13);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v14);
    sub_1B640C8(&StringLiteral_9602/*"OPEN_SEALED"*/, v15);
    sub_1B640C8(&StringLiteral_24748/*"y"*/, v16);
    sub_1B640C8(&StringLiteral_20750/*"islocal"*/, v17);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&iTween_TypeInfo, v18);
    byte_49FE111 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_11;
  v20 = 0;
  while ( 1 )
  {
    v21 = *(_QWORD *)&commandCompArray->max_length;
    if ( v20 >= (int)v21 )
      break;
    if ( v20 >= (unsigned int)v21 )
      goto LABEL_103;
    v22 = &commandCompArray->obj.klass + v20;
    v23 = (BattleCommandComponent_o *)v22[4];
    if ( !v23 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v22[4],
                                               v3,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 && v23->fields.selectflg )
    {
      BattlePerformanceCommandCard__unselectCommandCard(v4, v23, v3, v24);
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
      if ( this )
      {
        v28 = &StringLiteral_3375/*"CANCEL"*/;
        goto LABEL_101;
      }
      goto LABEL_11;
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v20;
    if ( !commandCompArray )
      goto LABEL_11;
  }
  if ( v4->fields.maxdrawcount <= v4->fields.drawcount )
  {
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v28 = &StringLiteral_5029/*"DISSELECT"*/;
LABEL_101:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v28, 0LL);
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
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)max_length )
        goto LABEL_103;
      if ( selectcommand->m_Items[v27 + 1] == -1 )
        break;
      if ( ++v27 >= max_length )
        goto LABEL_25;
    }
    targetIndex = v27;
  }
LABEL_25:
  if ( (int)v21 < 1 )
  {
LABEL_93:
    drawcount = v4->fields.drawcount;
    maxdrawcount = v4->fields.maxdrawcount;
    if ( drawcount < maxdrawcount )
    {
      v77 = drawcount + 1;
      v4->fields.drawcount = v77;
      BattlePerformanceCommandCard__selectCommandCard(v4, maxdrawcount - v77, method);
      v78 = v4->fields.selectcommand;
      if ( !v78 )
        goto LABEL_11;
      if ( targetIndex >= v78->max_length )
LABEL_103:
        sub_1B6432C(this, *(_QWORD *)&markindex);
      v78->m_Items[targetIndex + 1] = v3;
    }
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v28 = &StringLiteral_11436/*"SELECT"*/;
      goto LABEL_101;
    }
LABEL_11:
    sub_1B64324(this);
  }
  v29 = 0;
  while ( 1 )
  {
    if ( v29 >= (unsigned int)v21 )
      goto LABEL_103;
    v30 = v29;
    v31 = &commandCompArray->obj.klass + v29;
    v32 = (BattleCommandComponent_o *)v31[4];
    if ( !v32 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v31[4],
                                               v3,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_91:
    commandCompArray = v4->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_11;
    LODWORD(v21) = commandCompArray->max_length;
    v29 = v30 + 1;
    if ( (int)v30 + 1 >= (int)v21 )
      goto LABEL_93;
  }
  if ( BattleCommandComponent__get_isSealed(v32, 0LL)
    || BattleCommandComponent__isTreasureDvc(v32, 0LL) && BattleCommandComponent__get_isKindOfDontAction(v32, 0LL) )
  {
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v28 = &StringLiteral_9602/*"OPEN_SEALED"*/;
      goto LABEL_101;
    }
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(v32, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__get_SealStatus(v32, 0LL);
  if ( !this )
    goto LABEL_11;
  this = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_IsTreasureDeviceError(
                                             (BattleCommandSealStatus_o *)this,
                                             0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_36:
    v32->fields.selectflg = 1;
    selectedcomponents = v4->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_11;
    v36 = targetIndex;
    this = (BattlePerformanceCommandCard_o *)sub_1B64204(v32, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_104:
      v80 = sub_1B64348(this);
      sub_1B641F0(v80, 0LL);
    }
    if ( (unsigned int)v36 >= selectedcomponents->max_length )
      goto LABEL_103;
    v39 = &selectedcomponents->obj.klass + v36;
    v39[4] = (Il2CppClass *)v32;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v32, v37, v38);
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( !this )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_11;
    selectinfo_sprite = this->fields.selectinfo_sprite;
    v41 = System_Int32__ToString((int32_t)&targetIndex, 0LL);
    this = (BattlePerformanceCommandCard_o *)System_String__Concat_61375396(
                                               (System_String_o *)StringLiteral_11436/*"SELECT"*/,
                                               v41,
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
    if ( (unsigned int)v30 >= p_commandlist->max_length )
      goto LABEL_103;
    if ( !this )
      goto LABEL_11;
    HutongGames_PlayMaker_FsmGameObject__set_Value(
      (HutongGames_PlayMaker_FsmGameObject_o *)this,
      p_commandlist->m_Items[v30],
      0LL);
    v43 = v4->fields.p_commandlist;
    if ( !v43 )
      goto LABEL_11;
    if ( (unsigned int)v30 >= v43->max_length )
      goto LABEL_103;
    v44 = v43->m_Items[v30];
    this = (BattlePerformanceCommandCard_o *)sub_1B64170(object___TypeInfo, 6LL);
    if ( !this )
      goto LABEL_11;
    v47 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_24748/*"y"*/;
    if ( StringLiteral_24748/*"y"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_24748/*"y"*/, v47->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
      *(_QWORD *)&markindex = StringLiteral_24748/*"y"*/;
    }
    else
    {
      *(_QWORD *)&markindex = 0LL;
    }
    if ( !LODWORD(v47->fields.m_CancellationTokenSource) )
      goto LABEL_103;
    v47->fields.COMMAND_STAMP_POS_X = *(struct System_Single_array **)&markindex;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->fields.COMMAND_STAMP_POS_X, markindex, v45, v46);
    v83 = 20;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
    v50 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v47->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
    }
    if ( LODWORD(v47->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_103;
    *(_QWORD *)&v47->fields.COMMAND_STAMP_POS_Y = v50;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->fields.COMMAND_STAMP_POS_Y, (int32_t)v50, v48, v49);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23830/*"time"*/;
    if ( StringLiteral_23830/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v47->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
      *(_QWORD *)&markindex = StringLiteral_23830/*"time"*/;
    }
    else
    {
      *(_QWORD *)&markindex = 0LL;
    }
    if ( LODWORD(v47->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_103;
    *(_QWORD *)&v47->fields.CARD_ROOT_BASE_X = *(_QWORD *)&markindex;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->fields.CARD_ROOT_BASE_X, markindex, v51, v52);
    v82 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v82);
    v55 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v47->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
    }
    if ( LODWORD(v47->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_103;
    v47->fields.commandfsm = (struct PlayMakerFSM_o *)v55;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->fields.commandfsm, (int32_t)v55, v53, v54);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_20750/*"islocal"*/;
    if ( StringLiteral_20750/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_20750/*"islocal"*/, v47->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
      *(_QWORD *)&markindex = StringLiteral_20750/*"islocal"*/;
    }
    else
    {
      *(_QWORD *)&markindex = 0LL;
    }
    if ( LODWORD(v47->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_103;
    v47->fields.commandprefab = *(struct UnityEngine_GameObject_o **)&markindex;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->fields.commandprefab, markindex, v56, v57);
    v81[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v81);
    v60 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v47->klass->_1.element_class);
      if ( !this )
        goto LABEL_104;
    }
    if ( LODWORD(v47->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_103;
    v47->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v60;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->fields.selectCommandPrefab, (int32_t)v60, v58, v59);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v61 = iTween__Hash((System_Object_array *)v47, 0LL);
    iTween__MoveTo_59912984(v44, v61, 0LL);
    BattleCommandComponent__stopAnimation(v32, 0LL);
    BattleCommandComponent__selectCard(v32, targetIndex, 0LL);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)FSUtility__IsUnderVista(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      v62 = 0.0;
    else
      v62 = 17.0;
    if ( (unsigned int)v30 <= 4 )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
      COMMAND_STAMP_POS_X = v4->fields.COMMAND_STAMP_POS_X;
      if ( !COMMAND_STAMP_POS_X )
        goto LABEL_11;
      if ( (unsigned int)v30 >= COMMAND_STAMP_POS_X->max_length )
        goto LABEL_103;
      if ( !this )
        goto LABEL_11;
      *(UnityEngine_Vector3_o *)&v65 = UnityEngine_Transform__TransformPoint_69152324(
                                         (UnityEngine_Transform_o *)this,
                                         COMMAND_STAMP_POS_X->m_Items[v30 + 1],
                                         v62 + v4->fields.COMMAND_STAMP_POS_Y,
                                         v4->fields.COMMAND_STAMP_POS_Z,
                                         0LL);
    }
    else
    {
      commandTransformArray = v4->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_11;
      if ( (unsigned int)v30 >= commandTransformArray->max_length )
        goto LABEL_103;
      this = (BattlePerformanceCommandCard_o *)commandTransformArray->m_Items[v30];
      if ( !this )
        goto LABEL_11;
      *(UnityEngine_Vector3_o *)&v65 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    }
    BattlePerformanceCommandCard__SetSelectStamp(v4, targetIndex, *(UnityEngine_Vector3_o *)&v65, v32, v64);
    if ( !targetIndex )
    {
      CommandType = BattleCommandComponent__getCommandType(v32, 0LL);
      started = BattlePerformanceCommandCard__coStartFirstBonus(v4, CommandType, v72);
      UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v4, started, 0LL);
    }
    BattlePerformanceCommandCard__checkChainBonus(v4, v69, v70);
    BattlePerformanceCommandCard__checkMaskEnemy(v4, v74);
    goto LABEL_91;
  }
  v79 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
  System_Action___ctor(v79, (Il2CppObject *)v4, Method_BattlePerformanceCommandCard__selectOK_b__112_0__, 0LL);
  BattleCommandComponent__PlayTDErrorAnimation(v32, v79, 0LL);
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
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_GameObject_o *cutin_ordererror; // x1
  int32_t samecount; // w8
  int32_t v14; // w8
  int32_t v15; // w8

  *seName = -1;
  *prefab = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)prefab, 0, (int32_t)prefab, (int32_t)seName);
  if ( !combo )
    sub_1B64324(v9);
  if ( combo->fields.chainError )
  {
    *seName = 27;
    cutin_ordererror = this->fields.cutin_ordererror;
LABEL_4:
    *prefab = cutin_ordererror;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)prefab, (int32_t)cutin_ordererror, v10, v11);
    return;
  }
  if ( combo->fields.flash )
  {
    *seName = 25;
    if ( BattleCommand__isARTS(combo->fields.flashtype, 0LL) )
    {
      samecount = combo->fields.samecount;
      if ( (unsigned int)(samecount - 1) < 2 )
      {
        cutin_ordererror = this->fields.cutin_trinity_a;
        goto LABEL_4;
      }
      if ( samecount == 3 )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_a;
        goto LABEL_4;
      }
    }
    else if ( BattleCommand__isBUSTER(combo->fields.flashtype, 0LL) )
    {
      v14 = combo->fields.samecount;
      if ( (unsigned int)(v14 - 1) < 2 )
      {
        cutin_ordererror = this->fields.cutin_trinity_b;
        goto LABEL_4;
      }
      if ( v14 == 3 )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_b;
        goto LABEL_4;
      }
    }
    else if ( BattleCommand__isQUICK(combo->fields.flashtype, 0LL) )
    {
      v15 = combo->fields.samecount;
      if ( (unsigned int)(v15 - 1) < 2 )
      {
        cutin_ordererror = this->fields.cutin_trinity_q;
        goto LABEL_4;
      }
      if ( v15 == 3 )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_q;
        goto LABEL_4;
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
      goto LABEL_4;
    }
    if ( combo->fields.samecount == 3 )
    {
      *seName = 26;
      cutin_ordererror = this->fields.cutin_single;
      goto LABEL_4;
    }
  }
}


void __fastcall BattlePerformanceCommandCard__setCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_array *list,
        int32_t maxdrawcount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  struct BattleCommandComponent_array *v21; // x8
  _DWORD *v22; // x22
  unsigned int v23; // w26
  unsigned int v24; // w9
  BattleCommandComponent_o *v25; // x25
  _DWORD *v26; // x24
  ServantStatusBattleListViewItem_o *v27; // x24
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v29; // x25
  struct UnityEngine_Transform_array *v30; // x8
  UnityEngine_Transform_o *v31; // x25
  UnityEngine_GameObject_o *gameObject; // x24
  struct BattleCommandData_array *v33; // x8
  unsigned int v34; // w26
  __int64 *v35; // x25
  struct UnityEngine_Transform_array *v36; // x8
  UnityEngine_Transform_o *v37; // x24
  struct UnityEngine_Transform_array *v38; // x8
  UnityEngine_Transform_o *v39; // x24
  struct UnityEngine_GameObject_array *v40; // x8
  il2cpp_array_size_t v41; // w19
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x24
  __int64 *v45; // x21
  _DWORD *v46; // x25
  ServantStatusBattleListViewItem_o *v47; // x25
  struct BattleCommandData_array *v48; // x8
  BattleCommandData_o *v49; // x24
  BattleCommandComponent_o *v50; // x25
  struct UnityEngine_GameObject_array *v51; // x8
  struct System_Int32_array *selectcommand; // x11
  unsigned __int64 v53; // x8
  unsigned __int64 v54; // x9
  int32_t *v55; // x11
  struct BattleCommandComponent_array *selectedcomponents; // x8
  unsigned __int64 v57; // x19
  __int64 v58; // x21
  unsigned __int64 v59; // x9
  __int64 v60; // x0
  struct BattleCommandData_array **v62; // [xsp+18h] [xbp-68h]
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FE10B & 1) == 0 )
  {
    sub_1B640C8(&BattleCommandComponent___TypeInfo, list);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v8);
    sub_1B640C8(&iTween_TypeInfo, v9);
    byte_49FE10B = 1;
  }
  p_commandlist = &this->fields.commandlist;
  this->fields.commandlist = list;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandlist,
    (int32_t)list,
    maxdrawcount,
    (int32_t)method);
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
    sub_1B6432C(klass, v12);
  }
LABEL_10:
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_84;
  klass = sub_1B64170(BattleCommandComponent___TypeInfo, commandCompArray->max_length);
  v21 = this->fields.commandCompArray;
  if ( !v21 )
    goto LABEL_84;
  v22 = (_DWORD *)klass;
  v23 = 5;
  while ( 1 )
  {
    v24 = v21->max_length;
    if ( (int)v23 >= (int)v24 )
      break;
    if ( v23 >= v24 )
      goto LABEL_89;
    if ( v22 )
    {
      v25 = v21->m_Items[v23];
      if ( v25 )
      {
        klass = sub_1B64204(v25, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
        if ( !klass )
        {
LABEL_90:
          v60 = sub_1B64348(klass);
          sub_1B641F0(v60, 0LL);
        }
      }
      if ( v23 >= v22[6] )
        goto LABEL_89;
      v26 = &v22[2 * v23];
      *((_QWORD *)v26 + 4) = v25;
      v27 = (ServantStatusBattleListViewItem_o *)(v26 + 8);
      sub_1B6406C(v27, (int32_t)v25, (int32_t)v19, v20);
      if ( v23 >= v22[6] )
        goto LABEL_89;
      klass = (__int64)v27->klass;
      if ( v27->klass )
      {
        BattleCommandComponent__setData((BattleCommandComponent_o *)klass, 0LL, 0LL, 0, 1, 0, 1, 0LL);
        commandTransformArray = this->fields.commandTransformArray;
        if ( commandTransformArray )
        {
          if ( v23 >= commandTransformArray->max_length )
            goto LABEL_89;
          v29 = commandTransformArray->m_Items[v23];
          if ( !byte_49F7111 )
          {
            klass = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
            byte_49F7111 = 1;
          }
          if ( v29 )
          {
            UnityEngine_Transform__set_localPosition(v29, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            v30 = this->fields.commandTransformArray;
            if ( v30 )
            {
              if ( v23 >= v30->max_length )
                goto LABEL_89;
              v31 = v30->m_Items[v23];
              if ( !byte_49F7111 )
              {
                klass = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
                byte_49F7111 = 1;
              }
              if ( v31 )
              {
                UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
                if ( v23 >= v22[6] )
                  goto LABEL_89;
                klass = (__int64)v27->klass;
                if ( v27->klass )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
                  if ( !iTween_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                  ++v23;
                  iTween__Stop_60023324(gameObject, 0LL);
                  v21 = this->fields.commandCompArray;
                  if ( v21 )
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
  v33 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_84;
  v34 = 0;
  v35 = &qword_49F7000;
  v62 = &this->fields.commandlist;
  while ( (signed int)v34 < (signed int)v33->max_length )
  {
    v36 = this->fields.commandTransformArray;
    if ( !v36 )
      goto LABEL_84;
    if ( v34 >= v36->max_length )
      goto LABEL_89;
    v37 = v36->m_Items[v34];
    if ( !byte_49F7111 )
    {
      klass = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
      byte_49F7111 = 1;
    }
    if ( !v37 )
      goto LABEL_84;
    UnityEngine_Transform__set_localPosition(v37, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    v38 = this->fields.commandTransformArray;
    if ( !v38 )
      goto LABEL_84;
    if ( v34 >= v38->max_length )
      goto LABEL_89;
    v39 = v38->m_Items[v34];
    if ( !*((_BYTE *)v35 + 278) )
    {
      klass = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
      *((_BYTE *)v35 + 278) = 1;
    }
    if ( !v39 )
      goto LABEL_84;
    UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v33 = *p_commandlist;
    if ( !*p_commandlist )
      goto LABEL_84;
    if ( v34 >= v33->max_length )
      goto LABEL_89;
    if ( v34 >= 5 )
    {
      v12 = v33->m_Items[v34];
      if ( v12 )
      {
        klass = BattlePerformanceCommandCard__GetServantNumber(this, v12, v19);
        v40 = this->fields.p_commandlist;
        if ( !v40 )
          goto LABEL_84;
        v41 = klass + 5;
        if ( (unsigned int)(klass + 5) >= v40->max_length )
          goto LABEL_89;
        klass = (__int64)v40->m_Items[v41];
        if ( !klass )
          goto LABEL_84;
        klass = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)klass,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( !v22 )
          goto LABEL_84;
        v44 = klass;
        if ( klass )
        {
          klass = sub_1B64204(klass, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
          if ( !klass )
            goto LABEL_90;
        }
        if ( v41 >= v22[6] )
          goto LABEL_89;
        v45 = v35;
        v46 = &v22[2 * v41];
        *((_QWORD *)v46 + 4) = v44;
        v47 = (ServantStatusBattleListViewItem_o *)(v46 + 8);
        sub_1B6406C(v47, v44, v42, v43);
        if ( v41 >= v22[6] )
          goto LABEL_89;
        v48 = *v62;
        if ( !*v62 )
          goto LABEL_84;
        if ( v34 >= v48->max_length )
          goto LABEL_89;
        v49 = v48->m_Items[v34];
        if ( !v49 )
          goto LABEL_84;
        klass = (__int64)this->fields.Bdata;
        if ( !klass )
          goto LABEL_84;
        v50 = (BattleCommandComponent_o *)v47->klass;
        klass = (__int64)BattleData__getServantData((BattleData_o *)klass, v49->fields.uniqueId, 0LL);
        if ( !v50 )
          goto LABEL_84;
        BattleCommandComponent__setData(v50, v49, (BattleServantData_o *)klass, 0, 1, 0, 1, 0LL);
        v51 = this->fields.p_commandlist;
        if ( !v51 )
          goto LABEL_84;
        if ( v41 >= v51->max_length )
          goto LABEL_89;
        v35 = v45;
        klass = (__int64)v51->m_Items[v41];
        p_commandlist = &this->fields.commandlist;
        if ( !klass )
          goto LABEL_84;
        klass = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)klass,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !klass )
          goto LABEL_84;
        v63.fields.r = 0.0;
        v63.fields.g = 0.0;
        v63.fields.b = 0.0;
        v63.fields.a = 0.01;
        UIWidget__set_color((UIWidget_o *)klass, v63, 0LL);
        v33 = *v62;
      }
    }
    ++v34;
    if ( !v33 )
      goto LABEL_84;
  }
  selectcommand = this->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_84;
  v53 = selectcommand->max_length;
  if ( (__int64)(v53 << 32) >= 1 )
  {
    v54 = 0LL;
    v55 = &selectcommand->m_Items[1];
    while ( v54 < v53 )
    {
      v55[v54++] = -1;
      if ( (__int64)v54 >= (int)v53 )
        goto LABEL_79;
    }
    goto LABEL_89;
  }
LABEL_79:
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_84;
  v57 = 0LL;
  v58 = 32LL;
  while ( 1 )
  {
    v59 = selectedcomponents->max_length;
    if ( v58 == 56 )
      break;
    if ( v57 >= v59 )
      goto LABEL_89;
    *(Il2CppClass **)((char *)&selectedcomponents->obj.klass + v58) = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)selectedcomponents + v58), 0, (int32_t)v19, v20);
    selectedcomponents = this->fields.selectedcomponents;
    ++v57;
    v58 += 8LL;
    if ( !selectedcomponents )
      goto LABEL_84;
  }
  if ( (unsigned int)v59 <= 3 )
    goto LABEL_89;
  klass = (__int64)selectedcomponents->m_Items[3];
  if ( !klass
    || (klass = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)klass,
                           (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_84:
    sub_1B64324(klass);
  }
  v64.fields.r = 0.0;
  v64.fields.g = 0.0;
  v64.fields.b = 0.0;
  v64.fields.a = 0.0;
  UIWidget__set_color((UIWidget_o *)klass, v64, 0LL);
  this->fields.drawcount = 0;
  this->fields.maxdrawcount = maxdrawcount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__setCountRemaining(
        BattlePerformanceCommandCard_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *selectinfo_sprite; // x21
  UISprite_o *v8; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FE129 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&count);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_20168/*"img_battle_select{0:0}"*/, v6);
    byte_49FE129 = 1;
  }
  selectinfo_sprite = (UnityEngine_Object_o *)this->fields.selectinfo_sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectinfo_sprite, 0LL, 0LL) )
  {
    v8 = this->fields.selectinfo_sprite;
    v11 = count;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    v10 = System_String__Format((System_String_o *)StringLiteral_20168/*"img_battle_select{0:0}"*/, v9, 0LL);
    if ( !v8 )
      sub_1B64324(v10);
    UISprite__set_spriteName(v8, v10, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__setFirstAura(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *comp,
        int32_t type,
        const MethodInfo *method)
{
  _BOOL8 isQUICK; // x0
  UnityEngine_GameObject_o **p_firstaura_q; // x8

  isQUICK = BattleCommand__isQUICK(type, 0LL);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_q;
LABEL_10:
      BattleCommandComponent__addFirstAura(comp, *p_firstaura_q, 0LL);
      return;
    }
    goto LABEL_12;
  }
  isQUICK = BattleCommand__isARTS(type, 0LL);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_a;
      goto LABEL_10;
    }
LABEL_12:
    sub_1B64324(isQUICK);
  }
  isQUICK = BattleCommand__isBUSTER(type, 0LL);
  if ( isQUICK )
  {
    if ( comp )
    {
      p_firstaura_q = &this->fields.firstaura_b;
      goto LABEL_10;
    }
    goto LABEL_12;
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FE11E & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo, combo);
    byte_49FE11E = 1;
  }
  v7 = sub_1B64314(BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo, combo, endproc);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = combo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)combo, v10, v11);
  *(_QWORD *)(v7 + 48) = endproc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)endproc, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffectNormal(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FE120 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo, combo);
    byte_49FE120 = 1;
  }
  v5 = sub_1B64314(BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo, combo, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = combo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)combo, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffectShort(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FE11F & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo, combo);
    byte_49FE11F = 1;
  }
  v5 = sub_1B64314(BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo, combo, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = combo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)combo, v8, v9);
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
  if ( (byte_49FE11D & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FE11D = 1;
  }
  perf = v3->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL )
    sub_1B64324(this);
  v6 = BattlePerformanceCommandCard__showComboEffect(
         v3,
         data->fields.combodata,
         (System_String_o *)StringLiteral_5463/*"END_PROC"*/,
         v2);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v3, v6, 0LL);
}


void __fastcall BattlePerformanceCommandCard__startFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = BattlePerformanceCommandCard__coStartFirstBonus(this, type, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall BattlePerformanceCommandCard__startMiniCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  struct BattleCommandComponent_array *v13; // x8
  struct BattleCommandComponent_array *v14; // x8
  struct BattleCommandComponent_array *v15; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  BattlePerformanceCommandCard_o *v19; // x21
  struct UnityEngine_Transform_array *miniPos; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  BattlePerformanceCommandCard_o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  BattlePerformanceCommandCard_o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  BattlePerformanceCommandCard_o *v33; // x22
  System_Collections_Hashtable_o *v34; // x0
  struct BattleCommandComponent_array *v35; // x8
  UnityEngine_GameObject_o *v36; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  BattlePerformanceCommandCard_o *v39; // x21
  __int64 v40; // x9
  int32_t v41; // w2
  int32_t v42; // w3
  BattlePerformanceCommandCard_o *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  BattlePerformanceCommandCard_o *v48; // x22
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  BattlePerformanceCommandCard_o *v53; // x22
  System_Collections_Hashtable_o *v54; // x0
  __int64 v55; // x0
  int v56; // [xsp+0h] [xbp-90h] BYREF
  int v57; // [xsp+4h] [xbp-8Ch] BYREF
  __int64 v58; // [xsp+8h] [xbp-88h] BYREF
  float z; // [xsp+10h] [xbp-80h]
  int v60; // [xsp+18h] [xbp-78h] BYREF
  int v61; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o position; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_49FE12A & 1) == 0 )
  {
    sub_1B640C8(&iTween_EaseType_TypeInfo, method);
    sub_1B640C8(&object___TypeInfo, v3);
    sub_1B640C8(&float_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v6);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v7);
    sub_1B640C8(&StringLiteral_22482/*"position"*/, v8);
    sub_1B640C8(&StringLiteral_22918/*"scale"*/, v9);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&iTween_TypeInfo, v10);
    byte_49FE12A = 1;
  }
  v11 = 0LL;
  do
  {
    selectedcomponents = v2->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_77;
    if ( (unsigned int)v11 >= selectedcomponents->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[v11];
    if ( !this )
      goto LABEL_77;
    BattleCommandComponent__setMoveMode((BattleCommandComponent_o *)this, 0LL);
    v13 = v2->fields.selectedcomponents;
    if ( !v13 )
      goto LABEL_77;
    if ( (unsigned int)v11 >= v13->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v13->m_Items[v11];
    if ( !this )
      goto LABEL_77;
    BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)this, 0, 0LL);
    v14 = v2->fields.selectedcomponents;
    if ( !v14 )
      goto LABEL_77;
    if ( (unsigned int)v11 >= v14->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v14->m_Items[v11];
    if ( !this )
      goto LABEL_77;
    BattleCommandComponent__SetTreasureDeviceTypeChange((BattleCommandComponent_o *)this, 0, 0, 0LL);
    v15 = v2->fields.selectedcomponents;
    if ( !v15 )
      goto LABEL_77;
    if ( (unsigned int)v11 >= v15->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v15->m_Items[v11];
    if ( !this )
      goto LABEL_77;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (BattlePerformanceCommandCard_o *)sub_1B64170(object___TypeInfo, 6LL);
    if ( !this )
      goto LABEL_77;
    v19 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22482/*"position"*/;
    if ( StringLiteral_22482/*"position"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_22482/*"position"*/, v19->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_22482/*"position"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( !LODWORD(v19->fields.m_CancellationTokenSource) )
      goto LABEL_76;
    v19->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->fields.COMMAND_STAMP_POS_X, (int32_t)method, v17, v18);
    miniPos = v2->fields.miniPos;
    if ( !miniPos )
      goto LABEL_77;
    if ( (unsigned int)v11 >= miniPos->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)miniPos->m_Items[v11];
    if ( !this )
      goto LABEL_77;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position);
    v23 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v19->klass->_1.element_class);
      if ( !this )
      {
LABEL_78:
        v55 = sub_1B64348(this);
        sub_1B641F0(v55, 0LL);
      }
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_76;
    *(_QWORD *)&v19->fields.COMMAND_STAMP_POS_Y = v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->fields.COMMAND_STAMP_POS_Y, (int32_t)v23, v21, v22);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23830/*"time"*/;
    if ( StringLiteral_23830/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v19->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_23830/*"time"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_76;
    *(_QWORD *)&v19->fields.CARD_ROOT_BASE_X = method;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->fields.CARD_ROOT_BASE_X, (int32_t)method, v24, v25);
    v61 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v61);
    v28 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v19->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_76;
    v19->fields.commandfsm = (struct PlayMakerFSM_o *)v28;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->fields.commandfsm, (int32_t)v28, v26, v27);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18682/*"easetype"*/;
    if ( StringLiteral_18682/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_18682/*"easetype"*/, v19->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_18682/*"easetype"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 4 )
LABEL_76:
      sub_1B6432C(this, method);
    v19->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->fields.commandprefab, (int32_t)method, v29, v30);
    v60 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v60);
    v33 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v19->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v19->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_76;
    v19->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->fields.selectCommandPrefab, (int32_t)v33, v31, v32);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v34 = iTween__Hash((System_Object_array *)v19, 0LL);
    iTween__MoveTo_59912984(gameObject, v34, 0LL);
    v35 = v2->fields.selectedcomponents;
    if ( !v35 )
      goto LABEL_77;
    if ( (unsigned int)v11 >= v35->max_length )
      goto LABEL_76;
    this = (BattlePerformanceCommandCard_o *)v35->m_Items[v11];
    if ( !this
      || (v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
          (this = (BattlePerformanceCommandCard_o *)sub_1B64170(object___TypeInfo, 6LL)) == 0LL) )
    {
LABEL_77:
      sub_1B64324(this);
    }
    v39 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22918/*"scale"*/;
    if ( StringLiteral_22918/*"scale"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_22918/*"scale"*/, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_22918/*"scale"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( !LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_76;
    v39->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)method;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.COMMAND_STAMP_POS_X, (int32_t)method, v37, v38);
    v40 = *(_QWORD *)&v2->fields.miniScale.fields.x;
    z = v2->fields.miniScale.fields.z;
    v58 = v40;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v58);
    v43 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 1 )
      goto LABEL_76;
    *(_QWORD *)&v39->fields.COMMAND_STAMP_POS_Y = v43;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.COMMAND_STAMP_POS_Y, (int32_t)v43, v41, v42);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23830/*"time"*/;
    if ( StringLiteral_23830/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_23830/*"time"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_76;
    *(_QWORD *)&v39->fields.CARD_ROOT_BASE_X = method;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.CARD_ROOT_BASE_X, (int32_t)method, v44, v45);
    v57 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v57);
    v48 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 3 )
      goto LABEL_76;
    v39->fields.commandfsm = (struct PlayMakerFSM_o *)v48;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.commandfsm, (int32_t)v48, v46, v47);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18682/*"easetype"*/;
    if ( StringLiteral_18682/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_18682/*"easetype"*/, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
      method = (const MethodInfo *)StringLiteral_18682/*"easetype"*/;
    }
    else
    {
      method = 0LL;
    }
    if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 4 )
      goto LABEL_76;
    v39->fields.commandprefab = (struct UnityEngine_GameObject_o *)method;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.commandprefab, (int32_t)method, v49, v50);
    v56 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v56);
    v53 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v39->klass->_1.element_class);
      if ( !this )
        goto LABEL_78;
    }
    if ( LODWORD(v39->fields.m_CancellationTokenSource) <= 5 )
      goto LABEL_76;
    v39->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v53;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.selectCommandPrefab, (int32_t)v53, v51, v52);
    v54 = iTween__Hash((System_Object_array *)v39, 0LL);
    iTween__ScaleTo_59918512(v36, v54, 0LL);
    ++v11;
  }
  while ( (_DWORD)v11 != 4 );
}


void __fastcall BattlePerformanceCommandCard__startOpenNpCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  v3 = BattlePerformanceCommandCard__colOpenNpCard(this, method);
  started = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  this->fields.openNpCoroutine = started;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openNpCoroutine, (int32_t)started, v5, v6);
}


void __fastcall BattlePerformanceCommandCard__stopFirstBonus(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusObject; // x20
  Spawner_o *spawner; // x0

  if ( (byte_49FE117 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE117 = 1;
  }
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL) )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      sub_1B64324(0LL);
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__toggleHighSpeedMode(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattlePerformance_o *perf; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t v7; // w1
  const MethodInfo *v8; // x2

  if ( (byte_49FE14E & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceCommandCard_toggleHighSpeedMode__, method);
    byte_49FE14E = 1;
  }
  data = (BattleData_o *)BattlePerformanceCommandCard__checkSpeedButtonTutorial(this, method);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    perf = this->fields.perf;
    if ( !perf || (data = perf->fields.data) == 0LL )
      sub_1B64324(data);
    BattleData__toggleHighSpeedMode(data, 0LL);
    v5 = Method_BattlePerformanceCommandCard_toggleHighSpeedMode__;
    if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_toggleHighSpeedMode__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceCommandCard_toggleHighSpeedMode__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlayCommonSe(v6, 9, 0LL);
    BattlePerformanceCommandCard__updateHighSpeedObject(this, v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__touchCommandCard(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleLogic_o *logic; // x0
  int v7; // w21
  __int64 v8; // x1
  struct BattleData_o *Bdata; // x8
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v11; // x22
  int max_length; // w9
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x21
  const MethodInfo *v15; // x2
  struct BattleData_o *v16; // x8

  if ( (byte_49FE10E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21198/*"markindex"*/, *(_QWORD *)&markindex);
    sub_1B640C8(&StringLiteral_11437/*"SELECTCARD"*/, v5);
    byte_49FE10E = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_30;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_30;
  v7 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getTurn(this->fields.logic, 0LL);
  if ( this->fields.isTouchNgInTutorial )
    return;
  if ( v7 == 1 )
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
  else if ( (v7 & 0xFFFFFFFE) == 2 )
  {
    if ( v7 == 2 && (_DWORD)logic == 2 )
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
  v11 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v11 >= max_length )
      return;
    if ( (unsigned int)v11 >= max_length )
      sub_1B6432C(logic, v8);
    v13 = &commandCompArray->obj.klass + v11;
    v14 = v13[4];
    if ( !v14 )
      goto LABEL_30;
    logic = (BattleLogic_o *)BattleCommandComponent__checkMark((BattleCommandComponent_o *)v13[4], markindex, 0LL);
    if ( ((unsigned __int8)logic & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v11;
    if ( !commandCompArray )
      goto LABEL_30;
  }
  v16 = this->fields.Bdata;
  if ( !v16 )
    goto LABEL_30;
  if ( v16->fields.systemflg_selectcancel || !BYTE4(v14->vtable[5].method) )
  {
    if ( this->fields.directCommandCardTouchEnable )
    {
      BattlePerformanceCommandCard__selectOK(this, markindex, v15);
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
                                     (System_String_o *)StringLiteral_21198/*"markindex"*/,
                                     0LL);
          if ( logic )
          {
            LODWORD(logic->fields.perf) = markindex;
            logic = (BattleLogic_o *)this->fields.commandfsm;
            if ( logic )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_11437/*"SELECTCARD"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B64324(logic);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Int32_array *selectcommand; // x12
  unsigned __int64 max_length; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x12
  unsigned int v18; // w24
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int v20; // w8
  int32_t v21; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  BattlePerformanceCommandCard_o *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  BattlePerformanceCommandCard_o *v28; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  BattlePerformanceCommandCard_o *v33; // x23
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  BattlePerformanceCommandCard_o *v38; // x23
  System_Collections_Hashtable_o *v39; // x0
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  int32_t v43; // w3
  struct BattleCommandComponent_array *v44; // x8
  Il2CppClass **v45; // x0
  int32_t v46; // w1
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x1
  __int64 v49; // x0
  char v50[4]; // [xsp+Ch] [xbp-44h] BYREF
  int v51; // [xsp+18h] [xbp-38h] BYREF
  int v52; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = bc;
  v6 = this;
  if ( (byte_49FE110 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, bc);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&object___TypeInfo, v8);
    sub_1B640C8(&float_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v10);
    sub_1B640C8(&StringLiteral_24748/*"y"*/, v11);
    sub_1B640C8(&StringLiteral_20750/*"islocal"*/, v12);
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&iTween_TypeInfo, v13);
    byte_49FE110 = 1;
  }
  selectcommand = v6->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_51;
  max_length = selectcommand->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v16 = 0LL;
    v17 = &selectcommand->m_Items[1];
    v18 = -1;
    do
    {
      if ( v16 >= max_length )
        goto LABEL_50;
      if ( v17[v16] == markindex )
      {
        v18 = v16;
        v17[v16] = -1;
      }
      ++v16;
    }
    while ( (__int64)v16 < (int)max_length );
    if ( (v18 & 0x80000000) == 0 )
    {
      selectedcomponents = v6->fields.selectedcomponents;
      if ( !selectedcomponents )
        goto LABEL_51;
      if ( (signed int)v18 >= (signed int)selectedcomponents->max_length )
        return;
      if ( !v5 )
        goto LABEL_51;
      v5->fields.selectflg = 0;
      v20 = v6->fields.drawcount - 1;
      v21 = v6->fields.maxdrawcount - v20;
      v6->fields.drawcount = v20;
      BattlePerformanceCommandCard__selectCommandCard(v6, v21, *(const MethodInfo **)&markindex);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
      this = (BattlePerformanceCommandCard_o *)sub_1B64170(object___TypeInfo, 6LL);
      if ( !this )
        goto LABEL_51;
      v25 = this;
      this = (BattlePerformanceCommandCard_o *)StringLiteral_24748/*"y"*/;
      if ( StringLiteral_24748/*"y"*/ )
      {
        this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_24748/*"y"*/, v25->klass->_1.element_class);
        if ( !this )
          goto LABEL_52;
        bc = (BattleCommandComponent_o *)StringLiteral_24748/*"y"*/;
      }
      else
      {
        bc = 0LL;
      }
      if ( !LODWORD(v25->fields.m_CancellationTokenSource) )
        goto LABEL_50;
      v25->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)bc;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.COMMAND_STAMP_POS_X, (int32_t)bc, v23, v24);
      v52 = 0;
      this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
      v28 = this;
      if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v25->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_50;
        *(_QWORD *)&v25->fields.COMMAND_STAMP_POS_Y = v28;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.COMMAND_STAMP_POS_Y, (int32_t)v28, v26, v27);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_23830/*"time"*/;
        if ( StringLiteral_23830/*"time"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v25->klass->_1.element_class);
          if ( !this )
            goto LABEL_52;
          bc = (BattleCommandComponent_o *)StringLiteral_23830/*"time"*/;
        }
        else
        {
          bc = 0LL;
        }
        if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 2 )
          goto LABEL_50;
        *(_QWORD *)&v25->fields.CARD_ROOT_BASE_X = bc;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.CARD_ROOT_BASE_X, (int32_t)bc, v29, v30);
        v51 = 1045220557;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v51);
        v33 = this;
        if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v25->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 3 )
            goto LABEL_50;
          v25->fields.commandfsm = (struct PlayMakerFSM_o *)v33;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.commandfsm, (int32_t)v33, v31, v32);
          this = (BattlePerformanceCommandCard_o *)StringLiteral_20750/*"islocal"*/;
          if ( StringLiteral_20750/*"islocal"*/ )
          {
            this = (BattlePerformanceCommandCard_o *)sub_1B64204(StringLiteral_20750/*"islocal"*/, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_52;
            bc = (BattleCommandComponent_o *)StringLiteral_20750/*"islocal"*/;
          }
          else
          {
            bc = 0LL;
          }
          if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 4 )
            goto LABEL_50;
          v25->fields.commandprefab = (struct UnityEngine_GameObject_o *)bc;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.commandprefab, (int32_t)bc, v34, v35);
          v50[0] = 1;
          this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v50);
          v38 = this;
          if ( !this
            || (this = (BattlePerformanceCommandCard_o *)sub_1B64204(this, v25->klass->_1.element_class)) != 0LL )
          {
            if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 5 )
              goto LABEL_50;
            v25->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v38;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.selectCommandPrefab, (int32_t)v38, v36, v37);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v39 = iTween__Hash((System_Object_array *)v25, 0LL);
            iTween__MoveTo_59912984(gameObject, v39, 0LL);
            BattleCommandComponent__startMoveFloat(v5, 0LL);
            if ( v18 )
              BattlePerformanceCommandCard__setFirstAura(v6, v5, v6->fields.firstAuraType, v41);
            else
              BattlePerformanceCommandCard__cancelFirstBonus(v6, v40);
            v44 = v6->fields.selectedcomponents;
            if ( v44 )
            {
              if ( v18 < v44->max_length )
              {
                v45 = &v44->obj.klass + v18;
                v45[4] = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), 0, v42, v43);
                BattlePerformanceCommandCard__checkChainBonus(v6, v46, v47);
                BattlePerformanceCommandCard__checkMaskEnemy(v6, v48);
                BattleCommandComponent__resetSelect(v5, 0LL);
                return;
              }
LABEL_50:
              sub_1B6432C(this, bc);
            }
LABEL_51:
            sub_1B64324(this);
          }
        }
      }
LABEL_52:
      v49 = sub_1B64348(this);
      sub_1B641F0(v49, 0LL);
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
    sub_1B64324(this);
  v3 = this;
  v4 = 0LL;
  while ( (int)v4 < (signed int)p_commandlist->max_length )
  {
    commandCompArray = v3->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_13;
    if ( (unsigned int)v4 >= commandCompArray->max_length )
      sub_1B6432C(this, method);
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
  UnityEngine_Object_o *v10; // x20

  v2 = this;
  if ( (byte_49FE105 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE105 = 1;
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
        sub_1B6432C(this, method);
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + i);
      if ( !this )
        goto LABEL_28;
      BattleCommandComponent__setData((BattleCommandComponent_o *)this, 0LL, 0LL, 0, 1, 0, 1, 0LL);
    }
  }
  v7 = v2->fields.commandCompArray;
  if ( !v7 )
LABEL_28:
    sub_1B64324(this);
  v8 = 0LL;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (__int64)v8 >= (int)max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_30;
    v10 = (UnityEngine_Object_o *)v7->m_Items[v8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_28;
      BattleCommandComponent__updateView((BattleCommandComponent_o *)v10, 0, 0, 1, 0, 0, 0LL);
      if ( v10[15].monitor
        && BattleCommandComponent__getCriticalCount((BattleCommandComponent_o *)v10, 0LL) >= 1
        && !v2->fields._IsPlayingBackStar_k__BackingField )
      {
        BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)v10, 1, 0LL);
      }
      BattleCommandComponent__UpdateCommandCardEffect((BattleCommandComponent_o *)v10, 0LL);
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
  __int64 v4; // x1
  BattlePerformanceCommandCard_o *v5; // x20
  int v6; // w8
  int32_t firstaura_b_high; // w21
  int v8; // w8
  int v9; // w22
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v11; // x23
  int max_length; // w9
  unsigned int v13; // w24
  struct BattleCommandComponent_array *v14; // x8
  BattleCommandComponent_o *v15; // x8

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_18;
  v3 = this;
  this = (BattlePerformanceCommandCard_o *)perf->fields.data;
  if ( !this )
    goto LABEL_18;
  this = (BattlePerformanceCommandCard_o *)BattleData__GetMaximumTurnFixedBuff((BattleData_o *)this, 0LL);
  v5 = this;
  if ( this )
  {
    v6 = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
    firstaura_b_high = HIDWORD(this->fields.firstaura_b);
    v8 = v6 + 1 >= 0 ? v6 + 1 : v6 + 2;
    v9 = v8 >> 1;
  }
  else
  {
    firstaura_b_high = 0;
    v9 = 0;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_18:
    sub_1B64324(this);
  v11 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v13 = v11 - 4;
    if ( (int)v11 - 4 >= max_length )
      break;
    if ( v13 >= max_length )
      goto LABEL_20;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + v11);
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(
                                                 (BattleCommandComponent_o *)this,
                                                 0LL);
      v14 = v3->fields.commandCompArray;
      if ( v14 )
      {
        if ( v13 >= v14->max_length )
LABEL_20:
          sub_1B6432C(this, v4);
        v15 = (BattleCommandComponent_o *)*((_QWORD *)&v14->obj.klass + v11);
        if ( v15 )
        {
          BattleCommandComponent__SetFixedCommandCardBuff(
            v15,
            (v5 != 0LL) & ((unsigned __int8)this ^ 1),
            v9,
            firstaura_b_high,
            0LL);
          commandCompArray = v3->fields.commandCompArray;
          ++v11;
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
  __int64 v4; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleServantData_o *v6; // x20
  __int64 v7; // x21
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
    sub_1B64324(Bdata);
  v6 = (BattleServantData_o *)Bdata;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1B6432C(Bdata, v4);
    Bdata = (BattleData_o *)commandCompArray->m_Items[v7];
    if ( Bdata )
    {
      BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)Bdata, v6, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v7;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_10;
  }
}


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
    sub_1B64324(logic);
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
    sub_1B64324(this);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B6432C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FE107 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo, method);
    byte_49FE107 = 1;
  }
  v4 = sub_1B64314(BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo, method, v2);
  BattlePerformanceCommandCard__waitFallStar_d__97___ctor(
    (BattlePerformanceCommandCard__waitFallStar_d__97_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__waitFunc(
        BattlePerformanceCommandCard_o *this,
        float waittime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FE131 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceCommandCard__waitFunc_d__169_TypeInfo, callback);
    byte_49FE131 = 1;
  }
  v7 = sub_1B64314(BattlePerformanceCommandCard__waitFunc_d__169_TypeInfo, callback, method);
  BattlePerformanceCommandCard__waitFunc_d__169___ctor((BattlePerformanceCommandCard__waitFunc_d__169_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v9, v10);
  *(float *)(v7 + 40) = waittime;
  *(_QWORD *)(v7 + 48) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)callback, v11, v12);
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
  int32_t v2; // w2
  int32_t v3; // w3
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *v4; // x19
  int32_t _1__state; // w8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x19
  UnityEngine_Object_o *firstBonusAnimation; // x19

  v4 = this;
  if ( (byte_49FE15A & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)sub_1B640C8(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    method);
    byte_49FE15A = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
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
    sub_1B64324(this);
  }
  if ( !_1__state )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    *(_DWORD *)&p__2__current[-1].fields.isMine = -1;
    sub_1B6406C(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE158 & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceCommandCard___c_TypeInfo, v1);
    byte_49FE158 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattlePerformanceCommandCard___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattlePerformanceCommandCard___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceCommandCard___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattlePerformanceCommandCard___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.selectflg;
}


bool __fastcall BattlePerformanceCommandCard___c___showComboEffectShort_b__134_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
  if ( (byte_49FE159 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard___c__DisplayClass120_0_o *)sub_1B640C8(
                                                                      &Method_System_Linq_Enumerable_Contains_BattleCommandComponent___,
                                                                      x);
    byte_49FE159 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  return System_Linq_Enumerable__Contains_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents,
           (Il2CppObject *)x,
           (const MethodInfo_2E52F9C *)Method_System_Linq_Enumerable_Contains_BattleCommandComponent___);
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass120_0___DistributeCriticalPoint_b__2(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x19
  UnityEngine_Object_o *firstBonusObject; // x22
  UnityEngine_GameObject_o **p_firstBonusObject; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  Spawner_o *spawner; // x22
  UnityEngine_Object_o *firstbonus_q; // x23
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_GameObject_o *v27; // x22
  Il2CppObject *ComponentInChildren_object__48792192; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v38; // x21
  int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  __int64 v42; // x1
  __int64 v43; // x2
  int32_t v44; // w20
  System_Object_array *v45; // x21
  BattlePerformanceCommandCard___c_c *v46; // x0
  System_Func_object__bool__o *_9__119_0; // x22
  Il2CppObject *v48; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *object; // x21
  const MethodInfo *v53; // x3
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49FE15B & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_BattleCommandComponent___, method);
    sub_1B640C8(&System_Func_BattleCommandComponent__bool__TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation____75773064, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____75773096, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__, v9);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_1B640C8(
                                                                         &BattlePerformanceCommandCard___c_TypeInfo,
                                                                         v10);
    byte_49FE15B = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_37;
    goto LABEL_26;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_37;
  firstBonusObject = (UnityEngine_Object_o *)_4__this->fields.firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_firstBonusObject = &_4__this->fields.firstBonusObject;
  if ( UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL) )
  {
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)_4__this->fields.spawner;
    if ( !this )
      goto LABEL_37;
    Spawner__Despawn((Spawner_o *)this, *p_firstBonusObject, 1, 0LL);
    *p_firstBonusObject = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.firstBonusObject, 0, v15, v16);
  }
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)BattleCommand__isQUICK(v4->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_q;
    if ( byte_49F7111 )
    {
LABEL_14:
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      if ( !byte_49F7117 )
      {
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_1B640C8(
                                                                             &UnityEngine_Quaternion_TypeInfo,
                                                                             v17);
        byte_49F7117 = 1;
      }
      if ( !spawner )
        goto LABEL_37;
      v54.fields.x = x;
      v54.fields.y = y;
      v54.fields.z = z;
      v24 = Spawner__Spawn_37651208(
              spawner,
              firstbonus_q,
              v54,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
      *p_firstBonusObject = v24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.firstBonusObject, (int32_t)v24, v25, v26);
      goto LABEL_18;
    }
LABEL_13:
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7111 = 1;
    goto LABEL_14;
  }
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)BattleCommand__isARTS(v4->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_a;
    if ( byte_49F7111 )
      goto LABEL_14;
    goto LABEL_13;
  }
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)BattleCommand__isBUSTER(v4->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    spawner = _4__this->fields.spawner;
    firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_b;
    if ( byte_49F7111 )
      goto LABEL_14;
    goto LABEL_13;
  }
LABEL_18:
  v27 = *p_firstBonusObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)UnityEngine_Object__op_Inequality(
                                                                       (UnityEngine_Object_o *)v27,
                                                                       0LL,
                                                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)*p_firstBonusObject;
    if ( !*p_firstBonusObject )
      goto LABEL_37;
    ComponentInChildren_object__48792192 = UnityEngine_GameObject__GetComponentInChildren_object__48792192(
                                             (UnityEngine_GameObject_o *)this,
                                             1,
                                             (const MethodInfo_2E88280 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____75773096);
    _4__this->fields.firstBonusSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__48792192;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&_4__this->fields.firstBonusSimpleAnimation,
      (int32_t)ComponentInChildren_object__48792192,
      v29,
      v30);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)_4__this->fields.firstBonusObject;
    if ( !this )
      goto LABEL_37;
    v31 = UnityEngine_GameObject__GetComponentInChildren_object__48792192(
            (UnityEngine_GameObject_o *)this,
            1,
            (const MethodInfo_2E88280 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation____75773064);
    _4__this->fields.firstBonusAnimation = (struct UnityEngine_Animation_o *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.firstBonusAnimation, (int32_t)v31, v32, v33);
    BattlePerformanceCommandCard__ActivateFirstBonusObject(_4__this, v34);
  }
  _4__this->fields.firstAuraType = v4->fields.type;
LABEL_26:
  if ( _4__this->fields.isPlayingMoveCard )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(p__2__current, 0, v2, (int32_t)v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  if ( _4__this->fields.firstAuraType != -1 )
  {
    commandCompArray = _4__this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v38 = 0LL;
      while ( 1 )
      {
        max_length = commandCompArray->max_length;
        if ( (int)v38 >= max_length )
          break;
        if ( (unsigned int)v38 >= max_length )
          sub_1B6432C(this, method);
        method = (const MethodInfo *)commandCompArray->m_Items[v38];
        if ( method )
        {
          if ( !BYTE4(method[4].return_type) )
          {
            BattlePerformanceCommandCard__setFirstAura(
              _4__this,
              (BattleCommandComponent_o *)method,
              _4__this->fields.firstAuraType,
              v3);
            commandCompArray = _4__this->fields.commandCompArray;
          }
          ++v38;
          if ( commandCompArray )
            continue;
        }
        goto LABEL_37;
      }
      perf = _4__this->fields.perf;
      if ( perf )
      {
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)perf->fields.data;
        if ( this )
        {
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)this, v4->fields.type, 0LL);
          if ( FirstBonusCriticalRate >= 10 )
          {
            v44 = FirstBonusCriticalRate;
            v45 = (System_Object_array *)_4__this->fields.commandCompArray;
            v46 = BattlePerformanceCommandCard___c_TypeInfo;
            if ( !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
              v46 = BattlePerformanceCommandCard___c_TypeInfo;
            }
            _9__119_0 = (System_Func_object__bool__o *)v46->static_fields->__9__119_0;
            if ( !_9__119_0 )
            {
              if ( !v46->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v46);
                v46 = BattlePerformanceCommandCard___c_TypeInfo;
              }
              v48 = (Il2CppObject *)v46->static_fields->__9;
              _9__119_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                           System_Func_BattleCommandComponent__bool__TypeInfo,
                                                           v42,
                                                           v43);
              System_Func_object__bool____ctor(
                _9__119_0,
                v48,
                Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__,
                0LL);
              v49 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              v49->__9__119_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__119_0;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->__9__119_0, (int32_t)_9__119_0, v50, v51);
            }
            object = BasicHelper__Find_object_(
                       v45,
                       (System_Func_T__bool__o *)_9__119_0,
                       (const MethodInfo_2E2543C *)Method_BasicHelper_Find_BattleCommandComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0LL, 0LL) )
              BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, v44 / 10, 0, v53);
          }
          return 0;
        }
      }
    }
LABEL_37:
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePerformanceCommandCard__coStartFirstBonus_d__119_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  int32_t v3; // w3
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v4; // x19
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
  __int64 v22; // x1
  __int64 v23; // x1
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  System_Collections_Generic_List_object__o *v26; // x22
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o **v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_Object_o *npGaugeLightTargetRoot; // x22
  MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  UnityEngine_Transform_o *v33; // x22
  float CARD_ROOT_BASE_X; // s8
  float CARD_ROOT_BASE_Y; // s9
  float v36; // s0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v38; // x26
  il2cpp_array_size_t max_length; // w9
  __int64 v40; // x8
  struct BattleCommandData_array *commandlist; // x9
  unsigned __int64 v42; // x10
  struct BattleCommandComponent_array *commandCompArray; // x8
  il2cpp_array_size_t v44; // w25
  BattleCommandComponent_o **v45; // x8
  BattleCommandComponent_o *v46; // x22
  int32_t v47; // w3
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 _2__current_low; // x10
  __int64 v51; // x8
  const MethodInfo *v52; // x2
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v54; // x0
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_GameObject_o *Object_37994916; // x23
  int32_t v57; // w2
  int32_t v58; // w3
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v59; // x24
  int32_t v60; // w2
  int32_t v61; // w3
  struct UnityEngine_Transform_array *npGaugeLightTarget; // x8
  struct System_Collections_Generic_List_BattleCommandComponent__o *v63; // x25
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w2
  int32_t v67; // w3
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v68; // x25
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w2
  int32_t v72; // w3
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v73; // x25
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w2
  int32_t v77; // w3
  BattlePerformanceCommandCard__colOpenNpCard_d__180_o *v78; // x25
  System_Collections_Hashtable_o *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  _BOOL8 v82; // x0
  struct System_Collections_Generic_List_BattleCommandComponent__o *v83; // x8
  ServantStatusBattleListViewItem_o *p_flglist_5__2; // x19
  struct System_Collections_Generic_List_BattleCommandComponent__o *flglist_5__2; // t1
  int32_t size; // w2
  int v87; // w9
  const MethodInfo *v88; // x1
  bool result; // w0
  __int64 v90; // x1
  __int64 v91; // x2
  float npCardDispDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v93; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v95; // w2
  int32_t v96; // w3
  float npCardEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v98; // x20
  ServantStatusBattleListViewItem_o *v99; // x19
  int32_t v100; // w2
  int32_t v101; // w3
  __int64 v102; // x0
  float npGaugeEffectMoveTime; // [xsp+Ch] [xbp-94h] BYREF
  float npGaugeEffectMoveDelayTime; // [xsp+10h] [xbp-90h] BYREF
  int32_t npGaugeEaseType; // [xsp+14h] [xbp-8Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49FE15C & 1) == 0 )
  {
    sub_1B640C8(&iTween_EaseType_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandComponent__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandComponent__Clear__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleCommandComponent___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_BattleCommandComponent__TypeInfo, v12);
    sub_1B640C8(&object___TypeInfo, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&float_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v17);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v18);
    sub_1B640C8(&StringLiteral_18826/*"effect/ef_noblegauge01"*/, v19);
    sub_1B640C8(&StringLiteral_18479/*"delay"*/, v20);
    sub_1B640C8(&StringLiteral_18827/*"effect/ef_noblegauge02"*/, v21);
    sub_1B640C8(&StringLiteral_22482/*"position"*/, v22);
    this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1B640C8(&iTween_TypeInfo, v23);
    byte_49FE15C = 1;
  }
  memset(&v106, 0, sizeof(v106));
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    flglist_5__2 = v4->fields._flglist_5__2;
    p_flglist_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._flglist_5__2;
    v83 = flglist_5__2;
    *(_DWORD *)&p_flglist_5__2[-1].fields.isEnabled = -1;
    if ( !flglist_5__2 )
      goto LABEL_71;
    size = v83->fields._size;
    v87 = v83->fields._version + 1;
    v83->fields._size = 0;
    v83->fields._version = v87;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v83->fields._items, 0, size, 0LL);
    p_flglist_5__2->klass = 0LL;
    sub_1B6406C(p_flglist_5__2, 0, size, v3);
    if ( !_4__this )
      goto LABEL_71;
    BattlePerformanceCommandCard__giveoutNobleCard(_4__this, v88);
    return 0;
  }
  if ( _1__state == 1 )
  {
    this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)v4->fields._flglist_5__2;
    v4->fields.__1__state = -1;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v106,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__);
      while ( 1 )
      {
        v82 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v106,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__);
        if ( !v82 )
          break;
        if ( !v106.fields._current )
          sub_1B64324(v82);
        if ( !BYTE4(v106.fields._current[24].monitor) )
          BattleCommandComponent__playOpenNobleCard((BattleCommandComponent_o *)v106.fields._current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v106,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__);
      if ( _4__this )
      {
        npCardDispDelayTime = _4__this->fields.npCardDispDelayTime;
        v93 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v90, v91);
        UnityEngine_WaitForSeconds___ctor(v93, npCardDispDelayTime, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v93;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)v93, v95, v96);
        *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
        return 1;
      }
    }
    goto LABEL_71;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleCommandComponent__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleCommandComponent___ctor__);
  v4->fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v26;
  v27 = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o **)&v4->fields._flglist_5__2;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._flglist_5__2, (int32_t)v26, v28, v29);
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
    v33 = _4__this->fields.npGaugeLightTargetRoot;
    CARD_ROOT_BASE_X = _4__this->fields.CARD_ROOT_BASE_X;
    CARD_ROOT_BASE_Y = _4__this->fields.CARD_ROOT_BASE_Y;
    v36 = BattlePerformanceCommandCard__FSCardRootOffsetY((BattlePerformanceCommandCard_o *)this, v31);
    if ( !v33 )
      goto LABEL_71;
    v107.fields.y = CARD_ROOT_BASE_Y + v36;
    v107.fields.z = 0.0;
    v107.fields.x = CARD_ROOT_BASE_X;
    UnityEngine_Transform__set_localPosition(v33, v107, 0LL);
  }
  p_commandlist = _4__this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_71:
    sub_1B64324(this);
  v38 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v40 = v38 - 4;
    if ( v38 - 4 >= (int)(max_length - 1) )
      break;
    commandlist = _4__this->fields.commandlist;
    if ( !commandlist )
      goto LABEL_71;
    v42 = commandlist->max_length;
    if ( v40 < (int)v42 )
    {
      if ( v40 >= v42 )
        goto LABEL_87;
      v31 = (MethodInfo *)*((_QWORD *)&commandlist->obj.klass + v38);
      if ( v31 )
      {
        this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)BattlePerformanceCommandCard__GetServantNumber(
                                                                         _4__this,
                                                                         (BattleCommandData_o *)v31,
                                                                         v32);
        commandCompArray = _4__this->fields.commandCompArray;
        if ( !commandCompArray )
          goto LABEL_71;
        v44 = (unsigned int)this;
        if ( (int)this + 5 >= commandCompArray->max_length )
          goto LABEL_87;
        v45 = &commandCompArray->m_Items[(int)this + 1];
        v46 = v45[4];
        if ( !v46 )
          goto LABEL_71;
        this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)BattleCommandComponent__checkObject(v45[4], 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = *v27;
          if ( !*v27 )
            goto LABEL_71;
          v48 = *(_QWORD *)&this->fields.__1__state;
          v49 = Method_System_Collections_Generic_List_BattleCommandComponent__Add__;
          ++HIDWORD(this->fields.__2__current);
          if ( !v48 )
            goto LABEL_71;
          _2__current_low = SLODWORD(this->fields.__2__current);
          if ( (unsigned int)_2__current_low >= *(_DWORD *)(v48 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v46,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = v48 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v51 + 32) = v46;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 32), (int32_t)v46, (int32_t)v32, v47);
          }
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)BattlePerformanceCommandCard__GetStatusUiObj(
                                                                           _4__this,
                                                                           v46->fields.data,
                                                                           v52);
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
          v54 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          BaseMonoBehaviour__createObject_37994916(
            (BaseMonoBehaviour_o *)_4__this,
            (System_String_o *)StringLiteral_18826/*"effect/ef_noblegauge01"*/,
            v54,
            transform,
            0LL);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)_4__this,
                                                                           0LL);
          if ( !this )
            goto LABEL_71;
          v55 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          Object_37994916 = BaseMonoBehaviour__createObject_37994916(
                              (BaseMonoBehaviour_o *)_4__this,
                              (System_String_o *)StringLiteral_18827/*"effect/ef_noblegauge02"*/,
                              v55,
                              transform,
                              0LL);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1B64170(object___TypeInfo, 8LL);
          if ( !this )
            goto LABEL_71;
          v59 = this;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_22482/*"position"*/;
          if ( StringLiteral_22482/*"position"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1B64204(
                                                                             StringLiteral_22482/*"position"*/,
                                                                             v59->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            v31 = (MethodInfo *)StringLiteral_22482/*"position"*/;
          }
          else
          {
            v31 = 0LL;
          }
          if ( !LODWORD(v59->fields.__2__current) )
            goto LABEL_87;
          v59->fields.__4__this = (struct BattlePerformanceCommandCard_o *)v31;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v59->fields.__4__this, (int32_t)v31, v57, v58);
          npGaugeLightTarget = _4__this->fields.npGaugeLightTarget;
          if ( !npGaugeLightTarget )
            goto LABEL_71;
          if ( v44 >= npGaugeLightTarget->max_length )
            goto LABEL_87;
          v63 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)npGaugeLightTarget->m_Items[v44];
          if ( v63 )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1B64204(
                                                                             v63,
                                                                             v59->klass->_1.element_class);
            if ( !this )
            {
LABEL_89:
              v102 = sub_1B64348(this);
              sub_1B641F0(v102, 0LL);
            }
          }
          if ( LODWORD(v59->fields.__2__current) <= 1 )
            goto LABEL_87;
          v59->fields._flglist_5__2 = v63;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v59->fields._flglist_5__2, (int32_t)v63, v60, v61);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_18682/*"easetype"*/;
          if ( StringLiteral_18682/*"easetype"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1B64204(
                                                                             StringLiteral_18682/*"easetype"*/,
                                                                             v59->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            v31 = (MethodInfo *)StringLiteral_18682/*"easetype"*/;
          }
          else
          {
            v31 = 0LL;
          }
          if ( LODWORD(v59->fields.__2__current) <= 2 )
            goto LABEL_87;
          v59[1].klass = (BattlePerformanceCommandCard__colOpenNpCard_d__180_c *)v31;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v59[1], (int32_t)v31, v64, v65);
          npGaugeEaseType = _4__this->fields.npGaugeEaseType;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)j_il2cpp_value_box_0(
                                                                           iTween_EaseType_TypeInfo,
                                                                           &npGaugeEaseType);
          v68 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1B64204(
                                                                             this,
                                                                             v59->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
          }
          if ( LODWORD(v59->fields.__2__current) <= 3 )
            goto LABEL_87;
          v59[1].monitor = v68;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v59[1].monitor, (int32_t)v68, v66, v67);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_18479/*"delay"*/;
          if ( StringLiteral_18479/*"delay"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1B64204(
                                                                             StringLiteral_18479/*"delay"*/,
                                                                             v59->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            v31 = (MethodInfo *)StringLiteral_18479/*"delay"*/;
          }
          else
          {
            v31 = 0LL;
          }
          if ( LODWORD(v59->fields.__2__current) <= 4 )
            goto LABEL_87;
          *(_QWORD *)&v59[1].fields.__1__state = v31;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v59[1].fields, (int32_t)v31, v69, v70);
          npGaugeEffectMoveDelayTime = _4__this->fields.npGaugeEffectMoveDelayTime;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)j_il2cpp_value_box_0(
                                                                           float_TypeInfo,
                                                                           &npGaugeEffectMoveDelayTime);
          v73 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1B64204(
                                                                             this,
                                                                             v59->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
          }
          if ( LODWORD(v59->fields.__2__current) <= 5 )
            goto LABEL_87;
          v59[1].fields.__2__current = (Il2CppObject *)v73;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v59[1].fields.__2__current, (int32_t)v73, v71, v72);
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)StringLiteral_23830/*"time"*/;
          if ( StringLiteral_23830/*"time"*/ )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1B64204(
                                                                             StringLiteral_23830/*"time"*/,
                                                                             v59->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
            v31 = (MethodInfo *)StringLiteral_23830/*"time"*/;
          }
          else
          {
            v31 = 0LL;
          }
          if ( LODWORD(v59->fields.__2__current) <= 6 )
LABEL_87:
            sub_1B6432C(this, v31);
          v59[1].fields.__4__this = (struct BattlePerformanceCommandCard_o *)v31;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v59[1].fields.__4__this, (int32_t)v31, v74, v75);
          npGaugeEffectMoveTime = _4__this->fields.npGaugeEffectMoveTime;
          this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)j_il2cpp_value_box_0(
                                                                           float_TypeInfo,
                                                                           &npGaugeEffectMoveTime);
          v78 = this;
          if ( this )
          {
            this = (BattlePerformanceCommandCard__colOpenNpCard_d__180_o *)sub_1B64204(
                                                                             this,
                                                                             v59->klass->_1.element_class);
            if ( !this )
              goto LABEL_89;
          }
          if ( LODWORD(v59->fields.__2__current) <= 7 )
            goto LABEL_87;
          v59[1].fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v78;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v59[1].fields._flglist_5__2, (int32_t)v78, v76, v77);
          if ( !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          v79 = iTween__Hash((System_Object_array *)v59, 0LL);
          iTween__MoveTo_59912984(Object_37994916, v79, 0LL);
          v46->fields.nobleGaugeEffect = Object_37994916;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v46->fields.nobleGaugeEffect,
            (int32_t)Object_37994916,
            v80,
            v81);
        }
      }
    }
    p_commandlist = _4__this->fields.p_commandlist;
    ++v38;
    if ( !p_commandlist )
      goto LABEL_71;
  }
  npCardEffectDelayTime = _4__this->fields.npCardEffectDelayTime;
  v98 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v31, v32);
  UnityEngine_WaitForSeconds___ctor(v98, npCardEffectDelayTime, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v98;
  v99 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(v99, (int32_t)v98, v100, v101);
  result = 1;
  *(_DWORD *)&v99[-1].fields.isMine = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePerformanceCommandCard__colOpenNpCard_d__180_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  const MethodInfo *v2; // x4
  BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *v3; // x19
  __int64 v4; // x1
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  const MethodInfo *v6; // x2
  BattleComboData_o *combo; // x1
  UnityEngine_Object_o *v8; // x21
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  int32_t v11; // w3
  DefCoroutine_c *v12; // x0
  Il2CppObject *milliSecNine; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  int32_t v16; // w2
  int32_t v17; // w3
  struct BattleComboData_o *v18; // x8
  int32_t samecount; // w20
  DefCoroutine_c *v20; // x0
  struct DefCoroutine_StaticFields *static_fields; // x8
  Il2CppObject *milliSecThree; // x1
  ServantStatusBattleListViewItem_o *v23; // x19
  int v24; // w8
  int32_t v25; // w2
  int32_t v26; // w3
  DefCoroutine_c *v27; // x0
  Il2CppObject *milliSecTwo; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  DefCoroutine_c *v34; // x0
  Il2CppObject *milliSecFour; // x1
  const MethodInfo *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  DefCoroutine_c *v39; // x0
  Il2CppObject *v40; // x1
  Il2CppObject *milliSecEleven; // x1
  int32_t seName; // [xsp+4h] [xbp-2Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_49FE15E & 1) == 0 )
  {
    sub_1B640C8(&DefCoroutine_TypeInfo, method);
    this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FE15E = 1;
  }
  prefab = 0LL;
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      prefab = 0LL;
      seName = -1;
      if ( !_4__this )
        goto LABEL_46;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, v3->fields.combo, &prefab, &seName, v2);
      v8 = (UnityEngine_Object_o *)prefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
        goto LABEL_18;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, v9);
      v12 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v12 = DefCoroutine_TypeInfo;
      }
      milliSecNine = (Il2CppObject *)v12->static_fields->milliSecNine;
      v3->fields.__2__current = milliSecNine;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)milliSecNine, v10, v11);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v3->fields.__1__state = -1;
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
      combo = v3->fields.combo;
      if ( !combo )
        goto LABEL_46;
      if ( combo->fields.flash )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, combo, v6);
        v18 = v3->fields.combo;
        if ( !v18 )
LABEL_46:
          sub_1B64324(this);
        samecount = v18->fields.samecount;
        v20 = DefCoroutine_TypeInfo;
        if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v20 = DefCoroutine_TypeInfo;
        }
        static_fields = v20->static_fields;
        if ( samecount == 3 )
        {
          milliSecThree = (Il2CppObject *)static_fields->milliSecThree;
          v3->fields.__2__current = milliSecThree;
          v23 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
          sub_1B6406C(v23, (int32_t)milliSecThree, v16, v17);
          v24 = 2;
        }
        else
        {
          milliSecEleven = (Il2CppObject *)static_fields->milliSecEleven;
          v3->fields.__2__current = milliSecEleven;
          v23 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
          sub_1B6406C(v23, (int32_t)milliSecEleven, v16, v17);
          v24 = 3;
        }
      }
      else
      {
LABEL_26:
        if ( combo->fields.samecount != 3 )
          return 0;
        BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, combo, v6);
        v27 = DefCoroutine_TypeInfo;
        if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v27 = DefCoroutine_TypeInfo;
        }
        milliSecTwo = (Il2CppObject *)v27->static_fields->milliSecTwo;
        v3->fields.__2__current = milliSecTwo;
        v23 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
        sub_1B6406C(v23, (int32_t)milliSecTwo, v25, v26);
        v24 = 4;
      }
LABEL_45:
      *(_DWORD *)&v23[-1].fields.isMine = v24;
      return 1;
    case 2:
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      combo = v3->fields.combo;
      if ( !combo )
        goto LABEL_46;
      goto LABEL_26;
    case 4:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, v29);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, v30);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.4, v31);
      v34 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v34 = DefCoroutine_TypeInfo;
      }
      milliSecFour = (Il2CppObject *)v34->static_fields->milliSecFour;
      v3->fields.__2__current = milliSecFour;
      v23 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(v23, (int32_t)milliSecFour, v32, v33);
      v24 = 5;
      goto LABEL_45;
    case 5:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_46;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_46;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, v36);
      v39 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v39 = DefCoroutine_TypeInfo;
      }
      v40 = (Il2CppObject *)v39->static_fields->milliSecEleven;
      v3->fields.__2__current = v40;
      v23 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(v23, (int32_t)v40, v37, v38);
      v24 = 6;
      goto LABEL_45;
    case 6:
      v3->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePerformanceCommandCard__showComboEffectNormal_d__135_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  const MethodInfo *v2; // x4
  BattlePerformanceCommandCard__showComboEffectShort_d__134_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  const MethodInfo *v11; // x2
  BattleComboData_o *combo; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct BattleComboData_o *v15; // x8
  int32_t samecount; // w20
  DefCoroutine_c *v17; // x0
  struct DefCoroutine_StaticFields *v18; // x8
  Il2CppObject *milliSecThreeSixSix; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int v21; // w8
  Il2CppObject *milliSecEightSixSix; // x1
  System_Collections_Generic_IEnumerable_TSource__o *selectedcomponents; // x21
  BattlePerformanceCommandCard___c_c *v24; // x0
  System_Func_object__bool__o *_9__134_0; // x22
  Il2CppObject *v26; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x0
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  int32_t v35; // w3
  bool isExtraAttack; // w20
  DefCoroutine_c *v37; // x8
  struct DefCoroutine_StaticFields *v38; // x8
  __int64 v39; // x9
  Il2CppObject *v40; // x1
  UnityEngine_Object_o *v41; // x21
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  int32_t v44; // w3
  DefCoroutine_c *v45; // x8
  uint32_t cctor_finished; // w9
  Il2CppObject *v47; // x1
  ServantStatusBattleListViewItem_o *v48; // x19
  bool result; // w0
  int32_t v50; // w2
  int32_t v51; // w3
  DefCoroutine_c *v52; // x0
  Il2CppObject *milliSecTwo; // x1
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  DefCoroutine_c *v59; // x0
  Il2CppObject *v60; // x1
  const MethodInfo *v61; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  struct BattleComboData_o *v64; // x8
  _BOOL4 flash; // w20
  DefCoroutine_c *v66; // x0
  struct DefCoroutine_StaticFields *v67; // x8
  Il2CppObject *milliSecFour; // x1
  Il2CppObject *v69; // x1
  DefCoroutine_c *v70; // x0
  Il2CppObject *milliSecNine; // x1
  DefCoroutine_c *v72; // x0
  Il2CppObject *milliSecThreeThreeThree; // x1
  Il2CppObject *v74; // x1
  int v75; // w20
  DefCoroutine_c *v76; // x8
  struct DefCoroutine_StaticFields *static_fields; // x8
  Il2CppObject *milliSecTwoSixSix; // x1
  Il2CppObject *milliSecThree; // x1
  int32_t seName; // [xsp+4h] [xbp-4Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_49FE15F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_BattleCommandComponent___, method);
    sub_1B640C8(&DefCoroutine_TypeInfo, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___, v5);
    sub_1B640C8(&System_Func_BattleCommandComponent__bool__TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__, v8);
    this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)sub_1B640C8(
                                                                            &BattlePerformanceCommandCard___c_TypeInfo,
                                                                            v9);
    byte_49FE15F = 1;
  }
  prefab = 0LL;
  seName = 0;
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      prefab = 0LL;
      seName = -1;
      if ( !_4__this )
        goto LABEL_90;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, v3->fields.combo, &prefab, &seName, v2);
      v41 = (UnityEngine_Object_o *)prefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
        goto LABEL_7;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, v42);
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v3->fields.combo;
      if ( !this )
        goto LABEL_90;
      if ( !BattleComboData__AchieveAnyChain((BattleComboData_o *)this, 0LL) )
      {
        v70 = DefCoroutine_TypeInfo;
        if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v70 = DefCoroutine_TypeInfo;
        }
        milliSecNine = (Il2CppObject *)v70->static_fields->milliSecNine;
        v3->fields.__2__current = milliSecNine;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)milliSecNine, v43, v44);
        v21 = 6;
        goto LABEL_89;
      }
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v3->fields.combo;
      if ( !this )
        goto LABEL_90;
      if ( !LOBYTE(this->fields.__1__state) )
      {
        if ( !BYTE1(this->fields.__1__state) )
          goto LABEL_84;
        if ( BattleComboData__isExtraAttack((BattleComboData_o *)this, 0LL) )
        {
          v72 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v72 = DefCoroutine_TypeInfo;
          }
          milliSecThreeThreeThree = (Il2CppObject *)v72->static_fields->milliSecThreeThreeThree;
          v3->fields.__2__current = milliSecThreeThreeThree;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)milliSecThreeThreeThree, v43, v44);
          v21 = 3;
          goto LABEL_89;
        }
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v3->fields.combo;
        if ( this )
        {
LABEL_84:
          v75 = BYTE1(this->fields.__1__state);
          v76 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v76 = DefCoroutine_TypeInfo;
          }
          static_fields = v76->static_fields;
          if ( v75 )
          {
            milliSecTwoSixSix = (Il2CppObject *)static_fields->milliSecTwoSixSix;
            v3->fields.__2__current = milliSecTwoSixSix;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)milliSecTwoSixSix, v43, v44);
            v21 = 4;
          }
          else
          {
            milliSecThree = (Il2CppObject *)static_fields->milliSecThree;
            v3->fields.__2__current = milliSecThree;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)milliSecThree, v43, v44);
            v21 = 5;
          }
          goto LABEL_89;
        }
LABEL_90:
        sub_1B64324(this);
      }
      v45 = DefCoroutine_TypeInfo;
      cctor_finished = DefCoroutine_TypeInfo->_2.cctor_finished;
      if ( *(&this->fields.__1__state + 1) != 3 )
      {
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v45 = DefCoroutine_TypeInfo;
        }
        v74 = (Il2CppObject *)v45->static_fields->milliSecTwoSixSix;
        v3->fields.__2__current = v74;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)v74, v43, v44);
        v21 = 2;
LABEL_89:
        *(_DWORD *)&p__2__current[-1].fields.isMine = v21;
        return 1;
      }
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v45 = DefCoroutine_TypeInfo;
      }
      v47 = (Il2CppObject *)v45->static_fields->milliSecThreeThreeThree;
      v3->fields.__2__current = v47;
      v48 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(v48, (int32_t)v47, v43, v44);
      result = 1;
      *(_DWORD *)&v48[-1].fields.isMine = 1;
      return result;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      v3->fields.__1__state = -1;
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
      combo = v3->fields.combo;
      if ( !combo )
        goto LABEL_90;
      if ( combo->fields.flash )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, combo, v11);
        v15 = v3->fields.combo;
        if ( v15 )
        {
          samecount = v15->fields.samecount;
          v17 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v17 = DefCoroutine_TypeInfo;
          }
          v18 = v17->static_fields;
          if ( samecount == 3 )
          {
            milliSecThreeSixSix = (Il2CppObject *)v18->milliSecThreeSixSix;
            v3->fields.__2__current = milliSecThreeSixSix;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)milliSecThreeSixSix, v13, v14);
            v21 = 7;
          }
          else
          {
            milliSecEightSixSix = (Il2CppObject *)v18->milliSecEightSixSix;
            v3->fields.__2__current = milliSecEightSixSix;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)milliSecEightSixSix, v13, v14);
            v21 = 8;
          }
          goto LABEL_89;
        }
      }
      else
      {
LABEL_19:
        if ( !combo->fields.isMighty )
        {
LABEL_54:
          if ( combo->fields.samecount != 3 )
            return 0;
          BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, combo, v11);
          v52 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v52 = DefCoroutine_TypeInfo;
          }
          milliSecTwo = (Il2CppObject *)v52->static_fields->milliSecTwo;
          v3->fields.__2__current = milliSecTwo;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)milliSecTwo, v50, v51);
          v21 = 10;
          goto LABEL_89;
        }
        selectedcomponents = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents;
        v24 = BattlePerformanceCommandCard___c_TypeInfo;
        if ( !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
          v24 = BattlePerformanceCommandCard___c_TypeInfo;
        }
        _9__134_0 = (System_Func_object__bool__o *)v24->static_fields->__9__134_0;
        if ( !_9__134_0 )
        {
          if ( !v24->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v24 = BattlePerformanceCommandCard___c_TypeInfo;
          }
          v26 = (Il2CppObject *)v24->static_fields->__9;
          _9__134_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                       System_Func_BattleCommandComponent__bool__TypeInfo,
                                                       combo,
                                                       v11);
          System_Func_object__bool____ctor(
            _9__134_0,
            v26,
            Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__,
            0LL);
          v27 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          v27->__9__134_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__134_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->__9__134_0, (int32_t)_9__134_0, v28, v29);
        }
        v30 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
                selectedcomponents,
                (System_Func_TSource__bool__o *)_9__134_0,
                (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___);
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)System_Array__IndexOf_object_(
                                                                                (System_Object_array *)_4__this->fields.selectedcomponents,
                                                                                v30,
                                                                                (const MethodInfo_2F32000 *)Method_System_Array_IndexOf_BattleCommandComponent___);
        if ( (int)this >= 1 )
        {
          perf = _4__this->fields.perf;
          if ( !perf )
            goto LABEL_90;
          this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)perf->fields.data;
          if ( !this )
            goto LABEL_90;
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)this, 3, 0LL);
          BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, FirstBonusCriticalRate / 10, 1, v33);
        }
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v3->fields.combo;
        if ( this )
        {
          isExtraAttack = BattleComboData__isExtraAttack((BattleComboData_o *)this, 0LL);
          v37 = DefCoroutine_TypeInfo;
          if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v37 = DefCoroutine_TypeInfo;
          }
          v38 = v37->static_fields;
          v39 = 12LL;
          if ( isExtraAttack )
            v39 = 6LL;
          v40 = (Il2CppObject *)(&v38->milliSecPointOne)[v39];
          v3->fields.__2__current = v40;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)v40, v34, v35);
          v21 = 9;
          goto LABEL_89;
        }
      }
      goto LABEL_90;
    case 7:
    case 8:
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
        if ( this )
        {
          BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
          combo = v3->fields.combo;
          if ( combo )
            goto LABEL_19;
        }
      }
      goto LABEL_90;
    case 9:
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
        if ( this )
        {
          BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
          combo = v3->fields.combo;
          if ( combo )
            goto LABEL_54;
        }
      }
      goto LABEL_90;
    case 0xA:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_90;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, v54);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, v55);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.3, v56);
      v59 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v59 = DefCoroutine_TypeInfo;
      }
      v60 = (Il2CppObject *)v59->static_fields->milliSecTwoSixSix;
      v3->fields.__2__current = v60;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v60, v57, v58);
      v21 = 11;
      goto LABEL_89;
    case 0xB:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_90;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, v61);
      v64 = v3->fields.combo;
      if ( !v64 )
        goto LABEL_90;
      flash = v64->fields.flash;
      v66 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v66 = DefCoroutine_TypeInfo;
      }
      v67 = v66->static_fields;
      if ( flash )
      {
        milliSecFour = (Il2CppObject *)v67->milliSecFour;
        v3->fields.__2__current = milliSecFour;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)milliSecFour, v62, v63);
        v21 = 13;
      }
      else
      {
        v69 = (Il2CppObject *)v67->milliSecThreeThreeThree;
        v3->fields.__2__current = v69;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)v69, v62, v63);
        v21 = 12;
      }
      goto LABEL_89;
    case 0xC:
    case 0xD:
      v3->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePerformanceCommandCard__showComboEffectShort_d__134_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  BattlePerformanceCommandCard__showComboEffect_d__133_o *v4; // x19
  __int64 v5; // x1
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  DefCoroutine_c *v7; // x0
  Il2CppObject *milliSecOne; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int v10; // w8
  UnityEngine_Object_o *chainBonusObject; // x21
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t CommandType; // w0
  const MethodInfo *v17; // x2
  int32_t v18; // w3
  struct BattleCommandComponent_array *v19; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_IEnumerator_o *v21; // x0
  UnityEngine_Coroutine_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_IEnumerator_o *v25; // x0
  UnityEngine_Coroutine_o *started; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  bool result; // w0
  DefCoroutine_c *v30; // x0
  Il2CppObject *milliSecFour; // x1
  ServantStatusBattleListViewItem_o *v32; // x19
  UnityEngine_Color_o v33; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v4 = this;
  if ( (byte_49FE15D & 1) == 0 )
  {
    sub_1B640C8(&DefCoroutine_TypeInfo, method);
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FE15D = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      chainBonusObject = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)UnityEngine_Object__op_Inequality(
                                                                         chainBonusObject,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v13 = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(v13, 0LL);
      }
      v14 = 4LL;
      break;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      v25 = BattlePerformanceCommandCard__showComboEffectNormal(_4__this, v4->fields.combo, v2);
      started = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, v25, 0LL);
      v4->fields.__2__current = (Il2CppObject *)started;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)started, v27, v28);
      v10 = 2;
      goto LABEL_30;
    case 2:
    case 3:
      v4->fields.__1__state = -1;
      v7 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v7 = DefCoroutine_TypeInfo;
      }
      milliSecOne = (Il2CppObject *)v7->static_fields->milliSecOne;
      v4->fields.__2__current = milliSecOne;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)milliSecOne, (int32_t)v2, v3);
      v10 = 4;
      goto LABEL_30;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_39;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)_4__this->fields.commandfsm;
      if ( !this )
        goto LABEL_39;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v4->fields.endproc, 0LL);
      return 0;
    default:
      return 0;
  }
  do
  {
    selectedcomponents = _4__this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_39;
    if ( v14 - 4 >= (unsigned __int64)selectedcomponents->max_length )
      goto LABEL_40;
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)*((_QWORD *)&selectedcomponents->obj.klass + v14);
    if ( !this )
      goto LABEL_39;
    CommandType = BattleCommandComponent__getCommandType((BattleCommandComponent_o *)this, 0LL);
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)BattleCommand__isBLANK(CommandType, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v19 = _4__this->fields.selectedcomponents;
      if ( !v19 )
        goto LABEL_39;
      if ( v14 - 4 >= (unsigned __int64)v19->max_length )
LABEL_40:
        sub_1B6432C(this, v12);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)*((_QWORD *)&v19->obj.klass + v14);
      if ( !this )
        goto LABEL_39;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v33.fields.r = 0.0;
      v33.fields.g = 0.0;
      v33.fields.b = 0.0;
      v33.fields.a = 0.0;
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)TweenColor__Begin(gameObject, 0.2, v33, 0LL);
    }
    ++v14;
  }
  while ( v14 != 7 );
  this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v4->fields.combo;
  if ( !this )
LABEL_39:
    sub_1B64324(this);
  if ( BYTE2(this->fields.__1__state) || !BattleComboData__AchieveAnyChain((BattleComboData_o *)this, 0LL) )
  {
    v30 = DefCoroutine_TypeInfo;
    if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v30 = DefCoroutine_TypeInfo;
    }
    milliSecFour = (Il2CppObject *)v30->static_fields->milliSecFour;
    v4->fields.__2__current = milliSecFour;
    v32 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(v32, (int32_t)milliSecFour, (int32_t)v17, v18);
    result = 1;
    *(_DWORD *)&v32[-1].fields.isMine = 1;
  }
  else
  {
    v21 = BattlePerformanceCommandCard__showComboEffectShort(_4__this, v4->fields.combo, v17);
    v22 = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, v21, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v22;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(p__2__current, (int32_t)v22, v23, v24);
    v10 = 3;
LABEL_30:
    *(_DWORD *)&p__2__current[-1].fields.isMine = v10;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePerformanceCommandCard__showComboEffect_d__133_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v2; // w2
  int32_t v3; // w3
  BattlePerformanceCommandCard__waitFallStar_d__97_o *v4; // x19
  int32_t _1__state; // w8
  BattlePerformanceCommandCard_o *_4__this; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  il2cpp_array_size_t v8; // w21
  il2cpp_array_size_t max_length; // w9
  int32_t v10; // w2
  int32_t v11; // w3
  DefCoroutine_c *v12; // x0
  Il2CppObject *milliSecFive; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  DefCoroutine_c *v16; // x0
  Il2CppObject *milliSecThree; // x1
  ServantStatusBattleListViewItem_o *v18; // x19

  v4 = this;
  if ( (byte_49FE2B9 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)sub_1B640C8(&DefCoroutine_TypeInfo, method);
    byte_49FE2B9 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    BattlePerformanceCommandCard__StartCountupCommandStar(_4__this, 1, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    if ( BattlePerformanceCommandCard__fallStar(_4__this, 0LL) )
    {
      v12 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v12 = DefCoroutine_TypeInfo;
      }
      milliSecFive = (Il2CppObject *)v12->static_fields->milliSecFive;
      v4->fields.__2__current = milliSecFive;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)milliSecFive, v10, v11);
      *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
      return 1;
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this || (commandCompArray = _4__this->fields.commandCompArray) == 0LL )
LABEL_13:
    sub_1B64324(this);
  v8 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v8 >= (int)max_length )
      break;
    if ( v8 >= max_length )
      sub_1B6432C(this, method);
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)commandCompArray->m_Items[v8];
    if ( this )
    {
      BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)this, 0, 0LL);
      commandCompArray = _4__this->fields.commandCompArray;
      ++v8;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
  v16 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v16 = DefCoroutine_TypeInfo;
  }
  milliSecThree = (Il2CppObject *)v16->static_fields->milliSecThree;
  v4->fields.__2__current = milliSecThree;
  v18 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(v18, (int32_t)milliSecThree, v2, v3);
  result = 1;
  *(_DWORD *)&v18[-1].fields.isMine = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePerformanceCommandCard__waitFallStar_d__97_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v5; // w2
  int32_t v6; // w3
  float v7; // s0
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
    v7 = timer_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields._timer_5__2 = v7;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    this->fields._timer_5__2 = 0.0;
    if ( !_4__this )
LABEL_14:
      sub_1B64324(this);
    BattlePerformanceCommandCard__setAtkButtonFlg(_4__this, 0, 0LL);
    v7 = this->fields._timer_5__2;
  }
  if ( v7 >= this->fields.waittime )
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v5, v6);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePerformanceCommandCard__waitFunc_d__169_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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