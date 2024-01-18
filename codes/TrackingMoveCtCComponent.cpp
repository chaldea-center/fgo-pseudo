void __fastcall TrackingMoveCtCComponent___ctor(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  this->fields.addpos = UnityEngine_Vector3__get_zero(0LL);
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
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  TrackingMoveCtCComponent_o *v9; // x22
  float z; // s8
  float y; // s9
  float x; // s10
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  v9 = this;
  this->fields.before = a;
  z = d.fields.z;
  y = d.fields.y;
  x = d.fields.x;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.before,
    (System_Int32_array **)a,
    (System_String_array **)b,
    (System_String_array **)c,
    (System_Boolean_array **)isLate,
    (System_Int32_array **)method,
    v7,
    v8);
  v9->fields.after = b;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.after, (System_Int32_array **)b, v16, v17, v18, v19, v20, v21);
  v9->fields.targetObject = c;
  v9 = (TrackingMoveCtCComponent_o *)((char *)v9 + 40);
  sub_B2C2F8((BattleServantConfConponent_o *)v9, (System_Int32_array **)c, v22, v23, v24, v25, v26, v27);
  *(float *)&v9->monitor = x;
  *((float *)&v9->monitor + 1) = y;
  *(float *)&v9->fields.m_CachedPtr = z;
  *((_BYTE *)&v9->fields.UnityEngine_MonoBehaviour_Fields + 5) = isLate;
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

  if ( (byte_418996A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418996A = 1;
  }
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetObject, 0LL, 0LL) )
  {
    transform = this->fields.targetObject;
    if ( !transform )
      goto LABEL_16;
    before = this->fields.before;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_16;
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !before )
      goto LABEL_16;
    v22.fields.x = v7 + this->fields.addpos.fields.x;
    v22.fields.y = v8 + this->fields.addpos.fields.y;
    v22.fields.z = v9 + this->fields.addpos.fields.z;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__WorldToViewportPoint_40630724(before, v22, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.before;
    if ( !transform )
      goto LABEL_16;
    v13 = v10;
    v14 = v11;
    v15 = v12;
    aspect = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.after;
    if ( !transform )
      goto LABEL_16;
    v17 = aspect;
    v18 = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.after;
    if ( !transform )
      goto LABEL_16;
    v23.fields.y = (float)((float)((float)(v14 + -0.5) / v17) * v18) + 0.5;
    v23.fields.x = v13;
    v23.fields.z = v15;
    v24 = UnityEngine_Camera__ViewportToWorldPoint_40630732((UnityEngine_Camera_o *)transform, v23, 0LL);
    x = v24.fields.x;
    y = v24.fields.y;
    z = v24.fields.z;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
LABEL_16:
      sub_B2C434(transform, v4);
    v25.fields.x = x;
    v25.fields.y = y;
    v25.fields.z = z;
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v25, 0LL);
  }
}