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
    sub_1B8880C(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerSlideAnimation__StartSlideAnim(
        TitleInfoEventTowerSlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  int32_t v4; // w3
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Object_array *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x9
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_String_o *easeTypeOut; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x19
  System_Collections_Hashtable_o *v55; // x0
  __int64 v56; // x0
  __int64 v57; // [xsp+0h] [xbp-60h] BYREF
  float v58; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v60[4]; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4A59C63 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    sub_1B885B0(&StringLiteral_22260/*"onMoveComplete"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_22573/*"position"*/);
    sub_1B885B0(&StringLiteral_20798/*"isLocal"*/);
    sub_1B885B0(&StringLiteral_18754/*"easeType"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A59C63 = 1;
  }
  this->fields.endCallback = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        this->fields.slideOutPosition.fields.y = localPosition.fields.y,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1B88658(object___TypeInfo, 12LL)) == 0LL) )
  {
    sub_1B8880C(transform, v11);
  }
  v15 = (System_Object_array *)transform;
  v16 = (UnityEngine_GameObject_o *)StringLiteral_20798/*"isLocal"*/;
  if ( StringLiteral_20798/*"isLocal"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_20798/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_20798/*"isLocal"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_58;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v15->m_Items, v17, v13, v14);
  v60[0] = 1;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v60, v18, v19, v20);
  v23 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_58;
  v15->m_Items[1] = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[1], (int32_t)v23, v21, v22);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22573/*"position"*/;
  if ( StringLiteral_22573/*"position"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22573/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22573/*"position"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_58;
  v15->m_Items[2] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[2], v17, v24, v25);
  v26 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v58 = this->fields.slideOutPosition.fields.z;
  v57 = v26;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v57, v27, v28, v29);
  v32 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_58;
  v15->m_Items[3] = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[3], (int32_t)v32, v30, v31);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_18754/*"easeType"*/;
  if ( StringLiteral_18754/*"easeType"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_18754/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_18754/*"easeType"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 4 )
    goto LABEL_58;
  v15->m_Items[4] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[4], v17, v33, v34);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(this->fields.easeTypeOut, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( v15->max_length <= 5 )
    goto LABEL_58;
  v15->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[5], (int32_t)easeTypeOut, v35, v36);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_23929/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 6 )
    goto LABEL_58;
  v15->m_Items[6] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[6], v17, v38, v39);
  slideOutTime = this->fields.slideOutTime;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v40, v41, v42);
  v45 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
  }
  if ( v15->max_length <= 7 )
    goto LABEL_58;
  v15->m_Items[7] = v45;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[7], (int32_t)v45, v43, v44);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 8 )
    goto LABEL_58;
  v15->m_Items[8] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[8], v17, v46, v47);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22260/*"onMoveComplete"*/;
  if ( StringLiteral_22260/*"onMoveComplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22260/*"onMoveComplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22260/*"onMoveComplete"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 9 )
    goto LABEL_58;
  v15->m_Items[9] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[9], v17, v48, v49);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22275/*"oncompletetarget"*/;
  if ( StringLiteral_22275/*"oncompletetarget"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22275/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_59;
    v17 = StringLiteral_22275/*"oncompletetarget"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 0xA )
    goto LABEL_58;
  v15->m_Items[10] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[10], v17, v50, v51);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v54 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_59:
      v56 = sub_1B88830(v16);
      sub_1B886D8(v56, 0LL);
    }
  }
  if ( v15->max_length <= 0xB )
LABEL_58:
    sub_1B88814(v16, v17);
  v15->m_Items[11] = v54;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[11], (int32_t)v54, v52, v53);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v55 = iTween__Hash(v15, 0LL);
  iTween__MoveTo_60245364(gameObject, v55, 0LL);
}


void __fastcall TitleInfoEventTowerSlideAnimation__onAnimEnd(
        TitleInfoEventTowerSlideAnimation_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_endCallback; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *endCallback; // t1

  endCallback = this->fields.endCallback;
  p_endCallback = (ServantStatusBattleListViewItem_o *)&this->fields.endCallback;
  v5 = endCallback;
  if ( endCallback )
  {
    p_endCallback->klass = 0LL;
    sub_1B88554(p_endCallback, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall TitleInfoEventTowerSlideAnimation__onMoveComplete(
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
  int32_t v10; // w3
  System_Object_array *v11; // x21
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x9
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_String_o *easeTypeIn; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x19
  System_Collections_Hashtable_o *v51; // x0
  __int64 v52; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v54; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v56[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A59C64 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__);
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_22573/*"position"*/);
    sub_1B885B0(&StringLiteral_22236/*"onAnimEnd"*/);
    sub_1B885B0(&StringLiteral_20798/*"isLocal"*/);
    sub_1B885B0(&StringLiteral_18754/*"easeType"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A59C64 = 1;
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
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTower___),
        v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_TitleInfoEventTowerSlideAnimation__onMoveComplete_b__8_0__,
          0LL),
        !Component_object)
    || (TitleInfoEventTower__Open((TitleInfoEventTower_o *)Component_object, v6, 0LL, 0, v7),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (transform = (UnityEngine_Transform_o *)sub_1B88658(object___TypeInfo, 12LL)) == 0LL) )
  {
LABEL_63:
    sub_1B8880C(transform, v4);
  }
  v11 = (System_Object_array *)transform;
  v12 = (UnityEngine_GameObject_o *)StringLiteral_20798/*"isLocal"*/;
  if ( StringLiteral_20798/*"isLocal"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_20798/*"isLocal"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_20798/*"isLocal"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
    goto LABEL_61;
  v11->m_Items[0] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v11->m_Items, v13, v9, v10);
  v56[0] = 1;
  v12 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v56, v14, v15, v16);
  v19 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_61;
  v11->m_Items[1] = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[1], (int32_t)v19, v17, v18);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22573/*"position"*/;
  if ( StringLiteral_22573/*"position"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22573/*"position"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22573/*"position"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 2 )
    goto LABEL_61;
  v11->m_Items[2] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[2], v13, v20, v21);
  v22 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v54 = v22;
  v12 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v54, v23, v24, v25);
  v28 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( v11->max_length <= 3 )
    goto LABEL_61;
  v11->m_Items[3] = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[3], (int32_t)v28, v26, v27);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_18754/*"easeType"*/;
  if ( StringLiteral_18754/*"easeType"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_18754/*"easeType"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_18754/*"easeType"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 4 )
    goto LABEL_61;
  v11->m_Items[4] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[4], v13, v29, v30);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(this->fields.easeTypeIn, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( v11->max_length <= 5 )
    goto LABEL_61;
  v11->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[5], (int32_t)easeTypeIn, v31, v32);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_23929/*"time"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 6 )
    goto LABEL_61;
  v11->m_Items[6] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[6], v13, v34, v35);
  slideInTime = this->fields.slideInTime;
  v12 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v36, v37, v38);
  v41 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
  }
  if ( v11->max_length <= 7 )
    goto LABEL_61;
  v11->m_Items[7] = v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[7], (int32_t)v41, v39, v40);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 8 )
    goto LABEL_61;
  v11->m_Items[8] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[8], v13, v42, v43);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22236/*"onAnimEnd"*/;
  if ( StringLiteral_22236/*"onAnimEnd"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22236/*"onAnimEnd"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22236/*"onAnimEnd"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 9 )
    goto LABEL_61;
  v11->m_Items[9] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[9], v13, v44, v45);
  v12 = (UnityEngine_GameObject_o *)StringLiteral_22275/*"oncompletetarget"*/;
  if ( StringLiteral_22275/*"oncompletetarget"*/ )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22275/*"oncompletetarget"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_62;
    v13 = StringLiteral_22275/*"oncompletetarget"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v11->max_length <= 0xA )
    goto LABEL_61;
  v11->m_Items[10] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[10], v13, v46, v47);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v50 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (UnityEngine_GameObject_o *)sub_1B886EC(v12, v11->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_62:
      v52 = sub_1B88830(v12);
      sub_1B886D8(v52, 0LL);
    }
  }
  if ( v11->max_length <= 0xB )
LABEL_61:
    sub_1B88814(v12, v13);
  v11->m_Items[11] = v50;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->m_Items[11], (int32_t)v50, v48, v49);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v51 = iTween__Hash(v11, 0LL);
  iTween__MoveTo_60245364(gameObject, v51, 0LL);
}