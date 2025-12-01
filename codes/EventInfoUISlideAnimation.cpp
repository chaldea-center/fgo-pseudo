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
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o **p_endCallback; // x19
  float z; // s8
  float y; // s9
  float x; // s10

  this->fields.endCallback = callback;
  p_endCallback = &this->fields.endCallback;
  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    (int32_t)method,
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
    sub_1C71608(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0);
}


void EventInfoUISlideAnimation__StartSlideAnim(
        EventInfoUISlideAnimation_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v15; // x0
  __int64 v16; // x1
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
  if ( (byte_4CC92D0 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    sub_1C713B0(&StringLiteral_22520/*"onMoveComplete"*/);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22535/*"oncompletetarget"*/);
    sub_1C713B0(&StringLiteral_22847/*"position"*/);
    sub_1C713B0(&StringLiteral_21009/*"isLocal"*/);
    sub_1C713B0(&StringLiteral_18799/*"easeType"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CC92D0 = 1;
  }
  this->fields.endCallback = callback;
  sub_1C71354(
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v15 = sub_1C71458(object___TypeInfo, 12);
  if ( !v15 )
    sub_1C71608(0, v16);
  v23 = (System_Object_array *)v15;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21009/*"isLocal"*/;
  if ( StringLiteral_21009/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_21009/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_21009/*"isLocal"*/;
  }
  else
  {
    v25 = 0;
  }
  if ( !LODWORD(v23->max_length) )
    goto LABEL_57;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v109[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v109);
  v32 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( LODWORD(v23->max_length) <= 1 )
    goto LABEL_57;
  v23->m_Items[1] = v32;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[1], (int32_t)v32, v26, v27, v28, v29, v30, v31);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22847/*"position"*/;
  if ( StringLiteral_22847/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22847/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v39 = StringLiteral_22847/*"position"*/;
  }
  else
  {
    v39 = 0;
  }
  if ( LODWORD(v23->max_length) <= 2 )
    goto LABEL_57;
  v23->m_Items[2] = (Il2CppObject *)v39;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  v40 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v107 = this->fields.slideOutPosition.fields.z;
  v106 = v40;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v106);
  v47 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( LODWORD(v23->max_length) <= 3 )
    goto LABEL_57;
  v23->m_Items[3] = v47;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[3], (int32_t)v47, v41, v42, v43, v44, v45, v46);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_18799/*"easeType"*/;
  if ( StringLiteral_18799/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_18799/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v54 = StringLiteral_18799/*"easeType"*/;
  }
  else
  {
    v54 = 0;
  }
  if ( LODWORD(v23->max_length) <= 4 )
    goto LABEL_57;
  v23->m_Items[4] = (Il2CppObject *)v54;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( LODWORD(v23->max_length) <= 5 )
    goto LABEL_57;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[5], (int32_t)easeTypeOut, v55, v56, v57, v58, v59, v60);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_24189/*"time"*/;
  if ( StringLiteral_24189/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_24189/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v68 = StringLiteral_24189/*"time"*/;
  }
  else
  {
    v68 = 0;
  }
  if ( LODWORD(v23->max_length) <= 6 )
    goto LABEL_57;
  v23->m_Items[6] = (Il2CppObject *)v68;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[6], v68, v62, v63, v64, v65, v66, v67);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v75 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( LODWORD(v23->max_length) <= 7 )
    goto LABEL_57;
  v23->m_Items[7] = v75;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[7], (int32_t)v75, v69, v70, v71, v72, v73, v74);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22533/*"oncomplete"*/;
  if ( StringLiteral_22533/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22533/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v82 = StringLiteral_22533/*"oncomplete"*/;
  }
  else
  {
    v82 = 0;
  }
  if ( LODWORD(v23->max_length) <= 8 )
    goto LABEL_57;
  v23->m_Items[8] = (Il2CppObject *)v82;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[8], v82, v76, v77, v78, v79, v80, v81);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22520/*"onMoveComplete"*/;
  if ( StringLiteral_22520/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22520/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v89 = StringLiteral_22520/*"onMoveComplete"*/;
  }
  else
  {
    v89 = 0;
  }
  if ( LODWORD(v23->max_length) <= 9 )
    goto LABEL_57;
  v23->m_Items[9] = (Il2CppObject *)v89;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22535/*"oncompletetarget"*/;
  if ( StringLiteral_22535/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22535/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v96 = StringLiteral_22535/*"oncompletetarget"*/;
  }
  else
  {
    v96 = 0;
  }
  if ( LODWORD(v23->max_length) <= 0xA )
    goto LABEL_57;
  v23->m_Items[10] = (Il2CppObject *)v96;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[10], v96, v90, v91, v92, v93, v94, v95);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v103 = (Il2CppObject *)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C714EC(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_58:
      v105 = sub_1C7162C(v24);
      sub_1C714D8(v105, 0);
    }
  }
  if ( LODWORD(v23->max_length) <= 0xB )
LABEL_57:
    sub_1C71610(v24);
  v23->m_Items[11] = v103;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->m_Items[11], (int32_t)v103, v97, v98, v99, v100, v101, v102);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v104 = iTween__Hash(v23, 0);
  iTween__MoveTo_63669288(gameObject, v104, 0);
}


void EventInfoUISlideAnimation__StartSlideAnim_44966276(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o slidePosition,
        bool isTypeIn,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v15; // x8
  __int64 v16; // x9
  Il2CppObject *v17; // x22
  int v18; // s11
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  char v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Object_array *v28; // x21
  UnityEngine_GameObject_o *v29; // x0
  __int64 v30; // x1
  char v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  Il2CppObject *v37; // x23
  char v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x1
  char v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  Il2CppObject *v51; // x23
  char v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  __int64 v58; // x1
  char v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  char v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  __int64 v71; // x1
  char v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  Il2CppObject *v78; // x22
  char v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  __int64 v85; // x1
  char v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  __int64 v92; // x1
  char v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  __int64 v99; // x1
  char v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  Il2CppObject *v106; // x19
  System_Collections_Hashtable_o *v107; // x0
  __int64 v108; // x0
  _DWORD v109[4]; // [xsp+0h] [xbp-70h] BYREF
  int v110; // [xsp+38h] [xbp-38h] BYREF
  char v111[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4CC92D2 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22535/*"oncompletetarget"*/);
    sub_1C713B0(&StringLiteral_22847/*"position"*/);
    sub_1C713B0(&StringLiteral_22497/*"onAnimEnd"*/);
    sub_1C713B0(&StringLiteral_21009/*"isLocal"*/);
    sub_1C713B0(&StringLiteral_18799/*"easeType"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CC92D2 = 1;
  }
  this->fields.endCallback = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    isTypeIn,
    (int32_t)method,
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
  v17 = *(Il2CppObject **)((char *)&this->klass + v16);
  v18 = *(_DWORD *)((char *)&this->klass + v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v20 = sub_1C71458(object___TypeInfo, 12);
  if ( !v20 )
    sub_1C71608(0, v21);
  v28 = (System_Object_array *)v20;
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21009/*"isLocal"*/;
  if ( StringLiteral_21009/*"isLocal"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_21009/*"isLocal"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
    v30 = StringLiteral_21009/*"isLocal"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( !LODWORD(v28->max_length) )
    goto LABEL_60;
  v28->m_Items[0] = (Il2CppObject *)v30;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v28->m_Items, v30, v22, v23, v24, v25, v26, v27);
  v111[0] = 1;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v111);
  v37 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
  }
  if ( LODWORD(v28->max_length) <= 1 )
    goto LABEL_60;
  v28->m_Items[1] = v37;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[1], (int32_t)v37, v31, v32, v33, v34, v35, v36);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_22847/*"position"*/;
  if ( StringLiteral_22847/*"position"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22847/*"position"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
    v44 = StringLiteral_22847/*"position"*/;
  }
  else
  {
    v44 = 0;
  }
  if ( LODWORD(v28->max_length) <= 2 )
    goto LABEL_60;
  v28->m_Items[2] = (Il2CppObject *)v44;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
  *(float *)v109 = x;
  *(float *)&v109[1] = y;
  *(float *)&v109[2] = z;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v109);
  v51 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
  }
  if ( LODWORD(v28->max_length) <= 3 )
    goto LABEL_60;
  v28->m_Items[3] = v51;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[3], (int32_t)v51, v45, v46, v47, v48, v49, v50);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_18799/*"easeType"*/;
  if ( StringLiteral_18799/*"easeType"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_18799/*"easeType"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
    v58 = StringLiteral_18799/*"easeType"*/;
  }
  else
  {
    v58 = 0;
  }
  if ( LODWORD(v28->max_length) <= 4 )
    goto LABEL_60;
  v28->m_Items[4] = (Il2CppObject *)v58;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
  if ( v17 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(v17, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
  }
  if ( LODWORD(v28->max_length) <= 5 )
    goto LABEL_60;
  v28->m_Items[5] = v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[5], (int32_t)v17, v59, v60, v61, v62, v63, v64);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_24189/*"time"*/;
  if ( StringLiteral_24189/*"time"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_24189/*"time"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
    v71 = StringLiteral_24189/*"time"*/;
  }
  else
  {
    v71 = 0;
  }
  if ( LODWORD(v28->max_length) <= 6 )
    goto LABEL_60;
  v28->m_Items[6] = (Il2CppObject *)v71;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[6], v71, v65, v66, v67, v68, v69, v70);
  v110 = v18;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v110);
  v78 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
  }
  if ( LODWORD(v28->max_length) <= 7 )
    goto LABEL_60;
  v28->m_Items[7] = v78;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[7], (int32_t)v78, v72, v73, v74, v75, v76, v77);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_22533/*"oncomplete"*/;
  if ( StringLiteral_22533/*"oncomplete"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22533/*"oncomplete"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
    v85 = StringLiteral_22533/*"oncomplete"*/;
  }
  else
  {
    v85 = 0;
  }
  if ( LODWORD(v28->max_length) <= 8 )
    goto LABEL_60;
  v28->m_Items[8] = (Il2CppObject *)v85;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[8], v85, v79, v80, v81, v82, v83, v84);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_22497/*"onAnimEnd"*/;
  if ( StringLiteral_22497/*"onAnimEnd"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22497/*"onAnimEnd"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
    v92 = StringLiteral_22497/*"onAnimEnd"*/;
  }
  else
  {
    v92 = 0;
  }
  if ( LODWORD(v28->max_length) <= 9 )
    goto LABEL_60;
  v28->m_Items[9] = (Il2CppObject *)v92;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[9], v92, v86, v87, v88, v89, v90, v91);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_22535/*"oncompletetarget"*/;
  if ( StringLiteral_22535/*"oncompletetarget"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22535/*"oncompletetarget"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_61;
    v99 = StringLiteral_22535/*"oncompletetarget"*/;
  }
  else
  {
    v99 = 0;
  }
  if ( LODWORD(v28->max_length) <= 0xA )
    goto LABEL_60;
  v28->m_Items[10] = (Il2CppObject *)v99;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[10], v99, v93, v94, v95, v96, v97, v98);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v106 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C714EC(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
    {
LABEL_61:
      v108 = sub_1C7162C(v29);
      sub_1C714D8(v108, 0);
    }
  }
  if ( LODWORD(v28->max_length) <= 0xB )
LABEL_60:
    sub_1C71610(v29);
  v28->m_Items[11] = v106;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->m_Items[11], (int32_t)v106, v100, v101, v102, v103, v104, v105);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v107 = iTween__Hash(v28, 0);
  iTween__MoveTo_63669288(gameObject, v107, 0);
}


void EventInfoUISlideAnimation__onAnimEnd(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
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
    sub_1C71354(p_endCallback, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Object_array *v12; // x21
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x9
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppObject *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_String_o *easeTypeIn; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  __int64 v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  Il2CppObject *v64; // x22
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  __int64 v71; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  __int64 v78; // x1
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  __int64 v85; // x1
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  Il2CppObject *v92; // x19
  System_Collections_Hashtable_o *v93; // x0
  __int64 v94; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v96; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v98[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CC92D1 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22535/*"oncompletetarget"*/);
    sub_1C713B0(&StringLiteral_22847/*"position"*/);
    sub_1C713B0(&StringLiteral_22497/*"onAnimEnd"*/);
    sub_1C713B0(&StringLiteral_21009/*"isLocal"*/);
    sub_1C713B0(&StringLiteral_18799/*"easeType"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CC92D1 = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = sub_1C71458(object___TypeInfo, 12);
  if ( !v4 )
    sub_1C71608(0, v5);
  v12 = (System_Object_array *)v4;
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21009/*"isLocal"*/;
  if ( StringLiteral_21009/*"isLocal"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_21009/*"isLocal"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v14 = StringLiteral_21009/*"isLocal"*/;
  }
  else
  {
    v14 = 0;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_57;
  v12->m_Items[0] = (Il2CppObject *)v14;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  v98[0] = 1;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v98);
  v21 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
  }
  if ( LODWORD(v12->max_length) <= 1 )
    goto LABEL_57;
  v12->m_Items[1] = v21;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[1], (int32_t)v21, v15, v16, v17, v18, v19, v20);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_22847/*"position"*/;
  if ( StringLiteral_22847/*"position"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22847/*"position"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v28 = StringLiteral_22847/*"position"*/;
  }
  else
  {
    v28 = 0;
  }
  if ( LODWORD(v12->max_length) <= 2 )
    goto LABEL_57;
  v12->m_Items[2] = (Il2CppObject *)v28;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  v29 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v96 = v29;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v96);
  v36 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
  }
  if ( LODWORD(v12->max_length) <= 3 )
    goto LABEL_57;
  v12->m_Items[3] = v36;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[3], (int32_t)v36, v30, v31, v32, v33, v34, v35);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_18799/*"easeType"*/;
  if ( StringLiteral_18799/*"easeType"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_18799/*"easeType"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v43 = StringLiteral_18799/*"easeType"*/;
  }
  else
  {
    v43 = 0;
  }
  if ( LODWORD(v12->max_length) <= 4 )
    goto LABEL_57;
  v12->m_Items[4] = (Il2CppObject *)v43;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(this->fields.easeTypeIn, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
  }
  if ( LODWORD(v12->max_length) <= 5 )
    goto LABEL_57;
  v12->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[5], (int32_t)easeTypeIn, v44, v45, v46, v47, v48, v49);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_24189/*"time"*/;
  if ( StringLiteral_24189/*"time"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_24189/*"time"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v57 = StringLiteral_24189/*"time"*/;
  }
  else
  {
    v57 = 0;
  }
  if ( LODWORD(v12->max_length) <= 6 )
    goto LABEL_57;
  v12->m_Items[6] = (Il2CppObject *)v57;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[6], v57, v51, v52, v53, v54, v55, v56);
  slideInTime = this->fields.slideInTime;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v64 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
  }
  if ( LODWORD(v12->max_length) <= 7 )
    goto LABEL_57;
  v12->m_Items[7] = v64;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[7], (int32_t)v64, v58, v59, v60, v61, v62, v63);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_22533/*"oncomplete"*/;
  if ( StringLiteral_22533/*"oncomplete"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22533/*"oncomplete"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v71 = StringLiteral_22533/*"oncomplete"*/;
  }
  else
  {
    v71 = 0;
  }
  if ( LODWORD(v12->max_length) <= 8 )
    goto LABEL_57;
  v12->m_Items[8] = (Il2CppObject *)v71;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[8], v71, v65, v66, v67, v68, v69, v70);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_22497/*"onAnimEnd"*/;
  if ( StringLiteral_22497/*"onAnimEnd"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22497/*"onAnimEnd"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v78 = StringLiteral_22497/*"onAnimEnd"*/;
  }
  else
  {
    v78 = 0;
  }
  if ( LODWORD(v12->max_length) <= 9 )
    goto LABEL_57;
  v12->m_Items[9] = (Il2CppObject *)v78;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[9], v78, v72, v73, v74, v75, v76, v77);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_22535/*"oncompletetarget"*/;
  if ( StringLiteral_22535/*"oncompletetarget"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(StringLiteral_22535/*"oncompletetarget"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v85 = StringLiteral_22535/*"oncompletetarget"*/;
  }
  else
  {
    v85 = 0;
  }
  if ( LODWORD(v12->max_length) <= 0xA )
    goto LABEL_57;
  v12->m_Items[10] = (Il2CppObject *)v85;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[10], v85, v79, v80, v81, v82, v83, v84);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v92 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C714EC(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_58:
      v94 = sub_1C7162C(v13);
      sub_1C714D8(v94, 0);
    }
  }
  if ( LODWORD(v12->max_length) <= 0xB )
LABEL_57:
    sub_1C71610(v13);
  v12->m_Items[11] = v92;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->m_Items[11], (int32_t)v92, v86, v87, v88, v89, v90, v91);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v93 = iTween__Hash(v12, 0);
  iTween__MoveTo_63669288(gameObject, v93, 0);
}