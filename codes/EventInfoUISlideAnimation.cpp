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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
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
    sub_1C6BC60(0, v4);
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
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  __int64 v24; // x9
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_String_o *easeTypeOut; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x19
  System_Collections_Hashtable_o *v52; // x0
  __int64 v53; // x0
  __int64 v54; // [xsp+0h] [xbp-60h] BYREF
  float v55; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v57[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4CB819D & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    sub_1C6BA08(&StringLiteral_22505/*"onMoveComplete"*/);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22520/*"oncompletetarget"*/);
    sub_1C6BA08(&StringLiteral_22829/*"position"*/);
    sub_1C6BA08(&StringLiteral_20995/*"isLocal"*/);
    sub_1C6BA08(&StringLiteral_18789/*"easeType"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB819D = 1;
  }
  this->fields.endCallback = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = sub_1C6BAB0(object___TypeInfo, 12);
  if ( !v11 )
    sub_1C6BC60(0, v12);
  v15 = (System_Object_array *)v11;
  v16 = (UnityEngine_GameObject_o *)StringLiteral_20995/*"isLocal"*/;
  if ( StringLiteral_20995/*"isLocal"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_20995/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_20995/*"isLocal"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_57;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)v15->m_Items, v17, v13, v14);
  v57[0] = 1;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v57);
  v20 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_57;
  v15->m_Items[1] = v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v20, v18, v19);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22829/*"position"*/;
  if ( StringLiteral_22829/*"position"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22829/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v23 = StringLiteral_22829/*"position"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_57;
  v15->m_Items[2] = (Il2CppObject *)v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[2], v23, v21, v22);
  v24 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v55 = this->fields.slideOutPosition.fields.z;
  v54 = v24;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v54);
  v27 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_57;
  v15->m_Items[3] = v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v27, v25, v26);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_18789/*"easeType"*/;
  if ( StringLiteral_18789/*"easeType"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_18789/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v30 = StringLiteral_18789/*"easeType"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( LODWORD(v15->max_length) <= 4 )
    goto LABEL_57;
  v15->m_Items[4] = (Il2CppObject *)v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[4], v30, v28, v29);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(this->fields.easeTypeOut, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 5 )
    goto LABEL_57;
  v15->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[5], (int32_t)easeTypeOut, v31, v32);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_24169/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v36 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v36 = 0;
  }
  if ( LODWORD(v15->max_length) <= 6 )
    goto LABEL_57;
  v15->m_Items[6] = (Il2CppObject *)v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[6], v36, v34, v35);
  slideOutTime = this->fields.slideOutTime;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v39 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 7 )
    goto LABEL_57;
  v15->m_Items[7] = v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[7], (int32_t)v39, v37, v38);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22518/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v42 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v42 = 0;
  }
  if ( LODWORD(v15->max_length) <= 8 )
    goto LABEL_57;
  v15->m_Items[8] = (Il2CppObject *)v42;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[8], v42, v40, v41);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22505/*"onMoveComplete"*/;
  if ( StringLiteral_22505/*"onMoveComplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22505/*"onMoveComplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v45 = StringLiteral_22505/*"onMoveComplete"*/;
  }
  else
  {
    v45 = 0;
  }
  if ( LODWORD(v15->max_length) <= 9 )
    goto LABEL_57;
  v15->m_Items[9] = (Il2CppObject *)v45;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[9], v45, v43, v44);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22520/*"oncompletetarget"*/;
  if ( StringLiteral_22520/*"oncompletetarget"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22520/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v48 = StringLiteral_22520/*"oncompletetarget"*/;
  }
  else
  {
    v48 = 0;
  }
  if ( LODWORD(v15->max_length) <= 0xA )
    goto LABEL_57;
  v15->m_Items[10] = (Il2CppObject *)v48;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[10], v48, v46, v47);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v51 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_58:
      v53 = sub_1C6BC84(v16);
      sub_1C6BB30(v53, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= 0xB )
LABEL_57:
    sub_1C6BC68(v16);
  v15->m_Items[11] = v51;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[11], (int32_t)v51, v49, v50);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v52 = iTween__Hash(v15, 0);
  iTween__MoveTo_63604356(gameObject, v52, 0);
}


void EventInfoUISlideAnimation__StartSlideAnim_44915520(
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
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  char v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x23
  char v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  char v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x23
  char v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  char v35; // w2
  const MethodInfo *v36; // x3
  char v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  char v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x22
  char v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  char v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x1
  char v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x1
  char v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x19
  System_Collections_Hashtable_o *v55; // x0
  __int64 v56; // x0
  _DWORD v57[4]; // [xsp+0h] [xbp-70h] BYREF
  int v58; // [xsp+38h] [xbp-38h] BYREF
  char v59[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4CB819F & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22520/*"oncompletetarget"*/);
    sub_1C6BA08(&StringLiteral_22829/*"position"*/);
    sub_1C6BA08(&StringLiteral_22482/*"onAnimEnd"*/);
    sub_1C6BA08(&StringLiteral_20995/*"isLocal"*/);
    sub_1C6BA08(&StringLiteral_18789/*"easeType"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB819F = 1;
  }
  this->fields.endCallback = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, isTypeIn, method);
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
  v16 = sub_1C6BAB0(object___TypeInfo, 12);
  if ( !v16 )
    sub_1C6BC60(0, v17);
  v20 = (System_Object_array *)v16;
  v21 = (UnityEngine_GameObject_o *)StringLiteral_20995/*"isLocal"*/;
  if ( StringLiteral_20995/*"isLocal"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_20995/*"isLocal"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_20995/*"isLocal"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( !LODWORD(v20->max_length) )
    goto LABEL_60;
  v20->m_Items[0] = (Il2CppObject *)v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)v20->m_Items, v22, v18, v19);
  v59[0] = 1;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v59);
  v25 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 1 )
    goto LABEL_60;
  v20->m_Items[1] = v25;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)v25, v23, v24);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22829/*"position"*/;
  if ( StringLiteral_22829/*"position"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22829/*"position"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v28 = StringLiteral_22829/*"position"*/;
  }
  else
  {
    v28 = 0;
  }
  if ( LODWORD(v20->max_length) <= 2 )
    goto LABEL_60;
  v20->m_Items[2] = (Il2CppObject *)v28;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[2], v28, v26, v27);
  *(float *)v57 = x;
  *(float *)&v57[1] = y;
  *(float *)&v57[2] = z;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v57);
  v31 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 3 )
    goto LABEL_60;
  v20->m_Items[3] = v31;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)v31, v29, v30);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_18789/*"easeType"*/;
  if ( StringLiteral_18789/*"easeType"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_18789/*"easeType"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v34 = StringLiteral_18789/*"easeType"*/;
  }
  else
  {
    v34 = 0;
  }
  if ( LODWORD(v20->max_length) <= 4 )
    goto LABEL_60;
  v20->m_Items[4] = (Il2CppObject *)v34;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[4], v34, v32, v33);
  if ( v13 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(v13, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 5 )
    goto LABEL_60;
  v20->m_Items[5] = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[5], (int32_t)v13, v35, v36);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_24169/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v39 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v39 = 0;
  }
  if ( LODWORD(v20->max_length) <= 6 )
    goto LABEL_60;
  v20->m_Items[6] = (Il2CppObject *)v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[6], v39, v37, v38);
  v58 = v14;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v58);
  v42 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 7 )
    goto LABEL_60;
  v20->m_Items[7] = v42;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[7], (int32_t)v42, v40, v41);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22518/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v45 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v45 = 0;
  }
  if ( LODWORD(v20->max_length) <= 8 )
    goto LABEL_60;
  v20->m_Items[8] = (Il2CppObject *)v45;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[8], v45, v43, v44);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22482/*"onAnimEnd"*/;
  if ( StringLiteral_22482/*"onAnimEnd"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22482/*"onAnimEnd"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v48 = StringLiteral_22482/*"onAnimEnd"*/;
  }
  else
  {
    v48 = 0;
  }
  if ( LODWORD(v20->max_length) <= 9 )
    goto LABEL_60;
  v20->m_Items[9] = (Il2CppObject *)v48;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[9], v48, v46, v47);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22520/*"oncompletetarget"*/;
  if ( StringLiteral_22520/*"oncompletetarget"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22520/*"oncompletetarget"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v51 = StringLiteral_22520/*"oncompletetarget"*/;
  }
  else
  {
    v51 = 0;
  }
  if ( LODWORD(v20->max_length) <= 0xA )
    goto LABEL_60;
  v20->m_Items[10] = (Il2CppObject *)v51;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[10], v51, v49, v50);
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v54 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C6BB44(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_61:
      v56 = sub_1C6BC84(v21);
      sub_1C6BB30(v56, 0);
    }
  }
  if ( LODWORD(v20->max_length) <= 0xB )
LABEL_60:
    sub_1C6BC68(v21);
  v20->m_Items[11] = v54;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->m_Items[11], (int32_t)v54, v52, v53);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v55 = iTween__Hash(v20, 0);
  iTween__MoveTo_63604356(gameObject, v55, 0);
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
    sub_1C6B9AC(p_endCallback, 0, v2, v3);
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
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x9
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_String_o *easeTypeIn; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x19
  System_Collections_Hashtable_o *v45; // x0
  __int64 v46; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v48; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v50[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CB819E & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22520/*"oncompletetarget"*/);
    sub_1C6BA08(&StringLiteral_22829/*"position"*/);
    sub_1C6BA08(&StringLiteral_22482/*"onAnimEnd"*/);
    sub_1C6BA08(&StringLiteral_20995/*"isLocal"*/);
    sub_1C6BA08(&StringLiteral_18789/*"easeType"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB819E = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = sub_1C6BAB0(object___TypeInfo, 12);
  if ( !v4 )
    sub_1C6BC60(0, v5);
  v8 = (System_Object_array *)v4;
  v9 = (UnityEngine_GameObject_o *)StringLiteral_20995/*"isLocal"*/;
  if ( StringLiteral_20995/*"isLocal"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_20995/*"isLocal"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_20995/*"isLocal"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( !LODWORD(v8->max_length) )
    goto LABEL_57;
  v8->m_Items[0] = (Il2CppObject *)v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)v8->m_Items, v10, v6, v7);
  v50[0] = 1;
  v9 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v50);
  v13 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_57;
  v8->m_Items[1] = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[1], (int32_t)v13, v11, v12);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22829/*"position"*/;
  if ( StringLiteral_22829/*"position"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22829/*"position"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v16 = StringLiteral_22829/*"position"*/;
  }
  else
  {
    v16 = 0;
  }
  if ( LODWORD(v8->max_length) <= 2 )
    goto LABEL_57;
  v8->m_Items[2] = (Il2CppObject *)v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[2], v16, v14, v15);
  v17 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v48 = v17;
  v9 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v48);
  v20 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 3 )
    goto LABEL_57;
  v8->m_Items[3] = v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[3], (int32_t)v20, v18, v19);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_18789/*"easeType"*/;
  if ( StringLiteral_18789/*"easeType"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_18789/*"easeType"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v23 = StringLiteral_18789/*"easeType"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v8->max_length) <= 4 )
    goto LABEL_57;
  v8->m_Items[4] = (Il2CppObject *)v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[4], v23, v21, v22);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(this->fields.easeTypeIn, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 5 )
    goto LABEL_57;
  v8->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[5], (int32_t)easeTypeIn, v24, v25);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_24169/*"time"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v29 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v29 = 0;
  }
  if ( LODWORD(v8->max_length) <= 6 )
    goto LABEL_57;
  v8->m_Items[6] = (Il2CppObject *)v29;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[6], v29, v27, v28);
  slideInTime = this->fields.slideInTime;
  v9 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v32 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 7 )
    goto LABEL_57;
  v8->m_Items[7] = v32;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[7], (int32_t)v32, v30, v31);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22518/*"oncomplete"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v35 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v35 = 0;
  }
  if ( LODWORD(v8->max_length) <= 8 )
    goto LABEL_57;
  v8->m_Items[8] = (Il2CppObject *)v35;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[8], v35, v33, v34);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22482/*"onAnimEnd"*/;
  if ( StringLiteral_22482/*"onAnimEnd"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22482/*"onAnimEnd"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v38 = StringLiteral_22482/*"onAnimEnd"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v8->max_length) <= 9 )
    goto LABEL_57;
  v8->m_Items[9] = (Il2CppObject *)v38;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[9], v38, v36, v37);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22520/*"oncompletetarget"*/;
  if ( StringLiteral_22520/*"oncompletetarget"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22520/*"oncompletetarget"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v41 = StringLiteral_22520/*"oncompletetarget"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v8->max_length) <= 0xA )
    goto LABEL_57;
  v8->m_Items[10] = (Il2CppObject *)v41;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[10], v41, v39, v40);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v44 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C6BB44(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_58:
      v46 = sub_1C6BC84(v9);
      sub_1C6BB30(v46, 0);
    }
  }
  if ( LODWORD(v8->max_length) <= 0xB )
LABEL_57:
    sub_1C6BC68(v9);
  v8->m_Items[11] = v44;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[11], (int32_t)v44, v42, v43);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v45 = iTween__Hash(v8, 0);
  iTween__MoveTo_63604356(gameObject, v45, 0);
}