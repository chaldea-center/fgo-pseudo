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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
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
    sub_1C2D6EC(0, v4);
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
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  System_Object_array *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x22
  const MethodInfo *v23; // x3
  __int64 v24; // x9
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x22
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  struct System_String_o *easeTypeOut; // x22
  const MethodInfo *v33; // x3
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x22
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x19
  System_Collections_Hashtable_o *v44; // x0
  __int64 v45; // x0
  __int64 v46; // [xsp+0h] [xbp-60h] BYREF
  float v47; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v49[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4C29169 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    sub_1C2D490(&StringLiteral_22397/*"onMoveComplete"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_18741/*"easeType"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C29169 = 1;
  }
  this->fields.endCallback = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = sub_1C2D538(object___TypeInfo, 12);
  if ( !v11 )
    sub_1C2D6EC(0, v12);
  v15 = (System_Object_array *)v11;
  v16 = (UnityEngine_GameObject_o *)StringLiteral_20915/*"isLocal"*/;
  if ( StringLiteral_20915/*"isLocal"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_20915/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_20915/*"isLocal"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_57;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)v15->m_Items, v17, v13, v14);
  v49[0] = 1;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v49, v18, v19, v20);
  v22 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_57;
  v15->m_Items[1] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v22, v13, v21);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22719/*"position"*/;
  if ( StringLiteral_22719/*"position"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22719/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22719/*"position"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_57;
  v15->m_Items[2] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[2], v17, v13, v23);
  v24 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v47 = this->fields.slideOutPosition.fields.z;
  v46 = v24;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v46, v25, v26, v27);
  v29 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_57;
  v15->m_Items[3] = v29;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v29, v13, v28);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_18741/*"easeType"*/;
  if ( StringLiteral_18741/*"easeType"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_18741/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_18741/*"easeType"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 4 )
    goto LABEL_57;
  v15->m_Items[4] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[4], v17, v13, v30);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(this->fields.easeTypeOut, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 5 )
    goto LABEL_57;
  v15->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[5], (int32_t)easeTypeOut, v13, v31);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 6 )
    goto LABEL_57;
  v15->m_Items[6] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[6], v17, v13, v33);
  slideOutTime = this->fields.slideOutTime;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v34, v35, v36);
  v38 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( LODWORD(v15->max_length) <= 7 )
    goto LABEL_57;
  v15->m_Items[7] = v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[7], (int32_t)v38, v13, v37);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 8 )
    goto LABEL_57;
  v15->m_Items[8] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[8], v17, v13, v39);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22397/*"onMoveComplete"*/;
  if ( StringLiteral_22397/*"onMoveComplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22397/*"onMoveComplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22397/*"onMoveComplete"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 9 )
    goto LABEL_57;
  v15->m_Items[9] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[9], v17, v13, v40);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22412/*"oncompletetarget"*/;
  if ( StringLiteral_22412/*"oncompletetarget"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22412/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22412/*"oncompletetarget"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 0xA )
    goto LABEL_57;
  v15->m_Items[10] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[10], v17, v13, v41);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v43 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_58:
      v45 = sub_1C2D710(v16);
      sub_1C2D5B8(v45, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= 0xB )
LABEL_57:
    sub_1C2D6F4(v16, v17, v13);
  v15->m_Items[11] = v43;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[11], (int32_t)v43, v13, v42);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v44 = iTween__Hash(v15, 0);
  iTween__MoveTo_63095428(gameObject, v44, 0);
}


void EventInfoUISlideAnimation__StartSlideAnim_44434772(
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
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  System_Object_array *v20; // x21
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x23
  const MethodInfo *v28; // x3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x23
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x22
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x19
  System_Collections_Hashtable_o *v47; // x0
  __int64 v48; // x0
  _DWORD v49[4]; // [xsp+0h] [xbp-70h] BYREF
  int v50; // [xsp+38h] [xbp-38h] BYREF
  char v51[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4C2916B & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    sub_1C2D490(&StringLiteral_22373/*"onAnimEnd"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_18741/*"easeType"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2916B = 1;
  }
  this->fields.endCallback = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, isTypeIn, method);
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
  v16 = sub_1C2D538(object___TypeInfo, 12);
  if ( !v16 )
    sub_1C2D6EC(0, v17);
  v20 = (System_Object_array *)v16;
  v21 = (UnityEngine_GameObject_o *)StringLiteral_20915/*"isLocal"*/;
  if ( StringLiteral_20915/*"isLocal"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_20915/*"isLocal"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_20915/*"isLocal"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( !LODWORD(v20->max_length) )
    goto LABEL_60;
  v20->m_Items[0] = (Il2CppObject *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)v20->m_Items, v22, (unsigned __int8)v18, v19);
  v51[0] = 1;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v51, v23, v24, v25);
  v27 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 1 )
    goto LABEL_60;
  v20->m_Items[1] = v27;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)v27, (unsigned __int8)v18, v26);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22719/*"position"*/;
  if ( StringLiteral_22719/*"position"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22719/*"position"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_22719/*"position"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 2 )
    goto LABEL_60;
  v20->m_Items[2] = (Il2CppObject *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[2], v22, (unsigned __int8)v18, v28);
  *(float *)v49 = x;
  *(float *)&v49[1] = y;
  *(float *)&v49[2] = z;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v49, v29, v30, v31);
  v33 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 3 )
    goto LABEL_60;
  v20->m_Items[3] = v33;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)v33, (unsigned __int8)v18, v32);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_18741/*"easeType"*/;
  if ( StringLiteral_18741/*"easeType"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_18741/*"easeType"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_18741/*"easeType"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 4 )
    goto LABEL_60;
  v20->m_Items[4] = (Il2CppObject *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[4], v22, (unsigned __int8)v18, v34);
  if ( v13 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v13, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 5 )
    goto LABEL_60;
  v20->m_Items[5] = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[5], (int32_t)v13, (unsigned __int8)v18, v35);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 6 )
    goto LABEL_60;
  v20->m_Items[6] = (Il2CppObject *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[6], v22, (unsigned __int8)v18, v36);
  v50 = v14;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v50, v37, v38, v39);
  v41 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( LODWORD(v20->max_length) <= 7 )
    goto LABEL_60;
  v20->m_Items[7] = v41;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[7], (int32_t)v41, (unsigned __int8)v18, v40);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 8 )
    goto LABEL_60;
  v20->m_Items[8] = (Il2CppObject *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[8], v22, (unsigned __int8)v18, v42);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22373/*"onAnimEnd"*/;
  if ( StringLiteral_22373/*"onAnimEnd"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22373/*"onAnimEnd"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_22373/*"onAnimEnd"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 9 )
    goto LABEL_60;
  v20->m_Items[9] = (Il2CppObject *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[9], v22, (unsigned __int8)v18, v43);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22412/*"oncompletetarget"*/;
  if ( StringLiteral_22412/*"oncompletetarget"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22412/*"oncompletetarget"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_61;
    v22 = StringLiteral_22412/*"oncompletetarget"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v20->max_length) <= 0xA )
    goto LABEL_60;
  v20->m_Items[10] = (Il2CppObject *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[10], v22, (unsigned __int8)v18, v44);
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v46 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_61:
      v48 = sub_1C2D710(v21);
      sub_1C2D5B8(v48, 0);
    }
  }
  if ( LODWORD(v20->max_length) <= 0xB )
LABEL_60:
    sub_1C2D6F4(v21, v22, v18);
  v20->m_Items[11] = v46;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->m_Items[11], (int32_t)v46, (unsigned __int8)v18, v45);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v47 = iTween__Hash(v20, 0);
  iTween__MoveTo_63095428(gameObject, v47, 0);
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
    sub_1C2D434(p_endCallback, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  System_Object_array *v8; // x21
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x22
  const MethodInfo *v16; // x3
  __int64 v17; // x9
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x22
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  struct System_String_o *easeTypeIn; // x22
  const MethodInfo *v26; // x3
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x22
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x19
  System_Collections_Hashtable_o *v37; // x0
  __int64 v38; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v40; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v42[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C2916A & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    sub_1C2D490(&StringLiteral_22373/*"onAnimEnd"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_18741/*"easeType"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2916A = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = sub_1C2D538(object___TypeInfo, 12);
  if ( !v4 )
    sub_1C2D6EC(0, v5);
  v8 = (System_Object_array *)v4;
  v9 = (UnityEngine_GameObject_o *)StringLiteral_20915/*"isLocal"*/;
  if ( StringLiteral_20915/*"isLocal"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_20915/*"isLocal"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_20915/*"isLocal"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( !LODWORD(v8->max_length) )
    goto LABEL_57;
  v8->m_Items[0] = (Il2CppObject *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)v8->m_Items, v10, v6, v7);
  v42[0] = 1;
  v9 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v42, v11, v12, v13);
  v15 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_57;
  v8->m_Items[1] = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[1], (int32_t)v15, v6, v14);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22719/*"position"*/;
  if ( StringLiteral_22719/*"position"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22719/*"position"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22719/*"position"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 2 )
    goto LABEL_57;
  v8->m_Items[2] = (Il2CppObject *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[2], v10, v6, v16);
  v17 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v40 = v17;
  v9 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v40, v18, v19, v20);
  v22 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 3 )
    goto LABEL_57;
  v8->m_Items[3] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[3], (int32_t)v22, v6, v21);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_18741/*"easeType"*/;
  if ( StringLiteral_18741/*"easeType"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_18741/*"easeType"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_18741/*"easeType"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 4 )
    goto LABEL_57;
  v8->m_Items[4] = (Il2CppObject *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[4], v10, v6, v23);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(this->fields.easeTypeIn, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 5 )
    goto LABEL_57;
  v8->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[5], (int32_t)easeTypeIn, v6, v24);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 6 )
    goto LABEL_57;
  v8->m_Items[6] = (Il2CppObject *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[6], v10, v6, v26);
  slideInTime = this->fields.slideInTime;
  v9 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v27, v28, v29);
  v31 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( LODWORD(v8->max_length) <= 7 )
    goto LABEL_57;
  v8->m_Items[7] = v31;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[7], (int32_t)v31, v6, v30);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 8 )
    goto LABEL_57;
  v8->m_Items[8] = (Il2CppObject *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[8], v10, v6, v32);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22373/*"onAnimEnd"*/;
  if ( StringLiteral_22373/*"onAnimEnd"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22373/*"onAnimEnd"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22373/*"onAnimEnd"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 9 )
    goto LABEL_57;
  v8->m_Items[9] = (Il2CppObject *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[9], v10, v6, v33);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22412/*"oncompletetarget"*/;
  if ( StringLiteral_22412/*"oncompletetarget"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22412/*"oncompletetarget"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22412/*"oncompletetarget"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( LODWORD(v8->max_length) <= 0xA )
    goto LABEL_57;
  v8->m_Items[10] = (Il2CppObject *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[10], v10, v6, v34);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v36 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_58:
      v38 = sub_1C2D710(v9);
      sub_1C2D5B8(v38, 0);
    }
  }
  if ( LODWORD(v8->max_length) <= 0xB )
LABEL_57:
    sub_1C2D6F4(v9, v10, v6);
  v8->m_Items[11] = v36;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->m_Items[11], (int32_t)v36, v6, v35);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v37 = iTween__Hash(v8, 0);
  iTween__MoveTo_63095428(gameObject, v37, 0);
}