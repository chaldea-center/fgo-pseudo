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
    sub_1C93D2C(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0);
}


void TitleInfoEventTowerSlideAnimation__StartSlideAnim(
        TitleInfoEventTowerSlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Object_array *v23; // x21
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x9
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  Il2CppObject *v47; // x22
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 v54; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_String_o *easeTypeOut; // x22
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  __int64 v68; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  Il2CppObject *v75; // x22
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  __int64 v82; // x1
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  __int64 v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  __int64 v96; // x1
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  Il2CppObject *v103; // x19
  System_Collections_Hashtable_o *v104; // x0
  __int64 v105; // x0
  __int64 v106; // [xsp+0h] [xbp-60h] BYREF
  float v107; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v109[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4D2F546 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&float_TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    sub_1C93AD4(&StringLiteral_22689/*"onMoveComplete"*/);
    sub_1C93AD4(&StringLiteral_24376/*"time"*/);
    sub_1C93AD4(&StringLiteral_22704/*"oncompletetarget"*/);
    sub_1C93AD4(&StringLiteral_23020/*"position"*/);
    sub_1C93AD4(&StringLiteral_21170/*"isLocal"*/);
    sub_1C93AD4(&StringLiteral_18919/*"easeType"*/);
    sub_1C93AD4(&StringLiteral_22702/*"oncomplete"*/);
    sub_1C93AD4(&iTween_TypeInfo);
    byte_4D2F546 = 1;
  }
  this->fields.endCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    (int32_t)method,
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
    || (this->fields.slideOutPosition.fields.y = UnityEngine_Transform__get_localPosition(transform, 0).fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C93B7C(object___TypeInfo, 12)) == 0) )
  {
    sub_1C93D2C(transform, v15);
  }
  v23 = (System_Object_array *)transform;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21170/*"isLocal"*/;
  if ( StringLiteral_21170/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_21170/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = StringLiteral_21170/*"isLocal"*/;
  }
  else
  {
    v25 = 0;
  }
  if ( !LODWORD(v23->max_length) )
    goto LABEL_58;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v109[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v109);
  v32 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( LODWORD(v23->max_length) <= 1 )
    goto LABEL_58;
  v23->m_Items[1] = v32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[1], (int32_t)v32, v26, v27, v28, v29, v30, v31);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23020/*"position"*/;
  if ( StringLiteral_23020/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_23020/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v39 = StringLiteral_23020/*"position"*/;
  }
  else
  {
    v39 = 0;
  }
  if ( LODWORD(v23->max_length) <= 2 )
    goto LABEL_58;
  v23->m_Items[2] = (Il2CppObject *)v39;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  v40 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v107 = this->fields.slideOutPosition.fields.z;
  v106 = v40;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v106);
  v47 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( LODWORD(v23->max_length) <= 3 )
    goto LABEL_58;
  v23->m_Items[3] = v47;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[3], (int32_t)v47, v41, v42, v43, v44, v45, v46);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_18919/*"easeType"*/;
  if ( StringLiteral_18919/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_18919/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v54 = StringLiteral_18919/*"easeType"*/;
  }
  else
  {
    v54 = 0;
  }
  if ( LODWORD(v23->max_length) <= 4 )
    goto LABEL_58;
  v23->m_Items[4] = (Il2CppObject *)v54;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( LODWORD(v23->max_length) <= 5 )
    goto LABEL_58;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[5], (int32_t)easeTypeOut, v55, v56, v57, v58, v59, v60);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_24376/*"time"*/;
  if ( StringLiteral_24376/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_24376/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v68 = StringLiteral_24376/*"time"*/;
  }
  else
  {
    v68 = 0;
  }
  if ( LODWORD(v23->max_length) <= 6 )
    goto LABEL_58;
  v23->m_Items[6] = (Il2CppObject *)v68;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[6], v68, v62, v63, v64, v65, v66, v67);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v75 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( LODWORD(v23->max_length) <= 7 )
    goto LABEL_58;
  v23->m_Items[7] = v75;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[7], (int32_t)v75, v69, v70, v71, v72, v73, v74);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22702/*"oncomplete"*/;
  if ( StringLiteral_22702/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_22702/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v82 = StringLiteral_22702/*"oncomplete"*/;
  }
  else
  {
    v82 = 0;
  }
  if ( LODWORD(v23->max_length) <= 8 )
    goto LABEL_58;
  v23->m_Items[8] = (Il2CppObject *)v82;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[8], v82, v76, v77, v78, v79, v80, v81);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22689/*"onMoveComplete"*/;
  if ( StringLiteral_22689/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_22689/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v89 = StringLiteral_22689/*"onMoveComplete"*/;
  }
  else
  {
    v89 = 0;
  }
  if ( LODWORD(v23->max_length) <= 9 )
    goto LABEL_58;
  v23->m_Items[9] = (Il2CppObject *)v89;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22704/*"oncompletetarget"*/;
  if ( StringLiteral_22704/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_22704/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v96 = StringLiteral_22704/*"oncompletetarget"*/;
  }
  else
  {
    v96 = 0;
  }
  if ( LODWORD(v23->max_length) <= 0xA )
    goto LABEL_58;
  v23->m_Items[10] = (Il2CppObject *)v96;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[10], v96, v90, v91, v92, v93, v94, v95);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v103 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C93C10(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_59:
      v105 = sub_1C93D50(v24);
      sub_1C93BFC(v105, 0);
    }
  }
  if ( LODWORD(v23->max_length) <= 0xB )
LABEL_58:
    sub_1C93D34(v24);
  v23->m_Items[11] = v103;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v23->m_Items[11], (int32_t)v103, v97, v98, v99, v100, v101, v102);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v104 = iTween__Hash(v23, 0);
  iTween__MoveTo_64063288(gameObject, v104, 0);
}


void TitleInfoEventTowerSlideAnimation__onAnimEnd(TitleInfoEventTowerSlideAnimation_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_endCallback; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (GrandQuestFolderBoardItem_o *)&this->fields.endCallback;
  v9 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0;
    sub_1C93A78(p_endCallback, 0, v2, v3, v4, v5, v6, v7);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Object_array *v14; // x21
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x9
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_String_o *easeTypeIn; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  __int64 v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  Il2CppObject *v66; // x22
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  __int64 v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  __int64 v80; // x1
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  __int64 v87; // x1
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  Il2CppObject *v94; // x19
  System_Collections_Hashtable_o *v95; // x0
  __int64 v96; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v98; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v100[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4D2F547 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&float_TypeInfo);
    sub_1C93AD4(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    sub_1C93AD4(&StringLiteral_24376/*"time"*/);
    sub_1C93AD4(&StringLiteral_22704/*"oncompletetarget"*/);
    sub_1C93AD4(&StringLiteral_23020/*"position"*/);
    sub_1C93AD4(&StringLiteral_22666/*"onAnimEnd"*/);
    sub_1C93AD4(&StringLiteral_21170/*"isLocal"*/);
    sub_1C93AD4(&StringLiteral_18919/*"easeType"*/);
    sub_1C93AD4(&StringLiteral_22702/*"oncomplete"*/);
    sub_1C93AD4(&iTween_TypeInfo);
    byte_4D2F547 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_63;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform
    || (transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)transform,
                                                 0)) == 0
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v6, 0, 0, 0),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C93B7C(object___TypeInfo, 12)) == 0) )
  {
LABEL_63:
    sub_1C93D2C(transform, v4);
  }
  v14 = (System_Object_array *)transform;
  v15 = (UnityEngine_GameObject_o *)StringLiteral_21170/*"isLocal"*/;
  if ( StringLiteral_21170/*"isLocal"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_21170/*"isLocal"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
    v16 = StringLiteral_21170/*"isLocal"*/;
  }
  else
  {
    v16 = 0;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_61;
  v14->m_Items[0] = (Il2CppObject *)v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v14->m_Items, v16, v8, v9, v10, v11, v12, v13);
  v100[0] = 1;
  v15 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v100);
  v23 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
  }
  if ( LODWORD(v14->max_length) <= 1 )
    goto LABEL_61;
  v14->m_Items[1] = v23;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[1], (int32_t)v23, v17, v18, v19, v20, v21, v22);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_23020/*"position"*/;
  if ( StringLiteral_23020/*"position"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_23020/*"position"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
    v30 = StringLiteral_23020/*"position"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_61;
  v14->m_Items[2] = (Il2CppObject *)v30;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
  v31 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v98 = v31;
  v15 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v98);
  v38 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
  }
  if ( LODWORD(v14->max_length) <= 3 )
    goto LABEL_61;
  v14->m_Items[3] = v38;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[3], (int32_t)v38, v32, v33, v34, v35, v36, v37);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_18919/*"easeType"*/;
  if ( StringLiteral_18919/*"easeType"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_18919/*"easeType"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
    v45 = StringLiteral_18919/*"easeType"*/;
  }
  else
  {
    v45 = 0;
  }
  if ( LODWORD(v14->max_length) <= 4 )
    goto LABEL_61;
  v14->m_Items[4] = (Il2CppObject *)v45;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(this->fields.easeTypeIn, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
  }
  if ( LODWORD(v14->max_length) <= 5 )
    goto LABEL_61;
  v14->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[5], (int32_t)easeTypeIn, v46, v47, v48, v49, v50, v51);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_24376/*"time"*/;
  if ( StringLiteral_24376/*"time"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_24376/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
    v59 = StringLiteral_24376/*"time"*/;
  }
  else
  {
    v59 = 0;
  }
  if ( LODWORD(v14->max_length) <= 6 )
    goto LABEL_61;
  v14->m_Items[6] = (Il2CppObject *)v59;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[6], v59, v53, v54, v55, v56, v57, v58);
  slideInTime = this->fields.slideInTime;
  v15 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v66 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
  }
  if ( LODWORD(v14->max_length) <= 7 )
    goto LABEL_61;
  v14->m_Items[7] = v66;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[7], (int32_t)v66, v60, v61, v62, v63, v64, v65);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_22702/*"oncomplete"*/;
  if ( StringLiteral_22702/*"oncomplete"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_22702/*"oncomplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
    v73 = StringLiteral_22702/*"oncomplete"*/;
  }
  else
  {
    v73 = 0;
  }
  if ( LODWORD(v14->max_length) <= 8 )
    goto LABEL_61;
  v14->m_Items[8] = (Il2CppObject *)v73;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[8], v73, v67, v68, v69, v70, v71, v72);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_22666/*"onAnimEnd"*/;
  if ( StringLiteral_22666/*"onAnimEnd"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_22666/*"onAnimEnd"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
    v80 = StringLiteral_22666/*"onAnimEnd"*/;
  }
  else
  {
    v80 = 0;
  }
  if ( LODWORD(v14->max_length) <= 9 )
    goto LABEL_61;
  v14->m_Items[9] = (Il2CppObject *)v80;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[9], v80, v74, v75, v76, v77, v78, v79);
  v15 = (UnityEngine_GameObject_o *)StringLiteral_22704/*"oncompletetarget"*/;
  if ( StringLiteral_22704/*"oncompletetarget"*/ )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(StringLiteral_22704/*"oncompletetarget"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_62;
    v87 = StringLiteral_22704/*"oncompletetarget"*/;
  }
  else
  {
    v87 = 0;
  }
  if ( LODWORD(v14->max_length) <= 0xA )
    goto LABEL_61;
  v14->m_Items[10] = (Il2CppObject *)v87;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[10], v87, v81, v82, v83, v84, v85, v86);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v94 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = (UnityEngine_GameObject_o *)sub_1C93C10(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_62:
      v96 = sub_1C93D50(v15);
      sub_1C93BFC(v96, 0);
    }
  }
  if ( LODWORD(v14->max_length) <= 0xB )
LABEL_61:
    sub_1C93D34(v15);
  v14->m_Items[11] = v94;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->m_Items[11], (int32_t)v94, v88, v89, v90, v91, v92, v93);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v95 = iTween__Hash(v14, 0);
  iTween__MoveTo_64063288(gameObject, v95, 0);
}