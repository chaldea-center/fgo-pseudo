void MyRoomFrontObject___cctor(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  struct MyRoomFrontObject_StaticFields *static_fields; // x9

  if ( (byte_4C3DF43 & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&MyRoomFrontObject_TypeInfo);
    byte_4C3DF43 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  static_fields = MyRoomFrontObject_TypeInfo->static_fields;
  static_fields->DefaultFrameOutMoveValue.fields.x = (float)-v1->static_fields->WIDTH_21_9;
  static_fields->DefaultFrameOutMoveValue.fields.y = 0.0;
  static_fields->DefaultFrameOutMoveValue.fields.z = 0.0;
  MyRoomFrontObject_TypeInfo->static_fields->DefaultFrameInOutDuration = 0.3;
}


void MyRoomFrontObject___ctor(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  MyRoomFrontObject_c *v3; // x0
  struct MyRoomFrontObject_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v6; // x8

  if ( (byte_4C3DF42 & 1) == 0 )
  {
    sub_1C37058(&MyRoomFrontObject_TypeInfo);
    byte_4C3DF42 = 1;
  }
  v3 = MyRoomFrontObject_TypeInfo;
  if ( !MyRoomFrontObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomFrontObject_TypeInfo);
    v3 = MyRoomFrontObject_TypeInfo;
  }
  static_fields = v3->static_fields;
  z = static_fields->DefaultFrameOutMoveValue.fields.z;
  v6 = *(_QWORD *)&static_fields->DefaultFrameOutMoveValue.fields.x;
  this->fields.frameOutMoveValue.fields.z = z;
  *(_QWORD *)&this->fields.frameOutMoveValue.fields.x = v6;
  this->fields.frameInOutDuration = v3->static_fields->DefaultFrameInOutDuration;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomFrontObject__Awake(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  float x; // s8
  float32x2_t v4; // d9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v6; // d1
  unsigned __int64 v7; // d1
  MyRoomFrontObject_c *v8; // x0
  struct MyRoomFrontObject_StaticFields *v9; // x8
  float z; // w9
  __int64 v11; // x8
  MyRoomFrontObject_c *v12; // x0

  if ( (byte_4C3DF41 & 1) == 0 )
  {
    sub_1C37058(&MyRoomFrontObject_TypeInfo);
    byte_4C3DF41 = 1;
  }
  x = this->fields.frameOutMoveValue.fields.x;
  v4.n64_u64[0] = *(unsigned __int64 *)&this->fields.frameOutMoveValue.fields.y;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v6.n64_u64[0] = vsub_f32(v4, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
  v7 = vmul_f32(v6, v6).n64_u64[0];
  if ( (float)(*((float *)&v7 + 1)
             + (float)((float)((float)(x - static_fields->zeroVector.fields.x)
                             * (float)(x - static_fields->zeroVector.fields.x))
                     + *(float *)&v7)) < 1.0e-10 )
  {
    v8 = MyRoomFrontObject_TypeInfo;
    if ( !MyRoomFrontObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomFrontObject_TypeInfo);
      v8 = MyRoomFrontObject_TypeInfo;
    }
    v9 = v8->static_fields;
    z = v9->DefaultFrameOutMoveValue.fields.z;
    v11 = *(_QWORD *)&v9->DefaultFrameOutMoveValue.fields.x;
    this->fields.frameOutMoveValue.fields.z = z;
    *(_QWORD *)&this->fields.frameOutMoveValue.fields.x = v11;
  }
  if ( this->fields.frameInOutDuration <= 0.0 )
  {
    v12 = MyRoomFrontObject_TypeInfo;
    if ( !MyRoomFrontObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomFrontObject_TypeInfo);
      v12 = MyRoomFrontObject_TypeInfo;
    }
    this->fields.frameInOutDuration = v12->static_fields->DefaultFrameInOutDuration;
  }
}


void MyRoomFrontObject__Setup(
        MyRoomFrontObject_o *this,
        int32_t id,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  this->fields._Id_k__BackingField = id;
  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v8, 0);
}


float MyRoomFrontObject__get_FrameInOutDuration(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  return this->fields.frameInOutDuration;
}


UnityEngine_Vector3_o MyRoomFrontObject__get_FrameOutMoveValue(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.frameOutMoveValue.fields.x;
  y = this->fields.frameOutMoveValue.fields.y;
  z = this->fields.frameOutMoveValue.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t MyRoomFrontObject__get_Id(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  return this->fields._Id_k__BackingField;
}


void MyRoomFrontObject__set_Id(MyRoomFrontObject_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Id_k__BackingField = value;
}