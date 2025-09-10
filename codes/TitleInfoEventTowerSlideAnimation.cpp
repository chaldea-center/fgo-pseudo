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
    sub_1C2D6EC(0, v4);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4C25C93 & 1) == 0 )
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
    byte_4C25C93 = 1;
  }
  this->fields.endCallback = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C2D538(object___TypeInfo, 12)) == 0) )
  {
    sub_1C2D6EC(transform, v11);
  }
  v15 = (System_Object_array *)transform;
  v16 = (UnityEngine_GameObject_o *)StringLiteral_20915/*"isLocal"*/;
  if ( StringLiteral_20915/*"isLocal"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_20915/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_20915/*"isLocal"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_58;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)v15->m_Items, v17, v13, v14);
  v49[0] = 1;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v49, v18, v19, v20);
  v22 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_58;
  v15->m_Items[1] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v22, v13, v21);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22719/*"position"*/;
  if ( StringLiteral_22719/*"position"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22719/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22719/*"position"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_58;
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
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_58;
  v15->m_Items[3] = v29;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v29, v13, v28);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_18741/*"easeType"*/;
  if ( StringLiteral_18741/*"easeType"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_18741/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_18741/*"easeType"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 4 )
    goto LABEL_58;
  v15->m_Items[4] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[4], v17, v13, v30);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(this->fields.easeTypeOut, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 5 )
    goto LABEL_58;
  v15->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[5], (int32_t)easeTypeOut, v13, v31);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 6 )
    goto LABEL_58;
  v15->m_Items[6] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[6], v17, v13, v33);
  slideOutTime = this->fields.slideOutTime;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v34, v35, v36);
  v38 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( LODWORD(v15->max_length) <= 7 )
    goto LABEL_58;
  v15->m_Items[7] = v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[7], (int32_t)v38, v13, v37);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 8 )
    goto LABEL_58;
  v15->m_Items[8] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[8], v17, v13, v39);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22397/*"onMoveComplete"*/;
  if ( StringLiteral_22397/*"onMoveComplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22397/*"onMoveComplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22397/*"onMoveComplete"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 9 )
    goto LABEL_58;
  v15->m_Items[9] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[9], v17, v13, v40);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22412/*"oncompletetarget"*/;
  if ( StringLiteral_22412/*"oncompletetarget"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22412/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22412/*"oncompletetarget"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( LODWORD(v15->max_length) <= 0xA )
    goto LABEL_58;
  v15->m_Items[10] = (Il2CppObject *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[10], v17, v13, v41);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v43 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_59:
      v45 = sub_1C2D710(v16);
      sub_1C2D5B8(v45, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= 0xB )
LABEL_58:
    sub_1C2D6F4(v16, v17, v13);
  v15->m_Items[11] = v43;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->m_Items[11], (int32_t)v43, v13, v42);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v44 = iTween__Hash(v15, 0);
  iTween__MoveTo_63095428(gameObject, v44, 0);
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
    sub_1C2D434(p_endCallback, 0, v2, v3);
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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  System_Object_array *v11; // x21
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  const MethodInfo *v19; // x3
  __int64 v20; // x9
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x22
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  struct System_String_o *easeTypeIn; // x22
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x22
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x19
  System_Collections_Hashtable_o *v40; // x0
  __int64 v41; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v43; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v45[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C25C94 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    sub_1C2D490(&StringLiteral_22373/*"onAnimEnd"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_18741/*"easeType"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C25C94 = 1;
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
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v6, 0, 0, v7),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (transform = (UnityEngine_Transform_o *)sub_1C2D538(object___TypeInfo, 12)) == 0) )
  {
LABEL_63:
    sub_1C2D6EC(transform, v4);
  }
  v11 = (System_Object_array *)transform;
  v12 = (UnityEngine_GameObject_o *)StringLiteral_20915/*"isLocal"*/;
  if ( StringLiteral_20915/*"isLocal"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_20915/*"isLocal"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_20915/*"isLocal"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( !LODWORD(v11->max_length) )
    goto LABEL_61;
  v11->m_Items[0] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)v11->m_Items, v13, v9, v10);
  v45[0] = 1;
  v12 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v45, v14, v15, v16);
  v18 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 1 )
    goto LABEL_61;
  v11->m_Items[1] = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[1], (int32_t)v18, v9, v17);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22719/*"position"*/;
  if ( StringLiteral_22719/*"position"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22719/*"position"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22719/*"position"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 2 )
    goto LABEL_61;
  v11->m_Items[2] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[2], v13, v9, v19);
  v20 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v43 = v20;
  v12 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v43, v21, v22, v23);
  v25 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 3 )
    goto LABEL_61;
  v11->m_Items[3] = v25;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[3], (int32_t)v25, v9, v24);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_18741/*"easeType"*/;
  if ( StringLiteral_18741/*"easeType"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_18741/*"easeType"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_18741/*"easeType"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 4 )
    goto LABEL_61;
  v11->m_Items[4] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[4], v13, v9, v26);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(this->fields.easeTypeIn, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 5 )
    goto LABEL_61;
  v11->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[5], (int32_t)easeTypeIn, v9, v27);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_24049/*"time"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 6 )
    goto LABEL_61;
  v11->m_Items[6] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[6], v13, v9, v29);
  slideInTime = this->fields.slideInTime;
  v12 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v30, v31, v32);
  v34 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( LODWORD(v11->max_length) <= 7 )
    goto LABEL_61;
  v11->m_Items[7] = v34;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[7], (int32_t)v34, v9, v33);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 8 )
    goto LABEL_61;
  v11->m_Items[8] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[8], v13, v9, v35);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22373/*"onAnimEnd"*/;
  if ( StringLiteral_22373/*"onAnimEnd"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22373/*"onAnimEnd"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22373/*"onAnimEnd"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 9 )
    goto LABEL_61;
  v11->m_Items[9] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[9], v13, v9, v36);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22412/*"oncompletetarget"*/;
  if ( StringLiteral_22412/*"oncompletetarget"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(StringLiteral_22412/*"oncompletetarget"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22412/*"oncompletetarget"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v11->max_length) <= 0xA )
    goto LABEL_61;
  v11->m_Items[10] = (Il2CppObject *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[10], v13, v9, v37);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v39 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1C2D5CC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_62:
      v41 = sub_1C2D710(v12);
      sub_1C2D5B8(v41, 0);
    }
  }
  if ( LODWORD(v11->max_length) <= 0xB )
LABEL_61:
    sub_1C2D6F4(v12, v13, v9);
  v11->m_Items[11] = v39;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->m_Items[11], (int32_t)v39, v9, v38);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v40 = iTween__Hash(v11, 0);
  iTween__MoveTo_63095428(gameObject, v40, 0);
}