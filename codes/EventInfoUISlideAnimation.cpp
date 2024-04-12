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
  sub_B52920(
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
    sub_B52A5C(0LL, v4);
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
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  float v40; // w9
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
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
  System_Int32_array **easeTypeOut; // x22
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
  System_Int32_array **v75; // x22
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x19
  System_Collections_Hashtable_o *v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // [xsp+0h] [xbp-50h] BYREF
  float v108; // [xsp+8h] [xbp-48h]
  float slideOutTime; // [xsp+18h] [xbp-38h] BYREF
  char v110[4]; // [xsp+1Ch] [xbp-34h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_42B10F4 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&UnityEngine_Vector3_TypeInfo);
    sub_B52984(&StringLiteral_21421/*"onMoveComplete"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21435/*"oncompletetarget"*/);
    sub_B52984(&StringLiteral_21687/*"position"*/);
    sub_B52984(&StringLiteral_20088/*"isLocal"*/);
    sub_B52984(&StringLiteral_18246/*"easeType"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B10F4 = 1;
  }
  this->fields.endCallback = callback;
  sub_B52920(
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
  v15 = sub_B5299C(object___TypeInfo, 12LL);
  if ( !v15 )
    sub_B52A5C(0LL, v16);
  v23 = (System_Object_array *)v15;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_20088/*"isLocal"*/;
  if ( StringLiteral_20088/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_20088/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = (System_Int32_array **)StringLiteral_20088/*"isLocal"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_58;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_B52920((BattleServantConfConponent_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v110[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v110);
  v32 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_58;
  v23->m_Items[1] = (Il2CppObject *)v32;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[1], v32, v26, v27, v28, v29, v30, v31);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21687/*"position"*/;
  if ( StringLiteral_21687/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21687/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v39 = (System_Int32_array **)StringLiteral_21687/*"position"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_58;
  v23->m_Items[2] = (Il2CppObject *)v39;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  v40 = this->fields.slideOutPosition.fields.z;
  v107 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v108 = v40;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v107);
  v47 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_58;
  v23->m_Items[3] = (Il2CppObject *)v47;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_18246/*"easeType"*/;
  if ( StringLiteral_18246/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_18246/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v54 = (System_Int32_array **)StringLiteral_18246/*"easeType"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_58;
  v23->m_Items[4] = (Il2CppObject *)v54;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  easeTypeOut = (System_Int32_array **)this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_58;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[5], easeTypeOut, v55, v56, v57, v58, v59, v60);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22867/*"time"*/;
  if ( StringLiteral_22867/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_22867/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v68 = (System_Int32_array **)StringLiteral_22867/*"time"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_58;
  v23->m_Items[6] = (Il2CppObject *)v68;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[6], v68, v62, v63, v64, v65, v66, v67);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v75 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_58;
  v23->m_Items[7] = (Il2CppObject *)v75;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[7], v75, v69, v70, v71, v72, v73, v74);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21433/*"oncomplete"*/;
  if ( StringLiteral_21433/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21433/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v82 = (System_Int32_array **)StringLiteral_21433/*"oncomplete"*/;
  }
  else
  {
    v82 = 0LL;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_58;
  v23->m_Items[8] = (Il2CppObject *)v82;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[8], v82, v76, v77, v78, v79, v80, v81);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21421/*"onMoveComplete"*/;
  if ( StringLiteral_21421/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21421/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v89 = (System_Int32_array **)StringLiteral_21421/*"onMoveComplete"*/;
  }
  else
  {
    v89 = 0LL;
  }
  if ( v23->max_length <= 9 )
    goto LABEL_58;
  v23->m_Items[9] = (Il2CppObject *)v89;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21435/*"oncompletetarget"*/;
  if ( StringLiteral_21435/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21435/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v96 = (System_Int32_array **)StringLiteral_21435/*"oncompletetarget"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( v23->max_length <= 0xA )
    goto LABEL_58;
  v23->m_Items[10] = (Il2CppObject *)v96;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[10], v96, v90, v91, v92, v93, v94, v95);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v103 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_59:
      v106 = sub_B52A7C(v24);
      sub_B52A28(v106, 0LL);
    }
  }
  if ( v23->max_length <= 0xB )
  {
LABEL_58:
    v105 = sub_B52A88(v24);
    sub_B52A28(v105, 0LL);
  }
  v23->m_Items[11] = (Il2CppObject *)v103;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[11], v103, v97, v98, v99, v100, v101, v102);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v104 = iTween__Hash(v23, 0LL);
  iTween__MoveTo_43223368(gameObject, v104, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_26899492(
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
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x23
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
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
  int v110[4]; // [xsp+0h] [xbp-60h] BYREF
  int v111; // [xsp+18h] [xbp-48h] BYREF
  char v112[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_42B10F6 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&UnityEngine_Vector3_TypeInfo);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21435/*"oncompletetarget"*/);
    sub_B52984(&StringLiteral_21687/*"position"*/);
    sub_B52984(&StringLiteral_21397/*"onAnimEnd"*/);
    sub_B52984(&StringLiteral_20088/*"isLocal"*/);
    sub_B52984(&StringLiteral_18246/*"easeType"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B10F6 = 1;
  }
  this->fields.endCallback = callback;
  sub_B52920(
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
  v20 = sub_B5299C(object___TypeInfo, 12LL);
  if ( !v20 )
    sub_B52A5C(0LL, v21);
  v28 = (System_Object_array *)v20;
  v29 = (UnityEngine_GameObject_o *)StringLiteral_20088/*"isLocal"*/;
  if ( StringLiteral_20088/*"isLocal"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_20088/*"isLocal"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v30 = (System_Int32_array **)StringLiteral_20088/*"isLocal"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !v28->max_length )
    goto LABEL_63;
  v28->m_Items[0] = (Il2CppObject *)v30;
  sub_B52920((BattleServantConfConponent_o *)v28->m_Items, v30, v22, v23, v24, v25, v26, v27);
  v112[0] = 1;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v112);
  v37 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_63;
  v28->m_Items[1] = (Il2CppObject *)v37;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21687/*"position"*/;
  if ( StringLiteral_21687/*"position"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21687/*"position"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v44 = (System_Int32_array **)StringLiteral_21687/*"position"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_63;
  v28->m_Items[2] = (Il2CppObject *)v44;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
  *(float *)v110 = x;
  *(float *)&v110[1] = y;
  *(float *)&v110[2] = z;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v110);
  v51 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
  }
  if ( v28->max_length <= 3 )
    goto LABEL_63;
  v28->m_Items[3] = (Il2CppObject *)v51;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_18246/*"easeType"*/;
  if ( StringLiteral_18246/*"easeType"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_18246/*"easeType"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v58 = (System_Int32_array **)StringLiteral_18246/*"easeType"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v28->max_length <= 4 )
    goto LABEL_63;
  v28->m_Items[4] = (Il2CppObject *)v58;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
  if ( v17 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(v17, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
  }
  if ( v28->max_length <= 5 )
    goto LABEL_63;
  v28->m_Items[5] = (Il2CppObject *)v17;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[5], v17, v59, v60, v61, v62, v63, v64);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_22867/*"time"*/;
  if ( StringLiteral_22867/*"time"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_22867/*"time"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v71 = (System_Int32_array **)StringLiteral_22867/*"time"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( v28->max_length <= 6 )
    goto LABEL_63;
  v28->m_Items[6] = (Il2CppObject *)v71;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[6], v71, v65, v66, v67, v68, v69, v70);
  v111 = v18;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v111);
  v78 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
  }
  if ( v28->max_length <= 7 )
    goto LABEL_63;
  v28->m_Items[7] = (Il2CppObject *)v78;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[7], v78, v72, v73, v74, v75, v76, v77);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21433/*"oncomplete"*/;
  if ( StringLiteral_21433/*"oncomplete"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21433/*"oncomplete"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v85 = (System_Int32_array **)StringLiteral_21433/*"oncomplete"*/;
  }
  else
  {
    v85 = 0LL;
  }
  if ( v28->max_length <= 8 )
    goto LABEL_63;
  v28->m_Items[8] = (Il2CppObject *)v85;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[8], v85, v79, v80, v81, v82, v83, v84);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21397/*"onAnimEnd"*/;
  if ( StringLiteral_21397/*"onAnimEnd"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21397/*"onAnimEnd"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v92 = (System_Int32_array **)StringLiteral_21397/*"onAnimEnd"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( v28->max_length <= 9 )
    goto LABEL_63;
  v28->m_Items[9] = (Il2CppObject *)v92;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[9], v92, v86, v87, v88, v89, v90, v91);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21435/*"oncompletetarget"*/;
  if ( StringLiteral_21435/*"oncompletetarget"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21435/*"oncompletetarget"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_64;
    v99 = (System_Int32_array **)StringLiteral_21435/*"oncompletetarget"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( v28->max_length <= 0xA )
    goto LABEL_63;
  v28->m_Items[10] = (Il2CppObject *)v99;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[10], v99, v93, v94, v95, v96, v97, v98);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v106 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_B52A44(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
    {
LABEL_64:
      v109 = sub_B52A7C(v29);
      sub_B52A28(v109, 0LL);
    }
  }
  if ( v28->max_length <= 0xB )
  {
LABEL_63:
    v108 = sub_B52A88(v29);
    sub_B52A28(v108, 0LL);
  }
  v28->m_Items[11] = (Il2CppObject *)v106;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[11], v106, v100, v101, v102, v103, v104, v105);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v107 = iTween__Hash(v28, 0LL);
  iTween__MoveTo_43223368(gameObject, v107, 0LL);
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
    sub_B52920(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  float z; // w9
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **easeTypeIn; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
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
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x19
  System_Collections_Hashtable_o *v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  float slideInTime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v97; // [xsp+10h] [xbp-30h] BYREF
  float v98; // [xsp+18h] [xbp-28h]
  char v99[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B10F5 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&UnityEngine_Vector3_TypeInfo);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21435/*"oncompletetarget"*/);
    sub_B52984(&StringLiteral_21687/*"position"*/);
    sub_B52984(&StringLiteral_21397/*"onAnimEnd"*/);
    sub_B52984(&StringLiteral_20088/*"isLocal"*/);
    sub_B52984(&StringLiteral_18246/*"easeType"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B10F5 = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = sub_B5299C(object___TypeInfo, 12LL);
  if ( !v4 )
    sub_B52A5C(0LL, v5);
  v12 = (System_Object_array *)v4;
  v13 = (UnityEngine_GameObject_o *)StringLiteral_20088/*"isLocal"*/;
  if ( StringLiteral_20088/*"isLocal"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_20088/*"isLocal"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v14 = (System_Int32_array **)StringLiteral_20088/*"isLocal"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
    goto LABEL_58;
  v12->m_Items[0] = (Il2CppObject *)v14;
  sub_B52920((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  v99[0] = 1;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v99);
  v21 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_58;
  v12->m_Items[1] = (Il2CppObject *)v21;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21687/*"position"*/;
  if ( StringLiteral_21687/*"position"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21687/*"position"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v28 = (System_Int32_array **)StringLiteral_21687/*"position"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_58;
  v12->m_Items[2] = (Il2CppObject *)v28;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  z = this->fields.slideInPosition.fields.z;
  v97 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v98 = z;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v97);
  v36 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
  }
  if ( v12->max_length <= 3 )
    goto LABEL_58;
  v12->m_Items[3] = (Il2CppObject *)v36;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_18246/*"easeType"*/;
  if ( StringLiteral_18246/*"easeType"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_18246/*"easeType"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v43 = (System_Int32_array **)StringLiteral_18246/*"easeType"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( v12->max_length <= 4 )
    goto LABEL_58;
  v12->m_Items[4] = (Il2CppObject *)v43;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  easeTypeIn = (System_Int32_array **)this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(this->fields.easeTypeIn, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
  }
  if ( v12->max_length <= 5 )
    goto LABEL_58;
  v12->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[5], easeTypeIn, v44, v45, v46, v47, v48, v49);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_22867/*"time"*/;
  if ( StringLiteral_22867/*"time"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_22867/*"time"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v57 = (System_Int32_array **)StringLiteral_22867/*"time"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v12->max_length <= 6 )
    goto LABEL_58;
  v12->m_Items[6] = (Il2CppObject *)v57;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[6], v57, v51, v52, v53, v54, v55, v56);
  slideInTime = this->fields.slideInTime;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v64 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
  }
  if ( v12->max_length <= 7 )
    goto LABEL_58;
  v12->m_Items[7] = (Il2CppObject *)v64;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[7], v64, v58, v59, v60, v61, v62, v63);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21433/*"oncomplete"*/;
  if ( StringLiteral_21433/*"oncomplete"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21433/*"oncomplete"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v71 = (System_Int32_array **)StringLiteral_21433/*"oncomplete"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( v12->max_length <= 8 )
    goto LABEL_58;
  v12->m_Items[8] = (Il2CppObject *)v71;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[8], v71, v65, v66, v67, v68, v69, v70);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21397/*"onAnimEnd"*/;
  if ( StringLiteral_21397/*"onAnimEnd"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21397/*"onAnimEnd"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v78 = (System_Int32_array **)StringLiteral_21397/*"onAnimEnd"*/;
  }
  else
  {
    v78 = 0LL;
  }
  if ( v12->max_length <= 9 )
    goto LABEL_58;
  v12->m_Items[9] = (Il2CppObject *)v78;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[9], v78, v72, v73, v74, v75, v76, v77);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21435/*"oncompletetarget"*/;
  if ( StringLiteral_21435/*"oncompletetarget"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21435/*"oncompletetarget"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_59;
    v85 = (System_Int32_array **)StringLiteral_21435/*"oncompletetarget"*/;
  }
  else
  {
    v85 = 0LL;
  }
  if ( v12->max_length <= 0xA )
    goto LABEL_58;
  v12->m_Items[10] = (Il2CppObject *)v85;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[10], v85, v79, v80, v81, v82, v83, v84);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v92 = (System_Int32_array **)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_B52A44(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_59:
      v95 = sub_B52A7C(v13);
      sub_B52A28(v95, 0LL);
    }
  }
  if ( v12->max_length <= 0xB )
  {
LABEL_58:
    v94 = sub_B52A88(v13);
    sub_B52A28(v94, 0LL);
  }
  v12->m_Items[11] = (Il2CppObject *)v92;
  sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[11], v92, v86, v87, v88, v89, v90, v91);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v93 = iTween__Hash(v12, 0LL);
  iTween__MoveTo_43223368(gameObject, v93, 0LL);
}