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
  int32_t v4; // w3
  struct System_Action_o **p_endCallback; // x19
  float z; // s8
  float y; // s9
  float x; // s10

  this->fields.endCallback = callback;
  p_endCallback = &this->fields.endCallback;
  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
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
    sub_1B8880C(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.slideOutPosition, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim(
        EventInfoUISlideAnimation_o *this,
        System_Action_o *callback,
        UnityEngine_Vector3_o afterPosition,
        const MethodInfo *method)
{
  int32_t v4; // w3
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v11; // x0
  __int64 v12; // x1
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

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4A5D170 & 1) == 0 )
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
    byte_4A5D170 = 1;
  }
  this->fields.endCallback = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = sub_1B88658(object___TypeInfo, 12LL);
  if ( !v11 )
    sub_1B8880C(0LL, v12);
  v15 = (System_Object_array *)v11;
  v16 = (UnityEngine_GameObject_o *)StringLiteral_20798/*"isLocal"*/;
  if ( StringLiteral_20798/*"isLocal"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_20798/*"isLocal"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_20798/*"isLocal"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_57;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v15->m_Items, v17, v13, v14);
  v60[0] = 1;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v60, v18, v19, v20);
  v23 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_57;
  v15->m_Items[1] = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[1], (int32_t)v23, v21, v22);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22573/*"position"*/;
  if ( StringLiteral_22573/*"position"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22573/*"position"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22573/*"position"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_57;
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
      goto LABEL_58;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_57;
  v15->m_Items[3] = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[3], (int32_t)v32, v30, v31);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_18754/*"easeType"*/;
  if ( StringLiteral_18754/*"easeType"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_18754/*"easeType"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_18754/*"easeType"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 4 )
    goto LABEL_57;
  v15->m_Items[4] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[4], v17, v33, v34);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(this->fields.easeTypeOut, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( v15->max_length <= 5 )
    goto LABEL_57;
  v15->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[5], (int32_t)easeTypeOut, v35, v36);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_23929/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 6 )
    goto LABEL_57;
  v15->m_Items[6] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[6], v17, v38, v39);
  slideOutTime = this->fields.slideOutTime;
  v16 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v40, v41, v42);
  v45 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( v15->max_length <= 7 )
    goto LABEL_57;
  v15->m_Items[7] = v45;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[7], (int32_t)v45, v43, v44);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 8 )
    goto LABEL_57;
  v15->m_Items[8] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[8], v17, v46, v47);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22260/*"onMoveComplete"*/;
  if ( StringLiteral_22260/*"onMoveComplete"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22260/*"onMoveComplete"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22260/*"onMoveComplete"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 9 )
    goto LABEL_57;
  v15->m_Items[9] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[9], v17, v48, v49);
  v16 = (UnityEngine_GameObject_o *)StringLiteral_22275/*"oncompletetarget"*/;
  if ( StringLiteral_22275/*"oncompletetarget"*/ )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22275/*"oncompletetarget"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22275/*"oncompletetarget"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 0xA )
    goto LABEL_57;
  v15->m_Items[10] = (Il2CppObject *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[10], v17, v50, v51);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v54 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = (UnityEngine_GameObject_o *)sub_1B886EC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_58:
      v56 = sub_1B88830(v16);
      sub_1B886D8(v56, 0LL);
    }
  }
  if ( v15->max_length <= 0xB )
LABEL_57:
    sub_1B88814(v16, v17);
  v15->m_Items[11] = v54;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[11], (int32_t)v54, v52, v53);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v55 = iTween__Hash(v15, 0LL);
  iTween__MoveTo_60245364(gameObject, v55, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_42150424(
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
  int32_t v19; // w3
  System_Object_array *v20; // x21
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  char v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x23
  char v29; // w2
  int32_t v30; // w3
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  char v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x23
  char v37; // w2
  int32_t v38; // w3
  char v39; // w2
  int32_t v40; // w3
  char v41; // w2
  int32_t v42; // w3
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  char v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x22
  char v49; // w2
  int32_t v50; // w3
  char v51; // w2
  int32_t v52; // w3
  char v53; // w2
  int32_t v54; // w3
  char v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x19
  System_Collections_Hashtable_o *v58; // x0
  __int64 v59; // x0
  int v60[4]; // [xsp+0h] [xbp-70h] BYREF
  int v61; // [xsp+38h] [xbp-38h] BYREF
  char v62[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4A5D172 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_22573/*"position"*/);
    sub_1B885B0(&StringLiteral_22236/*"onAnimEnd"*/);
    sub_1B885B0(&StringLiteral_20798/*"isLocal"*/);
    sub_1B885B0(&StringLiteral_18754/*"easeType"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5D172 = 1;
  }
  this->fields.endCallback = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    isTypeIn,
    (int32_t)method);
  v11 = 52LL;
  if ( isTypeIn )
    v11 = 48LL;
  if ( isTypeIn )
    v12 = 32LL;
  else
    v12 = 40LL;
  v13 = *(Il2CppObject **)((char *)&this->klass + v12);
  v14 = *(_DWORD *)((char *)&this->klass + v11);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16 = sub_1B88658(object___TypeInfo, 12LL);
  if ( !v16 )
    sub_1B8880C(0LL, v17);
  v20 = (System_Object_array *)v16;
  v21 = (UnityEngine_GameObject_o *)StringLiteral_20798/*"isLocal"*/;
  if ( StringLiteral_20798/*"isLocal"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_20798/*"isLocal"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
    v22 = StringLiteral_20798/*"isLocal"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v20->max_length )
    goto LABEL_62;
  v20->m_Items[0] = (Il2CppObject *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v20->m_Items, v22, v18, v19);
  v62[0] = 1;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v62, v23, v24, v25);
  v28 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_62;
  v20->m_Items[1] = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[1], (int32_t)v28, v26, v27);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22573/*"position"*/;
  if ( StringLiteral_22573/*"position"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22573/*"position"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
    v22 = StringLiteral_22573/*"position"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_62;
  v20->m_Items[2] = (Il2CppObject *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[2], v22, v29, v30);
  *(float *)v60 = x;
  *(float *)&v60[1] = y;
  *(float *)&v60[2] = z;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v60, v31, v32, v33);
  v36 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_62;
  v20->m_Items[3] = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[3], (int32_t)v36, v34, v35);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_18754/*"easeType"*/;
  if ( StringLiteral_18754/*"easeType"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_18754/*"easeType"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
    v22 = StringLiteral_18754/*"easeType"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 4 )
    goto LABEL_62;
  v20->m_Items[4] = (Il2CppObject *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[4], v22, v37, v38);
  if ( v13 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(v13, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
  }
  if ( v20->max_length <= 5 )
    goto LABEL_62;
  v20->m_Items[5] = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[5], (int32_t)v13, v39, v40);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_23929/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
    v22 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 6 )
    goto LABEL_62;
  v20->m_Items[6] = (Il2CppObject *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[6], v22, v41, v42);
  v61 = v14;
  v21 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v61, v43, v44, v45);
  v48 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
  }
  if ( v20->max_length <= 7 )
    goto LABEL_62;
  v20->m_Items[7] = v48;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[7], (int32_t)v48, v46, v47);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
    v22 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 8 )
    goto LABEL_62;
  v20->m_Items[8] = (Il2CppObject *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[8], v22, v49, v50);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22236/*"onAnimEnd"*/;
  if ( StringLiteral_22236/*"onAnimEnd"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22236/*"onAnimEnd"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
    v22 = StringLiteral_22236/*"onAnimEnd"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 9 )
    goto LABEL_62;
  v20->m_Items[9] = (Il2CppObject *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[9], v22, v51, v52);
  v21 = (UnityEngine_GameObject_o *)StringLiteral_22275/*"oncompletetarget"*/;
  if ( StringLiteral_22275/*"oncompletetarget"*/ )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22275/*"oncompletetarget"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_63;
    v22 = StringLiteral_22275/*"oncompletetarget"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 0xA )
    goto LABEL_62;
  v20->m_Items[10] = (Il2CppObject *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[10], v22, v53, v54);
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v57 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = (UnityEngine_GameObject_o *)sub_1B886EC(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_63:
      v59 = sub_1B88830(v21);
      sub_1B886D8(v59, 0LL);
    }
  }
  if ( v20->max_length <= 0xB )
LABEL_62:
    sub_1B88814(v21, v22);
  v20->m_Items[11] = v57;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->m_Items[11], (int32_t)v57, v55, v56);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v58 = iTween__Hash(v20, 0LL);
  iTween__MoveTo_60245364(gameObject, v58, 0LL);
}


void __fastcall EventInfoUISlideAnimation__onAnimEnd(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
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


void __fastcall EventInfoUISlideAnimation__onMoveComplete(EventInfoUISlideAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Object_array *v8; // x21
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x9
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_String_o *easeTypeIn; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x19
  System_Collections_Hashtable_o *v48; // x0
  __int64 v49; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v51; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v53[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A5D171 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_22573/*"position"*/);
    sub_1B885B0(&StringLiteral_22236/*"onAnimEnd"*/);
    sub_1B885B0(&StringLiteral_20798/*"isLocal"*/);
    sub_1B885B0(&StringLiteral_18754/*"easeType"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5D171 = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = sub_1B88658(object___TypeInfo, 12LL);
  if ( !v4 )
    sub_1B8880C(0LL, v5);
  v8 = (System_Object_array *)v4;
  v9 = (UnityEngine_GameObject_o *)StringLiteral_20798/*"isLocal"*/;
  if ( StringLiteral_20798/*"isLocal"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_20798/*"isLocal"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_20798/*"isLocal"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v8->max_length )
    goto LABEL_57;
  v8->m_Items[0] = (Il2CppObject *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v8->m_Items, v10, v6, v7);
  v53[0] = 1;
  v9 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v53, v11, v12, v13);
  v16 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_57;
  v8->m_Items[1] = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[1], (int32_t)v16, v14, v15);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22573/*"position"*/;
  if ( StringLiteral_22573/*"position"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22573/*"position"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22573/*"position"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_57;
  v8->m_Items[2] = (Il2CppObject *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[2], v10, v17, v18);
  v19 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v51 = v19;
  v9 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v51, v20, v21, v22);
  v25 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_57;
  v8->m_Items[3] = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[3], (int32_t)v25, v23, v24);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_18754/*"easeType"*/;
  if ( StringLiteral_18754/*"easeType"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_18754/*"easeType"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_18754/*"easeType"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v8->max_length <= 4 )
    goto LABEL_57;
  v8->m_Items[4] = (Il2CppObject *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[4], v10, v26, v27);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(this->fields.easeTypeIn, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( v8->max_length <= 5 )
    goto LABEL_57;
  v8->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[5], (int32_t)easeTypeIn, v28, v29);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_23929/*"time"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v8->max_length <= 6 )
    goto LABEL_57;
  v8->m_Items[6] = (Il2CppObject *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[6], v10, v31, v32);
  slideInTime = this->fields.slideInTime;
  v9 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v33, v34, v35);
  v38 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( v8->max_length <= 7 )
    goto LABEL_57;
  v8->m_Items[7] = v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[7], (int32_t)v38, v36, v37);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v8->max_length <= 8 )
    goto LABEL_57;
  v8->m_Items[8] = (Il2CppObject *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[8], v10, v39, v40);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22236/*"onAnimEnd"*/;
  if ( StringLiteral_22236/*"onAnimEnd"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22236/*"onAnimEnd"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22236/*"onAnimEnd"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v8->max_length <= 9 )
    goto LABEL_57;
  v8->m_Items[9] = (Il2CppObject *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[9], v10, v41, v42);
  v9 = (UnityEngine_GameObject_o *)StringLiteral_22275/*"oncompletetarget"*/;
  if ( StringLiteral_22275/*"oncompletetarget"*/ )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(StringLiteral_22275/*"oncompletetarget"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_22275/*"oncompletetarget"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v8->max_length <= 0xA )
    goto LABEL_57;
  v8->m_Items[10] = (Il2CppObject *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[10], v10, v43, v44);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v47 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = (UnityEngine_GameObject_o *)sub_1B886EC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_58:
      v49 = sub_1B88830(v9);
      sub_1B886D8(v49, 0LL);
    }
  }
  if ( v8->max_length <= 0xB )
LABEL_57:
    sub_1B88814(v9, v10);
  v8->m_Items[11] = v47;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[11], (int32_t)v47, v45, v46);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v48 = iTween__Hash(v8, 0LL);
  iTween__MoveTo_60245364(gameObject, v48, 0LL);
}