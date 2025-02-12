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
    sub_1C13F80(0LL, v4);
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *gameObject; // x20
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4BB317E & 1) == 0 )
  {
    sub_1C13D24(&bool_TypeInfo, callback);
    sub_1C13D24(&object___TypeInfo, v14);
    sub_1C13D24(&float_TypeInfo, v15);
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v16);
    sub_1C13D24(&StringLiteral_22630/*"onClickCheckListView"*/, v17);
    sub_1C13D24(&StringLiteral_24320/*"textarea"*/, v18);
    sub_1C13D24(&StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/, v19);
    sub_1C13D24(&StringLiteral_22946/*"playerCutInSvtIds"*/, v20);
    sub_1C13D24(&StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/, v21);
    sub_1C13D24(&StringLiteral_19048/*"easeInQuad"*/, v22);
    sub_1C13D24(&StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/, v23);
    sub_1C13D24(&iTween_TypeInfo, v24);
    byte_4BB317E = 1;
  }
  this->fields.endCallback = callback;
  sub_1C13CC8(
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
        (transform = (UnityEngine_Transform_o *)sub_1C13DCC(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_1C13F80(transform, v26);
  }
  v34 = (System_Object_array *)transform;
  v35 = (UnityEngine_GameObject_o *)StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/;
  if ( StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
    v36 = StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( !v34->max_length )
    goto LABEL_58;
  v34->m_Items[0] = (Il2CppObject *)v36;
  sub_1C13CC8((PartyOrganizationUtility_o *)v34->m_Items, v36, v28, v29, v30, v31, v32, v33);
  v123[0] = 1;
  v35 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v123, v37, v38, v39);
  v46 = (int64_t)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_58;
  v34->m_Items[1] = (Il2CppObject *)v46;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[1], v46, v40, v41, v42, v43, v44, v45);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_22946/*"playerCutInSvtIds"*/;
  if ( StringLiteral_22946/*"playerCutInSvtIds"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_22946/*"playerCutInSvtIds"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
    v36 = StringLiteral_22946/*"playerCutInSvtIds"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_58;
  v34->m_Items[2] = (Il2CppObject *)v36;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[2], v36, v47, v48, v49, v50, v51, v52);
  v53 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v121 = this->fields.slideOutPosition.fields.z;
  v120 = v53;
  v35 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v120, v54, v55, v56);
  v63 = (int64_t)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
  }
  if ( v34->max_length <= 3 )
    goto LABEL_58;
  v34->m_Items[3] = (Il2CppObject *)v63;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[3], v63, v57, v58, v59, v60, v61, v62);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_19048/*"easeInQuad"*/;
  if ( StringLiteral_19048/*"easeInQuad"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_19048/*"easeInQuad"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
    v36 = StringLiteral_19048/*"easeInQuad"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 4 )
    goto LABEL_58;
  v34->m_Items[4] = (Il2CppObject *)v36;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[4], v36, v64, v65, v66, v67, v68, v69);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(this->fields.easeTypeOut, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
  }
  if ( v34->max_length <= 5 )
    goto LABEL_58;
  v34->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[5], (int64_t)easeTypeOut, v70, v71, v72, v73, v74, v75);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_24320/*"textarea"*/;
  if ( StringLiteral_24320/*"textarea"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_24320/*"textarea"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
    v36 = StringLiteral_24320/*"textarea"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 6 )
    goto LABEL_58;
  v34->m_Items[6] = (Il2CppObject *)v36;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[6], v36, v77, v78, v79, v80, v81, v82);
  slideOutTime = this->fields.slideOutTime;
  v35 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v83, v84, v85);
  v92 = (int64_t)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
  }
  if ( v34->max_length <= 7 )
    goto LABEL_58;
  v34->m_Items[7] = (Il2CppObject *)v92;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[7], v92, v86, v87, v88, v89, v90, v91);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/;
  if ( StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
    v36 = StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 8 )
    goto LABEL_58;
  v34->m_Items[8] = (Il2CppObject *)v36;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[8], v36, v93, v94, v95, v96, v97, v98);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_22630/*"onClickCheckListView"*/;
  if ( StringLiteral_22630/*"onClickCheckListView"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_22630/*"onClickCheckListView"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
    v36 = StringLiteral_22630/*"onClickCheckListView"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 9 )
    goto LABEL_58;
  v34->m_Items[9] = (Il2CppObject *)v36;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[9], v36, v99, v100, v101, v102, v103, v104);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/;
  if ( StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_59;
    v36 = StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v34->max_length <= 0xA )
    goto LABEL_58;
  v34->m_Items[10] = (Il2CppObject *)v36;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[10], v36, v105, v106, v107, v108, v109, v110);
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v117 = (int64_t)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_1C13E60(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
    {
LABEL_59:
      v119 = sub_1C13FA4(v35);
      sub_1C13E4C(v119, 0LL);
    }
  }
  if ( v34->max_length <= 0xB )
LABEL_58:
    sub_1C13F88(v35, v36);
  v34->m_Items[11] = (Il2CppObject *)v117;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v34->m_Items[11], v117, v111, v112, v113, v114, v115, v116);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v118 = iTween__Hash(v34, 0LL);
  iTween__MoveTo_61505532(gameObject, v118, 0LL);
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
    sub_1C13CC8(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall TitleInfoEventTowerSlideAnimation__onMoveComplete(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x20
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Object_array *v29; // x21
  UnityEngine_GameObject_o *v30; // x0
  int64_t v31; // x1
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
  __int64 v48; // x9
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
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
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x22
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
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x19
  System_Collections_Hashtable_o *v113; // x0
  __int64 v114; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v116; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v118[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BB317F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&bool_TypeInfo, v3);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___, v4);
    sub_1C13D24(&object___TypeInfo, v5);
    sub_1C13D24(&float_TypeInfo, v6);
    sub_1C13D24(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__, v7);
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_24320/*"textarea"*/, v9);
    sub_1C13D24(&StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/, v10);
    sub_1C13D24(&StringLiteral_22946/*"playerCutInSvtIds"*/, v11);
    sub_1C13D24(&StringLiteral_22606/*"offsetIn"*/, v12);
    sub_1C13D24(&StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/, v13);
    sub_1C13D24(&StringLiteral_19048/*"easeInQuad"*/, v14);
    sub_1C13D24(&StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/, v15);
    sub_1C13D24(&iTween_TypeInfo, v16);
    byte_4BB317F = 1;
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
                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v20 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
        System_Action___ctor(
          v20,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v20, 0LL, 0, v21),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1C13DCC(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_63:
    sub_1C13F80(transform, v18);
  }
  v29 = (System_Object_array *)transform;
  v30 = (UnityEngine_GameObject_o *)StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/;
  if ( StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
    v31 = StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !v29->max_length )
    goto LABEL_61;
  v29->m_Items[0] = (Il2CppObject *)v31;
  sub_1C13CC8((PartyOrganizationUtility_o *)v29->m_Items, v31, v23, v24, v25, v26, v27, v28);
  v118[0] = 1;
  v30 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v118, v32, v33, v34);
  v41 = (int64_t)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
  }
  if ( v29->max_length <= 1 )
    goto LABEL_61;
  v29->m_Items[1] = (Il2CppObject *)v41;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[1], v41, v35, v36, v37, v38, v39, v40);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_22946/*"playerCutInSvtIds"*/;
  if ( StringLiteral_22946/*"playerCutInSvtIds"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_22946/*"playerCutInSvtIds"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
    v31 = StringLiteral_22946/*"playerCutInSvtIds"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 2 )
    goto LABEL_61;
  v29->m_Items[2] = (Il2CppObject *)v31;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[2], v31, v42, v43, v44, v45, v46, v47);
  v48 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v116 = v48;
  v30 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v116, v49, v50, v51);
  v58 = (int64_t)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
  }
  if ( v29->max_length <= 3 )
    goto LABEL_61;
  v29->m_Items[3] = (Il2CppObject *)v58;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_19048/*"easeInQuad"*/;
  if ( StringLiteral_19048/*"easeInQuad"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_19048/*"easeInQuad"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
    v31 = StringLiteral_19048/*"easeInQuad"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 4 )
    goto LABEL_61;
  v29->m_Items[4] = (Il2CppObject *)v31;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[4], v31, v59, v60, v61, v62, v63, v64);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(this->fields.easeTypeIn, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
  }
  if ( v29->max_length <= 5 )
    goto LABEL_61;
  v29->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[5], (int64_t)easeTypeIn, v65, v66, v67, v68, v69, v70);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_24320/*"textarea"*/;
  if ( StringLiteral_24320/*"textarea"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_24320/*"textarea"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
    v31 = StringLiteral_24320/*"textarea"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 6 )
    goto LABEL_61;
  v29->m_Items[6] = (Il2CppObject *)v31;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[6], v31, v72, v73, v74, v75, v76, v77);
  slideInTime = this->fields.slideInTime;
  v30 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v78, v79, v80);
  v87 = (int64_t)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
  }
  if ( v29->max_length <= 7 )
    goto LABEL_61;
  v29->m_Items[7] = (Il2CppObject *)v87;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[7], v87, v81, v82, v83, v84, v85, v86);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/;
  if ( StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
    v31 = StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 8 )
    goto LABEL_61;
  v29->m_Items[8] = (Il2CppObject *)v31;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[8], v31, v88, v89, v90, v91, v92, v93);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_22606/*"offsetIn"*/;
  if ( StringLiteral_22606/*"offsetIn"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_22606/*"offsetIn"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
    v31 = StringLiteral_22606/*"offsetIn"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 9 )
    goto LABEL_61;
  v29->m_Items[9] = (Il2CppObject *)v31;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[9], v31, v94, v95, v96, v97, v98, v99);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/;
  if ( StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_62;
    v31 = StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 0xA )
    goto LABEL_61;
  v29->m_Items[10] = (Il2CppObject *)v31;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[10], v31, v100, v101, v102, v103, v104, v105);
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v112 = (int64_t)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_1C13E60(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
    {
LABEL_62:
      v114 = sub_1C13FA4(v30);
      sub_1C13E4C(v114, 0LL);
    }
  }
  if ( v29->max_length <= 0xB )
LABEL_61:
    sub_1C13F88(v30, v31);
  v29->m_Items[11] = (Il2CppObject *)v112;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->m_Items[11], v112, v106, v107, v108, v109, v110, v111);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v113 = iTween__Hash(v29, 0LL);
  iTween__MoveTo_61505532(gameObject, v113, 0LL);
}