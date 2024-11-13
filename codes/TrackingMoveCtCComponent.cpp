void __fastcall TrackingMoveCtCComponent___ctor(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
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
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  bool v15; // w22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v31; // d0
  float v32; // s1

  this->fields.before = a;
  z = d.fields.z;
  y = d.fields.y;
  x = d.fields.x;
  v15 = isLate;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.before,
    (int64_t)a,
    (int64_t)b,
    (int32_t)c,
    (System_String_o *)isLate,
    (BattleSetupInfo_o *)method,
    v7,
    v8);
  this->fields.after = b;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.after, (int64_t)b, v16, v17, v18, v19, v20, v21);
  this->fields.targetObject = c;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetObject, (int64_t)c, v22, v23, v24, v25, v26, v27);
  this->fields.addpos.fields.x = x;
  this->fields.addpos.fields.y = y;
  this->fields.addpos.fields.z = z;
  this->fields.isLateUpdate = v15;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v28, v29);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v31 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v32 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.offset2D.fields.condition = 0LL;
  *(_QWORD *)&this->fields.offset2D.fields.offset.fields.x = v31;
  this->fields.offset2D.fields.offset.fields.z = v32;
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
  __int64 v2; // x2
  UnityEngine_Object_o *targetObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Camera_o *before; // x20
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s10
  float v16; // s9
  float aspect; // s0
  float v18; // s11
  float v19; // s0
  int32_t condition; // w8
  float v21; // s10
  float x; // s8
  float y; // s9
  float z; // s10
  float conditionValue; // s14
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s11
  float v30; // s12
  float v31; // s13
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19473 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19473 = 1;
  }
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetObject, 0LL, 0LL) )
  {
    transform = this->fields.targetObject;
    if ( !transform )
      goto LABEL_24;
    before = this->fields.before;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !before )
      goto LABEL_24;
    v32.fields.z = v10 + this->fields.addpos.fields.z;
    v32.fields.y = v9 + this->fields.addpos.fields.y;
    v32.fields.x = v8 + this->fields.addpos.fields.x;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Camera__WorldToViewportPoint_69960456(before, v32, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.before;
    if ( !transform )
      goto LABEL_24;
    v14 = v11;
    v15 = v12;
    v16 = v13;
    aspect = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.after;
    if ( !transform )
      goto LABEL_24;
    v18 = aspect;
    v19 = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0LL);
    condition = this->fields.offset2D.fields.condition;
    v21 = (float)((float)((float)(v15 + -0.5) / v18) * v19) + 0.5;
    if ( condition == 2 )
    {
      transform = (UnityEngine_GameObject_o *)this->fields.before;
      if ( !transform )
        goto LABEL_24;
      conditionValue = this->fields.offset2D.fields.conditionValue;
      transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
      if ( !transform )
        goto LABEL_24;
      *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      transform = this->fields.targetObject;
      if ( !transform )
        goto LABEL_24;
      v29 = v26;
      v30 = v27;
      v31 = v28;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_24;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      if ( (float)(conditionValue * conditionValue) >= (float)((float)((float)(v31 - position.fields.z)
                                                                     * (float)(v31 - position.fields.z))
                                                             + (float)((float)((float)(v29 - position.fields.x)
                                                                             * (float)(v29 - position.fields.x))
                                                                     + (float)((float)(v30 - position.fields.y)
                                                                             * (float)(v30 - position.fields.y)))) )
        goto LABEL_14;
    }
    else if ( condition != 1 )
    {
LABEL_14:
      transform = (UnityEngine_GameObject_o *)this->fields.after;
      if ( transform )
      {
        v33.fields.x = v14;
        v33.fields.y = v21;
        v33.fields.z = v16;
        v34 = UnityEngine_Camera__ViewportToWorldPoint_69960464((UnityEngine_Camera_o *)transform, v33, 0LL);
        x = v34.fields.x;
        y = v34.fields.y;
        z = v34.fields.z;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
        if ( transform )
        {
          v35.fields.x = x;
          v35.fields.y = y;
          v35.fields.z = z;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v35, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1BCAA3C(transform, v5);
    }
    v14 = v14 + this->fields.offset2D.fields.offset.fields.x;
    v21 = v21 + this->fields.offset2D.fields.offset.fields.y;
    v16 = v16 + this->fields.offset2D.fields.offset.fields.z;
    goto LABEL_14;
  }
}