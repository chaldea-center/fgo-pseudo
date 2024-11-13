void __fastcall TitleInfoEventTowerSlideAnimation___ctor(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTowerSlideAnimation__SetPotision(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
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
void __fastcall TitleInfoEventTowerSlideAnimation__StartSlideAnim(
        TitleInfoEventTowerSlideAnimation_o *this,
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v37; // x1
  UnityEngine_GameObject_o *gameObject; // x20
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4B14CBB & 1) == 0 )
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
    byte_4B14CBB = 1;
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1BCA888(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_1BCAA3C(transform, v37);
  }
  v45 = (System_Object_array *)transform;
  v46 = (UnityEngine_GameObject_o *)StringLiteral_21024/*"isLocal"*/;
  if ( StringLiteral_21024/*"isLocal"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_21024/*"isLocal"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_59;
    v47 = StringLiteral_21024/*"isLocal"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( !v45->max_length )
    goto LABEL_58;
  v45->m_Items[0] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)v45->m_Items, v47, v39, v40, v41, v42, v43, v44);
  v126[0] = 1;
  v46 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v126);
  v54 = (int64_t)v46;
  if ( v46 )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_59;
  }
  if ( v45->max_length <= 1 )
    goto LABEL_58;
  v45->m_Items[1] = (Il2CppObject *)v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[1], v54, v48, v49, v50, v51, v52, v53);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_22815/*"position"*/;
  if ( StringLiteral_22815/*"position"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22815/*"position"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_59;
    v47 = StringLiteral_22815/*"position"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 2 )
    goto LABEL_58;
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
      goto LABEL_59;
  }
  if ( v45->max_length <= 3 )
    goto LABEL_58;
  v45->m_Items[3] = (Il2CppObject *)v68;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[3], v68, v62, v63, v64, v65, v66, v67);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_18948/*"easeType"*/;
  if ( StringLiteral_18948/*"easeType"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_18948/*"easeType"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_59;
    v47 = StringLiteral_18948/*"easeType"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 4 )
    goto LABEL_58;
  v45->m_Items[4] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[4], v47, v69, v70, v71, v72, v73, v74);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(this->fields.easeTypeOut, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_59;
  }
  if ( v45->max_length <= 5 )
    goto LABEL_58;
  v45->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[5], (int64_t)easeTypeOut, v75, v76, v77, v78, v79, v80);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_59;
    v47 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 6 )
    goto LABEL_58;
  v45->m_Items[6] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[6], v47, v82, v83, v84, v85, v86, v87);
  slideOutTime = this->fields.slideOutTime;
  v46 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v94 = (int64_t)v46;
  if ( v46 )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_59;
  }
  if ( v45->max_length <= 7 )
    goto LABEL_58;
  v45->m_Items[7] = (Il2CppObject *)v94;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[7], v94, v88, v89, v90, v91, v92, v93);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_59;
    v47 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 8 )
    goto LABEL_58;
  v45->m_Items[8] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[8], v47, v95, v96, v97, v98, v99, v100);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_22500/*"onMoveComplete"*/;
  if ( StringLiteral_22500/*"onMoveComplete"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22500/*"onMoveComplete"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_59;
    v47 = StringLiteral_22500/*"onMoveComplete"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 9 )
    goto LABEL_58;
  v45->m_Items[9] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[9], v47, v101, v102, v103, v104, v105, v106);
  v46 = (UnityEngine_GameObject_o *)StringLiteral_22515/*"oncompletetarget"*/;
  if ( StringLiteral_22515/*"oncompletetarget"*/ )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22515/*"oncompletetarget"*/, v45->obj.klass->_1.element_class);
    if ( !v46 )
      goto LABEL_59;
    v47 = StringLiteral_22515/*"oncompletetarget"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( v45->max_length <= 0xA )
    goto LABEL_58;
  v45->m_Items[10] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[10], v47, v107, v108, v109, v110, v111, v112);
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v119 = (int64_t)v46;
  if ( v46 )
  {
    v46 = (UnityEngine_GameObject_o *)sub_1BCA91C(v46, v45->obj.klass->_1.element_class);
    if ( !v46 )
    {
LABEL_59:
      v122 = sub_1BCAA60(v46);
      sub_1BCA908(v122, 0LL);
    }
  }
  if ( v45->max_length <= 0xB )
LABEL_58:
    sub_1BCAA44(v46, v47);
  v45->m_Items[11] = (Il2CppObject *)v119;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->m_Items[11], v119, v113, v114, v115, v116, v117, v118);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v120);
  v121 = iTween__Hash(v45, 0LL);
  iTween__MoveTo_60939552(gameObject, v121, 0LL);
}


void __fastcall TitleInfoEventTowerSlideAnimation__onAnimEnd(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
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


void __fastcall TitleInfoEventTowerSlideAnimation__onMoveComplete(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v33; // x1
  Il2CppObject *Component_object; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Object_array *v47; // x21
  UnityEngine_GameObject_o *v48; // x0
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x9
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
  struct System_String_o *easeTypeIn; // x22
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x22
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
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x19
  __int64 v122; // x1
  System_Collections_Hashtable_o *v123; // x0
  __int64 v124; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v126; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v128[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B14CBC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&bool_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___, v6, v7);
    sub_1BCA7E0(&object___TypeInfo, v8, v9);
    sub_1BCA7E0(&float_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22476/*"onAnimEnd"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_18948/*"easeType"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v28, v29);
    sub_1BCA7E0(&iTween_TypeInfo, v30, v31);
    byte_4B14CBC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_63;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform
    || (transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)transform,
                                                 0LL)) == 0LL
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37),
        System_Action___ctor(
          v38,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v38, 0LL, 0, v39),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1BCA888(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_63:
    sub_1BCAA3C(transform, v33);
  }
  v47 = (System_Object_array *)transform;
  v48 = (UnityEngine_GameObject_o *)StringLiteral_21024/*"isLocal"*/;
  if ( StringLiteral_21024/*"isLocal"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_21024/*"isLocal"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
    v49 = StringLiteral_21024/*"isLocal"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( !v47->max_length )
    goto LABEL_61;
  v47->m_Items[0] = (Il2CppObject *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)v47->m_Items, v49, v41, v42, v43, v44, v45, v46);
  v128[0] = 1;
  v48 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v128);
  v56 = (int64_t)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_61;
  v47->m_Items[1] = (Il2CppObject *)v56;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[1], v56, v50, v51, v52, v53, v54, v55);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_22815/*"position"*/;
  if ( StringLiteral_22815/*"position"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22815/*"position"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
    v49 = StringLiteral_22815/*"position"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_61;
  v47->m_Items[2] = (Il2CppObject *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[2], v49, v57, v58, v59, v60, v61, v62);
  v63 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v126 = v63;
  v48 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v126);
  v70 = (int64_t)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_61;
  v47->m_Items[3] = (Il2CppObject *)v70;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[3], v70, v64, v65, v66, v67, v68, v69);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_18948/*"easeType"*/;
  if ( StringLiteral_18948/*"easeType"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_18948/*"easeType"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
    v49 = StringLiteral_18948/*"easeType"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_61;
  v47->m_Items[4] = (Il2CppObject *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[4], v49, v71, v72, v73, v74, v75, v76);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(this->fields.easeTypeIn, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_61;
  v47->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[5], (int64_t)easeTypeIn, v77, v78, v79, v80, v81, v82);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
    v49 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_61;
  v47->m_Items[6] = (Il2CppObject *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[6], v49, v84, v85, v86, v87, v88, v89);
  slideInTime = this->fields.slideInTime;
  v48 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v96 = (int64_t)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_61;
  v47->m_Items[7] = (Il2CppObject *)v96;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[7], v96, v90, v91, v92, v93, v94, v95);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
    v49 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 8 )
    goto LABEL_61;
  v47->m_Items[8] = (Il2CppObject *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[8], v49, v97, v98, v99, v100, v101, v102);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_22476/*"onAnimEnd"*/;
  if ( StringLiteral_22476/*"onAnimEnd"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22476/*"onAnimEnd"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
    v49 = StringLiteral_22476/*"onAnimEnd"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 9 )
    goto LABEL_61;
  v47->m_Items[9] = (Il2CppObject *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[9], v49, v103, v104, v105, v106, v107, v108);
  v48 = (UnityEngine_GameObject_o *)StringLiteral_22515/*"oncompletetarget"*/;
  if ( StringLiteral_22515/*"oncompletetarget"*/ )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(StringLiteral_22515/*"oncompletetarget"*/, v47->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_62;
    v49 = StringLiteral_22515/*"oncompletetarget"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v47->max_length <= 0xA )
    goto LABEL_61;
  v47->m_Items[10] = (Il2CppObject *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[10], v49, v109, v110, v111, v112, v113, v114);
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v121 = (int64_t)v48;
  if ( v48 )
  {
    v48 = (UnityEngine_GameObject_o *)sub_1BCA91C(v48, v47->obj.klass->_1.element_class);
    if ( !v48 )
    {
LABEL_62:
      v124 = sub_1BCAA60(v48);
      sub_1BCA908(v124, 0LL);
    }
  }
  if ( v47->max_length <= 0xB )
LABEL_61:
    sub_1BCAA44(v48, v49);
  v47->m_Items[11] = (Il2CppObject *)v121;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->m_Items[11], v121, v115, v116, v117, v118, v119, v120);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v122);
  v123 = iTween__Hash(v47, 0LL);
  iTween__MoveTo_60939552(gameObject, v123, 0LL);
}