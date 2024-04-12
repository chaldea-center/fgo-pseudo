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
    sub_B52A5C(0LL, v4);
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
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  float v40; // w9
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **easeTypeOut; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x22
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
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
  System_Int32_array **v103; // x19
  System_Collections_Hashtable_o *v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // [xsp+0h] [xbp-50h] BYREF
  float v108; // [xsp+8h] [xbp-48h]
  float slideOutTime; // [xsp+18h] [xbp-38h] BYREF
  char v110[4]; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_42AE747 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&UnityEngine_Vector3_TypeInfo);
    sub_B52984(&StringLiteral_21421/*"onMoveComplete"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21435/*"oncompletetarget"*/);
    sub_B52984(&StringLiteral_21687/*"position"*/);
    sub_B52984(&StringLiteral_20088/*"isLocal"*/);
    sub_B52984(&StringLiteral_18246/*"easeType"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42AE747 = 1;
  }
  this->fields.endCallback = callback;
  sub_B52920(
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
        (transform = (UnityEngine_Transform_o *)sub_B5299C(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_B52A5C(transform, v15);
  }
  v23 = (System_Object_array *)transform;
  v24 = (UnityEngine_GameObject_o *)StringLiteral_20088/*"isLocal"*/;
  if ( StringLiteral_20088/*"isLocal"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_20088/*"isLocal"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v25 = (System_Int32_array **)StringLiteral_20088/*"isLocal"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_59;
  v23->m_Items[0] = (Il2CppObject *)v25;
  sub_B52920((BattleServantConfConponent_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v110[0] = 1;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v110);
  v32 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_59;
  v23->m_Items[1] = (Il2CppObject *)v32;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[1], v32, v26, v27, v28, v29, v30, v31);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21687/*"position"*/;
  if ( StringLiteral_21687/*"position"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21687/*"position"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v39 = (System_Int32_array **)StringLiteral_21687/*"position"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_59;
  v23->m_Items[2] = (Il2CppObject *)v39;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  v40 = this->fields.slideOutPosition.fields.z;
  v107 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v108 = v40;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v107);
  v47 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_59;
  v23->m_Items[3] = (Il2CppObject *)v47;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_18246/*"easeType"*/;
  if ( StringLiteral_18246/*"easeType"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_18246/*"easeType"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v54 = (System_Int32_array **)StringLiteral_18246/*"easeType"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_59;
  v23->m_Items[4] = (Il2CppObject *)v54;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  easeTypeOut = (System_Int32_array **)this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(this->fields.easeTypeOut, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_59;
  v23->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[5], easeTypeOut, v55, v56, v57, v58, v59, v60);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_22867/*"time"*/;
  if ( StringLiteral_22867/*"time"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_22867/*"time"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v68 = (System_Int32_array **)StringLiteral_22867/*"time"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_59;
  v23->m_Items[6] = (Il2CppObject *)v68;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[6], v68, v62, v63, v64, v65, v66, v67);
  slideOutTime = this->fields.slideOutTime;
  v24 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v75 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_59;
  v23->m_Items[7] = (Il2CppObject *)v75;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[7], v75, v69, v70, v71, v72, v73, v74);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21433/*"oncomplete"*/;
  if ( StringLiteral_21433/*"oncomplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21433/*"oncomplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v82 = (System_Int32_array **)StringLiteral_21433/*"oncomplete"*/;
  }
  else
  {
    v82 = 0LL;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_59;
  v23->m_Items[8] = (Il2CppObject *)v82;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[8], v82, v76, v77, v78, v79, v80, v81);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21421/*"onMoveComplete"*/;
  if ( StringLiteral_21421/*"onMoveComplete"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21421/*"onMoveComplete"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v89 = (System_Int32_array **)StringLiteral_21421/*"onMoveComplete"*/;
  }
  else
  {
    v89 = 0LL;
  }
  if ( v23->max_length <= 9 )
    goto LABEL_59;
  v23->m_Items[9] = (Il2CppObject *)v89;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  v24 = (UnityEngine_GameObject_o *)StringLiteral_21435/*"oncompletetarget"*/;
  if ( StringLiteral_21435/*"oncompletetarget"*/ )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21435/*"oncompletetarget"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_60;
    v96 = (System_Int32_array **)StringLiteral_21435/*"oncompletetarget"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( v23->max_length <= 0xA )
    goto LABEL_59;
  v23->m_Items[10] = (Il2CppObject *)v96;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[10], v96, v90, v91, v92, v93, v94, v95);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v103 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (UnityEngine_GameObject_o *)sub_B52A44(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_60:
      v106 = sub_B52A7C();
      sub_B52A28(v106, 0LL);
    }
  }
  if ( v23->max_length <= 0xB )
  {
LABEL_59:
    v105 = sub_B52A88(v24);
    sub_B52A28(v105, 0LL);
  }
  v23->m_Items[11] = (Il2CppObject *)v103;
  sub_B52920((BattleServantConfConponent_o *)&v23->m_Items[11], v103, v97, v98, v99, v100, v101, v102);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v104 = iTween__Hash(v23, 0LL);
  iTween__MoveTo_43223368(gameObject, v104, 0LL);
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
    sub_B52920(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  float z; // w9
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
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **easeTypeIn; // x22
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
  System_Int32_array **v67; // x22
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
  System_Int32_array **v81; // x1
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
  System_Int32_array **v95; // x19
  System_Collections_Hashtable_o *v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  float slideInTime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v100; // [xsp+10h] [xbp-30h] BYREF
  float v101; // [xsp+18h] [xbp-28h]
  char v102[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42AE748 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_B52984(&UnityEngine_Vector3_TypeInfo);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21435/*"oncompletetarget"*/);
    sub_B52984(&StringLiteral_21687/*"position"*/);
    sub_B52984(&StringLiteral_21397/*"onAnimEnd"*/);
    sub_B52984(&StringLiteral_20088/*"isLocal"*/);
    sub_B52984(&StringLiteral_18246/*"easeType"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42AE748 = 1;
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
                                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_srcLineSprite)
    || (TitleInfoEventTower__Open(Component_srcLineSprite, v6, 0LL, 0, v7),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_B5299C(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_64:
    sub_B52A5C(transform, v4);
  }
  v15 = (System_Object_array *)transform;
  v16 = (UnityEngine_GameObject_o *)StringLiteral_20088/*"isLocal"*/;
  if ( StringLiteral_20088/*"isLocal"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_20088/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v17 = (System_Int32_array **)StringLiteral_20088/*"isLocal"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_62;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_B52920((BattleServantConfConponent_o *)v15->m_Items, v17, v9, v10, v11, v12, v13, v14);
  v102[0] = 1;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v102);
  v24 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_62;
  v15->m_Items[1] = (Il2CppObject *)v24;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_21687/*"position"*/;
  if ( StringLiteral_21687/*"position"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21687/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v31 = (System_Int32_array **)StringLiteral_21687/*"position"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_62;
  v15->m_Items[2] = (Il2CppObject *)v31;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  z = this->fields.slideInPosition.fields.z;
  v100 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v101 = z;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v100);
  v39 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_62;
  v15->m_Items[3] = (Il2CppObject *)v39;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_18246/*"easeType"*/;
  if ( StringLiteral_18246/*"easeType"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_18246/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v46 = (System_Int32_array **)StringLiteral_18246/*"easeType"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( v15->max_length <= 4 )
    goto LABEL_62;
  v15->m_Items[4] = (Il2CppObject *)v46;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[4], v46, v40, v41, v42, v43, v44, v45);
  easeTypeIn = (System_Int32_array **)this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(this->fields.easeTypeIn, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
  }
  if ( v15->max_length <= 5 )
    goto LABEL_62;
  v15->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[5], easeTypeIn, v47, v48, v49, v50, v51, v52);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22867/*"time"*/;
  if ( StringLiteral_22867/*"time"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_22867/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v60 = (System_Int32_array **)StringLiteral_22867/*"time"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( v15->max_length <= 6 )
    goto LABEL_62;
  v15->m_Items[6] = (Il2CppObject *)v60;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[6], v60, v54, v55, v56, v57, v58, v59);
  slideInTime = this->fields.slideInTime;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v67 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
  }
  if ( v15->max_length <= 7 )
    goto LABEL_62;
  v15->m_Items[7] = (Il2CppObject *)v67;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[7], v67, v61, v62, v63, v64, v65, v66);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_21433/*"oncomplete"*/;
  if ( StringLiteral_21433/*"oncomplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21433/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v74 = (System_Int32_array **)StringLiteral_21433/*"oncomplete"*/;
  }
  else
  {
    v74 = 0LL;
  }
  if ( v15->max_length <= 8 )
    goto LABEL_62;
  v15->m_Items[8] = (Il2CppObject *)v74;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[8], v74, v68, v69, v70, v71, v72, v73);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_21397/*"onAnimEnd"*/;
  if ( StringLiteral_21397/*"onAnimEnd"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21397/*"onAnimEnd"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v81 = (System_Int32_array **)StringLiteral_21397/*"onAnimEnd"*/;
  }
  else
  {
    v81 = 0LL;
  }
  if ( v15->max_length <= 9 )
    goto LABEL_62;
  v15->m_Items[9] = (Il2CppObject *)v81;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[9], v81, v75, v76, v77, v78, v79, v80);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_21435/*"oncompletetarget"*/;
  if ( StringLiteral_21435/*"oncompletetarget"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(StringLiteral_21435/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_63;
    v88 = (System_Int32_array **)StringLiteral_21435/*"oncompletetarget"*/;
  }
  else
  {
    v88 = 0LL;
  }
  if ( v15->max_length <= 0xA )
    goto LABEL_62;
  v15->m_Items[10] = (Il2CppObject *)v88;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[10], v88, v82, v83, v84, v85, v86, v87);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v95 = (System_Int32_array **)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_B52A44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_63:
      v98 = sub_B52A7C();
      sub_B52A28(v98, 0LL);
    }
  }
  if ( v15->max_length <= 0xB )
  {
LABEL_62:
    v97 = sub_B52A88(v16);
    sub_B52A28(v97, 0LL);
  }
  v15->m_Items[11] = (Il2CppObject *)v95;
  sub_B52920((BattleServantConfConponent_o *)&v15->m_Items[11], v95, v89, v90, v91, v92, v93, v94);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v96 = iTween__Hash(v15, 0LL);
  iTween__MoveTo_43223368(gameObject, v96, 0LL);
}