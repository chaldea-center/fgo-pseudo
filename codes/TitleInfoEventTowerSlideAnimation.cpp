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
    sub_1C22094(0LL, v4);
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x20
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4BDAFE0 & 1) == 0 )
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
    byte_4BDAFE0 = 1;
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1C21EE0(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_1C22094(transform, v15);
  }
  v23 = (System_Object_array *)transform;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21175/*"isLocal"*/;
  if ( StringLiteral_21175/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_21175/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = StringLiteral_21175/*"isLocal"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_58;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v112[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v112, v26, v27, v28);
  v35 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_58;
  v23->m_Items[1] = (Il2CppObject *)v35;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[1], v35, v29, v30, v31, v32, v33, v34);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22984/*"position"*/;
  if ( StringLiteral_22984/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22984/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = StringLiteral_22984/*"position"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_58;
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
      goto LABEL_59;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_58;
  v23->m_Items[3] = (Il2CppObject *)v52;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_19077/*"easeType"*/;
  if ( StringLiteral_19077/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_19077/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = StringLiteral_19077/*"easeType"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_58;
  v23->m_Items[4] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[4], v25, v53, v54, v55, v56, v57, v58);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_58;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[5], (int64_t)easeTypeOut, v59, v60, v61, v62, v63, v64);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_58;
  v23->m_Items[6] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[6], v25, v66, v67, v68, v69, v70, v71);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v72, v73, v74);
  v81 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_58;
  v23->m_Items[7] = (Il2CppObject *)v81;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[7], v81, v75, v76, v77, v78, v79, v80);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_58;
  v23->m_Items[8] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[8], v25, v82, v83, v84, v85, v86, v87);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22667/*"onMoveComplete"*/;
  if ( StringLiteral_22667/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22667/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = StringLiteral_22667/*"onMoveComplete"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 9 )
    goto LABEL_58;
  v23->m_Items[9] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[9], v25, v88, v89, v90, v91, v92, v93);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22682/*"oncompletetarget"*/;
  if ( StringLiteral_22682/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22682/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_59;
    v25 = StringLiteral_22682/*"oncompletetarget"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 0xA )
    goto LABEL_58;
  v23->m_Items[10] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[10], v25, v94, v95, v96, v97, v98, v99);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v106 = (int64_t)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_1C21F74(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_59:
      v108 = sub_1C220B8(v24);
      sub_1C21F60(v108, 0LL);
    }
  }
  if ( v23->max_length <= 0xB )
LABEL_58:
    sub_1C2209C(v24, v25);
  v23->m_Items[11] = (Il2CppObject *)v106;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v23->m_Items[11], v106, v100, v101, v102, v103, v104, v105);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v107 = iTween__Hash(v23, 0LL);
  iTween__MoveTo_61653064(gameObject, v107, 0LL);
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
    sub_1C21DDC(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall TitleInfoEventTowerSlideAnimation__onMoveComplete(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Object_array *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  int64_t v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x9
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
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
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_String_o *easeTypeIn; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x22
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
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x19
  System_Collections_Hashtable_o *v99; // x0
  __int64 v100; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v102; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v104[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BDAFE1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    sub_1C21E38(&StringLiteral_22643/*"onAnimEnd"*/);
    sub_1C21E38(&StringLiteral_21175/*"isLocal"*/);
    sub_1C21E38(&StringLiteral_19077/*"easeType"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDAFE1 = 1;
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
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v6, 0LL, 0, v7),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1C21EE0(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_63:
    sub_1C22094(transform, v4);
  }
  v15 = (System_Object_array *)transform;
  v16 = (UnityEngine_GameObject_o *)StringLiteral_21175/*"isLocal"*/;
  if ( StringLiteral_21175/*"isLocal"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_21175/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v17 = StringLiteral_21175/*"isLocal"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_61;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)v15->m_Items, v17, v9, v10, v11, v12, v13, v14);
  v104[0] = 1;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v104, v18, v19, v20);
  v27 = (int64_t)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_61;
  v15->m_Items[1] = (Il2CppObject *)v27;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22984/*"position"*/;
  if ( StringLiteral_22984/*"position"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22984/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v17 = StringLiteral_22984/*"position"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_61;
  v15->m_Items[2] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[2], v17, v28, v29, v30, v31, v32, v33);
  v34 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v102 = v34;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v102, v35, v36, v37);
  v44 = (int64_t)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_61;
  v15->m_Items[3] = (Il2CppObject *)v44;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_19077/*"easeType"*/;
  if ( StringLiteral_19077/*"easeType"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_19077/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v17 = StringLiteral_19077/*"easeType"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 4 )
    goto LABEL_61;
  v15->m_Items[4] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[4], v17, v45, v46, v47, v48, v49, v50);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(this->fields.easeTypeIn, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
  }
  if ( v15->max_length <= 5 )
    goto LABEL_61;
  v15->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[5], (int64_t)easeTypeIn, v51, v52, v53, v54, v55, v56);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_24360/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v17 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 6 )
    goto LABEL_61;
  v15->m_Items[6] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[6], v17, v58, v59, v60, v61, v62, v63);
  slideInTime = this->fields.slideInTime;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v64, v65, v66);
  v73 = (int64_t)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
  }
  if ( v15->max_length <= 7 )
    goto LABEL_61;
  v15->m_Items[7] = (Il2CppObject *)v73;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[7], v73, v67, v68, v69, v70, v71, v72);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v17 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 8 )
    goto LABEL_61;
  v15->m_Items[8] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[8], v17, v74, v75, v76, v77, v78, v79);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22643/*"onAnimEnd"*/;
  if ( StringLiteral_22643/*"onAnimEnd"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22643/*"onAnimEnd"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v17 = StringLiteral_22643/*"onAnimEnd"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 9 )
    goto LABEL_61;
  v15->m_Items[9] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[9], v17, v80, v81, v82, v83, v84, v85);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22682/*"oncompletetarget"*/;
  if ( StringLiteral_22682/*"oncompletetarget"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(StringLiteral_22682/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_62;
    v17 = StringLiteral_22682/*"oncompletetarget"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 0xA )
    goto LABEL_61;
  v15->m_Items[10] = (Il2CppObject *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[10], v17, v86, v87, v88, v89, v90, v91);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v98 = (int64_t)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C21F74(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_62:
      v100 = sub_1C220B8(v16);
      sub_1C21F60(v100, 0LL);
    }
  }
  if ( v15->max_length <= 0xB )
LABEL_61:
    sub_1C2209C(v16, v17);
  v15->m_Items[11] = (Il2CppObject *)v98;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->m_Items[11], v98, v92, v93, v94, v95, v96, v97);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v99 = iTween__Hash(v15, 0LL);
  iTween__MoveTo_61653064(gameObject, v99, 0LL);
}