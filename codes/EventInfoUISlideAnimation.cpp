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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  *((float *)p_endCallback - 3) = x;
  *((float *)p_endCallback - 2) = y;
  *((float *)p_endCallback - 1) = z;
}


void __fastcall EventInfoUISlideAnimation__SetPotision(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BC3264(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
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
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  System_Object_array *v26; // x21
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x22
  const MethodInfo *v34; // x3
  __int64 v35; // x9
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x22
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  struct System_String_o *easeTypeOut; // x22
  const MethodInfo *v44; // x3
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x22
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x19
  System_Collections_Hashtable_o *v55; // x0
  __int64 v56; // x0
  __int64 v57; // [xsp+0h] [xbp-60h] BYREF
  float v58; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v60[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4B03FDD & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, callback);
    sub_1BC3008(&object___TypeInfo, v10);
    sub_1BC3008(&float_TypeInfo, v11);
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_22198/*"onMoveComplete"*/, v13);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v14);
    sub_1BC3008(&StringLiteral_22213/*"oncompletetarget"*/, v15);
    sub_1BC3008(&StringLiteral_22513/*"position"*/, v16);
    sub_1BC3008(&StringLiteral_20726/*"isLocal"*/, v17);
    sub_1BC3008(&StringLiteral_18577/*"easeType"*/, v18);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v19);
    sub_1BC3008(&iTween_TypeInfo, v20);
    byte_4B03FDD = 1;
  }
  this->fields.endCallback = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = sub_1BC30B0(object___TypeInfo, 12LL);
  if ( !v22 )
    sub_1BC3264(0LL, v23);
  v26 = (System_Object_array *)v22;
  v27 = (UnityEngine_GameObject_o *)StringLiteral_20726/*"isLocal"*/;
  if ( StringLiteral_20726/*"isLocal"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_20726/*"isLocal"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_20726/*"isLocal"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v26->max_length )
    goto LABEL_57;
  v26->m_Items[0] = (Il2CppObject *)v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)v26->m_Items, v28, v24, v25);
  v60[0] = 1;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v60, v29, v30, v31);
  v33 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_57;
  v26->m_Items[1] = v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[1], (int32_t)v33, v24, v32);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22513/*"position"*/;
  if ( StringLiteral_22513/*"position"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22513/*"position"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_22513/*"position"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_57;
  v26->m_Items[2] = (Il2CppObject *)v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[2], v28, v24, v34);
  v35 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v58 = this->fields.slideOutPosition.fields.z;
  v57 = v35;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v57, v36, v37, v38);
  v40 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_57;
  v26->m_Items[3] = v40;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[3], (int32_t)v40, v24, v39);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_18577/*"easeType"*/;
  if ( StringLiteral_18577/*"easeType"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_18577/*"easeType"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_18577/*"easeType"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 4 )
    goto LABEL_57;
  v26->m_Items[4] = (Il2CppObject *)v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[4], v28, v24, v41);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(this->fields.easeTypeOut, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
  }
  if ( v26->max_length <= 5 )
    goto LABEL_57;
  v26->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[5], (int32_t)easeTypeOut, v24, v42);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_23833/*"time"*/;
  if ( StringLiteral_23833/*"time"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_23833/*"time"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_23833/*"time"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 6 )
    goto LABEL_57;
  v26->m_Items[6] = (Il2CppObject *)v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[6], v28, v24, v44);
  slideOutTime = this->fields.slideOutTime;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v45, v46, v47);
  v49 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
  }
  if ( v26->max_length <= 7 )
    goto LABEL_57;
  v26->m_Items[7] = v49;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[7], (int32_t)v49, v24, v48);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22211/*"oncomplete"*/;
  if ( StringLiteral_22211/*"oncomplete"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22211/*"oncomplete"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_22211/*"oncomplete"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 8 )
    goto LABEL_57;
  v26->m_Items[8] = (Il2CppObject *)v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[8], v28, v24, v50);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22198/*"onMoveComplete"*/;
  if ( StringLiteral_22198/*"onMoveComplete"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22198/*"onMoveComplete"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_22198/*"onMoveComplete"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 9 )
    goto LABEL_57;
  v26->m_Items[9] = (Il2CppObject *)v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[9], v28, v24, v51);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22213/*"oncompletetarget"*/;
  if ( StringLiteral_22213/*"oncompletetarget"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22213/*"oncompletetarget"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_22213/*"oncompletetarget"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 0xA )
    goto LABEL_57;
  v26->m_Items[10] = (Il2CppObject *)v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[10], v28, v24, v52);
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v54 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1BC3144(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
    {
LABEL_58:
      v56 = sub_1BC3288(v27);
      sub_1BC3130(v56, 0LL);
    }
  }
  if ( v26->max_length <= 0xB )
LABEL_57:
    sub_1BC326C(v27, v28, v24);
  v26->m_Items[11] = v54;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->m_Items[11], (int32_t)v54, v24, v53);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v55 = iTween__Hash(v26, 0LL);
  iTween__MoveTo_61986212(gameObject, v55, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_43850740(
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
  __int64 v28; // x1
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  System_Object_array *v31; // x21
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x23
  const MethodInfo *v39; // x3
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x23
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x22
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x19
  System_Collections_Hashtable_o *v58; // x0
  __int64 v59; // x0
  int v60[4]; // [xsp+0h] [xbp-70h] BYREF
  int v61; // [xsp+38h] [xbp-38h] BYREF
  char v62[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4B03FDF & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, callback);
    sub_1BC3008(&object___TypeInfo, v11);
    sub_1BC3008(&float_TypeInfo, v12);
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v14);
    sub_1BC3008(&StringLiteral_22213/*"oncompletetarget"*/, v15);
    sub_1BC3008(&StringLiteral_22513/*"position"*/, v16);
    sub_1BC3008(&StringLiteral_22174/*"onAnimEnd"*/, v17);
    sub_1BC3008(&StringLiteral_20726/*"isLocal"*/, v18);
    sub_1BC3008(&StringLiteral_18577/*"easeType"*/, v19);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v20);
    sub_1BC3008(&iTween_TypeInfo, v21);
    byte_4B03FDF = 1;
  }
  this->fields.endCallback = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, isTypeIn, method);
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
  v27 = sub_1BC30B0(object___TypeInfo, 12LL);
  if ( !v27 )
    sub_1BC3264(0LL, v28);
  v31 = (System_Object_array *)v27;
  v32 = (UnityEngine_GameObject_o *)StringLiteral_20726/*"isLocal"*/;
  if ( StringLiteral_20726/*"isLocal"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_20726/*"isLocal"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_20726/*"isLocal"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !v31->max_length )
    goto LABEL_62;
  v31->m_Items[0] = (Il2CppObject *)v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)v31->m_Items, v33, (unsigned __int8)v29, v30);
  v62[0] = 1;
  v32 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v62, v34, v35, v36);
  v38 = (Il2CppObject *)v32;
  if ( v32 )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
  }
  if ( v31->max_length <= 1 )
    goto LABEL_62;
  v31->m_Items[1] = v38;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[1], (int32_t)v38, (unsigned __int8)v29, v37);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_22513/*"position"*/;
  if ( StringLiteral_22513/*"position"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22513/*"position"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_22513/*"position"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 2 )
    goto LABEL_62;
  v31->m_Items[2] = (Il2CppObject *)v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[2], v33, (unsigned __int8)v29, v39);
  *(float *)v60 = x;
  *(float *)&v60[1] = y;
  *(float *)&v60[2] = z;
  v32 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v60, v40, v41, v42);
  v44 = (Il2CppObject *)v32;
  if ( v32 )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
  }
  if ( v31->max_length <= 3 )
    goto LABEL_62;
  v31->m_Items[3] = v44;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[3], (int32_t)v44, (unsigned __int8)v29, v43);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_18577/*"easeType"*/;
  if ( StringLiteral_18577/*"easeType"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_18577/*"easeType"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_18577/*"easeType"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 4 )
    goto LABEL_62;
  v31->m_Items[4] = (Il2CppObject *)v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[4], v33, (unsigned __int8)v29, v45);
  if ( v24 )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(v24, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
  }
  if ( v31->max_length <= 5 )
    goto LABEL_62;
  v31->m_Items[5] = v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[5], (int32_t)v24, (unsigned __int8)v29, v46);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_23833/*"time"*/;
  if ( StringLiteral_23833/*"time"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_23833/*"time"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_23833/*"time"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 6 )
    goto LABEL_62;
  v31->m_Items[6] = (Il2CppObject *)v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[6], v33, (unsigned __int8)v29, v47);
  v61 = v25;
  v32 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v61, v48, v49, v50);
  v52 = (Il2CppObject *)v32;
  if ( v32 )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
  }
  if ( v31->max_length <= 7 )
    goto LABEL_62;
  v31->m_Items[7] = v52;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[7], (int32_t)v52, (unsigned __int8)v29, v51);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_22211/*"oncomplete"*/;
  if ( StringLiteral_22211/*"oncomplete"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22211/*"oncomplete"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_22211/*"oncomplete"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 8 )
    goto LABEL_62;
  v31->m_Items[8] = (Il2CppObject *)v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[8], v33, (unsigned __int8)v29, v53);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_22174/*"onAnimEnd"*/;
  if ( StringLiteral_22174/*"onAnimEnd"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22174/*"onAnimEnd"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_22174/*"onAnimEnd"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 9 )
    goto LABEL_62;
  v31->m_Items[9] = (Il2CppObject *)v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[9], v33, (unsigned __int8)v29, v54);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_22213/*"oncompletetarget"*/;
  if ( StringLiteral_22213/*"oncompletetarget"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22213/*"oncompletetarget"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_22213/*"oncompletetarget"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 0xA )
    goto LABEL_62;
  v31->m_Items[10] = (Il2CppObject *)v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[10], v33, (unsigned __int8)v29, v55);
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v57 = (Il2CppObject *)v32;
  if ( v32 )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1BC3144(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
    {
LABEL_63:
      v59 = sub_1BC3288(v32);
      sub_1BC3130(v59, 0LL);
    }
  }
  if ( v31->max_length <= 0xB )
LABEL_62:
    sub_1BC326C(v32, v33, v29);
  v31->m_Items[11] = v57;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->m_Items[11], (int32_t)v57, (unsigned __int8)v29, v56);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v58 = iTween__Hash(v31, 0LL);
  iTween__MoveTo_61986212(gameObject, v58, 0LL);
}


void __fastcall EventInfoUISlideAnimation__onAnimEnd(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
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
    p_endCallback->klass = 0LL;
    sub_1BC2FAC(p_endCallback, 0, v2, v3);
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
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  System_Object_array *v19; // x21
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x22
  const MethodInfo *v27; // x3
  __int64 v28; // x9
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x22
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  struct System_String_o *easeTypeIn; // x22
  const MethodInfo *v37; // x3
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x22
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x19
  System_Collections_Hashtable_o *v48; // x0
  __int64 v49; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v51; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v53[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B03FDE & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, method);
    sub_1BC3008(&object___TypeInfo, v3);
    sub_1BC3008(&float_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v6);
    sub_1BC3008(&StringLiteral_22213/*"oncompletetarget"*/, v7);
    sub_1BC3008(&StringLiteral_22513/*"position"*/, v8);
    sub_1BC3008(&StringLiteral_22174/*"onAnimEnd"*/, v9);
    sub_1BC3008(&StringLiteral_20726/*"isLocal"*/, v10);
    sub_1BC3008(&StringLiteral_18577/*"easeType"*/, v11);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v12);
    sub_1BC3008(&iTween_TypeInfo, v13);
    byte_4B03FDE = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = sub_1BC30B0(object___TypeInfo, 12LL);
  if ( !v15 )
    sub_1BC3264(0LL, v16);
  v19 = (System_Object_array *)v15;
  v20 = (UnityEngine_GameObject_o *)StringLiteral_20726/*"isLocal"*/;
  if ( StringLiteral_20726/*"isLocal"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_20726/*"isLocal"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_20726/*"isLocal"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v19->max_length )
    goto LABEL_57;
  v19->m_Items[0] = (Il2CppObject *)v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)v19->m_Items, v21, v17, v18);
  v53[0] = 1;
  v20 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v53, v22, v23, v24);
  v26 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_57;
  v19->m_Items[1] = v26;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v26, v17, v25);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_22513/*"position"*/;
  if ( StringLiteral_22513/*"position"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22513/*"position"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_22513/*"position"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_57;
  v19->m_Items[2] = (Il2CppObject *)v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[2], v21, v17, v27);
  v28 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v51 = v28;
  v20 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v51, v29, v30, v31);
  v33 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_57;
  v19->m_Items[3] = v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[3], (int32_t)v33, v17, v32);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_18577/*"easeType"*/;
  if ( StringLiteral_18577/*"easeType"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_18577/*"easeType"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_18577/*"easeType"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 4 )
    goto LABEL_57;
  v19->m_Items[4] = (Il2CppObject *)v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[4], v21, v17, v34);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(this->fields.easeTypeIn, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
  }
  if ( v19->max_length <= 5 )
    goto LABEL_57;
  v19->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[5], (int32_t)easeTypeIn, v17, v35);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_23833/*"time"*/;
  if ( StringLiteral_23833/*"time"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_23833/*"time"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_23833/*"time"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 6 )
    goto LABEL_57;
  v19->m_Items[6] = (Il2CppObject *)v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[6], v21, v17, v37);
  slideInTime = this->fields.slideInTime;
  v20 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v38, v39, v40);
  v42 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
  }
  if ( v19->max_length <= 7 )
    goto LABEL_57;
  v19->m_Items[7] = v42;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[7], (int32_t)v42, v17, v41);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_22211/*"oncomplete"*/;
  if ( StringLiteral_22211/*"oncomplete"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22211/*"oncomplete"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_22211/*"oncomplete"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 8 )
    goto LABEL_57;
  v19->m_Items[8] = (Il2CppObject *)v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[8], v21, v17, v43);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_22174/*"onAnimEnd"*/;
  if ( StringLiteral_22174/*"onAnimEnd"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22174/*"onAnimEnd"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_22174/*"onAnimEnd"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 9 )
    goto LABEL_57;
  v19->m_Items[9] = (Il2CppObject *)v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[9], v21, v17, v44);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_22213/*"oncompletetarget"*/;
  if ( StringLiteral_22213/*"oncompletetarget"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(StringLiteral_22213/*"oncompletetarget"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_22213/*"oncompletetarget"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 0xA )
    goto LABEL_57;
  v19->m_Items[10] = (Il2CppObject *)v21;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[10], v21, v17, v45);
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v47 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1BC3144(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
    {
LABEL_58:
      v49 = sub_1BC3288(v20);
      sub_1BC3130(v49, 0LL);
    }
  }
  if ( v19->max_length <= 0xB )
LABEL_57:
    sub_1BC326C(v20, v21, v17);
  v19->m_Items[11] = v47;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[11], (int32_t)v47, v17, v46);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v48 = iTween__Hash(v19, 0LL);
  iTween__MoveTo_61986212(gameObject, v48, 0LL);
}