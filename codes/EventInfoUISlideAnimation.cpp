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
  sub_B0D840(
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

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Object_array *v33; // x21
  UnityEngine_GameObject_o *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  float v50; // w9
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **easeTypeOut; // x22
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
  System_Int32_array **v85; // x22
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
  System_Int32_array **v99; // x1
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
  System_Int32_array **v113; // x19
  System_Collections_Hashtable_o *v114; // x0
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // [xsp+0h] [xbp-50h] BYREF
  float v118; // [xsp+8h] [xbp-48h]
  float slideOutTime; // [xsp+18h] [xbp-38h] BYREF
  char v120[4]; // [xsp+1Ch] [xbp-34h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_42159B1 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, callback);
    sub_B0D8A4(&object___TypeInfo, v14);
    sub_B0D8A4(&float_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Vector3_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_21320/*"onMoveComplete"*/, v17);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v18);
    sub_B0D8A4(&StringLiteral_21334/*"oncompletetarget"*/, v19);
    sub_B0D8A4(&StringLiteral_21581/*"position"*/, v20);
    sub_B0D8A4(&StringLiteral_20001/*"isLocal"*/, v21);
    sub_B0D8A4(&StringLiteral_18169/*"easeType"*/, v22);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v23);
    sub_B0D8A4(&iTween_TypeInfo, v24);
    byte_42159B1 = 1;
  }
  this->fields.endCallback = callback;
  sub_B0D840(
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
  v26 = sub_B0D8BC(object___TypeInfo, 12LL);
  if ( !v26 )
    sub_B0D97C(0LL);
  v33 = (System_Object_array *)v26;
  v34 = (UnityEngine_GameObject_o *)StringLiteral_20001/*"isLocal"*/;
  if ( StringLiteral_20001/*"isLocal"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_20001/*"isLocal"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
    v35 = (System_Int32_array **)StringLiteral_20001/*"isLocal"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !v33->max_length )
    goto LABEL_58;
  v33->m_Items[0] = (Il2CppObject *)v35;
  sub_B0D840((BattleServantConfConponent_o *)v33->m_Items, v35, v27, v28, v29, v30, v31, v32);
  v120[0] = 1;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v120);
  v42 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_58;
  v33->m_Items[1] = (Il2CppObject *)v42;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21581/*"position"*/;
  if ( StringLiteral_21581/*"position"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21581/*"position"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
    v49 = (System_Int32_array **)StringLiteral_21581/*"position"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v33->max_length <= 2 )
    goto LABEL_58;
  v33->m_Items[2] = (Il2CppObject *)v49;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
  v50 = this->fields.slideOutPosition.fields.z;
  v117 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v118 = v50;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v117);
  v57 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
  }
  if ( v33->max_length <= 3 )
    goto LABEL_58;
  v33->m_Items[3] = (Il2CppObject *)v57;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[3], v57, v51, v52, v53, v54, v55, v56);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_18169/*"easeType"*/;
  if ( StringLiteral_18169/*"easeType"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_18169/*"easeType"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
    v64 = (System_Int32_array **)StringLiteral_18169/*"easeType"*/;
  }
  else
  {
    v64 = 0LL;
  }
  if ( v33->max_length <= 4 )
    goto LABEL_58;
  v33->m_Items[4] = (Il2CppObject *)v64;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[4], v64, v58, v59, v60, v61, v62, v63);
  easeTypeOut = (System_Int32_array **)this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(this->fields.easeTypeOut, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
  }
  if ( v33->max_length <= 5 )
    goto LABEL_58;
  v33->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[5], easeTypeOut, v65, v66, v67, v68, v69, v70);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_22753/*"time"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
    v78 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v78 = 0LL;
  }
  if ( v33->max_length <= 6 )
    goto LABEL_58;
  v33->m_Items[6] = (Il2CppObject *)v78;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[6], v78, v72, v73, v74, v75, v76, v77);
  slideOutTime = this->fields.slideOutTime;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v85 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
  }
  if ( v33->max_length <= 7 )
    goto LABEL_58;
  v33->m_Items[7] = (Il2CppObject *)v85;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[7], v85, v79, v80, v81, v82, v83, v84);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
    v92 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( v33->max_length <= 8 )
    goto LABEL_58;
  v33->m_Items[8] = (Il2CppObject *)v92;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[8], v92, v86, v87, v88, v89, v90, v91);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21320/*"onMoveComplete"*/;
  if ( StringLiteral_21320/*"onMoveComplete"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21320/*"onMoveComplete"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
    v99 = (System_Int32_array **)StringLiteral_21320/*"onMoveComplete"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( v33->max_length <= 9 )
    goto LABEL_58;
  v33->m_Items[9] = (Il2CppObject *)v99;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[9], v99, v93, v94, v95, v96, v97, v98);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21334/*"oncompletetarget"*/;
  if ( StringLiteral_21334/*"oncompletetarget"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21334/*"oncompletetarget"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_59;
    v106 = (System_Int32_array **)StringLiteral_21334/*"oncompletetarget"*/;
  }
  else
  {
    v106 = 0LL;
  }
  if ( v33->max_length <= 0xA )
    goto LABEL_58;
  v33->m_Items[10] = (Il2CppObject *)v106;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[10], v106, v100, v101, v102, v103, v104, v105);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v113 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
    {
LABEL_59:
      v116 = sub_B0D99C(v34);
      sub_B0D948(v116, 0LL);
    }
  }
  if ( v33->max_length <= 0xB )
  {
LABEL_58:
    v115 = sub_B0D9A8(v34);
    sub_B0D948(v115, 0LL);
  }
  v33->m_Items[11] = (Il2CppObject *)v113;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[11], v113, v107, v108, v109, v110, v111, v112);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v114 = iTween__Hash(v33, 0LL);
  iTween__MoveTo_42384720(gameObject, v114, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_26587516(
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
  float *p_slideOutTime; // x8
  __int64 v27; // x9
  System_Int32_array **v28; // x22
  int v29; // w24
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Object_array *v38; // x21
  UnityEngine_GameObject_o *v39; // x0
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
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
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x22
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x1
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x1
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x19
  System_Collections_Hashtable_o *v117; // x0
  __int64 v118; // x0
  __int64 v119; // x0
  int v120[4]; // [xsp+0h] [xbp-60h] BYREF
  int v121; // [xsp+18h] [xbp-48h] BYREF
  char v122[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_42159B3 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, callback);
    sub_B0D8A4(&object___TypeInfo, v15);
    sub_B0D8A4(&float_TypeInfo, v16);
    sub_B0D8A4(&UnityEngine_Vector3_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v18);
    sub_B0D8A4(&StringLiteral_21334/*"oncompletetarget"*/, v19);
    sub_B0D8A4(&StringLiteral_21581/*"position"*/, v20);
    sub_B0D8A4(&StringLiteral_21296/*"onAnimEnd"*/, v21);
    sub_B0D8A4(&StringLiteral_20001/*"isLocal"*/, v22);
    sub_B0D8A4(&StringLiteral_18169/*"easeType"*/, v23);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v24);
    sub_B0D8A4(&iTween_TypeInfo, v25);
    byte_42159B3 = 1;
  }
  this->fields.endCallback = callback;
  sub_B0D840(
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
    v27 = 24LL;
  else
    v27 = 32LL;
  v28 = *(System_Int32_array ***)((char *)&this->klass + v27);
  v29 = *(_DWORD *)p_slideOutTime;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v31 = sub_B0D8BC(object___TypeInfo, 12LL);
  if ( !v31 )
    sub_B0D97C(0LL);
  v38 = (System_Object_array *)v31;
  v39 = (UnityEngine_GameObject_o *)StringLiteral_20001/*"isLocal"*/;
  if ( StringLiteral_20001/*"isLocal"*/ )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_20001/*"isLocal"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
    v40 = (System_Int32_array **)StringLiteral_20001/*"isLocal"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( !v38->max_length )
    goto LABEL_63;
  v38->m_Items[0] = (Il2CppObject *)v40;
  sub_B0D840((BattleServantConfConponent_o *)v38->m_Items, v40, v32, v33, v34, v35, v36, v37);
  v122[0] = 1;
  v39 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v122);
  v47 = (System_Int32_array **)v39;
  if ( v39 )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(v39, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
  }
  if ( v38->max_length <= 1 )
    goto LABEL_63;
  v38->m_Items[1] = (Il2CppObject *)v47;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[1], v47, v41, v42, v43, v44, v45, v46);
  v39 = (UnityEngine_GameObject_o *)StringLiteral_21581/*"position"*/;
  if ( StringLiteral_21581/*"position"*/ )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21581/*"position"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
    v54 = (System_Int32_array **)StringLiteral_21581/*"position"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v38->max_length <= 2 )
    goto LABEL_63;
  v38->m_Items[2] = (Il2CppObject *)v54;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[2], v54, v48, v49, v50, v51, v52, v53);
  *(float *)v120 = x;
  *(float *)&v120[1] = y;
  *(float *)&v120[2] = z;
  v39 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v120);
  v61 = (System_Int32_array **)v39;
  if ( v39 )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(v39, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
  }
  if ( v38->max_length <= 3 )
    goto LABEL_63;
  v38->m_Items[3] = (Il2CppObject *)v61;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[3], v61, v55, v56, v57, v58, v59, v60);
  v39 = (UnityEngine_GameObject_o *)StringLiteral_18169/*"easeType"*/;
  if ( StringLiteral_18169/*"easeType"*/ )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_18169/*"easeType"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
    v68 = (System_Int32_array **)StringLiteral_18169/*"easeType"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( v38->max_length <= 4 )
    goto LABEL_63;
  v38->m_Items[4] = (Il2CppObject *)v68;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[4], v68, v62, v63, v64, v65, v66, v67);
  if ( v28 )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(v28, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
  }
  if ( v38->max_length <= 5 )
    goto LABEL_63;
  v38->m_Items[5] = (Il2CppObject *)v28;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[5], v28, v69, v70, v71, v72, v73, v74);
  v39 = (UnityEngine_GameObject_o *)StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_22753/*"time"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
    v81 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v81 = 0LL;
  }
  if ( v38->max_length <= 6 )
    goto LABEL_63;
  v38->m_Items[6] = (Il2CppObject *)v81;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[6], v81, v75, v76, v77, v78, v79, v80);
  v121 = v29;
  v39 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v121);
  v88 = (System_Int32_array **)v39;
  if ( v39 )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(v39, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
  }
  if ( v38->max_length <= 7 )
    goto LABEL_63;
  v38->m_Items[7] = (Il2CppObject *)v88;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[7], v88, v82, v83, v84, v85, v86, v87);
  v39 = (UnityEngine_GameObject_o *)StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
    v95 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v95 = 0LL;
  }
  if ( v38->max_length <= 8 )
    goto LABEL_63;
  v38->m_Items[8] = (Il2CppObject *)v95;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[8], v95, v89, v90, v91, v92, v93, v94);
  v39 = (UnityEngine_GameObject_o *)StringLiteral_21296/*"onAnimEnd"*/;
  if ( StringLiteral_21296/*"onAnimEnd"*/ )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21296/*"onAnimEnd"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
    v102 = (System_Int32_array **)StringLiteral_21296/*"onAnimEnd"*/;
  }
  else
  {
    v102 = 0LL;
  }
  if ( v38->max_length <= 9 )
    goto LABEL_63;
  v38->m_Items[9] = (Il2CppObject *)v102;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[9], v102, v96, v97, v98, v99, v100, v101);
  v39 = (UnityEngine_GameObject_o *)StringLiteral_21334/*"oncompletetarget"*/;
  if ( StringLiteral_21334/*"oncompletetarget"*/ )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21334/*"oncompletetarget"*/, v38->obj.klass->_1.element_class);
    if ( !v39 )
      goto LABEL_64;
    v109 = (System_Int32_array **)StringLiteral_21334/*"oncompletetarget"*/;
  }
  else
  {
    v109 = 0LL;
  }
  if ( v38->max_length <= 0xA )
    goto LABEL_63;
  v38->m_Items[10] = (Il2CppObject *)v109;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[10], v109, v103, v104, v105, v106, v107, v108);
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v116 = (System_Int32_array **)v39;
  if ( v39 )
  {
    v39 = (UnityEngine_GameObject_o *)sub_B0D964(v39, v38->obj.klass->_1.element_class);
    if ( !v39 )
    {
LABEL_64:
      v119 = sub_B0D99C(v39);
      sub_B0D948(v119, 0LL);
    }
  }
  if ( v38->max_length <= 0xB )
  {
LABEL_63:
    v118 = sub_B0D9A8(v39);
    sub_B0D948(v118, 0LL);
  }
  v38->m_Items[11] = (Il2CppObject *)v116;
  sub_B0D840((BattleServantConfConponent_o *)&v38->m_Items[11], v116, v110, v111, v112, v113, v114, v115);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v117 = iTween__Hash(v38, 0LL);
  iTween__MoveTo_42384720(gameObject, v117, 0LL);
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
    sub_B0D840(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Object_array *v22; // x21
  UnityEngine_GameObject_o *v23; // x0
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  float z; // w9
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **easeTypeIn; // x22
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x1
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x19
  System_Collections_Hashtable_o *v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  float slideInTime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v107; // [xsp+10h] [xbp-30h] BYREF
  float v108; // [xsp+18h] [xbp-28h]
  char v109[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42159B2 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, method);
    sub_B0D8A4(&object___TypeInfo, v3);
    sub_B0D8A4(&float_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Vector3_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v6);
    sub_B0D8A4(&StringLiteral_21334/*"oncompletetarget"*/, v7);
    sub_B0D8A4(&StringLiteral_21581/*"position"*/, v8);
    sub_B0D8A4(&StringLiteral_21296/*"onAnimEnd"*/, v9);
    sub_B0D8A4(&StringLiteral_20001/*"isLocal"*/, v10);
    sub_B0D8A4(&StringLiteral_18169/*"easeType"*/, v11);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v12);
    sub_B0D8A4(&iTween_TypeInfo, v13);
    byte_42159B2 = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = sub_B0D8BC(object___TypeInfo, 12LL);
  if ( !v15 )
    sub_B0D97C(0LL);
  v22 = (System_Object_array *)v15;
  v23 = (UnityEngine_GameObject_o *)StringLiteral_20001/*"isLocal"*/;
  if ( StringLiteral_20001/*"isLocal"*/ )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_20001/*"isLocal"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
    v24 = (System_Int32_array **)StringLiteral_20001/*"isLocal"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v22->max_length )
    goto LABEL_58;
  v22->m_Items[0] = (Il2CppObject *)v24;
  sub_B0D840((BattleServantConfConponent_o *)v22->m_Items, v24, v16, v17, v18, v19, v20, v21);
  v109[0] = 1;
  v23 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v109);
  v31 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(v23, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_58;
  v22->m_Items[1] = (Il2CppObject *)v31;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
  v23 = (UnityEngine_GameObject_o *)StringLiteral_21581/*"position"*/;
  if ( StringLiteral_21581/*"position"*/ )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21581/*"position"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
    v38 = (System_Int32_array **)StringLiteral_21581/*"position"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v22->max_length <= 2 )
    goto LABEL_58;
  v22->m_Items[2] = (Il2CppObject *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
  z = this->fields.slideInPosition.fields.z;
  v107 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v108 = z;
  v23 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v107);
  v46 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(v23, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
  }
  if ( v22->max_length <= 3 )
    goto LABEL_58;
  v22->m_Items[3] = (Il2CppObject *)v46;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
  v23 = (UnityEngine_GameObject_o *)StringLiteral_18169/*"easeType"*/;
  if ( StringLiteral_18169/*"easeType"*/ )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_18169/*"easeType"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
    v53 = (System_Int32_array **)StringLiteral_18169/*"easeType"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( v22->max_length <= 4 )
    goto LABEL_58;
  v22->m_Items[4] = (Il2CppObject *)v53;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[4], v53, v47, v48, v49, v50, v51, v52);
  easeTypeIn = (System_Int32_array **)this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(this->fields.easeTypeIn, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
  }
  if ( v22->max_length <= 5 )
    goto LABEL_58;
  v22->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[5], easeTypeIn, v54, v55, v56, v57, v58, v59);
  v23 = (UnityEngine_GameObject_o *)StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_22753/*"time"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
    v67 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v67 = 0LL;
  }
  if ( v22->max_length <= 6 )
    goto LABEL_58;
  v22->m_Items[6] = (Il2CppObject *)v67;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[6], v67, v61, v62, v63, v64, v65, v66);
  slideInTime = this->fields.slideInTime;
  v23 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v74 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(v23, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
  }
  if ( v22->max_length <= 7 )
    goto LABEL_58;
  v22->m_Items[7] = (Il2CppObject *)v74;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[7], v74, v68, v69, v70, v71, v72, v73);
  v23 = (UnityEngine_GameObject_o *)StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
    v81 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v81 = 0LL;
  }
  if ( v22->max_length <= 8 )
    goto LABEL_58;
  v22->m_Items[8] = (Il2CppObject *)v81;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[8], v81, v75, v76, v77, v78, v79, v80);
  v23 = (UnityEngine_GameObject_o *)StringLiteral_21296/*"onAnimEnd"*/;
  if ( StringLiteral_21296/*"onAnimEnd"*/ )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21296/*"onAnimEnd"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
    v88 = (System_Int32_array **)StringLiteral_21296/*"onAnimEnd"*/;
  }
  else
  {
    v88 = 0LL;
  }
  if ( v22->max_length <= 9 )
    goto LABEL_58;
  v22->m_Items[9] = (Il2CppObject *)v88;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[9], v88, v82, v83, v84, v85, v86, v87);
  v23 = (UnityEngine_GameObject_o *)StringLiteral_21334/*"oncompletetarget"*/;
  if ( StringLiteral_21334/*"oncompletetarget"*/ )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21334/*"oncompletetarget"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_59;
    v95 = (System_Int32_array **)StringLiteral_21334/*"oncompletetarget"*/;
  }
  else
  {
    v95 = 0LL;
  }
  if ( v22->max_length <= 0xA )
    goto LABEL_58;
  v22->m_Items[10] = (Il2CppObject *)v95;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[10], v95, v89, v90, v91, v92, v93, v94);
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v102 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (UnityEngine_GameObject_o *)sub_B0D964(v23, v22->obj.klass->_1.element_class);
    if ( !v23 )
    {
LABEL_59:
      v105 = sub_B0D99C(v23);
      sub_B0D948(v105, 0LL);
    }
  }
  if ( v22->max_length <= 0xB )
  {
LABEL_58:
    v104 = sub_B0D9A8(v23);
    sub_B0D948(v104, 0LL);
  }
  v22->m_Items[11] = (Il2CppObject *)v102;
  sub_B0D840((BattleServantConfConponent_o *)&v22->m_Items[11], v102, v96, v97, v98, v99, v100, v101);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v103 = iTween__Hash(v22, 0LL);
  iTween__MoveTo_42384720(gameObject, v103, 0LL);
}