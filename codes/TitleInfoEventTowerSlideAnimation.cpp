void TitleInfoEventTowerSlideAnimation___ctor(TitleInfoEventTowerSlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoEventTowerSlideAnimation__SetPotision(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C3E7C0(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0);
}


void TitleInfoEventTowerSlideAnimation__StartSlideAnim(
        TitleInfoEventTowerSlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x20
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4C556FD & 1) == 0 )
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
    byte_4C556FD = 1;
  }
  this->fields.endCallback = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C3E60C(object___TypeInfo, 12)) == 0) )
  {
    sub_1C3E7C0(transform, v11);
  }
  v15 = (System_Object_array *)transform;
  v16 = StringLiteral_20948/*"isLocal"*/;
  if ( StringLiteral_20948/*"isLocal"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_20948/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_20948/*"isLocal"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_58;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)v15->m_Items, v17, v13, v14);
  v69[0] = 1;
  v16 = j_il2cpp_value_box_0(bool_TypeInfo, v69, v18, v19, v20, v21, v22, v23);
  v26 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_58;
  v15->m_Items[1] = v26;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v26, v24, v25);
  v16 = StringLiteral_22759/*"position"*/;
  if ( StringLiteral_22759/*"position"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_22759/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22759/*"position"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_58;
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
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_58;
  v15->m_Items[3] = v38;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v38, v36, v37);
  v16 = StringLiteral_18771/*"easeType"*/;
  if ( StringLiteral_18771/*"easeType"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_18771/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_18771/*"easeType"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 4 )
    goto LABEL_58;
  v15->m_Items[4] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[4], v17, v39, v40);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v16 = sub_1C3E6A0(this->fields.easeTypeOut, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 5 )
    goto LABEL_58;
  v15->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[5], (int32_t)easeTypeOut, v41, v42);
  v16 = StringLiteral_24091/*"time"*/;
  if ( StringLiteral_24091/*"time"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_24091/*"time"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 6 )
    goto LABEL_58;
  v15->m_Items[6] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[6], v17, v44, v45);
  slideOutTime = this->fields.slideOutTime;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v46, v47, v48, v49, v50, v51);
  v54 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 7 )
    goto LABEL_58;
  v15->m_Items[7] = v54;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[7], (int32_t)v54, v52, v53);
  v16 = StringLiteral_22448/*"oncomplete"*/;
  if ( StringLiteral_22448/*"oncomplete"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22448/*"oncomplete"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 8 )
    goto LABEL_58;
  v15->m_Items[8] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[8], v17, v55, v56);
  v16 = StringLiteral_22435/*"onMoveComplete"*/;
  if ( StringLiteral_22435/*"onMoveComplete"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_22435/*"onMoveComplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22435/*"onMoveComplete"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 9 )
    goto LABEL_58;
  v15->m_Items[9] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[9], v17, v57, v58);
  v16 = StringLiteral_22450/*"oncompletetarget"*/;
  if ( StringLiteral_22450/*"oncompletetarget"*/ )
  {
    v16 = sub_1C3E6A0(StringLiteral_22450/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22450/*"oncompletetarget"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 0xA )
    goto LABEL_58;
  v15->m_Items[10] = (Il2CppObject *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[10], v17, v59, v60);
  v16 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v63 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_1C3E6A0(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_59:
      v65 = sub_1C3E7E4(v16);
      sub_1C3E68C(v65, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= 0xB )
LABEL_58:
    sub_1C3E7C8(v16, v17);
  v15->m_Items[11] = v63;
  sub_1C3E508((CGThumbnailListItem_o *)&v15->m_Items[11], (int32_t)v63, v61, v62);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v64 = iTween__Hash(v15, 0);
  iTween__MoveTo_63274032(gameObject, v64, 0);
}


void TitleInfoEventTowerSlideAnimation__onAnimEnd(TitleInfoEventTowerSlideAnimation_o *this, const MethodInfo *method)
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


void TitleInfoEventTowerSlideAnimation__onMoveComplete(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Object_array *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x9
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_String_o *easeTypeIn; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x19
  System_Collections_Hashtable_o *v60; // x0
  __int64 v61; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v63; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v65[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C556FE & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22450/*"oncompletetarget"*/);
    sub_1C3E564(&StringLiteral_22759/*"position"*/);
    sub_1C3E564(&StringLiteral_22411/*"onAnimEnd"*/);
    sub_1C3E564(&StringLiteral_20948/*"isLocal"*/);
    sub_1C3E564(&StringLiteral_18771/*"easeType"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C556FE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_63;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform
    || (transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)transform,
                                                 0)) == 0
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v6, 0, 0, v7),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C3E60C(object___TypeInfo, 12)) == 0) )
  {
LABEL_63:
    sub_1C3E7C0(transform, v4);
  }
  v11 = (System_Object_array *)transform;
  v12 = StringLiteral_20948/*"isLocal"*/;
  if ( StringLiteral_20948/*"isLocal"*/ )
  {
    v12 = sub_1C3E6A0(StringLiteral_20948/*"isLocal"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_20948/*"isLocal"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( !LODWORD(v11->max_length) )
    goto LABEL_61;
  v11->m_Items[0] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)v11->m_Items, v13, v9, v10);
  v65[0] = 1;
  v12 = j_il2cpp_value_box_0(bool_TypeInfo, v65, v14, v15, v16, v17, v18, v19);
  v22 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C3E6A0(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 1 )
    goto LABEL_61;
  v11->m_Items[1] = v22;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[1], (int32_t)v22, v20, v21);
  v12 = StringLiteral_22759/*"position"*/;
  if ( StringLiteral_22759/*"position"*/ )
  {
    v12 = sub_1C3E6A0(StringLiteral_22759/*"position"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22759/*"position"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 2 )
    goto LABEL_61;
  v11->m_Items[2] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[2], v13, v23, v24);
  v25 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v63 = v25;
  v12 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v63, v26, v27, v28, v29, v30, v31);
  v34 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C3E6A0(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 3 )
    goto LABEL_61;
  v11->m_Items[3] = v34;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[3], (int32_t)v34, v32, v33);
  v12 = StringLiteral_18771/*"easeType"*/;
  if ( StringLiteral_18771/*"easeType"*/ )
  {
    v12 = sub_1C3E6A0(StringLiteral_18771/*"easeType"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_18771/*"easeType"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 4 )
    goto LABEL_61;
  v11->m_Items[4] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[4], v13, v35, v36);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v12 = sub_1C3E6A0(this->fields.easeTypeIn, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 5 )
    goto LABEL_61;
  v11->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[5], (int32_t)easeTypeIn, v37, v38);
  v12 = StringLiteral_24091/*"time"*/;
  if ( StringLiteral_24091/*"time"*/ )
  {
    v12 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_24091/*"time"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 6 )
    goto LABEL_61;
  v11->m_Items[6] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[6], v13, v40, v41);
  slideInTime = this->fields.slideInTime;
  v12 = j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v42, v43, v44, v45, v46, v47);
  v50 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C3E6A0(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 7 )
    goto LABEL_61;
  v11->m_Items[7] = v50;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[7], (int32_t)v50, v48, v49);
  v12 = StringLiteral_22448/*"oncomplete"*/;
  if ( StringLiteral_22448/*"oncomplete"*/ )
  {
    v12 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22448/*"oncomplete"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 8 )
    goto LABEL_61;
  v11->m_Items[8] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[8], v13, v51, v52);
  v12 = StringLiteral_22411/*"onAnimEnd"*/;
  if ( StringLiteral_22411/*"onAnimEnd"*/ )
  {
    v12 = sub_1C3E6A0(StringLiteral_22411/*"onAnimEnd"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22411/*"onAnimEnd"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 9 )
    goto LABEL_61;
  v11->m_Items[9] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[9], v13, v53, v54);
  v12 = StringLiteral_22450/*"oncompletetarget"*/;
  if ( StringLiteral_22450/*"oncompletetarget"*/ )
  {
    v12 = sub_1C3E6A0(StringLiteral_22450/*"oncompletetarget"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22450/*"oncompletetarget"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 0xA )
    goto LABEL_61;
  v11->m_Items[10] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[10], v13, v55, v56);
  v12 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v59 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1C3E6A0(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_62:
      v61 = sub_1C3E7E4(v12);
      sub_1C3E68C(v61, 0);
    }
  }
  if ( LODWORD(v11->max_length) <= 0xB )
LABEL_61:
    sub_1C3E7C8(v12, v13);
  v11->m_Items[11] = v59;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->m_Items[11], (int32_t)v59, v57, v58);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v60 = iTween__Hash(v11, 0);
  iTween__MoveTo_63274032(gameObject, v60, 0);
}