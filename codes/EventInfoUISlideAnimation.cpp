void EventInfoUISlideAnimation___ctor(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector3_o EventInfoUISlideAnimation__GetSlideOutPosition(
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


void EventInfoUISlideAnimation__SetAfterActionAndInPosition(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  struct System_Action_o **p_endCallback; // x19
  float z; // s8
  float y; // s9
  float x; // s10

  this->fields.endCallback = callback;
  p_endCallback = &this->fields.endCallback;
  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  *((float *)p_endCallback - 3) = x;
  *((float *)p_endCallback - 2) = y;
  *((float *)p_endCallback - 1) = z;
}


void EventInfoUISlideAnimation__SetPotision(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C3E7C0(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0);
}


void EventInfoUISlideAnimation__StartSlideAnim(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Object_array *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x9
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_String_o *easeTypeOut; // x22
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x6
  __int64 v51; // x7
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x22
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  Il2CppObject *v63; // x19
  System_Collections_Hashtable_o *v64; // x0
  __int64 v65; // x0
  __int64 v66; // [xsp+0h] [xbp-60h] BYREF
  float v67; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v69[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4C58C38 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    sub_1C3E564(&StringLiteral_22435/*"onMoveComplete"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22450/*"oncompletetarget"*/);
    sub_1C3E564(&StringLiteral_22759/*"position"*/);
    sub_1C3E564(&StringLiteral_20948/*"isLocal"*/);
    sub_1C3E564(&StringLiteral_18771/*"easeType"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C58C38 = 1;
  }
  this->fields.endCallback = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = sub_1C3E60C(object___TypeInfo, 12);
  if ( !v11 )
    sub_1C3E7C0(0, v12);
  v15 = (System_Object_array *)v11;
  v16 = StringLiteral_20948/*"isLocal"*/;
  if ( StringLiteral_20948/*"isLocal"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_20948/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_20948/*"isLocal"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_57;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)v15->m_Items, v17, v13, v14);
  v69[0] = 1;
  v16 = j_il2cpp_value_box_0(bool_TypeInfo, v69, v18, v19, v20, v21, v22, v23);
  v26 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_57;
  v15->m_Items[1] = v26;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v26, v24, v25);
  v16 = StringLiteral_22759/*"position"*/;
  if ( StringLiteral_22759/*"position"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_22759/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22759/*"position"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_57;
  v15->m_Items[2] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[2], v17, v27, v28);
  v29 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v67 = this->fields.slideOutPosition.fields.z;
  v66 = v29;
  v16 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v66, v30, v31, v32, v33, v34, v35);
  v38 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_57;
  v15->m_Items[3] = v38;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v38, v36, v37);
  v16 = StringLiteral_18771/*"easeType"*/;
  if ( StringLiteral_18771/*"easeType"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_18771/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_18771/*"easeType"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 4 )
    goto LABEL_57;
  v15->m_Items[4] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[4], v17, v39, v40);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v16 = sub_1C3E6A0(this->fields.easeTypeOut, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 5 )
    goto LABEL_57;
  v15->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[5], (int32_t)easeTypeOut, v41, v42);
  v16 = StringLiteral_24091/*"time"*/;
  if ( StringLiteral_24091/*"time"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_24091/*"time"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 6 )
    goto LABEL_57;
  v15->m_Items[6] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[6], v17, v44, v45);
  slideOutTime = this->fields.slideOutTime;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v46, v47, v48, v49, v50, v51);
  v54 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 7 )
    goto LABEL_57;
  v15->m_Items[7] = v54;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[7], (int32_t)v54, v52, v53);
  v16 = StringLiteral_22448/*"oncomplete"*/;
  if ( StringLiteral_22448/*"oncomplete"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22448/*"oncomplete"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 8 )
    goto LABEL_57;
  v15->m_Items[8] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[8], v17, v55, v56);
  v16 = StringLiteral_22435/*"onMoveComplete"*/;
  if ( StringLiteral_22435/*"onMoveComplete"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_22435/*"onMoveComplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22435/*"onMoveComplete"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 9 )
    goto LABEL_57;
  v15->m_Items[9] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[9], v17, v57, v58);
  v16 = StringLiteral_22450/*"oncompletetarget"*/;
  if ( StringLiteral_22450/*"oncompletetarget"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_22450/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22450/*"oncompletetarget"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 0xA )
    goto LABEL_57;
  v15->m_Items[10] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[10], v17, v59, v60);
  v16 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v63 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_58:
      v65 = sub_1C3E7E4(v16);
      sub_1C3E68C(v65, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= 0xB )
LABEL_57:
    sub_1C3E7C8(v16, v17);
  v15->m_Items[11] = v63;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[11], (int32_t)v63, v61, v62);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v64 = iTween__Hash(v15, 0);
  iTween__MoveTo_63274032(gameObject, v64, 0);
}


void EventInfoUISlideAnimation__StartSlideAnim_44728808(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o slidePosition,
        bool isTypeIn,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v11; // x8
  __int64 v12; // x9
  Il2CppObject *v13; // x22
  int v14; // s11
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  char v18; // w2
  const MethodInfo *v19; // x3
  System_Object_array *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  char v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x23
  char v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  char v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x23
  char v43; // w2
  const MethodInfo *v44; // x3
  char v45; // w2
  const MethodInfo *v46; // x3
  char v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  char v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x22
  char v58; // w2
  const MethodInfo *v59; // x3
  char v60; // w2
  const MethodInfo *v61; // x3
  char v62; // w2
  const MethodInfo *v63; // x3
  char v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x19
  System_Collections_Hashtable_o *v67; // x0
  __int64 v68; // x0
  _DWORD v69[4]; // [xsp+0h] [xbp-70h] BYREF
  int v70; // [xsp+38h] [xbp-38h] BYREF
  char v71[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4C58C3A & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22450/*"oncompletetarget"*/);
    sub_1C3E564(&StringLiteral_22759/*"position"*/);
    sub_1C3E564(&StringLiteral_22411/*"onAnimEnd"*/);
    sub_1C3E564(&StringLiteral_20948/*"isLocal"*/);
    sub_1C3E564(&StringLiteral_18771/*"easeType"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C58C3A = 1;
  }
  this->fields.endCallback = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, isTypeIn, method);
  v11 = 52;
  if ( isTypeIn )
  {
    v11 = 48;
    v12 = 32;
  }
  else
  {
    v12 = 40;
  }
  v13 = *(Il2CppObject **)((char *)&this->klass + v12);
  v14 = *(_DWORD *)((char *)&this->klass + v11);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v16 = sub_1C3E60C(object___TypeInfo, 12);
  if ( !v16 )
    sub_1C3E7C0(0, v17);
  v20 = (System_Object_array *)v16;
  v21 = StringLiteral_20948/*"isLocal"*/;
  if ( StringLiteral_20948/*"isLocal"*/ )
  {
    v21 = sub_1C3E6A0(StringLiteral_20948/*"isLocal"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_20948/*"isLocal"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( !LODWORD(v20->max_length) )
    goto LABEL_60;
  v20->m_Items[0] = (Il2CppObject *)v22;
  sub_1C3E508((CGThumbnailListItem_o *)v20->m_Items, v22, v18, v19);
  v71[0] = 1;
  v21 = j_il2cpp_value_box_0(bool_TypeInfo, v71, v23, v24, v25, v26, v27, v28);
  v31 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1C3E6A0(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 1 )
    goto LABEL_60;
  v20->m_Items[1] = v31;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)v31, v29, v30);
  v21 = StringLiteral_22759/*"position"*/;
  if ( StringLiteral_22759/*"position"*/ )
  {
    v21 = sub_1C3E6A0(StringLiteral_22759/*"position"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_22759/*"position"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 2 )
    goto LABEL_60;
  v20->m_Items[2] = (Il2CppObject *)v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[2], v22, v32, v33);
  *(float *)v69 = x;
  *(float *)&v69[1] = y;
  *(float *)&v69[2] = z;
  v21 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v69, v34, v35, v36, v37, v38, v39);
  v42 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1C3E6A0(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 3 )
    goto LABEL_60;
  v20->m_Items[3] = v42;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)v42, v40, v41);
  v21 = StringLiteral_18771/*"easeType"*/;
  if ( StringLiteral_18771/*"easeType"*/ )
  {
    v21 = sub_1C3E6A0(StringLiteral_18771/*"easeType"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_18771/*"easeType"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 4 )
    goto LABEL_60;
  v20->m_Items[4] = (Il2CppObject *)v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[4], v22, v43, v44);
  if ( v13 )
  {
    v21 = sub_1C3E6A0(v13, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 5 )
    goto LABEL_60;
  v20->m_Items[5] = v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[5], (int32_t)v13, v45, v46);
  v21 = StringLiteral_24091/*"time"*/;
  if ( StringLiteral_24091/*"time"*/ )
  {
    v21 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_24091/*"time"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 6 )
    goto LABEL_60;
  v20->m_Items[6] = (Il2CppObject *)v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[6], v22, v47, v48);
  v70 = v14;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v70, v49, v50, v51, v52, v53, v54);
  v57 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1C3E6A0(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 7 )
    goto LABEL_60;
  v20->m_Items[7] = v57;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[7], (int32_t)v57, v55, v56);
  v21 = StringLiteral_22448/*"oncomplete"*/;
  if ( StringLiteral_22448/*"oncomplete"*/ )
  {
    v21 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_22448/*"oncomplete"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 8 )
    goto LABEL_60;
  v20->m_Items[8] = (Il2CppObject *)v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[8], v22, v58, v59);
  v21 = StringLiteral_22411/*"onAnimEnd"*/;
  if ( StringLiteral_22411/*"onAnimEnd"*/ )
  {
    v21 = sub_1C3E6A0(StringLiteral_22411/*"onAnimEnd"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_22411/*"onAnimEnd"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 9 )
    goto LABEL_60;
  v20->m_Items[9] = (Il2CppObject *)v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[9], v22, v60, v61);
  v21 = StringLiteral_22450/*"oncompletetarget"*/;
  if ( StringLiteral_22450/*"oncompletetarget"*/ )
  {
    v21 = sub_1C3E6A0(StringLiteral_22450/*"oncompletetarget"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_22450/*"oncompletetarget"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 0xA )
    goto LABEL_60;
  v20->m_Items[10] = (Il2CppObject *)v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[10], v22, v62, v63);
  v21 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v66 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1C3E6A0(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_61:
      v68 = sub_1C3E7E4(v21);
      sub_1C3E68C(v68, 0);
    }
  }
  if ( LODWORD(v20->max_length) <= 0xB )
LABEL_60:
    sub_1C3E7C8(v21, v22);
  v20->m_Items[11] = v66;
  sub_1C3E508((CGThumbnailListItem_o *)&v20->m_Items[11], (int32_t)v66, v64, v65);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v67 = iTween__Hash(v20, 0);
  iTween__MoveTo_63274032(gameObject, v67, 0);
}


void EventInfoUISlideAnimation__onAnimEnd(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_endCallback; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (CGThumbnailListItem_o *)&this->fields.endCallback;
  v5 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0;
    sub_1C3E508(p_endCallback, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Object_array *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x9
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_String_o *easeTypeIn; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x19
  System_Collections_Hashtable_o *v57; // x0
  __int64 v58; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v60; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v62[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C58C39 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22450/*"oncompletetarget"*/);
    sub_1C3E564(&StringLiteral_22759/*"position"*/);
    sub_1C3E564(&StringLiteral_22411/*"onAnimEnd"*/);
    sub_1C3E564(&StringLiteral_20948/*"isLocal"*/);
    sub_1C3E564(&StringLiteral_18771/*"easeType"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C58C39 = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = sub_1C3E60C(object___TypeInfo, 12);
  if ( !v4 )
    sub_1C3E7C0(0, v5);
  v8 = (System_Object_array *)v4;
  v9 = StringLiteral_20948/*"isLocal"*/;
  if ( StringLiteral_20948/*"isLocal"*/ )
  {
    v9 = sub_1C3E6A0(StringLiteral_20948/*"isLocal"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_20948/*"isLocal"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( !LODWORD(v8->max_length) )
    goto LABEL_57;
  v8->m_Items[0] = (Il2CppObject *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)v8->m_Items, v10, v6, v7);
  v62[0] = 1;
  v9 = j_il2cpp_value_box_0(bool_TypeInfo, v62, v11, v12, v13, v14, v15, v16);
  v19 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C3E6A0(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_57;
  v8->m_Items[1] = v19;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[1], (int32_t)v19, v17, v18);
  v9 = StringLiteral_22759/*"position"*/;
  if ( StringLiteral_22759/*"position"*/ )
  {
    v9 = sub_1C3E6A0(StringLiteral_22759/*"position"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22759/*"position"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 2 )
    goto LABEL_57;
  v8->m_Items[2] = (Il2CppObject *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[2], v10, v20, v21);
  v22 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v60 = v22;
  v9 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v60, v23, v24, v25, v26, v27, v28);
  v31 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C3E6A0(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 3 )
    goto LABEL_57;
  v8->m_Items[3] = v31;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[3], (int32_t)v31, v29, v30);
  v9 = StringLiteral_18771/*"easeType"*/;
  if ( StringLiteral_18771/*"easeType"*/ )
  {
    v9 = sub_1C3E6A0(StringLiteral_18771/*"easeType"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_18771/*"easeType"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 4 )
    goto LABEL_57;
  v8->m_Items[4] = (Il2CppObject *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[4], v10, v32, v33);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v9 = sub_1C3E6A0(this->fields.easeTypeIn, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 5 )
    goto LABEL_57;
  v8->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[5], (int32_t)easeTypeIn, v34, v35);
  v9 = StringLiteral_24091/*"time"*/;
  if ( StringLiteral_24091/*"time"*/ )
  {
    v9 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_24091/*"time"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 6 )
    goto LABEL_57;
  v8->m_Items[6] = (Il2CppObject *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[6], v10, v37, v38);
  slideInTime = this->fields.slideInTime;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v39, v40, v41, v42, v43, v44);
  v47 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C3E6A0(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 7 )
    goto LABEL_57;
  v8->m_Items[7] = v47;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[7], (int32_t)v47, v45, v46);
  v9 = StringLiteral_22448/*"oncomplete"*/;
  if ( StringLiteral_22448/*"oncomplete"*/ )
  {
    v9 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22448/*"oncomplete"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 8 )
    goto LABEL_57;
  v8->m_Items[8] = (Il2CppObject *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[8], v10, v48, v49);
  v9 = StringLiteral_22411/*"onAnimEnd"*/;
  if ( StringLiteral_22411/*"onAnimEnd"*/ )
  {
    v9 = sub_1C3E6A0(StringLiteral_22411/*"onAnimEnd"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22411/*"onAnimEnd"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 9 )
    goto LABEL_57;
  v8->m_Items[9] = (Il2CppObject *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[9], v10, v50, v51);
  v9 = StringLiteral_22450/*"oncompletetarget"*/;
  if ( StringLiteral_22450/*"oncompletetarget"*/ )
  {
    v9 = sub_1C3E6A0(StringLiteral_22450/*"oncompletetarget"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22450/*"oncompletetarget"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 0xA )
    goto LABEL_57;
  v8->m_Items[10] = (Il2CppObject *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[10], v10, v52, v53);
  v9 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v56 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C3E6A0(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_58:
      v58 = sub_1C3E7E4(v9);
      sub_1C3E68C(v58, 0);
    }
  }
  if ( LODWORD(v8->max_length) <= 0xB )
LABEL_57:
    sub_1C3E7C8(v9, v10);
  v8->m_Items[11] = v56;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[11], (int32_t)v56, v54, v55);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v57 = iTween__Hash(v8, 0);
  iTween__MoveTo_63274032(gameObject, v57, 0);
}