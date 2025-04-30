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
  __int64 v4; // x1

  this->fields.slideOutPosition.fields.y = this->fields.slideInPosition.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B86614(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerSlideAnimation__StartSlideAnim(
        TitleInfoEventTowerSlideAnimation_o *this,
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Object_array *v26; // x21
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x9
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x22
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_String_o *easeTypeOut; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x22
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  Il2CppObject *v65; // x19
  System_Collections_Hashtable_o *v66; // x0
  __int64 v67; // x0
  __int64 v68; // [xsp+0h] [xbp-60h] BYREF
  float v69; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v71[4]; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4A4CF1C & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, callback);
    sub_1B863B8(&object___TypeInfo, v10);
    sub_1B863B8(&float_TypeInfo, v11);
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_22096/*"onMoveComplete"*/, v13);
    sub_1B863B8(&StringLiteral_23770/*"time"*/, v14);
    sub_1B863B8(&StringLiteral_22111/*"oncompletetarget"*/, v15);
    sub_1B863B8(&StringLiteral_22416/*"position"*/, v16);
    sub_1B863B8(&StringLiteral_20613/*"isLocal"*/, v17);
    sub_1B863B8(&StringLiteral_18524/*"easeType"*/, v18);
    sub_1B863B8(&StringLiteral_22109/*"oncomplete"*/, v19);
    sub_1B863B8(&iTween_TypeInfo, v20);
    byte_4A4CF1C = 1;
  }
  this->fields.endCallback = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1B86460(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_1B86614(transform, v22);
  }
  v26 = (System_Object_array *)transform;
  v27 = (UnityEngine_GameObject_o *)StringLiteral_20613/*"isLocal"*/;
  if ( StringLiteral_20613/*"isLocal"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_20613/*"isLocal"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
    v28 = StringLiteral_20613/*"isLocal"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v26->max_length )
    goto LABEL_58;
  v26->m_Items[0] = (Il2CppObject *)v28;
  sub_1B8635C((CGThumbnailListItem_o *)v26->m_Items, v28, v24, v25);
  v71[0] = 1;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v71, v29, v30, v31);
  v34 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_58;
  v26->m_Items[1] = v34;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[1], (int32_t)v34, v32, v33);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22416/*"position"*/;
  if ( StringLiteral_22416/*"position"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_22416/*"position"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
    v28 = StringLiteral_22416/*"position"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_58;
  v26->m_Items[2] = (Il2CppObject *)v28;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[2], v28, v35, v36);
  v37 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v69 = this->fields.slideOutPosition.fields.z;
  v68 = v37;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v68, v38, v39, v40);
  v43 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_58;
  v26->m_Items[3] = v43;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[3], (int32_t)v43, v41, v42);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_18524/*"easeType"*/;
  if ( StringLiteral_18524/*"easeType"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_18524/*"easeType"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
    v28 = StringLiteral_18524/*"easeType"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 4 )
    goto LABEL_58;
  v26->m_Items[4] = (Il2CppObject *)v28;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[4], v28, v44, v45);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(this->fields.easeTypeOut, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
  }
  if ( v26->max_length <= 5 )
    goto LABEL_58;
  v26->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[5], (int32_t)easeTypeOut, v46, v47);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_23770/*"time"*/;
  if ( StringLiteral_23770/*"time"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_23770/*"time"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
    v28 = StringLiteral_23770/*"time"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 6 )
    goto LABEL_58;
  v26->m_Items[6] = (Il2CppObject *)v28;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[6], v28, v49, v50);
  slideOutTime = this->fields.slideOutTime;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v51, v52, v53);
  v56 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
  }
  if ( v26->max_length <= 7 )
    goto LABEL_58;
  v26->m_Items[7] = v56;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[7], (int32_t)v56, v54, v55);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22109/*"oncomplete"*/;
  if ( StringLiteral_22109/*"oncomplete"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_22109/*"oncomplete"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
    v28 = StringLiteral_22109/*"oncomplete"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 8 )
    goto LABEL_58;
  v26->m_Items[8] = (Il2CppObject *)v28;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[8], v28, v57, v58);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22096/*"onMoveComplete"*/;
  if ( StringLiteral_22096/*"onMoveComplete"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_22096/*"onMoveComplete"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
    v28 = StringLiteral_22096/*"onMoveComplete"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 9 )
    goto LABEL_58;
  v26->m_Items[9] = (Il2CppObject *)v28;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[9], v28, v59, v60);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22111/*"oncompletetarget"*/;
  if ( StringLiteral_22111/*"oncompletetarget"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_22111/*"oncompletetarget"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_59;
    v28 = StringLiteral_22111/*"oncompletetarget"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 0xA )
    goto LABEL_58;
  v26->m_Items[10] = (Il2CppObject *)v28;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[10], v28, v61, v62);
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v65 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B864F4(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
    {
LABEL_59:
      v67 = sub_1B86638(v27);
      sub_1B864E0(v67, 0LL);
    }
  }
  if ( v26->max_length <= 0xB )
LABEL_58:
    sub_1B8661C(v27, v28);
  v26->m_Items[11] = v65;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->m_Items[11], (int32_t)v65, v63, v64);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v66 = iTween__Hash(v26, 0LL);
  iTween__MoveTo_61282740(gameObject, v66, 0LL);
}


void __fastcall TitleInfoEventTowerSlideAnimation__onAnimEnd(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
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
    sub_1B8635C(p_endCallback, 0, v2, v3);
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
  __int64 v18; // x1
  Il2CppObject *Component_object; // x20
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x4
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Object_array *v25; // x21
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x9
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_String_o *easeTypeIn; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x22
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x19
  System_Collections_Hashtable_o *v65; // x0
  __int64 v66; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v68; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v70[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A4CF1D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&bool_TypeInfo, v3);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___, v4);
    sub_1B863B8(&object___TypeInfo, v5);
    sub_1B863B8(&float_TypeInfo, v6);
    sub_1B863B8(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__, v7);
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_23770/*"time"*/, v9);
    sub_1B863B8(&StringLiteral_22111/*"oncompletetarget"*/, v10);
    sub_1B863B8(&StringLiteral_22416/*"position"*/, v11);
    sub_1B863B8(&StringLiteral_22072/*"onAnimEnd"*/, v12);
    sub_1B863B8(&StringLiteral_20613/*"isLocal"*/, v13);
    sub_1B863B8(&StringLiteral_18524/*"easeType"*/, v14);
    sub_1B863B8(&StringLiteral_22109/*"oncomplete"*/, v15);
    sub_1B863B8(&iTween_TypeInfo, v16);
    byte_4A4CF1D = 1;
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
                             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v20 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v20,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v20, 0LL, 0, v21),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1B86460(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_63:
    sub_1B86614(transform, v18);
  }
  v25 = (System_Object_array *)transform;
  v26 = (UnityEngine_GameObject_o *)StringLiteral_20613/*"isLocal"*/;
  if ( StringLiteral_20613/*"isLocal"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_20613/*"isLocal"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
    v27 = StringLiteral_20613/*"isLocal"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_61;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_1B8635C((CGThumbnailListItem_o *)v25->m_Items, v27, v23, v24);
  v70[0] = 1;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v70, v28, v29, v30);
  v33 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_61;
  v25->m_Items[1] = v33;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[1], (int32_t)v33, v31, v32);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22416/*"position"*/;
  if ( StringLiteral_22416/*"position"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_22416/*"position"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
    v27 = StringLiteral_22416/*"position"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_61;
  v25->m_Items[2] = (Il2CppObject *)v27;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[2], v27, v34, v35);
  v36 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v68 = v36;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v68, v37, v38, v39);
  v42 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_61;
  v25->m_Items[3] = v42;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[3], (int32_t)v42, v40, v41);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_18524/*"easeType"*/;
  if ( StringLiteral_18524/*"easeType"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_18524/*"easeType"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
    v27 = StringLiteral_18524/*"easeType"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 4 )
    goto LABEL_61;
  v25->m_Items[4] = (Il2CppObject *)v27;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[4], v27, v43, v44);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(this->fields.easeTypeIn, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( v25->max_length <= 5 )
    goto LABEL_61;
  v25->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[5], (int32_t)easeTypeIn, v45, v46);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_23770/*"time"*/;
  if ( StringLiteral_23770/*"time"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_23770/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
    v27 = StringLiteral_23770/*"time"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 6 )
    goto LABEL_61;
  v25->m_Items[6] = (Il2CppObject *)v27;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[6], v27, v48, v49);
  slideInTime = this->fields.slideInTime;
  v26 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v50, v51, v52);
  v55 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
  }
  if ( v25->max_length <= 7 )
    goto LABEL_61;
  v25->m_Items[7] = v55;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[7], (int32_t)v55, v53, v54);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22109/*"oncomplete"*/;
  if ( StringLiteral_22109/*"oncomplete"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_22109/*"oncomplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
    v27 = StringLiteral_22109/*"oncomplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 8 )
    goto LABEL_61;
  v25->m_Items[8] = (Il2CppObject *)v27;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[8], v27, v56, v57);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22072/*"onAnimEnd"*/;
  if ( StringLiteral_22072/*"onAnimEnd"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_22072/*"onAnimEnd"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
    v27 = StringLiteral_22072/*"onAnimEnd"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 9 )
    goto LABEL_61;
  v25->m_Items[9] = (Il2CppObject *)v27;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[9], v27, v58, v59);
  v26 = (UnityEngine_GameObject_o *)StringLiteral_22111/*"oncompletetarget"*/;
  if ( StringLiteral_22111/*"oncompletetarget"*/ )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(StringLiteral_22111/*"oncompletetarget"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_62;
    v27 = StringLiteral_22111/*"oncompletetarget"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xA )
    goto LABEL_61;
  v25->m_Items[10] = (Il2CppObject *)v27;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[10], v27, v60, v61);
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v64 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = (UnityEngine_GameObject_o *)sub_1B864F4(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_62:
      v66 = sub_1B86638(v26);
      sub_1B864E0(v66, 0LL);
    }
  }
  if ( v25->max_length <= 0xB )
LABEL_61:
    sub_1B8661C(v26, v27);
  v25->m_Items[11] = v64;
  sub_1B8635C((CGThumbnailListItem_o *)&v25->m_Items[11], (int32_t)v64, v62, v63);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v65 = iTween__Hash(v25, 0LL);
  iTween__MoveTo_61282740(gameObject, v65, 0LL);
}