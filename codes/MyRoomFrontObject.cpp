void MyRoomFrontObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  float v4; // s0
  struct MyRoomFrontObject_StaticFields *static_fields; // x8

  if ( (byte_596B4D8 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&MyRoomFrontObject_TypeInfo);
    byte_596B4D8 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  v4 = (float)-v3->static_fields->WIDTH_21_9;
  static_fields = MyRoomFrontObject_TypeInfo->static_fields;
  static_fields->DefaultFrameOutMoveValue.fields.y = 0.0;
  static_fields->DefaultFrameOutMoveValue.fields.z = 0.0;
  static_fields->DefaultFrameOutMoveValue.fields.x = v4;
  MyRoomFrontObject_TypeInfo->static_fields->DefaultFrameInOutDuration = 0.3;
}


void MyRoomFrontObject___ctor(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomFrontObject_c *v4; // x0
  struct MyRoomFrontObject_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v7; // x8

  if ( (byte_596B4D7 & 1) == 0 )
  {
    sub_2213A60(&MyRoomFrontObject_TypeInfo);
    byte_596B4D7 = 1;
  }
  v4 = MyRoomFrontObject_TypeInfo;
  if ( !*(&MyRoomFrontObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomFrontObject_TypeInfo, method, v2);
    v4 = MyRoomFrontObject_TypeInfo;
  }
  static_fields = v4->static_fields;
  z = static_fields->DefaultFrameOutMoveValue.fields.z;
  v7 = *(_QWORD *)&static_fields->DefaultFrameOutMoveValue.fields.x;
  this->fields.frameOutMoveValue.fields.z = z;
  *(_QWORD *)&this->fields.frameOutMoveValue.fields.x = v7;
  this->fields.frameInOutDuration = v4->static_fields->DefaultFrameInOutDuration;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomFrontObject__Awake(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float32x2_t v4; // d9
  float z; // s8
  float32x2_t *static_fields; // x8
  float32x2_t v7; // d0
  MyRoomFrontObject_c *v8; // x0
  struct MyRoomFrontObject_StaticFields *v9; // x8
  float v10; // w9
  __int64 v11; // x8
  MyRoomFrontObject_c *v12; // x0

  if ( (byte_596B4D6 & 1) == 0 )
  {
    sub_2213A60(&MyRoomFrontObject_TypeInfo);
    byte_596B4D6 = 1;
  }
  v4.n64_u64[0] = *(unsigned __int64 *)&this->fields.frameOutMoveValue.fields.x;
  z = this->fields.frameOutMoveValue.fields.z;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
  v7.n64_u64[0] = vsub_f32(v4, (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
  if ( (float)((float)((float)(z - static_fields[1].n64_f32[0]) * (float)(z - static_fields[1].n64_f32[0]))
             + vaddv_f32(vmul_f32(v7, v7))) < 1.0e-10 )
  {
    v8 = MyRoomFrontObject_TypeInfo;
    if ( !*(&MyRoomFrontObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomFrontObject_TypeInfo, method, v2);
      v8 = MyRoomFrontObject_TypeInfo;
    }
    v9 = v8->static_fields;
    v10 = v9->DefaultFrameOutMoveValue.fields.z;
    v11 = *(_QWORD *)&v9->DefaultFrameOutMoveValue.fields.x;
    this->fields.frameOutMoveValue.fields.z = v10;
    *(_QWORD *)&this->fields.frameOutMoveValue.fields.x = v11;
  }
  if ( this->fields.frameInOutDuration <= 0.0 )
  {
    v12 = MyRoomFrontObject_TypeInfo;
    if ( !*(&MyRoomFrontObject_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomFrontObject_TypeInfo, method, v2);
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
  __int64 v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  this->fields._Id_k__BackingField = id;
  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v8);
  v9.fields.y = y;
  v9.fields.z = z;
  v9.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v9, 0);
}


float MyRoomFrontObject__get_FrameInOutDuration(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  return this->fields.frameInOutDuration;
}


UnityEngine_Vector3_o MyRoomFrontObject__get_FrameOutMoveValue(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.frameOutMoveValue.fields.x;
  result.fields.y = this->fields.frameOutMoveValue.fields.y;
  result.fields.z = this->fields.frameOutMoveValue.fields.z;
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