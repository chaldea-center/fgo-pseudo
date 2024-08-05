void __fastcall TrackingMoveCtCComponent___ctor(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9201 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.addpos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.addpos.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TrackingMoveCtCComponent__LateUpdate(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.updateFlg && this->fields.isLateUpdate )
    TrackingMoveCtCComponent__upDatePos(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TrackingMoveCtCComponent__Set(
        TrackingMoveCtCComponent_o *this,
        UnityEngine_Camera_o *a,
        UnityEngine_Camera_o *b,
        UnityEngine_GameObject_o *c,
        UnityEngine_Vector3_o d,
        bool isLate,
        const MethodInfo *method)
{
  TrackingMoveCtCComponent_o *v7; // x21
  float z; // s8
  float y; // s9
  float x; // s10
  bool v13; // w22
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  v7 = this;
  this->fields.before = a;
  z = d.fields.z;
  y = d.fields.y;
  x = d.fields.x;
  v13 = isLate;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.before, (int32_t)a, (int32_t)b, (int32_t)c);
  v7->fields.after = b;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v7->fields.after, (int32_t)b, v14, v15);
  v7->fields.targetObject = c;
  v7 = (TrackingMoveCtCComponent_o *)((char *)v7 + 48);
  sub_1B64814((ServantStatusBattleListViewItem_o *)v7, (int32_t)c, v16, v17);
  *(float *)&v7->monitor = x;
  *((float *)&v7->monitor + 1) = y;
  *(float *)&v7->fields.m_CachedPtr = z;
  *((_BYTE *)&v7->fields.UnityEngine_Behaviour_Fields + 5) = v13;
}


void __fastcall TrackingMoveCtCComponent__Update(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.updateFlg && !this->fields.isLateUpdate )
    TrackingMoveCtCComponent__upDatePos(this, method);
}


void __fastcall TrackingMoveCtCComponent__startAct(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  this->fields.updateFlg = 1;
  TrackingMoveCtCComponent__upDatePos(this, method);
}


void __fastcall TrackingMoveCtCComponent__stopAct(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  this->fields.updateFlg = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TrackingMoveCtCComponent__upDatePos(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Camera_o *before; // x20
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s10
  float v15; // s9
  float aspect; // s0
  float v17; // s11
  float v18; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A0159C & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_4A0159C = 1;
  }
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetObject, 0LL, 0LL) )
  {
    transform = this->fields.targetObject;
    if ( !transform )
      goto LABEL_15;
    before = this->fields.before;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_15;
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !before )
      goto LABEL_15;
    v22.fields.z = v9 + this->fields.addpos.fields.z;
    v22.fields.y = v8 + this->fields.addpos.fields.y;
    v22.fields.x = v7 + this->fields.addpos.fields.x;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__WorldToViewportPoint_68942216(before, v22, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.before;
    if ( !transform )
      goto LABEL_15;
    v13 = v10;
    v14 = v11;
    v15 = v12;
    aspect = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.after;
    if ( !transform )
      goto LABEL_15;
    v17 = aspect;
    v18 = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.after;
    if ( !transform )
      goto LABEL_15;
    v23.fields.y = (float)((float)((float)(v14 + -0.5) / v17) * v18) + 0.5;
    v23.fields.x = v13;
    v23.fields.z = v15;
    v24 = UnityEngine_Camera__ViewportToWorldPoint_68942224((UnityEngine_Camera_o *)transform, v23, 0LL);
    x = v24.fields.x;
    y = v24.fields.y;
    z = v24.fields.z;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
LABEL_15:
      sub_1B64ACC(transform, v4);
    v25.fields.x = x;
    v25.fields.y = y;
    v25.fields.z = z;
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v25, 0LL);
  }
}