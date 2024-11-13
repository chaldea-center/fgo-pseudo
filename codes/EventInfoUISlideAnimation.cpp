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
  sub_1BCA784(
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
    sub_1BCAA3C(0LL, v4);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Object_array *v45; // x21
  UnityEngine_GameObject_o *v46; // x0
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x22
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x9
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_String_o *easeTypeOut; // x22
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
  int64_t v94; // x22
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x19
  __int64 v120; // x1
  System_Collections_Hashtable_o *v121; // x0
  __int64 v122; // x0
  __int64 v123; // [xsp+0h] [xbp-60h] BYREF
  float v124; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v126[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4B1817E & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, callback, method);
    sub_1BCA7E0(&object___TypeInfo, v14, v15);
    sub_1BCA7E0(&float_TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_22500/*"onMoveComplete"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_18948/*"easeType"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v32, v33);
    sub_1BCA7E0(&iTween_TypeInfo, v34, v35);
    byte_4B1817E = 1;
  }
  this->fields.endCallback = callback;
  sub_1BCA784(
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
  v37 = sub_1BCA888(object___TypeInfo, 12LL);
  if ( !v37 )
    sub_1BCAA3C(0LL, v38);
  v45 = (System_Object_array *)v37;
  v46 = (UnityEngine_GameObject_o *)StringLiteral_21024/*"isLocal"*/;
  if ( StringLiteral_21024/*"isLocal"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_21024/*"isLocal"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
    v47 = StringLiteral_21024/*"isLocal"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( !v45->max_length )
    goto LABEL_57;
  v45->m_Items[0] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)v45->m_Items, v47, v39, v40, v41, v42, v43, v44);
  v126[0] = 1;
  v46 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v126);
  v54 = (int64_t)v46;
  if ( v46 )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
  }
  if ( v45->max_length <= 1 )
    goto LABEL_57;
  v45->m_Items[1] = (Il2CppObject *)v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[1], v54, v48, v49, v50, v51, v52, v53);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_22815/*"position"*/;
  if ( StringLiteral_22815/*"position"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22815/*"position"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
    v47 = StringLiteral_22815/*"position"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 2 )
    goto LABEL_57;
  v45->m_Items[2] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[2], v47, v55, v56, v57, v58, v59, v60);
  v61 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v124 = this->fields.slideOutPosition.fields.z;
  v123 = v61;
  v46 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v123);
  v68 = (int64_t)v46;
  if ( v46 )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
  }
  if ( v45->max_length <= 3 )
    goto LABEL_57;
  v45->m_Items[3] = (Il2CppObject *)v68;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[3], v68, v62, v63, v64, v65, v66, v67);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_18948/*"easeType"*/;
  if ( StringLiteral_18948/*"easeType"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_18948/*"easeType"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
    v47 = StringLiteral_18948/*"easeType"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 4 )
    goto LABEL_57;
  v45->m_Items[4] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[4], v47, v69, v70, v71, v72, v73, v74);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(this->fields.easeTypeOut, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
  }
  if ( v45->max_length <= 5 )
    goto LABEL_57;
  v45->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[5], (int64_t)easeTypeOut, v75, v76, v77, v78, v79, v80);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
    v47 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 6 )
    goto LABEL_57;
  v45->m_Items[6] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[6], v47, v82, v83, v84, v85, v86, v87);
  slideOutTime = this->fields.slideOutTime;
  v46 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v94 = (int64_t)v46;
  if ( v46 )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
  }
  if ( v45->max_length <= 7 )
    goto LABEL_57;
  v45->m_Items[7] = (Il2CppObject *)v94;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[7], v94, v88, v89, v90, v91, v92, v93);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
    v47 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 8 )
    goto LABEL_57;
  v45->m_Items[8] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[8], v47, v95, v96, v97, v98, v99, v100);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_22500/*"onMoveComplete"*/;
  if ( StringLiteral_22500/*"onMoveComplete"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22500/*"onMoveComplete"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
    v47 = StringLiteral_22500/*"onMoveComplete"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 9 )
    goto LABEL_57;
  v45->m_Items[9] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[9], v47, v101, v102, v103, v104, v105, v106);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_22515/*"oncompletetarget"*/;
  if ( StringLiteral_22515/*"oncompletetarget"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22515/*"oncompletetarget"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_58;
    v47 = StringLiteral_22515/*"oncompletetarget"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 0xA )
    goto LABEL_57;
  v45->m_Items[10] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[10], v47, v107, v108, v109, v110, v111, v112);
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v119 = (int64_t)v46;
  if ( v46 )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
    {
LABEL_58:
      v122 = sub_1BCAA60(v46);
      sub_1BCA908(v122, 0LL);
    }
  }
  if ( v45->max_length <= 0xB )
LABEL_57:
    sub_1BCAA44(v46, v47);
  v45->m_Items[11] = (Il2CppObject *)v119;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[11], v119, v113, v114, v115, v116, v117, v118);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v120);
  v121 = iTween__Hash(v45, 0LL);
  iTween__MoveTo_60939552(gameObject, v121, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_42792984(
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x8
  __int64 v38; // x9
  int64_t v39; // x22
  int v40; // s11
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v42; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Object_array *v50; // x21
  UnityEngine_GameObject_o *v51; // x0
  int64_t v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x23
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x23
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
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
  int64_t v97; // x22
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x19
  __int64 v123; // x1
  System_Collections_Hashtable_o *v124; // x0
  __int64 v125; // x0
  int v126[4]; // [xsp+0h] [xbp-70h] BYREF
  int v127; // [xsp+38h] [xbp-38h] BYREF
  char v128[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4B18180 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, callback, isTypeIn);
    sub_1BCA7E0(&object___TypeInfo, v15, v16);
    sub_1BCA7E0(&float_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_22476/*"onAnimEnd"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_18948/*"easeType"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v33, v34);
    sub_1BCA7E0(&iTween_TypeInfo, v35, v36);
    byte_4B18180 = 1;
  }
  this->fields.endCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endCallback,
    (int64_t)callback,
    isTypeIn,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  v37 = 52LL;
  if ( isTypeIn )
    v37 = 48LL;
  if ( isTypeIn )
    v38 = 32LL;
  else
    v38 = 40LL;
  v39 = *(int64_t *)((char *)&this->klass + v38);
  v40 = *(_DWORD *)((char *)&this->klass + v37);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v42 = sub_1BCA888(object___TypeInfo, 12LL);
  if ( !v42 )
    sub_1BCAA3C(0LL, v43);
  v50 = (System_Object_array *)v42;
  v51 = (UnityEngine_GameObject_o *)StringLiteral_21024/*"isLocal"*/;
  if ( StringLiteral_21024/*"isLocal"*/ )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_21024/*"isLocal"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
    v52 = StringLiteral_21024/*"isLocal"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( !v50->max_length )
    goto LABEL_62;
  v50->m_Items[0] = (Il2CppObject *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)v50->m_Items, v52, v44, v45, v46, v47, v48, v49);
  v128[0] = 1;
  v51 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v128);
  v59 = (int64_t)v51;
  if ( v51 )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(v51, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
  }
  if ( v50->max_length <= 1 )
    goto LABEL_62;
  v50->m_Items[1] = (Il2CppObject *)v59;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[1], v59, v53, v54, v55, v56, v57, v58);
  v51 = (UnityEngine_GameObject_o *)StringLiteral_22815/*"position"*/;
  if ( StringLiteral_22815/*"position"*/ )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22815/*"position"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
    v52 = StringLiteral_22815/*"position"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v50->max_length <= 2 )
    goto LABEL_62;
  v50->m_Items[2] = (Il2CppObject *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[2], v52, v60, v61, v62, v63, v64, v65);
  *(float *)v126 = x;
  *(float *)&v126[1] = y;
  *(float *)&v126[2] = z;
  v51 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v126);
  v72 = (int64_t)v51;
  if ( v51 )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(v51, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
  }
  if ( v50->max_length <= 3 )
    goto LABEL_62;
  v50->m_Items[3] = (Il2CppObject *)v72;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[3], v72, v66, v67, v68, v69, v70, v71);
  v51 = (UnityEngine_GameObject_o *)StringLiteral_18948/*"easeType"*/;
  if ( StringLiteral_18948/*"easeType"*/ )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_18948/*"easeType"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
    v52 = StringLiteral_18948/*"easeType"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v50->max_length <= 4 )
    goto LABEL_62;
  v50->m_Items[4] = (Il2CppObject *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[4], v52, v73, v74, v75, v76, v77, v78);
  if ( v39 )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(v39, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
  }
  if ( v50->max_length <= 5 )
    goto LABEL_62;
  v50->m_Items[5] = (Il2CppObject *)v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[5], v39, v79, v80, v81, v82, v83, v84);
  v51 = (UnityEngine_GameObject_o *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
    v52 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v50->max_length <= 6 )
    goto LABEL_62;
  v50->m_Items[6] = (Il2CppObject *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[6], v52, v85, v86, v87, v88, v89, v90);
  v127 = v40;
  v51 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v127);
  v97 = (int64_t)v51;
  if ( v51 )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(v51, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
  }
  if ( v50->max_length <= 7 )
    goto LABEL_62;
  v50->m_Items[7] = (Il2CppObject *)v97;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[7], v97, v91, v92, v93, v94, v95, v96);
  v51 = (UnityEngine_GameObject_o *)StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
    v52 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v50->max_length <= 8 )
    goto LABEL_62;
  v50->m_Items[8] = (Il2CppObject *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[8], v52, v98, v99, v100, v101, v102, v103);
  v51 = (UnityEngine_GameObject_o *)StringLiteral_22476/*"onAnimEnd"*/;
  if ( StringLiteral_22476/*"onAnimEnd"*/ )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22476/*"onAnimEnd"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
    v52 = StringLiteral_22476/*"onAnimEnd"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v50->max_length <= 9 )
    goto LABEL_62;
  v50->m_Items[9] = (Il2CppObject *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[9], v52, v104, v105, v106, v107, v108, v109);
  v51 = (UnityEngine_GameObject_o *)StringLiteral_22515/*"oncompletetarget"*/;
  if ( StringLiteral_22515/*"oncompletetarget"*/ )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22515/*"oncompletetarget"*/, v50->obj.klass->_1.element_class);
    if ( !v51 )
      goto LABEL_63;
    v52 = StringLiteral_22515/*"oncompletetarget"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v50->max_length <= 0xA )
    goto LABEL_62;
  v50->m_Items[10] = (Il2CppObject *)v52;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[10], v52, v110, v111, v112, v113, v114, v115);
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v122 = (int64_t)v51;
  if ( v51 )
  {
    v51 = (UnityEngine_GameObject_o *)sub_1BCA91C(v51, v50->obj.klass->_1.element_class);
    if ( !v51 )
    {
LABEL_63:
      v125 = sub_1BCAA60(v51);
      sub_1BCA908(v125, 0LL);
    }
  }
  if ( v50->max_length <= 0xB )
LABEL_62:
    sub_1BCAA44(v51, v52);
  v50->m_Items[11] = (Il2CppObject *)v122;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->m_Items[11], v122, v116, v117, v118, v119, v120, v121);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v123);
  v124 = iTween__Hash(v50, 0LL);
  iTween__MoveTo_60939552(gameObject, v124, 0LL);
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
    sub_1BCA784(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Object_array *v35; // x21
  UnityEngine_GameObject_o *v36; // x0
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x22
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x9
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_String_o *easeTypeIn; // x22
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
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
  __int64 v110; // x1
  System_Collections_Hashtable_o *v111; // x0
  __int64 v112; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v114; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v116[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B1817F & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v2);
    sub_1BCA7E0(&object___TypeInfo, v4, v5);
    sub_1BCA7E0(&float_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_22476/*"onAnimEnd"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_18948/*"easeType"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v22, v23);
    sub_1BCA7E0(&iTween_TypeInfo, v24, v25);
    byte_4B1817F = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v27 = sub_1BCA888(object___TypeInfo, 12LL);
  if ( !v27 )
    sub_1BCAA3C(0LL, v28);
  v35 = (System_Object_array *)v27;
  v36 = (UnityEngine_GameObject_o *)StringLiteral_21024/*"isLocal"*/;
  if ( StringLiteral_21024/*"isLocal"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_21024/*"isLocal"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
    v37 = StringLiteral_21024/*"isLocal"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( !v35->max_length )
    goto LABEL_57;
  v35->m_Items[0] = (Il2CppObject *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)v35->m_Items, v37, v29, v30, v31, v32, v33, v34);
  v116[0] = 1;
  v36 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v116);
  v44 = (int64_t)v36;
  if ( v36 )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_57;
  v35->m_Items[1] = (Il2CppObject *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[1], v44, v38, v39, v40, v41, v42, v43);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_22815/*"position"*/;
  if ( StringLiteral_22815/*"position"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22815/*"position"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
    v37 = StringLiteral_22815/*"position"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_57;
  v35->m_Items[2] = (Il2CppObject *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[2], v37, v45, v46, v47, v48, v49, v50);
  v51 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v114 = v51;
  v36 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v114);
  v58 = (int64_t)v36;
  if ( v36 )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
  }
  if ( v35->max_length <= 3 )
    goto LABEL_57;
  v35->m_Items[3] = (Il2CppObject *)v58;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_18948/*"easeType"*/;
  if ( StringLiteral_18948/*"easeType"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_18948/*"easeType"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
    v37 = StringLiteral_18948/*"easeType"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 4 )
    goto LABEL_57;
  v35->m_Items[4] = (Il2CppObject *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[4], v37, v59, v60, v61, v62, v63, v64);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(this->fields.easeTypeIn, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
  }
  if ( v35->max_length <= 5 )
    goto LABEL_57;
  v35->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[5], (int64_t)easeTypeIn, v65, v66, v67, v68, v69, v70);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
    v37 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 6 )
    goto LABEL_57;
  v35->m_Items[6] = (Il2CppObject *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[6], v37, v72, v73, v74, v75, v76, v77);
  slideInTime = this->fields.slideInTime;
  v36 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v84 = (int64_t)v36;
  if ( v36 )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
  }
  if ( v35->max_length <= 7 )
    goto LABEL_57;
  v35->m_Items[7] = (Il2CppObject *)v84;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[7], v84, v78, v79, v80, v81, v82, v83);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
    v37 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 8 )
    goto LABEL_57;
  v35->m_Items[8] = (Il2CppObject *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[8], v37, v85, v86, v87, v88, v89, v90);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_22476/*"onAnimEnd"*/;
  if ( StringLiteral_22476/*"onAnimEnd"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22476/*"onAnimEnd"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
    v37 = StringLiteral_22476/*"onAnimEnd"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 9 )
    goto LABEL_57;
  v35->m_Items[9] = (Il2CppObject *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[9], v37, v91, v92, v93, v94, v95, v96);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_22515/*"oncompletetarget"*/;
  if ( StringLiteral_22515/*"oncompletetarget"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22515/*"oncompletetarget"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_58;
    v37 = StringLiteral_22515/*"oncompletetarget"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 0xA )
    goto LABEL_57;
  v35->m_Items[10] = (Il2CppObject *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[10], v37, v97, v98, v99, v100, v101, v102);
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v109 = (int64_t)v36;
  if ( v36 )
  {
    v36 = (UnityEngine_GameObject_o *)sub_1BCA91C(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
    {
LABEL_58:
      v112 = sub_1BCAA60(v36);
      sub_1BCA908(v112, 0LL);
    }
  }
  if ( v35->max_length <= 0xB )
LABEL_57:
    sub_1BCAA44(v36, v37);
  v35->m_Items[11] = (Il2CppObject *)v109;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[11], v109, v103, v104, v105, v106, v107, v108);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v110);
  v111 = iTween__Hash(v35, 0LL);
  iTween__MoveTo_60939552(gameObject, v111, 0LL);
}