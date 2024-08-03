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
  struct System_Action_o **p_endCallback; // x19
  float z; // s8
  float y; // s9
  float x; // s10

  this->fields.endCallback = callback;
  p_endCallback = &this->fields.endCallback;
  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  *((float *)p_endCallback - 3) = x;
  *((float *)p_endCallback - 2) = y;
  *((float *)p_endCallback - 1) = z;
}


void __fastcall EventInfoUISlideAnimation__SetPotision(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64324(0LL);
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v22; // x0
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

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_49FE5A5 & 1) == 0 )
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
    byte_49FE5A5 = 1;
  }
  this->fields.endCallback = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = sub_1B64170(object___TypeInfo, 12LL);
  if ( !v22 )
    sub_1B64324(0LL);
  v25 = (System_Object_array *)v22;
  v26 = (UnityEngine_GameObject_o *)StringLiteral_20716/*"isLocal"*/;
  if ( StringLiteral_20716/*"isLocal"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_20716/*"isLocal"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_58;
    v27 = StringLiteral_20716/*"isLocal"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_57;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v25->m_Items, v27, v23, v24);
  v61[0] = 1;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v61);
  v30 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_58;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_57;
  v25->m_Items[1] = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[1], (int32_t)v30, v28, v29);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22482/*"position"*/;
  if ( StringLiteral_22482/*"position"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22482/*"position"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_58;
    v27 = StringLiteral_22482/*"position"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_57;
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
      goto LABEL_58;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_57;
  v25->m_Items[3] = v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[3], (int32_t)v36, v34, v35);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_18681/*"easeType"*/;
  if ( StringLiteral_18681/*"easeType"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_18681/*"easeType"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_58;
    v27 = StringLiteral_18681/*"easeType"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 4 )
    goto LABEL_57;
  v25->m_Items[4] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[4], v27, v37, v38);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(this->fields.easeTypeOut, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_58;
  }
  if ( v25->max_length <= 5 )
    goto LABEL_57;
  v25->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[5], (int32_t)easeTypeOut, v39, v40);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_58;
    v27 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 6 )
    goto LABEL_57;
  v25->m_Items[6] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[6], v27, v42, v43);
  slideOutTime = this->fields.slideOutTime;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v46 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_58;
  }
  if ( v25->max_length <= 7 )
    goto LABEL_57;
  v25->m_Items[7] = v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[7], (int32_t)v46, v44, v45);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_58;
    v27 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 8 )
    goto LABEL_57;
  v25->m_Items[8] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[8], v27, v47, v48);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22172/*"onMoveComplete"*/;
  if ( StringLiteral_22172/*"onMoveComplete"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22172/*"onMoveComplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_58;
    v27 = StringLiteral_22172/*"onMoveComplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 9 )
    goto LABEL_57;
  v25->m_Items[9] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[9], v27, v49, v50);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22187/*"oncompletetarget"*/;
  if ( StringLiteral_22187/*"oncompletetarget"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22187/*"oncompletetarget"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_58;
    v27 = StringLiteral_22187/*"oncompletetarget"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xA )
    goto LABEL_57;
  v25->m_Items[10] = (Il2CppObject *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[10], v27, v51, v52);
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v55 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B64204(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_58:
      v57 = sub_1B64348(v26);
      sub_1B641F0(v57, 0LL);
    }
  }
  if ( v25->max_length <= 0xB )
LABEL_57:
    sub_1B6432C(v26, v27);
  v25->m_Items[11] = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->m_Items[11], (int32_t)v55, v53, v54);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v56 = iTween__Hash(v25, 0LL);
  iTween__MoveTo_59912984(gameObject, v56, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_41976668(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o slidePosition,
        bool isTypeIn,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
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
  __int64 v21; // x1
  __int64 v22; // x8
  __int64 v23; // x9
  Il2CppObject *v24; // x22
  int v25; // s11
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v27; // x0
  char v28; // w2
  int32_t v29; // w3
  System_Object_array *v30; // x21
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  char v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x23
  char v36; // w2
  int32_t v37; // w3
  char v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x23
  char v41; // w2
  int32_t v42; // w3
  char v43; // w2
  int32_t v44; // w3
  char v45; // w2
  int32_t v46; // w3
  char v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x22
  char v50; // w2
  int32_t v51; // w3
  char v52; // w2
  int32_t v53; // w3
  char v54; // w2
  int32_t v55; // w3
  char v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x19
  System_Collections_Hashtable_o *v59; // x0
  __int64 v60; // x0
  int v61[4]; // [xsp+0h] [xbp-70h] BYREF
  int v62; // [xsp+38h] [xbp-38h] BYREF
  char v63[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_49FE5A7 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, callback);
    sub_1B640C8(&object___TypeInfo, v11);
    sub_1B640C8(&float_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v14);
    sub_1B640C8(&StringLiteral_22187/*"oncompletetarget"*/, v15);
    sub_1B640C8(&StringLiteral_22482/*"position"*/, v16);
    sub_1B640C8(&StringLiteral_22148/*"onAnimEnd"*/, v17);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v18);
    sub_1B640C8(&StringLiteral_18681/*"easeType"*/, v19);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v20);
    sub_1B640C8(&iTween_TypeInfo, v21);
    byte_49FE5A7 = 1;
  }
  this->fields.endCallback = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    isTypeIn,
    (int32_t)method);
  v22 = 52LL;
  if ( isTypeIn )
    v22 = 48LL;
  if ( isTypeIn )
    v23 = 32LL;
  else
    v23 = 40LL;
  v24 = *(Il2CppObject **)((char *)&this->klass + v23);
  v25 = *(_DWORD *)((char *)&this->klass + v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v27 = sub_1B64170(object___TypeInfo, 12LL);
  if ( !v27 )
    sub_1B64324(0LL);
  v30 = (System_Object_array *)v27;
  v31 = (UnityEngine_GameObject_o *)StringLiteral_20716/*"isLocal"*/;
  if ( StringLiteral_20716/*"isLocal"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_20716/*"isLocal"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v32 = StringLiteral_20716/*"isLocal"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !v30->max_length )
    goto LABEL_62;
  v30->m_Items[0] = (Il2CppObject *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v30->m_Items, v32, v28, v29);
  v63[0] = 1;
  v31 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v63);
  v35 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
  }
  if ( v30->max_length <= 1 )
    goto LABEL_62;
  v30->m_Items[1] = v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[1], (int32_t)v35, v33, v34);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_22482/*"position"*/;
  if ( StringLiteral_22482/*"position"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22482/*"position"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v32 = StringLiteral_22482/*"position"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v30->max_length <= 2 )
    goto LABEL_62;
  v30->m_Items[2] = (Il2CppObject *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[2], v32, v36, v37);
  *(float *)v61 = x;
  *(float *)&v61[1] = y;
  *(float *)&v61[2] = z;
  v31 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v61);
  v40 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
  }
  if ( v30->max_length <= 3 )
    goto LABEL_62;
  v30->m_Items[3] = v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[3], (int32_t)v40, v38, v39);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_18681/*"easeType"*/;
  if ( StringLiteral_18681/*"easeType"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_18681/*"easeType"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v32 = StringLiteral_18681/*"easeType"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v30->max_length <= 4 )
    goto LABEL_62;
  v30->m_Items[4] = (Il2CppObject *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[4], v32, v41, v42);
  if ( v24 )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(v24, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
  }
  if ( v30->max_length <= 5 )
    goto LABEL_62;
  v30->m_Items[5] = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[5], (int32_t)v24, v43, v44);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v32 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v30->max_length <= 6 )
    goto LABEL_62;
  v30->m_Items[6] = (Il2CppObject *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[6], v32, v45, v46);
  v62 = v25;
  v31 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v62);
  v49 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
  }
  if ( v30->max_length <= 7 )
    goto LABEL_62;
  v30->m_Items[7] = v49;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[7], (int32_t)v49, v47, v48);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v32 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v30->max_length <= 8 )
    goto LABEL_62;
  v30->m_Items[8] = (Il2CppObject *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[8], v32, v50, v51);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_22148/*"onAnimEnd"*/;
  if ( StringLiteral_22148/*"onAnimEnd"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22148/*"onAnimEnd"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v32 = StringLiteral_22148/*"onAnimEnd"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v30->max_length <= 9 )
    goto LABEL_62;
  v30->m_Items[9] = (Il2CppObject *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[9], v32, v52, v53);
  v31 = (UnityEngine_GameObject_o *)StringLiteral_22187/*"oncompletetarget"*/;
  if ( StringLiteral_22187/*"oncompletetarget"*/ )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22187/*"oncompletetarget"*/, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_63;
    v32 = StringLiteral_22187/*"oncompletetarget"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v30->max_length <= 0xA )
    goto LABEL_62;
  v30->m_Items[10] = (Il2CppObject *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[10], v32, v54, v55);
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v58 = (Il2CppObject *)v31;
  if ( v31 )
  {
    v31 = (UnityEngine_GameObject_o *)sub_1B64204(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
    {
LABEL_63:
      v60 = sub_1B64348(v31);
      sub_1B641F0(v60, 0LL);
    }
  }
  if ( v30->max_length <= 0xB )
LABEL_62:
    sub_1B6432C(v31, v32);
  v30->m_Items[11] = v58;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->m_Items[11], (int32_t)v58, v56, v57);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v59 = iTween__Hash(v30, 0LL);
  iTween__MoveTo_59912984(gameObject, v59, 0LL);
}


void __fastcall EventInfoUISlideAnimation__onAnimEnd(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
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


void __fastcall EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Object_array *v18; // x21
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x9
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_String_o *easeTypeIn; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x19
  System_Collections_Hashtable_o *v49; // x0
  __int64 v50; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v52; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v54[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FE5A6 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&object___TypeInfo, v3);
    sub_1B640C8(&float_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v6);
    sub_1B640C8(&StringLiteral_22187/*"oncompletetarget"*/, v7);
    sub_1B640C8(&StringLiteral_22482/*"position"*/, v8);
    sub_1B640C8(&StringLiteral_22148/*"onAnimEnd"*/, v9);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v10);
    sub_1B640C8(&StringLiteral_18681/*"easeType"*/, v11);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v12);
    sub_1B640C8(&iTween_TypeInfo, v13);
    byte_49FE5A6 = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = sub_1B64170(object___TypeInfo, 12LL);
  if ( !v15 )
    sub_1B64324(0LL);
  v18 = (System_Object_array *)v15;
  v19 = (UnityEngine_GameObject_o *)StringLiteral_20716/*"isLocal"*/;
  if ( StringLiteral_20716/*"isLocal"*/ )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_20716/*"isLocal"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
    v20 = StringLiteral_20716/*"isLocal"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v18->max_length )
    goto LABEL_57;
  v18->m_Items[0] = (Il2CppObject *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v18->m_Items, v20, v16, v17);
  v54[0] = 1;
  v19 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v54);
  v23 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_57;
  v18->m_Items[1] = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[1], (int32_t)v23, v21, v22);
  v19 = (UnityEngine_GameObject_o *)StringLiteral_22482/*"position"*/;
  if ( StringLiteral_22482/*"position"*/ )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22482/*"position"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
    v20 = StringLiteral_22482/*"position"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v18->max_length <= 2 )
    goto LABEL_57;
  v18->m_Items[2] = (Il2CppObject *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[2], v20, v24, v25);
  v26 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v52 = v26;
  v19 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v52);
  v29 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
  }
  if ( v18->max_length <= 3 )
    goto LABEL_57;
  v18->m_Items[3] = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[3], (int32_t)v29, v27, v28);
  v19 = (UnityEngine_GameObject_o *)StringLiteral_18681/*"easeType"*/;
  if ( StringLiteral_18681/*"easeType"*/ )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_18681/*"easeType"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
    v20 = StringLiteral_18681/*"easeType"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v18->max_length <= 4 )
    goto LABEL_57;
  v18->m_Items[4] = (Il2CppObject *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[4], v20, v30, v31);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(this->fields.easeTypeIn, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
  }
  if ( v18->max_length <= 5 )
    goto LABEL_57;
  v18->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[5], (int32_t)easeTypeIn, v32, v33);
  v19 = (UnityEngine_GameObject_o *)StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
    v20 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v18->max_length <= 6 )
    goto LABEL_57;
  v18->m_Items[6] = (Il2CppObject *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[6], v20, v35, v36);
  slideInTime = this->fields.slideInTime;
  v19 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v39 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
  }
  if ( v18->max_length <= 7 )
    goto LABEL_57;
  v18->m_Items[7] = v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[7], (int32_t)v39, v37, v38);
  v19 = (UnityEngine_GameObject_o *)StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
    v20 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v18->max_length <= 8 )
    goto LABEL_57;
  v18->m_Items[8] = (Il2CppObject *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[8], v20, v40, v41);
  v19 = (UnityEngine_GameObject_o *)StringLiteral_22148/*"onAnimEnd"*/;
  if ( StringLiteral_22148/*"onAnimEnd"*/ )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22148/*"onAnimEnd"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
    v20 = StringLiteral_22148/*"onAnimEnd"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v18->max_length <= 9 )
    goto LABEL_57;
  v18->m_Items[9] = (Il2CppObject *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[9], v20, v42, v43);
  v19 = (UnityEngine_GameObject_o *)StringLiteral_22187/*"oncompletetarget"*/;
  if ( StringLiteral_22187/*"oncompletetarget"*/ )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(StringLiteral_22187/*"oncompletetarget"*/, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_58;
    v20 = StringLiteral_22187/*"oncompletetarget"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v18->max_length <= 0xA )
    goto LABEL_57;
  v18->m_Items[10] = (Il2CppObject *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[10], v20, v44, v45);
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v48 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = (UnityEngine_GameObject_o *)sub_1B64204(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
    {
LABEL_58:
      v50 = sub_1B64348(v19);
      sub_1B641F0(v50, 0LL);
    }
  }
  if ( v18->max_length <= 0xB )
LABEL_57:
    sub_1B6432C(v19, v20);
  v18->m_Items[11] = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->m_Items[11], (int32_t)v48, v46, v47);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v49 = iTween__Hash(v18, 0LL);
  iTween__MoveTo_59912984(gameObject, v49, 0LL);
}