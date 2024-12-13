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
  sub_1BD33FC(
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
    sub_1BD36B4(0LL, v4);
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
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Object_array *v34; // x21
  UnityEngine_GameObject_o *v35; // x0
  int64_t v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x9
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x22
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_String_o *easeTypeOut; // x22
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x22
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x19
  System_Collections_Hashtable_o *v118; // x0
  __int64 v119; // x0
  __int64 v120; // [xsp+0h] [xbp-60h] BYREF
  float v121; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v123[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4B3914F & 1) == 0 )
  {
    sub_1BD3458(&bool_TypeInfo, callback);
    sub_1BD3458(&object___TypeInfo, v14);
    sub_1BD3458(&float_TypeInfo, v15);
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v16);
    sub_1BD3458(&StringLiteral_22533/*"onMoveComplete"*/, v17);
    sub_1BD3458(&StringLiteral_24213/*"time"*/, v18);
    sub_1BD3458(&StringLiteral_22548/*"oncompletetarget"*/, v19);
    sub_1BD3458(&StringLiteral_22848/*"position"*/, v20);
    sub_1BD3458(&StringLiteral_21055/*"isLocal"*/, v21);
    sub_1BD3458(&StringLiteral_18977/*"easeType"*/, v22);
    sub_1BD3458(&StringLiteral_22546/*"oncomplete"*/, v23);
    sub_1BD3458(&iTween_TypeInfo, v24);
    byte_4B3914F = 1;
  }
  this->fields.endCallback = callback;
  sub_1BD33FC(
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
  v26 = sub_1BD3500(object___TypeInfo, 12LL);
  if ( !v26 )
    sub_1BD36B4(0LL, v27);
  v34 = (System_Object_array *)v26;
  v35 = (UnityEngine_GameObject_o *)StringLiteral_21055/*"isLocal"*/;
  if ( StringLiteral_21055/*"isLocal"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_21055/*"isLocal"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
    v36 = StringLiteral_21055/*"isLocal"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( !v34->max_length )
    goto LABEL_57;
  v34->m_Items[0] = (Il2CppObject *)v36;
  sub_1BD33FC((PartyOrganizationUtility_o *)v34->m_Items, v36, v28, v29, v30, v31, v32, v33);
  v123[0] = 1;
  v35 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v123, v37, v38, v39);
  v46 = (int64_t)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_57;
  v34->m_Items[1] = (Il2CppObject *)v46;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[1], v46, v40, v41, v42, v43, v44, v45);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_22848/*"position"*/;
  if ( StringLiteral_22848/*"position"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22848/*"position"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
    v36 = StringLiteral_22848/*"position"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_57;
  v34->m_Items[2] = (Il2CppObject *)v36;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[2], v36, v47, v48, v49, v50, v51, v52);
  v53 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v121 = this->fields.slideOutPosition.fields.z;
  v120 = v53;
  v35 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v120, v54, v55, v56);
  v63 = (int64_t)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
  }
  if ( v34->max_length <= 3 )
    goto LABEL_57;
  v34->m_Items[3] = (Il2CppObject *)v63;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[3], v63, v57, v58, v59, v60, v61, v62);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_18977/*"easeType"*/;
  if ( StringLiteral_18977/*"easeType"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_18977/*"easeType"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
    v36 = StringLiteral_18977/*"easeType"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 4 )
    goto LABEL_57;
  v34->m_Items[4] = (Il2CppObject *)v36;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[4], v36, v64, v65, v66, v67, v68, v69);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(this->fields.easeTypeOut, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
  }
  if ( v34->max_length <= 5 )
    goto LABEL_57;
  v34->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[5], (int64_t)easeTypeOut, v70, v71, v72, v73, v74, v75);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_24213/*"time"*/;
  if ( StringLiteral_24213/*"time"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_24213/*"time"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
    v36 = StringLiteral_24213/*"time"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 6 )
    goto LABEL_57;
  v34->m_Items[6] = (Il2CppObject *)v36;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[6], v36, v77, v78, v79, v80, v81, v82);
  slideOutTime = this->fields.slideOutTime;
  v35 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v83, v84, v85);
  v92 = (int64_t)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
  }
  if ( v34->max_length <= 7 )
    goto LABEL_57;
  v34->m_Items[7] = (Il2CppObject *)v92;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[7], v92, v86, v87, v88, v89, v90, v91);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_22546/*"oncomplete"*/;
  if ( StringLiteral_22546/*"oncomplete"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22546/*"oncomplete"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
    v36 = StringLiteral_22546/*"oncomplete"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 8 )
    goto LABEL_57;
  v34->m_Items[8] = (Il2CppObject *)v36;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[8], v36, v93, v94, v95, v96, v97, v98);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_22533/*"onMoveComplete"*/;
  if ( StringLiteral_22533/*"onMoveComplete"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22533/*"onMoveComplete"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
    v36 = StringLiteral_22533/*"onMoveComplete"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 9 )
    goto LABEL_57;
  v34->m_Items[9] = (Il2CppObject *)v36;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[9], v36, v99, v100, v101, v102, v103, v104);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_22548/*"oncompletetarget"*/;
  if ( StringLiteral_22548/*"oncompletetarget"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22548/*"oncompletetarget"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_58;
    v36 = StringLiteral_22548/*"oncompletetarget"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 0xA )
    goto LABEL_57;
  v34->m_Items[10] = (Il2CppObject *)v36;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[10], v36, v105, v106, v107, v108, v109, v110);
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v117 = (int64_t)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1BD3594(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
    {
LABEL_58:
      v119 = sub_1BD36D8(v35);
      sub_1BD3580(v119, 0LL);
    }
  }
  if ( v34->max_length <= 0xB )
LABEL_57:
    sub_1BD36BC(v35, v36);
  v34->m_Items[11] = (Il2CppObject *)v117;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v34->m_Items[11], v117, v111, v112, v113, v114, v115, v116);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v118 = iTween__Hash(v34, 0LL);
  iTween__MoveTo_61063580(gameObject, v118, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_42897948(
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
  __int64 v26; // x8
  __int64 v27; // x9
  int64_t v28; // x22
  int v29; // s11
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Object_array *v39; // x21
  UnityEngine_GameObject_o *v40; // x0
  int64_t v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x23
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x23
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x22
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x19
  System_Collections_Hashtable_o *v121; // x0
  __int64 v122; // x0
  int v123[4]; // [xsp+0h] [xbp-70h] BYREF
  int v124; // [xsp+38h] [xbp-38h] BYREF
  char v125[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4B39151 & 1) == 0 )
  {
    sub_1BD3458(&bool_TypeInfo, callback);
    sub_1BD3458(&object___TypeInfo, v15);
    sub_1BD3458(&float_TypeInfo, v16);
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v17);
    sub_1BD3458(&StringLiteral_24213/*"time"*/, v18);
    sub_1BD3458(&StringLiteral_22548/*"oncompletetarget"*/, v19);
    sub_1BD3458(&StringLiteral_22848/*"position"*/, v20);
    sub_1BD3458(&StringLiteral_22509/*"onAnimEnd"*/, v21);
    sub_1BD3458(&StringLiteral_21055/*"isLocal"*/, v22);
    sub_1BD3458(&StringLiteral_18977/*"easeType"*/, v23);
    sub_1BD3458(&StringLiteral_22546/*"oncomplete"*/, v24);
    sub_1BD3458(&iTween_TypeInfo, v25);
    byte_4B39151 = 1;
  }
  this->fields.endCallback = callback;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.endCallback,
    (int64_t)callback,
    isTypeIn,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  v26 = 52LL;
  if ( isTypeIn )
    v26 = 48LL;
  if ( isTypeIn )
    v27 = 32LL;
  else
    v27 = 40LL;
  v28 = *(int64_t *)((char *)&this->klass + v27);
  v29 = *(_DWORD *)((char *)&this->klass + v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v31 = sub_1BD3500(object___TypeInfo, 12LL);
  if ( !v31 )
    sub_1BD36B4(0LL, v32);
  v39 = (System_Object_array *)v31;
  v40 = (UnityEngine_GameObject_o *)StringLiteral_21055/*"isLocal"*/;
  if ( StringLiteral_21055/*"isLocal"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_21055/*"isLocal"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
    v41 = StringLiteral_21055/*"isLocal"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( !v39->max_length )
    goto LABEL_62;
  v39->m_Items[0] = (Il2CppObject *)v41;
  sub_1BD33FC((PartyOrganizationUtility_o *)v39->m_Items, v41, v33, v34, v35, v36, v37, v38);
  v125[0] = 1;
  v40 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v125, v42, v43, v44);
  v51 = (int64_t)v40;
  if ( v40 )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
  }
  if ( v39->max_length <= 1 )
    goto LABEL_62;
  v39->m_Items[1] = (Il2CppObject *)v51;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[1], v51, v45, v46, v47, v48, v49, v50);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_22848/*"position"*/;
  if ( StringLiteral_22848/*"position"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22848/*"position"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
    v41 = StringLiteral_22848/*"position"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 2 )
    goto LABEL_62;
  v39->m_Items[2] = (Il2CppObject *)v41;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[2], v41, v52, v53, v54, v55, v56, v57);
  *(float *)v123 = x;
  *(float *)&v123[1] = y;
  *(float *)&v123[2] = z;
  v40 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v123, v58, v59, v60);
  v67 = (int64_t)v40;
  if ( v40 )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
  }
  if ( v39->max_length <= 3 )
    goto LABEL_62;
  v39->m_Items[3] = (Il2CppObject *)v67;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[3], v67, v61, v62, v63, v64, v65, v66);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_18977/*"easeType"*/;
  if ( StringLiteral_18977/*"easeType"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_18977/*"easeType"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
    v41 = StringLiteral_18977/*"easeType"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 4 )
    goto LABEL_62;
  v39->m_Items[4] = (Il2CppObject *)v41;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[4], v41, v68, v69, v70, v71, v72, v73);
  if ( v28 )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(v28, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
  }
  if ( v39->max_length <= 5 )
    goto LABEL_62;
  v39->m_Items[5] = (Il2CppObject *)v28;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[5], v28, v74, v75, v76, v77, v78, v79);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_24213/*"time"*/;
  if ( StringLiteral_24213/*"time"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_24213/*"time"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
    v41 = StringLiteral_24213/*"time"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 6 )
    goto LABEL_62;
  v39->m_Items[6] = (Il2CppObject *)v41;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[6], v41, v80, v81, v82, v83, v84, v85);
  v124 = v29;
  v40 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v124, v86, v87, v88);
  v95 = (int64_t)v40;
  if ( v40 )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
  }
  if ( v39->max_length <= 7 )
    goto LABEL_62;
  v39->m_Items[7] = (Il2CppObject *)v95;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[7], v95, v89, v90, v91, v92, v93, v94);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_22546/*"oncomplete"*/;
  if ( StringLiteral_22546/*"oncomplete"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22546/*"oncomplete"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
    v41 = StringLiteral_22546/*"oncomplete"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 8 )
    goto LABEL_62;
  v39->m_Items[8] = (Il2CppObject *)v41;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[8], v41, v96, v97, v98, v99, v100, v101);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_22509/*"onAnimEnd"*/;
  if ( StringLiteral_22509/*"onAnimEnd"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22509/*"onAnimEnd"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
    v41 = StringLiteral_22509/*"onAnimEnd"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 9 )
    goto LABEL_62;
  v39->m_Items[9] = (Il2CppObject *)v41;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[9], v41, v102, v103, v104, v105, v106, v107);
  v40 = (UnityEngine_GameObject_o *)StringLiteral_22548/*"oncompletetarget"*/;
  if ( StringLiteral_22548/*"oncompletetarget"*/ )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22548/*"oncompletetarget"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_63;
    v41 = StringLiteral_22548/*"oncompletetarget"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 0xA )
    goto LABEL_62;
  v39->m_Items[10] = (Il2CppObject *)v41;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[10], v41, v108, v109, v110, v111, v112, v113);
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v120 = (int64_t)v40;
  if ( v40 )
  {
    v40 = (UnityEngine_GameObject_o *)sub_1BD3594(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
    {
LABEL_63:
      v122 = sub_1BD36D8(v40);
      sub_1BD3580(v122, 0LL);
    }
  }
  if ( v39->max_length <= 0xB )
LABEL_62:
    sub_1BD36BC(v40, v41);
  v39->m_Items[11] = (Il2CppObject *)v120;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->m_Items[11], v120, v114, v115, v116, v117, v118, v119);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v121 = iTween__Hash(v39, 0LL);
  iTween__MoveTo_61063580(gameObject, v121, 0LL);
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
    sub_1BD33FC(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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
  struct System_String_o *easeTypeIn; // x22
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
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v110; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v112[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B39150 & 1) == 0 )
  {
    sub_1BD3458(&bool_TypeInfo, method);
    sub_1BD3458(&object___TypeInfo, v3);
    sub_1BD3458(&float_TypeInfo, v4);
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_24213/*"time"*/, v6);
    sub_1BD3458(&StringLiteral_22548/*"oncompletetarget"*/, v7);
    sub_1BD3458(&StringLiteral_22848/*"position"*/, v8);
    sub_1BD3458(&StringLiteral_22509/*"onAnimEnd"*/, v9);
    sub_1BD3458(&StringLiteral_21055/*"isLocal"*/, v10);
    sub_1BD3458(&StringLiteral_18977/*"easeType"*/, v11);
    sub_1BD3458(&StringLiteral_22546/*"oncomplete"*/, v12);
    sub_1BD3458(&iTween_TypeInfo, v13);
    byte_4B39150 = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = sub_1BD3500(object___TypeInfo, 12LL);
  if ( !v15 )
    sub_1BD36B4(0LL, v16);
  v23 = (System_Object_array *)v15;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21055/*"isLocal"*/;
  if ( StringLiteral_21055/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_21055/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_21055/*"isLocal"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_57;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_1BD33FC((PartyOrganizationUtility_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v112[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v112, v26, v27, v28);
  v35 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_57;
  v23->m_Items[1] = (Il2CppObject *)v35;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[1], v35, v29, v30, v31, v32, v33, v34);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22848/*"position"*/;
  if ( StringLiteral_22848/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22848/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_22848/*"position"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_57;
  v23->m_Items[2] = (Il2CppObject *)v25;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[2], v25, v36, v37, v38, v39, v40, v41);
  v42 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v110 = v42;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v110, v43, v44, v45);
  v52 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_57;
  v23->m_Items[3] = (Il2CppObject *)v52;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_18977/*"easeType"*/;
  if ( StringLiteral_18977/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_18977/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_18977/*"easeType"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_57;
  v23->m_Items[4] = (Il2CppObject *)v25;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[4], v25, v53, v54, v55, v56, v57, v58);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(this->fields.easeTypeIn, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_57;
  v23->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[5], (int64_t)easeTypeIn, v59, v60, v61, v62, v63, v64);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_24213/*"time"*/;
  if ( StringLiteral_24213/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_24213/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_24213/*"time"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_57;
  v23->m_Items[6] = (Il2CppObject *)v25;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[6], v25, v66, v67, v68, v69, v70, v71);
  slideInTime = this->fields.slideInTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v72, v73, v74);
  v81 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_57;
  v23->m_Items[7] = (Il2CppObject *)v81;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[7], v81, v75, v76, v77, v78, v79, v80);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22546/*"oncomplete"*/;
  if ( StringLiteral_22546/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22546/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_22546/*"oncomplete"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_57;
  v23->m_Items[8] = (Il2CppObject *)v25;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[8], v25, v82, v83, v84, v85, v86, v87);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22509/*"onAnimEnd"*/;
  if ( StringLiteral_22509/*"onAnimEnd"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22509/*"onAnimEnd"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_22509/*"onAnimEnd"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 9 )
    goto LABEL_57;
  v23->m_Items[9] = (Il2CppObject *)v25;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[9], v25, v88, v89, v90, v91, v92, v93);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22548/*"oncompletetarget"*/;
  if ( StringLiteral_22548/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(StringLiteral_22548/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_58;
    v25 = StringLiteral_22548/*"oncompletetarget"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 0xA )
    goto LABEL_57;
  v23->m_Items[10] = (Il2CppObject *)v25;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[10], v25, v94, v95, v96, v97, v98, v99);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v106 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1BD3594(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_58:
      v108 = sub_1BD36D8(v24);
      sub_1BD3580(v108, 0LL);
    }
  }
  if ( v23->max_length <= 0xB )
LABEL_57:
    sub_1BD36BC(v24, v25);
  v23->m_Items[11] = (Il2CppObject *)v106;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->m_Items[11], v106, v100, v101, v102, v103, v104, v105);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v107 = iTween__Hash(v23, 0LL);
  iTween__MoveTo_61063580(gameObject, v107, 0LL);
}