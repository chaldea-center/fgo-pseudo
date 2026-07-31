void TitleInfoEventTowerSlideAnimation___ctor(TitleInfoEventTowerSlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoEventTowerSlideAnimation__SetPotision(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_21FFECC(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0);
}


void TitleInfoEventTowerSlideAnimation__StartSlideAnim(
        TitleInfoEventTowerSlideAnimation_o *this,
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x20
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
  __int64 v106; // x2
  System_Collections_Hashtable_o *v107; // x0
  __int64 v108; // x0
  float slideOutTime; // [xsp+Ch] [xbp-64h] BYREF
  __int64 v110; // [xsp+10h] [xbp-60h] BYREF
  float v111; // [xsp+18h] [xbp-58h]
  char v112[4]; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_59371AC & 1) == 0 )
  {
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    sub_21FFC50(&StringLiteral_23503/*"onMoveComplete"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23520/*"oncompletetarget"*/);
    sub_21FFC50(&StringLiteral_23869/*"position"*/);
    sub_21FFC50(&StringLiteral_21904/*"isLocal"*/);
    sub_21FFC50(&StringLiteral_19566/*"easeType"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_59371AC = 1;
  }
  this->fields.endCallback = callback;
  sub_21FFBF4(
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_21FFD10(object___TypeInfo, 12)) == 0) )
  {
    sub_21FFECC(transform, v15);
  }
  v23 = (System_Object_array *)transform;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21904/*"isLocal"*/;
  if ( StringLiteral_21904/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_21904/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( !LODWORD(v23->max_length) )
    goto LABEL_44;
  v26 = StringLiteral_21904/*"isLocal"*/;
  v23->m_Items[0] = (Il2CppObject *)StringLiteral_21904/*"isLocal"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v23->m_Items, v26, v17, v18, v19, v20, v21, v22);
  v112[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C050, v112);
  v33 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( (v23->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_44;
  v23->m_Items[1] = v33;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[1], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23869/*"position"*/;
  if ( StringLiteral_23869/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_23869/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( LODWORD(v23->max_length) <= 2 )
    goto LABEL_44;
  v40 = StringLiteral_23869/*"position"*/;
  v23->m_Items[2] = (Il2CppObject *)StringLiteral_23869/*"position"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  v41 = this->fields.slideOutPosition.fields.z;
  v110 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v111 = v41;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v110);
  v48 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( (v23->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_44;
  v23->m_Items[3] = v48;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[3], (int32_t)v48, v42, v43, v44, v45, v46, v47);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_19566/*"easeType"*/;
  if ( StringLiteral_19566/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_19566/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( LODWORD(v23->max_length) <= 4 )
    goto LABEL_44;
  v55 = StringLiteral_19566/*"easeType"*/;
  v23->m_Items[4] = (Il2CppObject *)StringLiteral_19566/*"easeType"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( LODWORD(v23->max_length) <= 5 )
    goto LABEL_44;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[5], (int32_t)easeTypeOut, v56, v57, v58, v59, v60, v61);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_25318/*"time"*/;
  if ( StringLiteral_25318/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_25318/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( LODWORD(v23->max_length) <= 6 )
    goto LABEL_44;
  v69 = StringLiteral_25318/*"time"*/;
  v23->m_Items[6] = (Il2CppObject *)StringLiteral_25318/*"time"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[6], v69, v63, v64, v65, v66, v67, v68);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C0A0, &slideOutTime);
  v76 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( (v23->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_44;
  v23->m_Items[7] = v76;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[7], (int32_t)v76, v70, v71, v72, v73, v74, v75);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23518/*"oncomplete"*/;
  if ( StringLiteral_23518/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_23518/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( LODWORD(v23->max_length) <= 8 )
    goto LABEL_44;
  v83 = StringLiteral_23518/*"oncomplete"*/;
  v23->m_Items[8] = (Il2CppObject *)StringLiteral_23518/*"oncomplete"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[8], v83, v77, v78, v79, v80, v81, v82);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23503/*"onMoveComplete"*/;
  if ( StringLiteral_23503/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_23503/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( LODWORD(v23->max_length) <= 9 )
    goto LABEL_44;
  v90 = StringLiteral_23503/*"onMoveComplete"*/;
  v23->m_Items[9] = (Il2CppObject *)StringLiteral_23503/*"onMoveComplete"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[9], v90, v84, v85, v86, v87, v88, v89);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23520/*"oncompletetarget"*/;
  if ( StringLiteral_23520/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_23520/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_45;
  }
  if ( LODWORD(v23->max_length) <= 0xA )
    goto LABEL_44;
  v97 = StringLiteral_23520/*"oncompletetarget"*/;
  v23->m_Items[10] = (Il2CppObject *)StringLiteral_23520/*"oncompletetarget"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[10], v97, v91, v92, v93, v94, v95, v96);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v104 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_21FFDA4(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_45:
      v108 = sub_21FFEF0(v24, v25);
      sub_21FFD90(v108, 0);
    }
  }
  if ( LODWORD(v23->max_length) <= 0xB )
LABEL_44:
    sub_21FFED4(v24);
  v23->m_Items[11] = v104;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->m_Items[11], (int32_t)v104, v98, v99, v100, v101, v102, v103);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v105, v106);
  v107 = iTween__Hash(v23, 0);
  iTween__MoveTo_75080224(gameObject, v107, 0);
}


void TitleInfoEventTowerSlideAnimation__onAnimEnd(TitleInfoEventTowerSlideAnimation_o *this, const MethodInfo *method)
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
    sub_21FFBF4(p_endCallback, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void TitleInfoEventTowerSlideAnimation__onMoveComplete(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  System_Action_o *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Object_array *v14; // x21
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  float z; // w9
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *v39; // x22
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
  struct System_String_o *easeTypeIn; // x22
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  int32_t v60; // w1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  Il2CppObject *v67; // x22
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  int32_t v74; // w1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  int32_t v81; // w1
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  int32_t v88; // w1
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  Il2CppObject *v95; // x19
  __int64 v96; // x1
  __int64 v97; // x2
  System_Collections_Hashtable_o *v98; // x0
  __int64 v99; // x0
  __int64 v100; // [xsp+0h] [xbp-50h] BYREF
  float v101; // [xsp+8h] [xbp-48h]
  float slideInTime; // [xsp+18h] [xbp-38h] BYREF
  char v103[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_59371AD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23520/*"oncompletetarget"*/);
    sub_21FFC50(&StringLiteral_23869/*"position"*/);
    sub_21FFC50(&StringLiteral_23480/*"onAnimEnd"*/);
    sub_21FFC50(&StringLiteral_21904/*"isLocal"*/);
    sub_21FFC50(&StringLiteral_19566/*"easeType"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_59371AD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_49;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform
    || (transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)transform,
                                                 0)) == 0
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v6, 0, 0, 0),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_21FFD10(object___TypeInfo, 12)) == 0) )
  {
LABEL_49:
    sub_21FFECC(transform, v4);
  }
  v14 = (System_Object_array *)transform;
  v15 = (UnityEngine_GameObject_o *)StringLiteral_21904/*"isLocal"*/;
  if ( StringLiteral_21904/*"isLocal"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_21904/*"isLocal"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_47;
  v17 = StringLiteral_21904/*"isLocal"*/;
  v14->m_Items[0] = (Il2CppObject *)StringLiteral_21904/*"isLocal"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v14->m_Items, v17, v8, v9, v10, v11, v12, v13);
  v103[0] = 1;
  v15 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C050, v103);
  v24 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( (v14->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_47;
  v14->m_Items[1] = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[1], (int32_t)v24, v18, v19, v20, v21, v22, v23);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_23869/*"position"*/;
  if ( StringLiteral_23869/*"position"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_23869/*"position"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_47;
  v31 = StringLiteral_23869/*"position"*/;
  v14->m_Items[2] = (Il2CppObject *)StringLiteral_23869/*"position"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  z = this->fields.slideInPosition.fields.z;
  v100 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v101 = z;
  v15 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v100);
  v39 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( (v14->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_47;
  v14->m_Items[3] = v39;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[3], (int32_t)v39, v33, v34, v35, v36, v37, v38);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_19566/*"easeType"*/;
  if ( StringLiteral_19566/*"easeType"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_19566/*"easeType"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( LODWORD(v14->max_length) <= 4 )
    goto LABEL_47;
  v46 = StringLiteral_19566/*"easeType"*/;
  v14->m_Items[4] = (Il2CppObject *)StringLiteral_19566/*"easeType"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(this->fields.easeTypeIn, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( LODWORD(v14->max_length) <= 5 )
    goto LABEL_47;
  v14->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[5], (int32_t)easeTypeIn, v47, v48, v49, v50, v51, v52);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_25318/*"time"*/;
  if ( StringLiteral_25318/*"time"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_25318/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( LODWORD(v14->max_length) <= 6 )
    goto LABEL_47;
  v60 = StringLiteral_25318/*"time"*/;
  v14->m_Items[6] = (Il2CppObject *)StringLiteral_25318/*"time"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[6], v60, v54, v55, v56, v57, v58, v59);
  slideInTime = this->fields.slideInTime;
  v15 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C0A0, &slideInTime);
  v67 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( (v14->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_47;
  v14->m_Items[7] = v67;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[7], (int32_t)v67, v61, v62, v63, v64, v65, v66);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_23518/*"oncomplete"*/;
  if ( StringLiteral_23518/*"oncomplete"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_23518/*"oncomplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( LODWORD(v14->max_length) <= 8 )
    goto LABEL_47;
  v74 = StringLiteral_23518/*"oncomplete"*/;
  v14->m_Items[8] = (Il2CppObject *)StringLiteral_23518/*"oncomplete"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[8], v74, v68, v69, v70, v71, v72, v73);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_23480/*"onAnimEnd"*/;
  if ( StringLiteral_23480/*"onAnimEnd"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_23480/*"onAnimEnd"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( LODWORD(v14->max_length) <= 9 )
    goto LABEL_47;
  v81 = StringLiteral_23480/*"onAnimEnd"*/;
  v14->m_Items[9] = (Il2CppObject *)StringLiteral_23480/*"onAnimEnd"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[9], v81, v75, v76, v77, v78, v79, v80);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_23520/*"oncompletetarget"*/;
  if ( StringLiteral_23520/*"oncompletetarget"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(StringLiteral_23520/*"oncompletetarget"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_48;
  }
  if ( LODWORD(v14->max_length) <= 0xA )
    goto LABEL_47;
  v88 = StringLiteral_23520/*"oncompletetarget"*/;
  v14->m_Items[10] = (Il2CppObject *)StringLiteral_23520/*"oncompletetarget"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[10], v88, v82, v83, v84, v85, v86, v87);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v95 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = (UnityEngine_GameObject_o *)sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_48:
      v99 = sub_21FFEF0(v15, v16);
      sub_21FFD90(v99, 0);
    }
  }
  if ( LODWORD(v14->max_length) <= 0xB )
LABEL_47:
    sub_21FFED4(v15);
  v14->m_Items[11] = v95;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[11], (int32_t)v95, v89, v90, v91, v92, v93, v94);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v96, v97);
  v98 = iTween__Hash(v14, 0);
  iTween__MoveTo_75080224(gameObject, v98, 0);
}