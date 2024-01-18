void __fastcall MyRoomFrontObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  struct MyRoomFrontObject_StaticFields *static_fields; // x10

  if ( (byte_4187481 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, v1);
    sub_B2C35C(&MyRoomFrontObject_TypeInfo, v2);
    byte_4187481 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  static_fields = MyRoomFrontObject_TypeInfo->static_fields;
  static_fields->DefaultFrameOutMoveValue.fields.x = (float)-v3->static_fields->WIDTH_21_9;
  static_fields->DefaultFrameOutMoveValue.fields.y = 0.0;
  static_fields->DefaultFrameOutMoveValue.fields.z = 0.0;
  MyRoomFrontObject_TypeInfo->static_fields->DefaultFrameInOutDuration = 0.3;
}


void __fastcall MyRoomFrontObject___ctor(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  MyRoomFrontObject_c *v3; // x0
  struct MyRoomFrontObject_StaticFields *static_fields; // x8
  __int64 v5; // x9

  if ( (byte_4187480 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomFrontObject_TypeInfo, method);
    byte_4187480 = 1;
  }
  v3 = MyRoomFrontObject_TypeInfo;
  if ( (BYTE3(MyRoomFrontObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomFrontObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomFrontObject_TypeInfo);
    v3 = MyRoomFrontObject_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = *(_QWORD *)&static_fields->DefaultFrameOutMoveValue.fields.x;
  *(float *)&static_fields = static_fields->DefaultFrameOutMoveValue.fields.z;
  *(_QWORD *)&this->fields.frameOutMoveValue.fields.y = v5;
  LODWORD(this->fields.frameInOutDuration) = (_DWORD)static_fields;
  this->fields._Id_k__BackingField = LODWORD(v3->static_fields->DefaultFrameInOutDuration);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomFrontObject__Awake(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  float y; // s8
  float z; // s9
  float frameInOutDuration; // s10
  MyRoomFrontObject_c *v6; // x0
  struct MyRoomFrontObject_StaticFields *static_fields; // x8
  __int64 v8; // x9
  MyRoomFrontObject_c *v9; // x0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_418747F & 1) == 0 )
  {
    sub_B2C35C(&MyRoomFrontObject_TypeInfo, method);
    byte_418747F = 1;
  }
  y = this->fields.frameOutMoveValue.fields.y;
  z = this->fields.frameOutMoveValue.fields.z;
  frameInOutDuration = this->fields.frameInOutDuration;
  zero = UnityEngine_Vector3__get_zero(0LL);
  v10.fields.x = y;
  v10.fields.y = z;
  v10.fields.z = frameInOutDuration;
  if ( UnityEngine_Vector3__op_Equality(v10, zero, 0LL) )
  {
    v6 = MyRoomFrontObject_TypeInfo;
    if ( (BYTE3(MyRoomFrontObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomFrontObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomFrontObject_TypeInfo);
      v6 = MyRoomFrontObject_TypeInfo;
    }
    static_fields = v6->static_fields;
    v8 = *(_QWORD *)&static_fields->DefaultFrameOutMoveValue.fields.x;
    *(float *)&static_fields = static_fields->DefaultFrameOutMoveValue.fields.z;
    *(_QWORD *)&this->fields.frameOutMoveValue.fields.y = v8;
    LODWORD(this->fields.frameInOutDuration) = (_DWORD)static_fields;
  }
  if ( *(float *)&this->fields._Id_k__BackingField <= 0.0 )
  {
    v9 = MyRoomFrontObject_TypeInfo;
    if ( (BYTE3(MyRoomFrontObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomFrontObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomFrontObject_TypeInfo);
      v9 = MyRoomFrontObject_TypeInfo;
    }
    this->fields._Id_k__BackingField = LODWORD(v9->static_fields->DefaultFrameInOutDuration);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObject__Setup(
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

  LODWORD(this[1].klass) = id;
  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v8);
  v9.fields.y = y;
  v9.fields.z = z;
  v9.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v9, 0LL);
}


float __fastcall MyRoomFrontObject__get_FrameInOutDuration(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  return *(float *)&this->fields._Id_k__BackingField;
}


UnityEngine_Vector3_o __fastcall MyRoomFrontObject__get_FrameOutMoveValue(
        MyRoomFrontObject_o *this,
        const MethodInfo *method)
{
  float y; // s0
  float z; // s1
  float frameInOutDuration; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = this->fields.frameOutMoveValue.fields.y;
  z = this->fields.frameOutMoveValue.fields.z;
  frameInOutDuration = this->fields.frameInOutDuration;
  result.fields.z = frameInOutDuration;
  result.fields.y = z;
  result.fields.x = y;
  return result;
}


int32_t __fastcall MyRoomFrontObject__get_Id(MyRoomFrontObject_o *this, const MethodInfo *method)
{
  return (int32_t)this[1].klass;
}


void __fastcall MyRoomFrontObject__set_Id(MyRoomFrontObject_o *this, int32_t value, const MethodInfo *method)
{
  LODWORD(this[1].klass) = value;
}