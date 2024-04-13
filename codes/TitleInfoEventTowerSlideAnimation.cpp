void __fastcall TitleInfoEventTowerSlideAnimation___ctor(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTowerSlideAnimation__SetPotision(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerSlideAnimation__StartSlideAnim(
        TitleInfoEventTowerSlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v48; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Object_array *v56; // x21
  UnityEngine_GameObject_o *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x22
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  float v73; // w9
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x22
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **easeTypeOut; // x22
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x1
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x22
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x1
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x1
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **v129; // x1
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x19
  System_Collections_Hashtable_o *v137; // x0
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 v140; // [xsp+0h] [xbp-50h] BYREF
  float v141; // [xsp+8h] [xbp-48h]
  float slideOutTime; // [xsp+18h] [xbp-38h] BYREF
  char v143[4]; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_42E6C42 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)callback, (_DWORD)method, v4);
    sub_B5D5C4(&object___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&float_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_21530/*"onMoveComplete"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_18340/*"easeType"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v41, v42, v43);
    sub_B5D5C4(&iTween_TypeInfo, v44, v45, v46);
    byte_42E6C42 = 1;
  }
  this->fields.endCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_B5D5DC(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_B5D69C(transform, v48);
  }
  v56 = (System_Object_array *)transform;
  v57 = (UnityEngine_GameObject_o *)StringLiteral_20191/*"isLocal"*/;
  if ( StringLiteral_20191/*"isLocal"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_20191/*"isLocal"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
    v58 = (System_Int32_array **)StringLiteral_20191/*"isLocal"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( !v56->max_length )
    goto LABEL_59;
  v56->m_Items[0] = (Il2CppObject *)v58;
  sub_B5D560((BattleServantConfConponent_o *)v56->m_Items, v58, v50, v51, v52, v53, v54, v55);
  v143[0] = 1;
  v57 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v143);
  v65 = (System_Int32_array **)v57;
  if ( v57 )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
  }
  if ( v56->max_length <= 1 )
    goto LABEL_59;
  v56->m_Items[1] = (Il2CppObject *)v65;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[1], v65, v59, v60, v61, v62, v63, v64);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_21800/*"position"*/;
  if ( StringLiteral_21800/*"position"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21800/*"position"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
    v72 = (System_Int32_array **)StringLiteral_21800/*"position"*/;
  }
  else
  {
    v72 = 0LL;
  }
  if ( v56->max_length <= 2 )
    goto LABEL_59;
  v56->m_Items[2] = (Il2CppObject *)v72;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[2], v72, v66, v67, v68, v69, v70, v71);
  v73 = this->fields.slideOutPosition.fields.z;
  v140 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v141 = v73;
  v57 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v140);
  v80 = (System_Int32_array **)v57;
  if ( v57 )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
  }
  if ( v56->max_length <= 3 )
    goto LABEL_59;
  v56->m_Items[3] = (Il2CppObject *)v80;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[3], v80, v74, v75, v76, v77, v78, v79);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_18340/*"easeType"*/;
  if ( StringLiteral_18340/*"easeType"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_18340/*"easeType"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
    v87 = (System_Int32_array **)StringLiteral_18340/*"easeType"*/;
  }
  else
  {
    v87 = 0LL;
  }
  if ( v56->max_length <= 4 )
    goto LABEL_59;
  v56->m_Items[4] = (Il2CppObject *)v87;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[4], v87, v81, v82, v83, v84, v85, v86);
  easeTypeOut = (System_Int32_array **)this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(this->fields.easeTypeOut, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
  }
  if ( v56->max_length <= 5 )
    goto LABEL_59;
  v56->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[5], easeTypeOut, v88, v89, v90, v91, v92, v93);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
    v101 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v101 = 0LL;
  }
  if ( v56->max_length <= 6 )
    goto LABEL_59;
  v56->m_Items[6] = (Il2CppObject *)v101;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[6], v101, v95, v96, v97, v98, v99, v100);
  slideOutTime = this->fields.slideOutTime;
  v57 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v108 = (System_Int32_array **)v57;
  if ( v57 )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
  }
  if ( v56->max_length <= 7 )
    goto LABEL_59;
  v56->m_Items[7] = (Il2CppObject *)v108;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[7], v108, v102, v103, v104, v105, v106, v107);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
    v115 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v115 = 0LL;
  }
  if ( v56->max_length <= 8 )
    goto LABEL_59;
  v56->m_Items[8] = (Il2CppObject *)v115;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[8], v115, v109, v110, v111, v112, v113, v114);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_21530/*"onMoveComplete"*/;
  if ( StringLiteral_21530/*"onMoveComplete"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21530/*"onMoveComplete"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
    v122 = (System_Int32_array **)StringLiteral_21530/*"onMoveComplete"*/;
  }
  else
  {
    v122 = 0LL;
  }
  if ( v56->max_length <= 9 )
    goto LABEL_59;
  v56->m_Items[9] = (Il2CppObject *)v122;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[9], v122, v116, v117, v118, v119, v120, v121);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_21544/*"oncompletetarget"*/;
  if ( StringLiteral_21544/*"oncompletetarget"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21544/*"oncompletetarget"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_60;
    v129 = (System_Int32_array **)StringLiteral_21544/*"oncompletetarget"*/;
  }
  else
  {
    v129 = 0LL;
  }
  if ( v56->max_length <= 0xA )
    goto LABEL_59;
  v56->m_Items[10] = (Il2CppObject *)v129;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[10], v129, v123, v124, v125, v126, v127, v128);
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v136 = (System_Int32_array **)v57;
  if ( v57 )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
    {
LABEL_60:
      v139 = sub_B5D6BC();
      sub_B5D668(v139, 0LL);
    }
  }
  if ( v56->max_length <= 0xB )
  {
LABEL_59:
    v138 = sub_B5D6C8(v57);
    sub_B5D668(v138, 0LL);
  }
  v56->m_Items[11] = (Il2CppObject *)v136;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[11], v136, v130, v131, v132, v133, v134, v135);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v137 = iTween__Hash(v56, 0LL);
  iTween__MoveTo_43183064(gameObject, v137, 0LL);
}


void __fastcall TitleInfoEventTowerSlideAnimation__onAnimEnd(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_endCallback; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (BattleServantConfConponent_o *)&this->fields.endCallback;
  v9 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0LL;
    sub_B5D560(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall TitleInfoEventTowerSlideAnimation__onMoveComplete(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v48; // x1
  TitleInfoEventTower_o *Component_srcLineSprite; // x20
  System_Action_o *v50; // x21
  const MethodInfo *v51; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Object_array *v59; // x21
  UnityEngine_GameObject_o *v60; // x0
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x22
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  float z; // w9
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x22
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **easeTypeIn; // x22
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x22
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x1
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x1
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x1
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x19
  System_Collections_Hashtable_o *v140; // x0
  __int64 v141; // x0
  __int64 v142; // x0
  float slideInTime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v144; // [xsp+10h] [xbp-30h] BYREF
  float v145; // [xsp+18h] [xbp-28h]
  char v146[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E6C43 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&bool_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___, v8, v9, v10);
    sub_B5D5C4(&object___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&float_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_21506/*"onAnimEnd"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_18340/*"easeType"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v41, v42, v43);
    sub_B5D5C4(&iTween_TypeInfo, v44, v45, v46);
    byte_42E6C43 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_64;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform
    || (transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)transform,
                                                 0LL)) == 0LL
    || (Component_srcLineSprite = (TitleInfoEventTower_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)transform,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v50,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_srcLineSprite)
    || (TitleInfoEventTower__Open(Component_srcLineSprite, v50, 0LL, 0, v51),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_B5D5DC(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_64:
    sub_B5D69C(transform, v48);
  }
  v59 = (System_Object_array *)transform;
  v60 = (UnityEngine_GameObject_o *)StringLiteral_20191/*"isLocal"*/;
  if ( StringLiteral_20191/*"isLocal"*/ )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_20191/*"isLocal"*/, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
    v61 = (System_Int32_array **)StringLiteral_20191/*"isLocal"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( !v59->max_length )
    goto LABEL_62;
  v59->m_Items[0] = (Il2CppObject *)v61;
  sub_B5D560((BattleServantConfConponent_o *)v59->m_Items, v61, v53, v54, v55, v56, v57, v58);
  v146[0] = 1;
  v60 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v146);
  v68 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(v60, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
  }
  if ( v59->max_length <= 1 )
    goto LABEL_62;
  v59->m_Items[1] = (Il2CppObject *)v68;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[1], v68, v62, v63, v64, v65, v66, v67);
  v60 = (UnityEngine_GameObject_o *)StringLiteral_21800/*"position"*/;
  if ( StringLiteral_21800/*"position"*/ )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21800/*"position"*/, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
    v75 = (System_Int32_array **)StringLiteral_21800/*"position"*/;
  }
  else
  {
    v75 = 0LL;
  }
  if ( v59->max_length <= 2 )
    goto LABEL_62;
  v59->m_Items[2] = (Il2CppObject *)v75;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[2], v75, v69, v70, v71, v72, v73, v74);
  z = this->fields.slideInPosition.fields.z;
  v144 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v145 = z;
  v60 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v144);
  v83 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(v60, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
  }
  if ( v59->max_length <= 3 )
    goto LABEL_62;
  v59->m_Items[3] = (Il2CppObject *)v83;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[3], v83, v77, v78, v79, v80, v81, v82);
  v60 = (UnityEngine_GameObject_o *)StringLiteral_18340/*"easeType"*/;
  if ( StringLiteral_18340/*"easeType"*/ )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_18340/*"easeType"*/, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
    v90 = (System_Int32_array **)StringLiteral_18340/*"easeType"*/;
  }
  else
  {
    v90 = 0LL;
  }
  if ( v59->max_length <= 4 )
    goto LABEL_62;
  v59->m_Items[4] = (Il2CppObject *)v90;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[4], v90, v84, v85, v86, v87, v88, v89);
  easeTypeIn = (System_Int32_array **)this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(this->fields.easeTypeIn, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
  }
  if ( v59->max_length <= 5 )
    goto LABEL_62;
  v59->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[5], easeTypeIn, v91, v92, v93, v94, v95, v96);
  v60 = (UnityEngine_GameObject_o *)StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
    v104 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v104 = 0LL;
  }
  if ( v59->max_length <= 6 )
    goto LABEL_62;
  v59->m_Items[6] = (Il2CppObject *)v104;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[6], v104, v98, v99, v100, v101, v102, v103);
  slideInTime = this->fields.slideInTime;
  v60 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v111 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(v60, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
  }
  if ( v59->max_length <= 7 )
    goto LABEL_62;
  v59->m_Items[7] = (Il2CppObject *)v111;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[7], v111, v105, v106, v107, v108, v109, v110);
  v60 = (UnityEngine_GameObject_o *)StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
    v118 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v118 = 0LL;
  }
  if ( v59->max_length <= 8 )
    goto LABEL_62;
  v59->m_Items[8] = (Il2CppObject *)v118;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[8], v118, v112, v113, v114, v115, v116, v117);
  v60 = (UnityEngine_GameObject_o *)StringLiteral_21506/*"onAnimEnd"*/;
  if ( StringLiteral_21506/*"onAnimEnd"*/ )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21506/*"onAnimEnd"*/, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
    v125 = (System_Int32_array **)StringLiteral_21506/*"onAnimEnd"*/;
  }
  else
  {
    v125 = 0LL;
  }
  if ( v59->max_length <= 9 )
    goto LABEL_62;
  v59->m_Items[9] = (Il2CppObject *)v125;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[9], v125, v119, v120, v121, v122, v123, v124);
  v60 = (UnityEngine_GameObject_o *)StringLiteral_21544/*"oncompletetarget"*/;
  if ( StringLiteral_21544/*"oncompletetarget"*/ )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21544/*"oncompletetarget"*/, v59->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_63;
    v132 = (System_Int32_array **)StringLiteral_21544/*"oncompletetarget"*/;
  }
  else
  {
    v132 = 0LL;
  }
  if ( v59->max_length <= 0xA )
    goto LABEL_62;
  v59->m_Items[10] = (Il2CppObject *)v132;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[10], v132, v126, v127, v128, v129, v130, v131);
  v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v139 = (System_Int32_array **)v60;
  if ( v60 )
  {
    v60 = (UnityEngine_GameObject_o *)sub_B5D684(v60, v59->obj.klass->_1.element_class);
    if ( !v60 )
    {
LABEL_63:
      v142 = sub_B5D6BC();
      sub_B5D668(v142, 0LL);
    }
  }
  if ( v59->max_length <= 0xB )
  {
LABEL_62:
    v141 = sub_B5D6C8(v60);
    sub_B5D668(v141, 0LL);
  }
  v59->m_Items[11] = (Il2CppObject *)v139;
  sub_B5D560((BattleServantConfConponent_o *)&v59->m_Items[11], v139, v133, v134, v135, v136, v137, v138);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v140 = iTween__Hash(v59, 0LL);
  iTween__MoveTo_43183064(gameObject, v140, 0LL);
}