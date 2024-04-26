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
  sub_B70630(
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
    sub_B7076C(0LL, v4);
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Object_array *v23; // x21
  UnityEngine_GameObject_o *v24; // x0
  System_Int32_array **v25; // x1
  __int64 v26; // x2
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  float v41; // w9
  __int64 v42; // x2
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **easeTypeOut; // x22
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  __int64 v71; // x2
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x22
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x1
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
  System_Int32_array **v106; // x19
  System_Collections_Hashtable_o *v107; // x0
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // [xsp+0h] [xbp-50h] BYREF
  float v111; // [xsp+8h] [xbp-48h]
  float slideOutTime; // [xsp+18h] [xbp-38h] BYREF
  char v113[4]; // [xsp+1Ch] [xbp-34h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4352E9B & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&UnityEngine_Vector3_TypeInfo);
    sub_B70694(&StringLiteral_21593/*"onMoveComplete"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21607/*"oncompletetarget"*/);
    sub_B70694(&StringLiteral_21866/*"position"*/);
    sub_B70694(&StringLiteral_20250/*"isLocal"*/);
    sub_B70694(&StringLiteral_18387/*"easeType"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_4352E9B = 1;
  }
  this->fields.endCallback = callback;
  sub_B70630(
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
  v15 = sub_B706AC(object___TypeInfo, 12LL);
  if ( !v15 )
    sub_B7076C(0LL, v16);
  v23 = (System_Object_array *)v15;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_20250/*"isLocal"*/;
  if ( StringLiteral_20250/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_20250/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = (System_Int32_array **)StringLiteral_20250/*"isLocal"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_58;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_B70630((BattleServantConfConponent_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v113[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v113, v26);
  v33 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_58;
  v23->m_Items[1] = (Il2CppObject *)v33;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21866/*"position"*/;
  if ( StringLiteral_21866/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21866/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v40 = (System_Int32_array **)StringLiteral_21866/*"position"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_58;
  v23->m_Items[2] = (Il2CppObject *)v40;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  v41 = this->fields.slideOutPosition.fields.z;
  v110 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v111 = v41;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v110, v42);
  v49 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_58;
  v23->m_Items[3] = (Il2CppObject *)v49;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_18387/*"easeType"*/;
  if ( StringLiteral_18387/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_18387/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v56 = (System_Int32_array **)StringLiteral_18387/*"easeType"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_58;
  v23->m_Items[4] = (Il2CppObject *)v56;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[4], v56, v50, v51, v52, v53, v54, v55);
  easeTypeOut = (System_Int32_array **)this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_58;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[5], easeTypeOut, v57, v58, v59, v60, v61, v62);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_23053/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v70 = (System_Int32_array **)StringLiteral_23053/*"time"*/;
  }
  else
  {
    v70 = 0LL;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_58;
  v23->m_Items[6] = (Il2CppObject *)v70;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[6], v70, v64, v65, v66, v67, v68, v69);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v71);
  v78 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_58;
  v23->m_Items[7] = (Il2CppObject *)v78;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[7], v78, v72, v73, v74, v75, v76, v77);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21605/*"oncomplete"*/;
  if ( StringLiteral_21605/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21605/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v85 = (System_Int32_array **)StringLiteral_21605/*"oncomplete"*/;
  }
  else
  {
    v85 = 0LL;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_58;
  v23->m_Items[8] = (Il2CppObject *)v85;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[8], v85, v79, v80, v81, v82, v83, v84);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21593/*"onMoveComplete"*/;
  if ( StringLiteral_21593/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21593/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v92 = (System_Int32_array **)StringLiteral_21593/*"onMoveComplete"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( v23->max_length <= 9 )
    goto LABEL_58;
  v23->m_Items[9] = (Il2CppObject *)v92;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[9], v92, v86, v87, v88, v89, v90, v91);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21607/*"oncompletetarget"*/;
  if ( StringLiteral_21607/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21607/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v99 = (System_Int32_array **)StringLiteral_21607/*"oncompletetarget"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( v23->max_length <= 0xA )
    goto LABEL_58;
  v23->m_Items[10] = (Il2CppObject *)v99;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[10], v99, v93, v94, v95, v96, v97, v98);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v106 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B70754(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_59:
      v109 = sub_B7078C(v24);
      sub_B70738(v109, 0LL);
    }
  }
  if ( v23->max_length <= 0xB )
  {
LABEL_58:
    v108 = sub_B70798(v24);
    sub_B70738(v108, 0LL);
  }
  v23->m_Items[11] = (Il2CppObject *)v106;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[11], v106, v100, v101, v102, v103, v104, v105);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v107 = iTween__Hash(v23, 0LL);
  iTween__MoveTo_42827204(gameObject, v107, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_27338340(
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
  float *p_slideOutTime; // x8
  __int64 v16; // x9
  System_Int32_array **v17; // x22
  int v18; // w24
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Object_array *v28; // x21
  UnityEngine_GameObject_o *v29; // x0
  System_Int32_array **v30; // x1
  __int64 v31; // x2
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  __int64 v46; // x2
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x23
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  __int64 v74; // x2
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x22
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
  System_Int32_array **v102; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x19
  System_Collections_Hashtable_o *v110; // x0
  __int64 v111; // x0
  __int64 v112; // x0
  int v113[4]; // [xsp+0h] [xbp-60h] BYREF
  int v114; // [xsp+18h] [xbp-48h] BYREF
  char v115[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4352E9D & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&UnityEngine_Vector3_TypeInfo);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21607/*"oncompletetarget"*/);
    sub_B70694(&StringLiteral_21866/*"position"*/);
    sub_B70694(&StringLiteral_21569/*"onAnimEnd"*/);
    sub_B70694(&StringLiteral_20250/*"isLocal"*/);
    sub_B70694(&StringLiteral_18387/*"easeType"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_4352E9D = 1;
  }
  this->fields.endCallback = callback;
  sub_B70630(
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
    v16 = 24LL;
  else
    v16 = 32LL;
  v17 = *(System_Int32_array ***)((char *)&this->klass + v16);
  v18 = *(_DWORD *)p_slideOutTime;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = sub_B706AC(object___TypeInfo, 12LL);
  if ( !v20 )
    sub_B7076C(0LL, v21);
  v28 = (System_Object_array *)v20;
  v29 = (UnityEngine_GameObject_o *)StringLiteral_20250/*"isLocal"*/;
  if ( StringLiteral_20250/*"isLocal"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_20250/*"isLocal"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v30 = (System_Int32_array **)StringLiteral_20250/*"isLocal"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !v28->max_length )
    goto LABEL_63;
  v28->m_Items[0] = (Il2CppObject *)v30;
  sub_B70630((BattleServantConfConponent_o *)v28->m_Items, v30, v22, v23, v24, v25, v26, v27);
  v115[0] = 1;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v115, v31);
  v38 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_63;
  v28->m_Items[1] = (Il2CppObject *)v38;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[1], v38, v32, v33, v34, v35, v36, v37);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21866/*"position"*/;
  if ( StringLiteral_21866/*"position"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21866/*"position"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v45 = (System_Int32_array **)StringLiteral_21866/*"position"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_63;
  v28->m_Items[2] = (Il2CppObject *)v45;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[2], v45, v39, v40, v41, v42, v43, v44);
  *(float *)v113 = x;
  *(float *)&v113[1] = y;
  *(float *)&v113[2] = z;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v113, v46);
  v53 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
  }
  if ( v28->max_length <= 3 )
    goto LABEL_63;
  v28->m_Items[3] = (Il2CppObject *)v53;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_18387/*"easeType"*/;
  if ( StringLiteral_18387/*"easeType"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_18387/*"easeType"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v60 = (System_Int32_array **)StringLiteral_18387/*"easeType"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v28->max_length <= 4 )
    goto LABEL_63;
  v28->m_Items[4] = (Il2CppObject *)v60;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[4], v60, v54, v55, v56, v57, v58, v59);
  if ( v17 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(v17, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
  }
  if ( v28->max_length <= 5 )
    goto LABEL_63;
  v28->m_Items[5] = (Il2CppObject *)v17;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[5], v17, v61, v62, v63, v64, v65, v66);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_23053/*"time"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v73 = (System_Int32_array **)StringLiteral_23053/*"time"*/;
  }
  else
  {
    v73 = 0LL;
  }
  if ( v28->max_length <= 6 )
    goto LABEL_63;
  v28->m_Items[6] = (Il2CppObject *)v73;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[6], v73, v67, v68, v69, v70, v71, v72);
  v114 = v18;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v114, v74);
  v81 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
  }
  if ( v28->max_length <= 7 )
    goto LABEL_63;
  v28->m_Items[7] = (Il2CppObject *)v81;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[7], v81, v75, v76, v77, v78, v79, v80);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21605/*"oncomplete"*/;
  if ( StringLiteral_21605/*"oncomplete"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21605/*"oncomplete"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v88 = (System_Int32_array **)StringLiteral_21605/*"oncomplete"*/;
  }
  else
  {
    v88 = 0LL;
  }
  if ( v28->max_length <= 8 )
    goto LABEL_63;
  v28->m_Items[8] = (Il2CppObject *)v88;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[8], v88, v82, v83, v84, v85, v86, v87);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21569/*"onAnimEnd"*/;
  if ( StringLiteral_21569/*"onAnimEnd"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21569/*"onAnimEnd"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v95 = (System_Int32_array **)StringLiteral_21569/*"onAnimEnd"*/;
  }
  else
  {
    v95 = 0LL;
  }
  if ( v28->max_length <= 9 )
    goto LABEL_63;
  v28->m_Items[9] = (Il2CppObject *)v95;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[9], v95, v89, v90, v91, v92, v93, v94);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21607/*"oncompletetarget"*/;
  if ( StringLiteral_21607/*"oncompletetarget"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21607/*"oncompletetarget"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v102 = (System_Int32_array **)StringLiteral_21607/*"oncompletetarget"*/;
  }
  else
  {
    v102 = 0LL;
  }
  if ( v28->max_length <= 0xA )
    goto LABEL_63;
  v28->m_Items[10] = (Il2CppObject *)v102;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[10], v102, v96, v97, v98, v99, v100, v101);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v109 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B70754(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
    {
LABEL_64:
      v112 = sub_B7078C(v29);
      sub_B70738(v112, 0LL);
    }
  }
  if ( v28->max_length <= 0xB )
  {
LABEL_63:
    v111 = sub_B70798(v29);
    sub_B70738(v111, 0LL);
  }
  v28->m_Items[11] = (Il2CppObject *)v109;
  sub_B70630((BattleServantConfConponent_o *)&v28->m_Items[11], v109, v103, v104, v105, v106, v107, v108);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v110 = iTween__Hash(v28, 0LL);
  iTween__MoveTo_42827204(gameObject, v110, 0LL);
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
    sub_B70630(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Object_array *v12; // x21
  UnityEngine_GameObject_o *v13; // x0
  System_Int32_array **v14; // x1
  __int64 v15; // x2
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  float z; // w9
  __int64 v31; // x2
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **easeTypeIn; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  __int64 v60; // x2
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x1
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
  System_Int32_array **v95; // x19
  System_Collections_Hashtable_o *v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  float slideInTime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v100; // [xsp+10h] [xbp-30h] BYREF
  float v101; // [xsp+18h] [xbp-28h]
  char v102[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4352E9C & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&UnityEngine_Vector3_TypeInfo);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21607/*"oncompletetarget"*/);
    sub_B70694(&StringLiteral_21866/*"position"*/);
    sub_B70694(&StringLiteral_21569/*"onAnimEnd"*/);
    sub_B70694(&StringLiteral_20250/*"isLocal"*/);
    sub_B70694(&StringLiteral_18387/*"easeType"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_4352E9C = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = sub_B706AC(object___TypeInfo, 12LL);
  if ( !v4 )
    sub_B7076C(0LL, v5);
  v12 = (System_Object_array *)v4;
  v13 = (UnityEngine_GameObject_o *)StringLiteral_20250/*"isLocal"*/;
  if ( StringLiteral_20250/*"isLocal"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_20250/*"isLocal"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v14 = (System_Int32_array **)StringLiteral_20250/*"isLocal"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
    goto LABEL_58;
  v12->m_Items[0] = (Il2CppObject *)v14;
  sub_B70630((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  v102[0] = 1;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v102, v15);
  v22 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_58;
  v12->m_Items[1] = (Il2CppObject *)v22;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21866/*"position"*/;
  if ( StringLiteral_21866/*"position"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21866/*"position"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v29 = (System_Int32_array **)StringLiteral_21866/*"position"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_58;
  v12->m_Items[2] = (Il2CppObject *)v29;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  z = this->fields.slideInPosition.fields.z;
  v100 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v101 = z;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v100, v31);
  v38 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
  }
  if ( v12->max_length <= 3 )
    goto LABEL_58;
  v12->m_Items[3] = (Il2CppObject *)v38;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_18387/*"easeType"*/;
  if ( StringLiteral_18387/*"easeType"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_18387/*"easeType"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v45 = (System_Int32_array **)StringLiteral_18387/*"easeType"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v12->max_length <= 4 )
    goto LABEL_58;
  v12->m_Items[4] = (Il2CppObject *)v45;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  easeTypeIn = (System_Int32_array **)this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(this->fields.easeTypeIn, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
  }
  if ( v12->max_length <= 5 )
    goto LABEL_58;
  v12->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[5], easeTypeIn, v46, v47, v48, v49, v50, v51);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_23053/*"time"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v59 = (System_Int32_array **)StringLiteral_23053/*"time"*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( v12->max_length <= 6 )
    goto LABEL_58;
  v12->m_Items[6] = (Il2CppObject *)v59;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[6], v59, v53, v54, v55, v56, v57, v58);
  slideInTime = this->fields.slideInTime;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v60);
  v67 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
  }
  if ( v12->max_length <= 7 )
    goto LABEL_58;
  v12->m_Items[7] = (Il2CppObject *)v67;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[7], v67, v61, v62, v63, v64, v65, v66);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21605/*"oncomplete"*/;
  if ( StringLiteral_21605/*"oncomplete"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21605/*"oncomplete"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v74 = (System_Int32_array **)StringLiteral_21605/*"oncomplete"*/;
  }
  else
  {
    v74 = 0LL;
  }
  if ( v12->max_length <= 8 )
    goto LABEL_58;
  v12->m_Items[8] = (Il2CppObject *)v74;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[8], v74, v68, v69, v70, v71, v72, v73);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21569/*"onAnimEnd"*/;
  if ( StringLiteral_21569/*"onAnimEnd"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21569/*"onAnimEnd"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v81 = (System_Int32_array **)StringLiteral_21569/*"onAnimEnd"*/;
  }
  else
  {
    v81 = 0LL;
  }
  if ( v12->max_length <= 9 )
    goto LABEL_58;
  v12->m_Items[9] = (Il2CppObject *)v81;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[9], v81, v75, v76, v77, v78, v79, v80);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21607/*"oncompletetarget"*/;
  if ( StringLiteral_21607/*"oncompletetarget"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(StringLiteral_21607/*"oncompletetarget"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v88 = (System_Int32_array **)StringLiteral_21607/*"oncompletetarget"*/;
  }
  else
  {
    v88 = 0LL;
  }
  if ( v12->max_length <= 0xA )
    goto LABEL_58;
  v12->m_Items[10] = (Il2CppObject *)v88;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[10], v88, v82, v83, v84, v85, v86, v87);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v95 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B70754(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_59:
      v98 = sub_B7078C(v13);
      sub_B70738(v98, 0LL);
    }
  }
  if ( v12->max_length <= 0xB )
  {
LABEL_58:
    v97 = sub_B70798(v13);
    sub_B70738(v97, 0LL);
  }
  v12->m_Items[11] = (Il2CppObject *)v95;
  sub_B70630((BattleServantConfConponent_o *)&v12->m_Items[11], v95, v89, v90, v91, v92, v93, v94);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v96 = iTween__Hash(v12, 0LL);
  iTween__MoveTo_42827204(gameObject, v96, 0LL);
}