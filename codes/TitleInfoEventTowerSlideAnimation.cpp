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
    sub_B7769C(0LL, v4);
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Object_array *v23; // x21
  UnityEngine_GameObject_o *v24; // x0
  System_Int32_array **v25; // x1
  __int64 v26; // x2
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  float v41; // w9
  __int64 v42; // x2
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **easeTypeOut; // x22
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  __int64 v71; // x2
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x22
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x1
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
  System_Int32_array **v106; // x19
  System_Collections_Hashtable_o *v107; // x0
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // [xsp+0h] [xbp-50h] BYREF
  float v111; // [xsp+8h] [xbp-48h]
  float slideOutTime; // [xsp+18h] [xbp-38h] BYREF
  char v113[4]; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4389170 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&UnityEngine_Vector3_TypeInfo);
    sub_B775C4(&StringLiteral_21690/*"onMoveComplete"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21704/*"oncompletetarget"*/);
    sub_B775C4(&StringLiteral_21965/*"position"*/);
    sub_B775C4(&StringLiteral_20345/*"isLocal"*/);
    sub_B775C4(&StringLiteral_18475/*"easeType"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_4389170 = 1;
  }
  this->fields.endCallback = callback;
  sub_B77560(
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
        (transform = (UnityEngine_Transform_o *)sub_B775DC(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_B7769C(transform, v15);
  }
  v23 = (System_Object_array *)transform;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_20345/*"isLocal"*/;
  if ( StringLiteral_20345/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_20345/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v25 = (System_Int32_array **)StringLiteral_20345/*"isLocal"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_59;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_B77560((BattleServantConfConponent_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v113[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v113, v26);
  v33 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_59;
  v23->m_Items[1] = (Il2CppObject *)v33;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21965/*"position"*/;
  if ( StringLiteral_21965/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_21965/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v40 = (System_Int32_array **)StringLiteral_21965/*"position"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_59;
  v23->m_Items[2] = (Il2CppObject *)v40;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  v41 = this->fields.slideOutPosition.fields.z;
  v110 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v111 = v41;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v110, v42);
  v49 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_59;
  v23->m_Items[3] = (Il2CppObject *)v49;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_18475/*"easeType"*/;
  if ( StringLiteral_18475/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_18475/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v56 = (System_Int32_array **)StringLiteral_18475/*"easeType"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_59;
  v23->m_Items[4] = (Il2CppObject *)v56;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[4], v56, v50, v51, v52, v53, v54, v55);
  easeTypeOut = (System_Int32_array **)this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_59;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[5], easeTypeOut, v57, v58, v59, v60, v61, v62);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_23154/*"time"*/;
  if ( StringLiteral_23154/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_23154/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v70 = (System_Int32_array **)StringLiteral_23154/*"time"*/;
  }
  else
  {
    v70 = 0LL;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_59;
  v23->m_Items[6] = (Il2CppObject *)v70;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[6], v70, v64, v65, v66, v67, v68, v69);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v71);
  v78 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_59;
  v23->m_Items[7] = (Il2CppObject *)v78;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[7], v78, v72, v73, v74, v75, v76, v77);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21702/*"oncomplete"*/;
  if ( StringLiteral_21702/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_21702/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v85 = (System_Int32_array **)StringLiteral_21702/*"oncomplete"*/;
  }
  else
  {
    v85 = 0LL;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_59;
  v23->m_Items[8] = (Il2CppObject *)v85;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[8], v85, v79, v80, v81, v82, v83, v84);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21690/*"onMoveComplete"*/;
  if ( StringLiteral_21690/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_21690/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v92 = (System_Int32_array **)StringLiteral_21690/*"onMoveComplete"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( v23->max_length <= 9 )
    goto LABEL_59;
  v23->m_Items[9] = (Il2CppObject *)v92;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[9], v92, v86, v87, v88, v89, v90, v91);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21704/*"oncompletetarget"*/;
  if ( StringLiteral_21704/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_21704/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v99 = (System_Int32_array **)StringLiteral_21704/*"oncompletetarget"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( v23->max_length <= 0xA )
    goto LABEL_59;
  v23->m_Items[10] = (Il2CppObject *)v99;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[10], v99, v93, v94, v95, v96, v97, v98);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v106 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B77684(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_60:
      v109 = sub_B776BC();
      sub_B77668(v109, 0LL);
    }
  }
  if ( v23->max_length <= 0xB )
  {
LABEL_59:
    v108 = sub_B776C8(v24);
    sub_B77668(v108, 0LL);
  }
  v23->m_Items[11] = (Il2CppObject *)v106;
  sub_B77560((BattleServantConfConponent_o *)&v23->m_Items[11], v106, v100, v101, v102, v103, v104, v105);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v107 = iTween__Hash(v23, 0LL);
  iTween__MoveTo_43177188(gameObject, v107, 0LL);
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
    sub_B77560(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall TitleInfoEventTowerSlideAnimation__onMoveComplete(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  TitleInfoEventTower_o *Component_srcLineSprite; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Object_array *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  System_Int32_array **v17; // x1
  __int64 v18; // x2
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  float z; // w9
  __int64 v34; // x2
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **easeTypeIn; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  __int64 v63; // x2
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x19
  System_Collections_Hashtable_o *v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  float slideInTime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v103; // [xsp+10h] [xbp-30h] BYREF
  float v104; // [xsp+18h] [xbp-28h]
  char v105[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4389171 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_B775C4(&UnityEngine_Vector3_TypeInfo);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21704/*"oncompletetarget"*/);
    sub_B775C4(&StringLiteral_21965/*"position"*/);
    sub_B775C4(&StringLiteral_21666/*"onAnimEnd"*/);
    sub_B775C4(&StringLiteral_20345/*"isLocal"*/);
    sub_B775C4(&StringLiteral_18475/*"easeType"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_4389171 = 1;
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
                                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_srcLineSprite)
    || (TitleInfoEventTower__Open(Component_srcLineSprite, v6, 0LL, 0, v7),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_B775DC(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_64:
    sub_B7769C(transform, v4);
  }
  v15 = (System_Object_array *)transform;
  v16 = (UnityEngine_GameObject_o *)StringLiteral_20345/*"isLocal"*/;
  if ( StringLiteral_20345/*"isLocal"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_20345/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v17 = (System_Int32_array **)StringLiteral_20345/*"isLocal"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_62;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_B77560((BattleServantConfConponent_o *)v15->m_Items, v17, v9, v10, v11, v12, v13, v14);
  v105[0] = 1;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v105, v18);
  v25 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_62;
  v15->m_Items[1] = (Il2CppObject *)v25;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_21965/*"position"*/;
  if ( StringLiteral_21965/*"position"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_21965/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v32 = (System_Int32_array **)StringLiteral_21965/*"position"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_62;
  v15->m_Items[2] = (Il2CppObject *)v32;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  z = this->fields.slideInPosition.fields.z;
  v103 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v104 = z;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v103, v34);
  v41 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_62;
  v15->m_Items[3] = (Il2CppObject *)v41;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_18475/*"easeType"*/;
  if ( StringLiteral_18475/*"easeType"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_18475/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v48 = (System_Int32_array **)StringLiteral_18475/*"easeType"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( v15->max_length <= 4 )
    goto LABEL_62;
  v15->m_Items[4] = (Il2CppObject *)v48;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[4], v48, v42, v43, v44, v45, v46, v47);
  easeTypeIn = (System_Int32_array **)this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(this->fields.easeTypeIn, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
  }
  if ( v15->max_length <= 5 )
    goto LABEL_62;
  v15->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[5], easeTypeIn, v49, v50, v51, v52, v53, v54);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_23154/*"time"*/;
  if ( StringLiteral_23154/*"time"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_23154/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v62 = (System_Int32_array **)StringLiteral_23154/*"time"*/;
  }
  else
  {
    v62 = 0LL;
  }
  if ( v15->max_length <= 6 )
    goto LABEL_62;
  v15->m_Items[6] = (Il2CppObject *)v62;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[6], v62, v56, v57, v58, v59, v60, v61);
  slideInTime = this->fields.slideInTime;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v63);
  v70 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
  }
  if ( v15->max_length <= 7 )
    goto LABEL_62;
  v15->m_Items[7] = (Il2CppObject *)v70;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[7], v70, v64, v65, v66, v67, v68, v69);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_21702/*"oncomplete"*/;
  if ( StringLiteral_21702/*"oncomplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_21702/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v77 = (System_Int32_array **)StringLiteral_21702/*"oncomplete"*/;
  }
  else
  {
    v77 = 0LL;
  }
  if ( v15->max_length <= 8 )
    goto LABEL_62;
  v15->m_Items[8] = (Il2CppObject *)v77;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[8], v77, v71, v72, v73, v74, v75, v76);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_21666/*"onAnimEnd"*/;
  if ( StringLiteral_21666/*"onAnimEnd"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_21666/*"onAnimEnd"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v84 = (System_Int32_array **)StringLiteral_21666/*"onAnimEnd"*/;
  }
  else
  {
    v84 = 0LL;
  }
  if ( v15->max_length <= 9 )
    goto LABEL_62;
  v15->m_Items[9] = (Il2CppObject *)v84;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[9], v84, v78, v79, v80, v81, v82, v83);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_21704/*"oncompletetarget"*/;
  if ( StringLiteral_21704/*"oncompletetarget"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(StringLiteral_21704/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v91 = (System_Int32_array **)StringLiteral_21704/*"oncompletetarget"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v15->max_length <= 0xA )
    goto LABEL_62;
  v15->m_Items[10] = (Il2CppObject *)v91;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[10], v91, v85, v86, v87, v88, v89, v90);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v98 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B77684(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_63:
      v101 = sub_B776BC();
      sub_B77668(v101, 0LL);
    }
  }
  if ( v15->max_length <= 0xB )
  {
LABEL_62:
    v100 = sub_B776C8(v16);
    sub_B77668(v100, 0LL);
  }
  v15->m_Items[11] = (Il2CppObject *)v98;
  sub_B77560((BattleServantConfConponent_o *)&v15->m_Items[11], v98, v92, v93, v94, v95, v96, v97);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v99 = iTween__Hash(v15, 0LL);
  iTween__MoveTo_43177188(gameObject, v99, 0LL);
}