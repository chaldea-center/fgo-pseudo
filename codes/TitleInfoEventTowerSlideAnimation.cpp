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

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
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
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Object_array *v33; // x21
  UnityEngine_GameObject_o *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  float v50; // w9
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **easeTypeOut; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x22
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x19
  System_Collections_Hashtable_o *v114; // x0
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // [xsp+0h] [xbp-50h] BYREF
  float v118; // [xsp+8h] [xbp-48h]
  float slideOutTime; // [xsp+18h] [xbp-38h] BYREF
  char v120[4]; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_421309C & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, callback);
    sub_B0D8A4(&object___TypeInfo, v14);
    sub_B0D8A4(&float_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Vector3_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_21320/*"onMoveComplete"*/, v17);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v18);
    sub_B0D8A4(&StringLiteral_21334/*"oncompletetarget"*/, v19);
    sub_B0D8A4(&StringLiteral_21581/*"position"*/, v20);
    sub_B0D8A4(&StringLiteral_20001/*"isLocal"*/, v21);
    sub_B0D8A4(&StringLiteral_18169/*"easeType"*/, v22);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v23);
    sub_B0D8A4(&iTween_TypeInfo, v24);
    byte_421309C = 1;
  }
  this->fields.endCallback = callback;
  sub_B0D840(
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
        (transform = (UnityEngine_Transform_o *)sub_B0D8BC(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_B0D97C(transform);
  }
  v33 = (System_Object_array *)transform;
  v34 = (UnityEngine_GameObject_o *)StringLiteral_20001/*"isLocal"*/;
  if ( StringLiteral_20001/*"isLocal"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_20001/*"isLocal"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
    v35 = (System_Int32_array **)StringLiteral_20001/*"isLocal"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !v33->max_length )
    goto LABEL_59;
  v33->m_Items[0] = (Il2CppObject *)v35;
  sub_B0D840((BattleServantConfConponent_o *)v33->m_Items, v35, v27, v28, v29, v30, v31, v32);
  v120[0] = 1;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v120);
  v42 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_59;
  v33->m_Items[1] = (Il2CppObject *)v42;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21581/*"position"*/;
  if ( StringLiteral_21581/*"position"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21581/*"position"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
    v49 = (System_Int32_array **)StringLiteral_21581/*"position"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( v33->max_length <= 2 )
    goto LABEL_59;
  v33->m_Items[2] = (Il2CppObject *)v49;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
  v50 = this->fields.slideOutPosition.fields.z;
  v117 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v118 = v50;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v117);
  v57 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
  }
  if ( v33->max_length <= 3 )
    goto LABEL_59;
  v33->m_Items[3] = (Il2CppObject *)v57;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[3], v57, v51, v52, v53, v54, v55, v56);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_18169/*"easeType"*/;
  if ( StringLiteral_18169/*"easeType"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_18169/*"easeType"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
    v64 = (System_Int32_array **)StringLiteral_18169/*"easeType"*/;
  }
  else
  {
    v64 = 0LL;
  }
  if ( v33->max_length <= 4 )
    goto LABEL_59;
  v33->m_Items[4] = (Il2CppObject *)v64;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[4], v64, v58, v59, v60, v61, v62, v63);
  easeTypeOut = (System_Int32_array **)this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(this->fields.easeTypeOut, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
  }
  if ( v33->max_length <= 5 )
    goto LABEL_59;
  v33->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[5], easeTypeOut, v65, v66, v67, v68, v69, v70);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_22753/*"time"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
    v78 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v78 = 0LL;
  }
  if ( v33->max_length <= 6 )
    goto LABEL_59;
  v33->m_Items[6] = (Il2CppObject *)v78;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[6], v78, v72, v73, v74, v75, v76, v77);
  slideOutTime = this->fields.slideOutTime;
  v34 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v85 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
  }
  if ( v33->max_length <= 7 )
    goto LABEL_59;
  v33->m_Items[7] = (Il2CppObject *)v85;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[7], v85, v79, v80, v81, v82, v83, v84);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
    v92 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( v33->max_length <= 8 )
    goto LABEL_59;
  v33->m_Items[8] = (Il2CppObject *)v92;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[8], v92, v86, v87, v88, v89, v90, v91);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21320/*"onMoveComplete"*/;
  if ( StringLiteral_21320/*"onMoveComplete"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21320/*"onMoveComplete"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
    v99 = (System_Int32_array **)StringLiteral_21320/*"onMoveComplete"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( v33->max_length <= 9 )
    goto LABEL_59;
  v33->m_Items[9] = (Il2CppObject *)v99;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[9], v99, v93, v94, v95, v96, v97, v98);
  v34 = (UnityEngine_GameObject_o *)StringLiteral_21334/*"oncompletetarget"*/;
  if ( StringLiteral_21334/*"oncompletetarget"*/ )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21334/*"oncompletetarget"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_60;
    v106 = (System_Int32_array **)StringLiteral_21334/*"oncompletetarget"*/;
  }
  else
  {
    v106 = 0LL;
  }
  if ( v33->max_length <= 0xA )
    goto LABEL_59;
  v33->m_Items[10] = (Il2CppObject *)v106;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[10], v106, v100, v101, v102, v103, v104, v105);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v113 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (UnityEngine_GameObject_o *)sub_B0D964(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
    {
LABEL_60:
      v116 = sub_B0D99C();
      sub_B0D948(v116, 0LL);
    }
  }
  if ( v33->max_length <= 0xB )
  {
LABEL_59:
    v115 = sub_B0D9A8(v34);
    sub_B0D948(v115, 0LL);
  }
  v33->m_Items[11] = (Il2CppObject *)v113;
  sub_B0D840((BattleServantConfConponent_o *)&v33->m_Items[11], v113, v107, v108, v109, v110, v111, v112);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v114 = iTween__Hash(v33, 0LL);
  iTween__MoveTo_42384720(gameObject, v114, 0LL);
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
    sub_B0D840(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  TitleInfoEventTower_o *Component_srcLineSprite; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Object_array *v30; // x21
  UnityEngine_GameObject_o *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  float z; // w9
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **easeTypeIn; // x22
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x22
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x19
  System_Collections_Hashtable_o *v111; // x0
  __int64 v112; // x0
  __int64 v113; // x0
  float slideInTime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v115; // [xsp+10h] [xbp-30h] BYREF
  float v116; // [xsp+18h] [xbp-28h]
  char v117[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_421309D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&bool_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___, v4);
    sub_B0D8A4(&object___TypeInfo, v5);
    sub_B0D8A4(&float_TypeInfo, v6);
    sub_B0D8A4(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__, v7);
    sub_B0D8A4(&UnityEngine_Vector3_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v9);
    sub_B0D8A4(&StringLiteral_21334/*"oncompletetarget"*/, v10);
    sub_B0D8A4(&StringLiteral_21581/*"position"*/, v11);
    sub_B0D8A4(&StringLiteral_21296/*"onAnimEnd"*/, v12);
    sub_B0D8A4(&StringLiteral_20001/*"isLocal"*/, v13);
    sub_B0D8A4(&StringLiteral_18169/*"easeType"*/, v14);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v15);
    sub_B0D8A4(&iTween_TypeInfo, v16);
    byte_421309D = 1;
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
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20),
        System_Action___ctor(
          v21,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_srcLineSprite)
    || (TitleInfoEventTower__Open(Component_srcLineSprite, v21, 0LL, 0, v22),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_B0D8BC(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_64:
    sub_B0D97C(transform);
  }
  v30 = (System_Object_array *)transform;
  v31 = (UnityEngine_GameObject_o *)StringLiteral_20001/*"isLocal"*/;
  if ( StringLiteral_20001/*"isLocal"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_20001/*"isLocal"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v32 = (System_Int32_array **)StringLiteral_20001/*"isLocal"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !v30->max_length )
    goto LABEL_62;
  v30->m_Items[0] = (Il2CppObject *)v32;
  sub_B0D840((BattleServantConfConponent_o *)v30->m_Items, v32, v24, v25, v26, v27, v28, v29);
  v117[0] = 1;
  v31 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v117);
  v39 = (System_Int32_array **)v31;
  if ( v31 )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
  }
  if ( v30->max_length <= 1 )
    goto LABEL_62;
  v30->m_Items[1] = (Il2CppObject *)v39;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[1], v39, v33, v34, v35, v36, v37, v38);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_21581/*"position"*/;
  if ( StringLiteral_21581/*"position"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21581/*"position"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v46 = (System_Int32_array **)StringLiteral_21581/*"position"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( v30->max_length <= 2 )
    goto LABEL_62;
  v30->m_Items[2] = (Il2CppObject *)v46;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[2], v46, v40, v41, v42, v43, v44, v45);
  z = this->fields.slideInPosition.fields.z;
  v115 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v116 = z;
  v31 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v115);
  v54 = (System_Int32_array **)v31;
  if ( v31 )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
  }
  if ( v30->max_length <= 3 )
    goto LABEL_62;
  v30->m_Items[3] = (Il2CppObject *)v54;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[3], v54, v48, v49, v50, v51, v52, v53);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_18169/*"easeType"*/;
  if ( StringLiteral_18169/*"easeType"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_18169/*"easeType"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v61 = (System_Int32_array **)StringLiteral_18169/*"easeType"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( v30->max_length <= 4 )
    goto LABEL_62;
  v30->m_Items[4] = (Il2CppObject *)v61;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[4], v61, v55, v56, v57, v58, v59, v60);
  easeTypeIn = (System_Int32_array **)this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(this->fields.easeTypeIn, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
  }
  if ( v30->max_length <= 5 )
    goto LABEL_62;
  v30->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[5], easeTypeIn, v62, v63, v64, v65, v66, v67);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_22753/*"time"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v75 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v75 = 0LL;
  }
  if ( v30->max_length <= 6 )
    goto LABEL_62;
  v30->m_Items[6] = (Il2CppObject *)v75;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[6], v75, v69, v70, v71, v72, v73, v74);
  slideInTime = this->fields.slideInTime;
  v31 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v82 = (System_Int32_array **)v31;
  if ( v31 )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
  }
  if ( v30->max_length <= 7 )
    goto LABEL_62;
  v30->m_Items[7] = (Il2CppObject *)v82;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[7], v82, v76, v77, v78, v79, v80, v81);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v89 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v89 = 0LL;
  }
  if ( v30->max_length <= 8 )
    goto LABEL_62;
  v30->m_Items[8] = (Il2CppObject *)v89;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[8], v89, v83, v84, v85, v86, v87, v88);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_21296/*"onAnimEnd"*/;
  if ( StringLiteral_21296/*"onAnimEnd"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21296/*"onAnimEnd"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v96 = (System_Int32_array **)StringLiteral_21296/*"onAnimEnd"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( v30->max_length <= 9 )
    goto LABEL_62;
  v30->m_Items[9] = (Il2CppObject *)v96;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[9], v96, v90, v91, v92, v93, v94, v95);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_21334/*"oncompletetarget"*/;
  if ( StringLiteral_21334/*"oncompletetarget"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(StringLiteral_21334/*"oncompletetarget"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v103 = (System_Int32_array **)StringLiteral_21334/*"oncompletetarget"*/;
  }
  else
  {
    v103 = 0LL;
  }
  if ( v30->max_length <= 0xA )
    goto LABEL_62;
  v30->m_Items[10] = (Il2CppObject *)v103;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[10], v103, v97, v98, v99, v100, v101, v102);
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v110 = (System_Int32_array **)v31;
  if ( v31 )
  {
    v31 = (UnityEngine_GameObject_o *)sub_B0D964(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
    {
LABEL_63:
      v113 = sub_B0D99C();
      sub_B0D948(v113, 0LL);
    }
  }
  if ( v30->max_length <= 0xB )
  {
LABEL_62:
    v112 = sub_B0D9A8(v31);
    sub_B0D948(v112, 0LL);
  }
  v30->m_Items[11] = (Il2CppObject *)v110;
  sub_B0D840((BattleServantConfConponent_o *)&v30->m_Items[11], v110, v104, v105, v106, v107, v108, v109);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v111 = iTween__Hash(v30, 0LL);
  iTween__MoveTo_42384720(gameObject, v111, 0LL);
}