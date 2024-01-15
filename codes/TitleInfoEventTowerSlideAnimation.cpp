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
    sub_B170D4();
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
  __int64 v27; // x2
  __int64 v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Object_array *v35; // x21
  UnityEngine_GameObject_o *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x22
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  float v49; // w9
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x22
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **easeTypeOut; // x22
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x22
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x19
  System_Collections_Hashtable_o *v99; // x0
  __int64 v100; // [xsp+0h] [xbp-50h] BYREF
  float v101; // [xsp+8h] [xbp-48h]
  float slideOutTime; // [xsp+18h] [xbp-38h] BYREF
  char v103[4]; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_40F840B & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, callback);
    sub_B16FFC(&object___TypeInfo, v14);
    sub_B16FFC(&float_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_21161/*"onMoveComplete"*/, v17);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v18);
    sub_B16FFC(&StringLiteral_21175/*"oncompletetarget"*/, v19);
    sub_B16FFC(&StringLiteral_21419/*"position"*/, v20);
    sub_B16FFC(&StringLiteral_19856/*"isLocal"*/, v21);
    sub_B16FFC(&StringLiteral_18045/*"easeType"*/, v22);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v23);
    sub_B16FFC(&iTween_TypeInfo, v24);
    byte_40F840B = 1;
  }
  this->fields.endCallback = callback;
  sub_B16F98(
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
        (v28 = sub_B17014(object___TypeInfo, 12LL, v27)) == 0) )
  {
    sub_B170D4();
  }
  v35 = (System_Object_array *)v28;
  v36 = (UnityEngine_GameObject_o *)StringLiteral_19856/*"isLocal"*/;
  if ( StringLiteral_19856/*"isLocal"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_19856/*"isLocal"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
    v37 = (System_Int32_array **)StringLiteral_19856/*"isLocal"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( !v35->max_length )
    goto LABEL_59;
  v35->m_Items[0] = (Il2CppObject *)v37;
  sub_B16F98((BattleServantConfConponent_o *)v35->m_Items, v37, v29, v30, v31, v32, v33, v34);
  v103[0] = 1;
  v36 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v103);
  v43 = (System_Int32_array **)v36;
  if ( v36 )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_59;
  v35->m_Items[1] = (Il2CppObject *)v43;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[1], v43, v29, v38, v39, v40, v41, v42);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_21419/*"position"*/;
  if ( StringLiteral_21419/*"position"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21419/*"position"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
    v37 = (System_Int32_array **)StringLiteral_21419/*"position"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_59;
  v35->m_Items[2] = (Il2CppObject *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[2], v37, v29, v44, v45, v46, v47, v48);
  v49 = this->fields.slideOutPosition.fields.z;
  v100 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v101 = v49;
  v36 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v100);
  v55 = (System_Int32_array **)v36;
  if ( v36 )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
  }
  if ( v35->max_length <= 3 )
    goto LABEL_59;
  v35->m_Items[3] = (Il2CppObject *)v55;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[3], v55, v29, v50, v51, v52, v53, v54);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_18045/*"easeType"*/;
  if ( StringLiteral_18045/*"easeType"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_18045/*"easeType"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
    v37 = (System_Int32_array **)StringLiteral_18045/*"easeType"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 4 )
    goto LABEL_59;
  v35->m_Items[4] = (Il2CppObject *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[4], v37, v29, v56, v57, v58, v59, v60);
  easeTypeOut = (System_Int32_array **)this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(this->fields.easeTypeOut, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
  }
  if ( v35->max_length <= 5 )
    goto LABEL_59;
  v35->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[5], easeTypeOut, v29, v61, v62, v63, v64, v65);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_22584/*"time"*/;
  if ( StringLiteral_22584/*"time"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_22584/*"time"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
    v37 = (System_Int32_array **)StringLiteral_22584/*"time"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 6 )
    goto LABEL_59;
  v35->m_Items[6] = (Il2CppObject *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[6], v37, v29, v67, v68, v69, v70, v71);
  slideOutTime = this->fields.slideOutTime;
  v36 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v77 = (System_Int32_array **)v36;
  if ( v36 )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
  }
  if ( v35->max_length <= 7 )
    goto LABEL_59;
  v35->m_Items[7] = (Il2CppObject *)v77;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[7], v77, v29, v72, v73, v74, v75, v76);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_21173/*"oncomplete"*/;
  if ( StringLiteral_21173/*"oncomplete"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
    v37 = (System_Int32_array **)StringLiteral_21173/*"oncomplete"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 8 )
    goto LABEL_59;
  v35->m_Items[8] = (Il2CppObject *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[8], v37, v29, v78, v79, v80, v81, v82);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_21161/*"onMoveComplete"*/;
  if ( StringLiteral_21161/*"onMoveComplete"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21161/*"onMoveComplete"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
    v37 = (System_Int32_array **)StringLiteral_21161/*"onMoveComplete"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 9 )
    goto LABEL_59;
  v35->m_Items[9] = (Il2CppObject *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[9], v37, v29, v83, v84, v85, v86, v87);
  v36 = (UnityEngine_GameObject_o *)StringLiteral_21175/*"oncompletetarget"*/;
  if ( StringLiteral_21175/*"oncompletetarget"*/ )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21175/*"oncompletetarget"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_60;
    v37 = (System_Int32_array **)StringLiteral_21175/*"oncompletetarget"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v35->max_length <= 0xA )
    goto LABEL_59;
  v35->m_Items[10] = (Il2CppObject *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[10], v37, v29, v88, v89, v90, v91, v92);
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v98 = (System_Int32_array **)v36;
  if ( v36 )
  {
    v36 = (UnityEngine_GameObject_o *)sub_B170BC(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
    {
LABEL_60:
      sub_B170F4(v36);
      sub_B170A0();
    }
  }
  if ( v35->max_length <= 0xB )
  {
LABEL_59:
    sub_B17100(v36, v37, v29);
    sub_B170A0();
  }
  v35->m_Items[11] = (Il2CppObject *)v98;
  sub_B16F98((BattleServantConfConponent_o *)&v35->m_Items[11], v98, v29, v93, v94, v95, v96, v97);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v99 = iTween__Hash(v35, 0LL);
  iTween__MoveTo_18434272(gameObject, v99, 0LL);
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
    sub_B16F98(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventTower_o *Component_srcLineSprite; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x4
  UnityEngine_GameObject_o *v27; // x20
  __int64 v28; // x2
  __int64 v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Object_array *v36; // x21
  UnityEngine_GameObject_o *v37; // x0
  System_Int32_array **v38; // x1
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x22
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  float z; // w9
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x22
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **easeTypeIn; // x22
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x22
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x19
  System_Collections_Hashtable_o *v100; // x0
  float slideInTime; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v102; // [xsp+10h] [xbp-30h] BYREF
  float v103; // [xsp+18h] [xbp-28h]
  char v104[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40F840C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&bool_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___, v4);
    sub_B16FFC(&object___TypeInfo, v5);
    sub_B16FFC(&float_TypeInfo, v6);
    sub_B16FFC(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__, v7);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v9);
    sub_B16FFC(&StringLiteral_21175/*"oncompletetarget"*/, v10);
    sub_B16FFC(&StringLiteral_21419/*"position"*/, v11);
    sub_B16FFC(&StringLiteral_21137/*"onAnimEnd"*/, v12);
    sub_B16FFC(&StringLiteral_19856/*"isLocal"*/, v13);
    sub_B16FFC(&StringLiteral_18045/*"easeType"*/, v14);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v15);
    sub_B16FFC(&iTween_TypeInfo, v16);
    byte_40F840C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_64;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent
    || (gameObject = UnityEngine_Component__get_gameObject(parent, 0LL)) == 0LL
    || (Component_srcLineSprite = (TitleInfoEventTower_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             gameObject,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_srcLineSprite)
    || (TitleInfoEventTower__Open(Component_srcLineSprite, v25, 0LL, 0, v26),
        v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (v29 = sub_B17014(object___TypeInfo, 12LL, v28)) == 0) )
  {
LABEL_64:
    sub_B170D4();
  }
  v36 = (System_Object_array *)v29;
  v37 = (UnityEngine_GameObject_o *)StringLiteral_19856/*"isLocal"*/;
  if ( StringLiteral_19856/*"isLocal"*/ )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_19856/*"isLocal"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
    v38 = (System_Int32_array **)StringLiteral_19856/*"isLocal"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( !v36->max_length )
    goto LABEL_62;
  v36->m_Items[0] = (Il2CppObject *)v38;
  sub_B16F98((BattleServantConfConponent_o *)v36->m_Items, v38, v30, v31, v32, v33, v34, v35);
  v104[0] = 1;
  v37 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v104);
  v44 = (System_Int32_array **)v37;
  if ( v37 )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
  }
  if ( v36->max_length <= 1 )
    goto LABEL_62;
  v36->m_Items[1] = (Il2CppObject *)v44;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[1], v44, v30, v39, v40, v41, v42, v43);
  v37 = (UnityEngine_GameObject_o *)StringLiteral_21419/*"position"*/;
  if ( StringLiteral_21419/*"position"*/ )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21419/*"position"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
    v38 = (System_Int32_array **)StringLiteral_21419/*"position"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 2 )
    goto LABEL_62;
  v36->m_Items[2] = (Il2CppObject *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[2], v38, v30, v45, v46, v47, v48, v49);
  z = this->fields.slideInPosition.fields.z;
  v102 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  v103 = z;
  v37 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v102);
  v56 = (System_Int32_array **)v37;
  if ( v37 )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
  }
  if ( v36->max_length <= 3 )
    goto LABEL_62;
  v36->m_Items[3] = (Il2CppObject *)v56;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[3], v56, v30, v51, v52, v53, v54, v55);
  v37 = (UnityEngine_GameObject_o *)StringLiteral_18045/*"easeType"*/;
  if ( StringLiteral_18045/*"easeType"*/ )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_18045/*"easeType"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
    v38 = (System_Int32_array **)StringLiteral_18045/*"easeType"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 4 )
    goto LABEL_62;
  v36->m_Items[4] = (Il2CppObject *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[4], v38, v30, v57, v58, v59, v60, v61);
  easeTypeIn = (System_Int32_array **)this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(this->fields.easeTypeIn, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
  }
  if ( v36->max_length <= 5 )
    goto LABEL_62;
  v36->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[5], easeTypeIn, v30, v62, v63, v64, v65, v66);
  v37 = (UnityEngine_GameObject_o *)StringLiteral_22584/*"time"*/;
  if ( StringLiteral_22584/*"time"*/ )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_22584/*"time"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
    v38 = (System_Int32_array **)StringLiteral_22584/*"time"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 6 )
    goto LABEL_62;
  v36->m_Items[6] = (Il2CppObject *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[6], v38, v30, v68, v69, v70, v71, v72);
  slideInTime = this->fields.slideInTime;
  v37 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v78 = (System_Int32_array **)v37;
  if ( v37 )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
  }
  if ( v36->max_length <= 7 )
    goto LABEL_62;
  v36->m_Items[7] = (Il2CppObject *)v78;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[7], v78, v30, v73, v74, v75, v76, v77);
  v37 = (UnityEngine_GameObject_o *)StringLiteral_21173/*"oncomplete"*/;
  if ( StringLiteral_21173/*"oncomplete"*/ )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
    v38 = (System_Int32_array **)StringLiteral_21173/*"oncomplete"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 8 )
    goto LABEL_62;
  v36->m_Items[8] = (Il2CppObject *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[8], v38, v30, v79, v80, v81, v82, v83);
  v37 = (UnityEngine_GameObject_o *)StringLiteral_21137/*"onAnimEnd"*/;
  if ( StringLiteral_21137/*"onAnimEnd"*/ )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21137/*"onAnimEnd"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
    v38 = (System_Int32_array **)StringLiteral_21137/*"onAnimEnd"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 9 )
    goto LABEL_62;
  v36->m_Items[9] = (Il2CppObject *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[9], v38, v30, v84, v85, v86, v87, v88);
  v37 = (UnityEngine_GameObject_o *)StringLiteral_21175/*"oncompletetarget"*/;
  if ( StringLiteral_21175/*"oncompletetarget"*/ )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21175/*"oncompletetarget"*/, v36->obj.klass->_1.element_class);
    if ( !v37 )
      goto LABEL_63;
    v38 = (System_Int32_array **)StringLiteral_21175/*"oncompletetarget"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v36->max_length <= 0xA )
    goto LABEL_62;
  v36->m_Items[10] = (Il2CppObject *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[10], v38, v30, v89, v90, v91, v92, v93);
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v99 = (System_Int32_array **)v37;
  if ( v37 )
  {
    v37 = (UnityEngine_GameObject_o *)sub_B170BC(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
    {
LABEL_63:
      sub_B170F4(v37);
      sub_B170A0();
    }
  }
  if ( v36->max_length <= 0xB )
  {
LABEL_62:
    sub_B17100(v37, v38, v30);
    sub_B170A0();
  }
  v36->m_Items[11] = (Il2CppObject *)v99;
  sub_B16F98((BattleServantConfConponent_o *)&v36->m_Items[11], v99, v30, v94, v95, v96, v97, v98);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v100 = iTween__Hash(v36, 0LL);
  iTween__MoveTo_18434272(v27, v100, 0LL);
}