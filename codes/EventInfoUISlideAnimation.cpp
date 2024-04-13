void __fastcall EventInfoUISlideAnimation___ctor(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall EventInfoUISlideAnimation__GetSlideOutPosition(
        EventInfoUISlideAnimation_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.slideOutPosition.fields.x;
  y = this->fields.slideOutPosition.fields.y;
  z = this->fields.slideOutPosition.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__SetAfterActionAndInPosition(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct System_Action_o **p_endCallback; // x19
  float z; // s8
  float y; // s9
  float x; // s10

  this->fields.endCallback = callback;
  p_endCallback = &this->fields.endCallback;
  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  *((float *)p_endCallback - 3) = x;
  *((float *)p_endCallback - 2) = y;
  *((float *)p_endCallback - 1) = z;
}


void __fastcall EventInfoUISlideAnimation__SetPotision(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
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
void __fastcall EventInfoUISlideAnimation__StartSlideAnim(
        EventInfoUISlideAnimation_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v48; // x0
  __int64 v49; // x1
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

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_42E9ABE & 1) == 0 )
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
    byte_42E9ABE = 1;
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v48 = sub_B5D5DC(object___TypeInfo, 12LL);
  if ( !v48 )
    sub_B5D69C(0LL, v49);
  v56 = (System_Object_array *)v48;
  v57 = (UnityEngine_GameObject_o *)StringLiteral_20191/*"isLocal"*/;
  if ( StringLiteral_20191/*"isLocal"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_20191/*"isLocal"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_59;
    v58 = (System_Int32_array **)StringLiteral_20191/*"isLocal"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( !v56->max_length )
    goto LABEL_58;
  v56->m_Items[0] = (Il2CppObject *)v58;
  sub_B5D560((BattleServantConfConponent_o *)v56->m_Items, v58, v50, v51, v52, v53, v54, v55);
  v143[0] = 1;
  v57 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v143);
  v65 = (System_Int32_array **)v57;
  if ( v57 )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_59;
  }
  if ( v56->max_length <= 1 )
    goto LABEL_58;
  v56->m_Items[1] = (Il2CppObject *)v65;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[1], v65, v59, v60, v61, v62, v63, v64);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_21800/*"position"*/;
  if ( StringLiteral_21800/*"position"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21800/*"position"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_59;
    v72 = (System_Int32_array **)StringLiteral_21800/*"position"*/;
  }
  else
  {
    v72 = 0LL;
  }
  if ( v56->max_length <= 2 )
    goto LABEL_58;
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
      goto LABEL_59;
  }
  if ( v56->max_length <= 3 )
    goto LABEL_58;
  v56->m_Items[3] = (Il2CppObject *)v80;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[3], v80, v74, v75, v76, v77, v78, v79);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_18340/*"easeType"*/;
  if ( StringLiteral_18340/*"easeType"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_18340/*"easeType"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_59;
    v87 = (System_Int32_array **)StringLiteral_18340/*"easeType"*/;
  }
  else
  {
    v87 = 0LL;
  }
  if ( v56->max_length <= 4 )
    goto LABEL_58;
  v56->m_Items[4] = (Il2CppObject *)v87;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[4], v87, v81, v82, v83, v84, v85, v86);
  easeTypeOut = (System_Int32_array **)this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(this->fields.easeTypeOut, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_59;
  }
  if ( v56->max_length <= 5 )
    goto LABEL_58;
  v56->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[5], easeTypeOut, v88, v89, v90, v91, v92, v93);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_59;
    v101 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v101 = 0LL;
  }
  if ( v56->max_length <= 6 )
    goto LABEL_58;
  v56->m_Items[6] = (Il2CppObject *)v101;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[6], v101, v95, v96, v97, v98, v99, v100);
  slideOutTime = this->fields.slideOutTime;
  v57 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v108 = (System_Int32_array **)v57;
  if ( v57 )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_59;
  }
  if ( v56->max_length <= 7 )
    goto LABEL_58;
  v56->m_Items[7] = (Il2CppObject *)v108;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[7], v108, v102, v103, v104, v105, v106, v107);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_59;
    v115 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v115 = 0LL;
  }
  if ( v56->max_length <= 8 )
    goto LABEL_58;
  v56->m_Items[8] = (Il2CppObject *)v115;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[8], v115, v109, v110, v111, v112, v113, v114);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_21530/*"onMoveComplete"*/;
  if ( StringLiteral_21530/*"onMoveComplete"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21530/*"onMoveComplete"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_59;
    v122 = (System_Int32_array **)StringLiteral_21530/*"onMoveComplete"*/;
  }
  else
  {
    v122 = 0LL;
  }
  if ( v56->max_length <= 9 )
    goto LABEL_58;
  v56->m_Items[9] = (Il2CppObject *)v122;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[9], v122, v116, v117, v118, v119, v120, v121);
  v57 = (UnityEngine_GameObject_o *)StringLiteral_21544/*"oncompletetarget"*/;
  if ( StringLiteral_21544/*"oncompletetarget"*/ )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21544/*"oncompletetarget"*/, v56->obj.klass->_1.element_class);
    if ( !v57 )
      goto LABEL_59;
    v129 = (System_Int32_array **)StringLiteral_21544/*"oncompletetarget"*/;
  }
  else
  {
    v129 = 0LL;
  }
  if ( v56->max_length <= 0xA )
    goto LABEL_58;
  v56->m_Items[10] = (Il2CppObject *)v129;
  sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[10], v129, v123, v124, v125, v126, v127, v128);
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v136 = (System_Int32_array **)v57;
  if ( v57 )
  {
    v57 = (UnityEngine_GameObject_o *)sub_B5D684(v57, v56->obj.klass->_1.element_class);
    if ( !v57 )
    {
LABEL_59:
      v139 = sub_B5D6BC(v57);
      sub_B5D668(v139, 0LL);
    }
  }
  if ( v56->max_length <= 0xB )
  {
LABEL_58:
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_27096836(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o slidePosition,
        bool isTypeIn,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  float *p_slideOutTime; // x8
  __int64 v49; // x9
  System_Int32_array **v50; // x22
  int v51; // w24
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v53; // x0
  __int64 v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Object_array *v61; // x21
  UnityEngine_GameObject_o *v62; // x0
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x23
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x23
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
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
  int v143[4]; // [xsp+0h] [xbp-60h] BYREF
  int v144; // [xsp+18h] [xbp-48h] BYREF
  char v145[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_42E9AC0 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)callback, isTypeIn, method);
    sub_B5D5C4(&object___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&float_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_21506/*"onAnimEnd"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_18340/*"easeType"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v42, v43, v44);
    sub_B5D5C4(&iTween_TypeInfo, v45, v46, v47);
    byte_42E9AC0 = 1;
  }
  this->fields.endCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    (System_String_array **)isTypeIn,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  p_slideOutTime = &this->fields.slideOutTime;
  if ( isTypeIn )
    p_slideOutTime = &this->fields.slideInTime;
  if ( isTypeIn )
    v49 = 24LL;
  else
    v49 = 32LL;
  v50 = *(System_Int32_array ***)((char *)&this->klass + v49);
  v51 = *(_DWORD *)p_slideOutTime;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v53 = sub_B5D5DC(object___TypeInfo, 12LL);
  if ( !v53 )
    sub_B5D69C(0LL, v54);
  v61 = (System_Object_array *)v53;
  v62 = (UnityEngine_GameObject_o *)StringLiteral_20191/*"isLocal"*/;
  if ( StringLiteral_20191/*"isLocal"*/ )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_20191/*"isLocal"*/, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
    v63 = (System_Int32_array **)StringLiteral_20191/*"isLocal"*/;
  }
  else
  {
    v63 = 0LL;
  }
  if ( !v61->max_length )
    goto LABEL_63;
  v61->m_Items[0] = (Il2CppObject *)v63;
  sub_B5D560((BattleServantConfConponent_o *)v61->m_Items, v63, v55, v56, v57, v58, v59, v60);
  v145[0] = 1;
  v62 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v145);
  v70 = (System_Int32_array **)v62;
  if ( v62 )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(v62, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
  }
  if ( v61->max_length <= 1 )
    goto LABEL_63;
  v61->m_Items[1] = (Il2CppObject *)v70;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[1], v70, v64, v65, v66, v67, v68, v69);
  v62 = (UnityEngine_GameObject_o *)StringLiteral_21800/*"position"*/;
  if ( StringLiteral_21800/*"position"*/ )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21800/*"position"*/, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
    v77 = (System_Int32_array **)StringLiteral_21800/*"position"*/;
  }
  else
  {
    v77 = 0LL;
  }
  if ( v61->max_length <= 2 )
    goto LABEL_63;
  v61->m_Items[2] = (Il2CppObject *)v77;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[2], v77, v71, v72, v73, v74, v75, v76);
  *(float *)v143 = x;
  *(float *)&v143[1] = y;
  *(float *)&v143[2] = z;
  v62 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v143);
  v84 = (System_Int32_array **)v62;
  if ( v62 )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(v62, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
  }
  if ( v61->max_length <= 3 )
    goto LABEL_63;
  v61->m_Items[3] = (Il2CppObject *)v84;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[3], v84, v78, v79, v80, v81, v82, v83);
  v62 = (UnityEngine_GameObject_o *)StringLiteral_18340/*"easeType"*/;
  if ( StringLiteral_18340/*"easeType"*/ )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_18340/*"easeType"*/, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
    v91 = (System_Int32_array **)StringLiteral_18340/*"easeType"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v61->max_length <= 4 )
    goto LABEL_63;
  v61->m_Items[4] = (Il2CppObject *)v91;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[4], v91, v85, v86, v87, v88, v89, v90);
  if ( v50 )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(v50, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
  }
  if ( v61->max_length <= 5 )
    goto LABEL_63;
  v61->m_Items[5] = (Il2CppObject *)v50;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[5], v50, v92, v93, v94, v95, v96, v97);
  v62 = (UnityEngine_GameObject_o *)StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
    v104 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v104 = 0LL;
  }
  if ( v61->max_length <= 6 )
    goto LABEL_63;
  v61->m_Items[6] = (Il2CppObject *)v104;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[6], v104, v98, v99, v100, v101, v102, v103);
  v144 = v51;
  v62 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v144);
  v111 = (System_Int32_array **)v62;
  if ( v62 )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(v62, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
  }
  if ( v61->max_length <= 7 )
    goto LABEL_63;
  v61->m_Items[7] = (Il2CppObject *)v111;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[7], v111, v105, v106, v107, v108, v109, v110);
  v62 = (UnityEngine_GameObject_o *)StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
    v118 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v118 = 0LL;
  }
  if ( v61->max_length <= 8 )
    goto LABEL_63;
  v61->m_Items[8] = (Il2CppObject *)v118;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[8], v118, v112, v113, v114, v115, v116, v117);
  v62 = (UnityEngine_GameObject_o *)StringLiteral_21506/*"onAnimEnd"*/;
  if ( StringLiteral_21506/*"onAnimEnd"*/ )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21506/*"onAnimEnd"*/, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
    v125 = (System_Int32_array **)StringLiteral_21506/*"onAnimEnd"*/;
  }
  else
  {
    v125 = 0LL;
  }
  if ( v61->max_length <= 9 )
    goto LABEL_63;
  v61->m_Items[9] = (Il2CppObject *)v125;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[9], v125, v119, v120, v121, v122, v123, v124);
  v62 = (UnityEngine_GameObject_o *)StringLiteral_21544/*"oncompletetarget"*/;
  if ( StringLiteral_21544/*"oncompletetarget"*/ )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21544/*"oncompletetarget"*/, v61->obj.klass->_1.element_class);
    if ( !v62 )
      goto LABEL_64;
    v132 = (System_Int32_array **)StringLiteral_21544/*"oncompletetarget"*/;
  }
  else
  {
    v132 = 0LL;
  }
  if ( v61->max_length <= 0xA )
    goto LABEL_63;
  v61->m_Items[10] = (Il2CppObject *)v132;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[10], v132, v126, v127, v128, v129, v130, v131);
  v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v139 = (System_Int32_array **)v62;
  if ( v62 )
  {
    v62 = (UnityEngine_GameObject_o *)sub_B5D684(v62, v61->obj.klass->_1.element_class);
    if ( !v62 )
    {
LABEL_64:
      v142 = sub_B5D6BC(v62);
      sub_B5D668(v142, 0LL);
    }
  }
  if ( v61->max_length <= 0xB )
  {
LABEL_63:
    v141 = sub_B5D6C8(v62);
    sub_B5D668(v141, 0LL);
  }
  v61->m_Items[11] = (Il2CppObject *)v139;
  sub_B5D560((BattleServantConfConponent_o *)&v61->m_Items[11], v139, v133, v134, v135, v136, v137, v138);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v140 = iTween__Hash(v61, 0LL);
  iTween__MoveTo_43183064(gameObject, v140, 0LL);
}


void __fastcall EventInfoUISlideAnimation__onAnimEnd(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
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


void __fastcall EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Object_array *v47; // x21
  UnityEngine_GameObject_o *v48; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  float z; // w9
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **easeTypeIn; // x22
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x22
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x1
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x1
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x19
  System_Collections_Hashtable_o *v128; // x0
  __int64 v129; // x0
  __int64 v130; // x0
  float slideInTime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v132; // [xsp+10h] [xbp-30h] BYREF
  float v133; // [xsp+18h] [xbp-28h]
  char v134[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E9ABF & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&object___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&float_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_21506/*"onAnimEnd"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18340/*"easeType"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v32, v33, v34);
    sub_B5D5C4(&iTween_TypeInfo, v35, v36, v37);
    byte_42E9ABF = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v39 = sub_B5D5DC(object___TypeInfo, 12LL);
  if ( !v39 )
    sub_B5D69C(0LL, v40);
  v47 = (System_Object_array *)v39;
  v48 = (UnityEngine_GameObject_o *)StringLiteral_20191/*"isLocal"*/;
  if ( StringLiteral_20191/*"isLocal"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_20191/*"isLocal"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
    v49 = (System_Int32_array **)StringLiteral_20191/*"isLocal"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( !v47->max_length )
    goto LABEL_58;
  v47->m_Items[0] = (Il2CppObject *)v49;
  sub_B5D560((BattleServantConfConponent_o *)v47->m_Items, v49, v41, v42, v43, v44, v45, v46);
  v134[0] = 1;
  v48 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v134);
  v56 = (System_Int32_array **)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_58;
  v47->m_Items[1] = (Il2CppObject *)v56;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[1], v56, v50, v51, v52, v53, v54, v55);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_21800/*"position"*/;
  if ( StringLiteral_21800/*"position"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21800/*"position"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
    v63 = (System_Int32_array **)StringLiteral_21800/*"position"*/;
  }
  else
  {
    v63 = 0LL;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_58;
  v47->m_Items[2] = (Il2CppObject *)v63;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[2], v63, v57, v58, v59, v60, v61, v62);
  z = this->fields.slideInPosition.fields.z;
  v132 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v133 = z;
  v48 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v132);
  v71 = (System_Int32_array **)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_58;
  v47->m_Items[3] = (Il2CppObject *)v71;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[3], v71, v65, v66, v67, v68, v69, v70);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_18340/*"easeType"*/;
  if ( StringLiteral_18340/*"easeType"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_18340/*"easeType"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
    v78 = (System_Int32_array **)StringLiteral_18340/*"easeType"*/;
  }
  else
  {
    v78 = 0LL;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_58;
  v47->m_Items[4] = (Il2CppObject *)v78;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[4], v78, v72, v73, v74, v75, v76, v77);
  easeTypeIn = (System_Int32_array **)this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(this->fields.easeTypeIn, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_58;
  v47->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[5], easeTypeIn, v79, v80, v81, v82, v83, v84);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
    v92 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_58;
  v47->m_Items[6] = (Il2CppObject *)v92;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[6], v92, v86, v87, v88, v89, v90, v91);
  slideInTime = this->fields.slideInTime;
  v48 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v99 = (System_Int32_array **)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_58;
  v47->m_Items[7] = (Il2CppObject *)v99;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[7], v99, v93, v94, v95, v96, v97, v98);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
    v106 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v106 = 0LL;
  }
  if ( v47->max_length <= 8 )
    goto LABEL_58;
  v47->m_Items[8] = (Il2CppObject *)v106;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[8], v106, v100, v101, v102, v103, v104, v105);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_21506/*"onAnimEnd"*/;
  if ( StringLiteral_21506/*"onAnimEnd"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21506/*"onAnimEnd"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
    v113 = (System_Int32_array **)StringLiteral_21506/*"onAnimEnd"*/;
  }
  else
  {
    v113 = 0LL;
  }
  if ( v47->max_length <= 9 )
    goto LABEL_58;
  v47->m_Items[9] = (Il2CppObject *)v113;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[9], v113, v107, v108, v109, v110, v111, v112);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_21544/*"oncompletetarget"*/;
  if ( StringLiteral_21544/*"oncompletetarget"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(StringLiteral_21544/*"oncompletetarget"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_59;
    v120 = (System_Int32_array **)StringLiteral_21544/*"oncompletetarget"*/;
  }
  else
  {
    v120 = 0LL;
  }
  if ( v47->max_length <= 0xA )
    goto LABEL_58;
  v47->m_Items[10] = (Il2CppObject *)v120;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[10], v120, v114, v115, v116, v117, v118, v119);
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v127 = (System_Int32_array **)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_B5D684(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
    {
LABEL_59:
      v130 = sub_B5D6BC(v48);
      sub_B5D668(v130, 0LL);
    }
  }
  if ( v47->max_length <= 0xB )
  {
LABEL_58:
    v129 = sub_B5D6C8(v48);
    sub_B5D668(v129, 0LL);
  }
  v47->m_Items[11] = (Il2CppObject *)v127;
  sub_B5D560((BattleServantConfConponent_o *)&v47->m_Items[11], v127, v121, v122, v123, v124, v125, v126);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v128 = iTween__Hash(v47, 0LL);
  iTween__MoveTo_43183064(gameObject, v128, 0LL);
}