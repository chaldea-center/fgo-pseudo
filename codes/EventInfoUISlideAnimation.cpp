void EventInfoUISlideAnimation___ctor(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector3_o EventInfoUISlideAnimation__GetSlideOutPosition(
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


void EventInfoUISlideAnimation__SetAfterActionAndInPosition(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  float z; // s8
  float y; // s9
  struct System_Action_o **p_endCallback; // x19
  float x; // s10

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  this->fields.endCallback = callback;
  p_endCallback = &this->fields.endCallback;
  x = afterPosition.fields.x;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  *((float *)p_endCallback - 3) = x;
  *((float *)p_endCallback - 2) = y;
  *((float *)p_endCallback - 1) = z;
}


void EventInfoUISlideAnimation__SetPotision(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0);
}


void EventInfoUISlideAnimation__StartSlideAnim(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Object_array *v23; // x21
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x22
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  float v41; // w9
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
  struct System_String_o *easeTypeOut; // x22
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
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  int32_t v83; // w1
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  int32_t v90; // w1
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  int32_t v97; // w1
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  Il2CppObject *v104; // x19
  __int64 v105; // x1
  System_Collections_Hashtable_o *v106; // x0
  __int64 v107; // x0
  float slideOutTime; // [xsp+Ch] [xbp-64h] BYREF
  __int64 v109; // [xsp+10h] [xbp-60h] BYREF
  float v110; // [xsp+18h] [xbp-58h]
  char v111[4]; // [xsp+1Ch] [xbp-54h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_597303B & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    sub_2213A60(&StringLiteral_23550/*"onMoveComplete"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23567/*"oncompletetarget"*/);
    sub_2213A60(&StringLiteral_23916/*"position"*/);
    sub_2213A60(&StringLiteral_21946/*"isLocal"*/);
    sub_2213A60(&StringLiteral_19608/*"easeType"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_597303B = 1;
  }
  this->fields.endCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v15 = sub_2213B20(object___TypeInfo, 12);
  if ( !v15 )
    sub_2213CDC(0, v16);
  v23 = (System_Object_array *)v15;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21946/*"isLocal"*/;
  if ( StringLiteral_21946/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_21946/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( !LODWORD(v23->max_length) )
    goto LABEL_43;
  v26 = StringLiteral_21946/*"isLocal"*/;
  v23->m_Items[0] = (Il2CppObject *)StringLiteral_21946/*"isLocal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v23->m_Items, v26, v17, v18, v19, v20, v21, v22);
  v111[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984328, v111);
  v33 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( (v23->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_43;
  v23->m_Items[1] = v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[1], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23916/*"position"*/;
  if ( StringLiteral_23916/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23916/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( LODWORD(v23->max_length) <= 2 )
    goto LABEL_43;
  v40 = StringLiteral_23916/*"position"*/;
  v23->m_Items[2] = (Il2CppObject *)StringLiteral_23916/*"position"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  v41 = this->fields.slideOutPosition.fields.z;
  v109 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v110 = v41;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v109);
  v48 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( (v23->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_43;
  v23->m_Items[3] = v48;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[3], (int32_t)v48, v42, v43, v44, v45, v46, v47);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_19608/*"easeType"*/;
  if ( StringLiteral_19608/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_19608/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( LODWORD(v23->max_length) <= 4 )
    goto LABEL_43;
  v55 = StringLiteral_19608/*"easeType"*/;
  v23->m_Items[4] = (Il2CppObject *)StringLiteral_19608/*"easeType"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( LODWORD(v23->max_length) <= 5 )
    goto LABEL_43;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[5], (int32_t)easeTypeOut, v56, v57, v58, v59, v60, v61);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_25366/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( LODWORD(v23->max_length) <= 6 )
    goto LABEL_43;
  v69 = StringLiteral_25366/*"time"*/;
  v23->m_Items[6] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[6], v69, v63, v64, v65, v66, v67, v68);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984378, &slideOutTime);
  v76 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( (v23->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_43;
  v23->m_Items[7] = v76;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[7], (int32_t)v76, v70, v71, v72, v73, v74, v75);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23565/*"oncomplete"*/;
  if ( StringLiteral_23565/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( LODWORD(v23->max_length) <= 8 )
    goto LABEL_43;
  v83 = StringLiteral_23565/*"oncomplete"*/;
  v23->m_Items[8] = (Il2CppObject *)StringLiteral_23565/*"oncomplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[8], v83, v77, v78, v79, v80, v81, v82);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23550/*"onMoveComplete"*/;
  if ( StringLiteral_23550/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23550/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( LODWORD(v23->max_length) <= 9 )
    goto LABEL_43;
  v90 = StringLiteral_23550/*"onMoveComplete"*/;
  v23->m_Items[9] = (Il2CppObject *)StringLiteral_23550/*"onMoveComplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[9], v90, v84, v85, v86, v87, v88, v89);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23567/*"oncompletetarget"*/;
  if ( StringLiteral_23567/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23567/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_44;
  }
  if ( LODWORD(v23->max_length) <= 0xA )
    goto LABEL_43;
  v97 = StringLiteral_23567/*"oncompletetarget"*/;
  v23->m_Items[10] = (Il2CppObject *)StringLiteral_23567/*"oncompletetarget"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[10], v97, v91, v92, v93, v94, v95, v96);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v104 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_2213BB4(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_44:
      v107 = sub_2213D00(v24, v25);
      sub_2213BA0(v107, 0);
    }
  }
  if ( LODWORD(v23->max_length) <= 0xB )
LABEL_43:
    sub_2213CE4(v24);
  v23->m_Items[11] = v104;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->m_Items[11], (int32_t)v104, v98, v99, v100, v101, v102, v103);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v105);
  v106 = iTween__Hash(v23, 0);
  iTween__MoveTo_75293528(gameObject, v106, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoUISlideAnimation__StartSlideAnim_52752912(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o slidePosition,
        bool isTypeIn,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v15; // x8
  __int64 v16; // x9
  int v17; // s11
  Il2CppObject *v18; // x22
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Object_array *v28; // x21
  UnityEngine_GameObject_o *v29; // x0
  __int64 v30; // x1
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *v38; // x23
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  Il2CppObject *v52; // x23
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int32_t v72; // w1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  Il2CppObject *v79; // x22
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  int32_t v86; // w1
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  int32_t v93; // w1
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  int32_t v100; // w1
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  Il2CppObject *v107; // x19
  __int64 v108; // x1
  System_Collections_Hashtable_o *v109; // x0
  __int64 v110; // x0
  int v111; // [xsp+Ch] [xbp-74h] BYREF
  _DWORD v112[3]; // [xsp+10h] [xbp-70h] BYREF
  char v113[4]; // [xsp+1Ch] [xbp-64h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_597303D & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23567/*"oncompletetarget"*/);
    sub_2213A60(&StringLiteral_23916/*"position"*/);
    sub_2213A60(&StringLiteral_23527/*"onAnimEnd"*/);
    sub_2213A60(&StringLiteral_21946/*"isLocal"*/);
    sub_2213A60(&StringLiteral_19608/*"easeType"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_597303D = 1;
  }
  this->fields.endCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    (System_String_o *)isTypeIn,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  v15 = 52;
  if ( isTypeIn )
  {
    v15 = 48;
    v16 = 32;
  }
  else
  {
    v16 = 40;
  }
  v17 = *(_DWORD *)((char *)&this->klass + v15);
  v18 = *(Il2CppObject **)((char *)&this->klass + v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v20 = sub_2213B20(object___TypeInfo, 12);
  if ( !v20 )
    sub_2213CDC(0, v21);
  v28 = (System_Object_array *)v20;
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21946/*"isLocal"*/;
  if ( StringLiteral_21946/*"isLocal"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_21946/*"isLocal"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( !LODWORD(v28->max_length) )
    goto LABEL_46;
  v31 = StringLiteral_21946/*"isLocal"*/;
  v28->m_Items[0] = (Il2CppObject *)StringLiteral_21946/*"isLocal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v28->m_Items, v31, v22, v23, v24, v25, v26, v27);
  v113[0] = 1;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984328, v113);
  v38 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( (v28->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_46;
  v28->m_Items[1] = v38;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[1], (int32_t)v38, v32, v33, v34, v35, v36, v37);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_23916/*"position"*/;
  if ( StringLiteral_23916/*"position"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23916/*"position"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( LODWORD(v28->max_length) <= 2 )
    goto LABEL_46;
  v45 = StringLiteral_23916/*"position"*/;
  v28->m_Items[2] = (Il2CppObject *)StringLiteral_23916/*"position"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[2], v45, v39, v40, v41, v42, v43, v44);
  *(float *)v112 = x;
  *(float *)&v112[1] = y;
  *(float *)&v112[2] = z;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v112);
  v52 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( (v28->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_46;
  v28->m_Items[3] = v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[3], (int32_t)v52, v46, v47, v48, v49, v50, v51);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_19608/*"easeType"*/;
  if ( StringLiteral_19608/*"easeType"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_19608/*"easeType"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( LODWORD(v28->max_length) <= 4 )
    goto LABEL_46;
  v59 = StringLiteral_19608/*"easeType"*/;
  v28->m_Items[4] = (Il2CppObject *)StringLiteral_19608/*"easeType"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[4], v59, v53, v54, v55, v56, v57, v58);
  if ( v18 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(v18, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( LODWORD(v28->max_length) <= 5 )
    goto LABEL_46;
  v28->m_Items[5] = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[5], (int32_t)v18, v60, v61, v62, v63, v64, v65);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_25366/*"time"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( LODWORD(v28->max_length) <= 6 )
    goto LABEL_46;
  v72 = StringLiteral_25366/*"time"*/;
  v28->m_Items[6] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[6], v72, v66, v67, v68, v69, v70, v71);
  v111 = v17;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984378, &v111);
  v79 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( (v28->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_46;
  v28->m_Items[7] = v79;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[7], (int32_t)v79, v73, v74, v75, v76, v77, v78);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_23565/*"oncomplete"*/;
  if ( StringLiteral_23565/*"oncomplete"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( LODWORD(v28->max_length) <= 8 )
    goto LABEL_46;
  v86 = StringLiteral_23565/*"oncomplete"*/;
  v28->m_Items[8] = (Il2CppObject *)StringLiteral_23565/*"oncomplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[8], v86, v80, v81, v82, v83, v84, v85);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_23527/*"onAnimEnd"*/;
  if ( StringLiteral_23527/*"onAnimEnd"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23527/*"onAnimEnd"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( LODWORD(v28->max_length) <= 9 )
    goto LABEL_46;
  v93 = StringLiteral_23527/*"onAnimEnd"*/;
  v28->m_Items[9] = (Il2CppObject *)StringLiteral_23527/*"onAnimEnd"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[9], v93, v87, v88, v89, v90, v91, v92);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_23567/*"oncompletetarget"*/;
  if ( StringLiteral_23567/*"oncompletetarget"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23567/*"oncompletetarget"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_47;
  }
  if ( LODWORD(v28->max_length) <= 0xA )
    goto LABEL_46;
  v100 = StringLiteral_23567/*"oncompletetarget"*/;
  v28->m_Items[10] = (Il2CppObject *)StringLiteral_23567/*"oncompletetarget"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[10], v100, v94, v95, v96, v97, v98, v99);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v107 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_2213BB4(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
    {
LABEL_47:
      v110 = sub_2213D00(v29, v30);
      sub_2213BA0(v110, 0);
    }
  }
  if ( LODWORD(v28->max_length) <= 0xB )
LABEL_46:
    sub_2213CE4(v29);
  v28->m_Items[11] = v107;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->m_Items[11], (int32_t)v107, v101, v102, v103, v104, v105, v106);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v108);
  v109 = iTween__Hash(v28, 0);
  iTween__MoveTo_75293528(gameObject, v109, 0);
}


void EventInfoUISlideAnimation__onAnimEnd(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_endCallback; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback;
  v9 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0;
    sub_2213A04(p_endCallback, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Object_array *v12; // x21
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1
  float z; // w9
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x22
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
  struct System_String_o *easeTypeIn; // x22
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
  Il2CppObject *v65; // x22
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int32_t v72; // w1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  int32_t v79; // w1
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  int32_t v86; // w1
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  Il2CppObject *v93; // x19
  __int64 v94; // x1
  System_Collections_Hashtable_o *v95; // x0
  __int64 v96; // x0
  __int64 v97; // [xsp+0h] [xbp-50h] BYREF
  float v98; // [xsp+8h] [xbp-48h]
  float slideInTime; // [xsp+18h] [xbp-38h] BYREF
  char v100[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_597303C & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23567/*"oncompletetarget"*/);
    sub_2213A60(&StringLiteral_23916/*"position"*/);
    sub_2213A60(&StringLiteral_23527/*"onAnimEnd"*/);
    sub_2213A60(&StringLiteral_21946/*"isLocal"*/);
    sub_2213A60(&StringLiteral_19608/*"easeType"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_597303C = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = sub_2213B20(object___TypeInfo, 12);
  if ( !v4 )
    sub_2213CDC(0, v5);
  v12 = (System_Object_array *)v4;
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21946/*"isLocal"*/;
  if ( StringLiteral_21946/*"isLocal"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_21946/*"isLocal"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_43;
  v15 = StringLiteral_21946/*"isLocal"*/;
  v12->m_Items[0] = (Il2CppObject *)StringLiteral_21946/*"isLocal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v12->m_Items, v15, v6, v7, v8, v9, v10, v11);
  v100[0] = 1;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984328, v100);
  v22 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( (v12->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_43;
  v12->m_Items[1] = v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[1], (int32_t)v22, v16, v17, v18, v19, v20, v21);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_23916/*"position"*/;
  if ( StringLiteral_23916/*"position"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23916/*"position"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( LODWORD(v12->max_length) <= 2 )
    goto LABEL_43;
  v29 = StringLiteral_23916/*"position"*/;
  v12->m_Items[2] = (Il2CppObject *)StringLiteral_23916/*"position"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  z = this->fields.slideInPosition.fields.z;
  v97 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v98 = z;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v97);
  v37 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( (v12->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_43;
  v12->m_Items[3] = v37;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[3], (int32_t)v37, v31, v32, v33, v34, v35, v36);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_19608/*"easeType"*/;
  if ( StringLiteral_19608/*"easeType"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_19608/*"easeType"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( LODWORD(v12->max_length) <= 4 )
    goto LABEL_43;
  v44 = StringLiteral_19608/*"easeType"*/;
  v12->m_Items[4] = (Il2CppObject *)StringLiteral_19608/*"easeType"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(this->fields.easeTypeIn, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( LODWORD(v12->max_length) <= 5 )
    goto LABEL_43;
  v12->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[5], (int32_t)easeTypeIn, v45, v46, v47, v48, v49, v50);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_25366/*"time"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( LODWORD(v12->max_length) <= 6 )
    goto LABEL_43;
  v58 = StringLiteral_25366/*"time"*/;
  v12->m_Items[6] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[6], v58, v52, v53, v54, v55, v56, v57);
  slideInTime = this->fields.slideInTime;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_5984378, &slideInTime);
  v65 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( (v12->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_43;
  v12->m_Items[7] = v65;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[7], (int32_t)v65, v59, v60, v61, v62, v63, v64);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_23565/*"oncomplete"*/;
  if ( StringLiteral_23565/*"oncomplete"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( LODWORD(v12->max_length) <= 8 )
    goto LABEL_43;
  v72 = StringLiteral_23565/*"oncomplete"*/;
  v12->m_Items[8] = (Il2CppObject *)StringLiteral_23565/*"oncomplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[8], v72, v66, v67, v68, v69, v70, v71);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_23527/*"onAnimEnd"*/;
  if ( StringLiteral_23527/*"onAnimEnd"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23527/*"onAnimEnd"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( LODWORD(v12->max_length) <= 9 )
    goto LABEL_43;
  v79 = StringLiteral_23527/*"onAnimEnd"*/;
  v12->m_Items[9] = (Il2CppObject *)StringLiteral_23527/*"onAnimEnd"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[9], v79, v73, v74, v75, v76, v77, v78);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_23567/*"oncompletetarget"*/;
  if ( StringLiteral_23567/*"oncompletetarget"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(StringLiteral_23567/*"oncompletetarget"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_44;
  }
  if ( LODWORD(v12->max_length) <= 0xA )
    goto LABEL_43;
  v86 = StringLiteral_23567/*"oncompletetarget"*/;
  v12->m_Items[10] = (Il2CppObject *)StringLiteral_23567/*"oncompletetarget"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[10], v86, v80, v81, v82, v83, v84, v85);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v93 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_2213BB4(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_44:
      v96 = sub_2213D00(v13, v14);
      sub_2213BA0(v96, 0);
    }
  }
  if ( LODWORD(v12->max_length) <= 0xB )
LABEL_43:
    sub_2213CE4(v13);
  v12->m_Items[11] = v93;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->m_Items[11], (int32_t)v93, v87, v88, v89, v90, v91, v92);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v94);
  v95 = iTween__Hash(v12, 0);
  iTween__MoveTo_75293528(gameObject, v95, 0);
}