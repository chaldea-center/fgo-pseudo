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
    sub_1B64324(0LL);
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
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_Object_array *v25; // x21
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x9
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_String_o *easeTypeOut; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x22
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x19
  System_Collections_Hashtable_o *v56; // x0
  __int64 v57; // x0
  __int64 v58; // [xsp+0h] [xbp-60h] BYREF
  float v59; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v61[4]; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_49FAF4A & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, callback);
    sub_1B640C8(&object___TypeInfo, v10);
    sub_1B640C8(&float_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_22172/*"onMoveComplete"*/, v13);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v14);
    sub_1B640C8(&StringLiteral_22187/*"oncompletetarget"*/, v15);
    sub_1B640C8(&StringLiteral_22482/*"position"*/, v16);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v17);
    sub_1B640C8(&StringLiteral_18681/*"easeType"*/, v18);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v19);
    sub_1B640C8(&iTween_TypeInfo, v20);
    byte_49FAF4A = 1;
  }
  this->fields.endCallback = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1B64170(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_1B64324(transform);
  }
  v25 = (System_Object_array *)transform;
  v26 = (UnityEngine_GameObject_o *)StringLiteral_20716/*"isLocal"*/;
  if ( StringLiteral_20716/*"isLocal"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_20716/*"isLocal"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
    v27 = StringLiteral_20716/*"isLocal"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_58;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v25->m_Items, v27, v23, v24);
  v61[0] = 1;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v61);
  v30 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_58;
  v25->m_Items[1] = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[1], (int32_t)v30, v28, v29);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22482/*"position"*/;
  if ( StringLiteral_22482/*"position"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22482/*"position"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
    v27 = StringLiteral_22482/*"position"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_58;
  v25->m_Items[2] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[2], v27, v31, v32);
  v33 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v59 = this->fields.slideOutPosition.fields.z;
  v58 = v33;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v58);
  v36 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_58;
  v25->m_Items[3] = v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[3], (int32_t)v36, v34, v35);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_18681/*"easeType"*/;
  if ( StringLiteral_18681/*"easeType"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_18681/*"easeType"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
    v27 = StringLiteral_18681/*"easeType"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 4 )
    goto LABEL_58;
  v25->m_Items[4] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[4], v27, v37, v38);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(this->fields.easeTypeOut, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
  }
  if ( v25->max_length <= 5 )
    goto LABEL_58;
  v25->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[5], (int32_t)easeTypeOut, v39, v40);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
    v27 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 6 )
    goto LABEL_58;
  v25->m_Items[6] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[6], v27, v42, v43);
  slideOutTime = this->fields.slideOutTime;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v46 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
  }
  if ( v25->max_length <= 7 )
    goto LABEL_58;
  v25->m_Items[7] = v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[7], (int32_t)v46, v44, v45);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
    v27 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 8 )
    goto LABEL_58;
  v25->m_Items[8] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[8], v27, v47, v48);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22172/*"onMoveComplete"*/;
  if ( StringLiteral_22172/*"onMoveComplete"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22172/*"onMoveComplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
    v27 = StringLiteral_22172/*"onMoveComplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 9 )
    goto LABEL_58;
  v25->m_Items[9] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[9], v27, v49, v50);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22187/*"oncompletetarget"*/;
  if ( StringLiteral_22187/*"oncompletetarget"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22187/*"oncompletetarget"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_59;
    v27 = StringLiteral_22187/*"oncompletetarget"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xA )
    goto LABEL_58;
  v25->m_Items[10] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[10], v27, v51, v52);
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v55 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_59:
      v57 = sub_1B64348(v26);
      sub_1B641F0(v57, 0LL);
    }
  }
  if ( v25->max_length <= 0xB )
LABEL_58:
    sub_1B6432C(v26, v27);
  v25->m_Items[11] = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[11], (int32_t)v55, v53, v54);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v56 = iTween__Hash(v25, 0LL);
  iTween__MoveTo_59912984(gameObject, v56, 0LL);
}


void __fastcall TitleInfoEventTowerSlideAnimation__onAnimEnd(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_endCallback; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (ServantStatusBattleListViewItem_o *)&this->fields.endCallback;
  v5 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0LL;
    sub_1B6406C(p_endCallback, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
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
  Il2CppObject *Component_object; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_Object_array *v26; // x21
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x9
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_String_o *easeTypeIn; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x22
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x19
  System_Collections_Hashtable_o *v57; // x0
  __int64 v58; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v60; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v62[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FAF4B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&bool_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___, v4);
    sub_1B640C8(&object___TypeInfo, v5);
    sub_1B640C8(&float_TypeInfo, v6);
    sub_1B640C8(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__, v7);
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v9);
    sub_1B640C8(&StringLiteral_22187/*"oncompletetarget"*/, v10);
    sub_1B640C8(&StringLiteral_22482/*"position"*/, v11);
    sub_1B640C8(&StringLiteral_22148/*"onAnimEnd"*/, v12);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v13);
    sub_1B640C8(&StringLiteral_18681/*"easeType"*/, v14);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v15);
    sub_1B640C8(&iTween_TypeInfo, v16);
    byte_49FAF4B = 1;
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
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20),
        System_Action___ctor(
          v21,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v21, 0LL, 0, v22),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1B64170(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_63:
    sub_1B64324(transform);
  }
  v26 = (System_Object_array *)transform;
  v27 = (UnityEngine_GameObject_o *)StringLiteral_20716/*"isLocal"*/;
  if ( StringLiteral_20716/*"isLocal"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_20716/*"isLocal"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
    v28 = StringLiteral_20716/*"isLocal"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v26->max_length )
    goto LABEL_61;
  v26->m_Items[0] = (Il2CppObject *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v26->m_Items, v28, v24, v25);
  v62[0] = 1;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v62);
  v31 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_61;
  v26->m_Items[1] = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[1], (int32_t)v31, v29, v30);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22482/*"position"*/;
  if ( StringLiteral_22482/*"position"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22482/*"position"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
    v28 = StringLiteral_22482/*"position"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_61;
  v26->m_Items[2] = (Il2CppObject *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[2], v28, v32, v33);
  v34 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v60 = v34;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v60);
  v37 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_61;
  v26->m_Items[3] = v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[3], (int32_t)v37, v35, v36);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_18681/*"easeType"*/;
  if ( StringLiteral_18681/*"easeType"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_18681/*"easeType"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
    v28 = StringLiteral_18681/*"easeType"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 4 )
    goto LABEL_61;
  v26->m_Items[4] = (Il2CppObject *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[4], v28, v38, v39);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(this->fields.easeTypeIn, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
  }
  if ( v26->max_length <= 5 )
    goto LABEL_61;
  v26->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[5], (int32_t)easeTypeIn, v40, v41);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
    v28 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 6 )
    goto LABEL_61;
  v26->m_Items[6] = (Il2CppObject *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[6], v28, v43, v44);
  slideInTime = this->fields.slideInTime;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v47 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
  }
  if ( v26->max_length <= 7 )
    goto LABEL_61;
  v26->m_Items[7] = v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[7], (int32_t)v47, v45, v46);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
    v28 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 8 )
    goto LABEL_61;
  v26->m_Items[8] = (Il2CppObject *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[8], v28, v48, v49);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22148/*"onAnimEnd"*/;
  if ( StringLiteral_22148/*"onAnimEnd"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22148/*"onAnimEnd"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
    v28 = StringLiteral_22148/*"onAnimEnd"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 9 )
    goto LABEL_61;
  v26->m_Items[9] = (Il2CppObject *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[9], v28, v50, v51);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22187/*"oncompletetarget"*/;
  if ( StringLiteral_22187/*"oncompletetarget"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22187/*"oncompletetarget"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_62;
    v28 = StringLiteral_22187/*"oncompletetarget"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 0xA )
    goto LABEL_61;
  v26->m_Items[10] = (Il2CppObject *)v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[10], v28, v52, v53);
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v56 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B64204(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
    {
LABEL_62:
      v58 = sub_1B64348(v27);
      sub_1B641F0(v58, 0LL);
    }
  }
  if ( v26->max_length <= 0xB )
LABEL_61:
    sub_1B6432C(v27, v28);
  v26->m_Items[11] = v56;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->m_Items[11], (int32_t)v56, v54, v55);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v57 = iTween__Hash(v26, 0LL);
  iTween__MoveTo_59912984(gameObject, v57, 0LL);
}