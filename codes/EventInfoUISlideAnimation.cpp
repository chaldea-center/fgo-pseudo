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
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o **p_endCallback; // x19
  float z; // s8
  float y; // s9
  float x; // s10

  this->fields.endCallback = callback;
  p_endCallback = &this->fields.endCallback;
  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endCallback,
    (int64_t)callback,
    (int64_t)method,
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
    sub_1C22094(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Object_array *v23; // x21
  UnityEngine_GameObject_o *v24; // x0
  int64_t v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x9
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_String_o *easeTypeOut; // x22
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x22
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x19
  System_Collections_Hashtable_o *v107; // x0
  __int64 v108; // x0
  __int64 v109; // [xsp+0h] [xbp-60h] BYREF
  float v110; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v112[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4BDE58A & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    sub_1C21E38(&StringLiteral_22667/*"onMoveComplete"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    sub_1C21E38(&StringLiteral_21175/*"isLocal"*/);
    sub_1C21E38(&StringLiteral_19077/*"easeType"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE58A = 1;
  }
  this->fields.endCallback = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endCallback,
    (int64_t)callback,
    (int64_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = sub_1C21EE0(object___TypeInfo, 12LL);
  if ( !v15 )
    sub_1C22094(0LL, v16);
  v23 = (System_Object_array *)v15;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21175/*"isLocal"*/;
  if ( StringLiteral_21175/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_21175/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_21175/*"isLocal"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_57;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v112[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v112, v26, v27, v28);
  v35 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_57;
  v23->m_Items[1] = (Il2CppObject *)v35;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[1], v35, v29, v30, v31, v32, v33, v34);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22984/*"position"*/;
  if ( StringLiteral_22984/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22984/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_22984/*"position"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_57;
  v23->m_Items[2] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[2], v25, v36, v37, v38, v39, v40, v41);
  v42 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v110 = this->fields.slideOutPosition.fields.z;
  v109 = v42;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v109, v43, v44, v45);
  v52 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_57;
  v23->m_Items[3] = (Il2CppObject *)v52;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_19077/*"easeType"*/;
  if ( StringLiteral_19077/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_19077/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_19077/*"easeType"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_57;
  v23->m_Items[4] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[4], v25, v53, v54, v55, v56, v57, v58);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_57;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[5], (int64_t)easeTypeOut, v59, v60, v61, v62, v63, v64);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_57;
  v23->m_Items[6] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[6], v25, v66, v67, v68, v69, v70, v71);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v72, v73, v74);
  v81 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_57;
  v23->m_Items[7] = (Il2CppObject *)v81;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[7], v81, v75, v76, v77, v78, v79, v80);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_57;
  v23->m_Items[8] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[8], v25, v82, v83, v84, v85, v86, v87);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22667/*"onMoveComplete"*/;
  if ( StringLiteral_22667/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22667/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_22667/*"onMoveComplete"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 9 )
    goto LABEL_57;
  v23->m_Items[9] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[9], v25, v88, v89, v90, v91, v92, v93);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22682/*"oncompletetarget"*/;
  if ( StringLiteral_22682/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22682/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_22682/*"oncompletetarget"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 0xA )
    goto LABEL_57;
  v23->m_Items[10] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[10], v25, v94, v95, v96, v97, v98, v99);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v106 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_58:
      v108 = sub_1C220B8(v24);
      sub_1C21F60(v108, 0LL);
    }
  }
  if ( v23->max_length <= 0xB )
LABEL_57:
    sub_1C2209C(v24, v25);
  v23->m_Items[11] = (Il2CppObject *)v106;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[11], v106, v100, v101, v102, v103, v104, v105);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v107 = iTween__Hash(v23, 0LL);
  iTween__MoveTo_61653064(gameObject, v107, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_43361196(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o slidePosition,
        bool isTypeIn,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v15; // x8
  __int64 v16; // x9
  int64_t v17; // x22
  int v18; // s11
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Object_array *v28; // x21
  UnityEngine_GameObject_o *v29; // x0
  int64_t v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x23
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x23
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x22
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x19
  System_Collections_Hashtable_o *v110; // x0
  __int64 v111; // x0
  int v112[4]; // [xsp+0h] [xbp-70h] BYREF
  int v113; // [xsp+38h] [xbp-38h] BYREF
  char v114[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4BDE58C & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    sub_1C21E38(&StringLiteral_22643/*"onAnimEnd"*/);
    sub_1C21E38(&StringLiteral_21175/*"isLocal"*/);
    sub_1C21E38(&StringLiteral_19077/*"easeType"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE58C = 1;
  }
  this->fields.endCallback = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endCallback,
    (int64_t)callback,
    isTypeIn,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  v15 = 52LL;
  if ( isTypeIn )
    v15 = 48LL;
  if ( isTypeIn )
    v16 = 32LL;
  else
    v16 = 40LL;
  v17 = *(int64_t *)((char *)&this->klass + v16);
  v18 = *(_DWORD *)((char *)&this->klass + v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = sub_1C21EE0(object___TypeInfo, 12LL);
  if ( !v20 )
    sub_1C22094(0LL, v21);
  v28 = (System_Object_array *)v20;
  v29 = (UnityEngine_GameObject_o *)StringLiteral_21175/*"isLocal"*/;
  if ( StringLiteral_21175/*"isLocal"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_21175/*"isLocal"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
    v30 = StringLiteral_21175/*"isLocal"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !v28->max_length )
    goto LABEL_62;
  v28->m_Items[0] = (Il2CppObject *)v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)v28->m_Items, v30, v22, v23, v24, v25, v26, v27);
  v114[0] = 1;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v114, v31, v32, v33);
  v40 = (int64_t)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_62;
  v28->m_Items[1] = (Il2CppObject *)v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[1], v40, v34, v35, v36, v37, v38, v39);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_22984/*"position"*/;
  if ( StringLiteral_22984/*"position"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22984/*"position"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
    v30 = StringLiteral_22984/*"position"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_62;
  v28->m_Items[2] = (Il2CppObject *)v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[2], v30, v41, v42, v43, v44, v45, v46);
  *(float *)v112 = x;
  *(float *)&v112[1] = y;
  *(float *)&v112[2] = z;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v112, v47, v48, v49);
  v56 = (int64_t)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
  }
  if ( v28->max_length <= 3 )
    goto LABEL_62;
  v28->m_Items[3] = (Il2CppObject *)v56;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[3], v56, v50, v51, v52, v53, v54, v55);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_19077/*"easeType"*/;
  if ( StringLiteral_19077/*"easeType"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_19077/*"easeType"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
    v30 = StringLiteral_19077/*"easeType"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 4 )
    goto LABEL_62;
  v28->m_Items[4] = (Il2CppObject *)v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[4], v30, v57, v58, v59, v60, v61, v62);
  if ( v17 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(v17, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
  }
  if ( v28->max_length <= 5 )
    goto LABEL_62;
  v28->m_Items[5] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[5], v17, v63, v64, v65, v66, v67, v68);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
    v30 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 6 )
    goto LABEL_62;
  v28->m_Items[6] = (Il2CppObject *)v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[6], v30, v69, v70, v71, v72, v73, v74);
  v113 = v18;
  v29 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v113, v75, v76, v77);
  v84 = (int64_t)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
  }
  if ( v28->max_length <= 7 )
    goto LABEL_62;
  v28->m_Items[7] = (Il2CppObject *)v84;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[7], v84, v78, v79, v80, v81, v82, v83);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
    v30 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 8 )
    goto LABEL_62;
  v28->m_Items[8] = (Il2CppObject *)v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[8], v30, v85, v86, v87, v88, v89, v90);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_22643/*"onAnimEnd"*/;
  if ( StringLiteral_22643/*"onAnimEnd"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22643/*"onAnimEnd"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
    v30 = StringLiteral_22643/*"onAnimEnd"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 9 )
    goto LABEL_62;
  v28->m_Items[9] = (Il2CppObject *)v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[9], v30, v91, v92, v93, v94, v95, v96);
  v29 = (UnityEngine_GameObject_o *)StringLiteral_22682/*"oncompletetarget"*/;
  if ( StringLiteral_22682/*"oncompletetarget"*/ )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22682/*"oncompletetarget"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_63;
    v30 = StringLiteral_22682/*"oncompletetarget"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v28->max_length <= 0xA )
    goto LABEL_62;
  v28->m_Items[10] = (Il2CppObject *)v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[10], v30, v97, v98, v99, v100, v101, v102);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v109 = (int64_t)v29;
  if ( v29 )
  {
    v29 = (UnityEngine_GameObject_o *)sub_1C21F74(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
    {
LABEL_63:
      v111 = sub_1C220B8(v29);
      sub_1C21F60(v111, 0LL);
    }
  }
  if ( v28->max_length <= 0xB )
LABEL_62:
    sub_1C2209C(v29, v30);
  v28->m_Items[11] = (Il2CppObject *)v109;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28->m_Items[11], v109, v103, v104, v105, v106, v107, v108);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v110 = iTween__Hash(v28, 0LL);
  iTween__MoveTo_61653064(gameObject, v110, 0LL);
}


void __fastcall EventInfoUISlideAnimation__onAnimEnd(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_endCallback; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (PartyOrganizationUtility_o *)&this->fields.endCallback;
  v9 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0LL;
    sub_1C21DDC(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Object_array *v12; // x21
  UnityEngine_GameObject_o *v13; // x0
  int64_t v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x9
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_String_o *easeTypeIn; // x22
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x22
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x19
  System_Collections_Hashtable_o *v96; // x0
  __int64 v97; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v99; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v101[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BDE58B & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    sub_1C21E38(&StringLiteral_22643/*"onAnimEnd"*/);
    sub_1C21E38(&StringLiteral_21175/*"isLocal"*/);
    sub_1C21E38(&StringLiteral_19077/*"easeType"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDE58B = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = sub_1C21EE0(object___TypeInfo, 12LL);
  if ( !v4 )
    sub_1C22094(0LL, v5);
  v12 = (System_Object_array *)v4;
  v13 = (UnityEngine_GameObject_o *)StringLiteral_21175/*"isLocal"*/;
  if ( StringLiteral_21175/*"isLocal"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_21175/*"isLocal"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v14 = StringLiteral_21175/*"isLocal"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v12->max_length )
    goto LABEL_57;
  v12->m_Items[0] = (Il2CppObject *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
  v101[0] = 1;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v101, v15, v16, v17);
  v24 = (int64_t)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_57;
  v12->m_Items[1] = (Il2CppObject *)v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_22984/*"position"*/;
  if ( StringLiteral_22984/*"position"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22984/*"position"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v14 = StringLiteral_22984/*"position"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_57;
  v12->m_Items[2] = (Il2CppObject *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[2], v14, v25, v26, v27, v28, v29, v30);
  v31 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v99 = v31;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v99, v32, v33, v34);
  v41 = (int64_t)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
  }
  if ( v12->max_length <= 3 )
    goto LABEL_57;
  v12->m_Items[3] = (Il2CppObject *)v41;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_19077/*"easeType"*/;
  if ( StringLiteral_19077/*"easeType"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_19077/*"easeType"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v14 = StringLiteral_19077/*"easeType"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v12->max_length <= 4 )
    goto LABEL_57;
  v12->m_Items[4] = (Il2CppObject *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[4], v14, v42, v43, v44, v45, v46, v47);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(this->fields.easeTypeIn, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
  }
  if ( v12->max_length <= 5 )
    goto LABEL_57;
  v12->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[5], (int64_t)easeTypeIn, v48, v49, v50, v51, v52, v53);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v14 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v12->max_length <= 6 )
    goto LABEL_57;
  v12->m_Items[6] = (Il2CppObject *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[6], v14, v55, v56, v57, v58, v59, v60);
  slideInTime = this->fields.slideInTime;
  v13 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v61, v62, v63);
  v70 = (int64_t)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
  }
  if ( v12->max_length <= 7 )
    goto LABEL_57;
  v12->m_Items[7] = (Il2CppObject *)v70;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[7], v70, v64, v65, v66, v67, v68, v69);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v14 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v12->max_length <= 8 )
    goto LABEL_57;
  v12->m_Items[8] = (Il2CppObject *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[8], v14, v71, v72, v73, v74, v75, v76);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_22643/*"onAnimEnd"*/;
  if ( StringLiteral_22643/*"onAnimEnd"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22643/*"onAnimEnd"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v14 = StringLiteral_22643/*"onAnimEnd"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v12->max_length <= 9 )
    goto LABEL_57;
  v12->m_Items[9] = (Il2CppObject *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[9], v14, v77, v78, v79, v80, v81, v82);
  v13 = (UnityEngine_GameObject_o *)StringLiteral_22682/*"oncompletetarget"*/;
  if ( StringLiteral_22682/*"oncompletetarget"*/ )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22682/*"oncompletetarget"*/, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_58;
    v14 = StringLiteral_22682/*"oncompletetarget"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v12->max_length <= 0xA )
    goto LABEL_57;
  v12->m_Items[10] = (Il2CppObject *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[10], v14, v83, v84, v85, v86, v87, v88);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v95 = (int64_t)v13;
  if ( v13 )
  {
    v13 = (UnityEngine_GameObject_o *)sub_1C21F74(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_58:
      v97 = sub_1C220B8(v13);
      sub_1C21F60(v97, 0LL);
    }
  }
  if ( v12->max_length <= 0xB )
LABEL_57:
    sub_1C2209C(v13, v14);
  v12->m_Items[11] = (Il2CppObject *)v95;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[11], v95, v89, v90, v91, v92, v93, v94);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v96 = iTween__Hash(v12, 0LL);
  iTween__MoveTo_61653064(gameObject, v96, 0LL);
}