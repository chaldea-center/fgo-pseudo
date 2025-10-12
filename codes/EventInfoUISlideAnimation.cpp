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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  *((float *)p_endCallback - 3) = x;
  *((float *)p_endCallback - 2) = y;
  *((float *)p_endCallback - 1) = z;
}


void EventInfoUISlideAnimation__SetPotision(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C32E7C(0);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Object_array *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x1
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
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_String_o *easeTypeOut; // x22
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x22
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x1
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  Il2CppObject *v68; // x19
  System_Collections_Hashtable_o *v69; // x0
  __int64 v70; // x0
  __int64 v71; // [xsp+0h] [xbp-60h] BYREF
  float v72; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v74[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4C39872 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    sub_1C32C20(&StringLiteral_22414/*"onMoveComplete"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22429/*"oncompletetarget"*/);
    sub_1C32C20(&StringLiteral_22736/*"position"*/);
    sub_1C32C20(&StringLiteral_20927/*"isLocal"*/);
    sub_1C32C20(&StringLiteral_18750/*"easeType"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C39872 = 1;
  }
  this->fields.endCallback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = sub_1C32CC8(object___TypeInfo, 12);
  if ( !v11 )
    sub_1C32E7C(0);
  v14 = (System_Object_array *)v11;
  v15 = StringLiteral_20927/*"isLocal"*/;
  if ( StringLiteral_20927/*"isLocal"*/ )
  {
    v15 = sub_1C32D5C(StringLiteral_20927/*"isLocal"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
    v16 = StringLiteral_20927/*"isLocal"*/;
  }
  else
  {
    v16 = 0;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_57;
  v14->m_Items[0] = (Il2CppObject *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)v14->m_Items, v16, v12, v13);
  v74[0] = 1;
  v15 = j_il2cpp_value_box_0(bool_TypeInfo, v74, v17, v18, v19, v20, v21, v22);
  v25 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C32D5C(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
  }
  if ( LODWORD(v14->max_length) <= 1 )
    goto LABEL_57;
  v14->m_Items[1] = v25;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[1], (int32_t)v25, v23, v24);
  v15 = StringLiteral_22736/*"position"*/;
  if ( StringLiteral_22736/*"position"*/ )
  {
    v15 = sub_1C32D5C(StringLiteral_22736/*"position"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
    v28 = StringLiteral_22736/*"position"*/;
  }
  else
  {
    v28 = 0;
  }
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_57;
  v14->m_Items[2] = (Il2CppObject *)v28;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[2], v28, v26, v27);
  v29 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v72 = this->fields.slideOutPosition.fields.z;
  v71 = v29;
  v15 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v71, v30, v31, v32, v33, v34, v35);
  v38 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C32D5C(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
  }
  if ( LODWORD(v14->max_length) <= 3 )
    goto LABEL_57;
  v14->m_Items[3] = v38;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[3], (int32_t)v38, v36, v37);
  v15 = StringLiteral_18750/*"easeType"*/;
  if ( StringLiteral_18750/*"easeType"*/ )
  {
    v15 = sub_1C32D5C(StringLiteral_18750/*"easeType"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
    v41 = StringLiteral_18750/*"easeType"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v14->max_length) <= 4 )
    goto LABEL_57;
  v14->m_Items[4] = (Il2CppObject *)v41;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[4], v41, v39, v40);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v15 = sub_1C32D5C(this->fields.easeTypeOut, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
  }
  if ( LODWORD(v14->max_length) <= 5 )
    goto LABEL_57;
  v14->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[5], (int32_t)easeTypeOut, v42, v43);
  v15 = StringLiteral_24067/*"time"*/;
  if ( StringLiteral_24067/*"time"*/ )
  {
    v15 = sub_1C32D5C(StringLiteral_24067/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
    v47 = StringLiteral_24067/*"time"*/;
  }
  else
  {
    v47 = 0;
  }
  if ( LODWORD(v14->max_length) <= 6 )
    goto LABEL_57;
  v14->m_Items[6] = (Il2CppObject *)v47;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[6], v47, v45, v46);
  slideOutTime = this->fields.slideOutTime;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v48, v49, v50, v51, v52, v53);
  v56 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C32D5C(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
  }
  if ( LODWORD(v14->max_length) <= 7 )
    goto LABEL_57;
  v14->m_Items[7] = v56;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[7], (int32_t)v56, v54, v55);
  v15 = StringLiteral_22427/*"oncomplete"*/;
  if ( StringLiteral_22427/*"oncomplete"*/ )
  {
    v15 = sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
    v59 = StringLiteral_22427/*"oncomplete"*/;
  }
  else
  {
    v59 = 0;
  }
  if ( LODWORD(v14->max_length) <= 8 )
    goto LABEL_57;
  v14->m_Items[8] = (Il2CppObject *)v59;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[8], v59, v57, v58);
  v15 = StringLiteral_22414/*"onMoveComplete"*/;
  if ( StringLiteral_22414/*"onMoveComplete"*/ )
  {
    v15 = sub_1C32D5C(StringLiteral_22414/*"onMoveComplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
    v62 = StringLiteral_22414/*"onMoveComplete"*/;
  }
  else
  {
    v62 = 0;
  }
  if ( LODWORD(v14->max_length) <= 9 )
    goto LABEL_57;
  v14->m_Items[9] = (Il2CppObject *)v62;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[9], v62, v60, v61);
  v15 = StringLiteral_22429/*"oncompletetarget"*/;
  if ( StringLiteral_22429/*"oncompletetarget"*/ )
  {
    v15 = sub_1C32D5C(StringLiteral_22429/*"oncompletetarget"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_58;
    v65 = StringLiteral_22429/*"oncompletetarget"*/;
  }
  else
  {
    v65 = 0;
  }
  if ( LODWORD(v14->max_length) <= 0xA )
    goto LABEL_57;
  v14->m_Items[10] = (Il2CppObject *)v65;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[10], v65, v63, v64);
  v15 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v68 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C32D5C(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_58:
      v70 = sub_1C32EA0(v15);
      sub_1C32D48(v70, 0);
    }
  }
  if ( LODWORD(v14->max_length) <= 0xB )
LABEL_57:
    sub_1C32E84(v15);
  v14->m_Items[11] = v68;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->m_Items[11], (int32_t)v68, v66, v67);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v69 = iTween__Hash(v14, 0);
  iTween__MoveTo_63156108(gameObject, v69, 0);
}


void EventInfoUISlideAnimation__StartSlideAnim_44570888(
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
  char v17; // w2
  const MethodInfo *v18; // x3
  System_Object_array *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  char v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x23
  char v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x1
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
  __int64 v45; // x1
  char v46; // w2
  const MethodInfo *v47; // x3
  char v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  char v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x22
  char v60; // w2
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  char v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x1
  char v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x1
  char v69; // w2
  const MethodInfo *v70; // x3
  Il2CppObject *v71; // x19
  System_Collections_Hashtable_o *v72; // x0
  __int64 v73; // x0
  _DWORD v74[4]; // [xsp+0h] [xbp-70h] BYREF
  int v75; // [xsp+38h] [xbp-38h] BYREF
  char v76[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4C39874 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22429/*"oncompletetarget"*/);
    sub_1C32C20(&StringLiteral_22736/*"position"*/);
    sub_1C32C20(&StringLiteral_22390/*"onAnimEnd"*/);
    sub_1C32C20(&StringLiteral_20927/*"isLocal"*/);
    sub_1C32C20(&StringLiteral_18750/*"easeType"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C39874 = 1;
  }
  this->fields.endCallback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, isTypeIn, method);
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
  v16 = sub_1C32CC8(object___TypeInfo, 12);
  if ( !v16 )
    sub_1C32E7C(0);
  v19 = (System_Object_array *)v16;
  v20 = StringLiteral_20927/*"isLocal"*/;
  if ( StringLiteral_20927/*"isLocal"*/ )
  {
    v20 = sub_1C32D5C(StringLiteral_20927/*"isLocal"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v21 = StringLiteral_20927/*"isLocal"*/;
  }
  else
  {
    v21 = 0;
  }
  if ( !LODWORD(v19->max_length) )
    goto LABEL_60;
  v19->m_Items[0] = (Il2CppObject *)v21;
  sub_1C32BC4((CGThumbnailListItem_o *)v19->m_Items, v21, v17, v18);
  v76[0] = 1;
  v20 = j_il2cpp_value_box_0(bool_TypeInfo, v76, v22, v23, v24, v25, v26, v27);
  v30 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_1C32D5C(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
  }
  if ( LODWORD(v19->max_length) <= 1 )
    goto LABEL_60;
  v19->m_Items[1] = v30;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v30, v28, v29);
  v20 = StringLiteral_22736/*"position"*/;
  if ( StringLiteral_22736/*"position"*/ )
  {
    v20 = sub_1C32D5C(StringLiteral_22736/*"position"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v33 = StringLiteral_22736/*"position"*/;
  }
  else
  {
    v33 = 0;
  }
  if ( LODWORD(v19->max_length) <= 2 )
    goto LABEL_60;
  v19->m_Items[2] = (Il2CppObject *)v33;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[2], v33, v31, v32);
  *(float *)v74 = x;
  *(float *)&v74[1] = y;
  *(float *)&v74[2] = z;
  v20 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v74, v34, v35, v36, v37, v38, v39);
  v42 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_1C32D5C(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
  }
  if ( LODWORD(v19->max_length) <= 3 )
    goto LABEL_60;
  v19->m_Items[3] = v42;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[3], (int32_t)v42, v40, v41);
  v20 = StringLiteral_18750/*"easeType"*/;
  if ( StringLiteral_18750/*"easeType"*/ )
  {
    v20 = sub_1C32D5C(StringLiteral_18750/*"easeType"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v45 = StringLiteral_18750/*"easeType"*/;
  }
  else
  {
    v45 = 0;
  }
  if ( LODWORD(v19->max_length) <= 4 )
    goto LABEL_60;
  v19->m_Items[4] = (Il2CppObject *)v45;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[4], v45, v43, v44);
  if ( v13 )
  {
    v20 = sub_1C32D5C(v13, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
  }
  if ( LODWORD(v19->max_length) <= 5 )
    goto LABEL_60;
  v19->m_Items[5] = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[5], (int32_t)v13, v46, v47);
  v20 = StringLiteral_24067/*"time"*/;
  if ( StringLiteral_24067/*"time"*/ )
  {
    v20 = sub_1C32D5C(StringLiteral_24067/*"time"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v50 = StringLiteral_24067/*"time"*/;
  }
  else
  {
    v50 = 0;
  }
  if ( LODWORD(v19->max_length) <= 6 )
    goto LABEL_60;
  v19->m_Items[6] = (Il2CppObject *)v50;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[6], v50, v48, v49);
  v75 = v14;
  v20 = j_il2cpp_value_box_0(float_TypeInfo, &v75, v51, v52, v53, v54, v55, v56);
  v59 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_1C32D5C(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
  }
  if ( LODWORD(v19->max_length) <= 7 )
    goto LABEL_60;
  v19->m_Items[7] = v59;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[7], (int32_t)v59, v57, v58);
  v20 = StringLiteral_22427/*"oncomplete"*/;
  if ( StringLiteral_22427/*"oncomplete"*/ )
  {
    v20 = sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v62 = StringLiteral_22427/*"oncomplete"*/;
  }
  else
  {
    v62 = 0;
  }
  if ( LODWORD(v19->max_length) <= 8 )
    goto LABEL_60;
  v19->m_Items[8] = (Il2CppObject *)v62;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[8], v62, v60, v61);
  v20 = StringLiteral_22390/*"onAnimEnd"*/;
  if ( StringLiteral_22390/*"onAnimEnd"*/ )
  {
    v20 = sub_1C32D5C(StringLiteral_22390/*"onAnimEnd"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v65 = StringLiteral_22390/*"onAnimEnd"*/;
  }
  else
  {
    v65 = 0;
  }
  if ( LODWORD(v19->max_length) <= 9 )
    goto LABEL_60;
  v19->m_Items[9] = (Il2CppObject *)v65;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[9], v65, v63, v64);
  v20 = StringLiteral_22429/*"oncompletetarget"*/;
  if ( StringLiteral_22429/*"oncompletetarget"*/ )
  {
    v20 = sub_1C32D5C(StringLiteral_22429/*"oncompletetarget"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_61;
    v68 = StringLiteral_22429/*"oncompletetarget"*/;
  }
  else
  {
    v68 = 0;
  }
  if ( LODWORD(v19->max_length) <= 0xA )
    goto LABEL_60;
  v19->m_Items[10] = (Il2CppObject *)v68;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[10], v68, v66, v67);
  v20 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v71 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = sub_1C32D5C(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
    {
LABEL_61:
      v73 = sub_1C32EA0(v20);
      sub_1C32D48(v73, 0);
    }
  }
  if ( LODWORD(v19->max_length) <= 0xB )
LABEL_60:
    sub_1C32E84(v20);
  v19->m_Items[11] = v71;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->m_Items[11], (int32_t)v71, v69, v70);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v72 = iTween__Hash(v19, 0);
  iTween__MoveTo_63156108(gameObject, v72, 0);
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
    sub_1C32BC4(p_endCallback, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Object_array *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
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
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_String_o *easeTypeIn; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x22
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x19
  System_Collections_Hashtable_o *v62; // x0
  __int64 v63; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v65; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v67[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C39873 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22429/*"oncompletetarget"*/);
    sub_1C32C20(&StringLiteral_22736/*"position"*/);
    sub_1C32C20(&StringLiteral_22390/*"onAnimEnd"*/);
    sub_1C32C20(&StringLiteral_20927/*"isLocal"*/);
    sub_1C32C20(&StringLiteral_18750/*"easeType"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C39873 = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = sub_1C32CC8(object___TypeInfo, 12);
  if ( !v4 )
    sub_1C32E7C(0);
  v7 = (System_Object_array *)v4;
  v8 = StringLiteral_20927/*"isLocal"*/;
  if ( StringLiteral_20927/*"isLocal"*/ )
  {
    v8 = sub_1C32D5C(StringLiteral_20927/*"isLocal"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
    v9 = StringLiteral_20927/*"isLocal"*/;
  }
  else
  {
    v9 = 0;
  }
  if ( !LODWORD(v7->max_length) )
    goto LABEL_57;
  v7->m_Items[0] = (Il2CppObject *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)v7->m_Items, v9, v5, v6);
  v67[0] = 1;
  v8 = j_il2cpp_value_box_0(bool_TypeInfo, v67, v10, v11, v12, v13, v14, v15);
  v18 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1C32D5C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
  }
  if ( LODWORD(v7->max_length) <= 1 )
    goto LABEL_57;
  v7->m_Items[1] = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[1], (int32_t)v18, v16, v17);
  v8 = StringLiteral_22736/*"position"*/;
  if ( StringLiteral_22736/*"position"*/ )
  {
    v8 = sub_1C32D5C(StringLiteral_22736/*"position"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
    v21 = StringLiteral_22736/*"position"*/;
  }
  else
  {
    v21 = 0;
  }
  if ( LODWORD(v7->max_length) <= 2 )
    goto LABEL_57;
  v7->m_Items[2] = (Il2CppObject *)v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[2], v21, v19, v20);
  v22 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v65 = v22;
  v8 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v65, v23, v24, v25, v26, v27, v28);
  v31 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1C32D5C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
  }
  if ( LODWORD(v7->max_length) <= 3 )
    goto LABEL_57;
  v7->m_Items[3] = v31;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[3], (int32_t)v31, v29, v30);
  v8 = StringLiteral_18750/*"easeType"*/;
  if ( StringLiteral_18750/*"easeType"*/ )
  {
    v8 = sub_1C32D5C(StringLiteral_18750/*"easeType"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
    v34 = StringLiteral_18750/*"easeType"*/;
  }
  else
  {
    v34 = 0;
  }
  if ( LODWORD(v7->max_length) <= 4 )
    goto LABEL_57;
  v7->m_Items[4] = (Il2CppObject *)v34;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[4], v34, v32, v33);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v8 = sub_1C32D5C(this->fields.easeTypeIn, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
  }
  if ( LODWORD(v7->max_length) <= 5 )
    goto LABEL_57;
  v7->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[5], (int32_t)easeTypeIn, v35, v36);
  v8 = StringLiteral_24067/*"time"*/;
  if ( StringLiteral_24067/*"time"*/ )
  {
    v8 = sub_1C32D5C(StringLiteral_24067/*"time"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
    v40 = StringLiteral_24067/*"time"*/;
  }
  else
  {
    v40 = 0;
  }
  if ( LODWORD(v7->max_length) <= 6 )
    goto LABEL_57;
  v7->m_Items[6] = (Il2CppObject *)v40;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[6], v40, v38, v39);
  slideInTime = this->fields.slideInTime;
  v8 = j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v41, v42, v43, v44, v45, v46);
  v49 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1C32D5C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
  }
  if ( LODWORD(v7->max_length) <= 7 )
    goto LABEL_57;
  v7->m_Items[7] = v49;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[7], (int32_t)v49, v47, v48);
  v8 = StringLiteral_22427/*"oncomplete"*/;
  if ( StringLiteral_22427/*"oncomplete"*/ )
  {
    v8 = sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
    v52 = StringLiteral_22427/*"oncomplete"*/;
  }
  else
  {
    v52 = 0;
  }
  if ( LODWORD(v7->max_length) <= 8 )
    goto LABEL_57;
  v7->m_Items[8] = (Il2CppObject *)v52;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[8], v52, v50, v51);
  v8 = StringLiteral_22390/*"onAnimEnd"*/;
  if ( StringLiteral_22390/*"onAnimEnd"*/ )
  {
    v8 = sub_1C32D5C(StringLiteral_22390/*"onAnimEnd"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
    v55 = StringLiteral_22390/*"onAnimEnd"*/;
  }
  else
  {
    v55 = 0;
  }
  if ( LODWORD(v7->max_length) <= 9 )
    goto LABEL_57;
  v7->m_Items[9] = (Il2CppObject *)v55;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[9], v55, v53, v54);
  v8 = StringLiteral_22429/*"oncompletetarget"*/;
  if ( StringLiteral_22429/*"oncompletetarget"*/ )
  {
    v8 = sub_1C32D5C(StringLiteral_22429/*"oncompletetarget"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_58;
    v58 = StringLiteral_22429/*"oncompletetarget"*/;
  }
  else
  {
    v58 = 0;
  }
  if ( LODWORD(v7->max_length) <= 0xA )
    goto LABEL_57;
  v7->m_Items[10] = (Il2CppObject *)v58;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[10], v58, v56, v57);
  v8 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v61 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1C32D5C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_58:
      v63 = sub_1C32EA0(v8);
      sub_1C32D48(v63, 0);
    }
  }
  if ( LODWORD(v7->max_length) <= 0xB )
LABEL_57:
    sub_1C32E84(v8);
  v7->m_Items[11] = v61;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->m_Items[11], (int32_t)v61, v59, v60);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v62 = iTween__Hash(v7, 0);
  iTween__MoveTo_63156108(gameObject, v62, 0);
}