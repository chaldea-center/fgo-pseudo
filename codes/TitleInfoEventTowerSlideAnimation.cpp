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
    sub_B2C434(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerSlideAnimation__StartSlideAnim(
        TitleInfoEventTowerSlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
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
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Object_array *v34; // x21
  UnityEngine_GameObject_o *v35; // x0
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  float v51; // w9
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x22
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **easeTypeOut; // x22
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x22
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x19
  System_Collections_Hashtable_o *v115; // x0
  __int64 v116; // x0
  __int64 v117; // x0
  __int64 v118; // [xsp+0h] [xbp-50h] BYREF
  float v119; // [xsp+8h] [xbp-48h]
  float slideOutTime; // [xsp+18h] [xbp-38h] BYREF
  char v121[4]; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_41863BA & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, callback);
    sub_B2C35C(&object___TypeInfo, v14);
    sub_B2C35C(&float_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Vector3_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_21251/*"onMoveComplete"*/, v17);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v18);
    sub_B2C35C(&StringLiteral_21265/*"oncompletetarget"*/, v19);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v20);
    sub_B2C35C(&StringLiteral_19938/*"isLocal"*/, v21);
    sub_B2C35C(&StringLiteral_18113/*"easeType"*/, v22);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v23);
    sub_B2C35C(&iTween_TypeInfo, v24);
    byte_41863BA = 1;
  }
  this->fields.endCallback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
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
        (transform = (UnityEngine_Transform_o *)sub_B2C374(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_B2C434(transform, v26);
  }
  v34 = (System_Object_array *)transform;
  v35 = (UnityEngine_GameObject_o *)StringLiteral_19938/*"isLocal"*/;
  if ( StringLiteral_19938/*"isLocal"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_19938/*"isLocal"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
    v36 = (System_Int32_array **)StringLiteral_19938/*"isLocal"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( !v34->max_length )
    goto LABEL_59;
  v34->m_Items[0] = (Il2CppObject *)v36;
  sub_B2C2F8((BattleServantConfConponent_o *)v34->m_Items, v36, v28, v29, v30, v31, v32, v33);
  v121[0] = 1;
  v35 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v121);
  v43 = (System_Int32_array **)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_59;
  v34->m_Items[1] = (Il2CppObject *)v43;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[1], v43, v37, v38, v39, v40, v41, v42);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_21511/*"position"*/;
  if ( StringLiteral_21511/*"position"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_21511/*"position"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
    v50 = (System_Int32_array **)StringLiteral_21511/*"position"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_59;
  v34->m_Items[2] = (Il2CppObject *)v50;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[2], v50, v44, v45, v46, v47, v48, v49);
  v51 = this->fields.slideOutPosition.fields.z;
  v118 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v119 = v51;
  v35 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v118);
  v58 = (System_Int32_array **)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
  }
  if ( v34->max_length <= 3 )
    goto LABEL_59;
  v34->m_Items[3] = (Il2CppObject *)v58;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_18113/*"easeType"*/;
  if ( StringLiteral_18113/*"easeType"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_18113/*"easeType"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
    v65 = (System_Int32_array **)StringLiteral_18113/*"easeType"*/;
  }
  else
  {
    v65 = 0LL;
  }
  if ( v34->max_length <= 4 )
    goto LABEL_59;
  v34->m_Items[4] = (Il2CppObject *)v65;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[4], v65, v59, v60, v61, v62, v63, v64);
  easeTypeOut = (System_Int32_array **)this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(this->fields.easeTypeOut, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
  }
  if ( v34->max_length <= 5 )
    goto LABEL_59;
  v34->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[5], easeTypeOut, v66, v67, v68, v69, v70, v71);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_22677/*"time"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
    v79 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
  }
  else
  {
    v79 = 0LL;
  }
  if ( v34->max_length <= 6 )
    goto LABEL_59;
  v34->m_Items[6] = (Il2CppObject *)v79;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[6], v79, v73, v74, v75, v76, v77, v78);
  slideOutTime = this->fields.slideOutTime;
  v35 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v86 = (System_Int32_array **)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
  }
  if ( v34->max_length <= 7 )
    goto LABEL_59;
  v34->m_Items[7] = (Il2CppObject *)v86;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[7], v86, v80, v81, v82, v83, v84, v85);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_21263/*"oncomplete"*/;
  if ( StringLiteral_21263/*"oncomplete"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_21263/*"oncomplete"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
    v93 = (System_Int32_array **)StringLiteral_21263/*"oncomplete"*/;
  }
  else
  {
    v93 = 0LL;
  }
  if ( v34->max_length <= 8 )
    goto LABEL_59;
  v34->m_Items[8] = (Il2CppObject *)v93;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[8], v93, v87, v88, v89, v90, v91, v92);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_21251/*"onMoveComplete"*/;
  if ( StringLiteral_21251/*"onMoveComplete"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_21251/*"onMoveComplete"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
    v100 = (System_Int32_array **)StringLiteral_21251/*"onMoveComplete"*/;
  }
  else
  {
    v100 = 0LL;
  }
  if ( v34->max_length <= 9 )
    goto LABEL_59;
  v34->m_Items[9] = (Il2CppObject *)v100;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[9], v100, v94, v95, v96, v97, v98, v99);
  v35 = (UnityEngine_GameObject_o *)StringLiteral_21265/*"oncompletetarget"*/;
  if ( StringLiteral_21265/*"oncompletetarget"*/ )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_21265/*"oncompletetarget"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_60;
    v107 = (System_Int32_array **)StringLiteral_21265/*"oncompletetarget"*/;
  }
  else
  {
    v107 = 0LL;
  }
  if ( v34->max_length <= 0xA )
    goto LABEL_59;
  v34->m_Items[10] = (Il2CppObject *)v107;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[10], v107, v101, v102, v103, v104, v105, v106);
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v114 = (System_Int32_array **)v35;
  if ( v35 )
  {
    v35 = (UnityEngine_GameObject_o *)sub_B2C41C(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
    {
LABEL_60:
      v117 = sub_B2C454();
      sub_B2C400(v117, 0LL);
    }
  }
  if ( v34->max_length <= 0xB )
  {
LABEL_59:
    v116 = sub_B2C460(v35);
    sub_B2C400(v116, 0LL);
  }
  v34->m_Items[11] = (Il2CppObject *)v114;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->m_Items[11], v114, v108, v109, v110, v111, v112, v113);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v115 = iTween__Hash(v34, 0LL);
  iTween__MoveTo_42732664(gameObject, v115, 0LL);
}


void __fastcall TitleInfoEventTowerSlideAnimation__onAnimEnd(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_endCallback; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (BattleServantConfConponent_o *)&this->fields.endCallback;
  v9 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0LL;
    sub_B2C2F8(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
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
  TitleInfoEventTower_o *Component_srcLineSprite; // x20
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Object_array *v29; // x21
  UnityEngine_GameObject_o *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  float z; // w9
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **easeTypeIn; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x22
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x1
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x19
  System_Collections_Hashtable_o *v110; // x0
  __int64 v111; // x0
  __int64 v112; // x0
  float slideInTime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v114; // [xsp+10h] [xbp-30h] BYREF
  float v115; // [xsp+18h] [xbp-28h]
  char v116[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_41863BB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&bool_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___, v4);
    sub_B2C35C(&object___TypeInfo, v5);
    sub_B2C35C(&float_TypeInfo, v6);
    sub_B2C35C(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__, v7);
    sub_B2C35C(&UnityEngine_Vector3_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v9);
    sub_B2C35C(&StringLiteral_21265/*"oncompletetarget"*/, v10);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v11);
    sub_B2C35C(&StringLiteral_21227/*"onAnimEnd"*/, v12);
    sub_B2C35C(&StringLiteral_19938/*"isLocal"*/, v13);
    sub_B2C35C(&StringLiteral_18113/*"easeType"*/, v14);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v15);
    sub_B2C35C(&iTween_TypeInfo, v16);
    byte_41863BB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_64;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform
    || (transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)transform,
                                                 0LL)) == 0LL
    || (Component_srcLineSprite = (TitleInfoEventTower_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)transform,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v20,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_srcLineSprite)
    || (TitleInfoEventTower__Open(Component_srcLineSprite, v20, 0LL, 0, v21),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_B2C374(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_64:
    sub_B2C434(transform, v18);
  }
  v29 = (System_Object_array *)transform;
  v30 = (UnityEngine_GameObject_o *)StringLiteral_19938/*"isLocal"*/;
  if ( StringLiteral_19938/*"isLocal"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_19938/*"isLocal"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
    v31 = (System_Int32_array **)StringLiteral_19938/*"isLocal"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !v29->max_length )
    goto LABEL_62;
  v29->m_Items[0] = (Il2CppObject *)v31;
  sub_B2C2F8((BattleServantConfConponent_o *)v29->m_Items, v31, v23, v24, v25, v26, v27, v28);
  v116[0] = 1;
  v30 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v116);
  v38 = (System_Int32_array **)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
  }
  if ( v29->max_length <= 1 )
    goto LABEL_62;
  v29->m_Items[1] = (Il2CppObject *)v38;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[1], v38, v32, v33, v34, v35, v36, v37);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_21511/*"position"*/;
  if ( StringLiteral_21511/*"position"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_21511/*"position"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
    v45 = (System_Int32_array **)StringLiteral_21511/*"position"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v29->max_length <= 2 )
    goto LABEL_62;
  v29->m_Items[2] = (Il2CppObject *)v45;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[2], v45, v39, v40, v41, v42, v43, v44);
  z = this->fields.slideInPosition.fields.z;
  v114 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v115 = z;
  v30 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v114);
  v53 = (System_Int32_array **)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
  }
  if ( v29->max_length <= 3 )
    goto LABEL_62;
  v29->m_Items[3] = (Il2CppObject *)v53;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_18113/*"easeType"*/;
  if ( StringLiteral_18113/*"easeType"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_18113/*"easeType"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
    v60 = (System_Int32_array **)StringLiteral_18113/*"easeType"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v29->max_length <= 4 )
    goto LABEL_62;
  v29->m_Items[4] = (Il2CppObject *)v60;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[4], v60, v54, v55, v56, v57, v58, v59);
  easeTypeIn = (System_Int32_array **)this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(this->fields.easeTypeIn, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
  }
  if ( v29->max_length <= 5 )
    goto LABEL_62;
  v29->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[5], easeTypeIn, v61, v62, v63, v64, v65, v66);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_22677/*"time"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
    v74 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
  }
  else
  {
    v74 = 0LL;
  }
  if ( v29->max_length <= 6 )
    goto LABEL_62;
  v29->m_Items[6] = (Il2CppObject *)v74;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[6], v74, v68, v69, v70, v71, v72, v73);
  slideInTime = this->fields.slideInTime;
  v30 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v81 = (System_Int32_array **)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
  }
  if ( v29->max_length <= 7 )
    goto LABEL_62;
  v29->m_Items[7] = (Il2CppObject *)v81;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[7], v81, v75, v76, v77, v78, v79, v80);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_21263/*"oncomplete"*/;
  if ( StringLiteral_21263/*"oncomplete"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_21263/*"oncomplete"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
    v88 = (System_Int32_array **)StringLiteral_21263/*"oncomplete"*/;
  }
  else
  {
    v88 = 0LL;
  }
  if ( v29->max_length <= 8 )
    goto LABEL_62;
  v29->m_Items[8] = (Il2CppObject *)v88;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[8], v88, v82, v83, v84, v85, v86, v87);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_21227/*"onAnimEnd"*/;
  if ( StringLiteral_21227/*"onAnimEnd"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_21227/*"onAnimEnd"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
    v95 = (System_Int32_array **)StringLiteral_21227/*"onAnimEnd"*/;
  }
  else
  {
    v95 = 0LL;
  }
  if ( v29->max_length <= 9 )
    goto LABEL_62;
  v29->m_Items[9] = (Il2CppObject *)v95;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[9], v95, v89, v90, v91, v92, v93, v94);
  v30 = (UnityEngine_GameObject_o *)StringLiteral_21265/*"oncompletetarget"*/;
  if ( StringLiteral_21265/*"oncompletetarget"*/ )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(StringLiteral_21265/*"oncompletetarget"*/, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_63;
    v102 = (System_Int32_array **)StringLiteral_21265/*"oncompletetarget"*/;
  }
  else
  {
    v102 = 0LL;
  }
  if ( v29->max_length <= 0xA )
    goto LABEL_62;
  v29->m_Items[10] = (Il2CppObject *)v102;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[10], v102, v96, v97, v98, v99, v100, v101);
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v109 = (System_Int32_array **)v30;
  if ( v30 )
  {
    v30 = (UnityEngine_GameObject_o *)sub_B2C41C(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
    {
LABEL_63:
      v112 = sub_B2C454();
      sub_B2C400(v112, 0LL);
    }
  }
  if ( v29->max_length <= 0xB )
  {
LABEL_62:
    v111 = sub_B2C460(v30);
    sub_B2C400(v111, 0LL);
  }
  v29->m_Items[11] = (Il2CppObject *)v109;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[11], v109, v103, v104, v105, v106, v107, v108);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v110 = iTween__Hash(v29, 0LL);
  iTween__MoveTo_42732664(gameObject, v110, 0LL);
}