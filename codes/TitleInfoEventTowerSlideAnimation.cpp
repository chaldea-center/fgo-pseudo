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
    sub_1C6BC60(0, v4);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4CB4C5A & 1) == 0 )
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
    byte_4CB4C5A = 1;
  }
  this->fields.endCallback = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C6BAB0(object___TypeInfo, 12)) == 0) )
  {
    sub_1C6BC60(transform, v11);
  }
  v15 = (System_Object_array *)transform;
  v16 = (UnityEngine_GameObject_o *)StringLiteral_20995/*"isLocal"*/;
  if ( StringLiteral_20995/*"isLocal"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_20995/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_20995/*"isLocal"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_58;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)v15->m_Items, v17, v13, v14);
  v57[0] = 1;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v57);
  v20 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_58;
  v15->m_Items[1] = v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v20, v18, v19);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22829/*"position"*/;
  if ( StringLiteral_22829/*"position"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22829/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v23 = StringLiteral_22829/*"position"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_58;
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
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_58;
  v15->m_Items[3] = v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v27, v25, v26);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_18789/*"easeType"*/;
  if ( StringLiteral_18789/*"easeType"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_18789/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v30 = StringLiteral_18789/*"easeType"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( LODWORD(v15->max_length) <= 4 )
    goto LABEL_58;
  v15->m_Items[4] = (Il2CppObject *)v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[4], v30, v28, v29);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(this->fields.easeTypeOut, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 5 )
    goto LABEL_58;
  v15->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[5], (int32_t)easeTypeOut, v31, v32);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_24169/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v36 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v36 = 0;
  }
  if ( LODWORD(v15->max_length) <= 6 )
    goto LABEL_58;
  v15->m_Items[6] = (Il2CppObject *)v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[6], v36, v34, v35);
  slideOutTime = this->fields.slideOutTime;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime);
  v39 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 7 )
    goto LABEL_58;
  v15->m_Items[7] = v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[7], (int32_t)v39, v37, v38);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22518/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v42 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v42 = 0;
  }
  if ( LODWORD(v15->max_length) <= 8 )
    goto LABEL_58;
  v15->m_Items[8] = (Il2CppObject *)v42;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[8], v42, v40, v41);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22505/*"onMoveComplete"*/;
  if ( StringLiteral_22505/*"onMoveComplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22505/*"onMoveComplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v45 = StringLiteral_22505/*"onMoveComplete"*/;
  }
  else
  {
    v45 = 0;
  }
  if ( LODWORD(v15->max_length) <= 9 )
    goto LABEL_58;
  v15->m_Items[9] = (Il2CppObject *)v45;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[9], v45, v43, v44);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22520/*"oncompletetarget"*/;
  if ( StringLiteral_22520/*"oncompletetarget"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22520/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v48 = StringLiteral_22520/*"oncompletetarget"*/;
  }
  else
  {
    v48 = 0;
  }
  if ( LODWORD(v15->max_length) <= 0xA )
    goto LABEL_58;
  v15->m_Items[10] = (Il2CppObject *)v48;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[10], v48, v46, v47);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v51 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C6BB44(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_59:
      v53 = sub_1C6BC84(v16);
      sub_1C6BB30(v53, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= 0xB )
LABEL_58:
    sub_1C6BC68(v16);
  v15->m_Items[11] = v51;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->m_Items[11], (int32_t)v51, v49, v50);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v52 = iTween__Hash(v15, 0);
  iTween__MoveTo_63604356(gameObject, v52, 0);
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
    sub_1C6B9AC(p_endCallback, 0, v2, v3);
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
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  __int64 v20; // x9
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_String_o *easeTypeIn; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x19
  System_Collections_Hashtable_o *v48; // x0
  __int64 v49; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v51; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v53[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CB4C5B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22520/*"oncompletetarget"*/);
    sub_1C6BA08(&StringLiteral_22829/*"position"*/);
    sub_1C6BA08(&StringLiteral_22482/*"onAnimEnd"*/);
    sub_1C6BA08(&StringLiteral_20995/*"isLocal"*/);
    sub_1C6BA08(&StringLiteral_18789/*"easeType"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB4C5B = 1;
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
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v6, 0, 0, v7),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C6BAB0(object___TypeInfo, 12)) == 0) )
  {
LABEL_63:
    sub_1C6BC60(transform, v4);
  }
  v11 = (System_Object_array *)transform;
  v12 = (UnityEngine_GameObject_o *)StringLiteral_20995/*"isLocal"*/;
  if ( StringLiteral_20995/*"isLocal"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_20995/*"isLocal"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_20995/*"isLocal"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( !LODWORD(v11->max_length) )
    goto LABEL_61;
  v11->m_Items[0] = (Il2CppObject *)v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)v11->m_Items, v13, v9, v10);
  v53[0] = 1;
  v12 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v53);
  v16 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 1 )
    goto LABEL_61;
  v11->m_Items[1] = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[1], (int32_t)v16, v14, v15);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22829/*"position"*/;
  if ( StringLiteral_22829/*"position"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22829/*"position"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v19 = StringLiteral_22829/*"position"*/;
  }
  else
  {
    v19 = 0;
  }
  if ( LODWORD(v11->max_length) <= 2 )
    goto LABEL_61;
  v11->m_Items[2] = (Il2CppObject *)v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[2], v19, v17, v18);
  v20 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v51 = v20;
  v12 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v51);
  v23 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 3 )
    goto LABEL_61;
  v11->m_Items[3] = v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[3], (int32_t)v23, v21, v22);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_18789/*"easeType"*/;
  if ( StringLiteral_18789/*"easeType"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_18789/*"easeType"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v26 = StringLiteral_18789/*"easeType"*/;
  }
  else
  {
    v26 = 0;
  }
  if ( LODWORD(v11->max_length) <= 4 )
    goto LABEL_61;
  v11->m_Items[4] = (Il2CppObject *)v26;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[4], v26, v24, v25);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(this->fields.easeTypeIn, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 5 )
    goto LABEL_61;
  v11->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[5], (int32_t)easeTypeIn, v27, v28);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_24169/*"time"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v32 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v32 = 0;
  }
  if ( LODWORD(v11->max_length) <= 6 )
    goto LABEL_61;
  v11->m_Items[6] = (Il2CppObject *)v32;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[6], v32, v30, v31);
  slideInTime = this->fields.slideInTime;
  v12 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime);
  v35 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 7 )
    goto LABEL_61;
  v11->m_Items[7] = v35;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[7], (int32_t)v35, v33, v34);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22518/*"oncomplete"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v38 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v11->max_length) <= 8 )
    goto LABEL_61;
  v11->m_Items[8] = (Il2CppObject *)v38;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[8], v38, v36, v37);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22482/*"onAnimEnd"*/;
  if ( StringLiteral_22482/*"onAnimEnd"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22482/*"onAnimEnd"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v41 = StringLiteral_22482/*"onAnimEnd"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v11->max_length) <= 9 )
    goto LABEL_61;
  v11->m_Items[9] = (Il2CppObject *)v41;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[9], v41, v39, v40);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22520/*"oncompletetarget"*/;
  if ( StringLiteral_22520/*"oncompletetarget"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(StringLiteral_22520/*"oncompletetarget"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v44 = StringLiteral_22520/*"oncompletetarget"*/;
  }
  else
  {
    v44 = 0;
  }
  if ( LODWORD(v11->max_length) <= 0xA )
    goto LABEL_61;
  v11->m_Items[10] = (Il2CppObject *)v44;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[10], v44, v42, v43);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v47 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C6BB44(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_62:
      v49 = sub_1C6BC84(v12);
      sub_1C6BB30(v49, 0);
    }
  }
  if ( LODWORD(v11->max_length) <= 0xB )
LABEL_61:
    sub_1C6BC68(v12);
  v11->m_Items[11] = v47;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->m_Items[11], (int32_t)v47, v45, v46);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v48 = iTween__Hash(v11, 0);
  iTween__MoveTo_63604356(gameObject, v48, 0);
}