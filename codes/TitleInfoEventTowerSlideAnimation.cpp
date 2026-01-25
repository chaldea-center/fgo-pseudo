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
    sub_1C7BD40(0, v4);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4CED027 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22624/*"onMoveComplete"*/);
    sub_1C7BAE8(&StringLiteral_24308/*"time"*/);
    sub_1C7BAE8(&StringLiteral_22639/*"oncompletetarget"*/);
    sub_1C7BAE8(&StringLiteral_22955/*"position"*/);
    sub_1C7BAE8(&StringLiteral_21107/*"isLocal"*/);
    sub_1C7BAE8(&StringLiteral_18869/*"easeType"*/);
    sub_1C7BAE8(&StringLiteral_22637/*"oncomplete"*/);
    sub_1C7BAE8(&iTween_TypeInfo);
    byte_4CED027 = 1;
  }
  this->fields.endCallback = callback;
  sub_1C7BA8C(
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
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C7BB90(object___TypeInfo, 12)) == 0) )
  {
    sub_1C7BD40(transform, v15);
  }
  v23 = (System_Object_array *)transform;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21107/*"isLocal"*/;
  if ( StringLiteral_21107/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_21107/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = StringLiteral_21107/*"isLocal"*/;
  }
  else
  {
    v25 = 0;
  }
  if ( !LODWORD(v23->max_length) )
    goto LABEL_58;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v109[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v109);
  v32 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( LODWORD(v23->max_length) <= 1 )
    goto LABEL_58;
  v23->m_Items[1] = v32;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[1], (int32_t)v32, v26, v27, v28, v29, v30, v31);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22955/*"position"*/;
  if ( StringLiteral_22955/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_22955/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v39 = StringLiteral_22955/*"position"*/;
  }
  else
  {
    v39 = 0;
  }
  if ( LODWORD(v23->max_length) <= 2 )
    goto LABEL_58;
  v23->m_Items[2] = (Il2CppObject *)v39;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  v40 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v107 = this->fields.slideOutPosition.fields.z;
  v106 = v40;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v106);
  v47 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( LODWORD(v23->max_length) <= 3 )
    goto LABEL_58;
  v23->m_Items[3] = v47;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[3], (int32_t)v47, v41, v42, v43, v44, v45, v46);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_18869/*"easeType"*/;
  if ( StringLiteral_18869/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_18869/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v54 = StringLiteral_18869/*"easeType"*/;
  }
  else
  {
    v54 = 0;
  }
  if ( LODWORD(v23->max_length) <= 4 )
    goto LABEL_58;
  v23->m_Items[4] = (Il2CppObject *)v54;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( LODWORD(v23->max_length) <= 5 )
    goto LABEL_58;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[5], (int32_t)easeTypeOut, v55, v56, v57, v58, v59, v60);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_24308/*"time"*/;
  if ( StringLiteral_24308/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_24308/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v68 = StringLiteral_24308/*"time"*/;
  }
  else
  {
    v68 = 0;
  }
  if ( LODWORD(v23->max_length) <= 6 )
    goto LABEL_58;
  v23->m_Items[6] = (Il2CppObject *)v68;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[6], v68, v62, v63, v64, v65, v66, v67);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v75 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( LODWORD(v23->max_length) <= 7 )
    goto LABEL_58;
  v23->m_Items[7] = v75;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[7], (int32_t)v75, v69, v70, v71, v72, v73, v74);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22637/*"oncomplete"*/;
  if ( StringLiteral_22637/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_22637/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v82 = StringLiteral_22637/*"oncomplete"*/;
  }
  else
  {
    v82 = 0;
  }
  if ( LODWORD(v23->max_length) <= 8 )
    goto LABEL_58;
  v23->m_Items[8] = (Il2CppObject *)v82;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[8], v82, v76, v77, v78, v79, v80, v81);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22624/*"onMoveComplete"*/;
  if ( StringLiteral_22624/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_22624/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v89 = StringLiteral_22624/*"onMoveComplete"*/;
  }
  else
  {
    v89 = 0;
  }
  if ( LODWORD(v23->max_length) <= 9 )
    goto LABEL_58;
  v23->m_Items[9] = (Il2CppObject *)v89;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22639/*"oncompletetarget"*/;
  if ( StringLiteral_22639/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_22639/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v96 = StringLiteral_22639/*"oncompletetarget"*/;
  }
  else
  {
    v96 = 0;
  }
  if ( LODWORD(v23->max_length) <= 0xA )
    goto LABEL_58;
  v23->m_Items[10] = (Il2CppObject *)v96;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[10], v96, v90, v91, v92, v93, v94, v95);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v103 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C7BC24(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_59:
      v105 = sub_1C7BD64(v24);
      sub_1C7BC10(v105, 0);
    }
  }
  if ( LODWORD(v23->max_length) <= 0xB )
LABEL_58:
    sub_1C7BD48(v24);
  v23->m_Items[11] = v103;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v23->m_Items[11], (int32_t)v103, v97, v98, v99, v100, v101, v102);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v104 = iTween__Hash(v23, 0);
  iTween__MoveTo_63814476(gameObject, v104, 0);
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
    sub_1C7BA8C(p_endCallback, 0, v2, v3, v4, v5, v6, v7);
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
  const MethodInfo *v7; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Object_array *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x9
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  Il2CppObject *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  __int64 v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct System_String_o *easeTypeIn; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  __int64 v60; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  Il2CppObject *v67; // x22
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  __int64 v74; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  __int64 v81; // x1
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  __int64 v88; // x1
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  Il2CppObject *v95; // x19
  System_Collections_Hashtable_o *v96; // x0
  __int64 v97; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v99; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v101[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CED028 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&float_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24308/*"time"*/);
    sub_1C7BAE8(&StringLiteral_22639/*"oncompletetarget"*/);
    sub_1C7BAE8(&StringLiteral_22955/*"position"*/);
    sub_1C7BAE8(&StringLiteral_22601/*"onAnimEnd"*/);
    sub_1C7BAE8(&StringLiteral_21107/*"isLocal"*/);
    sub_1C7BAE8(&StringLiteral_18869/*"easeType"*/);
    sub_1C7BAE8(&StringLiteral_22637/*"oncomplete"*/);
    sub_1C7BAE8(&iTween_TypeInfo);
    byte_4CED028 = 1;
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
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v6 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v6, 0, 0, v7),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C7BB90(object___TypeInfo, 12)) == 0) )
  {
LABEL_63:
    sub_1C7BD40(transform, v4);
  }
  v15 = (System_Object_array *)transform;
  v16 = (UnityEngine_GameObject_o *)StringLiteral_21107/*"isLocal"*/;
  if ( StringLiteral_21107/*"isLocal"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_21107/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v17 = StringLiteral_21107/*"isLocal"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_61;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v15->m_Items, v17, v9, v10, v11, v12, v13, v14);
  v101[0] = 1;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v101);
  v24 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
  }
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_61;
  v15->m_Items[1] = v24;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[1], (int32_t)v24, v18, v19, v20, v21, v22, v23);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22955/*"position"*/;
  if ( StringLiteral_22955/*"position"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_22955/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v31 = StringLiteral_22955/*"position"*/;
  }
  else
  {
    v31 = 0;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_61;
  v15->m_Items[2] = (Il2CppObject *)v31;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v32 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v99 = v32;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v99);
  v39 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
  }
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_61;
  v15->m_Items[3] = v39;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[3], (int32_t)v39, v33, v34, v35, v36, v37, v38);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_18869/*"easeType"*/;
  if ( StringLiteral_18869/*"easeType"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_18869/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v46 = StringLiteral_18869/*"easeType"*/;
  }
  else
  {
    v46 = 0;
  }
  if ( LODWORD(v15->max_length) <= 4 )
    goto LABEL_61;
  v15->m_Items[4] = (Il2CppObject *)v46;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(this->fields.easeTypeIn, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
  }
  if ( LODWORD(v15->max_length) <= 5 )
    goto LABEL_61;
  v15->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[5], (int32_t)easeTypeIn, v47, v48, v49, v50, v51, v52);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_24308/*"time"*/;
  if ( StringLiteral_24308/*"time"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_24308/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v60 = StringLiteral_24308/*"time"*/;
  }
  else
  {
    v60 = 0;
  }
  if ( LODWORD(v15->max_length) <= 6 )
    goto LABEL_61;
  v15->m_Items[6] = (Il2CppObject *)v60;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[6], v60, v54, v55, v56, v57, v58, v59);
  slideInTime = this->fields.slideInTime;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v67 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
  }
  if ( LODWORD(v15->max_length) <= 7 )
    goto LABEL_61;
  v15->m_Items[7] = v67;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[7], (int32_t)v67, v61, v62, v63, v64, v65, v66);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22637/*"oncomplete"*/;
  if ( StringLiteral_22637/*"oncomplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_22637/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v74 = StringLiteral_22637/*"oncomplete"*/;
  }
  else
  {
    v74 = 0;
  }
  if ( LODWORD(v15->max_length) <= 8 )
    goto LABEL_61;
  v15->m_Items[8] = (Il2CppObject *)v74;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[8], v74, v68, v69, v70, v71, v72, v73);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22601/*"onAnimEnd"*/;
  if ( StringLiteral_22601/*"onAnimEnd"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_22601/*"onAnimEnd"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v81 = StringLiteral_22601/*"onAnimEnd"*/;
  }
  else
  {
    v81 = 0;
  }
  if ( LODWORD(v15->max_length) <= 9 )
    goto LABEL_61;
  v15->m_Items[9] = (Il2CppObject *)v81;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[9], v81, v75, v76, v77, v78, v79, v80);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22639/*"oncompletetarget"*/;
  if ( StringLiteral_22639/*"oncompletetarget"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(StringLiteral_22639/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v88 = StringLiteral_22639/*"oncompletetarget"*/;
  }
  else
  {
    v88 = 0;
  }
  if ( LODWORD(v15->max_length) <= 0xA )
    goto LABEL_61;
  v15->m_Items[10] = (Il2CppObject *)v88;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[10], v88, v82, v83, v84, v85, v86, v87);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v95 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C7BC24(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_62:
      v97 = sub_1C7BD64(v16);
      sub_1C7BC10(v97, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= 0xB )
LABEL_61:
    sub_1C7BD48(v16);
  v15->m_Items[11] = v95;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->m_Items[11], (int32_t)v95, v89, v90, v91, v92, v93, v94);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v96 = iTween__Hash(v15, 0);
  iTween__MoveTo_63814476(gameObject, v96, 0);
}