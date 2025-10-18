void TitleInfoEventTowerSlideAnimation___ctor(TitleInfoEventTowerSlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoEventTowerSlideAnimation__SetPotision(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
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
  UnityEngine_GameObject_o *gameObject; // x20
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4C4195B & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    sub_1C37058(&StringLiteral_22417/*"onMoveComplete"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22432/*"oncompletetarget"*/);
    sub_1C37058(&StringLiteral_22740/*"position"*/);
    sub_1C37058(&StringLiteral_20930/*"isLocal"*/);
    sub_1C37058(&StringLiteral_18753/*"easeType"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C4195B = 1;
  }
  this->fields.endCallback = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C37100(object___TypeInfo, 12)) == 0) )
  {
    sub_1C372B4(transform);
  }
  v14 = (System_Object_array *)transform;
  v15 = StringLiteral_20930/*"isLocal"*/;
  if ( StringLiteral_20930/*"isLocal"*/ )
  {
    v15 = sub_1C37194(StringLiteral_20930/*"isLocal"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
    v16 = StringLiteral_20930/*"isLocal"*/;
  }
  else
  {
    v16 = 0;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_58;
  v14->m_Items[0] = (Il2CppObject *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)v14->m_Items, v16, v12, v13);
  v74[0] = 1;
  v15 = j_il2cpp_value_box_0(bool_TypeInfo, v74, v17, v18, v19, v20, v21, v22);
  v25 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C37194(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
  }
  if ( LODWORD(v14->max_length) <= 1 )
    goto LABEL_58;
  v14->m_Items[1] = v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[1], (int32_t)v25, v23, v24);
  v15 = StringLiteral_22740/*"position"*/;
  if ( StringLiteral_22740/*"position"*/ )
  {
    v15 = sub_1C37194(StringLiteral_22740/*"position"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
    v28 = StringLiteral_22740/*"position"*/;
  }
  else
  {
    v28 = 0;
  }
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_58;
  v14->m_Items[2] = (Il2CppObject *)v28;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[2], v28, v26, v27);
  v29 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v72 = this->fields.slideOutPosition.fields.z;
  v71 = v29;
  v15 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v71, v30, v31, v32, v33, v34, v35);
  v38 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C37194(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
  }
  if ( LODWORD(v14->max_length) <= 3 )
    goto LABEL_58;
  v14->m_Items[3] = v38;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[3], (int32_t)v38, v36, v37);
  v15 = StringLiteral_18753/*"easeType"*/;
  if ( StringLiteral_18753/*"easeType"*/ )
  {
    v15 = sub_1C37194(StringLiteral_18753/*"easeType"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
    v41 = StringLiteral_18753/*"easeType"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v14->max_length) <= 4 )
    goto LABEL_58;
  v14->m_Items[4] = (Il2CppObject *)v41;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[4], v41, v39, v40);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v15 = sub_1C37194(this->fields.easeTypeOut, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
  }
  if ( LODWORD(v14->max_length) <= 5 )
    goto LABEL_58;
  v14->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[5], (int32_t)easeTypeOut, v42, v43);
  v15 = StringLiteral_24071/*"time"*/;
  if ( StringLiteral_24071/*"time"*/ )
  {
    v15 = sub_1C37194(StringLiteral_24071/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
    v47 = StringLiteral_24071/*"time"*/;
  }
  else
  {
    v47 = 0;
  }
  if ( LODWORD(v14->max_length) <= 6 )
    goto LABEL_58;
  v14->m_Items[6] = (Il2CppObject *)v47;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[6], v47, v45, v46);
  slideOutTime = this->fields.slideOutTime;
  v15 = j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v48, v49, v50, v51, v52, v53);
  v56 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C37194(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
  }
  if ( LODWORD(v14->max_length) <= 7 )
    goto LABEL_58;
  v14->m_Items[7] = v56;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[7], (int32_t)v56, v54, v55);
  v15 = StringLiteral_22430/*"oncomplete"*/;
  if ( StringLiteral_22430/*"oncomplete"*/ )
  {
    v15 = sub_1C37194(StringLiteral_22430/*"oncomplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
    v59 = StringLiteral_22430/*"oncomplete"*/;
  }
  else
  {
    v59 = 0;
  }
  if ( LODWORD(v14->max_length) <= 8 )
    goto LABEL_58;
  v14->m_Items[8] = (Il2CppObject *)v59;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[8], v59, v57, v58);
  v15 = StringLiteral_22417/*"onMoveComplete"*/;
  if ( StringLiteral_22417/*"onMoveComplete"*/ )
  {
    v15 = sub_1C37194(StringLiteral_22417/*"onMoveComplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
    v62 = StringLiteral_22417/*"onMoveComplete"*/;
  }
  else
  {
    v62 = 0;
  }
  if ( LODWORD(v14->max_length) <= 9 )
    goto LABEL_58;
  v14->m_Items[9] = (Il2CppObject *)v62;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[9], v62, v60, v61);
  v15 = StringLiteral_22432/*"oncompletetarget"*/;
  if ( StringLiteral_22432/*"oncompletetarget"*/ )
  {
    v15 = sub_1C37194(StringLiteral_22432/*"oncompletetarget"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_59;
    v65 = StringLiteral_22432/*"oncompletetarget"*/;
  }
  else
  {
    v65 = 0;
  }
  if ( LODWORD(v14->max_length) <= 0xA )
    goto LABEL_58;
  v14->m_Items[10] = (Il2CppObject *)v65;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[10], v65, v63, v64);
  v15 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v68 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_1C37194(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_59:
      v70 = sub_1C372D8(v15);
      sub_1C37180(v70, 0);
    }
  }
  if ( LODWORD(v14->max_length) <= 0xB )
LABEL_58:
    sub_1C372BC(v15);
  v14->m_Items[11] = v68;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->m_Items[11], (int32_t)v68, v66, v67);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v69 = iTween__Hash(v14, 0);
  iTween__MoveTo_63199220(gameObject, v69, 0);
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
    sub_1C36FFC(p_endCallback, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void TitleInfoEventTowerSlideAnimation__onMoveComplete(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Object_array *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x1
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
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_String_o *easeTypeIn; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x22
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x19
  System_Collections_Hashtable_o *v65; // x0
  __int64 v66; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v68; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v70[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C4195C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22432/*"oncompletetarget"*/);
    sub_1C37058(&StringLiteral_22740/*"position"*/);
    sub_1C37058(&StringLiteral_22393/*"onAnimEnd"*/);
    sub_1C37058(&StringLiteral_20930/*"isLocal"*/);
    sub_1C37058(&StringLiteral_18753/*"easeType"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C4195C = 1;
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
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v5,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v5, 0, 0, v6),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C37100(object___TypeInfo, 12)) == 0) )
  {
LABEL_63:
    sub_1C372B4(transform);
  }
  v10 = (System_Object_array *)transform;
  v11 = StringLiteral_20930/*"isLocal"*/;
  if ( StringLiteral_20930/*"isLocal"*/ )
  {
    v11 = sub_1C37194(StringLiteral_20930/*"isLocal"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
    v12 = StringLiteral_20930/*"isLocal"*/;
  }
  else
  {
    v12 = 0;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_61;
  v10->m_Items[0] = (Il2CppObject *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)v10->m_Items, v12, v8, v9);
  v70[0] = 1;
  v11 = j_il2cpp_value_box_0(bool_TypeInfo, v70, v13, v14, v15, v16, v17, v18);
  v21 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C37194(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
  }
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_61;
  v10->m_Items[1] = v21;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[1], (int32_t)v21, v19, v20);
  v11 = StringLiteral_22740/*"position"*/;
  if ( StringLiteral_22740/*"position"*/ )
  {
    v11 = sub_1C37194(StringLiteral_22740/*"position"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
    v24 = StringLiteral_22740/*"position"*/;
  }
  else
  {
    v24 = 0;
  }
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_61;
  v10->m_Items[2] = (Il2CppObject *)v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[2], v24, v22, v23);
  v25 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v68 = v25;
  v11 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v68, v26, v27, v28, v29, v30, v31);
  v34 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C37194(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
  }
  if ( LODWORD(v10->max_length) <= 3 )
    goto LABEL_61;
  v10->m_Items[3] = v34;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[3], (int32_t)v34, v32, v33);
  v11 = StringLiteral_18753/*"easeType"*/;
  if ( StringLiteral_18753/*"easeType"*/ )
  {
    v11 = sub_1C37194(StringLiteral_18753/*"easeType"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
    v37 = StringLiteral_18753/*"easeType"*/;
  }
  else
  {
    v37 = 0;
  }
  if ( LODWORD(v10->max_length) <= 4 )
    goto LABEL_61;
  v10->m_Items[4] = (Il2CppObject *)v37;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[4], v37, v35, v36);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v11 = sub_1C37194(this->fields.easeTypeIn, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
  }
  if ( LODWORD(v10->max_length) <= 5 )
    goto LABEL_61;
  v10->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[5], (int32_t)easeTypeIn, v38, v39);
  v11 = StringLiteral_24071/*"time"*/;
  if ( StringLiteral_24071/*"time"*/ )
  {
    v11 = sub_1C37194(StringLiteral_24071/*"time"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
    v43 = StringLiteral_24071/*"time"*/;
  }
  else
  {
    v43 = 0;
  }
  if ( LODWORD(v10->max_length) <= 6 )
    goto LABEL_61;
  v10->m_Items[6] = (Il2CppObject *)v43;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[6], v43, v41, v42);
  slideInTime = this->fields.slideInTime;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v44, v45, v46, v47, v48, v49);
  v52 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C37194(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
  }
  if ( LODWORD(v10->max_length) <= 7 )
    goto LABEL_61;
  v10->m_Items[7] = v52;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[7], (int32_t)v52, v50, v51);
  v11 = StringLiteral_22430/*"oncomplete"*/;
  if ( StringLiteral_22430/*"oncomplete"*/ )
  {
    v11 = sub_1C37194(StringLiteral_22430/*"oncomplete"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
    v55 = StringLiteral_22430/*"oncomplete"*/;
  }
  else
  {
    v55 = 0;
  }
  if ( LODWORD(v10->max_length) <= 8 )
    goto LABEL_61;
  v10->m_Items[8] = (Il2CppObject *)v55;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[8], v55, v53, v54);
  v11 = StringLiteral_22393/*"onAnimEnd"*/;
  if ( StringLiteral_22393/*"onAnimEnd"*/ )
  {
    v11 = sub_1C37194(StringLiteral_22393/*"onAnimEnd"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
    v58 = StringLiteral_22393/*"onAnimEnd"*/;
  }
  else
  {
    v58 = 0;
  }
  if ( LODWORD(v10->max_length) <= 9 )
    goto LABEL_61;
  v10->m_Items[9] = (Il2CppObject *)v58;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[9], v58, v56, v57);
  v11 = StringLiteral_22432/*"oncompletetarget"*/;
  if ( StringLiteral_22432/*"oncompletetarget"*/ )
  {
    v11 = sub_1C37194(StringLiteral_22432/*"oncompletetarget"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_62;
    v61 = StringLiteral_22432/*"oncompletetarget"*/;
  }
  else
  {
    v61 = 0;
  }
  if ( LODWORD(v10->max_length) <= 0xA )
    goto LABEL_61;
  v10->m_Items[10] = (Il2CppObject *)v61;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[10], v61, v59, v60);
  v11 = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v64 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1C37194(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_62:
      v66 = sub_1C372D8(v11);
      sub_1C37180(v66, 0);
    }
  }
  if ( LODWORD(v10->max_length) <= 0xB )
LABEL_61:
    sub_1C372BC(v11);
  v10->m_Items[11] = v64;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->m_Items[11], (int32_t)v64, v62, v63);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v65 = iTween__Hash(v10, 0);
  iTween__MoveTo_63199220(gameObject, v65, 0);
}