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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
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
    sub_1B9026C(0LL, v4);
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
  int32_t v24; // w2
  int32_t v25; // w3
  System_Object_array *v26; // x21
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x9
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_String_o *easeTypeOut; // x22
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x22
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x19
  System_Collections_Hashtable_o *v66; // x0
  __int64 v67; // x0
  __int64 v68; // [xsp+0h] [xbp-60h] BYREF
  float v69; // [xsp+8h] [xbp-58h]
  float slideOutTime; // [xsp+18h] [xbp-48h] BYREF
  char v71[4]; // [xsp+1Ch] [xbp-44h] BYREF

  z = afterPosition.fields.z;
  y = afterPosition.fields.y;
  x = afterPosition.fields.x;
  if ( (byte_4A71E87 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, callback);
    sub_1B90010(&object___TypeInfo, v10);
    sub_1B90010(&float_TypeInfo, v11);
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, v12);
    sub_1B90010(&StringLiteral_22293/*"onMoveComplete"*/, v13);
    sub_1B90010(&StringLiteral_23966/*"time"*/, v14);
    sub_1B90010(&StringLiteral_22308/*"oncompletetarget"*/, v15);
    sub_1B90010(&StringLiteral_22606/*"position"*/, v16);
    sub_1B90010(&StringLiteral_20826/*"isLocal"*/, v17);
    sub_1B90010(&StringLiteral_18779/*"easeType"*/, v18);
    sub_1B90010(&StringLiteral_22306/*"oncomplete"*/, v19);
    sub_1B90010(&iTween_TypeInfo, v20);
    byte_4A71E87 = 1;
  }
  this->fields.endCallback = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)callback, (int32_t)method, v4);
  this->fields.slideInPosition.fields.x = x;
  this->fields.slideInPosition.fields.y = y;
  this->fields.slideInPosition.fields.z = z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = sub_1B900B8(object___TypeInfo, 12LL);
  if ( !v22 )
    sub_1B9026C(0LL, v23);
  v26 = (System_Object_array *)v22;
  v27 = (UnityEngine_GameObject_o *)StringLiteral_20826/*"isLocal"*/;
  if ( StringLiteral_20826/*"isLocal"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_20826/*"isLocal"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_20826/*"isLocal"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v26->max_length )
    goto LABEL_57;
  v26->m_Items[0] = (Il2CppObject *)v28;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v26->m_Items, v28, v24, v25);
  v71[0] = 1;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v71, v29, v30, v31);
  v34 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_57;
  v26->m_Items[1] = v34;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[1], (int32_t)v34, v32, v33);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22606/*"position"*/;
  if ( StringLiteral_22606/*"position"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22606/*"position"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_22606/*"position"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_57;
  v26->m_Items[2] = (Il2CppObject *)v28;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[2], v28, v35, v36);
  v37 = *(_QWORD *)&this->fields.slideOutPosition.fields.x;
  v69 = this->fields.slideOutPosition.fields.z;
  v68 = v37;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v68, v38, v39, v40);
  v43 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_57;
  v26->m_Items[3] = v43;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[3], (int32_t)v43, v41, v42);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_18779/*"easeType"*/;
  if ( StringLiteral_18779/*"easeType"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_18779/*"easeType"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_18779/*"easeType"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 4 )
    goto LABEL_57;
  v26->m_Items[4] = (Il2CppObject *)v28;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[4], v28, v44, v45);
  easeTypeOut = this->fields.easeTypeOut;
  if ( easeTypeOut )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(this->fields.easeTypeOut, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
  }
  if ( v26->max_length <= 5 )
    goto LABEL_57;
  v26->m_Items[5] = (Il2CppObject *)easeTypeOut;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[5], (int32_t)easeTypeOut, v46, v47);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_23966/*"time"*/;
  if ( StringLiteral_23966/*"time"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_23966/*"time"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_23966/*"time"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 6 )
    goto LABEL_57;
  v26->m_Items[6] = (Il2CppObject *)v28;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[6], v28, v49, v50);
  slideOutTime = this->fields.slideOutTime;
  v27 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideOutTime, v51, v52, v53);
  v56 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
  }
  if ( v26->max_length <= 7 )
    goto LABEL_57;
  v26->m_Items[7] = v56;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[7], (int32_t)v56, v54, v55);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22306/*"oncomplete"*/;
  if ( StringLiteral_22306/*"oncomplete"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22306/*"oncomplete"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_22306/*"oncomplete"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 8 )
    goto LABEL_57;
  v26->m_Items[8] = (Il2CppObject *)v28;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[8], v28, v57, v58);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22293/*"onMoveComplete"*/;
  if ( StringLiteral_22293/*"onMoveComplete"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22293/*"onMoveComplete"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_22293/*"onMoveComplete"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 9 )
    goto LABEL_57;
  v26->m_Items[9] = (Il2CppObject *)v28;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[9], v28, v59, v60);
  v27 = (UnityEngine_GameObject_o *)StringLiteral_22308/*"oncompletetarget"*/;
  if ( StringLiteral_22308/*"oncompletetarget"*/ )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22308/*"oncompletetarget"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_58;
    v28 = StringLiteral_22308/*"oncompletetarget"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v26->max_length <= 0xA )
    goto LABEL_57;
  v26->m_Items[10] = (Il2CppObject *)v28;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[10], v28, v61, v62);
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v65 = (Il2CppObject *)v27;
  if ( v27 )
  {
    v27 = (UnityEngine_GameObject_o *)sub_1B9014C(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
    {
LABEL_58:
      v67 = sub_1B90290(v27);
      sub_1B90138(v67, 0LL);
    }
  }
  if ( v26->max_length <= 0xB )
LABEL_57:
    sub_1B90274(v27, v28);
  v26->m_Items[11] = v65;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v26->m_Items[11], (int32_t)v65, v63, v64);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v66 = iTween__Hash(v26, 0LL);
  iTween__MoveTo_60325424(gameObject, v66, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUISlideAnimation__StartSlideAnim_42205172(
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
  char v29; // w2
  int32_t v30; // w3
  System_Object_array *v31; // x21
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  char v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x23
  char v40; // w2
  int32_t v41; // w3
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  char v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x23
  char v48; // w2
  int32_t v49; // w3
  char v50; // w2
  int32_t v51; // w3
  char v52; // w2
  int32_t v53; // w3
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  char v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x22
  char v60; // w2
  int32_t v61; // w3
  char v62; // w2
  int32_t v63; // w3
  char v64; // w2
  int32_t v65; // w3
  char v66; // w2
  int32_t v67; // w3
  Il2CppObject *v68; // x19
  System_Collections_Hashtable_o *v69; // x0
  __int64 v70; // x0
  int v71[4]; // [xsp+0h] [xbp-70h] BYREF
  int v72; // [xsp+38h] [xbp-38h] BYREF
  char v73[4]; // [xsp+3Ch] [xbp-34h] BYREF

  z = slidePosition.fields.z;
  y = slidePosition.fields.y;
  x = slidePosition.fields.x;
  if ( (byte_4A71E89 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, callback);
    sub_1B90010(&object___TypeInfo, v11);
    sub_1B90010(&float_TypeInfo, v12);
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, v13);
    sub_1B90010(&StringLiteral_23966/*"time"*/, v14);
    sub_1B90010(&StringLiteral_22308/*"oncompletetarget"*/, v15);
    sub_1B90010(&StringLiteral_22606/*"position"*/, v16);
    sub_1B90010(&StringLiteral_22269/*"onAnimEnd"*/, v17);
    sub_1B90010(&StringLiteral_20826/*"isLocal"*/, v18);
    sub_1B90010(&StringLiteral_18779/*"easeType"*/, v19);
    sub_1B90010(&StringLiteral_22306/*"oncomplete"*/, v20);
    sub_1B90010(&iTween_TypeInfo, v21);
    byte_4A71E89 = 1;
  }
  this->fields.endCallback = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.endCallback,
    (int32_t)callback,
    isTypeIn,
    (int32_t)method);
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
  v27 = sub_1B900B8(object___TypeInfo, 12LL);
  if ( !v27 )
    sub_1B9026C(0LL, v28);
  v31 = (System_Object_array *)v27;
  v32 = (UnityEngine_GameObject_o *)StringLiteral_20826/*"isLocal"*/;
  if ( StringLiteral_20826/*"isLocal"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_20826/*"isLocal"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_20826/*"isLocal"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !v31->max_length )
    goto LABEL_62;
  v31->m_Items[0] = (Il2CppObject *)v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v31->m_Items, v33, v29, v30);
  v73[0] = 1;
  v32 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v73, v34, v35, v36);
  v39 = (Il2CppObject *)v32;
  if ( v32 )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
  }
  if ( v31->max_length <= 1 )
    goto LABEL_62;
  v31->m_Items[1] = v39;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[1], (int32_t)v39, v37, v38);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_22606/*"position"*/;
  if ( StringLiteral_22606/*"position"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22606/*"position"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_22606/*"position"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 2 )
    goto LABEL_62;
  v31->m_Items[2] = (Il2CppObject *)v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[2], v33, v40, v41);
  *(float *)v71 = x;
  *(float *)&v71[1] = y;
  *(float *)&v71[2] = z;
  v32 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, v71, v42, v43, v44);
  v47 = (Il2CppObject *)v32;
  if ( v32 )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
  }
  if ( v31->max_length <= 3 )
    goto LABEL_62;
  v31->m_Items[3] = v47;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[3], (int32_t)v47, v45, v46);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_18779/*"easeType"*/;
  if ( StringLiteral_18779/*"easeType"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_18779/*"easeType"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_18779/*"easeType"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 4 )
    goto LABEL_62;
  v31->m_Items[4] = (Il2CppObject *)v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[4], v33, v48, v49);
  if ( v24 )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(v24, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
  }
  if ( v31->max_length <= 5 )
    goto LABEL_62;
  v31->m_Items[5] = v24;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[5], (int32_t)v24, v50, v51);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_23966/*"time"*/;
  if ( StringLiteral_23966/*"time"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_23966/*"time"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_23966/*"time"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 6 )
    goto LABEL_62;
  v31->m_Items[6] = (Il2CppObject *)v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[6], v33, v52, v53);
  v72 = v25;
  v32 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v72, v54, v55, v56);
  v59 = (Il2CppObject *)v32;
  if ( v32 )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
  }
  if ( v31->max_length <= 7 )
    goto LABEL_62;
  v31->m_Items[7] = v59;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[7], (int32_t)v59, v57, v58);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_22306/*"oncomplete"*/;
  if ( StringLiteral_22306/*"oncomplete"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22306/*"oncomplete"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_22306/*"oncomplete"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 8 )
    goto LABEL_62;
  v31->m_Items[8] = (Il2CppObject *)v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[8], v33, v60, v61);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_22269/*"onAnimEnd"*/;
  if ( StringLiteral_22269/*"onAnimEnd"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22269/*"onAnimEnd"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_22269/*"onAnimEnd"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 9 )
    goto LABEL_62;
  v31->m_Items[9] = (Il2CppObject *)v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[9], v33, v62, v63);
  v32 = (UnityEngine_GameObject_o *)StringLiteral_22308/*"oncompletetarget"*/;
  if ( StringLiteral_22308/*"oncompletetarget"*/ )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22308/*"oncompletetarget"*/, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_63;
    v33 = StringLiteral_22308/*"oncompletetarget"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 0xA )
    goto LABEL_62;
  v31->m_Items[10] = (Il2CppObject *)v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[10], v33, v64, v65);
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v68 = (Il2CppObject *)v32;
  if ( v32 )
  {
    v32 = (UnityEngine_GameObject_o *)sub_1B9014C(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
    {
LABEL_63:
      v70 = sub_1B90290(v32);
      sub_1B90138(v70, 0LL);
    }
  }
  if ( v31->max_length <= 0xB )
LABEL_62:
    sub_1B90274(v32, v33);
  v31->m_Items[11] = v68;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v31->m_Items[11], (int32_t)v68, v66, v67);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v69 = iTween__Hash(v31, 0LL);
  iTween__MoveTo_60325424(gameObject, v69, 0LL);
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
    sub_1B8FFB4(p_endCallback, 0, v2, v3);
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_Object_array *v19; // x21
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x9
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_String_o *easeTypeIn; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x22
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x19
  System_Collections_Hashtable_o *v59; // x0
  __int64 v60; // x0
  float slideInTime; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v62; // [xsp+10h] [xbp-40h] BYREF
  float z; // [xsp+18h] [xbp-38h]
  char v64[4]; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A71E88 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, method);
    sub_1B90010(&object___TypeInfo, v3);
    sub_1B90010(&float_TypeInfo, v4);
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, v5);
    sub_1B90010(&StringLiteral_23966/*"time"*/, v6);
    sub_1B90010(&StringLiteral_22308/*"oncompletetarget"*/, v7);
    sub_1B90010(&StringLiteral_22606/*"position"*/, v8);
    sub_1B90010(&StringLiteral_22269/*"onAnimEnd"*/, v9);
    sub_1B90010(&StringLiteral_20826/*"isLocal"*/, v10);
    sub_1B90010(&StringLiteral_18779/*"easeType"*/, v11);
    sub_1B90010(&StringLiteral_22306/*"oncomplete"*/, v12);
    sub_1B90010(&iTween_TypeInfo, v13);
    byte_4A71E88 = 1;
  }
  EventInfoUISlideAnimation__SetPotision(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = sub_1B900B8(object___TypeInfo, 12LL);
  if ( !v15 )
    sub_1B9026C(0LL, v16);
  v19 = (System_Object_array *)v15;
  v20 = (UnityEngine_GameObject_o *)StringLiteral_20826/*"isLocal"*/;
  if ( StringLiteral_20826/*"isLocal"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_20826/*"isLocal"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_20826/*"isLocal"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v19->max_length )
    goto LABEL_57;
  v19->m_Items[0] = (Il2CppObject *)v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v19->m_Items, v21, v17, v18);
  v64[0] = 1;
  v20 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v64, v22, v23, v24);
  v27 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_57;
  v19->m_Items[1] = v27;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[1], (int32_t)v27, v25, v26);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_22606/*"position"*/;
  if ( StringLiteral_22606/*"position"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22606/*"position"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_22606/*"position"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_57;
  v19->m_Items[2] = (Il2CppObject *)v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[2], v21, v28, v29);
  v30 = *(_QWORD *)&this->fields.slideInPosition.fields.x;
  z = this->fields.slideInPosition.fields.z;
  v62 = v30;
  v20 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v62, v31, v32, v33);
  v36 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_57;
  v19->m_Items[3] = v36;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[3], (int32_t)v36, v34, v35);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_18779/*"easeType"*/;
  if ( StringLiteral_18779/*"easeType"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_18779/*"easeType"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_18779/*"easeType"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 4 )
    goto LABEL_57;
  v19->m_Items[4] = (Il2CppObject *)v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[4], v21, v37, v38);
  easeTypeIn = this->fields.easeTypeIn;
  if ( easeTypeIn )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(this->fields.easeTypeIn, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
  }
  if ( v19->max_length <= 5 )
    goto LABEL_57;
  v19->m_Items[5] = (Il2CppObject *)easeTypeIn;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[5], (int32_t)easeTypeIn, v39, v40);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_23966/*"time"*/;
  if ( StringLiteral_23966/*"time"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_23966/*"time"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_23966/*"time"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 6 )
    goto LABEL_57;
  v19->m_Items[6] = (Il2CppObject *)v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[6], v21, v42, v43);
  slideInTime = this->fields.slideInTime;
  v20 = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &slideInTime, v44, v45, v46);
  v49 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
  }
  if ( v19->max_length <= 7 )
    goto LABEL_57;
  v19->m_Items[7] = v49;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[7], (int32_t)v49, v47, v48);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_22306/*"oncomplete"*/;
  if ( StringLiteral_22306/*"oncomplete"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22306/*"oncomplete"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_22306/*"oncomplete"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 8 )
    goto LABEL_57;
  v19->m_Items[8] = (Il2CppObject *)v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[8], v21, v50, v51);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_22269/*"onAnimEnd"*/;
  if ( StringLiteral_22269/*"onAnimEnd"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22269/*"onAnimEnd"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_22269/*"onAnimEnd"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 9 )
    goto LABEL_57;
  v19->m_Items[9] = (Il2CppObject *)v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[9], v21, v52, v53);
  v20 = (UnityEngine_GameObject_o *)StringLiteral_22308/*"oncompletetarget"*/;
  if ( StringLiteral_22308/*"oncompletetarget"*/ )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(StringLiteral_22308/*"oncompletetarget"*/, v19->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_58;
    v21 = StringLiteral_22308/*"oncompletetarget"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 0xA )
    goto LABEL_57;
  v19->m_Items[10] = (Il2CppObject *)v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[10], v21, v54, v55);
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v58 = (Il2CppObject *)v20;
  if ( v20 )
  {
    v20 = (UnityEngine_GameObject_o *)sub_1B9014C(v20, v19->obj.klass->_1.element_class);
    if ( !v20 )
    {
LABEL_58:
      v60 = sub_1B90290(v20);
      sub_1B90138(v60, 0LL);
    }
  }
  if ( v19->max_length <= 0xB )
LABEL_57:
    sub_1B90274(v20, v21);
  v19->m_Items[11] = v58;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->m_Items[11], (int32_t)v58, v56, v57);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v59 = iTween__Hash(v19, 0LL);
  iTween__MoveTo_60325424(gameObject, v59, 0LL);
}